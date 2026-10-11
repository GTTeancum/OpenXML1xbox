# Source modules

Handwritten code is grouped by responsibility. Generated guest code remains
in the committed `recomp/game` tree; unidentified functions retain their
numbered chunk files. Optional maintainer regeneration uses ignored `recomp/gen`
and `recomp/named` scratch trees. Normal builds do not read them.
Header paths are explicit relative to the `src` include root.

| Directory | Responsibility |
| --- | --- |
| `app` | Startup, configuration and first-run asset setup |
| `platform/windows` | Embedded worker lifecycle and synchronization |
| `runtime/guest` | Guest ABI, CRT/physical-memory compatibility and manual dispatch |
| `graphics/dx8` | Genuine D3D8 bridge, packet/texture/vertex handling |
| `audio` | DirectSound, APU/DSP, output recovery and PC banks |
| `input` | Guest input, bindings, gamepad mapping and process-local test input |
| `ui` | Native menu integration, options and prompts |
| `game/xml1` | XML1-specific limits, modder mode and NewGame+ |
| `engine/actors` | Actor scale/transform, AI and leader/character metadata |
| `engine/combat` | Damage, resistance, healing and combat handlers |
| `engine/powers` | Power selection, events, effects and powerup views |
| `engine/progression` | Talents, ranks, identity and character talent saves |
| `engine/world` | Campaign, extraction, progress and travel |
| `engine/inventory` | Equipment, stash and item rewards |
| `engine/saves` | Save naming and saved statistics |
| `engine/scripting` | Script commands and script-event integrations |
| `engine/resources` | Asset routes, PKGB and XMLB |
| `engine/core` | Shared numeric and motion-path utilities |
| `diagnostics` | Traces, profiling and isolated XML2 diagnostic support |

Guest adapters retain `_guest` names and explicit guest memory/register access.
Do not infer that moving a file makes its implementation platform-independent.
Portable logic should remain independent of renderer/window services; existing
dependencies are being verified rather than rewritten during organization.

`config/source-layout.json` records old-to-new source/test paths. The layout
checker verifies these destinations, stale active-tooling paths and moved
header references. Investigation documents may retain historical paths.
`docs/SOURCE-ORGANIZATION.md` records migration progress and validation limits.
