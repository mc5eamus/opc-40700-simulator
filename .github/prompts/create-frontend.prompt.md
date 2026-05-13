# OPC UA Frontend Task

You are working in an OPC UA simulator repository (OPC 40700 Surface Technology).
The Rust server simulates a surface technology system on `opc.tcp://localhost:5000`.
There is a Node.js/TypeScript test client in `test-client/` that uses `node-opcua`
to browse the address space, read variables, and subscribe to live telemetry.

## Your Task

Create a web frontend that visualizes the OPC UA device structure and live telemetry.

## Step 1: WebSocket Bridge Server

Create `test-client/src/server.ts` — a Node.js WebSocket server that bridges
OPC UA data to the browser:

- Use the `ws` npm package (add it to test-client/package.json dependencies, and add @types/ws to devDependencies)
- Listen on port 3001
- On WebSocket client connect:
  - Connect to the OPC UA server at `opc.tcp://localhost:5000`
  - Browse the full `SurfaceTechnologySystem` address space tree recursively
  - Send the tree as a JSON message: `{ type: "tree", data: <tree> }`
  - Subscribe to all dynamic variables and forward value changes as:
    `{ type: "update", name: <string>, value: <number|string>, timestamp: <ISO string> }`
- On WebSocket client disconnect: clean up OPC UA session
- Add `"dev:server": "ts-node src/server.ts"` script to `test-client/package.json`

Use the existing client.ts as a reference for OPC UA connection patterns (security
mode, namespace resolution, browse logic, subscription setup). The namespace URI
is `urn:opc40700:surface-technology`.

Variables to monitor (from the existing client):
- Temperature: CurrentTemperature, TargetTemperature, TC_HeatingPower, TC_ControllerState
- Pressure: CurrentPressure, TargetPressure, PC_ValvePosition, PC_ControllerState
- Flow: CurrentFlowRate, TargetFlowRate, FC_PumpSpeed, FC_ControllerState
- Coating: CoatingThickness, TargetThickness, SprayPressure, ConveyorSpeed, CU_UnitState
- Job: CurrentJobId, JobStatus, PartsProcessed, TotalParts, JobProgress
- System: Manufacturer, Model, SerialNumber, SoftwareVersion, SystemState

Do NOT modify or break the existing `test-client/src/client.ts`.

## Step 2: React + Vite Frontend

Create a React + Vite + TypeScript project in `test-client/frontend/`:

```bash
cd test-client && npm create vite@latest frontend -- --template react-ts
cd frontend && npm install
npm install -D tailwindcss @tailwindcss/vite
```

Configure Tailwind CSS with the Vite plugin.

### Components to build:

1. **TreeView** (left panel):
   - Renders OPC UA address space as a collapsible tree
   - Folder icon (📁) for Object nodes, chart icon (📊) for Variable nodes
   - Clicking a variable node highlights it and shows its current value
   - Nodes expand/collapse on click

2. **Dashboard** (right panel):
   - Groups variables by controller subsystem (5 groups: Temperature, Pressure, Flow, Coating, Job)
   - Each group is a card with the group name as header
   - Shows variable name + live value, updated in real-time
   - Color-code states: green for "Running"/"Good", yellow for "Idle", red for "Error"/"Fault"
   - Show a progress bar for JobProgress (0-100%)

3. **ConnectionStatus** (top bar):
   - Shows WebSocket connection state (Connected/Disconnected/Reconnecting)
   - Green dot when connected, red when disconnected
   - Auto-reconnects with exponential backoff

4. **Layout**:
   - Responsive two-column layout: tree on left (~30%), dashboard on right (~70%)
   - Dark industrial theme (dark gray background, light text) — fitting for factory floor software
   - Header with app title: "OPC 40700 Surface Technology Monitor"

### WebSocket Hook:

Create `useOpcUaSocket` custom hook:
- Connects to `ws://localhost:3001`
- Manages tree state and variable values state
- Handles reconnection with exponential backoff (1s, 2s, 4s, 8s, max 30s)
- Returns: `{ tree, values, connectionStatus }`

## Step 3: Documentation

Add a "Web Frontend" section to the root `README.md` explaining:
```
### Web Frontend
1. Start the OPC UA simulator: `cargo run --release`
2. Start the WebSocket bridge: `cd test-client && npm run dev:server`
3. Start the frontend dev server: `cd test-client/frontend && npm run dev`
4. Open http://localhost:5173
```

Add a `test-client/frontend/README.md` with setup and development instructions.

## Step 4: Verify

- Run `cd test-client && npm install` — must succeed
- Run `cd test-client/frontend && npm install` — must succeed
- Run `cd test-client/frontend && npm run build` — Vite build must succeed with zero errors
- If anything fails, fix it before proceeding

## Step 5: Commit

- `git add -A`
- `git commit -m "feat: add React frontend with WebSocket bridge for OPC UA visualization"`
- Include in the commit message body a summary of what was added

## Constraints

- Do NOT modify Rust code (src/main.rs, Cargo.toml, etc.)
- Do NOT remove or break test-client/src/client.ts
- Use TypeScript throughout (no .js files)
- Keep the frontend as a separate Vite SPA (not embedded in the Node.js server)
