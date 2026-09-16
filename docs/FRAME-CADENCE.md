# Native frame cadence

The flat approximately 49 FPS result was the retail engine's default limiter,
not the renderer's maximum throughput. Optimizing work below that limit could
reduce CPU/GPU cost without changing the displayed FPS.

## Trace

- A process-local 200-sample main-thread profile found 50 sampled stacks inside
  `sub_00200500`, the game's elapsed-clock accessor. Most lead back to the frame
  manager. The other large group waits for native graphics acknowledgements.
- World XBE initialization at `00011178` passes **49** (`0x31`) as the default
  for `DISPLAY_OPTIONS/max_fps`; section/key strings reside at `003C6E44` and
  `003C6E54`. At `000111A0` the engine stores `1/max_fps` at FrameManager+4.
- The singleton at `0047C4E0` is constructed by `00011320`. Its update loop at
  `00011400` repeatedly samples the real game clock until the minimum interval
  has passed. `00011421` stores the resulting elapsed timestamp and passes that
  timestamp to downstream updates. `1/49` is approximately 20.408 ms.
- A build.ini-only experiment did not change the limit through the retail
  configuration path. The file was restored byte-for-byte afterward.

## Change

`scripts/guard-frame-limit.py` changes only that verified default argument to
60. It runs after code generation and rejects an unexpected initialization
sequence. The existing limiter, configuration lookup, 60 FPS upper-bound logic,
clock source and elapsed-time updates remain intact. The original XBE and game
assets are unchanged. This raises the PC default; it does not accelerate time
or bypass GPU completion.

Optional `XML1_FRAME_CADENCE` diagnostics report the live minimum interval,
wall-time delta and frame-manager timestamp delta every 120 frames. These are
read-only observations, intended to detect accidental simulation time scaling.

Evidence is in `work/frame-cadence`. The affected Intel/RTX system has not been
measured; raising this ceiling does not explain its reported 4–8 FPS.

## Measured result (2026-09-15)

Same saved Central Park scene, brief W movement, then steady gameplay at
1920x1080 on the local Ryzen 7 8745HS / Radeon 780M. Actual staged EXE launched
from an unrelated working directory, hidden and muted, with process-local input.

| Build | Mean FPS | 120-frame window FPS range |
| --- | ---: | ---: |
| Original default (configuration-only experiment) | 48.81 | 47.02–49.06 |
| Native default 60, run 1 | 59.89 | 58.76–60.08 |
| Native default 60, repeat | 59.97 | 59.77–60.06 |

Approximately 22.7–22.9% higher FPS in this scene. Each aggregate uses 19
120-frame windows after loading/movement: baseline frame counters 3600–5760,
new builds 4320–6480. These are the same stationary gameplay state, not a
combat benchmark or an all-level guarantee. Startup/loading/capture windows
are excluded. Window ranges are not individual-frame minimums or 1% lows.

The game-clock/wall-clock ratios over the new measurement windows were
0.999987 and 1.000056, with a 16.666668 ms native limit. Source tracing and
these measurements support unchanged elapsed-time pacing; they do not establish
that every scripted event is independent of frame rate.

All four native captures in each run were inspected individually: intro FMV,
Cerebro menu background, loaded level with HUD/environment, and movement.
Both new runs reached gameplay and exited at the test watchdog; UDATA hashes
were unchanged. Audio was muted and not verified. Extended combat, other levels,
and affected Intel/RTX hardware remain unverified.

The Release build succeeded, the generation guard passed its idempotence check,
and the embedded-runtime check confirmed the exact current renderer payload
and Windows-system-only imports. No adjacent runtime DLL is required.

Evidence: `work/frame-cadence/{limit60,native60,native60-repeat}` and
`work/frame-cadence/comparison.json`. Staged `XBOXgame/X-Men Legends.exe` SHA256:
`53bf974e455f1fa5a16e39917bcaf3fc4d6005389f9abe4b94d4c2559cef6016`.
