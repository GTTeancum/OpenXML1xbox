# PC options and controls implementation

Active combined goal: TODO 2 and 3. Implementation and acceptance are pending.

## Presentation requirements (user correction)

Use the physically copied XML2 Options menu IGBs, recolored for XML1, and its
Options -> Advanced Options flow. Both screens retain the live 3D Cerebro menu
background. The generic renderer panel was rejected and is not a deliverable.
Keep the normal PKGB association and resource paths. Author changes to the IGB
artwork and the menu contents; do not replace this with a custom presentation
system, alternate resource routing, renamed assets, or a screenshot background.

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

### Package structure audit

The private fixture's Options and Advanced Options manifests were compared with
the installed XML2 Options PKGB. None of its model resource paths were removed
or renamed. Both retain `ui/menus/x2m_options` and its declared `ui/models/*`
dependencies. The two additional declarations are existing XML1 resources,
`ui/models/model_bar_sound` and `ui/models/m_invis`, at their original paths.
The per-resource existence and hash report is
`work/native-igb-menu-test/package-path-audit.json`.

The inherited `ui/models/m_options_controls_ps2` declaration is absent in both
the installed XML2 source and the private fixture. This is an unresolved source
inventory issue, not a passed completeness check. Do not invent a replacement
or alias. This audit does not establish visual or gameplay acceptance, and
the ongoing menu work has not been staged to `!GAME`.

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
