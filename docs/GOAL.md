# Level 1 goal

Started: 2026-09-13 06:14:26 UTC (02:14:26 America/Indianapolis).
30-hour cutoff: 2026-09-14 12:14:26 UTC (08:14:26 America/Indianapolis).

Reach playable XML1 level 1 with correct graphics and audio on genuine Windows
Direct3D 8. Preserve original game behavior and report any unverified fidelity.
Use the staged World ISO without modifying it. No desktop capture or host input.

Post screenshots from native game rendering as real artwork becomes available:
splash screen, FMV, main menu, and level 1. Do not substitute asset viewers or
handwritten screens for the game's execution. Keep captured originals in this
project; copy user-facing captures to the conversation outputs directory when
needed for display.
Only post a screenshot when it shows something new; do not repost an unchanged
splash or scene for an implementation-only milestone (user clarification).

At the cutoff, stop further implementation, preserve work and report milestones,
remaining blockers, visual/audio evidence, and measured gameplay performance.
Do not claim completion solely because the deadline is reached. Goal status tools
do not expose a pause operation; report the deadline stop accurately rather than
marking an unfinished goal complete.

Current milestone: native Windows DX8 splash, menu logo/background and a first
level1 frame with Wolverine in NYC have been captured. A process-local A press
selects Begin Story; a process-local stick probe demonstrates movement and camera
response in level1, with a60-second run ending at the diagnostic bound. Combat,
complete traversal, sustained gameplay and full visual correctness remain
unverified. Full mipmap chains now upload and pass native level-selection tests.
Actual DSP output now reaches XAudio2 and guest APU interrupts resume processing,
and physical page mapping now produces sustained nonzero game DSP samples.
Audio fidelity, pitch resampling and movie progression remain open; boot093
stops presenting after frame780 and later PCM becomes silent.
The movie converter's
INC/DEC carry bug is fixed and now writes all
480 rows, but the intros advance too quickly and stream lifetime is unstable.
Only very dark early-fade FMV captures are verified; no recognizable FMV artwork
has been posted. Audio fidelity and sustained playable level1 remain unverified.
All of these remain required work. See PROGRESS.md and UPSTREAM-REVIEW.md.

Native vertical blank waiting now replaces the invalid guest event wait.
boot096 exposes guest heap exhaustion from repeated movie buffer allocations;
movie progression and current level1 behavior remain unverified.

Movie VM releases now return buffers to the guest heap; boot100/101 no longer
exhaust it. Nonzero movie textures still render black; draw-state investigation
and audio rate/progression validation remain necessary.

First native FMV artwork is visible after guest FIST rounding fix (boot107
Activision capture). Decoder block artifacts and audio/timing remain unresolved.

Stateful voice resampling is active and tested; boot112 produces30 seconds of
audio in38.663 seconds, so real-time pacing and A/V fidelity remain open.

Consumer-paced audio reaches28 seconds of PCM in28.010 seconds (boot115).
Movie speed, intermittent image artifacts and full A/V synchronization remain
unverified; the level1 completion goal is still active.


Optimized playback testing and an event-driven FIFO renderer handoff are available.
boot121 advances naturally through later intro movies, including native Raven
artwork. One earlier optimized run stalled before movies; startup reliability,
movie fidelity and current playable level1 still require work.


Longer runs expose audio synchronization failures: boot122 invalid streaming
segment descriptor; boot124 blocks entering DirectSound critical section0037A70C
after the final intro. Native empty-flush regression tests pass, but the first
movie GPU flush still spans about25ms. Completion remains unproven.


boot128 now reaches the main menu with its background visible after correcting
guest-visible IRQL/DPC level and accepting valid physical0 audio buffers.
Native menu frame1560 is saved as new evidence. Level1 on this build, sustained
playability and graphics/audio correctness remain required work.


Native raster waits no longer block rendering; boot130 reaches660 frames/30s.
The missing GPU fence tag is now published after native completion; boot134
runs300s through menu/attract video without its earlier fence stall. Directed,
elapsed-time process-local input is ready for the next level1 test. Audio
reference mismatch remains visible before DSP processing; goal remains active.

boot135 now reaches level1 with native DX8 and APU enabled for the300-second
bounded run. Directed movement and an A-button poll succeed, but extended
traversal/combat, sound fidelity and overall graphics correctness are not done.
boot137 movement exposes an artificial32-light-ID bridge limit; correcting
retained light indexing and checking the same path is the current work.

boot138 passes the lighting limit and reaches live enemy combat, hit effects,
health loss and the normal elimination menu. Sparse retained light IDs32-39
are mapped to active native slots. The idle player dies; successful combat and
level completion are still unverified. Audio fidelity remains a separate blocker.
