import { useOpcUaSocket } from "./hooks/useOpcUaSocket";
import { ConnectionStatusBar } from "./components/ConnectionStatusBar";
import { TreeView } from "./components/TreeView";
import { Dashboard } from "./components/Dashboard";

function App() {
  const { tree, values, connectionStatus } = useOpcUaSocket();

  return (
    <>
      <ConnectionStatusBar status={connectionStatus} />
      <div className="flex flex-1 overflow-hidden">
        <aside className="w-[30%] min-w-[250px] border-r border-gray-700 overflow-y-auto"
               style={{ backgroundColor: "#1f2028" }}>
          <TreeView tree={tree} values={values} />
        </aside>
        <main className="flex-1 overflow-y-auto">
          <Dashboard values={values} />
        </main>
      </div>
    </>
  );
}

export default App;
