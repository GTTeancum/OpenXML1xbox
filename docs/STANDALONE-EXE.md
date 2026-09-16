# Standalone player executable

Player staging: `XBOXgame/X-Men Legends.exe`, directly beside `default.xbe`,
`build.ini`, and game assets. No CMD launcher is required. Data discovery uses
`default.xbe` beside the executable, independent of the launch working directory.

Both architectures use the static MSVC runtime. CMake builds the Win32 DX8
renderer and embeds its exact bytes as RCDATA 101 in the x64 game executable.
Windows verifies the embedded renderer against a SHA-256-named per-user cache
under `%LOCALAPPDATA%/OpenXML1`, then atomically installs it at the stable path
`%LOCALAPPDATA%/OpenXML1/xml1-dx8-worker.exe`. Windows GPU preferences should target
this actual rendering executable; the stable path preserves that preference
across builds. If an older running game prevents replacement, this instance uses
its verified versioned executable and logs that fallback without disturbing the
older run. Both cache paths are checked against the embedded payload. The worker
exports standard high-performance GPU hints; explicit Windows preferences take
precedence. `graphicsAdapter = auto` in build.ini uses OS/driver selection;
an explicit DX8 adapter index can override the default device where exposed.
This preserves genuine system Direct3D 8 and the existing worker
lifetime handling without shipping an external renderer executable or CRT DLLs.
Windows-provided system DLLs are still required.

Validation: `scripts/check-embedded-runtime.py` checks the embedded image against
its build input, both CPU architectures, and normal/delayed import tables.
The staged XBOXgame EXE passed, with only Windows system imports. Native headless
validation completed first-run archive extraction, intro video, the main menu
with Cerebro background, retail save loading, and movement in gameplay. All four
native captures were individually inspected in order. The run was muted; audio
was not revalidated. Evidence is in `work/progression-limits/embedded-exe-run`.

`modderMode = 1` and `PreferFilesLoose = 1` are enabled in XBOXgame/build.ini.
