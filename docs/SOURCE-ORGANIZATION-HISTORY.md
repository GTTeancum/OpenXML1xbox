# Source organization and known-function naming

Active goal, 2026-10-11. Preserve execution behavior and the DX8 backend while
organizing handwritten code and consolidating function identities already
established by prior work. Unknown functions can remain in numbered recomp
chunks; identifying them is deferred.

## Current implementation

- `config/symbols/xml1.json` seeds the registry with 49 existing manual mappings,
  module ownership, guest-register ABI, provenance and the local XBE SHA256.
  `established_mapping` means the host mapping is already maintained; it does
  not assert recovery of the original developer's exact symbol name.
- `scripts/validate-symbols.py` checks evidence paths, unique names/addresses,
  optional executable identity and equality with manual dispatch. It can export
  the manual mapping for the generation pipeline. Generation now validates the
  input XBE and exports this mapping before invoking XboxRecomp. The old manual
  config remains a checked compatibility copy during migration.
- `scripts/recomp_source.py` resolves generated functions by guest address in
  recursively discovered C files. Legacy symbols and renamed functions with
  preserved entry labels work. Duplicate addresses fail explicitly. One-line
  unresolved stubs are included; declarations and unrelated host helpers are not.
- Talent-source and talent-package guards now use this lookup rather than fixed
  numbered chunk paths. Existing generated output is unchanged.

## Verified so far

Four lookup tests cover relocation/renaming, duplicates, host/prototype exclusion
and unresolved stubs. The current tree indexes 25,855 addresses including stubs.
Both migrated guards pass against current generated output and in a temporary
tree where their input chunks were relocated and renamed. Repeated application
is stable. All 49 registry mappings match existing manual dispatch and the staged
XBE identity. These are tooling checks, not gameplay verification.

## Remaining work

1. Inventory known gameplay functions in guards, comments, tests and RE notes;
   record evidence without converting heuristic classifications into names.
2. Migrate remaining numbered-file dependencies, including build/test extraction;
   integrate the registry into generation and dispatch without changing ABI.
3. Organize handwritten code, tests and CMake by subsystem; retain unrelated
   working changes and original player staging.
4. Emit confirmed function names and subsystem grouping; keep unknown chunks.
5. Verify regeneration and complete function coverage, build and subsystem tests,
   then inspect affected gameplay flows using process-local/native capture tools.
6. Document module interfaces, reproduction steps and deferred unknown inventory.

No full regeneration, clean build or new gameplay validation has been claimed.
Original versions of the two migrated guards are retained locally under
`work/source-organization/baseline` to preserve their preexisting uncommitted work.

## Second pass

Six generated talent functions have evidence-backed behavioral names recorded
from their existing save-identity callers (manager access, ID/name lookups,
document loading and selector resolution). They are not renamed in emitted C
until dependent guards are ready. This brings the registry to 55 entries.

Campaign-record, actor-transformation and leader-definition guards now resolve
instruction labels independently of numbered source files. Labels inside
overlapping recovered functions may be ambiguous; the lookup explicitly rejects
such a request instead of arbitrarily selecting an owner. Campaign and leader
guards pass against current output. The actor-transformation guard fails at
0002E6F0; executing its saved pre-migration version produces the same failure.
The current body has an extra Bishop reset before the expected cleanup sequence.
This is recorded as a baseline regeneration issue, not silently repaired here.

## First subsystem migration

18 handwritten audio sources/headers and 10 C/C++ fixtures moved to `src/audio`
and `tests/audio`. Includes, source paths, symbol provenance and generating guard
include strings were updated together. Audio library/test definitions are in
`cmake/Audio.cmake`. Original edited/moved files and an explicit move manifest
are backed up in `work/source-organization/audio-move`.

Seven rebuilt regression programs pass: loop ownership, loop event runtime,
PC sound cache (using the PC Bishop bank), DirectSound mixer, deterministic
device recovery, audio settings and DSP queue. The loop runtime fixture lacked
two existing guest diagnostic hooks; deterministic host-only stubs were added
to the fixture. No production behavior was changed. An initial PC-cache run
used an archived Xbox bank and correctly rejected it; rerunning with the PC
bank passes original preservation, cache rebuild and source-edit checks.

CMake reconfiguration passes. Full game target rebuild is being checked; this
subsystem pass does not establish a clean build or gameplay/audio acceptance.

Character-race and extraction guards also use instruction-label lookup now.
Character-race passes. Extraction reports a changed continuation at 0018CF90;
the saved original guard produces the identical failure. Both baseline guard
failures must be reconciled before full regeneration can be accepted. They do
not justify suppressing checks or changing the current generated game behavior.

Full target build was launched with `cmake --build build/optimized --config
Release --target xml1-boot-probe --parallel 4`; output is retained in
`work/source-organization/audio-build.log`. At the last observation it was
still compiling generated chunks. Resume observation of the existing build,
rather than starting another build against this directory.

## Subsequent verification

The above full `xml1-boot-probe` build completed successfully. Existing generated
shift and AI pointer-conversion warnings remain visible in its log; no warning
was suppressed. This is a full target rebuild, not a fresh-directory clean build
or proof of gameplay correctness. Player staging was not replaced.

