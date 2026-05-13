# OPC 40700 Surface Technology Monitor — Frontend

A React + TypeScript + Vite frontend that visualizes the OPC UA device structure and live telemetry from the OPC 40700 Surface Technology Simulator.

## Architecture

```
OPC UA Server (Rust, port 5000)
  ↕ OPC UA
WebSocket Bridge (Node.js, port 3001)   ← test-client/src/server.ts
  ↕ WebSocket
React Frontend (Vite, port 5173)        ← this project
```

## Setup

```bash
# Install dependencies
npm install

# Start the dev server (assumes the WebSocket bridge is running)
npm run dev
```

## Prerequisites

Before starting the frontend, ensure:

1. The OPC UA simulator is running: `cargo run --release` (from repo root)
2. The WebSocket bridge is running: `cd test-client && npm run dev:server`

## Build

```bash
npm run build    # outputs to dist/
npm run preview  # preview the production build
```

## Components

- **ConnectionStatusBar** — shows WebSocket connection state with color-coded indicator
- **TreeView** — collapsible OPC UA address space tree (left panel)
- **Dashboard** — live variable values grouped by subsystem with real-time updates (right panel)

## Tech Stack

- React 19 + TypeScript
- Vite
- Tailwind CSS
