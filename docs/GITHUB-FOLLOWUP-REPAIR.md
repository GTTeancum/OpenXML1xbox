# GitHub follow-up repair goal

Scope: #18, #14, #3 and #2. Exclude #8 and #16. This is the active goal,
replacing character/audio acceptance work. Preserve the existing seven-issue
changes documented in BETA-ISSUE-REPAIR.md. No publication or issue closure yet.

## #18: missing saves and late-game instability

Confirmed a shared Windows directory enumeration lifetime bug. NtClose closed
the directory handle without releasing its FindFirstFile search. Reopening a
directory with a reused host handle inherited the old cursor. A synthetic test
against the actual kernel file layer failed on the second open with
STATUS_NO_MORE_FILES even though save.dat existed.

Fix: release search state on NtClose, retain EOF until explicit restart/close,
serialize query/close state, and replace the fixed 64-entry table with allocated
per-open-directory contexts. No save-name, character or game-specific exceptions.
Patch: patches/xboxrecomp-directory-lifetime.patch, registered in the patch stack.

After fix, directory-lifetime-test passes 256 early-close/reopen cycles, 128
simultaneous searches, repeated EOF and restart, with no leaked search handles.
Complete toolkit patch stack verification passes. Test uses its own temporary
directory and deletes only the file/directory it created. Player saves untouched.

Still required: actual save/list/load flows and crash investigation in Morlock
Haven. This kernel reproduction does not establish that all #18 crashes are fixed.
Rebuilt optimized executable with this change and embedded renderer successfully.
Player executable has NOT yet been replaced; rebuilt executable is in the private
smoke fixture only.

NEW failing in-game reproduction: work/followup-save-1790477418. From NYC gameplay,
private pause fixture invokes the original saveloadProcess(4). Capture 4 shows
Save successful; UDATA/4156001e/3618FC853DBE/save.dat is 195608 bytes, with valid
SaveMeta.xbx naming Game 1 / Columbus Avenue. Returning to the original pause
Load Game command (saveloadProcess(3)) produces No save games (capture 5).
Both captures inspected. This contradicts any claim that #18 is fixed by the
directory lifetime repair alone. Logs enumerate BOTH the settings directory
1A3F1B2E4ADF and new save directory, read both SaveMeta files and query save.dat.
Next trace: file-attribute query results and game-side save validation/filtering.
Private save is retained as a reproducer; pause restored byte-for-byte and the
owned game process terminated. Player UDATA was not used.

## #14: Forge workshop

Issue has no description/comments beyond the entry crash. Need trace and private
reproduction of its original entry path. Do not assume the earlier portrait fix
resolves this separate report.

Private run work/followup-forge-1790476295 reached NYC gameplay, opened pause,
then dispatched the game's openmenu equip_shop command via a temporary pause
fixture. Capture 3 inspected: Forge/workshop background, populated inventory,
item description, price and currency all present. Process remained alive. This
does not reproduce the reported crash in this path; no new shop-specific fix was
authored. Original entry route, transactions and return to gameplay remain to
verify. Muted run does not validate sound. Pause fixture restored byte-for-byte
(restored.json); player files untouched.

## #3: fullscreen/maximize

Fullscreen is already a PC setting (borderless window). Fixed window creation
to fit the monitor work area including decorations, preserve the selected aspect
ratio, and center the window. Added maximize using the same aspect-preserving
calculation. WM_SIZE updates mouse coordinate mapping; render resolution remains
unchanged. Renderer builds and window-geometry-test passes resolution/work-area/
decoration/maximize combinations. Native presentation validation still required.

## #2: keyboard controls/prompts

Need trace extra Alt action and shared dynamic prompt translation. Current PC
defaults don't bind Alt; physical input calls XInput directly. Renderer did leave
system-key messages to Windows. Now routes them through normal binding input,
suppresses keyboard activation of the system menu, and preserves Alt+F4. Added
regression checks for unbound and explicitly rebound Alt. No hidden attack
binding found in current source; pc-controls-test passes including the new Alt
checks, and embedded renderer rebuild passes. Live reproduction remains necessary. Prompt changes
must reflect rebinding, avoid per-dialogue rewrites and retain controller prompts
when controller is active.

