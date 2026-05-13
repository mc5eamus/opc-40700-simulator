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
  BrowseDirection,
  NodeClass,
} from "node-opcua";

const ENDPOINT_URL = "opc.tcp://localhost:5000";
const NAMESPACE_URI = "urn:opc40700:surface-technology";
const DI_NAMESPACE_URI = "http://opcfoundation.org/UA/DI/";

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

  // SurfaceTechnologySystem is a component of SurfaceTechnologyDevice (under DeviceSet),
  // not directly under Objects.  Browse the device instance to find it.
  const objectsFolder = "ns=0;i=85"; // Objects folder
  const browseResult = await session.browse(objectsFolder as BrowseDescriptionLike);

  // First find DeviceSet under Objects
  const deviceSetRef = browseResult.references?.find(
    (r) => r.browseName.name === "DeviceSet"
  );

  if (!deviceSetRef) {
    console.log("  ⚠ DeviceSet folder not found under Objects!");
    return;
  }

  // Browse DeviceSet to find the device instance
  const deviceSetBrowse = await session.browse(
    deviceSetRef.nodeId.toString() as BrowseDescriptionLike
  );
  const deviceRef = deviceSetBrowse.references?.find(
    (r) => r.browseName.name === "SurfaceTechnologyDevice"
  );

  if (!deviceRef) {
    console.log("  ⚠ SurfaceTechnologyDevice not found under DeviceSet!");
    return;
  }

  // Browse device instance to find SurfaceTechnologySystem
  const deviceBrowse = await session.browse(
    deviceRef.nodeId.toString() as BrowseDescriptionLike
  );
  const stFolder = deviceBrowse.references?.find(
    (r) => r.browseName.name === "SurfaceTechnologySystem"
  );

  if (!stFolder) {
    console.log("  ⚠ SurfaceTechnologySystem folder not found under device instance!");
    return;
  }

  console.log(`\n📁 SurfaceTechnologySystem  (${stFolder.nodeId.toString()})`);
  await browseTree(session, stFolder.nodeId.toString(), 1);
}

async function browseDIDeviceSet(session: ClientSession): Promise<void> {
  header("PHASE 2b: DI DeviceSet Discovery");

  // Find the DeviceSet folder under Objects
  const objectsFolder = "ns=0;i=85"; // Objects folder
  const browseResult = await session.browse(objectsFolder as BrowseDescriptionLike);

  const deviceSetFolder = browseResult.references?.find(
    (r) => r.browseName.name === "DeviceSet"
  );

  if (!deviceSetFolder) {
    console.log("  ⚠ DeviceSet folder not found under Objects!");
    return;
  }

  console.log(`\n📁 DeviceSet  (${deviceSetFolder.nodeId.toString()})`);
  await browseTree(session, deviceSetFolder.nodeId.toString(), 1);
}

