use log::info;
use opcua::server::prelude::*;
use opcua::sync::Mutex;
use rand::Rng;
use std::sync::Arc;

// OPC UA transport buffer sizes.
//
// AIO's FetchSubTypesAsync browse of the DI type hierarchy has been observed to produce
// response chunks up to ~85 KiB.  Both send and receive buffers must comfortably exceed
// that value, otherwise the server panics inside secure_channel::apply_security() with
// "The size of the message chunk N exceeds the size of the destination buffer M".
const SEND_BUFFER_SIZE: usize = 256 * 1024; // 256 KiB
const RECEIVE_BUFFER_SIZE: usize = 256 * 1024; // 256 KiB

// Target setpoints and ranges for surface technology controllers
const TARGET_TEMPERATURE: f64 = 200.0;
const TEMP_MIN: f64 = 150.0;
const TEMP_MAX: f64 = 250.0;
const TEMP_RANGE: f64 = 50.0; // half-range for control normalization

const TARGET_PRESSURE: f64 = 1.0;
const PRESSURE_MIN: f64 = 0.8;
const PRESSURE_MAX: f64 = 1.2;
const PRESSURE_RANGE: f64 = 0.2;

const TARGET_FLOW_RATE: f64 = 50.0;
const FLOW_MIN: f64 = 40.0;
const FLOW_MAX: f64 = 60.0;
const FLOW_RANGE: f64 = 10.0;

const TARGET_THICKNESS: f64 = 10.0;
const THICKNESS_MIN: f64 = 8.0;
const THICKNESS_MAX: f64 = 12.0;

const TARGET_SPRAY_PRESSURE: f64 = 2.0;
const SPRAY_PRESSURE_MIN: f64 = 1.8;
const SPRAY_PRESSURE_MAX: f64 = 2.2;

const TARGET_CONVEYOR_SPEED: f64 = 1.0;
const CONVEYOR_MIN: f64 = 0.8;
const CONVEYOR_MAX: f64 = 1.2;

const TOTAL_PARTS: i32 = 1000;

/// Mutable simulation state for telemetry random walks.
struct SimState {
    current_temperature: f64,
    current_pressure: f64,
    current_flow_rate: f64,
    coating_thickness: f64,
    spray_pressure: f64,
    conveyor_speed: f64,
    parts_processed: i32,
}

impl SimState {
    fn new() -> Self {
        Self {
            current_temperature: TARGET_TEMPERATURE,
            current_pressure: TARGET_PRESSURE,
            current_flow_rate: TARGET_FLOW_RATE,
            coating_thickness: TARGET_THICKNESS,
            spray_pressure: TARGET_SPRAY_PRESSURE,
            conveyor_speed: TARGET_CONVEYOR_SPEED,
            parts_processed: 0,
        }
    }
}