Shared implementation now in pc_prompts.cpp / pc_prompt_guest.c, installed by
guard-pc-menu.py. Traced native token parser 001533B0 / named action lookup
001186E0. Added a guest-string expansion kind to normalization (00152A1B), width
(0015316C), wrapping (00153778), and actual drawing (0018B264). First visual run
showed dollar signs because drawing was a separate consumer; traced and fixed
that consumer. Later save run captures show readable Enter/Backspace prompts.
Long Backspace label overlaps nearby fixed menu anchors; shortened to Bksp in
source. MENU_OTHER is the native Y action (visible on save Delete), now resolves
to the Jump binding, default Space. Compact-label regression passes, but these
last two changes have not yet been rebuilt into the game or visually verified.

Formatter tests cover keyboard profile/rebinding, mouse alternate, unknown/color
tokens, bounded output and controller passthrough. Non-input tokens avoid IPC
locking/copying. Unknown aliases remain native; MENU_NEXT/PREV still need tracing.
No asset text or PKGB was edited for prompts. Runtime device switching and
tutorial/longer text checks remain pending. Optional XML1_TRACE_PROMPTS traces
distinct consumers; temporary action-lookup tracing was removed from generated
0022 and the last game build. The new prompt work is not staged for players.

## Next steps

Continue the four-issue scope above, not old character tests. The last old private
character run has terminated and restored its files (restored.json verified).
Existing XBOXgame executable remains the seven-issue candidate. Preserve pending
TODO.MD changes and unrelated xmlB6F0.tmp. No commit/push authorized by this goal.

## Follow-up: save bridge root cause and same-session result

The first directory lifetime repair covered xbox_NtClose but missed the actual
kernel bridge: bridge_NtClose called Windows CloseHandle directly. Consequently
FindFirstFile state survived, and Windows handle reuse inherited partial or
exhausted scans. This explains counts seeing files while the next list omitted
some/all of them. Routed bridge close through xbox_NtClose; included that hunk
in xboxrecomp-directory-lifetime.patch. General file lifetime repair, no save
name/slot/content exceptions.

Before evidence: work/followup-save-1790478101 capture 5 omitted newly saved
Game 2; work/followup-save-1790478421 capture 5 showed no saves despite both
valid saves counted. Temporary diagnostics confirmed metadata parsing succeeded.
After evidence: work/followup-save-1790478581 capture 4 shows Save successful;
capture 5 shows Game 1, Game 2 and newly created Game 3 in the SAME process.
Both actual captures inspected. Private pause fixture restored byte-for-byte;
owned process ended. No player UDATA touched. Same-session load into gameplay,
repeated save/load and Morlock stress remain required. Runs muted: audio untested.

Temporary kernel_bridge and generated 0023/0036 diagnostics removed via exact
backups before rebuilding. Complete toolkit patch stack verifies in reverse.
Directory lifetime and PC control tests pass. Window geometry test is under
build/renderer, not the root build target. Compact Bksp and Enter labels now
visually verified in load/save/pause, replacing the earlier unverified note.
The new candidate remains private; XBOXgame is not yet replaced.

## Save-load continuation and bridge regression

work/followup-load-1790478736: selected newly created Game 3 after restarting.
Capture 2 inspected: Load successful with Cerebro background. Capture 3 inspected:
returned to Columbus Avenue, Wolverine, environment, HUD and tutorial marker
present. Capture 4 inspected after process-local W input: character moved up the
path and camera followed. Muted, no audio claim. Private pause restored; owned
process terminated. This covers fresh-save listing in its creation session and
loading after restart; same-session load/repeated gameplay cycles remain.

tests/directory_lifetime_test.c now also calls the actual kernel bridge using
32-bit tagged handles for NtOpenFile, NtQueryDirectoryFile and NtClose, alternating
early and exhausted searches across 256 cycles. Negative control rebuilt with
only bridge close reverted to direct CloseHandle: failed exit 22 on reused search.
Restored fixed source and rebuilt: exit 0. Logs work/followup-directory-negative.log
and work/followup-directory-fixed.log. Player data untouched. Test owns its unique
temp directory, removes only its known files and checks host search-handle leaks.

## Morlock fixture entry: incomplete visual acceptance

