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

    // FunctionalGroupType (DI ns, i=1005) - subtype of BaseObjectType
    // Used for Identification, ParameterSet groupings per DI spec.
    let functional_group_type_id = NodeId::new(di_ns, 1005u32);
    ObjectTypeBuilder::new(
        &functional_group_type_id,
        QualifiedName::new(di_ns, "FunctionalGroupType"),
        "FunctionalGroupType",
    )
    .subtype_of(ObjectTypeId::BaseObjectType)
    .is_abstract(false)
    .insert(as_ref);

    // DI interface types (abstract, subtypes of OPC UA BaseInterfaceType i=17602).
    // Required so that HasInterface references on the device type and instance
    // point to resolvable nodes — AIO/Akri checks these when validating DI compliance.
    let ivendor_nameplate_type_id = NodeId::new(di_ns, 15035u32);
    ObjectTypeBuilder::new(
        &ivendor_nameplate_type_id,
        QualifiedName::new(di_ns, "IVendorNameplateType"),
        "IVendorNameplateType",
    )
    .subtype_of(ObjectTypeId::BaseInterfaceType)
    .is_abstract(true)
    .insert(as_ref);

    let itag_nameplate_type_id = NodeId::new(di_ns, 15048u32);
    ObjectTypeBuilder::new(
        &itag_nameplate_type_id,
        QualifiedName::new(di_ns, "ITagNameplateType"),
        "ITagNameplateType",
    )
    .subtype_of(ObjectTypeId::BaseInterfaceType)
    .is_abstract(true)
    .insert(as_ref);

    let idevice_health_type_id = NodeId::new(di_ns, 15051u32);
    ObjectTypeBuilder::new(
        &idevice_health_type_id,
        QualifiedName::new(di_ns, "IDeviceHealthType"),
        "IDeviceHealthType",
    )
    .subtype_of(ObjectTypeId::BaseInterfaceType)
    .is_abstract(true)
    .insert(as_ref);

    // DeviceHealthEnumeration DataType (DI ns, i=6244). Needed so the DeviceHealth
    // variable's DataType attribute resolves to a browsable node.
    let dh_enum_type_id = NodeId::new(di_ns, 6244u32);
    let dh_enum_node = DataType::new(
        &dh_enum_type_id,
        QualifiedName::new(di_ns, "DeviceHealthEnumeration"),
        "DeviceHealthEnumeration",
        false,
    );
    let has_subtype_id = NodeId::from(&ReferenceTypeId::HasSubtype);
    let enumeration_dt_id = NodeId::from(&DataTypeId::Enumeration);
    as_ref.insert(
        dh_enum_node,
        Some(&[(&enumeration_dt_id, &has_subtype_id, ReferenceDirection::Inverse)]),
    );

    // EnumStrings property on DeviceHealthEnumeration (DI ns, i=6450).
    // Per DI NodeSet2.xml: 5 LocalizedText values, child via HasProperty.
    // This makes DeviceHealth readable as human-readable labels rather than
    // bare integers — matching both the Python packer and the C2 reference.
    let dh_enum_strings_id = NodeId::new(di_ns, 6450u32);
    let enum_strings_value = Variant::from((
        VariantTypeId::LocalizedText,
        vec![
            Variant::from(LocalizedText::new("", "NORMAL")),
            Variant::from(LocalizedText::new("", "FAILURE")),
            Variant::from(LocalizedText::new("", "CHECK_FUNCTION")),
            Variant::from(LocalizedText::new("", "OFF_SPEC")),
            Variant::from(LocalizedText::new("", "MAINTENANCE_REQUIRED")),
        ],
    ));
    VariableBuilder::new(
        &dh_enum_strings_id,
        QualifiedName::new(0, "EnumStrings"),
        "EnumStrings",
    )
    .data_type(DataTypeId::LocalizedText)
    .value_rank(1)
    .value(enum_strings_value)
    .property_of(dh_enum_type_id.clone())
    .has_type_definition(VariableTypeId::PropertyType)
    .insert(as_ref);

    // DeviceType (DI ns, i=1002) - subtype of TopologyElementType.
    // Abstract per DI spec — only concrete subtypes are instantiated.
    let device_type_id = NodeId::new(di_ns, 1002u32);
    ObjectTypeBuilder::new(
        &device_type_id,
        QualifiedName::new(di_ns, "DeviceType"),
        "DeviceType",
    )
    .subtype_of(topology_element_type_id.clone())
    .is_abstract(true)
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

    // Manufacturer and Model are LocalizedText per the DI spec.
    VariableBuilder::new(
        &NodeId::new(ns, "OPC40700DeviceType_Manufacturer"),
        QualifiedName::new(di_ns, "Manufacturer"),
        "Manufacturer",
    )
    .data_type(DataTypeId::LocalizedText)
    .value(LocalizedText::new("en", ""))
    .property_of(opc40700_device_type_id.clone())
    .has_type_definition(VariableTypeId::PropertyType)
    .insert(as_ref);

    VariableBuilder::new(
        &NodeId::new(ns, "OPC40700DeviceType_Model"),
        QualifiedName::new(di_ns, "Model"),
        "Model",
    )
    .data_type(DataTypeId::LocalizedText)
    .value(LocalizedText::new("en", ""))
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

    // HasInterface references on the device type — DI 10000-100 ch.5 requires these
    // so that DI-aware clients know the type formally implements the DI interfaces.
    as_ref.insert_reference(
        &opc40700_device_type_id,
        &ivendor_nameplate_type_id,
        ReferenceTypeId::HasInterface,
    );
    as_ref.insert_reference(
        &opc40700_device_type_id,
        &itag_nameplate_type_id,
        ReferenceTypeId::HasInterface,
    );
    as_ref.insert_reference(
        &opc40700_device_type_id,
        &idevice_health_type_id,
        ReferenceTypeId::HasInterface,
    );

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

    // Mirror HasInterface on the instance too — some AIO/Akri versions inspect the
    // instance rather than walking up to the type.
    as_ref.insert_reference(
        &device_id,
        &ivendor_nameplate_type_id,
        ReferenceTypeId::HasInterface,
    );
    as_ref.insert_reference(
        &device_id,
        &itag_nameplate_type_id,
        ReferenceTypeId::HasInterface,
    );
    as_ref.insert_reference(
        &device_id,
        &idevice_health_type_id,
        ReferenceTypeId::HasInterface,
    );

    // DI-standard properties on the device instance
    VariableBuilder::new(
        &NodeId::new(ns, "DI_Manufacturer"),
        QualifiedName::new(di_ns, "Manufacturer"),
        "Manufacturer",
    )
    .data_type(DataTypeId::LocalizedText)
    .value(LocalizedText::new("en", "OPC40700 Simulator Corp"))
    .property_of(device_id.clone())
    .has_type_definition(VariableTypeId::PropertyType)
    .insert(as_ref);

    VariableBuilder::new(
        &NodeId::new(ns, "DI_Model"),
        QualifiedName::new(di_ns, "Model"),
        "Model",
    )
    .data_type(DataTypeId::LocalizedText)
    .value(LocalizedText::new("en", "ST-SIM-1000"))
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

    // Additional DI nameplate properties (IVendorNameplateType compliance)
    VariableBuilder::new(
        &NodeId::new(ns, "DI_ProductCode"),
        QualifiedName::new(di_ns, "ProductCode"),
        "ProductCode",
    )
    .data_type(DataTypeId::String)
    .value(UAString::from("ST-SIM-1000-2024"))
    .property_of(device_id.clone())
    .has_type_definition(VariableTypeId::PropertyType)
    .insert(as_ref);

    VariableBuilder::new(
        &NodeId::new(ns, "DI_DeviceRevision"),
        QualifiedName::new(di_ns, "DeviceRevision"),
        "DeviceRevision",
    )
    .data_type(DataTypeId::String)
    .value(UAString::from("Rev-1"))
    .property_of(device_id.clone())
    .has_type_definition(VariableTypeId::PropertyType)
    .insert(as_ref);

    VariableBuilder::new(
        &NodeId::new(ns, "DI_RevisionCounter"),
        QualifiedName::new(di_ns, "RevisionCounter"),
        "RevisionCounter",
    )
    .data_type(DataTypeId::Int32)
    .value(1i32)
    .property_of(device_id.clone())
    .has_type_definition(VariableTypeId::PropertyType)
    .insert(as_ref);

    VariableBuilder::new(
        &NodeId::new(ns, "DI_AssetId"),
        QualifiedName::new(di_ns, "AssetId"),
        "AssetId",
    )
    .data_type(DataTypeId::String)
    .value(UAString::from("OPC40700-ST-SIM-1000"))
    .property_of(device_id.clone())
    .has_type_definition(VariableTypeId::PropertyType)
    .insert(as_ref);

    VariableBuilder::new(
        &NodeId::new(ns, "DI_ComponentName"),
        QualifiedName::new(di_ns, "ComponentName"),
        "ComponentName",
    )
    .data_type(DataTypeId::LocalizedText)
    .value(LocalizedText::new("en", "Surface Technology System ST-SIM-1000"))
    .property_of(device_id.clone())
    .has_type_definition(VariableTypeId::PropertyType)
    .insert(as_ref);

    // --- DI Identification group (FunctionalGroupType) ---
    // DI convention: an "Identification" folder under the device mirrors key
    // nameplate properties for Akri/AIO discovery.
    let identification_id = NodeId::new(ns, "DI_Identification");
    ObjectBuilder::new(
        &identification_id,
        QualifiedName::new(di_ns, "Identification"),
        "Identification",
    )
    .has_type_definition(functional_group_type_id.clone())
    .component_of(device_id.clone())
    .insert(as_ref);

    // Mirror key nameplate properties under Identification.
    // Manufacturer and Model are LocalizedText; the rest are String.
    for (suffix, browse, lt_value) in [
        ("Ident_Manufacturer", "Manufacturer", "OPC40700 Simulator Corp"),
        ("Ident_Model", "Model", "ST-SIM-1000"),
    ] {
        VariableBuilder::new(
            &NodeId::new(ns, suffix),
            QualifiedName::new(di_ns, browse),
            browse,
        )
        .data_type(DataTypeId::LocalizedText)
        .value(LocalizedText::new("en", lt_value))
        .property_of(identification_id.clone())
        .has_type_definition(VariableTypeId::PropertyType)
        .insert(as_ref);
    }
    for (suffix, browse, value) in [
        ("Ident_SerialNumber", "SerialNumber", "SN-2024-40700-001"),
        ("Ident_HardwareRevision", "HardwareRevision", "1.0"),
        ("Ident_SoftwareRevision", "SoftwareRevision", "1.0.0"),
    ] {
        VariableBuilder::new(
            &NodeId::new(ns, suffix),
            QualifiedName::new(di_ns, browse),
            browse,
        )
        .data_type(DataTypeId::String)
        .value(UAString::from(value))
        .property_of(identification_id.clone())
        .has_type_definition(VariableTypeId::PropertyType)
        .insert(as_ref);
    }

    // --- DI ParameterSet (holds all process variables for discovery) ---
    // Typed as BaseObjectType per DI NodeSet (ns=1;i=5002 uses HasTypeDefinition → i=58).
    let parameter_set_id = NodeId::new(ns, "DI_ParameterSet");
    ObjectBuilder::new(
        &parameter_set_id,
        QualifiedName::new(di_ns, "ParameterSet"),
        "ParameterSet",
    )
    .has_type_definition(ObjectTypeId::BaseObjectType)
    .component_of(device_id.clone())
    .insert(as_ref);

    // --- DI MethodSet (empty placeholder, required by DI spec) ---
    let method_set_id = NodeId::new(ns, "DI_MethodSet");
    ObjectBuilder::new(
        &method_set_id,
        QualifiedName::new(di_ns, "MethodSet"),
        "MethodSet",
    )
    .has_type_definition(functional_group_type_id.clone())
    .component_of(device_id.clone())
    .insert(as_ref);

    // --- DeviceHealth variable (IDeviceHealthType compliance) ---
    // DataType must be DeviceHealthEnumeration (DI ns, i=6244) per DI spec.
    VariableBuilder::new(
        &NodeId::new(ns, "DI_DeviceHealth"),
        QualifiedName::new(di_ns, "DeviceHealth"),
        "DeviceHealth",
    )
    .data_type(NodeId::new(di_ns, 6244u32))
    .value(0i32) // 0 = NORMAL
    .component_of(device_id.clone())
    .has_type_definition(VariableTypeId::BaseDataVariableType)
    .insert(as_ref);

    // --- DeviceHealthAlarms folder (required by IDeviceHealthType, DI ns i=15053) ---
    ObjectBuilder::new(
        &NodeId::new(ns, "DI_DeviceHealthAlarms"),
        QualifiedName::new(di_ns, "DeviceHealthAlarms"),
        "DeviceHealthAlarms",
    )
    .has_type_definition(ObjectTypeId::BaseObjectType)
    .component_of(device_id.clone())
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
    let process_variable_names = [
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
    for variable_name in &process_variable_names {
        as_ref.set_node_type(
            &NodeId::new(ns, *variable_name),
            &VariableTypeId::BaseDataVariableType,
        );
    }

    // Add HasComponent references from ParameterSet to all process variables
    // per the DI canonical pattern (ns_di.c uses HasComponent i=47 for
    // <ParameterIdentifier> children of ParameterSet i=5002). AIO/Akri DI
    // discovery filters ParameterSet children by HasComponent and uses each
    // child Variable as an asset datapoint.
    for variable_name in &process_variable_names {
        as_ref.insert_reference(
            &parameter_set_id,
            &NodeId::new(ns, *variable_name),
            ReferenceTypeId::HasComponent,
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
        .discovery_urls(vec!["/aio-demo-opc40700".into()])
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

    // ── DI Discovery structure tests ─────────────────────────────────────────

    #[test]
    fn functional_group_type_exists_at_di_i1005() {
        let (address_space, _ns, di_ns) = setup();
        let node_id = NodeId::new(di_ns, 1005u32);
        assert!(
            address_space.find_node(&node_id).is_some(),
            "FunctionalGroupType must exist at DI ns index {}, i=1005",
            di_ns
        );
    }

    #[test]
    fn parameter_set_is_component_of_device() {
        let (address_space, ns, _di_ns) = setup();
        let device_id = NodeId::new(ns, "SurfaceTechnologyDevice");
        let param_set_id = NodeId::new(ns, "DI_ParameterSet");
        assert!(
            address_space.has_reference(&device_id, &param_set_id, ReferenceTypeId::HasComponent),
            "SurfaceTechnologyDevice must have ParameterSet as component"
        );
        // ParameterSet should be typed as BaseObjectType per DI spec (i=58)
        let base_object_type_id = NodeId::from(&ObjectTypeId::BaseObjectType);
        assert!(
            address_space.has_reference(&param_set_id, &base_object_type_id, ReferenceTypeId::HasTypeDefinition),
            "ParameterSet must have BaseObjectType as type definition"
        );
    }

    #[test]
    fn parameter_set_has_browse_name_in_di_namespace() {
        let (address_space, ns, di_ns) = setup();
        let param_set_id = NodeId::new(ns, "DI_ParameterSet");
        let node = address_space.find_node(&param_set_id).unwrap();
        let browse_name = node.as_node().browse_name();
        assert_eq!(browse_name.namespace_index, di_ns);
        assert_eq!(browse_name.name.as_ref(), "ParameterSet");
    }

    #[test]
    fn parameter_set_organizes_process_variables() {
        let (address_space, ns, _di_ns) = setup();
        let param_set_id = NodeId::new(ns, "DI_ParameterSet");
        // Per DI canonical pattern (see opcua-large-c2/nodesets-generated/ns_di.c):
        // Parameters are HasComponent of ParameterSet, NOT Organizes.
        for var_name in &["CurrentTemperature", "CurrentPressure", "CurrentFlowRate"] {
            let var_id = NodeId::new(ns, *var_name);
            assert!(
                address_space.has_reference(&param_set_id, &var_id, ReferenceTypeId::HasComponent),
                "ParameterSet must have variable '{}' as HasComponent (DI canonical pattern)",
                var_name
            );
        }
    }

    #[test]
    fn identification_is_component_of_device() {
        let (address_space, ns, _di_ns) = setup();
        let device_id = NodeId::new(ns, "SurfaceTechnologyDevice");
        let ident_id = NodeId::new(ns, "DI_Identification");
        assert!(
            address_space.has_reference(&device_id, &ident_id, ReferenceTypeId::HasComponent),
            "SurfaceTechnologyDevice must have Identification as component"
        );
    }

    #[test]
    fn identification_has_type_definition_functional_group() {
        let (address_space, ns, di_ns) = setup();
        let ident_id = NodeId::new(ns, "DI_Identification");
        let fg_type_id = NodeId::new(di_ns, 1005u32);
        assert!(
            address_space.has_reference(&ident_id, &fg_type_id, ReferenceTypeId::HasTypeDefinition),
            "Identification must have FunctionalGroupType as type definition"
        );
    }

    #[test]
    fn method_set_is_component_of_device() {
        let (address_space, ns, di_ns) = setup();
        let device_id = NodeId::new(ns, "SurfaceTechnologyDevice");
        let method_set_id = NodeId::new(ns, "DI_MethodSet");
        assert!(
            address_space.has_reference(&device_id, &method_set_id, ReferenceTypeId::HasComponent),
            "SurfaceTechnologyDevice must have MethodSet as component"
        );
        // MethodSet should be typed as FunctionalGroupType
        let fg_type_id = NodeId::new(di_ns, 1005u32);
        assert!(
            address_space.has_reference(&method_set_id, &fg_type_id, ReferenceTypeId::HasTypeDefinition),
            "MethodSet must have FunctionalGroupType as type definition"
        );
    }

    #[test]
    fn device_health_variable_exists() {
        let (address_space, ns, _di_ns) = setup();
        let health_id = NodeId::new(ns, "DI_DeviceHealth");
        assert!(
            address_space.find_node(&health_id).is_some(),
            "DeviceHealth variable must exist on device"
        );
    }

    #[test]
    fn device_has_additional_nameplate_properties() {
        let (address_space, ns, _di_ns) = setup();
        let device_id = NodeId::new(ns, "SurfaceTechnologyDevice");
        for prop_name in &[
            "DI_ProductCode",
            "DI_DeviceRevision",
            "DI_RevisionCounter",
            "DI_AssetId",
            "DI_ComponentName",
        ] {
            let prop_id = NodeId::new(ns, *prop_name);
            assert!(
                address_space.find_node(&prop_id).is_some(),
                "Property node '{}' must exist",
                prop_name
            );
            assert!(
                address_space.has_reference(&device_id, &prop_id, ReferenceTypeId::HasProperty),
                "SurfaceTechnologyDevice must have property '{}'",
                prop_name
            );
        }
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

    // ── HasSubtype hierarchy tests (FetchSubTypes path) ──────────────────────
    //
    // These tests verify the exact reference chain that AIO's FetchSubTypesAsync
    // traverses.  A forward HasSubtype reference must exist from each parent to
    // each child so that a client browsing from DeviceType can reach
    // OPC40700DeviceType and then the SurfaceTechnologyDevice instance.

    #[test]
    fn base_object_type_has_subtype_topology_element_type() {
        let (address_space, _ns, di_ns) = setup();
        let base_object_type_id: NodeId = ObjectTypeId::BaseObjectType.into();
        let topology_element_type_id = NodeId::new(di_ns, 1001u32);
        assert!(
            address_space.has_reference(
                &base_object_type_id,
                &topology_element_type_id,
                ReferenceTypeId::HasSubtype,
            ),
            "BaseObjectType must have a forward HasSubtype reference to TopologyElementType \
             (DI ns={}, i=1001)",
            di_ns
        );
    }

    #[test]
    fn topology_element_type_has_subtype_device_type() {
        let (address_space, _ns, di_ns) = setup();
        let topology_element_type_id = NodeId::new(di_ns, 1001u32);
        let device_type_id = NodeId::new(di_ns, 1002u32);
        assert!(
            address_space.has_reference(
                &topology_element_type_id,
                &device_type_id,
                ReferenceTypeId::HasSubtype,
            ),
            "TopologyElementType must have a forward HasSubtype reference to DeviceType \
             (DI ns={}, i=1002)",
            di_ns
        );
    }

    #[test]
    fn device_type_has_subtype_opc40700_device_type() {
        let (address_space, ns, di_ns) = setup();
        let device_type_id = NodeId::new(di_ns, 1002u32);
        let opc40700_device_type_id = NodeId::new(ns, "OPC40700DeviceType");
        assert!(
            address_space.has_reference(
                &device_type_id,
                &opc40700_device_type_id,
                ReferenceTypeId::HasSubtype,
            ),
            "DeviceType (DI ns={}, i=1002) must have a forward HasSubtype reference to \
             OPC40700DeviceType",
            di_ns
        );
    }

    // ── Circular reference detection ─────────────────────────────────────────
    //
    // Simulates what AIO Commander's BrowseFullAddressSpace does: a BFS traversal
    // from Root following forward HierarchicalReferences (include subtypes).
    // The address space must be acyclic with a max depth well below the
    // commander's 128-depth limit.

    #[test]
    fn no_circular_references_in_hierarchical_browse() {
        use std::collections::{HashSet, VecDeque};

        let (address_space, _ns, _di_ns) = setup();

        // BFS from Root (i=84) following forward HierarchicalReferences
        let root_id = NodeId::new(0, 84u32); // Root
        let mut visited: HashSet<NodeId> = HashSet::new();
        let mut queue: VecDeque<(NodeId, usize)> = VecDeque::new();
        let mut max_depth: usize = 0;

        queue.push_back((root_id.clone(), 0));
        visited.insert(root_id);

        while let Some((node_id, depth)) = queue.pop_front() {
            max_depth = max_depth.max(depth);

            // Browse forward references filtered to HierarchicalReferences with subtypes
            let (references, _inverse_idx) = address_space.find_references_by_direction(
                &node_id,
                BrowseDirection::Forward,
                Some((ReferenceTypeId::HierarchicalReferences, true)),
            );

            for reference in &references {
                if !visited.contains(&reference.target_node) {
                    visited.insert(reference.target_node.clone());
                    queue.push_back((reference.target_node.clone(), depth + 1));
                }
            }
        }

        assert!(
            max_depth < 20,
            "Address space tree too deep: {} (likely circular references). Expected < 20.",
            max_depth
        );
    }

    /// Detect actual cycles (back-edges) in the forward hierarchical reference graph
    /// using iterative DFS with three-color marking. Any back-edge would cause
    /// infinite traversal in clients that don't deduplicate globally.
    #[test]
    fn no_back_edges_in_hierarchical_references() {
        use std::collections::HashSet;

        let (address_space, _ns, _di_ns) = setup();

        // First collect all reachable nodes via BFS
        let root_id = NodeId::new(0, 84u32);
        let mut all_nodes: Vec<NodeId> = vec![root_id.clone()];
        let mut bfs_visited: HashSet<NodeId> = HashSet::new();
        bfs_visited.insert(root_id.clone());
        // BFS using index iteration (all_nodes grows during loop)
        let mut i = 0;
        while i < all_nodes.len() {
            let node_id = all_nodes[i].clone();
            let (references, _) = address_space.find_references_by_direction(
                &node_id,
                BrowseDirection::Forward,
                Some((ReferenceTypeId::HierarchicalReferences, true)),
            );
            for reference in &references {
                if !bfs_visited.contains(&reference.target_node) {
                    bfs_visited.insert(reference.target_node.clone());
                    all_nodes.push(reference.target_node.clone());
                }
            }
            i += 1;
        }

        // DFS with explicit stack to detect back-edges (cycles)
        let mut white: HashSet<NodeId> = all_nodes.iter().cloned().collect();
        let mut gray: HashSet<NodeId> = HashSet::new();
        let mut black: HashSet<NodeId> = HashSet::new();
        let mut cycle_edges: Vec<(NodeId, NodeId)> = Vec::new();

        enum DfsAction {
            Enter(NodeId),
            Exit(NodeId),
        }

        let mut stack: Vec<DfsAction> = Vec::new();
        for node in &all_nodes {
            if white.contains(node) {
                stack.push(DfsAction::Enter(node.clone()));
            }
            while let Some(action) = stack.pop() {
                match action {
                    DfsAction::Enter(n) => {
                        if !white.contains(&n) {
                            continue;
                        }
                        white.remove(&n);
                        gray.insert(n.clone());
                        stack.push(DfsAction::Exit(n.clone()));

                        let (references, _) = address_space.find_references_by_direction(
                            &n,
                            BrowseDirection::Forward,
                            Some((ReferenceTypeId::HierarchicalReferences, true)),
                        );

                        for reference in &references {
                            if gray.contains(&reference.target_node) {
                                cycle_edges.push((n.clone(), reference.target_node.clone()));
                            } else if white.contains(&reference.target_node) {
                                stack.push(DfsAction::Enter(reference.target_node.clone()));
                            }
                        }
                    }
                    DfsAction::Exit(n) => {
                        gray.remove(&n);
                        black.insert(n.clone());
                    }
                }
            }
        }

        assert!(
            cycle_edges.is_empty(),
            "Found {} back-edge(s) (cycles) in hierarchical references: {:?}",
            cycle_edges.len(),
            &cycle_edges[..cycle_edges.len().min(10)]
        );
    }

    /// Verify that the application-specific portion of the address space (under
    /// Objects folder) has a reasonable number of hierarchical children, ensuring
    /// AIO Commander discovery won't time out or hit excessive depth.
    #[test]
    fn objects_folder_subtree_is_bounded() {
        use std::collections::HashSet;

        let (address_space, _ns, _di_ns) = setup();

        // BFS from Objects folder (i=85) - this is what AIO Commander browses
        let objects_id = NodeId::objects_folder_id();
        let mut visited: HashSet<NodeId> = HashSet::new();
        let mut queue: Vec<(NodeId, usize)> = vec![(objects_id.clone(), 0)];
        visited.insert(objects_id);
        let mut max_depth: usize = 0;
        // BFS using index iteration (queue grows during loop)
        let mut i = 0;

        while i < queue.len() {
            let (node_id, depth) = queue[i].clone();
            max_depth = max_depth.max(depth);
            let (references, _) = address_space.find_references_by_direction(
                &node_id,
                BrowseDirection::Forward,
                Some((ReferenceTypeId::HierarchicalReferences, true)),
            );
            for reference in &references {
                if !visited.contains(&reference.target_node) {
                    visited.insert(reference.target_node.clone());
                    queue.push((reference.target_node.clone(), depth + 1));
                }
            }
            i += 1;
        }

        // The Objects subtree should be compact: the Server object plus our device
        assert!(
            max_depth < 15,
            "Objects subtree too deep: {} (expected < 15)",
            max_depth
        );
    }

    // ── DI compliance tests (HasInterface, DeviceHealthAlarms, LocalizedText) ─

    #[test]
    fn device_type_is_abstract() {
        let (address_space, _ns, di_ns) = setup();
        let device_type_id = NodeId::new(di_ns, 1002u32);
        let node = address_space.find_node(&device_type_id).unwrap();
        if let opcua::server::prelude::NodeType::ObjectType(ot) = node {
            assert!(ot.is_abstract(), "DeviceType must be abstract per DI spec");
        } else {
            panic!("DeviceType node is not an ObjectType");
        }
    }

    #[test]
    fn di_interface_types_exist() {
        let (address_space, _ns, di_ns) = setup();
        for (i, name) in [(15035u32, "IVendorNameplateType"), (15048, "ITagNameplateType"), (15051, "IDeviceHealthType")] {
            let id = NodeId::new(di_ns, i);
            assert!(address_space.find_node(&id).is_some(), "{} (DI ns, i={}) must exist", name, i);
        }
    }

    #[test]
    fn opc40700_device_type_has_interface_references() {
        let (address_space, ns, di_ns) = setup();
        let type_id = NodeId::new(ns, "OPC40700DeviceType");
        for (i, name) in [(15035u32, "IVendorNameplateType"), (15048, "ITagNameplateType"), (15051, "IDeviceHealthType")] {
            let iface_id = NodeId::new(di_ns, i);
            assert!(
                address_space.has_reference(&type_id, &iface_id, ReferenceTypeId::HasInterface),
                "OPC40700DeviceType must have HasInterface → {} (i={})",
                name, i
            );
        }
    }

    #[test]
    fn device_instance_has_interface_references() {
        let (address_space, ns, di_ns) = setup();
        let device_id = NodeId::new(ns, "SurfaceTechnologyDevice");
        for (i, name) in [(15035u32, "IVendorNameplateType"), (15048, "ITagNameplateType"), (15051, "IDeviceHealthType")] {
            let iface_id = NodeId::new(di_ns, i);
            assert!(
                address_space.has_reference(&device_id, &iface_id, ReferenceTypeId::HasInterface),
                "SurfaceTechnologyDevice must have HasInterface → {} (i={})",
                name, i
            );
        }
    }

    #[test]
    fn device_health_alarms_folder_exists() {
        let (address_space, ns, _di_ns) = setup();
        let device_id = NodeId::new(ns, "SurfaceTechnologyDevice");
        let alarms_id = NodeId::new(ns, "DI_DeviceHealthAlarms");
        assert!(address_space.find_node(&alarms_id).is_some(), "DeviceHealthAlarms folder must exist");
        assert!(
            address_space.has_reference(&device_id, &alarms_id, ReferenceTypeId::HasComponent),
            "SurfaceTechnologyDevice must have DeviceHealthAlarms as a component"
        );
    }

    #[test]
    fn device_health_has_enumeration_data_type() {
        let (address_space, ns, di_ns) = setup();
        let health_id = NodeId::new(ns, "DI_DeviceHealth");
        let dh_enum_id = NodeId::new(di_ns, 6244u32);
        let node = address_space.find_node(&health_id).expect("DI_DeviceHealth must exist");
        if let opcua::server::prelude::NodeType::Variable(v) = node {
            assert_eq!(
                v.data_type(), dh_enum_id,
                "DeviceHealth DataType must be DeviceHealthEnumeration (DI ns, i=6244)"
            );
        } else {
            panic!("DI_DeviceHealth is not a variable node");
        }
    }

    /// Diagnostic test: simulate AIO Commander's depth-limited DFS (no global
    /// dedup). Verify total visits are bounded and that variables are reached.
    #[test]
    fn aio_style_depth_limited_browse_terminates_with_variables() {
        use std::collections::HashMap;
        let (address_space, _ns, _di_ns) = setup();

        let device_set_id = NodeId::new(_di_ns, 5001u32);
        const MAX_DEPTH: usize = 16;
        const MAX_TOTAL_VISITS: usize = 5000;

        // Iterative DFS; ancestor-set on stack (no global visited)
        let mut stack: Vec<(NodeId, usize, std::collections::HashSet<NodeId>)> = Vec::new();
        let mut ancestors = std::collections::HashSet::new();
        ancestors.insert(device_set_id.clone());
        stack.push((device_set_id, 0, ancestors));

        let mut total_visits = 0usize;
        let mut variables_seen = 0usize;
        let mut visits_per_depth: HashMap<usize, usize> = HashMap::new();

        while let Some((node, depth, anc)) = stack.pop() {
            total_visits += 1;
            *visits_per_depth.entry(depth).or_insert(0) += 1;
            if total_visits > MAX_TOTAL_VISITS {
                panic!(
                    "Browse exploded: >{} visits. Per-depth: {:?}",
                    MAX_TOTAL_VISITS, visits_per_depth
                );
            }
            if let Some(n) = address_space.find_node(&node) {
                if matches!(n, opcua::server::prelude::NodeType::Variable(_)) {
                    variables_seen += 1;
                }
            }
            if depth >= MAX_DEPTH {
                continue;
            }
            let (refs, _) = address_space.find_references_by_direction(
                &node,
                BrowseDirection::Forward,
                Some((ReferenceTypeId::HierarchicalReferences, true)),
            );
            for r in &refs {
                if anc.contains(&r.target_node) {
                    continue;
                }
                let mut new_anc = anc.clone();
                new_anc.insert(r.target_node.clone());
                stack.push((r.target_node.clone(), depth + 1, new_anc));
            }
        }

        assert!(
            variables_seen > 0,
            "AIO-style browse from DeviceSet found 0 variables. Total visits={}, per-depth={:?}",
            total_visits, visits_per_depth
        );
        assert!(
            total_visits < 1000,
            "Suspicious browse explosion: {} visits. Per-depth: {:?}",
            total_visits, visits_per_depth
        );
    }

    /// Diagnostic: count BFS visits if a client walks BrowseDirection::Both with
    /// HierarchicalReferences subtypes WITHOUT global dedup. ANY tree exhibits
    /// exponential growth in this scenario (each parent↔child link creates an
    /// implicit oscillation). Real clients (incl. AIO/Akri) must dedup; this
    /// test simply documents the per-depth growth so we notice if a future
    /// change makes it dramatically worse than baseline.
    #[test]
    fn detect_undirected_browse_explosion() {
        let (address_space, _ns, di_ns) = setup();
        let start = NodeId::new(di_ns, 5001u32); // DeviceSet
        const MAX_DEPTH: usize = 4;
        let mut frontier: Vec<NodeId> = vec![start];
        let mut total: usize = 0;
        let mut per_depth: Vec<usize> = Vec::new();
        for _ in 0..=MAX_DEPTH {
            per_depth.push(frontier.len());
            total += frontier.len();
            let mut next: Vec<NodeId> = Vec::new();
            for node in &frontier {
                let (refs, _) = address_space.find_references_by_direction(
                    node,
                    BrowseDirection::Both,
                    Some((ReferenceTypeId::HierarchicalReferences, true)),
                );
                for r in &refs {
                    next.push(r.target_node.clone());
                }
            }
            frontier = next;
        }
        eprintln!(
            "Undirected per-depth visit counts (start=DeviceSet, depth 0..{}): {:?} total={}",
            MAX_DEPTH, per_depth, total
        );
        // Sanity bound: depth 4 from DeviceSet should remain under ~3000 even
        // without dedup. If this regresses dramatically, something is amiss.
        assert!(
            per_depth[4] < 3000,
            "Undirected explosion at depth 4 worse than expected: per-depth={:?}",
            per_depth
        );
    }

    #[test]
    fn parameter_set_contains_telemetry_variables() {
        // AIO/Akri DI discovery looks for variables under ParameterSet.
        // An empty ParameterSet means 0 datapoints → 0 discovered assets.
        let (address_space, ns, _di_ns) = setup();
        let parameter_set_id = NodeId::new(ns, "DI_ParameterSet");
        let (refs, _) = address_space.find_references_by_direction(
            &parameter_set_id,
            BrowseDirection::Forward,
            Some((ReferenceTypeId::HasComponent, true)),
        );
        let var_count = refs
            .iter()
            .filter(|r| {
                matches!(
                    address_space.find_node(&r.target_node),
                    Some(opcua::server::prelude::NodeType::Variable(_))
                )
            })
            .count();
        assert!(
            var_count > 0,
            "ParameterSet must expose at least one Variable as HasComponent for AIO discovery, found {}",
            var_count
        );
    }

    #[test]
    fn manufacturer_and_model_are_localized_text() {
        let (address_space, ns, _di_ns) = setup();
        for node_str_id in ["DI_Manufacturer", "DI_Model", "DI_ComponentName"] {
            let node_id = NodeId::new(ns, node_str_id);
            let node = address_space.find_node(&node_id).expect(&format!("{} must exist", node_str_id));
            if let opcua::server::prelude::NodeType::Variable(v) = node {
                let data_type = v.data_type();
                let expected = NodeId::from(&DataTypeId::LocalizedText);
                assert_eq!(
                    data_type, expected,
                    "{} DataType must be LocalizedText, got {:?}",
                    node_str_id, data_type
                );
            } else {
                panic!("{} is not a variable node", node_str_id);
            }
        }
    }
}
