# OpenXML1xbox

- Goal: an X-Men Legends original Xbox to Windows port with a genuine Xbox-era Windows Direct3D 8 backend. DX8 is mandatory; substituting D3D11/12 or a wrapper is not an accepted deliverable.
- XboxRecomp's existing D3D11 backend is an upstream baseline only. Building its libraries does not establish a game port or the required DX8 renderer.
- Prioritize measured progress toward playable XML1 and mod support. Record blockers and evidence; do not promise delivery dates from architecture alone.
- Keep the GameCube project untouched. This is an independent feasibility project.
- Preserve a future original-Xbox build path. The current64-bit Windows target is interim; keep host-specific backends separate and retain Xbox-compatible game data and mod formats. See docs/XBOX-RETURN.md. An Xbox hardware build is not implemented yet.
- Never use Computer Use, desktop capture, screen takeover, UI automation, or host input injection. Use files, logs, non-interactive terminal commands, and process-local test harnesses only. Use the game's native capture for visual evidence.
- Keep original ISO files unchanged. Inputs, extracted assets, generated game code, saves, captures, and build products stay local and excluded from Git.
- Pin XboxRecomp as a submodule. Record any required upstream changes rather than silently updating the pinned revision.
- Do not invent XBE addresses, title IDs, or compatibility results. Derive them from the user's supplied image.
- Community mod-hook documentation is out of scope. Focus upstream contribution work on reusable toolkit fixes.

- Standing TODO rule: TODO.MD contains only unfinished work. Remove completed items from both the summary and detailed sections, renumber remaining items and update internal references. Keep completion history and evidence in progress documentation, not in the TODO list. Do not reopen accepted work without user direction.
- Standing staging rule: provide a self-contained, player-friendly folder with a plainly named game executable, build.ini, game data, and runtime dependencies. Never present separate build/work fixture paths as the playable delivery. Keep technical fixtures separate from player staging.
- User-selected player staging is !GAME. Put X-Men Legends.exe and build.ini directly beside default.xbe and the loose asset directories, with the renderer in runtime. Do not create another player/ tree or nest the assets under game/ there.
- A smoke check that only proves frames rendered is never sufficient. Inspect expected artwork, FMVs, menu backgrounds, transitions and applicable audio in the actual staged build; explicitly report any unverified portions.
- Preserve original resource filenames and use the reference PKGB format. Correct extraction and package declarations at their source; do not invent PKGB attributes, runtime alias routing, or other custom fixes to compensate for packaging errors.
- Imported XML2 menu IGBs must retain their PKGB associations and declared relative paths. Author the IGB assets and menu contents within that structure; do not replace it with an independent overlay or rename extracted resources.
- Menu asset authoring is limited to the IGBs and their populated menu contents. Preserve the reference file structure and package relationships when copying and staging them.
- PKGB clarification: declarations may change to match authored menus. Preserve the normal PKGB format, original resource names and relative paths; byte-for-byte identity with an imported manifest is not required.