work/followup-morlock-1790479138 enters NYC then calls the original loadMap script
command for sewers/hub/sewers_hub from private pause. Captures 3,4,5 inspected:
Morlock environment/NPCs/fire/HUD present; movement and camera respond. No crash
in this short run. HOWEVER Cyclops portrait accompanies a Wolverine model. Do
not count this as clean visual acceptance or dismiss it as expected. Trace has
correct 0101 skin output, reads Cyclops_xml.pkgb/powerstyle but no actors/0101 load
around entry. Physical actors/0101 and actors/0301 have distinct hashes matching
XBOXgame. Next inspect direct loadMap bypass of mission/team precaching versus a
normal map-entry defect. No character exception or asset alias is authorized.
Pause restored, process ended; no player staging changes. This short direct entry
does not establish stability across campaign traversal or resolve random crashes.

## Native window layout and further visual findings

Added one startup geometry diagnostic to the renderer for window/client/work-area/
monitor/maximize sizes. XML1_TEST_WINDOW_LAYOUT enables the identical player
window sizing in a hidden test process; it does not show/activate the window or
send desktop input. Normal headless fixture sizing remains unchanged.

work/followup-layout-0-1790479703: native outer bounds 69,0,1850,1032 are within
work area 0,0,1920,1032; client 1765x993 preserves 16:9 within integer rounding.
Backbuffer remains 1920x1080. Native capture 4 inspected: loaded Columbus Avenue,
character/environment/HUD present and movement responded.
work/followup-layout-1-1790479800: borderless outer/client match monitor
0,0,1920,1080, backbuffer 1920x1080. Native capture 4 inspected with same gameplay
flow/movement. Both private settings files removed after run, pause restored,
owned processes terminated. Actual desktop maximize-button interaction was not
performed; its WM_GETMINMAXINFO sizing has targeted unit coverage. Tests muted.

work/followup-team-morlock-1790479381 did NOT enter team selection: old commented
loadMapChooseTeam helper did nothing. No evidence from that attempt.
work/followup-blackbird-morlock-1790479513 used original blackbirdMenu command via
one temporary private scripts/qa_followup.py. Capture 3: Wolverine and Cyclops
have correct distinct models in team selection. Capture 4 after accepting:
Morlock Haven again shows Cyclops with Wolverine model. This rules out simple
absence of Cyclops actor on disk or inability to load it in the team screen.
Need trace map-transition actor instance/model selection and resource lifetime.
The temporary script was removed and pause restored. No production asset fix.

NEW #2 visual defect: team footer keyboard labels overlap (Cancel/Skin and
Details/Accept). Shared prompt expansion works but fixed icon-sized anchors do
not provide enough spacing for longer text. Must fix shared layout/measurement,
not declare this menu passed or apply per-character/menu text substitutions.


## Follow-up trace correction and shared prompt fitting

The earlier claim that Cyclops used Wolverine's model was premature visual
identification. Native trace work/followup-blackbird-morlock-1790480665 resolves
8:0301 and 9:0101 to distinct correct resources/objects, unchanged between team
selection and gameplay. Later front-facing capture 13 in
work/followup-extraction-forge-1790481240 shows Cyclops's visor and his distinct
costume alongside Wolverine. No actor/model-loading fix was made. All temporary
actor/package/model diagnostic edits in generated 0002/0003/0026/0034 were restored.

Shared single-line prompt fit now measures the controller representation with
keyboard expansion temporarily suppressed, and shrinks an expanded label only
when needed to retain its original authored footprint. Uses the native font
metrics/scale/alignment and original asset paths, not menu-specific text edits.
Wrapping textboxes retain their existing font size. Script guard reproduces it.
Native work/followup-prompt-fit-1790480906 capture 3 inspected: Cancel, Skin,
Details and Accept all readable and separated. Pause and Players footers also
inspected in later extraction run; readable. Directory, PC controls and window
geometry regression executables pass. The PC controls executable had not been
rebuilt for the latest header-only declaration addition; its substantive prompt
mapping implementation was unchanged.

## Original extraction-point Forge route

