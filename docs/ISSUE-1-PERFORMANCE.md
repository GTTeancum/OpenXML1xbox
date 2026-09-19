# Issue 1: severe framerate loss

Open report: https://github.com/GTTeancum/OpenXML1xbox/issues/1
Intel i5-12500H and RTX 3050, inconsistent 4–8 FPS from logos through gameplay.
No affected-machine logs, driver version or exact executable hash were provided.
The report has not been reproduced on the available Ryzen 7 8745HS/Radeon 780M.
Do not close this issue or the performance TODO based on this machine alone.

The performance TODO (currently #2) also has a user-mandated closure requirement:
neither the user nor Codex may close it until the user has personally tested the
candidate build on multiple machines locally at home and accepted the results.
Two laptops and a different desktop are available for those tests. This
requirement remains pending regardless of development-machine benchmarks or
completed implementation.

## Runtime changes

- All completion barriers use a 1x1 CopyRects image surface, including FSAA off.
  Previously the default non-FSAA path locked the full presentation surface at
  every fence. The presentation buffer no longer requests LOCKABLE_BACKBUFFER.
  CPU-readable data for screenshots is copied separately at full size. Guest
  fences still wait for real completion; no fence is acknowledged early.
- The visible renderer blocks on a pipe readiness event plus window messages,
  rather than continuously calling PeekNamedPipe/SwitchToThread. A reader thread
  owns stdio only until its next-byte-ready event; the renderer owns it during
  command decoding. Shutdown cancels and joins the reader before closing stdio.
- Normal renderer logs include per-120-frame wait, work, completion and Present
  times. Fence and Present times are subsets of work, not additive totals.
  These counters need no vendor tools and do not change device selection.

## Validation

Native DX8 tests passed at 1080p with 0/2/4/8 samples. Each of 32 frames per mode
checks that the 1x1 completion pixel has the newest clear color and full capture
retains the rendered triangle and resolved antialiased edges. Fence surfaces
are checked to be 1x1; screenshot surfaces remain 1920x1080.

The non-FSAA synthetic fence read measured 1.420 ms before and 1.239 ms after on
the local integrated GPU. Full screenshot copies became more expensive; those
are explicit diagnostic captures, not normal presentation. These measurements
are not proof of RTX improvement or reproduction of the reported slowdown.

The readiness test transferred 100 delayed commands in order, then EOF, and
closed while a read was pending. Render-thread CPU time during 1250 ms of waiting
was below the GetThreadTimes measurement resolution (reported 0 ms).

Native staged runs exercised the visible-window readiness path with the actual
window hidden via XML1_DX8_MESSAGE_WAIT_TEST. FMV, Cerebro background, retail save
load and gameplay movement were individually inspected in all four captures
per run. Audio was muted and is not perceptually validated. No saves changed.
Steady local gameplay remains approximately 49 FPS at 1920x1080. This is mostly
stationary after movement, not sustained combat or cross-hardware acceptance.

Evidence: work/issue-1/readback-before.log, readback-after.log, after-run,
final-run and local-comparison.json. The first after-run includes an outlier and
concurrent test/build work; do not claim a measured overall FPS gain from it.
The candidate executable is staged at XBOXgame/X-Men Legends.exe with its
renderer embedded and only Windows system DLL imports.

## Remaining evidence

The affected system must run the candidate build and provide its FPS and
build/dx8-live.log, build/dx8-vblank.log and the game log (including adapter/device,
DX8 FPS/COST/COST SPLIT, VBLANK and INPUT COST entries). That will
establish whether the removed costs explain its 4–8 FPS, or identify the next
bottleneck. Until then this is a validated candidate improvement, not a confirmed
resolution of the reported hardware case. No GitHub issue closure was made.

## Published-release audit

All 35 files in the downloaded GitHub 0.8b ZIP match its published manifest.
Its renderer SHA256 is 8bc7feef8699942a4688b4373f56b3d7b112b62e5c824f7d17dc2f2d9ac76306,
identical to the pre-fix player renderer. No packaging mismatch was identified.
The issue still has no comments or affected-machine logs.

A single-EXE candidate archive is available locally at
work/issue-1/OpenXML1xbox-issue1-candidate.zip, with candidate-SHA256SUMS.txt.
The archived executable matches the final native smoke test exactly. It has
not been published and the GitHub issue remains open.

## Four-part performance sweep — 2026-09-15

This follow-up implements the safe changes from the read-only assessment. It
does not establish the cause of the reported Intel/RTX slowdown. The earlier
archive above predates this sweep; the current executable is in XBOXgame.

- Disconnected XInput slots retry every two seconds. Connected slots are still
  sampled on every request, including immediate disconnect detection. Reconnect
  can take up to two seconds. Other errors are not cached as disconnection.
  INPUT COST reports real host call counts, skipped probes, total and maximum
  call time. XML1_PROFILE_PHYSICAL_INPUT enables read-only physical polling
  alongside synthetic gameplay without merging real input or sending rumble.
  This addresses Microsoft's guidance against polling empty slots every frame:
  https://learn.microsoft.com/en-us/windows/win32/xinput/getting-started-with-xinput
- Both workers report adapter enumeration, vendor/device IDs, driver version,
  actual device adapter ordinal, display and process role. Vblank observation
  reports every 120 waits and individual waits >=50 ms. The synchronization
  policy is unchanged: no arbitrary timer substitution or affinity setting.
  These are the identities exposed by D3D8; they do not independently prove
  physical GPU routing through a hybrid driver.
- D8 submits pending draws before a clear without a CPU/GPU completion barrier.
  It does not publish a guest fence. F8/R8 still synchronize all preceding draws
  and clears before acknowledging completion. The texture dictionary persists
  across D8 exactly as across F8/R8. This removes an unnecessary mid-frame wait
  without acknowledging guest work before it is complete.
- Texture cache misses can reuse an evicted, identically sized/formatted managed
  allocation. Textures pinned by dictionary tokens or the current first texture
  stage cannot be overwritten. Normal managed LockRect synchronization is kept;
  no NOOVERWRITE/discard shortcut or guessed FMV resource name is used.
- COST SPLIT separates reads during command decoding from the remaining decode
  and submission wall time. Texture time is a subset of decode/submit. Existing
  fence/Present time remains a subset of total work. Decode/submit includes
  driver calls, scheduling and optional captures: it is not a CPU utilization
  measurement, and read time includes stdio copying as well as blocking.

### Measurements and validation

Same local Ryzen 7 8745HS/Radeon 780M, 1920x1080, no FSAA. Two 130-second hidden,
muted runs used the same save/menu/movement sequence. No build or other test ran
concurrently with the measured gameplay. The after run additionally sampled
real XInput through the diagnostic mode. Nineteen 120-frame windows, ending at
frames 3600 through 5760, gave:

| Measurement | Before | After |
| --- | ---: | ---: |
| Weighted gameplay FPS | 48.901 | 48.910 |
| Completion waits/frame | 5.789 | 3.834 |
| Completion wait ms/frame | 6.530 | 5.335 |
| Total renderer work ms/frame | 7.883 | 6.824 |

This is reduced renderer overhead, not a demonstrated overall FPS improvement.
By frame 780, 295 texture allocations had been reused and 59 created. The local
600 recorded vblank waits averaged approximately 13.7–14.9 ms in their windows,
with a maximum of 16.702 ms; no >=50 ms vblank event occurred. Both devices reported
the Radeon 780M on DISPLAY2. Late gameplay real-input windows made 123–126 calls
and skipped 354–357 probes per 120 frames, costing approximately 2.6–2.9 ms total
per window. This is not evidence of XInput cost on the affected machine.

All eight requested native captures (four per run) were individually inspected:
intro logo FMV, main menu with Cerebro, loaded Central Park gameplay, and movement
away from the initial position. No missing artwork/background or stuck transition
was observed in that flow. Both runs exited at their watchdog and UDATA hashes
were unchanged. This covers a save load and brief movement, not sustained combat,
all levels or perceptual audio. Muted output leaves audible quality unverified.

Passed checks:

- Production input bridge with a controlled host backend: repeated empty-slot
  probes are skipped, connected sampling stays immediate, disconnect/reconnect
  is detected. Separate synthetic-input tests still make zero host calls.
- Native 1080p D8 draw -> partial C5 clear -> empty F8: expected blue/green/red
  pixels survive in order, no early completion, one explicit completion, and
  a repeated empty fence does not add a wait.
- Eighty distinct texture payloads force 48 allocation reuses while dictionary
  and current-draw references retain their original pixels.
- Native 1080p completion/capture tests at 0/2/4/8 samples, including fresh clear
  pixels and antialiased triangle edges; pipe readiness/EOF/cancellation test.
- Generated game fence issue/wait test: acknowledgement ordering, ABI, pending
  fences and counter wrap. Its missing embedded-worker test stub was repaired;
  the fixture must never launch a real worker.
- Embedded renderer matches the standalone executable exactly; imports require
  only Windows system DLLs. No adjacent runtime DLLs or launcher are needed.

Evidence: work/performance-sweep/{before-run,after-run}, comparison.json,
submission-test.log, readback-test.log, fence-test.log and input-test.log.
Staged XBOXgame/X-Men Legends.exe SHA256:
97fd04fcbb686be52b4b336aafda0ca6c4c808674079b7e71c1c4e2fc3b5a0c0.

The scoped implementation/measurement sweep is complete. GitHub issue #1 and the
broader performance TODO remain open pending affected-hardware evidence.

Subsequent cadence tracing found and raised the retail 49 FPS default to 60.
See [Native frame cadence](FRAME-CADENCE.md) for the trace, repeatable local
48.81 -> 59.89/59.97 FPS result, current staged executable hash and limitations.
This does not resolve the affected Intel/RTX report.

The subsequent [six-part cross-hardware pass](CROSS-HARDWARE-PERFORMANCE.md)
reduces kickoff completion waits and transport round trips, adds explicit worker
GPU selection/identity, blocks on native vertical blank, retains indexed geometry
and replaces individual texture-cache entries. It is staged for the user's
multi-machine testing; issue #1 and performance TODO #2 remain open.


## Affected-hardware sampling: the symptom is hitching, not low FPS

Hardware: Ryzen 7 5700X3D (16 logical), 64 GB, RTX 4080 SUPER, Windows 10.0.26200,
windowed 1920x1080, presentation_interval=0. Reports under XBOXgame/logs/performance.

Session reports show the median frame at **16.5-16.9 ms in every interval** - the
60 FPS cap - while single frames reach **1066 ms**, and eight of ten intervals
contain a frame over 100 ms. Mean FPS of 20-50 is the arithmetic consequence of a
few enormous frames, not a uniformly low rate. What a player reports as "very
laggy" here is stalling, not frame rate, and the two want different fixes.

The renderer is not the constraint. It occupied **0.03-0.14 core equivalents** and
spent most of each interval waiting for work: 5.8 s of wait in one ~6 s interval.
The game process occupied ~2.5 of 16 logical cores, which presents as roughly 15%
machine-wide - the reason the machine looks idle while the game stalls.

`XML1_NATIVE_PROFILE` (200 samples, 50 ms apart, across the intro) attributes the
stalls: **36% of samples are blocked**, all on condition variables
(`SleepConditionVariableSRW` 39, `RtlSleepConditionVariableCS` 26), with a longest
unbroken run of **12 samples = 600 ms in one wait**. The largest non-blocked cost
is `xml1_movie_convert_impl` at 9.5%, consistent with the existing note that movie
presentation is slow, plus `NtReadFile` at 4%.

The APU is not the cause. The first interval's worst frame is 815.3 ms, 800.2 ms
and 813.2 ms across three runs, the third with `XML1_APU` unset. Audio-lock
contention would not survive disabling the APU. That run stopped after the first
movie, so it compares only that interval; movie playback appears to depend on
audio.

Not established here: which condition variable is waited on, whether the stall is
transport round-trip latency or guest-side blocking, and whether gameplay stalls
share the boot sequence's cause. The renderer starving while the guest blocks is
consistent with a latency ping-pong between the two, but the wait target was not
identified. Profiler output lands in the game's own working directory
(XBOXgame/build/native-profile.csv), not the project root.
