#!/usr/bin/env bash
set -euo pipefail
cd "$(dirname "$0")"
export NXDK_DIR="${NXDK_DIR:-/c/nxdk}"
export PATH="$NXDK_DIR/bin:/clang64/bin:$PATH"
make -j4 "$@"

