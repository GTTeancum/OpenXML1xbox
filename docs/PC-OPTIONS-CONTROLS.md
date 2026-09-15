# PC options and controls implementation

Completed by user acceptance on 2026-09-15: former TODO items 2 and 3.
The user explicitly requested closure after the staged implementation and tests.
Human keyboard/mouse acceptance was not reported; closure is user acceptance,
not a claim that the pending human test occurred.

Current acceptance scope (user direction): validate keyboard/mouse only; leave
mixed-device gameplay validation to beta testers. It is not a gate for this goal.

Current player staging: `D:/Programming/GitHub/OpenXML1xbox/!GAME` now contains
v218 ABI12 game binary, the matching v148 renderer, and freshly rebuilt v210 native menu assets. The
private development fixture remains `work/native-igb-menu-test/data`. The English
Options and Advanced menus use copied/recolored XML2 IGBs over live Cerebro,
original PKGB associations and declared resource paths. The generic renderer
overlay and startup menu rewrite were removed.

The package-driven staging tool covers the two packages and 31 declared
resources, including the original French/German menu dependencies. It records hashes and preserves replaced originals under
`work/player-stage-backups`. It does not copy development settings or saves.
Use `scripts/stage-player.ps1 -MenuSource <tested asset root>` for menu/binary
updates; the menu source must pass the IGB/package association audit first.

Outstanding: remaining reference behavior and artwork,
powers/mixed-device gameplay and remaining binding classes, final staged audio
and transition acceptance, and human keyboard/mouse acceptance. View Shake is
implemented with native On/Off, Accept/Back and restart checks, and actual
nonzero camera output suppression in level one. Full scripted-mode regression
coverage remains. French/German retain their original menus, with their resource declarations
restored and native menu/gameplay checks in v151/v152. New PC menu acceptance
is English; localized PC menu adaptation remains pending. Former TODO2/3 were subsequently closed by user acceptance; see the status at the top.

The chronology below includes superseded experiments; early limitations do not
describe the current build. A rendered frame or passing adapter test does not
establish full gameplay or feature acceptance.

## Presentation requirements (user correction)

Use the physically copied XML2 Options menu IGBs, recolored for XML1, and its
Options -> Advanced Options flow. Both screens retain the live 3D Cerebro menu
background. The generic renderer panel was rejected and is not a deliverable.
Keep the normal PKGB association and resource paths. Author changes to the IGB
artwork and the menu contents; do not replace this with a custom presentation
system, alternate resource routing, renamed assets, or a screenshot background.

### Complete menu asset rebuild

Run from the repository root with a new output directory:

```powershell
.venv/Scripts/python.exe scripts/build-pc-menu-assets.py --xml2 "C:/Games/X-Men Legends II" --xml1 work/canonical-extraction/native --writer-root work/igb-blender-reference --output work/menu-build-clean
```

The command checks/imports the reference inputs, executes the complete authoring
chain, restores original localized dependencies, and audits both packages. Its
`assets` directory contains only the 33 required menu files. Intermediate stages,
commands.json, manifest.json and audit.json remain alongside it for inspection.
It copies no saves, player settings or executables and never stages into !GAME.
No historical test folder is an input. The IGB writer is still a local dependency.

v210 ran this command successfully. All 33 outputs match the v209 rebuild;
31 match !GAME byte-for-byte, while the two English menu definitions have equal
parsed trees with different XML serialization. Native v211/v212 validation
subsequently passed Options, Advanced, binding capture and gameplay entry; all
33 rebuilt files are staged in !GAME. This establishes asset
reproducibility, not full TODO2/3 or human gameplay acceptance.

The individual steps below are available for authoring/debugging.

### Rebuilding the original import

Run from the repository root with the local Python environment:

```powershell
.venv/Scripts/python.exe scripts/prepare-menu-import.py --reference "C:/Games/X-Men Legends II" --output work/menu-import-clean
```

The output directory must not exist. The command checks all 26 reference files
against `scripts/menu-import-sources.json` before writing, copies them to
`original` at their original relative paths, and creates `xml1-blue` with 20
recolored IGBs plus unchanged package/menu definitions and three tab PNG inputs. A different reference
version fails explicitly; inspect its differences before updating the manifest.
No game assets are bundled in the repository. This is the reproducible import
and recolor stage only: subsequent XML1 layout/content authoring is still
required, so this output must not be staged directly as a finished menu.

v195 rebuilt from the installed XML2 directory: all 23 original hashes and all
20 recolored IGB hashes match the preserved import. Twelve recolored IGBs also
match !GAME; five have subsequent authored changes, one is the original XML1 localized controller menu, and two are not staged. The
complete later authoring chain remains to be consolidated. Evidence is under
`work/menu-import-v195` and `work/menu-rebuild-v195-audit.json`.

### Rebuilding the initial layout

After preparing the XML2 import, run:

```powershell
.venv/Scripts/python.exe scripts/prepare-menu-layout.py --xml2-import work/menu-import-clean/xml1-blue --xml1-assets work/canonical-extraction/native --writer-root work/igb-blender-reference --output work/menu-layout-clean
```

This uses `scripts/menu-layout-model-bindings.json` to populate the original
IGB's native Model properties, then runs typography, binding-table, volume-anchor and type-scale authoring.
It copies the original XML1 model_bar_sound only as an intermediate animation
resource and preserves all resource paths. The generated seed menu and package
serve authoring only; this output is not a playable menu and must not be staged.
The output directory must be new. The local IGB writer dependency remains required.

v202 reproduced all three historical layout hashes without snapshot inputs:
model properties bfb1a8c6..., typography 5329cca3..., binding table c3e14675....
The fresh run is `work/menu-layout-repro-v202`. The next untraced change is from
that binding-table layout to de1139fb..., the later type-scale input. Subsequent
content/layout stages must still be connected; this is not a complete rebuild.

### Reference parity and acceptance inventory

Reference: the user's XML2 Options/Advanced Options captures, plus the installed
`C:/Games/X-Men Legends II/UI/menus/options.engb` and `options.xmlb`.
The binary definitions contain the original volume/view/subtitle/vibration
commands. The PC Advanced screen in the user's capture also contains controls
that are not described by the installed console-style `options_controller.engb`;
that file alone is not a complete PC reference.

| Reference feature | Current private implementation | Remaining acceptance |
| --- | --- | --- |
| Live 3D background and themed menu art | Copied/recolored XML2 IGBs over Cerebro; package paths audited; v134/v135 inspect complete volume tracks at 1080p/720p | Remaining reference artwork and final staged verification |
| Effects and music volume | Native settings, animated bars, click/drag/end-clamp/release verified in v99/v100; native Accept and restart verified v102/v103 | Accept silences both categories in main menu and level 1 (v109); music live-preview zero/Back restoration verified v165; new menu-effect preview full/zero/half and Back verified v167; independent accepted categories verified v110; 50% pair Accept/restart/gameplay verified v169/v170; already-playing effects-loop behavior and final audio-quality acceptance pending |
| Combat music | Native XML1 setting; mouse toggling, Accept and full restart verified v136/v137 | Gameplay behavior and final staging |
| View angle, cycle and follow | Native XML1 settings; mouse changes, Accept and full restart verified v136/v137; Steep visibly changes level-one camera | Close Accept/restart/gameplay verified v186/v187; cycle/follow behavior remains |
| View shake | Original row restored; On by default; Accept/Back/restart verified v148/v149 at 1080p/720p; real nonzero shake output suppressed in level one | Full scripted-mode regression coverage |
| Subtitles and vibration | Native XML1 settings; mouse toggling, Accept and full restart verified v136/v137 | Gameplay/device behavior, cancellation and final staging |
| Resolution | Native Apply/restart verified both directions: 1080p -> 720p v95/v96 and 720p -> 1080p v123/v124, with actual capture dimensions and gameplay | Final staged verification |
| FSAA | Native DX8 Off/2x/4x/8x choices filtered by adapter support; save/restart and Cancel verified | Final staging; broader adapter and performance coverage |
| Player 1-4 control configuration | Independent keyboard/controller profiles; native controller capture v139/v140, alternate Attack Apply/restart/gameplay v141/v142; two-direction axis swap capture/Apply/restart/gameplay v153/v154; original XML2 tab frame and selected-fill artwork embedded; Right/Enter traversal and wrap across all four profiles verified v159 | Other axes/all-player native acceptance, mixed-device gameplay and final acceptance |
| Primary/secondary bindings | 29 actions, seven rows per page, rebinding/conflict adapter | Focus art, actual binding persistence and powers |
| Device list | Four live player/controller-slot rows; selecting a row opens its bindings; disconnect/reconnect verified v172; text-buffer fix v176 and 720p layout v177 | Physical device acceptance and separate routing coverage; hardware model names are not supplied by the XInput backend |
| Defaults 1/2/3 and revert | Three XML2-derived, XML1-adapted per-player presets; native selection/save/gameplay v118, Defaults 2 restart/gameplay v123/v124 | Global Reset/Apply/restart verified v196/v197 for four keyboard profiles, sensitivity and inversion; native reset Cancel/reopen/gameplay verified v198; remaining preset coverage and reference adaptations |
| Accept/Back | Apply/Cancel and native parent-menu return | Remaining setting classes and restart matrix |
| Input prompts | Device-sensitive Back/Change and capture Cancel/Unbind; normal Options Back and Space-to-Advanced verified in native captures | Broader gameplay prompt coverage and final staging |
| Focus loss/recovery | Staged v168 gameplay clears held movement/attack, rejects unfocused input, stays neutral on regain and accepts fresh input | Physical desktop focus/cursor behavior and mixed-player coverage |

Mouse sensitivity, inversion, window mode and keyboard enable are additional PC
controls in this implementation. The table identifies gaps; existing labels or
unit tests do not establish feature parity or full gameplay acceptance.

The current import is local under `work/xml2-menu-import`, with `original` and
`xml1-blue` trees mirroring game-relative paths. The Options package is physically
copied at `Packages/generated/maps/package/menus/options.PKGB`, byte-identical to
XML2. Menu definitions stay at `UI/menus/options.engb` and `options.xmlb`, and
models stay at their declared `ui/menus` and `ui/models` paths. Original filenames
and serialized names are retained.

The recolor tool edits declared vertex RGB streams and DXT3 color endpoints,
preserving alpha, geometry, UVs, animation and binary structure. Its manifest
records source/output hashes and changed-byte counts. This is an asset edit,
not visual acceptance: in-game integration and gameplay checks remain pending.
The reference package lists `ui/models/m_options_controls_ps2`, which is absent
from the supplied XML2 loose directory. Resolve that dependency's role before
staging; do not substitute another model or silently rewrite the manifest.

### Native import test evidence (2026-09-14)

The private fixture is `work/native-igb-menu-test/data`. UI, packages and saves
are real private copies; other game assets are directory junctions. No player
staging files were changed. `run.py` uses only process-local input and native
DX8 capture. Both test processes have terminated.

- `native-v1.log`: the normal PKGB path loaded `x2m_options` and the copied model
  resources. The missing PS2 model was reported, but loading continued through
  the menu definition. Menu construction then hit a null item factory call at
  guest return address `00163B2D`. XML2 uses `MENU_ITEM_BAR`; that type is absent
  from XML1's factory strings.
- `native-v2.log`: a diagnostic definition replaced only the two BAR items with
  marked text placeholders and mapped XML2 text styles to existing XML1 styles.
  The menu then opened and remained running until the 50-second watchdog.
- `capture-1.bmp` was inspected: live Cerebro is visible, text anchors from the
  imported layout resolve, but the externally specified model artwork is absent.
  Controller glyph entities and pending sliders are visibly wrong. This is
  diagnostic evidence, not presentation or gameplay acceptance.

The original PKGB is still byte-identical to XML2. Advanced Options and an actual
gameplay round trip with the final assets remain unverified.

### Native artwork attachment resolved

Inspection of XML1's original `menu_options.igb` established that its artwork is
not embedded geometry: each `igHashedUserInfo` anchor carries a property list
with `ItemName` and `Model` string properties. The model value is the basename
of the separately packaged file under `ui/models`. XML2's copied anchors only
carry `ItemName`; its menu definition supplies the models instead.

`work/native-igb-menu-test/model-properties.py` authors those native `Model`
properties into the copied `x2m_options.IGB`. Separate model filenames and the
PKGB remain unchanged. It currently also gives the two slider anchors the
already-packaged sound selection model. No renderer or package loader change
was needed. Earlier geometry-attachment experiments (`native-v3` and `v4`) did
not display artwork and are abandoned; do not stage their outputs.