/// Registers the DI and application namespaces, then populates the OPC UA address space
/// with the DI type hierarchy, the DeviceSet folder, the OPC40700DeviceType, the
/// SurfaceTechnologyDevice instance, and all process-variable folders.
///
/// Returns `(ns, di_ns)` — the namespace indices for the application namespace and the
/// DI companion-spec namespace respectively.
fn populate_address_space(as_ref: &mut AddressSpace) -> (u16, u16) {
    // Register namespaces (DI first so it lands at a lower index)
    let di_ns = as_ref
        .register_namespace("http://opcfoundation.org/UA/DI/")
        .unwrap();
    let ns = as_ref
        .register_namespace("urn:opc40700:surface-technology")
        .unwrap();

    // --- DI Namespace: Object Types ---
    // TopologyElementType (DI ns, i=1001) - subtype of BaseObjectType
    let topology_element_type_id = NodeId::new(di_ns, 1001u32);
    ObjectTypeBuilder::new(
        &topology_element_type_id,
        QualifiedName::new(di_ns, "TopologyElementType"),
        "TopologyElementType",
    )
    .subtype_of(ObjectTypeId::BaseObjectType)
    .is_abstract(false)
    .insert(as_ref);

    // DeviceType (DI ns, i=1002) - subtype of TopologyElementType
    let device_type_id = NodeId::new(di_ns, 1002u32);
    ObjectTypeBuilder::new(
        &device_type_id,
        QualifiedName::new(di_ns, "DeviceType"),
        "DeviceType",
    )
    .subtype_of(topology_element_type_id.clone())
    .is_abstract(false)
    .insert(as_ref);

    // --- DI Namespace: DeviceSet folder under Objects (DI: i=5001) ---
    let device_set_id = NodeId::new(di_ns, 5001u32);
    ObjectBuilder::new(
        &device_set_id,
        QualifiedName::new(di_ns, "DeviceSet"),
        "DeviceSet",
    )
    .is_folder()
    .organized_by(NodeId::objects_folder_id())
    .insert(as_ref);

    // OPC 40700 specific type inheriting from DI DeviceType
    let opc40700_device_type_id = NodeId::new(ns, "OPC40700DeviceType");
    ObjectTypeBuilder::new(
        &opc40700_device_type_id,
        QualifiedName::new(ns, "OPC40700DeviceType"),
        "OPC40700DeviceType",
    )
    .subtype_of(device_type_id.clone())
    .is_abstract(false)
    .insert(as_ref);

    VariableBuilder::new(
        &NodeId::new(ns, "OPC40700DeviceType_Manufacturer"),
        QualifiedName::new(di_ns, "Manufacturer"),
        "Manufacturer",
    )
    .data_type(DataTypeId::String)
    .value(UAString::from(""))
    .property_of(opc40700_device_type_id.clone())
    .has_type_definition(VariableTypeId::PropertyType)
    .insert(as_ref);

    VariableBuilder::new(
        &NodeId::new(ns, "OPC40700DeviceType_Model"),
        QualifiedName::new(di_ns, "Model"),
        "Model",
    )
    .data_type(DataTypeId::String)
    .value(UAString::from(""))
    .property_of(opc40700_device_type_id.clone())
    .has_type_definition(VariableTypeId::PropertyType)
    .insert(as_ref);

    VariableBuilder::new(
        &NodeId::new(ns, "OPC40700DeviceType_SerialNumber"),
        QualifiedName::new(di_ns, "SerialNumber"),
        "SerialNumber",
    )
    .data_type(DataTypeId::String)
    .value(UAString::from(""))
    .property_of(opc40700_device_type_id.clone())
    .has_type_definition(VariableTypeId::PropertyType)
    .insert(as_ref);

    // --- DI Device instance: SurfaceTechnologyDevice ---
    let device_id = NodeId::new(ns, "SurfaceTechnologyDevice");
    ObjectBuilder::new(
        &device_id,
        QualifiedName::new(ns, "SurfaceTechnologyDevice"),
        "Surface Technology System ST-SIM-1000",
    )
    .has_type_definition(opc40700_device_type_id.clone())
    .organized_by(device_set_id.clone())
    .insert(as_ref);

    // DI-standard properties on the device instance
    VariableBuilder::new(
        &NodeId::new(ns, "DI_Manufacturer"),
        QualifiedName::new(di_ns, "Manufacturer"),
        "Manufacturer",
    )
    .data_type(DataTypeId::String)
    .value(UAString::from("OPC40700 Simulator Corp"))
    .property_of(device_id.clone())
    .has_type_definition(VariableTypeId::PropertyType)
    .insert(as_ref);

    VariableBuilder::new(
        &NodeId::new(ns, "DI_Model"),
        QualifiedName::new(di_ns, "Model"),
        "Model",
    )
    .data_type(DataTypeId::String)
    .value(UAString::from("ST-SIM-1000"))
    .property_of(device_id.clone())
    .has_type_definition(VariableTypeId::PropertyType)
    .insert(as_ref);

    VariableBuilder::new(
        &NodeId::new(ns, "DI_SerialNumber"),
        QualifiedName::new(di_ns, "SerialNumber"),
        "SerialNumber",
    )
    .data_type(DataTypeId::String)
    .value(UAString::from("SN-2024-40700-001"))
    .property_of(device_id.clone())
    .has_type_definition(VariableTypeId::PropertyType)
    .insert(as_ref);

    VariableBuilder::new(
        &NodeId::new(ns, "DI_HardwareRevision"),
        QualifiedName::new(di_ns, "HardwareRevision"),
        "HardwareRevision",
    )
    .data_type(DataTypeId::String)
    .value(UAString::from("1.0"))
    .property_of(device_id.clone())
    .has_type_definition(VariableTypeId::PropertyType)
    .insert(as_ref);

    VariableBuilder::new(
        &NodeId::new(ns, "DI_SoftwareRevision"),
        QualifiedName::new(di_ns, "SoftwareRevision"),
        "SoftwareRevision",
    )
    .data_type(DataTypeId::String)
    .value(UAString::from("1.0.0"))
    .property_of(device_id.clone())
    .has_type_definition(VariableTypeId::PropertyType)
    .insert(as_ref);

    VariableBuilder::new(
        &NodeId::new(ns, "DI_DeviceManual"),
        QualifiedName::new(di_ns, "DeviceManual"),
        "DeviceManual",
    )
    .data_type(DataTypeId::String)
    .value(UAString::from("https://github.com/mc5eamus/opc-40700-simulator"))
    .property_of(device_id.clone())
    .has_type_definition(VariableTypeId::PropertyType)
    .insert(as_ref);

    VariableBuilder::new(
        &NodeId::new(ns, "DI_DeviceClass"),
        QualifiedName::new(di_ns, "DeviceClass"),
        "DeviceClass",
    )
    .data_type(DataTypeId::String)
    .value(UAString::from("Surface Treatment Equipment"))
    .property_of(device_id.clone())
    .has_type_definition(VariableTypeId::PropertyType)
    .insert(as_ref);

    // --- SurfaceTechnologySystem folder (component of device, also under Objects) ---
    let system_folder_id = NodeId::new(ns, "SurfaceTechnologySystem");
    ObjectBuilder::new(
        &system_folder_id,
        QualifiedName::new(ns, "SurfaceTechnologySystem"),
        "SurfaceTechnologySystem",
    )
    .is_folder()
    .component_of(device_id.clone())
    .insert(as_ref);
    let system_folder = system_folder_id;

    // --- SystemIdentification ---
    let id_folder = as_ref
        .add_folder("SystemIdentification", "SystemIdentification", &system_folder)
        .unwrap();
    as_ref.add_variables(
        vec![
            Variable::new(
                &NodeId::new(ns, "Manufacturer"),
                "Manufacturer",
                "Manufacturer",
                UAString::from("OPC40700 Simulator Corp"),
            ),
            Variable::new(
                &NodeId::new(ns, "Model"),
                "Model",
                "Model",
                UAString::from("ST-SIM-1000"),
            ),
            Variable::new(
                &NodeId::new(ns, "SerialNumber"),
                "SerialNumber",
                "SerialNumber",
                UAString::from("SN-2024-40700-001"),
            ),
            Variable::new(
                &NodeId::new(ns, "SoftwareVersion"),
                "SoftwareVersion",
                "SoftwareVersion",
                UAString::from("1.0.0"),
            ),
            Variable::new(
                &NodeId::new(ns, "SystemState"),
                "SystemState",
                "SystemState",
                1i32,
            ),
        ],
        &id_folder,
    );

    // --- TemperatureController ---
    let temp_folder = as_ref
        .add_folder(
            "TemperatureController",
            "TemperatureController",
            &system_folder,
        )
        .unwrap();
    as_ref.add_variables(
        vec![
            Variable::new(
                &NodeId::new(ns, "CurrentTemperature"),
                "CurrentTemperature",
                "CurrentTemperature",
                TARGET_TEMPERATURE,
            ),
            Variable::new(
                &NodeId::new(ns, "TargetTemperature"),
                "TargetTemperature",
                "TargetTemperature",
                TARGET_TEMPERATURE,
            ),
            Variable::new(
                &NodeId::new(ns, "TC_HeatingPower"),
                "HeatingPower",
                "HeatingPower",
                50.0f64,
            ),
            Variable::new(
                &NodeId::new(ns, "TC_ControllerState"),
                "ControllerState",
                "ControllerState",
                1i32,
            ),
        ],
        &temp_folder,
    );

    // --- PressureController ---
    let press_folder = as_ref
        .add_folder(
            "PressureController",
            "PressureController",
            &system_folder,
        )
        .unwrap();
    as_ref.add_variables(
        vec![
            Variable::new(
                &NodeId::new(ns, "CurrentPressure"),
                "CurrentPressure",
                "CurrentPressure",
                TARGET_PRESSURE,
            ),
            Variable::new(
                &NodeId::new(ns, "TargetPressure"),
                "TargetPressure",
                "TargetPressure",
                TARGET_PRESSURE,
            ),
            Variable::new(
                &NodeId::new(ns, "PC_ValvePosition"),
                "ValvePosition",
                "ValvePosition",
                50.0f64,
            ),
            Variable::new(
                &NodeId::new(ns, "PC_ControllerState"),
                "ControllerState",
                "ControllerState",
                1i32,
            ),
        ],
        &press_folder,
    );

    // --- FlowController ---
    let flow_folder = as_ref
        .add_folder("FlowController", "FlowController", &system_folder)
        .unwrap();
    as_ref.add_variables(
        vec![
            Variable::new(
                &NodeId::new(ns, "CurrentFlowRate"),
                "CurrentFlowRate",
                "CurrentFlowRate",
                TARGET_FLOW_RATE,
            ),
            Variable::new(
                &NodeId::new(ns, "TargetFlowRate"),
                "TargetFlowRate",
                "TargetFlowRate",
                TARGET_FLOW_RATE,
            ),
            Variable::new(
                &NodeId::new(ns, "FC_PumpSpeed"),
                "PumpSpeed",
                "PumpSpeed",
                50.0f64,
            ),
            Variable::new(
                &NodeId::new(ns, "FC_ControllerState"),
                "ControllerState",
                "ControllerState",
                1i32,
            ),
        ],
        &flow_folder,
    );

    // --- CoatingUnit ---
    let coating_folder = as_ref
        .add_folder("CoatingUnit", "CoatingUnit", &system_folder)
        .unwrap();
    as_ref.add_variables(
        vec![
            Variable::new(
                &NodeId::new(ns, "CoatingThickness"),
                "CoatingThickness",
                "CoatingThickness",
                TARGET_THICKNESS,
            ),
            Variable::new(
                &NodeId::new(ns, "TargetThickness"),
                "TargetThickness",
                "TargetThickness",
                TARGET_THICKNESS,
            ),
            Variable::new(
                &NodeId::new(ns, "SprayPressure"),
                "SprayPressure",
                "SprayPressure",
                TARGET_SPRAY_PRESSURE,
            ),
            Variable::new(
                &NodeId::new(ns, "ConveyorSpeed"),
                "ConveyorSpeed",
                "ConveyorSpeed",
                TARGET_CONVEYOR_SPEED,
            ),
            Variable::new(
                &NodeId::new(ns, "CU_UnitState"),
                "UnitState",
                "UnitState",
                1i32,
            ),
        ],
        &coating_folder,
    );

    // --- JobManagement ---
    let job_folder = as_ref
        .add_folder("JobManagement", "JobManagement", &system_folder)
        .unwrap();
    as_ref.add_variables(
        vec![
            Variable::new(
                &NodeId::new(ns, "CurrentJobId"),
                "CurrentJobId",
                "CurrentJobId",
                UAString::from("JOB-2024-001"),
            ),
            Variable::new(
                &NodeId::new(ns, "JobStatus"),
                "JobStatus",
                "JobStatus",
                2i32,
            ),
            Variable::new(
                &NodeId::new(ns, "PartsProcessed"),
                "PartsProcessed",
                "PartsProcessed",
                0i32,
            ),
            Variable::new(
                &NodeId::new(ns, "TotalParts"),
                "TotalParts",
                "TotalParts",
                TOTAL_PARTS,
            ),
            Variable::new(
                &NodeId::new(ns, "JobProgress"),
                "JobProgress",
                "JobProgress",
                0.0f64,
            ),
        ],
        &job_folder,
    );

    // Ensure all process variables are explicitly typed for discovery tooling.
    for variable_name in [
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
    ] {
        as_ref.set_node_type(
            &NodeId::new(ns, variable_name),
            &VariableTypeId::BaseDataVariableType,
        );
    }

    (ns, di_ns)
}

