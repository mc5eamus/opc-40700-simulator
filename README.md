# OPC 40700 Surface Technology Simulator

An OPC UA simulator implementing the [OPC 40700 Surface Technology – General Types](https://opcfoundation.org/developer-tools/documents/view/209) companion specification, built in Rust.

## Features

- OPC UA server on `opc.tcp://0.0.0.0:5000`
- Simulated surface technology system with temperature, pressure, flow, and coating controllers
- Job management with progress tracking
- Realistic telemetry via random-walk simulation updated every second
- Anonymous connections (no auth required)
- Auto-generated self-signed certificates

## Address Space

```
Objects/
└── SurfaceTechnologySystem/
    ├── SystemIdentification/   (Manufacturer, Model, SerialNumber, …)
    ├── TemperatureController/  (CurrentTemperature, TargetTemperature, HeatingPower, …)
    ├── PressureController/     (CurrentPressure, TargetPressure, ValvePosition, …)
    ├── FlowController/         (CurrentFlowRate, TargetFlowRate, PumpSpeed, …)
    ├── CoatingUnit/            (CoatingThickness, SprayPressure, ConveyorSpeed, …)
    └── JobManagement/          (CurrentJobId, JobStatus, PartsProcessed, JobProgress, …)
```

## Quick Start

### Build & Run Locally

```bash
cargo build --release
./target/release/opc-40700-simulator
```

### Docker

```bash
docker build -t opc-40700-simulator .
docker run -p 5000:5000 opc-40700-simulator
```

### Connect

Use any OPC UA client (e.g., UaExpert, Prosys OPC UA Browser) and connect to:

```
opc.tcp://localhost:5000
```

## Environment

- **Rust edition**: 2021
- **OPC UA crate**: `opcua` 0.12 (locka99/opcua)
- **Logging**: `RUST_LOG=info` (uses `env_logger`)

## License

MIT

## Web Frontend

A React-based web frontend provides real-time OPC UA visualization via a WebSocket bridge.

### Quick Start

1. Start the OPC UA simulator: `cargo run --release`
2. Start the WebSocket bridge: `cd test-client && npm run dev:server`
3. Start the frontend dev server: `cd test-client/frontend && npm run dev`
4. Open http://localhost:5173

See [test-client/frontend/README.md](test-client/frontend/README.md) for details.
