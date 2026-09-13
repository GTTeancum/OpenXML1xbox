# Setup record — 2026-09-13

- Project: `D:\Programming\GitHub\OpenXML1xbox`
- XboxRecomp upstream: `https://github.com/sp00nznet/xboxrecomp.git`
- Pinned revision: `3706cefa416aedea6d10c87ced805f89576560c4`
- CMake upstream version at this revision: 0.9.0 (the web README observed earlier described 0.8.0).
- Host compiler: Visual Studio 2022 Community, MSVC 19.44.35225.0, x64.
- Windows SDK selected by CMake: 10.0.26100.0.
- Python: project-local 3.12 virtual environment; exact dependencies in requirements.txt.
- Upstream Release runtime libraries built successfully, with compiler warnings.
- Project setup and root CMake Release build scripts also completed successfully.
- Upstream Python suite: 237 passed, 10 subtests passed in 50.44 seconds (`python -m pytest tools/ -q`). The Fusion tests additionally require pefile and numpy; both are pinned in requirements.txt.
- All project PowerShell scripts parse successfully; pip dependency checks pass.
- ISO/XBE CLI entry points respond to --help. Real-image import awaits the ISO and has not been validated end-to-end.
- Git ignore checks cover ISO images, extracted XBE, generated game code and build products. The upstream submodule is unmodified.
- Final Windows D3D8 backend is not implemented by this setup.
- ISO, XBE audit, game code generation and runtime validation remain pending.

No application window, desktop capture or input automation was used.
