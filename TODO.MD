# X-Men Legends 1 XboxRecomp TODO

## Summary

1. Smoke test various levels with 1–4 players.
2. Verify clean audio and headphone recovery.
3. Confirm visible-window FPS and cursor behavior.
4. Plan the 32-bit/original-Xbox return path.
5. Make XboxRecomp friendlier to future Xbox builds with modern toolchains.
6. NewGame+, 35 roster size, 10 costume size, lvl 99 cap

## Detailed work

### 1. Multi-level smoke tests with 1–4 players

- [ ] Establish a named 1080p, 16:9 level/player-count matrix covering several levels,
      interiors/exteriors, heavy combat, and scripted transitions.
- [ ] Test each selected level with 1, 2, 3, and 4 local players: loading,
      independent controls, character selection, camera/HUD ownership, combat,
      powers, pause/resume, joining/leaving where supported, and level exit.
- [ ] Complete level 1 through its exit; successful subway traversal alone
      does not establish full level completion.
- [ ] Record pass/fail per matrix cell and reproducible defects with locations,
      builds, logs, and native visual evidence where useful.

### 2. Audio continuity and device recovery

- [ ] Verify 15–20 minutes of combat/transitions without crackle, stutter,
      missing sounds, or A/V drift; record reproducible remaining defects.
- [ ] Physically disconnect/reconnect headphones during gameplay; confirm the
      game survives, follows the default output, and resumes sound.

Simulated device-loss and native engine-restart tests passed; physical headphone
recovery needs confirmation. See [audio recovery](docs/AUDIO-DEVICE-RECOVERY.md).

### 3. HD presentation and window behavior

- [ ] Confirm live title-bar FPS and the normal mouse cursor in human play.

The staged 1080p presentation smoke passed through gameplay. The remaining
visible-window check can be performed during tester intake. Evidence is in
[HD output](docs/HD-OUTPUT.md).

### 4. Future 32-bit and original-Xbox return path

- [ ] Assess a 32-bit game runtime and document toolkit, compiler, memory, and
      platform requirements for an original-Xbox build.
- [ ] Define a staged implementation/validation plan preserving compatible
      game data and mod formats, with Windows-only features isolated.

The current Windows game is 64-bit with a separate 32-bit DX8 renderer; no
hardware port is implemented. See [Xbox return path](docs/XBOX-RETURN.md).

### 5. XboxRecomp portability and nxdk build support

- [ ] Audit host-specific assumptions in generated code and runtime interfaces;
      distinguish 32-bit Xbox addresses from host pointers.
- [ ] Separate optional Windows graphics, audio, memory and process dependencies
      behind clear platform interfaces while preserving the working Windows build.
- [ ] Add 32-bit compile checks and synthetic runtime regressions for address
      handling, calling conventions, register state and supported thread storage.
- [ ] Add an optional nxdk build target and compile small generated-code fixtures
      with a current toolchain, checking compiler, runtime and linker requirements.
- [ ] Build a minimal XBE fixture and verify startup, a generated function and a
      native kernel call using a reproducible test procedure.
- [ ] Document supported configurations and remaining limitations, and submit
      reusable changes as isolated, tested XboxRecomp PRs.

Use modern C++ where supported by the selected toolchain; do not impose legacy
XDK or 2005-era compiler restrictions. Scope is toolkit portability, not an XML1
Xbox port, a complete game runtime, or full Xbox graphics/audio backends. Item 4
covers the project's return-path planning; this item covers reusable toolkit work.

### 6. NewGame+, 35 roster size, 10 costume size

Increase all necessary limits to allow for a roster size of 35, with 10 costumes per character, and integrate NewGame+ mode. As part of NewGame+, raise the character level cap from 45 to 99.
