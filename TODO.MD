# X-Men Legends 1 XboxRecomp - Open Work Only

Last updated: 2026-09-13 EDT
Status: BACKLOG — awaiting user selection.

This is the canonical project tracker, patterned after Vigilante 8's TO-DO.MD.
Keep only open or explicitly deferred work. Remove entries when the user accepts
or closes them; keep completed milestones and diagnostic history in supporting
docs. Preserve issue IDs when reprioritizing; never reuse them. `Codex` marks
additional acceptance or maintenance work proposed by Codex.

## Open items at a glance

1. **OPEN — XML1-OPEN-001** — Smoke test various levels with 1–4 local players.
2. **OPEN — XML1-OPEN-002** — Keep gameplay consistently above 30 FPS at 1080p.
3. **OPEN — XML1-OPEN-003** — Add an option to run assetsfb.zip contents loose.
4. **OPEN — XML1-OPEN-004** — Subsequently replace .fb bundles with .pkgb manifests and loose resources.
5. **OPEN — XML1-OPEN-005** — Integrate XML2-style PC options, themed as X-Men Legends 1 XboxRecomp.
6. **OPEN — XML1-OPEN-006** — Integrate mouse and keyboard controls.
7. **AWAITING VERIFICATION — XML1-OPEN-007** — Confirm save listing/loading after restarting.
8. **AWAITING VERIFICATION — XML1-OPEN-008** — Confirm sustained clean audio and headphone recovery.
9. **Codex — AWAITING VERIFICATION — XML1-OPEN-009** — Finish HD and window-behavior signoff.
10. **Codex — AWAITING VERIFICATION — XML1-OPEN-010** — Validate a long recording and update public documentation.
11. **OPEN — XML1-OPEN-011** — Establish the future 32-bit/original-Xbox return path.
12. **Codex — OPEN — XML1-OPEN-012** — Document durable mod hooks and upstream reusable fixes.

**Work-selection rule:** Follow the user's selected task. When a `NEXT PRIORITY`
item is designated, select it before other open work. No next priority is assigned
here. Updating this backlog does not resume the stalled goal or launch testing.

## Standing implementation rules

- Use genuine Windows Direct3D 8 and preserve original game behavior.
- Keep the GameCube project untouched. Separate host systems from guest logic
  and preserve Xbox-compatible game data for the future Xbox build.
- Keep the ISO unchanged; assets, saves, captures, generated game code, and
  build products remain local and excluded from Git.
- Check XboxRecomp branches and pull requests before duplicating fixes.
- Use source, files, logs, native captures, and process-local test inputs;
  never automate the desktop or inject host input.
- Post screenshots only for new evidence. Human sessions have no time limit.
- Record build, settings, scenario, result, and evidence for verification.
  Implementation tests alone do not establish human acceptance.

## Issue register

### XML1-OPEN-001 - Multi-level smoke tests with 1–4 players

- [ ] Establish a named level/player-count matrix covering several levels,
      interiors/exteriors, heavy combat, and scripted transitions.
- [ ] Test each selected level with 1, 2, 3, and 4 local players: loading,
      independent controls, character selection, camera/HUD ownership, combat,
      powers, pause/resume, joining/leaving where supported, and level exit.
- [ ] Complete level 1 through its exit; successful subway traversal alone
      does not establish full level completion.
- [ ] Record pass/fail per matrix cell and reproducible defects with locations,
      builds, logs, and native visual evidence where useful.

### XML1-OPEN-002 - Consistently above 30 FPS at 1080p

- [ ] Profile actual 1920×1080 gameplay, including heavy combat, effects,
      scripted transitions, and the 1–4 player test matrix.
- [ ] Remove measured bottlenecks without reducing rendering resolution,
      changing game speed, or sacrificing graphics/audio correctness.
- [ ] Demonstrate sustained gameplay above 30 FPS using frame-time traces;
      an average above 30 is insufficient. Report slow frames and stalls,
      with loading measured separately from active gameplay.
- [ ] Repeat representative tests with OBS recording enabled; report its cost,
      hardware, settings, build, and test duration.

Short entrance tests measured about 37 FPS at 1080p; sustained combat and
multiplayer performance remain unproven. See [HD output](docs/HD-OUTPUT.md).

### XML1-OPEN-003 - Optional loose assetsfb.zip contents

- [ ] Add a documented option to load the extracted assetsfb.zip directory
      tree while retaining packaged mode as an option.
- [ ] Define path resolution, search precedence, fallback behavior, and
      missing-file diagnostics so modders can identify the asset being loaded.
- [ ] Verify boot, menus, saves, and representative levels in both modes;
      demonstrate an edited loose asset without rebuilding the ZIP.
- [ ] Document extraction, folder layout, configuration, and switching modes.

Reference: `C:/Games/X-Men Legends II/build.ini` and the installed XML2 layout.
The inspected build.ini declares build/language settings; it does not establish
a loose-mode switch. Investigate the actual loading behavior before choosing one.

### XML1-OPEN-004 - PKGB manifests and loose resources instead of FB bundles

Dependency: XML1-OPEN-003 establishes the outer archive's loose mode first.

