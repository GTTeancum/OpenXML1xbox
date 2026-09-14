# OpenXML1xbox

X-Men Legends (original Xbox) to Windows feasibility project using
[XboxRecomp](https://github.com/sp00nznet/xboxrecomp).

**Required final renderer: genuine Windows Direct3D 8 / Xbox-era DX8.**
The game uses a separate 32-bit renderer linked to system d3d8.dll. Native splash,
FMV, menu and level-1 images have been captured. Full graphics/audio correctness
and sustained gameplay are still being validated; this is not a finished port.

See [TODO.MD](TODO.MD) for the project summary and detailed work.
See [headless testing](docs/PERFORMANCE-SAVES-AUDIO.md) for invisible native DX8 runs with `--muted`.

## Setup

Requires Git, Python 3.12, CMake and Visual Studio 2022 with Desktop C++ tools.

```powershell
./scripts/setup.ps1
./scripts/build-toolkit.ps1
```

XboxRecomp and libsamplerate are pinned submodules. Setup applies the ordered
toolkit patches. Audio runs the guest DSP and feeds XAudio2; native movie playback,
A/V synchronization and current level-1 behavior still require validation.

After importing your image, generate and build the diagnostic:

```powershell
./scripts/generate-code.ps1 -Disassemble
cmake -S . -B build/project -G 'Visual Studio 17 2022' -A x64 -DOPENXML1_BUILD_BOOT_PROBE=ON
cmake --build build/project --config Release --parallel 4
cmake -S renderer -B build/renderer -A Win32
cmake --build build/renderer --config Release --target xml1-dx8-worker
./scripts/run-boot-probe.ps1 -Seconds 20 -LiveDX8 -APU -TestPad
```

Add `-TestPad` to expose a neutral controller entirely inside the game process.
The renderer captures its own backbuffer; the harness never sends host input.
Diagnostic runs have a bounded watchdog and retain explicit unsupported-operation
guards. Exit3 means the time bound was reached, not that gameplay passed.

For a separate optimized playback build:

```powershell
cmake -S . -B build/optimized -A x64 -DOPENXML1_BUILD_BOOT_PROBE=ON -DOPENXML1_OPTIMIZE_RECOMP=ON
cmake --build build/optimized --config Release --target xml1-boot-probe
./scripts/run-boot-probe.ps1 -Seconds 30 -LiveDX8 -APU -TestPad -Optimized
```

Optimization is an explicitly selected test configuration; compare its behavior
with the diagnostic build before drawing compatibility conclusions.
See `docs/PROGRESS.md`, `docs/UPSTREAM-REVIEW.md` and `docs/GOAL.md` for evidence,
remaining work and the 30-hour cutoff.

## Human playtest

Connect an XInput controller and double-click `Play XML1.cmd` in this repository.
It opens the optimized native DX8 build at 1920x1080 progressive, with the game's
original widescreen framing, audio and real controller input. Human sessions
have no time limit. Run `./scripts/playtest.ps1 -Resolution 720p` for 1280x720 output.
See `docs/HD-OUTPUT.md` for resolution and performance evidence.
See `docs/HUMAN-PLAYTEST.md` for controls and feedback
targets. Full graphics/audio fidelity remains unverified.

## Import the ISO

Place the image in `inputs/` or pass its existing absolute path:

```powershell
./scripts/import-iso.ps1 -IsoPath 'D:\path\to\X-Men Legends.iso'
```

This hashes the source, extracts to `game/`, and parses `default.xbe`. It does not
modify the image, overwrite a nonempty extraction, generate code or launch a game.
All original data and analysis stay untracked. `analysis/default_analysis.json`
contains the initial section/library/import inventory.

Inspect the inventory before selecting executable sections for disassembly.
Upstream's game template is available at `external/xboxrecomp/templates/new-game`;
its placeholder addresses must be replaced using this game's actual XBE.

## Next decisions

1. Resolve intermittent movie artifacts and establish real-time A/V playback.
2. Validate the remaining Xbox D3D8 states and native graphics behavior.
3. Revalidate level-1 movement/combat, sustained gameplay and audio with all fixes.
4. Prove asset overrides and documented gameplay hooks rather than assuming
   generated C is automatically convenient to mod.

`scripts/scan-xdk-symbols.ps1` builds a pinned Cxbx XbSymbolDatabase CLI under
`work/` and scans the local XBE. It recovered 301 named XDK function records,
including calling conventions, into ignored `analysis/` metadata.

See `docs/SETUP.md` for setup provenance and validation. No game code or assets
are included. Upstream retains its own licenses and notices.


For directed process-local input, set XML1_TEST_INPUT_FILE to an absolute text
file path before launching with -TestPad. Start with `0 neutral` followed by a
newline. While the game runs, replace the line with a larger ID and one command,
for example `1 start`, `2 a`, `3 right`, or `4 neutral`. Each ID applies once.
A/Start hold300ms and movement holds1000ms before automatic release. The file
harness changes only the targeted game's controller state, never host input.
