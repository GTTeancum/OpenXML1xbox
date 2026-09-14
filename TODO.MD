# X-Men Legends 1 XboxRecomp TODO

## Summary

1. Smoke test various levels with 1–4 players.
2. Reach 40+ FPS across various levels at 1080p.
3. Add an option to run assetsfb.zip loose.
4. Support .pkgb manifests and loose resources instead of .fb bundles.
5. Integrate a PC options menu.
6. Integrate mouse and keyboard controls.
7. Verify save listing and loading.
8. Verify clean audio and headphone recovery.
9. Finish HD and window-behavior checks.
10. Plan the 32-bit/original-Xbox return path.
11. Document mod hooks and upstream reusable fixes.

## Detailed work

### 1. Multi-level smoke tests with 1–4 players

- [ ] Establish a named level/player-count matrix covering several levels,
      interiors/exteriors, heavy combat, and scripted transitions.
- [ ] Test each selected level with 1, 2, 3, and 4 local players: loading,
      independent controls, character selection, camera/HUD ownership, combat,
      powers, pause/resume, joining/leaving where supported, and level exit.
- [ ] Complete level 1 through its exit; successful subway traversal alone
      does not establish full level completion.
- [ ] Record pass/fail per matrix cell and reproducible defects with locations,
      builds, logs, and native visual evidence where useful.

### 2. 40+ FPS across various levels at 1080p

- [ ] Profile actual 1920×1080 gameplay, including heavy combat, effects,
      scripted transitions, and the 1–4 player test matrix.
- [ ] Remove measured bottlenecks without reducing rendering resolution,
      changing game speed, or sacrificing graphics/audio correctness.
- [ ] Demonstrate sustained gameplay at 40+ FPS using frame-time traces;
      an overall average hiding slow levels is insufficient. Report slow frames and stalls,
      with loading measured separately from active gameplay.
- [ ] Repeat representative tests with OBS recording enabled; report its cost,
      hardware, settings, build, and test duration.

Short entrance tests measured about 37 FPS at 1080p; sustained combat and
multiplayer performance remain unproven. See [HD output](docs/HD-OUTPUT.md).

### 3. Optional loose assetsfb.zip contents

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

### 4. PKGB manifests and loose resources instead of FB bundles

Dependency: item 3 establishes the outer archive's loose mode first.

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

### 5. Integrated PC options menu

- [ ] Inventory XML2 PC options and behavior from the installed reference,
      including display, graphics, audio, and controls; track parity explicitly.
- [ ] Integrate corresponding options into normal XML1 menus with XML1 styling
      and X-Men Legends 1 XboxRecomp branding.
- [ ] Implement functioning settings, apply/cancel, defaults, persistence, and
      clear handling of settings that require restarting.
- [ ] Verify 720p/1080p layouts and controller/mouse/keyboard navigation,
      including returning safely to gameplay.

Dependency: coordinate control configuration with item 6.

### 6. Mouse and keyboard controls

- [ ] Establish XML2-style defaults for gameplay and menus, including movement,
      attacks, powers, character switching, and pause.
- [ ] Implement mouse interaction and applicable camera/aim behavior after
      checking XML2; support sensitivity and rebinding.
- [ ] Persist bindings, expose them through PC options, and handle conflicts
      and input prompts when switching between keyboard/mouse and controller.
- [ ] Verify focus loss, cursor capture/release, and mixed-device local play
      without stuck inputs or one player's input affecting another player.
- [ ] Obtain a human gameplay check using the actual keyboard and mouse.

### 7. Save listing and loading after restart

- [ ] Save, confirm the load-menu entry, close/reopen the game, load the save,
      and confirm restored progress.
- [ ] Verify multiple saves and overwriting an existing save safely.

The directory-query ABI regression passes; the full human cycle is unconfirmed.
Preserve existing saves before tests. See [playtesting](docs/HUMAN-PLAYTEST.md).

### 8. Audio continuity and device recovery

- [ ] Verify 15–20 minutes of combat/transitions without crackle, stutter,
      missing sounds, or A/V drift; record reproducible remaining defects.
- [ ] Physically disconnect/reconnect headphones during gameplay; confirm the
      game survives, follows the default output, and resumes sound.

Simulated device-loss and native engine-restart tests passed; physical headphone
recovery needs confirmation. See [audio recovery](docs/AUDIO-DEVICE-RECOVERY.md).

### 9. HD presentation and window behavior

- [ ] Check HUD, menus, FMVs, effects, and transitions at 720p/1080p for clipping,
      incorrect framing, missing elements, and visual regressions.
- [ ] Confirm live title-bar FPS and the normal mouse cursor in human play.

### 10. Future 32-bit and original-Xbox return path

- [ ] Assess a 32-bit game runtime and document toolkit, compiler, memory, and
      platform requirements for an original-Xbox build.
- [ ] Define a staged implementation/validation plan preserving compatible
      game data and mod formats, with Windows-only features isolated.

The current Windows game is 64-bit with a separate 32-bit DX8 renderer; no
hardware port is implemented. See [Xbox return path](docs/XBOX-RETURN.md).

### 11. Durable mod hooks and reusable upstream fixes

- [ ] Document gameplay/script extension points that survive regeneration,
      with a reproducible mod example and validation workflow.
- [ ] Review local patches against upstream branches/PRs and submit suitable
      isolated toolkit fixes with reproducible evidence.

See [upstream review](docs/UPSTREAM-REVIEW.md).
