# OpenXML1xbox

- Goal: an X-Men Legends original Xbox to Windows port with a genuine Xbox-era Windows Direct3D 8 backend. DX8 is mandatory; substituting D3D11/12 or a wrapper is not an accepted deliverable.
- XboxRecomp's existing D3D11 backend is an upstream baseline only. Building its libraries does not establish a game port or the required DX8 renderer.
- Prioritize measured progress toward playable XML1 and mod support. Record blockers and evidence; do not promise delivery dates from architecture alone.
- Keep the GameCube project untouched. This is an independent feasibility project.
- Never use Computer Use, desktop capture, screen takeover, UI automation, or host input injection. Use files, logs, non-interactive terminal commands, and process-local test harnesses only. Use the game's native capture for visual evidence.
- Keep original ISO files unchanged. Inputs, extracted assets, generated game code, saves, captures, and build products stay local and excluded from Git.
- Pin XboxRecomp as a submodule. Record any required upstream changes rather than silently updating the pinned revision.
- Do not invent XBE addresses, title IDs, or compatibility results. Derive them from the user's supplied image.
- Modding goals include loose-file overrides, validated asset conversion, and documented gameplay hooks that survive recompilation. These are goals, not implemented features.
