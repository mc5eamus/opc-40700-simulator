import type { ConnectionStatus } from "../types";

interface Props {
  status: ConnectionStatus;
}

export function ConnectionStatusBar({ status }: Props) {
  const dotColor =
    status === "connected"
      ? "bg-green-500"
      : status === "reconnecting"
        ? "bg-yellow-500"
        : "bg-red-500";

  const label =
    status === "connected"
      ? "Connected"
      : status === "reconnecting"
        ? "Reconnecting…"
        : "Disconnected";

  return (
    <header className="flex items-center justify-between bg-gray-900 border-b border-gray-700 px-6 py-3">
      <h1 className="text-lg font-semibold text-gray-100 tracking-wide">
        ⚙ OPC 40700 Surface Technology Monitor
      </h1>
      <div className="flex items-center gap-2 text-sm">
        <span className={`inline-block w-2.5 h-2.5 rounded-full ${dotColor}`} />
        <span className="text-gray-400">{label}</span>
      </div>
    </header>
  );
}
