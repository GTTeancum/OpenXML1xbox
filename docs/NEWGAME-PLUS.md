# NewGame+ implementation and validation

Work in progress and not marked complete. The runtime is included in the current
performance candidate; full NewGame+ carry-over validation remains open.

The pause menu adds a native eighth row. Confirmation defaults to Cancel and
uses the game's popup manager. The accepted action queues retail `newgame`
instead of invoking destructive `newgame 1` inside the menu callback.

## Traced behavior

- Credits-end 0016E124–0016E156 unlocks characters/costumes and sets GameState
  completion bit 1 at 4A0210+195. Bit 0 is the ordinary costume unlock; it is
  not sufficient for eligibility. Completion is retained in the profile's
  native settings serialization, not inferred from modderMode.
- Native resetgame 0018CF90 still resets scripting, world, mission and transient
  entity state. Only its calls clearing shared inventory/currency (7E2F0),
  character availability (54A10), and Danger Room credits/unlocks (C0700)
  are skipped while the confirmed NewGame+ transition is active.
- Alison startup ordinarily restores snapshot zero and then captures it again.
  At 0018DAED, only the old snapshot's valid flag is cleared so native capture
  establishes the carried progression as the new baseline. Character objects
  and equipment references are not restored from raw host-memory copies.
- No new save format is introduced for NewGame+. The existing expanded-roster
  framing and native save/load paths are used. Starting NewGame+ does not
  automatically overwrite an existing campaign save.
- The temporary environment-variable eligibility bypass has been removed.
  Optional XML1_NEWGAME_TRACE produces read-only reset-boundary snapshots;
  scripts/guard-newgame-plus.py preserves these hooks across regeneration.

## Evidence (private work/newgame-plus fixtures)

- Normal-reset baseline versus carry-over trace: Wolverine level 2, 259 XP and
  75 currency survive the restart; ordinary new game reset the same fixture.
- save-game-v2: native new-slot save succeeded after restarting and moving in
  Columbus Avenue. reload-game-v1 listed Game 2 and loaded level 2 / 259 XP in
  a fresh process. The idle harness then allowed enemies to kill Wolverine;
  that run does not validate its planned completion-rejection step.
- reject-menu-v1: original unfinished campaign is rejected; native 4:3 pause
  row and rejection dialog fit without clipping. Gameplay/background inspected.
- credits-fixture-v1: invoking native credits_end in the isolated fixture showed
  the ending FMV, credits, unlock notice, and save-unlocks prompt; it saved the
  profile and returned to the 3D main menu. This is a synthetic completed profile,
  not a naturally completed campaign.
- completed-profile-v2: with no eligibility bypass, that profile permits NewGame+;
  Cancel returns to pause, confirmation fits 4:3, restart reaches Columbus Avenue
  with level 2, movement works, and a new Game 3 save reports success.
- 1080p pause/confirmation, gameplay and save screens were also inspected.
- One earlier completed-profile-v1 load ended with an unexpected graphics pipe
  exit before gameplay. A repeat passed; no cause or fix is established. Added
  EOF/read-error and acknowledgement diagnostics for further investigation.

## Remaining validation

A real completed Xbox campaign with populated equipment and powers has not been
obtained. GameFAQs lists Xbox modified progress saves but the explicit final-battle
entries are PS2. The Tech Game indexes an Xbox save described as completed once
(all characters unlocked), but its current page is unavailable to this environment.
Search notes and links: work/newgame-plus/save-search.md.

Full endgame roster/equipment/power carry-over, repeated runs, and the unexpected
pipe exit remain open. Hidden tests were muted; audible audio was not verified.
Native captures were inspected for the completed flows above. Private Save Test /
Ending Test menu substitutions are test fixtures only and must never be staged.