Auto-equipment, frame-limit, filter-factory and Danger Room guards now use
address/label lookup. `tests/recomp_guard_relocation_test.py` verifies five guards
with actual guest functions separated into independent, renamed files, including
Danger Room's three boundaries. It checks retained address coverage and stable
reapplication. This complements the earlier lookup tests.

The registry contains 60 records: 49 manual mappings and 11 generated function
identities. Five additional identities come from existing Danger Room guard
documentation. The frame-wait address 00011400 mentioned in prior notes is an
interior label within function 00011390; it was deliberately not added as a
function. `validate-symbols.py --generated src/recomp/gen` checks recorded
generated entries against actual function boundaries.

## Progression migration

40 handwritten sources/headers and 18 C/C++ fixtures now live in
`src/engine/progression` and `tests/engine/progression`. Explicit path/include
updates and source backups are recorded in `work/source-organization/progression-move`.
Ten portable/host fixtures rebuilt and passed, covering native view ownership,
curve/declaration evaluation, record encoding, map ownership, identity saves,
actor integration, imported catalogs, context isolation and rank-strip layout.
Five generated-native fixtures also rebuilt and passed: 17 talent operations,
255 source IDs, registry pools, pinned source-cache slots, and character maps
including copy/save/load, refund/commit, bounded ownership and guest ABI.

Talent-rank extraction and talent-strip guards now resolve their functions by
address. The registry contains 72 records after adding twelve existing
fixture-proven rank accessors, setters, copy, refund and commit functions.
These identities still await emission in the naming pass; recording them does
not claim that the generated source has already been renamed.

## Naming candidate and interface/resource migration

`scripts/name-recomp-functions.py` now emits a separate tree with 23 registered
generated functions named and grouped under `known/<module>/`. Unknowns remain
in numbered chunks. Original entry addresses and instruction labels remain;
identifier rewriting updates declarations/cross-calls/dispatch without editing
string literals or comments. A compatibility macro table preserves existing
handwritten guest callers. The script refuses to overwrite an output tree.

The first isolated candidate (`work/source-organization/named-gen-v1`) retained
all 25,855 guest entries and passed body equivalence for every function after
inverse identifier substitution. Two fixture tests cover lexical replacement,
unknown chunk retention, address-preserving dispatch, original comments and
input-tree preservation. This candidate predates the interface header moves;
regenerate a new candidate from current source before compiling it. No named
tree has replaced production generated code yet.

36 further sources/tests moved into `src/input`, `src/ui`,
`src/engine/resources`, and `src/app` (first-run extraction), with mirrored
C/C++ test paths. All eight affected targets rebuilt, and five regression
programs passed: guest input, asset routing, PC input integration, controls/
settings and XMLB parsing. Driver targets were compiled, not counted as runtime
tests. Two old host input fixtures needed an existing codex-debug callback
resolved; test-only stubs abort if invoked so they cannot silently simulate
game-state behavior. These tests use process-local input only.

## Remaining handwritten modules

The remaining 233 source/test files have moved into responsibility-based
directories documented in `src/README.md`. The complete explicit manifest in
`config/source-layout.json` covers 355 moves across this goal. Source contents,
including existing uncommitted work, were preserved apart from path/include
updates. Original versions remain in local migration backup folders.

The full build exposed secondary renderer-CMake paths, missing include roots
for APU/flag fixtures, and the forced diagnostics include. These are corrected.
The older fence-wait fixture also declared the embedded worker path as narrow
text whereas production returns wide text; its abort-only test stub now uses
the production type. Its production graphics include also requires the vertex
program library, now explicitly linked. No gameplay behavior was changed to
accommodate the build. Full-build validation is ongoing; partial target success
must not be reported as whole-project build completion.

`check-source-layout.py` passes all 355 destinations and detects stale source
paths, unqualified moved includes and forced includes, including generated
source header references. Symbol, relocation and naming tests remain passing.

## Whole-project build and named clean build

The fourth whole-project build completed successfully with exit code 0; log:
`work/source-organization/subsystems-build-4.log`. This includes the separate
32-bit DX8 renderer and the game target. No player executable was replaced.

Loop-sound, effect/sound and combat-contact guards now group hooks by their
current instruction-label owners. Ten real-source relocation tests pass.
`cmake/Generated.cmake` tracks the generated C/header tree plus lookup/registry
inputs for native fixture dependencies; CMake no longer pins these dependencies
to numbered source filenames. Individual guard migrations remain incomplete.

A new named tree (`work/source-organization/named-gen-v2`) was generated after
all source moves, again retaining 25,855 entries with 23 named functions and
full inverse-name body equivalence. CMake accepts `XML1_RECOMP_SOURCE_DIR` for
the game target so the candidate can be compiled without replacing production
generated source. A fresh x64 build in `build/source-organization-clean` uses
this tree with optimized recompilation and the embedded DX8 worker. Its build
log is `work/source-organization/named-clean-build.log`; it completed with exit
code 0. The private smoke verification below uses that executable.

## Named candidate runtime verification and continued guard migration

