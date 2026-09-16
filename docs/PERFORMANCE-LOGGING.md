# Beta performance reports

`performanceLogging = 1` (also `true`) in `[BUILD]` enables local session reports.
It defaults to enabled; `0` or `false` disables it. Nothing is uploaded.

Reports are stored beside the game under `logs/performance/`, grouped by UTC
launch time and game process ID. A new run does not overwrite previous reports.

- `*-system.txt`: game build date/time, CPU model, logical processor count,
  memory availability, Windows version, affinity, AC/battery status, backend,
  asset mode, modder mode and language settings.
- `*-renderer-PID.txt`: renderer build, adapter/PCI IDs, driver version, initial
  output mode and presentation settings.
  Also includes the selected DX8 adapter, adapter display, game-window display
  and actual renderer executable name (stable cache or versioned fallback).
- `*-frames-PID.csv`: each 120-presentation interval includes average FPS,
  mean/p50/p95/p99/max frame time, 1% low FPS, counts over 50/100 ms, output
  dimensions, renderer CPU core equivalents and pipeline wall-time categories.
- `*-game.csv`: game process CPU core equivalents aligned by system tick and frame.
- `*-events.tsv`: map, mission and menu transitions aligned by the same system tick.

Percentiles use nearest rank. 1% low FPS is 1000 divided by the mean duration of
that interval's slowest ceil(N/100) frames. It is not the reciprocal of p99.
The first presentation's startup interval is excluded from the distribution.
Pipeline categories are host wall times, not GPU execution measurements:
`commands` counts acknowledged transport envelopes; a V9 batch can contain
several ordered draw/clear commands with one acknowledgement. `fences` counts
actual GPU completion readbacks, not submitted guest fence tags.
`decode_submit` excludes pipe reads, fence waits and Present; `texture` is a
subset of decode/submit. Scheduling and driver stalls can contribute to these
numbers. CPU usage is expressed in occupied logical-core equivalents, so a
multi-threaded process can exceed 1. A machine-wide percentage would conceal a
single saturated thread on a many-core CPU.

Files flush after every summary/transition to retain evidence after an exit or
crash. CSV output is bounded to 16 MiB per renderer; game/event files to 4 MiB each.
There is no per-draw file output or added GPU synchronization. Existing verbose
runtime logs remain separate. Diagnostic commands, save paths, username and
arbitrary script contents are not included in the transition file.

Validation: synthetic uniform and long-tail distributions, percentile boundary
cases and boolean/default configuration tests pass. Native session generation
has been observed during boot, FMVs, menus and gameplay in an isolated fixture.
A/B smoke on the Ryzen 7 8745HS at 1080p in the same Central Park view retained
59.986 FPS with logging and 59.991 FPS without it (last 1,800 presentations each).
Both native outputs were inspected and save hashes stayed unchanged. This scene
hits the 60 FPS cap, so these numbers establish no observable regression there,
not a precise overhead bound in CPU/GPU-limited scenes. Disabled mode did not
start a performance report. Evidence: work/newgame-plus/performance-ab.json.

Renderer pipe/acknowledgement exit reasons are also written to the session CSV;
pipe-read errors preserve the reader thread's own error codes. A forced process
termination may leave no exit marker and up to 119 unsummarized presentations.
No Intel/NVIDIA hardware measurement or audible audio validation is implied.
The current staged performance candidate and its validation limits are recorded
in [Cross-hardware performance](CROSS-HARDWARE-PERFORMANCE.md). NewGame+ remains open.
