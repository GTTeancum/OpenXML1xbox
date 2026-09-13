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

XboxRecomp is pinned under `external/xboxrecomp`. There is no XML1 executable yet;
the source image, game-specific integration and DX8 backend are pending.

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

1. Identify the image revision, XDK libraries, executable sections and startup path.
2. Generate and integrate the game's code with explicit diagnostics for blockers.
3. Assess Xbox D3D8 interception and a direct Windows D3D8 backend, including
   Xbox-specific shaders, texture layouts and GPU command paths.
4. Compare remaining work with the existing GameCube project using evidence from
   actual XML1 execution. A toolkit build is not evidence of playable gameplay.
5. Prove asset overrides and documented gameplay hooks rather than assuming
   generated C is automatically convenient to mod.

See `docs/SETUP.md` for setup provenance and validation. No game code or assets
are included. Upstream retains its own licenses and notices.