The registry, source-cache and character-talent-map guard fixtures emitted from
the production tree and named-gen-v2 are byte-identical (47, 11 and 56 native
methods respectively). These guards now traverse indexed function owners and
use a token-aware, in-memory address-name view, restoring descriptive names on
write. Comments and string literals retain their original evidence. The native
fence fixture extractor also resolves its three functions by guest address.
The skeleton-property parser guard independently resolves the parser and the
CharacterDef constructor; its layout prerequisite no longer assumes both live
in the same chunk. Eleven real-source guard relocation/idempotence tests pass,
along with five source-index tests and two naming tests. Layout and symbol
validation still pass (355 paths, 72 records, 49 manual mappings).

Private runtime evidence: `work/source-organization/named-smoke3`, using the
clean named candidate at 1920x1080, headless and muted. Native captures were
individually inspected: Cerebro main-menu background; story news FMV with
subtitles; first-level pause/resume; Wolverine with HUD, street scenery and
enemies; changed position and camera after process-local movement; Characters
and Details/Powers with stock names, rank pips and descriptions; return to play
and Brutal Slash animation/effect with energy consumption. This verifies the
tested flow, not all levels, combat damage, saving, audio quality or every named
function. Audio was muted and was not assessed. Player XBOXgame was untouched.

The earlier smoke2 attempt displayed intro/attract videos and the main menu but
did not establish interactive gameplay: the harness used command ID zero for
focus, which was not consumed. Smoke3 explicitly submitted focus through the
acknowledged process-local channel. Its private executable is restored after
the run; no desktop input or OS screen capture was used.

Still outstanding: migrate remaining chunk-dependent guards/audits, reconcile
the previously recorded lifecycle guard ordering failures, consolidate further
already-known functions, and connect the naming pass to verified regeneration.
The organization goal remains active; the named tree is an isolated candidate.

## Guard continuation: parser and lifecycle ownership

Silent-action, removal-health, parser-text-arena, actor-scale, leader-event and
handler-trace guards now resolve guest addresses instead of numbered chunks.
The parser guard operates on its four individually owned functions, retains
descriptive names on writes, and emits address-spelled native fixtures for tests.
Its production/named-v2 fixture exports are byte-identical. The native parser
fixture target was rebuilt successfully after the extractor change.

Relocation coverage now runs 19 guards against individually separated functions
whose C identifiers have also been renamed. Each guard runs twice and must
retain the same address coverage and stable second-pass bytes. All 19 pass.

The actor-transform and extraction baseline failures were caused by verified
hooks preceding the expected marker-adjacent sequence. Guards now accept those
specific existing arrangements without reordering generated calls. The Bishop
contact guard checks its current instruction block before inserting a reset,
preventing another copy when another guard prepends a hook. Existing generated
duplicates have not been removed or otherwise behaviorally rewritten. Actor
scale and leader retirement checks likewise recognize the existing leading
contact reset. These checks resolve the recorded current-tree failures; full
fresh regeneration and combined guard-order validation remain outstanding.

## Combat diagnostics, inventory and viewport guard migration

Operand trace, vitality, power bindings, stash lifecycle, stash menu, progress,
missing gameplay command and vertex-state guards no longer use numbered chunks.
Operand tracing resolves the merged blast body by function entry, preserving
the deliberate distinction from its overlapping standalone tail. Progress
options entry and file disposition belong to separate functions; each is now
located independently. Power icon/move-trace units receive their own required
headers rather than inheriting them from a neighbor in the original chunk.
Stash-menu emitted includes now use the organized inventory header paths.

Twenty-seven real-source relocation tests pass, using descriptive identifiers,
separate files, original include context and repeated guard application. Source
layout validation continues to pass all 355 moved paths. These changes were
tested in disposable generated fixtures, not applied to player assets or the
production generated tree. Remaining larger guards still need migration and
the complete regeneration sequence has not yet been validated.

## Save-state, AI and XMLB guard migration

Save-state import lifecycle, AI modes and XMLB cache publication guards now
resolve owning functions by guest address. The XMLB guard canonicalizes only
C identifiers in memory so embedded ABI-call checks still work when their
callees have descriptive names, restoring names when writing. Save-state
post-reset validation now accepts the verified leading new-game trace and
preserves the already-installed reset callback rather than adding another.
Thirty separated-and-renamed real-source guard tests pass twice each. The
production generated tree and player staging were not modified for these tests.

## Package, script-registration and NewGame+ guards

Package loading now locates loose/archive selection, motionpath normalization,
text language, PKGB decode and cross-language save-name consumers separately.
Motionpath emitted includes use the organized resource/app paths. Embedded
guest calls are checked in the address-spelled view and descriptive names are
restored on writes. Script registration and missing-command descriptor hooks
resolve their individual owners; shared dispatch-header registration stays in
the generated type header. NewGame+ groups its hooks by actual label owners and
retains the existing boundary-local ordering/deduplication rules.

All 33 real-source separated/renamed guard tests pass, including two consecutive
applications of each guard. Source-layout validation passes. Fresh generation,
combined guard ordering and migration of the larger remaining guards are still
required before making the named candidate the default source tree.

## Secondary-victim and projectile ownership