fn main() {
    env_logger::init();
    info!("Starting OPC 40700 Surface Technology Simulator");

    let mut server = ServerBuilder::new_anonymous("OPC 40700 Surface Technology Simulator")
        .application_uri("urn:opc40700:surface-technology:simulator")
        .product_uri("urn:opc40700:surface-technology:simulator")
        .create_sample_keypair(true)
        .pki_dir("./pki")
        .host_and_port("0.0.0.0", 5000)
        .trust_client_certs()
        .discovery_urls(vec!["/".into()])
        .max_message_size(4 * 1024 * 1024)
        .max_chunk_count(64)
        .send_buffer_size(SEND_BUFFER_SIZE)
        .receive_buffer_size(RECEIVE_BUFFER_SIZE)
        .server()
        .unwrap();

    // Build address space
    let address_space = server.address_space();
    let (ns, _di_ns) = {
        let mut as_ref = address_space.write();
        populate_address_space(&mut as_ref)
    };

    // Simulation state shared with polling closure
    let sim_state = Arc::new(Mutex::new(SimState::new()));

    // Periodic telemetry update (every 1 second)
    server.add_polling_action(1000, move || {
        let mut state = sim_state.lock();
        let mut rng = rand::thread_rng();
        let now = DateTime::now();

        // Random walks around targets
        state.current_temperature += rng.gen_range(-0.5..0.5);
        state.current_temperature = state.current_temperature.clamp(TEMP_MIN, TEMP_MAX);

        state.current_pressure += rng.gen_range(-0.02..0.02);
        state.current_pressure = state.current_pressure.clamp(PRESSURE_MIN, PRESSURE_MAX);

        state.current_flow_rate += rng.gen_range(-0.5..0.5);
        state.current_flow_rate = state.current_flow_rate.clamp(FLOW_MIN, FLOW_MAX);

        state.coating_thickness += rng.gen_range(-0.1..0.1);
        state.coating_thickness = state.coating_thickness.clamp(THICKNESS_MIN, THICKNESS_MAX);

        state.spray_pressure += rng.gen_range(-0.02..0.02);
        state.spray_pressure = state.spray_pressure.clamp(SPRAY_PRESSURE_MIN, SPRAY_PRESSURE_MAX);

        state.conveyor_speed += rng.gen_range(-0.02..0.02);
        state.conveyor_speed = state.conveyor_speed.clamp(CONVEYOR_MIN, CONVEYOR_MAX);

        // Derived control outputs: 50% = at target, >50% = above target, <50% = below target
        let heating_power = (50.0 + (TARGET_TEMPERATURE - state.current_temperature) / TEMP_RANGE * 50.0).clamp(0.0, 100.0);
        let valve_position = (50.0 + (TARGET_PRESSURE - state.current_pressure) / PRESSURE_RANGE * 50.0).clamp(0.0, 100.0);
        let pump_speed = (50.0 + (TARGET_FLOW_RATE - state.current_flow_rate) / FLOW_RANGE * 50.0).clamp(0.0, 100.0);

        // Job progress
        if state.parts_processed < TOTAL_PARTS {
            state.parts_processed += 1;
        }
        let job_progress = state.parts_processed as f64 / TOTAL_PARTS as f64 * 100.0;

        // Write all values to address space
        let mut as_ref = address_space.write();

        let _ = as_ref.set_variable_value(NodeId::new(ns, "CurrentTemperature"), state.current_temperature, &now, &now);
        let _ = as_ref.set_variable_value(NodeId::new(ns, "TC_HeatingPower"), heating_power, &now, &now);
        let _ = as_ref.set_variable_value(NodeId::new(ns, "CurrentPressure"), state.current_pressure, &now, &now);
        let _ = as_ref.set_variable_value(NodeId::new(ns, "PC_ValvePosition"), valve_position, &now, &now);
        let _ = as_ref.set_variable_value(NodeId::new(ns, "CurrentFlowRate"), state.current_flow_rate, &now, &now);
        let _ = as_ref.set_variable_value(NodeId::new(ns, "FC_PumpSpeed"), pump_speed, &now, &now);
        let _ = as_ref.set_variable_value(NodeId::new(ns, "CoatingThickness"), state.coating_thickness, &now, &now);
        let _ = as_ref.set_variable_value(NodeId::new(ns, "SprayPressure"), state.spray_pressure, &now, &now);
        let _ = as_ref.set_variable_value(NodeId::new(ns, "ConveyorSpeed"), state.conveyor_speed, &now, &now);
        let _ = as_ref.set_variable_value(NodeId::new(ns, "PartsProcessed"), state.parts_processed, &now, &now);
        let _ = as_ref.set_variable_value(NodeId::new(ns, "JobProgress"), job_progress, &now, &now);
    });

    info!("OPC UA server running on opc.tcp://0.0.0.0:5000");
    server.run();
}

