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