The local asset writer is from
[igb-blender](https://github.com/KaikoClanworth1/igb-blender), pinned locally at
`a509dcc69438b53bdfe8daeaa793db68fec960b0`. Reading/writing the original layout
and options model produced byte-identical round trips before property editing.
Its code and copyrighted assets have not been vendored into this repository.

- `native-v5.log` / `property-capture-1.bmp`: native capture inspected; copied
  blue rails, hinges and translucent panels are visible over live Cerebro.
- `native-v6.log` / `native-controls-capture-1.bmp`: native capture inspected;
  diagnostic glyphs and slider labels are gone. XML1 native slider, binary and
  list-cycle item types populate the Options screen. The controller panel is
  hidden for the normal Options screen. Both runs reached their watchdogs.

Presentation is still WIP: slider thickness, text sizing, the blank camera-shake
row, footer navigation and Advanced Options need finishing. Appearance does not
prove adjustment, persistence, mouse hit-testing or gameplay acceptance. Keep
the generic overlay excluded from the intended final presentation.

`native-v7.log` used left input on effects and music, with captures before/after.
`slider-capture-2.bmp` and `slider-capture-3.bmp` were inspected: focus moved to
music, but the visible fills did not establish an actual volume change. Do not
claim slider adjustment or saving is verified yet. The test exited at its
watchdog and left no game running. The PKGB hash remains
`F8B81726D4CE64CA4D938198A73DAA7041D44DB708CD2737539361C077088F04`.

### Native slider behavior (2026-09-14)

Guest `0017CDE0` updates the slider model's animation position from the native
setting value. The copied `m_options_sound_select` has no animation, so its fill
cannot display a changing value. XML1's original `model_bar_sound` has a two-key
scale animation (`igTransformSequence1_5`, end time 33333335).

The private v8 fixture explicitly declares `ui/models/model_bar_sound` as a
standard model resource in `options.PKGB` and points the slider anchors' native
Model properties at it. This adds one resource to the test package; it does not
rename any extracted file or introduce fallback routing. Original source PKGBs
and !GAME remain untouched. `package-audit.json` records the test package's
model paths and hashes; the absent PS2 model remains the reference installation's
pre-existing missing entry.

`native-v8.log` and inspected `animated-slider-capture-1.bmp` / `-2.bmp` prove
the effects slider fill shrinks after three left inputs. Its existing grey
artwork is incorrectly sized/positioned for the XML2 panel; asset adaptation is
still required. Persistence, audible volume changes and Advanced Options are
not established by this test. The hidden muted run ended at the watchdog.

### Repeatable authoring and native Advanced route

`scripts/author-menu-models.py` takes explicit input/output paths, a model-binding
XML, a PKGB, an asset root and the local IGB writer directory. It rejects missing
or undeclared visible models and ambiguous anchors, preserves the source file,
and emits a hash/binding report. Its output matches the v8-tested IGB exactly
(`BFB1A8C6F90FBDBC1BD5062BBD6583BE7B82A7442D1B314012FB2332AEAACC49`).
The private package now explicitly declares `m_invis` as well, because it is
referenced by the copied menu. These are ordinary model declarations.

The private `options_controller_xbox.eng` and matching existing package path
now contain an Advanced Options presentation fixture using `x2m_options` and
its copied models. `native-v9.log` and inspected `advanced-capture-2.bmp` prove
the native Options -> Advanced route opens over Cerebro. The settings labels
and sample four binding rows are static presentation data, not working controls.
Do not stage or describe them as functional settings.

The v9 Back capture returned to main, exposing the copied Options `no_stack`
attribute. That attribute has been removed in the fixture. Undeclared-on-screen
anchors are now explicitly hidden in Advanced, including the inherited slider
models and rotated controls heading. Those follow-up edits still need a run.
Remaining work includes the complete reference layout, native setting actions,
live binding values, input capture, persistence, mouse hit-testing and gameplay.

Reference installation: `C:\Games\X-Men Legends II` (read-only).
The manual, `UI/menus/options.engb`, `options_controller.engb`, and executable
setting names were inspected. Local reference extracts are in
`work/pc-options-reference`; copyrighted reference assets stay out of Git.

### Package protocol and native settings command checks

The authoring tool now also requires the layout IGB to be declared by the supplied
PKGB, verifies its input name against the menu definition, and rejects an output
filename change. Its report records the layout and every model resource path.
The updated authoring run preserves the previous output hash
`bfb1a8c6f90fbdbc1bd5062bbd6583be7b82a7442d1b314012fb2332aeaacc49`.
`package-audit-current.json` in the private fixture records both menus' physical
resource paths. Both still reference the missing XML2 controller PS2 model;
that absent supplied resource remains unresolved, not aliased to another file.

The optimized build passes with `src/pc_native_options.cpp` and a per-token
command hook at the verified native dispatcher boundary `0011C6A2`. Native
`pcnative_open` and `pcnative_resolution` execute in v10/v11 logs. This is only a
settings-action prototype, not verified Apply/Cancel/persistence integration.

All v10/v11 captures were generated by the game's native capture facility with
process-local pad fixtures, hidden and muted. Inspected v10 captures 2/3/4 show
Advanced, Options, and main respectively. The draft changed to 720p, but
`closemenu;openmenu` did not refresh Advanced. Inspection of the original close
handler (`0018CCE0`, manager `00184FD0`) shows that it consumes additional command
tokens; it is not a simple zero-argument pop. V11 used Advanced `no_stack=true`
and direct reopen: inspected captures 3/4 show Advanced and then Options with
Cerebro intact, but the displayed resolution remains cached at 1080p. Rewriting
the definition on disk is therefore insufficient for live values. Replace this
prototype with native item value updates before delivery. Apply/Defaults labels,
slider artwork, binding rows and layout are also unfinished. Neither run counts
as gameplay acceptance. Both ended through their private watchdog, with nothing
staged into `!GAME`.

### Native live values and transaction verification

The runtime file-rewrite prototype has been removed from `pc_native_options.cpp`.
PC fields now use normal menu `gamevar="pcnative_..."` declarations. The base
item initializer `00173890` clears any registration for reused objects;
`00173BA3` supplies the parsed gamevar name. The existing native text-update
function `0017D750` feeds changed PC values through the same interned-string
setter (`001613A0`, item field `+0x74`) used by the game's own variable callbacks.
The temporary string occupies 512 bytes on the guest stack and is copied by the
native setter. Unchanged values do not repeatedly intern strings. No asset file
is rewritten and no renderer panel is involved.

`native-v12.log` and inspected `native-live-capture-2.bmp` / `-3.bmp` prove the
resolution label changes from 1920x1080 to 1280x720 while remaining inside
Advanced Options over animated Cerebro. Removing the `hide` attribute from
visible Apply/Defaults/Cancel items also makes those labels visible; setting
`hide="false"` was insufficient for these native items.

`native-v13.log` executes open, resolution, apply, cancel, open, resolution,
cancel, open. The private `pc-settings.ini` contains Width=1280, Height=720.
Inspected `native-apply-capture-3.bmp` through `-6.bmp` show the applied 720p
value, return to Options, reopening at 720p, and reopening again at 720p after
cancelling a draft 1080p change. Explicit native up/down links make all nine
left-side actions reachable. This validates those menu transactions, not an
actual output-resolution restart or the full goal.

The optimized game build and `pc-controls-test` pass. New assertions cover
native value updates, unchanged-value suppression, short-buffer handling,
Apply/Defaults/Cancel/reopen persistence, reused-item cleanup, and no creation
of a UI asset directory during transactions. Defaults has unit coverage here;
an in-game Defaults run is still needed. Native B currently discards a draft
when the menu is subsequently reopened; an explicit session-close hook remains
to be connected. Status-message presentation, complete editable binding rows,
mouse menu targeting, typography/layout and slider artwork remain unfinished.
All runs were private, hidden/muted, and ended through their watchdogs. The
player staging and user settings remain untouched; actual gameplay validation
of the final native menu is still required.

### Native rebinding and IGB typography

IPC version 4 is 840 bytes on both architectures and adds a dedicated capture
key alongside the normal input snapshot. The ordinary input consumer cannot
eat a short rebinding press. Capture retains already-held activation keys so
auto-repeat cannot bind Enter; ending capture clears guest key latches. Focus
loss and abandoned-mutex recovery clear pending capture keys. This requires
rebuilding and distributing the game and worker together.

Native commands `pcnative_bind_<action>_<slot>` start capture for primary (0)
or alternate (1) bindings. Native gamevars `pcnative_key_<action>_<slot>` show
the key name and capture prompt. The existing model checks conflicts and
reserved keys, Escape cancels, and Delete unbinds. Six primary binding rows are
currently wired in the private menu; full action coverage, secondary columns,
and final layout are still outstanding.

The optimized x64 tests passed with the Win32 producer after adding assertions
for activation-key repeat suppression, short presses surviving another consumer,
binding update, Escape cancellation, Delete unbinding and cleared input after
capture. Game and worker builds passed. `native-v14.log` was an invalid key
capture test because its initial focus fixture used ID 0, which the native test
reader ignores; that run is not evidence of successful rebinding.

The corrected fixture uses ID 1 for initial focus. `native-v15.log` records
bind_0_0, captured key 84, another bind_0_0, captured Escape 27, then Apply.
Inspected `native-binding-focused-capture-3.bmp` / `-4.bmp` / `-5.bmp` show the
capture prompt, T, and T retained after cancellation. The private INI confirms
primary MoveForward=84, alternate=0. Those captures also expose text overflow;
the native UI is still not ready for staging.

`work/native-igb-menu-test/author-typography.py` authors the copied layout's
28 label transform scales at 0.65, preserving its resource filename. Input is
the preserved authored Model-property layout, output is a separate typography
artifact with a transform/hash report. The private fixture now uses that IGB.
`native-v16.log` / inspected `native-typography-capture-2.bmp` confirm the game
uses the IGB scales for actual menu text. Left-panel text now fits; right key
anchors still need to move left, and the rest of the reference layout remains
unfinished. No source game assets or player staging were changed. All private
runs ended through their watchdogs.

### Full action table and secondary bindings

The native model now presents seven visible rows spanning all 29 controls,
with independent primary and secondary binding commands. Row names/values use
normal gamevars and bounded Previous/Next actions. Tests enumerate the complete
29-action set, clamp at the final group, bind action 28's secondary slot, and
reject a row outside the visible range. The x64 test with Win32 producer passed.

The private `author-binding-table.py` extends the copied `x2m_options.IGB` with
14 native anchors: seven secondary cells, three column headings, navigation,
range and status. It clones the original anchor's transform, child list and
ItemName property chain, and attaches the results to the verified root node
list. Existing resource filename and PKGB path are retained. Original source
IGBs are unchanged. The ordinary Options definition hides these added anchors.
This script remains private pending consolidation into the repeatable importer.

`native-v17.log` and inspected `native-table-capture-1.bmp` / `-3.bmp` prove the
first and final groups render over Cerebro. They exposed header/footer alignment
issues. The subsequent IGB edit moves those anchors inside their panels and
aligns the seventh row; readable native labels no longer use disabled coloring.
`native-v18.log` and inspected `native-secondary-capture-1.bmp`, `-4.bmp`, and
`-5.bmp` show the corrected table, action 28's secondary value Q, and the native
"Settings saved" message. The fixture INI's AlternateBindings/RotateCamera is
81. The log records bind_28_1, captured key 81, and Apply. These remain private
fixtures, not player staging or full gameplay acceptance. Full mouse targeting,
the remaining visual/reference parity work, Options slider artwork, and final
native-menu gameplay validation remain incomplete.

## Reference inventory

### Native pointer transport (integration still pending)

IPC version 5 adds a bounded native-menu pointer queue carrying client position,
originating client dimensions, button edges and wheel deltas. Consecutive motion
events coalesce; later movement cannot replace an unread click. Native pointer
mode consumes mouse events before they reach gameplay mapping, while binding
capture continues receiving mouse buttons through the existing key path. Focus
loss, capture transitions and menu closure clear queued input. The window event
handler and process-local fixture share this route.

The x64 controls test with a Win32 producer passed, including a click transported
across the process/architecture boundary, short-click retention, wheel and size
values, focus loss, out-of-client rejection, binding capture and session cleanup.
The DX8 worker builds. Native pointer mode is not enabled by game menus yet:
projection, hit testing and dispatch still require integration and in-game proof.
The private playable fixture now contains matched version-5 game and worker
binaries. Do not copy only one component of a future IPC change into it.

The copied layout contains an `igCamera` with field of view approximately 25,
near/far 100/1100 and its Camera transform at (256,-1000,192). These are useful
source evidence for projection, but the earlier apparent 420-unit view height
was inferred from captures and is not an established runtime projection. Derive
the active view mapping before relying on it for native mouse hit targets.

Runtime projection investigation (v23â€“v26): the text pass reports an orthographic
projection with X/Y scales approximately .00266335/.00473485, but this alone is
not sufficient to project the IGB anchors. Native text creation at 0018AB00
queues 32-byte font commands, which replay in 0018B0DB. Glyph quad creation at
0018A7A0 is also deferred relative to the actual DX8 submission. The diagnostic
hooks now associate those queued commands with registered native menu items.
The first draw-scoped attempts (v24/v25) yielded no bounds; the quad-scoped v26
attempt yielded local text bounds with a common origin rather than the correct
on-screen locations. **Those recorded screen bounds are not valid hit targets.**
Native pointer mode remains disabled. The next step is to retain the association
through the font geometry's vertex buffer and apply transforms at actual draw
submission, where the item's final node transform is available. This is an
unfinished diagnostic path, not verified mouse selection. All runs ended via
their private watchdogs; `!GAME` is unchanged.

### Package structure audit

The private fixture's Options and Advanced Options manifests were compared with
the installed XML2 Options PKGB. None of its model resource paths were removed
or renamed. Both retain `ui/menus/x2m_options` and its declared `ui/models/*`
dependencies. The two additional declarations are existing XML1 resources,
`ui/models/model_bar_sound` and `ui/models/m_invis`, at their original paths.
The per-resource existence and hash report is
`work/native-igb-menu-test/package-path-audit.json`.

The inherited `ui/models/m_options_controls_ps2` declaration is absent in both
the installed XML2 source and the private fixture. Its only model binding is
explicitly hidden in `model-bindings.xml`, and neither live menu references it.
The unused declaration was removed from the two private manifests. Every
remaining model exists at its declared path; no replacement or alias was made.
The earlier path-audit JSON records the pre-cleanup inventory. This audit does
not establish visual or gameplay acceptance, and the ongoing menu work has
not been staged to `!GAME`.

### Native return path and volume artwork

Visual inspection of v20's fourth capture contradicted the earlier assumption
that Back returned to Options: only Cerebro remained. Removing `no_stack=true`
from Advanced Options restores the engine's normal parent-menu stack. The
inspected v21 `native-stack-capture-4.bmp` shows Options after Back, with its
live Cerebro background. The owner-qualified close hook still discards the
unapplied draft. A regression test verifies that closing a different menu owner
does not cancel Advanced Options, closing the correct owner releases binding
capture, and reopening restores the last applied settings. The x64 controls
test with Win32 IPC producer passed.

`scripts/author-menu-sliders.py` fits the native animated volume-bar IGB to the
copied layout's original `fx_vol` and `music_vol` anchors and colors its white
fill blue. It validates both PKGB resource declarations, preserves input files,
and writes `ui/menus/x2m_options.IGB` and `ui/models/model_bar_sound.igb` under a
separate output asset root. Animation data and filenames remain intact.
The v22 hidden, muted run's three native captures were inspected: effects fill
shrinks after three left inputs, then music fill shrinks independently after
one left input. Both bars fit within their panels over Cerebro. Further artwork
polish, native mouse targeting, and full gameplay acceptance remain unfinished.

| XML2 feature | XML1 implementation plan |
| --- | --- |
| Effects/music volume, combat music, camera angle/cycle/follow, subtitles, vibration | Retain XML1's native game settings and save behavior. |
| Camera shake | Check whether XML1 exposes a working equivalent before offering the control. |
| Advanced resolution and FSAA | Add functioning native DX8 settings with supported choices and explicit restart behavior. |
| Keyboard/controller configuration | Add binding pages, defaults, conflicts, apply/cancel and persistence. |
| WASD movement, IJKL camera, arrows select characters, Esc pause, M map, F1 stats | Implement against XML1's controls, with separate menu navigation. |
| Mouse menu selection, wheel navigation and gameplay interaction | Implement through game-window events and native game state; validate actual hit targets. |
| Quick powers and mouse-assisted world actions | Map to XML1's available powers/actions; track differences from XML2 explicitly. |

## Work sequence

### Native mouse targeting progress

The v27-v32 diagnostic runs identified the font writer (`00144910`) and
array unlock (`001B6270`), but bulk-copy hooks did not connect those CPU
vertices to a draw. The unlock marks the array dirty; its upload occurs in
`001B68B0`, with an inline copy at `001B68DB`. Tracking ownership at that
copy connects each menu label to the final world/view/projection transform.
The v33 log records the CPU-to-GPU transfers and distinct screen bounds.
`native-upload-capture-2.bmp` was inspected against those bounds.

Mouse events now resolve against the completed frame's rendered label bounds
and the active menu owner. A clicked item queues its original `usecmd` through
`001732A0` during the next native item update. No resource aliases, coordinates
hardcoded to the menu layout, or replacement overlay are involved. Static PC
commands are registered alongside dynamic gamevars. Closing/cancelling clears
pointer mode and pending clicks; stale frames cannot supply hit targets.

The v34 hidden, muted process-local click at the displayed Resolution label
changed the draft from 1280x720 to 1920x1080. Both the native action log and
inspected `native-click-capture-3.bmp` confirm the change over live Cerebro.
Back discarded the draft. This verifies draft editing, not an immediate
resolution switch or gameplay. Controls tests passed with the Win32 IPC
producer, including single-consumption clicks, stale-frame rejection and
client-coordinate scaling at 720p and 1080p. Exploratory CRT/D3D bulk-copy
hooks were removed after identifying the real upload. Repeated hook-script
execution is checked to avoid accumulating duplicate item-update hooks.

The v35 hidden, muted run clicked Next and then Cancel. Inspected native
captures `native-page-click-capture-3.bmp` and `-4.bmp` show bindings 8-14
followed by the parent Options menu over Cerebro. The log confirms native
`pcnative_scroll_next` and `pcnative_cancel;closemenu` dispatch. Both runs
ended through the fixture watchdog (exit 3); no game was left running.

The v36 native capture shows clicking the primary Move forward binding and
entering Z updates that row. Back cancelled the draft; the private settings
file retains its prior T binding. Its focus trace identified `001639F0`, the
native menu focus setter: it unfocuses the old item, updates menu+0x290,
focuses the new item and refreshes descriptions. Hover now calls that setter
once per pointer event instead of maintaining an independent selection.

In v37 the fixture moved the pointer over Window without clicking, then sent
controller Accept. The log records focus changing through `001639F0` and
`pcnative_window`; inspected `native-hover-capture-3.bmp` shows Fullscreen
while Resolution remains 1280x720. This verifies shared mouse/controller
selection. The change was cancelled. Controls tests cover hover without
activation, single consumption and no repeated focus request without new
pointer movement. Both runs ended through the watchdog, with no game left
running.

`scripts/author-menu-focus.py` restores the reference menu's existing focus
model associations for nine Advanced Options controls. It validates each
model against the PKGB and physical asset path, keeps the menu in `ui/menus`,
and leaves the reference untouched. Its output hash matches the private menu.
The inspected v38 `native-focus-art-capture-3.bmp` shows the original blue
highlight behind Window after mouse hover, and controller Accept still changes
the Window draft. This verifies that focus artwork follows native selection
for that control. Binding-cell highlights and other presentation work remain.

The interaction owner is now separate from the PC settings draft. It follows
the native manager singleton (`00183D20`, global `577210`) and current menu
field (`00181810`, offset C08), including menus outside Advanced Options.
Usecmd registrations retain the original commands; changing the active menu
clears pointer queues and vertex ownership. Selectability follows the native
navigation checks at `001736B8` (enabled bit 4, skip bit 8), plus hidden bit 2.
Controls tests cover ordinary-menu clicks without a settings draft, disabled
and hidden item rejection, and release of pointer mode when no menu is active.

The v39 capture established the main-menu bounds, but the run entered its
idle demo before the adaptive click; it did not verify navigation. The v40
fixture sends actions before that timeout. Native captures 2-6 in
`native-menu-route-capture-*.bmp` were inspected sequentially: mouse click
opens Options, then Advanced Options, Next shows rows 8-14, Cancel returns to
Options, and controller Back returns to the main menu with Options selected.
Logs confirm the original native command dispatches. No settings were saved.
This establishes that route, not all native widgets or gameplay interaction.

Ordinary slider/toggle mouse adjustments, full pointer
behavior, visual polish, staged gameplay and human input acceptance remain
unfinished. The work is still private; `!GAME` has not been updated.

1. Establish a versioned input/settings channel between the native DX8 window and
   game process. Receive only the window's own input; clear state on focus loss.
2. Implement bindings and settings independently of presentation, with synthetic
   tests for persistence, conflicts, focus loss, device switching and player slots.
3. Integrate PC settings into the existing Options flow and render an XML1-themed
   panel using native DX8. Keep the existing game settings available.
4. Implement and verify mouse/menu targeting and gameplay/camera controls.
5. Stage in `!GAME`; inspect native captures at 720p and 1080p and exercise actual
   gameplay, saving, options return paths and shutdown. Obtain a human input check.

No desktop automation, OS input injection, or desktop capture may be used for
tests. Process-local event fixtures must exercise the same mapping code as real
game-window events. Windows cursor and input APIs may be implemented as normal
application behavior; tests must not remotely operate them.

The goal is not complete when a panel merely renders or keys merely produce
controller packets. Behavior and presentation must be checked in the game.

### Native mouse toggles and list cycles (2026-09-14)

Native gamevar controls now register pointer targets without needing a usecmd.
Mouse activation dispatches the item's original virtual Use method (+0x2C),
matching the native accept path at 001731B3. Binary and list-cycle controls
have separate Update methods (00174860 and 00177940, established from the
original XBE vtables at 003DF614 and 003DF3E4); those now receive the same
pointer focus/activation processing as text controls. Native gamevar values
continue through their original getters/setters, not the PC draft formatter.

The first run (native-v41.log) failed to change toggles: only the text Update
hook was active. The corrected hidden, muted v42 run inspected all four native
toggle captures in order. Capture 1 establishes On/Normal/On; capture 2 shows
Combat Music Off, capture 3 View Angle Steep, capture 4 Subtitles Off. Each
clicked control has its original blue focus artwork over moving Cerebro.
The run returned to the main menu and ended at its configured watchdog (exit
3). No Accept/save command was sent. The run is a menu interaction check, not
proof of gameplay, audible volume behavior, or persisted native settings.

The optimized build and PC controls tests passed, including a no-usecmd native
gamevar pointer case and preservation of native text handling. Re-running the
menu generation guard left the generated file hash unchanged. Changes remain
in the private fixture; !GAME is unchanged. Slider wheel/drag behavior, full
row hit targets, remaining visual parity, gameplay and final staging remain
unfinished.

### Native slider wheel adjustment (2026-09-14)

Wheel events over a rendered volume label now invoke the existing slider
Adjust method at 0017CE40 through vtable +0x3C. The original slider vtable
003DF4EC establishes this target and its two-argument direction ABI. Only
controls with that verified handler are marked adjustable. The original
setting callback handles the step, bounds, and subsequent bar animation.
Pending steps are consumed once and cleared on menu changes.

Optimized build and PC controls tests passed, including negative wheel steps,
single consumption, no accidental accept, and clearing a pending step on menu
close. Generation guard idempotence passed. Hidden muted native-v43.log ran
through Options and returned to main before its watchdog exit 3. All four
native-wheel-v43 captures were inspected sequentially: baseline, effects fill
shortened after three negative steps, music fill shortened after three negative
steps, then music fill lengthened after one positive step. Focus follows the
wheel target and Cerebro continues rendering behind the native menu.

This establishes wheel adjustment over label bounds only. Bar click/drag and
full-row targeting remain unfinished. No Accept/save command was sent and the
run was muted, so audible volume behavior and persistence are not established
by these captures. !GAME remains unchanged; actual gameplay acceptance remains
required for the goal.

### IGB text sizing and footer placement (2026-09-14)

Added scripts/author-menu-type-scale.py. It changes existing text transforms
inside the PKGB-declared ui/menus/x2m_options.IGB, preserving filenames,
associations, geometry and original source. Native desctext1-5 anchors are
scaled to 0.5; the second footer action moves to the right. Native value fields
(On/Off, camera angle) use 0.65 to match their labels. This replaces neither
the footer nor the menu with an overlay. The source copy remains in the
private type-input tree and the authored result follows the same relative path
in type-output. The script records source/output hashes and modified transforms.

Both private menu PKGBs still declare the shared layout; all 19 model resources
in each resolve at their declared paths. Hidden native-v44.log ran the complete
main -> Options -> Advanced -> Next -> Cancel -> Options -> Back -> main route.
All six native-type-v44 captures were inspected sequentially. The footer now
fits at the intended size and left/right positions on both screens, option
values match the label scale, and paging/cancel work at their existing targets.
The run ended at its watchdog (exit 3). Native Advanced still displays controller
prompts while mouse is active; device-appropriate prompts remain unfinished.
This is 1080p menu evidence only, not 720p or gameplay acceptance. !GAME was not
modified, and TODO 2/3 remain open.

### Keyboard-only level 1 and menu return check (2026-09-14)

The v45 gameplay attempt is not keyboard acceptance: XML1_TEST_PAD=1 makes
poll() return the simulated pad before it merges PC input. This flag is useful
for menu pointer tests, but must be absent from keyboard/gameplay fixtures.
The corrected v46 run used XML1_PC_TEST_INPUT with no XML1_TEST_PAD, which also
isolates physical controllers. Its private settings were reset to W forward
and 1920x1080; player !GAME settings and saves were untouched.

All nine existing native-game-v46 captures were inspected sequentially:
1 intro RVN FMV, 2 level 1 start, 3 after W, 4 after mouse attack, 5 Escape pause,
6 mouse-selected Options over the level, 7 Advanced over the level, 8 resumed
level after Cancel and two Backspace presses, 9 after two seconds of D movement
with a clearly changed player/world position. The command log shows the native
Options/open, Advanced/open, and Cancel/close routes and pointer mode returning
to zero for gameplay. Mouse click produced [PC GAME INPUT] A=255; the capture
shows claws extended but does not prove a landed combat attack.

The run reached its 180-second watchdog (exit 3). A later attempt to request
captures 10/11 was too late and produced no captures, so it is not evidence.
Combat, mouse-camera rotation, powers, focus-loss in gameplay, mixed-player
behavior, human acceptance, final presentation and player staging remain open.
This is actual level/menu-return evidence, not full gameplay acceptance.

### Gameplay focus and camera diagnosis (2026-09-14)

The v47 fixed-time attempt was invalid for camera/focus acceptance: its first
six captures were still in the intro FMV, followed by loading and level start.
All eight captures were inspected. The v48/v49 harnesses instead wait for the
level navigation asset to load and then allow gameplay to settle. Both use only
PC process-local input, without XML1_TEST_PAD or physical controller polling.

All eight v48 captures were inspected sequentially. D movement stopped on
focus loss, remained stopped on focus restoration, and resumed on a fresh D
press. Subsequent attack captures were obscured by a tree and cannot establish
attack animation or a landed hit. The small-drag camera result was inconclusive.

All four v49 captures were inspected sequentially: level baseline, camera
rotation after holding L, further camera rotation after V plus 80-pixel mouse
steps, and stable framing after release. This establishes keyboard rotation
and large mouse-drag response in level 1, not fine mouse control. v48 and v49
ended at their configured watchdogs (exit 3); this is not a crash finding.

The original stick normalization at guest 002481B1/002481E4 reads right-stick
axes, adds the float at 003C7084 (0.5), multiplies by 003FD810
(0.00003051804378628731), and zeros values smaller than the double at 003E2170
(0.1). These constants were read from the supplied original XBE. Ten-pixel
mouse steps at sensitivity 100 map to 8000, which exceeds this initial dead
zone. A later threshold or input timing still needs investigation before
changing sensitivity or applying compensation.

PC test logging now reports consumed right-stick axes and tracks consumed
state separately from connection probes, so a peek cannot suppress the trace
of an event subsequently delivered to the game. The optimized build and mixed
input integration test passed. The latter isolates physical controllers and
proves mapping/focus/routing only, not four-player gameplay. !GAME is unchanged.

The controlled v50 run establishes a fine-drag defect: each of 51 ten-pixel
steps reaches XInputGetState as RX=8000 and then returns to zero, but all four
native captures retain the same world framing. The pointer baseline was set
and given time to arrive before pressing the drag binding, excluding an old
absolute-pointer position as the explanation. All captures were inspected in
order. v51 repeated this with a temporary diagnostic at 0024830E: normalized
X=0.244160 reaches virtual handler 00247930, alternating with zero. Its four
captures likewise show no camera rotation. Both runs ended at watchdog exit 3.

00247930 forwards its five arguments through the callback at receiver+0x24;
that downstream callback and the camera consumer are the next trace targets.
The temporary generated-code diagnostic was removed after collecting evidence.
No sensitivity compensation or guessed game threshold was introduced. Large
mouse drags work, but fine movement remains a confirmed unfinished behavior.

### Fine mouse camera threshold (2026-09-14)

v52 established that the right-stick notification receiver's callback at +0x24
is null in gameplay. v53 traced the stored-axis reader 00247AC0: its caller is
00117F02 in the action mapper. The mapper tests axes against the original XBE
floats at 003C8C30 (-0.5) and 003DA118 (+0.5), recording active action bits at
object+0x2F8 separately from the float values at object+0x2FC. Thus a normalized
0.244160 reaches the mapper without activating a camera action. All four
captures from each run were inspected sequentially; neither run rotated the
camera. Both reached watchdog exit 3.

The PC mouse adapter now maps nonzero mouse deltas into the active half of the
stick range, with sensitivity scaling above that threshold. A stationary mouse
still maps to zero. Physical controller input and generated game behavior are
unchanged. Temporary callback/poll tracing has been removed. Tests now cover
single-pixel activation, sensitivity ordering, inversion, rest, focus release,
and saturation including signed integer extremes. Optimized and renderer test
builds passed, as did the cross-process PC controls and mixed-input integration
executables. In-level visual validation of this correction is pending v54.

The player Read Me template now names Options > Advanced Options and describes
native control hit targets instead of the abandoned generic overlay. This only
changes the staging template; !GAME has not been staged or modified.

The v54 gameplay check passed for small positive horizontal drags: all four
captures were inspected in order. Captures 1/2 show the stable baseline;
capture 3 shows the world rotated around stationary Wolverine after 51
one-pixel mouse steps with V held; capture 4 retains that orientation after
release. This directly resolves the previously reproduced no-response case.
The run ended at watchdog exit 3. A follow-up reverse/vertical test found the
process already exited and sent no inputs or captures; those directions still
need in-game verification. Automated mapping tests cover their signs but are
not a substitute for that gameplay check or human sensitivity acceptance.

### Reverse camera check and keyboard enable control (2026-09-14)

The hidden muted v55 run tested reverse horizontal movement and both vertical
mouse directions in level 1. All five captures were inspected sequentially.
Reverse horizontal one-pixel steps visibly rotate the camera around Wolverine.
Vertical steps did not establish a visible pitch/zoom change; that behavior
remains unverified and needs comparison with native vertical stick behavior.
The run reached watchdog exit 3. This does not establish combat or full input
acceptance.

The private Advanced Options definition now fills its existing label_vibration
anchor with Keyboard / mouse: On/Off, using the reference's declared
m_options_combatmusic_select and options_vibration_focus associations. Navigation
runs Cancel -> Keyboard / mouse -> Apply. No PKGB or IGB paths were changed.
The native command/value adapter now supports pcnative_keyboard. Applying saves
the choice, while the current live device configuration stays in effect until
restart, avoiding loss of the keyboard mid-menu. The focus authoring script
also preserves this tenth association for repeat authoring.

Optimized and renderer control test builds passed; the controls executable
verified the new native value, toggle and saved keyboard_enabled value alongside
existing apply/defaults/cancel tests. A native menu capture run is pending v56.
The restart notice now explicitly covers input-device changes. !GAME is unchanged.

All four v56 captures were inspected sequentially: the new bottom row fits at
1080p with no overlap, clicking changes On -> Off -> On with the native blue
focus artwork, and Cancel returns to normal Options over live Cerebro. The
command log confirms both keyboard toggles. No Apply was sent in this game
run; persistence is covered by the native adapter test, and a restarted game
with keyboard disabled still needs acceptance. v56 ended at watchdog exit 3.
This is menu evidence only; the combined goal remains open. The final restart
message wording was rebuilt and the optimized controls tests passed again.

### Removal of abandoned overlay (2026-09-14)

Removed the renderer's GDI options surface, overlay navigation, separate overlay
controller polling, preview command and draw calls. The worker now only transports
keyboard/mouse input and process-local fixtures to the native game menus. Native
backbuffer capture remains intact. Removed the startup rewrite from
optionscontroller to pcoptions and its obsolete command handler, so launching the
EXE does not repopulate the old overlay entry. Native Quit installation is retained.
The old process-local `pad` command addressed only the overlay and is now rejected;
native controller fixtures still use XML1_TEST_INPUT_FILE inside the game process.

The renderer builds without its explicit GDI/XInput dependencies. The initial
build exposed a transitive <string> include in dx8_replay.h, which is now explicit.
The final renderer build and cross-bitness controls/input integration tests pass.
The optimized game was rebuilt after removing the startup rewrite. No package
files or extracted resources were edited by this cleanup. A read-only audit of
both native Options packages confirmed all 19 declared models exist for each,
and every visible model/focusmodel association resolves through its package.

The hidden muted v57 gameplay run used the rebuilt worker. All five native
captures were inspected sequentially: baseline, I zooms closer, K restores the
wide framing, W moves Wolverine into the courtyard, and enemies approach during
the mouse-attack fixture. The last capture does not prove a landed attack, so
combat acceptance remains open. The keyboard comparison establishes that native
vertical stick controls zoom; the lack of clear vertical mouse response in v55
still needs investigation. v57 ended at watchdog exit 3, and process enumeration
confirmed the game and worker stopped. A separate v58 native menu check uses the
rebuilt game after the startup rewrite removal. !GAME remains unchanged.

All four v58 captures were inspected sequentially. The rebuilt game opens the
native Advanced Options over animated Cerebro, toggles keyboard/mouse Off and
On using the native focus artwork, then Cancel returns to Options. No generic
panel appears. The run ended at watchdog exit 3; both processes are stopped.
This verifies the cleanup, not the remaining menu parity and gameplay acceptance.

### Vertical mouse zoom and reproducible authoring (2026-09-14)

v59 used five-pixel vertical steps at 40 ms intervals. All four captures were
inspected in sequence: no visible zoom on either mouse direction, then a 100 ms
I press zoomed in. Logs confirm vertical mouse values of +/-18384 reached the
game. v60 used one 80-pixel movement in each direction; all three captures were
inspected sequentially and show zoom in, then out. Both runs ended at watchdog
exit 3. This narrows the failure to partial zoom pulses, not missing vertical
input or a broken native zoom operation. The exact downstream threshold has not
been reverse engineered.

The adapter now sends full native zoom direction for nonzero vertical drag,
matching I/K. Horizontal rotation retains sensitivity scaling. InvertCameraY
reverses the vertical mouse zoom direction. The native game's zoom logic and
physical stick mapping are untouched. Controls tests cover both full signs,
zero motion, inversion, focus release and extreme deltas; cross-bitness controls
and input integration tests passed after rebuilding. v61 tests one-pixel zoom
in both directions in gameplay. The player Read Me template explains horizontal
rotation versus vertical zoom and the rotation sensitivity setting.

Promoted the temporary typography and binding-table authoring steps into
scripts/author-menu-typography.py and scripts/author-menu-binding-table.py. Both
accept --writer-root, --input, --package and --output-assets. Both require the
input menu resource to be declared by the PKGB and derive the output path as
ui/menus/<unchanged input filename>. Originals are preserved; packages are read
only. They write provenance reports. The binding step rejects duplicate table
authoring. Reproducing the existing fixture stages yielded byte-identical IGBs:
typography SHA256 5329CCA3DC556361DF726D16ADA3C34E083A4577D2B070FDC702C91E406FE844;
binding-table SHA256 C3E1467534B1F44CBBD91CA293CFE486C295B15D7DC0252CFD564981013328AD.
This makes these two authoring steps reusable; full asset staging consolidation
and player acceptance are still unfinished. !GAME remains unchanged.

v61 result: all three native captures inspected sequentially; one-pixel upward
movement zooms closer and one-pixel downward movement zooms back out with V held.
This resolves the reproduced small-delta vertical no-response case. Human camera
feel, diagonal drag behavior and full combat acceptance still remain to be checked.

### Native bottom-bar Advanced Options link (2026-09-14)

Added scripts/author-menu-advanced-link.py to populate an existing unused text
anchor (label_click02) at the copied IGB's desctext2 footer position. In normal
Options it opens the native Advanced Options; the Advanced menu continues to
hide that anchor. Navigation connects Accept -> Advanced Options -> Effects
Volume. This uses the copied IGB and menu contents, with no new PKGB resource,
filename change or runtime alias. The script accepts the source IGB, source
Options contents, writer root, package and output asset root, validates both
resources against the same package, and preserves its inputs.

v62 inspected all four native captures sequentially: the footer link fits,
opens Advanced Options over Cerebro and Cancel returns to Options. The temporary
View Shake row had no displayed value. Inspection of !GAME's original XML1 menu
shows that option was never present; the XBE has view_follow/view_cycle/view_angle
strings but no view_shake setting name. Thus the previous assumption that an
existing XML1 option had been displaced was incorrect. The XML2-only shake row
is now hidden and excluded from navigation, rather than exposed as a dead toggle.
Implementing that XML2 behavior remains a parity gap. The reference anchor is
retained. v62 ended at watchdog exit 3; both game processes stopped.

A read-only audit after authoring still resolves all 19 models in each package;
PKGB hashes remain options=2782953a5d0128c536802af211ceaddd0b73630dd150ab43f10201d4e838d0bd
and options_controller_xbox=251215d8d99d4ad8c27cf54f6b7619c87f38b7b4e0fad497721a0ae0b96c0b33.
v63 checks the final hidden-row menu through gameplay using only PC input.
!GAME remains unchanged; full menu parity and staging are not complete.

v63 visual result: all four captures inspected sequentially. Normal Options
shows its original working XML1 controls and the new footer link; Advanced opens
over Cerebro; after Cancel and returning to the main menu, Begin Story loads
level 1 and W moves Wolverine into the courtyard. This verifies the authored
menu path through gameplay, not full combat/persistence or human acceptance.
The hidden View Shake row leaves spare vertical space that still needs layout
polish. Footer keyboard selection and matching font size need a dedicated check.

### Keyboard footer navigation and readable focus (2026-09-14)

v64 used Up from Effects Volume to select the footer and Enter to open Advanced
Options, then cancelled and started level 1. All five captures were inspected
sequentially and confirm the menu transition and movement in gameplay. The
STYLE_TITLE trial matched the Back text size but did not visibly distinguish
selection, so it was superseded. The run ended at watchdog exit 3.

The final authoring uses STYLE_MENU at 0.65 IGB text scale: this matches the Back
prompt's visual size while retaining the native gray-to-white selected text cue.
No runtime drawing or PKGB edits are involved. v65 captures 1-3 were inspected
sequentially: gray unselected footer text, white selected text after Up, and native
Advanced Options after Enter. Gameplay captures and terminal status are pending.

v65 captures 4-5 were then inspected in order: level 1 loaded after leaving the
menus, and W moved Wolverine. All five captures have been inspected. The run
ended at watchdog exit 3; process enumeration confirms game and worker stopped.
The footer keyboard path and text focus cue are verified at 1080p. This does not
complete remaining menu parity, staging, combat or human acceptance requirements.

### Basic mouse combat and native branding (2026-09-14)

v66 used process-local PC input only: W movement, repeated left mouse attacks,
then right mouse attacks. All seven native captures were inspected sequentially.
The sequence shows an enemy losing health, falling and dropping an energy pickup;
Wolverine takes damage while combat continues. This establishes basic mouse
combat, not the powers matrix, distinct right-button damage, mixed physical
controllers or human control feel. Watchdog exit 3; both processes stopped.

v67 populates the existing label_controls anchor with X-Men Legends 1 XboxRecomp.
All five native captures were inspected sequentially: normal Options, keyboard
footer selection, Advanced Options with the branding fitting above the bindings
panel over live Cerebro, level 1, then W movement into the courtyard. The test is
headless and muted, so it provides no audio acceptance. !GAME is unchanged.

The menu authoring helper now rejects a PKGB that does not declare the input
menu's own ui/menus path. Both current private menus declare 19 models; every
model file exists at its declared path and all menu model/focus references are
declared. Neither package changed during this branding pass. These fixture
packages are not byte-identical to XML2: earlier integration removed the absent
m_options_controls_ps2 declaration and added the original XML1 model_bar_sound
and m_invis declarations. Those differences remain an explicit staging audit
item under the user's requirement to preserve package associations; a successful
resource-resolution check alone does not approve them. Reference files remain
unchanged. No alternate path routing or resource renaming was added.

v67 ended at the configured watchdog (exit 3); game and worker are stopped.

### Settings transactions and restart evidence (2026-09-14)

v68 changed sensitivity from 100 to 125 through the native menu. File assertions
prove the draft did not save prematurely, Apply wrote 125, and Cancel discarded
a subsequent 150 draft without modifying the saved file. Captures 1-7 were
inspected in sequence: Options/footer, 125 draft, saved confirmation, reopened
125, level 1 and W movement. The run ended at watchdog exit 3.

v69 started a fresh game process using that saved file. Captures 1-7 were
inspected sequentially: Options/footer, Advanced showing persisted 125,
Defaults showing 100 with readable explanatory text, reopening after Cancel
showing 125, then level 1 and W movement. Assertions confirm Defaults/Cancel did
not write the settings file. Watchdog exit 3; both processes stopped before the
next private binary update. These tests cover sensitivity and cancelled default
selection, not all settings, applied defaults or binding persistence.

Code review found that Apply compared restart-only fields against the most
recent save, so a second Apply could incorrectly replace the restart notice
with Settings saved. The model now retains the running configuration separately;
the native menu takes it from the current input channel when opened. Comparison
against the running state preserves the notice across repeated Apply and menu
reopening. A regression assertion for repeated Apply passes with the 32/64-bit
controls/channel checks and the mixed-input integration test. Native v70 checks
the repeated-Apply/reopen/revert path through gameplay with the updated private
binaries. !GAME and its settings remain unchanged.

v70 passed its native assertions: changing to 720p and applying twice retains
the restart notice; closing/reopening Advanced and applying still retains it;
returning the saved setting to the running 1080p clears the notice. All eight
captures were inspected sequentially, including level 1 and W movement after
leaving the menus. Watchdog exit 3; both processes stopped. Visual inspection
also caught the long restart message touching the right panel border. It was
shortened to Saved. Display/device changes need a restart. v71 verifies the fit
with the revised private binaries and continues through gameplay.

v71 captures 1-5 were inspected sequentially. The shortened restart message
fits within the right panel with space to spare. After reverting the saved
resolution to 1080p, the run returned through the main menu to level 1 and W
movement. Watchdog exit 3; game and worker are stopped. Current private settings
are 1080p with sensitivity 125; the pre-v68 settings backup is retained locally.
No player-stage files were touched. The previous goal turn and this turn both
made progress (native visual evidence, settings bug fix and verified behavior);
there is no external blocker. Full package reconciliation, reference parity,
remaining input checks, staging and human acceptance are still required.

### Native binding-cell focus (2026-09-14)

scripts/author-menu-binding-focus.py adds 14 selection anchors inside the copied
ui/menus/x2m_options.IGB and populates focusmodel/focusitemname in the Advanced
menu. It reuses ui/models/m_options_view_select at its existing declared path;
no model file, alias or package declaration is added. Source IGB/menu and PKGB
bytes are preserved. It validates the menu's own PKGB association and rejects
re-authoring an already populated input. Output reproduces original paths.

v72 captures 1-7 were inspected sequentially. Arrow input visibly moves selection
between the first row's secondary and primary bindings and then to the second
row. The scaled blue selection geometry fits the cells with text still readable.
The run then returned to the main menu, loaded level 1, and moved with W.
Watchdog exit 3; both processes stopped before v73. This is evidence for native
keyboard selection, not yet physical-controller acceptance or every binding row.
The added anchors are present only in the private fixture; !GAME is unchanged.

### Binding save and live gameplay check (2026-09-14)

v73 selected the primary Move forward cell with the native pointer, captured T,
and applied. The saved INI contains MoveForward=84. All six native captures
were inspected sequentially: Options/footer, the highlighted T binding, saved
confirmation, level 1 baseline and movement with T after leaving the menus.
This verifies the remap takes effect in gameplay without restarting. The run
ended at watchdog exit 3 and both processes stopped before v74. The original
private settings are backed up in pc-settings-before-v73.ini; player settings
in !GAME were not changed. v74 checks loading the remap in a fresh process.

v74 started a fresh process with the v73 saved bindings. All five captures were
inspected in order: Options/footer, Advanced displaying T for Move forward,
level 1 baseline, then movement with T. This proves that remap is reloaded and
used by gameplay across restart. The run ended at watchdog exit 3; process
enumeration confirmed both game and worker stopped. The pre-v73 private settings
were restored from the backup (Move forward W, sensitivity 125). !GAME was never
modified. Mouse-button binding classes, conflicts/unbinding in the actual game,
remaining setting classes and human/mixed-controller acceptance remain open.

### Package protocol audit and mouse binding evidence (2026-09-14)

The user's constraint applies to copied assets throughout authoring and staging:
retain their PKGB associations, declared relative paths and original resource
names. Author IGBs and populated menu contents within that structure. A package
that merely resolves all files is not sufficient evidence of compliance.

A direct parsed comparison against the original imported XML2 options.PKGB
confirmed that both private menu packages added ui/models/model_bar_sound and
ui/models/m_invis, and removed ui/models/m_options_controls_ps2. Advanced also
changes the xml menu association from options to options_controller_xbox.
These are explicit outstanding differences, not approved structural changes.
No package or player-stage files were modified by this audit.

v75 produced eight native captures; all were inspected in numbered order.
They show the mouse binding conflict message, deletion of the conflicting
binding, swapped Left/Right mouse entries, level 1, then combat ending with an
enemy down and 7 XP. The harness reached gameplay only after asserting saved
Attack=2 and Smash=1. This establishes live mouse remapping, conflict handling
and unbinding in this private run, not reload after restart or full acceptance.
Process enumeration confirmed no game or worker remained. The private settings
were restored from pc-settings-before-v75.ini and their SHA-256 hashes matched.
The mouse-rebinding restart check remains pending; !GAME is unchanged.

### Remove exploratory invisible-model dependency (2026-09-14)

scripts/author-menu-remove-invisible-model.py removes nine exploratory m_invis
Model properties from x2m_options.IGB while retaining the anchors and ItemName
properties. Visible selection art still comes from the native focusmodel/menu
associations. The generated IGB retains ui/menus/x2m_options.IGB; no asset is
renamed. The private packages no longer add the m_invis declaration. Original
IGB/package backups are in work/native-igb-menu-test/before-remove-invisible.

v76 captures 1-5 were inspected sequentially: Options with volume selection,
Advanced footer selection, Advanced with resolution selection, level 1, then
keyboard movement into the courtyard. The native focus art and live Cerebro
remain intact. The harness terminated with watchdog exit 3; game and worker
were confirmed stopped. This is a successful removal of one package deviation,
not full package compliance or completion of TODO 2/3. !GAME remains unchanged.

The remaining structural work is the model_bar_sound dependency, the removed
PS2 declaration (absent from the installed XML2 data), and the Advanced menu's
package association. Inspection confirms m_options_sound_select contains static
selection geometry, not volume animation; model_bar_sound contains an
igTransformSequence1_5 with two translation/rotation/scale keys. Do not simply
rename one model to the other. Any native bar animation authored into declared
XML2 IGBs must preserve their artwork and verify both focus and slider behavior.

### Native volume animation in the declared XML2 asset (2026-09-14)

scripts/author-menu-volume-animation.py authors the native two-key transform
animation into ui/models/m_options_sound_select.igb. It retains that resource's
original geometry and materials. A parsed before/after comparison verified that
all original memory blocks are unchanged; only the transform's animation link
and scene duration differ among the original objects. Nine animation objects
were imported from the XML1 reference with explicit metadata/reference mapping.
The helper also updates the slider anchors in ui/menus/x2m_options.IGB and uses
the already-declared static m_options_view_select for the two row highlights.
It preserves input files and emits a source/output hash manifest. No renamed
asset, alias, package addition or renderer change is required.

v77 captures 1-7 were inspected sequentially. Effects fill shrank and grew;
gameplay and W movement followed. The run also exposed an animated row highlight
because focus and volume used the same newly animated resource. The static
focus assignment fixes that sharing. v78 captures 1-7 were all inspected:
near-minimum and full Effects fills, independent unchanged Music fill, static
focus in Options and Advanced, then level 1 and W movement. Both runs reached
watchdog exit 3 and their processes stopped. These muted checks establish visual
slider behavior, not audible volume change or persistence.

Both private packages now omit the exploratory model_bar_sound and m_invis
additions. The original files remain untouched elsewhere. Normal options.pkgb
was then restored exactly from the imported XML2 options.PKGB, including its
pre-existing unused PS2 declaration; v79 is the targeted validation run.
Advanced's association remains an outstanding structural task. !GAME is unchanged.

v79 completed with the original Options package. All seven native captures were
inspected sequentially: full/reduced/restored Effects volume, Advanced footer,
Advanced with static focus, level 1, and W movement into the courtyard. The
original absent PS2 resource is requested without preventing menu or level loads;
it remains a pre-existing missing reference, not a substituted or renamed asset.
The package SHA-256 matches the source exactly:
f8b81726d4ce64ca4d938198a73daa7041d44db708cd2737539361c077088f04.
Watchdog exit 3; game and worker stopped. The run is muted, so audio-volume
acceptance is still pending. TODO 2/3 and the goal remain active.

### PKGB declaration policy clarified (2026-09-14)

The user explicitly selected: Preserve format and paths; declarations may change.
This supersedes the earlier interpretation that the imported manifest must remain
byte-identical. Both menu packages use ordinary model/xml filename declarations;
their IGBs retain original resource names and paths. Advanced's existing
options_controller_xbox package and menu association is appropriate under this
clarification and does not need an alternate runtime routing mechanism.

The unused missing m_options_controls_ps2 declaration was removed again from
normal Options. Its bytes match the v78-tested package exactly. The current
audit parses both PKGBs, verifies every model file, the menu definition's own xml
association and layout IGB, all visible model/focusmodel references, and all
serialized IGB Model properties. All checks passed. The local evidence is
work/native-igb-menu-test/current-package-audit.json. No filenames were changed,
and no fallback or alias was introduced. Package reconciliation is resolved;
full asset staging, feature parity and acceptance remain unfinished.


### Native DX8 FSAA and repeatable package audit (v80-v82)

PKGB declarations retain the approved format and original resource paths.
`scripts/audit-native-menu-packages.py` now checks every declared model file,
menu-to-package association, visible model/focusmodel reference, and serialized
IGB Model property. Both packages pass, with 17 model resources and 21 IGB Model
properties each. Current hashes are in the private `current-package-audit.json`.
No package changes were needed for this FSAA step.

The native Advanced screen offers Off/2x/4x/8x FSAA, limited by the renderer's
color and D24S8 multisample capabilities. Input IPC is now version 6, 1244 bytes;
rebuild both executables together. FSAA is saved for restart; Apply preserves the
running device settings, and Cancel leaves the saved choice intact. Off remains
the default. An unsupported saved hardware mode produces an explicit renderer
error rather than silently changing the selected mode.

`renderer/dx8_readback.h` resolves a multisampled backbuffer with native DX8
CopyRects into an ordinary image surface. Completion uses an ordered one-pixel
GPU-to-CPU copy followed by LockRect; captures copy the full frame. Existing
non-multisampled backbuffer locking is retained. The startup completion check
runs before guest commands are consumed. No wrapper or newer graphics API is
used. Support was measured on the system D3D8 runtime and AMD Radeon 780M;
other adapters have not been validated.

`dx8-readback-test` passed Off/2x/4x/8x across 32 changing frames per mode,
checking both fence/capture freshness and resolved triangle-edge pixels.
The x64/Win32 controls tests passed, including mode filtering and IPC attachment;
mixed-device input integration also passed. These tests supplement the actual
game runs below.

- v80: Off at 1080p; selected 4x, Apply wrote FSAA=4 and displayed the restart
  notice; returned to level 1 and moved with W. All seven captures were inspected
  sequentially. This run caught an authoring error: reuse of a shared label
  moved normal Options' Advanced footer. That asset revision is superseded.
- v81: restarted at 1080p with renderer-confirmed 4x. The normal footer was
  restored by adding dedicated window-setting anchors within x2m_options.
  Native Advanced loaded the saved 4x value. Selecting 8x then Cancel retained
  saved/running 4x. All nine captures were inspected sequentially: an intro
  FMV frame, both menus/focus states, level 1, W movement and mouse combat.
  No native DX8 errors were logged. Later gameplay intervals were about
  23-25 FPS; this diagnostic run is not an isolated performance benchmark.
- v82: a private 720p/2x configuration exercised the final, narrower window
  focus anchor and both menus at 720p. Selecting 4x then Cancel retained 2x.
  All nine captures were inspected sequentially through level 1 movement and
  combat, including visible enemy health loss. The intro capture contains a
  transitional FMV image; it does not establish full FMV playback acceptance.
  Later gameplay intervals were about 39-43 FPS. This run was muted.

Current authoring stage: `scripts/author-menu-fsaa.py`, using the preserved
`before-fsaa` inputs and outputting `fsaa-authored-v3`. It adds two native anchors
inside the same copied IGB and populates the same Advanced menu. Resource names,
PKGB relationships and existing normal-menu anchors are preserved. Window mode
currently occupies the lower control panel; complete reference-layout polish,
player/device controls, input prompts, volume interaction, remaining settings
and final player staging are still pending. Neither these short runs nor the
readback tests close the combined TODO 2/3 goal.

All three harnesses ended at their 150-second watchdog (exit 3); game and worker processes were confirmed stopped. Private pc-settings.ini was restored byte-for-byte to its pre-v80 contents (1080p, FSAA Off). !GAME remains unchanged by this goal.

### Volume pointer transport and native slider trace (v83-v84)

The native volume labels currently receive mouse hits, but their bars do not yet
support direct seeking/dragging. This remains unfinished and is not a volume
acceptance result. The original native arrow adjustment is still in use.

IPC version 7 (Shared size 1308) adds held-button state to each pointer event.
Motion coalescing preserves press/held/release ordering; outside presses are
ignored, an existing gesture can release outside the client, and explicit
capture loss or queue saturation produces a cancellation record. The worker
tracks captured buttons to distinguish normal release from unexpected capture
loss. Both game and renderer must be rebuilt together for the version change.
Cross-bitness PC controls tests pass, including drag/release, outside press,
cancellation and queue saturation checks. Mixed-input integration tests pass.
The process-local fixture now accepts `mousedown x y button` / `mouseup x y
button`, in addition to click and motion. These commands never send OS input.

v83: seven captures inspected sequentially, showing original keyboard volume
adjustments, both menus and level 1 movement. v84: both generated captures
inspected sequentially, showing Options over Cerebro and level 1 after W
movement with the IPC7 pair. Both runs were muted; audible response and volume
persistence remain unverified. No changes were staged to !GAME.

Verified native slider trace, retained for follow-up rather than guessed offsets:
- Slider model reference is item+0x84, wrapper vtable 003DC374. It is not a
  CMenuItemModel. The wrapper's +0x10 virtual gets component kind 3.
- At 0017CE0B, that component has vtable 003DC31C, fields +4 actor/reference,
  +8 shared component data. Its +0x14 virtual (00080200) returns the embedded
  animation at component+0x10, vtable 003DC2DC.
- At 0017CE21 the game sends normalized slider value item+0x80 to animation
  vtable+0x30 (00135130); that scales by duration and uses native time seeking.
  This animation component alone does not establish the bar's screen bounds.
- SFX getter/setter callbacks: 0008C9E0 / 0008CA20. Music: 0008CB30 / 0008CB70.
  Native settings singleton accessor 0008C980, object 004A0210. SFX getter/setter
  vtable offsets +0x50/+0x4C; music +0x58/+0x54; +4 refreshes audio settings.
  Original arrow increment at 0044E634 is float 0.1. Preserve native settings
  behavior when implementing absolute mouse seeking.
- Current diagnostic hooks in guard-pc-menu.py are gated by
  XML1_PC_NATIVE_BOUNDS; new component/animation traces are bounded to 8 objects.
  Complete native geometry hit testing, actual setter calls and persistence
  checks before claiming volume dragging works.

### Native slider gestures and geometry investigation (v85-v89)

Added normalized drag state to pc_native_options: full-bar bounds are accepted
through xml1_pc_native_slider_bounds, and xml1_pc_native_slider_value consumes
one pending absolute volume. Bounds must be finite and current-frame, belong to
a visible current-menu sfxvolume/musicvolume item, and have nonzero area. Drag
values clamp to [0,1]. Release, cancellation, menu/item replacement, and focus
loss prevent stale gestures. A focus loss/regain wholly between game frames now
queues cancellation too. Controls tests cover midpoint seeking, both limits,
outside release, subsequent hover, cancellation, focus roundtrip, and stale
geometry. The updated 64-bit/32-bit channel test and mixed-input test pass.

The generated 0017CDE8 hook calls the original native volume setters and refresh
when an absolute value is pending. This hook compiles but is still dormant:
no production geometry producer calls xml1_pc_native_slider_bounds yet. Do not
claim mouse volume control or persistence from the passing synthetic tests.

v85-v89 all reached level 1 after both menu routes; each run produced two native
captures, inspected sequentially (normal Options/Cerebro and level 1 after W).
All were headless/muted and ended at the 150-second watchdog, exit 3. These runs
verify no observed menu/gameplay regression, not audible volume acceptance.
No assets, settings, saves or binaries in !GAME changed.

Authoritative geometry findings for the next implementation step:
- igGroup child list is node+0x1C, verified in 00259DE0. node+0x10 is its parent
  list (0025AAC0 accesses the parent count). Initial v85-v88 tree diagnostics
  followed parents; do not treat those trees as geometry descendants.
- Corrected capture-time tree is work/native-igb-menu-test/slider-tree-v89.json.
  Owned test process memory was read only, during the harness pause at capture
  1, using ReadProcessMemory; no external input or UI operations occurred.
- Wrapper slot +8 -> transform component (+4 node) -> authored igTransform
  vtable 00403958, matrix +0x20. Its child is ravenShaderFx vtable 003E1214,
  also referenced by wrapper slot +0xC. That shader's child is igTimeTransform1_5
  vtable 00404DD0, referenced by the animation component.
- Below it: shared igAttrSet (003E1434), animated igTransform (00403958), another
  igAttrSet, and geometry vtable 003E160C. At v89 capture: geometry 05C3CCA4,
  bounding-volume pointer at +0xC = 05C3CAB0, vertex-related pointer +0x20 =
  05C3A638. These are run-specific pointers, never hardcode them.
- Full model geometry is therefore reachable from the existing native slider
  model without alias routing or renaming assets. Rest/full-volume bounds and
  correct menu projection still need implementation and verification.
- Class metadata can be inspected read-only: vtable+0x50 commonly returns a
  global meta pointer (original machine code A1 <global> C3); meta+0x1C is its
  name pointer. This confirmed the classes above. Traversal must respect the
  actual native types, not infer object size from adjacent allocation contents.
- A late attempt to inspect old menu geometry after leaving the menu failed
  its vtable identity assertion, correctly rejecting a reused address. Only
  capture-time records are suitable for this work. Late attribute additions
  were removed from v88 JSON; they are not geometry evidence.
- Prepared but NOT run: run-native-slider-bounds-v90.py, which records bounds
  and animation references at the capture-time pause. Review before running.
  Current diagnostic CF91 traversal now uses +1C; hook generation is idempotent.

Remaining: feed actual model-derived bounds, exercise native absolute setters,
verify both bars at 720p/1080p including 0/full and dragging outside, and check
native Apply/Cancel/defaults/persistence plus audible behavior. Combined goal
remains open, with the broader parity and human acceptance requirements above.

2026-09-14 follow-up: v90-v92 geometry diagnostics and package audit
- User clarification is recorded in AGENTS.md: preserve normal PKGB format and
  original asset paths; declarations may change to match authored menus.
- Package audit passed for options and options_controller_xbox against the
  private fixture (package-audit-v92.json).
- v90 captured full native model bounds in slider-tree-v90.json. The shared
  igAttrSet bounding volume is an igAABox spanning X +/-76.5 and Z +/-7.
  Correction to the preceding notes: geometry+0x20 is its attribute list;
  vertex arrays belong to the igGeometryAttr1_5 contained in that list.
- First model-bounds projection in v91 FAILED: using the font camera mapped
  both bars to the same zero-height rectangle. No PC SLIDER SET callback fired;
  all six captures were inspected and showed unchanged bars. Direct mouse
  volume adjustment remains unimplemented in practice, despite passing state
  handling tests with synthetic rectangles. Do not stage this as complete.
- v92 logged draw-time camera matrices. Both observed views are identity with
  Z flipped; font orthographic versus scene perspective projection alone does
  not supply the model's missing compositor/world transform. Derive that
  transform from the native render path before retrying; no hardcoded screen
  rectangles or guessed axis substitution.
- Both v92 native captures inspected sequentially: blue Options with Cerebro
  visible, then rendered level-one gameplay after process-local W input.
  The harness exited at its expected watchdog (exit 3); it is stopped. This
  muted test does not verify audio or direct volume interaction.
- No !GAME staging changes. Combined goal remains active and unfinished.

2026-09-14 v93-v94: model draw transform identified in renderer trace
- Extended bounded XML1_PC_NATIVE_BOUNDS diagnostics to include draw-world
  matrices. Prior camera-only tracing omitted this essential transform.
- v93 built and ran but FAILED before gameplay: native DX8 vertical blank
  worker timed out (dx8_replay.h wait_native_vblank, one-second poll deadline),
  leading to Win32 109 in the guest. Preserved v93-worker-errors.log and
  v93-vblank-errors.log. No Application 1000/1001 crash event was found in the
  queried interval. Cause of the raster-status timeout is still unverified.
  Its sole Options capture was inspected; it is not a gameplay pass.
- v94 retry reached level-one movement and ended at watchdog exit 3. Both
  generated captures were inspected sequentially: native blue Options and
  Cerebro, followed by Wolverine in level one. No visible host window/input.
- Native world matrices show XZ-to-XY model rotation, and distinct transforms
  for the shared volume geometry. At menu entry, near-zero animated X scale
  9.4e-06, Z scale .42, world translation (-226.41,35.565,-890.617) for Effects
  and (-226.41,6.56496,-890.617) for Music. Geometry local Z center is 96.75;
  this maps to Effects screen-space world Y 76.2 and Music 47.2. This is actual
  draw evidence, not a screen-coordinate fitting rule for production.
- Loaded pre-camera bounds (v93/94) are X [29.090004,172.910004], Effects Z
  [264.760010,270.640015], Music Z [235.759995,241.639999]. Parent chain includes
  a half-unit translation. The draw path adds a camera/base transform that
  static IGB ancestor traversal does not include. Current font-time world
  is identity; applying it there cannot recover the model draw transform.
- Source leads confirmed from original XBE: native CMenu center getter
  0017EBC0 returns 5771F0 = (256,0,192); 0016E1D0 can return
  571738 = (256,100,192). Menu camera construction at 00183F74 constructs
  (256,-1108,192) plus rotation before calling the camera's +48 method.
  These explain the menu coordinate convention but do not yet prove the
  exact camera currently used for imported model rendering. Do not hardcode
  inferred offsets; consume the actual model camera/compositor transform.
- Display singleton 00194240/001941B0 is 58F2B8, vtable 3E0AB4. Its +5C/+60
  methods are 00193E10/00193E20 returning fields +3C/+40 (both .586667 in this
  mode). +64/+68 return +4C/+50, currently zero. Those are font conversion
  parameters, not the absent 3D model transform.
- No direct mouse slider setter fired or was validated. Existing geometry
  projection remains an unfinished implementation. !GAME unchanged; both
  test processes terminal, broader combined goal remains active.


2026-09-14 v95/v96: resolution and mouse-binding restart acceptance
- v95 used only native Advanced Options to reject a conflicting right-mouse
  Attack assignment, cancel capture, unbind Smash, then assign right mouse to
  Attack and left mouse to Smash. Selected 1280x720 and clicked Apply. The saved
  INI was asserted and the visible restart notice inspected.
- v95's harness mistakenly requested capture IDs 9/10 before 6/7/8. The native
  capture service correctly ignored the later lower IDs. All seven produced
  images were inspected in actual order 1,2,3,4,5,9,10. Its gameplay inputs/log
  are not visual gameplay evidence. It ended at watchdog exit 3. Do not reuse
  that capture sequence without correcting monotonic numbering.
- v96 restarted the unchanged private game from TEMP with no resolution
  environment override. Options and Advanced show the persisted 720p and
  swapped bindings. Process-local W and right mouse reached combat; captures
  5/6 show attacks, a fallen enemy, damage and 7 XP. All six captures inspected
  individually in sequence. No audio acceptance (muted run).
- The native BMPs are 1280 by -720: signed negative height means top-down BMP.
  The test's initial positive-height assertion was wrong, not the output.
  Corrected the checker to use absolute dimensions and verified all six
  existing files plus saved settings without rerunning/replacing captures.
- v96 ended at expected watchdog exit 3. Saved after-test INI separately,
  then restored private pre-v95 settings byte-for-byte: SHA256
  0681867a3481b603c2887a4deb5ac5ddee4537432172eae31603e7356c60916b.
  No !GAME settings, saves, assets, or binaries changed.

Active-device routing implementation
- Found xml1_pc_channel_controller_active had no callers. guest_input.c now
  observes physical controller activity before merging keyboard input.
  Only consumed, focused, non-neutral transitions notify the channel; device
  enumeration, button releases, idle stick drift and unchanged held buttons
  cannot steal keyboard/mouse ownership. Existing gamepad output is unchanged.
- Channel notification now updates sequence on an actual device switch and
  ignores unfocused events. ABI/version remains 7.
- Added integration assertions using fake hardware: enumeration does not
  consume a pending controller press; consumed press selects controller;
  subsequent keyboard input retains ownership over held pad state, release,
  idle drift and an unfocused press. Mixed slots/focus/menu/vibration tests pass.
- Both builds and the cross-bitness controls suite pass. Updated only private
  game/worker binaries after all test processes stopped. Rendered footer
  switching is NOT implemented yet, and this new activity code has unit/
  integration evidence rather than a new native game capture run.
- Slider model projection, wider reference parity, final staging and human
  keyboard/mouse acceptance remain unfinished. TODO 2/3 stay open.


2026-09-14 v97: native Advanced device prompts
- Authored gamevar declarations on the existing desctext1/desctext2 items in
  options_controller_xbox.eng. Original menu paths, PKGB association, styles,
  anchors and controller prompt strings remain intact. Package audit passed.
- The native text getter captures the already-resolved controller glyph text
  before dynamic substitution. Keyboard/mouse uses Backspace Back / Enter Change;
  binding capture uses Esc Cancel binding / Delete Unbind. Controller activity
  restores the original glyph text without hand-authoring glyph encodings.
- Both builds and cross-bitness controls tests passed; hook regeneration was
  checked for idempotence. Original-string lifetime and device transitions have
  adapter assertions. Physical activity routing has the preceding integration
  evidence; this visual run used a process-local device notification.
- Inspected all seven native captures individually in sequence: normal Options,
  keyboard Advanced, original controller glyphs, mouse switching back to keyboard,
  capture-specific prompts, cancelled capture, and level 1 after W movement.
  Cerebro remains visible behind both menus. Watchdog exit 3 was expected.
- This was a muted private-fixture test, not audio or final-stage acceptance.
  !GAME remains unchanged. Direct volume dragging, remaining settings/parity,
  reproducible staging and human keyboard/mouse acceptance are still open.


2026-09-14 v98/v99: native volume model projection
- Read-only snapshot of the private v98 process identifies menu camera 0 at
  manager+BD4, vtable 003DCD1C. Its +AC matrix contains the missing XZ-to-XY
  rotation and live translation (-255.5, -191.500046, -1000.5). The getter/render
  paths 00143830, 001300C0, 00143F43 confirm the native camera state.
- Slider hit bounds now compose that live native camera matrix with the current
  view/projection after walking the original model geometry and instance ancestry.
  No guessed pixel rectangles, fixed camera offsets or resource changes.
- v98 snapshot run: both native captures inspected individually, Options then
  level 1 after movement; expected watchdog exit 3.
- v99: native clicks on Effects and Music now invoke the original settings
  setters, values 0.2417 and 0.7312. Captures 1-4 individually inspected in order:
  initial Options, reduced Effects, changed Music, then level 1 after W movement.
  The bars visibly update. Continuous dragging, audible effect, Apply/Cancel and
  restart persistence remain separate acceptance requirements.
- Optimized game rebuilt; cross-bitness controls and input integration pass.
  Only the private executable was updated; !GAME is unchanged.


2026-09-14 v100: native held volume drag
- Process-local held left mouse dragged Effects through 0.2417 -> 0.7312 -> 1,
  then released outside the bar. Music dragged through 0.7312 -> 0, then released
  outside; later unheld motion caused no setter call and the bar stayed empty.
- All six produced captures inspected individually in sequence: baseline,
  intermediate Effects drag, full Effects, empty Music, unchanged after release,
  and level 1 after W movement. Native setter sequence asserted against the log.
- Muted private test; audible output and saved-volume restart remain unverified.
  No Accept/saveoptions was invoked. The game reloads its prior persisted volumes
  on a fresh launch (v100 baseline also confirms v99 changes were not saved).
- v99 and v100 both ended at expected watchdog exit 3. Private pc-settings.ini remains at baseline hash 0681867a3481b603c2887a4deb5ac5ddee4537432172eae31603e7356c60916b. No player staging files changed.


2026-09-14 v101: native save confirmation discovered
- Accept invokes the original saveoptions command and opens the Xbox Yes/No
  save-to-hard-disk confirmation. The initial harness wrongly assumed Accept
  immediately returned to main menu. Its gameplay assertion failed; this run
  is not a gameplay or confirmed-save acceptance pass.
- All five produced captures inspected individually in sequence: initial
  Options, Effects change, Music change, save confirmation, later Options.
- settings.dat changed, but the subsequent click/Esc sequence did not explicitly
  acknowledge the dialog. A changed signed settings file alone does not prove
  the desired persisted values. v102 handles the confirmation explicitly.
- The failed Python harness left its game process alive. PID 27268 was checked
  directly, a final native capture collected, and the process subsequently
  disappeared at its watchdog; no replacement was started while it was live.
- Private original settings backup: settings-before-volume-v101.dat.
  !GAME and its saves remain unchanged.


2026-09-14 v102: explicit native volume save
- Fresh launch shows the previous v101 volume pair restored in native Options.
  Changed Effects to 0.3777 and Music to 0.6225 through the actual bars.
- Clicked Accept, captured the save dialog, and pressed Enter on highlighted
  Yes. The next capture shows return to the main menu; this is the explicit
  save-confirmation flow missing in the v101 harness.
- All six captures individually inspected in sequence, ending with level 1
  after W movement. This muted run does not establish audible volume behavior.
- v103 will independently verify the new values after restart. The private
  settings.dat is deliberately retained until that check, then restored from
  settings-before-volume-v101.dat. !GAME remains unchanged.

- v102 later exited 4: graphics acknowledgement failed (Win32=109, frame6051).
  Worker log reports D3D8 replay HRESULT 88760868 / D3D8 call failed. Preserved
  v102-worker-errors.log and v102-vblank-errors.log before restarting. This is
  an unresolved renderer failure, not a clean full-run stability pass. The
  prior menu/save/gameplay captures remain evidence of those observed states.


2026-09-14 v103: saved-volume restart evidence
- Fresh process launched from TEMP with the unchanged private executable/data.
  Native Options shows the same Effects/Music bar positions as v102 after its
  changes and explicit Yes confirmation. This verifies rendered volume state
  survives a restart; no absolute numeric getter readback is claimed.
- Backspace returned to the main menu; Begin Story reached level 1 and W moved
  Wolverine. Both produced native captures inspected individually in order.
- Audible effect remains unverified because the run is muted. Explicit Cancel
  semantics and final staged acceptance remain open.
- v103 ended at expected watchdog exit 3. Saved its settings evidence separately, then restored the private pre-test settings.dat byte-for-byte (SHA256 53db16942f652efac56136311225e7fd2e7ac3d6ee834e225e9376b59460abb8). All test processes are terminal.


2026-09-14 v104: native volume Back/Cancel
- Changed both bars without Accept, pressed Backspace, then reopened Options.
  Both bars returned to their original values. settings.dat stayed byte-identical
  to the original backup (53db16942f652efac56136311225e7fd2e7ac3d6ee834e225e9376b59460abb8).
- All six captures inspected individually in sequence: baseline, Effects change,
  Music change, main menu after Back, restored Options, level 1 after movement.
  Expected watchdog exit 3. This verifies native Back discards these changes.
- No assets/binaries or !GAME data changed. Audio response is next, using the
  existing process-local DSP sample capture before final output muting.


2026-09-14 v105: audio response failure found
- Captured native DSP samples using XML1_CAPTURE_DSP_PCM=1. Final output stayed
  muted; this is the game's own pre-mute PCM, not host loopback recording.
- Effects was held at zero. Music was set full -> zero -> full, with eight-second
  waits between changes. Native captures show each correct bar state.
- Four-second interior PCM windows at 38-42 / 47-51 / 56-60 sample seconds have
  RMS 2476.39 / 2477.48 / 2462.16. The zero-music interval remains comparable
  in level, so visible/persisted bars do NOT establish functional audio volume.
  Results/events/PCM/CSV retained as volume-audio-v105* in the private fixture.
- All five captures inspected individually in sequence, including level 1 after
  Back and W movement. Expected watchdog exit 3. No saved settings changes.
- Source trace: settings vtable 003CF9C4 +4 calls 0008BED0, forwarding SFX/music
  getters to native audio-manager vtable 003DD1A4 +14/+20. Those resolve to
  0014F6D0 / 0014F730 and store manager+ B9E8 / B9E4. Manager singleton
  00151EF0 returns 0055ADF8. Music path 0014FB58 multiplies B9E4 before passing
  byte volumes to 00191E80. Next verify these live manager values and downstream
  voice updates during full/zero/full; do not add a master-output workaround.

2026-09-14 v106/v107: native audio-manager and voice-volume isolation
- Read-only snapshots of the targeted private game confirm manager 0055ADF8
  receives Music 1 -> 0 -> 1 while Effects remains 0. Each snapshot records
  captured PCM sample-frame count, avoiding wall-clock alignment assumptions.
- Four-second PCM windows ending one second before captures 2/3/4 yield RMS
  2481.34 / 2460.61 / 2453.58 in v106 and 2481.09 / 2456.80 / 2454.22 in v107.
  Zero Music still does not silence output. Analyses and snapshots retained
  as volume-audio-v106/v107-analysis.json and audio-manager-v106/v107-*.json.
- v107 enables existing XML1_TRACE_VOICE_MIX diagnostics. No voice-0-bin
  attenuation changes occur between any consecutive slider setter events.
  This diagnostic tracks the first bin only; it does not establish that every
  hardware register stayed unchanged. Later transition/level voice updates do occur.
- Original arrow callback 0008CB70 uses the same settings +54 setter and +4
  refresh as the absolute mouse path. Native stream update 0014FBE0 gates a
  volume refresh on manager+B9EC, and 0014FAE0 applies B9E4 to stream volumes.
  Compare native arrow behavior before attributing this to mouse handling or
  modifying the original audio engine. No speculative audio workaround applied.
- Both runs reached level 1 after Back and W movement. All five captures from
  each run inspected individually in sequence. Both expected watchdog exit 3;
  all processes terminal. No !GAME or executable changes in these diagnostics.

2026-09-14 v108: original arrow controls reproduce volume failure
- Used repeated left/right presses within the process-local game harness on
  native Music Volume, rather than the absolute mouse setter. Native manager
  snapshots confirm 1 -> 0 -> 1 with Effects fixed at zero.
- Four-second interior PCM windows show RMS 2483.60 / 2410.37 / 2485.20.
  Thus the failure is not confined to absolute mouse dragging. The correct
  downstream refresh/stream behavior still needs diagnosis; no engine/audio
  workaround was authored in v106-v108.
- Full PKGB audit passes both options and options_controller_xbox with normal
  package format, original paths and serialized IGB model declarations.
- Back restores the settings baseline. settings.dat SHA256 remains
  53db16942f652efac56136311225e7fd2e7ac3d6ee834e225e9376b59460abb8.
- All five native captures inspected individually in sequence, including
  level 1 following menu exit and W movement. !GAME remains unchanged.
- v108 ended at expected watchdog exit 3; PCM/CSV archived and test process terminal.


2026-09-14 v109: Accept applies audio settings successfully
- XBE disassembly confirms 0014F6D0/0014F730 setters and 0014FBE0 stream-refresh
  gating match the generated code. No missing setter instruction was found.
- Set Effects=0 and Music=0, selected native Accept and confirmed Yes. Live
  manager snapshots remain zero in the main menu and level 1.
- DSP capture distinguishes unsaved preview from accepted settings: four-second
  RMS before Accept is 2454.35; after Accept in main menu is exactly 0, and in
  level 1 is exactly 0 (peak also 0 in both). This contradicts a blanket claim
  that the volume settings do not work: the observed defect is live preview.
- All five native captures inspected individually in order, including level 1
  and W movement. Expected watchdog exit 3, PCM archived. Private saved settings
  archived as settings-zero-after-v109.dat and original backup restored.
- No audio engine modification was needed to obtain this accepted-settings
  result. Independent Music/Effects and final staging acceptance still pending.

2026-09-14 v110: independent accepted audio categories
- Accepted Music=1/Effects=0: main-menu four-second PCM RMS 3741.03, peak 18701.
- Accepted Music=0/Effects=1: settled main-menu PCM is digital silence; level 1
  after W movement and mouse attacks has RMS 5358.19, peak 32768. These results
  establish independent accepted music/effects behavior in this fixture, combined
  with the both-zero gameplay silence in v109. They are not full audio-quality
  or clipping acceptance; the measured gameplay peak reaches the int16 limit.
- All five captures inspected individually in order, including level 1 after
  mouse attack inputs. Expected watchdog exit 3. Saved settings evidence archived
  and baseline restored byte-for-byte. No !GAME writes or audio-engine changes.


2026-09-14 v111: device-sensitive Back prompt in normal Options
- Extended author-menu-prompts.py to author the existing desctext1 item in
  options.eng as pcnative_prompt_options_back. No new resource or PKGB path.
- Normal Options can render its prompt independently of the Advanced settings
  transaction. It shows [Backspace] Back for keyboard/mouse, preserves the
  captured original native text for controller, and cannot claim Advanced's
  menu ownership. Item reuse still clears the original/cached text.
- Cross-bitness controls test covers device switches with no Advanced transaction;
  input integration test passes. Both build targets pass; package audit passes.
- All six native captures inspected individually in sequence: keyboard Options,
  controller Options, mouse Options, Advanced, normal Options after Cancel, then
  level 1 after Back and W movement. The new key label fits the existing footer.
- Only the private test game and options.eng are updated. !GAME is unchanged;
  remaining parity, staged verification and human acceptance are still open.
- v111 ended at expected watchdog exit 3. Test process terminal; saved-settings baseline hash unchanged.

2026-09-14: player-profile storage and native selector implementation
- Xml1PcSettings now stores primary/secondary keyboard/mouse bindings for four
  players. Runtime action checks and mouse-drag detection use keyboard_player's
  profile. Editing selection is a separate model field and never reassigns the
  physical keyboard. Native pcnative_profile_1 through _4 select the draft profile.
- INI retains [Bindings]/[AlternateBindings] for player 1 and adds matching
  .Player2/.Player3/.Player4 sections. Legacy files with one binding profile copy
  that profile to all players, preserving existing keyboard-player assignments.
  Saves serialize all four; validation/conflicts remain local to each player.
- Input shared-memory ABI is version 8, settings size 964, shared block 2004.
  Game and DX8 worker must be deployed together. Both are built/copied privately.
- Tests pass for legacy migration, distinct profile edits, cross-profile reuse,
  same-profile conflict rejection, Apply/reload, Cancel, runtime profile selection,
  and a distinct fourth profile read by the Win32 helper from the 64-bit producer.
  Mixed-input integration confirms player 2 uses its own T movement binding;
  player 1's W does not move it. Existing focus/menu/device/vibration checks pass.
- author-menu-player-tabs.py authors four text selectors above the native binding
  table, moves existing branding above them, and connects native navigation and
  commands. This is initial selection presentation, not final XML2 tab artwork.
  Original IGB filename, paths and PKGB associations are retained; audit passes.
- Controller button/axis rebinding, XML2 device list and presets, and full player
  tab presentation/acceptance remain open. Keyboard profiles alone do not satisfy
  all of those requirements. !GAME remains unchanged.

2026-09-14 v112: native profile selection and Cancel
- All six native captures inspected individually in sequence. Player 2's draft
  Forward=T remains distinct from player 1's W while switching between them;
  editing selection leaves keyboard-player assignment at 1. Cancel discards the
  draft without modifying pc-settings.ini.
- Returned through normal Options to level 1 and moved with W. The gameplay
  capture shows Wolverine, scene geometry, textures and HUD. This is a targeted
  menu/input regression check, not full gameplay or final presentation acceptance.
- Expected watchdog exit 3; both test processes ended. !GAME remains unchanged.

2026-09-14 v113/v114: native player-profile Apply and restart
- v113 set player 3 Forward=T and player 4 Forward=Y through the native
  Advanced menu, selected Apply, and checked the saved profile sections.
  Player 1 remained W and the keyboard assignment remained player 1.
- v114 restarted the private game and visually confirmed T/Y under the matching
  player selectors, plus W under player 1. Exiting via Cancel preserved the
  complete applied INI byte-for-byte. Baseline private INI restored afterward.
- All six v113 and five v114 captures inspected individually in order. Both
  runs returned from menus into level 1 and exercised W movement, with scene
  geometry, textures, Wolverine and HUD visible. Expected watchdog exit 3 in
  each run. No !GAME files changed.
- Presentation issue remains: footer sometimes returns to controller glyphs
  after mouse profile selection/Apply. This is reproduced in v113 capture 5
  and v114 captures 3/4. The process-local PC test mode disables physical
  controller polling, so physical controller activity is not an established
  explanation. Investigate native text refresh/caching and channel state.
- These checks establish independent native profile persistence, not finished
  tab artwork, controller rebinding, multiplayer gameplay or human acceptance.

2026-09-14 v115: native prompt refresh regression fixed
- The PC string update ran before native CMenuItemText::Update completed, and
  its desired-value cache did not observe the actual interned string handle.
  Native refresh could replace a keyboard prompt while the cached value stayed
  unchanged. Moved PC text application to the verified 0017D78E return boundary
  after native gamevar refresh. NativeItem tracks the actual text handle and
  invalidates its cache when that handle changes. No resource paths changed.
- Added a regression test for native text replacement with unchanged desired
  keyboard text, stable handles avoiding repeated updates, and controller switch.
  Both-bitness controls tests and mixed-input integration pass. Hook generation
  is idempotent and installs exactly one text update after the native refresh.
- All eight v115 native captures inspected individually in sequence: normal
  Options, Advanced, mouse-selected player 3, mouse-selected player 4, explicit
  process-local controller activity, mouse activity, main menu, and level 1
  after W movement. Keyboard prompts remain in captures 3/4 where v114 failed;
  controller glyphs appear in 5 and keyboard prompts return in 6. Live Cerebro
  remains behind the menus. Expected watchdog exit 3; test process terminal.
- Private executable updated; !GAME unchanged. Player tab artwork, remaining
  reference features, final staging, and human acceptance remain unfinished.

2026-09-14 v116: native tab navigation and focus authoring
- Four focus anchors and matching native model items added inside the copied
  x2m_options IGB/menu. Left/right neighbors wrap across all four players.
- Seven captures inspected individually: Options, Advanced, mouse selection of
  player 3, keyboard Left+Enter selecting 2, Right twice+Enter selecting 4,
  Right+Enter wrapping to 1, and level 1 after W. Expected watchdog exit 3.
- Functional navigation passed, but the initial m_options_view_select highlight
  has a label/value gap and does not frame the whole tab label. That presentation
  is rejected; v117 tests the existing m_pda_option_focus button art instead.
- PKGB audit passes. No !GAME or user settings changes.

2026-09-14 v117: copied button artwork for profile focus
- Replaced the split option-row focus with package-declared
  ui/models/m_pda_option_focus, the copied/recolored XML2 button highlight.
  Its native IGB anchor scales it to a complete player-label highlight.
- All seven native captures inspected individually in sequence. Mouse selects
  player 3; keyboard Left+Enter selects 2, Right twice+Enter selects 4, and
  Right+Enter wraps to 1. Each highlighted label fits, without the previous
  split gap or stray vertical bar. Keyboard footer labels remain correct.
- Returned through the menus into level 1 and moved with W. Expected watchdog
  exit 3. Package audit passes. The source authoring script also records source,
  output, menu and package hashes and the original focus-model path.
- This establishes native focus/navigation for the four profiles. Full XML2
  tab-strip framing, controller configuration/device list/presets, remaining
  setting acceptance, final staging and human acceptance remain open.
- No !GAME changes. Private pc-settings.ini baseline remains unchanged.

2026-09-14: XML2 preset reference and adapted implementation
- Read-only executable inspection: C:/Games/X-Men Legends II/XMen2.exe, SHA256
  146cd9c316edb57a267cd73753a7ce9af647e52aab750d449c6b278fb4a1669b. Defaults 1/2/3 buttons at
  0061F177/0061F230/0061F2E9 register callback 006188C0 with preset indices 0/1/2.
  The callback selects tables at 006E9918 + index * 1848 hex, 42 records of
  94 hex bytes. Each record has a 40-byte action name and keyboard pair at
  offsets 30/34 hex. Raw reference saved locally as xml2-default-presets-reference.json.
- Preset 1 uses Num4/Num6 attacks, E use, Num5 powers, I/K/J/L camera.
  Preset 2 uses J/K attacks, H use, Ctrl or Shift powers, Home/End/Delete/PgDn
  camera, Z walk. Preset 3 uses Q/E attacks, R use, Num5 powers, numpad hero
  selection, arrow camera and X for the existing XML1 ally action. All use WASD.
- Explicit XML1 adaptations: P/O retain health/energy actions; left/right mouse
  remain attack/smash; V and middle mouse remain camera drag (preset 2's separate
  right-Ctrl drag is not reproduced). Enter remains reserved for menu acceptance.
  XML2-only actions beyond the existing XML1 action set are not fabricated.
- xml1_pc_settings_preset replaces one profile's primary/secondary bindings,
  leaving other profiles and PC options untouched. Model selection is a draft
  operation supporting existing Apply/Cancel. Three pcnative_preset_N tokens and
  native menu buttons use the copied IGB/package paths. Global Defaults is
  relabeled Reset all settings to distinguish it from player control presets.
- Both-bitness tests pass for all three valid layouts, invalid index rejection,
  selected-profile isolation, preserved mouse/display settings and Cancel.
  Input integration and package audit pass.

2026-09-14 v118: native preset selection, Apply and level 1
- All seven native captures inspected individually in sequence: normal Options,
  Advanced, Defaults 2, Defaults 3, Apply, level 1 after W movement, and level 1
  after four Q attack pulses. Menus retain live Cerebro and copied blue artwork;
  Defaults 1/2/3 labels and focus highlights fit at 1080p.
- Apply persisted player 1 Attack=Q, Smash=E, HeroUp=Num8 and CameraUp=Up.
  Assertions verified player 2 Attack=Num4, 1920 width and mouse sensitivity 125
  remained unchanged. Applied INI archived as pc-settings-applied-v118.ini.
- Level 1 capture shows Wolverine, nearby enemies, geometry, textures and HUD.
  Input log packets 13/15/17/19 show A=255 for the four Q pulses, with neutral
  releases between. This establishes the mapped attack input reaching gameplay;
  it does not establish enemy damage or a complete combat acceptance test.
- Expected watchdog exit 3, process confirmed terminated. Private baseline INI
  restored byte-for-byte (SHA256 0681867A3481B603C2887A4DEB5AC5DDEE4537432172EAE31603E7356C60916B).
  No !GAME files changed. Restart coverage and final staged acceptance remain open.

2026-09-15 v119: Advanced Space shortcut; transition failure remains open
- Normal Options' existing label_click02 item now uses a device-sensitive
  pcnative_prompt_options_advanced value. Keyboard text is [Space] Advanced Options;
  controller activity restores the original text. Names, paths and PKGB unchanged.
- A fresh Space press queues that item's original native usecmd through the
  existing activation path. Held keys across menu/focus transitions, repeats,
  disabled items and items belonging to another menu cannot activate it.
  Both-bitness controls tests and package audit pass.
- All three produced captures inspected individually: Options with the new
  footer, Advanced opened by Space, and Cancel returning to Options. Live Cerebro
  and copied blue artwork remain visible; the longer footer fits at 1080p.
- Gameplay smoke FAILED: after newgame, no nyc1_1_1.nav load and rendering stopped.
  Watchdog at 150 seconds terminated the game. No gameplay captures were produced.
  The main guest stack starts at 00304D4E in the loop calling 00305300/003052F0
  and polling 003072D0 until status 3 or 4. Deeper stack includes movie setup;
  this is evidence of a stalled movie transition, not proof the shortcut caused it.
  Full log and stack: work/native-igb-menu-test/native-v119.log. Game and worker
  confirmed terminated before the unchanged-build v120 retry.
- Private menu/executable updated only; !GAME unchanged. No full acceptance claim.

2026-09-15 v120: unchanged-build shortcut retry reaches gameplay
- Same native menu/executable and scripted sequence as v119. All five captures
  inspected individually in order: Options, Space opening Advanced, Cancel back
  to Options, level 1 after W, and level 1 after four Num4 attack pulses.
- Footer fits at 1080p, live Cerebro remains behind both menus, and gameplay
  shows Wolverine, enemies, scene geometry/textures and HUD. Log confirms
  nyc1_1_1.nav loading and four A=255 attack pulses with releases between.
- Expected watchdog exit 3. Private INI baseline hash unchanged. No !GAME writes.
  The preceding v119 transition stall is intermittent evidence and remains open;
  this retry does not resolve it or establish complete gameplay/audio acceptance.

2026-09-15 v121/v123: 720p to 1080p Apply with Defaults 2
- v121 was invalid test setup: Python ConfigParser lowercased the INI keys and
  startup rejected them as unknown. No menu/gameplay captures were produced.
  Corrected only the private setup, preserving the baseline's key spelling and
  replacing Width/Height values. No parser or game-code change was made.
- v123 started at 720p with no resolution environment override. Native Options
  -> Space -> Advanced; selected Defaults 2, changed resolution to 1080p, Apply.
  Assertions confirm saved 1920x1080, Attack=J, Smash=K, unchanged player 2
  Attack=Num4 and mouse sensitivity 125. Applied INI archived locally.
- All five native captures inspected individually: Options, Advanced at 720p,
  applied values with restart notice, level 1 after W, and level 1 after J attack
  pulses. Every BMP is actually 1280x720; changing the saved resolution does not
  incorrectly resize the running renderer before restart. Footer, presets,
  binding cells and restart notice remain within the native panels.
- Scene geometry, textures, Wolverine, nearby enemies and HUD are present;
  logs record four A=255 attack pulses. Expected watchdog exit 3.
  Private INI intentionally retained for v124 restart; baseline backup remains
  pc-settings-before-v121.ini. !GAME unchanged. Restart verification pending.

2026-09-15 v124: saved 1080p and Defaults 2 restart verified
- Started the unchanged private executable after v123 terminated, without a
  resolution environment override. All five BMPs are actually 1920x1080.
- Every capture inspected individually in order: Options, Advanced showing
  1920x1080 and J/K bindings, Cancel returning to Options, level 1 after W,
  level 1 after four J attacks. Scene geometry/textures, Wolverine, enemies and
  HUD are visible. Input log confirms the four attack pulses and releases.
- Complete applied INI remained byte-for-byte identical through this restart
  and Cancel. Harness restored the original private baseline after expected
  watchdog exit 3. No !GAME files changed.
- Together v123/v124 verify reverse resolution Apply/restart and preset 2
  persistence through actual menus and gameplay. Final staging, remaining
  reference parity and human acceptance are still unfinished. The v119 movie
  transition stall remains unresolved despite these successful runs.
- Player readme source now explains Space-to-Advanced, per-player presets,
  Keyboard player assignment and draft/reset behavior; not yet staged.

2026-09-15 v125: separate native display labels/values
- Added author-menu-display-values.py. It clones two serialized item anchors
  inside the copied x2m_options IGB and populates the existing Advanced menu with
  separate Resolution/FSAA labels and right-aligned values, following XML2's
  label/value structure. Original filenames and PKGB association remain intact.
  Values retain the same native commands, focus model and navigation neighbors.
- Added resolution_value/fsaa_value native text variables; both-bitness tests
  verify values following draft changes. Package audit passes.
- All six v125 captures inspected individually, including level 1 after movement
  and attacks. Normal Options remains intact; expected watchdog exit 3.
- Initial placement is not accepted: the resolution value touches the focus
  divider, and test clicks at x720 fall beyond the rendered value text. No value
  click success claimed. v126 shifts only the new anchors from x154 to x164;
  gameplay and click verification pending. !GAME unchanged.

2026-09-15 v126: display value alignment and clicks verified
- New value anchors at x164 leave a visible gap after the copied focus divider;
  Resolution/FSAA labels stay on the left, values on the right. Both value fields
  are selectable with the mouse and execute their existing native commands.
- All six native captures inspected individually: normal Options, Advanced,
  resolution value clicked to 1280x720, FSAA value clicked to 2x, level 1 after W,
  and level 1 after four Num4 attacks. Live Cerebro, game scene/textures and HUD
  remain visible. No Apply in this test; Cancel preserves baseline settings.
- Native command assertions pass, as does the full package association audit.
  Expected watchdog exit 3, game/worker terminated. Private INI baseline SHA256
  remains 0681867A3481B603C2887A4DEB5AC5DDEE4537432172EAE31603E7356C60916B.
- Only private menu assets/executable changed. Unused display-bar artwork,
  player-tab framing, remaining feature parity and final !GAME staging remain open.

2026-09-15: shared display-track artwork audit
- Advanced already hides fx_vol/music_vol; those anchors reference the animated
  m_options_sound_select model. The surviving tracks therefore are not fixed by
  hiding those menu items again. Both menus' options_screen anchor references
  the same m_options_screen resource, so a destructive edit there could damage
  normal Options' volume presentation.
- Added read-only inspect-menu-model.py and generated
  work/native-igb-menu-test/options-screen-geometry.json. It records the source
  SHA256, all 12 geometry nodes with bounds/attribute references, and all three
  transforms/child lists. Source hash is
  094193793dd645c5ebde2b541f223269be2713060fb9517554d7c104b3c64b73.
- No separate named slider-track transform exists in this model: transforms are
  details_screen01, details_hinge and Object01. Panel geometry spans the screen;
  the report alone does not identify individual track triangles or prove whether
  their appearance is in vertex geometry, textures, or both. Isolate that before
  authoring independent native visibility. Do not globally remove panel geometry
  or invent alternate resource paths to bypass the shared-resource relationship.
- No assets/binaries staged or new game run during this read-only audit. The
  accepted private fixture remains v126; TODO 2/3 and overall goal stay open.

2026-09-15: gray track centers isolated from the panel mesh
- The gray centers are untextured vertex-colored geometry: attribute 90, vertex
  array 187, positions block 135, colors block 136, original vertices 20-27 with
  RGBA (64,64,64,255). Two horizontal quads occupy z85.703-93.703 and
  z113.703-121.703 in the model's local coordinates. Texture editing is not
  required for these centers; their blue end decorations are a separate issue.
- Added author-menu-track-split.py. It recognizes the untextured eight-vertex
  group, decodes triangle-strip winding, rejects mixed track/frame triangles,
  and separates exactly four gray-center triangles. The panel retains the other
  34 nondegenerate triangles of that attribute as an equivalent triangle list.
  Other vertex arrays/geometry are untouched. Source bytes are asserted unchanged;
  output is reread to verify primitive mode, count and index bytes.
- Intermediate outputs only: work/native-igb-menu-test/track-split-intermediate/
  ui/models/m_options_screen.igb and m_options_screen.tracks.json. The JSON stores
  the extracted positions/colors/triangles and source/output hashes for lossless
  reattachment. These are not installed in either the private game or !GAME.
- Required next step: reattach the centers as independently controlled geometry
  in the native layout, preserve normal Options tracks, and handle the separate
  end decorations. Runtime and visual acceptance remain pending; do not stage
  the intermediate panel by itself. Current playable fixture is still v126.

2026-09-15 v127/v128: track reattachment experiments rejected
- Added author-menu-track-anchors.py to transfer the four isolated gray-center
  triangles into a native pc_volume_tracks anchor in the original x2m_options
  IGB. Original model/layout paths and both package associations are retained.
- Both versions pass the package audit and reach level 1 with movement/attack
  input. All six captures from each run were inspected individually in order.
- Visual acceptance FAIL: normal Options loses its gray track centers and the
  shared panel loses part of its metallic outer frame. Advanced also loses that
  frame. Keeping/updating the primitive-length array in v128 did not resolve it.
  These versions must not be staged. This is asset authoring failure, not a
  package/path mismatch. !GAME remains unchanged.
- Next experiment keeps the original triangle-strip primitive with degenerate
  connectors. Its decoded nondegenerate triangles are asserted equal to the
  original selected frame/track triangles, including winding. No runtime fix.

2026-09-15 v129: panel strip restored; track anchor still unaccepted
- Kept original primitive type 4 and one updated primitive-length entry. Separate
  triangles use degenerate connectors, with an exact decoded-triangle/winding
  assertion. This restores the metallic Options panel border in native captures.
- Gray track centers still fail to appear in normal Options. Reattachment remains
  unfinished; the paired output is not accepted. Advanced hides the new anchor,
  but that alone cannot establish working visibility when normal Options is blank.
- All six captures inspected individually: Options, Advanced, changed resolution,
  changed FSAA, level 1 after movement, level 1 after four attack pulses. Cerebro,
  level geometry/textures and HUD visible. Package association audit passes.
- Transform evidence for next diagnosis: serialized options_screen translation
  (103,-2,-160); resulting pc_volume_tracks translation (-49,-12,-204.703),
  X scale -1. Existing native fx_vol/music_vol anchors have translations
  (101.5,-120,268.2)/(101.5,-120,239.2). Check native model attachment/coordinate
  handling before changing more geometry; do not infer direct anchor placement
  from the serialized options_screen matrix alone.
- v129 ended with expected watchdog exit 3 and input assertions passed. Restored
  all four private experimental assets byte-for-byte from before-tracks-v127
  (accepted v126). Post-restore package audit passes; private pc-settings.ini
  hash remains 0681867A3481B603C2887A4DEB5AC5DDEE4537432172EAE31603E7356C60916B.
  No !GAME changes. Goal and TODO 2/3 remain open.

2026-09-15 v130/v131: native volume-model track authoring
- v130 confirms that sharing the panel opening sequence alone does not render
  embedded track geometry as an independent MENU_ITEM_MODEL anchor. Rejected.
  All six captures inspected; actual level 1 reached, watchdog exit 3.
- Serialized options_screen is its off-screen pose. Its native animation ends
  at (103,-2,195), with a preceding overshoot to z200. Directly composing its
  original z-160 matrix was not a valid final placement calculation.
- Added menu_igb_graph.py and author-menu-volume-tracks.py. The latter moves one
  copied gray quad into the existing m_options_sound_select IGB as a static
  sibling of the animated fill beneath its original scene root. Both original
  volume anchors load it; no new resource paths, package declarations or runtime
  changes. Music anchor spacing now matches the source quads' 28-unit separation.
- v131 Options shows both gray tracks and the metallic frame. Advanced has no
  gray tracks. All six captures inspected individually, including changed
  resolution/FSAA and level 1 movement/attacks. Package audit passes. Native
  volume interaction regression is next; this is not final staging acceptance.
- Blue end decorations are separately identified in original panel attribute111,
  vertices49-64. They remain embedded in the panel and visible in Advanced.
  Finish their asset association, reference display presentation and the remaining
  goal requirements before claiming full menu parity. !GAME unchanged.

2026-09-15 v132: volume interaction and reproducibility
- All five authored menu/model files reproduce byte-for-byte from the preserved
  volume-input-v131 baseline using author-menu-volume-tracks.py. Reread checks
  verify the original animated fill and new nonanimated track are siblings.
- All ten native captures inspected individually, through actual level 1.
  Near-zero effects (0.0024), midpoint effects/music (0.4865) visibly change the
  fill while the gray track remains full width. The x750 endpoint click lies
  outside the selectable fill; no setter fired, so the four-setter assertion
  correctly FAILED. No maximum-volume acceptance from v132.
- Game itself terminated normally at watchdog exit 3. v133 uses the supported
  drag beyond the endpoint and release sequence to test clamping to 1.0.
  This changes the test input only, not game code or authored assets.
- Native settings.dat remains baseline SHA256
  53DB16942F652EFAC56136311225E7FD2E7AC3D6EE834E225E9376B59460ABB8.
  The private PC settings baseline is unchanged too. No settings were accepted.
- Read-only track-endcaps-audit-v133.json identifies eight blue endcap triangles
  isolated from the other 45 triangles in attribute111; no mixed triangles.
  This evidence supports moving them with their corresponding tracks next.

2026-09-15 v133: static volume-track attachment accepted in private fixture
- Native effects setter reached 0.0024, 0.4865 and exactly 1.0000 through a drag
  past the right endpoint; release retained full fill. Music midpoint reached
  0.4865. Track width stayed constant across these values, confirming the new
  static sibling is not being scaled by the fill animation.
- All ten captures inspected individually in order: five normal Options states,
  Advanced, changed resolution, changed FSAA, level 1 after W and after four
  Num4 attacks. Frame, Cerebro, level textures/geometry and HUD are present.
- Both display command assertions and native volume assertions pass. Expected
  watchdog exit 3; test process terminal. Post-run package audit passes.
  Native settings.dat and pc-settings.ini retain their baseline hashes above.
- Current private assets are volume-tracks-v131 (byte-identical repro-v132),
  with the unchanged v125 executable/worker. Do not restore the old shared gray
  panel tracks over this accepted step. No !GAME files changed. TODO 2/3 and
  full goal remain open: endcaps/display art, other parity and final staging/
  gameplay/input acceptance remain required. Muted tests do not verify audio.

2026-09-15 v134/v135: complete volume-track geometry and 720p regression
- Moved the copied blue endcap triangles into the same existing volume model
  as the static gray tracks. Normal Options retains complete bars; Advanced
  hides their entire geometry. Original resource names, PKGB associations and
  declarations remain unchanged for this asset revision.
- The author checks eight isolated endcap triangles and 45 retained panel
  triangles, preserving native strip primitives and winding. Reauthoring all
  five files into volume-tracks-repro-v135 matches volume-tracks-v134 byte for
  byte. Current private assets are v134; executable/worker remain v125.
- v134 at 1080p and v135 at 720p passed four native volume setters, including
  maximum drag clamping, plus resolution/FSAA draft changes. All ten captures
  from each run inspected separately in order, including actual level 1
  movement and attacks. Cerebro and panel geometry are present in both menus.
  Both runs terminated with expected watchdog exit 3; no test process remains.
- Package audits pass and both saved-settings hashes retain the v133 baseline.
  These muted runs do not establish audio or full gameplay acceptance.
- !GAME unchanged. TODO 2/3 remain open: controller binding/device configuration,
  reference tab/preset/display presentation, remaining option behavior and
  persistence, final staging, and human keyboard/mouse acceptance are pending.

2026-09-15 v136/v137: native game settings save/restart acceptance
- v136 clicked the six native Options controls, changing combat music On->Off,
  angle Normal->Steep, cycle/follow On->Off, subtitles On->Off, vibration On->Off.
  Capture 2 shows all six changed values. Accept opened the original save
  confirmation; Enter accepted Yes and returned to the main menu.
- Native settings.dat changed from SHA256 53db16942f652efac56136311225e7fd2e7ac3d6ee834e225e9376b59460abb8
  to f5b7b3a73cc4dc4e1cdef392346bc787fb9416a0d536be9979ef0913a62c5038.
  The private settings-audit-v136.json records the byte differences; file change
  alone is not used as persistence proof.
- A completely new v137 game process loaded those same six values in Options.
  Both runs then reached actual level-one gameplay after W input; the Steep
  camera is visibly more overhead than the prior Normal captures. All five
  v136 and both v137 native captures inspected individually in order.
- Both processes ended with expected watchdog exit 3. v137 left the applied
  settings bytes unchanged. Restored the pre-v136 private settings.dat exactly
  after process termination; retained applied bytes separately as test evidence.
- No code/assets or !GAME changes. This proves native mouse editing, save flow
  and restart persistence for these six values. It does not prove combat-music
  behavior, subtitle suppression during dialogue, physical vibration, camera
  cycle/follow semantics, Close angle, or cancellation. Those checks and the
  broader TODO 2/3 requirements remain open. Runs were muted.

2026-09-15 v138: physical controller remapping foundation
- Settings now carry independent primary/alternate controller bindings for each
  game player. Explicit source codes cover eight pressure buttons, eight digital
  buttons and both directions of all four stick axes. Existing INIs receive
  unchanged native controller defaults; keyboard profile migration is retained.
  Saved ControllerBindings/AlternateControllerBindings sections use the same
  .Player2/.Player3/.Player4 suffix convention as keyboard profiles.
- Added validation/conflicts and transactional controller binding edits to the
  options model. The native editor and physical capture have not been wired yet.
  Mouse-only RotateCamera cannot receive controller bindings; sticks already
  provide camera actions. Walk and quick-power chords are supported by mapping.
- guest_input remaps physical state after slot routing and activity detection,
  before keyboard merging. A native-menu snapshot flag bypasses remapping in
  menus. Capture and focus loss still suppress output. Unassigned right-thumb
  click and reserved bits survive defaults; a bound right-thumb click is consumed.
- ABI 9: Settings 1892 bytes, Shared 2936 bytes. Both executables rebuilt and
  staged together in the private fixture; old pair retained in binaries-before-v138.
  Do not mix this game with an earlier worker. Current assets remain v134.
- Tests pass: all 256 pressure values across four default profiles, asymmetric
  axis endpoints, signed axis swaps, axis-to-button/button-to-axis conversion,
  per-player swaps, quick-power chords, conflicts, Apply/load/Cancel, native-menu
  bypass and 64/32-bit IPC. Guest input integration proves remapping after physical
  slot routing, unchanged other player, native menu bypass and vibration routing.
  Tests use in-process fake physical providers, never host input injection.
- v138 native run inspected all six captures individually in order: Options,
  Advanced, changed resolution/FSAA drafts, actual level 1 after W and Num4 attacks.
  Cerebro/frame/scene/HUD remain present. Expected watchdog exit 3 and command
  assertions pass. This is a keyboard regression, not controller-remap gameplay
  acceptance. Package audit passes; saved native/PC settings keep baseline hashes.
- !GAME unchanged. Controller editor, capture/device list, remapped gameplay,
  remaining parity and final staging/human acceptance still prevent completion.

2026-09-15 v139: controller capture and native binding-table selector
- Added raw pad source classification and capture before remapping/keyboard
  merge. Capture waits for the selected player's neutral state, uses separate
  activation/release thresholds, and requires release between attempts. Other
  players and connection-only polls cannot bind. Focus loss/disconnection discard
  pending results and require neutral again. Capture suppresses guest input.
- Native binding cells now switch between keyboard/mouse and controller primary/
  alternate mappings. Controller capture supports buttons and signed stick axes;
  Escape cancels, Delete unbinds, conflicts retain capture for another attempt.
  The controller preset path resets only that player's controller bindings to
  the native defaults; there are not three distinct controller layouts yet.
- author-menu-binding-device.py adds a selector/focus anchor within the existing
  copied x2m_options IGB and options_controller_xbox.eng, preserving their paths
  and PKGB associations. This switches binding type, not physical device identity;
  a connected-device list and device-aware messaging are still missing.
- ABI 10: Settings stays 1892 bytes; Shared becomes 2948. Both private binaries
  rebuilt together. Prior pair/assets saved under before-v139. Asset output is
  binding-device-v139 atop v134 tracks. !GAME remains unchanged.
- Boundary/unit/native-adapter tests pass for entry-button release, other-player
  isolation, axis thresholds, held-repeat rejection, focus/disconnect recovery,
  raw-before-remapped capture, enum-poll isolation, native captured label updates,
  Escape/Delete, and cross-bitness IPC. No desktop input was generated.
- v139 inspected all eight captures individually: normal Options, keyboard table,
  controller table, capture prompt, unbound cell, keyboard table again, level 1
  movement and attacks. Selector/unbind command assertions pass; watchdog exit 3.
  The long instruction overflowed the panel, so v139 presentation is not accepted.
  Shortened the instruction in source; v140 verifies it plus native capture Cancel.
- Full in-game assignment of a physical source and remapped gameplay remain
  unverified. The current pad-file test mode bypasses the PC poll pipeline; extend
  the process-local test provider to exercise the real path before accepting
  controller assignment/Apply/restart/gameplay. Native Delete alone is insufficient.

2026-09-15 v140: controller capture presentation/cancel regression
- Shortened the instruction to fit the native status line; Escape/Delete remain
  in the help bar. All four native captures inspected individually in order:
  controller table, capture prompt contained within the panel, actual level-one
  movement, and attacks. Cerebro remains visible behind the table.
- Selector and capture Escape assertions pass, expected watchdog exit 3, process
  terminal. Rebuilt 64/32-bit control tests pass. Both saved-settings files retain
  their original private baseline hashes. Current private pair is v140 ABI 10;
  assets are binding-device-v139 atop v134. !GAME unchanged.
- This accepts the native selector, unbind/cancel and shortened prompt step.
  Physical source assignment through the game, remap Apply/restart/gameplay,
  connected-device list, controller-specific presets/presentation and remaining
  full goal requirements are still open. No physical input or audio acceptance.

2026-09-15 v141: controller assignment through the native game
- Combined XML1_TEST_PAD + XML1_PC_TEST_INPUT now routes the process-local pad
  fixture through normal physical-slot selection, capture, remapping and keyboard
  merge. Standalone legacy pad mode retains its original passthrough behavior.
  Test modes never initialize/poll real controllers or send physical vibration,
  including the no-channel fallback. Guest-boundary regression verifies this
  with host-call counters and a captured synthetic signed axis.
- v141 selected the controller table, captured right-stick click as player 1's
  alternate Attack, and used native Apply. The table visibly shows the assigned
  value and Settings saved. controller-audit-v141.json verifies old INI sections
  unchanged, source16 persisted, and other players' alternate attacks untouched.
- INI SHA256 after Apply is
  37fbd55a5305c008bcf181f33c3aeff59151a823c533abb6aa2631fe91bba707.
  Prior private INI is in before-v141; applied INI retained separately for audit.
- Actual level-one movement uses the synthetic left stick. Four subsequent raw
  right-thumb presses (IDs12-15) each produce native A=255/B=0 after remapping.
  All five captures inspected individually in order. The final capture follows
  the attacks and is not proof of a landed hit or of a specific animation frame.
  Expected watchdog exit 3 and assignment/Apply/output assertions pass.
- Current private executable is v141, worker remains v140 (same ABI10), assets
  remain binding-device-v139 atop v134. No !GAME changes. Full restart test v142
  checks the persisted binding next; remaining goal requirements stay open.

2026-09-15 v142: controller alternate attack survives restart
- Fresh process loaded the saved Right stick click alternate Attack in the native
  controller table. In level one, each of four raw right-thumb presses again
  produced A=255/B=0; assertions are scoped to individual command intervals.
  Inspected all three captures individually: persisted table, stick movement,
  and Wolverine in an attack pose during the last remapped press. This does not
  establish a landed hit, power behavior, or physical human controller acceptance.
- Expected watchdog exit 3, process terminal. Saved PC settings remained exactly
  the applied v141 bytes throughout restart. Restored original private INI
  byte-for-byte afterward; native settings.dat also retains its baseline hash.
- This verifies one controller alternate button through native assignment,
  Apply, restart and actual gameplay input/animation. Axis capture, all-player
  remaps, conflicts/defaults in game, device list, remaining presentation and
  final staged/human acceptance still remain. !GAME unchanged.

2026-09-15 v143: package clarification and controller availability
- User clarification remains the rule: preserve normal PKGB format, original
  resource names, relative paths and package associations; declarations may
  change to match authored content. The fresh package-audit-v143.json passes
  both menus, including declared models serialized inside the copied IGBs.
- Added routed physical-controller availability to input channel ABI11 (Shared
  2952 bytes). Enumeration updates availability without consuming buttons or
  arming binding capture. Disconnection clears pending capture; routing changes
  invalidate old availability. Rebuilt both game and 32-bit worker together.
- Native controller selector reports controller slot and connected/disconnected
  status; a dedicated keyboard player reports Keyboard-only player. Missing
  controllers receive capture guidance retaining Delete/Esc; reconnect restores
  the normal release/press prompt. This is slot availability, not device names
  or a complete XML2 device list. Keyboard-only text is source-covered but was
  not captured in this native run.
- Cross-bitness controls tests and guest input integration tests pass, including
  physical/keyboard slot distinction and enumeration disconnect/reconnect. Test
  pad file now accepts disconnect; all simulated input remains process-local.
- Hidden muted native v143 run: inspected every capture individually in order:
  connected controller, disconnected capture, reconnected capture, level-one
  movement, and attack pose. Status text fits within the existing native menu;
  live Cerebro continues behind it. Four synthetic A presses each produce
  A=255/B=0 in their own log intervals. Expected watchdog exit 3; process ended.
  No landed-hit, audio, physical controller, or full-level acceptance claimed.
- Private paired binaries are v143/ABI11; assets unchanged from v139 over v134.
  Prior pair retained in before-v143. PC INI is byte-identical to that backup;
  native settings.dat retains its baseline hash. !GAME unchanged, no commits,
  TODO2/3 and the goal remain open for the remaining integration/acceptance work.

2026-09-15 v144/v145: original XML2 player-tab artwork in the native IGB
- Traced the missing horizontal player frame to the installed XML2 PC resource
  Texs/tabimg.png (676x70). Texs/tabimg2.png is the three-part defaults frame;
  it has been inspected but is not integrated yet. The main copied controls IGB
  contains the large panel, not these PC-specific horizontal frames.
- Added scripts/author-menu-tab-art.py. It embeds the reference tab strip,
  recolored with the existing XML1-blue rule, in the already PKGB-declared
  ui/models/m_options_controls_screen.igb. The shared x2m_options.igb only moves
  the branding clear of the new frame. No PNG loader, renderer overlay, package
  aliases, resource renames or new package dependencies. Pillow 11.3.0 is pinned
  for authoring; source assets remain unchanged and hashes are recorded.
- The copied textured branch originally inherited blending from its ancestor.
  v144 lacked that inheritance at its new scene-root position: transparent pixels
  rendered black. Rejected that visual revision, despite gameplay passing.
  v145 explicitly carries the same original igBlendState/igBlendFunction in the
  authored branch. No runtime workaround. Embedded igImage uses native RGBA8888
  format 7; PNG alpha is preserved. Existing recolor-tool comments describing
  format 7 as alpha-only refer to the original gradient's content, not its format.
- v145 inspected every capture individually in order: normal Options (tabs stay
  hidden), Advanced with Player 3 selected inside the original frame and correct
  transparency over live Cerebro, then level-one movement and attack pose.
  Four A presses each produced A=255/B=0 in their individual log intervals.
  Expected watchdog exit3; terminal. All five v144 captures were also inspected.
- Both output IGBs reproduce byte-for-byte from before-v144 inputs. Source/output
  hashes are in tab-art-v145/tab-art.json; package-audit-v145.json passes. The
  author's duplicate-import guard requires the preserved input for another run.
- Current private assets: tab-art-v145 over binding-device-v139/volume-v134;
  binaries remain paired v143 ABI11. !GAME and saves remain untouched. Pending:
  defaults-bar art, persistent selected-tab fill (focus highlight currently moves
  with focus), remaining reference functionality, final staging and human checks.
  Goal and TODO2/3 remain open. These muted runs do not verify audio or full level
  completion; capture 4 is an attack pose, not evidence of a landed hit.

2026-09-15 v146: original XML2 defaults frame
- Extended author-menu-tab-art.py with --kind defaults. Reads original
  Texs/tabimg2.png (542x70), embeds XML1-blue RGBA artwork in the existing
  m_options_controls_screen.igb using the same native blending as v145.
  Original reference pixels/alpha and input files stay unchanged. No runtime
  overlay, resource renaming or package declaration change.
- Reshaped only the six original lower-panel vertex streams below world Z112 to
  raise the bottom from roughly Z54 to Z82, leaving a gap before the separate
  defaults frame (Z46..77). Updated geometry bounds. Moved the three preset text
  and focus anchors to Z61 in x2m_options.igb. Existing player frame is untouched.
- Package audit v146 passes. Both output IGBs reproduce byte-for-byte from the
  preserved before-v146 tree; manifests record source/output hashes. Duplicate
  imports are rejected by embedded reference name.
- All four native captures inspected individually in order: normal Options with
  Advanced artwork hidden; Advanced with separate Defaults 1/2/3 frame and native
  Defaults 2 selected, visibly J/K Attack/Smash; level-one movement; attack pose.
  The lower panel, window text, defaults frame and bottom help bar are distinct
  and readable at 1080p. Cancel discarded the draft. Four synthetic A commands
  each produced A=255/B=0 in their own log intervals. Expected watchdog exit3;
  game process terminal. No landed-hit or audio acceptance inferred.
- PC INI and native settings.dat retain baseline hashes. Current private assets
  are defaults-art-v146 over tab-art-v145/v139/v134; paired game/worker remain
  v143 ABI11. !GAME unchanged, no commits. Final 720p/staging checks, persistent
  selected-tab artwork, remaining reference behavior and human acceptance remain;
  TODO2/3 and the combined goal are still open.

2026-09-15 v147: camera-shake implementation audit (no runtime change)
- Previous turn classified as progress: defaults art and native acceptance
  evidence changed the private fixture. This turn traces a remaining functional
  parity gap instead of adding another presentation-only control.
- Added scripts/audit-camera-shake.py; read-only assertions passed against the
  supplied !GAME/default.xbe. Full decoded instruction evidence and XBE/function
  hashes are in work/native-igb-menu-test/camera-shake-audit-v147.json.
- Script cameraShake registration: string 003D1E2C, registration 003D11CC,
  function 00098F70. Combat ce_camera_shake constructor installs vtable 003D73C4;
  its method 000D6DC0 and the script both call camera singleton slot84.
  Singleton 0048D128 has vtable003CB2F4, resolving slot84 to 0004A980.
- This routine registers mode1 with amplitude/duration/expiry/frequency in one
  of two camera effect slots. 0004BEF0 checks expiry and dispatches mode1 to
  0004BB90, which computes additive shake offsets at 2D8/2DC/2E0. This establishes
  a shared script/combat path; it does not yet implement the option.
- Next implementation must preserve caller/event execution and outer camera
  timing. Classify modes2/3/4 before claiming full shake coverage; verify generated
  direct calls as well as dispatch hooks. Add On-by-default settings transactions
  and native menu behavior, then compare active-shake On/Off through gameplay.
  Do not suppress general camera pan/fade/motion-path state.
- No game launched, no new captures, no binaries/assets/settings changed this
  turn. Current private runtime remains v143 ABI11 with v146 assets. !GAME
  unchanged. TODO2/3 and the combined goal stay open.


2026-09-15 v148: native View Shake setting and camera output filter
- Added On-by-default ViewShake to pc-settings.ini, validation, defaults and
  settings transactions. Settings size is 1896, shared channel size 2956, ABI12;
  game and worker were rebuilt and staged together only in the private fixture.
- Restored the copied normal Options menu's original View Shake row. Its draft
  is independent of Advanced's Apply/Cancel. Accept merges this field into the
  latest saved PC settings and running channel; closing/back discards its draft.
  Native saveoptions still handles the original game settings.
- scripts/author-menu-view-shake.py authors only ui/menus/options.eng; it checks
  the original Options PKGB association and leaves IGBs and manifests untouched.
  Reproduction from preserved source was byte-identical. Package audit passed.
- Expanded the read-only XBE audit to verify all four effect branches accumulate
  into the same final additive camera vector. The generated 0004BEF0 exit hook
  filters only xyz at camera+2D8, after original math, random calls and expiry
  checks. Script/combat callbacks and general camera state are retained.
- Cross-bitness controls tests passed, including draft isolation, Back, Accept,
  preservation of unrelated saved settings, persistence, default On, invalid
  values and exact three-float suppression with adjacent sentinels unchanged.
  Mixed-input integration tests passed without physical input calls.
- Native v148 ran at 1920x1080, invisible/muted, then reached level one. All six
  captures were individually inspected in order: original row On, draft Off,
  return to main menu after Accept, reopened row Off, level-one movement, and
  level-one scene after attack commands. Four synthetic attack intervals each
  produced A=255/B=0. These images do not establish landed hits.
- Runtime trace recorded 16 nonzero camera vectors suppressed with Off, while
  the level and camera follow continued. This is evidence of the real generated
  camera hook executing, not just a direct unit-test call. It does not establish
  coverage of every scripted shake mode or complete pan/fade regression coverage.
- Expected watchdog exit3 observed; process terminal. Evidence: native-v148.log,
  native-camera-v148-capture-1..6.bmp, camera-shake-audit-v148.json,
  package-audit-v148.json, controls-v148.log. Original private executables,
  Options content and both settings files preserved in before-v148.
- Current private assets: v146 plus the restored View Shake row; runtime v148
  ABI12. !GAME unchanged, no commits. Former TODO2/3 were subsequently closed by user acceptance; see the status at the top.


2026-09-15 v149: View Shake restart, Back and 720p checks
- Same v148 ABI12 private binary pair, 1280x720, invisible/muted. All six native
  captures individually inspected in order: persisted Off after process restart;
  draft On; Off restored after Back/reopen; On after Accept/reopen; level-one
  movement; level-one attack scene. Row and footer text fit at this resolution.
- Four synthetic attack intervals each produced A=255/B=0; expected watchdog
  exit3 and terminal process observed. There were no filtered-shake trace lines
  after On was applied. The cross-bitness unit check separately confirms On
  preserves nonzero input vectors exactly. Full scripted mode comparison remains.
- Saved Off and On INIs retained as pc-settings-off-v148.ini and
  pc-settings-on-v149.ini. Restored original private pc-settings.ini and native
  settings.dat byte-for-byte: SHA256 0681867A3481B603C2887A4DEB5AC5DDEE4537432172EAE31603E7356C60916B
  and 53DB16942F652EFAC56136311225E7FD2E7AC3D6EE834E225E9376B59460ABB8.
- No game left running. !GAME unchanged and no commits. Remaining overall goal
  work includes menu/device parity, persistent player-tab selection artwork,
  mixed-device/axis binding gameplay, remaining native options behavior, final
  staged FMV/audio/gameplay acceptance and human keyboard/mouse testing.
  TODO2/3 and combined goal remain open; these two muted runs do not establish
  audio or complete FMV/level-transition acceptance.


2026-09-15 v150: package-driven player staging and actual !GAME smoke
- Previous goal turn was progress: implemented View Shake, added native menu
  behavior and produced accepted 1080p/720p gameplay evidence.
- Added scripts/stage-pc-menu.py: read-only plan by default; audits the source
  PKGB/menu/IGB associations, enumerates the package-declared resources, rejects
  traversal/reparse paths, records old/new hashes and backs up replaced originals
  before installation. Copy failures restore touched original files. A rehearsal
  installed all 21 resources with exact hashes, verified original backup hashes
  and preserved an unrelated save sentinel. This verifies staging from the tested
  asset set, not full reproduction of all prior IGB authoring steps.
- scripts/stage-player.ps1 now accepts -MenuSource and optional -MenuWriterRoot,
  preserves previous binary/runtime/readme files and stages package assets before
  paired binaries. Existing build.ini and saved data are preserved.
- Installed the v148 ABI12 paired binaries and v149-tested menu assets into
  D:/Programming/GitHub/OpenXML1xbox/!GAME. Replaced originals are preserved at
  work/player-stage-backups/20260915-065614-c97d2819. Both staged binary hashes
  match the tested build outputs. No user settings from the private fixture
  were copied. This changes the earlier chronological !GAME-unchanged status.
- Actual !GAME run v150 used headless/muted and process-local input at 1080p,
  launched from TEMP. All five native captures inspected individually in order:
  intro video image; normal Options/View Shake over Cerebro; Advanced Options
  with original tab/defaults artwork over Cerebro; level-one movement; attack
  pose. Four attack intervals each produced A=255/B=0. No landed-hit or whole
  level completion is inferred. Expected watchdog exit3; processes terminal.
- All ten pre-existing UDATA/TDATA files retain their hashes. See
  player-stage-integrity-v150.json, player-package-audit-v150.json,
  native-v150.log and native-camera-v150-capture-1..5.bmp.
- A human keyboard/mouse check was requested against the staged EXE. No visible
  game was left running. Audio, full FMV/transition playback, broader mixed input,
  remaining reference behavior/artwork and human acceptance remain pending.
  Current English staging is usable for evaluation, not completion of TODO2/3.
  The goal remains active; no TODO items removed and no commits made.


2026-09-15 v151/v152: preserve existing localized menus
- Previous turn was progress: package-driven staging installed the tested build
  into !GAME and actual player-folder captures reached level-one gameplay.
- Found a regression in the English-only package audit: options.fre/.ger still
  use menu_options, while the new package declared only x2m_options. The old
  controller screens likewise need menu_options_controller and xboxcontroller.
  The expanded audit failed on the missing French layout before the fix.
- Added preserve-menu-language-resources.py to retain genuine declarations from
  backed-up original PKGBs. Restored five original Options model declarations and
  four controller-package model declarations, preserving names and paths. The
  operation is idempotent and changes no menu contents or IGBs in !GAME.
- Expanded audit-native-menu-packages.py to check eng/fre/ger (including native
  CP1252 text), each layout and each controllerModel. Original controller menu
  initialization at 17F898/17F8C1 explicitly assigns controllerModel to item
  controller; its authored IGB m_invis placeholder is recorded as this native
  override, not treated as an alias or a required missing file. Generated source
  and the actual German controller capture corroborate that assignment.
- Private fixture had four earlier experimental localized/original resources
  differing from !GAME. Preserved them under before-v151 and restored the exact
  player-folder versions before testing; the final staging plan differed only in
  the two PKGB files. All English PC IGB/menu hashes remain unchanged.
- v151 French: four native captures individually inspected: original Options,
  another Options view after held-key navigation missed the controller command,
  level-one movement and attack pose. Controller-screen coverage was not claimed.
- v152 German: four native captures individually inspected: original Options,
  controller diagram with localized labels, level-one movement and attack pose.
  Explicit process-local click opened options_controller_xbox.ger. Both runs
  asserted four A=255/B=0 attack intervals and ended with expected watchdog exit3.
  These muted runs do not establish audio, localized PC-menu parity or full level
  completion. All game processes were terminal before player files were updated.
- Staged only the two corrected PKGB files into !GAME. Backups:
  work/player-stage-backups/language-packages-v152. Full three-language player
  package audit passed. Both private settings hashes remain at baseline, private
  build.ini restored to English byte-for-byte; all ten player saved-data files
  retain their v150 hashes. No binaries rebuilt/replaced and no commits.
- Evidence: language-package-audit-v151.json, native-v151/v152.log,
  native-camera-v151/v152-capture-1..4.bmp, player-stage-v152.json and
  player-language-audit-v152.json in work/native-igb-menu-test.
- Human keyboard/mouse acceptance remains requested and unanswered. Other native
  PC parity, mixed-input/power coverage and full final acceptance remain open;
  TODO2/3 and the combined goal are not complete.


2026-09-15 v153/v154: native controller axis rebinding through restart
- Previous turn was progress: corrected localized PKGB dependencies, expanded the
  audit and verified native French/German menu-to-gameplay runs.
- v153 used the native controller binding table to Delete the Move Left primary
  source, assign left-stick-left to Move Forward, then assign left-stick-up to
  Move Left. Capture traces reported raw sources17 and20; Apply saved the table.
- Five native captures were inspected individually: default controller bindings,
  swapped axis bindings, Settings saved, level-one scene after raw left input,
  and after four attack inputs. In the raw-left command's own log interval, guest
  input was LX=0/LY=32767. Four A intervals each produced A=255/B=0.
- Initial settings-file comparison expected changed entries but found none:
  the preserved baseline INI predates explicit controller sections. Corrected
  audit verifies every existing legacy setting is unchanged, newly serialized
  players2/3/4 match default mappings, and only player1's Forward/Left differ
  from default (20->17 and17->20). Evidence: axis-settings-audit-v153.json.
- v154 restarted from that saved INI without capture or Apply actions. Four
  native captures individually inspected: persisted table, gameplay after raw
  left, gameplay after raw up (Wolverine at the left fence), and after attacks.
  Isolated input intervals showed raw left -> LX=0/LY=32767 and raw up ->
  LX=-32767/LY=0. All four attack intervals produced A=255/B=0.
- Both runs were headless/muted, 1080p, process-local input, expected watchdog
  exit3 and terminal processes. No host desktop input or physical-device calls
  were introduced. Channel names include PID/tick, isolating each game process.
- The applied INI remained byte-identical after restart. Saved it locally as
  pc-settings-axis-v153.ini and restored private baseline hash0681867A...0916B.
  !GAME, its user settings/saves, binaries and assets were not modified this turn.
- Evidence: run-native-axis-v153/v154.py, native-v153/v154.log and corresponding
  native-camera-v153/v154 captures in work/native-igb-menu-test. These checks
  establish the two tested axis directions for player1; remaining players,
  powers/mixed devices and human acceptance are still open. No audio or complete
  level acceptance inferred. No source/binary rebuild or commits were needed.
  TODO2/3 and the goal remain active.

2026-09-15 v155: independent process-local controller slots
- Extended XML1_TEST_INPUT_FILE commands with optional p1: through p4: prefixes,
  addressing synthetic physical slots before game-port routing. Unprefixed
  commands retain slot zero. Each slot now has its own release timer; neutral
  and disconnect cancel only that slot's timer. No host input is generated.
- Optimized game and pc-input-integration-test builds passed. Integration tests
  cover overlapping slot inputs, neutral isolation, disconnect remaining absent
  after the old timer deadline, slot four, and legacy unprefixed commands.
  Synthetic tests assert no additional physical-device calls.
- Backed up the private game executable under before-v155 and staged the new
  game binary there only (SHA256 42F670F2...03EE2D). ABI12 renderer unchanged.
  No assets, PKGB declarations or player staging files changed in this check.
- Native 1080p muted run reached level-one gameplay. Game-consumed traces show
  keyboard player zero LY32767 concurrently with synthetic ports one LX-32767,
  two LY32767 and three LX32767. Neutralizing port one leaves the other two
  timers to release separately. Four player-zero A commands each produced
  A255/B0 in their own log intervals.
- Inspected all three native captures individually in order: level start,
  Wolverine moved into the courtyard by keyboard, and after attack inputs with
  enemies approaching. Artwork, character, HUD and scene progression visible.
  Captures do not demonstrate landed hits or independent multiple heroes;
  this opening scene has only Wolverine. Full multiplayer/power acceptance and
  human controls acceptance remain pending; muted capture does not test audio.
- Private pc-settings.ini and settings.dat retain baseline SHA256 hashes
  0681867A...0916B and 53DB1694...8ABB8. !GAME remains on v148 ABI12 binaries
  and v149/v152 menu/package assets. No commits; TODO2/3 remain unfinished.
- Evidence: run-native-slots-v155.py, native-v155.log and native-camera-v155-
  capture-1..3.bmp under work/native-igb-menu-test.

2026-09-15 v156: persistent native player-profile indicator
- Previous goal turn made progress by adding and verifying independent synthetic
  input slots through real level-one gameplay. No repeated external blocker.
- Added xml1_pc_native_profile_indicator to retain the selected profile's native
  focus model after focus moves into the binding controls. Old selected profiles
  clear when another profile is chosen; native focus still displays normally.
  Ordinary native focus events invalidate the cached model state.
- Reuses verified CMenuItem model-assignment ABI at 00173380/001733AB, populated
  from the existing item focusmodel handle and IGB focusitemname anchor. This
  adds no renderer overlay, resource alias, renamed file or PKGB change.
- Optimized build passed. guard-pc-menu.py repeated application was byte-identical
  for the generated menu unit; shared return-label hooks do not accumulate.
- v156 private 1080p muted run: all seven native captures inspected individually
  in sequence. Captures1-4 show Player1 at initial entry, Player3 selected with
  device-selector focus, Player4 selected with device-selector focus, then
  Player1 selected again. Previous tab fills cleared and chosen fill persisted;
  live Cerebro remained visible. Captures5-7 show level-one left/up movement and
  the scene after four attack inputs; each attack interval consumed A255/B0.
- Existing selection geometry remains a small blue strip. Located XML2's genuine
  Texs/tabbtn.png sprite sheet for the next art-authoring step; it has not been
  embedded yet. Exact selected-tab fill, sizing and complete player2/keyboard
  navigation acceptance remain pending. Long controller axis labels nearly
  touch the Secondary column and should be included in final layout refinement.
- Private settings hashes still match baseline 0681867A...0916B and
  53DB1694...8ABB8. Private executable backed up in before-v156; only private
  game binary replaced, ABI12 renderer unchanged. !GAME remains on v148.
  No commits or TODO removals. Combined goal remains incomplete.
- Evidence: run-native-tabs-v156.py, native-v156.log, native-camera-v156-
  capture-1..7.bmp and tab-focus-v156.json in work/native-igb-menu-test.
- Run ended at the expected watchdog exit3; terminal process check found no
  remaining game or DX8 worker. Muted run provides no audio acceptance.

2026-09-15 v157/v158: original XML2 selected-tab sprite embedded in IGB
- Previous goal turn made progress: native selected-profile focus-model state
  persisted independently of focus, verified through level-one gameplay.
- Added scripts/author-menu-tab-selection.py. It embeds the original XML2
  Texs/tabbtn.png sprite sheet (recolored with the existing XML1 palette) in
  ui/models/m_pda_option_focus.igb, using its original transform hierarchy.
  The third 26-pixel state is opaque; preserves the source alpha and registers
  its texture in the IGB scene texture list. No runtime PNG loader, overlay,
  renamed asset or new package relationship. Retains copied XML2 alpha blending.
- A source model with an empty texture list exposed absent storage during the
  first authoring attempt. Allocated a proper IGB reference-memory entry before
  writing the texture list. Failed attempt produced no staged output.
- v157 changed only two private IGBs. Eight native 1080p captures individually
  inspected: Players1/3/4/1 with persistent fill, Defaults1 focus, then level-one
  left/up movement and scene after attacks. The wider fill exposed increasingly
  left-biased later tab anchors; did not accept that spacing as final.
- v158 narrowed the fill to scale .40, raised its height to .65 and spaced each
  subsequent label/focus anchor three additional native units apart. Eight
  native 720p captures individually inspected: Players1/2/4/1, Defaults1, and
  three gameplay captures. Corrected fills fit the tab sections; prior tabs
  clear on selection and selected fill remains while the device row is focused.
  Device-selector and Defaults focus (same model) retain transparency and fit.
  Persistent-fill Player3 was covered before final spacing; final 1080p/layout
  and keyboard/controller traversal remain part of the final acceptance pass.
- Both runs used process-local input, headless/muted, expected watchdog exit3;
  four isolated A input intervals each consumed A255/B0. Native captures show
  character/environment/HUD and movement; do not establish landed hits, full
  combat/level completion or audio acceptance. No game/worker processes remain.
- v158 harness initially had a Python indentation error before launching; fixed
  it and ran once. 720p was a harness-only renderer override: the menu still
  shows the unchanged saved 1920x1080 preference, as intended.
- Final IGB outputs reproduce byte-for-byte from tab-selection-input-v157.
  Package audits pass for English/French/German, preserving original paths.
  Inputs backed up in before-v157; current private assets are tab-selection-v158.
  Private settings retain baseline SHA256 0681867A...0916B and 53DB1694...8ABB8.
  No settings/saves, !GAME files or binary changes this turn. No commits.
- Evidence under work/native-igb-menu-test: tab-selection-v157/v158 and repro
  outputs/manifests, package-audit-v157/v158.json, run-native-tabs-v157/v158.py,
  native-v157/v158.log, native-camera-v157/v158-capture-1..8.bmp.
  TODO2/3 and goal remain unfinished; broader behavior/human acceptance pending.

2026-09-15 v159: binding spacing and keyboard player-tab navigation
- Previous turn was progress: imported actual XML2 tab selection art, preserved
  PKGB paths and verified native 1080p/720p menus through gameplay.
- Added scripts/author-menu-binding-columns.py: moves seven primary binding
  labels, their header and seven native focus anchors ten native units left
  inside the existing x2m_options.igb. Original text size and Secondary anchors
  retained. Rejects unexpected/already shifted input; hashes preserved input
  and output. Byte-for-byte reproduction and three-language PKGB audit passed.
- v159 inspected all nine native 1080p captures individually: controller column
  spacing; keyboard Right/Enter selecting Players2/3/4/1; device-selector focus
  with Player1 retained; then level-one left/up movement and after attack input.
  Long left-stick names have clear space before Secondary. Final selected-tab
  spacing now checked at 1080p for every profile. Keyboard action log asserts
  sequence 1,2,3,4,1, including wraparound, after one initial mouse selection.
  This is process-local keyboard traversal, not physical-device acceptance.
- Four isolated attack intervals consumed A255/B0. Expected watchdog exit3;
  no remaining game/worker. Native captures retain character, HUD and level
  artwork; do not establish landed hits, full level completion or audio.
- Private baseline pc-settings.ini/settings.dat unchanged (0681867A...0916B,
  53DB1694...8ABB8). Only private layout IGB changed; backup before-v159.
  Binary unchanged from v156. No commits or TODO removals.
- Evidence: run-native-columns-v159.py, native-v159.log, native-camera-v159-
  capture-1..9.bmp, binding-columns-v159/repro-v159, package-audit-v159.json.

2026-09-15 v160: player staging update
- Staged current verified runtime and menu assets to !GAME using stage-player.ps1
  with its package-driven backup/audit path. Two menu resources changed:
  ui/models/m_pda_option_focus.igb and ui/menus/x2m_options.igb. PKGB declarations
  and other resources unchanged. No development settings or saves copied.
- Original replaced files backed up under work/player-stage-backups/
  20260915-080243-44f7bf5d. Pre-run hashes of ten saved-data files plus build.ini
  recorded in player-settings-before-v160.json. !GAME has no pc-settings.ini.
- Staged game hash BA55A4C6...40C7EB3 and renderer 8BC7FEEF...C76306 both match
  the private tested runtime pair. ABI12 remains unchanged.
- Actual !GAME v160 run from unrelated TEMP working directory passed at 1080p.
  Inspected all five native captures individually: Activision intro FMV frame,
  normal Options over Cerebro, Advanced with current fill/column spacing over
  Cerebro, level-one movement, then Wolverine in an attack pose. Four isolated
  attack commands each consumed A255/B0. Expected watchdog exit3, no game or
  worker left running. Muted run does not verify audio; a captured FMV frame
  does not establish full playback/A-V acceptance.
- All eleven player saved-data/config hashes remain unchanged and no
  pc-settings.ini was created by the test. Player staging is now current with
  the verified private runtime/menu changes. Full feature parity, mixed-device
  gameplay/powers, remaining settings behavior and human acceptance still open.
  TODO2/3 stay unfinished. No commits.
- Evidence: run-player-stage-v160.py, native-v160.log and native-camera-v160-
  capture-1..5.bmp under work/native-igb-menu-test; staging manifest and backups
  under the timestamped player-stage-backups directory above.

2026-09-15 v161/v162: powers and simultaneous keyboard/mouse gameplay
- Preserved original resource paths and normal PKGB format; declaration changes
  are permitted by the user's clarification (already recorded in AGENTS.md).
- v161 reached level one and inspected all six native captures individually.
  Quick-power 1 produced Wolverine's raised-claws animation and subsequent
  energy reduction. Other starting power slots are locked/unassigned; key2/3
  input does not establish those powers work. Original ps_wolverine.eng ties
  the first power to the initial slash talent. No gameplay asset was modified.
- v161 mixed movement/attack evidence was invalidated: consecutive command-file
  writes overwrote the mouse-up before the renderer consumed it. Preserved
  worker-v161.log confirms missing id114. This is a harness issue, not evidence
  of a real mouse-release bug. No game workaround was authored.
- v162 waited for exact renderer acknowledgments between every command. All
  four native captures inspected individually: baseline, power pose, combined
  movement/attack, then released controls with enemies approaching. Energy
  decreases after the power. Game input progresses A0/LY32767 -> A255/LY32767
  -> A0/LY32767 -> A0/LY0. This verifies independent release in this fixture;
  neither captured poses nor logs establish landed hits or multiplayer play.
- v162 completed with expected watchdog exit3. Its temporary millisecond IDs
  exceeded the runtime's uint32 parser range (accepted by this build); the
  reusable helper instead uses in-range IDs. Do not reuse the oversized IDs.
- Added scripts/native_pc_test_channel.py: process-local command writes with
  fresh-log acknowledgment, liveness/timeout checks, newline validation and
  uint32 bounds. Does not retry uncertain commands or generate OS input.
  A terminal check confirms stale acknowledgments are rejected and fresh ones
  accepted. v163 exercises this helper in the actual game.
- All runs are private/headless/muted, not audio or physical-device acceptance.
  No changes to !GAME, game binaries, PKGBs or IGBs. TODO2/3 remain unfinished.
  Evidence: run-native-powers-v161/v162.py, native-v161/v162.log,
  worker-v161/v162.log and native-camera-v161/v162-capture files under
  work/native-igb-menu-test. No commits.

2026-09-15 v163: reusable acknowledged channel verified in gameplay
- The game run used scripts/native_pc_test_channel.py with valid uint32 IDs.
  Every command received a fresh renderer acknowledgment. Assertions passed
  for simultaneous A255/LY32767, movement without attack, and final all-neutral
  input. Four captures inspected individually in order: level baseline, first
  power animation, mouse attack while moving, then idle with enemies advancing.
  Reduced blue energy after the first power is visible. No hit/damage claim.
- Expected watchdog exit3; native-v163.log, worker-v163.log, four native-camera-
  v163 captures and run-native-powers-v163.py preserve the evidence. Muted test
  does not establish audio acceptance. Native captures show intact level/HUD.
- Private pc-settings.ini and settings.dat retain baseline hashes
  0681867A...0916B and 53DB1694...8ABB8. No player staging modifications or commits.
  Goal/TODO2/3 remain active and unfinished; remaining settings behavior,
  mixed-player coverage and human keyboard/mouse acceptance still required.


2026-09-15 v164/v165: native music-volume preview
- v164 reproduced Music 0.8 -> draft 0 -> Back 0.8 on the current runtime.
  Native manager snapshots confirm refresh flag B9EC stays zero and the
  separate zero-volume initialization gate B9FA stays zero. Four-second DSP
  windows show draft-zero RMS2600.45, so the original playing music continued.
  Back restores native settings and the visible bar without saving.
- Read-only XBE disassembly confirms setter 0014F730 only clamps/stores B9E4;
  updater 0014FC79 gates existing-stream volume updates on B9EC and invokes
  original 0014FAE0 when requested. Original gain/attenuation math is retained.
- Added one native stream-refresh request at the music-setter entry in
  scripts/guard-pc-menu.py. This enables PC live preview through the original
  updater and also refreshes the gain restored by Back. No mixer replacement,
  package/asset changes, renderer changes or ABI change. Effects preview is
  not addressed by this change. Optimized build and repeated-guard idempotency
  passed. Initial guard check named an instruction without a generated label;
  corrected its validation to the existing 0014FC87 block before installation.
- v165 repeated the same native flow. Four-second DSP windows: baseline
  RMS2231.97, draft Music0 RMS0/peak0, after Back RMS2398.51, reentered Options
  RMS2258.64. Level-one capture after movement/attacks has RMS5034.78; its peak
  reaches32768, so this is volume behavior evidence, not clipping/quality
  acceptance. Host output was muted; DSP capture occurs before host muting.
- All five captures from each run inspected individually and sequentially:
  Options baseline/zero, main menu after Back, restored Options, and level-one
  character/HUD/environment after movement and attack inputs. Cerebro remains
  live behind the menus. No landed-hit or full-level-completion claim.
- v164 console reported expected exit3. v165 command session expired before
  repoll, but game log records the135s watchdog, archival PCM/worker logs exist,
  and no game/worker remains. Do not infer process exit codes from that alone.
- Private settings retain baseline hashes 0681867A...0916B and53DB1694...8ABB8.
  Game SHA256286fb6f0b3151f8fcc94cef299342cbbe45893bfc8eec380884e4d1b56eaebe4.
  Earlier binary and guard/generated source preserved under before-v165 names.
- Staged v165 to !GAME using normal backup/package-audit tooling; zero menu
  resources changed. Backup: work/player-stage-backups/20260915-101724-784c77b6.
  v166 checks this player staging separately. No settings/saves copied; no commits.
- Evidence under work/native-igb-menu-test: run-native-audio-back-v164/v165.py,
  audio-manager-v164/v165 snapshots, volume-audio-v164/v165 PCM/CSV/analysis,
  worker-v164/v165.log and native-camera-v164/v165 capture1..5. Goal remains
  active; effects preview, full volume-range/Accept/restart coverage, remaining
  control/settings behavior and human acceptance remain open.


2026-09-15 v166: player staging music-preview acceptance
- Tested actual !GAME v165 binary from unrelated TEMP working directory at
  1920x1080, with acknowledged process-local input and native DSP capture.
  Inspected all five captures individually in order: Options initial Music0.8,
  draft Music0, main menu after Back, restored Options, level-one movement and
  attack flow. Live Cerebro and level artwork/HUD intact. No new FMV capture
  or full transition/audio-quality acceptance claimed from this run.
- Four-second PCM windows RMS2224.31 ->0 ->2396.07 ->2270.00 ->5810.17. The
  zero setting silences the playing music before Accept; Back restores its
  gain and output without saving. This validates the staged music-preview fix.
- Expected exit3 recorded in exit-v166.json; game/renderer processes absent.
  All11 saved-data/build.ini hashes unchanged, no pc-settings.ini created, and
  staged game hash matches private v165. Player folder stays self-contained.
- Evidence: run-player-audio-v166.py, native-v166.log, worker-v166.log,
  audio-manager-v166 snapshots, volume-audio-v166 PCM/CSV/analysis,
  native-camera-v166 captures1..5 and player-settings-before-v166.json.
  No commits or TODO removals. Remaining volume range/Effects behavior,
  settings/control acceptance and human keyboard/mouse check remain open.


2026-09-15 v167: native Effects Volume preview and Back
- With Music set to zero in the unsaved Options draft, repeated the same eight
  Up/Down navigation events at Effects1,0,0.5. Each phase records exact DSP sample
  offsets; manager snapshots verify gain values. Native output RMS/peak:
  full2946.42/18890, zero0/0, half723.07/4619. This establishes immediate gain
  response for newly played menu effects without Accept. It does not establish
  refresh of already-playing loops, all gameplay effects, or a linear slider.
  No extra effects setter/mixer fix is necessary for the observed behavior.
- Back restored Music0.8/Effects1 in manager snapshots and these remained restored
  through level-one gameplay. No Accept or save prompt was invoked. Both private
  settings files retain their baseline SHA256 hashes. Expected exit3 recorded.
- All six native captures inspected individually in order: baseline Options,
  muted Music/full Effects, both zero, half Effects, Back to main menu, then
  level-one after movement and mouse attack inputs. Cerebro remains visible;
  gameplay character/HUD/environment intact. No hit/full-level/audio-quality
  acceptance is inferred. Muted host output; measurements use native DSP PCM.
- Added brief volume-preview and Accept/Back guidance to the staged Read Me.txt
  and its source in stage-player.ps1. No runtime, IGB, PKGB, save, or config
  changes this turn. !GAME remains v165 with v159 assets. No commits.
- Evidence: run-native-effects-v167.py, native-v167.log, worker-v167.log,
  effects-v167-intervals/analysis.json, audio-manager-v167 snapshots,
  volume-audio-v167.pcm/csv and native-camera-v167 captures1..6, all under
  work/native-igb-menu-test. Goal/TODO2/3 stay active; remaining control/settings
  parity, music range/Accept/restart and human acceptance still need completion.


2026-09-15 v168: staged gameplay focus-loss and recovery
- Ran actual !GAME v165 at1080p headless/muted using acknowledged, process-local
  focus events. Never changed desktop focus or sent OS keyboard/mouse input.
- Six assertion phases in focus-v168-checks.json: W+left mouse gives
  A255/LY32767; focus0 clears all axes/buttons; S+right mouse while unfocused
  stays neutral; focus1 stays neutral without synthetic key-up events; fresh
  A+right mouse gives B255/LX-32767; releasing both returns all-neutral.
  These distinguish clearing stale inputs from simply disabling controls.
- All six captures inspected individually and sequentially: baseline level,
  attacking while moving, after focus loss, regained focus, fresh smash/left
  input and after release. Character, level artwork and HUD remain intact.
  Attack animation can finish after release; input logs establish neutral state.
  Does not prove physical focus/cursor behavior, hit damage, full level or audio.
- Expected exit3; all11 saved-data/build.ini hashes unchanged, no pc-settings.ini
  created. No game/renderer remains. No binary, IGB, PKGB or player file changes.
  Removed an extra EOF blank line in guard-pc-menu.py; no semantic change.
- Evidence: run-player-focus-v168.py, native-v168.log, worker-v168.log,
  focus-v168-checks.json, exit-v168.json and native-camera-v168 capture1..6
  under work/native-igb-menu-test. Goal/TODO2/3 remain unfinished. No commits.


2026-09-15 v169/v170: volume midpoint Accept and restart
- Saved Music0.5/Effects0.5 with native Accept and Yes in the private fixture.
  v169 snapshots verify both draft and accepted native manager values, including
  level-one after movement/attacks. settings.dat changed from baseline and the
  accepted file is retained as settings-half-after-v169.dat (428bytes).
- A fresh v170 process reads0.5/0.5 before any slider action; assertions confirm
  both values remain after Back and through gameplay. This proves persistence
  through a full restart, rather than retention within one process.
- Native DSP capture is active before host mute. v169 four-second windows:
  baseline RMS2238.83; draft half1026.08; accepted main-menu1053.61; gameplay
 1494.71. v170 per-window values archived in volume-audio-v170-analysis.json.
  Together with native gain snapshots, this is setting/output evidence, not
  listening-based crackle, full-level or all-audio-event acceptance.
- Inspected all four v169 and all three v170 captures individually, in order.
  Sliders visibly at half; Cerebro retained; normal main-menu return and level
  character/HUD/environment intact. Both runs expected exit3. No new artwork
  screenshot posted because the visual content is already represented.
- Private original settings restored byte-for-byte after v170; PC settings hash
  unchanged. All11 !GAME saved-data/config hashes remain unchanged. No runtime,
  renderer, IGB, PKGB or staging changes; !GAME is still v165. No commits.
- Evidence under work/native-igb-menu-test: run-native-volume-save-v169.py,
  run-native-volume-restart-v170.py, native/worker-v169/v170 logs,
  audio-manager snapshots, volume-audio PCM/CSV/analysis, native-camera captures,
  exit JSON and before/after settings. Goal/TODO2/3 remain open for outstanding
  menu/control parity, asset reproduction and human acceptance.

## Native device panel work, v171-v173 (private, not staged)

Added `scripts/author-menu-device-list.py` and native device_1..4 values/actions.
The original Advanced IGB now contains four player/controller-slot connection
rows; selecting a row opens that player's controller bindings (keyboard bindings
for a keyboard-only routed player). Status describes active routing, not pending
assignment changes. No hardware model names are guessed and no channel ABI change
was needed. PKGB format, paths, declarations and associations are unchanged.