The secondary-victim guard now scopes its 24 patch pairs to 20 verified guest
function entries. Owners were resolved from the current generated bodies and
ambiguous/missing matches rejected during migration. A comparison against the
saved pre-migration script confirms every original old/new pair remains in the
same order. Field-copy sequences no longer depend on their incidental uniqueness
inside a numbered chunk. Each separated owner receives its required declaration
header; C names are canonicalized only in memory and restored when writing.

All 34 separated/renamed guard tests pass, including repeated application of
the secondary-victim guard; source-layout validation passes. These are tooling
checks, not new runtime gameplay claims. Full fresh regeneration and the
remaining larger guard migrations are still outstanding.

## Named parser routines and translation-unit ownership

The registry now contains 76 entries (49 manual mappings and 27 generated
names), including parser text destroy, ensure-initialized, reset and literal
store. Their evidence comes from the native parser fixture, the address-owned
parser guard and the arena implementation. These four entries explicitly use
`placement: retain_unit`: the parser header defines shared static arena/index
state, so independently compiling each function would alter state ownership.
Naming them does not require that unsafe split. Their original unit remains
intact while declarations, dispatch and calls receive the descriptive names.

The emitter validates placement and requires an ownership explanation for a
retained unit. Its test verifies renamed declarations/dispatch, retained file
placement and no unnecessary new module file. `named-gen-v3` reports 27 names,
25,855 guest entries and inverse-name body equivalence. Its parser extraction
is byte-identical to the previously tested fixture. It has not yet received a
new clean build or gameplay run; v2 remains the last runtime-verified candidate.
Body equivalence alone is not proof of static-state ownership equivalence.

## Address-owned AI and affecter audit evidence

The AI and affecter presence audits now resolve generated integration evidence
by guest address rather than numbered filenames. The AI generated-source
contract is independently callable; original-XBE instruction checks remain in
the full audit. Thirteen affecter evidence tokens are scoped to verified owning
functions. Existing native-image classification logic is unchanged.

`tests/recomp_audit_relocation_test.py` passes both contracts against current
sources and renamed, individually relocated function bodies. Removing the
HitAndRun incoming hook produces the expected audit failure. These checks do
not rerun the original-XBE audits or establish new gameplay acceptance.

## Imported-energy guard migration

The energy guard now reads and edits owning functions by guest address.
Duplicated beam boundaries D06DE/D0840 explicitly require both D0460 and
D0640 owners, so relocation cannot silently lose either emitted copy. Every
affected unit receives the organized combat declarations. Existing inline
evidence, ABI operations and native fallback paths are preserved.

All 35 guard relocation/idempotence tests pass, including energy with renamed,
individually separated functions. An additional installation comparison removed
33 existing energy-hook occurrences from each isolated fixture, then applied
the saved old guard and the migrated guard separately: all 1,250 function
bodies in the five affected chunks matched. This checks reinstallation amid
existing other-subsystem guards; it is not a full fresh generation run.
Source-layout validation, five address-index tests and two naming tests pass.
The production generated tree and player staging were not modified.

## Powerup metadata and generated diagnostics

The metadata guard's 17 fixed read/write blocks and delayed-removal loop now
resolve their actual guest owners. Logical multi-function edits distribute
modified bodies back to their owning files, preserve descriptive names and
existing surrounding comments, and reject changed function coverage or emitted
text outside function/declaration ownership. Independently movable owners
receive their powerup declarations instead of relying on another hook sharing
a numbered chunk.

After removing 31 hook occurrences and reversing three replacement pairs in
isolated fixtures, the old and migrated metadata guards produced identical
bodies for all 1,750 functions in the seven affected original chunks. This is
reinstallation among existing hooks, not full fresh regeneration.

The generated-diagnostics guard recursively discovers translation failures;
fence wait/kickoff, movie callback diagnostics and checked movie calls resolve
by address. Converter instrumentation stays with its file-local implementation
helper. Its existing wrapper lacks a guest entry label and retains its numeric
name. Unresolved stubs intentionally retain their dedicated file convention.

All 37 guard relocation/idempotence tests pass. The diagnostics test exercises
current hooked bodies; fresh converter instrumentation and a clean regenerated
build remain outstanding. No production generated sources or staged game
files were modified by these migrations.

## Character limits, costumes and save ownership

The character-limit guard now edits the audited manager address range through
the function index. Costume metadata, extended-category parsing, skin cycling,
versioned save sections, roster caches, modder-mode unlock hooks and resource
diagnostics use explicit verified owners. Names are canonicalized in memory
and restored on writes; original surrounding comments are retained. Missing
access-helper headers are inserted after existing includes so MEM8 and types
are available. The transformation rules themselves are unchanged.

The separated/renamed character-guard test passes two applications. An isolated
comparison reversed 16 verified insertion boundaries before applying the old
and migrated guards: all 1,500 function bodies in six original chunks matched.
AST comparison also confirms the manager_offset, rewrite, change and
replace_once rule functions are unchanged. This fixture retains the already
expanded manager layout and save markers; full regeneration is still needed
to validate installation from original generated code. Player staging and the
production generated tree were untouched.

## Damage transport, consumers and extracted fixtures

