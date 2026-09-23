# Imported character-handler live crash checks

Completed practical crash/integration pass: 2026-09-20.

The visible test actor is **Wolverine**, with imported handlers attached to
private test moves. Batch N additionally loads XML2 Rogue's animation bank on
that actor. These captures do not depict Rogue, Toad, Gambit or other complete
imported characters. Logs establish handler identity; native captures establish
visible movement, effects, world continuity and cleanup where observable.
This is not certification of complete character movesets or balance.

## Results

All 15 handlers executed and returned in a real loaded level. Representative
positive paths, repeated use, interruption and target cleanup completed without
an observed runtime crash. No additional gameplay fix was required during this
pass. Source changes add opt-in branch diagnostics and reproducible generated
selection tracing; they do not change combat tuning or XML1 behavior.

Evidence below is local under `work/xml2-integration/handler-live/` (excluded
from Git because it includes game assets and captures). Each named batch has
`flow.log`, native `capture-*.bmp`, and, except the explicitly noted batch C,
`flow-result.json`. `live-coverage.json` indexes actual `context=game`
callback entry/return records; it is supporting evidence, not the acceptance
criterion by itself. Earlier builds differ as optional diagnostics were added.

| Handler | Positive live evidence and lifecycle checks | Evidence batches |
| --- | --- | --- |
| `ch_bishop_drain` | Landed native melee contacts accepted the special chain repeatedly; continued combat. | L |
| `ch_restore_visible_on_interrupt` | Actual hidden bit cleared from 4 to 0 twice on interruption. | E |
| `ch_pickup_throw` | Native pickup of a trashcan, then forced interruption cleared the nonzero held handle; actor no longer held the object afterward. | H |
| `ch_nightcrawlerboltons` | Repeated interruption dispatched native tags 100/101/102; fixture visibility events changed 0/4/0. | A-v5, E |
| `ch_ngtmovingboltons` | Held assigned-power input accepted the chain twice; repeated tagged cleanup dispatched. | D, E |
| `ch_wolv_frenzy` | Fresh assigned-power presses accepted the chain twice and returned to gameplay. | D |
| `ch_block` | Start, held input and release repeated under enemy attack, then continued gameplay. Automatic-hit gate limitation below. | J, K |
| `ch_rogue_torpedo` | Forward speed 600 in the animation window, repeated contacts delivered tag 100 successfully; interruption and continued combat. | B-v2, O |
| `ch_wolv_lunge_attack` | Update/contact and cleanup returned; reserved target released and no-target cleanup tolerated. | B-v2, D |
| `ch_wolv_lunge` | Reserved a live enemy, transitioned to attack and released that same target; subsequent no-target path returned. | D |
| `ch_toad_leap` | Start, delayed forward speed 350, contact and interruption; three final repetitions returned to combat. | B-v2, O |
| `ch_rogue_energy_drain_atk` | Eighteen activations selected all three animations 91/93/D6; power13 lookup succeeded; repeated interruption. | N |
| `ch_gambitdecide2` | Sixteen attempts exercised both matched-target and no-target branches with valid next nodes. | M |
| `ch_magnetic_grasp` | Live queries, nearby movable props and repeated manipulation; native output showed damaged/destroyed props and pickups. | B-v2, M |
| `ch_storm_chain_lightning` | One-to-three targets with an actual nonzero effect resource and visible beams; killed target pruned, then empty-target effect and repeated use. | C, I |

Selected output inspected during the pass includes D/6 (continued gameplay),
E/6,7,28 (cleanup and continued world), H/7,9 (pickup then release),
I/6,14,16 (dead targets/debris, empty ray, continued world), K/9 (held block
under attack), L/14 (continued combat), M/6,24 (props and continued combat),
N/10,22 (Wolverine using Rogue animations), O/7,12 (movement/contact and
return to combat), and C/11,12 (actual chain effects). These are selected
captures, not an every-frame inspection.

## Player build and regression checks

Player executable: `XBOXgame/X-Men Legends.exe`, directly beside the assets.
Final SHA-256:
`22bdef3d25919c75360462726f88fdf31615edeb8329de64e4450f3698e7e3d5`.

The final build passed powerup-definition (including all 15 isolated handler
checks), filter-event, progression, memory-query, IRQL and swizzle diagnostics.
See `verified-regressions.json` and `verified-regressions/*.log`.

Normal staged startup/gameplay is checked separately from private fixtures in
`staged-final/`: intro FMV, Cerebro main-menu background, level 1, ordinary
combat, pause and resume. This run uses the actual staged EXE and normal
XBOXgame assets, launched from a different working directory. Native captures 1, 2, 7, 8 and 9 were inspected: FMV content, Cerebro,
combat, pause background and resumed combat were present. The process remained
alive until deliberate harness termination, and UDATA hashes were unchanged.
See `staged-final/inspection.json` and `flow-result.json`. The staged hash
matches the built executable. PE imports are Windows-provided modules; there
are no adjacent DLL dependencies. No test game process was left running.

## Isolation and limits

- Private asset tree: `work/xml2-integration/handler-live/game`. Immutable files
  share storage with player assets; modified fixture files use atomic
  replacement rather than editing shared hardlinks. Private scripts, moves,
  animation declarations and package changes were not staged for players.
- Runs use process-local test input and native DX8 backbuffer capture. No
  desktop control, host input or desktop capture was used.
- Hidden/muted runs do not verify audible audio quality. Multiplayer, full
  imported character appearance/movesets, balance and exhaustive branch or
  long-duration coverage remain outside this practical crash pass.
- Block's probabilistic automatic-hit gate was covered by isolated tests but
  was not observed firing live. Live held/released block under attack passed;
  this does not claim every attack category or immunity behavior.
- Bolt-on cleanup used real native tagged events with visible fixture actions;
  it does not certify Nightcrawler's complete sword assets/animations.
- Target death/empty selection was exercised with lightning; reservation and
  held-object cleanup were exercised separately. Not every handler underwent
  every possible target/owner destruction sequence.
- Successful bounded runs were intentionally terminated by their harnesses
  after completion; exit code 1 in their results is that termination, not a
  spontaneous game crash. `alive_at_stop` and unchanged save hashes distinguish
  the outcome. No successful-result claim is based solely on a frame count.

## Exploratory failures retained in the evidence

Initial fixtures that failed to activate a handler do not count as live passes.
Batch B-v1 ended in ordinary player death; its replacement repeated the complete
sequence with invulnerability. Early pickup and lightning fixtures did not
reach the intended positive branches; H and C/I respectively replaced them.
Batch C completed its script and survived, but its final capture request used
an old ID after a newer one; only its actual captures 11/12 count. Later
harnesses use increasing IDs. An initial standalone diagnostic launch lacked
an asset path; the corrected diagnostic invocation explicitly selected the
private asset directory, and all six tests passed.

Cleanup 2026-09-21: cited BMP captures and handler logs are retained in
work/cleanup-20260921/cited-evidence.zip at their original relative paths.
Uncited historical captures were discarded. The private handler game tree was
removed; its unique files remain in handler-fixture-unique-files.zip. Other
obsolete fixtures have also been deduplicated against XBOXgame, so they are no
longer runnable installations. JSON results and harness scripts remain.
