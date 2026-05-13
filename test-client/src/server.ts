import {
  OPCUAClient,
  MessageSecurityMode,
  SecurityPolicy,
  ClientSession,
  ClientSubscription,
  AttributeIds,
  TimestampsToReturn,
  MonitoringParametersOptions,
  DataValue,
  BrowseDescriptionLike,
} from "node-opcua";
import { WebSocketServer, WebSocket } from "ws";

const ENDPOINT_URL = "opc.tcp://localhost:5000";
const NAMESPACE_URI = "urn:opc40700:surface-technology";
const WS_PORT = 3001;

const MONITORED_VARIABLES = [
  "CurrentTemperature",
  "TargetTemperature",
  "TC_HeatingPower",
  "TC_ControllerState",
  "CurrentPressure",
  "TargetPressure",
  "PC_ValvePosition",
  "PC_ControllerState",
  "CurrentFlowRate",
  "TargetFlowRate",
  "FC_PumpSpeed",
  "FC_ControllerState",
  "CoatingThickness",
  "TargetThickness",
  "SprayPressure",
  "ConveyorSpeed",
  "CU_UnitState",
  "CurrentJobId",
  "JobStatus",
  "PartsProcessed",
  "TotalParts",
  "JobProgress",
  "Manufacturer",
  "Model",
  "SerialNumber",
  "SoftwareVersion",
  "SystemState",
];

interface TreeNode {
  name: string;
  nodeId: string;
  nodeClass: number; // 1 = Object, 2 = Variable
  children?: TreeNode[];
  value?: unknown;
}

async function browseTreeRecursive(
  session: ClientSession,
  nodeId: string
): Promise<TreeNode[]> {
  const browseResult = await session.browse(nodeId as BrowseDescriptionLike);
  if (!browseResult.references) return [];

  const nodes: TreeNode[] = [];
  for (const ref of browseResult.references) {
    const node: TreeNode = {
      name: ref.browseName.name ?? ref.browseName.toString(),
      nodeId: ref.nodeId.toString(),
      nodeClass: ref.nodeClass as number,
    };

    if (ref.nodeClass === 1) {
      node.children = await browseTreeRecursive(session, ref.nodeId.toString());
    } else if (ref.nodeClass === 2) {
      try {
        const dv = await session.read({
          nodeId: ref.nodeId.toString(),
          attributeId: AttributeIds.Value,
        });
        node.value = dv.value?.value ?? null;
      } catch {
        node.value = null;
      }
    }

    nodes.push(node);
  }
  return nodes;
}

async function handleClient(ws: WebSocket): Promise<void> {
  console.log("[WS] Client connected");

  const client = OPCUAClient.create({
    applicationName: "OPC40700-WebBridge",
    connectionStrategy: {
      maxRetry: 2,
      initialDelay: 1000,
      maxDelay: 5000,
    },
    securityMode: MessageSecurityMode.None,
    securityPolicy: SecurityPolicy.None,
    endpointMustExist: false,
  });

  let session: ClientSession | null = null;
  let subscription: ClientSubscription | null = null;

  const cleanup = async () => {
    console.log("[WS] Cleaning up OPC UA session");
    try {
      if (subscription) {
        await subscription.terminate();
        subscription = null;
      }
      if (session) {
        await session.close();
        session = null;
      }
      await client.disconnect();
    } catch (err) {
      console.error("[WS] Cleanup error:", err);
    }
  };

  ws.on("close", () => {
    console.log("[WS] Client disconnected");
    cleanup();
  });

  ws.on("error", (err) => {
    console.error("[WS] WebSocket error:", err);
    cleanup();
  });

  try {
    await client.connect(ENDPOINT_URL);
    session = await client.createSession();

    const nsArray = await session.readNamespaceArray();
    const nsIndex = nsArray.indexOf(NAMESPACE_URI);
    if (nsIndex < 0) {
      ws.send(JSON.stringify({ type: "error", data: `Namespace '${NAMESPACE_URI}' not found` }));
      await cleanup();
      return;
    }

    // Browse the SurfaceTechnologySystem tree
    const objectsFolder = "ns=0;i=85";
    const browseResult = await session.browse(objectsFolder as BrowseDescriptionLike);
    const stFolder = browseResult.references?.find(
      (r) => r.browseName.name === "SurfaceTechnologySystem"
    );

    if (!stFolder) {
      ws.send(JSON.stringify({ type: "error", data: "SurfaceTechnologySystem not found" }));
      await cleanup();
      return;
    }

    const children = await browseTreeRecursive(session, stFolder.nodeId.toString());
    const tree: TreeNode = {
      name: "SurfaceTechnologySystem",
      nodeId: stFolder.nodeId.toString(),
      nodeClass: 1,
      children,
    };

    if (ws.readyState === WebSocket.OPEN) {
      ws.send(JSON.stringify({ type: "tree", data: tree }));
    }

    // Subscribe to monitored variables
    subscription = await session.createSubscription2({
      requestedPublishingInterval: 500,
      requestedMaxKeepAliveCount: 10,
      requestedLifetimeCount: 100,
      maxNotificationsPerPublish: 50,
      publishingEnabled: true,
      priority: 1,
    });

    const monitoringParams: MonitoringParametersOptions = {
      samplingInterval: 500,
      discardOldest: true,
      queueSize: 10,
    };

    for (const varName of MONITORED_VARIABLES) {
      const itemToMonitor = {
        nodeId: `ns=${nsIndex};s=${varName}`,
        attributeId: AttributeIds.Value,
      };

      const monitoredItem = await subscription.monitor(
        itemToMonitor,
        monitoringParams,
        TimestampsToReturn.Both
      );

      monitoredItem.on("changed", (dataValue: DataValue) => {
        if (ws.readyState !== WebSocket.OPEN) return;
        const val = dataValue.value?.value;
        const ts = dataValue.sourceTimestamp?.toISOString() ?? new Date().toISOString();
        ws.send(
          JSON.stringify({
            type: "update",
            name: varName,
            value: val,
            timestamp: ts,
          })
        );
      });
    }

    console.log(`[WS] Subscribed to ${MONITORED_VARIABLES.length} variables`);
  } catch (err: unknown) {
    const msg = err instanceof Error ? err.message : String(err);
    console.error("[WS] OPC UA error:", msg);
    if (ws.readyState === WebSocket.OPEN) {
      ws.send(JSON.stringify({ type: "error", data: msg }));
    }
    await cleanup();
  }
}

const wss = new WebSocketServer({ port: WS_PORT });
console.log(`[WS] WebSocket bridge listening on ws://localhost:${WS_PORT}`);

wss.on("connection", (ws) => {
  handleClient(ws);
});

process.on("SIGINT", () => {
  console.log("\n[WS] Shutting down...");
  wss.close();
  process.exit(0);
});
