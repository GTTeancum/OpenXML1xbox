# Performance, saves, and audio goal

Requested September 13, 2026. Scope: TODO items 2, 7, and 8 together.

- Achieve sustained 40+ FPS at native 1080p, 16:9 across various representative levels.
- Per user direction, do not spend smoke-test time on 4:3 or lower resolutions.
- Verify/fix save listing and loading across restarts, multiple saves, and overwrite.
- Resolve in-level crackle/stutter and verify audio output recovery.
- Provide invisible native DX8 execution with --muted, retaining full rendering,
  DSP processing, original PCM capture, and real audio queue pacing.

The goal API rejected creation because the previous blocked goal is unfinished.
This document tracks the newly requested scope without falsely closing the old goal.

## Test execution

Build: `cmake --build build/optimized --config Release --target xml1-boot-probe`.
The optimized game supports `--headless --muted`; headless means a hidden real
D3D8 device at 1920x1080, not skipped rendering or a null graphics backend.
The launcher below also suppresses the process console and uses isolated saves:

```powershell
.venv/Scripts/python.exe scripts/run-headless.py --muted --seconds 60 --data-root work/save-load-fixture --capture-pcm
```

`--input-file` accepts the existing process-local test controller command file.
No OBS recording or desktop input is used. Muting sets only the game's XAudio2
mastering voice gain to zero on initialization and recovery. Captured PCM remains
unmodified; muted output alone cannot establish perceptual fidelity or physical
headphone hot-plug acceptance.

## Evidence and remaining work

- Muted queue regression passes, including queue contents, priming, recovery,
  failure to set mute, and unchanged unmuted initialization.
- Complete 34-patch reverse validation passes.
- Various-level FPS, save/load acceptance, sustained in-level audio, and physical
  device handoff remain open until supported by results.

## First performance increment

The renderer now reuses identical viewport, transform, material, and shader
settings in addition to the existing render/light/stage-state cache. Native
combat replay pixels remain exact. Render-only time improved modestly.

Ordered clears use a submission acknowledgement (C5); explicit fences and
presentation retain native GPU completion. A pending clear is synchronized even
when the next fence has zero draws. Old C4 captures retain their original behavior.
Native tests cover identical C4/C5 pixels at 720p/1080p and pending-clear empty
fences. Full/partial completion readback and vertex-buffer experiments showed no
useful benefit and were removed.

Local evidence: work/headless-20260913-222059 holds the first full-game run with
both retained changes. Recent level-entrance windows measured roughly 44–48 FPS
at native 1080p. These are scene-specific results, not various-level acceptance.
work/ordered-clear-tests.log records native pixel/fence validation. The earlier
profiled run is diagnostic only; profiling and captures can affect frame/audio
scheduling and must not be used as uninterrupted-playback acceptance.

The input harness now supports dpadup/dpaddown/dpadleft/dpadright and scheduled
process-local commands via --sequence JSON. Tests verify digital button bits,
unchanged analog axes, and zero host-input calls. --profile samples the game
thread after 70 seconds and is explicitly excluded from FPS acceptance runs.

## Save fixes and native validation

Patch 34 fixes two independent file-bridge errors: object names must honor the
Xbox ANSI_STRING length, and relative file opens must preserve RootDirectory.
The first prevented save enumeration; the second prevented overwrite deletion.
The regression reproduces each failure before its fix, then verifies counted
names, relative open, delete-on-close, and the Xbox call-stack layouts.

Isolated native game evidence (original user saves unchanged):
- work/headless-20260913-223612: existing save appears; load reports success.
- work/headless-20260913-223903: actual Central Park progress restored; second
  save created. Overwrite failure reproduced before the relative-path fix.
- work/headless-20260913-224943: trace identifies failed relative save.dat open.
- work/headless-20260913-225248: overwrite reports success; new slot contains
  updated data (SHA256 299CA80771E0DEF33DF2DFAD4939AB3DC3B092F0FEC947851E9BFBE6A97F0458).

The game implements overwrite by deleting and recreating the slot; the directory
identifier can therefore change. The original source save SHA256 remains
10BC10EAEB3F9AB6FCF93E5B99A7F644B1BF56511499FB0146B1F2280AE658F0.
Opt-in --trace-directory records file and directory operations for diagnosis.

work/headless-20260913-225452 then launched a fresh process, selected Game 2,
loaded the overwritten slot, and restored the Central Park level with Wolverine
at level 2. Native capture 9110/frame 3076 confirms active gameplay after load.
The kernel directory/relative-delete regression and process-local input tests pass.

