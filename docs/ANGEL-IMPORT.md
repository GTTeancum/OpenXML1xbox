# Angel XML1 Xbox mod import

Status: XMLB conversion, roster installation and updated standalone executable staged in `XBOXgame`.

Source: coney's `XML1 Angel Mod v1.4 (XBox).7z` from the user's Downloads folder. The archive and extracted source are unchanged. Evidence is under `work/angel-import`; `installation.json` records 55 installed files and their original/installed hashes. Affected originals and the previous player executable are backed up under `backup`.

## Installed content

Four original skins 1001-1004, animations, powers, effects, portraits, Xbox sound bank and stat progression are installed. Fourteen XML/localized resources were compiled to XMLB and round-trip verified. Extracted resource paths and ordered PKGB associations are preserved; no source IGB was renamed or rewritten.

English DummyNPC03 is replaced by Archangel (display name Angel), preserving the other 36 records. French/German rosters gain the English mod entry without replacing native heroes. Bishop/Sunfire remain separate private fixtures using DummyNPC01/02. The existing modderMode setting unlocks Angel.

The empty ps_archangel package declaration is replaced with the mod's complete declaration. Direct package dependencies exist. Shared flying resources are identical; the shared misc_linear_grad texture has matching image parameters and pixels, so the stock copy is retained. Optional campaign NPC/map, Danger Room and collectible changes are excluded.

## Rendering support

The original assets exposed missing P8, DXT1 and XRGB texture support, plus an Xbox programmable vertex shader used by the wings. These capabilities are now implemented in the staged executable. Palette-only changes invalidate cached textures. Native shader declarations and constants feed the vendored nv2a-vsh-cpu interpreter; its result is rendered through a genuine Windows DX8 passthrough shader with clip coordinates and perspective preserved. The adapter explicitly normalizes ARL address-register writes to the X component. Source models remain untouched.

Focused texture-cache and vertex-program tests pass, including palette alpha/mips, DXT1/XRGB sizes, relative constant bounds and decoded ARL execution. Third-party notices are included in the source and staged runtime licenses.

## Validation

All tests were hidden, muted and used input contained within the game process. Temporary private asset overlays were restored afterward.

- `select-v12`: base skin 1001, Blackbird selection, NYC gameplay, movement/jump and attack/power input. Actual captures inspected for Angel, wings, HUD and world content.
- `skin-1002`, `skin-1003-v2`, `skin-1004-v2`: each alternate skin reached gameplay; menu and gameplay captures inspected. These fixtures changed the private starting costume, rather than exercising the costume-switching UI.
- `staged-regression-v2`: the actual staged executable displayed the intro FMV and Cerebro main-menu background, loaded a private Wolverine save into Central Park, and exercised movement/attack. Actual captures inspected; renderer error logs empty; fixture userdata unchanged. Exit code 1 is deliberate harness termination after the completed flow.

Not validated: audio (muted), Angel save/load persistence, all higher-level powers, or the costume-switching UI. The source mod also documents wings not animating while carrying another character during flight.

Staged executable: `XBOXgame/X-Men Legends.exe`.
SHA256: `000550136384554438e9aa8469a50bc1dcf6fb5f35b86cd5d0cb260a3362784d`.
The embedded DX8 worker and static runtime remain self-contained; no additional non-Windows runtime DLL is required.
