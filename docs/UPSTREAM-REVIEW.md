# XboxRecomp branch and pull-request review

Checked 2026-09-13 during XML1 initialization debugging.

- main: 3706cefa416aedea6d10c87ced805f89576560c4, exactly our pinned revision.
- work/v0.7.0-non-local: 208fc9d4a71acb1f85662dd19c47bd83c76c2fc1,
  0 commits ahead and 115 behind main. Its fixes are already available in main.
- Open PRs #38, #39, #40 modify src/platform/win32_compat.* for POSIX/Darwin.
  Windows uses its real platform APIs and does not compile that implementation.
  No applicable fix for our current Windows initialization blocker was found there.
- Reviewed recent merged PRs including #28 (generator compile fixes), #32
  (kernel ordinal routing), #33–35 (MMX), #36–37 (graphics), #24 (audio cursors).
  These are already included. Routed kernel ordinals include documented stubs;
  routing coverage must not be treated as complete behavioral coverage.
- Closed PR #13's code-pointer detection was superseded with more conservative
  detection and alias recovery already present in main. Do not apply its original
  patch: upstream reported false-positive boundaries and broken constructors.
- EBP/SEH-related PRs #3, #5, #7 and manual dispatch #15 are already merged.
- Re-read #15's implementation for the CRT memmove replacement. Project now
  supplies config/manual-functions.json, using its direct/indirect/tail routing.
- Memory/allocator/reserve PR search returned related merged #3 and #25; neither
  implements exact-address reservations with consistent query bookkeeping.
- The disassembly cache does not invalidate for the new seed list in this run;
  the project's explicit -Disassemble mode now passes upstream --force.
- Search found no PR specifically addressing NtQueryVirtualMemory. Our first
  runtime loop repeatedly queries it during the engine's address-space scan.

Recheck upstream for a matching fix before implementing new toolkit changes.
Do not blindly merge branches or replace the pin during an experiment.