## Additional levels and diagnostic overhead

- HAARP interior (haarp/int/haarp2_1), work/headless-20260913-225654:
  34 post-entry windows measured 48.57-49.17 FPS; worst frame 40.875 ms.
  Movement worked. Zero empty audio queues; maximum submit gap 15.789 ms.
  At 177.958 seconds wall time, 178 seconds of original PCM had been submitted,
  consistent with queue priming rather than accumulating drift.
- HAARP exterior (haarp/ext/haarp_ext01), work/headless-20260913-230021:
  loaded its original dialogue and supported movement. Post-movement windows
  fell as low as 28.55 FPS, with 142 queue-empty observations across the run.
  This run fails the sustained performance/audio target.
- A diagnostic repeat, work/headless-20260913-230510, sampled disabled movie
  timeline/graphics tracing in ordinary guest ABI calls. The normal path now
  skips these diagnostic checks while preserving native graphics observation;
  XML1_TRACE_GRAPHICS or the existing individual tracing flags restore them.
- Unprofiled repeat work/headless-20260913-230955 improved recent windows to
  above 40 FPS, but still recorded 12 queue-empty observations. Captures and
  concurrent workloads prevent treating this as clean-audio acceptance.
- Xemu and OpenJPB were also consuming CPU during testing. Neither was stopped.
- The extended New York navigation run work/headless-20260913-231335 was
  aborted after the test character was defeated. It included captures and
  compilation interference and does not qualify as a sustained combat soak.

The Windows native audio recovery regression still passes: 600 blocks accepted
through critical-error and stopped-engine recovery in 4156 ms. Physical device
handoff and perceptual crackle acceptance remain separate human checks.

Reusable save-path fixes were submitted as XboxRecomp PR #53:
https://github.com/sp00nznet/xboxrecomp/pull/53 (commit 0472a59).
The isolated upstream synthetic-memory CTest fails before and passes after the
fix. No game assets or generated game code are included.

## Paused at user request

The user requested that the goal be stalled. The current test was stopped and
its evidence retained in work/headless-20260913-233128. This partial run includes
navigation, combat, a tutorial modal, idle time and native captures; it is not a
completed sustained-combat acceptance run. Xemu and OpenJPB were left untouched.

Save listing, loading and overwrite are verified. Consistent 40+ FPS across
levels at 1920x1080 16:9 and final audio quality acceptance remain open.
The analysis helper and expanded run metadata remain saved in the working tree.
Do not resume testing or launch the game until the user requests continuation.

## Resumed isolated checks (September 13, 23:53)

User requested "Try now". Xemu, OpenJPB and prior game/renderer processes were
absent before testing. No other application was stopped. Same optimized build;
no new performance or audio changes were introduced for this comparison.

- HAARP exterior: work/headless-20260913-235312, 180-second hidden/muted run.
  No profiling or native captures during the run. After the dialogue/movement
  sequence, frames 5041-8160 (26 complete 120-frame windows) measured
  47.62-49.01 FPS, weighted 48.69 FPS, worst individual frame 54.629 ms.
  After wall time 110 seconds: zero queue-empty observations, maximum submission
  gap 10.283 ms. PCM sample time differed from wall time by less than 1 ms over
  the measured 66 seconds. This interval is predominantly a stationary scene
  after movement, not sustained heavy combat.
- Saved Central Park: work/headless-20260913-235635, 150-second hidden/muted run.
  Native capture at 75 seconds confirms Wolverine level 2 at the Xtraction
  Point after loading the overwritten save. Frames 4201-6960 (23 windows,
  excluding the capture) measured 48.33-49.09 FPS, weighted 48.97 FPS, worst
  frame 44.252 ms. After wall time 95 seconds: ONE queue-empty observation,
  maximum submission gap 67.129 ms, reported near wall time 111.964 seconds.
  This is a stationary loaded-game scene, not combat acceptance.

Both runs used genuine Direct3D 8 at 1920x1080 16:9 and completed their diagnostic
watchdogs normally. Analysis JSON is retained in each run directory. The results
support improved performance without the competing games, but do not establish
causation or eliminate occasional frame stalls. Audio acceptance remains OPEN:
one isolated-run queue depletion persisted, and muted testing does not prove
perceptual quality or physical headphone recovery. No visible game is left running.


## Performance item closed (September 14, 2026)

The user accepted the current performance results and directed closure of TODO
item 2, with reopening if needed. Item 2 is complete by that acceptance; the
measurement limitations above remain accurate. Audio item 8 remains open.