#[cfg(test)]
mod tests {
    use super::*;
    use opcua::server::prelude::AddressSpace;

    // Convenience: build a fresh address space and populate it once.
    fn setup() -> (AddressSpace, u16, u16) {
        let mut address_space = AddressSpace::new();
        let (ns, di_ns) = populate_address_space(&mut address_space);
        (address_space, ns, di_ns)
    }

    // ── Buffer-size tests ────────────────────────────────────────────────────

    /// AIO's FetchSubTypesAsync browse of the expanded DI type hierarchy has been
    /// observed to produce response chunks up to 85,335 bytes.  The send buffer
    /// (which determines the size of the scratch buffer used by apply_security())
    /// must exceed that, otherwise the server panics with "The size of the message
    /// chunk N exceeds the size of the destination buffer M".
    #[test]
    fn send_buffer_size_exceeds_max_observed_di_browse_chunk() {
        const MAX_OBSERVED_CHUNK: usize = 85_335;
        assert!(
            SEND_BUFFER_SIZE > MAX_OBSERVED_CHUNK,
            "SEND_BUFFER_SIZE ({} B) must be larger than the maximum observed \
             DI browse response chunk ({} B)",
            SEND_BUFFER_SIZE,
            MAX_OBSERVED_CHUNK
        );
    }

