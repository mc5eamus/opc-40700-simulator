/**
 * device-health-probe.ts
 *
 * Connects to an OPC UA server and reports how DeviceHealthEnumeration is
 * exposed, covering:
 *   1. The DataType attribute on DeviceHealth variables
 *   2. Whether a DeviceHealthEnumeration DataType node exists in the address space
 *   3. Whether a HasSubtype reference links it to Enumeration (i=29)
 *   4. Where DeviceHealth variables appear (flat list of nodes via BFS from DeviceSet)
 *
 * Usage:
 *   ts-node src/device-health-probe.ts <endpoint> <label>
 */

import {
  OPCUAClient,
  BrowseDirection,
  NodeId,
  AttributeIds,
  NodeClass,
  ReferenceTypeIds,
  makeNodeId,
  DataType,
  resolveNodeId,
  StatusCodes,
  makeBrowsePath,
  NodeIdType,
} from "node-opcua";

const endpoint = process.argv[2] || "opc.tcp://localhost:5000";
const label = process.argv[3] || "unknown";

async function browseForward(
  session: any,
  nodeId: NodeId,
  refType: string = "HierarchicalReferences"
): Promise<Array<{ nodeId: NodeId; browseName: string; nodeClass: NodeClass }>> {
  const result = await session.browse({
    nodeId,
    browseDirection: BrowseDirection.Forward,
    referenceTypeId: refType,
    includeSubtypes: true,
    nodeClassMask: 0xff,
    resultMask: 63,
  });
  if (!result.references) return [];
  return result.references.map((r: any) => ({
    nodeId: r.nodeId,
    browseName: r.browseName?.toString() ?? "?",
    nodeClass: r.nodeClass,
  }));
}

async function readAttr(session: any, nodeId: NodeId, attr: number): Promise<any> {
  const dv = await session.read({ nodeId, attributeId: attr });
  if (dv.statusCode.value !== StatusCodes.Good.value) return null;
  return dv.value?.value;
}

async function findDeviceSetNodeId(session: any): Promise<NodeId | null> {
  // Try to find DeviceSet by browsing DI namespaces
  const nsRes = await session.readNamespaceArray();
  const diNsUri = "http://opcfoundation.org/UA/DI/";
  const diNsIdx = nsRes.indexOf(diNsUri);
  if (diNsIdx < 0) {
    console.log(`  [WARN] DI namespace not registered on this server`);
    return null;
  }
  const deviceSetId = makeNodeId(5001, diNsIdx);
  const displayRes = await session.read({ nodeId: deviceSetId, attributeId: AttributeIds.DisplayName });
  if (displayRes.statusCode.value === StatusCodes.Good.value) {
    return deviceSetId;
  }
  return null;
}

async function findDeviceHealthNodes(
  session: any,
  startId: NodeId,
  maxDepth = 8
): Promise<Array<{ path: string; nodeId: NodeId; dataType: string; dataTypeNodeId: NodeId | null }>> {
  const found: Array<{ path: string; nodeId: NodeId; dataType: string; dataTypeNodeId: NodeId | null }> = [];
  const visited = new Set<string>();
  const queue: Array<{ id: NodeId; path: string; depth: number }> = [
    { id: startId, path: startId.toString(), depth: 0 },
  ];

  while (queue.length > 0) {
    const { id, path, depth } = queue.shift()!;
    const key = id.toString();
    if (visited.has(key)) continue;
    visited.add(key);

    // Check if this is a Variable
    const nc = await readAttr(session, id, AttributeIds.NodeClass);
    if (nc === NodeClass.Variable) {
      const bn = await readAttr(session, id, AttributeIds.BrowseName);
      const name = bn?.toString() ?? "";
      if (name.toLowerCase().includes("health")) {
        const dtRaw = await readAttr(session, id, AttributeIds.DataType);
        found.push({
          path,
          nodeId: id,
          dataType: dtRaw ? dtRaw.toString() : "unknown",
          dataTypeNodeId: dtRaw ? dtRaw : null,
        });
      }
    }

    if (depth >= maxDepth) continue;
    const children = await browseForward(session, id);
    for (const c of children) {
      if (!visited.has(c.nodeId.toString())) {
        const bn = c.browseName;
        queue.push({ id: c.nodeId, path: `${path} > ${bn}`, depth: depth + 1 });
      }
    }
  }
  return found;
}