The damage guard now groups hooks by their event/attack/record/context/physical
roles and resolves actual function owners from guest boundaries. Later rating,
area-iterator, absorption/resistance, defense, kill-reward, loot and actor
preprocessor edits use explicit verified owners. Physical-health, attack-minimum
and context-scale fragments are extracted from the corresponding address-owned
edits, independent of numbered filenames.

The relocated/renamed damage guard passes two consecutive applications. A
separate comparison removed 45 transport hooks and reversed seven consumer
branch replacements before reinstalling the old and migrated versions: all
1,500 bodies in six original chunks and all three emitted fixture fragments
matched exactly. Other preexisting integrations remained present during that
comparison; full fresh generation is still outstanding. Production sources and
player staging were not changed.

## PC menu guard and remaining filename audit

The PC-menu guard now targets verified function groups for exit commands, font
allocation/upload, mouse controls, sliders, prompt expansion/layout, volume
preview and camera settings. All original hook payloads and boundary checks
remain; owning files and function names no longer determine where they apply.
Its separated/renamed test passes repeated application. Reversing 35 installed
hooks in isolated copies and reapplying the old and migrated guards yielded
identical bodies for all 3,000 functions in the affected original chunks.

A search of active Python/PowerShell generation tools found no remaining
numbered generated-C file dependencies. The unresolved-stub filename is an
intentional dedicated-file convention, and recursive discovery is used for
translation failures. Remaining numbered CMake references target the separate
XML2 runner's archived external source tree, not the XML1 tree being organized.
Test fixture filenames intentionally exercise relocation. The generation entry
point now immediately checks the diagnostic guard exit code, preventing a later
successful guard from concealing its failure. Full fresh generation, naming
pipeline integration, inventory consolidation and final verification remain.

## First full fresh regeneration

`work/source-organization/fresh-generation-v1` was generated from the pinned
World XBE and existing disassembly/ABI analysis with the exported 49 manual
mappings. All 47 guards applied successfully in the generation entry point's
order. Both current and freshly guarded trees contain exactly 25,855 indexed
guest entries, with no missing or added addresses.

The initial comparison found five changed bodies. The character-load guard
was corrected to retain the established load-finished-before-modder-unlock
order at 57041 on both fresh and repeated runs. Its relocation test passes.
Four baseline differences remain for final review: duplicate actor contact
reset at 2E6F0, an unused area-probe local at 5BA90, duplicated event-factory
hooks at E6040, and a legacy prototype diagnostic at ECF70. The prototype hook
only logs when diagnostics are enabled; its replacement map diagnostic remains.
These differences are recorded in the fixture's body-comparison.diff; they
are not silently treated as byte-equivalent output.

The fresh tree was named into `work/source-organization/fresh-named-v1`. The
emitter confirmed all 27 generated names, the four retained-unit parser names,
all 25,855 addresses and inverse-name body equivalence for every function. This
candidate has not yet been built or run. No player staging or production
generated source was overwritten. Naming-pipeline integration, known-function
inventory consolidation, clean build and runtime verification remain.

## Regeneration difference review and naming publication

The four remaining fresh/current differences were traced to their consumers:
2E6F0 retains one contact reset; intervening scale, leader and transform resets
operate on separate owned stores. E6040 retains one call per event factory.
Their named constructors reject distinct strings before mutation, and a
successful constructor exits the dispatch branch. 5BA90 drops an unused local
left by an earlier area probe. ECF70 drops an older optional logging call while
retaining the map diagnostic. No original guest instructions are removed by
these differences. These are source-level findings, pending runtime checking
of the fresh candidate.

Filter/effect-sound guards now check their entire instruction block for an
existing hook, so interleaved repeated application does not add factory calls.
A combined relocation test verifies that order. The freshly named candidate
was configured in build/source-organization-fresh and its clean Release build
was started; record the terminal result before treating it as validated.

Generation now emits and validates a named candidate after all guards, then
publishes it to src/recomp/named. Raw guard input stays in src/recomp/gen,
preventing stale named units from mixing with newly generated chunks. Existing
named output moves to work/generated-names for recovery; publication failure
restores it. The script validates move paths remain inside the project. The
PowerShell parser accepts the updated script. End-to-end publication remains
to be exercised. New CMake configurations prefer a published naming report;
existing caches must explicitly set XML1_RECOMP_SOURCE_DIR to the named tree.
Both generated trees are ignored by Git.

## Fresh named build result

The clean Release build exposed two generation defects: motionpath_name.h was
emitted under resources instead of its actual core module, and the parser
arena helper preceded recomp_funcs.h/register aliases. The package/parser
guards now emit the correct path and declaration order. Both focused
relocation/idempotence tests pass. The corrected raw output was named into
fresh-named-v2 with full address/body-equivalence validation. Only two files
differed from v1 (recomp_0023.c and recomp_0035.c); their failed-build versions
were backed up, then the configured v1 input was synchronized and verified
byte-identical to v2 to reuse unaffected object files.

The repaired Release build succeeded, producing
build/source-organization-fresh/Release/xml1-boot-probe.exe. Evidence is in
fresh-build.log and fresh-build-repair.log. Forty-one guard tests passed before
the header repair; both affected tests also passed afterward. Compiler warnings
remain in the log and are not claimed resolved by this organizational work.
Gameplay validation of this executable and end-to-end named publication are
still outstanding, as is consolidation of the known-function inventory.

