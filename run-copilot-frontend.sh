#!/usr/bin/env bash
# Launch Copilot CLI to create the OPC UA frontend — fully autonomous, no interaction needed.
# Usage: ./run-copilot-frontend.sh
set -euo pipefail

REPO_ROOT="$(cd "$(dirname "$0")" && pwd)"
BRANCH="feature/opcua-frontend"
PROMPT_FILE="$REPO_ROOT/.github/prompts/create-frontend.prompt.md"

# Create the feature branch (from current HEAD)
git checkout -b "$BRANCH" 2>/dev/null || git checkout "$BRANCH"

echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
echo "  Launching Copilot CLI in non-interactive autopilot mode"
echo "  Branch: $BRANCH"
echo "  Prompt: $PROMPT_FILE"
echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"

copilot \
  -p "$(cat "$PROMPT_FILE")" \
  --remote \
  --autopilot \
  --yolo \
  --experimental \
  -C "$REPO_ROOT"