async function probeDeviceHealthEnumerationDataType(
  session: any,
  diNsIdx: number
): Promise<void> {
  const dheId = makeNodeId(6244, diNsIdx);
  console.log(`\n  --- DeviceHealthEnumeration DataType node (DI ns=${diNsIdx}, i=6244) ---`);
  const dn = await readAttr(session, dheId, AttributeIds.DisplayName);
  if (!dn) {
    console.log(`  [MISSING] Node ns=${diNsIdx};i=6244 not found`);
    return;
  }
  console.log(`  DisplayName : ${dn}`);
  const bn = await readAttr(session, dheId, AttributeIds.BrowseName);
  console.log(`  BrowseName  : ${bn}`);
  const nc = await readAttr(session, dheId, AttributeIds.NodeClass);
  console.log(`  NodeClass   : ${NodeClass[nc] ?? nc}`);

  // Check HasSubtype inverse from Enumeration (i=29)
  const enumId = makeNodeId(29, 0);
  const subtypes = await session.browse({
    nodeId: enumId,
    browseDirection: BrowseDirection.Forward,
    referenceTypeId: "HasSubtype",
    includeSubtypes: false,
    nodeClassMask: 0xff,
    resultMask: 63,
  });
  const found = subtypes.references?.find((r: any) => r.nodeId.toString() === dheId.toString());
  if (found) {
    console.log(`  HasSubtype  : ✓  (Enumeration i=29 → ns=${diNsIdx};i=6244)`);
  } else {
    // Try inverse direction on dheId itself
    const inv = await session.browse({
      nodeId: dheId,
      browseDirection: BrowseDirection.Inverse,
      referenceTypeId: "HasSubtype",
      includeSubtypes: false,
      nodeClassMask: 0xff,
      resultMask: 63,
    });
    const parent = inv.references?.[0];
    if (parent) {
      console.log(`  HasSubtype  : ✓  parent = ${parent.nodeId} (${parent.browseName})`);
    } else {
      console.log(`  HasSubtype  : ✗  (no inverse HasSubtype from this node)`);
    }
  }

  // Read EnumStrings / EnumValues if present
  const children = await browseForward(session, dheId, "HasProperty");
  for (const c of children) {
    const val = await readAttr(session, c.nodeId, AttributeIds.Value);
    console.log(`  Property    : ${c.browseName} = ${JSON.stringify(val)}`);
  }
}

async function main() {
  console.log(`\n${"=".repeat(60)}`);
  console.log(`Server : ${label}`);
  console.log(`URL    : ${endpoint}`);
  console.log(`${"=".repeat(60)}`);

  const client = OPCUAClient.create({ endpointMustExist: false });
  await client.connect(endpoint);
  const session = await client.createSession();

  const nsArray = await session.readNamespaceArray();
  console.log(`\nNamespaces registered:`);
  nsArray.forEach((ns: string, i: number) => console.log(`  [${i}] ${ns}`));

  const diNsUri = "http://opcfoundation.org/UA/DI/";
  const diNsIdx = nsArray.indexOf(diNsUri);
  console.log(`\nDI namespace index: ${diNsIdx < 0 ? "NOT FOUND" : diNsIdx}`);

  if (diNsIdx >= 0) {
    await probeDeviceHealthEnumerationDataType(session, diNsIdx);
  }

  // Find DeviceSet
  const deviceSetId = await findDeviceSetNodeId(session);
  if (!deviceSetId) {
    console.log(`\nDeviceSet not found — skipping DeviceHealth variable scan`);
  } else {
    console.log(`\nDeviceSet found: ${deviceSetId}`);
    console.log(`\nScanning for DeviceHealth variables (depth ≤ 8) ...`);
    const healthNodes = await findDeviceHealthNodes(session, deviceSetId);
    if (healthNodes.length === 0) {
      console.log(`  [NONE FOUND]`);
    } else {
      for (const h of healthNodes) {
        console.log(`\n  Variable   : ${h.path}`);
        console.log(`  NodeId     : ${h.nodeId}`);
        console.log(`  DataType   : ${h.dataType}`);
        // Verify the DataType node is DeviceHealthEnumeration
        if (h.dataTypeNodeId && diNsIdx >= 0) {
          const expected = makeNodeId(6244, diNsIdx).toString();
          const isDHE = h.dataType === expected;
          console.log(`  DHE match  : ${isDHE ? "✓ DeviceHealthEnumeration (DI ns=" + diNsIdx + ";i=6244)" : "✗ expected " + expected}`);
        }
      }
    }
  }

  await session.close();
  await client.disconnect();
  console.log(`\n[done]\n`);
}

main().catch((e) => {
  console.error(`[ERROR] ${e.message ?? e}`);
  process.exit(1);
});
