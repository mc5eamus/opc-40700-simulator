# OPC UA Discovery Implementation in C (open62541)

This document details how to implement an OPC UA server in C that supports device discovery, based on patterns used in Azure IoT Operations end-to-end demonstration environments (e.g., the `opcua-large-c2` simulator from `microsoft/azure-iot-operations-end2end-demo`). The reference implementation uses the [open62541](https://github.com/open62541/open62541) library — the most widely adopted open-source OPC UA stack in C.

## Table of Contents

- [Overview](#overview)
- [Architecture](#architecture)
- [Building open62541](#building-open62541)
- [Server Initialization](#server-initialization)
- [DI Namespace and Discovery](#di-namespace-and-discovery)
- [DeviceSet Folder](#deviceset-folder)
- [Device Type Definition](#device-type-definition)
- [Device Instance with Properties](#device-instance-with-properties)
- [Process Variables and Data Simulation](#process-variables-and-data-simulation)
- [Discovery Endpoint Configuration](#discovery-endpoint-configuration)
- [TranslateBrowsePathsToNodeIds Support](#translatebrowsepathstonodeids-support)
- [Buffer Sizing for Large Responses](#buffer-sizing-for-large-responses)
- [Full Example: Minimal Discovery-Enabled Server](#full-example-minimal-discovery-enabled-server)
- [Comparison with This Project (Rust)](#comparison-with-this-project-rust)

---

## Overview

Azure IoT Operations (AIO) discovers OPC UA assets by:

1. Browsing the `Objects/DeviceSet` folder (DI namespace `http://opcfoundation.org/UA/DI/`)
2. Resolving type hierarchies via `TranslateBrowsePathsToNodeIds`
3. Reading standard DI properties (Manufacturer, Model, SerialNumber, etc.)
4. Subscribing to process variables for telemetry

A compliant C implementation must expose the DI type hierarchy, a `DeviceSet` folder under `Objects`, and device instances with properly namespaced BrowseNames.

## Architecture

```
┌─────────────────────────────────────────────────────┐
│                   OPC UA Server (C)                  │
├─────────────────────────────────────────────────────┤
│  Address Space                                       │
│  ├── Types (ns=di)                                  │
│  │   ├── TopologyElementType (i=1001)               │
│  │   └── DeviceType (i=1002)                        │
│  ├── Objects                                        │
│  │   └── DeviceSet (ns=di, i=5001)                  │
│  │       └── MyDevice (ns=app)                      │
│  │           ├── Manufacturer                       │
│  │           ├── Model                              │
│  │           ├── SerialNumber                       │
│  │           └── ProcessDataFolder/                 │
│  │               ├── Temperature                    │
│  │               ├── Pressure                       │
│  │               └── ...                            │
│  └── Discovery Endpoint                             │
└─────────────────────────────────────────────────────┘
```

## Building open62541

```bash
# Clone open62541
git clone https://github.com/open62541/open62541.git
cd open62541
git checkout v1.3.9  # or latest stable

# Build with full namespace zero and discovery enabled
mkdir build && cd build
cmake .. \
  -DUA_ENABLE_DISCOVERY=ON \
  -DUA_NAMESPACE_ZERO=FULL \
  -DUA_ENABLE_SUBSCRIPTIONS=ON \
  -DUA_ENABLE_METHODCALLS=ON \
  -DBUILD_SHARED_LIBS=ON \
  -DCMAKE_BUILD_TYPE=Release

make -j$(nproc)
sudo make install
```

Key CMake flags:
- `UA_ENABLE_DISCOVERY=ON` — enables Local Discovery Server (LDS) registration
- `UA_NAMESPACE_ZERO=FULL` — includes the full OPC UA namespace zero (required for DI types)
- `UA_ENABLE_SUBSCRIPTIONS=ON` — allows clients to subscribe to data changes

## Server Initialization

```c
#include <open62541/server.h>
#include <open62541/server_config_default.h>
#include <open62541/plugin/log_stdout.h>
#include <signal.h>

static volatile UA_Boolean running = true;

static void stopHandler(int sig) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Received ctrl-c");
    running = false;
}

int main(void) {
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    UA_Server *server = UA_Server_new();
    UA_ServerConfig *config = UA_Server_getConfig(server);
    UA_ServerConfig_setDefault(config);

    // Set application description for discovery
    config->applicationDescription.applicationName =
        UA_LOCALIZEDTEXT_ALLOC("en-US", "OPC UA C Discovery Simulator");
    config->applicationDescription.applicationUri =
        UA_STRING_ALLOC("urn:opcua:c:discovery:simulator");
    config->applicationDescription.productUri =
        UA_STRING_ALLOC("urn:opcua:c:discovery:simulator");

    // Configure endpoint URL
    UA_ServerConfig_setMinimal(config, 4840, NULL);

    // Populate address space (see sections below)
    addDINamespace(server);
    addDeviceSetFolder(server);
    addDeviceType(server);
    addDeviceInstance(server);
    addProcessVariables(server);

    // Start the server
    UA_StatusCode retval = UA_Server_run(server, &running);
    UA_Server_delete(server);
    return retval == UA_STATUSCODE_GOOD ? 0 : 1;
}
```

## DI Namespace and Discovery

The DI namespace must be registered before creating any DI nodes:

```c
#include <open62541/server.h>

// DI namespace URI as defined by OPC Foundation
#define DI_NAMESPACE_URI "http://opcfoundation.org/UA/DI/"

static UA_UInt16 diNamespaceIndex = 0;
static UA_UInt16 appNamespaceIndex = 0;

void addDINamespace(UA_Server *server) {
    // Register the DI namespace
    UA_String diUri = UA_STRING((char *)DI_NAMESPACE_URI);
    UA_Server_addNamespace(server, (char *)DI_NAMESPACE_URI);

    // Find the namespace index (it should be 2 since ns=0 is UA, ns=1 is server)
    UA_StatusCode retval = UA_Server_getNamespaceByName(server, diUri, &diNamespaceIndex);
    if (retval != UA_STATUSCODE_GOOD) {
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                     "Failed to get DI namespace index");
        return;
    }

    // Register application namespace
    UA_String appUri = UA_STRING("urn:opcua:c:simulator:app");
    UA_Server_addNamespace(server, "urn:opcua:c:simulator:app");
    UA_Server_getNamespaceByName(server, appUri, &appNamespaceIndex);

    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                "DI namespace index: %d, App namespace index: %d",
                diNamespaceIndex, appNamespaceIndex);
}
```

### Why Namespace Indices Matter

AIO uses `TranslateBrowsePathsToNodeIds` to resolve nodes by their BrowseName path. Each BrowseName carries a namespace index. If the DI nodes use the wrong namespace index (e.g., `ns=0` instead of the DI namespace), discovery will fail silently.

## DeviceSet Folder

The `DeviceSet` folder must be placed directly under `Objects` (NodeId `i=85`):

```c
void addDeviceSetFolder(UA_Server *server) {
    UA_ObjectAttributes attr = UA_ObjectAttributes_default;
    attr.displayName = UA_LOCALIZEDTEXT("en-US", "DeviceSet");
    attr.description = UA_LOCALIZEDTEXT("en-US",
        "Container for all discoverable devices");

    // NodeId in the DI namespace
    UA_NodeId deviceSetId = UA_NODEID_NUMERIC(diNamespaceIndex, 5001);

    // BrowseName MUST be in the DI namespace for discovery to work
    UA_QualifiedName browseName = UA_QUALIFIEDNAME(diNamespaceIndex, "DeviceSet");

    // Parent: Objects folder (ns=0, i=85)
    UA_NodeId parentId = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);

    // Reference type: Organizes
    UA_NodeId referenceType = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);

    // Type definition: FolderType
    UA_NodeId typeDefinition = UA_NODEID_NUMERIC(0, UA_NS0ID_FOLDERTYPE);

    UA_Server_addObjectNode(server, deviceSetId, parentId, referenceType,
                            browseName, typeDefinition, attr, NULL, NULL);
}
```

## Device Type Definition

Create a type hierarchy: `BaseObjectType → TopologyElementType → DeviceType → AppDeviceType`:

```c
void addDeviceType(UA_Server *server) {
    // --- TopologyElementType (DI ns, numeric id 1001) ---
    UA_ObjectTypeAttributes teAttr = UA_ObjectTypeAttributes_default;
    teAttr.displayName = UA_LOCALIZEDTEXT("en-US", "TopologyElementType");
    teAttr.isAbstract = UA_FALSE;

    UA_NodeId topologyElementTypeId = UA_NODEID_NUMERIC(diNamespaceIndex, 1001);
    UA_QualifiedName teBrowseName = UA_QUALIFIEDNAME(diNamespaceIndex,
                                                      "TopologyElementType");

    UA_Server_addObjectTypeNode(server, topologyElementTypeId,
        UA_NODEID_NUMERIC(0, UA_NS0ID_BASEOBJECTTYPE),  // parent: BaseObjectType
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE),      // reference: HasSubType
        teBrowseName, teAttr, NULL, NULL);

    // --- DeviceType (DI ns, numeric id 1002) ---
    UA_ObjectTypeAttributes dtAttr = UA_ObjectTypeAttributes_default;
    dtAttr.displayName = UA_LOCALIZEDTEXT("en-US", "DeviceType");
    dtAttr.isAbstract = UA_FALSE;

    UA_NodeId deviceTypeId = UA_NODEID_NUMERIC(diNamespaceIndex, 1002);
    UA_QualifiedName dtBrowseName = UA_QUALIFIEDNAME(diNamespaceIndex, "DeviceType");

    UA_Server_addObjectTypeNode(server, deviceTypeId,
        topologyElementTypeId,                           // parent: TopologyElementType
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE),
        dtBrowseName, dtAttr, NULL, NULL);

    // --- Application-specific device type ---
    UA_ObjectTypeAttributes appAttr = UA_ObjectTypeAttributes_default;
    appAttr.displayName = UA_LOCALIZEDTEXT("en-US", "SimulatorDeviceType");
    appAttr.isAbstract = UA_FALSE;

    UA_NodeId appDeviceTypeId = UA_NODEID_STRING(appNamespaceIndex,
                                                  "SimulatorDeviceType");
    UA_QualifiedName appBrowseName = UA_QUALIFIEDNAME(appNamespaceIndex,
                                                       "SimulatorDeviceType");

    UA_Server_addObjectTypeNode(server, appDeviceTypeId,
        deviceTypeId,                                    // parent: DeviceType
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE),
        appBrowseName, appAttr, NULL, NULL);
}
```

## Device Instance with Properties

```c
void addDeviceInstance(UA_Server *server) {
    // --- Create device instance under DeviceSet ---
    UA_ObjectAttributes deviceAttr = UA_ObjectAttributes_default;
    deviceAttr.displayName = UA_LOCALIZEDTEXT("en-US", "Simulator Device C2");
    deviceAttr.description = UA_LOCALIZEDTEXT("en-US",
        "Large-scale OPC UA simulator device for discovery testing");

    UA_NodeId deviceId = UA_NODEID_STRING(appNamespaceIndex, "SimulatorDevice");
    UA_QualifiedName deviceBrowseName = UA_QUALIFIEDNAME(appNamespaceIndex,
                                                          "SimulatorDevice");
    UA_NodeId deviceSetId = UA_NODEID_NUMERIC(diNamespaceIndex, 5001);
    UA_NodeId appDeviceTypeId = UA_NODEID_STRING(appNamespaceIndex,
                                                  "SimulatorDeviceType");

    UA_Server_addObjectNode(server, deviceId, deviceSetId,
        UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
        deviceBrowseName, appDeviceTypeId, deviceAttr, NULL, NULL);

    // --- Add DI standard properties ---
    addStringProperty(server, deviceId, diNamespaceIndex,
                      "Manufacturer", "OPC UA C Simulator Corp");
    addStringProperty(server, deviceId, diNamespaceIndex,
                      "Model", "LARGE-C2-1000");
    addStringProperty(server, deviceId, diNamespaceIndex,
                      "SerialNumber", "SN-C2-2024-001");
    addStringProperty(server, deviceId, diNamespaceIndex,
                      "HardwareRevision", "2.0");
    addStringProperty(server, deviceId, diNamespaceIndex,
                      "SoftwareRevision", "1.5.0");
    addStringProperty(server, deviceId, diNamespaceIndex,
                      "DeviceManual", "https://example.com/manual");
    addStringProperty(server, deviceId, diNamespaceIndex,
                      "DeviceClass", "Process Simulation Equipment");
}

// Helper: Add a string property with correct DI namespace BrowseName
void addStringProperty(UA_Server *server, UA_NodeId parentId,
                       UA_UInt16 browseNameNs, const char *name,
                       const char *value) {
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.displayName = UA_LOCALIZEDTEXT("en-US", (char *)name);
    attr.dataType = UA_TYPES[UA_TYPES_STRING].typeId;
    attr.accessLevel = UA_ACCESSLEVELMASK_READ;

    UA_String val = UA_STRING((char *)value);
    UA_Variant_setScalar(&attr.value, &val, &UA_TYPES[UA_TYPES_STRING]);

    // Generate a unique NodeId in the app namespace
    char nodeIdStr[128];
    snprintf(nodeIdStr, sizeof(nodeIdStr), "DI_%s", name);
    UA_NodeId nodeId = UA_NODEID_STRING(appNamespaceIndex, nodeIdStr);

    // BrowseName MUST be in the DI namespace for AIO discovery
    UA_QualifiedName browseName = UA_QUALIFIEDNAME(browseNameNs, (char *)name);

    UA_Server_addVariableNode(server, nodeId, parentId,
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY),
        browseName,
        UA_NODEID_NUMERIC(0, UA_NS0ID_PROPERTYTYPE),
        attr, NULL, NULL);
}
```

### Critical Detail: BrowseName Namespace

The BrowseName for DI properties (Manufacturer, Model, etc.) **must** use the DI namespace index, not the application namespace or namespace zero. This is the most common cause of discovery failures:

```c
// CORRECT: BrowseName in DI namespace
UA_QualifiedName browseName = UA_QUALIFIEDNAME(diNamespaceIndex, "Manufacturer");

// WRONG: BrowseName in namespace 0 — discovery will fail
UA_QualifiedName browseName = UA_QUALIFIEDNAME(0, "Manufacturer");
```

## Process Variables and Data Simulation

```c
#include <open62541/plugin/log_stdout.h>
#include <math.h>
#include <stdlib.h>

// Simulation state
typedef struct {
    UA_Double temperature;
    UA_Double pressure;
    UA_Double flowRate;
    UA_Int32 partsProcessed;
} SimulationState;

static SimulationState simState = {200.0, 1.0, 50.0, 0};

void addProcessVariables(UA_Server *server) {
    UA_NodeId deviceId = UA_NODEID_STRING(appNamespaceIndex, "SimulatorDevice");

    // Create a folder for process data
    UA_ObjectAttributes folderAttr = UA_ObjectAttributes_default;
    folderAttr.displayName = UA_LOCALIZEDTEXT("en-US", "ProcessData");

    UA_NodeId processFolderId = UA_NODEID_STRING(appNamespaceIndex, "ProcessData");
    UA_Server_addObjectNode(server, processFolderId, deviceId,
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
        UA_QUALIFIEDNAME(appNamespaceIndex, "ProcessData"),
        UA_NODEID_NUMERIC(0, UA_NS0ID_FOLDERTYPE),
        folderAttr, NULL, NULL);

    // Add numeric process variables
    addDoubleVariable(server, processFolderId, "Temperature", 200.0);
    addDoubleVariable(server, processFolderId, "Pressure", 1.0);
    addDoubleVariable(server, processFolderId, "FlowRate", 50.0);
    addInt32Variable(server, processFolderId, "PartsProcessed", 0);
}

void addDoubleVariable(UA_Server *server, UA_NodeId parentId,
                       const char *name, UA_Double initialValue) {
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.displayName = UA_LOCALIZEDTEXT("en-US", (char *)name);
    attr.dataType = UA_TYPES[UA_TYPES_DOUBLE].typeId;
    attr.accessLevel = UA_ACCESSLEVELMASK_READ;
    UA_Variant_setScalar(&attr.value, &initialValue, &UA_TYPES[UA_TYPES_DOUBLE]);

    UA_NodeId nodeId = UA_NODEID_STRING(appNamespaceIndex, (char *)name);
    UA_QualifiedName browseName = UA_QUALIFIEDNAME(appNamespaceIndex, (char *)name);

    UA_Server_addVariableNode(server, nodeId, parentId,
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
        browseName,
        UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
        attr, NULL, NULL);
}

void addInt32Variable(UA_Server *server, UA_NodeId parentId,
                      const char *name, UA_Int32 initialValue) {
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.displayName = UA_LOCALIZEDTEXT("en-US", (char *)name);
    attr.dataType = UA_TYPES[UA_TYPES_INT32].typeId;
    attr.accessLevel = UA_ACCESSLEVELMASK_READ;
    UA_Variant_setScalar(&attr.value, &initialValue, &UA_TYPES[UA_TYPES_INT32]);

    UA_NodeId nodeId = UA_NODEID_STRING(appNamespaceIndex, (char *)name);
    UA_QualifiedName browseName = UA_QUALIFIEDNAME(appNamespaceIndex, (char *)name);

    UA_Server_addVariableNode(server, nodeId, parentId,
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
        browseName,
        UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
        attr, NULL, NULL);
}

// Timer callback for simulation updates (called every 1000ms)
static void simulationCallback(UA_Server *server, void *data) {
    SimulationState *state = (SimulationState *)data;

    // Random walk with mean reversion
    double tempNoise = ((double)rand() / RAND_MAX - 0.5) * 2.0;
    state->temperature += tempNoise - 0.1 * (state->temperature - 200.0);
    if (state->temperature < 150.0) state->temperature = 150.0;
    if (state->temperature > 250.0) state->temperature = 250.0;

    double pressNoise = ((double)rand() / RAND_MAX - 0.5) * 0.02;
    state->pressure += pressNoise - 0.1 * (state->pressure - 1.0);
    if (state->pressure < 0.8) state->pressure = 0.8;
    if (state->pressure > 1.2) state->pressure = 1.2;

    double flowNoise = ((double)rand() / RAND_MAX - 0.5) * 1.0;
    state->flowRate += flowNoise - 0.1 * (state->flowRate - 50.0);
    if (state->flowRate < 40.0) state->flowRate = 40.0;
    if (state->flowRate > 60.0) state->flowRate = 60.0;

    state->partsProcessed = (state->partsProcessed + 1) % 1000;

    // Write updated values back to the address space
    UA_Variant tempValue;
    UA_Variant_setScalar(&tempValue, &state->temperature, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server,
        UA_NODEID_STRING(appNamespaceIndex, "Temperature"), tempValue);

    UA_Variant pressValue;
    UA_Variant_setScalar(&pressValue, &state->pressure, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server,
        UA_NODEID_STRING(appNamespaceIndex, "Pressure"), pressValue);

    UA_Variant flowValue;
    UA_Variant_setScalar(&flowValue, &state->flowRate, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server,
        UA_NODEID_STRING(appNamespaceIndex, "FlowRate"), flowValue);

    UA_Variant partsValue;
    UA_Variant_setScalar(&partsValue, &state->partsProcessed,
                         &UA_TYPES[UA_TYPES_INT32]);
    UA_Server_writeValue(server,
        UA_NODEID_STRING(appNamespaceIndex, "PartsProcessed"), partsValue);
}

// Register the simulation timer after server setup
void startSimulation(UA_Server *server) {
    UA_Server_addRepeatedCallback(server, simulationCallback,
                                  &simState, 1000 /* ms */, NULL);
}
```

## Discovery Endpoint Configuration

For AIO to discover the server, it must advertise its endpoint via mDNS or be reachable at a known address:

```c
void configureDiscoveryEndpoint(UA_Server *server) {
    UA_ServerConfig *config = UA_Server_getConfig(server);

    // Allow anonymous connections (no authentication required)
    config->accessControl.allowAnonymous = UA_TRUE;

    // Set the server's discovery URL
    // This is the URL that clients use to find and connect
    UA_String discoveryUrl = UA_STRING("opc.tcp://0.0.0.0:4840");
    config->serverUrls = (UA_String *)UA_malloc(sizeof(UA_String));
    UA_String_copy(&discoveryUrl, config->serverUrls);
    config->serverUrlsSize = 1;

    // Optional: Register with a Local Discovery Server (LDS)
    // UA_Server_addPeriodicServerRegisterCallback(server,
    //     NULL, "opc.tcp://localhost:4840", 10 * 60 * 1000, 500, NULL);
}
```

## TranslateBrowsePathsToNodeIds Support

AIO resolves DI browse paths like:

```
Objects / 2:DeviceSet / 3:SimulatorDevice / 2:Manufacturer
```

Where `2:` is the DI namespace index and `3:` is the application namespace index. The server must:

1. Have the correct namespace indices registered
2. Use `UA_QUALIFIEDNAME(nsIndex, name)` with the proper namespace for each BrowseName
3. Maintain proper hierarchical references (Organizes, HasComponent, HasProperty)

open62541 handles `TranslateBrowsePathsToNodeIds` automatically when the address space is correctly structured. No additional code is needed — just ensure BrowseNames have correct namespace indices.

## Buffer Sizing for Large Responses

When AIO browses the DI type hierarchy, response chunks can exceed 85 KiB. Configure buffers accordingly:

```c
void configureBufferSizes(UA_ServerConfig *config) {
    // Increase transport buffer sizes for large browse responses
    config->tcpBufSize = 256 * 1024;          // 256 KiB TCP buffer
    config->tcpMaxMsgSize = 4 * 1024 * 1024;  // 4 MiB max message size
    config->tcpMaxChunkCount = 64;            // Allow up to 64 chunks per message

    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                "Buffer sizes configured: TCP=%zu, MaxMsg=%zu, MaxChunks=%u",
                (size_t)config->tcpBufSize,
                (size_t)config->tcpMaxMsgSize,
                config->tcpMaxChunkCount);
}
```

## Full Example: Minimal Discovery-Enabled Server

```c
// file: opcua_discovery_server.c
//
// Compile:
//   gcc -o opcua_server opcua_discovery_server.c \
//       $(pkg-config --cflags --libs open62541)
//
// Run:
//   ./opcua_server

#include <open62541/server.h>
#include <open62541/server_config_default.h>
#include <open62541/plugin/log_stdout.h>
#include <signal.h>
#include <stdlib.h>

#define DI_NAMESPACE_URI "http://opcfoundation.org/UA/DI/"
#define APP_NAMESPACE_URI "urn:opcua:c:simulator:app"

static volatile UA_Boolean running = true;
static UA_UInt16 diNs = 0;
static UA_UInt16 appNs = 0;

static void stopHandler(int sig) { running = false; }

// --- Simulation state ---
static UA_Double temperature = 200.0;
static UA_Double pressure = 1.0;

static void simulationTick(UA_Server *server, void *data) {
    temperature += ((double)rand() / RAND_MAX - 0.5) * 2.0
                   - 0.1 * (temperature - 200.0);
    if (temperature < 150.0) temperature = 150.0;
    if (temperature > 250.0) temperature = 250.0;

    pressure += ((double)rand() / RAND_MAX - 0.5) * 0.02
                - 0.1 * (pressure - 1.0);
    if (pressure < 0.8) pressure = 0.8;
    if (pressure > 1.2) pressure = 1.2;

    UA_Variant val;
    UA_Variant_setScalar(&val, &temperature, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server,
        UA_NODEID_STRING(appNs, "Temperature"), val);

    UA_Variant_setScalar(&val, &pressure, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server,
        UA_NODEID_STRING(appNs, "Pressure"), val);
}

// --- Address space population ---
static void addProperty(UA_Server *server, UA_NodeId parent,
                        const char *name, const char *value) {
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.displayName = UA_LOCALIZEDTEXT("en-US", (char *)name);
    attr.dataType = UA_TYPES[UA_TYPES_STRING].typeId;
    attr.accessLevel = UA_ACCESSLEVELMASK_READ;
    UA_String strVal = UA_STRING((char *)value);
    UA_Variant_setScalar(&attr.value, &strVal, &UA_TYPES[UA_TYPES_STRING]);

    char nid[64];
    snprintf(nid, sizeof(nid), "DI_%s", name);

    UA_Server_addVariableNode(server,
        UA_NODEID_STRING(appNs, nid), parent,
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY),
        UA_QUALIFIEDNAME(diNs, (char *)name),  // DI namespace!
        UA_NODEID_NUMERIC(0, UA_NS0ID_PROPERTYTYPE),
        attr, NULL, NULL);
}

static void populateAddressSpace(UA_Server *server) {
    // Register namespaces
    diNs = UA_Server_addNamespace(server, DI_NAMESPACE_URI);
    appNs = UA_Server_addNamespace(server, APP_NAMESPACE_URI);

    // TopologyElementType
    UA_ObjectTypeAttributes teAttr = UA_ObjectTypeAttributes_default;
    teAttr.displayName = UA_LOCALIZEDTEXT("en-US", "TopologyElementType");
    UA_Server_addObjectTypeNode(server,
        UA_NODEID_NUMERIC(diNs, 1001),
        UA_NODEID_NUMERIC(0, UA_NS0ID_BASEOBJECTTYPE),
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE),
        UA_QUALIFIEDNAME(diNs, "TopologyElementType"),
        teAttr, NULL, NULL);

    // DeviceType
    UA_ObjectTypeAttributes dtAttr = UA_ObjectTypeAttributes_default;
    dtAttr.displayName = UA_LOCALIZEDTEXT("en-US", "DeviceType");
    UA_Server_addObjectTypeNode(server,
        UA_NODEID_NUMERIC(diNs, 1002),
        UA_NODEID_NUMERIC(diNs, 1001),
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE),
        UA_QUALIFIEDNAME(diNs, "DeviceType"),
        dtAttr, NULL, NULL);

    // DeviceSet folder
    UA_ObjectAttributes dsAttr = UA_ObjectAttributes_default;
    dsAttr.displayName = UA_LOCALIZEDTEXT("en-US", "DeviceSet");
    UA_Server_addObjectNode(server,
        UA_NODEID_NUMERIC(diNs, 5001),
        UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
        UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
        UA_QUALIFIEDNAME(diNs, "DeviceSet"),
        UA_NODEID_NUMERIC(0, UA_NS0ID_FOLDERTYPE),
        dsAttr, NULL, NULL);

    // Device instance
    UA_ObjectAttributes devAttr = UA_ObjectAttributes_default;
    devAttr.displayName = UA_LOCALIZEDTEXT("en-US", "C2 Simulator");
    UA_NodeId deviceId = UA_NODEID_STRING(appNs, "SimDevice");
    UA_Server_addObjectNode(server, deviceId,
        UA_NODEID_NUMERIC(diNs, 5001),
        UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
        UA_QUALIFIEDNAME(appNs, "SimDevice"),
        UA_NODEID_NUMERIC(diNs, 1002),  // HasTypeDefinition: DeviceType
        devAttr, NULL, NULL);

    // DI Properties
    addProperty(server, deviceId, "Manufacturer", "OPC UA C Simulator Corp");
    addProperty(server, deviceId, "Model", "LARGE-C2-1000");
    addProperty(server, deviceId, "SerialNumber", "SN-C2-2024-001");
    addProperty(server, deviceId, "HardwareRevision", "2.0");
    addProperty(server, deviceId, "SoftwareRevision", "1.5.0");
    addProperty(server, deviceId, "DeviceClass", "Process Simulation Equipment");

    // Process variables
    UA_VariableAttributes tempAttr = UA_VariableAttributes_default;
    tempAttr.displayName = UA_LOCALIZEDTEXT("en-US", "Temperature");
    tempAttr.dataType = UA_TYPES[UA_TYPES_DOUBLE].typeId;
    tempAttr.accessLevel = UA_ACCESSLEVELMASK_READ;
    UA_Variant_setScalar(&tempAttr.value, &temperature, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_addVariableNode(server,
        UA_NODEID_STRING(appNs, "Temperature"),
        deviceId,
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
        UA_QUALIFIEDNAME(appNs, "Temperature"),
        UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
        tempAttr, NULL, NULL);

    UA_VariableAttributes pressAttr = UA_VariableAttributes_default;
    pressAttr.displayName = UA_LOCALIZEDTEXT("en-US", "Pressure");
    pressAttr.dataType = UA_TYPES[UA_TYPES_DOUBLE].typeId;
    pressAttr.accessLevel = UA_ACCESSLEVELMASK_READ;
    UA_Variant_setScalar(&pressAttr.value, &pressure, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_addVariableNode(server,
        UA_NODEID_STRING(appNs, "Pressure"),
        deviceId,
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
        UA_QUALIFIEDNAME(appNs, "Pressure"),
        UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
        pressAttr, NULL, NULL);
}

int main(void) {
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    UA_Server *server = UA_Server_new();
    UA_ServerConfig *config = UA_Server_getConfig(server);
    UA_ServerConfig_setMinimal(config, 4840, NULL);

    // Buffer sizing for large DI browse responses
    config->tcpBufSize = 256 * 1024;
    config->tcpMaxMsgSize = 4 * 1024 * 1024;
    config->tcpMaxChunkCount = 64;

    populateAddressSpace(server);

    // Start simulation timer (1 second interval)
    UA_Server_addRepeatedCallback(server, simulationTick, NULL, 1000, NULL);

    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                "Discovery-enabled OPC UA server running on opc.tcp://0.0.0.0:4840");

    UA_StatusCode retval = UA_Server_run(server, &running);
    UA_Server_delete(server);
    return retval == UA_STATUSCODE_GOOD ? 0 : 1;
}
```

### Dockerfile for the C Server

```dockerfile
FROM ubuntu:22.04 AS builder
RUN apt-get update && apt-get install -y \
    build-essential cmake git libssl-dev pkg-config
RUN git clone --branch v1.3.9 --depth 1 \
    https://github.com/open62541/open62541.git /open62541
WORKDIR /open62541/build
RUN cmake .. -DUA_ENABLE_DISCOVERY=ON -DUA_NAMESPACE_ZERO=FULL \
    -DUA_ENABLE_SUBSCRIPTIONS=ON -DCMAKE_BUILD_TYPE=Release && \
    make -j$(nproc) && make install && ldconfig

WORKDIR /app
COPY opcua_discovery_server.c .
RUN gcc -o opcua_server opcua_discovery_server.c \
    $(pkg-config --cflags --libs open62541)

FROM ubuntu:22.04
RUN apt-get update && apt-get install -y libssl3 && rm -rf /var/lib/apt/lists/*
COPY --from=builder /app/opcua_server /usr/local/bin/
COPY --from=builder /usr/local/lib/libopen62541* /usr/local/lib/
RUN ldconfig
EXPOSE 4840
CMD ["opcua_server"]
```

## Comparison with This Project (Rust)

| Aspect | C (open62541) | Rust (this project) |
|--------|---------------|---------------------|
| **Library** | open62541 v1.3+ | opcua 0.12 (locka99/opcua) |
| **DI Namespace Registration** | `UA_Server_addNamespace()` | `address_space.register_namespace()` |
| **BrowseName with NS** | `UA_QUALIFIEDNAME(nsIdx, name)` | `QualifiedName::new(ns, name)` |
| **DeviceSet Folder** | `UA_Server_addObjectNode()` with FolderType | `ObjectBuilder::new().is_folder().organized_by()` |
| **Type Hierarchy** | `UA_Server_addObjectTypeNode()` chain | `ObjectTypeBuilder::new().subtype_of()` chain |
| **Properties** | `UA_Server_addVariableNode()` with HasProperty | `VariableBuilder::new().property_of()` |
| **Simulation Timer** | `UA_Server_addRepeatedCallback()` | `server.add_polling_action()` |
| **Buffer Config** | `config->tcpBufSize = 256*1024` | `.send_buffer_size(256*1024)` |
| **Listen Port** | 4840 (default) | 5000 (custom) |
| **Authentication** | `allowAnonymous = UA_TRUE` | `.new_anonymous()` builder |

### Key Architectural Differences

1. **Memory management**: C requires manual allocation/deallocation of UA types; Rust handles this via ownership and `Drop` traits.
2. **Address space construction**: Both build the address space programmatically. The C version uses explicit parent/reference/type parameters per call; the Rust version uses builder patterns.
3. **Thread safety**: The C version uses callbacks in the server's event loop; the Rust version uses `Arc<Mutex<>>` for shared state.
4. **Error handling**: C uses `UA_StatusCode` return values; Rust uses `Result<>` types.

### Discovery Compatibility

Both implementations produce identical OPC UA address-space structures that AIO can discover. The critical requirements are:

1. `DeviceSet` folder under `Objects` with DI-namespace BrowseName
2. Device type hierarchy: `BaseObjectType → TopologyElementType → DeviceType → AppType`
3. Device instance organized by `DeviceSet` with `HasTypeDefinition` pointing to the app type
4. DI properties with BrowseNames in the DI namespace index
5. Sufficient buffer sizes for large browse responses (≥256 KiB)