v171 exceeded the original menu collector's fixed 128-pointer stack array and
crashed opening Options in sub_00148A80, with iteration index 129. The corrected
asset reuses dormant controls_list/controls_list2 anchors. Authoring and the
package audit now reject the authored x2m_options layout above 128 transforms.
No runtime workaround was added. v172 opened, showed individual slot connection
updates, selected Player 4, handled disconnect/reconnect, and returned to actual
level-one gameplay. All six native captures were inspected individually. The two
reused list anchors had different text offsets; v173 copies the label anchor
structure into those existing nodes to align the rows.

v173 captures 1 and 2 show aligned rows, live Cerebro, and Player 1 selection.
Capture 3 shows the relocated binding prompt above the player tabs without
covering device rows, but also exposes missing/clipped left-panel and pagination
text while binding capture is active. This is unresolved visual evidence, not a
passing menu acceptance result. Capture 4 shows the level-one street, Wolverine,
HUD and enemies following process-local movement/attack input; it does not prove
combat hits or multi-hero input. All four captures were inspected sequentially.
Muted runs do not establish audio quality. v172/v173 input and connection tests
use process-local synthetic controllers, not physical device acceptance.

The v173 IGB and menu authoring reproduced byte-for-byte from before-v171 input:
`device-list-repro-v173.json`. Package audit passed including English, French and
German associations. Runtime optimized build passed. !GAME remains v165 game /
v159 assets. The private fixture has v171 game code and v173 assets; do not stage
until the binding text issue and lower-resolution layout are checked. No settings
were applied and no save was requested. TODO2/3 remain open.

