import {
  OPCUAClient,
  MessageSecurityMode,
  SecurityPolicy,
  ClientSession,
  ClientSubscription,
  AttributeIds,
  TimestampsToReturn,
  MonitoringParametersOptions,
  ReadValueIdOptions,
  DataValue,
  BrowseDescriptionLike,
  ReferenceDescription,
  StatusCodes,
} from "node-opcua";

const ENDPOINT_URL = "opc.tcp://localhost:5000";
const NAMESPACE_URI = "urn:opc40700:surface-technology";

// Variables to subscribe to for live monitoring
const MONITORED_VARIABLES = [
  "CurrentTemperature",
  "CurrentPressure",
  "CurrentFlowRate",
  "CoatingThickness",
  "SprayPressure",
  "ConveyorSpeed",
];

// All readable variables (static + dynamic)
const ALL_VARIABLES = [
  "Manufacturer",
  "Model",
  "SerialNumber",
  "SoftwareVersion",
  "SystemState",
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
];

// ── Helpers ──────────────────────────────────────────────────────────

function header(title: string) {
  const line = "═".repeat(60);
  console.log(`\n${line}`);
  console.log(`  ${title}`);
  console.log(`${line}`);
}

function sleep(ms: number): Promise<void> {
  return new Promise((resolve) => setTimeout(resolve, ms));
}

// ── Discovery ────────────────────────────────────────────────────────

async function discoverEndpoints(): Promise<void> {
  header("PHASE 1: Discovery");

  // FindServers
  console.log(`\nFindServers on ${ENDPOINT_URL} ...`);
  const discovery = OPCUAClient.create({
    endpointMustExist: false,
  });
  await discovery.connect(ENDPOINT_URL);
  const servers = await discovery.findServers();
  for (const server of servers) {
    console.log(`  Server: ${server.applicationName?.text}`);
    console.log(`    Application URI : ${server.applicationUri}`);
    console.log(`    Product URI     : ${server.productUri}`);
    console.log(`    Discovery URLs  : ${server.discoveryUrls?.join(", ")}`);
  }
  await discovery.disconnect();

  // GetEndpoints
  console.log(`\nGetEndpoints on ${ENDPOINT_URL} ...`);
  const endpoints = await OPCUAClient.createSession({
    endpointMustExist: false,
    endpoint_must_exist: false,
    connectionStrategy: { maxRetry: 0 },
  } as any).catch(() => null);

  // Use a simpler approach for endpoint enumeration
  const client2 = OPCUAClient.create({ endpointMustExist: false });
  await client2.connect(ENDPOINT_URL);
  const endpointDescriptions = await client2.getEndpoints();
  console.log(`  Found ${endpointDescriptions.length} endpoint(s):`);
  for (const ep of endpointDescriptions) {
    console.log(`  ─ ${ep.endpointUrl}`);
    console.log(`    Security Mode   : ${MessageSecurityMode[ep.securityMode]}`);
    console.log(`    Security Policy : ${ep.securityPolicyUri}`);
    const tokens = ep.userIdentityTokens ?? [];
    const tokenTypes = tokens.map((t) => t.policyId).join(", ");
    console.log(`    User Tokens     : ${tokenTypes}`);
  }
  await client2.disconnect();
}

// ── Browse ───────────────────────────────────────────────────────────

async function browseTree(
  session: ClientSession,
  nodeId: string,
  indent: number = 0
): Promise<void> {
  const browseResult = await session.browse(nodeId as BrowseDescriptionLike);

  if (!browseResult.references) return;

  for (const ref of browseResult.references) {
    const kind = ref.nodeClass === 1 ? "📁" : ref.nodeClass === 2 ? "📊" : "🔹";
    const pad = "  ".repeat(indent);
    console.log(`${pad}${kind} ${ref.browseName.toString()}  (${ref.nodeId.toString()})`);
    // Recurse into Object nodes (nodeClass 1)
    if (ref.nodeClass === 1) {
      await browseTree(session, ref.nodeId.toString(), indent + 1);
    }
  }
}

async function browseAddressSpace(session: ClientSession): Promise<void> {
  header("PHASE 2: Browse Address Space");

  // Find the SurfaceTechnologySystem folder under Objects
  const objectsFolder = "ns=0;i=85"; // Objects folder
  const browseResult = await session.browse(objectsFolder as BrowseDescriptionLike);

  const stFolder = browseResult.references?.find(
    (r) => r.browseName.name === "SurfaceTechnologySystem"
  );

  if (!stFolder) {
    console.log("  ⚠ SurfaceTechnologySystem folder not found!");
    return;
  }

  console.log(`\n📁 SurfaceTechnologySystem  (${stFolder.nodeId.toString()})`);
  await browseTree(session, stFolder.nodeId.toString(), 1);
}

