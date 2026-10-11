# Building from Git source

The normal Windows build uses committed source only. It needs no ISO, XBE,
analysis directory, private generated tree or precompiled dependency. Original
game data and `default.xbe` remain runtime requirements, supplied by the player.
This is a compile-from-source workflow, not a redistribution of a playable asset set.

## Build

Install Git, Python 3.12, CMake and Visual Studio 2022 Desktop C++ tools, including
x64 and x86 toolchains and a Windows SDK. From a recursive clone:

```powershell
./scripts/setup.ps1
cmake -S . -B build/optimized -A x64 -DOPENXML1_BUILD_BOOT_PROBE=ON -DOPENXML1_OPTIMIZE_RECOMP=ON -DPython3_EXECUTABLE="$PWD/.venv/Scripts/python.exe"
cmake --build build/optimized --config Release --target xml1-boot-probe
```

Setup initializes the pinned XboxRecomp and libsamplerate submodules, installs
Python requirements, and applies the tracked ordered toolkit patches. Other
required DSP, vertex and DX8 header sources are tracked in the repository.
No prebuilt DSP JIT library is required by the default configuration. The
optional XML2 recovery target is separate and may require its own external inputs.

The game output is `build/optimized/Release/xml1-boot-probe.exe`. The nested
Win32 renderer build runs automatically and embeds the DX8 worker. The host
and worker statically link their C/C++ runtimes; Windows supplies system DLLs.
Use the release's player layout and your own assets to run it as `X-Men Legends.exe`.
Optional asset-authoring tools have additional reference-asset requirements;
those are not executable compilation requirements.

Older CMake caches can retain a private source-tree selection. Use a new build
directory or set `XML1_RECOMP_SOURCE_DIR` to the absolute `src/recomp/game` path.

## Complete source map

`src/recomp/game` contains 263 files (about 90 MB): dispatch, declarations,
support, 152 known-function module files, and remaining numbered chunks.
Eight more named functions retain their original units for shared state.
`config/symbols/xml1-function-map.csv` indexes every one of its 25,855 entries:

- 160 confirmed generated-function identities, with registry subsystem ownership.
- 25,574 unidentified entries, retained under their address-based symbols.
- 121 pre-existing unresolved-entry fail-fast stubs, explicitly distinguished
  from implemented functions. This work does not implement those missing entries.

The CSV includes each source path and direct caller/callee addresses, including
ABI macro calls. 1,673 unregistered entries have direct relationships to known
functions. Related modules are navigation hints, never inferred identities or
ownership. Indirect/vtable calls are not resolved by this inventory. The 49
handwritten override mappings remain in `config/symbols/xml1.json`; they are not
additional generated entries in the CSV.

```powershell
./.venv/Scripts/python.exe scripts/inventory-guest-functions.py --check
```

Without `--check`, the command refreshes the CSV and JSON summary from committed
sources and the registry alone. Unknowns may remain in numbered files until
there is enough evidence to name and safely relocate them. This inventory is a
complete address/source/direct-call map, not recovery of every function's purpose.

## Optional maintainer regeneration

Compilation never runs regeneration or overwrites canonical source. To change
known names, add evidence to `config/symbols/xml1.json`. Retain entry labels,
calling conventions and shared-unit placement constraints.

Maintainers with the verified original image may build the toolkit and run:

```powershell
./scripts/build-toolkit.ps1
./scripts/generate-code.ps1 -Disassemble -XbePath 'D:/original/default.xbe'
./.venv/Scripts/python.exe scripts/publish-recomp-source.py
# Review the candidate and report under work/generated-publication first.
./.venv/Scripts/python.exe scripts/publish-recomp-source.py --apply
./.venv/Scripts/python.exe scripts/inventory-guest-functions.py
```

Raw guarded output stays in ignored `src/recomp/gen`; the generator also emits
ignored `src/recomp/named`. The publisher reruns naming from raw input, validates
entry coverage and every body after reversing name substitutions, and reports
added/changed/removed files. It refuses loss of existing canonical entry points.
`--apply` swaps in the candidate and retains the previous complete tree under
`work/generated-publication`. A failed swap restores that previous tree.
Review the source diff, rebuild and run relevant checks before committing.
Never publish a stale raw tree just because it exists. Direct canonical edits
must also be represented in generation guards if regeneration is to preserve them.

## Verification

An isolated checkout materialized from Git tree
`61b00ca7c15521aeb2ddc5046f9ba5ab2258fa7c` initialized both pinned submodules from
their remotes, ran setup with a fresh Python environment, and built the full
optimized Release executable. It contained no XBE, `XBOXgame`, analysis, `gen`
or `named` folder. The patched toolkit matched the developer checkout's source
content; one file differed only in line endings.

All nine native source-extraction/ABI tests built and passed in that checkout:
parser text arena; talent registry, source cache and source intern; character
talents and talent map; fence wait; guest flags; x87 status. The resulting game
also passed progression, powerup-definition and filter-event native checks.

A separate runtime check used private assets and process-local input, without
operating the desktop. Nine native captures were inspected individually:
startup artwork, a subtitled story FMV, level-one Wolverine/scenery/HUD,
movement with camera follow, the Powers screen, pause Options and Advanced
Options over the level, and return to gameplay. The run was muted: audio quality,
full combat/level completion, player-facing save/load, and settings persistence
were not verified. Main-menu artwork was not captured in this particular run.
The private executable was restored by hash; player staging was not changed.

The regeneration publisher reproduced the canonical tree byte-for-byte from
the previously verified complete regeneration input. Tooling tests cover naming,
address lookup, guard relocation, inventory and publication rollback. Local logs,
results and captures are under `work/git-only-build` and are not build inputs.
