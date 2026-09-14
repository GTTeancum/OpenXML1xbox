# Human playtest

Connect an XInput-compatible controller, then double-click `Play XML1.cmd` in
the repository root. This opens the optimized build in a native 1920x1080 DX8
window with audio and real controller input. No automated input is enabled.
Human sessions have no time limit. An optional `scripts/playtest.ps1 -Minutes 60`
sets a limit for a deliberately bounded test. Close the game window to stop, including audio.
An independent process monitor handles this even if the game thread is blocked.
See [combat freeze correction](COMBAT-FREEZE.md) for the latest regression
evidence and remaining human checks.

Headphone disconnections and default-device changes now use audio recovery.
Short handoffs retain the pending PCM block; failed/stalled endpoints are reopened.
If no output exists, gameplay continues silently while retrying once per second.
See [audio device recovery](AUDIO-DEVICE-RECOVERY.md) for tests and limitations.

The default is 1080p with the original game's widescreen framing. To use 720p,
run `./scripts/playtest.ps1 -Resolution 720p`. Both modes render through system
Direct3D 8. See [HD output and performance](HD-OUTPUT.md) for measured results.

The title bar shows actual presented FPS, refreshed every half second. It counts
completed presents, excluding intermediate draw batches. The window class now
supplies the standard arrow cursor so hovering does not retain a startup busy
cursor. The existing OBS XML1 source uses class matching and can follow the
changing title; its settings were preserved.

Use A to select Begin Story. Start skips the intro movies or pauses gameplay.
Left stick moves; A is light attack, B heavy attack, X grab/use, Y jump.
LB consumes a health potion and RB an energy potion. RT plus a face button
uses an assigned power. B resumes from pause. The pause menu can enable the map.

Please check whether movement/combat feel normal, enemies can be defeated,
the route beyond the first encounter is passable, and music/dialogue/effects
sound correct. Report stutters, missing graphics, or incorrect map behavior
with the approximate location and action. Performance varies by scene and output
resolution; the current measurements are recorded in `HD-OUTPUT.md`.
Avoid standing beside burning wreckage: it causes damage.

Logs are saved to `build/human-playtest-YYYYMMDD-HHMMSS.log`; native renderer
periodic screenshots are disabled during human play to avoid GPU readback and
disk-write stalls. Diagnostic captures use `build/dx8-live-frame-*.bmp`.
Renderer logs and capture names
are reused between runs. Full level completion and graphics/audio fidelity
have not been established. This is a diagnostic playtest build.

## Complete native frame capture

For diagnostics, set `XML1_DX8_CAPTURE_REQUEST` to an absolute text-file path
before launching the diagnostic build. Start that file with `0` and a newline.
To capture, replace it with a larger positive integer and a newline. The next
complete frame is saved as `build/dx8-request-ID-frame-N.bin`. Completion is
logged only after the native worker acknowledgement and successful file close.
All ordered clears, intermediate flushes and final draws are included. Captures
use exclusive creation and a512MiB limit per frame. Partial request lines are
ignored. This captures rendering commands only and does not simulate input.
Replay locally with `xml1-dx8-worker --replay packet.bin output.bmp`; packets
contain original game assets and must remain private/untracked.