Both v172/v173 ended with the test watchdog's expected exit 3. Private PC INI and settings.dat baseline hashes remain unchanged; all 11 player settings/save/build.ini hashes match the pre-test inventory. No player PC INI was created. No test process remains running.

## Rebinding text-loss diagnosis, v174-v176

v174 reproduced the exact navigation and binding capture with the previous v159
layout/menu and current device-capable runtime. All four native captures were
inspected individually: baseline, controller table, active binding prompt and
level-one gameplay. Text remained intact with the earlier layout. Expected test
watchdog exit 3 was recorded. This isolates the new content/layout as the trigger,
not a general claim of complete rendering regression coverage.

v175 restored v173 assets and sampled the native font writer at 00548FEC using
read-only process memory. Its capacity (+10) was 3840 vertices. Maximum observed
start (+18) plus count (+24) was 3564 in the keyboard table, 3750 in the controller
table and 3839 during active binding capture. The actual third capture again lost
Resolution/FSAA and part of Keyboard player. The original sub_00144910 explicitly
stops writing when start + count + 1 reaches capacity. All four captures were
inspected individually, including subsequent level-one gameplay; exit 3.

The v176 source change updates only the original font allocation argument at
001457BE from 0xF00 to 0x1E00 (3840 -> 7680 vertices), through its existing
001495B0 initializer. It preserves the native writer bounds check, buffers,
resource loading and rendering. No device row, binding action or full text was
removed to fit the old limit. This is in scripts/guard-pc-menu.py, with a verified
original boundary and idempotent replacement. Optimized build passed. Private
v176 validation is recorded below once its process finishes; !GAME is unchanged.


