# Staged loose-asset audit — September 14, 2026

The reported missing intro movies and black main-menu background were real
defects. The previous frame-only smoke check did not establish correctness.

## Causes and repairs

1. Active staging junctions pointed into `game/`, which had been renamed to
   `XBOXgame/`. Movies and sound banks were therefore unavailable. The old links
   were retained under inactive `.previous-*` names, and real source directories
   were copied into `!GAME/`. All 288 copied media/archive files matched source
   SHA256 hashes. Source assets and saves were not modified. Staging now rejects
   missing, empty, or linked active media directories before copying binaries.
2. Both converters stripped `.igb` from motion-path bundle references. The
   native loader at `sub_001210E0` interprets extensionless names as an item path
   within a bundle and removes the final component. Consequently
   `menus/main_back` loaded `motionpaths/menus.igb`, not the main-menu camera
   bundle. Both converters now preserve `.igb`. Twenty-one staged manifests
   were repaired, with backups under `work/audit-motionpath-backup/` and a change
   list in `work/audit-motionpath-changes.json`. A regression test invokes both
   extractors and checks the resulting bundle reference and payload.
3. Normal player startup detached its console after redirecting diagnostics.
   Console detachment now precedes redirection. Normal visible-window logging
   has not been separately verified during this hidden audit.

## Actual output inspected

The exact staged `!GAME/X-Men Legends.exe` ran from the system temporary
directory with `--headless --muted`, no data-root override, process-local input,
native DX8 rendering at 1920x1080, and a 170-second diagnostic watchdog.
The run finished with watchdog exit 3; it did not crash.

Evidence: `work/staged-gameplay-audit/run.json`, `game.log`, native capture
requests under `!GAME/build/`, and replays under `work/staged-gameplay-audit/`.

| Evidence | Observed content |
| --- | --- |
| Previous audit 9801, 9803, 9804 | Activision animation and story FMV with subtitles |
| 9812 and 9813 | Main menu over the textured 3D shaft; camera position changes |
| 9814, frame 2668 | New York entrance, Wolverine, portrait, health/energy, pickups, environment textures |
| 9816, frame 4505 | Wolverine has moved into the courtyard; camera follows |
| 9817 | Enemy fighting Wolverine, damage number and reduced health |
| 9818 and 9819 | Game-over menu over the same level after the harness character dies |

Input logs confirm movement and attack/power commands were delivered only inside
the game. The short sequence does not prove every command's intended effect,
full-level completion, later transitions, or save/load correctness.

## Limitations and remaining work

- Audio was captured, but perceptual fidelity was not established. Over the
  interval starting at 65 seconds the instrumentation recorded 123 empty queue
  observations, a maximum 198.626 ms submission gap, and 1.913 seconds of
  wall/sample discrepancy. Native capture/replay and directory tracing ran
  during this session, so this is evidence of stalls, not an isolated diagnosis
  or a clean-audio pass.
- Gameplay frame windows 2761–5640 averaged 46.34 FPS; one 120-frame window was
  36.13 FPS. This instrumented audit is not a replacement performance benchmark.
- The later filename-preserving extraction fixed the automap discrepancy.
  Canonical loose and packaged native captures now match; see
  LOOSE-ASSETS-PKGB.md for final package acceptance evidence.
- Global and project AGENTS.md now explicitly forbid using rendered frames,
  successful draws, or a live window alone as smoke-test acceptance.
