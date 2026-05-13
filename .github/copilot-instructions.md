# Copilot Instructions

## Project Overview

This is an **OPC UA simulator** implementing the [OPC 40700 Surface Technology – General Types](https://opcfoundation.org/developer-tools/documents/view/209) companion specification, built in Rust using the [opcua](https://github.com/locka99/opcua) crate (v0.12).

The simulator exposes a complete OPC UA server with DI (Device Integration) namespace support for automatic asset discovery by Azure IoT Operations (AIO).

## Project Structure

```
opc-40700-simulator/
├── src/
│   └── main.rs              # Complete server implementation (address space, simulation, main)
├── vendor/
│   └── opcua/               # Vendored opcua crate (patched)
├── test-client/             # Node.js/TypeScript OPC UA test client
│   ├── src/
│   ├── package.json
│   └── tsconfig.json
├── docs/
│   └── opcua-discovery-c-implementation.md  # C (open62541) discovery implementation reference
├── Cargo.toml               # Rust project manifest
├── Cargo.lock
├── Dockerfile               # Multi-stage Docker build
├── README.md
└── .github/
    └── workflows/
        ├── ci.yml
        └── build-and-publish.yml
```

## Key Architecture

### Single-file Server (`src/main.rs`)

The entire OPC UA server is implemented in a single file with these main sections:

1. **Constants** — Buffer sizes, simulation setpoints, and ranges
2. **SimState struct** — Mutable simulation state for telemetry random walks
3. **`populate_address_space()`** — Builds the complete OPC UA address space:
   - Registers DI namespace (`http://opcfoundation.org/UA/DI/`) and application namespace
   - Creates DI type hierarchy: `BaseObjectType → TopologyElementType → DeviceType → OPC40700DeviceType`
   - Creates `DeviceSet` folder under `Objects`
   - Adds device instance with DI-standard properties
   - Adds `SurfaceTechnologySystem` with process variable folders
4. **`main()`** — Server configuration and startup with polling-based simulation

### DI Namespace (Critical for Discovery)

- BrowseNames for DI nodes **must** use `QualifiedName::new(di_ns, name)` with the correct DI namespace index
- The `DeviceSet` folder is organized directly under `Objects`
- `SurfaceTechnologySystem` is a component of `SurfaceTechnologyDevice` (not directly under Objects)

### Buffer Configuration

Both `send_buffer_size` and `receive_buffer_size` are set to 256 KiB. Both must be set — omitting `send_buffer_size` causes a panic when large DI browse responses (>65 KiB) are sent.

## Build & Test

```bash
# Build
cargo build --release

# Run tests
cargo test

# Run the server
./target/release/opc-40700-simulator

# Docker
docker build -t opc-40700-simulator .
docker run -p 5000:5000 opc-40700-simulator
```

## Conventions

- **Rust edition**: 2021
- **Logging**: `env_logger` with `log` crate macros (`info!`, etc.)
- **Server config**: Inline via `ServerBuilder` method chain (no external config file)
- **OPC UA endpoint**: `opc.tcp://0.0.0.0:5000` with anonymous authentication
- **Simulation**: Random-walk with mean-reversion, updated every 1 second via `add_polling_action`
- **Testing**: Unit tests in `#[cfg(test)] mod tests` at end of `main.rs`

## Reference Documentation

- [OPC UA Discovery in C (open62541)](../docs/opcua-discovery-c-implementation.md) — Detailed reference implementation showing how to build a discovery-compatible OPC UA server in C, with code examples covering DI namespace setup, DeviceSet folder creation, type hierarchies, and buffer configuration. Useful when comparing approaches or implementing similar functionality in other languages.