v176 validation passed for the reproduced text-loss flow. Four native captures
were inspected individually and sequentially: keyboard/device panel, selected
Player 1 controller table, active binding prompt and level-one gameplay after
Cancel/Back. The Resolution, FSAA, Keyboard player and pagination text remain
intact during rebinding. Read-only samples measured 3564 / 3750 / 3978 vertices
against capacity 7680, proving the formerly truncated flow now fits. The test
watchdog ended with expected exit 3. Private PC INI and settings.dat hashes are
unchanged; all 11 player settings/save/build.ini hashes remain unchanged.
!GAME still contains the preceding staged revision. Lower-resolution device
panel checks and broader acceptance remain; TODO2/3 stay open. This muted test
does not establish audio quality or successful combat hits.


## Device panel staging, v177/v178

v177 used native 1280x720 output (an environment override; the saved resolution
label remains 1920x1080). All four captures were inspected individually and
sequentially: full device panel, Player 1 controller selection, active binding
prompt and level-one street gameplay. Rows, header, prompt, page controls and
footer fit; live Cerebro remains behind the menus. Native text usage stayed below
7680 vertices. Expected watchdog exit 3. No settings were applied.

Staged v176 game code and v173 assets through scripts/stage-player.ps1. Backup:
work/player-stage-backups/20260915-110840-9f812162. Two menu resources changed:
ui/menus/x2m_options.igb and ui/menus/options_controller_xbox.eng. PKGB declarations
and paths remain unchanged. The player Read Me now explains the device panel and
binding selector. Menu package audit passed before staging. Actual player build
validation v178 follows below; broader TODO2/3 acceptance remains open.