    #[test]
    fn receive_buffer_size_is_at_least_256_kib() {
        assert!(
            RECEIVE_BUFFER_SIZE >= 256 * 1024,
            "RECEIVE_BUFFER_SIZE ({} B) should be at least 256 KiB",
            RECEIVE_BUFFER_SIZE
        );
    }

    #[test]
    fn send_and_receive_buffer_sizes_match() {
        assert_eq!(
            SEND_BUFFER_SIZE, RECEIVE_BUFFER_SIZE,
            "send and receive buffer sizes should be symmetric"
        );
    }

    // ── Namespace tests ──────────────────────────────────────────────────────

    #[test]
    fn di_namespace_is_registered() {
        let (address_space, _ns, di_ns) = setup();
        let found = address_space
            .namespace_index("http://opcfoundation.org/UA/DI/")
            .expect("DI namespace not registered");
        assert_eq!(found, di_ns);
    }

    #[test]
    fn application_namespace_is_registered() {
        let (address_space, ns, _di_ns) = setup();
        let found = address_space
            .namespace_index("urn:opc40700:surface-technology")
            .expect("application namespace not registered");
        assert_eq!(found, ns);
    }

    // ── DI type-hierarchy tests ──────────────────────────────────────────────

    #[test]
    fn topology_element_type_exists_at_di_i1001() {
        let (address_space, _ns, di_ns) = setup();
        let node_id = NodeId::new(di_ns, 1001u32);
        assert!(
            address_space.find_node(&node_id).is_some(),
            "TopologyElementType must exist at DI ns index {}, i=1001",
            di_ns
        );
    }

