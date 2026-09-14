# Performance, saves, and audio goal

Requested September 13, 2026. Scope: TODO items 2, 7, and 8 together.

- Achieve sustained 40+ FPS at native 1080p across various representative levels.
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
- Complete 33-patch reverse validation passes.
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