v178 actual !GAME verification passed the exercised 1080p flow. Five native
captures were inspected individually in order: normal Options, Advanced device
panel, Player 1 controller selection, active rebinding, and level-one gameplay
following Back/Cancel. Labels, controls, panels and live Cerebro remain visible;
the level capture includes textured street geometry, Wolverine, enemies and HUD.
This does not prove combat hits, subjective audio quality, every transition or
human keyboard/mouse acceptance. Expected watchdog exit 3; no process remains.
All 11 player settings/save/build.ini hashes are unchanged and no pc-settings.ini
was created. Player game SHA256:
BBCD8BFF536FBA08C1F21ABB0BBD47F2D1BA5E29C1367FAB56734DF06277418F.
Player renderer remains v148, SHA256:
8BC7FEEF8699942A4688B4373F56B3D7B112B62E5C824F7D17DC2F2D9AC76306.

## Profile preset correction, v179 (private test build)

Defaults 1/2/3 now select the chosen player's keyboard preset and restore that
player's native controller defaults regardless of the current binding-table
view. Previously the controller view bypassed keyboard preset selection. Other
players, display/input options and the current table view remain unchanged.
Read-only XML2 table inspection found that its three profiles differ in the
keyboard pairs; this does not establish exact XML2 controller behavior. Keeping
XML1's native pad defaults is an explicit adaptation.

