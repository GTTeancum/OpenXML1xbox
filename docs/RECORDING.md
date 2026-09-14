# Recording OpenXML1 gameplay

HD update: the launcher now defaults to native 1920x1080 progressive with the
game's original widescreen view; 1280x720 is selectable. The initial 4:3 advice
below describes the earlier 640x480 build. Preserve 16:9 when recording the HD
build. This change leaves the user's OBS source, scene and profile settings
untouched; OBS's configured recording resolution is separate from the game's
backbuffer resolution. See [HD output](HD-OUTPUT.md).

Use OBS for the first 15-20 minute proof video. A custom recorder remains possible, but would add GPU readback, encoding queues, shutdown recovery and audio/video clock work to a port that still has timing issues. OBS also records the audio as heard during play, whereas simply muxing the existing pre-device PCM dump can hide output starvation.

Installed OBS version checked from obs64.exe: 32.1.1. No OBS settings were changed and neither OBS nor the game was launched for this assessment.

## Suggested setup for the next user-driven session

1. Add **Game Capture**, select **Capture specific window**, and select **OpenXML1 - DX8 Playtest** (`xml1-dx8-worker.exe`). OBS 32.1.1 includes a D3D8 capture hook. This establishes support in principle, not a tested capture of this particular renderer. If the preview is blank or capture adds stalls, try **Window Capture** for the same window, with the Windows capture method, client area only and cursor disabled.
2. For the first proof, capture the game's actual output device through OBS **Desktop Audio**, with other audio-producing apps quiet. The visible renderer process does not produce the sound: `xml1-boot-probe.exe` owns XAudio2. Therefore the capture source's automatic audio checkbox targeting the renderer alone is insufficient. Application Audio Capture targeting the game process is a later option if OBS exposes it; do not assume its window picker will list this console/headless process. Use only one copy of game audio to avoid doubling.
3. Preserve **4:3**. Start with a 640x480 canvas and 60 FPS. Native-size recording minimizes extra scaling work; upscale during editing if desired. A 1280x960 export preserves the aspect ratio. Upscaling adds no source detail.
4. Use **H.264 hardware encoding** if OBS offers the AMD encoder, with its quality-based recording preset and **AAC, 48 kHz stereo**. Start with the existing OBS high-quality preset; tune only if a short recording shows encoding lag or excessive file size.
5. Select **Hybrid MP4**. It is available in this installed OBS version and remains recoverable if recording ends unexpectedly, then finalizes as a conventional MP4 on a normal stop.
6. Before the long take, record 60 seconds including attacks, a menu and a transition. Check sound, synchronization and OBS rendering/encoding-lag statistics. Once stable, record the full 15-20 minutes and inspect the beginning, middle and end for drift. Capture configuration and duration are not yet validated on the running port.

The next human launcher disables periodic native BMP captures so they do not compete with recording. The game still uses the genuine system D3D8 renderer.

## Sources checked

- [OBS Game Capture](https://obsproject.com/kb/game-capture-source)
- [OBS 32.1.1 D3D8 hook dispatch](https://github.com/obsproject/obs-studio/blob/32.1.1/plugins/win-capture/graphics-hook/graphics-hook.c#L340)
- [OBS Window Capture](https://obsproject.com/kb/window-capture-sources)
- [OBS application audio capture](https://obsproject.com/kb/application-audio-capture-guide)
- [OBS Hybrid MP4](https://obsproject.com/kb/hybrid-mp4)

## Port status before recording

The save-directory ABI correction passes the synthetic kernel regression; listing and loading the user's existing Central Park save in the game remains unverified. Automatic screenshot work and per-volume-change audio logging were removed from normal play, and XAudio2 queue-depletion diagnostics were added. Audio stutter and occasional FPS drops are still open until a new playtest establishes their behavior. The game is closed, and the user requested no launch until they return.