    #[test]
    fn device_type_exists_at_di_i1002() {
        let (address_space, _ns, di_ns) = setup();
        let node_id = NodeId::new(di_ns, 1002u32);
        assert!(
            address_space.find_node(&node_id).is_some(),
            "DeviceType must exist at DI ns index {}, i=1002",
            di_ns
        );
    }

    // ── DeviceSet tests ──────────────────────────────────────────────────────

    #[test]
    fn device_set_node_exists_at_di_i5001() {
        let (address_space, _ns, di_ns) = setup();
        let node_id = NodeId::new(di_ns, 5001u32);
        assert!(
            address_space.find_node(&node_id).is_some(),
            "DeviceSet folder must exist at DI ns index {}, i=5001",
            di_ns
        );
    }

    #[test]
    fn device_set_is_organised_under_objects_folder() {
        let (address_space, _ns, di_ns) = setup();
        let device_set_id = NodeId::new(di_ns, 5001u32);
        // Objects folder has NodeId ns=0;i=85.
        let objects_id = NodeId::objects_folder_id();
        assert!(
            address_space.has_reference(
                &objects_id,
                &device_set_id,
                ReferenceTypeId::Organizes
            ),
            "Objects folder must organise DeviceSet"
        );
    }

    // ── Device instance tests ────────────────────────────────────────────────

    #[test]
    fn surface_technology_device_instance_exists() {
        let (address_space, ns, _di_ns) = setup();
        let device_id = NodeId::new(ns, "SurfaceTechnologyDevice");
        assert!(
            address_space.find_node(&device_id).is_some(),
            "SurfaceTechnologyDevice instance must be present in the address space"
        );
    }

    #[test]
    fn device_instance_is_organised_under_device_set() {
        let (address_space, ns, di_ns) = setup();
        let device_set_id = NodeId::new(di_ns, 5001u32);
        let device_id = NodeId::new(ns, "SurfaceTechnologyDevice");
        assert!(
            address_space.has_reference(
                &device_set_id,
                &device_id,
                ReferenceTypeId::Organizes
            ),
            "DeviceSet must organise SurfaceTechnologyDevice"
        );
    }

    #[test]
    fn device_instance_has_correct_type_definition() {
        let (address_space, ns, _di_ns) = setup();
        let device_id = NodeId::new(ns, "SurfaceTechnologyDevice");
        let type_id = NodeId::new(ns, "OPC40700DeviceType");
        assert!(
            address_space.has_reference(
                &device_id,
                &type_id,
                ReferenceTypeId::HasTypeDefinition
            ),
            "SurfaceTechnologyDevice must have type definition OPC40700DeviceType"
        );
    }

    // ── DI property tests ────────────────────────────────────────────────────

    #[test]
    fn device_has_manufacturer_property() {
        let (address_space, ns, _di_ns) = setup();
        let prop_id = NodeId::new(ns, "DI_Manufacturer");
        assert!(
            address_space.find_node(&prop_id).is_some(),
            "DI_Manufacturer property node must exist"
        );
    }