// ── Read ─────────────────────────────────────────────────────────────

async function readAllVariables(
  session: ClientSession,
  nsIndex: number
): Promise<void> {
  header("PHASE 3: Read All Variables");

  const nodesToRead: ReadValueIdOptions[] = ALL_VARIABLES.map((name) => ({
    nodeId: `ns=${nsIndex};s=${name}`,
    attributeId: AttributeIds.Value,
  }));

  const dataValues: DataValue[] = await session.read(nodesToRead);

  // Table header
  console.log(
    `\n  ${"Variable".padEnd(22)} ${"Value".padEnd(24)} ${"DataType".padEnd(10)} Status`
  );
  console.log(`  ${"─".repeat(22)} ${"─".repeat(24)} ${"─".repeat(10)} ${"─".repeat(12)}`);

  for (let i = 0; i < ALL_VARIABLES.length; i++) {
    const name = ALL_VARIABLES[i];
    const dv = dataValues[i];
    const val = dv.value?.value;
    const displayVal =
      typeof val === "number" ? val.toFixed(4) : String(val ?? "null");
    const typeName = dv.value?.dataType != null ? dv.value.dataType.toString() : "?";
    const status =
      dv.statusCode === StatusCodes.Good ? "✓ Good" : dv.statusCode.toString();
    console.log(
      `  ${name.padEnd(22)} ${displayVal.padEnd(24)} ${typeName.padEnd(10)} ${status}`
    );
  }
}

// ── Subscribe ────────────────────────────────────────────────────────

async function subscribeTelemetry(
  session: ClientSession,
  nsIndex: number,
  durationMs: number
): Promise<void> {
  header("PHASE 4: Subscribe to Live Telemetry");
  console.log(
    `\n  Monitoring ${MONITORED_VARIABLES.length} variables for ${durationMs / 1000}s ...\n`
  );

  const subscription = await session.createSubscription2({
    requestedPublishingInterval: 500,
    requestedMaxKeepAliveCount: 10,
    requestedLifetimeCount: 100,
    maxNotificationsPerPublish: 20,
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
      const val = dataValue.value?.value;
      const ts = dataValue.sourceTimestamp?.toISOString() ?? "N/A";
      const displayVal = typeof val === "number" ? val.toFixed(4) : String(val);
      console.log(`  [${ts}]  ${varName.padEnd(22)} = ${displayVal}`);
    });
  }

  // Let the subscription run for the specified duration
  await sleep(durationMs);

  // Terminate subscription
  await subscription.terminate();
  console.log("\n  Subscription terminated.");
}

// ── Main ─────────────────────────────────────────────────────────────

async function main() {
  console.log("╔════════════════════════════════════════════════════════════╗");
  console.log("║    OPC 40700 Surface Technology — Test Client             ║");
  console.log("╚════════════════════════════════════════════════════════════╝");

  // ── Phase 1: Discovery (standalone, no session needed) ──
  await discoverEndpoints();

  // ── Create client and session for remaining phases ──
  const client = OPCUAClient.create({
    applicationName: "OPC40700-TestClient",
    connectionStrategy: {
      maxRetry: 2,
      initialDelay: 1000,
      maxDelay: 5000,
    },
    securityMode: MessageSecurityMode.None,
    securityPolicy: SecurityPolicy.None,
    endpointMustExist: false,
  });

  await client.connect(ENDPOINT_URL);
  console.log(`\n  Connected to ${ENDPOINT_URL}`);

  const session = await client.createSession();
  console.log("  Session created.");

  // Resolve namespace index dynamically
  const nsArray = await session.readNamespaceArray();
  const nsIndex = nsArray.indexOf(NAMESPACE_URI);
  if (nsIndex < 0) {
    console.error(`  ⚠ Namespace '${NAMESPACE_URI}' not found! Available: ${nsArray.join(", ")}`);
    await session.close();
    await client.disconnect();
    return;
  }
  console.log(`  Namespace '${NAMESPACE_URI}' → index ${nsIndex}`);

  // ── Phase 2: Browse ──
  await browseAddressSpace(session);

  // ── Phase 3: Read ──
  await readAllVariables(session, nsIndex);

  // ── Phase 4: Subscribe (10 seconds) ──
  await subscribeTelemetry(session, nsIndex, 10_000);

  // ── Cleanup ──
  header("Cleanup");
  await session.close();
  console.log("  Session closed.");
  await client.disconnect();
  console.log("  Disconnected. Done.\n");
}

main().catch((err) => {
  console.error("Fatal error:", err.message);
  process.exit(1);
});