work/followup-extraction-forge-1790481240 loads sewers/hub/sewers1_1_1 through
Blackbird, completes opening conversation, and uses the game's extractionPoint
function on the existing xtraction_point. Private fixture uses setInCampaign
forge TRUE so Visit Forge is available. Capture 10 inspected: native X-Jet
Xtraction list includes Visit Forge. Selecting it gives populated 3D Forge
workshop (capture 11), Buy action remains there with insufficient currency
(capture 12), Esc accepts and Back resumes sewer gameplay (capture 13).
No crash in this entry/exit path. No shop-specific runtime or asset fix authored.
Transactions NOT verified: fixture setInventoryCount("money1",10000) did not
populate the shop's Tech Bits. Need correct native currency setup, not claim a
purchase. Scripts qa_followup and qa_followup_shop removed; pause restored and
owned process ended. Player files unaffected. All these runs muted.

NEW #2 dialogue defect: extraction run capture 5 shows overlapping text at the
conversation's Enter/continue prompt. Must trace the additional conversation
layout/draw path; do not count conversation prompts as passed from menu success.
Remaining: fix that path, confirm previous/next mappings if used, native Alt
mapping test, repeated save/load, random crash stability, full final validation
and player executable staging. No completion/commit/publication yet.

## Conversation layout and trailing prompt metrics verified

The shared font width/wrap loops now drain an expanded label at end-of-source,
matching the drawing loop. Previously a standalone $MENU_ACCEPT measured only
its first expanded character. The conversation continuation renderer preserves
the original glyph's right edge while growing the keyboard label leftward,
keeping its separately drawn localized caption unobstructed. No dialogue assets
or character-specific strings changed; guard-pc-menu.py reproduces the hooks.

work/followup-dialog-watchdog-1790482555 capture 4 inspected: [Enter] done is
readable and separated, with Wolverine portrait, full dialogue and sewer scene.
Capture 5 inspected: dialogue closed and W movement returned to sewer gameplay.
Run ended normally and restored the private pause asset/removed fixture script.
The preceding run 1790482230 timed out awaiting input acknowledgement; the worker
log did contain that acknowledgement. This was not reproduced in the watchdog
repeat, and its cause remains unestablished. Do not call it a resolved crash.

MENU_NEXT/PREV map to retail action IDs 22/23 at 0011A1BB/0011A1FB. Xbox action
names at 00119698/001196D8 associate those with RIGHT TRIGGER/LEFT TRIGGER;
keyboard prompts now use the corresponding Powers/CallAllies bindings. Added
mapping regression assertions, rebuilt game and PC controls test. PC controls,
directory lifetime and window geometry executables pass. Muted native runs do
not establish audible sound correctness. Player executable remains unchanged.

## Funded Forge transaction and repeated save/load evidence

work/followup-forge-funded-1790483299 used the original extractionPoint route.
A private, opt-in generated-code fixture seeded Inventory currency (+0x1690)
once with 10000 Tech Bits; this was test preparation only, not a runtime fix.
The generated source was restored and rebuilt, and no such hook is in the
candidate. No player save/assets were modified and the run did not save.
Capture 7: Forge workshop, price 1000, balance 10000. Capture 8 after buying:
balance 9000. Capture 10 Current Items contains Basic Tissue Generator, sale
price 250. Capture 11 after selling: item absent, balance 9250. Capture 12:
return to sewer gameplay and movement. All inspected. Native right-arrow tab
navigation works; clicking the tab did not switch it. No entry/transaction/exit
crash reproduced. #14's reported crash cause remains unestablished.

work/followup-save-repeat-1790483028 capture 5 lists all three fixture saves,
capture 7 confirms Game 1 load, capture 8 is resumed NYC with movement, capture
9 reopens Save with all three entries still listed. The first save attempt in
this run selected an existing slot and cancelled its overwrite confirmation;
do NOT count it as another successful write. Its input harness ended normally
at its own time limit. Private pause restored. This run exposed adjacent Select
and Delete labels touching in the three-column save modal footer; trace pending.

## Latest candidate staging and remaining crash investigation

Shared modal footer fitting added at native draw caller 00186B80 (001865A0
modal renderer), using original font metrics/footprint like CMenuItem labels.
work/followup-save-footer-fixed-1790483676 capture 6 inspected: Back, Select,
Delete separated/readable. Capture 7 confirms overwrite successful. This run
then timed out waiting for click acknowledgement after Continue; audio thread
continued and no exception was logged. Cause remains unestablished.