    #[test]
    fn device_has_model_property() {
        let (address_space, ns, _di_ns) = setup();
        let prop_id = NodeId::new(ns, "DI_Model");
        assert!(
            address_space.find_node(&prop_id).is_some(),
            "DI_Model property node must exist"
        );
    }

    #[test]
    fn device_has_serial_number_property() {
        let (address_space, ns, _di_ns) = setup();
        let prop_id = NodeId::new(ns, "DI_SerialNumber");
        assert!(
            address_space.find_node(&prop_id).is_some(),
            "DI_SerialNumber property node must exist"
        );
    }

    #[test]
    fn di_properties_are_children_of_device_instance() {
        let (address_space, ns, _di_ns) = setup();
        let device_id = NodeId::new(ns, "SurfaceTechnologyDevice");
        for prop_name in &["DI_Manufacturer", "DI_Model", "DI_SerialNumber"] {
            let prop_id = NodeId::new(ns, *prop_name);
            assert!(
                address_space.has_reference(
                    &device_id,
                    &prop_id,
                    ReferenceTypeId::HasProperty
                ),
                "SurfaceTechnologyDevice must have property {}",
                prop_name
            );
        }
    }

    // ── Process-variable tests ───────────────────────────────────────────────

    #[test]
    fn temperature_variable_nodes_exist() {
        let (address_space, ns, _di_ns) = setup();
        for name in &["CurrentTemperature", "TargetTemperature", "TC_HeatingPower"] {
            let node_id = NodeId::new(ns, *name);
            assert!(
                address_space.find_node(&node_id).is_some(),
                "Variable node '{}' must exist in address space",
                name
            );
        }
    }

    #[test]
    fn pressure_variable_nodes_exist() {
        let (address_space, ns, _di_ns) = setup();
        for name in &["CurrentPressure", "TargetPressure", "PC_ValvePosition"] {
            let node_id = NodeId::new(ns, *name);
            assert!(
                address_space.find_node(&node_id).is_some(),
                "Variable node '{}' must exist in address space",
                name
            );
        }
    }

    #[test]
    fn flow_variable_nodes_exist() {
        let (address_space, ns, _di_ns) = setup();
        for name in &["CurrentFlowRate", "TargetFlowRate", "FC_PumpSpeed"] {
            let node_id = NodeId::new(ns, *name);
            assert!(
                address_space.find_node(&node_id).is_some(),
                "Variable node '{}' must exist in address space",
                name
            );
        }
    }

    #[test]
    fn coating_variable_nodes_exist() {
        let (address_space, ns, _di_ns) = setup();
        for name in &[
            "CoatingThickness",
            "TargetThickness",
            "SprayPressure",
            "ConveyorSpeed",
        ] {
            let node_id = NodeId::new(ns, *name);
            assert!(
                address_space.find_node(&node_id).is_some(),
                "Variable node '{}' must exist in address space",
                name
            );
        }
    }

    #[test]
    fn job_variable_nodes_exist() {
        let (address_space, ns, _di_ns) = setup();
        for name in &["CurrentJobId", "JobStatus", "PartsProcessed", "TotalParts", "JobProgress"] {
            let node_id = NodeId::new(ns, *name);
            assert!(
                address_space.find_node(&node_id).is_some(),
                "Variable node '{}' must exist in address space",
                name
            );
        }
    }

    #[test]
    fn process_variables_have_base_data_variable_type_definition() {
        let (address_space, ns, _di_ns) = setup();
        let base_data_variable_type_id = NodeId::from(&VariableTypeId::BaseDataVariableType);
        for variable_name in [
            "CurrentTemperature",
            "CurrentPressure",
            "CurrentFlowRate",
            "CoatingThickness",
            "CurrentJobId",
        ] {
            let variable_id = NodeId::new(ns, variable_name);
            assert!(
                address_space.has_reference(
                    &variable_id,
                    &base_data_variable_type_id,
                    ReferenceTypeId::HasTypeDefinition
                ),
                "Variable '{}' must have BaseDataVariableType",
                variable_name
            );
        }
    }

    #[test]
    fn surface_technology_system_is_only_under_device_instance() {
        let (address_space, ns, _di_ns) = setup();
        let system_id = NodeId::new(ns, "SurfaceTechnologySystem");
        let device_id = NodeId::new(ns, "SurfaceTechnologyDevice");
        let objects_id = NodeId::objects_folder_id();

        assert!(
            address_space.has_reference(&device_id, &system_id, ReferenceTypeId::HasComponent),
            "SurfaceTechnologyDevice must reference SurfaceTechnologySystem as a component"
        );
        assert!(
            !address_space.has_reference(&objects_id, &system_id, ReferenceTypeId::Organizes),
            "Objects folder must not directly organize SurfaceTechnologySystem"
        );
    }