Optimized pc-controls-test and game builds passed. Tests exercise all three
presets from both views, profile isolation, invalid indices and Cancel. Native
v179 selected Defaults 2 from the controller view and displayed J/K after
switching to keyboard. Cancel and reopening restored Num 4/Num 6. All five
captures were inspected individually in sequence, including subsequent level-one
gameplay with textured scenery, Wolverine, enemies and HUD. Cerebro and menu
text remained visible. The test ended with expected watchdog exit 3.

Private PC settings and game settings hashes are unchanged. All 11 player save,
settings and build.ini hashes are unchanged; no player pc-settings.ini was
created. This muted flow does not prove audio quality, successful combat hits,
or preset Apply/restart persistence. v179 remains private; !GAME remains v176
with v173 assets. TODO2/3 remain open.

## Preset Apply/restart and staging, v180-v182

v180 selected Defaults 2 from the controller table, switched to keyboard and
applied it. The native screen reported Settings saved with J/K. The serialized
INI contains those bindings. All existing nonselected INI values were retained;
the older baseline omitted controller sections, which the current serializer
makes explicit. Full profile isolation is covered by the model tests, not by
interpreting newly serialized defaults as unchanged file bytes.

v181 launched a fresh process and displayed J/K without editing. It then reached
level one and exercised W and J through the process-local input harness. All
five v180 captures and both v181 captures were inspected individually in order.
Cerebro, labels and menu artwork remain visible; gameplay includes Wolverine,
enemies, textured street scenery and HUD. These captures do not establish combat
hits or audio quality. Both runs ended with expected watchdog exit 3.

The applied INI is archived as pc-settings-applied-v181.ini; the private baseline
was restored after both processes exited. Staging used the standard package
auditor and backup workflow, preserving the preceding player files under
work/player-stage-backups/20260915-112633-400b344f. No menu resources or PKGB
declarations changed. The player Read Me explains preset behavior from either
binding view. Staged game SHA256:
7A63B2B4A7A090292E4558034BF6FA4B85C8E4D82A645E1A6279C4EBBB542D4F.
Actual player-folder validation v182 is pending below. Broader acceptance and
human keyboard/mouse gameplay remain open; TODO2/3 are not complete.

v182 actual !GAME validation passed the exercised flow: controller-view Defaults
2, switch to keyboard showing J/K, Cancel/reopen restoring Num 4/Num 6, then
level-one gameplay. All five native captures were inspected individually in
sequence. Cerebro and complete menu text remain visible; gameplay shows textured
street geometry, Wolverine, enemies and HUD. Expected watchdog exit 3. All 11
player settings/save/build.ini hashes remain unchanged; no player pc-settings.ini
was created. Private settings.dat and restored PC INI match their baseline
hashes. This adds staged preset/Cancel evidence, not full combat, audio or
mixed-player acceptance. No TODO entries were removed.

## Mixed-player fixture investigation, v183/v184

Both private runs use unchanged v179 code/v173 assets and the private copy of
Game 1, Central Park (14 minutes). Loading succeeds and reaches the extraction
point with Wolverine. A process-local port-two Start opens pause; mouse selection
of Players opens the native Change Players screen, listing Player 2 as inactive.
v183 ended with expected watchdog exit 3 before activation. Its five captures
were inspected individually in sequence, including the loaded gameplay.