- [ ] Document XML1 .fb contents and XML2 .pkgb package definitions, resource
      types, dependency order, and filename resolution.
- [ ] Provide repeatable conversion from .fb bundles to .pkgb manifests plus
      loose resources, with validation and actionable error messages.
- [ ] Integrate manifest loading and document precedence and compatibility
      with packaged content.
- [ ] Verify characters, maps, effects, scripts, and shared packages; edit a
      loose resource and reload without rebuilding its .fb bundle.

Reference: `C:/Games/X-Men Legends II/Packages/generated`, including
`common_ents.PKGB` and character/map subdirectories. The inspected PKGB is a
binary package definition containing resource types and filenames, not plain
text. Retain the XML2-compatible manifest workflow.

### XML1-OPEN-005 - Integrated PC options menu

- [ ] Inventory XML2 PC options and behavior from the installed reference,
      including display, graphics, audio, and controls; track parity explicitly.
- [ ] Integrate corresponding options into normal XML1 menus with XML1 styling
      and X-Men Legends 1 XboxRecomp branding.
- [ ] Implement functioning settings, apply/cancel, defaults, persistence, and
      clear handling of settings that require restarting.
- [ ] Verify 720p/1080p layouts and controller/mouse/keyboard navigation,
      including returning safely to gameplay.

Dependency: coordinate control configuration with XML1-OPEN-006.

### XML1-OPEN-006 - Mouse and keyboard controls

- [ ] Establish XML2-style defaults for gameplay and menus, including movement,
      attacks, powers, character switching, and pause.
- [ ] Implement mouse interaction and applicable camera/aim behavior after
      checking XML2; support sensitivity and rebinding.
- [ ] Persist bindings, expose them through PC options, and handle conflicts
      and input prompts when switching between keyboard/mouse and controller.
- [ ] Verify focus loss, cursor capture/release, and mixed-device local play
      without stuck inputs or one player's input affecting another player.
- [ ] Obtain a human gameplay check using the actual keyboard and mouse.

### XML1-OPEN-007 - Save listing and loading after restart

- [ ] Save, confirm the load-menu entry, close/reopen the game, load the save,
      and confirm restored progress.
- [ ] Verify multiple saves and overwriting an existing save safely.

The directory-query ABI regression passes; the full human cycle is unconfirmed.
Preserve existing saves before tests. See [playtesting](docs/HUMAN-PLAYTEST.md).

### XML1-OPEN-008 - Audio continuity and device recovery

- [ ] Verify 15–20 minutes of combat/transitions without crackle, stutter,
      missing sounds, or A/V drift; record reproducible remaining defects.
- [ ] Physically disconnect/reconnect headphones during gameplay; confirm the
      game survives, follows the default output, and resumes sound.

Simulated device-loss and native engine-restart tests passed; physical headphone
recovery needs confirmation. See [audio recovery](docs/AUDIO-DEVICE-RECOVERY.md).

### XML1-OPEN-009 - HD presentation and window behavior (Codex)

- [ ] Check HUD, menus, FMVs, effects, and transitions at 720p/1080p for clipping,
      incorrect framing, missing elements, and visual regressions.
- [ ] Confirm live title-bar FPS and the normal mouse cursor in human play.

### XML1-OPEN-010 - Long recording and current documentation (Codex)

- [ ] Verify a full 15–20 minute OBS take for audio sync, recording lag, and
      automatic MP4 finalization when the game closes.
- [ ] Add the user's public YouTube proof URL when supplied.
- [ ] Reconcile stale current-status claims in README/supporting docs while
      retaining historical diagnostics as history.

The approximately 4m36s take verified auto-stop and was uploaded publicly by the
user. See [recording](docs/RECORDING.md).

### XML1-OPEN-011 - Future 32-bit and original-Xbox return path

- [ ] Assess a 32-bit game runtime and document toolkit, compiler, memory, and
      platform requirements for an original-Xbox build.
- [ ] Define a staged implementation/validation plan preserving compatible
      game data and mod formats, with Windows-only features isolated.

The current Windows game is 64-bit with a separate 32-bit DX8 renderer; no
hardware port is implemented. See [Xbox return path](docs/XBOX-RETURN.md).

### XML1-OPEN-012 - Durable mod hooks and reusable upstream fixes (Codex)

- [ ] Document gameplay/script extension points that survive regeneration,
      with a reproducible mod example and validation workflow.
- [ ] Review local patches against upstream branches/PRs and submit suitable
      isolated toolkit fixes with reproducible evidence.

See [upstream review](docs/UPSTREAM-REVIEW.md).

## User review and signoff

- [ ] Accept the level/player-count matrix and sustained 1080p performance.
- [ ] Accept the loose-asset/manifest workflow using a real mod edit.
- [ ] Accept XML2 options parity, XML1 theming, and keyboard/mouse feel.
- [ ] Confirm save/load, clean audio, headphone recovery, and HD presentation.

## Deliberate boundaries

- This update defines work; it does not implement features or restart testing.
- Native DX8 and the future Xbox return path remain project requirements.
- No copyrighted reference-game assets are added to the repository.
