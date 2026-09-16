# X-Men Legends 1 XboxRecomp TODO

## Summary

1. Integrate NewGame+.
2. Optimize performance and resolve beta testers' low-FPS reports.
3. Plan the Xbox return path and make XboxRecomp friendlier to modern Xbox builds.

## Detailed work

### 1. NewGame+

Trace and integrate NewGame+ progression, carry-over state and save/load behavior.

### 2. Performance optimization

Reproduce beta testers' low-FPS reports using their hardware, settings, levels and gameplay scenarios. Profile CPU, GPU and frame times at 1080p 16:9, identify the causes of sustained low FPS and stalls, and optimize the measured bottlenecks. Compare before/after results in the affected gameplay sequences and check visual and audio behavior; menu FPS or rendered-frame counts alone are insufficient. Target consistent 40+ FPS across various levels and record the hardware used for each result.

CLOSURE REQUIREMENT: neither the user nor Codex may close this item until the user has personally tested the candidate build on multiple machines locally at home. Available test hardware includes two laptops and a different desktop. Testing on the development machine alone, automated checks, or completed code changes do not satisfy this requirement. Keep this item open pending the user's multi-machine test results and performance acceptance.

### 3. Xbox return path, toolkit portability and nxdk support

- [ ] Assess a 32-bit game runtime and document toolkit, compiler, memory, and
      platform requirements for an original-Xbox build.
- [ ] Define a staged implementation/validation plan preserving compatible
      game data and mod formats, with Windows-only features isolated.

The current Windows game is 64-bit with a separate 32-bit DX8 renderer; no
hardware port is implemented. See [Xbox return path](docs/XBOX-RETURN.md).

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
XDK or 2005-era compiler restrictions. Scope covers return-path planning and reusable toolkit portability, not a complete
XML1 Xbox port, game runtime, or Xbox graphics/audio backends.
