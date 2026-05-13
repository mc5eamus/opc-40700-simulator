import type { VariableValue } from "../types";

interface VariableGroup {
  title: string;
  icon: string;
  variables: string[];
}

const GROUPS: VariableGroup[] = [
  {
    title: "Temperature",
    icon: "🌡",
    variables: [
      "CurrentTemperature",
      "TargetTemperature",
      "TC_HeatingPower",
      "TC_ControllerState",
    ],
  },
  {
    title: "Pressure",
    icon: "💨",
    variables: [
      "CurrentPressure",
      "TargetPressure",
      "PC_ValvePosition",
      "PC_ControllerState",
    ],
  },
  {
    title: "Flow",
    icon: "🔄",
    variables: [
      "CurrentFlowRate",
      "TargetFlowRate",
      "FC_PumpSpeed",
      "FC_ControllerState",
    ],
  },
  {
    title: "Coating",
    icon: "🎨",
    variables: [
      "CoatingThickness",
      "TargetThickness",
      "SprayPressure",
      "ConveyorSpeed",
      "CU_UnitState",
    ],
  },
  {
    title: "Job",
    icon: "📋",
    variables: [
      "CurrentJobId",
      "JobStatus",
      "PartsProcessed",
      "TotalParts",
      "JobProgress",
    ],
  },
];

function stateColor(value: unknown): string {
  if (typeof value !== "string") return "text-gray-300";
  const v = value.toLowerCase();
  if (v === "running" || v === "good" || v === "active" || v === "processing")
    return "text-green-400";
  if (v === "idle" || v === "standby" || v === "waiting") return "text-yellow-400";
  if (v === "error" || v === "fault" || v === "stopped") return "text-red-400";
  return "text-gray-300";
}

function formatValue(_name: string, val: unknown): string {
  if (val === undefined || val === null) return "—";
  if (typeof val === "number") return val.toFixed(2);
  return String(val);
}

interface DashboardProps {
  values: Record<string, VariableValue>;
}

export function Dashboard({ values }: DashboardProps) {
  return (
    <div className="grid grid-cols-1 md:grid-cols-2 xl:grid-cols-3 gap-4 p-4 overflow-y-auto">
      {GROUPS.map((group) => (
        <div
          key={group.title}
          className="bg-gray-800 rounded-lg border border-gray-700 p-4"
        >
          <h2 className="text-base font-semibold text-gray-200 mb-3 flex items-center gap-2">
            <span>{group.icon}</span>
            {group.title}
          </h2>
          <div className="space-y-2">
            {group.variables.map((varName) => {
              const entry = values[varName];
              const val = entry?.value;
              const isState =
                varName.endsWith("State") || varName === "JobStatus";
              const isProgress = varName === "JobProgress";
              const numericProgress =
                isProgress && typeof val === "number" ? val : null;

              return (
                <div key={varName} className="flex items-center justify-between">
                  <span className="text-sm text-gray-400 truncate mr-2">
                    {varName}
                  </span>
                  {isProgress && numericProgress !== null ? (
                    <div className="flex items-center gap-2 min-w-[120px]">
                      <div className="flex-1 h-2 bg-gray-700 rounded-full overflow-hidden">
                        <div
                          className="h-full bg-cyan-500 rounded-full transition-all duration-300"
                          style={{ width: `${Math.min(100, numericProgress)}%` }}
                        />
                      </div>
                      <span className="text-xs text-cyan-400 font-mono w-10 text-right">
                        {numericProgress.toFixed(0)}%
                      </span>
                    </div>
                  ) : (
                    <span
                      className={`text-sm font-mono ${
                        isState ? stateColor(val) : "text-cyan-400"
                      }`}
                    >
                      {formatValue(varName, val)}
                    </span>
                  )}
                </div>
              );
            })}
          </div>
        </div>
      ))}

      {/* System info card */}
      <div className="bg-gray-800 rounded-lg border border-gray-700 p-4">
        <h2 className="text-base font-semibold text-gray-200 mb-3 flex items-center gap-2">
          <span>🖥</span>
          System
        </h2>
        <div className="space-y-2">
          {["Manufacturer", "Model", "SerialNumber", "SoftwareVersion", "SystemState"].map(
            (varName) => {
              const entry = values[varName];
              const val = entry?.value;
              const isState = varName === "SystemState";
              return (
                <div key={varName} className="flex items-center justify-between">
                  <span className="text-sm text-gray-400 truncate mr-2">
                    {varName}
                  </span>
                  <span
                    className={`text-sm font-mono ${
                      isState ? stateColor(val) : "text-cyan-400"
                    }`}
                  >
                    {formatValue(varName, val)}
                  </span>
                </div>
              );
            }
          )}
        </div>
      </div>
    </div>
  );
}
