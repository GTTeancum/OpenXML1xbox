# OpenXML1xbox

X-Men Legends (original Xbox) to Windows feasibility project using
[XboxRecomp](https://github.com/sp00nznet/xboxrecomp).

**Required final renderer: genuine Windows Direct3D 8 / Xbox-era DX8.**
The pinned upstream toolkit presently uses D3D11. Its successful baseline build
does not satisfy the renderer requirement or establish XML1 compatibility.

## Setup

Requires Git, Python 3.12, CMake and Visual Studio 2022 with Desktop C++ tools.

```powershell
./scripts/setup.ps1
./scripts/build-toolkit.ps1
```

XboxRecomp is pinned under `external/xboxrecomp`; setup applies our recorded memory
patch. The local ISO has been imported and a CPU/kernel diagnostic runs XML1 into
initialization. Game rendering, audio and playable level 1 remain pending.

After importing your image, generate and build the diagnostic:

```powershell
./scripts/generate-code.ps1 -Disassemble
cmake -S . -B build/project -G 'Visual Studio 17 2022' -A x64 -DOPENXML1_BUILD_BOOT_PROBE=ON
cmake --build build/project --config Release --parallel 4
./scripts/run-boot-probe.ps1 -Seconds 20
```

Add `-TestPad` to expose a neutral controller entirely inside the game process.
The current boot reaches a D3D swap wait; it does not yet display a game frame.

The genuine system-D3D8 device probe builds separately with
`cmake -S renderer -B build/dx8 -A Win32`. It is not yet a game renderer.
See `docs/PROGRESS.md`, `docs/UPSTREAM-REVIEW.md` and `docs/GOAL.md` for evidence,
remaining work and the 30-hour cutoff.

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

1. Resolve remaining startup blockers using fail-fast traces and verified symbols.
2. Implement Xbox D3D8 interception and a direct Windows D3D8 backend, including
   Xbox-specific shaders, texture layouts and GPU command paths.
3. Integrate audio, movies and process-local input; capture and validate the splash,
   FMV, menu and level 1 milestones from actual execution.
4. Prove asset overrides and documented gameplay hooks rather than assuming
   generated C is automatically convenient to mod.

`scripts/scan-xdk-symbols.ps1` builds a pinned Cxbx XbSymbolDatabase CLI under
`work/` and scans the local XBE. It recovered 301 named XDK function records,
including calling conventions, into ignored `analysis/` metadata.

See `docs/SETUP.md` for setup provenance and validation. No game code or assets
are included. Upstream retains its own licenses and notices.
