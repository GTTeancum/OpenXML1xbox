# NewGame+ implementation and validation

Completed and staged on 2026-10-02 in `XBOXgame/X-Men Legends.exe`, with the
native pause-menu assets beside it. NewGame+ is the bottom pause-menu row.
Load the campaign whose progression you want to keep, select NewGame+, and
confirm. Completion is unlocked by the game's native ending/profile flow.
The existing campaign save is not automatically overwritten.

## Behavior and traced boundaries

The native popup defaults to Cancel. Confirmation queues retail `newgame`;
it does not invoke a destructive reset inside the menu callback. The story,
world, mission and scripting state follow the ordinary native reset path.
Only these progression-clearing calls are skipped during confirmed NG+:

- Shared inventory/currency: `7E2F0`, from `18CFD8`.
- Campaign character availability: `54A10`, from `18CFFC`.
- Equipped items: `54F10`, from `18D008`.
- Danger Room credits/unlocks: `C0700`, from `18CFB5`.

The equipment boundary was missing before this completion pass. CharacterManager
vtable +34 walks playable definitions and calls `47810`, which clears the
CharacterStats equipped-item count at +1E0. Keeping shared inventory alone
lost equipped copies, because equipping had already removed them from that
inventory. The fix preserves the native equipped list only at the NG+ reset
call; ordinary resets, unequipping and unrelated callers retain their behavior.

At `18DAED`, NG+ invalidates the old Alison snapshot's valid flag, letting the
native snapshot capture establish carried progression as the new baseline.
It does not restore raw copies of character objects or host pointers. Both
native startup exits (`18D122` and `18D134`) clear the temporary NG+ flag.

Eligibility uses the initialized game and completion bit 1 at `4A03A5`.
The native credits-end flow sets that bit and serializes it in profile settings.
Costume/modderMode bit 0 alone does not qualify. There is no eligibility bypass
and no NG+-specific save format.

The PC-menu and NG+ regeneration guards now coexist idempotently at their
shared command-dispatch label. Boundary-local deduplication preserves both
startup-exit hooks. Menu authoring uses absolute scale, so repeated generation
does not progressively shrink the original artwork. Original resource names
and the pause PKGB path/declarations are preserved.

## Validation performed

All interactive inputs were contained in the private game process. No desktop
input, screen capture service or player saves were used. Test assets/saves live
under `work/stability-goal/clean-game`; evidence is in `work/ngplus-validation*`.

- Native ending fixture: ending FMV, unlock notice, save-unlocks prompt and
  return to the 3D main menu were inspected. The saved completion profile was
  subsequently loaded by fresh processes; no completion-bit bypass was used.
- Gate and Cancel: unfinished campaign rejected; eligible confirmation defaults
  to Cancel; Cancel returns to pause without resetting the campaign.
- Populated progression: native character UI purchased Brutal Slash to rank 4
  and equipped an Ultra Tissue Generator. Wolverine was level 45 / 589255846 XP;
  off-party Cyclops and Storm were level 17 / 100000 XP.
- NG+ restart: opening FMV and Columbus Avenue gameplay inspected. Purchased
  ranks, remaining upgrade points, equipped gear and unequipped copies survived.
  Read-only reset snapshots cover 38 constructed character records; the entire
  shared inventory and all recorded talent maps were byte-identical across
  the confirmed restart. `work/ngplus-validation4/carryover.json` records it.
- Actual gameplay: movement and power activation after NG+ reached the opening
  fight; an enemy was defeated and the native 7 XP award was visible (run 4,
  capture 13). This was not just a rendered-menu check.
- Native save/load: created Game 5 after the restart. A fresh process listed
  and loaded that save into gameplay. The native character UI still displayed
  level 45, four Brutal Slash ranks, 50 unspent points and the equipped generator
  (run 5, captures 2, 4 and 5).
- Repeat: another NG+ from that reloaded save returned to the start with the
  same inventory, talent maps and equipped gear; no item duplication was found.
  See `work/ngplus-validation5/carryover.json`. All four preexisting private
  save.dat hashes remained unchanged; only the requested new slot was added.
- Ordinary New Game control: using the restored production menus, loaded Game 5,
  exited to the main menu and chose Begin Story. It returned to level 1 / zero
  XP with empty equipment. Both trace and actual gameplay image verify this
  (run 6, capture 6). The NG+ exception did not leak into normal startup.
- UI: the eighth row, footer, Cancel/confirm text, original blue artwork and
  live backgrounds were inspected at 1920x1080 and 640x480. No clipping found.
- Programmatic progression suite passed: completion-bit gating, poisoned
  inventory/campaign preservation, equipped-gear preservation, unrelated-caller
  and ordinary-reset controls, ABI stack balance, expanded roster/snapshot/save
  framing, XP boundaries and costumes. Nonzero currency preservation is covered
  by the inventory boundary fixture; this pass's populated live save had zero
  currency. Earlier live validation had retained 75 currency.
- Both code guards and menu generation passed repeat/idempotence checks.
  English, French and German menu sources were compiled and their production
  commands verified after staging. The PKGB remained unchanged.

Validation limits: the completed profile was generated through the native ending
in an isolated fixture, not a naturally completed campaign. This is targeted NG+
coverage, not a replay of the entire campaign or every mod. Hidden runs were
muted, so audible audio quality was not verified. The older isolated renderer
pipe exit did not recur in these completed runs; this work does not claim to
resolve unrelated renderer or machine-specific stability reports.

## Staged files and reproduction

Executable SHA-256:
`a1beb1993ce646856938f038eddd04bd254b437b57b3d3522a357e3556ea14ad`.

The staged executable is self-contained, with no adjacent DLL dependencies.
Menu changes are `ui/menus/menu_pause.igb`, `ui/menus/pause.eng/fre/ger`, their
compiled `engb/freb/gerb` forms and the existing
`packages/generated/maps/package/menus/pause.pkgb`. Per-file hashes are in
`work/ngplus-validation6/staged-manifest.json`. Player originals are backed up
under `work/ngplus-player-backup`. No test commands/scripts were staged.

Rebuild the runtime with the `xml1-boot-probe` Release target. Author a new private
menu overlay with `scripts/build-newgame-plus-menu.py --assets XBOXgame --output
<new-overlay-directory> --writer-root work/igb-blender-reference`; compile the
three language files using `xmlb-driver compile`, then stage the overlay at its
original relative paths. `scripts/stage-player.ps1` stages the executable.

`XML1_NEWGAME_TRACE=<private-directory>` enables read-only boundary `.bin` dumps
plus `.talents` records containing each constructed slot's resolved talent map.
These diagnostics are dormant during normal play. Do not ship test saves,
completion profiles, captures, logs or private menu substitutions.
