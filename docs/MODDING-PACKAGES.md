# Loose files and PKGB modding

Player staging is `!GAME/`. Double-click `X-Men Legends.exe`
there; the executable and host `build.ini` sit directly beside `default.xbe`,
the asset directories, `UDATA`/`TDATA`, and the `runtime/` renderer.
No environment overrides are needed. Media and archives are ordinary files in
this folder; the staged installation does not depend on the source extraction.
The repository's Play XML1 launcher also uses this staged installation.
`scripts/stage-player.ps1` updates the executable/runtime in that existing asset
directory, preserving its build.ini, resources and saves.

Edit the host `build.ini` beside the player executable. For developer harness
runs, the host configuration remains in the project root.
The original Xbox `XBOXgame/build.ini` is retained and does not override host options.
Restart the game after changing settings or resources.

## First run

Place the extracted Xbox game beside the executable, including `default.xbe`,
`z/assetsfb.zip`, `movies/`, `sounds/`, and `media/`. Start the normal game
launcher. With `PreferFilesLoose = 1` (the default), the executable shows a
first-run preparation dialog, extracts loose resources, and generates binary
PKGB manifests under `packages/generated/`. No Python or separate extractor
is needed for this setup. Existing files, saves, and the source archive are kept.

The progress dialog has Cancel. Failed or cancelled setup does not write the
completion marker. Retry by starting the game again. Once setup succeeds,
`.xml1-loose-ready` prevents repeated extraction and preserves your edits.
Do not delete that marker as a way to repair a missing mod file: restore the
specific file from your backup or extract a clean comparison tree instead.

`--headless --muted` uses the same extraction/runtime code without setup windows
or audible output. It still renders through native Direct3D 8.

## Selecting storage mode

In `[BUILD]`:

```ini
PreferFilesLoose = 1
```

`1` and `true` enable PKGB manifests plus loose resources. `0` and `false`
select the original packaged mode. Values are case-insensitive. Other values
are errors. In loose mode, the archive is read only by first-run installation;
gameplay never opens assetsfb.zip. A present archive does not repair missing
loose resources or packages. Keep it if you want to switch back to packaged mode.

## Language selection

```ini
AllowedTextLanguages = eng,fre,ger
DefaultTextLanguage = eng
AllowedMovieLanguages = eng
DefaultMovieLanguage = eng
AllowedAudioLanguages = eng
DefaultAudioLanguage = eng
```

Choose each Default language from its matching Allowed list. The Default fields
select the PC port's text, movie, and audio languages independently. Listing a
language does not install or translate its assets. The supplied Xbox data has
English/French/German text, with English media.

Localized text retains its `.eng`, `.fre`, or `.ger` filename. Generic XML
resources can still use the game's ordinary `.xml` resolution. Additional movie
assets use `movies/ntsc/<language>/` or `movies/pal/<language>/`, preserving the
original subdirectories. Additional sound banks use `sounds/<language>/` with
the original ZSD subdirectories. English uses the original Xbox media layout if
an `eng` directory is absent. A selected non-English media language needs its
own directory and does not fall back to English files.

## Editing resources

Inside `!GAME`, edit files in `ui/`, `data/`, `scripts/`, `effects/`, `actors/`, `maps/`,
and other extracted resource directories. No FB or ZIP rebuild is needed.
For example, edit a menu's `text` attribute in `ui/menus/pause.eng` and restart.
Use the matching localized file when you select another text language.

PKGB files contain ordered resource declarations, not the resource payloads.
The game decodes their binary representation in memory and invokes its original
resource loaders. Preserve resource order when editing package membership.

Developer commands for an editable package definition:

```powershell
.venv/Scripts/python.exe scripts/package-tool.py decompile '!GAME/packages/generated/common_ents.pkgb' work/common_ents.xml
# Edit work/common_ents.xml.
.venv/Scripts/python.exe scripts/package-tool.py compile work/common_ents.xml '!GAME/packages/generated/common_ents.pkgb'
```

Example definition:

```xml
<packagedef>
  <texture filename="textures/twirl" />
  <script filename="scripts/example" />
  <xml filename="data/example" />
</packagedef>
```

Names are logical: omit extensions except for motion-path bundles, which must
retain `.igb` (for example `menus/main_back.igb`). The native motion-path loader
otherwise interprets the last component as a path within a bundle and removes it.
Actor skin/animation names omit `actors/`; effects omit `effects/`; motion paths
omit `motionpaths/`. Other currently
supported XML1 resource kinds retain their directory. `combat_is` entries with
`filename="on"` or `"off"` are control commands, not files.

The extractor preserves original resource filenames. It extracts standalone ZIP
entries first, then FB payloads in archive order. A later payload replaces an
earlier copy at the same filename; identical copies need no rewrite. Language
files retain their normal extensions and share one logical manifest entry.
PKGB entries use ordinary resource types and `filename` attributes. There are
no generated hash aliases, custom `source` attributes, or runtime alias routes.

To build a separate clean tree for inspection without changing the installation:

```powershell
.venv/Scripts/python.exe scripts/convert-loose-assets.py '!GAME/z/assetsfb.zip' work/clean-loose-copy
```

The destination must be new. `loose-build.json` records source packages, output
hashes, and replacements at original filenames. This developer tool is optional; normal players
use the executable's first-run GUI.

Current implementation/acceptance evidence is tracked in LOOSE-ASSETS-PKGB.md.
