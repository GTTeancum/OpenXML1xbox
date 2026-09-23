# X-Men Legends 1 XboxRecomp TODO

## Summary

1. Integrate NewGame+.
2. Optimize performance and resolve beta testers' low-FPS reports.
3. Build a separate XML2-to-XML1 character conversion tool.
4. Bring missing XML2 combat and scripting functions into XML1.
5. Plan the Xbox return path and make XboxRecomp friendlier to modern Xbox builds.

## Detailed work

### 1. NewGame+

Trace and integrate NewGame+ progression, carry-over state and save/load behavior.

### 2. Performance optimization

Reproduce beta testers' low-FPS reports using their hardware, settings, levels and gameplay scenarios. Profile CPU, GPU and frame times at 1080p 16:9, identify the causes of sustained low FPS and stalls, and optimize the measured bottlenecks. Compare before/after results in the affected gameplay sequences and check visual and audio behavior; menu FPS or rendered-frame counts alone are insufficient. Target consistent 40+ FPS across various levels and record the hardware used for each result.

CLOSURE REQUIREMENT: neither the user nor Codex may close this item until the user has personally tested the candidate build on multiple machines locally at home. Available test hardware includes two laptops and a different desktop. Testing on the development machine alone, automated checks, or completed code changes do not satisfy this requirement. Keep this item open pending the user's multi-machine test results and performance acceptance.

### 3. XML2 character conversion

Build a separate tool that takes an XML2 character and their XMLB script structure and adapts them to XML1's character and script structure. Convert the relevant character definitions, powers and resource/package references, and identify unsupported features or dependencies that require manual work. Preserve the expected asset paths and package relationships.

Converted characters do not need to follow XML1's tiered power upgrades. They must work within XML1's UI and during combat: validate character selection, displayed character/power information, power assignment and activation, animations, effects and combat behavior in actual gameplay. Successful conversion or loading alone is not sufficient.

### 4. Missing XML2 combat and scripting functions in XML1

Use `Z:\Programming\!archived\XML2 XboxRecomp\` as a reference for bringing only missing XML2 combat and scripting functions into the working XML1 runtime. The direction is XML2 → XML1. A standalone XML2 port, XML2 renderer bring-up and validation of XML2 as a playable game are outside this task.

Coverage includes missing executable combat, character and scripting functions overall, across XML2. Bishop and Sunfire are priority fixtures, not the completion boundary. Audit character handlers, powerup and combat-event systems, affecters, damage modifiers and script additions independently of the currently imported roster. New functionality ONLY: if XML1 already has the function or system, skip it without comparing behavior or signatures. Do not pursue parity fixes.

Use the user-selected Bishop and Sunfire from the archived XML2 installation at `Z:\Programming\!archived\X-Men Legends II\` to validate handler behavior in XML1's UI and combat. Replace only identified dummy roster entries in private fixtures; preserve existing XML1 characters and check imported assets for collisions before applying them. Trace and progress evidence: [XML2 integration](docs/XML2-INTEGRATION.md).

Trace the missing combat handlers and script implementations, then adapt them to XML1's actual consumers and object lifetimes. Preserve existing XML1 behavior and the imported assets' package structure. Coordinate with the separate character conversion tool in #3 without assuming it is complete. Perform basic programmatic functionality validation of the added implementations and relevant integration contracts; users perform gameplay testing. Gameplay or visual acceptance campaigns are not an engineering completion requirement for this goal. XML1 is the integration target.

### 5. Xbox return path, toolkit portability and nxdk support

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
