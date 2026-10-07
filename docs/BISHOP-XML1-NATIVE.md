# Bishop's XML1-native power tree

Completed and staged, 2026-10-07. All character changes are authored assets; no Bishop-specific executable changes. Existing save migration is excluded by the user. The requested selection icon must use Bishop's actual model staged in an animation pose, like the stock icons. Generated/drawn artwork is rejected and excluded from the candidate.

| Line | Native rows | Ranks |
| --- | --- | --- |
| Bio Blast | Bio Blast / Bio Burst / Legendary Burst | 5 + 5 + 1 |
| Full Auto | Full Auto / Heavy Fire / Legendary Fire | 5 + 5 + 1 |
| Absorption | Absorption / Energy Sink / Legendary Absorption | 5 + 5 + 1 |
| BIG BANG | Sole Xtreme | 1 |
| Energy Combat, Gun Mastery, Power Trip | One row each | 5 each |

`scripts/author-bishop-xml1.py` authors the existing talent, powerstyle and herostat resource paths. Explicit per-rank curves are in that script. Native requirements unlock every rank by level 35 or earlier, within XML1's level-45 cap. Removed active powers and their prerequisites are omitted; retained combat events and passive affecters use the shared runtime. The English roster is updated only for Bishop; other heroes and other language rosters are preserved. English descriptions are mirrored to Bishop's language resources; this is not a localization pass.

`scripts/check-bishop-xml1.py` checks compiled output for tier boundaries, names, ranks, four active move families, preserved held-fire continuation/end, prerequisites, symbol coverage and unchanged stock roster entries. The compiled-data evaluator passes 8 definitions, 20 symbols and 900 rank evaluations; the shared imported-catalog test also passes.

## Verification evidence

Private candidate: `work/bishop-native/candidate-v6`. All 15 candidate asset/source files are staged in XBOXgame. Original files are backed up in work/bishop-native/player-before-stage; staging-manifest.json records before/after hashes. The self-contained executable is unchanged.

Run2 uses the current self-contained executable with private mission/pause fixtures and process-local input, at 1920x1080, headless and muted. A new Bishop begins with Bio Blast rank 1. A private XP callback makes level 45 available; rank purchases themselves use the normal native Powers menu. All powers/passives were fully purchased with two points left. Captures 3–5 show the native 5+5+1 rows, Legendary names, BIG BANG and five-pip passive rows over the original 3D background. No layout or menu-model replacements.

Run2 captures 11–19 show Bio Blast destruction, held Full Auto projectiles, release, Absorption's aura, BIG BANG activation/enemy damage, Xtreme-pip consumption and return to gameplay. Native damage records include Bio Blast 163 (authored range 140–165) and BIG BANG 273 (250–300). Keyboard shortcut 3 maps to the native Xtreme button, shortcut 4 to Boost; the native control mapping is unchanged. Capture 10 confirms a new private Game6 save was written. Fresh-process reload is verified in Run3 below.

Run3 reloads Game6 in a fresh process at 640x480. Captures 1–6 were inspected: actual Bishop gameplay resumes; the native Powers menu retains all purchased tiers, BIG BANG, three five-rank passives and two unspent points. Legendary Absorption fits without colliding with its pip at 4:3, and descriptions remain within the original scrollable panel.

Audio quality has not been audited in these muted runs. Absorption healing and each passive's exact combat contribution are not individually isolated by the visual smoke.

## Selection portrait

The generated illustration was rejected by the user and removed from both project artwork and the candidate overlay. The private fixture was restored to the previously staged portrait. No generated illustration was staged in XBOXgame.

The replacement uses `actors/6001.igb` and the `power_6` animation from `actors/18_bishop.igb`, at frame 5 (24 FPS), rendered in background-mode Blender. The user selected the first Full Auto pose and requested level, even feet with the rotation retained. Final camera direction relative to the subject is `(1, -0.6, 0.05)`, orthographic. Character geometry and animation are unedited. Drawn/generated art is not used. The renderer uses the original textures and gun segments, with a neutral gray staging background. The importer must use absolute animation quaternions (`bind_pose=None`); its default bind-delta path gave an incorrect pose and was rejected.

Render source and reproducible scene/scripts are under `work/bishop-native/model-icon`, `render-model-icon.py` and `render-poses.py`. `scripts/pack-selection-icon.py` handles only native 64x64 DXT3 packing and vertical orientation; it does not create artwork. Preserve the original selection IGB geometry, UVs, names and PKGB association. HUD/Details head models remain unchanged.

Run6 captures 17–18 verify the final icon in the native replacement carousel at 640x480 and Bishop selected back onto the team. The final render retains the first Full Auto pose and azimuth, with both feet level. The owned test process was stopped and private mission, pause, roster, power, portrait and package fixtures restored; QA callbacks are excluded from player staging.


Portrait correction: the approved flat-footed pose is cropped to its upper body (108,32)-(364,288), with stock gray RGB 123/125/131. The cropped texture replaces the full-body portrait in XBOXgame and candidate-v6. Native DXT3 readback was inspected; IGB structure and PKGB paths are unchanged. This texture-only revision was not rerun in gameplay.

The cropped portrait now includes the model's native outline shells. The imported shell winding requires transparent back faces and black front faces in Blender; the prior polarity obscured the model, and hiding the shells was incorrect. render-icon-outline.py restores the existing body and drawn-gun shells, without changing mesh geometry. The final referenced texture is image object 45 (object 36 is an unused inherited Beast image). Final texture readback inspected; no gameplay smoke claimed for this texture-only correction.
