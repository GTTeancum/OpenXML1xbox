# Loose resources and PKGB implementation

The combined loose-assets/PKGB work is complete. Player instructions are in
[MODDING-PACKAGES.md](MODDING-PACKAGES.md). The playable directory is `!GAME/`,
with `X-Men Legends.exe` and host `build.ini` directly beside the assets.

## Delivered behavior

- `PreferFilesLoose` defaults to `1`; `1`/`true` and `0`/`false` are accepted,
  case-insensitively. Invalid values report an error.
- Loose mode loads binary PKGB manifests and loose resources. Runtime archive
  access is denied even when assetsfb.zip exists. Missing loose files have no
  archive fallback. Packaged mode remains available.
- Language fields follow the installed XML2 build.ini model. Text, movie, and
  sound languages are independently selected; defaults must be in the allowed
  lists. Selecting a language does not manufacture its media assets.
- First-run preparation is compiled into the game EXE, with a Windows progress
  dialog, cancellation, error reporting, and a completion marker. Its extraction
  core is shared by the headless tests. Existing installed files and saves are
  preserved; failed/cancelled setup can be retried.
- ZIP contents and FB payloads retain their original filenames. Standalone ZIP
  entries are extracted first; FB payloads follow archive order, replacing
  earlier copies at the same name. PKGBs retain resource order and ordinary
  `filename` attributes. Localized files share one logical declaration.
- There are no hash-renamed resources, custom PKGB source attributes, or runtime
  texture aliases in the delivered installation. The earlier attempt at these
  was removed. Eleven old renamed files were retired outside staging.
- Binary PKGB definitions follow XML2's 0x11B1/version-1 format. XML1's retained
  resource loaders receive the decoded package definition in memory. No game
  resource payload conversion or archive rebuilding is required when modding.
- Resource-specific filename conventions are retained. Motion-path bundles
  require `.igb`; omitting it made the native loader remove the last path
  component and caused the black menu background. Both extractors preserve it.
- Genuine native Direct3D 8 remains the rendering backend. Source archives,
  original saves, and the XboxRecomp pin were preserved.

## Verification and evidence

| Requirement | Evidence |
| --- | --- |
| XML2 format compatibility | All 2,261 installed reference PKGBs round-trip byte-for-byte; the native decoder also reads the reference corpus. |
| Correct extraction and package files | Python and native extractors match all 9,383 output files: 875 PKGBs and 8,508 resources. `work/canonical-extraction/stage-result.json` records checked staging updates. |
| Original names and plain declarations | All 875 staged PKGBs contain only filename attributes; no generated hash references remain. `work/canonical-extraction/final-audit.json`. |
| Settings/defaults/validation | `build-settings-test`, plus actual English and French native launches. |
| No archive fallback | `asset-routes-test` and `kernel-asset-filter-test` deny a present archive through real kernel file access. Completed-install setup works after archive removal. Final loose-run logs contain no runtime archive opens. |
| First-run extraction | Five converter tests and four native setup tests cover payloads, languages, motion paths, existing-file preservation, source preservation, failure/cancel cleanup, locking, and retry. |
| Native loading beyond menus | Staged audit reached New York gameplay, movement, enemy damage and game-over. Final canonical runs load an existing Central Park save, character/HUD, world geometry, effects and automap. |
| Packaged regression | Packaged Central Park save/automap and the earlier HAARP interior map-entry capture. `work/automap-visible-packaged/`, `work/packaged-haarp-proof.bmp`. |
| Correct automap | Canonical loose and packaged captures were inspected. They contain matching 122,880-byte texture spans at the same draw-data offset. `work/canonical-extraction/automap-comparison.json`. |
| Edited loose resource, no rebuild | `work/automap-finalmod-loose/9922.bmp` shows LOOSE PKGB TEST in a French pause menu over Central Park. Only the fixture's pause.fre was edited; archive hash stayed unchanged. |
| Original inputs/player edits preserved | Source and staged archives both hash to c9df38a8c8ed05502538fadf53ea33fa7289d01634b08cbc59d4d91b2481098f. The staged pause.fre remains unmodified; mod proof uses its own UI and save copies. |
| User-friendly staging | EXE launches from a different working directory without environment overrides. Active media are real files beside it, independent of XBOXgame. Staging rejects empty/missing/linked active media directories. |

Native capture/replay uses the application's own DX8 facility. Inputs stay
inside the test process. No desktop input or screen-control tools were used.
Time-bounded runs exit with diagnostic code 3; that alone is not acceptance.

## Limits outside this completed package work

This does not certify every level, multiplayer, full campaign completion, clean
long-session audio, or physical headphone recovery. These remain separate TODO
items. The earlier instrumented gameplay audit observed audio queue stalls.
The first-run dialog is implemented and compiled; automated setup checks used
its shared core without desktop interaction, not a human GUI walkthrough.

The detailed staging regression and its limits are in STAGED-ASSET-AUDIT.md.
Earlier chronological development notes are retained locally under
work/canonical-extraction/development-history.md; superseded approaches are not
part of the delivered format or instructions.
