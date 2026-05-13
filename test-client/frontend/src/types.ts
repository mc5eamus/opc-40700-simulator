export interface TreeNode {
  name: string;
  nodeId: string;
  nodeClass: number; // 1 = Object, 2 = Variable
  children?: TreeNode[];
  value?: unknown;
}

export interface VariableValue {
  value: number | string;
  timestamp: string;
}

export type ConnectionStatus = "connected" | "disconnected" | "reconnecting";