    // ── SimState tests ───────────────────────────────────────────────────────

    #[test]
    fn sim_state_initialises_to_target_setpoints() {
        let state = SimState::new();
        assert_eq!(state.current_temperature, TARGET_TEMPERATURE);
        assert_eq!(state.current_pressure, TARGET_PRESSURE);
        assert_eq!(state.current_flow_rate, TARGET_FLOW_RATE);
        assert_eq!(state.coating_thickness, TARGET_THICKNESS);
        assert_eq!(state.spray_pressure, TARGET_SPRAY_PRESSURE);
        assert_eq!(state.conveyor_speed, TARGET_CONVEYOR_SPEED);
        assert_eq!(state.parts_processed, 0);
    }

    #[test]
    fn telemetry_values_are_within_clamp_bounds() {
        // Verify that every *_MIN and *_MAX pair is consistent (MIN < TARGET < MAX).
        assert!(TEMP_MIN < TARGET_TEMPERATURE && TARGET_TEMPERATURE < TEMP_MAX);
        assert!(PRESSURE_MIN < TARGET_PRESSURE && TARGET_PRESSURE < PRESSURE_MAX);
        assert!(FLOW_MIN < TARGET_FLOW_RATE && TARGET_FLOW_RATE < FLOW_MAX);
        assert!(THICKNESS_MIN < TARGET_THICKNESS && TARGET_THICKNESS < THICKNESS_MAX);
        assert!(SPRAY_PRESSURE_MIN < TARGET_SPRAY_PRESSURE && TARGET_SPRAY_PRESSURE < SPRAY_PRESSURE_MAX);
        assert!(CONVEYOR_MIN < TARGET_CONVEYOR_SPEED && TARGET_CONVEYOR_SPEED < CONVEYOR_MAX);
    }

    // ── BrowseName namespace tests ───────────────────────────────────────────

    #[test]
    fn di_nodes_have_browse_names_in_di_namespace() {
        let (address_space, _ns, di_ns) = setup();
        // DeviceSet, TopologyElementType, DeviceType should have BrowseNames in DI namespace
        let checks: Vec<(NodeId, &str)> = vec![
            (NodeId::new(di_ns, 5001u32), "DeviceSet"),
            (NodeId::new(di_ns, 1001u32), "TopologyElementType"),
            (NodeId::new(di_ns, 1002u32), "DeviceType"),
        ];
        for (node_id, expected_name) in &checks {
            let node = address_space.find_node(node_id).expect(&format!(
                "Node {} must exist",
                expected_name
            ));
            let browse_name = node.as_node().browse_name();
            assert_eq!(
                browse_name.namespace_index, di_ns,
                "BrowseName of {} must be in DI namespace (ns={}), got ns={}",
                expected_name, di_ns, browse_name.namespace_index
            );
            assert_eq!(
                browse_name.name.as_ref(),
                *expected_name,
                "BrowseName of {} must have name '{}'",
                expected_name, expected_name
            );
        }
    }

    #[test]
    fn device_instance_has_browse_name_in_app_namespace() {
        let (address_space, ns, _di_ns) = setup();
        let device_id = NodeId::new(ns, "SurfaceTechnologyDevice");
        let node = address_space.find_node(&device_id).unwrap();
        let browse_name = node.as_node().browse_name();
        assert_eq!(
            browse_name.namespace_index, ns,
            "SurfaceTechnologyDevice BrowseName must be in app namespace (ns={})",
            ns
        );
    }

    #[test]
    fn di_properties_have_browse_names_in_di_namespace() {
        let (address_space, ns, di_ns) = setup();
        let prop_checks = vec![
            ("DI_Manufacturer", "Manufacturer"),
            ("DI_Model", "Model"),
            ("DI_SerialNumber", "SerialNumber"),
        ];
        for (node_str_id, expected_name) in &prop_checks {
            let node_id = NodeId::new(ns, *node_str_id);
            let node = address_space.find_node(&node_id).expect(&format!(
                "Node {} must exist",
                node_str_id
            ));
            let browse_name = node.as_node().browse_name();
            assert_eq!(
                browse_name.namespace_index, di_ns,
                "BrowseName of {} must be in DI namespace (ns={}), got ns={}",
                node_str_id, di_ns, browse_name.namespace_index
            );
            assert_eq!(
                browse_name.name.as_ref(),
                *expected_name,
                "BrowseName.name of {} must be '{}'",
                node_str_id, expected_name
            );
        }
    }
}
