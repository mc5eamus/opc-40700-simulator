import { useEffect, useRef, useState, useCallback } from "react";
import type { TreeNode, VariableValue, ConnectionStatus } from "../types";

const WS_URL = "ws://localhost:3001";
const MAX_BACKOFF = 30000;

export function useOpcUaSocket() {
  const [tree, setTree] = useState<TreeNode | null>(null);
  const [values, setValues] = useState<Record<string, VariableValue>>({});
  const [connectionStatus, setConnectionStatus] =
    useState<ConnectionStatus>("disconnected");

  const wsRef = useRef<WebSocket | null>(null);
  const backoffRef = useRef(1000);
  const reconnectTimerRef = useRef<ReturnType<typeof setTimeout>>(undefined);

  const connect = useCallback(() => {
    if (wsRef.current?.readyState === WebSocket.OPEN) return;

    setConnectionStatus("reconnecting");
    const ws = new WebSocket(WS_URL);
    wsRef.current = ws;

    ws.onopen = () => {
      setConnectionStatus("connected");
      backoffRef.current = 1000;
    };

    ws.onmessage = (event) => {
      try {
        const msg = JSON.parse(event.data);
        if (msg.type === "tree") {
          setTree(msg.data);
        } else if (msg.type === "update") {
          setValues((prev) => ({
            ...prev,
            [msg.name]: { value: msg.value, timestamp: msg.timestamp },
          }));
        }
      } catch {
        // ignore malformed messages
      }
    };

    ws.onclose = () => {
      setConnectionStatus("disconnected");
      wsRef.current = null;
      const delay = backoffRef.current;
      backoffRef.current = Math.min(delay * 2, MAX_BACKOFF);
      reconnectTimerRef.current = setTimeout(connect, delay);
    };

    ws.onerror = () => {
      ws.close();
    };
  }, []);

  useEffect(() => {
    connect();
    return () => {
      clearTimeout(reconnectTimerRef.current);
      wsRef.current?.close();
    };
  }, [connect]);

  return { tree, values, connectionStatus };
}