## Fresh-build gameplay smoke

The repaired fresh executable ran in the private clean-game fixture, headless
and muted at 1920x1080, driven only by the process-local input channel. All 16
requested native captures were inspected individually. Confirmed content and
behavior: intro artwork and subtitles, loaded level 1 scenery/HUD, keyboard
movement with camera follow, pause/world background, Characters 3D scene,
Details stats, Powers names/pips/descriptions, return to gameplay, and return
to main menu with Cerebro. Power input reached an attack pose but the captured
frame does not prove full effect or damage delivery.

Options navigation after returning to the main menu was not confirmed; the
menu remained on Begin Story and subsequently entered the attract video. Do
not count that as an Options pass. Audio was muted; save/load and full-level
completion were not exercised. Evidence and executable hash are recorded in
work/source-organization/fresh-smoke1/verification.json with captures 1–16.
The smoke process ended, and the private fixture executable was restored with
byte-for-byte equality to its backup. Player staging was not touched.


# Subsequent naming and verification history

# Source organization and known-function naming

This pass organizes existing knowledge; it does not attempt to identify every
function or change game behavior. Unknown guest functions remain in numbered
`recomp_xxx.c` files. The organization goal is still active.

## Source and ownership

The subsystem directory map is in [src/README.md](../src/README.md).
`config/source-layout.json` records 355 handwritten source/test moves, and
`scripts/check-source-layout.py` checks the mapped destinations and stale paths.
Guest adapters keep explicit register/memory access and their existing ABI.
Moving files does not make host-dependent implementations portable.

## Function identities

`config/symbols/xml1.json` is the evidence-backed registry. It currently holds
49 manual mappings and 98 generated function names (71 currently built). Entries retain guest
address, module, calling convention, confidence, executable identity and
provenance. Behavioral names do not claim to be original developer symbols.
The manual map remains a checked compatibility copy in
`config/manual-functions.json`.

Sixty-four generated functions are emitted under `known/<module>/`. Four parser
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

## Verification evidence and limits

A fresh generation from the pinned XBE completed all 47 guards and indexed
25,855 guest entries. The 27-name candidate built successfully after correcting
two emitted include defects. Its private-fixture smoke verified intro media,
level 1 scenery/HUD, movement, pause background, Characters, Details/Powers,
return to gameplay and the Cerebro main menu. All 16 native captures were
inspected individually. Audio was muted; Options navigation, save/load,
full power damage and full-level completion were not established by that run.
Evidence is under `work/source-organization/fresh-smoke1`.

The latest 36-name candidate passed full entry coverage and body equivalence;
its Release build succeeded (see `fresh-build-v3-verification.json` and
`fresh-build-v3.log` in the local evidence directory). Do not infer runtime acceptance of new splits
from the earlier candidate. Player staging remains untouched.

All 50 lookup, naming, guard relocation/idempotence and source-audit tests
passed together after the latest changes. The source-layout checker also
passed for all 355 mapped paths. Publication evidence is recorded in
`work/source-organization/publication-verification.json`. Detailed
chronological findings, reviewed regeneration differences and earlier test
results are retained in [the migration history](SOURCE-ORGANIZATION-HISTORY.md).

## Remaining completion gates

- Finish consolidating existing function knowledge and explicitly defer
  insufficiently understood hook owners; do not speculate about unknowns.
- Finish remaining affected-function verification, particularly save/load boundaries.
- Complete final inventory and evidence reconciliation; the full generation
  command and exact published output build have passed.
- Reconcile final inventory, verification evidence and documentation.

## Latest named-build runtime check

The 36-name executable passed a private 1080p headless check through intro
artwork, level 1 scenery/HUD, movement, pause, Characters, Details/Powers,
pause Options and Advanced Options, and return to gameplay. All 16 captures
were inspected sequentially. The menu backgrounds, labels, pips and binding
rows were present. Attempts to open Details on empty roster positions did not
open a character; returning to the occupied position opened it successfully.

Audio was muted; save/load, combat damage, full-level completion and settings
persistence remain unverified by this run. The earlier aborted attempt was
caused by a malformed harness focus command, explicitly rejected by the worker,
not evidence of a game crash. The corrected run finished and restored its
private fixture executable byte-for-byte. Evidence: local
`work/source-organization/fresh-smoke3/verification.json`.

Existing knowledge and explicitly deferred hook owners are tracked in
[the function inventory](KNOWN-FUNCTION-INVENTORY.md). The latest five registry
additions are not covered by the earlier 36-name build evidence.

## Latest build

The 41-name candidate (`fresh-named-v4`) completed the Release build with exit
code zero. Its executable hash and log are recorded in
`work/source-organization/fresh-build-v4-verification.json`. This supersedes
the earlier build result, but does not extend the 36-name runtime evidence.
The complete top-level pipeline is running separately against a private copy
of the verified disassembly and source/configuration files.

## Complete pipeline result

