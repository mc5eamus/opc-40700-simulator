import { useState } from "react";
import type { TreeNode, VariableValue } from "../types";

interface TreeNodeProps {
  node: TreeNode;
  values: Record<string, VariableValue>;
  depth?: number;
}

function TreeNodeItem({ node, values, depth = 0 }: TreeNodeProps) {
  const [expanded, setExpanded] = useState(depth < 2);
  const isObject = node.nodeClass === 1;
  const icon = isObject ? "📁" : "📊";
  const hasChildren = isObject && node.children && node.children.length > 0;

  const liveValue = values[node.name];
  const displayValue = liveValue
    ? typeof liveValue.value === "number"
      ? liveValue.value.toFixed(2)
      : String(liveValue.value)
    : null;

  return (
    <div>
      <button
        onClick={() => hasChildren && setExpanded(!expanded)}
        className={`flex items-center gap-1.5 w-full text-left py-1 px-2 rounded text-sm hover:bg-gray-700/50 transition-colors ${
          hasChildren ? "cursor-pointer" : "cursor-default"
        }`}
        style={{ paddingLeft: `${depth * 16 + 8}px` }}
      >
        {hasChildren && (
          <span className="text-gray-500 text-xs w-3">
            {expanded ? "▾" : "▸"}
          </span>
        )}
        {!hasChildren && <span className="w-3" />}
        <span>{icon}</span>
        <span className="text-gray-300">{node.name}</span>
        {displayValue !== null && (
          <span className="ml-auto text-xs text-cyan-400 font-mono">
            {displayValue}
          </span>
        )}
      </button>
      {expanded && hasChildren && (
        <div>
          {node.children!.map((child) => (
            <TreeNodeItem
              key={child.nodeId}
              node={child}
              values={values}
              depth={depth + 1}
            />
          ))}
        </div>
      )}
    </div>
  );
}

interface TreeViewProps {
  tree: TreeNode | null;
  values: Record<string, VariableValue>;
}

export function TreeView({ tree, values }: TreeViewProps) {
  if (!tree) {
    return (
      <div className="p-4 text-gray-500 text-sm">
        Waiting for address space…
      </div>
    );
  }

  return (
    <nav className="overflow-y-auto h-full p-2">
      <TreeNodeItem node={tree} values={values} depth={0} />
    </nav>
  );
}