Repeat work/followup-save-watchdog-1790483955 completed normally: overwrite,
list all three saves, load, return to NYC gameplay. Captures 8 and 9 inspected.
No watchdog/exception fired. Both runs restored pause and ended their own process.
Native Alt press in these runs did not block subsequent pause/save input, but
this process-local test does not exercise Windows' WM_SYSKEY event delivery.
Unit tests cover neutral unbound Alt and explicitly rebound Alt; window-proc
source handles WM_SYSKEY and suppresses SC_KEYMENU while preserving Alt+F4.

Staged the exact latest tested EXE to XBOXgame/X-Men Legends.exe (no game launch).
SHA256 ad784156c01f00ea1adf64411203e45a2c7310044007fe2a91723b7fa426daf1.
Previous EXE and 9 protected-file hashes recorded at
work/followup-stage-backup-1790484162/staging.json. UDATA/TDATA/settings unchanged.
Embedded renderer payload exactly matches build; both PE images have Windows
system imports only. Temporary Forge funding hook absent from candidate binary.
Toolkit complete patch-stack verifier passes. No commit/push/publication/closure.

#2 keyboard prompts/default Alt handling and #3 display sizing are implemented
and bounded tests passed; #18 save discovery fixed and native flows verified.
#14 entry/buy/sell/exit did not reproduce the report. #18 random crashes and two
intermittent input timeouts remain unproven/unresolved. Current GitHub #14/#18
have no comments, crash logs or attached saves. Keep goal active; do not assert
that all stability problems are fixed. Muted checks do not validate audible audio.

## Bounded repeat with timeout diagnostics (2026-09-27)

Previous goal turn classified as progress: code fixes, native evidence and staging.
This continuation added a private timeout diagnostic collector (owned game and
its child renderer only, MiniDumpNormal, no desktop or input APIs) and ran three
complete overwrite/list/load cycles in one process. Collector remains unexercised
because no timeout occurred; do not claim dump capture was verified.

work/followup-save-diagnostics-1790484330 completed normally. Captures 7/8/9,
11/12/13, and 15/16/17 each inspected: overwrite successful, all three saves
listed (updated Game 1 play time), and return to NYC scenery/Wolverine/HUD.
No crash/timeout occurred. worker-final.log retained beside game.log; private
pause restored, owned process terminated by the harness after normal completion.
No production source or staged binary changed in this continuation. Muted tests
leave audible output unverified.

Completion remains unproven for #14 and the random-crash part of #18. Existing
Forge entry/transaction checks and these bounded repeats do not reproduce those
reports, and neither GitHub report provides a failing save, log or crash dump.
Further identical passing smoke runs will not establish the missing cause.
The next useful external evidence is an affected campaign save/diagnostic bundle
or reliable steps producing the reported failure. Goal remains active and issues
remain open; pending request for those artifacts has not received an answer.

## Blocked audit

The missing crash reproduction evidence remains across three consecutive goal
turns: initial staged-fix/report request, bounded diagnostic repeat, and this
remote/local recheck. Latest GitHub #14/#18 still have no comments or attachments;
#14 body remains empty. XBOXgame/build logs are from September 20-22, predating
these reports and this repair candidate; no new reporter diagnostic is available.
The owned validation run is terminal and its pause restoration is confirmed.
No active test/job is being mistaken for a blocker. Confirmed fixes remain staged.

At this point the unresolved crash reports require a failing campaign save,
crash diagnostic bundle, or reliable reproduction sequence. Additional identical
passing tests or speculative game/character exceptions would not resolve them.
Mark the goal blocked (not complete); preserve #8/#16 exclusion and all changes.
Resume once relevant reproduction evidence arrives. No GitHub issue was closed,
and no commit, push or publication was performed.

## Upcoming-release issue disposition (2026-09-29)

The user authorized committing/pushing these repairs and closing supported issues
as resolved in the upcoming release. Issues #2, #3, #4, #9, #11, #12, #13 and #15
have bounded implementation and validation evidence recorded here and in
BETA-ISSUE-REPAIR.md. Closure refers to the upcoming release, not the published
0.9 binary. Original campaign-scene and Windows input-delivery limitations above
remain explicit; no new smoke run or audio verification is claimed.

Keep #8, #14, #16, #17 and #18 open and track each in TODO.MD. In particular,
#17's memory fix and #18's save-list fix do not establish that their remaining
crash reports are resolved. The repair goal remains blocked on reproduction
evidence. No release publication is part of this bookkeeping request.
