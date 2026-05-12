use log::info;
use opcua::server::prelude::*;
use opcua::sync::Mutex;
use rand::Rng;
use std::sync::Arc;

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

fn main() {
    env_logger::init();
    info!("Starting OPC 40700 Surface Technology Simulator");

    let mut server = ServerBuilder::new_anonymous("OPC 40700 Surface Technology Simulator")
        .application_uri("urn:opc40700:surface-technology:simulator")
        .product_uri("urn:opc40700:surface-technology:simulator")
        .create_sample_keypair(true)
        .pki_dir("./pki")
        .host_and_port("0.0.0.0", 4840)
        .trust_client_certs()
        .discovery_urls(vec!["/".into()])
        .server()
        .unwrap();

    // Register namespace
    let ns = {
        let address_space = server.address_space();
        let mut address_space = address_space.write();
        address_space
            .register_namespace("urn:opc40700:surface-technology")
            .unwrap()
    };

    // Build address space
    let address_space = server.address_space();
    {
        let mut as_ref = address_space.write();

        // Top-level folder
        let system_folder = as_ref
            .add_folder(
                "SurfaceTechnologySystem",
                "SurfaceTechnologySystem",
                &NodeId::objects_folder_id(),
            )
            .unwrap();

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
    }

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

        // Derived control outputs (proportional to error from target)
        let heating_power = ((state.current_temperature - TARGET_TEMPERATURE).abs() / TEMP_RANGE * 100.0).clamp(0.0, 100.0);
        let valve_position = ((state.current_pressure - TARGET_PRESSURE).abs() / PRESSURE_RANGE * 100.0).clamp(0.0, 100.0);
        let pump_speed = ((state.current_flow_rate - TARGET_FLOW_RATE).abs() / FLOW_RANGE * 100.0).clamp(0.0, 100.0);

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

    info!("OPC UA server running on opc.tcp://0.0.0.0:4840");
    server.run();
}