// ── FetchSubTypes simulation ──────────────────────────────────────────
//
// Simulates what AIO's FetchSubTypesAsync does:
//  1. Reads the DeviceType node attributes by numeric DI node id (i=1002).
//  2. Browses forward HasSubtype references to discover concrete device types.
//  3. Reads each discovered subtype node to confirm it is accessible.
//
// If any ReadNode call returns BadNodeIdUnknown the phase throws, which
// causes the test-client process to exit with a non-zero status and fails CI.
async function fetchSubTypes(
  session: ClientSession,
  diNsIndex: number,
  appNsIndex: number
): Promise<void> {
  header("PHASE 2c: FetchSubTypes Simulation (DI type resolution)");

  // ── Step 1: ReadNode on DeviceType at nsu=DI;i=1002 ──────────────
  const deviceTypeNodeId = `ns=${diNsIndex};i=1002`;
  console.log(`\n  Reading DeviceType node  (${deviceTypeNodeId}) ...`);

  const deviceTypeAttrs = await session.read([
    { nodeId: deviceTypeNodeId, attributeId: AttributeIds.NodeClass },
    { nodeId: deviceTypeNodeId, attributeId: AttributeIds.BrowseName },
    { nodeId: deviceTypeNodeId, attributeId: AttributeIds.DisplayName },
    { nodeId: deviceTypeNodeId, attributeId: AttributeIds.IsAbstract },
  ]);

  for (const dv of deviceTypeAttrs) {
    if (dv.statusCode !== StatusCodes.Good) {
      throw new Error(
        `ReadNode on DeviceType (${deviceTypeNodeId}) returned ` +
          `${dv.statusCode.toString()} — expected Good. ` +
          `FetchSubTypes would fail with BadNodeIdUnknown.`
      );
    }
  }

  const nodeClassName = deviceTypeAttrs[0].value?.value;
  const browseName = deviceTypeAttrs[1].value?.value;
  const displayName = deviceTypeAttrs[2].value?.value;
  console.log(`  ✓ DeviceType is readable`);
  console.log(`    NodeClass   : ${nodeClassName}`);
  console.log(`    BrowseName  : ${browseName}`);
  console.log(`    DisplayName : ${displayName?.text ?? displayName}`);

  // ── Step 2: Browse HasSubtype forward references from DeviceType ──
  console.log(`\n  Browsing HasSubtype references from DeviceType ...`);

  const subtypeBrowse = await session.browse({
    nodeId: deviceTypeNodeId,
    browseDirection: BrowseDirection.Forward,
    referenceTypeId: "i=45",  // HasSubtype (OPC UA standard, ns=0;i=45)
    includeSubtypes: false,
    nodeClassMask: 0,
    resultMask: 63,
  });

  const subtypes = subtypeBrowse.references ?? [];
  console.log(`  Found ${subtypes.length} direct subtype(s):`);

  if (subtypes.length === 0) {
    throw new Error(
      "DeviceType has no HasSubtype forward references — " +
        "FetchSubTypes would return an empty type hierarchy."
    );
  }

  // ── Step 3: ReadNode on each discovered subtype ───────────────────
  for (const ref of subtypes) {
    const subtypeId = ref.nodeId.toString();
    const subtypeName = ref.browseName.toString();
    console.log(`\n  Subtype: ${subtypeName}  (${subtypeId})`);

    const subtypeAttrs = await session.read([
      { nodeId: subtypeId, attributeId: AttributeIds.NodeClass },
      { nodeId: subtypeId, attributeId: AttributeIds.BrowseName },
      { nodeId: subtypeId, attributeId: AttributeIds.DisplayName },
      { nodeId: subtypeId, attributeId: AttributeIds.IsAbstract },
    ]);

    for (const dv of subtypeAttrs) {
      if (dv.statusCode !== StatusCodes.Good) {
        throw new Error(
          `ReadNode on subtype ${subtypeName} (${subtypeId}) returned ` +
            `${dv.statusCode.toString()} — expected Good. ` +
            `FetchSubTypes would fail with BadNodeIdUnknown.`
        );
      }
    }

    console.log(`  ✓ ${subtypeName} is readable`);
  }

  // ── Step 4: Verify OPC40700DeviceType is among the subtypes ──────
  const opc40700Type = subtypes.find(
    (r) => r.browseName.name === "OPC40700DeviceType"
  );

  if (!opc40700Type) {
    throw new Error(
      "OPC40700DeviceType not found as a HasSubtype of DeviceType — " +
        "device instances would not be resolved to the correct concrete type."
    );
  }

  console.log(
    `\n  ✓ OPC40700DeviceType confirmed as HasSubtype of DeviceType  (${opc40700Type.nodeId.toString()})`
  );
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

// ── Address Space Traversal Test (Issue #19 Test 1) ──────────────────────
//
// BFS from Objects folder following forward HierarchicalReferences to verify:
// - No circular references (max depth < 20)
// - Reasonable total node count (terminates without hitting depth limit)
// This focuses on the Objects subtree which is what AIO Commander browses.

async function verifyNoCircularReferences(session: ClientSession): Promise<void> {
  header("PHASE 5: Verify No Circular References (BFS Traversal)");

  const objectsFolderId = "ns=0;i=85"; // Objects folder
  const visited = new Set<string>();
  const queue: Array<{ nodeId: string; depth: number }> = [
    { nodeId: objectsFolderId, depth: 0 },
  ];
  visited.add(objectsFolderId);
  let maxDepth = 0;
  let totalNodes = 0;

  while (queue.length > 0) {
    const { nodeId, depth } = queue.shift()!;
    maxDepth = Math.max(maxDepth, depth);
    totalNodes++;

    // Safety: abort if we've clearly hit a cycle (should never happen)
    if (depth > 20) {
      throw new Error(
        `BFS depth exceeded 20 at node ${nodeId} — likely circular reference. ` +
          `Visited ${totalNodes} nodes so far.`
      );
    }

    const browseResult = await session.browse({
      nodeId: nodeId,
      browseDirection: BrowseDirection.Forward,
      referenceTypeId: "i=33", // HierarchicalReferences
      includeSubtypes: true,
      nodeClassMask: 0,
      resultMask: 63,
    });

    if (browseResult.references) {
      for (const ref of browseResult.references) {
        const childId = ref.nodeId.toString();
        if (!visited.has(childId)) {
          visited.add(childId);
          queue.push({ nodeId: childId, depth: depth + 1 });
        }
      }
    }
  }

  console.log(`\n  BFS traversal from Objects folder complete:`);
  console.log(`    Total unique nodes visited: ${totalNodes}`);
  console.log(`    Maximum depth reached: ${maxDepth}`);

  if (maxDepth >= 20) {
    throw new Error(
      `Address space tree too deep: max depth ${maxDepth} (expected < 20). ` +
        `This indicates circular references in hierarchical direction.`
    );
  }

  console.log(`\n  ✓ No circular references detected (max depth ${maxDepth} < 20)`);
}

// ── End-to-End Discovery Simulation (Issue #19 Test 3) ────────────────────
//
// Mimics what AIO Commander does during asset discovery:
// 1. Verifies DeviceSet is browseable
// 2. Contains at least 1 device instance
// 3. Device instances have readable variables (data points)

async function verifyEndToEndDiscovery(
  session: ClientSession,
  diNsIndex: number
): Promise<void> {
  header("PHASE 6: End-to-End Discovery Simulation");

  // ── Step 1: Browse DeviceSet (i=5001 in DI namespace) ──
  const deviceSetNodeId = `ns=${diNsIndex};i=5001`;
  console.log(`\n  Browsing DeviceSet (${deviceSetNodeId}) ...`);

  const deviceSetBrowse = await session.browse({
    nodeId: deviceSetNodeId,
    browseDirection: BrowseDirection.Forward,
    referenceTypeId: "i=33", // HierarchicalReferences
    includeSubtypes: true,
    nodeClassMask: 0,
    resultMask: 63,
  });

  const deviceInstances = (deviceSetBrowse.references ?? []).filter(
    (r) => r.nodeClass === NodeClass.Object
  );

  if (deviceInstances.length === 0) {
    throw new Error(
      "DeviceSet contains no device instances — " +
        "AIO Commander would find 0 assets."
    );
  }

  console.log(`  ✓ DeviceSet contains ${deviceInstances.length} device instance(s)`);

  // ── Step 2: For each device instance, verify it has child variables ──
  for (const device of deviceInstances) {
    const deviceId = device.nodeId.toString();
    const deviceName = device.browseName.name ?? device.browseName.toString();
    console.log(`\n  Device: ${deviceName}  (${deviceId})`);

    // Browse all hierarchical children recursively (up to 3 levels)
    let variableCount = 0;
    const deviceQueue: string[] = [deviceId];
    const deviceVisited = new Set<string>([deviceId]);
    let level = 0;

    while (deviceQueue.length > 0 && level < 3) {
      const nextLevel: string[] = [];
      for (const nid of deviceQueue) {
        const childBrowse = await session.browse({
          nodeId: nid,
          browseDirection: BrowseDirection.Forward,
          referenceTypeId: "i=33", // HierarchicalReferences
          includeSubtypes: true,
          nodeClassMask: 0,
          resultMask: 63,
        });

        if (childBrowse.references) {
          for (const ref of childBrowse.references) {
            const childId = ref.nodeId.toString();
            if (ref.nodeClass === NodeClass.Variable) {
              variableCount++;
            }
            if (
              ref.nodeClass === NodeClass.Object &&
              !deviceVisited.has(childId)
            ) {
              deviceVisited.add(childId);
              nextLevel.push(childId);
            }
          }
        }
      }
      deviceQueue.length = 0;
      deviceQueue.push(...nextLevel);
      level++;
    }

    console.log(`    Variables found: ${variableCount}`);

    if (variableCount === 0) {
      throw new Error(
        `Device instance '${deviceName}' has no variables — ` +
          `AIO Commander would not discover any data points for this asset.`
      );
    }

    console.log(`  ✓ ${deviceName} has ${variableCount} variable(s) (data points)`);
  }

  console.log(
    `\n  ✓ End-to-end discovery simulation passed: ` +
      `${deviceInstances.length} device(s) with variables`
  );
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

  // Verify DI namespace presence
  const diNsIndex = nsArray.indexOf(DI_NAMESPACE_URI);
  if (diNsIndex < 0) {
    console.error(`  ⚠ DI Namespace '${DI_NAMESPACE_URI}' not found! Available: ${nsArray.join(", ")}`);
  } else {
    console.log(`  DI Namespace '${DI_NAMESPACE_URI}' → index ${diNsIndex}`);
  }

  // ── Phase 2: Browse (includes DI DeviceSet) ──
  await browseAddressSpace(session);
  if (diNsIndex >= 0) {
    await browseDIDeviceSet(session);
    // ── Phase 2c: FetchSubTypes simulation ──────────────────────────
    // This replicates the AIO commander's FetchSubTypesAsync path: reads the
    // DI DeviceType node by numeric id, browses HasSubtype references, and reads
    // each discovered subtype.  Failure here means FetchSubTypesAsync would
    // return BadNodeIdUnknown, blocking asset discovery.
    await fetchSubTypes(session, diNsIndex, nsIndex);
  }

  // ── Phase 3: Read ──
  await readAllVariables(session, nsIndex);

  // ── Phase 4: Subscribe (10 seconds) ──
  await subscribeTelemetry(session, nsIndex, 10_000);

  // ── Phase 5: Circular Reference Detection ──
  await verifyNoCircularReferences(session);

  // ── Phase 6: End-to-End Discovery Simulation ──
  if (diNsIndex >= 0) {
    await verifyEndToEndDiscovery(session, diNsIndex);
  }

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
