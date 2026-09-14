# OpenXML1xbox to-do

Updated: 2026-09-13. This is the current checklist; older progress documents
retain historical findings and may describe issues that have since been fixed.
Unchecked verification items are not necessarily known failures.

## Next playtest

- [ ] Verify saves appear in the load menu after saving, including after closing
  and reopening the game. Load the save and confirm restored progress. The
  directory-query ABI fix passes its regression; the full human save/load cycle
  has not been confirmed.
- [ ] Test headphone disconnect/reconnect during gameplay. Confirm the game
  stays running, follows the default output, and resumes sound. Recovery passes
  simulated device-loss and real XAudio2 engine-restart tests.
- [ ] Check audio through 15-20 minutes of combat and transitions for crackle,
  stutter, missing sounds and A/V drift. Recent user feedback is positive;
  full audio fidelity remains unverified.
- [ ] Complete level 1, including scripted transitions, cutscenes and the exit
  into subsequent content. Traversal beyond the subway has been confirmed by
  the user; full level completion has not.
- [ ] Confirm the title-bar FPS counter and normal hover cursor in human play.

## Performance and graphics

- [ ] Profile remaining combat FPS drops and long frame stalls using the current
  build. Short level-entrance diagnostics measured about 43 FPS at 720p and
  37 FPS at 1080p; these are not sustained-combat guarantees.
- [ ] Check 720p/1080p HUD, menus, FMVs and gameplay effects for clipping,
  incorrect framing or visual regressions during a longer playthrough.
- [ ] Validate additional levels and character/power combinations as playtesting
  reaches them; record reproducible problems with locations and logs.

## Recording and documentation

- [ ] Validate a full 15-20 minute OBS recording for audio sync, recording lag
  and successful automatic finalization.
- [ ] Add the public YouTube proof link to the README when its URL is available.
- [ ] Reconcile stale status statements in README/progress/goal/recording notes
  with current evidence, retaining historical diagnostics separately.

## Modding and portability

- [ ] Implement and document loose-file asset overrides.
- [ ] Establish validated asset conversion and a repeatable mod-testing workflow.
- [ ] Document gameplay/script hooks that survive recompilation.
- [ ] Investigate a 32-bit game runtime and the concrete requirements for an
  original-Xbox build. The current Windows game runtime is 64-bit, with a
  separate 32-bit system-D3D8 renderer; an Xbox hardware port is not implemented.
- [ ] Continue checking upstream branches/PRs before duplicating fixes, and
  upstream suitable remaining toolkit patches.

## Completed milestones

- [x] Set up the independent XboxRecomp repository and extracted game data.
- [x] Render native splash screens, FMVs, the main menu and level-1 gameplay
  through genuine Windows Direct3D 8.
- [x] Fix the subway transition problem; the user played beyond it.
- [x] Implement the completed-fence combat-wait correction and worker/audio
  shutdown handling, with regression coverage.
- [x] Enable original widescreen framing and native 720p/1080p output.
- [x] Reduce redundant texture transfers and state calls; verify captured
  combat pixels against the prior rendering path.
- [x] Implement audio-device recovery and remove the human session time limit.
- [x] Add title-bar FPS updates and assign a normal window cursor.
- [x] Configure the dedicated OBS source and 1080p/30 FPS recording output,
  preserving a backup of previous settings.
- [x] Automatically stop/finalize OBS recording on game exit. Confirmed with
  the approximately 4m36s recording from the latest user session.
- [x] Public gameplay proof uploaded to YouTube by the user.

## Working constraints

Use genuine DX8. Keep original inputs, game assets, saves and captures out of
Git. Keep the GameCube project untouched and preserve a future Xbox return path.
Do not use desktop automation or host input injection. Post screenshots only
when they show something new. Human play has no session time limit; the original
30-hour development-goal cutoff is a separate constraint.

Details: [HD output](docs/HD-OUTPUT.md), [audio recovery](docs/AUDIO-DEVICE-RECOVERY.md),
[combat freeze](docs/COMBAT-FREEZE.md), [playtesting](docs/HUMAN-PLAYTEST.md),
[recording](docs/RECORDING.md), [Xbox return path](docs/XBOX-RETURN.md), and
[upstream review](docs/UPSTREAM-REVIEW.md).
