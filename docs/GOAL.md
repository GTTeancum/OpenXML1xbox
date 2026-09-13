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

Current milestone: first legal splash presented from live guest execution through
native Windows DX8. Audio initialization now starts the APU and loads sound banks,
and voice banks with corrected stereo PCM settings. Native DX8 fence completion
now advances beyond 180 splash frames. Regenerated vtable function0011F170 passes;
startup passes saved-game enumeration and opens movies/ntsc/i/1/i102.sfd,
the CRT worker entry00345453 now runs. A deterministic test reproduced and fixed
a shared kernel-dispatch-slot race behind callback stack corruption. Movie startup
passes PSFD entries00395C20 and00396920 and stops at callback00336970.
Native DX8 also accepts the observed ARGB texture/FVF102 draw path.
Encoded audio remains unsupported. FMV,
menu, level 1, audio and visual correctness remain unverified; see PROGRESS.md.