v184 repeated the load, activated Player 2 with its A button and accepted with
Start. The native screen moves Player 1 to inactive and Player 2 to active; it
does not show two active players. B resumes gameplay. Keyboard W while Player 1
is inactive shows no visible displacement. A subsequent port-two Left command
is acknowledged and reaches game input, but the capture shows a pose change,
not convincing displacement. Health/energy bars are absent after the ownership
change, while Wolverine's portrait remains. This needs investigation in a valid
multihero scene; it is not a mixed-player acceptance pass. All six captures were
inspected individually in sequence. Expected watchdog exit 3.

The late commands after each scripted flow are recorded in the logs and
mixed-player-audit-v184.json. No code, asset, package or staged player changes
were made. Private save copies and PC INI baseline are unchanged; all 11 player
save/settings/build.ini hashes match the baseline. A later save location with
multiple playable heroes has been requested. Other independent acceptance work
can continue; the goal remains active.

## Close view angle, v185-v187

Unchanged v179 game/v173 assets, private fixture, native 1080p captures and
acknowledged process-local input. v185 selects Close from Normal with two mouse
activations, uses Back and reopens Options: Normal is restored. It then reaches
level-one gameplay with normal framing. All four captures were inspected
individually and sequentially. Expected watchdog exit 3; settings.dat remains
at baseline SHA256 53DB1694...8ABB8.

v186 selects Close and uses native Accept/confirmation. The following level-one
capture shows visibly larger Wolverine and nearby scenery with intact HUD,
consistent with closer framing. All four captures were inspected individually
and sequentially. Expected watchdog exit 3. Applied settings.dat SHA256:
839B8F18C0ABBEC72A5EBF970B49B8588CDDD36539C26315D96818B8CEE43690.
The original is retained in settings-before-v186.dat and applied bytes in
settings-applied-v186.dat, with a byte-difference report.

v187 launches fresh with those accepted settings: Options displays Close, and
level-one gameplay retains the closer framing. Both captures were inspected
individually in order. This verifies Close selection, Cancel and accepted
restart behavior in this scene; it does not establish cycle/follow behavior,
scripted-camera coverage, audio quality or mixed-player acceptance. Test exit
and private baseline restoration are recorded below after shutdown.

v187 ended with expected watchdog exit 3. Private settings.dat was restored
after process exit and its baseline hash verified, as was the unchanged private
PC INI. All 11 player settings/save/build.ini hashes remain unchanged. No binary
or asset changes were necessary; !GAME remains v179/v173. TODO2/3 stay open.

## 640x480 output versus native 4:3, v188

Actual !GAME v179/v173, renderer environment override 640x480, no saved settings
changes. All five captures were inspected individually in order: normal Options,
Advanced, controller table, active rebinding and subsequent level-one gameplay.
The complete panels and prompts remain on-screen and Cerebro is visible. Small
device/status text is difficult to read at this output size. Gameplay geometry,
Wolverine and HUD render, but proportions are horizontally compressed.

This is not native 4:3 acceptance. Source inspection confirms the override only
sets renderer output dimensions; the current kernel ExQueryNonVolatileSetting
XC_VIDEO and AvSendTVEncoderOption capability results still advertise widescreen
and HDTV. Therefore this test resizes the existing widescreen game layout. A
true 4:3 test requires consistent guest video configuration, followed by visual
and input verification. Do not cite v188 as proving that requirement.

Expected watchdog exit 3; no process remains. All 11 player settings/save/build.ini
hashes are unchanged and no player pc-settings.ini was created. No code, menu
assets, PKGB declarations or submodule files were modified. TODO2/3 remain open.

## Guest video configuration and presentation dimensions, v189-v192

The runtime now exposes a startup video-flags configuration API, used by both
ExQueryNonVolatileSetting(XC_VIDEO) and the encoder preference/capability queries.
XML1 selects 4:3/480p when the renderer override is 640x480; normal HD output
retains the preceding widescreen/480p/720p flags. Only the relevant kernel.h,
kernel_xbox.c and kernel_hal.c sections were edited; unrelated submodule changes
were preserved. video-settings-test passes both configurations and their
dashboard/encoder agreement.

v189 exposed a separate native bridge defect: first concrete viewport was
1440x480, containing multisample expansion, while the logical presentation
dimensions were 720x480. The renderer and mouse bounds consequently used twice
the proper width. All five captures were inspected in order; they show a
half-width menu/gameplay, not acceptance. Expected watchdog exit 3.

The bridge now reads the original Direct3D_CreateDevice presentation dimensions
from its verified fifth argument instead of inferring them from the first
viewport. v190 records 720x480 and fills 640x480 with proper 4:3 proportions.
Its five captures were individually inspected: Options, Advanced, controller
table, a failed test-coordinate click, then gameplay. The click did not enter
rebinding because the old harness coordinate assumed resized widescreen.

v191 corrects the process-local test coordinates for the native 4:3 projection.
All five captures were inspected individually and sequentially: Options,
Advanced, controller selection, active binding capture, and level-one gameplay.
Controls and prompts fit; outer decorative rails touch the edges. Small device
labels remain small at 480p. Cerebro, menu artwork, street geometry, Wolverine
and HUD remain visible. Expected watchdog exit 3. No settings were applied.

The graphics-fence fixture now also verifies that a 1440x480 initialization
viewport cannot override 720x480 presentation dimensions, and that a subsequent
1280x720 device updates them. Its previously missing native-menu test doubles
were supplied as fail-fast unexpected-call stubs. It and the original fence
cases pass. Optimized game build passes. Private game SHA256:
4C02832F205864C98668FB317048699EBCED296012FF1F54B6186551DD2F0B31.
1080p regression v192 is pending; !GAME remains v179/v173 until validation.

v192 1080p regression passed: all five native captures were inspected individually
in order (Options, Advanced, controller selection, active binding and level-one
gameplay). The source dimensions correctly remain 1280x720, scaled to 1920x1080.
Cerebro, labels, gameplay scenery and HUD remain intact. Expected watchdog exit 3.

Staged v190 binary using the audited player workflow; no menu resources changed.
Backup: work/player-stage-backups/20260915-121200-627a9da9. Actual !GAME validation
v193 is pending. The 640x480 route is currently a renderer environment override
for testing; the normal player resolution selector remains 720p/1080p.

v193 actual !GAME validation passed for the exercised flow. All five native
captures were inspected individually in sequence: Options, Advanced Options,
controller selection, active binding capture, and level-one gameplay. The blue
imported menu artwork, moving Cerebro background, binding prompts, street scene,
Wolverine and HUD are present at 1920x1080. Expected watchdog exit 3; the test
process is no longer running. All 11 baseline player save/settings/build.ini
hashes remain unchanged, and no player pc-settings.ini was created. The private
INI and settings.dat also retain their baseline hashes. This muted run does not
verify audio quality, combat hits, or mixed-player gameplay. TODO 2/3 remain open.

v194 extends tests/pc_input_integration_test.c through the production guest input
entry points for all four keyboard-player assignments in both Shared and
Separate modes. Each case checks independent physical attack strengths, a quick
W tap surviving device enumeration and all non-owner polls, one-time consumption
by its owner, and keyboard-only connectivity after all pads disconnect. All eight
cases pass in the optimized build, alongside existing focus/capture/remap/rumble
checks. No physical device calls occur in the synthetic portion. Log:
work/native-igb-menu-test/mixed-routing-v194.log. An initial fixture assertion
incorrectly inspected the undefined payload of a failed disconnected-device read;
it was restricted to successful reads, preserving the disconnect-result checks.
This is input-boundary evidence, not multihero gameplay or human acceptance.
No production code, player files, assets or saves changed in this check.


v196/v197 global reset acceptance: seeded private sensitivity 175%, inversion On,
and MoveForward=T for players 2–4. Native Advanced Options showed those changes;
Reset all settings restored sensitivity 100%, inversion Off and player 4 W.
Apply displayed Settings saved. The serialized four keyboard/controller profiles
were checked for matching defaults (including MMB camera drag and empty alternate
pad bindings); all three seeded nonselected/selected keyboard profiles reset.
Fresh v197 startup displayed the retained defaults and player 4 W. Both runs
continued into level one with scenery, Wolverine and HUD intact. All five v196
and both v197 captures were individually inspected in order. Both exited via
the expected watchdog (3). These muted runs do not prove audio quality, combat
hits or multihero behavior. Native reset Cancel acceptance remains outstanding.
The private baseline INI was restored after v197 terminated. Its baseline hash,
the private native settings.dat hash and all 11 player baseline hashes match;
no !GAME pc-settings.ini was created. Production code/assets were unchanged.


v198 native Reset/Cancel acceptance passed. The private baseline started at 125%
sensitivity. Reset displayed 100% and the Apply-or-Cancel prompt; clicking Cancel
closed Advanced Options. Reopening via Space restored 125%, with Cerebro and the
menu artwork intact. Continued into level one: scenery, Wolverine and HUD are
present. All four native captures were inspected individually in order. The
process finished with expected watchdog exit 3. Private pc-settings.ini and
settings.dat retain baseline hashes; all 11 player hashes remain unchanged.
No production changes or staging were needed. This muted test does not establish
audio quality or multihero gameplay. Together with v196/v197, the native global
reset Apply/restart and Cancel/reopen flows are now covered for the tested values.


v199 traced the apparent sixth changed IGB: menu_options_controller.igb in !GAME
is byte-identical to canonical-extraction/native, preserving XML1 localization.
It is not an edited XML2 import. Added the three actually consumed tab PNGs to
menu-import-sources.json, verified against authoring reports and the installed
XML2 files. prepare-menu-import now checks/copies 26 inputs at original paths.

Rebuilt both final tab model IGBs from the fresh v199 recolored model inputs and
fresh PNG copies using author-menu-tab-art (players then defaults), followed by
author-menu-tab-selection. Both match !GAME byte-for-byte; the resulting layout
matches the v158 intermediate. Verification: work/menu-tabs-v199/verification.json.
The experiment still uses preserved before-v144 layout and v157 package inputs;
it does not prove the complete menu layout/content chain is reproducible from
originals. No player files were changed and no runtime smoke was needed because
the reproduced model bytes are identical to the already staged/verified assets.


v200 rebuilt both final volume model resources. Starting with freshly recolored
XML2 m_options_screen and m_options_sound_select from menu-import-v199, ran
volume-animation, track-split, then volume-tracks. The native animation donor
was canonical-extraction/native/ui/models/model_bar_sound.igb, not the private
modified reference. Its file hash differs from the old reference but the consumed
animation graph produces the exact same animated model hash. The split panel
and reattached tracks produce both final model hashes identical to !GAME:
- m_options_screen: e86dd8466c0485f641e700294ea884071643d549c92298cf0166920abfe20d7c
- m_options_sound_select: 5f56f75aad0c2c7a29ecba0311e96afe902bf3b3d43977d5588dc5b168e7e3c9

The resulting layout also matches the v134 intermediate. Evidence, commands'
outputs and per-stage source hashes are under work/menu-volume-v200. This still
uses preserved before-volume-animation and volume-input-v131 layout/content
inputs, plus before-static-volume-focus contents. Thus four final edited model
resources (tabs/focus and volume/panel) have fresh reproducibility evidence,
but the full menu layout/content chain is not yet consolidated. No player assets
or saves changed; byte-identical model outputs do not require another runtime
capture of the same content.


v201 replayed binding-columns and device-list from the freshly rebuilt v199
selected-tab layout. The resulting x2m_options.igb and options_controller_xbox.eng
both match !GAME byte-for-byte (703ef297... and 30c4ef56...). The device-list step
uses preserved before-v171 menu contents and the current package, whose hash
matches its recorded 4c6c0738... input. before-v171 has no package copy; an initial
command failed on that absent path before writing output, then used the verified
current package. Evidence: work/menu-layout-v201/verification.json.

Recorded fourteen hash-linked layout stages in work/layout-lineage-v201.json;
the initial traversal excludes data-local reports. The next earlier links were
located in data/ui/menus/x2m_options.advanced-link.json and type-output's type-scale
report (8ee61110 <- 4c6795f9 <- de1139fb). These records identify authoring inputs;
they alone do not establish full replay. Earlier layout and contents still need
consolidation before claiming a build from original imports. No player files,
assets, settings or saves changed; no repeat captures of identical output.


v203 resolved the next layout gap by comparing serialized field values: only
fx_vol/music_vol transform matrices differ between c3e14675 and de1139fb. The
existing author-menu-sliders step supplies exactly those changes. Added sliders
and type-scale to prepare-menu-layout.py. All five stages reproduce their recorded
hashes from original inputs, with no historical layout snapshots. The recolored
model_bar_sound intermediate also matches the old private 2b02e5ac... reference,
explaining its difference from the canonical source noted in v200. Verification:
work/menu-layout-v203/verification.json. The next step is the Advanced footer;
menu-content preparation remains separate and unfinished. Player staging/saves
were not changed, and no game was launched for these byte-identical rebuilds.


v204 adds prepare-menu-options.py and menu-options-seed-changes.json. The command
reads the hash-verified original XML2 options.engb binary tree, applies recorded
attribute/child changes, and writes ui/menus/options.eng at its original path.
It retains original items/animations and adds the fourteen authored PC table
items. The result semantically matches before-advanced-footer/options.eng:
all tags, attributes, text and child ordering agree. XML attribute serialization
order may differ; no byte-identity claim is made for these menu contents.

Reproduction command from the repository root:
```powershell
.venv/Scripts/python.exe scripts/prepare-menu-options.py --source work/menu-import-clean/original/UI/menus/options.engb --output-assets work/menu-options-clean
```

This remains an intermediate definition, not player staging. Replayed
advanced-link with that fresh definition and v203 type-scale layout; its IGB
matches 8ee61110... exactly. Evidence: work/menu-options-v204 and
work/menu-footer-v204. The package used was the current verified Options package;
its full declaration build still needs consolidation. Later Options/Advanced
content changes and layout steps remain. No player assets or saves changed.


v205 adds prepare-menu-packages.py and menu-package-declarations.json. It verifies
canonical XML1 package hashes, preserves their normal menu associations and every
original dependency, then writes the authored declarations using the standard
PKGB serializer. Both outputs are byte-identical to !GAME (23 and 22 declarations
respectively). No aliases, renames or fallback paths are introduced.

```powershell
.venv/Scripts/python.exe scripts/prepare-menu-packages.py --original-assets work/canonical-extraction/native --output-assets work/menu-packages-clean
```

This produces manifests only; referenced assets must still be present and pass
the existing package/IGB audit before staging. Replayed the footer with the fresh
package, fresh v203 layout and v204 menu; its IGB still matches 8ee61110... exactly.
Evidence: work/menu-packages-v205/verification.json and work/menu-footer-v205.
The footer/package stage no longer relies on the private data folder. Later menu
contents/layout authoring remain unfinished. No player files or saves changed.


v206 extends prepare-menu-options.py with --menu advanced. Its separate change
recipe adapts the same original XML2 Options definition into the native Advanced
seed at ui/menus/options_controller_xbox.eng, preserving resource association.
Reuses original nodes where possible and records only attribute/child changes.
The generated tree matches before-binding-focus semantically. Command:
```powershell
.venv/Scripts/python.exe scripts/prepare-menu-options.py --menu advanced --source work/menu-import-clean/original/UI/menus/options.engb --output-assets work/menu-advanced-clean
```

Using this fresh seed, the v205 footer, rebuilt PKGB and freshly recolored model
inputs, binding-focus and invisible-property cleanup reproduce the exact existing
5699383b... and 0823e22b... layout bytes. The chain now reaches the original input
to volume-animation without a layout snapshot. Evidence: work/menu-advanced-v206,
work/menu-focus-v206 and work/menu-focus-clean-v206. Later menu contents and later
layout stages still need connection; this is not full asset or goal completion.
No player files, assets, settings or saves changed; no game was launched.


v207 connected volume-animation, FSAA, player tabs, presets and display values
using only freshly rebuilt layout/menu/package outputs and original model inputs.
All five layout stages match their historical IGB bytes. Both volume-animation
menu trees match the preserved versions semantically. Evidence: work/menu-animation-v207,
work/menu-fsaa-v207 and work/menu-chain-v207/verification.json. The chain reaches
824934f5..., the input to final volume-track authoring. Compared current rebuilt
Advanced contents with the volume-input-v131 reference and recorded remaining
content differences in work/menu-chain-v207/content-gap.json where applicable.
This connects layout stages but does not yet establish complete final menu
content reproduction or gameplay acceptance. No player files/saves changed.


v208 closes the layout/model chain. Device-sensitive footer prompts were the two
Advanced differences; applying author-menu-prompts also reproduces normal Options
volume-input contents semantically. Fed the fresh layout, animated model, menus,
packages and original recolored models through volume-tracks, binding-device,
player/default tab art, tab selection, binding-columns and device-list. All five
final authored IGBs match !GAME byte-for-byte. Evidence:
work/menu-final-chain-v208/verification.json. No historical layout/menu snapshots
were inputs to this final chain; it consumes the freshly rebuilt v199–v207 outputs.

The chain still needs one consolidated command, final menu-content changes and
original XML1 localized dependencies copied/audited. Recorded the remaining menu
content differences in work/menu-final-chain-v208/remaining-content.json. This is
asset reproducibility evidence, not renewed runtime or goal acceptance. !GAME,
settings and saves were not changed; no game was launched.


v209 resolves all six final normal-Options differences through the existing
View Shake authoring step. Both final menu trees now match !GAME semantically,
including root attributes, ordered children, item values and commands. Assembled
the complete declared menu asset set at work/menu-complete-v209, copying original
XML1 model dependencies and French/German contents from canonical extraction.
The 33 files are the two manifests plus 31 declared resources. The existing
package/IGB audit passes for both menus. All 31 files other than the two English
menu definitions match !GAME byte-for-byte; those definitions differ only in
XML serialization while their trees agree. Evidence: rebuild-manifest.json in
that output and work/menu-complete-v209-audit.json.

This establishes complete asset reconstruction through the recorded stages;
one consolidated command and native validation of the freshly serialized English
contents remain. No player assets or saves changed. Broader runtime/human
acceptance remains required before completing TODO2/3.


### v210-v212: reproducible assets and player staging

`scripts/build-pc-menu-assets.py` reproduces all 33 package/resource files from
original XML1/XML2 inputs and the pinned IGB writer, without historical test
snapshots. Two fresh builds agree byte-for-byte. IGBs and PKGBs match the
previously tested assets; both English definitions have equivalent parsed
content with different serialization. Package/path/model audit passes.
Evidence: `work/menu-build-v210`.

Private v211: all five captures inspected individually in sequence: Options
and Advanced over Cerebro, controller bindings, active binding capture, and
level-one scenery/Wolverine/HUD after process-local movement/attack input.
Expected watchdog exit 3. This establishes menu display and gameplay entry,
not combat hits or audio (muted). Private settings and 11 player baseline files
unchanged. Staging changed only the two English definitions; originals at
`work/player-stage-backups/20260915-131130-df3d31fc`. Binaries remain v190/v148.
Actual staged v212 validation passed the same five inspected capture states,
including level-one entry, with expected watchdog exit 3. All 33 staged assets
match the fresh build. All 11 player baseline files remain unchanged; no player
pc-settings.ini was created. Muted testing does not establish audio or combat
hit acceptance. TODO2/3 remain open.


### v213: rebuilt menus with saved 720p settings

Private INI Width=1280/Height=720, no resolution environment override. Inspected
all five 1280x720 native captures individually in sequence: Options/Advanced
retain Cerebro and complete controls; controller selection and binding capture
hit-testing work; Back returns safely and Begin Story reaches level-one scenery,
Wolverine and HUD after process-local movement/mouse-attack input. Expected
watchdog exit 3. This proves the tested layout and gameplay entry, not combat
hits, full level traversal or audio (muted). Private INI restored byte-for-byte;
private native settings and all 11 player baseline files unchanged. !GAME keeps
its user settings. Evidence: work/native-igb-menu-test/run-720-menus-v213.py,
native-v213.log, worker-v213.log, native-camera-v213-capture-1..5.bmp.
TODO2/3 remain open, including human keyboard/mouse and mixed-player acceptance.


### v214: keyboard power modifier with mouse attack in saved gameplay

Loaded a private copy of the Central Park save. Five native captures inspected
individually in order: intact scenery and level-2 Wolverine HUD; Num5 opens
the power selector; left mouse while Num5 is held triggers the raised-claws
power animation; releasing both closes the selector with reduced energy; fresh
W movement then moves Wolverine relative to the extraction point. An enemy
approaches and attacks. No landed-player-hit claim follows from these captures.
The input sequence uses fresh renderer acknowledgments and process-local input
only. Expected watchdog exit 3. Muted, so no audio acceptance. Evidence:
work/native-igb-menu-test/run-modifier-power-v214.py, native-v214.log,
worker-v214.log and native-camera-v214-capture-1..5.bmp.

Player baseline files, private INI and both private save.dat copies remain
unchanged. User explicitly assigns mixed-device validation to beta testers;
continue keyboard/mouse validation only. Existing mixed-device implementation
is retained, but no additional mixed-device play tests are required here.


### v215-v216: keyboard pause routing defect

v215 inspected all five native captures sequentially. Mouse attacks occurred
without an enemy in range, so this does not verify landed hits. Esc opened the
pause menu, but a second Esc opened Objectives instead of resuming. Expected
watchdog exit 3. Player baseline files remained unchanged.

The mapper sent the gameplay Pause/Start action inside native menus, where
XML1 treats Start as accept. pc_gamepad.cpp now emits native Back for Esc when
native_menu is true; gameplay retains Pause. Existing native-menu transitions
clear held inputs. A focused regression checks gameplay Pause, menu Back with
no Accept/Start, and release; pc-controls-test passes. Rebuilt game copied only
to the private fixture for v216; !GAME has not received the pending fix.
Native validation is running via run-pause-v216.py.


v216/v217 native acceptance did NOT pass. All five captures from each run were
inspected individually and sequentially. v216 remained in the main menu; v217
remained in the introductory movie. Both ended at expected watchdog exit 3.
Changing Esc for every native_menu context also changes startup/movie handling;
the current broad native_menu flag is insufficient to establish correct routing.
The private candidate (SHA256 8E6B74A121423CDDE07ADE4BFC6BACF1D29299CF75ADC2CD81355AF0B06161ED)
and focused unit test do not establish the requested pause behavior in-game.
Refine context handling/preserve movie skip and use observed state transitions
in the harness before further staging. !GAME remains the prior verified binary
4C02832F205864C98668FB317048699EBCED296012FF1F54B6186551DD2F0B31;
all player baseline files unchanged. No mixed-device play tests were run.


### v218: pause-class-specific Esc routing

Read the original XBE PAUSE_MENU string at 003DF110 and its factory branch
001723D3, calling constructor 00172100; the constructor installs vtable
003DEE44. The graphics menu observer now reports the current owner's vtable.
Only PAUSE_MENU enables the input snapshot's pause/Back bit. The existing
native-navigation bit remains separate, preserving startup/movie Start behavior.
The mapper uses the pause bit for Esc rather than all native-menu contexts.
No game resource paths, menu definitions, save data or guest menu code changed.

pc-controls-test now covers Start in gameplay and ordinary native contexts,
Back without Start/Accept in pause context, and release. It and the graphics
fixture pass. Private native v218 is running; staging awaits visual acceptance.


v218 native validation passed the specific pause fix. All five captures were
inspected individually in sequence: saved Central Park gameplay, mouse-attack
state/release, Esc pause menu, then Esc back to the intact world/HUD. Startup
Esc/Start worked again. Expected watchdog exit 3. No enemy reached attack range;
these captures do not establish landed hits. Muted, so no audio claim.

Staged the verified binary through stage-player.ps1 with the audited v210
resource set (no menu asset changes). Staged/private executable bytes match;
player baseline files and private INI remain unchanged. TODO2/3 stay open for
remaining keyboard/mouse acceptance, with mixed-device play assigned to beta.


### v219: actual staged keyboard/mouse run

Ran !GAME/X-Men Legends.exe (v218) invisibly/muted with process-local input.
Loaded the existing Central Park save, activated the first power using Num5
plus mouse, then sent ten left-click and eight right-click press/release pairs.
All five native captures inspected individually in order. Enemy approaches;
Wolverine's position/facing becomes unfavorable and the captures establish
player damage, not landed player hits or competent combat control. Do not
count this sequence as combat acceptance. Esc opens pause; the next Esc resumes
into the same world/HUD with enemy activity. Staged pause/resume passes.
Expected watchdog exit 3; all 11 player baseline files unchanged and no new
pc-settings.ini. No original assets, game settings or saves changed.

A human keyboard/mouse acceptance request now covers movement, left/right mouse
combat, first power, middle-mouse camera and Esc pause/resume. This is required
to assess actual control usability; fixed input sequences are not a substitute.
Mixed-device play remains explicitly assigned to beta testers. TODO2/3 remain
open until the remaining keyboard/mouse acceptance is resolved.
Evidence: run-staged-combat-v219.py, native-v219.log, worker-v219.log,
native-camera-v219-capture-1..5.bmp and exit-v219.json under
work/native-igb-menu-test.


### User acceptance and closure (2026-09-15)

User instruction: "Mark it complete". Closed the combined PC options and
keyboard/mouse goal and removed former TODO 2/3 from both summary and detailed
work, renumbering the remaining entries and internal reference. Existing test
limitations above remain historical evidence; no additional human test is
claimed. Mixed-device validation remains assigned to beta testers.
