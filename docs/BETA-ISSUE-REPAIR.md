# Beta issue repair goal

Scope requested 2026-09-26: GitHub issues 11, 12, 17, 13, 15, 4 and 9.

## Status

Fixes built and staged in `XBOXgame/X-Men Legends.exe`. Release overlay prepared
privately in `work/beta-issue-candidate/files`; nothing published or closed on
GitHub. Saves and settings were hashed before and after staging and are unchanged.

- [x] #11: identify omitted declared costume resources and enforce release dependency completeness.
- [x] #12: reproduce biography crash, fix shared character metadata lookup, verify model and biography text.
- [x] #17: include merged contiguous-memory lifetime fix and pass allocation/reuse stress test.
- [x] #13/#15: fix shared NPC skin metadata lookup; verify existing portrait resources match originals.
- [x] #4: replace unsupported setup-title em dash with ASCII hyphen.
- [x] #9: emit extensionless motionpaths in both extractors and resolve conventional IGB files.
- [x] Build and stage a self-contained executable.
- [x] Visually validate Forge, Mystique and Toad portraits in conversations.
- [x] Complete in-game costume cycling validation against the corrected overlay.
- [x] Exercise repeated map loading in one process and inspect each destination.
- [x] Validate enemy biography model and text after entering a real level.
- [ ] Replay the original mansion interactions end to end (not covered by direct codex/conversation fixtures).

Implementation checkboxes do not mean every issue's original encounter has been
retested. Do not close all seven issues based on these checks alone.

## Findings and evidence

### Character metadata: #12, #13, #15

World `CharacterManager::SkinName` at 0x56D30 (vtable +0x6C) encoded its old
metadata base as `(id + 0x48E) * 24`, so the previous literal-offset relocation
missed it. Corrected the generated-code guard to use the expanded manager offset.
This is a shared fix, with no character-specific path aliases or asset changes.

The biography reproduction requested `Wolverine__nc.pkgb` and `actors/.igb`, then
crashed through a null call. After the fix the native codex screen displays
Wolverine's model and full biography text. Evidence:
`work/beta-codex-1790466425/game.log` (before),
`work/beta-codex-1790466663/capture.txt-2.bmp` (after).
The regression test executes the actual native getter for IDs 1 through 255,
checks the relocated pointer and value, and checks stack balance.

The conversation HUD calls the same getter. Forge 2201, Mystique 2801 and Toad
3301 portrait IGBs match the original FB payloads; their map packages already
declare them. A private level-one conversation fixture follows the native map
precache and PKGB declarations. Captures 4, 5 and 6 in
`work/beta-flow-1790469502` were inspected separately: Forge, Mystique and Toad
each show the correct portrait, speaker name and dialogue text. This tests the
real conversation UI with their original speaker identifiers, but does not
claim to replay their full original campaign scenes. Initial fixture attempts
omitted the conversation precache and PKGB declaration; those failed attempts
are not evidence against the game fix. Optional existing script tracing now
also observes `startConversation` without changing its behavior.

Enemy codex validation continued through actual HAARP gameplay. Captures 1
through 4 in `work/beta-haarp-codex-1790471379` were inspected sequentially:
HAARP scenery and party HUD, enemy list, Mystique model, then Pyro model and
biography text. Selecting entries with the native A action successfully loads
the selected model and text without a crash. The scripted Mystique variant and
ordinary troops show the existing "No data available" fallback; only Pyro's
biography text was verified here. This does not assert every NPC has authored
biography text.

The private run used the opt-in process-local `unlockbios` test command to set
only metadata discovery bit 5. It is not part of normal gameplay or modderMode
and does not write saves. The private mission and HAARP startup scripts were
restored after the run. Original mansion approach/interaction flow was not
replayed; the checks exercise the native codex and conversation UI directly.

### Release completeness: #11

The published 0.9 overlay omitted 1,379 resources required by its expanded roster
and costume declarations. Local development assets concealed the omission.
The release builder now audits the original archive plus the actual overlay,
without looking in the development tree for implicit fallback. Its explicit
`--include-roster-dependencies` mode adds required staged files and recursively
audits packages added by that process. Missing dependencies otherwise fail the
build. The existing authored roster and costume assignments are preserved.

The corrected private overlay passes 65 playable definitions across three
languages with zero incomplete definitions. Native progression checks cover ten
distinct skins, sparse physical IDs, duplicate categories and wraparound.
`tests/release_roster_test.py` verifies failure for absent skin/package resources
and absent nested portrait resources, then success when those files ship.

The native Blackbird selection screen cycled Wolverine's ten declared costume
slots, wrapped from 10 back to 1, and continued to 2 without a crash. Every
capture from 1 through 12 in `work/beta-costume-live-1790469599` was inspected
sequentially. All slots display their assigned models, including the previously
authored NPC placeholders in the extra slots. This tests actual model/package
loads in addition to the sparse-ID and duplicate-category contract tests; it
does not assert that every arbitrary third-party character package is valid.

### Transition memory: #17

The repository already contained the contiguous-free patch, but it had not been
applied to the local toolkit used for the prior binary. Applied the patch stack
and rebuilt. The new native regression performs 100 rounds of allocation,
adjacent-block coalescing, reuse, alignment and double-free rejection.
See `work/beta-memory.log`. This addresses a concrete resource lifetime defect;
it does not prove every unspecified intermittent loading crash has this cause.

`work/beta-transitions-1790469846` records six alternating arrivals in
`nyc1_1_1` and `nyc1_1_2` (five reload transitions) in one process. All six native
captures were inspected sequentially: the proper destination scenery,
Wolverine, portrait and HUD remain present. There were no fatal or allocation
failure messages. Only the private startup scripts appended a timed native
`loadMap` call, and both scripts were restored afterward. This validates repeated
resource teardown/reload, not ordinary traversal, combat or a full campaign.

### Extraction and title: #9, #4

Both Python and embedded extraction emit extensionless motionpath declarations;
physical IGB names remain unchanged. The loose loader resolves the conventional
extension and also accepts old extension-bearing manifests. Tests compare both
extractors and physical payload bytes. Native captures using an extensionless
main-menu camera declaration show the proper 3D Cerebro background, followed by
rendered level-one scenery, Wolverine and HUD. Existing user manifests are not
rewritten merely to change declaration style.

Setup title now reads `X-Men Legends - First-run setup`. The GUI title has not
been visually inspected through desktop automation.

## Validation and staging

Passed: release roster regression; five loose conversion tests; motionpath name
bounds/case tests; native progression/skin lookup tests; contiguous-memory and
virtual-memory ABI tests; standalone executable embedding/import checks.
Native smoke runs used isolated assets, headless rendering and process-local
input/capture only. They were muted, so this pass does not validate audible output.

Staged executable SHA-256:
`b0a32d4d494f8975a8ea1fb56bd05e3f0210738f03f2099305c0f20bc8c8e59f`

Prior executable and protected-file hashes:
`work/beta-issue-stage-backup/staging.json`.
Corrected release candidate audit: `work/beta-issue-candidate/roster-audit.json`.

The goal service refused creation because the prior character/audio goal remains
unfinished. This document records the requested new scope without falsely
completing the older goal. No release publication or GitHub closure is implied.
