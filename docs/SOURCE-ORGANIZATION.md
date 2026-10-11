# Source organization and known-function naming

This pass organizes existing knowledge; it does not attempt to identify every
function or change game behavior. Unknown guest functions remain in numbered
`recomp_xxx.c` files. The organizational pass is implemented and verified; unidentified functions remain deferred.

## Source and ownership

The subsystem directory map is in [src/README.md](../src/README.md).
`config/source-layout.json` records 355 handwritten source/test moves, and
`scripts/check-source-layout.py` checks the mapped destinations and stale paths.
Guest adapters keep explicit register/memory access and their existing ABI.
Moving files does not make host-dependent implementations portable.

## Function identities

`config/symbols/xml1.json` is the evidence-backed registry. It currently holds
49 manual mappings and 160 generated function names (all built). Entries retain guest
address, module, calling convention, confidence, executable identity and
provenance. Behavioral names do not claim to be original developer symbols.
The manual map remains a checked compatibility copy in
`config/manual-functions.json`.

The registry selects 152 generated functions for emission under `known/<module>/`. Five parser
functions and three DX8 functions are named inside their original units to retain
shared state or helper declarations. Their registry entries explain why.
Unknown functions remain in chunks; hook locations alone are insufficient
proof for assigning a whole-function name.

`scripts/recomp_source.py` indexes functions by guest address, including
unresolved stubs, independently of filenames. Ambiguous instruction labels fail
rather than selecting an arbitrary containing function. All 47 generation
guards use address-aware lookup. Existing handwritten address-based callers
remain compatible through generated aliases.

## Regeneration and building

Run `scripts/generate-code.ps1 -Disassemble -XbePath <original-default.xbe>`
from the project on a fresh checkout (after the normal Python/toolchain setup).
Later runs may omit `-Disassemble` when the verified analysis already exists.
Without `-XbePath`, the script uses `XBOXgame/default.xbe`.
The script checks the pinned executable identity, exports the manual mapping,
runs XboxRecomp and the guards, then emits a separate named candidate. The
emitter checks all guest entry addresses and compares every function body after
reversing symbol substitutions. It preserves entry labels and inline comments.

Raw guard input stays in `src/recomp/gen`. Validated named output is published
to `src/recomp/named`; the previous named directory is retained under
`work/generated-names` for recovery. Both generated trees are local-only.
The actual publication block passed initial and replacement runs in a private
generation fixture, preserving the previous output byte-for-byte. The actual
CMake default-selection block selected the published tree. The complete top-level command subsequently passed in the private pipeline
fixture using the verified pinned disassembly. Its exact output built successfully.

New CMake configurations prefer the named tree when its report exists.
Existing build caches must explicitly select it:

```powershell
cmake -S . -B build/<build-name> -DXML1_RECOMP_SOURCE_DIR=<absolute-named-tree>
cmake --build build/<build-name> --config Release --target xml1-boot-probe
```

Do not edit emitted names by hand. Add an evidenced identity to the registry,
then regenerate. Keep functions in their original unit when splitting would
change shared static state or lose required declarations.

## Verification and completion audit

The completed registry has 209 identities: 49 maintained manual overrides and
160 generated functions. 152 generated functions live under subsystem paths;
eight retain their original translation unit for shared state/declarations.
Both source-reference review files are validated against the registry.

| Requirement | Evidence and result |
| --- | --- |
| Handwritten source/test organization | 355 mapped paths; source-layout checker passes |
| Existing knowledge and deferred unknowns | Registry evidence plus handwritten and supplemental test-reference reviews; unknowns keep address names |
| Stable guest identity and ABI | Pinned XBE hash, retained guest entry addresses/register ABI, unchanged manual mapping |
| Filename-independent tools | All 47 generation guards use address lookup; 50 lookup/naming/relocation/audit tests pass |
| Regeneration | Complete top-level generation, guards, naming and publication succeeded in a private fixture with pinned existing disassembly |
| Function preservation | All 25,855 entries retained; every emitted body equals its source after reversing identifier substitutions |
| Build | Full optimized Release build passes; exact regenerated output also rebuilds successfully |
| Native behavior | Progression, powerup-definition and combat-event fixtures each exit 0 |
| Gameplay flow | Native captures inspected through intro video, Cerebro main menu, level 1, movement, Details/Powers, pause Options/Advanced Options and return to gameplay |
| Published source | 263 files copied to `src/recomp/named`, byte-identical to the final candidate and regenerated output; fresh CMake configuration selects it automatically |
| Assets and player staging | Tests use private data; private executable restored by hash; player `XBOXgame` not modified |

Local evidence under `work/source-organization` includes:

- `final-verification.json`: build, publication and native-test results.
- `final-named/naming-report.json`: complete naming and body-equivalence result.
- `final-pipeline.log` and `final-pipeline-comparison.json`: regeneration and comparison.
- `final-build.log` and `final-exact-build.log`: successful builds.
- `final-tooling-tests.log`: 50 passing tooling tests.
- `final-smoke/verification.json`: all 14 individually inspected captures,
  tested executable hash and private-executable restoration.

The smoke preceded synchronization of five header include orders with the
regenerated output. Those changes contained no function-body edits, and the
exact output rebuilt successfully afterward. Full historical evidence remains
in [SOURCE-ORGANIZATION-HISTORY.md](SOURCE-ORGANIZATION-HISTORY.md).

### Verification limits

The gameplay check was muted, so audio quality was not assessed. It did not
complete the level, establish combat balance, test player-facing save/load, or
change settings to verify persistence. Native tests exercise save-state
serialization and combat/powerup contracts separately; they do not substitute
for those untested player flows. This is source organization with preserved
behavior, not acceptance of unrelated unfinished gameplay/performance work.

Unknown identification, original developer symbol recovery, semantic rewrites
and new features remain outside this pass. Subsequent naming sweeps should add
proven evidence to the registry and use the same regeneration workflow.