The unmodified generation command copied into `pipeline-v1` completed function
identification, ABI analysis, registry/executable checks, generation, all guards,
naming and publication with exit zero. It used a copy of the existing verified
disassembly, not a newly run disassembler. The two initial output differences
were solely motionpath header order. The candidate was synchronized after
backup and rebuilt successfully; all 145 output files now match byte-for-byte.
Evidence: `work/source-organization/pipeline-verification.json`.

A handwritten-source reference census found 180 distinct address references: 8
already registered and 172 needing evidence classification. These are not 172
proven unnamed functions; wrappers often know only a call's local purpose. The
local census retains source paths, lines and call context for final inventory
review (`handwritten-reference-inventory.json`).

## Expanded naming emission

The 71-name candidate (`fresh-named-v6`) passed all 25,855-entry coverage and
inverse-name function-body checks. Seven routines remain named in their
original units; 64 are grouped under module directories. Both naming tests
passed, and the candidate build has started. The registry validator now checks
review inventory uniqueness, evidence paths, deferred reasons and agreement
with registered names. The review file cannot independently authorize a name.


# Inventory review history

# Existing function knowledge inventory

The authoritative names, guest addresses, module ownership and evidence are in
`config/symbols/xml1.json`. This inventory records the distinction between
established function identities and partially understood hook sites. It is an
ongoing consolidation of existing work, not a new reverse-engineering project.

## Registered groups

- Manual guest overrides: 49 existing dispatch mappings, checked against the
  compatibility map; CRT, graphics, audio, input and other runtime boundaries.
- Talent identity, lookup, parser and native UI helpers: 18 generated names.
- Danger Room and game-state helpers: five generated names.
- Parser text arena lifecycle: four generated names retained in their original
  unit because its header owns shared static storage.
- Character manager skin name, save and load: three generated names.
- Character manager get/create and construction, CharacterDef parsing and skin
  cycling: four additional names derived from the roster-expansion investigation.
- DX8 Kickoff, BlockOnTime and InsertFence: three generated names, kept together
  with existing translation-unit helper declarations.
- Command execution and three menu item Update methods: four generated names.

Total: 49 manual mappings and 98 generated function names. Naming is behavioral;
it does not claim recovery of original source spelling. Check the registry and
candidate naming report for the exact currently emitted set.

## Deferred partial knowledge

| Existing evidence | Addresses or scope | Why no whole-function name yet |
| --- | --- | --- |
| Roster expansion | 549A0, 54AA0, 54E10, 54E90 | Notes identify snapshot methods collectively, without assigning each exact constructor/copy/restore role. |
| Roster expansion | B0EA0, B0F20 | Package naming is established collectively; distinguish each routine's complete output contract before naming. |
| Roster expansion | 164140, 164240, 16B970 | Cache fill/sort/iteration/lookup ownership is established as a group, not per-function identity. |
| NewGame+ reset guards | 7E2F0, 54A10, 54F10, C0700 and startup labels | Reset-related call sites establish effects, but are not enough to name every containing function. |
| Saved-stat guards | A5230, A5380, A5420, A589B | Cancellation/completion hook labels do not by themselves establish full native controller semantics. |
| XML2 integration notes | Mixed XML1 and XML2 addresses | Do not import XML2 addresses or class names into the XML1 registry without explicit XML1 identity evidence. |
| Combat/event guards | Instruction labels and overlapping recovered functions | Resolve the containing function explicitly; a local damage/event hook is not the whole function's identity. |

Unregistered guest entries remain in numbered chunks with their address names.
Do not infer subsystem ownership merely from neighboring chunk functions.
Unknown-function discovery and exhaustive semantic comparison are deferred.

## Verification boundary

The 36-name candidate built and passed the documented gameplay/menu smoke.
All 41 names passed emission coverage/body-equivalence verification and the
latest Release build. The five newest names still need affected runtime checks. The registry validator checks identity consistency and evidence
paths, not the truth of prose: review source and prior investigation before
promoting further entries. The inventory sweep is still in progress.

## Handwritten-reference review in progress

The census includes 180 addresses referenced in handwritten source (8 already
registered). The first classified batch registered ten existing behaviors: team lookup, powerup end time, animation fraction, velocity
setter, progress manager, two random-number helpers and three sound routines.
Their source evidence and names are now in the registry and local census.
They are not yet emitted or included in the verified 41-name build count.

Two apparent candidates are excluded from XML1 naming: 5A03C0 is only an example
in crash-report documentation, and 15E8C0 belongs to the separate XML2 diagnostic
implementation. The XML token-parser comment at 1282C0 describes local token
behavior without establishing its full function contract, so it stays unnamed.
Further entries still require classification; a reference count is not a claim
that every referenced function is understood.

The added group consists of three actor helpers, one powerup query, the
progress singleton, two core random-number helpers and three audio methods.
Their established wrappers were checked against the actual generated entry
bodies before promotion. The registry validator passes all 100 entries.

## Talent caller consolidation

Existing save-identity/package callers establish seven more native identities:
B41B0 source-name interning, B4250 definition parsing, B5620 node registration,
B5080 definition release, B4B30 source-cache release, B3E90 generation-checked
handle resolution, and 48D50 character talent insertion. These entries preserve
source/selector semantics and reference ownership; no logic was changed.
The registry now validates 107 records. The 51-name emission passed all-entry
coverage and body equivalence; the subsequent seven names await emission.
The latest verified build remains the 41-name exact pipeline output.

