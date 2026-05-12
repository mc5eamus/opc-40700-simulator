# OPC 40700 Surface Technology Simulator

An OPC UA simulator implementing the [OPC 40700 Surface Technology – General Types](https://opcfoundation.org/developer-tools/documents/view/209) companion specification, built in Rust.

## Features

- OPC UA server on `opc.tcp://0.0.0.0:5000`
- Simulated surface technology system with temperature, pressure, flow, and coating controllers
- Job management with progress tracking
- Realistic telemetry via random-walk simulation updated every second
- **OPC UA DI (Device Integration) namespace** (`http://opcfoundation.org/UA/DI/`) for auto-discovery
- Anonymous connections (no auth required)
- Auto-generated self-signed certificates
- Increased OPC UA message/chunk/receive buffer limits for secure AIO asset discovery payloads

## Address Space

```
Objects/
├── DeviceSet/                          (DI namespace - for auto-discovery)
│   └── SurfaceTechnologyDevice/        (DeviceType instance)
│       ├── Manufacturer                "OPC40700 Simulator Corp"
│       ├── Model                       "ST-SIM-1000"
│       ├── SerialNumber                "SN-2024-40700-001"
│       ├── HardwareRevision            "1.0"
│       ├── SoftwareRevision            "1.0.0"
│       ├── DeviceManual                (URL)
│       └── DeviceClass                 "Surface Treatment Equipment"
└── SurfaceTechnologySystem/            (component of device)
    ├── SystemIdentification/   (Manufacturer, Model, SerialNumber, …)
    ├── TemperatureController/  (CurrentTemperature, TargetTemperature, HeatingPower, …)
    ├── PressureController/     (CurrentPressure, TargetPressure, ValvePosition, …)
    ├── FlowController/         (CurrentFlowRate, TargetFlowRate, PumpSpeed, …)
    ├── CoatingUnit/            (CoatingThickness, SprayPressure, ConveyorSpeed, …)
    └── JobManagement/          (CurrentJobId, JobStatus, PartsProcessed, JobProgress, …)
```

### DI Namespace Support

The simulator implements the OPC UA DI (Device Integration) companion specification
namespace (`http://opcfoundation.org/UA/DI/`). This enables automatic asset discovery
by tools like Azure IoT Operations (AIO) that rely on the DI specification to identify
equipment and data points.

Key DI elements:
- **DeviceSet** folder under Objects containing discoverable devices
- **DeviceType** type definition for the device instance
- Standard DI properties: Manufacturer, Model, SerialNumber, HardwareRevision, SoftwareRevision, DeviceManual, DeviceClass

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