## Existing scripting and popup contracts

Thirteen additional identities are recorded from existing native wrappers:
entity fade-in/out and opacity, simulation time, game-variable lookup/write,
and seven popup operations (manager, page, title, choices, selection, cancel
script and display). Evidence retains the owning wrapper and its documented
arguments; no new original-source class names or semantics are asserted.
The registry validates 120 entries (49 manual and 71 generated). All 71 names have now passed emission coverage and body equivalence; their
build is running.

## Deferred boundary-only references

The reference inventory now explicitly defers 34 entries, including the three
earlier exclusions. The latest group covers fixture-only construction/copy
checks, saved-stat controller/stream ownership calls, local shared-powerup
resource/type operations and collision query/result calls. These sites retain
their native address names: local usage does not establish a complete function
identity. Each deferral retains evidence paths and its reason in
`config/symbols/xml1-reference-review.json`. There are 108 references still
awaiting evidence classification and 38 registered references in this census;
other registered functions were established from guards and investigation notes.

## Progress and XML contracts

Sixteen existing identities were added from native progress fixtures and
resource wrappers: progress save/load/completion/snapshot/restore/merge,
options storage read/write, native interpreter/result operations, XML symbol
lifetime and named child/attribute/text lookup. The attribute text routine stays
inside the parser unit to preserve its arena context. The registry now has
136 entries (49 manual, 87 generated); the latest 16 await emission.

The 71-name candidate built successfully. Its executable hash is recorded in
`work/source-organization/fresh-build-v6-verification.json`; runtime validation
for that candidate remains pending.

## Handwritten-reference census disposition

The 180-reference census is classified: 65 references are now registered and
115 are explicitly deferred with evidence paths and reasons. Additional names
come from guards and investigation notes. Deferred entries preserve partial
call contracts and useful inline comments; this pass does not expand into new
reverse engineering to turn those contracts into full function identities.

The last eleven promotions cover effect interval/release/manager, powerup
removal, health setter, character-name query, bone-name lookup, save-buffer
release, command manager and CValues manager/evaluation. The registry validates
147 entries (49 manual, 98 generated). Only 71 generated names are built so far;
the final consolidated candidate still requires emission/build/runtime checks.


## Native progression evidence and additional established identities

Confirmed consolidated build terminal exit 0 and ran --progression-test with XML1_TEST_GAME_DIR pointing only to the private clean-game fixture. Exit 0; log consolidated-progression.log and executable hash consolidated-build-verification.json. Added fourteen names established by the existing progression test (pool/snapshot lifecycle, state save/load, XP threshold/cap/reconciliation, definition/registry constructors and skin formatting). Registry validation passes at 161 records, 112 generated names. Final emission/build/runtime and broader test-evidence consolidation remain open. XBOXgame was not modified.


## Expanded emission and tooling recheck

The 112-name consolidated-named-v2 emission preserves 25,855 entries and passes inverse-name body equivalence. All 50 tooling tests pass again (tooling-tests-v2.log). Build started using that tree in build/source-organization-fresh; consolidated-v2-build.log is not yet a terminal success record. Supplemental tests census is stored locally in test-reference-candidates.json (90 unregistered addresses, including stubs and non-XML1 tests). This is a review queue, not 90 confirmed functions.


## 112-name native validation and remaining test evidence

The 112-name build finished with exit 0. Native progression, powerup-definition and filter-event tests each returned 0 against private fixture data. Hash and results: consolidated-v2-build-verification.json. Registered another 28 established test-backed identities (140 generated names total); consolidated-named-v3 emission underway. No gameplay/audio acceptance is inferred from native tests. Player staging remains untouched.


## Final test-reference consolidation

Registered 20 additional native pool/record/constructor operations whose contracts are established by the existing progression tests (160 generated identities total). Supplemental review file classifies all 90 references: {'deferred': 40, 'excluded': 2, 'registered': 48}. Registry validator now checks both review files, including exclusion reasons. Final source emission is in progress; this entry does not claim final build/runtime acceptance.


## Final source emitted

final-named contains 160 generated names (152 subsystem units, eight retained-unit names), all 25,855 entries and exact inverse-name body equivalence. All 50 tooling tests passed again; both registry review files validate. Final Release build is running (final-build.log). Complete generation/publication is also running in pipeline-v1 with the completed registry (final-pipeline.log). Neither running log is yet evidence of terminal success. A native process-local smoke harness is prepared at run-final-smoke.py; it has not been launched.


## Organization pass completion evidence

Final optimized Release build and three native suites pass. All 14 final-smoke captures were inspected individually, including transitions, intro FMVs, Cerebro background, level 1 movement/HUD, Details/Powers, pause Options/Advanced and return to gameplay. Muted audio and other untested player flows are explicitly recorded. Regeneration produced the same 263 files after five include-order-only synchronizations; the exact output rebuilt successfully. Published source to src/recomp/named without changing player staging; fresh CMake configuration selects that path. Final registry/XBE and 355-path layout validation pass. final-verification.json records hashes and results. No commit or push was performed for this goal.
