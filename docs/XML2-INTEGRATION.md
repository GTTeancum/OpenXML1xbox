# Missing XML2 combat and scripting functions in XML1

Current user direction (2026-09-19): cover missing XML2 executable combat,
character and scripting functions overall, not just Bishop/Sunfire dependencies.
Use only basic programmatic functionality validation; users perform gameplay
testing. Earlier live/visual acceptance requirements below are historical and
are superseded for this goal. Do not claim gameplay verification from unit or
integration checks. Prioritize implementing missing behavior over further
automated gameplay, screenshot or navigation campaigns.

Scope clarification (2026-09-19, latest): **new functionality ONLY**. If a
function or system already exists in XML1, skip it without comparison. Existing
XML1 behavior is not a parity work item, regardless of the size of any difference.
This overrides earlier notes proposing comparisons, changed-signature work,
or upgrades to already-existing systems. Reading an integration interface to
wire an absent command is still necessary; auditing its XML2 parity is not.

## Current implementation checkpoint (2026-09-30)

The chronological notes below include older counts and superseded pending
claims. Current authoritative script/event inventories are
XML2-SCRIPT-INVENTORY.md and XML2-EVENT-INVENTORY.md, generated from both original
images plus the current extension table. Latest validated script counts:
38 registered additions, 30 existing-facility exclusions, 27 console/online
service exclusions, 30 pending names.
Pending names include unclassified frontend/platform entries; this is not a
percentage of completed gameplay functionality. All event names are now classified; see exclusions below.

Current unfinished implementation threads:
- extraction unlocks: owned zoneinfo metadata and stable zone keys pass core
  checks. Runtime loading, native saved-variable admission/round-trip, script
  dispatch and consumers remain unconnected; commands are still pending.
- permanentStatBoost: independent health/energy bonus ownership, copy/reset,
  max-stat consumers and version5 saves pass programmatic checks. Script entry,
  current-act reward dependency and actor/HUD update remain unconnected.
- ce_remove_powerups: registered through the native factory. Parser/resources,
  native source-context lookup, health eligibility, construction/copy, target
  lists, class/tag removal and composed execution pass programmatic checks.
  Optional beam dispatch arguments are checked; rendering and final native
  damage response are not gameplay-verified. See latest evidence below.
- Other pending commands/events and previously documented huge-state integration
  remain required. Completed progression/rotation and handlers are not restarted.

Latest successful builds/checks are recorded at the end of this document.
Player staging has not changed; no gameplay acceptance, commit, push or release
was performed for these additions. Goal remains active and incomplete.

## Retail script no-op adapters (2026-09-30)

Six absent command names now use the verified XML2 retail zero-return body:
`wanderNextZoneLink`, `causeTroubleForAutotest`, `saveloadDefaultCheck`,
`saveloadDefaultCheck2`, `saveloadBootDeleteCorrupt`, `loadNetworkConfig`.
All six original descriptors point to2BCD90 (`xor eax,eax; ret`); this does
not implement saving, deletion or networking suggested by their names.
The new adapter preserves the native null interpreter result and cdecl
argument ownership. The definition fixture checks each descriptor and
indirect dispatch, unread argument pointer, stack and FPU preservation.
Release build and definition tests pass: `work/xml2-resume/retail-stubs-
build.log` and `retail-stubs-test.log`. The inventory now distinguishes
verified retail no-ops from functional additions, retaining all98 pending
commands and the incomplete removal event. Player staging is unchanged.

## Missing entity fade commands (2026-09-30)

Added only the missing `fadeIn` and `fadeOut` script names with native `n/af`
descriptors. XML2 B3660/B36F0 select CGameEntity and pass duration with zero
delay. XML1 already provides that operation at74990/749E0; the adapters call
it directly and do not replace the fading system or its timing.

The native fixture checks null/wrong type rejection, both scheduling paths,
game clock25, original duration/working fields and stack/FPU preservation.
The first assertion incorrectly expected a negative fade-out working field;
XML1 native74A23 uses multiplier10 at3C8324, so the fixture was corrected
without changing game behavior. Release build and full definition checks
pass (`work/xml2-resume/script-fades-build.log`, `script-fades-test.log`).
Rendered transitions and full interpreter argument dispatch for these two
commands were not exercised. Inventory now has29 extensions and96 pending
commands; this is not an overall completion percentage. Staging is unchanged.

## Historical actSilent consumer trace (2026-09-30)

This trace preceded the implementation recorded below. Its descriptor is `n/aa`.
XML2 B8EB0 resolves the second argument as the action activator, type-checks
it, enumerates the first argument selector, then calls each action entity
virtualB8 with activator and silent=1. The base29050 forwards to virtualC8
(298F0) with delay0 and the silent flag. The delayed path stores the flag
in callback data; callback299A0 forwards it to action execution virtualD4.

The consumer2A930 tests silent at2AAD8/2AAF7 and bypasses activation-sound
playback76270. It preserves the existing stop-sound branch761F0. Immediate
and delayed calls both require this behavior; a plain alias to act would
not implement the missing command correctly.

Existing XML1 interfaces for integration: A05B0 selects action entities via
9FF10/4C25F8, checks type48D8FC and calls virtualB0 with activator only.
26C80 forwards to virtualC0 (27A60), whose deferred record44B9F8 contains
only the activator handle. Actual action execution is virtualCC (28420).
The silent flag must survive scheduling without changing these existing
ABIs or affecting ordinary actions. No adapter/guard was installed yet.
Evidence: `work/xml2-resume/act-silent-dispatch.asm`,
`act-silent-consumer.asm`, `act-xml1-interfaces.asm`.

## actSilent implementation and scheduler checks (2026-09-30)

Added and registered `actSilent` through `raven_silent_action.inc`. It retains
native target selection and action dispatch, snapshots generation handles
before callbacks, and scopes silence to one target/invocation. The generated
guard captures that state once at28420 entry, bypasses only playback at
285D0/285E7 and preserves stop-sound and ordinary-action branches.

For delayed actions,27AE0 selects a persistent alternate callback descriptor
only inside silent scope. Native27480 copies the unchanged four-byte
activator payload. The adapter delegates to original27510 for generation
resolution, pending-bit cleanup and derived action delivery. No actor layout
or event record size changes. Guard generation checks each script exit code.

Release build and definition checks pass, including descriptor lookup,
queue copying, repeated scheduling, target reuse, one-use capture, normal
callback preservation, native callback delivery and pending-bit cleanup.
The delivery fixture initially attempted an uninitialized entity-manager
bootstrap; it now provides/restores the native manager fixture state. Logs:
`work/xml2-resume/silent-action-registered-build.log` and
`silent-action-registered-test.log`.

Actual sound playback, full selector/script execution and persistence of a
queued silent action through save/load remain unverified. Check scheduler
persistence before final staging; no save-layout compatibility claim follows
from the queue-copy test. Inventory:30 registered additions,95 pending names.
The broad goal remains incomplete and player staging is unchanged.

## Silent callback lifecycle verification (2026-09-30)

Recovered native CScheduler vtable3D349C: destroyAA480, resetA9FB0,
insertAA000 and updateAA240. AA4A0 callers include reset boundaries6F488
and80972 and update7338A. The action-state save/load pair27160/271E0
stores/restores action flags and counters, not the scheduler callback payload.
No existing save fields or native scheduler record sizes were changed.

The silent fixture now creates a native scheduler, inserts the added callback
with AA000 and resets with A9FB0. Both live-record and pending-heap counts
become zero, with no extra callback invocation. Native copy/delivery, scope
and pending-action flag checks continue to pass. Build and full definition
checks pass: `work/xml2-resume/silent-reset-build.log` and
`silent-reset-test.log`. Source traces: `silent-scheduler-lifecycle.asm`
and `silent-action-save-fields.asm`.

This establishes transient queue/reset ownership and the native action save
interface; it is not a full campaign save/load or sound-output test. Pending
actions follow XML1 lifecycle reset rather than persisting a new callback
address into action save fields. Staging remains unchanged.

## Current reconciliation (2026-09-30)

TODO #3 is active. The earlier release-dependent scripting deferral is obsolete.
All 15 absent character handlers remain registered; their implementation history
below is not new pending work. Completed rank expansion and gameplay power
rotation are documented in [power progression](XML2-POWER-PROGRESSION.md).

The original-image presence audit finds 125 differently named XML2 script entries:
34 have extension implementations, 4 use existing XML1 facilities and are skipped,
and 87 remain pending implementation/classification.
The latter includes frontend/platform commands and retail stubs; it is not a
count of confirmed missing gameplay systems or a completion percentage.
See the reproducible [command inventory](XML2-SCRIPT-INVENTORY.md).
Combat events, powerups, affecters and damage modifiers still require reconciliation
against current implementations; the 15-handler count does not close that scope.

New additions in this pass:

- `disallowResponse`: XML2 `ACB90` delegates to manager response suppression.
  XML1's integration interface is established by `98B59`, singleton `60C00`,
  vtable `3CBFB4` slot `2C`, implementation `60A80`. Response ownership and
  state changes remain with XML1's native implementation.
- `getConversationActive`: XML2 `ACCD0` queries manager slot `20`, testing the
  low return byte against one. XML1 native interface `60A10` reports the active
  conversation flag. The extension returns a normal interpreter integer.

Build and `--powerup-definition-test` passed (exit 0). Evidence is in ignored
`work/xml2-resume/conversation-build.log` and `conversation-test.log`. Tests cover
all 256 active-state byte combinations, response indices -1/0/31/32/63, unrelated
response bits, native nested selection, registered `disallowResponse` dispatch,
and stack/FPU preservation. No gameplay acceptance is claimed. The candidate is
built but not yet staged over the user's executable.

Further conversation additions (same goal):

- `allowResponseOnGameVarCount`: traced XML2 `B5B60` and its flag counter
  `B1540`. Looks up the native XML1 game variable, counts its set bits through
  native integer conversion, and suppresses the current response if the count
  is below the signed threshold. Missing variables are distinct from zero;
  satisfying the threshold never re-enables an already rejected response.
- `disallowResponseOnObjective`: traced XML2 `ACBA0`. Resolves the named objective
  through XML1 mission manager `86000`, slot `38`; uses the existing COMPLETE
  query `84980` (integration established by `9A173`). Suppresses on equality
  with the requested completion state. Missing objectives leave the response
  alone. Neither command changes existing objective or conversation systems.

`response-count-build.log`, `response-count-test.log`,
`objective-response-build.log` and `objective-response-test.log` under
`work/xml2-resume` passed with exit 0. Native checks cover negative/zero/positive
thresholds, high-bit and all-bit values, missing values, previous rejection,
all 16 objective state indices and 256 property-byte combinations with both
requested states, null objectives, unrelated-bit isolation and stack/FPU state.
Named mission lookup and complete live dialogue flows have not been exercised
by these private-object checks; gameplay testing remains with users.

`showHealthBar` was traced but not implemented: its general entity flag and the
authored health-bar property are distinct. Establish XML1's HUD consumer before
selecting the integration path.

### Combat-event reconciliation

The original-image name audit generates
[the combat-event inventory](XML2-EVENT-INVENTORY.md). Thirteen XML2 event names
are absent from XML1. Six have factory wiring in the current source:
`ce_filter_event`, `ce_lightning_data`, `ce_effect_sound`, `ce_random_event`, `ce_victim_set`, and `ce_set_combat_node`.
The remaining seven require implementation or proof of an existing equivalent
before being skipped: `ce_heal`, `ce_remove_powerups`,
`ce_setup_ally_resurrect`, `ce_atk_blast_objects`,
`ce_atk_spawn_sentry`, `ce_spawn_minion`, and `ce_atk_self`.
This inventory distinguishes runtime factories from strings in fixtures or assets.

`ce_set_combat_node` is implemented in `src/raven_set_combat_node.inc`,
using the same native event-factory/dispatch integration. XML2 evidence:
`F9140` execute, `FA110` parse, `109C40` constructor, `109C70` copy.
`combatnode` uses XML1 interned names (`27EF0`); animation enums use the native
`369D0` parser. Nonhumanoid selection reuses the existing appended CharacterDef
flag at +487, rather than adding another skeleton classifier. `fromsponsor`
changes the lookup bank only. `forcerestart` and `forcesamerestart` remain
separate controls. Existing native interfaces own lookup (`38210`/`ED6E0`),
forced restart (`3B100`), animation (`40350`) and normal transition (`40DF0`).
The event never replaces native combat-node ownership or interruption policy.

Build and `--powerup-definition-test` passed, exit 0. Fixture checks factory and
virtual dispatch, name/boolean parsing, native lookup/eligibility, sponsor
selection, nonhumanoid animation selection/fallback, independent clone,
wrong-subtype copy, address reuse, same-node/animation suppression, missing
nodes/callers and guest stack/FPU balance. Actual active transitions and symbolic
animation-bank parsing are not exercised by this fixture; gameplay acceptance
is not claimed. Native integration traces are in ignored
`work/xml2-resume/set-combat-node-native.asm` and `set-combat-node-xml1.asm`;
build/test logs are `set-node-build.log` and `set-node-test.log` there.
Candidate SHA256: `75eefc09e71a26994b30fe67df4ff89ea8cddd895eefc40224e31ac1f7273e7b`. Player staging remains unchanged.

`ce_victim_set` is implemented in `src/raven_victim_set.inc` through the
existing `raven_bishop_guest.c` factory/dispatch integration. XML2 trace:
`FA3C0` execute, `F9AB0` parse, `109FD0` construct, `10A000` copy. The event
uses XML1's native CEAction base, maximum-range operand resolver, query pool
`A2A70`/`A2AC0`, swept query `A1770`, closest-hit wrapper `A0780`, eligibility
`391A0`, AI policy `F9320`, and victim setter `3CDF0`. Pool exhaustion safely
leaves selection unchanged. Only generation-bearing handles survive query
release; the event adds no retained victim pointer or character-specific data.
The query's fourth argument supplies XML1's option; XML2's slot `80` must not
be copied because that XML1 slot has an unrelated ABI.

Build and `--powerup-definition-test` passed, exit 0. Programmatic checks cover
factory/virtual dispatch, inherited parsing, literal range, independent clone,
wrong-subtype copy, reconstruction, native eligibility, friendly-fire/multiplayer
rules, AI-owner exemption, invalid callers, query exhaustion and stack/FPU
balance. Live collision query and neutral-AI execution are not exercised by
this fixture; no gameplay acceptance is claimed. Logs:
`work/xml2-resume/victim-set-build.log` and `victim-set-test.log`.
Candidate SHA256: `16834F714D603435D16B9942B38D675A0941871C380FF8A622BFCF45F345279C`.
The player executable has not been replaced yet.

`ce_random_event` is implemented in `src/raven_random_event.inc`, included in
`raven_filter_guest.c` and reached through its existing native factory guard and
registered indirect-call dispatcher. Original trace: XML2 vtable `4A24A0`, parse
`F8C10`, dispatch `F8C90`, constructor `109B30`, copy `109B60`. The event keeps
five byte tags, accepts tag0 through tag4, selects only from the contiguous
nonzero prefix and dispatches through the owner's virtual14. It consumes one
native gameplay RNG sample only with both actors, an owner and a nonempty prefix.
XML1 owns the event pool, generation handles, base parse/copy, scheduling and
retirement. The extension does not access event/actor memory after owner dispatch.
No asset rewrite, character-specific condition or independent random stream.

Build and `--powerup-definition-test` passed (exit0):
`work/xml2-resume/random-event-build.log` and `random-event-test.log`.
The native factory/dispatch fixture checks parsing and byte conversion, inherited
time/tag parsing, all prefix lengths, four seeds, every missing-input gate,
exact RNG advancement, tag and actor delivery, independent clone payloads,
wrong-subtype copy, native retirement, stale handles and reset on slot reuse.
No gameplay acceptance is claimed; the built candidate is not yet staged.
Original disassembly remains at `work/xml2-resume/random-event-native.asm`.

Victim-selection integration evidence:

- XML2 `ce_victim_set` uses `FA3C0`, parser `F9AB0`, copy `10A000`,
  vtable `4A25C0`. Its `maxrange` operand is evaluated with the second actor's
  character context when supplied, otherwise the first actor's. It sweeps a
  12-unit half-extent volume from the actor's center along its facing vector.
  It takes the first query result and applies actor eligibility, friendly-fire,
  team and default-target filtering before setting the victim handle.
- XML1 query factory `A2A70` and destructor `A2AC0` own the temporary query.
  `A2AE0` must establish capacity before borrowing one of its three slots.
  Constructor `A1420` installs query vtable `3D29EC`. Sweep slot74 is `A1770`
  with FOUR arguments, unlike XML2's three. XML2 sets query option32 through
  `BA120` before sweep `BA090`; that option is passed directly as XML1's fourth
  argument. Copying XML2's slot80 call would invoke unrelated XML1 `A25D0`.
- XML1's victim assignment interface is `3CDF0`, updating actor+554 and native
  target contact data. Use that interface, not a bare write to actor+554.
- Native XML1 eligibility `391A0` is the existing integration entry used for
  XML2's `380F0` call. Its policy stays native; the event does not substitute
  a health-only predicate. Neutral protection uses native AI manager slot78,
  passing the target's AI handle at actor+5B4.

Local evidence: `work/xml2-resume/victim-set-native.asm`,
`victim-set-contract.asm`, `victim-set-xml1-interfaces.asm`,
`victim-set-query-options.asm`, and `victim-set-eligibility.asm`.

Health-cost operand prerequisite verified (2026-09-30):

- Added event-owned symbolic `healthpct` binding support, copied and retired
  with the existing event operand lifetime. Literal values remain caller-owned.
- The native definition fixture verifies learned-rank resolution, independent
  cloning, literal replacement, missing actor context and retirement.
- Release boot-probe build and `--powerup-definition-test` pass. Logs:
  `work/xml2-resume/health-operand-build.log` and `health-operand-test.log`.
- This verifies the operand only. The removal event factory, health-cost
  consumer and full removal execution remain unfinished; no gameplay claim.

Powerup-removal resource and hit construction verified (2026-09-30):

- `src/raven_remove_powerups.inc` adapts the existing XML1 D7050 resolver
  through a correctly laid-out temporary effect. Native package selection,
  global scope12 when owner/package is absent, empty names and phase1
  preservation pass a fixture substituting only resource virtual boundaries.
- Health-cost records use maximum health (XML1 actor+246), direct damage
  enum13, priority1 and the native 2C8C0 constructor. Upward integer rounding
  follows XML2 3D49B1/3DA1F9 and control word1B3F at image571BA0; positive
  fractional costs stay nonzero and amounts fit the XML1 signed-word field.
- Fixtures verify record contents, current-health independence, zero cost,
  range bound and guest stack/FPU preservation. Release build and native
  definition checks pass: `work/xml2-resume/removal-health-build.log` and
  `removal-health-test.log` (also includes the resource checks).
- Factory/execute dispatch and health-cost eligibility consumer remain
  unfinished. Resource playback, actual hit delivery and removal execution
  are not established by these checks. The event remains unregistered and
  pending in the inventory; player staging is unchanged.

Powerup-removal execution drafted and eligibility consumer traced (2026-09-30):

- Added an owner-inclusive actor radius query and execution path to
  `raven_remove_powerups.inc`. It releases query/list ownership before
  callbacks, re-resolves generation handles, filters through native teams,
  emits target-to-owner beams, removes class then tag, and constructs a
  native direct-health hit. The factory is deliberately not registered yet.
- Release build and existing definition fixtures pass (`removal-execution-
  build.log` and `removal-execution-test.log` under `work/xml2-resume`).
  These do NOT execute the new full query/removal path. It still needs
  targeted integration checks, parser/copy wiring and eligibility support.
- Recovered CCombatNode eligibility: XML2 virtual slot3 is105B40, XML1
  slot3 isE1A20. XML2 105C7C queries event health cost (virtual24), sums
  across eligible events and at105CE8 compares current health actor+27C.
  XML1 event virtual24 is the existing boolean AI energy exemption; preserve
  that ABI and add a separate missing-health-cost contribution at the node
  integration boundary. Evidence: `removal-health-eligibility.asm`.
- XML2 109E30 cost query uses maximum health and falls back to actor owner
  context only when the binding is absent on the actor; execution instead
  uses explicit sponsor/actor context. Owner integration still needs mapping.

Powerup-removal declarations verified; source-context mapping remains pending
(2026-09-30):

- Added parser support for beameffect, powerup_tag, powerup_class, healthpct
  and MaxRange, retaining the native CEAction parser for shared attributes.
  The native effect parser D7290 also uses27EF0, confirming the chosen
  interned resource-name integration. Added independent field/binding copy.
- Release build and definition fixtures pass, including literals, native
  base-event tag, empty resource and copied fields. Logs:
  `work/xml2-resume/removal-parser-build.log` and `removal-parser-test.log`.
  Factory registration and full query/removal execution checks remain pending.
- Context correction: XML2 actor+758 is set by2D1B0 together with a power ID
  (+760) and second name/handle (+75C), then read through2D1E0 by power lookup
  10BBBA. It is a cached power-source context, not proven general ownership.
  Do not assign an assumed XML1 owner offset. Mapping/integration remains
  necessary for the health-query fallback. Reproducible native evidence:
  `work/xml2-resume/removal-context-writers.asm`.

Powerup-removal event trace in progress (factory remains pending):

- XML2 `ce_remove_powerups`: execute `FA880`, parser `FA2B0`, resource setup
  `F9D50`, copy `109DA0`, cost query `109E30`. It queries actors in MaxRange,
  selects allies using native team/charm rules, optionally emits beameffect,
  removes by class and then by tag, and applies healthpct cost to the owner.
  A removal-only adapter would omit authored functionality.
- Class removal `15CD50` compares the definition's interned class getter at
  virtual80 (`5D230`, definition+4). Tag removal `15F020` compares virtual84
  (`10FA30`, definition+8). XML2's definition parser `154DC0` populates that
  tag from **tag_name** (literal `4A7A58`); the event selector is **powerup_tag**.
  These are distinct from a combat node's powerup_tag and from event tag bytes.
- Added tag_name retention to the existing definition metadata capture, which
  already preserves class. Original value bytes survive native cloning and are
  cleared on final retirement/reset. No asset rewrite or invented tag alias.
  `raven-powerup-metadata-test` verifies field-name casing, independent clone,
  explicit empty value, source retirement and address reuse. Optimized build,
  metadata test and `--powerup-definition-test` all pass (exit 0); logs are
  `work/xml2-resume/powerup-tag-build.log`, `powerup-tag-test.log` and
  `powerup-tag-native-test.log`.
- Existing XML1 `2AF30` owns actual removal: deactivation callbacks, effect and
  sound cleanup, list unlink, stat refresh and pool retirement. A future selector
  must call it and revalidate generation handles across callbacks, never just
  clear a live bit or reuse a borrowed instance pointer. Native `2B100` already
  removes by flat type; it is an integration interface, not a parity work item.
- Remaining integration work: class/tag selection through the XML1 live list,
  area-query lifetime, beam resource setup/use, healthpct operand/cost delivery,
  and the event's clone/resource lifecycle. Do not mark this event implemented
  until these consumers are wired and programmatically checked.

Evidence: ignored `work/xml2-resume/remove-powerups-native.asm`,
`remove-powerups-consumers.asm`, and `remove-powerups-xml1.asm`.
Player staging remains unchanged.

Powerup-removal core added (event factory still pending):

- `raven_xml1_actor_powerups` snapshots XML1's actual attached-effect list,
  preserving order and full generation IDs. Rejects cycles, stale/free slots,
  owner mismatch and unreadable memory without publishing a partial list.
- `raven_xml1_powerup_identity_visit` exposes an owned class/tag snapshot without
  retaining a metadata lock across native callbacks. Missing tag means native
  empty identity; missing class does not invent an XML2 class for stock flat
  XML1 powerup types. No balancing/type-equivalence mapping is introduced.
- `raven_xml1_powerup_remove_named` compares metadata through the native string
  interner and calls XML1 `2AF30` for each matching attached instance. It resolves
  actor and effect generations again before every removal, so cleanup callbacks
  cannot redirect subsequent work to a recycled slot or actor. It preserves
  caller register/stack state and does not hold a borrowed metadata pointer.
- Optimized build, `raven-powerup-view-test`, `raven-powerup-metadata-test`, and
  `--powerup-definition-test` pass (exit 0). New tests prove list validation and
  metadata visitor/retirement ownership. They do NOT exercise the new guest
  removal routine end to end or prove a rendered/gameplay removal event.
  Logs: `work/xml2-resume/removal-core-build.log`, `removal-view-test.log`,
  `removal-metadata-test.log`, `removal-core-native-test.log`.
- Still required: wire these helpers into the event alongside its area query,
  beam/resource lifecycle, healthpct operand and cost query/delivery; then check
  actual native retirement through the new selector. No placeholder factory is
  registered, and the combat-event inventory still marks it pending.

Everything below is historical evidence. Old counts and release-deferral notes
must not override this reconciliation or the current worktree.

## 2026-09-20: Combat-handler implementation and native-caller validation

Added Rogue torpedo, Wolverine lunge attack, Wolverine lunge, Toad leap,
Rogue energy drain attack, and Gambit decide2. The latest presence inventory
reports 13/15 registered; registration alone is not the acceptance evidence.

The programmatic suite validates native chain lookup and rejection flags,
contact structure gates, generation-safe reservation release, movement timing,
velocity caches, Toad state reset/reuse, and Rogue's animation/visibility paths.
Rogue's new power13 enum resolves the actual `power_13` model animation without
reusing an occupied XML1 animation ID. Both the callable native lookup and
CActor's inlined move-start lookup route this new enum; existing enums bypass.

During the native-caller audit, earlier hand-authored movement fixtures were
found to repeat an argument/cleanup error. XML1 E17C0 forwards one actor
argument; XML2 update methods accept actor plus input. Corrected the new
callbacks to XML1's one-argument ABI and now invoke their update tests through
E17C0 itself. Earlier direct update-test passes did not establish that ABI.

Latest build and definition suite pass (exit 0):
`work/xml2-integration/gambit-decide-build-v1.log` and
`work/xml2-integration/gambit-decide-programmatic-v1.log`.
Native-caller-only milestone: `native-handler-caller-programmatic-v1.log`.
No live gameplay, raycast world, visual or audio acceptance is claimed.
The sections below are earlier chronological evidence, superseded by this status.

Scope correction: the user explicitly limited this task to XML2 → XML1,
and only missing combat and scripting functions. Standalone XML2 bring-up,
its renderer fixes and two-game acceptance were an overextension and are no
longer being pursued. Boot19 was stopped. Historical evidence below is retained
as a work record, not as a current plan or additional acceptance requirements.

## 2026-09-20: Lunge movement callbacks implemented

Release order is mandatory: implement all unique XML2 character combat
handlers, build and run basic programmatic smoke checks, then release the
candidate before resuming Python scripting-function additions.

Implemented native guest callbacks for lunge end (XML2 100800), Wolverine
lunge movement (104990), and the shared lunge decision delay (104850).
Movement starts strictly after 0.4 seconds at 600 units of facing velocity;
end clears horizontal motion while preserving vertical velocity. Normal base
combat decisions remain suppressed before one second. XML1's existing
velocity setter760D0 and direction helper1209C0 handle the integration.

The private definition suite checks delayed movement, three facing directions,
600-unit horizontal speed, preserved vertical speed, native velocity caches,
end cleanup, early decision suppression and balanced guest/FPU stacks.
Build and suite pass (exit0): lunge-motion-build-v3.log and
lunge-motion-programmatic-v3.log under work/xml2-integration.
Earlier fixture attempts reached an uninitialized physics world; the fixture
now uses the native direct-velocity flag, as the established motion fixture
already does. Production callbacks continue using the ordinary native setter.

These are partial callbacks, not completed or newly registered handlers.
Collision, target ownership and interruption integration still need finishing
before the lunge/torpedo handlers are registered. The seven-complete/eight-
remaining handler count is unchanged. No player build or release is claimed.

## 2026-09-20: Beta priority - unique character combat handlers

User priority: finish unique XML2 character combat handlers, then create a
build and run basic programmatic smoke checks for the next beta. Remaining
script commands are deferred for this pass. Existing XML1 handlers are skipped
without behavior comparisons. The overall missing-function goal stays active.

The reproducible presence inventory is now
`scripts/inventory-xml2-character-handlers.py`; current evidence is
`work/xml2-integration/character-handler-release-inventory.json`.
It finds 15 XML2 names absent in native XML1, with seven additions registered
and eight still missing: ch_gambitdecide2, ch_magnetic_grasp,
ch_rogue_energy_drain_atk, ch_rogue_torpedo, ch_storm_chain_lightning,
ch_toad_leap, ch_wolv_lunge, and ch_wolv_lunge_attack.
Registration counts do not prove callback functionality or release readiness.

Rogue energy-drain handler trace: XML2 vtable4A3424 uses start100720,
interrupt1007E0 and decision1007A0. Start samples native integer RNG(0,2,true)
and selects ea_power10/12/13 before base move-start. Decision delays native
base decision until elapsed game time is strictly greater than 0.05 seconds.
Interrupt restores visibility unconditionally for a non-null actor.
Animation names were resolved from original enum initialization at35B70:
XML2 0x85=ea_power10,0x87=ea_power12,0x88=ea_power13. XML1's native
integration table at37B0D maps ea_power10 to0x91 and ea_power12 to0x93;
ea_power13 is absent. Do not copy XML2 numeric IDs or substitute an unrelated
animation. The missing animation entry is a prerequisite for completing this
handler; no partial handler is registered as working.

Release build/staging and smoke remain pending completion of the eight
handlers and their required integration dependencies. No new gameplay
verification or tester-ready build is claimed by this inventory.

## 2026-09-19: setAnimSpeed script command

Added absent `setAnimSpeed` (`n`, `af`), traced from XML2 B8120..B821E.
Presence was checked using the corrected `scripts/raven_command_index.py`
reader: XML1 has no command of this name. Native bulk selector 9FF10 supplies
selection; null/wrong-type entities are skipped, while encountering a CActor
ends selection, as the original command explicitly does at B81C5.

XML1 integration uses CGameEntity virtual +178 (74FB0) for animation
availability, +180 (74860) for its model slot, and model +10 for CModelIGB.
CModelIGB +14 (80200) returns its embedded CRigidAnimCtrl; controller +20
(135490) forwards the float through the native playback interface. No actor
animation behavior, existing command, or simulation clock is changed.

Release build and programmatic definition suite pass. The added fixture
executes native availability, model-component and controller methods with
process-local substitutes for model lookup and the terminal playback object.
It checks exact float forwarding (zero, fractional, positive and negative),
missing component, type rejection, null selection entries, empty selection,
actor termination before later entries, and balanced guest/FPU stacks.
Descriptor registration is checked. End-to-end script selector execution and
visible animation playback are not tested; gameplay remains user-tested.
Evidence: `work/xml2-integration/anim-speed-build-v1.log` and
`work/xml2-integration/anim-speed-programmatic-v1.log`. Player executable not
restaged. The overall missing-function goal remains active.

## 2026-09-19: getOpened script query

Added absent `getOpened` (`i`, `a`), traced from original XML2 B3DA0. It uses
native script argument conversion and entity resolution, requires CPhysicalEntity,
and returns false for a missing or unsupported entity. The native integer return
allocator is reused. No opening/closing behavior or existing callback is changed.

The field mapping was established from named CActionEntity serialization
interfaces (XML2 vtable slot3 ->29650; XML1 slot3 ->27160): XML2's query inverts
entity+4 bit22; XML1 serializes its corresponding closed state from bit21 at
2716E..27184. XML1 CPhysicalEntity getter2E590 points at4C0A5C, so its native
type ID is4C0A60. The adapter uses that native type and bit21.

Release build and `--powerup-definition-test` pass. The query fixture checks
null and wrong-type rejection, open/closed states, unrelated neighboring flags,
unchanged entity data, and stack/FPU balance. Descriptor lookup verifies the
registered name, result/argument formats and callback. Complete script selector
resolution, integer allocation and gameplay are not exercised by this fixture.
Evidence: `work/xml2-integration/get-opened-build-v1.log` and
`work/xml2-integration/get-opened-programmatic-v1.log`. The player executable
is not restaged; the overall missing-function goal remains active.

## 2026-09-19: Block handler and combat integration implemented

Added absent `ch_block` as the seventh additive character handler. The state
is stored outside the guest actor layout, keyed by actor address and full native
owner handle. Start sets it and delegates to the original move-start callback;
end/interruption and actor reset clear it. Recycled handles do not inherit it.
Decision reasserts block state, checks held assigned power and current-node
eligibility, and selects the special chain on release/ineligibility. The special
candidate is stored without adding a target eligibility check, as traced at
FB250. Other decisions delegate to the native base handler.

The remaining category mapping was established through the XML2 AttackType
parser 5D080/table53E848 and XML1's native table44CBC0. Names establish the
interfaces: direct0, punch1, kick2, throw3, blast4, projectile5, beam6, crush7,
psionic8. The new block predicate excludes direct/blast/crush/psionic and
preserves the original switch's default qualification for values above8.

`guard-bishop-drain.py` now also installs:
- At XML1 444FD, after native reaction eligibility gates, active new block
  state clears context+A4 bit3 and continues at4452B.
- At5C3C0, only an active new block with a qualifying automatic-hit record
  reaches native resolution at5C3ED, with the native RNG-bypass local set.
  The original native outcome logic remains authoritative. This does not
  force all blocked attacks to miss or cancel all damage.
- At49589, after native modifier lookup, absent `dmgmod_unblockable` is
  recognized on lookup miss and contributes bit20000000. Original XML2 table
  53DDA0 names that bit; the name is absent from XML1's original table. Its
  flag prevents the new block attack gate. Existing tokens are untouched.

Release build and `--powerup-definition-test` pass. Checks cover registered
start/end/interrupt/decision, native start time, held stance and release,
generation mismatch, reset, attack category/bypass/unblockable gates, native
modifier lookup plus the missing-token adapter, case-insensitive recognition,
unknown suffix rejection, stack/FPU balance, and registry idempotence.
Registry has75 entries (68 stock plus7 additions). Evidence:
`work/xml2-integration/block-handler-build-v3.log` and
`work/xml2-integration/block-handler-programmatic-v3.log`.

Fixture limits: the first run needed a native simulation-clock pointer, now
supplied/restored by the fixture. A subsequent full49510 tokenizer attempt
reached CRT thread startup3465A6 without game initialization and failed. Final
validation exercises native enum lookup123100 and the modifier adapter instead;
full tokenizer/resource-load dispatch and complete combat delivery are not
covered. Existing original-code branch checks document the hook behavior;
no visual/gameplay validation or player restaging was performed. The overall
missing-function goal remains active.

## 2026-09-19: Native block integration flag adapter verified

The original XML1 record constructor 5CC00 copies source+2C bit2 into
output+60 bit0, preserving the other output flag bits. The native resolution
boundary 5C3C0 reads that output bit to choose its direct-hit bypass. Added an
optional `--xml1` mode to the block trace oracle; all 1024 combinations of source
flags and representative prior output flags pass against original executable
bytes. This establishes the native field-copy interface needed by the absent
block handler, without modifying that constructor or existing hit resolution.
Evidence: `work/xml2-integration/block-state-original-v2.json` (also reruns the
768 XML2 reaction-bit and 1024 XML2 attack-gate cases).

Further original XML2 trace: 5DA60 initializes its local qualification byte
true. Its source record +0C is classified through the switch table at 5DD68:
values 0,4,7,8 clear qualification; 5,6 explicitly set it; 1,2,3 and values
above8 retain it. Record +14 bit20000000 also clears qualification at5DB99.
The separate local bypass byte is not the same qualification flag. Existing
XML1 native enums must be identified by their input/constructor interfaces
before routing new block state into this decision; copying XML2 numeric
categories without an established mapping remains unproven.

The block handler is still unregistered. This pass changes trace tooling and
evidence only, not runtime behavior or the staged executable.

## 2026-09-19: Block-state combat consumers traced

New evidence for the still-unimplemented `ch_block`: its actor+765 bit1 is
read at two combat boundaries in the original XML2 image. This is new-state
integration research, not a parity audit of existing XML1 behavior.

1. At 43F24..43F50, the active block bit clears hit-context +AC bit3.
   The caller has already passed health/type/attack and source-related gates;
   the flag is not a general immunity or unconditional damage cancellation.
   XML1's native hit-context interface has its reaction flags at +A4.
   Boundary 444FD is after the analogous source-related eligibility gates;
   44524 clears the native reaction permission bit. Integration must preserve
   upstream native gates and do nothing for actors without the new handler.
2. At 5DB9E..5DBC4, attack-record +35 bit2 marks the bypass case. With that
   bit set, local +28 becomes1; local +13 false or block bit clear selects
   result1 through 5DCCD. With qualification true and blocking active, execution
   continues at 5DBC4 into normal resolution. This must not be implemented as
   an unconditional miss or unconditional damage cancellation.
   Original caller 61D8F invokes 5DA60; the XML1 native resolution interface
   is the function containing 5C370's rating store and 5C3C0's bypass gate.
   The mapping of the attack flag and qualification state is not yet proven;
   no runtime hook was added based on a guessed byte offset.

Added `scripts/xml2-block-state-oracle.py`, pinned to the original XML2 XBE
hash. It executes those two original instruction ranges with Unicorn and
checks all 256 actor flag values, 768 reaction permission cases, and 1024
attack-gate cases. Checks pass; input block flags and stack remain unchanged.
Evidence: `work/xml2-integration/block-state-original-v1.json`.
This verifies isolated branch behavior only, excluding upstream eligibility,
full hit resolution, XML1 integration, and gameplay. The block handler remains
unregistered until both combat consumers can be connected correctly.

## 2026-09-19: setAlpha script addition

Added absent `setAlpha` (`n`, `af`), traced from XML2 B35D0. The command
converts its entity selector and float argument through native script value
objects, resolves the entity using the existing XML1 name/handle path, and
calls XML1's existing opacity setter 76B40 for CGameEntity instances. Native
clamping and notification behavior remain authoritative; this does not replace
or extend the existing opacity/fade system.

The required type was verified directly from RTTI: XML2 CGameEntity getter
80170 returns 5AA7A4 (type ID at +4 = 5AA7A8). XML1 CGameEntity getter 75A70
returns 499564 (type ID at +4 = 499568). This avoids mistaking the target for
CActor or CPhysicalEntity based on historical notes.

Release build and `--powerup-definition-test` pass. Descriptor lookup verifies
the name, argument/result formats, and callback mapping. The native setter
fixture checks null/wrong-type rejection, opacity 0, 0.375 and 1, low/high
clamping, and stack/FPU balance. Its render-object list is empty; render-object
notification and the complete script selector-to-render flow are not verified.
Evidence: `work/xml2-integration/set-alpha-build-v1.log` and
`work/xml2-integration/set-alpha-programmatic-v1.log`. No player restaging or
visual/gameplay test was performed.

Additional trace, still incomplete: absent `ch_block` has XML2 vtable 4A2C14.
FB220 sets actor+765 bit1 and delegates to base start 10B500; FB240 clears that
bit; interrupt 104910 delegates to the handler's end slot +8. Decision FB250
sets the bit, checks held assigned power/current-node virtual +0C, otherwise
selects special with a null requirement actor, and finally uses base fallback.
The combat consumer of actor+765 bit1 must be traced before integration; simply
registering callbacks without that state reaching combat would be incomplete.
No block handler has been installed.

## 2026-09-19: Wolverine frenzy handler

Added absent `ch_wolv_frenzy` (XML2 CCHWolvFrenzy, vtable 4A32F8).
Its registration name occurs once in the original XML2 image and is absent
from the original XML1 image. Decision callback 1048A0 calls 10B9F0, which
passes the pressed input word at +4 to the assigned-power predicate 10B830.
The modifier remains required in the held word at +0. This selects a special
follow-up on a new power press; holding the power does not repeat it.

The two newly added handlers share their assigned-power name matching and
special follow-up adapter. Moving bolt-ons uses held input; frenzy uses pressed
input. No existing XML1 handler or the earlier held-chain system was changed.
Frenzy inherits the native base callbacks except decision slot +18; rejection
continues into native E7460. Registry allocation now holds six additive entries
and separate moving-handler callback tokens beyond those tables.

Release build and `--powerup-definition-test` pass. Frenzy's registered callback
checks all four pressed slots, suffixed current-node names, pending follow-up,
held-only rejection, native idle fallback and stack/FPU balance. The predicate
also checks missing input and modifier release. Registry reports 74 entries
(68 stock plus six additions), with repeat registration unchanged. Existing
moving-handler checks also pass after sharing the adapter.

An initial extra frenzy rejection fixture reached base-handler node virtual
+C0, which the recording node did not implement, and stopped with a null
indirect call. The final fixture does not exercise that extended pressed-input
fallback branch. Rejected/missing follow-up handling in the shared adapter is
covered by the moving-handler fixture, not full frenzy fallback selection.
No production change was made to suppress that native selection path.
Evidence: `work/xml2-integration/wolv-frenzy-build-v2.log` and
`work/xml2-integration/wolv-frenzy-programmatic-v2.log`.

Player executable remains unstaged for these additions. No gameplay testing
was performed. The overall missing-function goal remains active.

## 2026-09-19: Moving bolt-ons handler

Added absent `ch_ngtmovingboltons` (XML2 CCHNightcrawlerMovingBoltOns,
vtable 4A3568). The name occurs in the original XML2 image and not the
original XML1 image. No existing character handler was replaced or compared
for parity. This is the fifth registered missing handler.

- Interrupt slot +0C reuses the new bolt-on cleanup callback (tags 100�102).
- Update slot +10 implements FF840: XML1 1209C0 produces the facing vector;
  horizontal components are multiplied by 120 and vertical velocity is
  preserved. XML1 760D0 applies the vector through the native physical API.
  The callback receives the actor in its second argument and returns ret8.
- Decision slot +18 implements FF8A0. The held-power predicate uses existing
  imported herostat power bindings and XML1's button map. XML2 10B830 calls
  strstr at 3D41E0, so named follow-ups such as power1_loop match their assigned
  power. This handler does not require samepowerhold metadata and does not
  change the existing held-chain implementation.
- Follow-up lookup uses action24 (special), XML1 ED6E0 with a null requirement
  actor, stores the pending node, and checks its native virtual +0C condition.
  Rejection or no held power delegates to XML1 E7460 unchanged.

Release build and `--powerup-definition-test` pass. Registered callbacks check
three facing/pitch cases, both native velocity copies, preserved vertical
velocity, all four assigned powers with suffixed node names, held versus
pressed input, modifier release, accepted/rejected/missing follow-ups, native
fallback, cleanup tags, and guest/FPU stack balance. Style lookup and node
condition callbacks are recording doubles; facing math, velocity assignment,
chain lookup traversal, and base fallback use native generated routines.
The registration fixture now runs after its imported binding catalog is
initialized. Registry has 73 entries (68 stock plus five additions), with
repeat registration leaving it unchanged. Evidence:
`work/xml2-integration/moving-boltons-build-v2.log` and
`work/xml2-integration/moving-boltons-programmatic-v2.log`.

Player executable has not been restaged for this addition. Gameplay remains
unverified and is assigned to users. The overall missing-function goal is
still active; other absent handlers, events, powerups and script additions
remain to be assessed and implemented where applicable.

## 2026-09-19: Nightcrawler bolt-on interruption handler

Added absent `ch_nightcrawlerboltons` (XML2 CCHNightcrawlerBoltOns, vtable
4A32D4). Its FF800 interruption callback dispatches tags 100, 101 and 102 in
order, passing the actor as both source and target. The adapter uses existing
XML1 node virtual +14 dispatch and reads actor +2F4 again before each event,
so a node transition from one event affects the next dispatch. No bolt-on
system or existing event implementation is replaced.

Release build and `--powerup-definition-test` pass. A registered callback
fixture records all three tag/actor pairs and changes the current node after
the first event, verifying the second and third calls follow that change.
The event consumer is a recording double; this checks dispatch, not rendered
bolt-ons. Guest/FP stack balance and native registry idempotence pass. Registry
now has 72 entries (68 stock plus four missing handlers). Evidence:
`work/xml2-integration/nightcrawler-boltons-programmatic-v1.log`.

Also moved the fixture's stand-in handler object outside the growing table/name
region so it cannot overwrite another fixture handler's name. No production
asset or existing handler behavior changed. Eleven absent handler names remain,
including the separate moving-bolt-ons handler; the broader combat/script goal
remains active. Player staging is unchanged.

## 2026-09-19: pickup-throw interruption handler

The stock-name presence check confirms `ch_pickup_throw` is absent from XML1.
XML2 CCHPickupThrow (vtable 4A3124) inherits the base callbacks except interrupt
slot +0C. Its FFCD0 callback delegates to actor release 406D0. The needed XML1
integration API is 40B90, which owns release/throw processing and clears the
actor target through 3CDF0. Added only the missing callback/registration; the
existing release API is unchanged.

The private build now registers three additional handlers. Release build and
`--powerup-definition-test` pass, with 71 registry entries (68 stock plus three
new handlers), repeat registration unchanged, and the new registered interrupt
callback exercising native release with no held object. Target cleanup and
guest/FP stack balance pass. Evidence:
`work/xml2-integration/pickup-throw-programmatic-v1.log`.
Physical held-object trajectory and gameplay are not exercised by this basic
fixture. Player staging remains unchanged.

Current missing-name handler inventory has twelve unimplemented registrations:
`ch_rogue_energy_drain_atk`, `ch_rogue_torpedo`, `ch_toad_leap`,
`ch_storm_chain_lightning`, `ch_magnetic_grasp`, `ch_wolv_lunge_attack`,
`ch_wolv_lunge`, `ch_wolv_frenzy`, `ch_block`, `ch_ngtmovingboltons`,
`ch_nightcrawlerboltons`, and `ch_gambitdecide2`. This name list is not the
whole goal: absent combat events, powerup systems and script commands remain
tracked by the broader inventory. Existing registrations were not compared.

## 2026-09-19: restore-visible-on-interrupt handler

Presence check found no XML1 `ch_restore_visible_on_interrupt` registration.
Added the missing XML2 interrupt callback (104830, CCHRestoreVisibleOnInterrupt
vtable 4A2FE0 slot +0C) as a second additive native handler. Other methods are
inherited from XML1's base table. Registration preserves existing keys and now
allocates two independent 80-byte table/token/name regions.

The new callback calls XML1 2E280 to query native invisible effect 10 (name table
44E8C8, `invisible` entry 44E8F0). If absent, it calls 2E220(false), which restores
opacity through 76B40 and clears only the actor's hidden bit. An active effect
prevents restoration. Existing visibility and powerup systems are reused without
changes or parity work.

Release build and `--powerup-definition-test` pass. The registered interrupt
thunk is exercised with no invisibility effect and with one live native effect
in the original powerup pool. Checks cover opacity, hidden-bit isolation,
preservation while the effect is active, and guest/FP stack balance. Native
registry construction now yields 70 entries (68 stock plus Bishop and restore
visible); repeated registration leaves it unchanged. Evidence:
`work/xml2-integration/restore-visible-programmatic-v2.log`.

Basic programmatic implementation/validation is complete for this handler.
Gameplay is untested and player staging is unchanged. The wider missing-function
goal remains active.

## 2026-09-19: registered Bishop follow-up dispatch validated

The new handler's registered thunk now has a passing programmatic success
path through native 381F0 / ED700 / ED500. The fixture uses the real current
node's chain getter E25B0 with `special` action 24, native entity generation
and type validation, and normal indirect-call dispatch. It verifies a nonzero
follow-up is assigned at actor +324, a true result, one style lookup and one
eligibility query, plus balanced guest and floating-point stacks.

The style-container lookup and eligibility response are explicit test doubles;
this does not claim validation of a real loaded combat style or gameplay. Their
thunk tokens are accepted only while the fixture is active and are cleared
before returning. The real game handler continues to use native style lookup
and eligibility. The fixture initially used the registry string pool (14500)
for the chain atom, which native ED500 could not resolve. Changing fixture
construction to the actual chain parser's string pool (27EF0) fixed the test;
no production chain behavior was changed.

Release build and `--powerup-definition-test` pass, including registered
success dispatch, additive/idempotent registry construction, contact history,
and rejection/missing-node cases from prior fixtures. Evidence:
`work/xml2-integration/bishop-dispatch-programmatic-v3.log`.
`ch_bishop_drain` implementation and basic programmatic validation are complete.
Other absent XML2 combat/character/script functions remain in the active goal.
Player staging and gameplay are not validated by this fixture.

## 2026-09-19: additive Bishop registration and generic contact hook

`ch_bishop_drain` is now inserted after native handler initialization at E8B52.
Its table copies the eight XML1 base methods and substitutes only decision
slot +18. The thunk consults owned contact history, uses native chain lookup,
and otherwise tail-calls E7460 with the original arguments. Only the exact
allocated thunk token is accepted by indirect dispatch. Native registration
checks all 96 occupancy bits and preserves an already-present matching key;
no existing handler entry is overwritten.

Added the remaining physical contact observation at 92429, after the native
clock query and before the accepted physical-response branch. Its damage
record's source handle at stack +20 receives the contacted entity handle.
This and the power-trigger path use the same native actor-resolving observer.

Release build and `--powerup-definition-test` pass. The actual native registry
constructor and stock initializer produce 69 occupied entries: 68 stock plus
one Bishop handler. Repeated insertion leaves the entire registry byte-for-byte
unchanged; inherited methods and the one registered thunk are checked. Evidence:
`work/xml2-integration/bishop-registration-programmatic-v2.log`.

The first registration fixture failed because the game allocator is not
initialized in this isolated process. The passing fixture supplies scratch
storage for the handler table while executing the real registration path;
it does not validate allocator startup. The production path uses the same
native allocator convention as existing extension descriptors. Successful
nonzero chain selection through the registered thunk remains to be checked.
The full generic physical-contact flow is not exercised by the fixture.
Player staging remains unchanged; gameplay validation is left to users.

## 2026-09-19: power-trigger contact observation

Added `xml1_bishop_trigger_contact`: native actor resolution rejects stale or
non-actor recipient handles, then records the trigger handle and simulation
time for that recipient. `guard-bishop-drain.py` inserts the observation at
944FB in CPowerTriggerEntity contact dispatch, after the native ownership and
health gates and before category dispatch. No native category behavior changes.

Release build completed successfully, followed by `--powerup-definition-test`.
The added adapter fixture covers live actor recipient recording, stale-handle
rejection and non-actor rejection through native handle/type interfaces.
Evidence: `work/xml2-integration/bishop-trigger-programmatic-v1.log`. The whole
94460 contact flow is not executed by that fixture; only the adapter path is.

The remaining generic physical contact path is being traced: XML1 physical
vtable 3C9204 +A8 points to 92220. This is an integration lead, not completed
coverage. Native handler registry insertion/dispatch and successful chain
selection also remain pending. Player staging is unchanged.

## 2026-09-19: contact ownership and native observation hooks

Added per-actor history keyed by full owner handle and actor address, with
512 slots matching XML1's entity handle pool. Reused generations cannot read
previous history. Actor reset 2E6F0 clears by address because the handle may
already have changed. History is transient; it is not added to saves.

`guard-bishop-drain.py` now installs three additive observations: actor reset
at 2E6F0, type-checked target assignment at 3CE37 (using the original clock
already on ST0), and hit context entry 43F20 before its ordinary reaction
filtering. The guard validates all locations before writing and is called by
`generate-code.ps1`. Native targeting/reaction control flow is preserved.

Release build and `--powerup-definition-test` pass. The fixture checks owner
handle replacement, fresh history after generation change, explicit reset,
and executes the actual generated 43F20 callback with a reaction-filtered
source. The contact is recorded with the recipient handle and native 25.5
simulation time despite the ordinary early return. Evidence:
`work/xml2-integration/bishop-contact-programmatic-v2.log`.

The target-assignment and reset hook locations compile but their full native
flows were not executed by this fixture. Trigger-entity contacts, registered
handler dispatch, and successful nonzero chain lookup remain pending. The
handler is not yet registered; no gameplay or player staging claim is made.

## 2026-09-19: native Bishop decision adapter (registration pending)

Added `src/raven_bishop_guest.c` and linked it into the private boot-probe build.
It validates contact generation/allocation with native 6BFA0, resolves with
6BF80, classifies actor or discharge trigger through native type getters, reads
move-start at actor +3F0, and selects the `special` chain via 381F0. Pending node
+324 is cleared when a qualifying contact has no follow-up. Rejected contacts
leave it unchanged. Guest registers, stack and FP depth are preserved; ordinary
handler fallback remains the caller's responsibility.

Release build and `--powerup-definition-test` pass. New native-adapter checks
cover a live actor contact with no current chain, a stale generation, equal-time
contact rejection, category-5 trigger acceptance and other-category rejection.
The existing private entity-manager fixture supplies native allocation/type
interfaces. Evidence: `work/xml2-integration/bishop-guest-programmatic-v1.log`.
Successful nonzero chain lookup and registered handler dispatch are not yet
covered. Contact producers, lifetime ownership and registry insertion remain
unwired, so this is not a claim that the handler works in-game. Player staging
remains unchanged.

## 2026-09-19: contact recording and handler timestamp interface

Added `raven_bishop_record_contact` for the new handler's per-actor history,
following the missing XML2 recorder 2C3E0. It replaces target handle/time only
for a strictly newer contact, preserves the first contact on equal timestamps,
and allows a newer zero handle to invalidate the earlier target. State ownership
and lifetime reset remain the guest adapter's responsibility; no raw entity
pointer is retained. The Release component fixture passes newer/equal/older/NaN
and zero-handle cases plus existing decision checks. Evidence:
`work/xml2-integration/bishop-decision-programmatic-v3.log`.

The move-start interface is now resolved: the base handler callback XML1 E6D80
calls simulation-time getter 66AB0 and stores it at actor +3F0 (E6D85); this is
the timestamp to use with the new drain decision. The new handler inherits that
base callback. No additional move-start clock or replacement callback is needed.

Contact producer integration site: XML1 43F20 receives a hit context in ECX;
context +0 is the recipient actor and +8 is the source actor. It is called from
4636E. A contact observation belongs before its team/reaction filtering, when
the source exists. The missing XML2 record call at 43700 similarly precedes
reaction processing. XML1 3CDF0 is also a target-assignment contact source;
trigger contacts still require their own observation sites. Do not mark the
handler connected until contact production, lifetime reset, and registration
are actually wired and programmatically checked. No guest hooks were added
in this step, and player staging is unchanged.

## 2026-09-19: Bishop drain decision component (guest wiring open)

Added `src/raven_bishop_drain.c` / `.h`: the absent handler's contact decision
from XML2 FB180..FB213. It requires a strictly newer, valid nonzero contact
handle resolving to an actor or discharge trigger, selects the follow-up, and
updates pending-node even when lookup returns zero. A false return requires
ordinary XML1 fallback. It performs no damage or energy transfer and caches no
actor/handle. Contact inputs are explicit; current-target is not substituted.

Release `raven-bishop-drain-test` passes 20 decision/lookup cases and null-input
guards. Cases cover actor/discharge gates, invalid and zero handles, equal/older
and NaN times, no selection on rejected contact, and clearing a stale pending
node on failed lookup. Evidence: `work/xml2-integration/bishop-decision-programmatic-v1.log`.
This library is not yet connected to the executable; this is component evidence,
not a completed character handler or gameplay verification. Player staging is
unchanged.

Action-selection interface located: XML1 381F0 calls ED700 with current node
(actor +2F4), action index, and actor, through combat style getter 2E290.
Pending-node is actor +324 (E7493). ED700 invokes node virtual +F4 for the chain
key, then native ED500 for lookup. The drain action identifier is resolved by name: XML2's static initializer
3EA41C/3EA426 maps `special` (499614) to 18 hex in table 5435E8.
XML1 chain parser ECF28 uses table 450F88; entry 451040 maps `special`
(3D0124) to 24 decimal. The component now passes this explicit XML1 action
to its selection callback. Release build and the updated programmatic fixture
pass, including assertion of action 24 at callback dispatch; evidence is
`work/xml2-integration/bishop-decision-programmatic-v2.log`.
Contact-history and move-start wiring, guest registration and basic dispatch
validation remain open. XML1 target assignment entry 3CDF0 has been identified
as an integration site: it validates the selected actor, updates that recipient's
reaction metadata (+410/+41C/+420), and stores the initiator's target at +554.
It does not establish a separately timestamped successful contact for the new
handler. Current target alone remains unsuitable. Further contact producers
must be located before adding any observation hook; no existing targeting
behavior is being changed.

## 2026-09-19: Bishop drain handler integration trace (open)

Presence check: stock XML1 registers its `ch_*` handler names at E7C20..E8B56;
`ch_bishop_drain` is absent. The XML2-specific handler is FB180, registered with
vtable 4A3364. Its unique callback is slot +18; ordinary callbacks can use the
XML1 base-handler interfaces. XML1 base handler vtable 3D77E4 has eight methods:
E7800, E6D80, 15FDF0, 15FDF0, 15FDF0, E7040, E7460, E7390. Native fallback
for the decision callback is E7460. No existing handler needs replacement.

Registration integration evidence: XML1 E7AF0 takes an interned key and returns
a four-byte handler-object slot. The map has 96 slots (E7BD6), distinct from the
script command map. The complete initializer E7C20..E8B56 contains 68 calls to E7AF0;
there is nominal room within the 96-slot map for an additive registration.
This is static initializer evidence, not a runtime occupancy measurement. Check
occupancy before inserting and never overwrite an existing handler. A fresh
instruction-boundary disassembly is retained locally in
`work/xml2-integration/handler-registry-disasm.txt`. E7C10 is not the initializer
entry; E7C20 is. Earlier abbreviated scans were incomplete.

The missing callback's source inputs are now traced: XML2 2C3E0 records a
contact handle at actor +61C and its timestamp at +620 only when the new time
is strictly newer. Calls originate at 3C84B, 4372A, A7077 and A9609. FB180
requires that timestamp to be newer than +5E8, validates the stored handle,
and accepts either an actor or a CPowerTriggerEntity of category 5. It then
selects action 18 through 36DA0, stores the result in pending node +3BC and
returns true only if a node was found; otherwise it uses the ordinary handler.

Important integration identity: XML2 FB140's type global 5D470C belongs to
`CPowerTriggerEntity` (getter A9290, vtable 49965C), **not** the generic physical
entity. XML1 already has CPowerTriggerEntity (getter 942C0, vtable 3CFF04,
class-ID global 4C0AE4). XML1 4C0A60 is CPhysicalEntity and must not be used
as that target gate. This is type/interface identification for a new handler;
no existing feature parity changes are planned.

The trigger category interface is resolved: XML1 setter 941E0 receives a
category string and writes entity +2C4. At 9426C it compares against `discharge`
(string 3CFED4), then writes category 5 at 9427E. The missing XML2 handler's
category-5 dependency also denotes `discharge` (A91FC, string 49962C). Thus a
new handler can use XML1's existing CPowerTriggerEntity type gate and +2C4
category field without changing that system. Constructor 94360 initializes
+2C4 to zero; parser 942E0 invokes 941E0. This resolves a required integration
interface only; no existing trigger functionality is an implementation target.

The XML1 contact timestamp, contact handle, move-start time,
and action-selection interfaces remain to be resolved. Current-target field
+554 is not evidence of the last successful contact. Do not substitute it or
copy XML2 offsets. Handler registration and executable dispatch have not been
implemented; the fourteen script additions remain the implemented count.

## 2026-09-19: absent no-collide/no-tickle command

Added `setNoCollideNoTickle` (`n` / `as`, XML2 B3170), absent from the stock
XML1 command registry and previous extension table. It resolves one entity,
requires XML1's physical type, and interprets case-insensitive `TRUE` as enabled.
It calls native flag setter 26DD0 with flag index 1. That API owns normal entity
manager notification; the new command makes no additional contact/tickle
refresh call. Existing collision commands and behavior remain unchanged.

Release build and `--powerup-definition-test` pass. The basic fixture covers
fourteen descriptors/dispatch targets, invalid/null entity rejection, the real
native setter's set/clear behavior, preservation of other flags, and balanced
guest/FP stacks. Evidence:
`work/xml2-integration/script-collision-programmatic-v1.log`. Contact simulation
and gameplay were not run. Player staging remains unchanged.

## 2026-09-19: absent path-ignore command

Added `setPathIgnore` (`n` / `as`, XML2 B8440). Uses XML1's existing bulk
selector 9FF10 and physical-entity type gate. The native XML1 property parser
79074..79092 establishes `pathignore` at entity +234 bit 2. The adapter changes
only that bit, then requests one native path-grid update for a nonempty target
selection. Existing selection and navigation behavior are not changed.

XML1 CPathGrid is vtable 3CFB54 (RTTI type descriptor 44E664); getter 8F170
returns its singleton, and virtual +4 is native update 8F6F0. The adapter passes
force=false so XML1 retains its cache timing. This is interface evidence for
wiring the missing script entry point, not an existing-feature parity audit.

Release build and `--powerup-definition-test` pass. The private fixture checks
thirteen descriptors, null/wrong-type rejection, bit set/clear and preservation
of other flags. It also calls the real path-grid update with a future rebuild
deadline: current native simulation time is recorded while the deadline stays
unchanged, and guest/FP stacks balance. Evidence:
`work/xml2-integration/script-path-programmatic-v1.log`. World grid rebuilding,
party enumeration and gameplay are not covered by this basic fixture. Player
staging remains unchanged.

## 2026-09-19: absent no-gravity command

Added `setNoGravity` (`n` / `as`, XML2 B8650). The command is absent from
XML1's script registry; its underlying target selector and entity flags already
exist in XML1 and are reused, not reimplemented or compared for parity.

Uses native XML1 bulk selector 9FF10 (results at 4C25F8), rather than the
single-entity resolver. For each selected physical entity, a case-insensitive
`TRUE` enables the flag and other values disable it. Type global 499568 gates
physical entities. XML1 property parse 935BA establishes `nogravity` flag
index 2; native setter 26DD0 changes the bit and calls 66A90 to notify the
entity manager. Other flags remain untouched. No physics integration behavior
or existing selector semantics were changed.

Release build and `--powerup-definition-test` pass. The private fixture covers
all twelve descriptors, null/wrong-type rejection, native flag set/clear,
unrelated-bit preservation and balanced stacks. Evidence:
`work/xml2-integration/script-gravity-programmatic-v1.log`. The fixture does not
run named/party target enumeration or live physics; those are not gameplay
acceptance claims. Player staging remains unchanged.

## 2026-09-19: absent game-variable flag helpers

Added three commands absent from the stock XML1 registry and prior extension
table: `getGameFlag` (`i` / `si`), `setGameFlag` (`n` / `sii`) and
`getGameVarBitCount` (`i` / `s`). XML2 implementations B5BC0/B5C20/B7A70
route to AF1C0/AF150/B1540: one-based flag queries over an integer variable,
bit set/clear, and count of set bits across positions 1 through 32.

The adapters use XML1's existing native interpreter-variable lookup CACD0,
integer conversion virtual +10, and assignment CB850. They introduce no new
storage or save format. Missing variables read as zero. Queries outside 1..32
return zero. Assignment preserves the original x86 masked shift count with
unsigned C arithmetic, avoiding undefined shifts; any nonzero enable value
sets the bit. Existing variable behavior, namespace limits and persistence
remain owned by XML1.

Release build and `--powerup-definition-test` pass. The basic fixture covers
eleven descriptors/dispatch targets, one-based end bits, invalid queries,
set/clear preservation, nonzero enable, and counts 0/2/32. Evidence:
`work/xml2-integration/script-flags-programmatic-v1.log`. The fixture exercises
the new flag arithmetic; native variable-store calls are wired from XML1's
existing API and are not exercised by this fixture. Save/load and gameplay
have not been tested. Player staging remains unchanged.

## 2026-09-19: absent combat-node trigger command

Added `playCombatNodeTrigger` from XML2 descriptor 49A568 / body B4E50
(formats `n` / `asi`); the stock XML1 command registry has no such command.
The adapter resolves the actor through XML1, rejects other entity types,
interns the requested node name, and uses XML1's combat-style lookup (2E290,
ED500) with its optional third context argument null. If a node is found,
its virtual +14 tagged-event dispatcher receives the supplied tag and the
same actor as both source and target, per XML2 B4F0F. Missing nodes are no-ops.
Existing node lookup, eligibility, tagged-event semantics and handlers are
not rewritten.

The existing private event fixture was extended to check argument forwarding,
and to route the new dispatch helper through a real XML1 node and native
`ce_invulnerable` event. It also covers absent tags and null nodes. The fixture
does not invoke the full script parser/name lookup path. No gameplay acceptance is claimed.

Release build and `--filter-event-test` pass. Evidence:
`work/xml2-integration/script-trigger-programmatic-v1.log`. All eight registered
descriptors are covered by the passing `--powerup-definition-test` fixture in
`work/xml2-integration/script-trigger-descriptors-v1.log`. Player staging has not
been replaced.

## 2026-09-19: absent AI-control query

Added `getAIControlled` (`i` / `a`, XML2 descriptor 49A2F8, body B3C90).
It is absent from the stock XML1 command registry and from the project's prior
extension table. The new query resolves the entity through XML1, requires its
native actor type, and returns the actor's existing AI-control bit through the
native integer-result allocator. XML1 control behavior is unchanged.

Integration evidence: XML1 9CCA1 identifies actors with class global 485878;
9CCCF reads +334 bit 0 before player-control overrides; native 2EC5E sets that
bit on AI control assignment. The adapter reads only that bit. Invalid or
non-actor entities return zero. No AI timers, activation flags, behavior trees
or faction state are modified.

Basic validation: Release build and `--powerup-definition-test` pass. The
private fixture checks all seven descriptors and dispatch targets, actor-type
rejection, true/false values with other bits set, no flag mutation, and balanced
stacks. Evidence: `work/xml2-integration/script-ai-programmatic-v1.log`.
Gameplay not run; player executable not restaged.

## 2026-09-19: absent parent query

Added `getParentID` (XML2 descriptor 49A278, body B3970, formats `i` / `a`).
Presence check confirms no native XML1 command with that name. The adapter uses
XML1's normal entity resolution, rejects non-parent-capable entities, and
returns the stored parent handle through the native integer result allocator.
No parent assignment or hierarchy behavior is changed.

Integration field evidence: XML1 native parent-link routine 27C58 writes the
parent's +1C handle to child +BC. Child +C0 is its hierarchy attachment and +C4
is an interned name; neither is the query result. XML2's missing query reads
its parent handle at +B8; 2A2C1 establishes that field from parent +1C. Null or
wrong-type entities return zero. The stored handle is returned unchanged,
including its generation bits, without dereferencing or changing the parent.

Release build and `--powerup-definition-test` pass; private fixture covers six
command descriptors/dispatch targets, null/wrong-type/no-parent cases, full-width
handle preservation, adjacent field preservation and balanced stacks. Log:
`work/xml2-integration/script-parent-programmatic-v1.log`. Gameplay was not run.
Player staging remains unchanged.

The inventory now excludes already-registered extension names from its pending
command list as well as excluding stock XML1 commands. It no longer computes
changed signatures for existing commands. Pending names are discovery candidates;
unrelated platform/network services are outside this goal.

## 2026-09-19: script expansion and authoritative scope inventory

Added `setRotZ` using XML2 B1AC0..B1B57 / descriptor 49A008 (`n`, `ai`).
Despite the descriptor, the original body converts the second value through
its float virtual accessor. The adapter does the same, preserves X/Y, and
calls XML1's entity virtual rotation setter (+2C), including its normal cache
updates. Native entity lookup retains name/handle handling. Missing or wrong
entity types are ignored, as in XML2. Type mapping comes from both games'
`setAngles`: XML2 B3263 uses 598B24 with +24; XML1 9C0E3 uses 48D8FC with +21.

The extension registry now derives token space, descriptors, string storage,
lookup bounds and allocation size from one command table. It still only serves
native lookup misses and does not insert into XML1's 215-slot map. This keeps
further command additions from overflowing that map or overlapping descriptor
and string storage.

Basic validation: Release `xml1-boot-probe` build and
`--powerup-definition-test` pass. The private-memory fixture checks all five
command descriptors/formats and dispatch targets, invalid tokens/names,
native float conversion, null/wrong-type rejection, unchanged X/Y, native
rotation-cache updates, and balanced guest/FP stacks. It uses XML1's generated
2E540 setter. Evidence: `work/xml2-integration/script-rotation-programmatic-v1.log`.
This does not claim end-to-end gameplay/script execution acceptance. The player
executable has not been restaged in this change.

Broader inventory was regenerated from the original XML2 XBE, not the older
archived descriptors: `work/xml2-integration/audit-full-scope-v1/inventory.json`.
It contains 213 XML1 and 307 XML2 command records, 125 added command records,
122 candidate added types, 393 unfiltered added types, and 111 PC powerstyles.
These counts are discovery evidence, not a completion percentage. Character
handlers (`CCH`) are included; unrelated networking additions are outside the
combat/scripting import objective. Other combat/event/powerup handlers and
script commands remain open across the engine.

Follow-up trace: `fadeIn`/`fadeOut` (XML2 B3660/B36F0, native 7F010/7F060)
are not safe aliases to XML1 `fade` (9C400 / 74A40): the timed state and
parameters differ. They remain pending rather than being published as aliases.
The `drain_battery` selector trace is also bounded evidence: XML2 62290 returns
record byte +2E when type +10 has 20000 or modifiers +14 have 4/200; it does not
transfer energy itself. The original selector oracle passed 72 cases in
`work/xml2-integration/drain-selector-oracle-v1/result.json`. Bishop's FB180
handler selects follow-up combat node 18 after its source/target gate; neither
observation alone justifies inventing energy gain. Generic affecter and handler
integration remains necessary.

## Current acceptance status

The missing-function integration remains incomplete. Bishop/Sunfire fixtures
exist; their added combat behavior in XML1 is not accepted. Numeric and metadata
components include diagnostic/unwired paths, not complete handler support.
The separate converter remains unfinished. XML1's staged Angel build is
unchanged. Performance item2 still requires the user's multi-machine acceptance.

The archived handoff is at `Z:\Programming\!archived\XML2 XboxRecomp\`.
Its source bundle is extracted locally under
`work/xml2-integration/recovery/xml2-pc`. Generated game code, source game assets,
and decoded data remain local. The handoff contains no XML2 XBE or game assets.
Its recorded prototype reaches tutorial dialogue, but has distorted character
meshes and stops on an unsupported shader-handle draw after dialogue. That is
not evidence of working combat or of completed handlers in the shared runtime.

The user authorized PC XML2 character imports from `C:\Games\X-Men Legends II`
as direct handler test cases. Use isolated fixtures, preserving paths and package
associations, before staging accepted changes in the player directory.

## Current evidence

`scripts/audit-xml2-integration.py` scans the actual current XML1 XBE with the
handoff's descriptor/RTTI reader, compares recovered XML2 interfaces, and reads
the installed PC powerstyles after validation by the production XMLB decoder.
It preserves duplicate Raven attributes rather than imposing standard XML rules.
The complete local output is `work/xml2-integration/audit/inventory.json`.

The staged XML1 XBE SHA-256 is
`2ea531f11e0b5b7ca651485012b871ef99a5099c566a6d7cb8ec327ee73d62ac`.
It matches the handoff's comparison baseline. The original command counts and
name/body associations were incorrect; see the descriptor correction below.
The RTTI inventory has 107 candidate additional related types, including helpers.
These counts do not measure completion.
The inventory covers all 111 installed PC `.xmlb` powerstyles. Local PC data
contains modding additions, so this is evidence for these inputs, not every
retail character distribution.

| Candidate | Useful coverage | Missing literal evidence in current XML1 |
|---|---|---|
| Sunfire | Flying moveset, fire attacks, sustained damage | `harming`, `ce_filter_event` |
| Juggernaut | Charge/grab, absorption, scale and chained events | `absorb`, `callevents`, `scale_actor`, `ce_atk_self`, `ce_filter_event` |
| Scarlet Witch | Absorption, scaling, random/filter effects and delayed damage | `absorb`, `atk_instant_pct`, `delayed_damage`, `harming`, `hurt_attacker`, `scale_actor`, several event types |

Literal absence/presence is a triage signal, not proof of registration or behavior.
Sunfire's original `sunfire_1201.PKGB` references its skin, animation database,
talents, powerstyle, flying moveset, entities, effects, textures, HUD and sound.
All of those dependencies must be accounted for; copying a mesh cannot validate
the new handlers.

## First implementation trace

### PC character fixture

`scripts/stage-xml2-character-fixture.py` staged Sunfire's original
`Packages/generated/characters/sunfire_1203.PKGB` and 37 directly declared asset
files under `work/xml2-integration/sunfire-import-v1/assets`. Every copy matches
its source SHA-256; manifests and relative paths are unchanged. The tool refuses
to overwrite an existing fixture. Its manifest explicitly lists unresolved
declarations and does not represent successful dependency staging as gameplay.

The unresolved declaration is `sound char/sun_m/p4_impact`. The PC bank
`Sounds/eng/s/u/sun_m.zsm` exists (223,760 bytes), has `ZSNDPC` in its header,
and contains `p4_impact` at byte 2384. This is not yet proof that the Xbox audio
path accepts the PC bank or correctly resolves that event; no substitute sound
or renamed bank has been installed. Indirect effect/resource references also
remain to be audited. The player folder and saves remain untouched.

### Descriptor correction

The archived reader incorrectly interpreted records as name/return/arguments/
function. Actual records are function/name/return/arguments. XML1 registration
`00099B50` passes 197 records beginning at `003D0B88`; XML2 registration
`000AEE80` passes 288 records at `0049A008`. The old scanner started four bytes
late, paired names with the next function, omitted terminal/null-argument
entries, and included shader strings and `INVALID` records.

`scripts/raven_command_index.py` corrects the layout, accepts native null argument
formats and the observed `d` format, and excludes shader false positives. It
finds all 197 XML1 gameplay descriptors plus 16 builtins (including the six
comparison operators). Constructor `000CBE40` registers those 16 at `003D5620`.
Two regression tests
cover the displaced function pointer, terminal records and unresolved archived
first records. The actual XML1 table was also checked against all 197 entries.

For XML2, correcting the archived rows currently yields 297 candidates, with
123 names absent from the current XML1 scan. Four preceding function words are
unavailable in the archive, and omitted records require the original image.
They remain explicitly unresolved. The tool accepts `--xml2-xbe` to recover
direct evidence once the user provides the game's location. Do not treat the
archived stub list or command-disassembly filenames as correct associations.
Corrected `idiv` is `000E86E0` (verified signed integer division in generated
code); `strcatstr` is `000E9920` and `strcatint` is `000E99B0`.

### Harming lifecycle

The recovered XML2 `CPUHarming` vtable is `004A8924` and its factory vtable is
`004A7B80`. Factory `00158F00` uses allocator/pool routines `00158330` and
`00158410`, then constructor `00158F90`. Its pool exhaustion check is 256 entries.
Clone routine `0014E900` uses XML2 RTTI and copies fields at offsets `60` through
`71`, then delegates to base copy routine `00153DF0`. Persistence routine
`0014E8C0` processes offset `6C` and delegates to base routine `001541C0`.
These are XML2 addresses and layouts, not offsets to apply to an XML1 object.
Constructor `00158F90` calls base constructor `00155790`, installs `004A8924`,
zeros fields `60` and `64`, initializes `68` to 4 and `6C` to `00180000`, sets
byte `70` to 3 and the low flags in byte `71`, and enables flags `83` at `30`.
Its recovered method at `0014EEA0` has actor/stat/damage dependencies and cannot
be pasted into an XML1 object whose base class layout and lifecycle differ.

XML1's corresponding investigation starts with `CActivePowerupSystem` vtable
`003C8C20` and `CCEPowerup` vtable `003D61C4`. The latter has a powerup definition
pointer at `14`: method `000D7430` checks that pointer and delegates through
`000E3EF0`/`00096370`; activation `000D77F0` tests flags in definition byte `70`
before its application path. XML1 does not expose the XML2 `CPUHarming`/factory
class family in its RTTI. These are different lifecycle implementations that
need adapters, not interchangeable vtables. `0013D370` is an empty method; it
must not be mistaken for the active update implementation based on its vtable
position. Local method extracts are in `work/xml2-integration/xml1-trace`.

Next trace the constructor, update/damage application, event filtering, and XML1
powerup factory/base lifecycle counterparts. Establish the shared semantic
interface and persistence ownership before registering an implementation. Use
Sunfire first for the smallest real character path, then Juggernaut and Scarlet
Witch to exercise the broader handlers. Do not replace unavailable powers with
existing powers or success-returning stubs to make a test pass.

## Completion requirements

### Integrated script commands

`raven_script_strings.c` implements the traced XML2 `strcatstr` and `strcatint`
semantics, including the native 128-byte limit and the conservative eleven-byte
integer reserve. `raven_script_extensions.c` adapts XML1's existing script values
and string pool, registers through `000CBB30`, and retains descriptors in a
native allocation using the interpreter's allocation category/tag. It does not
copy XML2 object layouts into XML1. The shared string semantics are independent
of guest addresses; the adapter's addresses are explicitly XML1-specific.

Registration occurs after XML1's original game command registration at
`00099B66`. Two dynamically allocated guest thunk tokens identify the native
implementations; they are not invented XBE function addresses. The dispatcher
accepts only those two registered tokens outside the existing code ranges.
`guard-script-extensions.py` reapplies the hook after regeneration. No original
command descriptor or return format is overwritten.

The Release build and `raven-script-strings-test` pass, including empty strings,
maximum signed integers, a 127-character accepted result, and rejected boundary
inputs. The optional `XML1_TEST_SCRIPT_EXTENSIONS=1` diagnostic passed native
script-value construction, getter dispatch, result allocation and stack checks
for both commands. It uses a bounded number of interpreter-owned test values
in a disposable process; it is disabled in normal play.

The hidden/muted run `work/xml2-integration/script-smoke-v1` passed that diagnostic
and continued through intro FMV, Cerebro, loading the existing Central Park save
and character movement. All four native captures were inspected individually.
That first run did not test a parsed XML2 script invoking these names.

`script-parser-v2` then executed both commands from the private intro script:
`probe = strcatint("parser_sunfire_", 1203)` followed by
`result = strcatstr(probe, "_ready")`. Native logs confirm the two expected
results, including `parser_sunfire_1203_ready`. This exercises parser name
lookup, argument conversion, return-value assignment and using a returned value
as the next command's argument. All four captures were inspected for intro FMV,
Cerebro, Central Park save loading and movement; private saves were unchanged.
The temporary script was restored and the player's original hash verified.
Tests were hidden and muted. Imported character combat, audible fidelity and the
whole shared-codebase objective remain unverified.

The first parser fixture (`script-parser-v1`) did not execute: its injected
lines used LF rather than the source script's CRLF. Controlled follow-ups in
`parser-format/result.json` separate the variables: long names with CRLF passed;
short names with LF failed. This is a native parser input-format constraint,
not a string-command registration failure. Fixtures preserve the source format;
no global script rewriting or renaming was performed.

### Imported-character preflight and talent consumers

The authorized PC imports now include Sunfire (`sunfire-import-v1`, 38 verified
files), Juggernaut (`juggernaut-import-v1`, 31), and Scarlet Witch
(`scarletwitch-import-v1`, 29), all under the ignored integration work directory.
Original PKGB bytes and declared relative paths are retained. Juggernaut's
direct declarations resolve; Sunfire and Scarlet Witch each still have a sound
event declaration that is not a standalone file. This is not sound compatibility
evidence. No imported character has yet passed combat or save/load validation.

`audit-xml2-character.py` indexes source occurrences for talents, value names,
skill requirements, display references and behavior references. It verifies the
staging hashes and runs the production binary decoder before indexing each XMLB.
It preserves duplicate attributes and distinguishes English/unlocalized variants
so one cannot hide a missing declaration in the other. Its three regression
checks pass. Reports are static requirements, never runtime pass results.

The character files contain 15 distinct talents for Sunfire, 14 for Juggernaut,
and 15 for Scarlet Witch. Source references that require follow-up:

- Sunfire's flying moveset uses `flight_pwr`, declared in PC
  `Data/shared_talents.XMLB` and `.engb`. `sunfire-import-v2` explicitly adds
  these two support files, with unchanged names/hashes and without pretending
  they are declarations in the character PKGB. This resolves Sunfire's flight
  value and shared skill references. The whole shared file additionally contains
  unresolved `grab_pwr` and `grab_req` references; these are retained in the
  report, not silently supplied with invented defaults.
- Juggernaut's powerstyle references `jug_trans_def_inc`; its supplied talent
  file declares `jug_trans_def`. This is an unresolved source-data discrepancy,
  not a confirmed engine defect or authorization to alias the names.
- Scarlet Witch's requirement uses `scar_misfort_req`, while the supplied talent
  declares `scar_misfortune_req`. Again, report the original discrepancy rather
  than conceal it with a runtime rename or numeric fallback.

Native trace evidence clarifies why copying these assets is insufficient:

- XML1 `CTalentSystem` at vtable `003D40CC`, initialization `000B4870`, loads
  `data/shared_talents.xml` (literal `003D4010`). XML1 does have shared external
  talent data as well as character definitions inline in herostat.
- XML1 `000B5CD0` selects rank by walking successive `level` nodes. XML2's
  supplied talents instead use counted level ranges and named `%` values.
- XML1 `CTalent` has 14 traced vtable entries at `003D3FBC`; XML2 has 22 at
  `0049E1D4`. Their object/vtable layouts cannot be substituted directly.
- XML2 introduces `ITalentValues`/`CTalentValues`, absent from the XML1 RTTI
  inventory. Constructor `000D0360` installs vtable `0049E410`, initializes
  separate name and value stores at `+4` and `+2CDC`.
- XML2 `000D0B40` distinguishes a leading `%` reference from a numeric input,
  resolves the reference through the name table and returns a 16-bit value ID.
  `000D1060` rejects names of at least 20 bytes. The preflight records that
  native bound; it does not invent truncation aliases.
- XML2 `000D0950` retrieves the two components of a value through `000D0A70`;
  `000D0E20` writes components through `000D0EE0`. `000D1280` clears the value
  store globally or removes entries associated with a particular object ID.
  These establish ownership and lifecycle work still needed for save/load and
  character switching; they do not yet prove rank interpolation semantics.

Next implementation work is the traced talent/value adapter and original
handler lifecycles, followed by imported-character UI, combat and persistence
checks. The player's staged executable, assets and saves remain untouched.

### Shared talent curve evaluator

`raven_talent_curve.c` now implements the per-symbol rank evaluation traced in
XML2 `000CEC10`, especially `000CEE0C..000CEEA3`. It accepts the original
declaration order and numeric components, holds values when interpolation is
disabled, freezes at an exact matching rank and uses the native zero-valued
origin before a first future point. It preserves the last declaration's level
even if no interpolation occurs; sorting points would change the native result.
Rank selection and the character's overall level cap are separate concerns.

The shared code has no guest addresses, actor-layout assumptions or Windows
dependencies. `raven-talent-curve` builds as a static library. This is the
evaluation core for the pending adapter; it is not yet called by the game.
Native value-name binding, actor ownership, numeric parsing and persistence
remain separate implementation requirements.

`generate-xml2-talent-curve-reference.py` extracts the actual recovered
`000CEE66..000CEEA3` arithmetic block into an ignored local C test include.
The block SHA256 is
`9d83112ec95bb21c1cddf565ea6e5e95b2f17e9679e16146b85f825e31304d4b`.
The Release test with `RAVEN_XML2_CURVE_REFERENCE=ON` passes 3,876 comparisons,
bit-identical for both float components, using positive and negative values.
The comparison tests the arithmetic only, not the surrounding native parser or
actor state. Separate checks cover Sunfire Ignite's source damage endpoints,
intermediate ranks, rank bounds, declaration ordering and exact-point locking.
Iceman's original `ice_shards_num` points exercise explicitly disabled
interpolation across ranks 1–25; fractional projectile counts are not introduced.

The PC talent inventory contains 2,120 value points, including ten with an
explicit `interpolate` attribute (Iceman, Magneto and Phoenix). The XML2 trace
reads a default-true byte through field literal `0049E2AC`; the PC data and its
position in the arithmetic support the interpolation interpretation. Confirm
the literal itself against the original XML2 XBE when available.

### XML2 talent resource ingestion

`raven_talent_data.cpp` loads actual XML2 `talents` resources into an owned
definition model. Each definition retains its original XML tree, including UI
descriptions, power names, counted rank ranges, prerequisites and passive
powerup declarations. It indexes named numeric scalar/range points and calls
the shared evaluator. It does not rewrite source files, rename symbols, create
XML1-style power tiers or silently resolve missing symbols to zero.

The existing XMLB codec now exposes `parse_xmlb`, reusing its production bounds,
cycle and overlap validation and literal-byte reader. Duplicate attributes and
sibling order are retained. The talent reader rejects ambiguous duplicate
attributes in fields it must interpret; it retains other metadata unchanged.
Named numeric constants, unsupported range syntax and oversized value names
produce explicit errors. This reader does not claim to implement every branch
of XML2's native numeric parser.

Release verification:

- Talent ingestion tests pass for parsed ranges, retained UI/requirement data,
  duplicate XML attributes, unresolved names and explicit unsupported values.
- Sunfire, Juggernaut, Scarlet Witch and shared English talents load 78
  definitions and 170 named values; all 7,650 evaluations across ranks 1–45
  return finite pairs. This checks execution on real data, not that every
  gameplay effect is correct.
- All PC `Data/talents/*.xmlb` files load 285 definitions and 1,058 named
  values, with 47,610 finite rank evaluations. English and unlocalized files
  are not combined as if they were distinct runtime definitions.
- Existing XMLB golden-layout, raw localization, nested/forest and malformed
  input checks pass after exposing the tree API.

The library is not yet called by the running game. The next adapter must bind
talent definitions to native character ranks and preserve actor ownership.
XML1 `CValues` at `003D4380` parses numeric strings through `000B7E60`; its
numeric branch returns the first scalar for both components and its symbolic
branch reads a global table. It takes no actor context. XML2's counterpart
`000D3BF0` has scalar/range parsing and a separate five-entry named-constant
table; `%` talent references are bound separately by `000D0B40`. Therefore a
global replacement of XML1's numeric reader would both change legacy data
semantics and lack the actor needed to evaluate an imported power correctly.
Trace the containing power/requirement operands and their application context
before connecting the new model. No global scalar-reader patch was applied.

### Native operand application and regression evidence

The opt-in `XML1_TRACE_RAVEN_OPERANDS=1` diagnostic records native action
parsing (`000CDC10`), action application (`000CDE90`) and attack application
(`000CFDC0`). It reads guest state only, is bounded, and is disabled normally.
The generation guard reinstalls these hooks without changing native operands.

XML1 parses `powerusage` into a signed 16-bit field at action+0x10. The
`CCEAtk` parser `000CF6B0` parses `Damage` into signed 16-bit endpoints in the
descriptor addressed by event+0x14. Application has actor context: `000CF250`
copies endpoints into local values before `0005CA80` selects damage. A future
XML2 binding must resolve there per actor, not overwrite a shared descriptor.
`000CFC80` copies/clones action and attack state; symbolic bindings must follow
clones and be invalidated when pooled objects are reused.

The private `operand-smoke-v1` run reached saved-game gameplay and dispatched
two attacks through the same event with actor `04739708`, descriptor
`004EEC3C`, damage endpoints 4 and 5, and energy 0. Event addresses differ
between parsing and application, reinforcing the need to trace cloning.
This establishes the application boundary, not damage delivered to an enemy
or support for XML2 handlers. Native captures were inspected individually:
intro animation, Cerebro main-menu background, Central Park loaded from save,
and Wolverine moved away from the extraction point. The run was muted, so
audible quality was not verified. The 90-second watchdog exited as expected
(code 3); private user-data hashes were unchanged. Test executable SHA256:
`7f932a023a7614ae760294bb215b1c17b9fe8e07ba6b294a21de9ea3174eea41`.
Player staging and saves were not replaced.

Another integration constraint is rank storage. `00040DB0`, called by the
requirement branch `000A3EE1`, returns the low four bits of a keyed entry at
map+index*4+0x168. XML2 talent definitions include rank 20, which cannot fit
that representation. Trace the requirement category, setters, other packed
fields and persistence before changing it. The adjacent serialization path
`00047F80` transfers three entry bytes; changing a mask alone is insufficient
evidence of a compatible rank expansion. No rank-storage patch is applied.

The follow-up native trace (`rank-smoke-v1`) establishes the actor-to-rank
connection: attacking actor `04739708` has component `046428F4` at +0x2D8;
`000801F0` exposes stats at component+4 (`046428F8`). Native rank reads on
that exact stats object include key 107, slot 5, packed bytes `01,00,01`,
rank 1. This is the character-stat component, not the attack component at
actor+0x2F4. `000B3BE0` compares unsigned **byte IDs**, not strings. Resolving
an imported talent name therefore also requires the native name-to-ID mapping.

Further packed-state consumers traced:

- `000487F0` clamps a requested rank against `00048140`, then writes only
  the low nibble of entry byte 0.
- `00048270` reads the high nibble of byte 0; `00048510` decrements it in a
  refund/reset loop and accumulates per-rank costs. It is occupied state.
- `000480F0` writes byte 1's high nibble, read by `00048140` as a possible
  maximum-rank override; `000482F0` writes byte 1's low nibble after checking
  the sum of existing rank fields against that maximum.
- `000481A0` writes byte 2's low nibble; `000483C0` compares that field
  against byte 0's low nibble while selecting a talent.

The rank diagnostic hooks the existing getter without making nested guest
calls or changing registers. Repeated identical observations are suppressed
so menu polling cannot consume the log budget before gameplay. The initial
trace build passed the same individually inspected four captures through
saved Central Park gameplay, dispatched two attacks, and left private save
hashes unchanged (watchdog exit 3). The subsequent duplicate-suppression-only
change builds successfully but has not yet received another gameplay run.
Audio was muted and imported XML2 handlers were not exercised by this trace.

### Read-only native talent adapter

`raven_xml1_talent_view.c` bridges the shared model to existing XML1 state
through a caller-supplied guest-memory reader. Name resolution follows
`CTalentSystem` method `000B4D90` / tree search `000B3B30`: the name tree is
at system+4, node stride 0x2C, names at node+0x18, and IDs in its byte array
at map+0x1C58. The native comparator `00343612` folds case. The adapter
supports ASCII identifiers and rejects overlong or non-ASCII requests rather
than introducing truncation aliases or pretending to emulate another locale.

Rank resolution follows `00040DB0` / `000B3BE0` on the supplied character's
stats object. It returns separate found, missing and invalid states, so an
unlearned rank zero does not stand in for an unresolved imported talent.
It preserves the native four-bit rank; extending XML2 rank storage remains
separate work. No guest functions, registers, packed fields or save bytes
are changed. Address arithmetic is checked before reads; cyclic trees are
bounded. The reader owns actual memory-access validation.

The new Release test covers case folding, two independent character records,
zero versus missing, occupied high bits, rank 15, unreadable/overflowed
addresses, invalid identifiers and cyclic links. The optional operand trace
also compares this adapter against the native lookup results at the call
boundaries, enabling validation on real loaded game state.

`talent-view-smoke-v1` matched all 136 distinct observed native name lookups
and all eight observed character/key rank lookups, with zero mismatches.
The latter covered two stats objects, including Wolverine's ranks 1,0,0,0
for IDs 107–110. All four native captures were inspected individually:
intro animation, Cerebro menu, loaded Central Park and movement/attack pose.
Two attacks reached the native dispatch trace. The muted run ended at its
90-second watchdog (code 3), and private user-data hashes were unchanged.
This proves the read-only bridge on the observed XML1 records, not imported
XML2 power execution, rank expansion, new save serialization or audible audio.

### Character-specific XML2 value evaluation

`raven_actor_talent.cpp` now connects an explicit XML2 talent definition to
XML1's native name registry and the applying actor's current rank record,
then evaluates the named scalar/range. Unknown talent, unknown value,
unlearned rank and invalid guest state are distinct results; none writes an
output value. No character/rank cache is retained, so a reused actor address
cannot inherit the prior character's power values. Tests exercise the complete
XMLB-to-actor-rank-to-curve path, two different actors, zero rank, changes,
actor-address reuse and destroyed/unreadable actors.

An opt-in probe loads the original PC resource selected by
`XML1_TEST_XML2_TALENTS` and definition `XML1_TEST_XML2_TALENT`. At native attack
dispatch it evaluates that definition for the current actor without replacing
the attack's operands. `actor-talent-smoke-v1` used the original PC Wolverine
resource and `wolv_slash`: the live XML1 actor's rank 1 yielded the source
values 1.25 (attack rating), approximately 3.1 (damage scale), 1 (life),
16 (power usage) and 7 (requirement), on both observed attacks.
The four native captures were inspected individually (FMV animation, Cerebro
menu, saved Central Park, movement/attack pose). The muted run ended normally
at its watchdog with code 3 and unchanged private user-data hashes. It did
not validate audible audio, damage to enemies or imported power animations.

This is explicit diagnostic binding, not proof that same-named powers are
interchangeable. XML2's `wolv_slash` is `power2`, has a prerequisite on
`wolv_slice`, and uses damage as a scoped multiplier. Its value 3.1 must not
be written as raw integer attack damage. Production integration must select
the correct game/character definition and trace each consuming affecter/event.
The shared resolver does not auto-import definitions, alias missing talent
names or alter XML1's rank storage. Ranks above 15, imported talent registration,
cloned operand bindings and actual XML2 handler execution remain outstanding.

### Remaining acceptance (whole goal, unchanged)

#### Script registry capacity regression (resolved in private validation)

`strveci` was traced from original XML2 `000E9A30`, signature `s/iii`,
format literal `0049FF64` = `%i %i %i`. The string core and XML1 thunk are
implemented, including exact signed 32-bit extremes and interpreter-owned
return objects. Registration now contains three descriptors. Unit tests and
direct native argument/return/stack checks pass, but this build is NOT accepted.

Executable SHA256 `4ed54e957a9739e98b3ee12c0c8324e6ea627ae5222145338eedfbb443afc886`
was tested in `strveci-parser-v1` and `strveci-baseline-v1`. Parsed vector and
chained vector-string calls returned the expected values in the first run,
but the old concatenation fixture calls were absent. Repeating with the
previous two-expression fixture on the same executable also missed those
calls. Both runs reached FMV/menu output but inspected captures show no
Cerebro background and remain on the load-game list instead of gameplay.
The baseline logs a main-background map request; that is NOT proof of its
visible presence. No gameplay or audiovisual regression pass is claimed.

Next work: inspect actual native command registry/name lookup and compare the
two-command and three-command registrations; do not assume the isolated thunk
ABI checks prove full interpreter correctness. Both watchdog runs exited,
private save hashes stayed unchanged, the original private intro script was
restored, and no player staging files were changed.

#### Required input checkpoint (resolved by user)

The user subsequently supplied `Z:\Programming\!archived\X-Men Legends II`.
Its `default.xbe` hashes to
`24ff13d0eb61bd4405653c0456d33f7a0440cdd577aaa85d7e067ecb650e6488`;
this matches the recovery provenance.
The folder includes `z/assetsfb.zip`, WAD files and extracted asset folders,
plus the original `!WORK` project. Original archive files remain read-only.
The user also authorized finding unused hero/skin numbers up to hero 255,
preferring two-digit families, with consistent resource/package renumbering.
The following checkpoint describes the earlier search, not a current blocker.

The recovery ZIP was re-inspected: 1,205 entries, no `.xbe`, `.iso`, `.xiso`,
or `assetsfb.zip`. Its parent folder contains only the ZIP and three Markdown
handoff files. `Z:\ROM backups` has no XML2 image. A broader filename search
of `Z:\Programming`/`Z:\Modding` was stopped while traversing unrelated source
trees; do not describe that incomplete scan as proving absence everywhere.
The search process has exited; no background file search remains.

The original XML2 Xbox executable and assets are required to recover the
referenced data constants and perform the requested second-game validation.
The earlier path question remains unanswered. The separate question about
unused skin numbers for Bishop/Sunfire also remains unanswered, so those
renames and playable overlays have not been applied. Further speculative
runtime substitutions would not resolve either missing input. Existing
source traces and diagnostic tests must not be promoted to gameplay claims.

User-directed import constraint: preserve all existing XML1 characters. Actual
playable XML2 imports will use the user-selected Bishop and Sunfire in
identified `DummyNPC` roster slots, in private fixtures.
Juggernaut is not a suitable exclusive-character replacement because XML1
already has Juggernaut content. The original PC Juggernaut dependency fixture
remains an audit input only. The prior Wolverine diagnostic read an original
XML2 resource explicitly; it did not replace his roster entry, packages or
attack operands. Do not turn that diagnostic into a Wolverine overwrite.

Bishop's original `bishop_1801.PKGB` is staged as `bishop-import-v1` with
37 hash-verified files, including explicit shared-talent resources. The
declaration `sound char/bishop_m/p5_impact` remains unresolved by this asset
stager; PC bank playback is not claimed. The requirements audit reports no
external skill dependencies or rejected value names. `grab_pwr`/`grab_req`
remain undeclared in the included shared resource, as in the Sunfire audit.
No live roster entries or player installation files were overwritten.

### Bishop and Sunfire collision audit

After the user's renumbering authorization, families 60 and 61 were checked
against all staged filenames, hero/NPC skin fields and 1,501 PKGB manifests;
no 60xx/61xx references were found. Reserved Bishop skin 6001 and Sunfire
skin 6101 in private fixtures `bishop-6001-v1` and `sunfire-6101-v1`.
`scripts/renumber-character-fixture.py` creates new output directories only,
checks source hashes, rejects existing destination resources, and rewrites
the actual declared skin and two portrait resources with standard PKGBs.
Sunfire's original portrait is 1201 despite its actorskin being 1203; both
now correctly target 6101 in this fixture. The animation database paths
remain unchanged because their character-specific names do not collide.

Verification: all 75 non-PKGB resource payload hashes match their original
fixtures. Each rewritten PKGB differs in exactly three filename values;
resource order, kinds and all other attributes are preserved. The overlay
audit now reports nine shared-resource conflicts, down from fifteen, with
no skin/portrait collisions. This is resource staging only: the dummy-slot
roster integration, indirect references, shared-resource conflicts and
gameplay remain unfinished. No files were applied to player staging.

`scripts/audit-character-overlay.py` compared the two selected import manifests
against `XBOXgame` without applying files. The local report is
`work/xml2-integration/bishop-sunfire-overlay-audit.json`: 77 imported-file
entries checked, 15 conflicting entries (including shared-resource repeats).
The audit validates fixture hashes and checks Windows-style case-insensitive
paths against XML1 and other imports.

Bishop's `Actors/1801.IGB` collides with Magma's skin 1801. Sunfire's
`Actors/1203.IGB` collides with the Psylocke skin family (her base skin is
1201). HUD/character portraits also collide. XML1 `npcstat.eng` references
Magma and Psylocke skins too, so preserving only playable roster rows would
not preserve all existing content. Other conflicts include shared talents,
textures, `moveset_flying.engb` and `ps_bishop.XMLB`; each needs explicit
integration, not blanket replacement.

No imports were applied. Approval was requested for assigning unused skin
numbers with consistent imported filenames/package references, because the
standing original-filename rule otherwise prevents that conversion. Such
approval would address skin numbering only; it would not authorize replacing
unrelated shared assets. Gameplay validation remains outstanding.

### Scoped powerup consumer trace

XML1 talent powerup enumeration `000B5E00` calls descriptor parser `00096370`.
The descriptor parser reads the selected element's attributes and only its
`scope` children (original literal `003D06A8`). Field parser `000955C0`
handles `powerup` through `000946F0`, storing a byte type at descriptor+0x1C;
`level` uses global CValues and stores float endpoints at +0x2C/+0x30.
`affect_type=scale` sets operation bits 0x100 in +0x6C. `scope_node` invokes
`00027EF0` on +0xC and sets bit 0x10 at +0x18. These are traced XML1 fields,
not XML2 offsets to copy blindly.

XML2's original Wolverine resource nests `affecter` children with `attribute`
and a `%` value under `powerup`. XML1's above parser does not iterate those
children. A proper XML2 ingestion/application path must handle those scoped
affecters and their lifecycle; copying the XML2 resource into XML1 cannot
establish support. Existing `idiv` is already present in XML1 (`000CCCA0`),
so it must not be registered again as an allegedly missing XML2 command.

The original XML1 type lookup `000946F0` compares against 59 pointers at
`0044E8C8` and returns index zero on an unknown name. Reading that table from
the supplied XML1 XBE confirms entries such as `damage` (16), `move` (9),
`critical` (42), and `power_cost` (40). Zero means `none`. This is a silent
failure boundary: passing XML2 attribute names into this lookup is not a
valid integration strategy. In particular `atk_critical`, `defense_rating`,
`powerup_scope`, and the selected characters' `resist_*` names are absent.
Even matching strings do not establish matching application semantics.

The selected PC talent resources concretely require these paths:

- Bishop: energy resistance, scoped gun damage and critical chance, defense
  rating and movement scaling, `atk_instant_pct`, and `add_attack`.
- Sunfire: scoped fire damage and critical chance, elemental/mental/energy/
  radiation/fire resistance, and `add_attack`.

`audit-xml2-character.py` now records all powerup and affecter nodes with
their original ordered attribute pairs, including repeated scope filters.
It deliberately does not infer parent relationships from the flat audit
stream. Four requirements tests pass, including classless powerups and
duplicate scope preservation. Full hierarchy remains in the production
`TalentDefinition::source` XMLB tree. Fresh hash-verified fixture reports are
`bishop-import-v1-affecter-audit/requirements.json` and
`sunfire-import-v2-affecter-audit/requirements.json` under the integration work
directory. These are dependency evidence, not gameplay acceptance.

Archived XML2 `CPUAtkAdd` field parser `0014CBC0` routes two literal keys to
value parsers at `this+0x64` (`000EDA20`) and `this+0x6C` (`000EB1E0`), another
through `0004A2D0` into `this+0x70`, then falls through to `00152A30`.
The literal addresses are `004A6DCC`, `004A6E68`, and `004A6994`; their spelling
is not asserted without original XML2 image bytes. Base `CPowerup` parser
`00154DC0` is a separate implementation. Do not transplant these object
offsets into XML1 or guess literal identities from the PC resource alone.

With the user-supplied matching XML2 image, those literal identities are now
verified directly: `004A6DCC=damagePercent`, `004A6E68=damageSum`,
`004A6994=damageType`, `004A6E60=mirror`, `004948BC=true`, and
`004911A4=life`. These resolve the earlier parser-name uncertainty;
application and lifecycle integration still require implementation/testing.

### Selected private roster and costumes

`scripts/stage-xml2-test-roster.py` creates a separate English herostat fixture
from the decoded PC XML2 definitions, replacing only `DummyNPC01` and
`DummyNPC02`. The output is `work/xml2-integration/selected-roster-v1`.
Bishop and Sunfire retain their original XML2 attributes, talent references,
races and attached-effect declarations except for the explicitly mapped
skin IDs/default costume. All 35 other roster records are unchanged; this
count includes non-playable records and is not a playable-hero count.

All three source costumes for each character were staged, including normal
and `_nc` packages. Bishop maps 1801/1802/1803 to 6001/6002/6003.
Sunfire maps 1203/1202/1201 to 6101/6102/6103 so default, AOA and Astonishing
remain correctly associated with their original models. The renumbering
tool now handles `_nc` package suffixes. Binary herostat compile/decode
round-trip preserves the complete authored tree; all 12 costume/package
associations pass checks against their actual actorskin declarations.

These are private integration inputs, not a player-ready staged game. The
source PC XML2 talent layout is retained for adapter work, not falsely
reported as an already functioning XML1 talent/UI implementation. Shared
talents, flight behavior and unresolved PC sound-bank events remain pending.
No roster/package/skin data was applied to `XBOXgame`.

### Remaining shared resource analysis

The five differing shared texture files (`glow_cloudy`, `sun`,
`explosion_puff_a`, `misc_spiral_fading`, `decals/burn1`) were parsed using
the repository's Alchemy v6 field reader. All stored image payload SHA256s
and image parameters match XML1, including all mip levels (respectively
1, 1, 7, 1 and 8 images). The raw files are not byte-identical; source-path
metadata and serialized reference ordering differ. The local evidence is
`work/xml2-integration/shared-texture-images.json`. Reusing the original
XML1 copies preserves the verified artwork, avoids replacing shared assets,
and still needs final visual verification in the imported effects.

XML1's existing `ps_bishop.XMLB` is a 57-byte empty `PowerStyle` with only
`CanSteal=true`; the PC XML2 resource is 15,580 bytes. This is a placeholder
versus an actual moveset, not a second functioning Bishop implementation.
It has not yet been replaced in a playable fixture.

Shared talents have 18 colliding names, including `flight`, `might`,
`critical`, and resistance talents. Keep their per-game definitions distinct;
a wholesale file replacement would alter XML1 characters. The flying
moveset also has substantive differences: XML1 includes eight extra moves
(`airgrabpickup`, the five `airpickup*` moves, `fastball`, `flyguarddecide`),
and six common move blocks differ (`flymelee1`, `flymelee2`, `flying`,
`flycharge`, `flycharge_loop`, `painairfeetfirst`). The first comparison
normalizes attribute-name case/order only; it is not proof of behavioral
equivalence. Local node evidence: `flying-moveset-comparison.json`. Do not
overwrite that file globally or claim imported flight works yet.

### XML2 named numeric values

The supplied XML2 image resolves the five `000D3BF0` names at table
`00541E1C` (stride 8): `DMG2`, `DMG3`, `DMG4`, `K2`, `K3`.
Their values are not immutable XBE constants. `000D39C0` loads
`data/values.xmlb` (`0049EA00`), selects `values/value`, matches `name`,
and populates float pairs at `005F9218`. `min` defaults to zero and `max`
defaults to `min`; later matching declarations overwrite earlier values.
The comparisons call the case-insensitive helper `003D66B7`.

`raven_talent_data` now exposes `load_talent_constants` and accepts an
explicit optional table when loading talents. It supports those five names
without introducing global state shared across titles. Missing declarations
and malformed/nonfinite values fail explicitly; native fallback-to-zero for
unknown data is intentionally not used as a compatibility substitute.
Existing numeric-only callers remain unchanged. No live named-value binding
is claimed yet: the game adapter still must supply the correct title table.

The installed PC XML2 table was inspected: DMG2=2..3, DMG3=3..5,
DMG4=6..9, K2=120 and K3=190. These are source-instance observations,
not hardcoded defaults. Targeted ingestion and actor-talent tests rebuild
and pass, including case folding, scalar/range values, duplicate replacement,
missing-table rejection and independent tables for two games.

### XML2 powerup ownership and attack callback boundaries

Further archived-code trace (not yet executable XML1 integration):

- `CPUAtkAdd` copy routine `0014CB60` uses a runtime type check, copies
  +0x64/+0x68/+0x6C/+0x70 and bit zero of +0x74, then calls `00152A90`.
  Any eventual actor-value binding must survive that copy operation; a
  parser-only pointer side table would miss copied powerups.
- Callback `0014CC90` validates entity/handle arguments and exits early
  when input +0x35 has bit 2 set. It evaluates this+0x64 through `000C31A0`
  and this+0x6C through `000C3330` in the resolved context. Later it combines
  a float-scaled input damage with an integer term. Matching damage types
  with this+0x74 bit zero clear add to the existing damage record; the other
  branch constructs a separate record and calls combat-system vtable +0x64.
  This is evidence against flattening `add_attack` into one unconditional
  damage multiplier. Exact flag names remain unresolved.
- Base `CPowerup` routine `00153B20` validates a two-word handle and stores
  it at +0xC/+0x10 if the existing handle is invalid. Otherwise it resolves
  the existing handle and calls that object's vtable +0x14 with the new
  pair. `00153BA0` repeatedly resolves this handle, invokes the resolved
  object's +0x18 method with the handle-storage address, then invokes
  manager `00159E20`'s vtable +0x34 with the removed pair. The loop continues
  until the stored handle is invalid. This establishes explicit linked
  ownership/removal behavior; it does not yet identify every caller's
  expiration, death or character-switch trigger.

Preserve these separate parsing, copy, application and removal boundaries
when adding XML2 behavior. Merely modifying XML1 actor stats permanently
would not reproduce the traced system. Lifecycle acceptance still requires
observed expiry, removal, actor replacement and save/load behavior.

Preserve one codebase supporting the requested XML1 and XML2 behavior, including
additional script functions, movement, attacks and powers. Validate actual menus,
character information and power assignment, combat, scripted events and save/load
using imported characters and both games' flows. Record unsupported behavior
explicitly. Keep XML1 regression checks and the separate user multi-machine
performance acceptance requirement intact. This work does not close the separate
general-purpose character conversion tool item.

### Fixed command-map capacity investigation

The controlled `registry-2-v2` / `registry-3-v2` boots use the same build,
intro expressions and test arguments. Two registrations preserve parsed
`strcatint`/`strcatstr`; three overwrite node zero and make node 214 unreachable.
Native allocator `000CA200` wraps its free-slot cursor at `0xD7` (215), with
213 native commands already registered. This is capacity exhaustion, not a
string signature or asset-package error. The former diagnostic bound 272 was
incorrect and that temporary tree walk has been removed.

The candidate fix keeps added descriptors outside the fixed guest map and
consults them only at `000CAD40`'s native missing-key return (`000CAD99`).
Existing native descriptors take priority; unknown names still return zero.
The fixed-map layout and other interpreter fields are unchanged. Direct
lookup ABI checks cover all three added commands, native `startMovie` and
an unknown command. Build and bounded full-flow validation passed as described below; the player
staging remains unchanged.

Validation `strveci-parser-v2` uses executable SHA256
`9d5a5bcb1a629bb11391a365690886e6d6aed967ff49848bb68931f4fc21a810`.
Native lookup and argument/result ABI checks passed. Parsed `strveci`, chained
`strcatstr`, `strcatint` and its chained result all logged expected values.
All four native captures were inspected individually: intro FMV animation,
Cerebro main-menu background, loaded Central Park with Wolverine/HUD/extraction
point, and visible movement away from that point with camera following.
The 90-second watchdog deliberately ended the run with code 3; it was not a
crash. Private save hashes were unchanged and the temporary intro script was
restored. Muted execution does not validate audible fidelity. This resolves
the script-registration regression, not Bishop/Sunfire combat integration or
the overall shared-game goal. Earlier failed builds remain recorded above as
historical evidence.

### Bound talent references and live diagnostic validation

`raven_talent_binding` now binds whole `%symbol` operands to immutable talent
metadata in a per-profile catalog. XML2 `000D0B40` removes `%`, bounds the
symbol to a 20-byte buffer, and looks up through `000D0BF0`; its comparator
`003D66B7` folds case. The adapter implements ASCII case folding, rejects
names over 19 bytes rather than aliasing truncated identifiers, and reports
unresolved or ambiguous symbols explicitly. Numeric fields and UI strings
containing embedded references are not routed through this whole-operand API.

Bindings retain definition ownership across catalog destruction and copies,
but never cache an actor or rank. They evaluate using the existing native
XML1 rank adapter each time. Tests cover different actor ranks, cloned binding
lifetime, case folding, malformed/missing references and colliding definitions.
This does not implement guest event clone/destructor hooks or ranks above 15.

`actor-binding-smoke-v1` (SHA256
`09bb8b58a555213666d858cc1b876a7137d766866bb63cdbf88b81c1690d53de`)
uses the binder in the process-local diagnostic at native attack dispatch.
Original PC XML2 Wolverine values resolve twice at the actual XML1 actor:
ar=1.25, dmg=3.0999999, life=1, pwr=16, req=7. Damage here is the original
scoped multiplier, not proof of inflicted damage. Four native captures were
individually inspected: FMV, Cerebro menu, Central Park load, movement/attack
pose. The bounded run ended at the 90-second watchdog (exit 3), save hashes
unchanged. Audio was muted. No assets or player executable were restaged.

Next consumer boundaries: XML1 `000CDEE1` reads event+0x10 signed energy cost
and calls `0003F410`; `000CF250` builds a per-dispatch damage record with actor
in EBP and event in EDI. It draws its native range through `0005CA80` before
writing record+8 at `000CF386`. An integration must resolve imported operands
into this invocation's arguments/result, preserve subsequent scaling/random
semantics, and never overwrite shared event descriptors. Binder validation
alone does not complete that consumer integration, imported combat, or both
full games' acceptance.

### XML2 energy consumer: context and owner fallback

Original-byte trace is in `work/xml2-integration/energy-consumer-trace.json`,
including the input SHA256, disassembly and verified vtable at `0049E410`.
This is source evidence, not a claim that imported powers execute correctly.

- `000E9DF0` recognizes `powerusage` (literal `004A0034`). It calls the
  talent system slot +0x18 (`000D0B40`); nonzero returned value IDs are
  stored at event+0x10 with bit 0x8000 set. Literal values take a different
  conversion branch. XML1's signed field cannot interpret that tag directly.
- `000E9EA0` gets character context at actor+0x35C. For a tagged reference,
  it checks the handle at actor+0x758 and calls system slot +0xC
  (`000D0AF0`). If the current context has no cached value entry and the
  handle resolves via `0002ED40`, it takes the resolved actor's +0x35C
  context. Do not substitute an unlearned/zero-rank check for that test.
- `000D0A70` forms a key with 32-bit arithmetic:
  `((uint16_t(valueId) << 15) + int16_t(context[0x28E])) * 2 + endpoint`.
  It searches the tree at system+0x2CDC, root +0x2CE0. `000E4D60` compares
  keys unsigned, with 16-byte nodes, key +0x18, links +0x10/+0x14.
  Values are at tree+0x1F98+index*4. `000D0AF0` tests iterator presence,
  independently of the cached float's magnitude.
- System slot +4 is `000D0950`, which reads these cached values (and
  validates their numeric range). `000E9D60` consumes a tagged 15-bit ID
  through that slot, whereas untagged values return their original low
  16 bits. `000E9EA0` finally sign-extends the returned low word to float.
  The existing XML1 rank-based resolver is not a substitute for this
  complete XML2 context/cache behavior.

The initially suspected conversion ABI mismatch is resolved below under
"Energy conversion and consumer semantics". The original x87 operand survives
the wrapper's balanced temporary push/pop; no executable patch is needed.

### Shared context-value storage

`raven_talent_context.h/.cpp` implements per-profile context/value storage for
XML2-style consumers. Native setter `000D0E20` writes endpoint zero through
`000D0EE0`; if endpoints differ it writes endpoint one, otherwise it looks up
endpoint one through `000D0A70` and erases it via `00209120` at `000D0ECB`.
The shared implementation replaces the complete range/scalar entry atomically.
It distinguishes present zero from absence for owner fallback, retains separate
profile instances, and offers explicit context retirement before identity reuse.
Native owner handles must be validated by the adapter before providing an owner
context. Tagged IDs are limited to nonzero 15-bit values. Nonfinite updates are
rejected without changing an existing entry; this is an explicit validation
policy, not a claim to reproduce native invalid-data fallback exactly.

`raven-talent-context-test` builds and passes: two actors with the same value ID,
zero ownership, missing-value fallback, optional owner absence, scalar replacing
a range, profile isolation, context retirement/reuse, ID bounds and failed-update
preservation. `git diff --check` passes. This component is not yet wired into
native cache population, cost charging, event copying or save restoration; no
new gameplay validation or player staging occurred for this isolated change.

No archived manual ftol override is required. Native setter/consumer hooks and
population callers, including rank-change and lifetime triggers, remain pending.
The full shared-game goal remains open.

### Talent cache publication and explicit reset

The writer caller is `000CEC10`, the already traced curve evaluator. At
`000CED7B` it checks an explicit byte against FF. The FF branch publishes
zero/zero through system vtable +8 (`000D0E20`) at `000CEDB3`; it does not
erase the entry. Normal evaluation publishes its pair through the same slot
at `000CEEC6`. Do not conflate the FF operation with rank zero. System slot
+0x10 (`000D1280`) is separate: a null context clears the full cache and a
non-null context erases matching context keys. Candidate lifecycle callers
include `0007B0A0`, `000CB6F0` and `000CB9D0`; their higher-level triggers
still need verification before wiring guest lifetime hooks.

`TalentContextValues::populate` now evaluates a loaded definition into an
explicit profile-local symbol/ID mapping and publishes it into one context.
An explicit null optional rank represents the traced reset, preserving zero
entry presence. The normal rank path accepts 1..255 and uses the existing
source-backed curve evaluator. Failed validation leaves the prior publication
intact. `clear` provides the separate full-cache operation.

The context test now covers an XMLB Bishop beam fixture with original rank-1
and rank-20 damage/energy endpoints, independent actor contexts, failed partial
publication, explicit reset and full reset across separate profiles. Build and
tests pass (`talent-population-build.log`). This is the shared publication
implementation; native callback wiring, correct value-ID registry ownership,
rank-change hooks and in-game imported power effects remain unverified. No
new gameplay smoke or player restaging was performed for this library change.

### Profile-owned value registration and original-resource publication

`TalentBindings` now assigns nonzero 15-bit value IDs and uses that same
mapping when populating `TalentContextValues`. Native `000D1060` reserves
zero, rejects bit 0x8000 and reuses an existing case-insensitive symbol ID.
The host catalog continues to reject ambiguous cross-talent symbols rather
than silently merge definitions. Its allocated IDs are local to the catalog;
they are not injected into the original guest map or serialized as permanent
save identifiers. The host capacity is not the original fixed 300-name table.

Catalog copies retain an opaque shared ownership token. Context publication
rejects another catalog's token even if numerical IDs coincide, and rejects
adopting already-populated unregistered values. Publication failure leaves
prior values unchanged. Fresh catalog rebuilds from identical inputs assign
identical IDs, but still represent a distinct lifetime/profile; native reload
wiring must rebuild context caches and bindings together.

Both actor-binding and context tests pass. Running the context test with the
original PC files `Data/talents/bishop.engb`, `Data/talents/sunfire.engb` and
`Data/shared_talents.engb` loads 64 talents and registers 120 values, publishes
rank-1 and rank-20 contexts, and checks each reference's talent ownership and
presence in both contexts. This does not validate powerstyle handlers, UI,
actual damage, sounds or gameplay. No player executable/assets were restaged.

### Event operand lifetime component

`raven_event_operands` retains imported energy/damage reference metadata outside
shared guest event numeric fields. It resolves through the profile-owned cache
for each invocation's context and optional validated owner. Native/unbound
operands and bound references with missing context values are distinct results;
the consumer must not silently replace the latter with zero or old native data.
Literal overrides clear only that field's reference. Begin/retire clear object
identity metadata; copying a native event clears stale destination references.
No current native lifecycle hook calls these methods yet.

Inspection of XML1 `000CFC80` confirms action data is copied only after the
first RTTI cast succeeds (`000CFCA9`), and attack data is copied only after a
second cast plus non-null destination descriptor (`000CFCE3` tail-calls
`000CFD00`). `clone_field` handles these independent successful copies without
clearing unrelated destination metadata. An adapter must hook actual successful
copy boundaries, not unconditionally mirror every attempted inheritance.

Context tests now cover source retirement after cloning, one shared event
resolved against two actor contexts, missing bound context versus native
operand, owner fallback, literal overrides, native-source copying, event
address reuse, and action-only copying that preserves damage bindings.
Actor-binding tests also pass. Build logs: `event-operands-build.log` and
`event-field-copy-build.log`. No gameplay test is claimed for these unwired
lifecycle methods; the staged player build remains untouched. Full native
consumer wiring and both games' acceptance remain outstanding.

### Live native event-copy evidence

Opt-in operand tracing now observes the successful XML1 action-copy boundary
`000CFCA9` and attack-copy boundary `000CFCE3`, retaining the RTTI-adjusted
source pointer and destination. The regeneration guard installs both hooks.
They make no guest calls and modify no event values or emulated registers.

`event-copy-smoke-v1` executable SHA256
`14be875572e07bafdae6412b99460bed7c87a9b02fdf025d2b8d6786856b2fbf`
logged 852 action and 852 attack copies across 11 destination vtables. None
of the 852 attack copies shared the same source/destination damage-descriptor
address. Clone destination `046D6808` subsequently reached attack dispatch.
This supports attaching reference metadata at the observed successful-copy
boundaries, not only when parsing the original definition.

All four native captures were individually inspected: intro FMV, Cerebro menu,
saved Central Park, and movement/attack pose. The run ended via its expected
90-second watchdog (exit 3); save hashes were unchanged. Muted execution does
not validate audio and the stock Wolverine diagnostic does not prove imported
Bishop/Sunfire hits or powers. Player staging remains unchanged.

Original vtable evidence also identifies action destructor `000E5940`, which
calls `000CEDD0`, and attack destructor `000CFEA0`, which calls `000CFE50`;
both conditionally deallocate through `003414F7`. These were inspected in
source, not instrumented/accepted as complete lifetime coverage. Constructor,
base/subclass destruction and pool-reuse hooks still need full wiring.

### Observed event construction, retirement and reuse

The opt-in lifetime trace now covers action constructor `000CF610`, attack
constructor `000CFBF0`, base destructor `000CEDD0`, and attack destructor
`000CFE50`. Constructor hooks record identity only: the guest vtable and
fields are not initialized at function entry. Regeneration preserves hooks.

`event-lifetime-smoke-v1` executable SHA256
`461b2289aafc54f6825b19f707ba9e51711b793c0c88dbc952bde176d55a19aa`
recorded 1,991 constructor entries, 1,704 field copies, 4,914 retirements,
and two attack applications. Every copied source/destination and both applied
attack events had an observed live constructor. There were 1,232 observed
address reuses after retirement and no repeated begin on a still-live address.
The 3,055 retirements without a tracked constructor prevent claiming exhaustive
lifetime coverage: the base destructor covers more event types than these two
constructor hooks. This is diagnostic evidence, not native binding integration.

Four captures were inspected individually: intro FMV, Cerebro menu, loaded
Central Park, and movement/attack pose. Watchdog exit 3 was expected; private
save hashes were unchanged. Audio was muted and remains unverified. No imported
Bishop/Sunfire combat, XML2 game acceptance, or player staging update is claimed.

### Energy conversion and consumer semantics

The actual XML2 XBE resolves the apparent `00228110` calling-convention anomaly:
`fld [esp+4]` pushes a temporary double, then `fstp [esp]` immediately pops it.
The original ST(0) survives for `003D6A14`. That routine saves the x87 control
word, selects truncation toward zero, executes signed-qword FISTP, and restores
the control word. `000E9EA0` consumes the signed low 16 bits. Local disassembly,
bytes and image hash: `energy-conversion-resolved.json`.

`raven_numeric.c` reproduces this conversion for double inputs without an
undefined out-of-range C cast. It preserves wraparound rather than clamping;
masked invalid conversion has a zero low word. The tests include signed and
unsigned 16/32-bit boundaries, infinities, NaN and signed-64-bit limits, plus
100,000 random-double comparisons against the independent x64 CVTTSD2SI
hardware instruction. This tests the numeric result, not x87 exception flags.

`EventOperands::energy` now consumes the bound context value. `000D0950` returns
the lower cached float (the energy call passes no upper-output pointer), not a
random sample or range average. Its lower validity bound at `0049E4D0` is
`-1.0e29f`; `003D4266` rejects nonfinite numbers. Invalid values become zero
before conversion. Missing bound contexts stay explicitly unresolved, distinct
from native/unbound energy and from a present zero. Owner resolution remains
presence-based. Tests cover owner conversion, fractional truncation, ignoring
the upper endpoint, invalid range and native literal override.

Release numeric and context tests pass (`energy-consumer-build.log`). The native
charging path is not hooked yet, and this change does not validate imported
combat or stage a player executable. Cache population, persistence and native
consumer integration remain outstanding.

### Native energy charging and activation eligibility

The opt-in XML1 adapter is now wired into native parsing, successful field
copies, construction/destruction, activation eligibility and charging.
`guard-raven-energy.py` reapplies these hooks after regeneration. This remains
behind `XML1_TEST_ENERGY_TALENTS` until title/profile loading is integrated.
Ordinary XML1 uses its original values and paths.

The parser hook is after the native powerusage comparison at `000CDC3A` and
preserves the original literal/P-value path. Bound symbols remain host metadata;
no resolved cost is written into the shared guest event. Action copies include
both `000CFCA9` and the independent successful action-only copy at `000CF689`.
The per-invocation charging argument is resolved at `000CDEE1` before the native
`0003F410` call, retaining that routine's modifiers and deduction behavior.

Live getter tracing identified caller `000E1A8F`: `000E1A20` walks the fight
move's events, calls virtual slot +0x20, sums their costs and compares against
actor energy. ESI is the current event and EBX is the actor. The adapter resolves
that return value before summing, while preserving unbound subclass float
returns exactly. This avoids accepting a zero-cost activation and only charging
the real amount afterward. The eligibility comparison at `000E1AC6` is observed
without replacing its native logic.

`work/xml2-integration/native-energy-smoke-v4` used the actual PC XML2 Wolverine
catalog and changed only a private XML1 claw-slash trigger's powerusage from P1
to `%wolv_slash_pwr`. Its existing learned native talent rank was 1, yielding
16. Logs show eligibility at 59, 44.30 and 30.00 energy, followed by deductions;
at 15.80 energy the 16-point activation was rejected. Regeneration allowed one
later activation, then repeated attempts at roughly 8 energy were rejected.
There were four action applications in total; no shared event numeric cost was
rewritten. This is a real consumer test, not acceptance of imported heroes.

All five captures were individually inspected: intro FMV, Cerebro main menu,
Central Park save loading, power animation/energy reduction and depleted-energy
gameplay. Muted execution does not validate audio. Private save hashes were
unchanged, temporary powerstyle files were restored, and the staged Angel player
EXE remains unchanged. Live renderer errors were empty; the vblank helper logged
pipe EOF (win32 109) at deliberate harness termination. Exit 1 is deliberate
termination after the completed flow. Executable SHA256:
`60c162c7cc90a8b26900aa8c02050d3c524dfe598b27693fcecab7da02003d73`.
Numeric, actor-binding and context tests also pass.

Earlier fixture v1 completed the flow but its wrapper cleanup collided with the
inner runner's variable names. Originals were restored from byte-matching player
files; the wrapper now executes the inner runner in a separate namespace. V2
ran the prior executable after a compilation failure and is not evidence for
getter instrumentation. V3 and V4 used successful, verified builds. Retained
results distinguish these attempts rather than presenting all runs as passes.

Remaining work includes profile-owned loading, imported character ranks/UI,
owner/cache semantics in XML2, damage and new handler consumers, persistence,
and both games' complete gameplay acceptance. Next wire the per-dispatch damage
record with actor/event context, preserving native range sampling and modifiers;
do not modify shared damage descriptors or count this isolated energy path as
the complete shared-codebase goal.

### Damage ranges: preserve the two games' different consumers

Original-byte evidence is recorded in
`work/xml2-integration/damage-consumer-trace.json`, with both image hashes and
disassembly. XML2 `000C3330` resolves both cached range endpoints through
`000D0950`, independently validates them, and truncates their low words through
`00228110`. `000624D0` sign-extends these words and converts them to floats.
Its normal path calls `0016E190` with flag 1, selecting RNG `0016DD90`, and
computes lower + unit * (upper - lower). Its alternate path takes the midpoint.
`000EB6BB` stores the result as float at damage-record +4. The context supplied
at `000EB693` is directly actor+35C; this path does not perform the energy
consumer's owner fallback.

XML1 instead calls integer sampler `0005CA80` and stores the low word at
record+8 (`000CF386`). Redirecting the XML2 range into that integer sampler
would silently quantize damage and change its distribution. A shared adapter
must retain fractional XML2 damage through the subsequent modifiers/recipient
path; merely replacing the two native endpoints is not sufficient.

`EventOperands::damage` now resolves the profile-owned context into signed
endpoints, keeping missing bound contexts distinct from zero/native values and
validating each endpoint independently. `raven_xml2_damage_sample` preserves
fractional sampling and the midpoint branch without owning or advancing RNG
state. A native adapter must supply the original title's RNG output and preserve
its call count, including equal-endpoint cases. It does not sort or clamp ranges.
Tests cover fractional output, signed extremes, reversed/equal endpoints,
midpoint without RNG, independent endpoint validation and low-word wraparound.
The numeric and context Release targets build and pass; `git diff --check`
passes. No gameplay validation or player restaging is claimed for these shared
components. Native damage dispatch and downstream fractional-damage transport
remain to be implemented and tested against enemy health and modifiers.

### Native damage copies and measured recipient effects

The opt-in operand diagnostic now records construction (`000CF3DF`),
post-actor modifiers (`000CFE33`), and attack-manager entries (`0005AA10`,
`0005BA90`). `damage-record-smoke-v1` observed five constructed records from
two actors reusing the same native stack address. Only three reached the first
manager entry, and none reached the second. An address-only persistent binding
would alias unrelated attacks; these observations do not establish all paths.
That run's renderer EOF/109 occurred at deliberate harness termination.

Original-byte evidence for the next boundaries is saved in
`work/xml2-integration/damage-recipient-trace.json`. In XML1, `0005C240`
can zero record+8 on rejected hits (`0005C483`), apply a multiplier and truncate
(`0005C539`), and enforce a minimum of one for formerly nonzero damage
(`0005C564`). The caller `0005C590` performs further modifications and copies
the record with `0002B720` at `0005C954`. Its recipient callback at vtable+A8
receives the local copy at stack+38, rather than the original dispatch record.
The diagnostic observes both copies and recipient+240 immediately before and
after that callback (`0005C990`, `0005C9A4`), without guest calls or mutations.

`work/xml2-integration/damage-hit-smoke-v1` measured three callback pairs:

| Callback | Original/copied damage before | Recipient +240 before/after | Copied damage after |
| --- | --- | --- | --- |
| `00046270` | 6 / 6 | 60 / 53 | 6 |
| `00046270` | 0 / 0 | 53 / 53 | 0 |
| `00092220` | 6 / 6 | 15 / 8 | 7 |

The character callback `00046270` constructs another damage context through
`00044FB0`, runs modifiers, and calls `00092220` at `000463EF`. Thus even the
unchanged outer copy can conceal downstream changes. `00092220` makes another
copy through `0002B720` at entry. The second recipient's identity was not
resolved; the 15-to-8 observation is not specifically an enemy-health claim.
The remaining adapter must propagate fractional XML2 values through these
copy/context boundaries, rejection branches and modifiers, with scoped lifetime;
patching the initial range or subtracting a fractional remainder afterward
would skip meaningful native behavior. No such workaround is implemented.

The Release build passed. All six captures were inspected individually in
order: empty team selection, selected Angel with the roster picker open,
NYC spawn, movement/jump with wings visible, soldier contact with health loss,
and subsequent movement. World, HUD and menu geometry were present. This is an
XML1-native diagnostic fixture, not proof that imported XML2 powers work.
Intro media was bypassed by the private fixture; audio was muted. Saves were
unchanged, temporary assets restored, and the renderer error log was empty.
Exit 1 is deliberate termination after the completed flow. Test EXE SHA256:
`ceaedcd6731f93788c2f31233eba8c19ae6fa188e7c709d046752cd0daf439bd`.
The staged Angel EXE retains its documented hash and was not replaced.

### Scoped fractional-damage transport

Further original-byte tracing reaches XML1's final subtraction at `0009264A`:
`00092220` loads its local record's signed damage word, subtracts it from the
recipient's float at +240, and calls vtable+19C with a float result. The measured
character vtable `003C94B4` maps that slot to `0002E5B0`. That setter caps against
the signed maximum-health word at +246 but otherwise stores the supplied float
without integer conversion. The health field therefore already accommodates a
fraction; the record/modifier path, not the final storage type, loses precision.
`00027330` is a conditional notification callback, not the health subtraction.
These functions and verified vtable entries are included in the original-byte
evidence JSON. Do not bypass the health setter or its native death processing.

`raven_damage_records.h/.cpp` now supplies per-execution-context scoped storage
for an event/actor identity and fractional damage amount. Copies are independent;
nested scopes can shadow reused addresses and restore their outer bindings on
return. Copying an unbound XML1 record masks any outer XML2 value at the same
destination. Bound zero (a rejected hit) remains distinct from unbound/native.
Out-of-order retirement and mutation outside a live scope fail explicitly.
The class does not inspect guest memory, own RNG or alter numeric game behavior.

The Release `raven-damage-records-test` passes 10,000 recycled/nested attack
lifetimes, copy independence, fractional values, unbound masking, explicit zero,
self-copy and invalid lifetime cases. Existing numeric and context tests also
pass. This is a transport component, not a completed native adapter: verified
entry/exit and copy/modifier hooks still need wiring. Its contract covers only
synchronous records; any queued/persistent path needs separately traced ownership.
No game run, player restaging, or imported-hero combat acceptance is claimed
for this component-only change.

### Native scope/copy wiring (audit mode)

`raven_native_damage.cpp` connects the scoped store to XML1 behind the explicit
private `XML1_TEST_DAMAGE_TRANSPORT=1` switch. It seeds metadata from the native
sample only for auditing; it does not substitute XML2 operands or write guest
damage. Selected modifiers are now mirrored as described below. Each execution
thread owns its state.
`guard-raven-damage.py` installs the hooks and is part of code regeneration.

Verified boundaries are CCEAtk entry `000CFDC0` / exit `000CFE3F` (84 hex bytes
of locals/saved registers), per-target entry `0005C590` / common exit `0005CA09`
(120 hex bytes), construction at `000CF3DF`, record initializer `0002C8C0`,
and copy `0002B720`. Both site and restored entry-stack address must match on
retirement. Ordinary copies outside the established root are not tracked;
that limitation must be resolved for other dispatch origins and queued damage.

The first private run (`damage-scope-smoke-v1`) retired all ten attack scopes
at depth zero and observed eleven bound copies. It also exposed a distinct
copy path in the character context: `00044FB0` calls `0018DD00`, which performs
a raw 100-byte copy, at `00045031`. The post-copy boundary `0004503C` now clones
metadata from EBP to ESI+C. The generic bulk-copy function is left untouched.
This preserves damage context without assigning damage semantics to unrelated
memory copies. Original-byte evidence includes both functions.

The first run's six captures were inspected sequentially through team selection,
NYC movement/jump, soldier contact and visible health loss; renderer errors were
empty. Saves were unchanged and the temporary assets were restored. It remains
an XML1-native diagnostic fixture, with intro bypassed and audio muted. Further
modifier integration and imported XML2 combat are not established by this audit.

After adding the raw-copy caller, `damage-scope-smoke-v2` recorded 28 bound
copies and ten roots, each retiring with depth zero and no transport errors.
The character path now propagates identities through FB18 -> FA30 -> F988 ->
F8E4 (low address suffixes), including attacks by distinct source actors. The
captured values are expressly labelled `seed`: a seed of 4 can accompany native
modified damage of 6 and actual health loss of 7. They are origin/lifetime
evidence, not final damage validation. Native modifier operations still need
to update the transported fractional values before they can drive gameplay.

The successful v2 Release EXE hash is
`cb0e19f5aef052af383e62c4259c94ca5ba8688b3751cfb48c766847180be0f0`.
All six captures were inspected individually in order through team selection,
NYC spawn, jump/movement, approaching soldiers and combat with visible damage
numbers and health loss. The renderer error log was empty, private userdata
unchanged, overlays restored, and exit 1 followed deliberate harness termination.
The game was hidden/muted and intro was bypassed; this run does not validate
audio or FMVs. Reapplying the generation guard changed none of its four files.
The staged Angel executable and assets were not replaced.

### Native modifier audit

The attack-manager callback adds its integer result at `0005AAAC`; this is
now mirrored using the actual callback operand. The audit also mirrors traced
scale, rejection and minimum-one operations at `0005C539`, `0005C483`,
`0005C564`, `0005C66F`, `0005C761` and `0005C7DE`. Branch selection still uses
native integer damage. This does not yet implement fractional XML2 combat.
Checkpoints report discrepancies rather than concealing missing operations
with a ratio derived from native before/after integers.

`damage-modifier-smoke-v1` (Release SHA256
`4e3b6aa6cc4d188834301d6ebfc9dc6c24fa19d86680601ea2738c6ac1941f09`)
exercised nine callback additions, six `5C539` multiplications and one `5C483`
rejection. Twelve root scopes retired without transport errors. Other added
branches are not established by this run. The native callback added 2 to a
sample of 4: native and transported values then both remained 6 through
`5C990`. After character modifier function `45260`, native became 7 while
transported remained 6. Another hit changed native 12 to 16 in that function.
This identifies the next missing consumer instead of proving end-to-end parity.

All six native captures were inspected individually, in order: team selection,
Angel on the platform, NYC spawn, winged jump, soldier contact with visible
damage, and depleted health with the health warning. This establishes received
combat damage, not successful outgoing Angel damage. Renderer errors were
empty, private userdata unchanged and the temporary overlay restored. Exit 1
was deliberate harness termination after the flow completed. Audio was muted
and intro bypassed; neither was tested. Player staging was not replaced.

Original-byte inspection of `45260..45E15` (903 instructions) shows a separate
integer working accumulator at character context `+94`, while the hit record
at `+C` remains live for callbacks. `454CB` multiplies damage by the selected
x87 factor before truncation into the accumulator. Event `0x12` callbacks
provide subtraction and scale values; `45517..4554E` subtracts, clamps,
truncates, scales and truncates again. `45609` finally commits the accumulator
to the hit record. Read-only context probes expose this ordering without
prematurely overwriting the transported record observed by callbacks.

`damage-context-smoke-v1` compiled and completed with Release hash
`649c5560c479b53e4985699ef7901b55014a33c63556b833a53d61077fd16e5f`.
The new probes narrowed the discrepancy further: by `454CB`, native damage
was already 9 versus transported 7, or 16 versus 12. At `45517` and `455DA`
the observed scale was 1, subtraction 0, and working value unchanged. Thus
these accumulator adjustments did not cause the discrepancy in this fixture.
The preceding path calls `5CCA0` with equal native damage endpoints at `45436`,
then invokes attacker callback `29FD0` at `4544B`; these are the next boundaries
to distinguish. Static inspection of `5CCA0` shows separate truncated bonuses
from event `0x10` adjustments and actor stats, added to the original sample,
with a 32000 upper cap. Their execution and exact contribution are not yet
established by these context probes. No inferred multiplier has been applied.

All six captures were inspected sequentially: Blackbird background/platform,
Angel selection, NYC world/HUD, movement with extended wings, soldier contact
with reduced health, then a red hit reaction and visible 9 damage. The renderer
error log was empty, private userdata unchanged, and overlays restored after
deliberate termination. As before, audio was muted and intro bypassed. The
guard remains idempotent across its five generated files; player EXE hash
still matches the accepted Angel staging. This is diagnostic progress toward
the adapter, not imported XML2 combat acceptance or completion of TODO #4.

### Attacker bonuses differ between titles

The read-only `damage-bonus-smoke-v1` probes distinguish `5CCA0` from the
following `29FD0` callback. For an incoming sample of 7, the recalculation
observed scale `1.10000002`, flat adjustment 0, and actor stat 3. Its two
bonuses are independently truncated: `trunc(7*scale-7+0)=0` and
`trunc((1+3*float(0.1))*7-7)=2`. The `5CE19` result was 9, the caller at
`4544B` saw 9, and the post-callback checkpoint `45457` still saw 9. This
establishes the cause of this discrepancy; it is not an arbitrary multiplier
to apply to imported powers. Original instructions for `5CCA0..5CE27` are
saved in the recipient trace. Other observed samples included 6 -> 7 with
stat 3 and 5 -> 7 with stat 4.

The private Release EXE hash was
`05884f470dc50007322d4e16cfc3417030b13a7c085b6e87c36b4ce47a9ca88e`.
Six captures were individually inspected through Blackbird selection, NYC
spawn, winged movement, soldier contact and target selection with the
Anti-Mutant Troop health bar. World, character and HUD content were present;
Angel's health decreased in the final capture. The empty renderer error log,
unchanged userdata and restored overlay were checked. Muted audio and bypassed
intro remain unverified, and this does not validate imported XML2 combat.

The corresponding XML2 recalculation `62530..626EC` differs materially.
`xml2-damage-bonus-trace.json` records the original image hash, instructions
and constants. The record-type-1 branch obtains a factor from `C7140` or
`C7170`, rounds only the bonus upward, then adds the fractional sample back
(`62643..6265D`). Later event `0x39` callbacks supply scale and flat values;
`6269C..626E0` rounds their bonus upward, converts through `228110`, adds its
signed low dword to the post-stat float and caps at 1,000,000. XML1 instead
uses truncated bonuses and a 32,000 cap. Record type, actor dependencies,
callback IDs and ordering must remain title-specific.

Upward rounding is established by `3D49B1` loading control word `1B3F` from
`571BA0` through `3DA17F`, whose original instructions load the x87 control
word, then calling `3DA1F9`'s `FRNDINT`. The recovered C uses host `rint` while
only updating a guest control-word variable; that translation cannot serve as
the numeric oracle without respecting the guest rounding mode.

`raven_xml2_damage_stat_bonus` and `raven_xml2_damage_callback_bonus` now
implement these two numeric stages without callbacks, RNG, or guest writes.
The Release numeric test passes fractional-base preservation, separate upward
rounding, negative adjustments, upper cap, low-dword wrap and invalid conversion
cases, plus the existing 100,000 energy hardware comparisons. This is shared
numeric support; native profile selection, stat/callback bindings and the rest
of the fractional damage path are still incomplete. Player staging is unchanged.

### XML2 damage-stat selection and factors

Original-byte tracing now includes `C7140..C716D`, `C7170..C719D`, and
the complete `C6F80..C7090` (272 bytes / 86 instructions). `62530` selects
stat index 3 when record flags have any `0xF00` bits set, otherwise index 0.
Within the record-type-1 path, `C7140` multiplies the effective signed stat
by the float at `4923F0` (`0.05000000074505806`) and adds 1; `C7170` uses
`491EAC` (`0.009999999776482582`). Both sign-extend the low word of the
`C6F80` result and return the factor without an intervening float store.
Neither XML1's unsigned byte nor a uniform ten-percent coefficient matches.

`C6F80` is more than a base-stat reader: it sums byte contributions, consults
actor cache `actor+470`, refreshes via `14AAE0` when its dirty bit is set,
then applies per-stat and shared additive/multiplicative entries. The final
float is truncated before the factor wrapper's signed-low-word read. Reading
an XML1 base-stat byte at a superficially similar offset would bypass these
dependencies. Native cache refresh and title-specific layout remain to bind.

The shared numeric layer now exposes `raven_xml2_damage_stat_index` and
`raven_xml2_damage_stat_factor` for an already evaluated signed stat. Release
tests distinguish both masks/coefficients, negative and signed-minimum stats,
factor precision and composition with fractional damage bonuses. Existing
numeric and energy hardware comparisons pass. These helpers do not claim
to refresh caches, choose the record-type branch or implement live imported
combat. No game run or player restaging was performed for this component change.

### Effective stats and cache rebuild dependencies

The original-byte record now includes `1489B0..148BF0` (136 instructions)
and `14AAE0..14ADA3` (274 instructions). The initializer sets cache per-stat
additions at +10..+1C to zero, scales at +20..+2C to one, shared addition
+30 to zero and shared scale +34 to one. Refresh validates its actor, invokes
that initializer, traverses actor collections rooted at +21C/+220 and nested
modifier collections, tests eligibility, and calls `148D60` at `14AC97` to
apply eligible entries. At `14AD87` it clears cache +10A bit zero; early
actor-validation exits bypass that clear. It also invokes `32EB0` afterward.
Therefore a cache read must not unconditionally clear dirty state, substitute
neutral defaults after a failed refresh, or skip the application traversal.
The complete eligibility/application implementation is still being traced.

`raven_xml2_effective_stat` implements the consumer arithmetic from `C6F80`
for explicitly supplied post-refresh terms: sum three unsigned byte sources,
add shared and per-stat offsets in native order, multiply shared then per-stat
scales, store float, truncate and interpret the signed low word. Release tests
cover a base sum above 255, stacked modifiers, negative results, word wrap,
zero/invalid scales, and a float-store rounding boundary that changes the
subsequent integer result. The existing damage and energy tests still pass.
This does not yet provide a live cache loader or modifier-application adapter;
there was no gameplay run or player restaging for this component change.

### Applying evaluated stat modifiers

Original instructions for the full `148D60..14A9A6` (2,490 instructions)
and decoded jump-table entries are saved in `xml2-damage-bonus-trace.json`.
Types 2..5 dispatch to `148E53`, `148F04`, `148FB5`, `149066`, updating
individual stat cache additions +10..+1C or scales +20..+2C. Type 6 dispatches
to `149117`, updating shared +30/+34. In these cases, virtual +38 selects
mode 0 (addition) or 1 (multiplication); other modes leave the cache unchanged.
The branch evaluates the value through virtual +30 using actor/context inputs,
operates directly on that floating return value, and rounds at each cache write.
The common earlier +34 evaluation is not a substitute for these branch inputs.

The shared `raven_xml2_stat_cache` now resets and applies these evaluated terms.
It explicitly returns unhandled for other types/modes; callers must retain the
remaining native dispatcher, not silently discard other modifiers. Release tests
cover every stat slot, shared modifiers, composition into effective stats,
unknown cases without mutation, rebuild after modifier removal, per-write
rounding and avoiding premature narrowing of the evaluated operand. All numeric
tests pass. Eligibility, virtual evaluations, object lifetimes and live native
cache binding remain unfinished; this component test is not gameplay acceptance.

### Affecter reference binding

The original attribute table at `5459A8..5459CF` names stat IDs 2..6 as
`strength`, `speed`, `body`, `mind`, and `traits`. These names and the
CAffecter vtable are now included in the original-byte trace. Vtable `4A6A6C`
maps +30 to `143940`, +34 to `1446C0`, and +38 to `144BC0` (the mode byte
at object +11). `143940` forwards the inherited floating value and an output
pointer to +34. `1446C0` evaluates the stored value only when the inherited
value compares equal to zero; nonzero and unordered values pass through.
Actor validation selects its stats context at +35C or a null context.
`F6CD0` handles a missing-context reference as zero and routes live references
through the `D1350` provider, whose +4 slot is the already-traced `D0950`.
Literal values take a separate path and must not be parsed as references.

`TalentBindings::resolve_affecter_reference` now connects this reference branch
to the existing profile-owned context resolution. It preserves both outputs,
the inherited-value bypass, the missing-actor zero case, and live-cache misses
as distinct results. The adapter supplies the context identity after native
actor validation; this method does not infer it from guest addresses.
Release context tests pass actor resolution, signed-zero evaluation, missing
actor, missing live entry, and nonzero/NaN bypass without
touching an unrelated registry. Native lifecycle attachment, literal parsing,
eligibility and full cache binding remain to be integrated. No gameplay or
player restaging is claimed for this binding-component change.

A follow-up audit corrected an erroneous reuse of energy's owner fallback in
the initial binding. `D0A70` keys only the supplied stats object's signed +28E
context and operand ID; owner fallback is performed by energy caller `E9EA0`,
not this provider. The affecter API now has no owner parameter. `D0950` also
validates lower and upper values independently against the native lower bound
and finite-value check; the binding now does so too, after reference resolution.
New Release tests cover populated neighboring contexts without cross-actor
fallback, the exact lower boundary, and independently rejected endpoints.
The previous owner-fallback test was incorrect and has been replaced. Native
missing-entry results are zero; the shared component intentionally retains a
missing-entry diagnostic until publication/lifecycle wiring is validated.

### XML2 affecter declaration decoding

The actual field parser is `143B40` (505 bytes / 185 instructions), not the
clone/comparison methods `1441E0` and `143D40`. Original XBE disassembly and
verified extents for it, `F6D50`, `D0B40`, and reset `144C20` are recorded in
`work/xml2-integration/affecter-declaration-trace.json`.

`read_xml2_affecter` now decodes original ordered XMLB attributes without
renaming resources or rewriting declarations. Reset initializes mode/sharing
and both literal endpoints to zero. The field parser selects mode 1 for
`scale`, 2 for `max`, and 3 for `min`, case-insensitively. Other strings leave
the prior mode unchanged: a repeated `affect_type="add"` after `scale` does
not reset it. Sharing selects owner=1, shared=2, otherwise 0.

Nine fields are forwarded to virtual +10: scope_damage, scope_attack,
scope_node, scope_talent, scope_race, scope_character, scope_powers,
scope_non_powers, and damageType. The declaration reader retains these in
order, including duplicates. Unknown fields and the entire source subtree
remain available; none are silently interpreted as unrestricted modifiers.
Attribute names and level operands remain unresolved until the selected
runtime consumes them. This is declaration decoding, not a completed
eligibility or modifier-application adapter.

`F6D50` delegates its value string to provider virtual +18 (`D0B40`). Leading
percent references become IDs; literals go through the separate numeric
provider. Missing references natively produce zero endpoints. The existing
shared binding intentionally diagnoses unresolved references; no literal
parser substitution or live guest patch was made in this step.

Release `raven-talent-data-test` and `raven-talent-context-test` passed;
build log: `work/xml2-integration/affecter-declaration-build.log`. Tests cover
ordered duplicate modes/scopes, case folding, max/min, sharing resets,
retained unhandled fields/children and reset defaults. The player executable
was not rebuilt or replaced. Live application, scoped eligibility and gameplay
acceptance remain open.

### Affecter level binding and decimal literals

The level declaration now reaches `TalentBindings::resolve_affecter_level`.
It preserves inherited nonzero/NaN bypass, evaluates leading-percent operands
against the actor's own context, and evaluates literals without requiring an
actor or touching the context registry. Named constants require the explicitly
selected title table; a missing table remains an import diagnostic.

The original provider virtual +8 is `D3BF0` (380 bytes, 133 instructions),
confirmed from `49E9D8`. Its format strings at `493D50`, `490F1C`, `490EF4`
are respectively a space, `%f %f`, and `%f`. Leading whitespace/A0 is skipped;
numeric dispatch accepts digits, minus and dot, but not plus. Any ASCII space
after that trim selects the two-scan format. Thus `2\t7` is scalar while `2 `
has a zero upper endpoint. Numeric endpoints are independently sanitized.
The locale-independent decimal implementation preserves these distinctions,
plus scalar/range, exponent overflow, and case-insensitive named constants.
Exotic CRT numeric forms such as hexadecimal floats are not yet acceptance
validated; this is not a claim of complete scanf emulation.

The source powerstyles contain eight Bishop affecters (shield/fury references,
0.5, 1 and 0) and six Sunfire affecters (flamefury/ionshield references, default,
0 and 2). Their level syntax falls within the implemented paths. This is source
inspection, not combat acceptance. Release data/context tests pass, including
literal evaluation without an actor, named-table selection, and inherited
bypass without a table. Log: `work/xml2-integration/affecter-level-build.log`.
Native modifier lifecycle, scope eligibility and dispatch are still required;
the player executable remains unchanged.

### Native attribute identities and imported-power dispatch audit

Declaration decoding now resolves attribute names through the 95-entry XML2
name/ID table at `545998` (terminator `545C90`). The provider constructed by
`158240` uses vtable `4A7DB4`; its +38 entry is `1438E0`, which calls
`16DEA0` and compares names through `3D66B7`. This confirms case folding and
the native alias `damage` / `atk_damage` = 57. The small checked-in name/ID
include contains no executable code or game assets. Unknown names retain an
explicit diagnostic, distinct from native `none` = 0; absent attribute defaults
to zero. XML2 IDs must not index the XML1 attribute table.

All fourteen Bishop/Sunfire source affecters now have verified numeric IDs.
`work/xml2-integration/affecter-dispatch-audit.json` records each declaration
and the original `148D60` jump-table destination. Eight reach the default
`14A99C` branch in this cache refresh dispatcher: damage/atk_damage,
def_absorb_damage, def_damage_scope, atk_attack_rating, power_cost and
powerup_scope. Their behavior cannot be implemented by treating them as stat
cache updates. Other consumers must be traced and attached.

The remaining branches include attack_rating at `149A15`, defense_rating at
`149BAE`, resist_physical at `14A4FA`, nullify at `14A1E2`, and def_damage at
`14A6B1`. Rating updates have a second cache contribution conditional on a
powerup-owner virtual +104 predicate; blindly applying one unconditional
number to both cache locations would lose native behavior. That predicate and
runtime lifecycle remain unresolved, so no speculative rating patch was made.

Release data/context tests pass, including native IDs, alias/case folding,
unknown-vs-none distinction and declaration resolution. Build log:
`work/xml2-integration/affecter-attribute-build.log`. No player build change or
combat acceptance is claimed.

### Damage affecter query aggregation

`62530` queries `15ED50` with attribute 0x39 = 57 (`damage` / `atk_damage`).
This is an attribute query, not a script event number; earlier event-39 wording
in the numeric header was corrected. `15ED50` initializes the destination to
one for scale, zero otherwise, checks actor collection +21C/+220 and the
attribute presence bitmap at +210, then delegates to `15E8C0`.

`15E8C0` walks the powerup/affecter collections, matches exact mode at
`15EA82` and attribute ID at `15EAB1`, applies eligibility checks, evaluates
virtual +34 and aggregates its two endpoints. Mode 0 adds, 1 multiplies,
2 takes max and 3 min. All non-scale modes initialize to zero, including
max/min. Each write rounds to float; the lower evaluated return remains x87
precision until that write while the upper arrived through a float local.
Native unordered comparisons select the incoming endpoint, so C fmin/fmax
would not preserve NaN behavior. The helper now reproduces these numeric
operations without guessing eligibility.

`15ED50` consumes one `16E170(1)` random result only when upper > lower.
Equal, reversed and unordered ranges return lower without consuming RNG.
The sampling helper and separate needs-random predicate retain caller ownership
of the title's RNG. Original function bytes/instruction counts are verified in
`work/xml2-integration/affecter-query-trace.json`.

Release numeric tests passed all four modes, zero initialization, independent
endpoints, NaN comparisons, per-write float rounding and sampling gates. Composed
with the existing damage helper, Bishop's literal 0.5 multiplier transforms
sample 7 to 4 (ceil bonus), and Sunfire's literal 2 transforms it to 14.
These are component tests, not claims that the powers now work in gameplay.
Build log: `work/xml2-integration/affecter-range-build.log`.

Remaining on this path: interpret powerup eligibility virtuals and shared/owner
filtering, scope predicate +40, publication/retirement and native attachment.
No player executable replacement or live combat validation in this step.

### Damage scopes and sharing filters

The scope object is CPowerupScope (vtable `4A9BAC`), allocated through provider
+28 (`15A750`). Affecter field forwarding `143EF0` calls its +0C parser
`15A1A0`. Both scope_damage and damageType call `4A2D0` and OR into scope +0C;
its 17-name table is at `53DC28`. Unknown names natively default to physical
0x80. Repeated declarations therefore combine masks, not replace them.

The damage predicate `159F10` accepts zero masks or any overlap. `159F50`
passes query context +10 to this predicate and combines it with attack-index,
node, character, race, power/non-power and talent predicates. The shared
`xml2_damage_scope_matches` implements the damage-only portion and returns an
unresolved optional for declarations with other scopes. It must not be used
as proof of full powerup eligibility.

Affecter `143910` separately implements sharing: when its first boolean is
false every filter accepts; when true, owner=1 requires the second boolean,
shared=2 requires its inverse, and default=0 accepts. The helper requires
those native context booleans explicitly; their upstream derivation is not
inferred from names or actor pointers.

Release data/context tests pass fire-versus-energy separation, combined
repeated masks, elemental any-bit matching, native unknown-name fallback,
unsupported scope diagnostics and all owner/shared boolean combinations.
Evidence: `work/xml2-integration/affecter-scope-trace.json` (original bytes,
verified instruction counts, name/mask table), build log
`work/xml2-integration/affecter-scope-build.log`. Native attachment and combat
acceptance are still open; staged executable unchanged.

### Composed affecter query

`TalentBindings::query_damage_affecters` now joins declaration IDs/modes,
damage scopes, sharing filters, live-context/literal level resolution and
ordered endpoint aggregation. `AffecterQueryEntry` requires explicit native
eligibility, context, inherited value and sharing booleans. It does not infer
active powers from roster membership or apply every powerstyle declaration.
The native adapter must publish actual live instances in traversal order.

Wrong mode/type, ineligible entries and nonmatching scopes do not evaluate
operands. Unsupported scopes, unconsumed declaration fields/children and
missing live publication do not expose a partially accumulated result. Unknown
attribute names remain errors. The query consumes no RNG; sampling remains a
separate step after the entire query succeeds. This implementation covers the
traced damage-scope subset, not all scope kinds or native collection lifetime.

New Release target `raven-affecter-query-test` passed the actual eight Bishop
and six Sunfire powerstyle declarations, using their character talent resources
at two independently populated rank contexts (28 queries). It also checks
multipliers composed in order, fire/energy exclusion, sharing, wrong-mode
short-circuiting, unresolved scope handling, and a missing actor publication
after an already accumulated literal. Existing context regression passed.
Build log: `work/xml2-integration/affecter-query-build.log`.

The fixture explicitly marks each tested declaration eligible to validate the
composed data path. This is not evidence of activation, duration, retirement,
combat, or save/load correctness. Native attachment remains required. No
player executable was changed.

### Attached powerup context view

The XML2 query's `15E100` selects the actor used to evaluate a modifier, rather
than always using the query recipient. CAttachedPowerup vtable `4A6AF4` exposes
+48=`146F00` (eligibility), +5C=`146EF0` (handle at +18),
+60=`146F30` (handle at +1C), and +6C=`146D20` (inherited float at +3C).
Eligibility accepts a primary handle equal to the current sentinel at global
`5A9F74`; otherwise it requires a nonzero valid primary handle. `15E100` then
uses the first nonzero valid handle, primary before secondary, resolving its
actor with `14F940`. A valid non-actor selects zero and does not fall through.
Without a valid handle it keeps the queried actor. These are not equivalent
to the energy caller's context-cache owner fallback.

`raven_xml2_attached_powerup_context` provides a bounded read-only view of that
specific native layout. It requires caller-provided live handle validity and
actor-resolution callbacks, rejects different vtables/address overflow, and
leaves output untouched on invalid/unreadable/ineligible state. It caches no
handles. The current source of the sentinel is also supplied by the caller.

Release `raven-powerup-view-test` passed primary precedence, valid non-actor
suppression of fallback, secondary selection, handle invalidation, recipient
fallback, sentinel eligibility, and layout/overflow rejection. Original bytes
and instruction counts for seven traced functions are retained in
`work/xml2-integration/powerup-context-trace.json`; build log:
`work/xml2-integration/powerup-view-build.log`.

This view does not claim to implement expiration or collection membership.
The native handle-manager callbacks and list traversal still need attachment;
XML1 requires a separately traced adapter, not reuse of these XML2 offsets.
No player restaging or gameplay acceptance occurred in this step.

### Native entity handle manager lookup

`73CD0` and `73CB0` call the manager returned by `D7190` (singleton
`5F92D0`). Constructor `D5920` installs vtable `49EF3C`; +14 is `D5DB0`
(validity), +0C is `D5E10` (pointer lookup). `D5DB0` advances this by four
and enters `D5DC0`. Slot selection uses the live mask at manager +C3C.
The handle must exactly equal the generation-tagged entry at +83C + slot*4,
and its occupied bit in +818 must be set. There are 256 slots. Pointer lookup
then reads manager +4 + slot*4; it explicitly rejects handle zero.

`raven_xml2_entity_handle` now implements bounded, read-only lookup with
explicit missing/invalid/found outcomes. Generation mismatch and unoccupied
slots are missing; unreadable/wrong-layout state is invalid. A found null
pointer remains distinguishable from invalid handle state. It caches nothing
and changes output only on successful lookup. Actor RTTI validation remains
separate, as required by native `14F940`.

Release powerup-view tests passed all 256 slot positions, stale-generation
rejection after slot reuse, occupancy clearing, valid null entity, out-of-range
slot mask, null handle and unreadable/overflow boundaries. Existing source
selection and sentinel tests also pass. Evidence:
`work/xml2-integration/entity-handle-trace.json`; build log:
`work/xml2-integration/entity-handle-build.log`.

Still required: actor type resolution, native adapter callback wiring, attached
powerup collection traversal and expiration/retirement validation. The player
executable is unchanged; these fixtures do not establish gameplay acceptance.

### Actor cast and composed guest-memory powerup path

`raven_xml2_entity_actor` now implements the read-only actor cast used by
`14F940`. Entity virtual slot zero supplies class info; original CActor getter
`30DD0` is `mov eax,58BDC8; ret`. The reader recognizes that exact instruction
shape with a per-class immediate and reads the bitmap at class-info +14 using
(current actor-type global value +24) as the bit index. It never executes guest
code, treats another accessor shape as unsupported, and checks address overflow.

The class bitmap is tested before actor flag +258 bit 0. A flag alone cannot
make a non-actor pass. With the flag clear, native repeats the class check;
the reader does too. The actor-type value must be read from XML2 `5AA7A8` by
the caller, not fixed to the fixture's value or inferred from roster entries.

`raven_xml2_powerup_guest_context` composes bounded entity-handle lookup,
actor casting and attached-powerup selection without synthetic validity/type
callbacks. It takes the runtime manager, actor-type and sentinel values
explicitly. This is a guest-state reader, not an invocation of the guest
manager constructor and not a live powerup-list traversal.

Release powerup-view tests pass the full composed memory path, correct type
with/without flag, wrong type despite flag, unsupported getter, valid non-actor
selection and stale handle rejection. All previous 256-slot/generation and
source precedence tests pass. Build log:
`work/xml2-integration/powerup-actor-build.log`; original accessor evidence is
added to `work/xml2-integration/powerup-context-trace.json`.

Native collection membership, expiration, actor-to-talent-context publication,
XML1's separately traced layout and combat attachment remain incomplete.
The staged player executable was not changed.

### Native powerup to talent-context query bridge

`1446C0` uses actor flag +258 first, then a class bitmap keyed by global
`58BDCC`, and reads the accepted actor's stats pointer at +35C. `D0A70` uses
the signed word at stats +28E as context identity. This differs from source
actor resolution `14F940`, which uses `5AA7A8` and tests its bitmap first.
The adapter therefore takes both type IDs independently; they are not assumed
equal. Missing actor/stats, wrong type, unreadable state and signed context
values are distinguished.

`raven_xml2_affecter_context` implements that bounded context read.
`read_xml2_powerup_query_entry` joins native handle/type/source resolution,
inherited value and context selection into the existing shared query input.
The caller still supplies established live membership and native sharing
booleans; a false membership input skips guest reads entirely. Unsupported
state raises an explicit diagnostic rather than publishing a partial entry.

The original-resource query test now obtains all 28 Bishop/Sunfire rank-context
entries through the actual guest-layout reader chain, with distinct source and
recipient actors, rather than manually filling context IDs. All 14 declarations
pass. The powerup-view test also passes signed negative context, separate type
IDs/flag order, null stats and unreadable stats. Build/evidence log:
`work/xml2-integration/powerup-context-query-build.log`.

The guest-memory fixtures establish the composed data path only. Native active
list traversal, membership/expiration, sharing-boolean derivation, publication
and XML1's corresponding adapter still require integration and gameplay
verification. The staged executable is unchanged.

### Attached powerup list traversal

The actor query's +21C/+220 pair names a CAttachedPowerup pool handle. Its
pool vtable is `4A6BE8`: +0=`147180` adjusts this by four and validates through
`147190`; +8=`1471E0` resolves an inline 0x68-byte object. This pool has 128
slots, a mask at pool +3838, generation entries at +3638 and occupied bits at
+3624. It must not use the separate 256-slot entity-manager layout.

`raven_xml2_attached_powerup_node` validates the handle and object layout before
returning address, next pair (+4/+8 via `146CA0`) and definition pair (+20/+24
via `146CF0`). `read_xml2_actor_powerup_list` starts at the actor pair, preserves
traversal order and terminates on a null pool or native-invalid handle. Cycles
or unreadable/unsupported state raise a diagnostic without returning a partial
list. No pointer/handle cache survives between queries.

Release query tests pass two-node traversal, definition-pair preservation,
occupancy retirement, stale-generation links, empty lists, cycle rejection and
all 128 inline slots. The 14-original-declaration/28-context query test and
entity/powerup view regressions also pass. A test-variable naming collision
was corrected before the final passing build. Evidence:
`work/xml2-integration/powerup-list-trace.json` and
`work/xml2-integration/powerup-list-build.log`.

The traversal establishes list membership only. Definition-pool resolution,
affecter-list traversal, expiration/removal timing and live combat attachment
remain open. It does not treat every listed node as eligible or automatically
associate a powerstyle declaration with a native object. Player build unchanged.

### Native definition and affecter traversal

The definition pool uses vtable `4A7D6C`, validated by `157F70/157F80` and
resolved by `157FD0`: 256 inline objects of size 0x88, mask +9058,
generations +8C58, occupancy +8C34. Virtual +78 must resolve to the traced
`147C20` getter before reading the affecter head at definition +C/+10.
Unsupported definition accessors are diagnosed, not presumed identical.

The affecter pool uses `4A6A58`, validation `144880/144890` and resolution
`1448E0`: 384 objects of size 0x24, mask +4278, generations +3C78,
occupancy +3C44. The reader checks CAffecter layout, retains next and scope
handle/pool pairs, attribute/mode/sharing and the CValue reference flag.
Literal endpoints remain floats. Reference IDs remain native guest IDs;
they must not be used as the shared TalentBindings catalog's IDs.

`read_xml2_definition_affecters` now follows the validated definition head
and affecter links, preserving order and diagnosing cycles. A missing
parent definition is distinct from an empty affecter list. Tests pass every
256-definition/384-affecter slot, stale generations, scalar/range decoding,
native reference IDs and a two-affecter definition chain. The original
14-declaration/28-context regression also passes. Evidence:
`work/xml2-integration/powerup-definition-trace.json` and
`work/xml2-integration/powerup-definition-build.log`.

Still required: native symbol-ID association, native scope objects, publication
and full activation/expiration/combat attachment. No staged executable changes
or gameplay acceptance in this step.

### Native talent symbol identity bridge

`raven_xml2_talent_value_id` reads the CTalentValues name tree at provider +4
(root +8), using `D0BF0`'s 32-byte stride, left/right +10/+14 and 20-byte
case-insensitive key at +18. `D0B40` reads the native word ID at provider
+2A80 + index*2. `D1060` limits names to 19 bytes, registration count to 300,
and IDs to nonzero values below 0x8000. The bounded reader checks provider
vtable `49E410`, node bounds, cycles, terminated ASCII names and ID validity.
It never substitutes a shared catalog ID for a guest ID.

`TalentBindings::native_xml2_value_id` first verifies catalog ownership of the
operand, then resolves its symbol in the current guest registry. Missing
registration remains an optional miss; unreadable/unsupported state raises a
diagnostic. Guest IDs are not cached, so reload/re-registration is observed.

Release original-resource tests pass all 14 affecters/28 rank contexts plus
native-ID association for their reference operands with deliberately different
shared/native IDs, subsequent native ID changes, case-folded lookup, missing
symbols, cyclic tree rejection, final slot 299, maximum ID 0x7FFF and invalid
node/tag bounds. Evidence: `work/xml2-integration/native-value-id-trace.json`;
build log: `work/xml2-integration/native-value-id-build.log`.

This establishes symbol-to-native-ID lookup, not native live-value publication
or full runtime reference evaluation. The native scope object bridge,
activation/expiration attachment and combat acceptance remain unfinished.
Player executable unchanged.

### Native actor-context endpoint bridge

The read-only XML2 adapter now resolves native talent endpoints through the live
provider tree, and `TalentBindings::native_xml2_value` composes symbol lookup with
that read. The shared catalog ID is never used as a native ID, and neither IDs nor
endpoint values are cached across calls.

Rechecked the original XBE instructions at D0950–D0A69, D0A70–D0AE6 and
E4D60–E4D9D: actor context is sign-extended before packing with the native symbol
ID; tree comparisons are unsigned; absent upper endpoints inherit the lower;
invalid floats are sanitized independently. A missing lower endpoint remains an
explicit diagnostic miss in this adapter (the native caller returns zero). This
must be handled deliberately by the eventual runtime consumer.

Release `raven-affecter-query-test` passes with the original Bishop/Sunfire data
(14 declarations, 28 rank-context queries), plus native memory fixtures covering
signed/separate contexts, scalar/range endpoints, upper-only entries, NaN/infinity,
slot 399, invalid/cyclic trees, unchanged output on failure and symbol reassignment
without stale endpoint reuse. Build log: `work/xml2-integration/native-value-read-build.log`.
These are component tests, not runtime combat acceptance. Scope-object evaluation,
publication/lifecycle integration and both-game gameplay/save-load acceptance remain
unfinished. The player executable and assets were not restaged by this change.

### Native scope object bridge

Added a bounded CPowerupScope pool reader. Original provider 4A9B94 delegates
validity to 15A540 and resolution to 15A590: 128 inline 1C-byte slots, metadata
relative to provider at +1238 (mask), +1038 (generations), +1024 (occupancy).
The reader requires object vtable 4A9BAC and preserves native character/node
symbols, damage/attack masks, race/talent words and flags without translating IDs.
All 128 slots, stale handles and unsupported object layouts pass Release fixtures;
failed reads preserve caller output. Existing 14-declaration/28-context tests pass.

Further original tracing confirms node symbol equality (159FE0), talent word
FFFF wildcard (159F30), masked attack-index shifts (159EE0), and power/non-power
checks against query byte +35 bit 4 (15A000/15A020). Race 15A0D0 resolves the query
actor then calls C6E30 against stats +4C8; its low-byte race index is masked by x86
shift semantics. Character 15A120 resolves its interned string and compares it
case-insensitively with stats +150. These actor/string predicates still need a
composed implementation; reading scope fields alone does not establish eligibility.
Evidence: work/xml2-integration/native-scope-trace.json and native-scope-build.log.
No runtime gameplay acceptance or player restaging occurred in this step.

### Scope query predicate composition

`raven_xml2_powerup_scope_matches` now reads query damage flags (+10), attack
index (+0C), node symbol (+20), talent word (+2C), power flag (+35 bit 4), and
actor handle (+38). It composes all traced predicates, preserves the unrestricted
scope bit, and applies x86's five-bit shift mask for attack indices. Race and
character matching require explicit resolvers; missing resolvers return INVALID,
not an eligibility default. A failed damage predicate still invokes enabled actor
predicates as in the native AND sequence. This is a read-only adapter, not yet a
replacement for a guest call.

Release fixtures cover damage overlap/rejection, attack index wrapping, node and
talent equality, talent wildcard, power/non-power/contradictory filters, absent
actor, missing resolver and overflowing query addresses. Existing original-data
checks pass (14 declarations, 28 rank-context queries). Build evidence:
work/xml2-integration/native-scope-match-build.log.

Next actor resolver trace: 145AF0 calls 73CB0, which directly invokes entity-manager
virtual +0C. It first checks the class bitmap using global 5AA7A8; if actor flag
+258 bit 1 is clear it checks the bitmap AGAIN using global 58BDCC. Consequently,
reusing the existing source-actor cast without preserving the second type index
would be wrong. Native actor/string resolver implementation and live combat
validation remain open. No player executable or assets changed.

### Native scope actor and race resolution

Implemented 145AF0's specific actor cast after generation/occupancy-checked
entity lookup: initial class check uses the supplied 5AA7A8 type, and the
flag-clear second check uses the separately supplied 58BDCC type. Rejected or
stale actors are MISSING; unsupported/unreadable layouts are INVALID. Outputs
remain unchanged on failure. D5E10 was rechecked and calls D5DC0 internally,
confirming that scope resolution also requires handle validity.

`raven_xml2_scope_race` reads the resolved actor's stats +35C and race bits at
stats +4C8. It reproduces C6E30's 32-bit shift followed by a 16-bit mask:
indices 16–31 do not match, while 32–47 wrap to bits 0–15. Null stats is diagnosed
as invalid native state. Focused Release tests pass distinct type indices,
flag precedence, race matches/mismatches/wrapping, stale handles and null stats.
The combined scope fixture now uses this actual guest-memory race resolver
instead of a synthetic race callback; all declaration/context checks pass.
Logs: scope-actor-build.log and scope-actor-query-build.log under
work/xml2-integration. Character-name intern resolution still needs integration;
no gameplay acceptance or player restaging is claimed.

### Native character-name scope and guest composition

The character predicate now resolves 145AF0's actor, stats +150 name, and the
original intern table. Rechecked 209520: 4096 offsets at provider +4; string
storage begins +4008. 15A120 masks a nonzero symbol to 24 bits, while symbol zero
selects the empty literal at 490DB0. Provider-relative arithmetic and string reads
are bounded; invalid offsets and unterminated strings produce INVALID.

Rechecked 3D66B7/3DCF90: CRT locale state 72E068 == 0 folds ASCII uppercase only;
other bytes compare unchanged. The adapter implements that path and explicitly
rejects a nonzero locale state until its CRT mapping is supported. Actor rejection
still happens before the comparison. The new guest composition API takes current
manager/type/string-provider/locale inputs and uses actual actor, race and
character readers for all enabled predicates; no synthetic matching callbacks
are required by the caller.

Release tests pass mixed-case match, character mismatch, zero-symbol empty
comparison, tagged symbols, invalid intern indices/offsets, unsupported locale,
and production guest composition, alongside the 14 original declarations and
28 rank-context queries. Log: work/xml2-integration/scope-character-build.log.
This remains component validation: native affecter dispatch attachment, nondefault
CRT locale support and gameplay acceptance in both titles remain open.

### Affecter eligibility dispatch correction

Rechecked the complete 144380 body (through 14445B). Missing/retired scopes and
scope +18 bit 4 (getter 15AAC0) return true BEFORE sharing. Restricted scopes
apply 143910 sharing first, then evaluate their query. Attribute getter 144BB0
returns +10: attribute 8 NEGATES the scope predicate; other attributes use it
directly. Sharing rejection is never inverted. Diagnostic INVALID must also
never become a successful inverted match.

Added the native affecter eligibility composition using the existing validated
scope-pool and guest predicate readers. Corrected the declaration-query helper's
unconditional sharing check and added attribute-8 inversion for scoped entries.
Tests pass absent/retired/unrestricted scope behavior, sharing short-circuit,
normal/inverted scope results and invalid query handling, plus original-data
checks (14 declarations, 28 rank-context queries). Build log:
work/xml2-integration/affecter-eligibility-build.log.
Native attachment/value dispatch and runtime gameplay validation remain open;
this evidence does not establish end-to-end integration or justify completion.

### Native affecter value composition

Added a composed eligibility/value read for native affecter snapshots. Rechecked
1446C0 and F6CD0, and confirmed provider vtable 49E410 +4 targets D0950. Nonzero
inherited values (including NaN) bypass CValue evaluation; negative zero evaluates
the CValue. Literals retain raw endpoints, while actor references use the live
native ID/tree reader and its endpoint sanitization. Rejected or absent actor/stats
contexts produce zero reference endpoints as in F6CD0. Missing live entries remain
an explicit diagnostic MISSING (native D0950 returns zero), so this API must not
be installed as a replacement without handling that distinction deliberately.

Eligibility runs before value evaluation and failure preserves caller output.
The read-only adapter skips irrelevant actor reads for literal/inherited values;
it does not claim instruction-for-instruction execution of 1446C0's preliminary
actor probe. Release fixtures pass native reference ranges, absent live values,
actorless references, raw NaN literals, negative-zero/inherited behavior and
eligibility rejection without output changes. Original declaration/context checks
remain green. Log: work/xml2-integration/affecter-value-build.log.

Native collection dispatch, mutation/lifecycle and both-title gameplay acceptance
are still outstanding. Player executable and assets remain untouched.

### Collection query sharing and null context

Traced 15E8C0's call preparation at 15EBB7–15EBDA: the two sharing booleans
are attached virtual +88 (144E90) and the inverse of virtual +74 (146D40).
144E90 validates the powerup definition and compares its virtual +A0 result
against zero. All recovered definition subclasses with the supported affecter
head getter use 146D20 (+3C float) for this value. 146D40 returns attached +64
bit 1. The legacy parameter name owner_matches must not be interpreted as an
actor-pointer comparison; the new helper derives both booleans from guest data.

Added validated sharing reads and collection eligibility composition. The null
query branch (15EABA–15EB61) skips only a valid scope whose virtual +60 reports
node scoping (15AAF0, flags bit 20); it does not execute ordinary scope or sharing
checks. Nonnull queries derive attachment sharing before 144380 eligibility.
Tests pass positive/NaN definition amounts, both attachment flag states, unknown
getter rejection with unchanged outputs, composed sharing acceptance/rejection,
and null queries with/without node scoping. Existing original-data checks pass.
Log: work/xml2-integration/query-sharing-build.log. Full collection aggregation,
lifecycle and gameplay acceptance remain unfinished; player staging unchanged.

### Native collection adapter

Added `query_xml2_native_affecters`, composing actual attached/definition/affecter
pool reads, attribute advertisement, source context, native scope/sharing checks,
CValue reads and endpoint aggregation in native list order. Missing reference
entries become zero at this collection boundary, matching D0950; the result also
counts them for diagnostics. Unsupported memory/layouts and cycles throw without
publishing a result. The function performs no mutation or RNG calls.

The original return boolean is preserved separately from applied count: encountering
a missing powerup definition returns false even if earlier endpoints accumulated.
This differs from the declaration-query diagnostic helper. Attribute bits are tested
after validating the head and before reading its definition. Native membership and
external expiration/removal remain guest-owned; this read-only adapter does not
invent expiration behavior or replace the native update loop.

Release fixtures pass two-affecter range multiplication, mode filtering, attribute
bitmask short-circuit against an unreadable definition, cyclic-list rejection, and
an early false return retaining accumulated endpoints. Existing 14-declaration /
28-context tests pass. Log: work/xml2-integration/native-collection-build.log.
Live query parity and lifecycle validation are still required before dispatch
replacement; both-title gameplay acceptance remains incomplete. Staging unchanged.

### Original-code collection oracle

Added scripts/xml2-affecter-oracle.py using local Unicorn 2.1.4. It maps original
XBE sections, constructs a controlled collection in separate guest memory and
executes 15E8C0 with its original callees/vtables, without function hooks or return
stubs. An instruction limit and explicit return-address check guard completion.
The C++ test's --oracle-fixture mode consumes the identical pre-execution memory
image through the shared reader. The script asserts return-boolean and endpoint
parity and records results under work/xml2-integration/native-oracle-v1.

First executable comparison passes: two literal scale affecters return true and
endpoints [6,8] in both original code and the adapter. This is stronger than a
hand-authored expected-value fixture, but covers only this controlled collection.
No live actor lifecycle, reference publication, scoped query or gameplay parity
is claimed. Original bytes and snapshots remain local; player staging unchanged.

### Original-code collection parity matrix

Expanded the Unicorn oracle to 25 cases and made the adapter fixture reader take
attribute/mode/query arguments from the original call frame. Each case restores
the same baseline memory and CPU context, executes original XBE code, and asserts
adapter return/endpoints against that result. Only one 32-MB snapshot is reused.

All 25 pass: add/scale/min/max, attribute advertisement, mode/type rejection,
retired head/affecter, missing definition, inherited values, early false with
partial endpoints, matching/nonmatching/retired damage scopes, owner/shared
filters, unrestricted-scope sharing bypass, null-query node exclusion and damage
bypass, and attribute-8 inversion. Results and source XBE hash are recorded in
work/xml2-integration/native-oracle-v2/parity.json. No original function was hooked
or replaced in the oracle.

These are executable component comparisons, not live game validation. Reference
publication, actor race/name scopes, lifecycle transitions and both-title gameplay
remain to be verified. No player files changed.

### Executable reference and actor-scope parity

The oracle now runs 46 original-code comparisons. Added native reference ranges,
scalar fallback, absent context/symbol, signed negative contexts, independently
invalid lower/upper endpoints, upper-only entry, null stats and inherited override.
Added race match/miss/wrapped shift/truncated mask, retired actor, both type-cast
branches, and character case-fold/mismatch/empty-selector cases. All return values
and endpoint pairs match the adapter using identical guest memory snapshots.

The first actor-scope run exposed a fixture initialization mistake: D7190 returns
the inline entity manager at 5F92D0, not a pointer stored there. Rechecked D7190's
602644 initialization flag and corrected both oracle and adapter-fixture runtime
inputs. No original function was stubbed to hide the failed initialization.
Talent provider is the inline 5F3AF8 object (D1350, flag 5F8DBC). Intern storage
uses 6CFD10 (209520, flag 6DB518). These are title-specific fixture addresses.

Evidence: work/xml2-integration/native-oracle-v2/parity.json and run.log, recorded
XBE hash. Controlled executable parity is not live publication/lifecycle or
menu/combat/save-load acceptance. Both-title integration remains unfinished.

### Runtime query comparison hook (not enabled yet)

Added a C ABI per-call snapshot/comparison probe and an XML2 generated-function
wrapper source. The wrapper is gated by XML2_QUERY_PARITY=1, reads current title
runtime globals and call arguments, invokes the original generated function, then
compares native output without replacing results or writing guest state. Opaque
per-call ownership supports nested calls; mismatches/unavailable adapters report
separate diagnostics. The C++ probe builds in the shared library and its lifetime /
comparison path passes alongside all 46 original-code oracle cases.

The guest wrapper is not yet wired into a built XML2 target: its integration
requires renaming only the generated 15E8C0 definition, preserving dispatch, and
linking the shared library into a recovered runner. src/raven_xml2_query_guest.c
has therefore not yet been compiled or run; do not count it as runtime validation.
The current main target remains XML1-only. Player staging is unchanged.

### XML2 wrapper compilation and register preservation

Added optional RAVEN_XML2_RECOVERY_SOURCE configuration. It creates a build-local
copy of recovered chunk 29, verifies exactly one 15E8C0 definition and renames that
definition to xml2_native_query_body. Dispatch declarations remain unchanged; the
shared wrapper provides sub_0015E8C0. The archived/recovered input is not edited.
Both the instrumented chunk and wrapper compile against actual XML2 headers in
raven-xml2-query-instrumented. Logs: query-instrument-configure.log and
query-instrument-build.log under work/xml2-integration.

The linked wrapper test passes with probing both disabled and enabled: the stub
native body executes exactly once and its guest EAX/ECX/EDX/ESP and output values
survive comparison. This is a wrapper ABI test with a stub body, distinct from the
46-case original-XBE oracle; it is not a full recovered-runner link or live game
run. Full target wiring, runtime observations and gameplay acceptance remain open.
Log: query-wrapper-build.log. Player staging and original game assets unchanged.

### Shared XML2 runner build started

Added opt-in RAVEN_BUILD_XML2_RUNNER and cmake/XML2Runner.cmake. The separate
build/xml2-shared configuration uses XML2 scratch base 00860000, recovered title
sources/generated code, the instrumented query chunk/wrapper and this repository's
shared gameplay/kernel/audio libraries. XML1 boot-probe and XML2 layout cannot be
enabled in the same build. The recovered graphics include's obsolete sibling path
is normalized only in a build-local copy; original input files remain unchanged.

Configuration succeeds; compilation of shared libraries and recovered generated
chunks is underway. At this checkpoint the command is still running in terminal
session 49825; poll that session before restarting. Logs:
work/xml2-integration/shared-runner-configure.log and shared-runner-build.log.
No successful full link or runtime behavior is claimed yet. The recovered live
renderer selects its DX8 worker; linked upstream D3D11 libraries are not evidence
of an accepted graphics backend. Current XML1 player staging remains unchanged.

### Shared runner linked; XML2 startup data collision fixed

The full xml2-shared-probe linked. Its --test-crt startup detected shared-kernel
scratch writes corrupting XML2 BSS at 00740020. XBOX_AUX_BASE had been defined by
the runner build but ignored by the current kernel constants. Updated the vendored
xbox_memory_layout header/source to derive kernel exports, main stack, PRCB and
legacy TLS/RW scratch addresses from XBOX_AUX_BASE. The default 00700000 preserves
existing XML1 addresses; XML2 selects 00860000 in its separate build. This is a
local upstream-toolkit change, not a submodule revision update.

The runner's build-local main now accepts XML2_XBE_PATH, XML2_GAME_ROOT and
XML2_SAVE_ROOT environment overrides without editing recovered source. After the
layout fix, the original XML2 .data/BSS preservation check passes and --test-crt
passes 266240 memory/ABI cases, 110 signed64 remainder vectors, 4352 original-x86
checksum vectors and 33 actor-factory allocation/memory/ABI vectors. The XML1
configuration's guest-physical-test also passes physical identity, collision,
CPU/DMA alias and cross-page checks. Logs: shared-runner-crt.log,
shared-runner-build.log and xml1-layout-regression-build.log under
work/xml2-integration.

A recovered generated warning for 3D8469's unconditional recursion remains to
inspect before relying on that path. No gameplay, audio or graphics acceptance
is claimed by these startup tests; the goal and player staging remain unchanged.

### First shared-runner boot failure

Added XML2_DX8_WORKER override to the build-local recovered graphics source. Ran a
bounded hidden/muted boot with explicit XML2 asset root, private runtime-saves,
XML2_QUERY_PARITY=1, XML1_DX8_VISIBLE=0, XML1_MUTED=1 and 20-second watchdog.
The runner preserved .data/BSS, entered game code, loaded resources and logged its
first DX8 submission, then exited -1073740791 (C0000409). It did not produce query
parity observations or inspected visual evidence; this is a failed startup probe,
not a passed smoke test. Logs: shared-boot.stdout.log / shared-boot.stderr.log.
The process has exited; terminal session 67388 completed. No desktop input used.

Recursion warning trace: 3D8469 calls 222776, whose indirect kernel thunk at
48F020 is original ordinal 258 (PsTerminateSystemThread), followed by INT3.
The generated fallthrough includes another function and appears recursive.
The shared kernel exits spawned workers here but returns on main; this remains a
potential termination-path issue, not yet proven to cause C0000409. Investigate
the actual failure before applying a speculative recursion patch. Staging unchanged.

### Early boot failure isolated to diagnostic directory setup

The recovered renderer unconditionally redirects stdout/stderr into build/ under
its working directory. The private shared-runner working directory lacked that
folder. After creating it, the same hidden/muted run passed the previous immediate
C0000409 failure, submitted at least 240 frames and exited at the 20-second
watchdog (code 3). Added checked creation of this directory to the build-local
main adaptation so future diagnostic roots do not repeat the setup error. Worker
stdout/stderr inheritance is also preserved in the diagnostic launcher; renderer
file logs now exist under work/xml2-integration/build.

Evidence: shared-boot2 logs (failure), shared-boot3 logs and build/dx8-live.log
(progress). No rendered frame has yet been inspected, audio was muted and no
live query parity result was established. This is startup progress only, not a
visual/functional smoke pass. Next: native captures and controlled process-local
navigation toward menu/gameplay. All test processes exited; staging unchanged.

### Shared runner: first inspected menu, FMV and scripted scene

Hidden/muted diagnostic boot5 ran with the shared kernel/DX8 worker and a
180-second watchdog. It exited at that watchdog; PID 25548 is no longer live.
No host input or desktop capture was used. All nine requested native captures
were inspected sequentially under work/xml2-integration/captures/boot5-*.bmp:
1 black startup; 2 title/background transition; 3 full main menu and animated
Egypt scene; 4 Normal difficulty dialog; 5 black transition; 6 opening FMV
(Magneto/prison); 7 loading artwork; 8 Cyclops opening dialogue; 9 Nightcrawler
reply after process-local A. Main menu controls, font, background and captured
FMV content are present. The opening in-engine scene has severe stretched/spiked
character geometry while environment/dialogue remain recognizable. This is a
failed gameplay visual check, not accepted gameplay. Audio remains unverified
(muted); movement, combat, powers and save/load have not passed this runner.

The recovered graphics producer currently sends fixed-function vertex buffers
and matrices directly; the deformation cause has not yet been established.
Trace actual vertex data and its original consumers before changing rendering
or assets. No speculative geometry correction applied. Player staging unchanged.

The prior query comparison hook logged failures only, so an empty log could not
prove it was reached. Added atomic observed-comparison/mismatch counters, printed
on first comparison and every 4096 thereafter, in raven_xml2_query_probe.cpp.
Rebuilt runner and wrapper test successfully; wrapper enabled/disabled ABI test
passes with compared=1/mismatches=0 (stub native body, not gameplay evidence).
Boot5 predates these counters and establishes no live query-parity acceptance.
Next run must observe this hook during gameplay, alongside geometry tracing.

### Boot6: captured geometry inputs and shader-path stop

Added src/xml2_vertex_trace.inc, included only in the build-local recovered
XML2 graphics producer via cmake/XML2Runner.cmake. Explicit packet capture
now logs original draw caller, VB/data address, base/index range, FVF/stride,
position extrema and nonfinite/out-of-range counts before index compaction.
It reads guest data only; normal runs do not emit this trace. Build passes.

Boot6 (PID 18216, now exited) used hidden/muted rendering, process-local pad,
query parity enabled, and a 300-second watchdog. All five requested native
captures were inspected in order: title transition, difficulty dialog, black
movie transition, Cyclops dialogue with damaged meshes, Nightcrawler reply.
The packet request captured build/dx8-request-6-frame-2310.bin (2,295,726 bytes)
with per-draw records in shared-boot6.stderr.log. Suspected character buffers
01F4B000/01F69000 use FVF112 stride32, caller25DB48, finite local coordinates
and bounded indices; adjacent FVF2 stride12 draws also have finite ranges.
This does not establish correct topology/transforms or prove a root cause.
The packet is preserved for offline DX8 replay/analysis.

The second dialogue Continue reached an explicit unsupported programmable
vertex shader at frame3327: primitive6, count166, stride32, handle01135A01,
pixel shader0, texture01135850. The process exited at this guard, not watchdog.
This reproduces the archived prototype's documented later shader limitation.
Current XML1 has vertex_program support but recovered XML2's graphics producer
still accepts fixed-function FVF only. Next: trace XML2 shader object/constants
and viewport consumers against original XBE and share the existing implementation
without aliasing game-specific globals. Geometry distortion remains independently
unresolved. No query observations were emitted in this pre-gameplay flow; absence
is not parity acceptance. No movement/combat/save-load or audio acceptance.

### XML2 shader integration: original trace and first runtime attempt

Original XBE disassembly in work/xml2-integration/xml2-shader-original.txt
confirms SetVertexShader 3F0520 handle bit0/object+4 bit10, LoadVertexShader
3F01B0 word count at object+C and commands at +114; constant upload functions
3EFEC0, 3EFF20, 3EFFD0 take physical register indices and copy 4/16/stack-count
words. GetViewportOffsetAndScale 3F0750 is called by 3F1290 at return3F12B8,
which then tests device+8 bit200 (NORESERVEDCONSTANTS).

scripts/prepare-xml2-shaders.py adapts build-local graphics and chunk104 only:
reuses the current XML1 shader decode/input/execution code and shared
xml1-nv2a-vertex library, maps the verified XML2 addresses, observes native
viewport outputs, and serializes shader results in the existing DX8 wire format.
Recovered/archive files, game data, and XML1 producer are unchanged. CMake
tracks adaptation inputs; changed insertion points fail configuration.
Build and vertex-program-test pass; recovered --test-crt passes memory/ABI,
signed remainder, checksum and actor factory checks with explicit XML2 XBE path.

Boot7 captures1-5 inspected: title, difficulty, opening FMV, Cyclops and
Nightcrawler dialogue. Geometry remains distorted. Second Continue now decodes
30 shader instructions/inputs0007 rather than failing on the shader handle.
It then stops because diagnostic build/renderer's worker (dated Sept16) rejects
the new shader-result FVF: Unsupported replay format. Rebuilt that worker from
current source. Replaying boot6's packet with the current worker still shows
damaged meshes (inspected boot6-replay-current.bmp), so this renderer refresh
alone does not fix geometry. Boot7 capture6 was requested after process exit and
was not produced. No live query parity observations yet; no gameplay acceptance.

### Boot8: passed shader stop and reached gameplay handoff

With the rebuilt current DX8 worker, boot8 decoded/executed the 30-instruction
shader and continued past the previous guard. All native captures1-14 were
inspected sequentially. Captures1-5 show title/difficulty/FMV/opening dialogue;
6-10 show subsequent Cyclops/Nightcrawler dialogue with the chair now empty;
11-12 show the gameplay HUD, party markers, prison environment and minimap;
13 follows process-local right input and shows party/camera displacement;
14 follows a process-local A pulse. No claim of correct attack animation or
combat follows from that pulse: all character meshes remain severely distorted.
The transient teleport effect itself was not captured/visually accepted.

No fatal producer error, worker error or query-parity observation was logged
in this flow. This establishes progress past the shader stop, not comprehensive
shader correctness, gameplay acceptance or native/shared affecter parity.
Audio was muted. Combat, powers, save/load and full movement validation remain
outstanding, as does the distinct fixed-function character geometry defect.
PID23660 was explicitly terminated after capture14 to finish the bounded test.
Player staging and archive assets remain unchanged. Next priority: use the
captured geometry to trace character transforms/topology, while extending
process-local gameplay checks enough to reach the affecter consumer.

### Character distortion traced to lost skinning LOOP

Parsed boot6's captured packet (work/xml2-integration/inspect-geometry.py;
geometry/draws.json) and replayed isolated draws39-42 with the current DX8
worker. All four replay outputs were inspected: draws39/41 reproduce the visible
spikes; draws40/42 render black. Draws39/41 contain many literal zero XYZ
positions despite valid, nearly unit normals and populated UVs. Their world
transforms are finite. This establishes damaged position data upstream of DX8.

Original XML2 2B59F0 performs weighted skeletal position blending. Its instruction
at 2B5A5B is E2 C0 (LOOP 2B5A1D). Recovered chunk64 instead tests a zero-initialized
_flags fallback without decrementing ECX, processing just one influence. Added
scripts/xml2-skinning-oracle.py to execute the original XBE in Unicorn for 24
cases (1/4/9 vertices, 1-4 influences, 12/32-byte output stride, zero-first weights).
Added tests/xml2_skinning_test.c to compare the actual compiled recovered function
against full oracle output bytes including padding canaries. Optional CMake
RAVEN_XML2_SKIN_VECTORS points to the generated, untracked header directory.
Baseline fails case2 (two influences), with the position bytes differing.

The first baseline additionally exposed the recovered local-frame EBP publication
convention: g_ebp retains the last local frame, although the function's local EBP
is popped. This test explicitly excludes/restores that shadow; it checks ESP,
EBX, ESI and EDI and does not claim full caller EBP propagation validation.

CMake now corrects only the verified skinning LOOP in a build-local chunk64:
--ecx != 0, without changing arithmetic flags. Inline note records original PC.
Original/recovered files remain unchanged. Build and all24 original-x86 cases
pass, along with existing CRT/checksum/actor-factory checks. Logs:
skin-baseline-test.log and skin-corrected-test.log. This is component evidence;
live visual confirmation is still pending in boot9. Other fallback LOOP sites
exist, many in suspicious disassembly; none were patched speculatively.

### Boot9: live confirmation of weighted-skinning correction

Boot9 PID27472 exited at the configured300-second watchdog; no live process
remains. Native captures1-11 were inspected sequentially. The initial flow
included a loading-screen transition back to the difficulty dialog; subsequent
Normal confirmation reached the opening FMV and scene. Capture5 shows intact
Professor/Cyclops meshes where boot8 had spikes. Capture7 shows Nightcrawler
beside the Professor; later dialogue progresses to the empty chair. Capture10
shows the gameplay HUD and recognizable party; capture11 after process-local
right input shows party/camera displacement and intact party meshes. The prior
spiking is absent in these inspected outputs. Capture12 was requested at the
watchdog boundary and was not produced; the accompanying A pulse was not logged
as accepted, so it supplies no input/attack evidence.

This is live confirmation of the specific weighted-position correction across
the tested opening scene and gameplay handoff, not full rendering/gameplay
acceptance. The transient teleport particles were not individually captured;
NPC occlusion, remaining scenes, combat, powers, save/load and audio (muted)
remain unverified. No native/shared query observations were emitted. Existing
XML1 player staging is unchanged. Further work must reach actual combat and
power consumers and verify both games, rather than close TODO4 on this result.

### Boot10: bounded input, movement and power-selector evidence

The prior goal continuation supplied progress (native skinning fixtures and live
captures); the intervening Angel request rechecked its separate installation.
Revalidated boot10 PID25380 live before continuing. It subsequently terminated
at its 600-second watchdog, confirmed by the log and absence of that process.

The build-local XML2 input adapter now supports bounded 1-600 frame commands,
analog movement and simultaneous buttons through src/xml2_test_pad.h. All input
stays within the diagnostic game process. Boot10 commands13-17 exercised timed
movement and automatic release. Native captures8-17 were inspected sequentially:
opening dialogue completed, gameplay HUD appeared, and the party/camera moved
through the starting area. Captures12-14 also show collision-limited movement;
this is not evidence of reaching combat. Capture17 after rt+a shows the power
selector and a reduced blue energy bar, but scenery occludes the actor/effect.
It does not validate the power's effect or damage. No inner-query comparison was
logged. Audio was muted; combat, save/load and full power behavior remain open.

Source inspection confirms query wrapper15ED50 can return before15E8C0 when
its attached-list handle or attribute mask does not qualify. The runner now
adds an opt-in outer observer through the build-local observe.c adaptation.
With XML2_QUERY_PARITY=1 it records the first16 and every4096th outer call's
actor, attribute, mode, handle, pool and raw masks. It never changes guest data.
This separates unvisited consumers from potential native short-circuiting;
raw fields alone do not prove why a particular call returned. No production
hook or manufactured affecter was added. Original recovered files are unchanged.

Runner and wrapper test build passed (outer-query-build.log). The expanded
wrapper test verifies the observer preserves actor bytes, stack bytes and guest
registers, and rejects out-of-range addresses without dereferencing them
(outer-query-test.log). Its native body is a stub: it is not live parity evidence.
The new outer diagnostics still need a live run. Player staging is unchanged.
TODO4 remains open; the next run must reach unobscured power execution/combat
and observe the actual query consumers before any equivalence claim.

### Boot11: first combat query observed; false function boundary found

Previous turn was progress: bounded input/live captures and outer-query diagnostics.
Boot11 PID30744 started after confirming no diagnostic runner was live. Native
captures1-23 were inspected sequentially. FMV, opening dialogue, party movement,
first door interaction, and the scripted separation of Mystique/Sabretooth all
advanced. Capture15 shows Magneto casting with a visible hand effect and energy
consumption, without proving target damage. Captures21-23 reach soldiers and
active party/enemy combat. The muted run does not validate audio.

Outer diagnostics recorded initial attribute7 queries with zero pool/head/masks.
The first inner comparison then executed during combat and matched
([XML2 QUERY OBSERVED] compared=1 mismatches=0). No MISMATCH/UNVERIFIED appeared.
Only the reported count is evidence; it is not exhaustive parity acceptance.

The runner terminated on [FATAL ICALL] target00062006 shortly afterward. Input24
was not accepted and capture24 was not produced. No runner remains live. Original
XBE disassembly saved as combat-boundary-original.txt proves61BC0 continues into
62000-6208D: 61FC6 JE62071, 61FF8 JE62006, and61FFE TEST supplies62000 JNE flags.
The recovered source falsely split at62000, sends the two interior branches to
unresolved stubs, and resets flags in the detached continuation. This is a real
combat execution failure, not a missing mod resource or a valid function stub.

scripts/prepare-xml2-combat.py now joins the verified continuation into61BC0 in a
build-local chunk7, replaces those tail calls with local branches, and preserves
TEST flags for62000. Inline comments record original addresses. The separate
recovered62000 definition remains for its existing dispatch entry; no legitimate
external invocation is asserted. Original recovered files and archives are intact.
The runner rebuild passes (combat-boundary-build.log). This correction still
needs branch/ABI regression coverage and a repeat of the live combat encounter;
build success alone is not validation. Player staging remains unchanged, TODO4 open.

### Combat branch oracle and boot12 transport failure

Previous turn was progress: live combat reached, inner query comparison observed,
and a verified false generated-function boundary repaired in the build copy.
Added scripts/xml2-combat-boundary-oracle.py. It executes original61FE5-62008
in Unicorn over32 input combinations (zero/nonzero byte flags and distinct upper
EAX bits), then compiles the corresponding statements extracted from the repaired
function. EAX/EDX/ESP and full8192-byte memory canaries match all32 original runs.
This covers the actual repaired flag/branch block; it does not cover the full
combat function, its virtual call, or epilogue. Evidence: combat-oracle.log.

Boot12 PID28144 was launched only after confirming no runner was live. It exited
before gameplay at frame693: worker error Invalid replay version followed by
Win32109 graphics acknowledgement failure. Capture1 (intro logo movie) was
inspected; capture2 was requested but not produced. No new combat evidence.
Both process absence and terminal log establish this run stopped, not timed out.

Inspected ordered batches, source-mode envelopes and producer transport gate.
No cause is established for the malformed/unsupported packet, so no protocol
behavior was changed. The DX8 worker now includes all8 rejected magic bytes and
batch depth in that error, to distinguish unsupported headers from stream drift.
Worker rebuild passed (packet-diagnostic-build.log). Next run should preserve
that diagnostic and retry gameplay; the repaired combat function still needs
live acceptance and ABI coverage. Player EXE remains unchanged; TODO4 remains open.

### Boot13: packet failure not reproduced; combat epilogue oracle

Prior turn made progress with original-x86 branch checks and packet diagnostics.
Boot13 PID29140 was confirmed live during the run and then absent following its
900-second watchdog. Native captures1-35 were inspected in order. Intro movie,
3D menu, opening scripted dialogue and party movement rendered. Captures34-35
show the first door prompt followed by passage through the opened doorway.
Capture36 was requested at the watchdog boundary and never produced. Combat was
not reached; no combat regression acceptance is claimed. The packet rejection
from boot12 did not recur and remains unexplained, not fixed. Audio was muted.

Long analog command durations did not reproduce the prior route: camera rotation
and collisions produced different endpoints. Several commands faced walls or
pipes; captures were used to recover direction. A jump/right command moved out
of one obstructed position. This is navigation evidence, not proof of collision
or camera correctness. Future route replay must verify intermediate positions
and use shorter movements, and should obtain a private save/checkpoint when the
native game permits it. No host input was used.

Expanded the original-x86 combat oracle to execute62081-6208D through actual
RET16 and compare the compiled epilogue extracted from the repaired function.
Saved EDI/ESI/EBP/EBX values, final ESP and memory canaries match. Combined run
passes32 branch cases plus the epilogue fixture (combat-oracle.log). The cookie
helper, virtual call, full function and live combat remain outside these fixtures.
The player executable is untouched and the shared-codebase goal remains active.

## CPUHarming timing and damage policy — original Xbox oracle

The Angel verification turn made no integration progress. The next safe action
was to resume the missing harming-handler trace, rather than repeat startup
navigation. This pass adds shared numeric policies to `raven_numeric.c`; they
are not yet wired as an XML1 handler and do not establish combat acceptance.

Original Xbox evidence resolves these previously uncertain fields and calls:

- `14E9A0` parses `damage` into definition +60, `damageType` into +68,
  `attacks_per_second` into unsigned byte +70, and `use_tint` /
  `use_trait_scale` into bits 0/1 of +71. `158F90` defaults APS to 3.
- `14E970` returns 1/APS, except zero returns the stored float 0.33 at
  `4920A0`. Zero does not disable the handler.
- Active-instance vtable `4A6AF4`: +50 (`146CC0`) returns life at +0C;
  +EC (`146ED0`) returns start +10 plus positive life, otherwise zero;
  +DC (`146EA0`) returns next tick +34; +B4 (`21B850`) writes +34.
- Native game singleton `5AA060`, vtable `49641C`, slot +160 (`77FA0`)
  reads the game clock at +3E8. This is not a host wall-clock substitution.
- `14EEA0` tests next-tick time against the game clock before evaluating
  damage. `14EFB9..14F00D` rejects nonpositive/unordered life or remaining
  duration, then computes `(sampled_damage / life) * min(remaining, interval)`.
  Interval is rounded to float before this minimum. Damage is distributed
  across life; applying the full sampled damage every tick would be wrong.
- `14EAB0` computes float remaining duration from end time minus its first
  clock read; if positive, limits it to the attack interval and writes the
  second clock read plus that duration as the next tick. It does not clamp
  the resulting timestamp to end time if the two clock reads differ.

`scripts/xml2-harming-oracle.py` executes the complete original `14EAB0`
through original pool validation, lookup, game-singleton access, getter and
setter methods, with an initialized valid generation-tagged active slot.
No guest instruction patch, return stub or function hook is used. It also
executes original `14EFB9..14F00D`, including native `14E970` and `293A0`.
It compares resulting float bits against the compiled shared C implementation.
All 2,560 cases pass: every APS byte value with normal/shortened final ticks,
expiry, nonpositive life, signed/zero damage and unordered duration gates.
Scheduler cases hold the native clock fixed during an invocation. Separate
unit cases cover the explicit two-clock-read API and unchanged output on expiry.

Evidence: `work/xml2-integration/harming-oracle/result.json`, generated C cases
and executable beside it. Source XBE SHA256 is recorded in that result. The
existing `raven-numeric-test` also passes after adding the timing cases.

Still missing: XML1 active-instance creation/update/removal and correct native
actor damage delivery; original handler owner/trait eligibility, lifecycle and
in-game imported Sunfire acceptance. The oracle does not cover those, invalid
pool handles, audio, gameplay or save/load. Previous live combat-boundary and
intermittent replay-transport issues also remain unverified. No game or player
executable was launched or restaged by this pass. The full goal remains active.

## XML1 active-powerup callback and identity bridge

The previous goal turn was progress: shared harming timing was implemented and
compared against original XML2 instructions. This turn traced the XML1 lifecycle
needed to attach that behavior and added a bounded, read-only active-instance
handle resolver to the shared library (`raven_xml1_powerup_view.c`).

Evidence comes from the local XML1 XBE, not the XML2 class layout. Disassembly
and source hash are retained in `work/xml2-integration/xml1-trace/active-lifecycle-disassembly.txt`
and `active-lifecycle-source.json`.

- System singleton: `29B30` returns `4833C0`; its pool begins at system +4.
  `299B0` constructs 128 slots of 64 bytes, index mask 7F and generation shift 7.
- `29C00` resolves a handle by comparing the full generation-tagged value at
  system +2238 + index*4, then testing the live bitmap at system +2224.
  Successful resolution returns system +4 + index*40 (hexadecimal offsets).
- `2A730` clears the active flag, calls `29920` to destroy/recycle the slot,
  and advances its generation; signed overflow restores the initial generation
  bit plus index. Never key imported instance metadata by address alone.
- `D75A0` routes a CCEPowerup through `2AA90`. That function checks eligibility
  and duplicates, allocates/reuses a native slot, invokes `2A7B0`, links the
  actor's list at +1FC, applies native effects and invokes definition +9C with
  a cdecl active-instance pointer at `2AF07`.
- Instance +2C is the definition; +18 is source reference, +1C target reference;
  +4 is sampled life and +8 participates in the end-time getter `28FF0`.
  These differ from XML2 offsets. Ownership bit 0 at instance +3C controls
  freeing the definition in `29130`; the secondary definition at +30 is also
  freed there. Imported definitions cannot be blindly shared or freed twice.
- Per-instance update starts at `2B270`, not the empty system virtual `13D370`.
  It checks active flag/target resolution, invokes definition +A8 at `2B2EF`,
  and checks the definition again afterward. Actor-state handling can invoke
  +A4 at `2B33C`; expiry calls `2AF30`. The meaning of the actor-state branch
  needs further confirmation before treating +A4 as any named gameplay event.
- `2AF30` invokes definition +A0 at `2AF65` before unlinking and releasing,
  subject to actor-state gates. It handles a callback emptying the actor list.
  Callback execution therefore must be treated as potentially invalidating
  the instance. Resolve the generation-tagged handle again afterward.
- Instance +34 is already used for native propagation scheduling in `2B270`.
  Do not commandeer it for harming ticks without accounting for that behavior.
- XML1 itself installs +9C/+A8 callbacks when constructing a secondary effect
  at `2DEA2`/`2DEAC`. However, resolver `2DEE0` reached by parsing at `95CEE`
  and `95D1B` writes +B0/+B4, not these lifecycle fields. Extending that string
  resolver would not by itself register a harming update handler.

`xml1-powerup-handle-oracle.py` executes original `29C00` and its original
singleton accessor without instruction patches or function-return stubs. The
shared resolver matches all 1,152 cases: all 128 slots, three generations,
live/stale/inactive state. Additional compiled checks reject corrupt masks,
unreadable live bits and wrapped guest addresses while preserving output on
failure. Results and source hash are under `work/xml2-integration/xml1-handle-oracle`.
The shared target builds; existing XML2 powerup-view and numeric tests pass.

This is a read-only bridge, not a registered or playable harming implementation.
Remaining work includes definition construction/parsing and cloning, native
callback dispatch, damage delivery, persistence, generation-safe per-instance
state and runtime validation. Original allocation/destruction and callbacks were
traced but not executed by the handle oracle. No game was launched and player
staging was not changed. The full goal remains active.

## XML1 definition ownership verified by original execution

The preceding goal turn was progress (native lifecycle trace plus the verified
active-handle bridge). This pass resolves definition ownership before attaching
imported handler data. `scripts/xml1-powerup-definition-oracle.py` executes
unmodified original instructions, with isolated native pools and no function
stubs, to test allocation, cloning, reference release and address reuse.

- `966F0` obtains the definition pool via global `4C0B18`. Its constructor is
  `96690`; capacity is 164 entries of 192 bytes. `96740` returns null at capacity.
  This pool is distinct from the 128-entry generation-tagged active-instance pool.
- `964F0` constructs a slot; `96220` initializes defaults including reference
  count 1 and zero lifecycle callbacks. It is also a reset boundary to account
  for if host metadata is introduced.
- `953A0` clones fields and all nine callback pointers at offsets 9C, A0, A4,
  A8, AC, B0, B4, B8, BC. It preserves the destination reference count rather
  than copying the source count. Imported metadata must explicitly follow this
  clone; setting callbacks only on the original definition is insufficient.
- Five resource-name objects at 54, 60, 78, 84, 90 are copied through `95330`
  and `95280`, allocating distinct native name handles. They are not shallow
  pointer aliases. Tests retain the clone's names after freeing the source.
- `967B0` decrements the definition's reference count. Only zero reaches pool
  deletion `96600`, which calls destructor `964A0` and returns the slot to the
  allocator. Clearing host metadata on entry to every `967B0` would discard
  a definition still owned elsewhere. Final destruction is the retirement edge.
- Reallocating the released slot returns the same definition address with count
  1, cleared callbacks and empty names. Unlike active handles, definition
  pointers have no generation in this path: constructor/reset and destruction
  hooks are necessary to prevent host metadata surviving address reuse.

The oracle initializes both original pools, allocates all 164 definitions,
checks exhaustion, clones nine nonzero callbacks and five nonempty resource
names, preserves the clone's independent reference count, verifies non-final
release leaves all names/occupancy intact, verifies final release frees only
source names, then reallocates and checks defaults. Native callee-saved registers
and stack cleanup are checked at every call. Result and XBE hash:
`work/xml2-integration/xml1-definition-oracle/result.json`.

This tests native ownership; it does not install imported handlers. Callback
execution, serialized reconstruction, actor damage delivery, imported gameplay
and save/load still need implementation/validation. Player staging is unchanged.

## XML1 definition metadata connected to generated lifecycle

The previous turn was progress: original execution proved definition and name
ownership. This turn implements `raven_powerup_metadata.h/.cpp` and connects it
to generated XML1 routines via `guard-raven-powerup-metadata.py`, included in
`generate-code.ps1`. The shared library owns imported operand text separately
from guest numeric fields; snapshots are independent copies protected by a
mutex, and no lock spans a guest callback. Ordinary unbound definitions remain
unbound. C ABI lifecycle calls contain host exceptions.

Hooks are: reset at 96220 entry; copy at 955B7 after the full native clone;
retire at 964A0 final destruction. At 955B7, EDI points source+90 after the fifth
name clone, so the hook reads the original source parameter at ESP+0C rather
than treating EDI as the source definition. No hook is placed on each 967B0
reference release. Copying an unbound source clears old destination metadata;
self-copy preserves it. These APIs do not accept native parse fields or register
an executable powerup type: those integrations remain pending.

Validation:

- `raven-powerup-metadata-test`: 1,000 clone/destruction/address-reuse cycles,
  independent snapshots, unbound replacement, self-copy and rebinding pass.
- Full XML1 development target builds and links with the modified generated
  chunk (`work/xml2-integration/powerup-metadata-build.log`).
- New `--powerup-definition-test` mode initializes an isolated guest pool and
  calls real generated allocation, copy, reference release and reset routines.
  It confirms metadata on both definitions after clone, retention after a
  non-final release, source retirement on final release, and destination
  clearing on reset. Exit 0; evidence `powerup-metadata-guest.log` in the same
  work directory. The mode skips game entry, audio and renderer startup.
- Reapplying the generation guard leaves the generated file hash unchanged.
  Whitespace checks on edited tracked build/entry files pass.

This verifies the lifecycle hooks in the executable, not harming gameplay.
Parsing/class selection, callback installation and execution, damage delivery,
serialization and in-game acceptance remain required. No game was launched or
player executable replaced; XBOXgame EXE SHA256 remains
`000550136384554438e9aa8469a50bc1dcf6fb5f35b86cd5d0cb260a3362784d`.
The full shared-codebase goal and separate multi-machine performance gate remain
open.

## Parser acceptance is not handler acceptance

The preceding turn made progress by wiring definition metadata into generated
lifecycles. This turn traced `955C0`/`96370` and executed the original parser
against XML2 harming attributes before selecting an adapter insertion point.

Concrete incompatibility: `955C0` returns AL=1 for unknown attributes without
mutating the definition. Original-code fixtures confirm this for `class=harming`,
`damage=%sun_flmthrow_sdmg`, `attacks_per_second=3` and an unknown field. Thus a
successful parse/load is insufficient even before graphical validation.

XML1 selects a native type through the `powerup` attribute, calling `946F0`
over 59 names at `44E8C8`, storing the result in definition byte +1C. Unknown
names return type 0 (`none`). The oracle verifies health_regen=11, damage=16,
continuous=55, special=56 and harming=0. Merely rewriting class to powerup would
silently select none; selecting XML1 damage instead would not implement XML2's
handler semantics. No such substitutions were made.

The parser exposes native lifecycle callback fields directly:

| Attribute | Definition offset | Name resolver |
| --- | --- | --- |
| func_activate | 9C | 2DA60 |
| func_deactivate | A0 | 2DA60 |
| func_death | A4 | 2DA60 |
| func_think | A8 | 2DA60 |
| func_trail | AC | 2C880 |
| func_damage | B0 | 2DEE0 |
| func_attempt_hit | B4 | 2DEE0 |
| func_hurt | B8 | 2D920 |
| func_touch | BC | 2DA00 |

This identifies +A4 as the death callback previously left unnamed. `2DA60`
includes bleedactivate/bleedthink and other XML1 callbacks, but no harming
registration in its traced comparison chain. Their semantics still need direct
comparison before any reuse. `96370` iterates node attributes and nested `scope`
elements; XML2 special_fx children are not parsed by that routine. This alone
is not proof that the complete event loader ignores those children, since
CCEPowerup first delegates through `E3EF0`; trace that path before changing it.

Evidence: expanded `xml1-powerup-definition-oracle.py` passes original parser
characterization and all previous ownership cases. The rebuilt XML1 executable's
`--powerup-definition-test` also verifies unchanged guest definitions for those
three XML2 fields and preserved native health_regen selection, then runs the
metadata lifecycle checks. Exit 0: `work/xml2-integration/powerup-parser-guest.log`.
Build log is `powerup-parser-build.log`; extracted native type table and comparison
literals are `xml1-trace/powerup-parser.json` with the source XBE hash. Comparison
literals include values as well as keys and must not become an attribute allowlist.

No handler acceptance was added or claimed. Next integration must retain the
XML2 class and operands explicitly, install its own verified native callbacks,
and evaluate actor-dependent operands without overwriting shared guest values.
Save reconstruction and nested event resources also remain unresolved. No game
was launched or player staging changed; the full goal stays active.

## Timed damage origin and native delivery boundary

The previous turn was progress: original/current parser tests established the
silent-ignore gap. This turn traces the closest existing XML1 timed-damage path
and extends the opt-in damage transport audit to cover it.

`2DA60` maps bleedactivate to `2B700` and bleedthink to `2CE70`. XML1 activation
sets instance +24 to game time +1.0; think executes only when time is strictly
later than +24 and advances it by another 1.0 second. This differs from XML2's
APS-dependent interval and clipped remaining lifetime. `2CE70` resolves target
+1C through `6BF80`, checks its native type bitmap, selects definition +34/+38
or defaults 0C/180000, and converts definition +2C through `1A41F0`. Constructor
`2C8C0` then stores the low word of damage at record +8; downstream XML1 reads
it signed. Reusing bleedthink directly would lose XML2's fractional damage and
lifetime distribution, so no such substitution is implemented.

The native XML1 bleed record begins at callback ESP+0C after constructor
RET44, and actor virtual +A8 receives it at `2CF57`. Original XML2 uses its
separate constructor `38900`/`38890` and actor virtual +B0. These are not
interchangeable memory layouts or callback flags. Reference disassembly with
both XBE hashes: `xml1-trace/timed-damage-delivery.txt`.

`raven_native_damage.cpp` now admits verified timed callback `2CE70` as another
synchronous root in addition to CCEAtk. `guard-raven-damage.py` instruments its
entry, seeds the completed native record at `2CF35`, and retires at the common
`2CF75` epilogue (ESP+70h). The seed remains an audit of native integer damage;
no guest amount or delivery behavior is changed. Logs identify the root site.
This is preparation for tracing timed delivery, not a fractional-damage fix.

The rebuilt XML1 process-local definition test now invokes the real generated
callback with a null target. First attempt failed during uninitialized actor-
manager construction, before reaching the intended early return. The corrected
fixture publishes the initialized manager's original vtable `3D4B7C` and init
flag; native `BDFD0` rejects handle zero before reading any pool data. It uses
no return stub. The corrected run exits 0 and logs depth=0, roots=1, seeds=0,
site=0002CE70. Files: `timed-damage-build.log`, `timed-damage-guest.log` (failed
fixture), `timed-damage-guest-v2.log` (corrected pass), under the integration work
directory. Existing parser/metadata checks also pass in that run.

The null-target test covers early-return lifetime balance only. Seed creation,
actor delivery, modifier propagation, final fractional health deduction and
imported gameplay are not yet validated. They remain necessary, along with
handler registration, persistence and both-game acceptance. The goal stays
active; no gameplay or player staging changed.

## Native health deduction verified

The Angel-request turn verified the installed mod but did not advance this
integration goal. Resuming the native damage trace identifies `92220` as the
physical-entity delivery path called by the character path at `46406`.
`92238` copies the hit record to local ESP+20 through `2B720`. After rejection,
callbacks and manager dispatch, `9264A` sign-extends local record+8, subtracts
that integer from float actor+240, and calls virtual +19C at `92669`.
The original physical-entity vtable `3C9204` selects `2E5B0`: this setter
caps health at signed-word actor+246 but does not clamp it to zero.

`scripts/xml1-health-deduction-oracle.py` runs the original subtraction block
and original virtual setter without replacing instructions. Seventy cases
pass, covering fractional starting health, signed damage boundaries, healing,
the upper cap and negative resulting health. Evidence with the input XBE hash
is `work/xml2-integration/xml1-health-oracle/result.json`. It stops at `9266F`,
before the health/death decision; it does not validate an entire hit or combat.

Fractional damage must reach this subtraction, not be applied as a later
health correction: `9266F` immediately compares health with 1.0, and later
branches invoke death callbacks and survival behavior. The incoming short
also controls earlier zero/minimum/rejection branches. Existing transport
observation at `9264A` remains read-only; no fractional integration is claimed.
`92946..92952` copies the local damage short back to the caller's record, which
must be accounted for when implementing a parallel fractional value. Actual
XML2 handler wiring and end-to-end combat/save validation remain unfinished.

## XML2 operands now captured through the XML1 parser

The previous health-deduction turn was progress: its original-code oracle
established the final consumer and preserved the separate death decision.
This turn connects definition metadata to actual attribute parsing rather
than relying on test-only metadata seeding. At `955C0` entry, the generated
adapter captures `class`, `damage`, `attacks_per_second` and `life` as original
text, then runs the original parser unchanged. Capture is independent of
attribute order, overwrites repeated values and ignores unrelated keys.
Percent operands are not evaluated in loader context. Existing lifecycle
hooks carry captured fields through clones and discard them on reset/final
destruction. This does not install or acknowledge executable XML2 behavior.

The rebuilt `xml1-boot-probe --powerup-definition-test` passes with actual
generated parser calls, verifying captured class/damage/rate values alongside
unchanged guest definition bytes and the existing native XML1 selector. The
shared metadata test also passes, including out-of-order attributes, repeated
damage values and clone preservation. Logs: `powerup-attribute-build.log` and
`powerup-attribute-guest.log` under the integration work directory. The test
does not enter the game, render, play audio or touch saves. Player EXE unchanged.

Inspection of `E3EF0` shows an attribute iterator: it reads the node's attribute
tree at +2C, obtains each key/value through `199EE0`, and calls event virtual
+10. It does not traverse child elements itself. This narrows the remaining
nested-effect trace; it does not establish all surrounding loader behavior.
Next integration still requires handler selection/dispatch, live operand
evaluation, fractional damage decisions and native instance lifetime/save
behavior before imported powers can be accepted in gameplay.

## Harming parser completeness and case behavior

The preceding parser hookup was progress, but its four-field, case-sensitive
capture was incomplete. Original `14E9A0` compares names via `3D66B7` without
case sensitivity. The metadata adapter now normalizes ASCII keys, preserves
value bytes exactly, and additionally retains `damagetype`, `use_tint`,
`use_trait_scale` and the fixture-used inherited `allow_non_actors` input.
This remains input preservation, not native execution of these fields.

`scripts/xml2-harming-parser-oracle.py` executes original `14E9A0` with its
real comparison and integer conversion routines, without stubs or code edits.
All 48 cases pass: lower/uppercase keys, unsigned-byte APS storage (256 becomes
0 and -1 becomes 255), numeric prefixes, and case-insensitive exact `true` for
the two flags. Numeric `1` and whitespace-padded `true` do not enable them.
Result and source hash: `work/xml2-integration/harming-parser-oracle/result.json`.
Inherited-field interpretation and damage operand binding are not covered.

Shared metadata tests verify mixed-case updates, unchanged percent-symbol
case, and retained flags. The rebuilt generated XML1 parser diagnostic also
passes with CLASS/DaMaGe inputs; native bytes and existing XML1 type selection
remain unchanged. Logs: `powerup-fields-build.log`, `powerup-fields-guest.log`.
No player executable or gameplay assets were modified.

Additional initializer inspection confirms `2A7B0` reads definition life
+24/+28, samples only a positive increasing range, writes instance life +4,
and records game-clock start +8 only for positive life. `28FF0` returns start
plus positive life, otherwise zero. These values cannot be replaced with host
wall time or assumed XML2 offsets. Runtime handler wiring, fractional delivery,
native persistence and both-game validation still remain outstanding.

## Boot14: live combat exposes another false-boundary edge

The preceding parser work was progress. A fresh hidden, muted XML2 runtime
regression (PID26088, now exited) advanced from startup through New Game,
opening FMV, dialogue, party movement/switching, a working door interaction,
the scripted Sabretooth/Mystique separation and the first enemy encounter.
Native captures `captures/boot14-1.bmp` through `-33.bmp` were each inspected
in sequence. They show the expected menu background, intact character meshes,
HUD, rooms and dialogue. Several early movement commands reached walls; the
successful route included switching to Wolverine, navigating around the first
obstruction, proceeding past the fan, and opening the door with X.

At the encounter, the process terminated with `[FATAL ICALL] target=00062075`
(stderr line18460). Capture34 was requested but never produced and provides
no visual evidence. No process remained after the failure. Logs are
`shared-boot14.stdout.log` and `shared-boot14.stderr.log` under the integration
work directory. Audio was muted; saves and completed combat remain unverified.

Original `61D46` zeroes AL, and `61D48` jumps to `62075`, skipping the normal
return-value load at `62071`. The recovered chunk incorrectly called missing
`sub_00062075` across the same false function boundary previously repaired for
62006/62071. `prepare-xml2-combat.py` now restores this local jump and creates
the exact interior label before the security-cookie load. It preserves AL=0;
redirecting to 62071 instead would corrupt the rejection result. Archived code
and game assets are unchanged.

The expanded original-x86 comparison passes 32 existing branch cases, four
rejection cases and the RET16 register/stack epilogue. Evidence is under
`combat-oracle-v2`; the rebuilt XML2 runner succeeds (`combat-rejection-build.log`).
These isolated checks do not prove full combat. A new live encounter regression
is required for this correction. Player XML1 staging remains unchanged and the
full integration goal remains open.

## Boot15 navigation timeout; frame-scheduled process-local replay

Boot15 PID7020 reached gameplay but did not reach the encounter before its
1200-second diagnostic watchdog terminated it. Captures1-31 were inspected;
capture32 was requested at termination and was not produced. Camera rotation
and repeated fan-room navigation consumed the run. A private Options attempt
changed View Follow to Off, then exited via Back; persistence of that change
is not established. This run does not verify the combat correction.

Added optional `XML2_TEST_REPLAY` to the diagnostic runner's process-local pad.
`src/xml2_test_replay.h` consumes a bounded, ordered file of native-frame pad
commands, rejects overlap/malformed input/missed frames, and returns to the
existing command-file interface after EOF. It uses no OS input or desktop
control. The 34 accepted commands from boot14 were extracted with their actual
logged native frames into `work/xml2-integration/boot14-replay.txt`; final input
is A at frame21832, immediately before that run's combat failure. Command35
was never accepted in boot14 and is intentionally absent.

The runner builds. `xml2-replay-test` passes normal scheduling/idle/compound
input/EOF checks and verifies exit4 for missed frames and overlapping commands.
The first test build needed the XboxRecomp src include root; corrected build
passes. Replay reproduces input timing, not guaranteed game state: actual
captures and gameplay outcomes still require inspection.

Boot16 has been launched hidden/muted with this replay and the repaired combat
runner. Its PID is recorded in `work/xml2-integration/boot16.pid`; revalidate
the process before continuing, rather than infer liveness from this record.
Logs: `shared-boot16.stdout.log` / `shared-boot16.stderr.log`; native capture
request file `captures/boot16`. No claim of successful combat yet. Goal active.

## Harming flag replacement, exhaustive original-code check

The first scalar parser oracle started with both low flag bits clear and could
not distinguish setting from replacing them. Original XML2 instructions
14EA44-14EA53 and 14EA7E-14EA92 replace bit0 (`use_tint`) or bit1
(`use_trait_scale`) using XOR/AND/XOR. Any value other than case-insensitive
exact `true` clears the selected bit, including on an already enabled or cloned
definition; all other bits survive.

Expanded `scripts/xml2-harming-parser-oracle.py` across all 256 starting flag
bytes, both key casings and the existing eight values. All 8,208 original-x86
cases pass, including the APS cases. Evidence and input hash are in
`work/xml2-integration/harming-parser-oracle-v2/result.json`. This establishes
parser behavior, not an installed XML1 harming handler or gameplay acceptance.

Boot16 remains live at this check (PID27268, command14 accepted). Native
captures1-3 were inspected in order: the 3D title backdrop, opening Nightcrawler
dialogue and subsequent Cyclops dialogue contain the expected scene and models.
The replay has not yet established successful combat. Audio remains muted.

Capture4 subsequently proved replay divergence: Cyclops's final opening
dialogue was still waiting for A while the recorded movement commands ran.
Stopped diagnostic PID27268 rather than treating those commands as gameplay.
This run therefore does not validate the 62075 combat repair. Captures1-4 were
inspected individually, in order; the last two showed the same dialogue.

Added optional `XML2_TEST_REPLAY_CANCEL` marker path. Creating the marker
permanently abandons remaining scheduled commands and returns to the existing
process-local command file (use an ID greater than the last accepted ID).
Cancellation takes precedence over a missed replay frame; removing the marker
does not resume stale input. Normal scheduling, EOF, missed-frame rejection,
overlap rejection and cancellation tests pass. The diagnostic runner rebuilds
successfully (`replay-cancel-runner-build.log`). No host input is generated and
the staged XML1 executable is untouched.

Started boot17 hidden/muted with only boot14's first 13 opening commands
(`boot17-opening.txt`), then command-file handoff. PID23212 at launch;
revalidate it before continuing. Logs are `shared-boot17.*.log`, capture marker
`captures/boot17`, cancellation marker `boot17.cancel`. The diagnostic watchdog
is 1800 seconds. After opening EOF, command IDs must exceed13. Navigation and
combat require current visual inspection; no successful encounter claim yet.

## Boot17/18 renderer failures and producer serialization

Boot17 cancellation was accepted at native frame1067, discarding ten commands.
It then exited on worker pipe loss at frame1069. Preserved worker evidence
`boot17-renderer-errors.log` identifies HRESULT88760868 (`D3DERR_DEVICELOST`),
not a protocol-version error. Capture1 was inspected; requested capture2 was
not produced. Added expression/file/line reporting to checked Direct3D calls
without changing error behavior; renderer rebuild passes.

Boot18 separately reproduced stream drift at frame342:
`Invalid replay version: bytes=0002000000010000 batch_depth=0`.
Worker logs are preserved as `boot18-renderer*.log`. Capture1 showed the
Activision intro; requested capture2 was not produced. Both processes were
confirmed terminal before starting a replacement.

The recovered graphics producer guarded clear/flush/swap but left draw-packet
construction and graphics-state mutation unguarded. The XML2 build adapter now
serializes the entire graphics observation and viewport-constant update with
submission. Per-thread nesting retains the fair-gate ticket when an observation
calls an existing clear/fence helper. This corrects a source-level race that
could expose/reset a partially built draw; live evidence has not yet proven it
caused the observed stream drift or that all renderer failures are resolved.
Archived recovered inputs and staged XML1 remain untouched.

`xml2-transport-test` compiles the actual generated locking functions. A second
thread cannot submit a half-built draw, an inner fence release cannot unlock
the outer draw, and submission proceeds after the complete draw is published.
The test and runner builds pass. Initial adaptation failed on an unsigned vs
uint32_t signature anchor; corrected generation/build succeeded.

Boot19 uses the corrected runner and diagnostic worker, hidden/muted, with
13 opening replay commands and optional `boot19.cancel` handoff marker. PID13968
was live at the latest check (CPU154s); revalidate it. Logs `shared-boot19.*.log`,
capture request `captures/boot19` currently1. Capture1 was inspected and shows
the complete XML2 main menu with its 3D background and New Game selected.
The watchdog is1800 seconds. No successful combat claim yet.

## XML2 → XML1: getDistance script command

After the scope correction, standalone XML2 work stopped. The first additional
missing script command implemented is XML2 `getDistance` (B66E0, signature f/aa).
Original code resolves both entity arguments, returns -1 when either lookup
fails, otherwise calculates the Euclidean distance between float positions
at +20/+24/+28 and creates a native float script value. It does not round each
coordinate to integers.

`raven_script_extensions.c` adapts this through XML1's native name/handle
resolver9AE60 and entity lookup6BF80 (traced from getPosX9B0C0), and its float
value allocatorCA950 (traced from getHealth9C370). The separate extension block
now contains four descriptors in192 bytes; the fixed native command map is
unchanged. Diagnostic logging remains opt-in.

The XML1 build passes. Private parsed-script run `distance-parser-v1` executed
`getDistance("__missing_distance_a__", "__missing_distance_b__")` and logged -1
with two null entities. Existing extension dispatch, result and stack tests
passed. Captures1-4 were inspected in order: intro movie, Cerebro main menu,
loaded Central Park gameplay, then Wolverine movement. Renderer error log was
empty at inspection. Muted audio is unverified. Real-entity distance, fractional
coordinates and expression chaining still need checks before command acceptance.
The run ended on its bounded diagnostic watchdog (exit3); the wrapper passed,
restored the private intro script and verified the player script hash. Result
JSON records unchanged userdata. The player EXE remains the Angel build, hash
000550136384554438e9aa8469a50bc1dcf6fb5f35b86cd5d0cb260a3362784d.

### getDistance live entity validation

`distance-live-v1` added a temporary level-start script solely in the private
XML1 fixture. Native `_ACTIVE_HERO_` resolution returned Wolverine, with position
(923.975281,339.085114,-178.996918). The map entity `trigger_checkobj` resolved at
(2976,392,-226). Script results: self-distance0, distinct distance2053.24487 in
both directions, and -1 for an existing source with a missing target. Native
`fadd`/`fmul` expressions consumed the distance float, and `strcatint` produced
`distance_float_1`, verifying expression chaining rather than just logging an
internal C result.

`scripts/xml2-distance-oracle.py` runs original XML2 B673A..B6778 in Unicorn
with the live positions/null states. All four outputs match the XML1 command's
float bits; `distance-live-v1/original-comparison.json` records source/log hashes.
This isolates arithmetic; the live XML1 script separately covers name resolution,
native value creation and expression consumption.

All four native captures were inspected individually in order: intro animation,
Cerebro main-menu background, loaded Central Park gameplay and movement.
The worker log contains only the pipe EOF at producer shutdown, with no rendering
failure. Diagnostic watchdog ended the run (exit3),
wrapper assertions passed, userdata hashes are unchanged and the temporary
level-start script was removed. Audio was muted. These checks accept this
command for the exercised cases; they do not complete missing combat handlers
or the overall goal. No player executable or asset changes were staged.

## Missing combat event: ce_filter_event decision implementation

Sunfire's powerstyle declares event_filter with filteractor=true, passtag101,
failtag102 and victimeventtag100. These select different subsequent harming
triggers for actors versus other objects. XML2 CCEFilterEvent's actual vtable
4A2620 supplies actor-path F6AB0, generic-target path F6B60, common predicate
F6BD0 and tag dispatch F6A70. Parser F6860 maps noboss/ filterhumanoid/
filteractor/noactor to bits0..3; noskirmish sets bit4. Pass/fail tags and maximum
danger rating are bytes; team_filter uses29(hero),30(enemy),32(any).
Constructor10A0E0 defaults tags0, maximum danger255, team32 and low flags0.

Implemented `raven_filter_event.c/.h` as the target-independent decision core
for the XML1 adapter. It preserves the separate actor/non-actor paths: noactor,
noboss, humanoid and danger restrictions apply in the actor path; filteractor
applies in the generic path. Both apply common team/skirmish restrictions.
The danger comparison rejects strictly greater values; equality and unordered
values follow the original x87 branch. Returned tag0 means no dispatch.

The compiled code passes2304 cases against original XML2 methods and original
tag dispatch using `scripts/xml2-filter-event-oracle.py`. External actor/team/
skirmish queries are controlled boundary inputs, not claimed as native XML1
queries. The matrix varies all five flags, both entry paths, team matches and
mismatches, target classifications, danger boundaries/NaN and zero tags.
Evidence: `work/xml2-integration/filter-event-oracle.json` includes source and
test-DLL hashes. The DLL is a test artifact, not a player dependency.

Still required: XML1 event registration, parser/copy/lifetime integration,
native target-property queries and follow-up event dispatch, then live combat.
The decision core alone does not establish that imported filtering works in
XML1. No game was launched or player staging changed for this isolated check.


### XML1 native event lifetime and XML2 filter attribute parser

The current scope remains missing XML2 combat/script functions in XML1. These
checks do not establish imported-character combat acceptance.

`scripts/xml1-event-pool-oracle.py` executes the original XML1 event factory and
pool methods without replacing any constructor, destructor or allocation code.
The 780 slots are 60 bytes each. E6040 returns a generation handle, not a raw
object pointer; E4DA0 resolves it and E6CC0 retires it. Unknown `ce_filter_event`
is rejected, its temporary slot is released, and its generation advances.
The test fills the factory, verifies exhaustion, retires a live event, confirms
same-address reuse with a new handle, rejects stale handles/double retirement,
and releases every live event. Stack and nonvolatile-register checks apply to
every call. Evidence: `work/xml2-integration/event-pool-oracle.json`.

The intended extension point is the unknown-type branch E6C6D after all native
type comparisons. A supported extension must initialize the already allocated
slot and join the native successful return path E60DD/E6C8D, preserving native
capacity, initialization bitmap, generation handle and destructor ownership.
This extension is not yet wired. Do not substitute a separately allocated host
object or return a slot pointer to handle consumers.

`raven_filter_event_parse` now implements the fields traced from XML2 F6860.
Boolean fields replace their individual bits using case-insensitive `true`;
pass/fail tags and maximum danger retain the low byte of decimal conversion;
team values hero/enemy select 29/30, unknown team values preserve prior state;
`noskirmish` sets its bit regardless of its value. Unrecognized fields return
zero so the eventual adapter can delegate to XML1 base-event parsing.

The rebuilt compiled core matches 432 original-parser/CRT executions (including
mixed case, false values, negative/wrapped numbers, unknown team values, and
preserved high flag bits). Its 2,304 existing original-code decision/dispatch
comparisons also pass. Evidence: `work/xml2-integration/filter-event-oracle.json`.
The exported DLL is a test shim, not a player dependency.

Remaining: XML1 factory registration, native vtable/parser/copy/destructor
integration, live target-property mapping and follow-up event dispatch, followed
by actual imported-character combat verification. No player executable or game
assets were staged by this change, and no gameplay/audio/visual claim is made.


### Filter event copy and XML1 base-method mapping

The filter core now copies its subtype fields with the original XML2 semantics:
pass/fail tags, max danger and team transfer; only low five flag bits transfer,
with high destination bits preserved. `xml2-filter-event-oracle.py` runs 1,024
comparisons against original 10A130, including its real RTTI checks and base
copy routine. No RTTI or copy branch is stubbed. Existing 2,304 decisions and
432 attribute-parser comparisons still pass in the rebuilt test DLL.

Do not copy XML2's vtable verbatim. XML2 adds a type-query method at slot 6;
its copy method is at slot 7 (+1C). XML1's copy method is slot 6 (+18). The
XML1 base event vtable at 3D5B48 provides:

| Offset | XML1 method | Integration purpose |
| --- | --- | --- |
| +00 | CEDB0 | Base scalar deleting destructor (pool passes zero) |
| +04 | 340CF2 | Abstract character dispatch; must be replaced |
| +08 | E3F60 | Generic target-to-character dispatch; filter needs its own path |
| +0C | E3EF0 | Walk attribute node and call virtual parser at +10 |
| +10 | E3FB0 | Base attribute parser; delegate unknown filter fields here |
| +14 | D7E20 | Base lifecycle callback, returns true, pops one argument |
| +18 | CEE80 | Base copy, preserving destination owner and vtable |
| +1C | 13D370 | No-op method, no stack arguments |
| +20 | CEDA0 | Base float-returning method |
| +24 | 2751C0 | Existing final base slot; not yet characterized |

The earlier E5460 fallback constructor belongs to a subtype with string/resource
fields and is not a suitable constructor template for filter events. Use the
base ownership contract. `xml1-event-pool-oracle.py` now additionally executes
original E3FB0 for time=-1, tag=100 and four loop/time flags; executes CEE80 and
checks the destination owner/vtable/subtype bytes remain unchanged; executes
CEDB0 with the pool's nondeleting argument and verifies its stack contract.

Filter integration is still incomplete: no factory hook or active guest filter
vtable has been installed. Live XML1 property queries and owner tag dispatch
must be resolved before enabling the handler. These tests establish parser and
copy behavior, not combat or gameplay acceptance.


### Native filter target queries and the missing skeleton property

XML1 native team getter is 26E60; XML2 is 294E0. XML1 reads entity+4 bits
27..29 and charm at entity+6C bit4; XML2 reads bits29..31 and charm bit3.
XML1 returns 26/27/28/29 (neutral/hero/enemy/third team), XML2 28/29/30/31.
The filter adapter must call XML1's native getter and translate the result;
`raven_filter_event_xml1_team` now implements this enum mapping. Do not read
XML2 bit offsets from XML1 actors. `scripts/xml1-filter-target-oracle.py`
executes both original getters with all 8 team-bit combinations and both charm
states, comparing the compiled mapping. All 16 comparisons pass.

Native skirmish query XML1 BF750 reads byte 4E7AB0 and compares to FD;
XML2 D7A10 reads 602E98 and makes the same comparison. All 256 possible mode
bytes were compared through original instructions with no mocked queries.
Evidence: `work/xml2-integration/filter-target-oracle.json`.

The generic actor bitmap query already appears in XML1 E3F60: target virtual
slot zero returns a type descriptor; test the bit at global485878+21h in its
bitmap beginning +14. XML2's filter uses global58BDCC+24h instead. Preserve
the XML1 type system rather than carrying over the XML2 bit index.

XML2 filterhumanoid is specifically the character definition property
`nonhumanoidskeleton`, parsed at CA93A..CA97A into charstate+2AE bit7.
The property string is absent from the original XML1 image. It needs explicit
import/runtime metadata support, not an assumed false value or an unrelated
XML1 flag. XML1 dangerRating parsing at B0A57..B0A7F stores float charstate+478;
XML2's filter reads charstate+4EC. These field observations are traced, not yet
validated as a live target adapter.

XML1 damage processing at 92376..92386 dispatches VictimEventTag by calling
owner virtual+14 with (tag, victim, attacker), matching XML2 F6A70's three-
argument owner contract. This establishes the dispatch shape; the filter
still needs its native owner assignment, property adapter and registration.
No player build changed and no gameplay validation is claimed.


### Skeleton property now imported by the XML1 character parser

The previously missing `nonhumanoidskeleton` property is now handled at XML1
AFD70's actual entry, with native thiscall return/stack cleanup. Other fields
continue through the original parser. `guard-character-filter.py` reapplies the
hook after regeneration and requires the existing character layout guard first.
It is idempotent. The compiled filter library is now linked into the development
XML1 executable; event registration itself remains unfinished.

The current expanded CharacterDef is already 488h bytes. Existing extra skins
occupy 484h..486h; the formerly unused 487h byte now holds character combat
flags, bit0 representing nonhumanoidskeleton. No further object growth and no
host metadata map were added. B1640's existing appended-word reset clears the
flag when storage is reused. Property assignment preserves other flag bits and
all adjacent costume bytes. Saves retain their existing state layout; this is
a definition property. Definition-copy paths still need explicit auditing.

Validation: the compiled property parser matches 48 runs of XML2's complete
original C9390 character parser, including mixed-case names/values, repeated
true/false assignments, numeric values and preserved unrelated flag bits.
All previous filter oracle cases pass. The rebuilt development executable's
`--progression-test` runs the real generated B1640 constructor on poisoned
storage, checks reset and the allocation-end canary, then runs AFD70 through
four imported assignments and native dangerRating=7.5 fallthrough. It verifies
stack balance and that assignments touch only the reserved byte. Existing
progression/save/costume tests also pass. No game entry, renderer, audio, host
input, save-file I/O or player staging is used by this test.
Evidence: `work/xml2-integration/character-filter-generated.log` and `.json`,
plus the updated `filter-event-oracle.json`.

Unverified: live herostat loading, definition-copy paths and target access to
this property, filter dispatch and combat. No gameplay/visual/audio acceptance
is implied by this generated-code test. Player executable remains unchanged.


### XML1 character-property reader connected to filter decisions

`raven_filter_xml1_character` now resolves the native actor+2D8 definition
pointer and reads dangerRating at definition+478 and the imported skeleton flag
at +487 bit0. It uses the existing bounded guest-read interface, rejects null,
overflowing and unreadable pointers, and leaves outputs unchanged on any read
failure. It does not cache definitions or synthesize defaults. Only danger and
skeleton fields are assigned; native team/type/boss and owner dispatch remain
the eventual event adapter's responsibility.

The generated-code progression fixture now takes a CharacterDef populated by
the actual AFD70 parser, points a private actor fixture at it, and passes those
read values into the compiled filter decision. It verifies nonhumanoid failtag,
humanoid passtag, danger-threshold failtag, and three invalid-pointer cases.
The development build and complete --progression-test pass. The log's phrase
"live property reads" means current fixture memory, not live gameplay; the
process does not enter the game or instantiate an actual combat actor.
Evidence and executable hash are refreshed in character-filter-generated.json.

Definition-copy auditing remains incomplete. The native vtable at 3D3E18 has
only a destructor before adjacent data, so no virtual clone can be assumed.
Existing save snapshots operate on the embedded 1E4h CharacterState, not the
complete definition. No copy hook was invented or added based on absence of a
virtual method. Need finish actual allocation/load/copy caller tracing before
claiming reload/inheritance preservation. No factory registration, live combat
or gameplay acceptance is established by the property reader test.


### Correction: noboss excludes a selected entity handle, not a class

Earlier notes that described global58BDFC/5A9F74 as boss class IDs were wrong.
XML2 target+1C is an entity handle. 5A9F74 is also the null-handle sentinel used
by the native _ACTIVE_HERO_ resolver. 58BDFC is assigned by 2C380 from its handle
argument. CMultiplayer singleton9C3F0 (vtable498F34) virtual+5C calls9C0E0,
which returns instance+10 bit0. F6AB0 chooses null sentinel when this is true,
otherwise global58BDFC, then excludes a matching target handle. The separate
native getter4D910 makes exactly the same selection.

The filter oracle no longer mocks the multiplayer singleton/getter. It seeds
native singleton state and executes original code for both mode values, with
target handles matching the designated handle, another handle and the null
sentinel. This doubles decision coverage from2,304 to4,608 cases. The core's
is_boss input is documented as this exact predicate, not a class test. Preserve
the original null-sentinel comparison; do not add a nonzero guard.

XML1 CMultiplayer was mapped independently through RTTI: vtable3CF744, singleton
8A600 at4A01A0, corresponding getter virtual+54 at8A320, same instance+10 bit0.
The XML1 designated-handle source is not yet established. Do not substitute
an enemy boss heuristic, actor type, or the active player handle. Native event
registration remains pending this exact mapping and other integration checks.


### noboss default-target mapping resolved

XML2 script table identifies B4C60 as `setDefaultTarget` (n/a). It resolves an
actor, sets its 3DCh bit2, and calls 2C380 to publish the handle at58BDFC; invalid
actors clear it. XML1 already has `setDefaultTarget` at9DAD0, which resolves and
classifies the actor with XML1's native type system, then calls2F280 to publish
4858AC (or zero). No replacement script command is needed.

`raven_filter_xml1_default_target` now reads the native multiplayer state and
selects4858AC or the native null sentinel498D90, then compares actor+1C. It
requires8A600 initialization (4A01C8 bit0) before reading the singleton; failure
leaves outputs unchanged. It implements the filter's historical `noboss` name
as an exact default-target handle comparison, not a class or boss-enemy test.

`xml1-filter-target-oracle.py` executes both native setters2F280/2C380 and
XML2 native getter4D910, with both real CMultiplayer singletons initialized by
their original code. The compiled XML1 reader agrees in3,072 combinations of
multiplayer flag bytes, designated handles and target handles, including null
sentinels and high-bit handles. Uninitialized state is rejected. Existing16
team/charm comparisons and256 skirmish-mode comparisons still pass. Evidence:
`work/xml2-integration/filter-target-oracle.json`.

This resolves the previously unknown default-target source. The remaining
filter work is guest vtable/factory wiring, native actor-type query, native
owner dispatch and actual combat validation. Definition-copy/load auditing
also remains open. Player build unchanged.


### Filter event registered in XML1 native factory

`raven_filter_guest.c` now supplies the XML1 event adapter. The unknown-type
factory branch E6C6D recognizes ce_filter_event after all retail types miss,
initializes the already allocated 60-byte slot and rejoins E60DD's normal
handle return. `guard-filter-event.py` installs this and the exact thunk-token
validation after regeneration. The manually registered dispatcher resolves the
four filter methods. The guard is idempotent.

The vtable uses XML1 slot positions, base parser E3FB0 and copy CEE80, native
nondeleting destruction and native zero-default energy accessors. A preceding
XML1 base-event RTTI locator supports native base-type inspection; same-subtype
copy uses the exact extension vtable. Filter fields occupy +14..1B in the native
slot. Owner assignment remains native, including E3907 after event copying.
ECCD0's factory/parse caller and E38BA's cloning caller continue through their
existing virtual methods; no separate host event ownership was introduced.

Dispatch reads native team/skirmish state, classifies generic targets through
the native type-descriptor virtual method and XML1 bitmap index, reads the
character definition fields, and uses native multiplayer initialization for
default-target exclusion. A nonzero chosen tag calls owner virtual+14 with
(tag,target,context) and normalizes the low-byte return. Zero tag or owner
means no dispatch. Unreadable required properties fail explicitly rather than
silently passing an invalid target.

The rebuilt development executable's --filter-event-test passes with real
generated pool/factory/parser/copy/retirement functions and the new indirect
method registration. It checks owner arguments and return normalization,
positive/negative actor bitmap paths, skeleton/danger tag choices, zero-tag
suppression, retained destination owner on copy, stale handles, 780-slot
exhaustion and clean same-address reuse. The owner virtual method is a private
diagnostic recorder; no gameplay consumer is being claimed. The diagnostic
preinstalls vtable storage in private mapped memory, so production allocation
through123490 still requires a live load test.

--progression-test and --powerup-definition-test also pass after this change.
Evidence: filter-guest-test.log/.json and filter-regression-*.log in
work/xml2-integration. The original player executable remains unchanged.
Still unverified: production vtable allocation, actual asset loading, native
owner gameplay effects, definition inheritance/copy, and visual/audio combat.
The broader missing-handler goal remains active.

### Filter dispatch verified through the real XML1 owner

The extended `--filter-event-test` now passes through native owner vtable
3D8BDC, tag lookup E1960, index/handle resolution E2110 and event execution
E1D90. A native ce_invulnerable follow-up with tag101 and duration -1 changes
the target's invulnerability field at +254 to -1 through D8580/90EE0. This
path uses no recording substitute for the owner or follow-up effect.

The same fixture verifies that an absent failtag leaves the actor unchanged,
and the native only_looped flag rejects a non-looped target and accepts one
with +336 bit20 set. Stack balance, pool retirement, cloning and the existing
capacity/reuse checks all pass. The fixture seeds the real manager vtable and
an isolated pool; it does not establish production manager allocation or
asset loading. Progression and powerup-definition regression tests also pass.

Updated evidence: `work/xml2-integration/filter-guest-test.log/.json` and
`filter-regression-progression.log` / `filter-regression-powerup.log`.
Development executable SHA256:
`d5ad8b74b68bb7323cf8625f5e05f5d50e4530f12bcf5926caeffb8677385f82`.
The player executable is unchanged. Production allocation, definition
inheritance/load, imported combat, visuals and audio remain unverified.
The harming handler is still metadata/timing support only, not installed;
this test does not establish Sunfire or Bishop acceptance.

### Harming tick and damage-delivery gates traced and implemented

`raven_numeric.c` now implements the original CPUHarming due predicate,
self/skirmish damage gate and damage-record flag transformation. Original
14EF1A invokes the attached object's time getter and requires next_tick < now;
equality and unordered times do not tick. 14F02B suppresses a source/target
handle match unless native skirmish mode is active. 14F03C suppresses both
signed zero values but permits negative and unordered damage to reach the
consumer; no extra positivity or finite-value policy was introduced.
14F097 preserves record bits 0,2,7, forces bit1, clears bits4..6, and replaces
bit3 from definition flag bit1. These are XML2 record semantics, not permission
to write the same byte offset into an XML1 record.

The expanded `scripts/xml2-harming-oracle.py` executes original instructions
and native accessors without replacing instructions or mocking returns. It
compares the compiled implementation against 64 due cases, 4,096 self/skirmish
and damage combinations (all 256 native mode bytes), and all 65,536 pairs of
definition/record flag bytes. The existing 2,560 scheduler/damage comparisons
also pass. Evidence: `work/xml2-integration/harming-oracle/result.json` and
`harming-oracle-run.log`; the numeric regression executable passes as well.

Further trace: activation 14EBA0 sets the initial scheduled time to current
game time; think 14EEA0 revalidates the active handle after damage delivery
before scheduling again at 14F13E. Native callbacks can retire the instance,
so the XML1 adapter must not reuse an instance pointer after delivering damage.
Deactivation 14EC80 includes restoration of another active effect's tint;
implementing only a damage timer would omit that behavior. The trace is saved
in `work/xml2-integration/harming-dispatch-disassembly.txt`.

These compiled policies are not yet connected to XML1's active-powerup
callbacks. Harming operand evaluation, delivery, tint lifecycle and imported
gameplay acceptance remain unfinished. No player build was replaced.

### Capture active-instance identity before native callbacks

`raven_xml1_active_powerup_identity` now converts the instance pointer passed
to XML1 lifecycle callbacks into its current generation-tagged handle. It
requires an aligned slot inside the native 128-slot pool, matching generation
index bits and occupied state. Missing/invalid inputs leave the output
unchanged. Callers must retain this handle before native damage delivery and
resolve that same handle afterward; looking up a fresh handle from the old
pointer could accidentally adopt a newly allocated effect at the same address.

`xml1-powerup-handle-oracle.py` now exercises original 299B0 pool construction,
29B90 allocation, full-pool exhaustion and 2A730 destruction, followed by 128
new allocations and rejection of every old handle. No native instructions are
patched. The compiled view matches 1,664 original-handle cases, also checking
pointer-to-current-identity conversion and malformed-pointer rejection.
Evidence: `work/xml2-integration/xml1-handle-oracle/result.json` and
`xml1-handle-oracle-run.log`. This verifies the lifecycle primitive needed by
the harming adapter; it does not install the handler or establish gameplay.

### Harming damage operands retain floating-point ranges

Original 14EF58 calls C31A0 and then 16E190 with float endpoints, unlike the
ordinary attack path's signed-short conversion. `raven_harming_operand` now
binds captured XML1 definition metadata to an explicit talent catalog, or
parses a literal range using the existing XML2 literal reader. Missing damage
defaults to zero as in constructor 158F90. Ordinary XML1 definitions remain
unbound; unresolved imported symbols throw instead of becoming zero damage.

Evaluation reads the selected XML1 actor's current native talent rank on each
use and preserves floating endpoints, reversed ranges and values above 32767.
The caller supplies one native RNG sample per eligible tick, including equal
ranges; this evaluator neither advances an RNG nor retains actor/rank state.
Unlearned or invalid actor results leave the caller's output unchanged.

`raven-harming-operand-test` passes XMLB-to-native-rank evaluation with two
actors, fractional endpoints, rank changes, destroyed/unlearned actors,
literal reversed/large ranges, and captured-definition clone/retirement/reuse.
Its talent values and guest actors are controlled fixtures, not an imported
Sunfire gameplay run. Evidence: `work/xml2-integration/harming-operand-test.log`
and `harming-operand-build.log`. Sampling arithmetic follows the traced
instructions; this test is not a full x87 bit-equivalence oracle.

Production catalog loading, callback installation, native RNG consumption,
damage delivery and actual imported combat validation still remain. The
player executable has not changed.

### Harming operand evaluation selects the source actor

The 14EF38 call to 15E1E0 delegates through 15E100: after primary-source
eligibility, the first valid source handle wins, then the target handle, then
the queried actor. A valid source that fails the actor/context cast yields no
context; it does not fall through to the target's rank. 15E1E0 additionally
checks actor eligibility and returns its stats context. C31A0 resolves a
reference without a context to zero, while literal operands still evaluate.
Trace: `work/xml2-integration/harming-context-disassembly.txt`.

`HarmingOperand::evaluate_active` now composes XML1 generation/live-slot
validation and XML1 instance source/target offsets +18/+1C with this selection
and the operand evaluator. Entity validity and eligible-actor resolution are
explicit title-adapter callbacks; their production wiring is not yet supplied.
Unreadable/stale state fails without writing output. A valid non-actor source
produces zero for a reference, preserving the distinct literal path.

The rebuilt operand test passes source-versus-victim rank selection, sentinel
fallback, valid non-actor reference/literal behavior, stale source rejection,
and generation reuse rejection in addition to its previous checks. These use
controlled entity-resolution callbacks. They do not prove the still-missing
native actor-cast wiring, damage delivery or combat acceptance.

### Native XML1 entity queries available to the powerup adapter

`raven_powerup_guest.c` now bridges entity validity through generated 6BFA0
and the base actor cast through generated 293F0. Both use the native singleton,
manager vtable, generation/occupancy checks and entity type virtual method.
The wrappers retain the caller's stack and EAX/ECX/EDX; missing actor results
do not overwrite the output. No XML2 entity layout is used for these calls.

The expanded `--powerup-definition-test` passes with manager vtable3D4B7C,
native BDF80/BDF90 validity and BDFD0 pointer lookup, and native 2E6B0 returning
the fixture's type descriptor. It verifies actor versus valid non-actor,
generation change and reuse, cleared occupancy and stack balance. Existing
definition parser/clone/retirement tests also pass. Evidence:
`work/xml2-integration/powerup-native-callback-build.log` and
`powerup-native-callback-test.log`.

This is the base actor cast, not yet the additional eligible-character/stats
context predicate from XML2 15E1E0. It must not be passed as the complete
HarmingOperand eligible-actor callback without resolving that distinction.
Harming callback installation and damage delivery remain unfinished. The
development executable changed; the staged player executable did not.

### XML1 character-context eligibility adapter

Native XML1 powerup consumers 94CB0 and 94D20 query the same type bitmap as
293F0 before accessing actor+2D8. The existing native talent-rank path uses
stats at that component+4. This supplies the XML1-side eligibility rule;
XML2's +258 flag and +35C pointer must not be transplanted into XML1 objects.

`raven_xml1_guest_talent_actor` composes the real native actor resolver with
character-component presence and guest-address bounds. A missing component
returns MISSING (no talent context), while an out-of-range component returns
INVALID; neither overwrites the output. It is available as the eligible-actor
callback for HarmingOperand's XML1 instance evaluator.

The rebuilt `--powerup-definition-test` passes present, absent and corrupt
component cases alongside the native handle/type checks and existing
definition lifecycle tests. Updated evidence remains in
`powerup-native-callback-build.log` and `powerup-native-callback-test.log` under
`work/xml2-integration`. This is an XML1 title adapter based on native XML1
consumers, not a claim that the two titles share their character layouts.
Damage callback installation, delivery and imported gameplay remain open.

### Composed harming operand check with native XML1 callbacks

The development executable's `--powerup-definition-test` now takes the
metadata captured by the actual generated 955C0 parser, binds its harming
damage reference, validates an active instance, and resolves the source
through the native entity/character callbacks before evaluating the talent
rank and float range. Entity validity/type are no longer recording substitutes
on this composed path. The test uses a controlled talent catalog and native
guest data structures; it does not load a character package or run combat.

Checks pass for the expected fractional values at ranks1 and15, changing the
rank in place, a missing character component yielding no reference context,
and retirement of the original active handle leaving output unchanged.
Generated stack balance and the existing definition lifecycle tests pass.
Evidence: `work/xml2-integration/harming-composed-build.log` and
`harming-composed-test.log`.

This closes the isolated-test gap between definition capture, native actor
resolution and operand evaluation. The production catalog loader, installed
harming lifecycle callbacks, native RNG/timing, damage delivery, tint handling
and actual Bishop/Sunfire combat remain unfinished. No player executable was
replaced and no gameplay acceptance is claimed.

### Harming scalar settings compiled from captured definitions

`raven_harming_settings` implements the three scalar branches of original
14E9A0: byte-narrowed attacks_per_second and replacing use_tint/use_trait_scale
bits. Initialization follows 158F90 (APS3, tint enabled, trait scaling off).
Only exact case-insensitive true sets a flag; numeric1 does not. Unknown
fields remain unconsumed. APS0 is retained for the existing native-derived
0.33f interval policy, not treated as disable or clamped to1.

`read_xml1_harming_settings` reads the actual captured definition metadata,
recognizes harming explicitly and starts each snapshot with constructor
defaults. It keeps these imported settings outside XML1's unrelated native
field layout. The original-code parser oracle now builds and executes the
compiled parser against all8,208 native cases, including every initial flag
byte. The native definition fixture checks the settings snapshot after the
generated XML1 parser captures the fields; the composed operand test also
continues to pass.

Evidence: `work/xml2-integration/harming-parser-compiled.log`,
`harming-parser-oracle-v2/result.json`, `harming-settings-build.log` and
`harming-settings-native-test.log`. These settings are available to the
unfinished lifecycle adapter; no damage callback installation, tint rendering
or gameplay acceptance is established by these tests.

### Native simulation clock and RNG bridges for harming

`raven_xml1_guest_game_time` calls the real 72CF0 game singleton and virtual
slot104, whose native 6F240 reads game+39C. The adapter does not use wall time.
`raven_xml1_guest_random_unit` calls original 123330, retaining native initial
seeding and shared stream state at50622C. Its recurrence and float scaling
match the established-stream arithmetic of XML2 16DD90; XML2's diagnostic
counter and global addresses are not imported.

Both wrappers consume the native floating return and check the guest stack
and x87 stack depth, retaining caller EAX/ECX/EDX. The generated-code fixture
passes two current-time reads and two successive RNG calls from seed1, checking
both returned values and exact updated native seeds16807/282475249. Existing
entity, definition and composed operand tests also pass. This fixture seeds
an initialized game singleton and RNG; first-use constructor/seeding paths
are not covered by this check.

Evidence: `work/xml2-integration/harming-clock-build.log` and
`harming-clock-test.log`. These are native services for the pending lifecycle
adapter, not a registered damaging effect. The staged player build is unchanged.

### Harming timing operates on XML1 active-instance storage

`raven_xml1_harming_begin`, `due` and `reschedule` now compose the verified
generation/occupancy lookup, native XML1 clock, native 28FF0 end-time getter,
and XML2 scheduling rules. Activation captures the instance generation and
sets the first due time to the current simulation time. Reschedule accepts
the previously captured handle, rejecting retirement/reuse before any write.

The dedicated callback timer uses XML1 instance+24, the scratch field used by
native bleed callbacks, and leaves the native propagation timer at+34 intact.
These functions must be used by an exclusive harming handler; they are not
safe to layer over another callback that owns+24. They are not installed as
production callbacks yet. Scheduling retains the two native clock reads and
the native positive-life end-time behavior.

The generated executable fixture passes activation, equality/not-due,
time-advanced/due, ordinary half-second scheduling, a clipped final interval,
expiry without mutation, and reuse of the same slot with a new generation.
It checks the propagation canary and guest stack, then runs the composed
operand and existing definition lifecycle checks. Evidence:
`work/xml2-integration/harming-timing-build.log` and `harming-timing-test.log`.
Clock values are controlled native guest state; no visual/combat acceptance
or actual damage delivery is claimed. The full missing-handler goal is open.

### Physical damage trace closes missing mutation observations

The full native 92220 path was re-read from the XML1 XBE. Its local record at
ESP+20 changes after construction: 92301 zeroes damage, 92314 triples its low
word, 92332 substitutes DI after the nonpositive/type-mask branch, and 92413
zeroes it on another rejection path. At92946 it copies the resulting damage
back to the caller's record. The opt-in transport audit previously missed
these direct mutations/copy-back; `guard-raven-damage.py` now records them.
They update audit metadata only; native guest calculations are unchanged.

The same trace identifies remaining fractional branch consumers at92320
(positive damage), 923D4 (32000 special value), 925D6 (zero damage notification),
and9264A (health subtraction before death decisions). These must be handled
coherently before enabling fractional delivery. An adjustment after health
subtraction or a guessed ratio would skip native behavior and is not used.
Source trace: `work/xml2-integration/xml1-trace/physical-damage-disassembly.txt`.

The regeneration guard runs twice without duplicating hooks, the development
executable builds, and the existing powerup fixture passes with the audit
enabled, ending its tested timed-callback scope at depth0. This fixture only
tests the timed callback's null-target early return; it does NOT execute the
new physical-hit branches. Evidence: `physical-damage-audit-build.log` and
`physical-damage-audit-test.log` under `work/xml2-integration`.
Live physical-hit coverage and fractional branch/delivery integration remain
unfinished. Validation continues to target XML1 only.

### Explicit imported fractional-hit transport

`raven_native_damage_import_begin/end/value` now provide an explicit,
synchronous imported-hit lifetime. Only values seeded through that interface
carry the imported marker; ordinary native/audit seeds cannot be consumed as
imported floats. Existing copy, clear and traced modifier hooks operate during
that lifetime without requiring the diagnostic environment variable. No guest
damage field, branch or health value is changed by this interface itself.
Diagnostic printing remains gated by the explicit trace setting.

A new explicit `copy_back` operation updates the frame owning the caller's
record. Native92946 uses this instead of an ordinary scope-local copy, so its
returned modification survives the recipient frame's retirement. Normal
record copies retain their independent nested lifetimes. The regeneration
guard replaces the previous hook instead of adding a duplicate.

`raven-native-damage-test` passes fractional copies/modifiers, reentrant
imported hits, nested ordinary-hit masking, copy-back survival, cleanup and
address reuse. The existing10,000-lifetime record test passes. These are API
composition tests, not execution coverage for the full native physical hit.
The rebuilt development executable's powerup fixture also passes.
Build/test evidence is under `work/xml2-integration/imported-damage-*.log`.

The imported scope is not yet entered by an installed harming handler, and
the earlier damage gates/health subtraction do not yet consume its float.
Those integration steps and actual combat validation remain necessary.

### Physical-hit float consumers and native health-setter check

The generation guard now routes physical-hit consumers92320 (positive),
923D4 (32000 sentinel),925D6 (nonzero notification) and9264A (subtraction)
through `raven_native_damage_amount`. An explicitly imported record supplies
its float; all other records retain the exact native integer operand. The
health path substitutes the operand before subtraction and calls the original
virtual health setter. It does not apply a later corrective health write.
The pushed setter argument moves ESP by4, so the record lookup at the fild
replacement uses ESP+24 rather than the block-entry ESP+20.

`guard-raven-damage.py` also extracts that exact generated subtraction block
into a private test include. The new executable fixture executes it with the
original physical-entity vtable3C9204 and native setter2E5B0. Six cases pass:
native integer damage, fractional loss, negative resulting health, healing
with the native maximum cap, imported zero overriding a nonzero integer, and
ordinary native healing. Both guest and floating stacks balance. The fixture
stops before9266F; death callbacks/survival logic are not validated by it.

The imported-transport API test and the expanded native powerup fixture pass.
Evidence: `work/xml2-integration/physical-float-build.log`,
`physical-float-guest-build.log` and `physical-float-guest-test.log`.
The regeneration guard is idempotent. The three earlier physical predicates
are patched but not yet covered through complete physical-hit execution.
Character-context/attack-manager integer consumers and bonuses still need
their fractional integration; no installed harming handler or full imported
combat acceptance is claimed. The staged player executable is unchanged.

### Attack nonzero and minimum-damage consumers

The attack-manager guard now reads explicit imported amounts for the nonzero
capture at5C4B7, the post-scale positive predicate at5C55A, and the positive
gate at5C739. Ordinary records retain native signed-short comparisons. At
5C55A EAX has already been overwritten with1, so the fallback reads the
newly stored damage word rather than EAX. Existing scale/minimum hooks keep
the transported amount synchronized with those decisions.

The generated block from5C4B7 through the scaling/minimum epilogue is extracted
for a process-local fixture. Five direct scaling cases pass: positive fractions,
a fractional scaled result, a zero result forced to the native minimum, and
ordinary integer rounding/minimum behavior. Six additional cases execute
the actual nonzero capture and type1 direct-scale route: imported positive
fraction, zero, negative fraction, and native zero, positive, negative damage.
All check stack/FPU balance. The fixture wrapper declares EBP locally, matching
the generated frameless function; this corrected its initial build failure.

Release build and the full `--powerup-definition-test` pass. Evidence:
`work/xml2-integration/attack-fraction-build.log` and `attack-fraction-test.log`.
The5C739 branch and actor-stat scaling routes are not covered by these cases.
Complete character-context/bonus handling, installed harming damage delivery,
and actual imported combat acceptance remain unfinished. No player executable
was staged by this change.

### User priority and integer-damage delivery policy

The user now prioritizes whatever Bishop and Sunfire need to function, then
staging `XBOXgame/X-Men Legends.exe` with Angel, Bishop and Sunfire selectable,
before continuing the remaining missing functions. Existing characters must
remain intact. Angel's prior installation report exists; Bishop/Sunfire private
fixtures are inputs, not proof that the requested staging is complete.

The user explicitly accepts rounded integer hits with a nonzero minimum.
Fractional transport through XML1's whole damage pipeline is therefore no
longer a prerequisite. `raven_xml1_imported_damage_short` rounds each computed
hit/tick to nearest integer, ties away from zero, preserving true zero and
giving nonzero magnitudes a minimum of1. Nonfinite/out-of-range values fail
without modifying the output. Apply this at native record construction;
native downstream immunity/resistance still applies. The adapter is not yet
wired into an installed harming handler.

The numeric regression executable passes this policy and existing regressions
(`integer-hit-build.log`, `integer-hit-test.log`). Prior experimental fractional
consumers are gated on explicit imported scopes, currently used by fixtures;
do not wire those scopes into the new integer-delivery implementation. The
late-context multiplier/positive-gate fixture also passes in
`context-fraction-test.log`, but additional fractional-pipeline expansion is
superseded by this user direction. The requested three-character player build
has not yet been staged.

### Integer harming tick preparation uses native active state

`raven_xml1_harming_tick_amount` now composes active-handle validation, the
native due-time query, native28FF0 end-time getter, total-over-life tick
calculation, and the user-selected integer conversion. It clips the final
interval before rounding. True zero stays zero; expired/not-due/retired slots
leave the caller's amount unchanged and never acquire a minimum hit. The
function deliberately neither delivers nor advances the next tick, so delivery
can revalidate the original handle before scheduling.

The generated executable fixture passes not-due suppression, fractional
minimum1, nearest rounding (3.5 to4), true zero, clipped final tick (3.75 to4),
expiry, recycled identity and unchanged native propagation scratch. The full
powerup fixture passes (`integer-tick-build.log`, `integer-tick-test.log`).
This is native tick preparation, not installed damage delivery or gameplay
acceptance. Wiring definition dispatch, operand/profile loading and actual
damage delivery remains necessary before staging Bishop/Sunfire as working.

### Native integer damage-record construction

`raven_xml1_guest_damage_record` invokes original XML1 constructor2C8C0
using the native timed-hit argument layout from2CE70: source handle, signed
damage, zero secondary/auxiliary values, caller-translated XML1 type/flags,
priority10 and three native zero vectors. It bounds-checks and initializes
the100-byte destination and preserves caller registers/stack. It does not
guess XML2 enum mappings or deliver the record by itself.

The native powerup fixture now passes an actual prepared integer tick into
this constructor and verifies source, damage, type, flags, priority, zero
vectors, adjacent canaries, bounds rejection and stack balance. Release build
and full fixture pass (`integer-record-build.log`, `integer-record-test.log`).
Original XML2 harming delivery14F123 supplies hit arguments0,1,0, unlike
XML1 bleed's1,1,0; carry that distinction into delivery instead of wholesale
reusing the bleed callback. Trait flags, native type mapping, handler lifecycle
installation and actual imported combat remain unverified/incomplete.

### Synchronous integer-hit delivery bridge

`raven_xml1_guest_harming_deliver` now resolves the current XML1 target handle
through native actor lookup and calls its actual+A8 damage virtual with the
record,0,1,0 argument sequence traced from XML2 harming. It checks record and
vtable access bounds, preserves caller scratch registers, verifies stack
balance and retains no actor pointer after the synchronous callbacks. FOUND
means the method ran; it does not override native immunity or promise a health
change. Scheduling must still revalidate the original active-powerup handle.

The fixture calls original92220 through a private actor vtable and verifies
its native dead-target rejection, then verifies stale-target suppression.
The full fixture and Release build pass (`integer-delivery-build.log`,
`integer-delivery-test.log`). This establishes delivery ABI only: a live hit,
trait/type mapping, activation/think registration, profile loading and imported
gameplay remain unfinished. Player staging remains unchanged.

### Composed integer tick execution

`raven_xml1_harming_apply_tick` joins due/amount preparation, the self-hit
predicate, private stack-backed record construction, synchronous native target
delivery and rescheduling through the original active handle. Reentrant native
callbacks get independent records; no singleton scratch record or old-instance
identity is retained after delivery. Its caller must supply evaluated damage,
translated type/flags and actual skirmish state. It is not installed yet.

The native fixture passes this sequence with original92220's dead-target
rejection, observes next time25.75 from25.25, and verifies stack restoration.
Full fixture and Release build pass (`integer-composed-build.log`,
`integer-composed-test.log`). Live health changes remain unverified.

Normal-gameplay operand loading remains a blocker to callback installation:
`raven_native_energy.cpp` still loads only the explicit test environment catalog.
The private imports contain original `Data/talents/bishop.engb` and
`Data/talents/sunfire.engb` (and XMLB variants); shared XML2 talents must not
replace XML1's same-path resources. No production loader or player staging
change was made in this step.

### Startup character talent catalog

Normal startup now loads selected-language `data/talents/*.engb` (or the
configured three-letter language plus `b`) through `raven_imported_talents`.
The loader preserves original paths, reads character resources only, leaves
same-path XML1 shared_talents untouched, and rejects duplicate talents/symbols
before publishing an immutable catalog. Missing character resources leave
imports inactive. The energy-cost adapter uses this startup catalog before
its existing private-test environment resource. Harming can access the same
catalog; that callback integration remains pending.

Both original Bishop and Sunfire catalogs load separately and together.
Tests cover language selection without implicit fallback, ignored shared
resources, invalid language, duplicate rejection and unchanged active catalog
after a failed reload. Release executable and catalog tests pass; the native
powerup fixture also passes. Evidence: `import-catalog-final-build.log`,
`import-catalog-final-test.log`, `import-catalog-test.log`,
`import-catalog-combined-test.log`, `import-catalog-guest-test.log`.
These tests do not prove native talent registration/UI/combat. Named constants
requiring an explicit XML2 values table are still rejected; the two actual
character resources tested do not require that extension. Player assets and
executable remain unstaged pending working handlers and validation.

### Energy guest adapter activated by normal startup catalog

The guest-side energy bridge still had an environment-only enable gate after
the startup loader was added. It now enables parsing/cost evaluation when a
normal imported catalog is active. Getter/gate/bind/resolve diagnostics remain
test-only, so ordinary gameplay does not acquire per-call stderr logging.

The native fixture writes a controlled character resource, initializes the
normal disk catalog, passes real guest strings through the guest parser and
queries costs using native actor rank state. Rank1 produces6 from6.25; changing
the same actor to rank15 produces117 from117.25. An unbound event preserves
its native7.25 float return. The full fixture and Release build pass without
`XML1_TEST_ENERGY_TALENTS` set (`startup-energy-build.log`,
`startup-energy-test.log`). This proves the bridge is active without the test
environment; it does not establish imported combat/UI or native talent
registration from actual character assets. Harming callback installation and
the three-character staged build remain outstanding.

### Native damage-type parsing verified

Original XML1 strings3D067C/3D0670 are damageType/damageMod. Parser955C0
calls49480 and stores the resolved type at definition+34; damageMod calls
49510 and ORs flags into+38. Original table44C498 includes dmg_fire=4,
dmg_radiation=7, dmg_energy=2 and dmg_bleed=12. No XML2 enum transplant or
host-side name map is needed for these names.

The executable fixture now sends those actual names through955C0 and checks
the stored field and stack. Full fixture and Release build pass
(`native-harming-types-build.log`, `native-harming-types-test.log`). Existing
native parsing can supply the type to the harming delivery adapter. Record
trait-bit semantics, non-actor targets, tint/lifecycle installation and actual
Bishop/Sunfire combat remain unfinished; staging is unchanged.

### Harming trait-scaling bit translation

Original XML2 damage625B5 extracts record+35 bits3..6; mode1 enters the
stat-factor path at62628, mode0 bypasses it at62661. Harming use_trait_scale
selects that mode through definition bit1. XML1's native5CCA0 captures
record+60 bit0 and5CDBB/5CDC5 bypasses its actor-stat term when that bit is set.
The meanings are inverted; copying XML2's byte would be incorrect.

`raven_xml1_harming_trait_flags` changes only XML1 bit0: clear when requested,
set otherwise. Integer tick construction now uses this translation directly
from the parsed definition flags. All65536 previous/definition-byte pairs
pass the numeric test, preserving unrelated bits. The full native powerup
fixture and Release build also pass (`harming-trait-*.log`). These tests do
not establish equivalent live stat bonuses or complete damage-call behavior;
native callback installation and imported combat remain open. No player
staging changed.

### Harming think body connected to startup data

`raven_xml1_harming_think` captures the active handle, checks due time, reads
its current definition, consumes the native RNG, evaluates the original
operand against the startup catalog and current XML1 actor rank, then invokes
integer tick delivery with the native definition type/modifier fields and
parsed APS/trait flags. `raven_harming_runtime_sample` provides the C boundary;
literal-only definitions can work without a catalog, but unresolved references
remain explicit errors. Outputs are published only after successful evaluation.

The fixture now composes the entire body using disk-loaded talent values,
native entity/rank lookup, real RNG, native record constructor/dispatch and
rescheduling. It passes with original92220 rejecting a dead target; a second
not-due call consumes no RNG. Release build and full fixture pass
(`harming-think-build.log`, `harming-think-test.log`). This is a callable body,
not automatic lifecycle registration. Live-target health changes, non-actor
targets, tint behavior, native callback thunks and the staged three-character
build remain outstanding. The original user goal remains open.

### Harming lifecycle registration implemented; verification pending

The96370 completed-definition path at96484 now installs dedicated activation
and think callback pointers for metadata classharming. The callbacks use
XML1's native powerup pool4833C0 and cdecl single-instance argument layout,
confirmed at2AEF9/2AF06,29F19/29F5C and2B2EE. Two native heap addresses are
registered with the indirect-call range guard and manual resolver. Ordinary
definitions retain their original callback pointers. Clone metadata remains
attached at the existing completed-copy boundary.

The fixture has been extended to install private thunk storage and invoke
both pointers through RECOMP_ICALL_SAFE, checking activation time, think
rescheduling and caller-owned argument cleanup. Production heap allocation,
complete resource-parser registration, tint, non-actor targets and live combat
still require verification. At this entry's creation the full rebuild is
running (`harming-callback-build.log`); no passing callback test is claimed.
Player staging is unchanged.

### Registered callback and clone verification completed

The full rebuild finished successfully. The registered activation and think
thunks pass through the actual indirect dispatcher, set/advance native timing,
respect campaign self-hit suppression and preserve the native cdecl stack.
An additional assertion verifies both installed callback pointers survive
original953A0 definition cloning alongside their metadata. The fixture's old
"handler not installed" summary was replaced with the precise remaining
limitation: the complete resource-load path is not covered.

Evidence: `harming-callback-build.log`, `harming-callback-test.log`,
`harming-callback-clone-build.log`, `harming-callback-clone-test.log`.
These use private thunk storage and controlled actors. Native heap allocation,
post-resource-parser installation, live-target damage, tint and non-actor
targets still need verification; neither staged gameplay nor full handler
acceptance is claimed.

### Native definition-parser installation verified

The callback fixture now resets the definition with original96220 and passes
a native resource tree into original96370 containing class, damage, APS and
damage-type attributes. Its real string access, attribute traversal and scope
lookup execute without parser stubs. The completed-parser hook installs the
callbacks, the fire type is4, and the subsequent registered callbacks and clone
checks pass. This removes reliance on leftover metadata or directly invoking
the installation helper.

Release build and full fixture pass (`harming-parser-build.log`,
`harming-parser-test.log`). The tree itself is constructed in private memory;
serialized PKGB/XMLB loading, native thunk heap allocation, rendered gameplay,
live enemy health changes, non-actor targets and tint remain unverified or
unfinished. Player staging remains unchanged.

### Harming through disk resources and live gameplay (2026-09-18)

Added opt-in XML1_TRACE_HARMING diagnostics for installation, activation and
successful ticks, including native instance source/target and timing state.
Private run-native-harming.py fixtures temporarily replace only Wolverine's
powerstyle, compile it with xmlb-driver and restore both files in finally.
Player staging is untouched; input stays in the game's own test channel.

native-harming-smoke-v1 loaded all 11 inherited harming definitions from disk
and allocated/installed native callback storage. Its victim-trigger variant
never reached a victim at the loaded Central Park extraction point, so it does
not establish activation or enemy damage.

native-harming-smoke-v2 made the trigger execute at time 0 on the owner. The
normal scheduler produced one activation and 32 successful ticks during repeated
power use, with no harming errors. All five native captures were inspected in
sequence: intro logo animation, Cerebro menu, loaded Central Park, a visible
3-point hit and reduced Wolverine health, then his death and the load screen.
This demonstrates live actor damage/death, but NOT enemy targeting or imported
Bishop/Sunfire acceptance. Earlier commentary assuming owner self-hit suppression
was disproved by these captures; source/target and effect refresh need tracing.
UDATA hashes were unchanged. Exit 1 is the harness terminating its own game after
the final capture, not a clean in-game quit. Both runs were muted; audio is not
verified. Full imported characters and a new player executable remain pending.

The follow-up single-activation run native-harming-smoke-v3 resolves the source
question: native construction supplies source=0 and target=0x801, so this is a
source-less damaging effect, not a matching-source self-hit. One activation
runs eight successful ticks with life=3, start=31.5583, and the final scheduled
time clipped to34.5583. No further ticks occur during the five-second wait.
All five native captures were inspected sequentially; Wolverine takes visible
3-point hits and remains alive afterward with reduced health. This establishes
loaded-resource activation, live damage and finite expiry for literal harming.
Repeated applications in v2 are not an expiry test. Enemy attribution, symbolic
lifetimes, imported character combat, non-actor damage and tint remain open.
The Release build and --powerup-definition-test pass after diagnostics changes
(harming-live-trace-unit.log). Private powerstyle files were restored and all
fixture UDATA hashes remained unchanged. No test process remains running.

### Sunfire harming: declared non-actor delivery

Sunfire power2's original tag102 declares allow_non_actors=true. The adapter
previously resolved every damage target with actor-only293F0, silently rejecting
that branch. Original XML1 parser95793..957CF already owns this option at
powerup-definition+70 bit1; the adapter now reads that field and resolves enabled
targets through native2B810, which validates current entity handles and casts to
physent before virtual damage+A8. No broad gameent-vtable assumption is used.
Actor-only definitions retain their prior resolver; talent contexts remain
actor-only and continue following source precedence.

The cast is traced from XML1 default.xbe: factory356CA5 uses name3C93C4=physent,
size2C4, descriptor4C0A5C/type index4C0A60. Native2B810 performs the corresponding
type-bit check. Physical vtable3C9204 has getter2E590 and damage92220 at+A8.
Parser955C0 sets the declaration itself; no new asset attribute is invented.

Release build passes. --powerup-definition-test passes with distinct actor and
physical bits: actor-only delivery rejects a plain physical object, enabled
physical delivery reaches real92220 and reschedules, and a nonphysical object
is rejected without rescheduling. Evidence: harming-nonactor-test.log. The test
uses native dead-target rejection for ABI safety, so actual prop destruction
and Sunfire's full flamethrower behavior remain unverified. Player EXE unchanged.

### Talent-referenced harming duration at native instance initialization

Sunfire ionshield declares life=%sun_ionshield_life (13 at rank1,55 at rank11).
XML2 parser154E52 stores nonnegative life as CValue at definition+34; the lower
getter150C90 calls C31A0 without upper output. Instance initialization14674B
calls definition+98 and stores that lower endpoint, without RNG sampling.

Added a reference-only lifetime evaluator using the startup talent catalog and
current native source/target context. XML1 hook2A81D runs after2A7B0 assigns
instance source, target and definition and writes native duration, before
native duration modifiers/start-time handling. This covers initial application
and refresh rather than only the first activation callback. Literal durations
remain native; shared definitions are never temporarily rewritten.

Release build and --powerup-definition-test pass (harming-life-build.log and
harming-life-test.log). The test executes original2A7B0 twice against a live
private pool slot, changing native rank1 to15. An imported duration with unequal
endpoints resolves3 then7, never8/19; native RNG seed and stack stay unchanged.
A literal2 remains unchanged. This is native initializer coverage, not rendered
Sunfire ionshield acceptance; full imported gameplay and player staging remain
pending. Existing harming timing, damage, callbacks and non-actor tests pass.

### Native imported roster selection and first Bishop level entry

The Central Park save uses mission alison, whose original resource explicitly
sets teamselect=false and requires Wolverine/Cyclops. The private fixture now
temporarily enables teamselect, removes required heroes and allows four members;
the original campaign files are restored afterward. This is test setup, not a
production campaign modification or a missing-handler fix.

selected-roster-load-v4 displays and selects both Bishop6001 and Sunfire6101
in the actual Blackbird menu. Native captures1..12 were inspected: FMV imagery,
Cerebro main menu, saved Central Park, pause, replacement carousel and both
imported animated models. Both roster carousel portraits are blank. In-level
HUD portrait loading is a separate path. v4 ended at the explicit180-second
watchdog while loading the requested NYC map, not an established import crash.

The automated selection replay selected-roster-load-v5 reaches nyc1_1_1 with
Bishop, his correct HUD portrait, environment and working forward movement.
All12 native captures were inspected individually. An attack button was sent,
but the captures do not establish its animation, damage or enemy interaction.
Sunfire was selected on the platform but not individually controlled in-level.
Both runs were muted; audio remains unverified. v5 exit1 is intentional harness
termination. Both fixtures restored their overlay and report unchanged UDATA.
No game/test process remains running. Player executable/assets are unchanged.

Found and fixed a roster preservation bug in stage-xml2-test-roster.py: it read
the editable herostat.eng, which predates Angel, although the runtime .engb
matches the installed Angel ready-v2 binary (SHA256
377bc4cf9b53ff80247df9751f5c6ab61047fe7b571c905689ce9dd37a3c2f3e).
The builder now decodes the actual .engb and records its provenance. New
selected-roster-v2 preserves all35 retained runtime entries exactly, including
Archangel/Angel, replacing only DummyNPC01/02 with Bishop/Sunfire. The explicit
preservation check passes; v4/v5 used the old private roster, so three-character
combined gameplay acceptance and player staging remain pending.

### Imported attack range integration and dispatch-test follow-up

The native CCEAtk damage parser CF6B0 now retains imported symbolic damage
bindings; dispatch CF356 resolves endpoints against its source actor without
rewriting the shared descriptor. Positive values use nearest-integer/minimum-one
conversion, with zero preserved by the existing numeric helper. Action cloning,
reset and retirement now cover both energy and damage bindings.

Release build and --powerup-definition-test pass. The fixture executes actual
CF6B0 for a symbolic damage attribute and verifies stack balance, parser success
and unchanged shared descriptor endpoints. Guest adapter checks rank1 6/10,
rank15 117/133, clone independence, energy preservation, literal replacement and
retirement. This does not yet prove a live imported power's full CF250 dispatch.
Evidence: work/xml2-integration/attack-endpoints-build.log and
attack-endpoints-test.log.

bishop-power-dispatch-v1 finished with intentional exit1 and unchanged UDATA;
private assets were restored. Capture13 was inspected: Bishop and the NYC
background/HUD are present, but it does not establish beam execution. Remaining
captures from this run have not all been inspected. Actor-probe status3 means
unlearned, not missing talent registration. Its original first-two-calls cap
could sample NPCs before the imported player. The optional read-only probe now
records up to64 distinct actor/status observations rather than stopping after
two calls; its Release build passes, but runtime coverage is still pending. Full Bishop,
Sunfire and Angel gameplay acceptance and player staging remain pending.

### Live Bishop power investigation: saved slot state and requirement category

Updated binary d5c912b14ec4f894e12638dd0038449e7f215bb97452213e90f25b2d4d9e5b01
completed bishop-power-dispatch-v2 (all14 native captures inspected). Intro,
Cerebro, loaded Central Park, roster selection and NYC Bishop movement are
present. No beam execution is established. Both imported carousel portraits
remain blank. The actor probe reports unlearned bishop_beam on a sampled actor;
name lookup itself succeeds at native ID113.

v3 capture13 shows the native power HUD with no power icons; capture14 reaches
the details entry menu. v4 capture15 shows Bishop with 12/22/17/28 stats,
matching DummyNPC01/Avalanche in the private game's previous herostat exactly,
and AI Power reads Character Power Name. Loading the old save restores this
slot's old character state despite the replacement definition. Other captures
in v3/v4 were not all inspected; these are targeted diagnostic observations.

v5 changes the harness to Begin Story, bypassing save loading. Inspected native
captures3,5,8,11,13,15: fresh NYC, native roster, Bishop selection, Bishop in NYC,
empty power HUD, then correct imported stats16/16/16/20 and AI Power Bio Beam.
Thus the old save explains the wrong starting stats and missing AI power name,
but does not fully explain power dispatch. All runs intentionally terminate
with exit1, restore private overlays, and report unchanged UDATA; player assets
and executable remain unchanged. Runs are muted; audio is unverified.

The suspected skill/talent category difference is ruled out. Actual XML1
A38A0 initializes requirement category to zero; only trait, level, counter,
xtreme, race and character select other categories. Both skill and talent
therefore use native category-zero talent lookup and evaluation (A3AFE and
A3EB0). Do not add a category alias or infer a damage-handler failure from a
move that never reaches dispatch.

### Per-character power-slot resolution: binary evidence

Read-only comparison of the supplied XBEs identifies a missing dispatch step,
not a resource filename mismatch. XML1 ECEE6 expands the shared powers chain
into power_attack, power_smash, power_boost and power_xtreme. Imported Bishop
instead declares moves power1/power2/etc and assigns four of those in herostat.

XML2 C97FD..C98A8 parses power1..power4 into character-stat strings at offsets
C4, D9, EE and103. C75D0 copies at most20 bytes and terminates at19; entries
are21 bytes apart. C7AC0 retrieves a slot only for indexes0..3; C7B50 changes
a binding. These are XML2 layouts, not offsets safe to write into XML1.

XML2 110A10 resolves an action's chain, then (110A42..110A84) substitutes the
actor's binding only when all of these hold: actor and its stats exist, action
index is5..8, and the chain matches the default chain for that action. It calls
C7AC0 with action-5, interns the returned name, and performs normal move lookup
at110A91. Explicit non-default chains bypass substitution. XML1 ED700's
corresponding sequence goes directly from virtual chain getter atED724 into
ED500 lookup atED733 without that substitution. This is the next narrow combat
integration seam; retain native behavior for unbound XML1 actors and explicit
chains, rather than globally renaming moves or changing shared assets.

Reproducible disassembly and input hashes: scripts/xml2-power-binding-oracle.py,
output work/xml2-integration/power-binding-evidence.json. The script completed
against actual supplied XML1 and XML2 XBEs. No runtime binding patch has been
applied yet; live imported-power dispatch, combined Angel/Bishop/Sunfire
acceptance and player staging remain pending. The preceding PR review was a
separate requested read-only task; this goal turn advances dispatch evidence.

### Power binding implementation and first live check

Added raven_power_bindings.cpp and its compiled-XMLB tests. Startup reads the
selected-language compiled herostat alongside the imported talent catalog,
publishing both only after successful parsing. Per-character bindings preserve
explicit chains and unbound native heroes. Tests pass against both the combined
Angel-preserving selected-roster-v2 and the private Bishop dispatch roster.
The existing imported-catalog test also passes.

guard-raven-power-bindings.py installs the ED724 lookup seam; the guest adapter
compares native default interned keys, reads the actor's character name, interns
the assigned move in temporary guest stack storage and calls native ED500.
It never edits shared fight chains or imports XML2 object offsets into XML1.
The Release build passes (work/xml2-integration/power-bindings-build.log).

bishop-power-dispatch-v6 exercised binary SHA256
216625a15ae3f60c84a85c47f813bf07f7e9e1af07959ef1d8b84ba3a2947773.
The harness finished its flow and intentionally terminated with exit1,
confirmed unchanged UDATA and restored the private overlays. Inspected native
captures2,3,11,13,15: Cerebro, fresh NYC with Cyclops, Bishop in NYC, power HUD
still empty, and correct Bishop stats with Bio Beam listed as AI Power. Other
captures were not inspected this turn. This does NOT establish a working beam
or complete power selection. Trace remaining selection/HUD consumers and
confirm whether the substitution executes before drawing conclusions about
the attack handlers. The run was muted; audio remains unverified. Player
staging is unchanged, and no test processes remain from this run.

### Native selection and HUD follow-up

v7 finished without power-action observations from ED700: that seam alone
does not cover action enumeration. Native E7161 independently calls ED6E0;
HUD15EB6B independently queries default slot names with a NULL requirement
actor. Both now use the same binding resolution. HUD keeps its NULL requirement
actor, preserving discovery of unavailable moves; action enumeration keeps its
actual actor. No shared chain/resource names are changed.

v8 tracing found an adapter defect: actor identity read four bytes too late,
yielding `op` for Bishop. Native308C8 explicitly reads actor+2D8 then +20C,
not +210. Corrected that field; the separate talent-rank +4 getter is not an
identity-layout reference. v7/v8 completed and restored private overlays;
their captures were not visually reviewed this turn.

v9, SHA256 edaf44670db502799d2870367cb9540b17a3eecb2f715b54f938de06f19e8d74,
completed the private fresh-game flow, unchanged UDATA, overlays restored.
Trace confirms name=Bishop, action5, replace=1, move=power1,
result=046E7588. Initially unavailable higher powers return zero for actor
requirements; HUD discovery resolves power5/power2/power9 as well. Native
Wolverine/NPC observations retain replace=0. Capture13 was inspected: Bishop
is in a firing pose with a visible flash and all four HUD power buttons now
contain imagery. The imagery is WRONG: each button displays the complete icon
sheet rather than one icon. Do not call this a visual pass, full Bio Beam
acceptance, or proof of enemy damage. Remaining v9 captures were not inspected
this turn; run muted, audio unverified. The native powerup-definition regression
test passes (power-bindings-native-tests.log). All game processes from these
runs have ended; player staging remains unchanged.

Next: trace imported icon metadata/UV selection and verify a complete selected
power dispatch through energy charging and enemy health reduction. Sunfire's
combat and combined Angel-preserving player delivery are still pending.

### Longer power-trigger observation and icon metadata boundary

Unmodified XML2 ps_bishop specifies iconfile and per-move icon indexes, but no
IconColumns/IconRows. Native XML1 ps_cyclops explicitly supplies2/2. Actual
XML1 EA7F6/EA832 parse these dimensions into the high/low nibbles of style+124
(dimension minus one). Actual XML2 has no iconcolumns/iconrows string and its
10EE59 iconfile parser writes the interned file to style+68. This locates a
format/metadata difference; XML2's draw-time atlas handling still needs tracing.
No guessed atlas dimensions or shared texture edits were introduced.

bishop-power-dispatch-v10 extends the power hold from0.2 to0.65 seconds, beyond
the resource's0.45 trigger, then captures after release and after moving into
the nearby enemy area. Same binary asv9. Captures13,16,17,18 were individually
inspected: world/actor present, power pose followed by idle, and visible energy
bar reduction with slight recovery. No complete beam or enemy health reduction
is established. The enemies are behind Bishop in17/18, making that attempt
unsuitable to prove damage. The icon-sheet defect remains.

This run did NOT complete its entire flow: subsequent capture14 after F1 failed
with RuntimeError: Capture failed. The harness terminated its own process,
restored the private overlay, and recorded userdata_unchanged=true. The cause
of that later capture failure is unverified; do not call it a successful full
smoke test. No player files were staged. Next combat run should face the enemies,
enable existing imported-energy and damage diagnostics, and finish after the
combat captures rather than depending on a stats menu during combat.

### Bishop live energy and enemy-health proof; XML2 atlas sizing

bishop-power-dispatch-v11 uses the same v9 binary, enables the existing energy
catalog diagnostic and damage-transport diagnostic, faces Bishop back toward
the enemies after moving, and ends after combat captures. The process completed
its flow, intentionally exited1, restored private assets and recorded unchanged
UDATA. Native capture17 was inspected: Bishop facing the troop, target health
bar and a12 damage number. Other v11 captures were not inspected this turn.

Authoritative game.log observations: energy event046CF430 resolves
bish_beam_pwr against actor0473B288 at cost14 (lines26498,26521,26774,26832).
At26845 the same event's damage record reaches recipient0473C988 with damage12,
health40; at26864 the native delivery returns with health28. This establishes
one live imported Bishop power hit and native energy-cost resolution, not all
powers or full audiovisual acceptance. The second-hand event046CF37C generates
separate records (29/27 in this run); its inheritance/value behavior still
needs checking rather than assuming the entire dual-hand attack is correct.
The icon sheet remains incorrectly displayed and the run was muted.

XML2 atlas rule found in original XBE10EB5D..10EB9C and matching recovered
recomp_0023.c: loaded icon texture at style+64 is queried through vtable+4/+8;
each returned dimension is divided by32, decremented and packed into the two
nibbles at style+5C (edi=style+10, field+4C). Thus the import needs texture-derived
32-pixel cells, not a guessed fixed4x4 default. This can be applied narrowly
to imported powerstyles while retaining explicit XML1 dimensions. No atlas
runtime change has been implemented yet. Player staging remains unchanged.

### Texture-derived imported power icons implemented

Startup now identifies automatic icon atlases from compiled powerstyles of
characters declaring XML2 power bindings. Explicit grid declarations and any
texture also referenced by a native/explicitly configured roster powerstyle
exclude that texture from automatic sizing. Original assets are unchanged.
Catalog tests cover case/slash normalization, native preservation, explicit1x1
preservation and native/shared-texture exclusion; they pass.

At native XML1 EA31C, after successful texture installation, the adapter queries
the texture width/height through vtable+4/+8, derives32-pixel cells as original
XML2 does, and fills XML1's grid byte at style+124. Native guest registers and
stack are preserved. The hook is regenerated by guard-raven-power-bindings.py.
Release build and native powerup-definition regressions pass; logs are
power-icon-grid-build.log and power-icon-grid-native-tests.log.

bishop-power-dispatch-v12 uses SHA256
f800c25cb8f46feefc21c6392f46fecd669d65925cec444739851c02ba53650f.
It completes the private combat flow, exits intentionally1, restores overlays
and reports unchanged UDATA. Capture13 individually inspected: all four power
buttons now show individual, distinct icons, with the actor and level intact.
Native trace reports128x128 texture ->4x4 grid. Remaining v12 captures were not
inspected this turn; muted audio remains unverified. Damage logs in this run
show native world-object health reductions (1000->967 and15->-66), not a repeat
of v11's specific enemy-health check. Do not equate these with all-power combat
acceptance. Player staging is unchanged; dual-hand behavior, Sunfire combat and
combined Angel-preserving delivery remain pending.

### Bishop beam texture verified in private gameplay

The v13 private run completed its combat flow and intentionally exited with
code 1; result.json records unchanged userdata and executable SHA256
f800c25cb8f46feefc21c6392f46fecd669d65925cec444739851c02ba53650f.
The harness restored the roster and all temporary asset replacements.
Captures 13 and 17 were individually inspected: both hand-origin beam lines
are now visible, alongside the imported power icons and intact NYC scenery.
This proves the previously missing beam texture is supplied, not complete
Bishop combat fidelity. Capture timing also changed from .65 to .48 seconds;
do not treat these images alone as a controlled timing-identical comparison.

The additional texture is the original PC Textures/bolt_sharp.IGB, copied
unchanged at its original resource path. Its SHA256 is
9b47c9122864abbfdef78bcd1790c4ba76fc12e16500925212807e95355a3e28.
The private addition and provenance are under bishop-beam-texture-v1.
No custom resource alias or effect edit was introduced.

A focused follow-up audit scanned 157 texture attributes across 39 staged
Bishop/Sunfire effect resources. Against the restored private game plus the
character overlays, only textures/bolt_sharp.igb was absent. Evidence:
work/xml2-integration/bishop-sunfire-effect-textures-audit.json.
This audit covers those effect texture attributes only; it does not establish
sound, nested effect, model, talent or handler dependency completeness.

Next: retain this original texture in subsequent private overlays, trace the
second-hand damage inheritance against XML2, and validate Sunfire combat.
Player staging remains unchanged. Audio was muted and is unverified.

### Bishop second-hand mismatch traced to shared event defaults

Previous goal turn: progress (actual v13 captures inspected, indirect texture
dependency audit completed). This turn located the damage mismatch in the
original data rather than inferring a fix from observed damage numbers.

work/xml2-integration/bishop-beam-inheritance-evidence.json records hashes and
exact decoded beam definitions from both games. XML1 shared_combat_events.xmlb
sets Damage=L4; XML2 PC shared_combat_events.XMLB sets damage=3 5 and
damagescale=none. Bishop's local bishop_beam_fx inherits beam without its own
damage; only the right-hand trigger overrides damage with %bish_beam_dmg.
Thus copying that symbol into the left trigger would change original XML2
behavior. The native default inherited by the imported left-hand trigger is
incorrect (25..31 observed in v11 instead of the XML2 prototype's 3..5).

The v11 descriptors are distinct: right 004EE624, left 004EE804. They are not
one shared pointer. Original XML2 XBE EB910 initializes descriptor endpoints
to zero; EC1F0 copies the operand into a separate destination. These inspected
instructions support tracing prototype inheritance rather than patching RNG
or guessing a stale pooled descriptor. No runtime or character data change
has been made for this mismatch yet.

Required next implementation: preserve XML2 shared combat-event inheritance
for imported character powerstyles, scoped so native XML1 heroes keep XML1
shared defaults. First audit the needed ancestor definitions and the native
prototype lookup/clone boundary. Never replace shared_combat_events globally
or edit the left trigger to repeat right-hand damage. This dependency is
needed for faithful Bishop combat, not a general XML2 engine port.

### Shared combat prototype audit and original-code copy oracle

The previous goal turn made progress by identifying the exact beam inheritance
mismatch. Follow-up evidence is imported-shared-events-audit.json: shared names
referenced by Bishop/Sunfire and their shared ancestors were compared without
rewriting assets. Differences extend to punch/punch_heavy damage and knockback,
fry, and definitions absent from XML1's shared table (blast, effect_sound;
Sunfire also references radial). This is a candidate dependency audit: local
name shadowing and nested fightstyle references still require resolution.
Do not equate absence from this one table with an absent native handler.

scripts/xml2-attack-prototype-oracle.py runs original XML2 instructions EB910
and EC1F0 in Unicorn against the hash-pinned source image. Construction zeros
the two damage endpoints. All four descriptor-copy cases pass, including
3..5 and25..31; first36 operand bytes copy intact and source bytes remain
unchanged. Evidence: work/xml2-integration/attack-prototype-oracle.json.
This verifies descriptor copying only, not parser lookup or combat outcomes.

Native XML1 lookup tracing: ECFE0 reads name/inherit/type; ED129 calls ECF70
for the inherited event. ECF70 searches the passed manager using B3B30, fetches
the selected descriptor/type at manager+index*44+F50/F70 and resolves the
prototype through E4DA0 at manager+247C. ED145 then passes the inherited object
to ECCE0 for construction. E3A62 separately performs the enclosing fightmove's
inheritance lookup through a caller-supplied manager virtual+14. These are
candidate scope boundaries; imported-style ownership and nested parser lifetime
must be proved before installing a scoped lookup hook. No global replacement
or guessed event rewrite was made. Player staging remains unchanged.

### Live prototype lookup boundary verified (v14)

Added bounded, opt-in, read-only xml1_raven_trace_prototype diagnostics at
ECF70's successful return ECFC9 and miss ECFD0; generation guard reinstalls
both. Captures only beam/bishop_beam_fx names and logs manager, result and
original caller. Release build and --powerup-definition-test pass.

Private bishop-power-dispatch-v14 completes gameplay and restores overlays;
result.json records unchanged userdata, intentional exit1, executable SHA256
ba153e1c732d8b34a12022121748ee339d36b3c28fa8b5f66a1d1e2536acc218.
Capture13 was individually inspected: both beam lines, correct individual
power icons, Bishop and NYC scenery remain visible. Other captures and muted
audio are not accepted by this turn's inspection. No new screenshot posted
because this repeats previously shown content.

Live game.log lines25928..25932 establish the actual Bishop chain:
local manager0488C1F0 lookup beam misses at callerED12E;
fallback manager0487CD58 resolves beam to0487F918 at callerED143;
both bishop_beam_fx trigger lookups resolve locally to0488E66C.
Original ED12E tests the local result before ED134 calls ECF70 on the fallback
manager. Therefore the wrong base value enters before the local named event
is cloned, not through a left/right trigger-name collision.

This establishes an existing local-prototype boundary for supplying original
XML2 shared-event dependencies without replacing native XML1 global defaults.
No behavior-changing lookup hook or modified prototype has been installed.
Next determine how to supply those original definitions in the imported local
scope while preserving native declaration order and local overrides, then
verify left-hand damage and native-character preservation in gameplay.

### User acceptance clarification: player-visible compatibility

The user directs that missing systems and noticeable differences take priority;
minor rounding or otherwise non-noticeable differences use XML1 behavior.
Exact XML2 internal parity is not a completion requirement. Apply this to the
remaining work list rather than expanding compatibility for its own sake.
Bishop's unconfigured extra beam doing25..31 instead of3..5 remains material
combat balance, but harmless operand/rounding discrepancies should not block
staging or completion.

The v15 original-beam declaration experiment at PowerStyle root completed and
restored private assets. It did NOT change the inherited left-hand range:
application still reports25..31 and a sample26. Root-level declaration alone
is not a verified fix. No player files were changed. Next targeted test, if
needed for this visible imbalance, should use the native FightMove event
scope already traced; do not launch a general prototype parity rewrite.
Other v15 audiovisual output was not inspected; this was diagnostic evidence,
not a new smoke acceptance claim.

### Bishop material damage mismatch corrected in private move scope

bishop-local-beam-v2 copies the original XML2 beam event declaration into
Bishop's power1 FightMove before its bishop_beam_fx declaration. Every prior
node and ordered attribute in both staged powerstyle variants is unchanged;
manifest records provenance and output hashes. This uses the existing local
event mechanism and does not replace shared combat definitions globally.

bishop-power-dispatch-v16 completed, intentional exit1, overlays restored and
userdata unchanged. Executable ba153e1c732d8b34a12022121748ee339d36b3c28fa8b5f66a1d1e2536acc218.
The left trigger now dispatches damage3 (previously25..31); the right trigger
still resolves symbolic damage (samples15 and13) and energy14. Capture13 was
individually inspected: both beam lines, character, icons and level intact.
This establishes corrected dispatch amounts; this turn did not establish a
new live enemy-health deduction for the left hand. Audio remained muted.

Original XML2 literal '3 5' passes through XML1's existing numeric parser as
3..3. Per the user's latest direction, retain native XML1 handling here and
do not block on reproducing this small range. The large excess damage is gone.
Player staging is unchanged; use the verified v2 move-local dependency for
subsequent private/staged Bishop data, not the ineffective v1 root insertion.

Prepared and launched run-sunfire-power-dispatch-v1.py. It selects Sunfire first
and uses Power2 (starting flamethrower), with an isolated rank-one talent
registration fixture mirroring the Bishop diagnostic. This is not the final
roster/talent integration. Live output: sunfire-power-dispatch-live.log;
output directory sunfire-power-dispatch-v1. Read current process/results before
starting another fixture run. Harness restores all assets and saves on exit.

Sunfire dispatch-v1 finished and restored userdata/assets, but capture11
inspection showed Colossus, not Sunfire. It provides NO Sunfire combat evidence.
The assumed two-right roster navigation was wrong. Prepared dispatch-v2 with
four-left navigation from Beast, matching the previously verified Sunfire
carousel selection. It is running via run-sunfire-power-dispatch-v2.py;
log sunfire-power-dispatch-v2-live.log, output sunfire-power-dispatch-v2.
Verify actual character in native captures before accepting power results.

Sunfire dispatch-v2 also completed/restored, but capture7 explicitly shows
Psylocke. Four-left was valid in the previous second-slot roster context, not
this first-slot context: available characters omit the current teammates.
Do not count either Sunfire-named run as Sunfire verification. The inspected
carousel shows Psylocke -> Rogue -> imported blank portrait -> Beast, so
run-sunfire-power-dispatch-v3.py is prepared with two-left from Beast. It has
NOT been launched. Verify capture7 name and capture11 actor before accepting
any power result. All current private harness processes are finished.

## Sunfire flamethrower: nested-effect loader gap (2026-09-18)

The previous acknowledgement-only turn made no implementation progress. Revalidated
Sunfire dispatch v3: intentional game exit 1, userdata_unchanged=true, executable
ba153e1c732d8b34a12022121748ee339d36b3c28fa8b5f66a1d1e2536acc218.
The private overlay was restored. Captures previously inspected establish Sunfire
in NYC with his HUD and icons; they do not establish flame rendering or damage.

The runtime successfully opens p2_power.xmlb and p2_aura.xmlb. The preceding .engb
misses are followed by successful native .xmlb lookup and are not missing assets.
Original XML1 CCEPowerup loader CEF40 delegates attributes to E3EF0, then enumerates
damageMod children (literal 3D0670), inspecting reset (3D2CD4). E3EF0 iterates
attributes through virtual +10; it does not visit special_fx children. Combined
with the previously traced 96370 definition loader, this locates a concrete
missing nested-effect import path rather than a texture-file problem.

Original XML2 explicitly enumerates special_fx at 154294, creates an effect
object through the 159E20 factory virtual +20, attaches through owner virtual +54,
then parses its node through effect virtual +58 at 154305. The object interface,
activation and teardown still require tracing before implementation. Preserve
both hand effects and their lifetime; do not replace them with a one-shot effect.

Evidence: work/xml2-integration/sunfire-nested-effects-trace.json contains both
XBE hashes, original loader disassembly, literal references, and XML2 effect
parser window. XML1 also has no literal matches for samepowerhold,
remove_on_node_end or energypersecond; that alone is not functional proof of
absence and these paths remain unverified. Flame damage/filter delivery remains
unverified separately. No player staging or game code changed in this turn.
Prioritize these player-visible missing systems; retain XML1 minor numeric behavior.

## Nested-effect definition factory and original parser oracle

Previous turn was progress: it identified the missing XML2 nested-effect loader.
Traced the original factory chain: 159E20 singleton -> vtable 4A7DB4 +20 ->
14C1C0 -> pooled allocation 14BEC0 -> constructor 14BF70, yielding a 40-byte
object with vtable 4A6D1C. The virtual +58 node parser is 14AEB0; it calls
attribute parser 14B5C0 through +5C. This is an effect definition, not a live
rendered particle instance. Its +18/+1C methods link/unlink definition lists;
do not confuse those with effect start/stop.

The new scripts/xml2-special-fx-oracle.py executes the original parser and its
real callees under Unicorn, with the source XBE SHA pinned. All 21 cases pass:
usage modes primary/activation/deactivation/custom (unknown -> custom), FX
level and tag storage, share_filter owner/shared and unrelated-bit preservation,
and unknown-attribute no-op. Evidence: special-fx-parser-oracle.json. The test
explicitly excludes resource-pool creation, skeleton bolt lookup, activation,
cleanup and rendering; it is not gameplay acceptance.

Definition clone 14B3D0 duplicates the resource through 14B310, copies bolt,
usage, tag and FX level, preserves the share filter, and recursively clones the
next linked definition. The left/right forearm declarations must remain distinct.
Original disassembly is appended to sunfire-nested-effects-trace.json. The
runtime attachment/lifetime path still needs tracing before installing an adapter.
No player staging changes or new game launch this turn. Goal remains active.

## Native effect-group ownership and XML1 reuse boundary

Previous turn made progress through the original nested-effect parser oracle.
This turn traced CAttachedPrimaryFx RTTI/vtable 4A6C24. XML2 activation 1479C0
obtains a live effect-group handle through owner virtual +24 and stores it at
attached instance +1C. Cleanup 147590 passes that handle to CFxManager virtual
+44 (174B0), then clears +1C. This is distinct from the definition linked list.

XML1 CActor vtable 3C94B4 +80 resolves to 32DD0. Its native launch path resolves
the skeleton bolt, actor transform and entity handle, delegates to FX-manager
virtual +30 (1BF90), and leaves that call's return in EAX. Native powerup routine
29530 calls this launch with the existing single effect and bolt; actor +108
(291A0) schedules the native active-powerup event from effect duration. Nested
primary effects need separately owned handles rather than overwriting that
single declaration. Further launch/particle lifetime validation is still needed.

XML1's matching group invalidation is CFxManager +38 (16650), NOT XML2's +44.
The new xml-special-fx-release-oracle.py executes the original release functions
and actual allocator callees in both binaries, no stubs. Eight cases pass:
valid release, stale generation, inactive slot and repeated release; neighboring
live handles remain valid. Evidence special-fx-release-oracle.json. This proves
pool ownership/invalidation only, not particle teardown or visible rendering.
Disassembly is retained in sunfire-nested-effects-trace.json.

No executable or player staging changed. Next: resolve nested declarations into
owned metadata and verify the native launch/stop bridge before game integration.
Goal remains active; no gameplay or audio acceptance was added.

## Nested effects retained by the native definition loader

Implemented ordered effect metadata alongside existing powerup operands. Each
special_fx child keeps its own attributes, even when both reference p2_power;
native completed clones deep-copy the list, final destruction/reset clears it,
and cloning an unbound definition clears stale destination effects. Unit tests
cover both forearms, snapshot independence, clone/source retirement, reuse,
self-clone, C parser bridge and case-insensitive attribute replacement. Build
and unit executable pass. Native --powerup-definition-test exits 0.

Correction to earlier loader attribution: CEF40 is the damageMod/attack loader,
not the powerup-definition path. Sunfire v4 completed safely but yielded zero
special_fx captures. That insertion was removed. D7430 calls E3EF0 for event
attributes, then passes its definition and the same node to 96370 at D744E.
The corrected hook is at 96370, and uses XML1's original named-child iterator
126C30, native string constructor/destructor, and native attribute-string
resolution. It appends child declarations without dropping inherited effects.
No XML2 strings are reinterpreted as host pointers, and original parsing follows.

Sunfire v5 confirms the real runtime definition 046F9C00 receives index 0:
Bip01 R Forearm / char/sun/p2_power and index 1: Bip01 L Forearm /
char/sun/p2_power, including fxlevel=1 and how_used=primary. Other imported
nested declarations also reach metadata. The flow completes with intentional
exit 1, userdata unchanged, and the private overlay restored. Capture13 was
individually inspected: Sunfire, the NYC environment and correct power icons
remain visible; flames are still absent because activation is not yet connected.
This is loader/metadata acceptance only, not flame or damage acceptance. The run
was muted; audio remains unverified. Player executable was not replaced.

Evidence: sunfire-power-dispatch-v5/{game.log,result.json,capture-13.bmp},
special-fx-metadata-build-v2.log and special-fx-metadata-native-test-v2.log.
Goal remains active. Next work connects retained definitions to separately owned
native effect groups and their powerup lifetime.

## Correction: owned FX launch is a different native ABI

Previous turn made progress: real Sunfire child declarations now survive loading
and definition lifetime. Before wiring activation this turn, traced the complete
XML1 effect launch and found a material ownership hazard in the earlier notes.
32DD0 does leave EAX from CFxManager +30 (1BF90), but 1BF90 does NOT return an
owned group handle. Its incidental EAX must never be retained and passed to
16650. No runtime implementation relying on that return was installed.

The actual owned launch is CFxManager +34 (16180). It allocates a generation-
tagged group through 145B0, stores game_time + duration, invokes ordinary launch
with that group as its final argument, and explicitly returns the allocated
handle at 161F7. Full pool exhaustion returns zero. Verified stack mapping is:
effect resource, position pointer, direction pointer, duration float bits,
entity handle, FX level, bolt name. Ordinary launch instead takes entity as its
fourth argument and group as its seventh: these calls are not ABI-interchangeable.

Resource lookup is another distinction: manager +18 (184B0 -> 26A20) performs
named resource lookup/load and increments references. Manager +20 (184D0 ->
26300) releases resources selected by tag; it is NOT a filename lookup. A bridge
must balance resource ownership and cannot guess these adjacent virtual slots.

Original binary hash, disassembly, vtable addresses and derived launch ABI are
saved in work/xml2-integration/xml1-fx-group-launch-abi.json. Next implementation
must use explicit group allocation, trace its duration/termination behavior and
balance loaded resource references. Native skeleton transform preparation in
32DD0 remains reusable, but its ordinary launch must not be treated as owned.
No executable or player staging changed this turn; no new gameplay pass claimed.

## Verified particle-side group expiry gate

Previous turn made progress by correcting the owned-launch ABI. This turn traced
XML1 particle update at 1C734: it validates the group's generation and active bit,
then compares current time to the group deadline. Strictly later time expires the
group; equality continues. A retired/reused group immediately selects particle
removal at 1C7FA. Both expiry and invalidation paths call native 18900 with the
particle object and removal flag 1. Thus 16650's group invalidation is observed
by the particle updater, not merely a disconnected pool bookkeeping operation.

New scripts/xml1-fx-expiry-oracle.py executes the original decision instructions
without mocked callees, stopping at the three branch outcomes. Six cases pass:
before/equal/after deadline, inactive group, reused generation, long-lived group.
It explicitly does not claim complete particle teardown or rendering. Evidence:
work/xml2-integration/fx-expiry-oracle.json.

Resource investigation: 26A20 increments the loaded resource's 16-bit counter;
262A0 is a named existence check, not a resource release. Avoid assuming adjacent
FX virtual methods supply balanced add/release. The normal package-owned resource
lookup can be queried through 260B0's iterator without repeatedly loading it; any
borrowed handle must still be revalidated against the native resource pool before
launch. This path remains to be wired and tested. Sunfire activation remains
unfinished. No player executable/staging changed this turn.

## Borrowed-resource bridge and runtime lookup result

Previous turn was progress: original particle expiry/retirement decisions passed.
Added raven_xml1_guest_effect_resource: it uses original 183D0 and 260B0 named
lookup, then validates the returned resource handle's generation and active bit.
It does not invoke loading lookup 26A20 or increment its reference counter, and
leaves the output unchanged on missing/invalid lookup. All guest scratch storage
is stack-local and the original registers/stack are restored. The diagnostic
XML1_TEST_EFFECT_RESOURCE is opt-in and probes at native powerup application,
not merely while a package is parsing. No live-effect activation is installed yet.

Build succeeds; --powerup-definition-test exits 0. Sunfire v6 and v7 complete
with intentional exit 1, unchanged userdata and restored private overlays. V7
executable SHA: 1f91fe0c6daad13646004ae5a47e4d72c7a33ad84049281a66c3a7235f1440bd.
The exact native lookup for char/sun/p2_power with selector 0 returns the native
missing index 3FFFFFFF, including after the file successfully loads and during
Sunfire power application. This is not rejection by our pool validation: no
resource handle reaches that validation. Repeated queries agree. Thus successful
PKGB/file loading does not establish lookup-ready FX registration for this key.
The native registration/key/selector path still needs resolution before launch;
do not claim the borrowed-resource bridge is end-to-end accepted.

Evidence: fx-borrow-build-v2/v3.log, fx-borrow-native-test.log,
sunfire-power-dispatch-v6/v7 game.log and result.json. The diagnostic runs are
muted and add no audio acceptance. No player staging changed. Next: compare the
native package FX registration key/selector to the powerup's lookup path, then
connect separately owned groups to the retained declarations.

### Native effect package scope verified in gameplay

XML1 D74A0 obtains the owning resource context and passes its scope to 94FE0.
The nested-effect metadata now retains that scope at 94FE0 and follows the
native definition clone/reset/final-destruction lifetime. Empty effect removal
also clears its scope. Lifecycle regression tests cover clone ownership,
source destruction, unbound replacement, reset and explicit clear.

Private `sunfire-power-dispatch-v9` reached NYC gameplay and applied Sunfire's
power twice. Both applications resolve `char/sun/p2_power` with scope 8 to
native resource handle 00000178, including repeated borrowed lookups returning
the same validated handle. This replaces the incorrect scope-zero query; no
filename alias or package fallback was added. Tested executable SHA256:
9ba2410d8578d3ab38e8d54f77b6f6f3216eff770c171f2ebd1668a718c48c2e.

Capture 13 was individually inspected: Sunfire, NYC scenery and power HUD are
present; raised-arm animation has no flames. This proves resource resolution,
not effect activation, teardown or damage. The run was muted, so audio remains
unverified. Intentional exit 1, unchanged userdata, and restored private asset
overlay are recorded. Player staging has not been replaced. The next required
work is native owned-group activation and lifecycle cleanup for nested effects.

### Owned native effect launch: first visible attachment

Added guest bridges for XML1 native owned-group creation (16180) and release
(16650), using 32DD0's bone transform and interned-name preparation. Bone names
are validated with native 138870; unknown names do not silently become pelvis.
The ordinary effect launch remains untouched. Native definition regression and
original-binary release tests pass. Normal gameplay is not wired to this bridge
yet: its current invocation is the opt-in XML1_TEST_EFFECT_GROUP diagnostic.

Private v10 creates separate groups on both forearms on each of two Sunfire
activations. Its 1.2-second capture shows no effects. Private v11 samples at
0.2 seconds: individually inspected capture 13 shows white effects attached to
both forearms; capture 14 one second later shows neither effect. Thus the
native launch/attachment works, but sustained emission and correct appearance
remain unverified/incomplete. The two-second diagnostic duration is not a final
power lifetime implementation. Do not stage this diagnostic as a finished power.

v11 executable SHA256 99233bab029cc1fd58332cab4ea1f37c0ca38c83da070bbb19e508a39cb07c41.
Its final capture failed because the test requested sequence 18 after 19; the
fixture restored its assets and userdata remained unchanged. v12 corrects that
request to 20 but has not run yet. v10 completed normally with restored assets.
Both runs muted; no audio claim. Latest build additionally logs native resource
emitter count and launch suppression gates when XML1_TEST_EFFECT_GROUP is set.
Next: sustain imported primary effects across their real power lifetime, trace
remove_on_node_end (XML2 literal 4A7928 referenced at 155362), and inspect the
white appearance before accepting visual fidelity. Player staging unchanged.

### Packed colors and sustained lifetime: original-binary differences

Read-only follow-up saved original-byte disassembly and hashes in
`effect-color-lifetime-boundaries.json`. XML1 particle red/green/blue attributes
call 242B0 (six curve coefficients minimum, storing native curve indices at
primitive +80/+82/+84). XML2 start/mid/endColor1 instead parse packed integer
words at +74/+78/+7C through 24900. The imported Sunfire effect supplies the
latter; native XML1 has no corresponding attribute strings. This explains why
attachment alone does not restore its authored colors. Do not claim a renderer
failure or texture-load failure from the white output.

Both engines parse LoopTime/RandLoopTime. XML1 25EE0 returns resource +7C plus
native RNG times +80 after generation/live validation. XML2 owned-group entry
16D50 forwards seven arguments unchanged and has no XML1 16180-style duration
argument. Its update path 1B6F1..1B774 retains ownership for repeat dispatch.
Thus a two-second XML1 group deadline does not implement XML2 sustained
emission. XML2 remove_on_node_end parser 155361 sets definition +5D bit20;
consumer tracing and actual power lifecycle integration remain outstanding.
No player staging changed; no new gameplay acceptance claim from this trace.

### Sunfire packed colors translated and visually verified

`scripts/xml2_effect_colors.py` translates packed start/mid/end RGB words into
XML1's native six-coefficient channel curves. Existing XML1 RGB curves win;
partial packed declarations are rejected. Alpha, filenames, package declarations
and unrelated attributes remain unchanged. This helper currently prepares only
private imported data; it is not yet connected to final character staging.

Further tracing found original XML2 24C70 uses the same quadratic calculation:
24BF0 extracts low/middle/high RGB bytes, then the routine fits the authored
start/middle/end points and interpolates random endpoints. New original-binary
oracle `scripts/xml2-effect-color-oracle.py` executes that routine without mocked
callees: 45 channel/random-value cases match within float tolerance. Three
unit tests also cover idempotence, existing XML1 curve precedence and rejection.
This resolves the earlier uncertainty about interpolation equivalence.

Private `sunfire-effect-colors-v1` changes three particle declarations in the
original `effects/char/sun/p2_power.xmlb` path. `sunfire-power-dispatch-v13`
completed two native gameplay activations, all captures, intentional exit 1,
unchanged userdata and restored assets. Executable SHA256:
411cb6473167447a44d4f009c6362a40c4d2faf44f2017ab50f314122f140f0a.
Capture 13 was individually inspected: orange fire is visible on both Sunfire
forearms instead of white particles. Native resource has three emitters. The
helper still launches through an opt-in diagnostic; sustained power lifetime,
node-end cleanup and actual Sunfire damage are not accepted. Muted test, no
audio claim. Player staging remains unchanged.

### Repeat-emission bridge (before PR #5 integration)

Added native group reuse via 1BF90 and resource interval query via 25EE0.
Group reuse validates generation/allocation and rejects released ownership.
Private v14 completed the gameplay flow: two forearm groups repeat at their
resource's 0.3-second interval, then the bounded two-second probe releases them.
Repeated release and attempted stale emission return missing as expected.
Capture inspection for sustained visuals remains pending. The probe is opt-in,
not production power ownership: node-end cleanup and runtime declarations must
still replace its hardcoded diagnostic window. User requested PR #5 integration
next; no effect-completion claim or player staging update preceded that request.

XML2 remove_on_node_end accessor found at 150C10 (vtable +FC). Live consumer
1461ED calls it; 1461FF compares actor current node +378 with instance +60.
This is evidence for the next node-lifetime trace, not an XML1 offset mapping.

### Node-end decision verification after PR5 integration

`scripts/xml2-node-end-oracle.py` executes the original XML2 declaration
getter (150C10, six flag cases) and original decision block
1461F7..14625D (seven cases). Evidence:
`work/xml2-integration/node-end-oracle.json`. All 13 cases pass.
Node virtual +CC responses are explicit fixture inputs; actor resolution,
node capture, removal callbacks, XML1 integration and gameplay are not covered.

The decision is more specific than pointer inequality: no resolved origin
actor retains the powerup; the original node pointer retains it; a changed
node removes it unless the other actor has a nonempty node key matching the
origin actor's current node key. Two empty keys do not keep it alive.
Actor roles must still be traced through 15E100 before mapping them to XML1.

Original setter 146E00 writes instance+60. The first verified vtable is
4A6AF4, with setter at +C4 (pointer 4A6BB8). Powerup setup at
15DCDD..15DCE9 passes nonzero [ebp+18] to that setter, after initialization
virtual +14. Therefore the originating node is supplied at application;
sampling whatever node happens to be active on the first effect tick is
not yet justified. Next trace that application argument and XML1's move
identity, then replace the bounded diagnostic with native powerup lifetime.
No player executable or assets changed during this trace.

### XML1 current-move bridge and private observation

XML1 381F0 reads actor+2F4 and passes it as the chain node to ED700.
40DF0 reads the same field, invokes transition virtuals on the old/new nodes,
and calls 403C0. This establishes the XML1 field independently of XML2 +378.
Added raven_xml1_guest_actor_move: resolves the native actor handle first,
returns a borrowed node, and leaves output unchanged on missing/invalid reads.
The opt-in effect probe records source/target move identities at application
and logs subsequent changes. It does not yet remove effects on those changes;
the XML2 node-name exemption and exact application-node capture still need
integration. Optimized build passed; private headless gameplay observation
uses work/xml2-integration/run-sunfire-node-probe-v1.py.

Private node-probe-v1 completed both activations, normal harness exit1,
userdata_unchanged=true, overlays restored. Native powerup regression passed.
Both applications report source handle0, target1001, target node046E6698.
On release the target changes to046E28D8 at41-ish/50-ish game seconds
(exact first42.5166, second50.2276); probe emissions continue until43.1668
and50.8794 respectively. This independently demonstrates the fixed diagnostic
window outlives the move by approximately0.65 seconds. It does not establish
XML2 name-based removal for a self-target powerup; that exemption still matters.
Individually inspected native captures11 (Sunfire in NYC),14 (sustained orange
flames),16 (idle without those flames after bounded cleanup). Audio was muted.
The player executable remains the PR5 build; this probe is private only.

### Native node-key getter correction

RTTI CCombatNode gives XML2 vtable4A401C, whose +CC entry is10F360.
That original getter returns node+94. It is not the display/name getter;
prior references to a move-name exemption were premature. XML1 CCombatNode
vtable3D8BDC has display/name getter EAD60 at+B0 returning node+8, so using
that getter would incorrectly treat idle as a nonempty keep-alive key.
Do not implement that proposed mapping.

Updated scripts/xml2-node-end-oracle.py to use the original XML2 vtable and
execute10F360 directly, removing the three fabricated callback returns.
All6 declaration getter cases and7 decision cases still pass. The fixture
now supplies only actor/node memory and initial registers; native key
access and decisions execute unchanged. The semantic declaration that fills
XML2 node+94 and its XML1 equivalent remain to be identified.

### remove_on_node_end implementation using native powerup_tag

Identified declaration: XML2 106525 compares powerup_tag and10653C interns
it into node+94. XML1 already compares the same attribute atE2878 and
interns it into node+88 atE288F. This is the equivalent of XML2 node+94;
XML1 node getter +AC/EAD50 returns that field.

Added per-active-generation node ownership for explicit remove_on_node_end
powerup definitions. Completed native initialization2AA7D captures the
current originating actor move (source first, target fallback). The existing
FX update boundary checks changed moves and preserves XML2's nonempty
matching powerup_tag exception. Removal invokes XML1 2AF30, the path used
by native2B1C0, preserving callback, list, group and pool cleanup.
Definition clone/reset retirement preserves/clears the policy. Fixed128-slot
metadata follows native pool generations; ordinary definitions are ignored.

Optimized build, metadata lifecycle test and native powerup regression pass.
Private gameplay validation: work/xml2-integration/run-sunfire-node-end-v1.py.
Nested effect emission is still the opt-in diagnostic, not a production
runtime driven by all special_fx declarations; this change does not close
that remaining work or the overall character goal.

Node-end-v1 gameplay completed two held activations. Each native node-end
removal invalidated its powerup owner and released both diagnostic groups
in the same update as the move transition (43.768 and51.4675 seconds).
The previous approximately0.65-second extra emission window is gone.
Captures14 and16 individually inspected: sustained flames while attacking,
then idle without the forearm flames. Save hashes unchanged; private overlays
restored; normal harness exit1. Tested binary SHA256:
5d971c4dccffa814b6ad54d924a1ecbcb947e2ca6e41600339c146382c5688cf.
No listening verification (muted). No player executable update.
Still pending: general special_fx declaration-driven creation/repetition,
source/target tag-exemption gameplay scenarios and interruption/death cases.

### Declaration-driven attached primary effects

Added synchronous metadata visits from an owned snapshot outside the mutex;
ordered duplicate special_fx entries survive definition retirement during a
visitor. Metadata lifecycle regression covers that reentrant retirement.
The completed native powerup initializer now dispatches declared primary
bone effects using their package scope, effect path, bone, and fxlevel.
Per-native-generation lists retain each group separately, repeat at the
resource's native interval, and release when the powerup owner retires.
Finite native life sets the group deadline; indefinite life uses the already
verified distant group deadline with actual retirement controlled by owner.

This first adapter explicitly reports unsupported unbolted effects/other
how_used modes. It does not silently substitute an attachment. General
special_fx support therefore remains incomplete. The old diagnostic exists
only behind its test environment variables; this validation run removes
those variables entirely: run-sunfire-declaration-fx-v1.py.
Optimized build and native powerup regression passed. Metadata visitor
regression passed, including two declarations after callback retirement.

Declaration-fx-v1 completed two Sunfire activations with both hardcoded probe
variables absent. Each application launched both original p2_power declarations
on their declared forearms and each move end retired the owner and released
its declared groups. Captures14/16 individually inspected: sustained flames
while held, then idle with no forearm flames. Userdata unchanged, overlays
restored, normal exit1. Binary SHA256:
1ac7cd9957fadd49bc5219670d41274f63c1e23414e513a1d77a8f6c02e48e7e.
This confirms the first declaration-driven primary/bone path, not all Sunfire
powers or full effect semantics. Player staging was not changed.
Follow-ups include native retirement/reset boundary cleanup before scene
pool reuse, unbolted primary auras, secondary/other usage modes, and broader
interrupt/death/refresh coverage.

### Direct native retirement cleanup

Added the2A730 entry hook to release imported groups and clear node ownership
before the active slot is retired. It validates the active generation and only
clears records belonging to that owner. Native2AF30 reaches2A730 after unlink
at2B09B (and the corresponding non-head path), so this covers the verified
normal move-end removal without waiting for the next FX iteration. Broader
map reset/death paths remain to be tested; this is not a claim that every
reset necessarily passes through2A730.

Build and native powerup regression pass. Original group-release oracle passes
valid/stale/inactive/repeated release with neighboring handles preserved.
Headless private run: run-sunfire-fx-retirement-v1.py (diagnostic effects off).

Next unbolted primary adapter evidence: XML1 native32DD0 starts with actor+20
position. Bone index-1 skips2E9F0 and leaves interned bolt name0. With no
explicit direction it calls1209C0 on actor+2C into a temporary direction.
1209C0 converts pitch/yaw into a forward vector (no bone substitution).
This is a traced launch path for aura placement, not yet implemented here.

Fx-retirement-v1 completed. Both applications emitted two declared groups;
logs show SPECIAL FX RETIRE before NODE END returns, with no deferred END
cleanup. Captures14/16 individually inspected: sustained flames then clear
idle. Userdata unchanged, assets restored, normal harness exit1. Muted;
no listening claim. Tested executable SHA256:
5115029e9bb85138677f3fef6f8c6b6505b97c3c3ce2d1ed94ba3eb560e136dd.
Player staging unchanged. Native teardown hook verified for this move-end
flow; map reset, death and broader imported effects remain unverified.

### Unbolted primary launch implementation

The owned-group adapter now accepts absent/empty bolt. It copies the target
actor position at+20, calls native1209C0 on actor+2C for forward direction,
and passes interned bone name0. Named bolts retain native name validation
and bone transforms. These are the two native32DD0 branches, not a guessed
pelvis attachment. Primary declaration dispatch now permits the empty bolt.
Other how_used modes and non-actor targets remain unfinished.

Build and native powerup regression pass. Private fixture
sunfire-unbolted-fixture-v1 uses the original p2_aura resource (two particle
color declarations converted through the verified color translator) in place
of the forearm declarations on the self powerup. This deliberately isolates
placement/lifetime; it is not an enemy-hit or damage test. Source filenames,
player assets and original binaries are preserved. Harness:
run-sunfire-unbolted-v1.py; temporary overlays restore in finally.

Unbolted-v1 completed two applications, native group launch with empty bolt,
and direct retirement on move end. Captures14/16 individually inspected:
orange burning particles around Sunfire's body during the isolated aura
fixture, clear body after release. No forearm effect declarations were in
that fixture. This verifies actor-target placement/lifetime; native enemy-hit
application remains pending. Userdata unchanged, overlays restored, normal
exit1. Muted; no audio acceptance. Player staging unchanged.

### Sunfire attack prototype scope

Private sunfire-local-beam-v1 copies the original fire1_dmg_lh declaration,
unchanged, into each referencing FightMove (attackknockback2 andpower2).
The original root declaration remains. This uses the same native local
scope already verified for Bishop, without changing global shared events.
Extended prototype trace to include fire1_dmg_lh.

sunfire-local-beam-run-v1 completed (userdata unchanged, overlays restored,
normal exit1). Six local lookup records resolve fire1_dmg_lh atED12E to
04887A64. No target aura/harming dispatch was established by this run;
this is prototype evidence, not combat acceptance. Visual inspection for
this run was not performed; no screenshot/visual acceptance claim.

Next range boundary: nativeCF842 compares maxrange, CF854..CF86D evaluates
through B8550 virtual+8 then converts and stores signed16 at attackdata+6.
Sunfire's declaration supplies %sun_flmthrow_ft, while current imported
EventOperands only carries energy and damage. NativeCF356 subsequently
loads attackdata+6 using signed16 into stack+1C. Need establish beam's
actual range consumption and actor context before adding per-actor symbolic
maxrange; do not patch the shared descriptor with one actor's value.

## Sunfire symbolic range and enemy burning verification (2026-09-18)

Added imported maxrange metadata with the existing event lifecycle, native CF854 parser interception, and actor-local range resolution at CF356/D0556/D06DE/D0840. Both generated copies of the beam tail are guarded. Literal values retain native behavior; resolved values never mutate the shared attack descriptor. Guard rerun is idempotent.

Optimized build, raven-talent-context-test and --powerup-definition-test pass. The latter exercises the original CF6B0 parser ABI, untouched descriptor sentinel, current actor ranks 1/15 resolving fixture ranges 120/240, clone, literal replacement and retirement. Log: work/xml2-integration/maxrange-regression.log.

Private headless/muted sunfire-maxrange-run-v1 completed, userdata hashes unchanged and overlays restored. Executable SHA256 cfe1326d85a5102a4a08a4692b316685a8e7391fb6d701a0531bbee3036ade0a. Captures 14 and 19 individually inspected: correct NYC geometry and Sunfire forearm flames; capture19 also shows an enemy burning aura and integer damage3. Logs correlate Sunfire actor0473B348/sourcehandle1001 with enemy0473D008/targethandle1116, original zero-damage beam delivery, tag-triggered harming activation, p2_aura group creation, repeated ticks, and target health40->35->32. This is enemy-target behavior, unlike the earlier self-aura fixture. All groups are retired in the trace.

No RAVEN MAXRANGE resolution lines occurred despite diagnostic mode. Thus this run verifies enemy burning delivery but does NOT prove the symbolic range consumer was exercised or that this change caused the successful hit. Trace parsing/cloning of this beam next. No listening validation (muted), no complete Sunfire power acceptance, and no player executable/assets update from this experiment. Goal remains active.

## Beam prototype clone fix (2026-09-18)

The diagnostic sunfire-maxrange-trace-v1 established that maxrange was parsed on prototype04887A64, then lost when attacks cloned it. XML1 CCEAtkBeam vtable003D6A40+18 calls E41D0, which inlines action/attack copying instead of calling CFC80. Original XBE E41D0..E423C disassembly verified source EAX/destination ESI at E41F9 after the action RTTI success branch. Added the existing imported operand clone hook there in guard-raven-energy.py. No native descriptor override and no asset value changes.

Replaced the range regression's host-only clone with actual E41D0 execution, original beam vtable/RTTI and descriptor copying. Optimized build and full --powerup-definition-test pass (work/xml2-integration/beam-clone-regression.log), including stack balance, copied descriptor sentinel, per-rank resolution and retirement.

sunfire-beam-clone-v1 completed and restored private assets; userdata unchanged. Logs show six successful bound prototype copies and ten gameplay range resolutions from inherited1000 to talent120. Captures19/20 inspected individually: Sunfire flames while attacking and absent after release, NYC background intact. This particular corrected-range run did not apply enemy harming; target positioning/aim differs from the prior hit run, so enemy hit validation at the intended range remains pending. Do not claim all Sunfire combat verified from this run. Muted; no audio listening claim. Player staging untouched.

## Corrected-range Sunfire targeting (2026-09-18)

Private sunfire-range-aim-v1 uses the same power data and executable behavior as the beam-clone fix, but turns using process-local WASD between attacks. Completed with userdata unchanged and all temporary assets restored. Binary483a72228e003c3b6a6357554de25e457d2f9ef3a5dba2734377b03af6fb119b.

Actual combat now combines resolved maxrange120 (inherited1000) with original zero-damage beam hits on two enemies (0473D008/handle1116 and0473CA48/handle1114). Both activate the tagged harming handler, create original p2_aura on the enemy, schedule three ticks and retire. Individually inspected captures19,21,22,23: facing changes are visible, capture21 shows enemy aura,22 shows another targeted enemy with reduced health bar,23 shows cleanup after release. This run establishes enemy targeting and burn activation with the corrected range, rather than attributing the prior miss to a missing handler. It does not quantify per-tick HP loss, distant cutoff geometry, held-power looping/drain or audio quality (muted).

Next held-power evidence: original XML2 energypersecond string4A16CC referenced by parser106BD0;106BE7 passes node+B8 to EB1E0 and106BF8 sets node+146 bit40. samepowerhold string4A1928 is installed in action table5436D0 with value1E by initializer3EA494..3EA4A8. XML1 has neither literal. Consumers and native equivalents remain to trace before implementation; absence of a string alone is not proof of missing behavior. No broad XML2 port or unrelated work authorized. Player staging unchanged.

## Held-power drain consumer trace and native arithmetic oracle (2026-09-18)

Previous goal turn made progress by verifying corrected-range enemy burn activation. This turn traced the actual XML2 consumer rather than inferring behavior from attribute names.

XML2 CCombatNode vtable4A401C+4C ->1056E0. It invokes handler+10, obtains actor context through node virtual+28, checks node+146 bit40, and compares current game time minus actor+3C4 with float4A1660 (0.25). Strictly greater proceeds. Node+B8 stores the parsed energy operand.105760..1057DF resolves the talent/context with existing native owner fallback and signed-short conversion.1057DF..105818 multiplies rate by elapsed game time and raises positive subunit costs to1, preserving zero.105818..10583F applies a separate player/difficulty-dependent factor;105846 calls actor energy deduction3ED50, then updates actor+3C4 from game time. Separately105050 records node-start time at actor+3D0; eligibility105B40 includes a quarter-second energy requirement. These are separate concerns and must not be approximated by rendering frame counts.

Original-instruction oracle scripts/xml2-held-energy-oracle.py passes six cases (zero, positive subunit floor, ordinary fractional, whole-second, signed-negative, larger rate). Output work/xml2-integration/held-energy-oracle.json. It starts after operand resolution and stops before difficulty adjustment/deduction; no claim of full lifecycle or gameplay verification.

Matched XML1 node vtable3D8BDC+44 ->E17C0 to XML2 node+4C ->1056E0 by both dispatching handler virtual+10. XML1 E17C0 forwards one argument (ret4), XML2 1056E0 handles two (ret8). XML1 node+38 ->E1740 parallels XML2 node+40 ->105050 (handler+4 startup). XML1 E17C0 has no drain logic in the verified method body. Need trace actual caller arguments, actor energy deduction and node metadata lifetime before implementation. Existing XML1 code/game clock unchanged. No player stage update; goal active.

## XML1 held-drain integration boundaries and calculation (2026-09-18)

Verified XML1 caller43B73 reads actor+2F4 (current node),43B7D pushes ESI actor and calls node vtable+44, yielding E17C0 with actor at stack+4. Thus the XML2 two-argument update cannot be transplanted verbatim. XML1 E17C0 forwards the actor to handler+10; it currently has no additional held drain.

XML1 ordinary power charging CDEE1..CDEF8 calls3F410 with actor ECX and float charge on the stack.3F410 queries current-node powerup tag and actor attribute28 modifiers, computes adjusted cost and clamps against available energy before applying. Future held drain must use this existing deduction path rather than directly decrementing a guessed field or bypassing XML1 modifiers. Native clock66AB0 dispatches global48D8E8 virtual+104, so using the FX clock without verifying equivalence would be an assumption.

Added raven_xml2_held_energy_charge to raven_numeric.c/h, implementing the previously traced strict elapsed>0.25 gate, resolved signed rate times elapsed, positive subunit minimum1 and zero preservation. It returns no charge on clock rollback/nonfinite elapsed and leaves output untouched when not due. Numeric tests match all six original-instruction oracle cases and additionally cover equality, paused time, rollback, invalid times and shifted absolute clock origin. raven-numeric-test passes. This helper is NOT wired into gameplay yet; metadata lifetime, start/update hooks, eligibility and held-input chaining remain unfinished. No player executable changed. Goal active.

## Held-power node operand metadata (2026-09-18)

Added energypersecond capture at original XML1 node attribute parser E2610 (this=node, stack+4 key, stack+8 value, ret8), with independent node metadata rather than sharing event identities. Symbolic operands validate against the startup talent catalog and resolve current actor rank on each query; literal zero overrides a previous symbolic operand. Installed clearing at native reset E2220 and destructor EAF10 through the reproducible guard script. No native node layout extension or shared numeric field mutation.

Optimized build and --powerup-definition-test pass. The new test executes generated E2610 and verifies its actual return/stack ABI, rank1/rank15 resolution6/117, literal zero override and metadata retirement (work/xml2-integration/held-node-regression.log). Reset/destructor hooks were source-inspected; the test invokes retirement directly, so complete pooled-node lifetime coverage is not yet established. Node inheritance/copy behavior also needs verification before claiming full lifecycle coverage.

Still no held-energy charging in gameplay: start/update state, native deduction integration, exhaustion eligibility and repeat chaining remain. Player executable unchanged. Goal active.

## Held-energy gameplay drain adapter (2026-09-18)

Connected xml1_raven_held_update at actor update43B83, immediately after current-node virtual+44. Uses native clock66AB0 and deduction3F410, preserving guest registers, stack and x87 depth. Timers are per native actor handle (actor+1C, verified by original CF27A damage-record source write), node and metadata revision; ordinary moves clear the actor timer, clock rollback resets it, node reparse/retirement cannot reuse the old definition revision. Timer starts on first observed update; explicit start-hook precision, inheritance, exhaustive map/death reuse and exhaustion eligibility remain open.

The initial private v1 run used actor+18 as timer key; caught in source audit and corrected to actual handle+1C before accepted v2 run. Do not use v1 as isolation evidence.

Optimized build, full --powerup-definition-test, numeric tests and original XML2 arithmetic oracle pass. Private sunfire-held-drain-v2 completed with unchanged userdata and restored overlays. SHA256 e3e2f95882cd05fce0c53c330a3b34a0e5c3c58024906f422644014297aeb5d3. Captures12/14/23 individually inspected: full initial energy, reduced energy during power, substantially reduced energy after repeated attacks; scene/background and character remain correct. Trace resolves rate14 and charges approximately3.5-3.7 at >0.25-second simulation intervals. No more charge records after final FX/node retirement at log26820. Prior pauses between attacks similarly contain no held charges. Actual native energy bar changes verify deduction rather than only a successful call.

This verifies the basic gameplay drain path, not complete sustained-power support. samepowerhold chaining, long-hold behavior, exhaustion gating, startup eligibility and only_non_looped trigger semantics remain to address. Muted run gives no audio listening evidence. Player staging unchanged; goal active.

## Long-hold failure isolated and repeat-input trace (2026-09-18)

sunfire-long-hold-v1 extends the first hold by five seconds, keeping the process-local power key down. Run completed, assets restored, userdata unchanged. Individually inspected capture15: Sunfire is idle with the selected power icon lit, no flame effect and substantial energy remaining. The first burst logs five held charges only (42.7768..43.7789); no further drain before the next independently pressed attack55.5857. This contradicts sustained-repeat completion: the node ends after one attack despite continued input. It does not exercise exhaustion because the attack stops first.

Original XML2 chain input path10BD70: context bit7 is read at10BDA9.10BE3D requests action1E through actor36DA0, which uses current node+378 and native110A10 chain lookup.10B830 compares the current node name (node virtual+D0) with each of four actor power slots (2BA00->C7AC0). On a slot match, requires bit7 and the corresponding bit indexed through5441E8. This establishes samepowerhold means the assigned current power's held input, not any pressed power or an unconditional self-loop.10BE63 checks destination eligibility virtual+8 before scheduling node at actor+3BC.10BE71 can fall back to action0;10BEAD additionally checks alternate action1F. These branches and subsequent transition behavior remain to port.

XML1 related ordinary input helpers near E73E4 use actor381F0/current-node action lookup, but no equivalent samepowerhold mapping was found yet. Next trace the matching XML1 input packet/assigned slot and chain parser capacity; do not overwrite an existing action ID or force a self-loop. No game source changed this turn, but runtime evidence now identifies the specific user-visible failure and its next implementation path. Goal remains active; staging unchanged.

## Held-chain declaration capture (2026-09-18)

Traced the actual XML1 chain loader: E3DD7 passes node+10 and the chain XML node to ECDF0. It reads tagged action/result values, resolves their text through 199EE0, looks up the action in table450F88, and drops unknown names at ECF37. Node virtual+F4 is E25B0, which bounds its inline chain array to indices0..28. Installing XML2 action30 directly would overrun this array.

Added a reproducible ECEA4 hook preserving the declared samepowerhold destination in separate node metadata; ordinary actions still follow the native parser. Native reset/destructor clearing also clears this metadata. No asset rewrite or forced self-loop. Regression initially exposed an incorrect assumption that XML values were bare string handles; corrected the fixture and documented the tagged-value ABI. Optimized build and full --powerup-definition-test pass, including native199EE0 access, guest register/stack preservation, nonmatching actions, replacement and retirement. Actual full parser coverage comes from the gameplay run below, not the isolated wrapper test.

Private sunfire-held-chain-v1 completed and restored its overlay. Build SHA256 a6a08cc75d3dd459f008f3f8bdc16cf22e140d255c4cc7390fa6a3497f9a3c02. Real resource loading records node046E6698 result=power2; subsequent held-energy charges use that same node, establishing capture on the active Sunfire move. Individually inspected captures14,15,23: flames during the initial attack, idle while the long hold continues, then normal scene/character and effect cleanup after later attacks. Sustained repetition remains unimplemented and visibly fails, as expected; this change only preserves its previously discarded declaration. Run muted, no audio-quality claim. Player staging untouched.

Next: match the current move to the actor's assigned held power, resolve the captured destination through native move lookup, honor native transition/eligibility gates, and implement exhaustion and only_non_looped behavior. Inheritance/copy lifecycle coverage remains open. The goal remains active.


## Held-input selection and first native repeat path (2026-09-18)

Previous goal turn progressed by preserving the real samepowerhold declaration. This turn verified XML2 10B830 compares the current node name against four assigned powers and tests input word0 bit7 plus slot button bits4/5/8/6. XML1 E755E uses the corresponding native table451A9C. Implemented xml1_raven_held_input using the existing imported per-character bindings, XML1 node-name accessor27B00/node+8 (EAD60), and the held word rather than the pressed-edge word+4. Regression covers all2048 slot/button combinations, unbound identity, retired declaration, and guest stack preservation; startup fixture now includes a compiled herostat.

Connected E77C9's ordinary idle fallback to xml1_raven_held_destination. The adapter interns the declared destination, obtains the actor's native move manager2E290, resolves through ED500 and checks destination virtual+8 with energy eligibility enabled. A successful result flows through the original pending-move write at E77D6; release or failed lookup/eligibility retains native idle selection. This is an initial repeat integration, not complete XML2 transition parity. Original XML2 also checks cooldown36DE0 and has special alternate-action handling; their required equivalents remain under investigation. No new native action IDs, asset rewrites or wall-clock animation timing.

Optimized build, full --powerup-definition-test, and guard idempotence pass. Private sunfire-held-repeat-v1 completed, assets restored, userdata unchanged. Build SHA2561999f118011fab46b49bec61aca5aca7833dc5f3e0a5b1034725d7c4d6fe4cb7. Logs contain50 quarter-second held charges and44 resolved beam uses. Individually inspected captures15/16/23: the long hold now retains an attacking pose with forearm effects instead of idle, and final capture23 shows idle with effects cleared, intact NYC/enemies, and very low remaining energy. Capture16 shortly after release still shows the attack pose; exact release latency is not established. HUD bars are absent in15/16 and visible again in23, so do not claim a clean visual acceptance yet. No audio listening validation (muted).

Still missing: only_non_looped trigger suppression (XML2 parser107A4F..107A8B sets event+0E bit4), held-energy exhaustion/quarter-second eligibility, precise transition/cooldown and release timing, and node-copy lifecycle coverage. Repeated startup charges and effect accumulation need auditing. This experimental executable was not staged to XBOXgame. Goal remains active.


## Startup-only triggers: existing XML1 support verified (2026-09-18)

Correction to the previous pending-work lists: only_non_looped is NOT a missing XML1 system. Existing original-instruction event-pool coverage already showed parsing and clone preservation. Rechecked original E3FB0 and E1D90: event+0E bit4 rejects actor+336 bit20 (looped); bit8 implements the converse only_looped policy. Native transition404FB compares incoming/current node and updates that actor bit itself. No replacement suppression logic was needed or added.

Expanded the original-XBE oracle to test both true/false only_non_looped with other flag bits retained, and the generated --filter-event-test to parse startup-only flags and verify native owner dispatch suppresses a repeated activation and permits a fresh one. Both pass; optimized build and --powerup-definition-test pass as well. A diagnostic-only E1DDC observer records the actual native branch inputs without changing execution.

Private sunfire-held-loop-audit-v1 confirms the real imported startup event takes three non-looped accept decisions and29 looped skip decisions across the scripted combat flow. Thus the held repeat adapter does reach XML1's existing suppression path; repeated startup deductions are not established as a bug and must not be 'fixed' with duplicate custom behavior. Build SHA256 b6d45397f9d23d9193bbce83115ba7739855c54f076aad5e3de7e634c12b8f3e. Run completed, userdata unchanged, private overlays restored. Captures14/23 individually inspected: active flames and intact NYC during attack, then idle/cleared effects among enemies with low energy. Muted; no audio claim. Player staging unchanged.

Next actual missing behavior: held-rate contribution to energy eligibility. XML2 105C2E..105C3F initializes required energy with signed resolved rate*0.25 before adding event costs, then compares available energy at105CC3. XML1 E1A20 initializes only the event-cost sum. Trace the actor-dependent XML2 event cost accessors and existing XML1 bypass cases before adapting that gate. Release timing, sustained effect accumulation and node-copy lifetime still need verification. Goal active.


## Held-energy eligibility and depletion run (2026-09-18)

Added the missing XML2 signed-rate*0.25 requirement to XML1 E1A20 at E1A6D, after its original player/bypass branches and before accumulating unchanged native event costs. Empty event lists with a nonzero held requirement now flow through the original energy comparison instead of returning success. Ordinary/unbound nodes retain the native path. No direct energy mutation or minimum1 in the eligibility contribution.

Extended the original XML2 instruction oracle at105C2E..105C43: eight rates including signed extremes pass, separately from the six debit arithmetic cases. Full generated --powerup-definition-test passes with real E1A20, E2110 and2E8C0: rate14 rejects available0/3.49 and accepts3.5/4; rate1 contributes0.25; retiring metadata restores the ordinary empty-event success. Guest/x87 stacks remain balanced. Optimized build and generator-guard idempotence pass.

Private sunfire-held-exhaustion-v1 holds the initial attack for an additional20 seconds. Completed, userdata unchanged, overlays restored. SHA256200046c34bb9fc050e8be07914d38a3d8b648d19ea88333f4cdd25bdf65a8c28. Actual gameplay cost sums are17.5 (native/imported event14 plus held3.5);727 such eligibility observations include592 below the requirement. Individually inspected captures15 and23: Sunfire is idle with no lingering forearm effects while the long-held power icon remains lit at15, with very low energy;23 shows intact NYC/enemies, idle and low energy after later attempted attacks. This supports low-energy termination, not just an arithmetic-only claim. Does not establish exact termination latency, every rank/difficulty, effect-count stability or death/map lifetime coverage. Muted; audio unverified. Player staging unchanged. Goal active.


## Sustained-effect accumulation found (2026-09-18)

Audited actual sunfire-held-exhaustion-v1 group creation/owner retirement in order. Forearm resource char/sun/p2_power used46 distinct native owners, peaked at84 simultaneously unreleased groups (line26749), and finished with none left. Evidence work/xml2-integration/held-effect-accumulation.json. Repeated creation on unique owners rules out merely counting same-owner refresh logs. Cleanup at the end is working, but sustained accumulation is not accepted: it can visibly overbrighten effects and consume the128-slot powerup pool. Earlier 'cleared effects' observations do not establish stable held-effect counts.

Traced XML1 application2AA90: it scans the actor list at+1FC;2AB41..2AB80 admits existing and incoming definitions for reuse only if definition+24 life>0 or definition+72 bit8 is set. The subsequent94850 definition comparison plus both eligibility flags decides reuse at2ABA3. Otherwise2AD16 allocates another instance and2AD64 initializes it. Added scripts/xml1-powerup-reuse-gate-oracle.py:36 combinations execute the original lifetime-gate instructions unchanged and pass (powerup-reuse-lifetime-gates.json). This isolates those gates, not the definition match or XML2 semantics.

Sunfire's original p2_power trigger has life=-1 and remove_on_node_end=true. The indefinite-life gate is therefore a concrete candidate for the mismatch, but runtime flag values and XML2 reuse rules still need verification. Do not introduce a generic resource/bolt deduplicator or change asset declarations. XML2 active initializer146690 is virtual via4A6B08; its application caller and reuse policy are the next trace. Native same-node remove_on_node_end policy already retains the owner, so simply retiring every owner on a self-loop would contradict the traced XML2 behavior. No gameplay implementation or player staging changed in this audit. Goal remains active.

## XML2 reuse admission difference confirmed (2026-09-18)

The completed sunfire-reuse-flags-v1 run reports userdata_unchanged=true. Its actual special-FX owners share definition046F9C00, life=-1, flags72=00. Thus XML1's positive-life/no_stack gate rejects this definition. No player staging changed.

Located original XML2 reuse search15D730. Incoming admission at15D832..15D89F additionally accepts definition virtual+FC; base table4A734C resolves it to150C10, which reads definition+5D bit20. Parser155361..1553A0 compares string4A7928, verified as remove_on_node_end, and writes that exact bit. Existing-owner eligibility also checks virtual+FC at15D9EF before admitting at15DA14. This is an original XML2 mechanism missing from XML1's earlier lifetime-only admission, not justification for resource-name deduplication or changed assets.

Added scripts/xml2-powerup-reuse-gate-oracle.py; eight incoming flag/lifetime combinations pass original instructions15D832..15D89F and original getters150B30/150C10. Handle resolution is synthetic, unrelated actor-charge query is fixed to zero, lifetime admission is supplied as an input. This proves the extra incoming node-end admission only; existing-owner eligibility, definition matching15B1C0, refresh behavior, and resulting stable gameplay effect counts still require verification before applying a runtime change. Evidence: work/xml2-integration/xml2-powerup-reuse-gates.json. Goal remains active.

## Node-end powerup reuse implemented and exercised (2026-09-18)

Extended only the original XML1 admission decisions at2AB80: remove_on_node_end metadata admits the existing and incoming definitions alongside the unchanged native lifetime/no_stack decisions. Native94850 definition matching remains authoritative; selected owners flow through original2AD64 initialization/refresh rather than allocation/list insertion. Reproducible hook lives in scripts/guard-raven-powerup-metadata.py, with source-address notes. No asset changes, forced no_stack flags or resource/bolt deduplication. XML2 application15DC56 invokes the traced reuse search, allocates only if no valid owner is returned, then calls instance virtual+14 at15DCDA for both new and reused owners. XML1 likewise reinitializes both paths. The first few instructions of an exploratory disassembly starting15DC36 were misaligned; conclusions use verified call boundaries15DC56 and15DCDA and generated source.

Optimized build and --powerup-definition-test pass. Re-running the guard is idempotent. Private sunfire-reuse-admission-v1 completed through NYC, long held attack, depletion, releases and further attack attempts; userdata unchanged, overlays restored. SHA256c4b5ce9a5cffe7ff61fabcfbe7f960aef5c92b40176240f92abf7109f9f09cda. Added scripts/audit-powerup-effects.py, accounting for synchronous refresh release before OWNER logs: prior diagnostic run peaked at84 simultaneous forearm groups across47 owners; new run peaks at2 groups across2 owners, with98 group starts and zero remaining. Evidence reuse-flags-counts.json and reuse-admission-counts.json. Refresh still recreates the two groups; exact particle continuity is not certified by the ownership count.

Individually inspected native captures14,15,23.14 shows Sunfire projecting flames in intact NYC with HUD;15 shows depleted energy and cleared effects despite held-power indication;23 shows active enemies, intact scene and no lingering forearm flames after release. Muted run, audio unverified. Not a frame-count-only check, and not a certification of other powers/ranks/difficulties/death/map transitions. Player staging unchanged. Remaining combat/script goal remains active.

## Bishop add_attack dispatch and drain dependency audit (2026-09-18)

Re-read the imported Bishop powerstyle. His power8 buff explicitly declares class=add_attack with damagepercent=%bish_fury_dmg and damagetype=dmg_energy, plus a scoped attack-rating affecter. This is a missing player-visible system, not rounding parity. XML1 image lacks add_attack and atk_instant_pct literals. Original XML2 CPUAtkAdd callback14CC90 rejects input-record+35 bit2 at14CD1C; its separately created record sets that same bit at14CE90..14CE98, preventing recursive amplification. Both rank/RNG-resolved percentage and integer flat contribution precede14CDF2. At14CDF2..14CE39 it computes percentage*incoming damage + signed-short flat, suppresses nonpositive totals and clamps positive subunit totals to1. Same damage type with mirror=false merges into current record; different type or mirror=true builds and delivers a separate hit. Mirror swaps the delivery participants through14CEA2..14CED5. Do not flatten this into a global damage multiplier or copy XML2 record offsets into XML1.

Added scripts/xml2-add-attack-oracle.py.24 original-instruction cases cover fractional/nonpositive totals, signed flat values, minimum1, matching/different damage types and mirror routing. All pass; output work/xml2-integration/xml2-add-attack-routing.json. Stops at the actual merge/separate/suppressed branches before delivery. It does not prove actor/rank resolution, callback registration, lifecycle, or gameplay. No player staging change.

Bishop power4's drain is a distinct dependency: its punch declares damageMod=dmgmod_drain_battery. XML2 original string493B98 is table entry53DD08 with mask0x200 at53DD0C; the literal is absent from XML1. This identifies a damage-modifier flag rather than evidence for an independently named drain powerup handler. Its consumer still needs tracing. Existing add_attack trace and oracle are the next implementation input; XML1 native outgoing-hit callback/lifecycle boundaries must be identified before installing the missing handler. Scope remains missing XML2 combat/script functions only; older broad two-title descriptions above are not current authorization.

## Native XML1 outgoing-hit ABI and add-attack operands (2026-09-18)

Traced original29DC0 event dispatch. Jump table29FA8 maps event3 to29E5A (definition+B4), event4 to29E99 (+B0), and event5 to29ED8 (+B8); do not infer event numbers from branch order. Event3 calls cdecl(instance, other_entity_handle, damage_record) at29E81..29E91 after the native94F00 selector. Active generation and bitmap gates run before callback dispatch. Concrete callers include outgoing attack path5C675..5C690 and multi-target completion5AE30..5AE4E, the latter supplying the native null handle. Consequently the adapter must validate the target rather than assuming every dispatch has a recipient. Full ordering relative to recipient damage must remain part of implementation validation.

Added scripts/xml1-powerup-hit-dispatch-oracle.py:12 cases execute29DC0 unchanged with a controlled pool and recording RET callback. Live/stale/inactive owners, missing callback, and null/non-null record verify callback args and balanced cdecl/thiscall stack cleanup. Scope bypass is explicitly set via selector+14 bit2; this oracle does not prove actual scope matching, damage, or expiry scheduling. Output work/xml2-integration/xml1-powerup-hit-dispatch.json.

Production metadata now captures damagePercent, damageSum and mirror (case-insensitive attribute names, unchanged symbolic values), preserving them through the existing definition clone/retirement lifecycle. Added tests for attributes preceding class, source retirement after clone, and reused-definition cleanup. Built raven-powerup-metadata-test and passed. This supplies future active-owner evaluation; it deliberately does not acknowledge native parsing as a functioning add_attack class, install an unfinished callback, or change actor stats. Callback implementation, type/recursion translation and actual hit delivery remain incomplete. No game run or player staging update in this step. Goal active.

## Add-attack active operand evaluator (2026-09-18)

Added raven_add_attack.cpp/.h to the shared actor-talent library. It binds only class=add_attack metadata, resolves percentage and flat operands against the current active powerup source context through the existing validated handle/actor/talent resolver, retains damage-type text for later XML1 translation, and returns mirror policy. Inputs are evaluated per invocation, so source rank changes are observed; stale active instances reject without changing the caller's output. RNG samples are supplied by the caller, with no independent RNG state.

Verified constructor158A60 (vtable4A830C, callback14CC90 at4A8320) initializes percentage endpoints and flat endpoints to zero, mirror=false, and damage type10000000. Those zero defaults are used; empty type text denotes unspecified until guest translation. Percentage uses floating endpoint sampling; flat uses signed-short endpoint conversion and16E1C0 inclusive integer range. The active instance's optional flat override seen at14CDA4 is not yet represented by this API and must be handled by the guest callback before relying on the returned flat value. Invalid/unlearned symbols are not silently converted into usable buffs.

Built and passed raven-harming-operand-test with added add-attack cases: real compiled talent input/current XML1 source rank, changing rank1 to15, flat2..4 sampling, mirror/type retention, stale-generation rejection with untouched output, and metadata reset. Existing harming cases also pass. No installed combat callback yet: native damage-type translation, recursive-hit suppression, separate-hit delivery, optional instance override, and gameplay validation remain pending. No player staging update. Goal active.

## Add-attack guest delivery adapter (2026-09-18)

Added raven_add_attack_runtime.h/C bridge and raven_xml1_add_attack to the guest adapter. It validates the live instance/holder/target, evaluates startup-bound operands with explicitly sequenced native RNG samples, rounds bonus damage at XML1's integer boundary, merges matching-type non-mirrored hits, and prepares different-type/mirrored hits for native combat-manager delivery. Damage type comes from original definition+34 parsed by955C0, preserving native XML1 enum handling. Positive fractions use the accepted minimum1 integer policy.

Found native XML1 analogue2CCA0:2CD08 rejects record+60 bit4;2CD76 marks generated secondary hits with that same bit. Its secondary record also sets bit0 to avoid a second trait multiplier. It dispatches through singleton59CE0, vtable3CBCF4+50 ->5C590, taking source actor, target actor, record, boolean. XML2 manager slot+64 must NOT be used on XML1. The adapter reuses this native dispatch, with a synchronous private stack record and source/target swap for mirror. It does not substitute the harming recipient-only delivery route or introduce a global recursion lock.

Built optimized executable; full --powerup-definition-test passes including new direct adapter fixture: literal50% of10 becomes15 for matching type, record+60 bit4 prevents another bonus, inactive owner leaves the record unchanged, guest and x87 stacks balanced. Native handle/type resolution executes in these fixtures. Existing harming and lifecycle regressions pass. Different-type/mirror delivery code is compiled but not yet exercised by this fixture. The new callback is not installed on live definitions yet: verify separate damage delivery, duration and optional-instance-flat semantics before enabling imported buffs. No gameplay or player staging update. Goal active.

## Add-attack callback connected to native owner dispatch (2026-09-18)

The existing generated definition-completion hook now installs an add_attack thunk into+B4 for captured class=add_attack. Extended its native callback storage from8 to12 bytes and dispatcher lookup with the third thunk. The thunk reads the verified three cdecl arguments, invokes raven_xml1_add_attack, and leaves argument cleanup to29E91. Harming callbacks remain in their original slots. Active definition duration resolution now accepts add_attack in both the guest lifetime gate and symbolic-life resolver, retaining native duration modifiers and refresh handling.

Extended the executable fixture to install the callback and invoke the actual generated29DC0 with a live owner chain, real generation/bitmap validation, native selector bypass and native indirect callback dispatch. A50% bonus changes10 to15 through that full callback path with balanced guest/x87 stacks. First fixture run failed because its manually seeded singleton had not set native initialized flag485800; corrected fixture initialization and reran. Optimized build and full --powerup-definition-test pass (add-attack-callback-build-v3.log and add-attack-callback-test-v3.log).

This enables the implementation in the private development executable, not player staging. It still does not establish separate elemental/mirrored damage delivery, actual symbolic buff duration/expiry, optional instance flat overrides, or power8 gameplay correctness. Those remain required validation/implementation tasks. No live game was launched. Goal active.

### Bishop Energy Fury: live beam damage delivery

Private `work/xml2-integration/bishop-buff-live-v4` completed the corrected
process-local flow through NYC combat. Development executable SHA256:
`f5cfdc8ed86baeaa6c0b9cbed1c2b344cdcd4bdd15182c2485476ee4b1ec0455`.
The previous v3 run is NOT buff evidence: an unchecked string replacement
left the baseline input flow unchanged. v4 corrects the replacement needle
and asserts its presence before executing the flow.

Bishop actor `0473B3B8`, active add_attack instance `00483604`, target handle
`00000F18`: four outgoing callback invocations returned RAVEN_FOUND.
The first connected beam was increased from 11 to 23 (game.log line 26365),
then reached recipient `0473D078`, whose health changed 40 -> 17 (line 26392).
The next beam was increased from 15 to 31. This proves live same-type bonus
transport and an actual enemy health deduction, beyond fixture-only dispatch.
Rounding follows the accepted XML1 integer policy.

Native captures 15 and 23 were individually inspected: NYC geometry, Bishop,
enemies and HUD are present; active hand glow is visible in 15. Capture23
partially occludes Bishop behind a tree, so it is insufficient on its own to
certify expiry visuals. Run was muted: no audio-quality acceptance. The runner
terminated the process after FLOW COMPLETED (exit1 is its termination result),
restored its private asset overlay, and reported userdata_unchanged=true.

Still unverified: basic-attack dispatch, separate elemental/mirror delivery,
attack-rating affecter, ally application and complete buff expiry behavior.
No player staging changes; the overall missing combat/script goal stays open.

### Bishop melee lookup isolation

`bishop-melee-live-v1` reproduced absent Bishop outgoing attack events with
only basic light/heavy inputs, without activating any power. Capture13 was
individually inspected: Bishop and nearby enemies render in NYC with the HUD;
it does not show a confirmed landed melee hit. Input logs prove A/B presses
were delivered. Native shared fightstyle_hero.engb loaded successfully.

Added optional `XML1_TRACE_FIGHT_CHAINS=<character name>` at the existing
native move lookup seam, retaining the normal native lookup and requirements.
It reports deduplicated all-action results for that character. Normal power
tracing is unchanged; non-power actions safely use default-key zero rather
than indexing the four-slot power-default array. Optimized build passed.

`bishop-melee-live-v2` completed with this diagnostic. Bishop actor0473B3B8:
action1 key06000EC1 and action2 key06000160 both return null, while actions3/4
return046EBDC8/046E1658 and movement actions10/11/12 return valid nodes.
This narrows the melee failure to chain lookup/eligibility, before attack
trigger dispatch. It does not yet distinguish a missing assigned style from
native eligibility rejecting its move. Next trace ED500 style search versus
eligibility; do not bypass requirements or replace shared XML1 fighting styles.
Both private runs restored overlays and retained userdata. No player staging.

### Imported roster Talent casing restores Bishop melee dispatch

Live `bishop-melee-live-v3` traces ED500: all searched containers in slots3,
1 and0 return null for light/heavy chains; no candidate reaches eligibility.
Slot2 is absent (not by itself proof of a bug). Original XBE trace establishes
48690 selects a fighting style from owned talents and ED780 loads it via
AF6D0/48690. The search failure is earlier than an attack trigger.

Controlled private `bishop-melee-live-v4` changes only Bishop's direct child
`talent` element spelling to XML1's `Talent` spelling. Same executable and
same input flow: light/heavy now resolve to046E4968/046E4708, and native outgoing
attack events occur (four light, two heavy). This isolates the declaration
format problem without changing shared fighting styles or combat requirements.
Capture13 was individually inspected; it shows Bishop receiving an enemy hit,
not proof of a landed Bishop hit. No Bishop outgoing health-deduction log was
recorded in this run, so melee hit delivery is still unverified.

Fixed scripts/stage-xml2-test-roster.py to normalize only imported direct
`talent` child tags to `Talent`, preserving attributes and original heroes.
The manifest records converted talent names. Exercised the importer against
XBOXgame + pc-herostat.xml into private selected-roster-v3: both Bishop and
Sunfire contain native Talent grants including fightstyle_hero; all35 existing
roster entries preserved. Optimized rebuild passed after diagnostic header fix.
Private runs restored overlays and userdata; player staging unchanged.

Optional search diagnostics are installed by guard-raven-power-bindings.py
at ED587 (candidate) and ED59F (eligibility return), gated by the active named
character light/heavy lookup with a96-line cap. They preserve native results.
The full missing combat/script goal remains open; next verify connected melee
hits with the corrected roster and apply this roster correction to subsequent
Bishop/Sunfire fixtures before evaluating other missing systems.

### Bishop landed melee and separate Energy Fury damage verified

Private `bishop-melee-live-v5` uses the corrected Talent roster and faces
incoming enemies before basic attacks. Live native health logs prove connected
melee: event046D8158 from Bishop0473B3B8 takes enemy0473CAB8 from40 to30.
The base4 damage becomes10 under native XML1 strength scaling. Capture14 was
individually inspected: enemies fall and7XP appears; HUD/NYC geometry present.

`bishop-melee-live-v6` activates Energy Fury before the same combat. Executable
SHA256 f7618110c0cccf455b0d036e7189a1877620ef73c82d834014a6510dba87cfab.
Four connected attacks each deliver a separate bonus record00F7FA38 followed
by physical record00F7FCEC. Examples from game.log:
-26048: secondary4, enemy0473D078 health40->36;26074: physical hit36->26.
-26114: secondary5,26->21;26140: physical21->8.
-26172: secondary5,8->3;26200: physical3->-10.
-26261: secondary11, enemy0473CAB8 health40->29;26287: physical29->3.
Each secondary callback returns MISSING (native recursion guard), while the
original callback returns FOUND. This verifies actual different-type damage
delivery rather than merely creation of a second record. Native XML1 physical
stat scaling remains intact; no attempt to impose XML2 rounding parity.

Null-target callback at26318 is a missed swing, not a missing-melee-bonus bug.
Original XML1 5AE28..5AE49 emits this callback only on the no-success path.
The guard against a missing target remains appropriate.

Effect owner00000089 starts at25884/25885 and retires26321. Individually
inspected v6 captures14 and18: active hand glow during combat, no hand glow
after retirement, normal NYC environment and visible opponents. This proves
visual cleanup for this run, not exact duration/rank scaling or restored
post-expiry damage (no connected post-expiry attack was measured).
Both runs completed, harness-terminated, restored private assets and preserved
userdata. Muted: no audio acceptance. No player staging change.

Remaining Energy Fury work includes attack_rating and ally application;
mirror mode, exact lifetime scaling and post-expiry damage still unverified.
The overall missing combat/script goal remains active.

### Attack-rating std_enhancement predicate resolved

Original XML2 owner definition vtables4A734C and4A830C both map virtual+104 to
150C30, which reads definition+5D bit7. Parser1553E5 compares key4A7908:
`std_enhancement`;1553F7..155424 parses true/false into that bit. Reset154CF0
clears the bit at154D7E..154D8D. Thus the previously unresolved predicate is
not a target/team guess: it explicitly distinguishes standard enhancements.

Added scripts/xml2-attack-rating-oracle.py. It executes unmodified original
149A15 attack-rating cache code with real native pool/definition/affecter
getters and literal2 affecter; no return-value stubs. Six cases pass:
add/scale/unsupported-max, each with std_enhancement false/true. Add updates
cache+80; scale updates+84. +90/+94 receive the same contribution only when
std_enhancement is false. Mode2 leaves all four unchanged. Stack return checked.
The original reset bit-clearing block was separately executed from byteFF;
this verifies the flag default, not the complete constructor. Full constructor
requires a string-interner setup and was not claimed as exercised.
Evidence: work/xml2-integration/attack-rating-oracle-v1/attack-rating.json.

5D330 consumes these four fields;5DA60 invokes5D330 alongside defense5D6A0
in combat. Player-visible XML1 integration still requires mapping the actual
XML1 combat calculation and lifecycle. No global damage multiplier, shared
asset edit or cache-offset transplant has been introduced. Goal remains active.

### Rating declaration capture and XML1 combat location

XML1 5C240 builds attacker/defender ratings from AF720 trait queries plus
AF700 levels (physical types1/3 use trait3, other types trait1). At5C40C the
native calculation is (attack+30-defense)*0.025, floored to0.1. Values above1
also populate the caller's excess-rating output at5C450..5C45A; do not simply
clamp or multiply the final probability. Later native bypasses/RNG remain
part of the original combat behavior. No rating hook is installed yet.

Extended native definition-child capture to retain direct `affecter` fields,
including symbolic level operands, alongside existing special_fx. Separate
ordered affecter metadata follows reset/completed clone/final retirement and
is returned as an owned snapshot; cloning from an unbound source clears stale
metadata. `std_enhancement` is retained as a definition attribute. This is
loading/lifecycle support only: no actor base-stat mutation or rating behavior
is claimed. Nested affecter scope children are not captured by this change.

Metadata tests cover source retirement, clone independence, unbound replacement,
case-folded keys and preserved symbolic values. Optimized build, metadata test
and --powerup-definition-test passed. Logs: affecter-capture-build.log and
affecter-capture-native-test.log under work/xml2-integration.

Private bishop-affecter-capture-v1 reaches combat with executable SHA256
088209771fbee37a6462057673b547ea8ab623c5ce8f6b4f7bb3fe992e2e7b77.
Game log25382..25384 captures definition046F9BC0's scale/attack_rating/
%bish_fury_ar declaration. Native health logs still show connected separate
bonus4 (40->36) then physical10 (36->26). Capture14 individually inspected:
Bishop, enemies, HUD and NYC environment present. This does not validate audio
(muted), the unimplemented rating effect, or every menu/media transition.
Run completed and harness-terminated, private overlays restored, userdata
unchanged. Player staging unchanged; full goal remains active.

### Energy Fury attack-rating scale integrated into XML1 combat

Added raven_rating.cpp/.h: captured scale operands are evaluated against the
active instance's source actor/talent rank; no stored trait mutation or cached
rank. Matching unsupported aggregation modes return an explicit error. This
first integration supports scale, not all XML2 rating modes/scoped children.

raven_xml1_combat_rating traverses the actor's generation-checked native owner
list, uses XML1 definition selector94F00, and scales the temporary attack or
defense rating. guard-raven-damage.py installs calls after5C370's completed
rating store in recomp_0006.c. Original branch flags, hit-roll bypasses, chance
floor, excess-rating output and RNG remain intact. XML1's native rating basis
(stat+level) is retained; XML2's cache offsets and base-stat formula are not
transplanted. std_enhancement's separate XML2 display/cache accounting is not
implemented as a second XML1 cache (the combat contribution is applied).

Native fixture checks active1.25 scale100->125, defense attribute isolation,
retired-owner rejection and stack/FPU balance. Optimized build and
--powerup-definition-test pass (rating-runtime-build-v3.log and
rating-runtime-native-test.log).

Private bishop-rating-live-v1 completed. The actual rank-one %bish_fury_ar
operand resolves to1.2; six combat observations change Bishop's rating17->20.4.
Separate bonus damage and physical health deductions still occur. Owner89
retires at game.log26410; no subsequent rating modifier is logged. A later
attack reaches an already-dead target, so this is not a living-target
post-expiry hit-rate comparison. Capture14 individually inspected: Bishop,
enemies, HUD, NYC environment and defeated target present. Audio muted.
Userdata unchanged and private overlay restored; player executable unchanged.

Remaining: live rank-change/expiry acceptance, broader rating modes/scopes,
ally application and other missing combat systems. Goal remains active.

### Native XML1 ally policy confirmed

The original parser955C0 handles apply_ally at959CD..95A5B: near/medium/all
write definition+6C's ally nibble as1/2/3. Added a generated-native parser
regression checking replacement, preservation of unrelated flags, and stack/
FPU balance. Optimized build and full --powerup-definition-test pass in
ally-parser-build.log / ally-parser-test.log.

Traced consumerD77F0: after living-actor and faction checks, D79F0 reads that
nibble. All takes D7A01 without a distance condition; medium/near check original
300/100 distance constants with strict less-than. D7A09 passes the candidate
and original source to native deliveryD75A0, which calls2AA90 for allocation.
scripts/xml1-ally-range-oracle.py executes the unmodified original range branch
for32 cases including threshold equality and far-away all, all passing. Output:
work/xml2-integration/ally-range-oracle-v1/result.json. This proves only the
range decision, not enumeration/delivery/gameplay. No replacement ally system
is needed for this declaration; live imported buff delivery remains to verify.

Private party-validation attempts (not ally-buff acceptance): bishop-ally-live-v1
used loadMapKeepTeam as blackbird callback. Capture11 shows empty roster
pedestals and the log repeatedly invokes runscript with the expression; no
gameplay transition was established. bishop-ally-live-v2 restores the working
loadMap callback and sets keepheroes=true only in its private mission fixture.
It reaches NYC combat, but capture11 still shows only Bishop; capture14 shows
enemies, a defeated enemy/7XP, intact NYC and HUD. Six rating observations
remain17->20.4 for Bishop, with add_attack callbacks, but no teammate is present
to prove delivery. Do not count either run as ally application validation.
Both runners completed and terminated their private game, restored overlays,
and report userdata_unchanged=true; muted audio is unverified. Development EXE
SHA256 fb97b4aaca1d0df9e326f60e4bfd124c0062a340b4a2d676f59c06e5ebbabb9f.
Player staging unchanged. Next fixture must establish an actual second actor
(native addHero is used by scripts/nyc/alison/add_cyclops.py) before judging
the buff. A mission flag or populated selection menu alone is insufficient.

### Energy Fury reaches a live teammate and cleans up both effects

Private bishop-ally-fixture-v3 adds an isolated pause action invoking the
original setInCampaign/addHero commands after the NYC transition. Although
the script names cyclops, the observed activated second roster slot is
Iceman; do not claim a Cyclops import/selection test. Capture19 of
bishop-ally-live-v3 confirms the second actor and team HUD. That run's later
capture failed because the harness requested12 after19; native capture IDs
must increase (guest_graphics_live.c rejects IDs <= the last request). It was
not a game crash. Runner cleanup completed and userdata remained unchanged.

bishop-ally-live-v4 corrects only capture numbering and completes the flow.
Individually inspected capture20: Bishop and Iceman both have the imported
hand aura in intact NYC. Native log26193/26196 creates distinct owners89/8A
for the same Energy Fury definition046F9BC0; each starts two hand effects.
Log26429/26430 retires both owners, and inspected capture26 shows both actors
without the hand auras. Native ally distribution and visual lifetime therefore
work without a replacement targeting system.

The movement path hits the fence after the team camera changes. The logged
add_attack targets are null; no teammate connected hit or rating contribution
is established. Numeric ally combat acceptance still needs a connected attack.
Muted audio unverified. Test EXE SHA remains fb97b4aaca1d0df9e326f60e4bfd124c0062a340b4a2d676f59c06e5ebbabb9f.
Harness completed, private game terminated, overlays restored, userdata hashes
unchanged. No player-stage update. Goal remains active.


### Rising Sun: outgoing alias and defensive scale integration

The original XML2 attribute table at `545998` assigns `damage` and
`atk_damage` the same ID57; outgoing query `62530` uses that ID. The imported
scale reader now accepts both names through the same XML1 damage bridge.
It does not apply two multipliers for a single declaration. A native fixture
checks scale2 and restoration after retirement.

For `def_damage`, original XML2 cache update `14A6B1` writes additive EC or
multiplicative F0; `14A758` multiplies F0. The real hit consumer `45EBC` obtains
the defending actor's cache at actor+470, refreshes it when dirty, and
`45F0A` combines F0 with the hit's defensive scale. `45F14..45F3C` subtracts,
clamps at zero, multiplies and stores the resulting damage. This establishes
an incoming-hit modifier, not a health-setting callback or an early attack
minimum-one adjustment.

XML1 already owns defensive processing in `45260`: `45501/45512` query its
native defensive class18, then `45517..45558` subtracts, clamps at zero,
multiplies and converts its context+94 accumulator. The new adapter at
`45517` joins imported `def_damage` scale to the native local ESP+10 before
those operations. It preserves the native bypass at `454EC`, subsequent hit
reactions, and the native numerical rules. Unrelated XML1 declarations take
no new path. This avoids incorrectly converting Rising Sun's zero into one
at the earlier `5C539` attack clamp.

Native tests cover zero incoming scale, outgoing attribute isolation, stack
and FPU balance, and restoration of a pre-existing .75 multiplier after
retirement. Evidence: `work/character-power-smoke/rising-defense-contract.log`.
These adapter tests alone do not prove live invulnerability; private gameplay
validation with the separate test invulnerability disabled is required.


### Projectile explosion victim-event context (integration in progress)

XML2's projectile event parser at F21EB delegates `Explode`-prefixed fields
through EB2B0/EB240. The latter formats `%s%s`; `VictimEventTag` and
`VictimEventTag1` reach EB535, and `VictimEventTag2` reaches EB4EE.
This explains why a search for the complete `explodevictimeventtag` literal
finds nothing in the executable. The explosion record is independent of the
ordinary projectile hit record (XML2 A9910 payload+40 versus A98C0 payload+8).

XML1 D2190 has no corresponding prefix parser. Its event+1C is already an
attachment index, so that slot cannot hold imported explosion attack data.
D2903 currently supplies the same native hit record to both spawn arguments;
5A5DA calls96910 to retain explosion scalars, then96960 exports them at impact.
The integration now preserves the otherwise-lost callback context separately
at those store/export boundaries. Native damage, type, attack ID, radius and
owner substitution remain untouched. Full entity generation, address and
source matching prevent callbacks following recycled projectiles or owners;
the base projectile destructor retires the context.

This is only the ownership portion. Imported prefix parsing, reset/clone
ownership and construction of the separate explosion record remain pending,
as does Bishop power7 gameplay validation. Do not report the power as fixed
from these boundaries or their isolated tests alone.


#### Explosion field dispatch follow-up

The Bishop/Sunfire source audit found one explosion-prefixed event:
Bishop `gun_fire_rad_exp`, with `explodedamage=1` and
`explodevictimeventtag=100`. The integration now retains those fields (and
the tag1/tag2 aliases) in separately owned event metadata. Existing event
reset/clone/destruction hooks copy or retire this data along with imported
attack operands. A dispatch-local explosion record preserves native source,
move, type and flags and supplies its authored damage and independent tags
as the fifth native spawn argument; the direct record is unchanged.

The callback store is scoped to that explicit record. Legacy XML1 spawns
reuse the direct record as their explosion seed, and must not acquire its
callbacks merely because the new export exists. Nested synchronous spawns
restore the previous scope. The original count/death-position adapter keeps
its own dispatch-local descriptor and still consumes the original six
arguments. No resource filenames or character power definitions changed.

Literal single damage values and single-valued talent operands are supported;
ranged explosion operands require native range integration and currently fail
explicitly. They are not authored by these two original character files.
Build/contracts and Bishop gameplay evidence are pending at this edit.


Explosion follow-up validation: the full definition contract suite passes after
placing the metadata fixture after its required startup catalog setup. In
private `bishop-explosion-v1`, both original power7 activations spawned six
explosions, preserved their independent tag100, applied shared radiation to
the actual NPC, delivered health loss, and retired all six effects. Native
captures confirm Bishop, the radiation effect and cleanup on both uses.
The associated firing sound is still unverified: its original `fire_event=101`
route appears missing and is the next integration target. This is not a
complete power/audio acceptance or a staged player release.


### Historical character race metadata / amIAnXman source trace

Status: traced, not implemented or registered. This does not change the current
30 registered / 95 pending script-name counts.

The missing `amIAnXman` command (XML2 B28E0, descriptor 49A328, result `i`,
arguments `a`) does not test a list of stock hero names or require an `xmen`
classification. It starts with result 1, defaults an empty entity name to
`_ACTIVE_HERO_` (49CB08), uses the native name/handle resolver, verifies CActor,
and returns 0 only when the actor's character definition has race bit 9
(`brotherhood`). Missing entities and non-actors retain result 1. The integration
must preserve these defaults, rather than guessing team allegiance from names.

The authored data source is confirmed: XML2 57160 iterates `Race` children
(literal 49460C) and reads each child's `name` (4911D4), then calls C7940.
C7940 lowercases a bounded temporary name and resolves the enum table 5412D8;
recognized entries OR a bit into the definition's 16-bit mask at +4C8.
The table is none=0, human=1, mutant=2, robot=3, sentinel=4, morlock=5,
shadow=6, astral=7, xmen=8, brotherhood=9. Multiple children accumulate;
unknown entries return false without changing the mask. C6E30 queries that
mask; constructor write CC61F resets it. This same authored classification
feeds XML2 powerup race filtering (see raven_xml2_scope_race), so it must be
shared metadata, not a script-only or Bishop/Sunfire-specific flag.

XML1's integration seam is the native CharacterManager child loader 55B20:
EBX is the live CharacterDef, EDI the parsed definition node. It first feeds
attributes to AFD70, then calls the existing child loaders at 55B7F, 55B88,
55B91, 55B9F, 55BA8 and 55BB1. A missing Race child loader can attach here
without rewriting the existing attribute or child systems. Existing XML1 XML
node lookup/iteration uses native 126C30 and string ownership uses
125DA0/125890; the added loader must respect their ownership and guest ABI.
Do not flatten Race children into an invented attribute.

Remaining before wiring: establish metadata storage and all native reset,
copy and retirement boundaries (including definition pool reuse); implement
and exercise real Race child parsing; connect the query and shared race
consumer. The expanded CharacterDef is currently 0x488 bytes, with +484..486
already assigned to costumes and +487 to skeleton flags. XML2's +4C8 is NOT
a valid XML1 offset. No layout change or host metadata cache has been made
based on this trace alone.

Evidence captured from the supplied images in
`work/xml2-resume/character-race-native.asm` and
`work/xml2-resume/character-race-integration.asm`. This pass made no gameplay
or visual claim, did not run the game, and did not replace the staged EXE.


### Character Race loading and amIAnXman implementation (2026-09-30)

Added the missing `amIAnXman` descriptor and command, backed by shared authored
classification metadata in `raven_character_race.cpp` and native XML child
loading in `raven_character_race_guest.c`. This is definition metadata for any
imported character, not a roster-name exception. Stock definitions without
Race children contribute no bits. The command returns 0 for an actor with
Brotherhood classification and 1 otherwise, using XML1's native active-hero
alias, entity resolver, actor RTTI and interpreter integer result interface.

`guard-character-race.py` attaches the loader after XML1's existing child
loaders at 55BB6 (definition EBX, node EDI), clears metadata at CharacterDef
construction B1640, and retires it at B2E37 after native destruction has released
its resources and base talent state. Native pool release 55920 calls virtual
slot zero (B2E60 -> B2DC0) before clearing construction/allocation bits. This
preserves classification during cleanup callbacks and prevents pointer reuse
from inheriting a retired definition's data. No guest fields, character size,
resource names, asset contents or serialized save fields were changed. Metadata
uses synchronized owned values and does not hold borrowed XML string pointers.
The shared mask API is available for remaining missing race-based consumers;
this does not claim those powerup/event consumers are all connected.

Release build and the full existing `--powerup-definition-test` pass in
`work/xml2-resume/character-race-final-build.log` and
`work/xml2-resume/character-race-final-test.log`. The added fixture constructs
synthetic parsed nodes and calls real native symbol, child and attribute lookup
methods, verifying multiple flags, mixed-case values, missing/unknown names,
unrelated children, repeated parsing, metadata reset/reuse, preserved registers
and stack/FPU. The query fixture checks actual native actor RTTI and classification
lookup, including missing/non-actor defaults. Descriptor coverage includes the
new command. The guarded insertion pass is idempotent.

Limits: this fixture does not decode a character file or execute a full script
expression/name-resolution path. An additional attempt to call the entire
native CharacterDef constructor reached the pre-existing talent-map allocation
path before the native heap had been bootstrapped in this isolated fixture,
ending in a null indirect call (character-race-lifetime-test.log). No gameplay
failure is inferred from that harness failure. The unsupported full-constructor
probe was removed; the passing tests do NOT prove complete native construction,
destruction or campaign save/load. Native ownership call sites were traced in
`work/xml2-resume/character-race-lifetime.asm`. No game was launched or staged.
Current script inventory: 31 registered additions (including six retail no-op
adapters), 94 still pending. TODO #3 remains active.


### Brotherhood and living-party script queries (2026-09-30)

Added `getBrotherhood` (XML2 B3D10, descriptor 49A308, i/a) using the shared
CharacterDef race mask introduced for amIAnXman. Native actor RTTI rejection
and missing entities return 0; the authored Brotherhood bit returns 1.
There is no explicit empty-name active-hero substitution in this command.
The reusable classification path handles arbitrary imported characters.

Added `isActorOnTeam` (XML2 B5880, descriptor 49AF18, i/a). This is not a
numeric team-ID comparison: native XML2 collects current heroes, resolves
handles, rejects non-actors/dead members, and compares character identity
strings without regard to case. XML1 already exposes its party collection
through game manager 72CF0, virtual E0 -> 72470 (3CCD14 + E0 = 3CCDF4).
The adapter uses selector -1 and normal caching, copies the native five-handle
list plus count, and uses native handle resolution 6BF80. Character identity
is read with XML1 2E6C0 on actor+2D8 (confirmed existing caller 160219),
including its +24C override / +22C charactername fallback. Existing party
selection, cache policy and character identity behavior are not replaced.

The Release build and full existing definition suite pass in
`work/xml2-resume/party-query-build.log` and `party-query-test.log`.
Brotherhood checks cover ordinary/X-Men/Brotherhood flags, actual native RTTI,
missing/non-actor results and metadata retirement. The party predicate fixture
executes the actual character-name getter, tests case-insensitive matching,
distinct overrides, matching overrides, zero/negative health, wrong types,
missing entities and stack/FPU balance. Both descriptors are covered by the
extension-table fixture. Actual native party collection/cache refresh and full
interpreter/name-resolver dispatch were not exercised by these tests; the
party predicate test explicitly reports that limit. No gameplay claim is made.

Native evidence: `work/xml2-resume/brotherhood-party-native.asm` and
`work/xml2-resume/party-xml1-interfaces.asm`. The original Xbox images were
read only. Current registered script additions: 33, including six retail
no-op adapters; 92 names remain pending. These counts do not close combat,
powerup, affecter or damage-modifier work. No player assets, saves or staged
executable were changed, and TODO #3 remains active.


### Native cached-party collection validation (2026-09-30)

The isActorOnTeam fixture now calls the actual actor_on_team adapter, native
party-list constructor 322B0, manager lookup 72CF0, virtual collection E0/72470,
list copy 72680 and generation-checked entity lookup 6BF80/BDFD0. No collection
or resolver callback is substituted. Scoped fixture globals initialize the
normal clock/cache gate and are restored afterward. The native state-byte
getter 1446E0 supplies the two ordinary scene-state predicates from fixture
objects; game clock 6F240 reads the fixture clock field.

Release build and all definition checks pass in `work/xml2-resume/party-cache-
build.log` and `party-cache-test.log`. Cases cover null then stale then live
handles, changed entity generations, dead members, empty lists, a match in
slot five, stack/FPU balance and unchanged cache time. This resolves the
previously untested valid-cache collection path. Cache rebuilding through the
native actor-query subsystem and full script expression dispatch remain
unverified. Supporting native interface trace:
`work/xml2-resume/party-cache-interfaces.asm`. No game was launched.

Next script inventory investigation: the four get/setZoneVar/Flag descriptors
(49A6B8..49A6E8) call XML2 E5B40/E62E0 on its 32-entry interpreter-owned table.
XML1 already exposes interpreter-owned get/setMissionVar/Flag interfaces
(98C30/98C70/98CB0/98D20), using CAC70/CB780 and table +1E614; CB6E0 resets
that table. XML2 has no get/setMissionVar names in the recovered command
registration. This suggests a rename of an existing facility, not justification
for another host dictionary or new save fields. Keep classification pending
until ownership/use establishes whether anything genuinely missing remains;
do not author a parallel variable system or change XML1 mission behavior.
Evidence: `work/xml2-resume/zone-variable-lifecycle.asm`. No zone-command
adapter was added in this pass. Script counts remain 33 registered / 92 pending.


### Existing mission-variable facility excluded (2026-09-30)

The get/setZoneVar/Flag names are now classified as existing functionality,
provided in XML1 by get/setMissionVar/Flag. XML1's registered commands are
98C30, 98C70, 98CB0 and 98D20; native variable lookup/write are CAC70/CB780,
with interpreter-owned table +1E614 and reset CB6E0. XML2's four Zone spellings
are ACD00, ACD40, ACD80 and ACDF0, using E5B40/E62E0, table +1B6E4 and reset
E5AF0. Its registration has no corresponding MissionVar/Flag spellings.
The existing facility is excluded under the user's new-functionality-only
rule. No additional variable storage, save fields, behavior changes or spelling
aliases were added. This classification does not claim XML2 Zone-spelled scripts
can run unmodified. Such names can be addressed by conversion separately if
requested; do not count an existing system as a missing executable feature.

The inventory generator records the four native counterparts and verifies
both images' expected command entries before classifying them. It preserves
the 125 raw name differences, reports existing facilities separately, and
excludes those four from pending functionality. Audit passes in
`work/xml2-resume/inventory-existing-zone-facility.log`: 33 registered additions,
4 existing facilities skipped, 88 pending. No implementation-parity audit or
replacement of XML1's variable system is being pursued.

### killEntitySilent native consumer trace (2026-09-30)

Still pending; not registered. XML2 B8B20 selects entities through B7CD0,
requires CEntity (598B24), resets a CActionEntity's (58BD04) sound reference
at +70 and a CPhysicalEntity's (5D4690) sound reference at +2A0, then calls
the existing destruction virtual at +8. Each sound operation gets its name
(76140), releases the reference (764E0), and reapplies the same name (76360).
Do not replace this with a global mute or a damage/health shortcut.

Verified XML1 integration interfaces: CEntity/CActionEntity/CPhysicalEntity
RTTI getters 66C80/270A0/2E590 expose type indices at 48D8FC/48338C/4C0A60.
CActionEntity's native action sound path uses +70. The physical sound reference
is +260, established by native clear method 93150; do not copy XML2 +2A0.
XML1 release is 6E220, name assignment 6E0A0 -> 6D9B0. XML1 6DE50 returns a
playback object, NOT a sound name. The actual name reader 6DE80 copies the name
to a native stack temporary before returning its pointer. A new adapter must
copy that text immediately into owned temporary storage before another native
call can overwrite the stack; do not retain it through release/reassignment.
This observation does not authorize rewriting the existing sound subsystem.

Remaining: implement the missing command with native sound ownership,
selection snapshot and generation-safe callback iteration; verify reference
reset/name preservation and destruction dispatch through programmatic checks.
Evidence: `work/xml2-resume/silent-kill-native.asm` and
`work/xml2-resume/silent-kill-xml1-interfaces.asm`. No game launch, player staging,
commit or publication occurred in this pass. TODO #3 remains active.

### killEntitySilent implementation and checks (2026-09-30)

The preceding pending trace is now implemented in src/raven_silent_kill.inc
and registered in raven_script_extensions.c. Sound references use the native
name/read/release/reassign path, copying the returned temporary immediately.
Selection iteration snapshots generation handles and resolves each again before
destruction, avoiding stale pointers after nested destruction callbacks.

Release build and powerup-definition suite passed in
work/xml2-resume/silent-kill-final-build.log and silent-kill-final-test.log.
The fixture uses the actual native sound-reference pool and checks preserved
names, balanced references, RTTI rejection, destruction dispatch, nested
selection mutation, stale-generation rejection and calling convention state.
Terminal sound registration and destruction are fixture substitutes; audible
playback, full script argument flow and gameplay remain unverified. No game
was launched and the player executable was not staged.

The refreshed script inventory records 34 registered additions, 4 existing
facilities skipped and 87 pending implementation/classification. These are
script inventory counts, not a completion percentage for the whole goal.
TODO #3 and its goal remain active; combat-event and other system work remains.

### Timed actor scaling: native trace and arithmetic core (2026-09-30)

setActorScaleTimed remains PENDING and unregistered. This pass adds only the
shared transition core src/raven_actor_scale.c/.h and its programmatic test.
No runtime hook or player staging is claimed. The core is a prerequisite for
the full missing actor scaling path, not a substitute for collision behavior.

XML2 command B8220 (descriptor 49A2E8, n/aff) selects entities, checks CActor,
and calls virtual +1D0 with scale, duration and clearance=false. Direct vtable
read 492124+1D0 confirms 2C8D0. It clamps scale to [0.3,2.5], enforces minimum
duration 0.1, derives current relative scale from actor+188 / CharacterDef+2B0,
and stores rate+6B8, requested multiplier+6BC, active bit+3DB/20 and clearance
bit+3DC/2. Duration controls the transition; it is not a later restore timer.

Actor update 42CB0 uses simulation time from 6E5C0, with delta at context+20.
42CF0..42DFC obtains a dynamic target via virtual+1D8 (30E10), advances by
signed rate*delta and clamps/clears at target crossing. Zero rate is initialized
to twice the target-current difference. Target combines requested multiplier,
scale affecter from actor+470 via 30E50, and the actor's huge flag. This means
an implementation that only writes the renderer scale would be incomplete.

XML2 scale application is virtual+18C = 2F280, verified directly in vtable
492124. It optionally tests clearance with 2D6D0, constructs bounds from
CharacterDef+294/+298/+29C, calls entity virtual+140, updates attached collision
shape bounds through shape virtual+24 when present, and refreshes scale/render
and spatial state. XML1 existing setScale uses virtual+184 = 2E3A0 (vtable
3C94B4), writes actor+168 and refreshes native virtual+118 and 66BE0. This is an
integration interface trace only; existing setScale is not changed or audited
for parity. Do not copy XML2 actor offsets or virtual slots into XML1.

The new core explicitly accepts actual native scale on each update so clearance
rejection does not advance an independent cached position. Its caller must
supply the dynamic target and bind/retire state to native actor generation.
Remaining integration: trace XML1 bounds/collision consumers and actor update,
wire lifetime/reset and scale-affecter inputs, add clearance/bounds handling,
then register the command and test dispatch plus native integration contracts.
The same path should serve scale_actor powerups; no character-specific state.

Release raven-actor-scale-test build and execution passed. Checks cover timed
growth/shrink, pause, long-frame target crossing, minimum duration and multiplier
bounds, re-targeting from an intermediate size, affecter target changes and
unchanged native scale after a rejected step. Guest integration is NOT tested.
Evidence: work/xml2-resume/actor-scale-core-build.log, actor-scale-core-test.log,
actor-scale-native.asm and actor-scale-xml1-interfaces.asm. Inventory remains
34 registered script additions / 4 existing facilities skipped / 87 pending.
No game launch, player staging, commit or publication. Goal #3 remains active.

### Timed scaling: XML1 geometry integration component (2026-09-30)

Added src/raven_actor_scale_guest.inc, included by raven_script_extensions.c.
actor_scale_apply_unchecked is a geometry component, not a registered command
and not yet attached to an actor update. It reuses native XML1 methods; ordinary
setScale is unchanged. Clearance gating must precede it in the finished path.

XML1 initialization 3428E..3441F establishes native CharacterDef dimensions at
+38C/+390/+394, skin scale +3A8, and bit80 at +3A1 excluding skin scale from
physical bounds. Actor+2D8 owns this definition. Entity bounds use 77200,
virtual+13C in CActor vtable3C94B4, with lower/upper vectors. Valid bounds update
native derived geometry via 770F0 and spatial invalidation via 66BE0. Degenerate
bounds are left to the native setter instead of inventing a positive-size rule.
The native initializer then checks model availability, fetches the shape via
74860 and updates shape bounds through virtual+24. CActor virtual+178=2EB40
encapsulates that availability query. The new component follows these interfaces
and applies absolute visual scale through virtual+184=2E3A0, retaining native
refresh ownership. No pointers to temporary guest vectors are retained.

Release xml1-boot-probe build and full --powerup-definition-test passed; logs:
work/xml2-resume/actor-scale-geometry-build.log and actor-scale-geometry-test.log.
The fixture executes actual native 77200 bounds/derived-geometry and 2E3A0 scale
setter plus shape-reference access. It substitutes availability, terminal shape
update and refresh callbacks, checking their dispatch and bounds values. Cases
cover growth/shrink, skin-scale bounds opt-out, missing shape, invalid base scale,
null actor and stack/FPU balance. It does NOT establish collision queries,
physical clearance, actual render refresh, actor lifetime or timed gameplay.
Native evidence: work/xml2-resume/actor-scale-geometry-interfaces.asm.

Next integration requirements remain: native actor simulation update and lifetime
hooks, generation-scoped state, effective scale/huge/affecter targets, clearance
query, command registration and dispatch/integration tests. scale_actor powerups
must reuse the same eventual path. Inventory remains 34 registered / 4 existing
facilities skipped / 87 pending. No game launch, player staging, commit or push.

### Timed scaling: ownership and native lifecycle (2026-09-30)

Added raven_actor_scale_owner.cpp/.h with per-actor generation identity and
revision-checked snapshots. Interrupted transitions, retirement and address reuse
cannot accept an old update commit. Completed requested multipliers are retained
until reset; this is needed by subsequent effective-target queries. Map entries
are created only by an explicit begin, and stock actors bypass the lock when the
map is empty. No host lock is held across guest calls or returned state pointers.

Traced native XML1 actor update 43650: simulation delta is calculated at43681
from66AB0 and actor+40C, and native gameplay time is refreshed at43689. The missing
scale update belongs before4368F, corresponding to XML2's scale block before
its following large-delta guard. There is NO update hook yet; no wall clock or
separate simulation rate is introduced. Dynamic affecter/huge targets and
clearance still need their actual consumers connected before registration.

The lifetime guard scripts/guard-actor-scale.py now resets owned state at native
2E6F0 (existing actor reset, preserving Bishop's contact reset hook) and3243A
(final CActor destruction after322D0 has completed base2E3D0 cleanup). This runs
before the scalar destructor33870 can free the allocation. CMake links the owner
and transition core into xml1-boot-probe; generate-code.ps1 retains the guard.
The guard is idempotent and checks the original instructions at both boundaries.

Release owner test and boot-probe build passed; the full programmatic
--powerup-definition-test also passed. Owner checks cover stock exclusion,
independent actors, valid completion, stale generation, callback retargeting,
retirement, same-address reuse and reset with the same handle. These test the
ownership API; complete native actor construction/destruction with live scale
state is NOT yet exercised. Native update dispatch and gameplay remain untested.
Logs: work/xml2-resume/actor-scale-owner-build.log, actor-scale-owner-test.log,
actor-scale-lifecycle-build.log and actor-scale-lifecycle-test.log. Native trace:
actor-scale-lifecycle-native.asm. setActorScaleTimed remains unregistered and
pending; script inventory remains34 registered /4 skipped /87 pending. No player
staging, game launch, commit or publication. Goal #3 remains active.

### Timed scaling: native clearance oracle and shared core (2026-09-30)

Added scripts/xml2-scale-clearance-oracle.py. It executes the complete retail
XML2 2D6D0 routine in Unicorn, checking the known image SHA256, while substituting
actor bounds/position/forward callbacks and terminal collision sweep results.
Original vector construction, basis calculation and clearance control flow run
from the XBE. Run with .venv/Scripts/python.exe (system Python lacks Unicorn).
This is an isolated process-local numerical oracle, not a game or GUI launch.

Six native cases passed: shrink and equal size use zero sweeps; open growth uses
five; blocked ceiling rejects after one; boxed horizontal sides reject after
three and restore position; one obstructed side shifts the actor and accepts.
All temporary bounds are restored. For dimensions20/30/60, scale1->2, position
100/200/300 and forward0/1/0, sweeps are up61, forward/back22 and sideways32.
A first-side hit at10% shifts Y to191.1999969. Native output is recorded in
work/xml2-resume/scale-clearance-oracle.json, including every sweep, displacement,
bounds update and position callback. No actual collision scene is exercised.

Added raven_actor_scale_clearance.c/.h with the same growth-clearance procedure,
explicit synchronous sweep/bounds/position callbacks and caller-supplied actor
basis. It retains native temporary per-axis bounds and restores original bounds
on acceptance/rejection; position is restored on failed side clearance. This
component is not yet connected to game callbacks or the timed update. Its six
programmatic cases use fixed independent retail-oracle expectations, including
query vectors, acceptance, movement and bounds restoration, rather than merely
comparing the new implementation with itself. Release target
raven-actor-scale-clearance-test built and passed; logs are
work/xml2-resume/actor-scale-clearance-build.log and actor-scale-clearance-test.log.

Native XML2 sweep wrapper3BFA0 maps to existing XML1 integration interface3C720,
which takes position, displacement, filter boolean, output displacement and
collision reference, ret14. XML2 collision-reference constructorB9300 and XML1
A0770 both establish the referenced native record. XML1 wrapper uses its existing
A2A10/A2B90/A2AC0 query lifetime; the future adapter should call that interface,
not copy XML2 query structures into XML1. Basis helper16B4A0 uses actor forward
and an up-axis cross product, with a fallback axis for near-vertical direction.
Evidence: actor-scale-clearance-native.asm and actor-scale-clearance-xml1-query.asm
under work/xml2-resume. These are integration traces, not existing-system audits.

Still pending: guest collision/basis adapter, generation checks around callbacks,
effective targets, actor update and script registration. Script counts stay34
registered /4 existing facilities skipped /87 pending. No player staging, game
launch, commit or publication. Goal #3 remains active.

### Timed scaling: XML1 clearance guest adapter (2026-09-30)

Added src/raven_actor_scale_clearance_guest.inc and its definition-suite fixture.
The adapter calls existing XML1 scene sweep entry3C720 with its native five
arguments (start, displacement, filter=true, result displacement, collision
reference), reference constructorA0770, bounds virtual+13C and position
virtual+148=74D30. The sweep entry argument is explicit so the fixture can
substitute terminal collision results without patching the game function.
Production wiring must pass3C720. Command/update consumers remain pending.

Native basis helper120A30 is the verified XML1 integration counterpart for XML2
16B4A0. Actor direction virtual+40=75FD0 writes a full64-byte matrix, so scratch
reserves that complete result before normalizing its first vector and calling
120A30 for the perpendicular. A three-float output buffer here would corrupt the
stack. Bounds virtual+38=2E450 returns native local bounds; its pointer is copied
before generation validation can clobber EAX. No XML2 actor-layout offsets are
used. Trace: work/xml2-resume/actor-scale-clearance-basis-interfaces.asm.

The adapter snapshots actor+1C and re-resolves through native6BF80 before and
after external callbacks. Once the identity disappears or resolves to another
actor, further bounds/position/sweep callbacks are suppressed and the operation
fails. It does not write restoration data into a replacement actor. Scratch and
native-call stack ownership remain local to the operation.

Release xml1-boot-probe build and complete --powerup-definition-test passed:
work/xml2-resume/actor-scale-clearance-guest-build.log and
actor-scale-clearance-guest-test.log. The new fixture executes native basis,
entity resolver, local bounds getter/setter and collision-reference construction.
It checks open growth, blocked ceiling, successful side shift, original bounds
restoration, five-argument sweep dispatch, callback generation invalidation and
stack/FPU balance. Terminal collision results, transform output, position and
spatial refresh are substituted; no real scene collision, actual rendering or
native gameplay update is claimed. Existing original-image oracle and portable
clearance tests remain the independent behavioral evidence for the core.

Remaining: connect effective scale/huge/affecter targets, timed actor update and
script dispatch; apply equivalent generation checks around final geometry
application. Inventory remains34 registered /4 existing facilities skipped /87
pending. No game launch, staging, commit or publication. Goal #3 remains active.


### Timed scaling: affecter composition and simulation update (2026-09-30)

Connected the missing timed-scale owner to XML1's simulation delta at 4368F,
after the original clock store at 43689. The hook is inert without registered
owner state. It composes scale_factor addition and multiplication in declaration
order, ignores min/max modes, and clamps the completed factor to 0.3--2.5.
Evidence: XML2 148B05 initializes the factor to one; 14A8ED implements the ordered
operations; 30E50 clamps the result. Trace is retained in
work/xml2-resume/actor-scale-affecter-native.asm.

Final geometry application now validates actor generation before and after
callbacks. Owner commits return their new revision so a callback cannot apply
an obsolete transition after retargeting or replacement. The update preserves
guest stack, volatile registers and FPU depth.

Release build passed (work/xml2-resume/actor-scale-update-build.log). The owner
unit test and complete --powerup-definition-test passed; output is retained in
work/xml2-resume/actor-scale-update-test.log. Added checks cover ordered affecter
composition/retirement and two-step timed growth from 1 to 2 with native bounds
and visual-scale setters. Terminal scene/refresh callbacks remain substituted;
these are programmatic checks, not gameplay or visual acceptance.

Huge-state target handling and script registration remain pending. The command
is deliberately unregistered until those dependencies are complete. Counts stay
34 registered / 4 existing facilities skipped / 87 pending. Goal #3 is active;
no game launch, player staging, commit or publication was performed.


### Scope reminder: existing XML1 systems take precedence (2026-09-30)

The user reconfirmed: if functionality exists in XML1 but differs, XML1 wins.
Skip it without a parity comparison. An absent XML2 command spelling alone is
not proof that its underlying system is missing. Pending scale/huge work must
pass this presence check before further implementation; existing setScale stays
untouched. Integration-interface tracing is permitted only for a proven missing
addition, not to make existing XML1 behavior resemble XML2.


### Existing conversation facility exclusion (2026-09-30)

startCharConversation is excluded as an existing XML1 system, not implemented
as another variant. XML1 startConversation (9E3D0) reaches its native conversation
manager 60C00 and virtual+14 at 9E4FD--9E509. XML2 startCharConversation (B55C0)
reaches its conversation manager 66F80 and virtual+14 at B5839--B584D and
B585A--B586E. This establishes the existing conversation facility. Differences
in participant selection do not justify reimplementing it under the user's
explicit rule that existing XML1 behavior wins. No alias, signature adaptation
or gameplay-behavior change was added. The audit checks both descriptor entries
before applying this exclusion. Updated counts: 34 registered extensions,
5 existing facilities skipped, 86 pending names; pending names still require
system-level presence classification and are not all proven missing systems.


The refreshed original-image audit passed after this exclusion:
work/xml2-resume/inventory-conversation-presence.log. It still examines 213 XML1
command descriptors, 125 raw XML2 name additions and 111 PC powerstyles.
A separate presence check finds CPUScaleActor and its scale_actor factory in
XML2 (vtable 4A92E4 / factory 4A7BC8), with neither RTTI name in XML1. This supports
continuing investigation of the missing powerup consumer, but does not establish
that every related scaling behavior is absent. Existing XML1 setScale and the
CharacterDef scale_factor property remain excluded from replacement.


### Missing scale_actor powerup: rate ownership (2026-09-30)

Native CPUScaleActor parser 150910 stores scaleuprate at +60 and scaledownrate
at +64; completed copy 150980 copies both independently. Constructor 159750
initializes both to 1 and enables activation/removal callbacks. Activation
1509C0 resolves its target and writes the first rate to actor+6B8; removal
150A30 writes the second rate. Neither callback starts the transition or changes
its requested size. Trace: work/xml2-resume/scale-powerup-native.asm.

Added raven_actor_scale_owner_rate to the existing generation-owned scale state.
It changes only rate and revision, preserving requested scale, active state and
clearance. A new actor entry starts with native default requested=1/inactive;
rate callbacks alone must not invent an active transition. Tests check transition
preservation, stale tick rejection after a rate change, inactive initialization
and address/generation reuse. Release raven-actor-scale-owner-test passed.
This is the shared state operation only; powerup callback installation, definition
rate capture and huge-state integration are still pending, not claimed complete.

The setActorHuge trace reaches character-manager 11CD70 -> 13AE30, changes a
character-state flag and calls reload routine 137F60. Do not replace that command
with an invented actor size-bit setter. Its complete integration remains pending.
Existing XML1 setScale continues untouched. Script inventory remains 34 registered,
5 existing facilities skipped, 86 pending names. Goal remains active.

Full Release xml1-boot-probe build and --powerup-definition-test also passed:
work/xml2-resume/scale-powerup-rate-build.log and scale-powerup-rate-test.log.
No player executable was staged; no game, desktop input or visual test ran.


### Missing scale_actor definition rates (2026-09-30)

The existing definition metadata lifecycle now retains scaleuprate/scaledownrate
without changing original asset fields or paths. Added a class-qualified snapshot
reader, raven_xml1_powerup_scale_rates: other/stock classes are excluded and
outputs remain untouched. Defaults are +1 for both fields (159750); explicit
values use the literal atof-style conversion at 150910. A negative shrink rate
is retained verbatim; no implicit negation, duration conversion or talent lookup
is introduced. Completed copies own their values independently of source reset
and destruction through the existing native metadata boundaries.

Release raven-powerup-metadata-test passed defaults, case-insensitive field/class
recognition, signed rates, explicit zero, independent clone/source mutation and
retirement, other-class exclusion and reset. Full Release xml1-boot-probe and
--powerup-definition-test also passed. Logs: work/xml2-resume/
scale-rates-metadata-build.log, scale-rates-metadata-runtime-build.log,
scale-rates-metadata-runtime-test.log. This establishes definition storage only,
not playable scaling. Callback wiring, active-transition invalidation from
scale affecters, and huge-state integration remain unfinished.

Next callback integration evidence: XML1 native activation dispatch uses
powerup definition+9C (29F0F); removal uses +A0 (29F2E and 2AF5A). Both invoke a
single instance pointer with caller cleanup. Existing actor/powerup generation
resolvers must guard target selection before applying the shared rate operation.
No runtime callback installed in this pass. Goal active, counts unchanged;
no game launch, staging, commit, push or release.


### Missing scale_actor callbacks wired (2026-09-30)

The definition completion hook now installs two private cdecl callbacks only
for class=scale_actor: definition+9C activation and +A0 removal. Callback storage
was expanded from 12 to 20 bytes, preserving the existing harming/add_attack
entry addresses. Native XML1 selector 0/1 (29DC0, switch table29FA8) owns the
single instance argument and cleanup. The callbacks resolve the active powerup's
generation, read its definition-owned rates and share scope, resolve its target
through native actor RTTI/generation checks, revalidate captured powerup identity,
and apply the shared rate setter. Retired/stale targets and instances do nothing.
They do not start transitions or replace stock scaling.

Full Release build and --powerup-definition-test passed. The new fixture invokes
actual native29DC0 dispatch for both selectors, checks +2.5/-0.75 rates while
preserving the requested multiplier/active/clearance state, rejects stale actor
and powerup generations, and verifies guest stack/FPU balance. Logs:
work/xml2-resume/scale-callback-final-build.log and scale-callback-final-test.log.
This fixture begins with a prepared active slot; it does not establish the full
resource load, effect application/expiry or gameplay flow. Scale-affecter changes
still need their native transition trigger, and huge-state/script wiring remains
pending. Script counts remain34 registered /5 existing facilities skipped /86
pending names. No game launch, staging, commit, push or publication. Goal active.


### Scale affecter transition trigger traced (2026-09-30)

XML2 scale_factor attribute94 reaches affecter activation144570 and removal
144610. Both call actor virtual+1DC (vtable492124 slot492300 ->30DC0), which sets
actor+3DB bit20. Removal1446A2 additionally clears actor+6B8 velocity. Neither
path changes requested scale. Original disassembly is retained in
work/xml2-resume/scale-affecter-transition-native.asm, starting at actual entry
boundaries144570/144610 and30DC0.

Added raven_actor_scale_owner_invalidate, preserving requested scale and
clearance while activating the transition; removal clears velocity. It uses
existing generation/revision ownership so in-flight ticks cannot overwrite the
new state. A previously untouched actor uses requested1/rate0 defaults.
Release owner tests passed affecter application, rate preservation, stale commit
rejection, removal's recalculated return rate and first-affecter initialization
(work/xml2-resume/scale-invalidation-build.log). This state operation is not yet
connected to native powerup application/removal; ordering relative to rate
callbacks must be established first. It is not a gameplay completion claim.
Goal remains active; script counts unchanged, no game launch or staging.


### Scale affecter lifecycle connected (2026-09-30)

Native XML2 removal15C560 dispatches class phase1 at15C63A, then walks affecters
through15B5A0 at15C97E. The affecter walk calls virtual+28 at15B67B, reaching
144610 for scale_factor and clearing velocity after the class removal rate.
CPowerup1548C0 dispatch table154B98 phase1 points154B2B (virtual+4 removal).
This establishes ordering instead of assuming the authored down-rate wins.

Added a definition-owned predicate for scale_factor affecters with share-role
filtering, independent of outer powerup class. The generation-checked guest
bridge activates/invalidates owned actor scale state. Powerup initialization
2AA7D invokes it after the existing effect/node hooks; removal2AF85 invokes it
after the class callback and before unlink. Unrelated definitions do nothing.
The metadata and actor-scale generation guards retain their own insertions and
both pass repeated execution without duplicate hooks.

Release build and complete --powerup-definition-test passed:
work/xml2-resume/scale-lifecycle-build.log and scale-lifecycle-test.log. Added
bridge checks cover unrelated-definition exclusion, first activation, removal
rate clearing and preserving requested scale. Existing rate callbacks are tested
through native29DC0. The new affecter bridge is called directly in the prepared
instance fixture; complete powerup creation/expiry and gameplay are not claimed.
Huge-state support and command registration remain pending. Goal active; no
staging, game launch, commit, push or release. Inventory counts unchanged.


### Timed-scale command registered; huge-state remains separate (2026-09-30)

Registered setActorScaleTimed with the native n/aff descriptor (XML2 B8220).
It reads selector, multiplier and transition seconds, uses XML1's native selector
9FF10, snapshots generation handles, resolves each target and accepts CActor
only. Requests use actual visual size divided by the CharacterDef base scale,
then feed the already-implemented transition/clearance/update pipeline. The
existing setScale command is unchanged. Registration is appended to preserve
all prior private command entry offsets.

The earlier decision to withhold this command until huge-state completion was
an implementation dependency choice, not a user requirement. Ordinary timed
scaling is now available; the missing huge-state system remains explicitly
unfinished and must still be handled before the full goal is complete. No dummy
huge flag or substitute multiplier is exposed. Native huge transformation uses
character state, animation/equipment and powerstyle handling, including
apocdummy data in the script path; it is not merely a timed scale request.

Release build and --powerup-definition-test passed (work/xml2-resume/
timed-scale-command-build.log and timed-scale-command-test.log). The clearance
fixture now invokes the command's selection helper with an actor and a null
entry, then exercises actual bounds/scale setters through a two-step transition.
Its type-query terminal is substituted, while generation resolution is native.
Full script argument/selector invocation and gameplay are not claimed by this
fixture. Existing numeric argument and descriptor checks remain separate.

The original-image inventory regenerated successfully: inventory-timed-scale-command.log.
Counts:35 registered /5 existing facilities skipped /85 pending names.
Huge-state integration, the remaining combat events/systems and script additions
remain open. Goal active. No staging, game launch, commit, push or release.


### Timed-scale registered command validation (2026-09-30)

Replaced the fixture's direct selection-helper call with actual lookup and
indirect dispatch of the registered setActorScaleTimed descriptor. Prepared
CStringVariable/CFloatVariable objects use native vtables3D5980/3D57C4; the
string getter C9480 returns the numeric generation-handle selector "1025".
Native9FF10 parses that selector and resolves handle401 through the native
entity manager, then the registered command requests scaling. The fixture
checks its null result, caller-owned argument, stack/FPU balance, intermediate
size1.25/bounds75, and final size2/bounds120 through the simulation update.
The global selection slot is restored after the fixture.

Release build and complete definition suite passed:
work/xml2-resume/timed-scale-dispatch-build.log and timed-scale-dispatch-test.log.
This supersedes the previous note that full argument/selector dispatch was
untested. Actor RTTI terminal, scene collision results and spatial refresh remain
fixture substitutions; no actual game, visual or audio acceptance is claimed.
Huge-state and all other unfinished scope remain open. No staging or publication.


### Existing healing system excluded (2026-09-30)

The user explicitly excludes systems that exist in XML1 even if XML2 exposes
them differently. ce_heal is therefore classified as existing health restoration,
not as another healing implementation. Presence evidence: XML1's registered
restoreHealth entry9BD50 validates CActor and calls native healing3A7C0 at9BDDE.
The absent XML2 event FAC40 also restores actor health. No percentage, rounding,
balance, signature or delivery parity is pursued. XML1 behavior wins.

No ce_heal factory, spelling alias or asset rewrite is added. This classification
does not claim that unchanged XML2 assets naming ce_heal are accepted; it records
an intentional existing-system exclusion under the user's scope. The inventory
checks the original XML1 command descriptor before applying the exclusion.
Of 13 absent event names:6 factories wired,1 existing system skipped,6 pending.
Scripting counts remain35 registered /5 renamed facilities skipped /85 pending.


### Existing resurrection system excluded (2026-09-30)

XML1 contains ce_resurrect and CCEResurrect (type descriptor451880,
vtable3D7130, executeD83D0). The separate XML2 ce_setup_ally_resurrect
entryF9410 selects fallen actors, prepares their placement and dispatches
its configured follow-up event. Resurrection is already an XML1 system;
its XML2 targeting/placement variations are excluded under the user's
new-functionality-only rule. No behavior/signature parity audit is needed.

The inventory now validates the original XML1 event spelling, RTTI vtable
and execute slot before recording this exclusion. No alias, factory or
asset rewrite is added; unchanged XML2 assets naming the excluded event
are not claimed to work. Of13 absent event names:6 factories wired,
2 existing systems skipped,5 still pending. Script counts stay35/5/85.
The unregistered remove-powerups draft and other unfinished work remain open.


### Nearest-spawner query trace, not implemented (2026-09-30)

getNearestMonsterSpawner remains pending. XML2 B6790 reads an entity selector
and floating radius, resolves the source atB67DC/B67E6, and returns integer0
if it is absent. Radius0 selects the literal0x4CBEBC20 atB682B.
Its query uses class-global5AC1B4, a sphere through virtual68, and comparator
493510 -> B93D0 with coordinate mask3 (XY distance, not full XYZ distance).
Results are walked in query order. Action entities are excluded when native
29880(entity,0) reports their active scheduled state; the chosen result is its
native generation handle at+1C. List and query ownership are released through
BB7D0/BB720 before returning the integer result. Exact trace is retained locally
in work/xml2-resume/nearest-spawner-query-native.asm.

XML1 already supplies CMonsterSpawnerEntity (RTTI44E430, vtable3CF23C), so
spawning itself must not be reimplemented or compared. The missing query must
use that existing facility. Query class registration/global, ordered distance
adapter, action-state integration and native query fixture still need tracing
and validation before registration. No name-only success stub was added.

The resurrection presence inventory regenerated successfully in
work/xml2-resume/inventory-resurrection-presence.log. This turn changed inventory
and trace documentation only; no runtime build, staging or gameplay claim.


### Nearest-spawner script command implemented (2026-09-30)

Supersedes the preceding pending-query note. getNearestMonsterSpawner is now
registered as i/ai, matching original descriptor49AA18. NativeB67CF reads its
numeric operand through the float getter despite that declaration. The new
src/raven_nearest_spawner.inc uses XML1's existing monster-spawner class object
49ECAC (registered356AB0), query constructorA2A70, radius virtual68, native
list builder/sortA2B10 and pending-action check27410. The added comparator uses
the target's native center virtual24 and XY distance (XML2 comparatorB93D0,
mask3). No spawner system, existing action behavior or character data changes.

The result is the selected entity's generation handle. Query/list slots release
throughA2AC0/A2B70 before interpreter result allocation. Source absence, no
eligible results and exhausted native query/list pools return0. Radius0 uses
the original100000000 limit. The comparator descriptor has process lifetime;
its per-invocation origin stays on the guest stack, permitting nested queries.

Release build and the complete powerup-definition programmatic suite passed:
work/xml2-resume/nearest-spawner-build.log and nearest-spawner-test.log. The
fixture runs real query/list allocation, entity generation lookup, entity-center
virtual, sorting, pending-action test and cleanup. It checks XY versus Z order,
one/all pending actions, empty/null sources, default/explicit radius, exhausted
query and list pools, successful reuse, stack/FPU balance and released slots.
Scene membership and class-filter setup are fixture substitutions; actual world
spatial filtering and full script result-allocation invocation are not claimed
by this fixture. Existing descriptor lookup/dispatch mapping checks cover the
new registration; argument conversion/result allocation use shared helpers.

The original-image inventory regenerated:36 registered script additions,
5 existing renamed facilities skipped,84 pending names. Event inventory remains
6 factories wired,2 existing systems skipped,5 pending absent names. Other
combat/powerup/affecter/huge-state scope remains open. No staged EXE replacement,
gameplay launch, commit, push or release. Goal remains active.


### Existing skin systems excluded from script additions (2026-09-30)

setSkin and setSegmentVisible are existing-system exclusions, not missing
skinning systems. XML1 already has ce_setskin / CCESetSkin (RTTI451990,
vtable3D72BC, executeD8EC0) and ce_skinsegment / CCESkinSegment (RTTI451970,
vtable3D7290, executeD8C70). These are authoritative presence evidence. The
XML2 script entriesB3B40/B59E0 expose skin/segment operations; no XML1 versus
XML2 behavior, argument or implementation comparison is needed or pursued.

The inventory verifies the original XML1 event names, RTTI tables and execute
slots plus the XML2 command descriptors before classifying the two exclusions.
XML1 behavior wins. No new script aliases, event factories or asset rewrites
are added, and acceptance of these XML2 script spellings is not claimed.
Script counts are36 registered,7 existing facilities skipped,82 pending names.


### Permanent-stat-boost investigation, still pending (2026-09-30)

Retained the original XML2 entryB1EC0..B2222 in the local trace
work/xml2-resume/permanent-stat-boost-native.asm. This is not a transient
powerup: it resolves CharacterDef, recognizes striking/agility/body/focus or
maxhealth/maxenergy, changes stored character-stat fields, refreshes derived
health/energy where applicable, and formats a localized HUD notification.
The attribute names and consumers were read from the original image, not
inferred from a PC mod's values. Existing XML1 health setters alone are not
evidence that the complete persistent-stat operation is already present.

Keep this command pending until the XML1 persistent stat facility is identified:
skip if it exists, otherwise connect the genuinely missing operation to the
existing character/save ownership. Do not implement a temporary actor-field
write or invent a second persistence store. No runtime changes for this entry.
The skin-system inventory regenerated successfully (inventory-skin-presence.log).


### Existing map/movie variants excluded (2026-09-30)

XML1 already registers map loading (loadMap9A850, loadMapAddTeam9A8C0)
and movie playback (startMovie99A30). XML2's loadMapKeepTeamB08C0 and
loadMapChooseTeamB0930 submit map-loading commands to its frontend; its
startMoviePreviewAE390 selects a movie and opens movie playback. These are
variants of existing XML1 systems and are skipped under the user's explicit
rule. No team-selection policy, preview behavior or script signature parity
work is added. No aliases or asset rewrites are supplied or claimed.

The inventory verifies original command descriptors for all three exclusions.
Local evidence: work/xml2-resume/existing-script-variants-native.asm.
Counts:36 registered additions,10 existing facilities skipped,79 pending names.

Permanent-stat-boost remains pending. XML1's native47530 already stores the
four base stat values in its character stats record, and the CharacterDef
parser calls it atB01BC for body. That existing base-stat system must remain
unchanged. XML2's separately stored permanent maximum-health/energy bonuses
need presence evidence before classifying the complete command; ordinary
actor health setters do not establish saved bonus support. No new persistence
layout, stat cap, runtime mutation or save-format change has been introduced.


### Permanent-stat persistence boundary located (2026-09-30)

XML1 native47F80 writes exactly2C bytes from character-stats+4 through the
native stream6E7E0, before its variable talent records. Native49280 reads the
same fixed prefix through6E830. The four existing base stats written by47530
at+1B..1E lie within that serialized prefix. Their persistence is therefore
established without altering their implementation, caps or format.

In contrast, existing script setHealthMax9B810 writes only the actor's maximum
health word at+246 (9B880); this is not evidence of a CharacterDef permanent
bonus. XML2's additional health/energy paths in permanentStatBoost use the
stats-interface bonus accessors at slots3C/40 and44/48, whose hero methods
read/write bytes3D/3E (58AA0/58AB0,58AC0/58AD0). XML1 ownership/consumers of
corresponding permanent bonuses have not yet been established. The command
remains pending; do not overwrite unrelated serialized-prefix bytes or use
transient actor values as a substitute. No save layout or runtime code changed.

Retained original XML1 evidence in
work/xml2-resume/permanent-stat-xml1-presence.asm. This identifies the next
integration boundary; it does not claim missing-field absence or completion.


### Permanent vitality bonus consumer boundary (2026-09-30)

Located XML1's CharacterDef maximum-health and maximum-energy consumers:
AFA90 andAFBD0. Actor refresh callers at30CFB,31FC9 and32A76 useAFA90 before
writing actor+246. The full health body endsAFBCA; the energy body endsAFC98.
Both use native stat/level and existing affecter calculations; neither reads
an independent persistent vitality-bonus counter. Do not modify those existing
calculations for XML2 parity. Original evidence is retained in
work/xml2-resume/xml1-maxhealth-native.asm and xml1-maxenergy-native.asm.

The additional XML2 feature is now narrowed precisely: maximum-health bonus
byte is read through stats-interface slot3C atC82C8, and maximum-energy bonus
through slot44 atC852F. Each unsigned byte is added after the existing stat /
affecter result. ScriptB20E0 obtains the game's reward multiplier and applies
10 times that value to the selected bonus counter; the script then refreshes
the actor's maximum and current value. The base-stat branches already have an
XML1 facility and must retain XML1 behavior.

Remaining implementation requirement: give only these genuinely missing bonus
counters stable character ownership, save/load/reset/copy behavior, and optional
consumer integration. Do not repurpose unclassified native serialized bytes or
borrow a transient affecter to impersonate saved bonuses. A zero bonus must
leave XML1's original result unchanged. The script also needs its native reward
multiplier and user-visible notification integrated before registration. No
partial command is registered, no save version changed, no executable staged.
Trace: work/xml2-resume/xml2-permanent-vitality-consumers.asm (original entry
boundaries retained; speculative mid-instruction start was replaced).


### Permanent vitality owner and record codec (2026-09-30)

Added src/raven_vitality_bonus.c/.h as the missing state component. Records
belong to native character-stats lifetimes, including separate snapshots;
actor addresses, hero/skin numbers and runtime roster ordering are not used
as alternate identities. Construction starts both counters at0, duplicate
construction is rejected, copy does not share mutable state, retirement clears
ownership, and retired slots are reused at peak live capacity. Guest lifecycle
hooks must establish ownership before using the component.

The two-byte health/energy payload has an exact-size transactional reader;
malformed input leaves the owned state unchanged. A legacy (NULL,0) read
explicitly clears both counters. Byte addition follows the traced native
counter width. The component does not alter any original XML1 stat bytes,
limits or calculations. Save framing/version selection remains unimplemented
and no new save format is enabled by this standalone codec.

Release target raven-vitality-bonus-test built and passed. Checks cover
independent snapshots, save-payload roundtrip, malformed/truncated input,
legacy reset, duplicate construction, retirement/address reuse,192 simultaneous
records and10000 reuse cycles without allocation growth. Evidence:
work/xml2-resume/vitality-owner-build.log and vitality-owner-test.log.

This is a component, not a registered script or completed gameplay feature.
Native constructor/destructor/copy/reset hooks, versioned record integration,
maximum-stat consumers, reward multiplier and notification remain pending.
Runtime build/staged executable and actual player saves were not changed.


### Native vitality lifecycle integration in progress (2026-09-30)

Added audited construction hooks at48EF0 (default stats constructor) andAF0F0
(copy constructor), assignment at490F0, and retirement at49003 after48F90's
native cleanup. The copy constructor calls the assignment routine normally;
its new owner therefore exists before bonus state is copied. These hooks are
for complete CCharacterStats records. Talent-map49040 also creates temporary
maps during loading; it must not create another character or overwrite bonus
state when those temporary talent references are restored/released.

scripts/guard-vitality-bonus.py validates original instruction boundaries,
preserves the existing talent-map retirement and runs after that migration
in generate-code.ps1. Its second application made no duplicate hooks. The
runtime target enables XML1_PERMANENT_VITALITY; standalone native extraction
fixtures without that define retain their prior behavior. The owner bridge
uses only host state and cannot modify guest registers or call guest code.

A new definition-suite fixture calls actual48EF0/AF0F0/490F0/48F90, checking
copy/assignment isolation, destruction, address reuse and stack/FPU ownership.
Build/test results are recorded in the following completion note, not inferred
from these source changes. Save/reset/maximum-stat/script integration remains
pending. No staged executable or player save has been modified.


### Native vitality lifecycle validation passed (2026-09-30)

Release runtime build and complete powerup-definition suite passed:
work/xml2-resume/vitality-lifecycle-build.log and vitality-lifecycle-test.log.
The added fixture executes native48EF0 default construction,AF0F0 copy
construction,490F0 assignment and48F90 destruction. It verifies independent
health/energy values across copies, retired-address reconstruction starting at0,
all owners released, and preserved stack/FPU state. Source tests establish
component persistence encoding separately; no full save/gameplay claim.

The first isolated attempt stopped because the native character-map allocator
requires the normal game heap initialization, absent from this definition
fixture. The fixture now supplies xbox_HeapAlloc solely for expanded map
storage, while native constructors, map/reference operations and destructors
still execute. Switching this fixture allocator is rejected with live maps,
and NULL restores the production123490 allocator after the fixture. The final
successful test supersedes that initial allocator-setup failure. Production
allocation and all existing game stat behavior remain unchanged.

Still pending: native save/load versioning and legacy reset, other complete
stats-reset paths, maximum-health/energy consumers, reward multiplier, HUD
notification and final script registration. Nothing was staged or published.

### Native vitality consumers validated (2026-09-30)

Connected the permanent health/energy bonus bytes to native maximum-health
AFBAD and maximum-energy AFC7B, after existing affecters and before the existing
clamp/conversion. Zero bonuses leave the native result untouched.

Release xml1-boot-probe and the complete --powerup-definition-test suite passed.
The fixture calls native AFA90/AFBD0: unchanged zero-bonus results of 150/56,
then separate additions of 20 health/30 energy. Lifecycle, independent snapshot
copies, destruction/reuse and stack/FPU checks remain covered. The generation
guard also passed twice. Logs: work/xml2-resume/vitality-consumer-build.log and
vitality-consumer-test.log. No gameplay claim or player staging.

Save/load framing, reset integration and script registration remain pending.
Goal remains incomplete. Existing XML1 functionality wins and is skipped;
this work adds only the missing independent vitality bonus state.

### Permanent vitality save integration validated (2026-09-30)

The missing bonus state now participates in character-section version 5.
The v4 framed header is retained; each complete native stats record adds two
bytes immediately after its unchanged 44-byte prefix. This covers definition
stats and CharacterManager snapshots through the same native serializer.
Old retail/v1/v2/v3/v4 records consume no extra bytes and reset the destination
bonuses. Native serialization outside an admitted section keeps its old layout.
The stream context is cleared before header admission, after rejected admission,
and at the native manager save/load completion boundaries. No asset/save files
or staged player executable were modified.

Traced boundaries: 47F9A (stats save after prefix; ebx stats, ebp stream),
492D7 (stats load after prefix; edi-4 stats, ebp stream), 54E01 (manager save
completion), and the existing load completion at 57041. Native stream capacity
checks follow 6E7E0/6E830's strict bound. This neither changes the four existing
base stats nor borrows native padding. Current schema version is 5, not 4.

Release build and all three checks passed:
- xml1-boot-probe --powerup-definition-test: actual native save/load with empty
  talent/list sets, cursor lengths, independent snapshot state, legacy v0-v4
  clearing, max-stat consumers and lifecycle; full definition suite passes.
- character-save-header-vitality-test: v5 header, all old section versions and
  retail admission, rejection without cursor advance, stream isolation/cleanup.
- raven-vitality-bonus-test: codec, ownership and valid/invalid stream versions.

The native 48CE0 pending-upgrade reset was also exercised with nonzero earned
bonuses and correctly leaves them intact. It is not a complete character reset.
Logs: work/xml2-resume/vitality-save-final-build.log,
vitality-save-final-test.log, vitality-header-final-test.log and
vitality-owner-final-test.log. Trace: vitality-save-native.asm and
vitality-reset-native.asm. No game was launched; these are programmatic checks.

Remaining for permanentStatBoost: finish complete reset-path audit, connect the
native reward multiplier and actor/HUD update path, register/test the missing
script interface. This command remains pending in the inventory. Overall goal
remains incomplete, with other genuinely missing commands/events still pending.

### Snapshot reset integrated; boost amount traced (2026-09-30)

Native 472F0 resets the entire 44-byte stats prefix. Its direct callers are
54E33 and 54EE8 in snapshot capture/restore cleanup. Hook it with the original
prefix-to-owner offset (ecx-4), clearing bonuses only for an existing complete
stats owner. Bare prefix storage does not create a new owner. This closes the
stale-bonus case for an emptied snapshot. The native 48CE0 pending-allocation
reset continues preserving earned bonuses.

Release build and the complete definition suite passed. Added actual 472F0
execution with nonzero health/energy bonuses: both clear, another live stats
owner retains its values. Logs: work/xml2-resume/vitality-reset-build.log and
vitality-reset-test.log. Trace: vitality-reset-callers.asm. No staged EXE change.

The multiplier for XML2 permanentStatBoost is now identified: manager slot274
is 784B0, reading the current-act byte at manager+5E0. The setCurrentAct command
AE0A0 invokes slot278 (784C0), which updates that byte and notifies additional
native consumers. B20E0 multiplies this current act by ten for health/energy.
It is not the separate difficulty field at manager+60C (slots268/26C). Do not
invent a fixed reward or silently use difficulty instead. Remaining work must
resolve the applicable current-act facility and its native consumers before
registering the missing boost command. Trace: vitality-reward-setting.asm.
The current-act command is still pending in the inventory; this trace is not
an implementation claim. Goal remains active and incomplete.

### Current-act consumer boundary investigation (2026-09-30)

RTTI confirms XML2 CGame at vtable49641C and XML1 CGame at3CCD14.
The act setter's second consumer is XML2 CMissionMgr: getter98800 constructs
98710/vtable498924; slot1C is97540. This clears its working mission collection,
then selects mission entries whose act byte at5AC058[index] equals the requested
act. The first consumer78AE0 (CGame slot24) traverses the manager returned by
8F010, resets categories3/4 and rebuilds a collection. Its complete role remains
to be established; do not invent its XML1 counterpart.

XML1 has CMissionMgr (RTTI44E378, vtable3CF084). This establishes presence of
mission management, not presence of act-group selection or a usable current-act
value. Do not port or compare the existing mission system. The unresolved work
is identifying an existing applicable act facility, or proving/connecting the
missing act state and only missing consumers. A string-name search alone does
not establish absence: no currentact/chapter strings were found, and the exact
act string3C8A00 also needs contextual interpretation rather than assumption.

Evidence: work/xml2-resume/current-act-consumers.asm. This is dependency tracing;
no command was registered, no fixed multiplier substituted, no mission behavior
changed, and no staged executable changed. Existing validated bonus/save/reset
work remains intact. Goal is incomplete and remains active.

### Existing Danger Room facilities excluded (2026-09-30)

Two remaining names expose facilities already present in XML1 and are skipped
under the user rule, without semantics/parity comparison or spelling adapters:
- dangerRoomEndMission: XML1 registered endDRScenario at99890 already handles
  ending Danger Room scenarios. XML2 descriptor entryAECC0 identifies the
  differently named command; no second end-of-scenario implementation added.
- getDangerRoomActive: XML1 native queryBF730 reads its Danger Room mode at
  4E7AB0 and tests against the inactive FF sentinel. The registered XML1
  endDRScenario calls it at99890. No new active-state store/query is needed.

The inventory generator verifies the registered command descriptors and the
native query/caller bytes before excluding these names. Regeneration passed:
work/xml2-resume/inventory-danger-room-presence.log. Native presence evidence:
work/xml2-resume/danger-room-presence.asm. Current command inventory has 36
registered additions, 12 existing-facility exclusions and 77 pending names.
Pending includes unclassified frontend/platform entries, not 77 proven missing
combat features. This does not claim unchanged XML2 spellings are accepted.
No runtime code changed in this presence pass, so no additional build or game
launch was necessary. The current-act dependency and other missing work remain
open; the goal is not complete and no staged executable was replaced.

### Removal health-query component validated (2026-09-30)

Added raven_native_health_pct_context: evaluate the actor's bound health fraction
first, then an explicitly supplied source actor only when the first context is
unavailable. Literal values and evaluated values (including zero) do not fall
through. No XML2 actor offset is read inside an XML1 object. The guest caller
must resolve/validate the source actor's generation before passing it.

The unregistered removal event now has a separate health-required calculation:
maximum health times the resolved floating fraction, without rounding it to the
integer hit record. A 25-percent cost with max health101 requires25.25 at the
eligibility boundary and separately constructs a26-point native health hit.
This does not repurpose XML1 event virtual24, its existing boolean method.

Release build and complete --powerup-definition-test passed. Added checks cover
explicit source fallback, own-actor precedence over an invalid fallback,
unavailable contexts, literal zero preservation, unrounded requirement and
null actor. Existing clone/retirement and native hit-record checks also pass.
Logs: work/xml2-resume/removal-health-context-build.log and
removal-health-context-test.log. Trace: removal-health-query-native.asm.

Still unfinished: source-context lifetime connection, combat-node health gate,
event factory/clone registration and full query/removal execution validation.
The component is not a claim that ce_remove_powerups is usable yet; its inventory
entry stays pending. Existing runtime behavior and player staging are unchanged.
Goal remains active and incomplete.

### Removal fallback writer identified (2026-09-30)

XML2 RTTI CPURogueDrained (type546304, vtable4A87EC) virtual0 resolves to1504E0.
The branch150783..1507CE of that activation method writes the actor power-source
cache through2D1B0. The cache also stores a power ID and a secondary handle/name;
it must not be approximated as a general actor parent/sponsor field.
Evidence: work/xml2-resume/removal-power-source-owner.asm, disassembled from the
verified function entry1504E0 and cache setter/getter2D1B0. This supersedes the
unusable speculative mid-instruction disassembly at150760 from exploratory
output (never used for a hook).

XML1 exact CPURogueDrained RTTI/name was not found. XML1 uses flat powerup
implementations, so this is not proof that its power-drain system is missing.
The next integration step is tracing its existing drain path and determining
whether it supplies the missing event's source context. No field offset,
cache writer, fallback hook or factory was guessed or registered in this pass.

### Existing XML1 stolen-power context connected (2026-09-30)

XML1 already implements power stealing. Stock ps_rogue.eng uses drain_victim
with PowerStolenActivate/PowerStolenDeactivate. Native callback-name lookup at
2DBBA/2DBDB resolves those to2CF80/2D3B0. Do not port CPURogueDrained or add a
second cache solely because its XML2 class/name differs.

The existing activation path2CF80 records the source actor handle through
2D18C ->2E2C0 ->CFightStyle virtual54 (EB2C0). XML1 stores that handle in its
style-link table, alongside the borrowed move name. Native CFightStyle virtual1C
(EB4F0) reads the links, resolves live actors, finds the requested borrowed move
and returns its source generation handle through an output argument.

The unregistered removal event now uses that native query only after its own
health-fraction lookup reports missing context. It supplies the parent node's
native name (node+8), requires a returned move, then re-resolves the source
handle and checks actor type. No field was added to actor storage, no XML2+758
offset was borrowed, and the existing stealing/writing behavior is untouched.

Release build and full --powerup-definition-test pass. Added checks call the
new source resolver with no parent, no style and an empty real CFightStyle link
tree, preserving stack/FPU state. These are negative paths only: a successful
borrowed-power lookup, stale-link recovery and complete event execution still
need validation before factory registration. Logs:
work/xml2-resume/removal-native-source-build.log and
removal-native-source-test.log. Traces: xml1-power-stolen-activate.asm,
xml1-stolen-power-read.asm and removal-xml1-source-interface.asm.

The removal event remains pending. Goal remains active; no player staging,
gameplay claim, commit, push or release.

### Native borrowed-power source validation passed (2026-09-30)

Added a targeted fixture for removal_source_actor. It runs native CFightStyle
EB4F0, EA8E0 link traversal, actor style accessors, and native generation-checked
entity lookup against an isolated one-link tree. Only the final move-resource
lookup is substituted with a bounded test callback that checks the requested
source style and node-name address.

Cases passed: live borrowed-power source, reused entity slot/address with a
new generation, non-actor source, and no matching move. The last case verifies
that the native query writing an output handle without a move does not produce
a false fallback. Stack/FPU balance and callback arguments are checked; manager
state, RTTI global and fixture allocations are restored/released afterward.

Release build and complete --powerup-definition-test passed. Logs:
work/xml2-resume/removal-source-fixture-build.log and
removal-source-fixture-test.log. This establishes the native source-lookup
connection under controlled data, not loaded asset/gameplay correctness.

Next gate integration boundaries are in native E1A20: E1A8F is reached only for
non-exempt events after their energy query; E1AB6 and E1AD1 are the ordinary
success exits before actor/node registers are popped. Preserve the earlier
native player/bypass exit E1A56 and the existing boolean event virtual24.
The currently unregistered event still needs its health gate, factory/copy
wiring and complete query/removal validation. Goal active; staging unchanged.

## Removal health eligibility validation (2026-09-30)

The optimized probe build and --powerup-definition-test passed. The new gate
uses XML1 native combat eligibility, preserves existing energy checks and early
bypass paths, and applies only to the new removal event table. Checks cover
summed costs, exact equality, unrelated events, insufficient energy and zero
health cost. Fixture event enumeration is substituted; this is not gameplay
verification or full event execution coverage. Production registration remains
pending. Evidence: work/xml2-resume/removal-health-gate-build.log and
work/xml2-resume/removal-health-gate-test.log. No player executable was staged.

## Removal event lifecycle (2026-09-30)

Traced XML2 constructor109D50 and copy109DA0; reused XML1 CEAction constructor
CF610 and copyCF660 rather than duplicating their existing behavior. Added a
private dispatch table retaining native CEAction RTTI and destruction. The
new event constructor initializes only its private fields after the native
base constructor; virtual copy copies those fields only for its own subtype.
Programmatic checks pass for defaults, base/private copying, bound-value clone
independence, address reuse, unrelated subtype handling and stack/FPU balance.
The optimized probe build and full --powerup-definition-test passed; evidence:
work/xml2-resume/removal-lifecycle-build.log and removal-lifecycle-test.log.
The first fixture attempt used an invalid operand identifier and was corrected
to an existing valid identifier before the successful run. Factory registration
and full execution coverage remain pending. No gameplay verification, staging,
commit, push or release.

## Removal execution and query checks (2026-09-30)

The new event virtual execution passes targeted checks through native CEAction
CDE90/3F410 energy calculation: one energy debit, timestamp, health-hit ABI,
zero health cost, absent/nonactor inputs and stale owner identity. Terminal
clock, node metadata, energy setter and health-hit receiver are substituted.
This checks hit delivery arguments, not the complete native damage response.

A separate populated-query fixture runs native query/list allocation, identity
lookup, list iteration and cleanup, substituting only scene membership. It
checks owner-inclusive handles, radius, empty sets, query/result pool exhaustion
and reuse. Tracing A2B10 exposed a null result when its independent three-slot
list pool is exhausted; removal_targets now releases its query and returns an
empty result in this case. Native XML1 query behavior itself is unchanged.

Optimized build and full --powerup-definition-test passed. Evidence:
work/xml2-resume/removal-execution-build.log, removal-execution-test.log,
removal-query-build.log and removal-query-test.log. Actual class/tag removal,
beam dispatch and combined populated execution still require checks before
factory registration. Player staging unchanged; no gameplay claim or release.

## Native removal and composed execution (2026-09-30)

Class/tag adapter checks now run native 2AF30 unlink, instance cleanup, pool
retirement and actor effect-mask rebuild. Both selectors remove the matching
head/tail effects while preserving an unrelated middle effect. A deactivation
callback clears the chain; subsequent saved identities are rejected rather
than revisited. Stack/FPU checks pass.

The event execution fixture now composes native query/list traversal and actual
class-then-tag removal with native energy calculation and health-hit dispatch.
All three fixture effects are removed in the expected two selector passes,
energy is charged once, health-hit arguments are checked, and query/list slots
are released. Scene membership, terminal energy setter, clock, node metadata
and damage receiver are controlled fixture boundaries. This is programmatic
coverage, not gameplay or final damage/visual verification. Beam dispatch and
factory registration remain pending.

Optimized builds and full --powerup-definition-test passed; evidence:
work/xml2-resume/removal-unlink-build.log, removal-unlink-test.log,
removal-combined-build.log and removal-combined-test.log. No player staging,
commit, push or release. Goal remains active and incomplete.

## Removal event registered (2026-09-30)

ce_remove_powerups is now wired through the existing E6040 factory extension
boundary, only after native XML1 event names have been tried. Its 42-byte
layout fits the original 60-byte pool slot. A native factory fixture checks
case-insensitive creation, virtual parsing/copy, pool retirement and stale
handle rejection. No changes to stock event names or implementations.

The composed execution fixture also exercises optional beam dispatch through
the original game/effect interfaces, checking resource, origin, direction and
remaining call arguments at the terminal effect receiver. No effect rendering
is claimed. The existing component tests retain their stated substitutions.

Optimized build and complete --powerup-definition-test pass, including the new
native factory check. Evidence: work/xml2-resume/removal-beam-build.log,
removal-beam-test.log, removal-factory-build.log and removal-factory-test.log.
Inventory regenerated successfully (inventory-removal-registered.log): seven
added event factories, two existing-facility event exclusions, four remaining
event names. Script counts remain 36 additions, 12 exclusions and 77 pending
names. The complete goal is not finished; player staging remains unchanged.

## Existing damage/blast facilities excluded (2026-09-30)

Applied the user rule at system level, consistently with the prior healing and
resurrection exclusions. XML1 already exposes damage at 9FD10 (descriptor
3D1788, aai arguments). It resolves the explicit recipient/source and dispatches
a native hit to recipient virtual A8 at9FE22; it does not reject equal
recipient/source identities. Therefore ce_atk_self is an existing direct-damage
facility exclusion. No XML2 command/event alias or balance/signature changes.
This does not claim unchanged XML2 powerstyle spellings will load.

XML1 also has ce_atk_blast and CCEAtkBlast, vtable3D6B68, native execution
CFDC0. ce_atk_blast_objects is excluded as an existing blast-system variant;
XML2 target-selection differences are not an import task. The inventory checks
the original descriptor/type/vtable evidence rather than assuming a missing
name means a missing system. No gameplay-equivalence claim is made.

Read-only trace evidence: work/xml2-resume/self-attack-existing-damage.asm,
self-attack-existing-damage-tail.asm and self-attack-xml1-presence.asm. Inventory
regeneration passed (inventory-self-damage-presence.log and
inventory-blast-presence.log). Current event totals: seven added factories,
four existing-system exclusions, two pending names (ce_atk_spawn_sentry and
ce_spawn_minion). No runtime changes, staging, commit or release this pass.

## Existing spawn facilities excluded (2026-09-30)

XML1 already has ce_spawn_actor / CCESpawnActor (vtable3D6F78, executionD3270)
and a native minion character classification (literal3D3D10, parserB04B4,
value written atB04C5). ce_spawn_minion is excluded as an existing actor-spawn
system variant. XML2-specific spawning policy is not imported.

XML1 already has ce_atk_spawn / CCEAtkSpawn (vtable3D5F48, executionCFDC0)
and CScanTurretEntity (vtable3D323C). ce_atk_spawn_sentry is excluded as an
existing entity-spawn/turret-system variant. Presence checks validate both the
spawn event and turret entity; a generic spawn name alone is not the evidence.
No claim is made that XML2 sentry/minion declarations load unchanged, or that
the games use equivalent selection, ownership or balance rules. Per the user,
existing XML1 systems win and such differences are not implementation work.

Evidence: work/xml2-resume/spawn-existing-types.json and
minion-xml1-presence.asm, plus inventory-spawn-presence.log. Inventory generation
passed with all event names classified: seven added factories and six
existing-system exclusions among the thirteen originally absent names. Script
and other missing functionality remain unfinished. No runtime edits, staging,
commit, push or release were performed for these presence exclusions.

## Existing script facilities: recipient variants (2026-09-30)

Original XML1 command descriptors establish these existing systems:
- setTeamInvisible: setInvisible at9C6B0 (descriptor3D0DB8).
- setBossPartyLightColor: setPartyLightColor at9A040 (descriptor3D1768).
- playBossSound: sound at9FA00.

The XML2 spellings select a team/boss context for existing facilities. Under
the user rule those are excluded without importing selection or signature
variations. No aliases were added, and no claim is made that unchanged XML2
scripts using these names will execute. The generator verifies both original
command descriptor addresses before accepting the exclusions.

Inventory regeneration passed: work/xml2-resume/inventory-script-facilities.log.
Current script totals are 36 additions, 15 existing-facility exclusions and74
pending names. This is classification progress, not additional implemented
commands or runtime validation. No player build, commit, push or release.

## Existing entity properties excluded (2026-09-30)

setBossUndying and showHealthBar expose systems XML1 already supplies through
native entity properties. Original parser9346A reads undying (literal3CCB84,
reference9346E) and writes entity+2B8 bit10. It then reads showhealthbar
(literal3CFCF8, reference93496) and writes the native health-bar bit80 in
the same byte. These are established XML1 properties, not absent systems.
No XML2 spelling adapters or changes to their behavior were added.

The inventory now validates both literal/reference pairs and original XML2
command descriptors before accepting the exclusions. Evidence:
work/xml2-resume/character-properties-presence.asm and
inventory-entity-properties.log. Regeneration passed. Script totals:
36 additions, 17 existing-system exclusions, 72 pending names.
No runtime edit or player build this pass. The full goal remains incomplete.

## Existing character unlocking excluded (2026-09-30)

unlockCharacter maps to the existing setInCampaign facility (descriptor3D1428,
entry99460). Its native CharacterManager path552A0 updates campaign membership
and the game-state unlock bitmap through8C380; this is also the established
modder-mode integration documented in src/modder_mode.h. isCharacterUnlocked
is excluded because the original8C3B0 query already reads that bitmap with
ID bounds checking. No new unlock state, script aliases or save behavior.

Evidence: work/xml2-resume/character-unlock-presence.asm and
character-unlock-query.asm. The inventory validates the original command
descriptors and complete native query bytes; regeneration passed
(inventory-unlock-presence.log). Script totals: 36 additions,19 exclusions,
70 pending names. No runtime changes, compilation, staging or release.

## Existing timed game-speed control excluded (2026-09-30)

XML1 CGame vtable3CCD14 virtual30 is6EF60, a native timed speed setter.
It writes speed at+3B8/+3BC and expiration fields using the existing clock.
The original frame path reads the speed at73217 and processes expiration
and transitions. setGameSpeed therefore exposes an existing facility and
is excluded; no XML2 alias or clock-policy changes were made.

Evidence: work/xml2-resume/game-time-interface.asm and game-speed-consumer.asm.
The inventory verifies CGame method presence, native consumer instruction and
original XML2 descriptor. Regeneration passed (inventory-game-speed.log).
Lighting controls remain pending: nearby getters are not sufficient evidence
of the requested control. Current script totals:36 additions,20 exclusions,
69 pending names. No runtime edits, player staging, commit or release.

## Existing party-light radius control excluded (2026-09-30)

XML1 zone loading reads partylightradius (literal3CE7A8, reference81B02),
then calls CGame virtual88 at81B21. The native setter6F010 writes game+18C.
The party-light update73FA0 reads that value at74083. This establishes a
loaded property, callable setter and runtime consumer, rather than merely a
similar field name. setPartyLightRadiusScale is excluded as an existing
lighting facility; XML2 policy/signature differences are not imported.

Evidence: work/xml2-resume/zone-light-properties.asm, game-controls-xml1.asm
and party-light-radius-consumer.asm. Inventory validates the property reference,
setter and consumer bytes, plus original XML2 descriptor. Regeneration passed
(inventory-party-light-radius.log). Ambient-light control remains pending.
Current script totals:36 additions,21 exclusions,68 pending names. No runtime
changes, player staging, commit or release. Goal remains active/incomplete.

## Existing ambient-light system: skipped (2026-09-30)

XML1 CFxAmbientLightPrimitive (vtable3C73E4, update1ECF0) calls1D7C0,
which evaluates RGB and writes scene-light state through virtual24 at1D922.
Expiry calls1D200 and restores the saved light state through the same interface
at1D298. This establishes an existing ambient-light color system; no comparison
with XML2 policy or script signature is needed. setAmbientLightColor is therefore
excluded, with no spelling alias or runtime modification. The inventory guards
the native type/update identity and both scene-state calls against the original
image. Regeneration passes (work/xml2-resume/inventory-ambient-light.log).
Native trace: work/xml2-resume/ambient-light-update.asm. No build or gameplay
validation was needed for this inventory-only change. Staging is unchanged.

## Existing destruction and menu-close systems: skipped (2026-09-30)

swapInStump B8C30 dispatches physical-entity virtual08 atB8CCC. Its physical
class implementation is destruction via the native damage receiver, rather than
a separate missing character handler. XML1 CPhysicalEntity vtable3C9204 already
provides that destruction operation at93170, constructing a native hit and
calling virtualA8 at931BB. Under the user's system-presence rule, skip this
entry without importing XML2 damage flags, values or actor cleanup differences.
No alias or runtime change was added. Evidence: physical-destruction-presence.asm
and swap-stump-system.asm in work/xml2-resume; inventory-physical-destruction.log
passes the native type, dispatch and original command descriptor guards.

closemenu also exists in XML1's frontend command system: registration18E2C7
binds the original closemenu literal3DFD08 to18CCE0, which dispatches the menu
manager's virtual4C. XML2's script entry formats a frontend closemenu command;
a new spelling adapter would only expose an already-present operation. Skip it.
Trace: work/xml2-resume/close-menu-presence.asm. Inventory regeneration passes
in inventory-close-menu.log. Current totals above incorporate both exclusions.
No executable rebuild, player staging or gameplay validation was performed for
these inventory-only changes. Automatic spending/equipment controls remain
unclassified: no existing-system exclusion has been inferred from their names.
The historical progression note's extracted4AC80 address is not a valid XML1
XBE function boundary and is not used as presence evidence.

## Existing Danger Room outcome system: skipped (2026-09-30)

XML1 already evaluates Danger Room success and failure. C5E00 checks configured
objective counts/timing, records success atC5F0C (manager+1C28 bit04), then
runs the native completion path. C3840 checks party survival, failure criteria
and the configured time limit, records failure atC399F (bit08), and begins
failure reporting. These are the native outcome system, not inferred meaning
from a global flag alone. setDangerRoomSuccess and setDangerRoomFailed are
excluded under the user's existing-system rule. No XML2 result policy or script
spelling alias was added. closeDangerRoom remains pending separately.

Evidence: work/xml2-resume/danger-outcome-presence.asm contains both native
entry paths with valid instruction boundaries. The inventory validates their
state writes against the original image and the original XML2 command entries;
regeneration passes in inventory-danger-outcomes.log. This is an inventory-only
change, with no runtime build, gameplay test or player staging. Current counts
above include these exclusions; the goal remains incomplete.

## Gameplay scripting scope clarification (2026-09-30)

User explicitly excluded console/online services and retained gameplay scripting.
The inventory now has a separate out-of-scope category for20 Xbox Live friends,
invites, feedback/voice, account logout, dashboard and title-update commands.
These entries are NOT marked implemented or already present. No fake success
adapters were added. Ambiguous frontend controls, including waiting dialogs,
network negotiation, host/game-type controls and mute, remain pending until their
native purpose is established; ordinary saves and local multiplayer remain in
scope. Inventory regeneration passes (inventory-gameplay-scope.log).
The existing loadNetworkConfig retail no-op adapter is preserved as completed
work; this clarification does not restart or remove earlier implementations.

## Traced online controls and dialogs excluded (2026-09-30)

Seven additional names are online services under the user's explicit exclusion:
ReNegotiate, ToggleMute, KickPlayer, openWaitingDialog, cancelWaitingDialog,
confirmKickPlayerDialog and kickPlayerDialog. Native219670 constructs the
CNetPlayManager singleton via2190C0 (RTTI/vtable4B47A4). KickPlayer AEB30
calls its peer lookup/removal paths. ToggleMute AF760 passes online user IDs
through that manager to the mute/unmute service calls42A497/42A4B9; it is not
local game-volume control. ReNegotiate AEA80 reaches212A70 and network-session
state. The waiting dialog calls the network host query2175A0 and offers the
kick-player dialog; cancellation checks remote participant state through20D750.
Both kick dialogs resolve network peers through the same manager.

Evidence: work/xml2-resume/netplay-service-consumers.asm and
netplay-dialog-consumers.asm; constructor/type mapping is guarded by the
inventory. Inventory regenerations pass in inventory-netplay-controls.log and
inventory-netplay-dialogs.log. Remaining host/game-type/preference commands are
not excluded merely because they are adjacent to network code. Runtime and
player staging remain unchanged; this is classification, not implementation.

## Existing HUD messages and briefing consumer trace (2026-09-30)

hudMessage is excluded as an existing XML1 HUD-message system. Native
registered displayHelp9A410 resolves the provided text and sends it through
HUD singleton158860 virtual20 with duration/color/category. This is live native
functionality, not the retail display/displayEx stubs at2123A0. No XML2 style,
duration policy or spelling adapter is imported. Trace: hud-message-presence.asm;
inventory regeneration passes in inventory-hud-message.log.

newMissionBriefing remains pending, but its actual XML2 consumer is now located:
AD360 sets CGame virtual74 ->77EB0, bit80 atgame+728. HUD update1ABDD8 queries
virtual78, presents localized stringC3 for3seconds through HUDvirtual34,
retains the message handle in689C50, and clears the flag through virtual74.
This is a queued HUD notification, not a new mission-loading function. Trace:
work/xml2-resume/mission-briefing-consumer.asm. No flag-only adapter has been
added; an existing XML1 notification must first be checked, or a missing one
connected to actual HUD dispatch and localized text. Player staging unchanged.

## Existing mission notices and confirmation dialogs excluded (2026-09-30)

XML1 already supplies queued mission/objective HUD notices. CMissionMgr vtable
3CF084 exposes pending85FD0, clear85FE0 and text844F0; HUD update158BF7 checks
that pending flag, displays its text at158C43, plays common/game/objectives_up
and clears it at158C75. newMissionBriefing is therefore an existing-system
exclusion. Preserve XML1 notification policy; do not add XML2's flag or text.
Trace: mission-notice-presence.asm; inventory-mission-notice.log passes.

AreYouSure is a confirmation popup with a callback option. XML1 already has
createPopupDialog99300, addPopupDialogOption99390 (text plus script action),
and showPopupDialog993E0 wired to its native popup manager187AF0. Exclude the
XML2 convenience wrapper; differing formatting is not missing functionality.
Trace: popup-confirmation-presence.asm; inventory-popup-confirmation.log passes.
These are inventory-only changes, not new runtime behavior or gameplay tests.
The staged executable remains untouched and the goal remains incomplete.

## Extraction unlock registry trace (2026-09-30; still pending)

extractionUnlock ADE40 and isExtractionPointUnlocked ADE00 resolve a zone name
and call CExtractionPointSystem's unlock/query methods76BB0/76B50. This is not
just extractionPointChange's menu operation. The XML2 registry loads
 data/zoneinfo.xmlb through76C60, accepts zone nodes with extraction=true via
76A90, retains their resource nodes, and stores per-point unlock state in bit0
of record+9. Records are12bytes; construction reserves32, while admission uses
a count<31 guard. Save76DA0 and load76E00 serialize the unlock bitmap as4bytes.
Record768C0 also parses towncenter and act; queries expose name/mapx/mapy.
Trace: work/xml2-resume/extraction-registry-native.asm.

XML1 also has original data/zoneinfo resources and native loading references:
zoneinfo literal3CE9CC ->8101C, zone literal3CE9C4 ->81043/8163E. The supplied
XBOXgame/data/zoneinfo.eng contains native zone definitions. This establishes
an existing metadata source, not an unlock registry. Next check its native
consumers for equivalent unlock ownership before adding any system. Both
commands remain pending; do not infer absence from different class names or
presence from the existing extraction-point menu. No runtime edits, asset
changes, rebuild, staging or gameplay validation were performed in this trace.

## XML1 zone metadata consumer clarified (2026-09-30)

The original zoneinfo consumer8101B..8114B searches zone nodes by name against
the current zone path, then reads loading and savename. The loading attribute
is sent to826F0; savename is copied to the zone's display-name destination.
The loop stops at the matching record and destroys its parser afterward.
This path does not own persistent extraction unlock state. Native literals:
name3C8690, loading3CE514, savename3CE9B8. Trace:
work/xml2-resume/xml1-zoneinfo-consumer.asm. Extraction commands remain pending;
the existing blackbird/travel consumer still needs its presence check before a
new registry is justified. No runtime or player-data changes were made.

The native CMenuBlackbird identity is vtable3DE65C, not the frontend factory
near1722B6. Its specialized methods include16B2F0/16B650/16BE00; nearby native
resources are team_head1 and character podium/model slots. The initial broad
literal-reference scan ended on a non-mapped reference (None); a bounded raw
reference scan over16B000..16C7FF completed and identified these UI resources.
Do not treat the failed broad scan as absence evidence. The two traced XML1
paths (zone display metadata and team-oriented Blackbird menu) have not shown
an extraction unlock registry; extractionUnlock/isExtractionPointUnlocked remain
pending, requiring metadata ownership and save integration if added.

## Extraction metadata implementation begun (2026-09-30)

Added raven_extraction_registry.h/.cpp with owned metadata for zone nodes that
explicitly declare extraction=true. Stock XML1 zone entries are untouched.
Native XML2 lookup is case-insensitive; authored path separators are preserved.
The registry initially proposed hex-encoded variable keys; the storage trace
below rejected that bridge. It now owns folded zone names directly.
This keeps identities stable when mods reorder definitions or localize labels
and allows expansion beyond32 entries. It rejects ambiguous duplicate extraction
identities and missing names; it does not retain pointers into temporary XMLB
parse trees. The reserved __xml2_extraction_ namespace is only a proposed bridge
key until native saved-variable storage limits and persistence are validated.

Release target raven-extraction-registry-test builds and passes compiled-XMLB
fixtures covering stock exclusion, owned lifetime, case matching, separator
preservation, ordering/localization stability,300 declarations and invalid names.
Logs: work/xml2-resume/extraction-registry-build.log and
extraction-registry-test.log. This core is not linked into gameplay yet. Runtime
resource loading, native variable key admission/ownership, legacy-save behavior,
script dispatch and save/load integration still need implementation/checks.
Neither extraction command is marked implemented. No player files were staged.

## Extraction state codec and native storage limit (2026-09-30)

Native XML1 CB850 rejects variable names of 12 bytes or more and bounds new
entries to 16 (manager+1EBA4, pool+5FC4). Do not widen this existing system.
The proposed per-zone native-variable bridge is abandoned. The independent
registry now tracks unlocked identities and serializes an X2EXTR01 adjunct
payload with length-framed names. This is not yet a game-save integration.

Restore validates the entire payload before changing state. Missing mod
identities survive roundtrips but cannot expose undeclared destinations;
reintroducing the definitions recovers their state. Explicit nullptr/0 resets
for a legacy/new campaign. Names remain case-insensitive with authored path
separators preserved. No positional bitmap or fixed roster limit is imposed.

Release raven-extraction-registry-test passed: reorder/localization stability,
300 unlocked zones, temporarily absent definitions, legacy reset, every truncated
prefix, invalid header/count/length/name, duplicate entries and trailing bytes.
Failures leave previous state intact. Evidence: work/xml2-resume/
extraction-state-build.log and extraction-state-test.log.

Runtime ownership, metadata loading, campaign lifecycle, native save framing and
script registration remain pending. No extraction command is marked complete;
no executable was staged and no gameplay verification was performed.

## Campaign extraction framing and ownership trace (2026-09-30)

The original CGame vtable 3CCD14 slots 194/198 are campaign save70350/load70570.
Save writes native subsystems, then emits the final marker at7053B..70546.
Load consumes those same subsystems, then reaches its marker reader at706B1.
These are campaign-level boundaries, separate from CharacterManager's version5
section. The save frontend calls the game atA6E47 and passes the fixed2FC00-byte
buffer to the storage manager atA6E89; load calls CGame atA5441 and releases its
buffer afterward. Native resetgame18CF90 resets campaign systems, including
mission, inventory and roster state. It is a candidate campaign-reset hook,
not a character-construction or map-transition reset.

Native marker writer6E880 emits newline +50-byte label +newline. Its bound
checks are strict (<2FC00), so any insertion must reserve53 bytes:52 for the
marker plus1 unused byte. Reader6E920 advances52 bytes. The exact original
instructions are recorded in work/xml2-resume/campaign-extraction-boundaries.asm.
No speculative instruction-boundary disassembly is used in that trace.

ExtractionRegistry now provides bounded campaign-section read/write helpers.
The new section has an8-byte XML1EXT signature and32-bit payload length around
the existing identity payload. Empty state emits no section. Loading a retail
SAVEGAMEEND marker resets prior adjunct state and consumes no marker bytes.
Extended loads validate the payload framing and following native marker before
committing state. Bad lengths, truncated markers and invalid payloads preserve
previous state; insufficient output capacity writes nothing.

Release test passed the native strict-capacity edge, unchanged reserved bytes,
legacy boundary reset, complete roundtrip and every truncated frame prefix.
Evidence: work/xml2-resume/extraction-campaign-build.log and
extraction-campaign-test.log. This is programmatic serialization validation,
not a runtime or gameplay claim. Metadata loading, owning runtime instance,
new-campaign/save/load hooks and script registration remain to be connected.
The two extraction commands remain pending and no player executable was staged.

## Extraction commands and campaign hooks connected (2026-09-30)

Added raven_extraction_owner and raven_extraction_guest. The runtime owns copied
zone identities independently of native parser lifetime. Native zoneinfo capture
at81031 reads MEM32(esp+6C), using native child/attribute/symbol APIs; it does not
choose another resource path, bypass language resolution or change authored
filenames. Only extraction=true declarations enter the new registry. Reparse
publishes validated definitions transactionally while preserving campaign state.
Load-before-metadata and temporarily absent mod definitions retain saved names.

Guarded hooks insert save/load sections at7053B/706B1 and reset extraction travel
state at the existing campaign reset18CF90. Existing character progression and
native variable limits are unchanged. The guard is retained in code generation
and was rerun successfully after installation. Player assets were not modified.

Registered extractionUnlock(n,s) and isExtractionPointUnlocked(i,none). Explicit
unlock names are used directly; empty names and queries use XML1's existing
CMap singleton80C80 and virtual48 getter80400. Native loadZone9A97E..9A987 proves
that integration interface. XML2's ADE40/ADE00 use CMap93370/virtual5C/924C0 for
the corresponding zone identity. This is interface adaptation for missing
commands, not a comparison or replacement of XML1 map behavior.

Programmatic evidence: optimized boot probe builds and the complete
--powerup-definition-test passes. Native extraction fixtures exercise actual
symbol construction, child/attribute lookup, parser destruction, repeated
metadata capture, reset and CMap lookup. Guest save helpers also roundtrip with
the real6E880 marker writer and6E920 reader, preserve preceding stream bytes,
advance the cursor correctly, and reset on a legacy marker. Standalone owner
checks cover load-before-metadata, owned input strings, rejected duplicates,
absent definitions and retained metadata after reset. Evidence:
work/xml2-resume/extraction-owner-build.log, extraction-owner-test.log,
extraction-native-build.log and extraction-native-test.log.

Inventory regenerated in inventory-extraction.log:38 registered additions,
29 existing-facility exclusions,27 console/online exclusions,31 pending names.
Registration/fixtures do not claim an in-game travel menu or whole-campaign
save acceptance run. No gameplay was launched and no player executable staged.
Remaining missing commands and systems keep TODO3 and its goal incomplete.

## Review frontend presence and remaining settings trace (2026-09-30)

reviewMenu is excluded as an existing XML1 system. XML2 AD400 queues openmenu
review (49C684); XML1 already has the Review menu with its four media entries
(ui/menus/review.eng) and original reviewLoadScreens99200,
reviewCinematics99220, reviewComics99240, reviewConcept99260. Those native
commands dispatch openmenu review_* via frontend11CD90/virtual14. No spelling
adapter or menu replacement is added. Presence guards check the original XML1
registrations and literal, plus the recovered XML2 entry. Evidence:
work/xml2-resume/review-menu-presence.asm and inventory-review-menu.log.

Next missing-settings investigation is bounded by actual native consumers:
XML2 setAutoSpend AF2A0 iterates active CharacterManager59E40 entries and calls
character+ C0 virtual78/80; setAutoEquip AF350 uses virtual88, then applies via
4B9D0. These are not declared absent merely because literal-name searches in
XML1 found no matches. useSavedStats AE0F0 selects CSaveLoadC2220 virtual14
state5. useDefaultStats AE110 has an online branch and a local branch, so it
must not be excluded wholesale as an online service. Local flow resets through
CGame virtual270, queues a frontend command, then uses another manager. Native
consumers/presence still need tracing before implementation or exclusion.
Trace: work/xml2-resume/pending-settings-dispatch.asm. These names remain pending.

Current script count:38 registered,30 existing-facility exclusions,27 excluded
console/online names,30 pending. No runtime changes or staging in this pass.

## Automatic-upgrade native consumers resolved (2026-09-30)

setAutoSpend and setAutoEquip do not merely set global preferences. XML2's
CStatsHero vtable494794 maps virtual78/80/88 to58B40/58B70/58BA0; these own
bits1/2/3 of stats+43. CharacterManager59DE0 resolves a character record, whose
+C0 points to that stats interface. The getters are58B30/58B60/58B90.

CAutoSpend vtable493DF4 has immediate apply4A6A0, per-character4A780, upgrade
selection4A9E0 and equipment pass4A7E0. Per-character application reads both
spending flags, dispatches the allocation consumer, then commits via498E0.
The equipment pass enumerates the active party and reads the auto-equip flag.
A boolean-only adapter would omit the actual requested function.

Loader4B5E0 reads data/autospend.xmlb, root AutoSpend, CharacterClass children.
Profiles have normalized strength/speed/body/mind weights and bonus children
with start/rate and stat fields. The supplied PC resource decodes to four
profiles (bruiser, bruiser_light, support, support_heavy). This is authored data,
not a reason to hardcode those four profiles or a particular imported hero.
Selection4AB40 reads all four native stats, computes each weighted target with
minimum1, then selects the greatest positive relative deficit among uncapped
stats. Spending4AAA0 changes native pending allocations and consumes points.
Power selection4AC80 and equipment ranking remain to be traced; XML1 presence
and integration interfaces also remain unresolved. Neither command is marked
implemented, and absence of the CAutoSpend class name alone is not proof that
XML1 lacks every relevant allocation facility.

useDefaultStats was also narrowed: its local CGame virtual270 is785D0, gated by
game mode+60C==2, and can raise active heroes toward level45. Do not mistake
that flow for a generic clear-stats operation or introduce an unconditional
level reset. It stays pending alongside useSavedStats.

Evidence: work/xml2-resume/auto-upgrade-owner.asm,
auto-upgrade-profile.asm, auto-upgrade-consumers.asm and decoded local
reference autospend-reference.xml. This pass changes trace documentation only;
script counts remain38 registered,30 existing exclusions,27 online exclusions,
30 pending. No assets, runtime executable or user saves were changed.

## Automatic power and equipment selection trace (2026-09-30)

Power allocator4AC80 reads remaining skill points through48920, chooses a
candidate through4B160, increments its pending rank via49510/49560, consumes a
point through48BA0, and invokes CGame virtual1C8. It also collects newly learned
active powers for later assignment. The selector is not simple equal rotation:
4B160 iterates current talent records, resolves definitions, checks next-rank
requirements through BC5E0, and builds a priority score from learned state,
category, relative rank deficit and native requirement information. Missing or
ineligible definitions are excluded. Neither the existing XML1 requirement
checks nor completed power binding/rotation should be replaced when integrating
this new automatic selection policy.

Equipment apply4A7E0 has preparation, selection across slots1..3, and final
commit/refresh passes. Selection1B6BB0 traverses a prepared inventory list and
returns the first matching-slot item whose native BC5E0 requirements succeed.
List preparation1B6A70 collects native inventory handles into20-byte records,
sets sort mode689DE8, and invokes1B6730. That ordering routine delegates compares
to1B5B90. Thus choosing an arbitrary first raw-inventory item or inventing a
power-based score would not reproduce the traced operation. The comparison
function and XML1 inventory integration remain next steps.

Evidence: work/xml2-resume/auto-power-equipment-consumers.asm,
auto-power-selector-equipment-ranking.asm and auto-equipment-ordering.asm.
A resource search found autospend attributes on imported Bishop/Sunfire only;
that is supporting data, not proof of absence of every XML1 allocation path.
No new runtime behavior was authored from this incomplete presence trace.
Script counts remain unchanged; the goal is active and incomplete.

## Automatic equipment comparator and XML1 cost interface (2026-09-30)

Resolved the comparator's value query: XML2 list compare1B5B90 calls
CItemInstance vtable497ACC virtual44, implementation8F320. This is the native
item cost query (literal cost4975AC), including per-instance handling. It is
not an invented combat-strength score. The comparator groups list-record kind,
then equipment slot from the item definition, and uses cost ordering for mode1,
which is the mode requested by auto equipment. Equal comparisons return false;
full list-sort tie behavior should not be inferred from that alone.

XML1 already owns its item cost policy at CInventorySystem vtable3CE064
virtual78 ->7EF50. That method reads authored cost via7EEB0 and retains native
special-item handling. This is an existing integration interface: preserve it
when connecting automatic selection, without importing XML2 cost semantics.
The automatic application orchestration and eligibility/slot interfaces remain
to be integrated; finding an existing cost query does not by itself complete
or exclude setAutoEquip.

Evidence: work/xml2-resume/auto-equipment-cost-comparator.asm and
xml1-inventory-cost-interface.asm. Inventory head/iteration was also traced
through XML2 CInventorySystem virtualF8 ->89910, returning the handle pair at
manager+7764/+7768; item instance identity is distinct from CInventoryItem
(the definition). This distinction avoids applying definition offsets to a
live item instance. No runtime changes, build or staging in this trace pass.

## XML1 equipment eligibility and ownership integration (2026-09-30)

The native characters menu resource selects BLACKBIRD_MENU. Its equipment
refresh169140 builds the list through17B5C0, rather than the shop menu. That
builder includes equipped entries with their owning character and available
inventory copies separately; eight-byte rows carry an item ID byte and owner
pointer. A raw item-definition enumeration would lose ownership/quantity.

Resolved reusable XML1 interfaces (not XML2 parity changes):
- Character801F0 returns its stats at character+4. Stats47690 returns equipped
  count;47820 reads an equipped ID by index;47860 finds by authored class.
- Inventory virtual8C ->7EFB0 reads authored class. Stats47AD0 finds the same
  item or a conflicting equipped class, returning FF when absent.
- Blackbird166790(item, character) rejects null characters, full equipment,
  and class conflicts, then uses inventory virtual94 ->7EC50 to construct
  native requirements and A34A0 to evaluate them. Requirement cleanup A4120
  occurs on either evaluated result. This is the existing eligibility policy.
- Stats47B70 inserts an item ID, keeps the native ordering and sets its dirty
  bit;47E10 is the removal call used by the menu. The menu166880 performs the
  complete transfer: release old ownership, return its inventory quantity,
  recheck eligibility, equip the chosen item, and decrement available quantity.
  Calling47B70 alone would omit inventory accounting and is not sufficient.

Evidence: work/xml2-resume/xml1-equipment-eligibility-ownership.asm and
XBOXgame/ui/menus/characters.eng. The trace establishes integration endpoints,
not an automatic-selection implementation or proof of that system's absence.
setAutoEquip remains pending. Next integration must respect these shared
ownership and eligibility operations without borrowing another hero's gear or
mutating the global menu selection to execute an automatic script command.
No runtime build, gameplay run, asset changes or staging in this pass.

## Network capacity exclusion and difficulty triage (2026-09-30)

SetMaxPlayers B00D0 writes CNetPlayManager+76D, reached through219670.
Both argument branches target that field. Session advertisement21CC20 reads
it at21CC73, subtracts the current participant count and host slot, and passes
the result through the session descriptor to publication21E830. This is the
network session capacity service, excluded by the user's online-services
scope decision. It is not implemented as a local controller or party limit.
The audit now checks both native stores and the advertisement consumer bytes,
in addition to the command address and existing network manager RTTI guard.

Difficulty commands remain pending. SetPrefGameType AEAB0 and
SetPrefDifficulty AEAE0 write the211A20 singleton through20FCA0/20FCD0;
CMenuPlayerGameOptions includes their preference-dialog path. That shared
frontend ownership alone is insufficient to classify them as online-only.
SetGameType AFDC0 also reaches the gameplay difficulty setter for type2, so
network calls alone do not justify excluding its entire operation. No XML1
command or literal containing difficulty was found; that search alone is not
a complete presence verdict on native difficulty systems.

Evidence: work/xml2-resume/network-session-player-limit.asm,
difficulty-preference-dispatch.asm and inventory-network-capacity.log.
Regenerated command/event inventories successfully against the original XBEs:
38 registered additions,30 existing-facility exclusions,28 console/online
exclusions and29 pending script names. No runtime build or player staging.

## Online search preferences resolved (2026-09-30)

Resolved the previous SetPrefGameType/SetPrefDifficulty ambiguity by following
consumers. Their setters20FCA0/20FCD0 store singleton211A20 fields3880/3884.
The game-search worker1C54E0 calls their getters20FCC0/20FCF0 at1C5539/1C554A,
converts the Any choices to search sentinels, then sends both values to network
search builder21F300 at1C55CB. That builder constructs search attributes and
starts the search operation. Menu preference display paths are not evidence
that these fields set the current campaign's gameplay difficulty.

Both preference commands are now excluded online services, with audit guards
for their stores, getter call sites, search dispatch and descriptor addresses.
The actual setDifficultyLevel command stays pending: its CGame virtual26C
setter785C0 writes game+60C, with getter785B0. unlockHardDifficulty AE310 and
isHardDifficultyUnlocked AE2E0 instead reach singleton9EF70 virtualAC/B0;
those local gameplay unlocks are not excluded by this search-preference result.

Evidence: work/xml2-resume/online-preference-search-consumers.asm and
inventory-search-preferences.log. The inventory regeneration passed against
both original images:38 registered additions,30 existing-facility exclusions,
30 console/online exclusions and27 pending script names. No executable or
assets changed, and no gameplay validation or staging was performed.

## Existing XML1 relocation facility (2026-09-30)

XML1 already registers copyOriginAndAngles at9B8A0. It resolves source and
destination through native entity handles, checks physical-entity types, and
uses native teleport handling before applying the destination's position and
orientation through physical virtual150. The actor path includes native
held-object/action cleanup and physics update; it is not merely direct writes
to position fields. This establishes an existing relocation system.

moveHeroesToEnt is excluded under the user's existing-system rule, using
copyOriginAndAngles as the presence evidence. This does not register a spelling
alias or claim that the XML2 party helper is callable. XML1 relocation wins;
no XML2 formation, signature or teleport-policy parity work is introduced.
The audit verifies both command descriptor addresses. Evidence:
work/xml2-resume/xml1-relocation-presence.asm and inventory-relocation.log.

Regenerated inventories pass:38 registered additions,31 existing-facility
exclusions,30 console/online exclusions and26 pending script names. No runtime
build, executable staging, gameplay test or asset modifications in this pass.

## Recall and zone-state command consumers (2026-09-30)

Traced the remaining recall cluster before extending extraction state:
- setRecallActive AD9D0 compares its string argument with TRUE and calls CGame
  virtual22C ->78470, which controls bit2 at game+616. This is an enable flag,
  not extraction-point unlock state. Its gameplay consumer remains to trace.
- recallZone B72F0 resolves the current script actor, then calls CGame virtual158
  ->7C9E0. That routine uses current act, extraction metadata, stored return
  zone at game+5B4 and return position at+5D4. It dispatches the real frontend
  command loadextraction %s recall after setting/clearing the return identity.
- isBlinkPortalActive ADE80 is not a standalone boolean. It consults current
  act extraction metadata and the stored return zone. Its mismatched-prefix
  branch clears that return zone through virtual218 before returning false.
  A constant or extraction-unlocked alias would be incorrect.
- getZoneReset B0400 returns true for an empty current-zone name or the inverse
  of CMap virtual54 ->92680. That method normalizes/copies the zone name and
  calls74520 against map+3B0; lookup returns an index or -1 from stored zone
  records. XML1's existing zone-state lookup still needs to be located before
  classifying this query; do not add a competing zone cache.
- restorelastzone B0360 checks frontend virtual214, then dispatches the native
  restorelastzone %s command and invokes another frontend manager virtual80.
  It is not established as a simple loadZone alias by this trace.

Evidence: work/xml2-resume/recall-zone-script-consumers.asm. These findings
separate return travel, zone persistence and extraction unlocks. Existing
extraction registry/save data must not be repurposed as a generic recall flag.
All five commands remain pending; inventory totals are unchanged. No runtime
changes, builds, gameplay launches or player staging in this trace pass.

## Existing XML1 retained-zone query (2026-09-30)

Located the actual native zone-state lookup. XML1 CMap loader81DBF..81E4B
copies its current zone name and calls83030 with the persistence owner at
map+4AC. Lookup83030 resolves the name in the native index, returns the stored
record pointer when present, and zero otherwise. The loader branches on that
result, restoring native persisted entities at81E15 and other zone state in
that same path. The owner's records are also written by CMap save80D00 beneath
MAP: ZONES, using the existing native save stream. This is direct presence
evidence for zone-state query/persistence, not an inference from a menu label.

getZoneReset is excluded under the existing-system rule. Do not introduce a
second cache, change XML1 eviction/reset policy, or add an XML2 spelling alias.
The inventory guards the original loader call, lookup result paths and save
record write. Evidence: work/xml2-resume/xml1-zone-persistence-presence.asm and
inventory-zone-persistence.log. Regeneration passed against both original XBEs.
Current counts:38 registered additions,32 existing-facility exclusions,
30 console/online exclusions,25 pending script names. Recall/return-portal
commands remain pending. No runtime changes, build, staging or gameplay run.

## Extraction travel metadata foundation (2026-09-30)

Native zoneinfo capture now owns each extraction point's authored name, act
and towncenter flag. Town selection preserves declaration order and original
path spelling. XML2 76C10 chooses the first matching act/towncenter without an
unlock check; 768C0 reads the metadata and defaults an absent act to 1.
The adapter calls existing XML1 CValues B8550/B7E60 to resolve act values,
then truncates to the native unsigned-byte field. No competing numeric parser
or XML2 named-value policy was introduced. Metadata is not serialized; the
existing extraction unlock save format remains unchanged.

Validation: extraction registry executable passed ownership, first-town/act
selection, output capacity, transactional duplicate rejection and existing
save framing checks. Rebuilt xml1-boot-probe --powerup-definition-test passed
native attribute lookup, numeric act conversion, reparse replacement while
retaining unlocks, owned names after parser teardown, campaign marker roundtrip,
legacy reset and stack/FPU checks. The pre-entry fixture initially crashed in
CValues singleton atexit registration because the retail CRT heap was not
initialized. The fixture now saves/sets/restores the singleton initialized flag
for this numeric-only test; production still calls the unmodified singleton.
This does not validate symbolic act values or complete game startup.

Evidence: work/xml2-resume/extraction-travel-build.log,
extraction-travel-test.log and extraction-travel-native-test.log.
Recall destination dispatch, return-position lifecycle and portal script
commands remain pending. Counts remain 38 registered, 32 existing-system
exclusions, 30 online exclusions and 25 pending. No gameplay launched, player
executable staged, commit, push or release in this pass.

## Existing XML1 exit dialogs and Danger Room closing (2026-09-30)

mainMenuExitDialog is excluded as an existing XML1 system. XML1 registers
mainmenuexit to 18D560 at18E38D. With no immediate-exit argument, this native
handler builds the confirmation choices, attaches mainMenuExit() at18D646,
and displays the popup at18D664. This establishes the actual confirmation
facility, not merely an exit-related string. Keep XML1 conditions and behavior.
Evidence: work/xml2-resume/xml1-main-menu-exit-presence.asm.

closeDangerRoom is also excluded. XML1 CMenuDangerRoom vtable3DEB9C virtual2C
is170C20. Its exit path includes native Danger Room cleanup, dispatches
endsidemission for the side-mission branch, and passes the menu to frontend
virtual4C at170DD3. That slot resolves184FD0 ->184B40 ->184890; the latter
runs lifecycle methods, clears active menu pointer+0C08 and returns to the
previous/pending menu. This is a real native close path, not an inferred
capability of a generic popup. XML2-only online branches are not imported.
Evidence: work/xml2-resume/xml1-danger-close-presence.asm.

The inventory now guards both original command/dispatch boundaries and their
native consumers. Regeneration against both original XBEs passed:
work/xml2-resume/inventory-menu-presence.log. Counts:38 registered additions,
34 existing-facility exclusions,30 console/online exclusions,23 pending names.
No runtime replacement or spelling aliases were added. No gameplay launch,
player staging, commit, push or release in this pass.

## Network host setup excluded; save-warning presence remains unresolved (2026-09-30)

setupHost AEB10 dispatches setuphost. Registration202B69/202B6E binds that
command to1FFDB0, which calls network preference/session initialization210070
and212840. The latter calls session advertisement21CC20, then changes the
CNetPlayManager host state and network identity. This is network hosting,
not local controller/player setup. It is excluded under the user's online
services decision. Original registration/call bytes are now inventory guards.
Evidence: work/xml2-resume/network-host-command.asm. Inventory regeneration
passed in inventory-host-setup.log:38 registered additions,34 existing-system
exclusions,31 online exclusions,22 pending names.

saveloadNoSpaceWarning remains pending. XML1 has a native error-dialog builder
A56F0 and device error pathA5900, including required-save-size calculation.
However, memory-card message dispatch11EE40 maps the relevant candidate error
codes1/4/31 to its default lookup with text ID0. This is insufficient evidence
that the Xbox binary contains the specific working insufficient-space warning.
Do not mark it covered solely because a generic storage popup exists.
Evidence: work/xml2-resume/xml1-save-warning-investigation.asm. The message
mapping was read as jump-table data, not treated as executable instructions.

No runtime changes, gameplay launch, player staging, commit, push or release.

## Existing XML1 boss-light entity selector (2026-09-30)

setBossPartyLightEntity maps to existing XML1 setDefaultTarget9DAD0 and is
excluded under the existing-function rule. The native command resolves the
entity through9AE60/6BF80, checks physical-entity RTTI, and passes its handle
at+1C to2F280 (or clears it for an invalid target). Setter2F280 writes4858AC.
XML1's boss_partylight branch of73FA0 passes that same handle storage at74280
to the native light setter7D290. The latter resolves it through6BF80 before
reading entity geometry. This establishes the entity-selection consumer;
classification is not based only on existing radius/color controls.

The script inventory's existing-counterpart map checks the actual XML1
setDefaultTarget descriptor/entry and original XML2 B6250 descriptor/entry.
No spelling alias, extra light owner, new target state or runtime patch was
added. Evidence: work/xml2-resume/xml1-boss-light-target-presence.asm.
Regeneration passed: work/xml2-resume/inventory-boss-light.log.
No gameplay launch, player staging, commit, push or release.

## Existing first-mission startup; saved-stat load consumer (2026-09-30)

startFirstMission is excluded as an existing XML1 facility. Command registration
18E217 binds18D0B0, which sets the starting party context, invokes campaign
reset18CF90, then dispatches beginmission alison at18D118/18D11F (or its demo
branch). Preserve that existing XML1 initialization and first-mission policy;
XML2's chosen roster and difficulty-dependent startup are not imported.
Inventory guards the registration, reset call and mission dispatch against
the original XBE. Evidence: work/xml2-resume/xml1-first-mission-presence.asm;
regeneration passed in inventory-first-mission.log. Counts:38 registered,
36 existing-system exclusions,31 online exclusions,20 pending script names.

useSavedStats remains pending, but its consumer is now located. XML2 AE0F0
sets CSaveLoad mode5. Completion BEC30 tests that mode and forwards flag1
through CGame virtual20C to7CB30. That loader reads inventory and character
records first; flag1 then clears selected inventory categories, initializes
character state and queues a frontend command, returning before story/map
state decoding. A full-campaign load is not sufficient evidence of this
partial import. No change to the separate NewGame+ work was made.
Evidence: work/xml2-resume/saved-stats-partial-load.asm. Need locate an existing
XML1 partial-load facility or integrate the missing one through real save
selection/loader consumers; do not invent a success stub or alias full load.

No runtime changes, gameplay launch, player staging, commit, push or release.

## XML1 save completion boundaries for missing partial import (2026-09-30)

The normal saveloadCompleteLoad entry997D0 calls CSaveLoad virtual48=A5420.
A5420 passes its owned stream at+E0 to CGame virtual198=70570, then frees that
stream through123550 and clears+E0 before native cleanup. Any partial-import
adapter must respect this ownership and completion path; the caller does not
retain the buffer after completion.

70570 is a full campaign load. It restores game records+4F8/+608 and mission
state before character-manager virtual9C at70664 and inventory virtual4 at70674,
then loads remaining systems and the end marker. There is no mode parameter
or early-return branch corresponding to XML2 7CB30 flag1. Neighbor706C0 calls
character snapshots/inventory state and copies the existing in-memory game
record; it has no disk-save stream parameter. That neighboring method alone
is not proof of a saved-character import facility. Existing expanded character
save framing/identity/vitality code must remain in the real native character
reader; do not reimplement it as a second host decoder.

Evidence: work/xml2-resume/xml1-save-completion-boundaries.asm. This narrows the
integration work to a partial reader plus native save-selection/completion
routing and owned-buffer cleanup, while preserving current story/map data.
useSavedStats remains pending. No implementation or completeness claim was
made from this trace. Inventory remains20 pending script names. No runtime
changes, build, gameplay launch, player staging, commit, push or release.

## Bounded saved-stat prefix reader implemented (2026-09-30)

Added src/raven_saved_stats_stream.h and its CMake test target. The helper
accepts a decoded native save payload, validates the initial save marker and
all three Danger Room markers at their traced fixed positions, and returns
the character-data offset1478 without mutating source bytes or campaign state.
It rejects short/oversized buffers and malformed markers without modifying the
caller's result. It does not scan arbitrary character bytes for magic strings
and does not create a second character decoder.

Layout evidence: 70570 consumes marker52, playtime4, game records136+136,
mission record784. C0790 consumes course marker52 plus100*2 bytes, grade
marker52 plus8 bytes, credit marker52 plus2 bytes. Character data follows.
Trace: work/xml2-resume/xml1-pre-character-save-layout.asm. The original
character reader56F10 and current expanded-layout hooks must remain the
consumers after this boundary; the prefix locator alone is not a partial load.

Built raven-saved-stats-stream-test successfully. Tests covered every truncated
prefix length, bad markers, null/oversized inputs, rejection cursor preservation
and a read-only check against the existing staged retail save.dat. Its24-byte
disk envelope was skipped only by the optional test driver; the reusable helper
expects the native decoded payload and does not own file/decryption handling.
Evidence: work/xml2-resume/saved-stats-stream-build.log and
saved-stats-stream-test.log. Character deserialization, native save-selection,
partial-load completion routing and gameplay were not validated by this test.
useSavedStats remains pending; inventory unchanged at20 pending script names.
No game executable staged, user save modified, commit, push or release.

## Native partial-load adapter compiled; dispatch contract checked (2026-09-30)

Added raven_saved_stats_guest.c/.h, compiled into xml1-boot-probe. The adapter
validates a decoded rewound stream through the prefix reader, then calls the
actual XML1 CCharacters singleton/virtual9C and inventory singleton/virtual4.
The native character reader advances the cursor to inventory; there is no
fixed-size character record assumption or duplicate save decoder. The adapter
stops before subsequent mission/map/Python/extraction loaders, retains no
stream pointer and leaves buffer release to the owning save completion path.
It is not registered as useSavedStats and has no player-facing call path yet.

Added a process-local pre-entry contract fixture. The native singleton getters
and virtual dispatch execute against temporary fixture objects; the terminal
character/inventory loaders are explicitly substituted. The checks passed for
call order, a variable character-section cursor advance, invalid-prefix and
non-rewound-stream rejection, stack/FPU/register preservation, unchanged skipped
and trailing source bytes, and caller ownership of the stream. Temporary
singleton pointers/flags and the borrowed test vtables are restored. This does
not prove real character deserialization or frontend save-selection behavior.
A pointer-type warning found in the first build was fixed with the proper
const-void-pointer cast before this successful build/test run.

Evidence: work/xml2-resume/saved-stats-adapter-build.log and
saved-stats-adapter-test.log (--powerup-definition-test, exit0). The wider
existing programmatic fixture suite also exited0. useSavedStats still needs
native selection/completion routing, real reader integration validation and
post-import initialization. It remains pending;20 script names remain pending.
No gameplay, player executable staging, user-save writes, commit or release.


### Saved-stat import: native picker and ownership routing traced (2026-09-30)

Revalidated the current worktree and TODO #3 scope before continuing. No
implementation count changed, no script registered, and no staged EXE replaced.
The preceding percentage reply was status only, not implementation progress.

XML1 CSaveLoad mode3 is the existing load-file route. Table A54EC maps mode3
through A54D9 to state14; tick table A5FCC sends state14 to A6470, which invokes
A64B0 with false (load selection, rather than the mode4 save selection).
Native A6CE0 takes the non-mode4 branch at A6F97: device virtual64 checks the
selected file, allocation A6FB7 reserves2FC78 and initializes the native cursor,
and device virtual68 at A7015 reads the decoded payload. On read failure it
frees the allocation at A7023 and clears +E0. Success enters state15, whose
A69D0 popup continuation is the literal saveloadCompleteLoad() at3D2F04.
A5420 normally calls the full game reader then frees +E0 and clears it before
calling cleanup virtual38. The partial reader must replace only the import
completion, retaining native file enumeration, decode and ownership behavior.

Cleanup A5380 does NOT free +E0: cancellation after a successful read therefore
requires explicit ownership investigation/handling in the import route; it is
not safe to assume cleanup disposes the buffer. Its flag2 continuation literal
3D2DF8 is newgame 1, and that existing command calls reset18CF90. Do not use
that continuation blindly after importing stats. XML2's partial-load success
literal4968A8 is runscript startFirstMission(). The first-mission facility is
already excluded as present, but the import integration still must connect to
it without erasing imported characters. This is interface/ownership work for
the missing useSavedStats, not a new NewGame+ implementation or parity audit.

Evidence: work/xml2-resume/xml1-save-selection-lifecycle.asm; native mode and
tick tables were read as little-endian pointers, not disassembled as code.
These are static native traces, not an executed picker or save-load test.
Next: finish selection/cancel routing and the post-import mission transition,
then validate real native character/inventory loading and cancellation contracts.


### Insufficient-storage warning present; import error exit identified (2026-09-30)

Resolved the earlier inconclusive no-space investigation using the actual
capacity consumer, rather than guessed error numbers. XML1 A7DE0 checks device
capacity; A7EDD enters the insufficient-capacity path when BL is zero. A7F67
passes error3 to MemoryCard virtual70 (11EE10). The byte table at11F13C maps
3 to index1, whose pointer at11F0CC is11EE74, returning string ID3300 (0xCE4).
XBOXgame/data/strings.eng contains the Xbox insufficient-free-blocks message
for3300. A7F6E passes that message and mode1 to A56F0; A5889 supplies it to
popup virtual0C and A58C7 invokes popup virtual50. Option-saving separately
uses code51 -> string3332. No behavior or signature comparison is required.

saveloadNoSpaceWarning is now already-present/skipped, with native byte guards
in scripts/audit-xml2-integration.py. No replacement or spelling alias added.
Inventory regeneration exited0: work/xml2-resume/inventory-no-space.log.
Current totals:38 registered additions,37 existing-facility exclusions,
31 console/online exclusions,19 pending names. Evidence trace:
work/xml2-resume/xml1-no-space-presence.asm. Static evidence only; no UI run.

Save import continuation tracing also confirmed that XML1 reset18CF90 resets
inventory and character managers, so imported stats must not pass through that
reset afterward. A further error exit matters: A58AC clears operation mode
inside A56F0 without invoking cleanup A5380. A pending import request therefore
needs to handle direct error termination as well as explicit abort and operation
replacement; a cleanup-only hook would leave stale request state. No import
registration or completion claim has been made. Native first-mission startup
remains the existing XML1 facility; only the missing import connection is work.


### Saved-stat request lifetime implemented and fixture checked (2026-09-30)

Added import-specific ownership in raven_saved_stats_guest.c. Arming requires
native load mode3 with an empty +E0 buffer, no other armed request, and a valid
owner address. Detachment clears both request ownership and +E0 before returning
the abandoned buffer. Unrelated owners are untouched; repeated detachment
cannot release twice. Cancellation pairs the returned native allocation with
123550 and preserves caller registers/stack. No script registration yet.

New guard-saved-stats.py connects cancellation at operation replacement A5230,
explicit cleanup A5380, and terminating-error block A589B (before A58AC clears
mode without cleanup). The generator runs this guard. It validates original
instructions, is idempotent, and leaves all stock operations unchanged when no
import is armed. The eventual useSavedStats adapter must arm AFTER native
selection starts, since starting a new operation deliberately cancels old work.

The fixture now checks wrong mode, preexisting buffer rejection, concurrent
request rejection, wrong-owner isolation, exactly-once buffer transfer, repeated
empty cancellation and invalid owners. It uses guest owner fields and its own
fixture allocation; native123550 disposal is NOT exercised. Existing native
singleton/virtual-dispatch, cursor and prefix checks also pass; terminal data
readers remain substituted. No frontend or gameplay acceptance claimed.

Both guard runs succeeded; optimized xml1-boot-probe build and
--powerup-definition-test exited0. Logs:
work/xml2-resume/saved-stats-ownership-build.log and
work/xml2-resume/saved-stats-ownership-test.log.
Still pending: native disposal validation, actual character/inventory decode,
script entry and successful import-to-first-mission continuation. Counts remain
38 registered additions and19 pending. Staged player executable unchanged.


### Native import-buffer disposal and replacement exercised (2026-09-30)

Expanded the saved-stat fixture to execute native123550 through singleton
11EBB0, category lookup11E1C0, native tree1186A0 and allocator virtualFC.
The fixture installs/restores a private manager table and category15 tree;
terminal category/heap providers and allocator are substituted. The allocator
checks that both import ownership and native +E0 are already detached, reenters
cancellation, and releases its private buffer. Exactly one release and preserved
caller registers/stack/FPU were verified. This verifies native release dispatch
and adapter ABI, not initialization or behavior of the production allocator.

A second private buffer executes native operation setter A5230 with an armed
import. The generated cancellation hook releases it before the setter starts
mode4, resets its native substate and selected-file fields, and returns normally.
With no request armed, the same setter leaves an unrelated +E0 value untouched.
This is an executed integration boundary, not only a direct helper test.
The explicit abort and error-popup hooks remain statically guarded; those
frontend routes were not executed in this fixture.

Optimized build and --powerup-definition-test exited0. Evidence:
work/xml2-resume/saved-stats-disposal-build.log and
work/xml2-resume/saved-stats-disposal-test.log. Native character/inventory
loaders still use substituted fixture terminals; real deserialization and the
success continuation remain pending. No registration/count/staging change.


### Partial-load adapter executes the real inventory decoder (2026-09-30)

Replaced the inventory terminal in an additional fixture pass with native
CInventory virtual4,7E6E0 (vtable3CE064+4). The adapter still obtains the manager
through7F850 and receives the cursor advanced by a variable-length character
stand-in. Native7E6E0 consumes649 bytes: two320-byte quantity/flag arrays, a
snapshot flag, current currency and snapshot currency. Checked all160 item
quantities/flags, preserved unrelated item flag bits, both snapshot arrays,
both currency fields, exact final cursor, stack and FPU. The fixture saves and
restores the complete static inventory owner; no player assets/saves are touched.

Build and --powerup-definition-test exited0:
work/xml2-resume/saved-stats-inventory-build.log and
work/xml2-resume/saved-stats-inventory-test.log. The character terminal and
allocator remain substituted; no whole-save or gameplay claim.

Existing character load coverage was located rather than restarted:
tests/character_talent_map_native_test.c and character_talent_native_test.c
already execute snapshot reader49280, while character_save_header_test.c
covers versioned header admission. These do not prove the new partial-load
adapter's full character-manager56F10 path. That path integrates existing
character_save.h header/identity/selection/vitality handling and requires live
roster definitions. Continue from that boundary without replacing its decoder.
No inventory-count, script-registration or staged-executable change.


### Import completion/startup connection compiled, not yet activated (2026-09-30)

Native console vtable3DA650 virtual14 points to11C680. That routine directly
calls the registered command at11C6FB and returns after it completes; it is
not an asynchronous retained-buffer queue. Added an import-only completion
branch at A5420: admit the decoded prefix before reset, detach its buffer,
clear the request's automatic-newgame flag, run native cleanup, then execute
the existing newgame1 literal through the native console dispatcher. A scoped
startup buffer is consumed at18D102, immediately after18CF90 resets the story
and before native first-mission startup. If no command consumes it, it is
released before completion returns, preventing a latent import on later runs.

The post-reset hook calls the existing partial reader and clears XML1's existing
snapshot-valid byte at expanded manager offset DAC4. Native beginmission alison
at18DAED restores its baseline snapshot; invalidating that baseline is necessary
to retain imported live stats. The existing NewGame+ guard independently uses
the same native flag; no NewGame+ implementation or acceptance scope changed.
The saved-stat guard preserves existing newgame diagnostics and adds only
import-specific hooks. Ordinary load completion still follows native A5420.

Optimized build succeeded and existing --powerup-definition-test exited0:
work/xml2-resume/saved-stats-startup-build.log and
work/xml2-resume/saved-stats-startup-regression.log. This checks compilation and
previous contracts, NOT execution of the new completion/startup branch.
useSavedStats remains unregistered until that path is validated; character
manager integration still lacks a full native fixture. No count, staging,
commit or release change. Next: exercise completion admission/cleanup/startup
ordering, including rejected input and unconsumed synchronous command, then
connect the script entry without bypassing the native file picker.


### Native completion and cleanup contract passes (2026-09-30)

The saved-stat fixture now enters generated/native A5420 with an armed request,
executes the completion hook and native A5380 cleanup, and exercises three
cases: invalid decoded prefix, valid prefix with an unconsumed synchronous
startup command, and successful post-reset consumption. It checks one popup
cleanup before any startup, suppression of native automatic-newgame flag2,
exactly one release, cleared ownership and native operation flags, no latent
startup buffer, stack/FPU preservation, and snapshot-valid flag invalidation
only after a successful import. Repeated completion is not treated as an import.

Popup and console singleton getters are real; their terminal callbacks are
fixture substitutes. Successful console callback invokes the post-reset helper,
not the actual newgame command/reset/mission. Character and allocator terminals
remain substituted; native inventory decoding has its separate passing case.
Thus this proves completion wiring and ownership contracts, not a played
mission or full native character deserialization. Expected rejected-prefix and
unconsumed-startup diagnostics appear in this test; they are intentional cases.

Optimized build and --powerup-definition-test exited0:
work/xml2-resume/saved-stats-completion-build.log and
work/xml2-resume/saved-stats-completion-test.log. No player files changed.
Next: finish native character-manager adapter coverage and script-entry/picker
connection. useSavedStats remains pending and unregistered; totals unchanged.


### useSavedStats registered with native picker/import contracts (2026-09-30)

Added the null-result/no-argument script entry (XML2 descriptor49AEC8, AE0F0).
It obtains native CSaveLoad A81F0, rejects active operations or retained buffers,
starts XML1 load mode3 through virtual10/A5230, and arms import ownership only
after the setter returns. The script entry preserves cdecl argument ownership.
Native file enumeration, selected-file read and error UI remain authoritative.
The pending import routes A5420 through the already implemented cleanup/reset/
partial-read/first-mission connection; other native saves/loads stay unchanged.

Entry tests execute the singleton and native setter with private owner state,
checking busy-operation and retained-buffer rejection, duplicate request
rejection, selection-mode fields, caller registers and null interpreter result.
The new manager fixture executes56F10, header admission, all48 native49280
snapshot readers, and7E6E0 inventory reader. It uses a v1 header with an empty
definition bitmap and nonzero snapshot-state sentinels. Initial failure was a
fixture lifecycle omission (unconstructed vitality owners); corrected by using
native48EF0 constructors and48F90 destructors for each snapshot, including
owned talent-map allocation and retirement. No production decoder changed.

Validation is intentionally bounded: preparation callbacks and allocator/UI
terminals are substituted; the manager case has no populated hero definitions.
Existing character/talent record tests remain complementary evidence. A real
populated campaign import, live picker operation and mission transition were
not executed. These limitations do not become claims of gameplay validation;
user gameplay testing remains this goal's acceptance policy.

Optimized build and --powerup-definition-test succeeded after registration:
work/xml2-resume/saved-stats-registered-build.log and
work/xml2-resume/saved-stats-registered-test.log. Inventory regenerated in
work/xml2-resume/inventory-saved-stats.log. Totals now39 registered additions,
37 existing-facility exclusions,31 console/online exclusions,18 pending names.
Player staging remains unchanged until the entire active goal is ready.


### Remaining difficulty commands: persistent owner identified (2026-09-30)

Continued after registered useSavedStats; no completed handler restarted.
XML2 unlockHardDifficulty AE310 calls progress-manager virtualAC; constructor
9E150 installs vtable499024, whose AC/B0 entries are9E7B0/9E7D0. The setter
writes bit2 (mask4) at owner+229, and the getter returns that bit. Owner is the
singleton5ACC58 from9EF70. This is distinct from current CGame difficulty+60C.

Persistence is native: progress virtual8=9E3B0 writes228 bytes from owner+4,
including+229; virtual10=9E250 reports228. VirtualC=9EE70 loads that block in
normal modes, while its mode2 branch reads into a temporary and leaves live
progress unchanged. The flag begins clear through9E030's owner+28 subobject
initialization (subobject+201 maskE0). Evidence:
work/xml2-resume/xml2-difficulty-persistence.asm.

XML1's corresponding existing progress save interface8C030/8C050 transfers194
bytes starting+4, and its vtable3CF9C4 ends at virtual98. Therefore neither an
XML2 vtable index nor offset229 can be copied into XML1. A missing difficulty
unlock needs explicit compatible persistence connected to actual consumers;
no speculative reuse of XML1 progress bits or session-only boolean added.

Historical useDefaultStats note remains authoritative: local785D0 is gated by
difficulty2 and raises active heroes toward45, followed by first-mission setup.
A generic reset/newgame alias alone would not establish this missing path.
No additional name was reclassified merely because XML1 can start a new game.
Counts remain39 registered/18 pending; no staged executable change.
Next: finish current-difficulty consumers and choose compatible progress-state
ownership before implementing the related pending commands together.


### Difficulty consumers narrowed beyond storage (2026-09-30)

Scanned the archived generated XML2 code for CGame singleton7C550 followed by
virtual268 calls. Found33 candidate call sites across25 enclosing functions;
this is a bounded source scan, not a complete binary xref proof. Candidate
contexts and deduplicated function list are in work/xml2-resume/
difficulty-consumers.txt and difficulty-consumer-functions.txt.

Verified original-image consumers at actual function boundaries. Getter785B0
and setter785C0 access CGame+60C. 5A210 treats1 as the ordinary case and for
values above1 can derive a level from an authored property plus50, capped99,
then adjusts XP/state. This must not be copied literally: the user's level45
cap remains an explicit invariant. C7FC0 and C8390 also consume difficulty
inside character-stat calculations; C7FC0 branches above1 for actor categories
30/31 and reads authored stat overrides through the character stats owner.
2BAD0 switches a selection range based on difficulty (strings/purpose still
need classification). These show why a setter storing an unused integer would
not implement the requested missing behavior.

Native evidence: work/xml2-resume/xml2-difficulty-gameplay.asm. Online and menu
candidates from the source scan remain to be filtered; existing XML1 stat
functions themselves remain authoritative and are not parity targets. Only
connections required by the absent difficulty functionality are in scope.
No function marked complete from this trace;39 registered/18 pending, player
staging unchanged. Next: identify data-backed gameplay consumers and separate
existing XML1 facilities from genuinely new difficulty branches before edits.


### Difficulty selection connects the pending startup commands (2026-09-30)

Original B0530 setDifficultyLevel does more than call CGame's field setter.
After updating difficulty, it checks hard-unlock progress. If unlocked, B059C
builds a native popup (manager1FA760), using localized text IDs86A/86B/86C.
Its two actions are49C9B0 useDefaultStats() and49C9A0 useSavedStats(); the
back/cancel command49C988 is startGameDiffDialog(). If not unlocked, the local
branch B06AA dispatches startFirstMission and updates local party selection.
Its network branch is excluded. These names must be integrated as one startup
flow, rather than declaring a bare state setter complete. Trace:
work/xml2-resume/xml2-difficulty-selection.asm (starts at verified B059C label).

Also resolved selected data inputs: 5A210 property4945E0 is level; C7FC0's
base constants541330/334/338 are25,5,3; easy difficulty multiplier48F930 is0.5.
2BAD0 consumes random_no_invuln/random resistance-selection strings. The latter
XML1 counterpart has NOT been established by a string search (no identical
random_no_invuln literal found); absence of a string is not absence of a system.

Scope clarification for the preceding trace: XML1's existing health/energy
calculators AFA90/AFBD0 are already exercised by the vitality fixture and remain
authoritative. Do not port XML2's differing formulas or level99 branches under
the pretext of a missing difficulty selector. Trace/integrate only genuinely
missing state, frontend/script connections and consumers; skip existing systems.
No new implementation count, player asset changes, or gameplay claim this pass.


### Missing hard-unlock lifecycle foundation (2026-10-01)

Traced original progress-owner snapshot, restore and merge operations, rather
than assuming that the campaign extraction section is sufficient persistence.
XML2 9ECE0 group1 copies owner+28 into snapshot+250 using9ED20; that helper
explicitly copies hard-unlock mask4 at subobject+201. 9EE20 group1 restores
exactly. 9EA50/9EA80 group1 merges earned progress: hard-unlock is ORed, not
replaced. Group2 handles preferences and must leave this unlock alone.
XML1 integration points are8C820(snapshot),8C930(restore),8C5F0(merge), with
live progress+8 and snapshot+19C. Its existing flags/formulas remain untouched.
Native evidence: work/xml2-resume/xml2-hard-unlock-options.asm and
work/xml2-resume/xml1-progress-options-lifecycle.asm.

The original XML2 loader9EE70 also has a mode2 read/discard path that consumes
the progress bytes into a temporary object without changing live progress.
Other modes read228 bytes into owner+4, apply it, and preserve the nickname.
XML1's8C030/8C050 serialize194 bytes. Neither the larger XML2 record nor an
extra bit in XML1's existing record is a compatible drop-in. See
work/xml2-resume/xml2-progress-load-modes.asm. Persistence must account for
both profile/options and campaign entry points, plus snapshot lifecycle;
the extraction-only campaign extension does not establish that coverage.

Added raven_progress_extension.h and a focused C test for the absent unlock's
snapshot/restore/merge contracts, including boolean normalization, both state
values, all low option-group combinations, exact restore versus monotonic
merge, and initialization. No native fields, script registrations, disk format
or player files changed. Guest hooks and compatible disk framing remain to be
implemented; this foundation is NOT counted as a completed script function.
Also verified startGameDiffDialog(AE0D0) dispatches console startgamedialog
(literal49C7E0); it is not a direct Python startFirstMission alias.

Validation: Release raven-progress-extension-test built and exited0. Evidence:
work/xml2-resume/progress-extension-build.log and progress-extension-test.log.
This proves the additional state contracts only, not native guest execution,
persistence, UI or gameplay. Inventory remains39 implemented/18 pending.


### Native progress lifecycle integration (2026-10-01)

Connected the additional progress object to XML1 singleton4A0210 through
constructor8BE30 and native snapshot8C820, restore8C930, merge8C5F0 entries.
Guard installation validates original generated entry instructions and writes
only after every boundary validates. Other objects cannot mutate this state.
Native options, campaign completion and costume bits are left untouched.

Added a programmatic guest fixture calling the actual three native methods
with option groups0..3. It checks the added state, native campaign-complete
flag, stack ABI and owner isolation, then restores original singleton bytes
and extension state. Only virtual40 apply-options is substituted (balanced
native no-argument getter801F0) to avoid changing audio/display settings.
Constructor entry is guarded but full constructor execution is not covered.

Additional persistence evidence: CProgress virtual14=801F0 returns owner+4,
virtual10=8BF50 returns194. Options writers A5BD0/A6ECC hand that pointer and
size directly to MemoryCard virtual50. Options readers A8040/A80C0/A8150 use
virtual54 with a size pointer, snapshot before read and merge or restore after.
This bypasses campaign serializer8C030/8C050. Both I/O paths must be extended
compatibly; adding data solely to the campaign tail cannot implement profile
persistence. Evidence: work/xml2-resume/xml1-progress-options-io.asm and
xml1-progress-campaign-framing.asm. Script registration remains withheld until
save framing is connected; no additional completed-function claim or staging.

Validation: Release xml1-boot-probe rebuilt successfully;
--powerup-definition-test exited0, including PROGRESS EXTENSION PASS for
native snapshot/restore/merge and ABI. Logs: work/xml2-resume/
progress-guest-build.log and progress-guest-test.log. Guard reapplication
passed. No disk-persistence or gameplay claim;39 registered/18 pending.


### Compatible additional-progress campaign section (2026-10-01)

Added explicit16-byte XML1PRG\0/version1/flags framing in
raven_progress_stream.h. It is omitted when the additional unlock is absent;
locked/untouched campaigns retain the original layout. The reader validates
version/reserved bytes/boolean before publishing state. Native8C030's return
boundary8C042 appends it after the unchanged194-byte progress record;8C065
consumes it before native apply-options. A legacy record without the magic
loads false without consuming bytes belonging to the following subsystem.
Snapshot/merge remains the native caller's responsibility, not the decoder's.
No XML1 existing option, completion, costume, character or inventory field is
repurposed. This remains an extension for the recompiled runtime; an original
unmodified Xbox executable is not claimed to read extended saves.

Programmatic validation: Release raven-progress-extension-test and
xml1-boot-probe --powerup-definition-test both exited0. Codec tests include
all short lengths, corrupted header/version/flag bytes, transactional failure,
omission and output boundaries. Guest fixture runs native8C030/8C050 for both
legacy and extended records, verifies exact cursor advancement, original194
bytes, following sentinel, existing completion flag and stack ABI. Native
apply-options remains substituted; full campaign disk I/O/gameplay untested.
Logs: work/xml2-resume/progress-stream-build.log,
progress-stream-codec-test.log, progress-stream-guest-test.log.

Options I/O trace now identifies MemoryCard virtual50=11FE10 and54=120090.
Writer11FE50 emits payload length4, signature20 and payload; reader120120
checks declared length against supplied capacity, actual bytes against declared
length, signature, and EOF. Thus a temporary enlarged payload buffer can carry
the adjunct while accepting the shorter legacy options payload. Do not enlarge
the native owner block or change its raw pointer to an unrelated allocation.
Evidence: work/xml2-resume/xml1-options-file-framing.asm. That options adapter
is the next persistence step; it is not implemented/validated by this pass.
Registered inventory remains39/18 pending; player staging unchanged.


### Saved-options temporary payload adapter (2026-10-01)

Connected MemoryCard options entries11FE10(write) and120090(read) only when
passed the actual XML1 progress data pointer4A0214 and native size194. Other
buffers/callers remain native, including recursive calls with our temporary
buffer. The adapter allocates a420-byte payload on the guest stack, preserving
the194-byte native record and optionally appending the16-byte unlock section.
It invokes the original file function for signing, paths, writes, checksums,
length verification, EOF and errors. No companion host file or owner padding
is used. Locked writes keep the old404-byte payload exactly.

Reads accept either404-byte legacy data or420-byte valid extended data. Only
after native success and extension validation does the adapter publish native
bytes and added state; it returns the original404-byte owner size to its caller.
Invalid extension, unexpected sizes and native read failure leave both live
state and caller size unchanged. Native callers still own snapshot/merge policy.
Writer errors pass through; temporary buffers cannot escape the synchronous call.

Release xml1-boot-probe rebuilt and --powerup-definition-test exited0. The new
fixture enters both generated native methods and checks redirection, device,
size, pointer identity/bypass, exact original-byte preservation, legacy and
extended read/write, corrupt extension, short payload, read/write failure,
transactional publication and stack ABI. The file terminal is substituted:
actual native signing/file I/O and a real on-disk options round trip remain
UNTESTED. Native options-apply also remains substituted in the lifecycle test.
Logs: work/xml2-resume/progress-options-build.log and progress-options-test.log.

No new script registrations this pass; persistence plumbing is connected but
native file-I/O integration validation and difficulty frontend consumers remain.
The player executable and assets/settings/saves have not been replaced or edited.


### Options shrink-write correction (2026-10-01)

Tracing the real file path revealed a new extension-specific failure: native
11FF71 passes OPEN_ALWAYS(4). A420-byte extended options payload later saved
as404-byte legacy data would leave16 trailing bytes;120308's EOF check would
reject it. The original fixed-size native payload did not have this problem.
Scoped CREATE_ALWAYS(2) to the exact temporary buffer while the added options
adapter is writing. All other callers retain OPEN_ALWAYS. Native19E34B maps
2 to FILE_OVERWRITE_IF(5), confirmed at19E397;4 maps to FILE_OPEN_IF(3).
The guarded11FF6A sequence reads the payload argument at esp+24C after its
first two pushes. Nested adapter context is restored after native return.

Fixture verifies adapted write disposition, native disposition for other
buffers/read paths, recursive buffer bypass, failure propagation and cleanup
alongside prior lifecycle/stream tests. Release build completed, then
--powerup-definition-test exited0. Logs: work/xml2-resume/
progress-options-truncate-build.log and progress-options-truncate-test.log.
Actual disk round trip is still unverified: the file terminal remains replaced
in the fixture. The signature-lifetime trace shows native initialization and
allocation dependencies to handle in an isolated on-disk fixture, not by
pointing tests at the user's save directory. Trace:
work/xml2-resume/xml1-options-signature-lifetime.asm.
No new registered commands, player staging changes, or gameplay claims.


### Hard-unlock script access registered (2026-10-01)

Registered isHardDifficultyUnlocked (i/no arguments) and unlockHardDifficulty
(n/no arguments), matching native descriptors49AF68/49AF38 and AE2E0/AE310.
Both access the shared additional progress state after calling XML1's actual
8C980 singleton accessor, preserving constructor lifetime. The setter marks
unlocked without changing campaign-complete/costume flags or initiating an
unsolicited disk write. The getter uses the existing interpreter integer-return
adapter; the setter returns a null interpreter result with cdecl ownership.
Campaign stream and saved-options adapters above carry the state; no custom
character cases or existing XML1 behavior were introduced.

Release build and --powerup-definition-test exited0. Added core-access checks
cover native singleton lookup, initial false, repeated unlock, true query,
existing completion-bit isolation and stack preservation. The registry fixture
checks both new descriptors and dispatch mapping. The shared integer result
adapter is reused; this pass does not claim a separate full interpreter call
through the new query, actual disk I/O, frontend selection or gameplay testing.
Logs: work/xml2-resume/hard-unlock-command-build.log and
hard-unlock-command-test.log. Inventory regenerated via
inventory-hard-unlock.log:41 registered additions,16 pending names.

The native signature allocator trace resolves1A1DDB/1A1E7B to XAPI heap
allocation/free19ED7B/19ED98 for the signature's allocation flags24830000.
An isolated real-file fixture needs that normal initialization and path setup;
no production save path was used or modified to obtain test coverage.
Difficulty selection/default-stats frontend and the other missing commands
remain open. Staged executable unchanged; no release/commit/push performed.


### Difficulty dialog consumer resolved (2026-10-01)

Verified console registration202B2D maps literal49C7E0 startgamedialog to
native200380, the target dispatched by script startGameDiffDialog(AE0D0).
200380 initializes the native popup, uses localized title866 and options
867/868/869, and constructs setDifficultyLevel(%d) (literal4B351C) for values
0,1,2. Easy/Normal are enabled; Hard's enable/lock flags derive from the new
hard-unlock query. Popup selection comes from CGame difficulty virtual268;
virtual68 shows it. This is a real difficulty chooser, not a new-game alias.
Trace: work/xml2-resume/xml2-start-game-dialog.asm, limited to that function.

Read-only decode of the PC reference strings.engb confirms IDs2150..2153
(866..869) are the difficulty prompt and Easy/Normal/Hard. Decoded evidence:
work/xml2-resume/xml2-difficulty-strings.xml. These XML2 IDs must not be passed
blindly to XML1's text table or overwrite existing user language resources.

Existing XML1 popup option185C30 copies both text and action strings, stores
option-state bitmaps at popup-page+1104/+1108, and returns20 argument bytes.
It therefore takes five option arguments, not XML2's six; action routing and
enable flags need connecting through this actual XML1 interface. Native
popup copies temporary strings, allowing guest-stack ownership. Related
existing NG+ code is a reference for the interface only and was not modified.
Trace: work/xml2-resume/xml1-popup-difficulty-interface.asm and
xml1-popup-option-flags.asm. Next implementation must keep XML1's native
popup artwork/behavior and connect the chooser to persisted difficulty and
startup actions. No new registration or staging from this trace.


### Difficulty is campaign state, not profile progress (2026-10-01)

Resolved actual owner and storage: XML2 CGame singleton7C550 returns5AA060;
constructor77740 builds records at+53C and+618 via775C0. Record initializer
77626 sets record+D0 to1 (Normal), which is live CGame+60C. Constructor77978
also binds that address as PROGRAMMER_VARS/difficulty with default1 through
native variable manager1679E0; this is separate from the hard-unlock bit.
Evidence: xml2-game-owner.asm, xml2-game-init.asm,
xml2-difficulty-variable.asm in work/xml2-resume.

Confirmed actual campaign serialization:79822 copiesDC bytes from CGame+53C,
including difficulty at offsetD0. Load7CC38 copies the sameDC bytes back.
Record copier7BA90 explicitly copiesD0 at7BB51..7BB5D. Native7BCB0 copies
live+53C to snapshot+618;7BCD0 restores it. Reset block7BA1B constructs a
fresh775C0 record and copies it to both live/snapshot. Thus selected difficulty
must follow campaign record and checkpoint/reset lifetimes, not the additional
CProgress profile/options extension. Adding it to hard-unlock saved options
would attach it to the wrong owner and reset/merge policy.
Evidence: xml2-campaign-layout.asm, xml2-difficulty-record-lifetime.asm,
xml2-difficulty-reset-block.asm. The older file named
xml2-difficulty-campaign-writer.asm actually traces gameplay consumer7D360;
its filename is NOT evidence that7D360 serializes saves.

XML1 integration-interface inspection finds more than one record copy:
6F920 copies live+4F8 to+580,6FA10 restores that copy,706E0 copies live to+608,
and7072A restores+608. Existing campaign serialization writes live+4F8 and
+608. Do not blindly map XML2's one snapshot onto one arbitrary XML1 snapshot;
connect absent difficulty through the native record-copy boundaries without
changing existing XML1 record content or checkpoint behavior. No new script
registered or player file changed in this trace.41 registered/16 pending.


### Difficulty campaign lifetime and stream connected (2026-10-01)

Added raven_campaign_state_guest.c/.h with additional difficulty state for
XML1 CGame singleton498E88 (accessor72CF0), separately tracking its live+4F8,
baseline+580 and retained+608 records. Guarded native initializer6EB00 resets
the matching extra field to1; record copier6F940 follows source/destination
identity and leaves unrelated destinations alone. A native source with no
additional state supplies the Normal default. Native record bytes/layouts
remain unchanged. This uses existing XML1 copy behavior rather than replacing
it with XML2's two-record scheme.

Campaign serializer adjunct now chains optional XML1DIF\0/version1/live/
retained (20 bytes) after the optional hard-unlock section. Only live and
retained difficulty are serialized, matching the records native70350 saves.
Baseline is untouched on load, matching native70570. Absent sections restore
Normal for the loaded records; default Normal/Normal writes no extra bytes.
The profile/options payload still carries only the unlock, not difficulty.
No script/menu difficulty setter has been exposed before its startup flow.

Release xml1-boot-probe built; --powerup-definition-test exited0. New fixture
calls actual6EB00 for all three records and actual6F940 for all nine identity
pairs, checking state and stack ABI, then restores native/extra state. Stream
checks exercise omitted/extended records, cursor/sentinel boundaries, both
loaded values and nonserialized baseline preservation. Existing progress and
options adapter tests also passed. Logs: work/xml2-resume/
campaign-difficulty-build.log and campaign-difficulty-test.log. The campaign
extra fixture calls the adjunct codec directly, not a full native campaign
save/load or disk I/O; no gameplay acceptance claim. Chooser, localized text,
selected-difficulty startup preservation and unique consumers remain pending.
Inventory unchanged41 registered/16 pending; staged game unchanged.


### Preserve chosen difficulty through added saved-stat startup (2026-10-01)

Added campaign difficulty accessors using native CGame72CF0 ownership and an
explicit, single-use startup choice. Only an armed added startup reapplies its
chosen difficulty after native campaign reset; unarmed stock new games retain
default/native behavior. Duplicate arming is rejected, completion consumes the
choice, and return/cancellation clears it so no later new game inherits it.
The useSavedStats completion path arms this state around its synchronous native
newgame command. Existing post-reset18D102 callback reapplies difficulty before
importing character/inventory data, and never reads source-campaign difficulty
from a character-only import. No existing NewGame+ behavior was changed.

Extended the campaign fixture with native singleton access, chosen-value
preservation, duplicate rejection, one-shot consumption, unarmed reset and
cancelled-startup isolation. Existing saved-stat completion/ownership fixtures
still pass. Release build and --powerup-definition-test exited0; logs:
work/xml2-resume/difficulty-startup-build.log and difficulty-startup-test.log.
Tests remain programmatic: terminal UI/allocator callbacks in the saved-stat
fixture are substituted and real gameplay/disk I/O are unverified.

Read-only decode of XML1 strings.engb confirms it has no2150..2157 difficulty/
stat-selection text entries; XML2's numeric IDs cannot be reused blindly.
Reference output: work/xml2-resume/xml1-menu-strings.xml. Native XML2 startup
B7910 ultimately selects a startup console command based on difficulty after
its own party setup; existing XML1 startup/roster behavior still wins, rather
than importing XML2's roster or first map. Trace:
work/xml2-resume/xml2-difficulty-startup.asm. Chooser/default-stat commands,
text integration and missing unique difficulty consumers remain pending.
No new registration, staging, save/setting/asset edit, commit or release.


### Difficulty chooser: native popup contract corrected (2026-10-01)

Revalidated the current worktree and latest integration notes before continuing.
The previous popup-option description calling XML1's fourth argument enabled
was incorrect. Native185C30 takes five arguments: title, accept action, alternate
action, per-option autohide, per-option hidehud. The fourth and fifth arguments
write page bitmaps+1104/+1108. Native185B50 combines the first with page+1359
bit4; native185BC0 combines the second with bit8. Native187460 confirms their
consumers:1877C5/1877CE close the popup, and18779B/1877AD hide the HUD. Neither
gates acceptance. Therefore forwarding hard_unlocked as argument4 would leave
locked Hard executable and merely stop its popup from closing. Do not do that.

Popup ctor187920 installs vtable3E0434. Relevant slots are10=185E40 (page
initializer),14=186BC0 (title),18=185C30 (choice),30=185DF0 (selected index),
50=1872E0 (show). Initializer argument is a page index0..2, not a modal boolean.
Each page occupies135C bytes. Selected index185DF0 accepts0<=index<count and
returns false without changing selection otherwise; selected byte is+1357.
Native initializer defaults page-level autohide on and hidehud off. Property
literals3E0408/3DD72C decode to autohide/hidehud, independently confirming the
flag meanings.

Accept dispatch187730..187812 copies the selected action from page+701+
index*80, formats the action, then calls console11CD90 virtual18.
Exact format literal3DE1C8 is "runscript %s" (the action is Python source, not
a naked console command). It dispatches after the optional close/HUD actions.
A lock must be enforced independently of these native popup flags. Preserve
XML1's existing popup system rather than changing the meaning of its flags.
The missing chooser implementation remains pending; no UI command registered.

Evidence: work/xml2-resume/xml1-popup-contract.asm (ctor/selection/flags/title),
xml1-popup-input-render.asm (native update/input and selection dispatch),
xml1-popup-presentation.asm (native option presentation), and refreshed
xml2-start-game-dialog.asm. Read-only traces and literal/vtable reads used the
actual staged XML1 and archived XML2 default.xbe images. No executable source,
player asset, save or setting changed; no build or gameplay claim this turn.
Counts remain41 registered additions and16 pending names. Next implement the
chooser with an explicit unlock gate and connect its startup actions before
registering it; XML1's existing popup behavior must remain unchanged.


### Difficulty chooser implementation and native row checks (2026-10-01)

Added raven_campaign_menu_guest.c/.h and connected its programmatic fixture to
--powerup-definition-test. xml1_campaign_choose_difficulty uses XML1's native
popup singleton, page1 initializer, title writer, option writer, selection and
show functions. Temporary guest-stack strings are copied by the native code;
all guest registers and the original stack are restored. Each boundary checks
its native stack contract. It reads hard-unlock and current difficulty through
the already-traced owners. Existing popup art/rendering and stock menus are
unchanged. No script registration yet: the startup actions/unique difficulty
consumers must be completed before the chooser becomes callable by scripts.

XML1's popup has no disabled-choice argument. The added Hard (Locked) row has
an empty action and autohide=false; native selection dispatch therefore has
nothing to execute and leaves the dialog open. Unlocked choices retain normal
native actions setDifficultyLevel(0..2) and autohide=true. Selection defaults
to Normal for out-of-range values or a locked saved Hard value. The future
script setter must separately enforce its eligibility; UI gating alone is
not authorization for direct script calls. Labels currently use English text;
XML2 localization IDs are absent from XML1, and user string assets were not
changed. Localization remains an explicit limitation of this pending flow.

Fixture uses a scratch popup owner (never the live singleton) and actual
native185C30 option writer,59AF0 action copier,185DF0 selection,185B50 autohide
and185BC0 hidehud queries. Both unlock states and five selected values are
checked, including content/empty alternate actions, flags, adjacent page
sentinels, action lifetime after temporary stack release and stack balance.
Full singleton initialization, title transformation, renderer/show and actual
input dispatch are not executed in the fixture; no visual/gameplay claim.

Release xml1-boot-probe built successfully; --powerup-definition-test exited0
and reported CAMPAIGN MENU PASS. Logs: work/xml2-resume/difficulty-menu-build.log
and difficulty-menu-test.log. Existing campaign and saved-stat checks also
passed. Inventory remains41 registered/16 pending; staged executable unchanged.
No commits, pushes, asset/save/settings edits or release.


### Default-stat startup: native level/rule interfaces resolved (2026-10-01)

Continued useDefaultStats trace from actual XML2 AE110 local branch. It calls
CGame virtual270=785D0, starts first mission, then selects party.785D0 only
acts for difficulty2, enumerates available definitions from index1, advances
each to45 through Characters virtualDC=5A360, and sets a statistics flag.
Resolved its last call: definition+C0 virtualB8 points to58BD0 in table494794;
it only writes bit10 of statistics+43. It is NOT a reset/clear method. Meaning
and consumers of that flag still need tracing; do not replace it with a reset.

XML1's actual native level operation already exists: Characters virtualD0=
57250. Its five arguments are rules object, definition, level delta, auto-spend
boolean, and fractional progress toward the next level. Native caller55D96..
55DBD supplies exactly that order. This differs from XML2's interface; reuse
the XML1 operation rather than copying XML2 leveling formulas. XML1 native
AF700 queries level; manager virtualC8=541E0 supplies cumulative XP.57250
calls existing AF890/AF950 to apply XP/recalculate level, B1CA0 with the rules
object for stat/point changes, and optionally AF4E0/48950 for auto allocation.
Native level45 cap stays. The native operation includes a35 transition when
starting below35; do not remove or edit that existing stock behavior.

The necessary XML1 definition accessor is Characters virtual78=56E60, not
virtual74 (56D70 returns a byte). Available-definition query is virtual7C=
56D90. Use the generated/guarded interfaces for expanded roster/pool support,
not the retail hardcoded manager offsets in the disassembly. CStatRules has
vtable3CB6CC; native AE120(-1) loads its rules object, and AE0F0 releases the
owned resource through native destructor and123550. Zero-initialized ownership
plus these native lifetime operations are required; a null rules argument
would skip real stat updates and is not an acceptable implementation.

Read-only evidence: work/xml2-resume/xml2-default-stats-startup.asm,
xml2-default-stats-final-flag.asm, startup-character-methods.txt,
xml1-level-advance-contract.asm, xml1-rule-lifetime.asm and
xml1-stat-rules-contract.asm. The XML1 levelUp script9BF50 controls an actor
flag, so its name alone is not evidence it is the level-advance interface.
This trace changed no player assets or runtime code. Startup command remains
pending until ownership, final flag, and reset ordering are connected. Current
inventory remains41 registered/16 pending; no new build required for traces.


### Default-stat native preparation helper (2026-10-01)

Resolved XML2 statistics flag10: getter58BC0 (table494794 virtualB4) is consumed
by team-menu1F1AD0 at1F1B9E. It invokes existing CAutoSpend virtual08 with the
character and flags1,1,0, then clears the flag through virtualB8=58BD0. This is
deferred stat/power auto allocation, not a separate stat-reset system. Evidence:
work/xml2-resume/xml2-default-flag-native-consumer.asm and
xml2-startup-flag-consumers.txt (candidate search, not exhaustive proof).

Added xml1_campaign_prepare_default_stats in raven_campaign_state_guest.c.
Only difficulty2 enters preparation. It obtains native Characters56E90,
constructs an owning CStatRules value and loads/releases it using AE120/AE0F0.
It enumerates native registered definitions through virtual44/7C/78, skipping
index0/unavailable definitions, and calls native virtualD0 level advancement
with native automatic stat/power allocation. No XML2 allocation algorithms or
new per-character flags are imported; XML1's existing allocator wins. The
native35 transition is respected by a second ordinary advance call where
needed, with a final45 check and finite attempts. Rules ownership is released
on normal/incomplete returns; guest registers/stack restored. No assets, roster,
stock progression formulas or level cap changed. Function remains unregistered
and unconnected to live startup while validation/reset integration is pending.

Release build and --powerup-definition-test exited0. The fixture now verifies
Easy/Normal bypass leaves character-owner identity and difficulty unchanged;
previous menu/record/import tests pass. This DOES NOT validate the helper's Hard
branch, resource loading, stat/point results or populated characters. Those
programmatic positive-path checks and startup integration remain required.
Logs: work/xml2-resume/default-stats-helper-build.log and
 default-stats-helper-test.log. No player staging, commit or release. Inventory
unchanged41 registered/16 pending. The helper is engineering progress, not a
claim that useDefaultStats or the difficulty feature is complete.


### Hard preparation loop and native XP operation validated (2026-10-01)

Refactored the helper's enumeration/advancement into prepare_definition_levels
so the same production loop can run against isolated native manager records.
Added a fixture callback that is recognized only while its private address is
armed. It substitutes only the final advance operation, validates all five
arguments and owner, emulates native35/45 transitions, and deliberately stalls
one definition in a second case. Real generated count56C90, availability56D90,
definition56E60 and levelAF700 functions run. Fixture covers IDs1,2,35,37,
initial levels1/35/45/44, defaultID0 exclusion, absent-definition exclusion,
finite failure detection, exact stack balance, and preservation of other
records. Expanded manager offsets/definition stride come from existing layout
constants. No assumption that imported heroes occupy specific IDs.

A separate positive check then runs actual native57250 twice (1->35->45),
actual541E0 XP-curve construction, AF890 XP application and AF950 level update
on a scratch definition. It verifies final XP equals the native level45
threshold. This case intentionally supplies null rules and auto=false to
isolate XP/level behavior; production non-null rules/auto=true arguments are
checked in the preceding contract fixture. Resource-backed stat/power
allocation remains unverified, not claimed from this narrower check. Global
manager pointer, XP cache and demo-state byte are restored; scratch manager
freed and callback unarmed afterward.

Release build and --powerup-definition-test exited0. CAMPAIGN PREPARATION PASS
now reports native roster/level/XP curve plus dispatch contracts. Logs:
work/xml2-resume/default-stats-loop-build.log and default-stats-loop-test.log.
Read-only additional evidence: xml1-xp-native-application.asm. No script
registration or staging this turn;41 registered/16 pending remains current.
Next validate resource-backed allocation and connect the complete default-stat
startup path; existing stock startup/progression remains untouched.


### Reject unavailable default-stat resources before XP mutation (2026-10-01)

Native AE120 ends with al=1 regardless of the underlying127510 load result.
Following its return flag alone would let the added startup advance levels
without usable stat rules. Added rules_resource_ready only to the new helper:
require the owned document, reject its native parser-error byte+2C, and call
native125F40(null previous child) to require a first parsed child. This does
not assume a stock class/hero name or alter XML1's existing rules loader. An
unready resource returns failure before prepare_definition_levels runs; normal
owned-resource destruction still runs afterward. Readiness is not a schema or
per-character rule coverage check.

Evidence: constructor125E80 initializes child pointer+C to0;125F00 searches
that linked list;125F40 returns its first child for argument0;127510 checks
parser-error byte+2C at127711 and returnsfalse at1277BD. Saved traces:
work/xml2-resume/xml1-rules-resource-validity.asm, xml1-rules-load-result.asm,
xml1-rules-query-root.asm and xml1-rules-resource-state.asm. Staged rule files
exist (stat_rules.xml and stat_rules.xmlb), read only. No existing runtime
loader behavior changed.

Fixture covers absent document, empty parsed document, present child and
parser error using actual125F40 with stack checking. Release build and
--powerup-definition-test pass: default-stats-readiness-build.log and
 default-stats-readiness-test.log in work/xml2-resume. Positive resource-backed
allocation remains unverified; this test cannot establish it. No registration,
staging, asset/settings/save changes, commit or release.41 registered/16 pending.


### useDefaultStats startup connected and registered (2026-10-01)

Added xml1_campaign_start_default and script descriptor useDefaultStats(n,"").
The handler follows XML2's prepare-before-first-mission ordering using XML1's
native synchronous console newgame 1 command (literal3D2DF8). It arms chosen
difficulty before preparation, rejects reentry, and clears pending state on
all returns. At the existing18D102 post-reset boundary, only the armed default
startup clears Characters snapshot validity so prepared live definitions form
the new mission baseline. Missed command execution is reported and cannot
leave a later stock startup armed. Existing useSavedStats, stock newgame,
roster/first mission and NewGame+ are unchanged.

Corrected preparation for already-level45 characters: level advancement now
passes auto=false, and a subsequent pass applies the native57250 automatic
allocation tail (AF4E0,801F0,48950) to every available definition, including
those that needed no level increase. This also avoids a zero-delta XP operation
that would discard fractional XP. All level preparation must succeed before
that allocation pass. XML1's existing allocator/rules remain authoritative;
no XML2 allocation algorithms or character-specific behavior introduced.

New startup fixture uses actual console singleton11CD90 and substitutes its
command terminal. Easy/Normal each cover successful reset consumption and
missed command execution, duplicate/reentrant rejection, chosen-difficulty
preservation, snapshot-validity ownership and future stock-reset isolation.
All global pointers/flags are restored and the scratch manager is freed.
Existing preparation fixture checks revised auto=false advancement arguments
and runs actual native XP/level transitions. Resource-backed allocation and a
populated campaign entering its first mission remain UNVERIFIED; this is basic
programmatic contract validation, not gameplay acceptance or file-I/O proof.

Release build and --powerup-definition-test exited0; logs:
work/xml2-resume/default-startup-build.log and default-startup-test.log.
Inventory regenerated via audit-xml2-integration.py (inventory-default-startup.log):
42 registered additions,37 existing-facility exclusions,31 console/online
exclusions,15 pending names. useDefaultStats now points to implemented startup;
chooser and setDifficultyLevel remain unregistered/pending along with unique
difficulty consumers. Staged executable unchanged; no commits/push/releases.


### Statistics-choice popup builder connected (2026-10-01)

Added xml1_campaign_choose_statistics alongside the difficulty popup builder.
Both use the same native page1 initialization/title/show flow. The new rows
carry useDefaultStats() and useSavedStats(), with native autohide enabled and
hidehud disabled. Cancel uses native186CB0 to copy startGameDiffDialog() into
page+11CD; actual popup input187689..18769A reads that field before the common
runscript dispatch. Default selection is0. Existing artwork, paths and popup
flag meanings remain unchanged. Like the difficulty chooser, labels are
currently English; no user string assets or localization IDs overwritten.

Extended the native menu fixture to verify both labels, both Python actions,
the cancel continuation, option count, selected row, autohide/hidehud flags
and stack balance after guest temporary storage is released. Release build
and --powerup-definition-test exited0. Logs: work/xml2-resume/
statistics-chooser-build.log and statistics-chooser-test.log. Additional
verified setter trace: xml1-popup-continuation-setters.asm. No actual popup
presentation, live input or saved-stat chooser navigation tested.

The builder is not yet exposed: setDifficultyLevel/startGameDiffDialog remain
pending while the difficulty flow's remaining consumers are classified. The
commands its rows target are registered, but this does not establish that the
whole user-facing difficulty feature is complete. Inventory unchanged42
registered/15 pending; staged executable unchanged; no commit/push/release.


### Game-mode presence classification; no duplicate selector (2026-10-01)

Classified SetGameType as an existing-facility exclusion, not an online-only
exclusion. XML2 AFDC0 delegates to20DA20, writing NetPlayManager+770. Actual
local consumer201E40 reads that byte at201F29/201F49:1 dispatches runscript
startFirstMission(),2 dispatches set drmode 1;openmenu danger_room. The network
owner alone therefore does not establish an online-only function. XML1 already
has Story startup through native newgame18D0B0 and native dangerRoomMenu992D0
(openmenu danger_room). Under the user's system-presence rule, preserve those
existing local facilities and skip a duplicate XML2 selector/alias. No local
multiplayer functionality was removed or classified away as online services.

Inventory audit now checks the corrected XML1 command descriptor, literal,
XML2 command entry, native byte store and both actual mode consumers/literals.
Regenerated reports successfully:42 registered additions,38 existing-facility
exclusions,31 console/online exclusions,14 pending names. Log:
work/xml2-resume/inventory-game-mode.log. No executable changes this turn.

Evidence: xml2-setgametype-scope.asm, xml2-session-type-consumers.txt and
xml1-story-dangerroom-facilities.asm in work/xml2-resume. Used corrected
raven_command_index commands for XML1; the legacy recovery parser's shifted
XML1 descriptors incorrectly attribute9A310 (a shop-menu formatter) to Danger
Room and must not be used as presence evidence. Final XML1 facility trace was
regenerated at verified992D0 and18D0B0 starts.

Also generated difficulty-consumer-classification.txt with native call/literal
and RTTI owner evidence for the25 candidate difficulty consumers. This is a
triage list, not proof that all consumers are covered or that class presence
alone establishes every method. Existing health/energy and mode facilities
remain authoritative; unexplained consumers stay unclassified. Difficulty
chooser/setter remain pending. No staging, asset/save/settings edits, commit,
push or release.


### Automatic spending presence and stash scope (2026-10-01)

Classified setAutoSpend as an existing-system exclusion. XML1 already has
native automatic stat/power allocation, AF4E0 and48950, with an actual caller
in57250: the auto argument is tested at57334 and the two allocators are called
at57341/5734F. These are the existing routines reused by the added default-stat
startup, not newly invented XML2 allocators. The user's system-presence rule
requires skipping this system without preference/signature/scheduling parity
work. Do not import XML2's separate persistent preference bits or create a
spelling alias. Inventory audit checks the XML2 descriptor plus native XML1
branch/call bytes. No existing allocator or preference was modified.

Regenerated inventory:42 registered additions,39 existing-facility exclusions,
31 console/online exclusions,13 pending names. Audit exited0; log:
work/xml2-resume/inventory-auto-spending.log. Existence evidence is independent
of the still-unverified resource-backed Hard startup allocation path.

Separately traced stashMenu AD5C0: frontend1E8790 virtual84 permits access,
then console1673C0 virtual18 receives literal49C76C (openmenu stash). XML2's
CMenuShop1E3710 parses the stash property and stores bit0 at+18DC. Native
1E1F70 passes that bit into item eligibility1B61D0; its item branch1B63AF..
1B63BB bypasses the ordinary credit comparison for stash mode while retaining
inventory checks. This is not safely represented by XML1's ordinary shop
alias. Both games have inventory/shops, but that alone does not prove stash
transfer/storage exists in XML1. Keep stashMenu pending until the storage,
transfer and save ownership paths are traced and the missing parts connected.

Evidence files in work/xml2-resume: xml2-stash-menu-entry.asm,
stash-presence.txt, xml2-stash-factory-context.asm,
xml2-stash-inventory-interface.asm and xml2-stash-item-eligibility.asm.
The file named xml2-stash-quantity-path.asm contains the eligibility function
1B61D0, not a quantity getter; interpret its contents accordingly. Broad
xml2-stash-mode-consumers.txt includes unrelated owners using the same offset;
only confirmed CMenuShop paths support conclusions. No gameplay, executable
rebuild, staging, user assets/settings/saves, commit, push or release this turn.


### Collectible reward ownership traced (2026-10-01)

Continued from the current 42 registered additions / 39 existing-facility
exclusions / 31 console-online exclusions / 13 pending names. The earlier
checkpoint near the top is historical and does not supersede the generated
inventory. No completed progression, rotation, vitality or startup work was
restarted. The preceding status-only turn made no implementation progress;
this turn establishes the remaining collectible reward integration boundary.

Original dataDiscReward B7360..B77EA and homingBeaconReward B7800..B7904
both query the supplied saved game-variable name. Their B13D0 virtual58 is
B1540, which counts set flags at indices1..32. The E7A70/E5BA0 call is lookup,
not increment. Neither reward entry writes the flags. Thus scripts own pickup
collection state; invoking the reward notification must not advance it again.
The existing extension game_variable/flag_count interfaces already provide
the required query without introducing another persistence store.

homingBeaconReward displays caller-provided localized text with count and4
when count<=4, appends localized text168 at exactly4, and displays nothing
above4. It does not itself unlock a zone or award XP. Native1FA760 virtual14
then virtual0C owns presentation. Those interfaces, localization and XML1
presence still need resolution before implementing or excluding this command.
Do not infer a new portal/reward side effect from its name.

dataDiscReward displays count modulo4, using4 for exact multiples; reward
branches occur only on multiples4,8,12,16,20. Those branches increase native
pickup capacities by2,2,4,4,6 (last branch both kinds), refill through the
inventory interface, and award500,750,1000,1500,2500 XP respectively via
Characters virtualD4 and2E690. Capacity accessors are CGame slots238/23C,
78400/78410, with setters240/244,78420/78440. They use packed five-bit fields
at game+615 and game+614. Do not copy those XML2 offsets into XML1 or assume
that ordinary pickup quantities establish an existing expandable capacity.
Actual XML1 capacity ownership/consumers remain unresolved. Zero flags also
have remainder0 but no reward branch; preserve this distinction when wiring.

Evidence retained in work/xml2-resume/collectible-rewards-native.asm and
reward-counter-interfaces.asm. The bytes after B77EA are a jump table, not
instructions belonging to the function. xml1-pickup-capacity-candidates.txt
is only an exploratory vtable scan; it establishes neither presence nor
absence of the capacity facility. No command was registered or reclassified,
no build was necessary for these trace-only changes, and no player executable,
assets, settings or saves were modified. Gameplay remains unverified.


### Beacon notification classified as an existing facility (2026-10-01)

The homingBeaconReward trace is now complete enough to classify its scope:
its only output is a formatted collection-progress popup. The target1FA760
constructs1FA4F0, whose vtable4B333C is CPopupDialog. XML1 already supplies
CPopupDialog187AF0/vtable3E0434 and registered createPopupDialog99300, plus
saved-variable query getGameVar98BB0. The full XML2 entry B7800..B7904 has no
collection write, XP award, capacity mutation or extraction unlock. Under the
user's existing-system exclusion rule, no alternate popup policy or spelling
adapter is required. This is a scope exclusion, not an implemented command.

Inventory now guards the original descriptors and exact XML2 flag-count /
branch / popup dispatch bytes. Regeneration passed in
work/xml2-resume/inventory-collectible-popup.log. Additional native evidence:
reward-message-owner.asm and xml1-reward-popup-presence.asm; constructor
1FA4F0 explicitly installs4B333C. Current counts:42 registered additions,
40 existing-facility exclusions,31 console/online exclusions,12 pending names.
Data-disc rewards remain pending: their capacity and XP side effects cannot
be excluded merely because notification exists. No runtime build, player
staging, gameplay testing, commit or publication took place in this pass.


### Direct selected-difficulty startup integrated (2026-10-01)

XML2 B0530 first sets the chosen difficulty. Its local branch queries hard
unlock at B058D..B059C; if locked, B069C dispatches first-mission startup
without calling useDefaultStats/AE110. Therefore the existing default-stat
startup helper cannot also serve as this branch: explicit default-stat
preparation owns the live-stat baseline, whereas direct startup must preserve
the original game's baseline selection.

Refactored the common command dispatch into start_campaign(prepare_stats).
xml1_campaign_start_selected now preserves selected difficulty through the
existing native reset boundary without preparing stats or invalidating the
native baseline. xml1_campaign_start_default retains preparation and baseline
ownership. Both reject reentry, require the reset callback to consume the
armed startup, restore guest registers, and disarm after a missed command.
Neither helper changes stock newgame calls outside an explicitly armed path.
The new helper is ready for the remaining setter integration, not registered
as a script or presented as a completed difficulty system.

Release xml1-boot-probe build and --powerup-definition-test pass (exit0), logs
work/xml2-resume/selected-startup-build.log and selected-startup-test.log.
The expanded fixture covers direct Easy/Normal/Hard, default Easy/Normal,
reset/missed-command cases, rejection of both reentrant entry points, chosen
difficulty preservation, direct baseline retention and prepared baseline
invalidation. It uses the real native console owner with the final command
terminal substituted. Actual campaign entry and presentation were not tested.
The remaining difficulty consumer classification is still incomplete; no
script count changed and no player executable was staged.


### Difficulty-selection continuation integrated (2026-10-01)

Added xml1_campaign_select_difficulty in raven_campaign_menu_guest. It follows
the local B0530 continuation order: set campaign value, query persistent hard
unlock, then show the existing statistics chooser when unlocked or invoke the
validated direct-start helper otherwise. The statistics chooser is offered
for every selected difficulty when unlocked, not only Hard. No networking,
XML2 roster, combat scaling or asset changes are introduced. The native integer
state remains intact; only the visible chooser limits choices to0/1/2.

The reusable selection function accepts typed continuation callbacks, keeping
UI execution out of the programmatic fixture. Checks verify that the selected
value exists before the unlock query and before either continuation, exactly
one unlock query and one chosen continuation execute, failed direct startup
propagates, and guest stack state is unchanged. Both locked/unlocked states,
success/failure and values0/1/2/-1/99 are exercised. The fixture temporarily
admits the native singleton without constructing it, restores its original
initialization flag and adjunct difficulty, and does not modify native records.

Release xml1-boot-probe and --powerup-definition-test both passed, exit0:
work/xml2-resume/difficulty-routing-build.log and difficulty-routing-test.log.
The native popup row-copy/selection and prior startup fixtures also pass.
Real unlock persistence is covered by prior progress fixtures; this routing
fixture substitutes the query/presentation/start terminals and is not gameplay
or visible-menu verification. Script registration still awaits resolution of
the remaining difficulty consumers. Counts remain42 registered additions,
40 existing-facility exclusions,31 console/online exclusions,12 pending names.
No player staging, asset/save changes, commit, push or release this turn.


### Difficulty dependencies reconciled with existing systems (2026-10-01)

Created docs/XML2-DIFFICULTY-CONSUMERS.md as the current 25-candidate dependency
inventory. Reconciled historical rating/damage work with the current native
integration:5D330/5D6A0 attack/defense ratings and62530 damage recalculation
already have XML1 systems (5C370 and5CCA0). These difficulty formula variants
are skipped, without reopening completed modifiers or importing balance.
Existing maximum-health/energy calculations remain skipped as recorded earlier.

Confirmed original XML1 objective completion845C0..84723 already awards the
authored positive XP value on newly completed state, using Characters virtualCC
at84703 and2FCF0 at84712. XML2's96CC0 consumer therefore belongs to an existing
objective-reward system; do not add its difficulty-dependent XP multiplier.
Native traces retained as xml1-objective-xp-presence.asm and
xml2-objective-xp-difficulty.asm under work/xml2-resume. The separate generic
script awardXPToPlayable98AC0 already uses the same XML1 XP award interfaces.

The matrix distinguishes these established exclusions from unclassified
inventory/spawn/cache/endgame/network consumers. Mere RTTI owner presence is
not treated as full-function coverage. The two startup/chooser entries remain
implemented components awaiting full dependency disposition and registration.
This pass changes classification evidence, not runtime behavior. No rebuild
was necessary; the last passing difficulty-routing build/tests remain current.
Script counts unchanged:42 registered additions and12 pending. No staging.


### Difficulty consumer labels corrected from native data (2026-10-01)

2BAD0 is enemy-leader power selection, not random resistance selection as
previous triage notes called it. Its explicit-name table491B08..491CA8 has
14 entries:ldr_shared_damage,ldr_shared_speed,ldr_shared_elemental,
ldr_shared_drain,ldr_shared_altered,ldr_radiation,ldr_health_regen,
ldr_leech_invuln,ldr_shared_invuln,ldr_need_finisher,ldr_need_popup,
ldr_need_knockback,ldr_regen_finisher,ldr_2vuln. It stores the selected index
in actor+412. The random_no_invuln caller at322ED follows character metadata;
these strings must not be treated as a damage-resistance parser by inference.

XML1's leader propertyB03F5 sets CharacterDef+3A1 bit8. Its actor lifecycle
consumers at344C2 and323D7 register/unregister the actor handle through CGame
virtual18/1C. This establishes leader identity/lifecycle but does not yet prove
an equivalent enemy-leader power system. Keep2BAD0 pending rather than deriving
absence from missing ldr_ strings or equivalence from the leader flag alone.
The XML1 random literal atADE32 belongs to playorder; it is unrelated evidence.

The7D360 authored-byte reader is called on78-byte records rooted6054C0 through
D8EC0(index) andD8F10(current index602E98). The1B601D item-cost caller squares
its result and multiplies by10;7D109 uses it in a gameplay eligibility check.
Record purpose remains pending. No guessed level/cost replacement is added.
Retained caller evidence: work/xml2-resume/difficulty-accessor-callers.txt;
XML1 property evidence: xml1-leader-property.asm. Offset scan file
xml1-leader-offset-candidates.txt contains candidates, not verified consumers;
only the two instruction-boundary-verified lifecycle consumers above are used.
Updated the dependency matrix to correct these labels. No runtime edits,
command count changes, build, staging or gameplay test in this trace-only pass.


### Leader flag does not establish leader-power presence (2026-10-01)

Followed the actual XML1 vtable behind the previously located actor lifecycle
calls. CGame3CCD14 virtual18 and1C both resolve to15FDF0, which is only ret4.
The earlier phrase leader registration/unregistration describes the call sites,
not functioning manager behavior. Do not use those no-op calls as proof of
an existing leader-power system. The parsed leader flag itself is real.

Located XML2's actual named-power consumer2DF50..2DFB1: read actor+412 low
nibble, reject indices>=14, index491B08 with stride32, resolve the named ldr_*
power through159E20 virtual58, then call15DAF0 with its resolved two-word
reference and the native null-handle context. Direct caller2ED0F and an
absolute method reference4066C lead to this consumer. The earlier311E0 trace
is leader setup/registration; it is not the power application routine.

Evidence is retained in work/xml2-resume/xml2-leader-selection-application.asm
and xml1-leader-registration-stubs.asm. This gives a concrete next boundary:
check the current XML1 named-power application interfaces and applicable actor
lifecycle, then determine whether equivalent selection/application already
exists elsewhere. Do not invent a special damage patch, persist an unowned
actor pointer, or count the selection helper alone as an implemented system.
The dependency inventory reflects that unresolved boundary. No runtime edit,
script-count change, rebuild, staging, gameplay campaign or publication.


### Leader power property and delayed application contract (2026-10-01)

Traced leader application timing beyond the named lookup. Native2ECF0 is
COnlyOneEvent<CActor,EApplyLeaderPowerup>, RTTI vtable49201C, embedded at
actor+330 by constructor32640. Callback2ECF0 compares its saved float with
the supplied event time; only equality clears the saved time and calls
2DF50(actor,0). Setup311E0 schedules this owned event through29780 after
initializing it with6E5C0. Therefore applying immediately from a string parser
would not reproduce the observed ownership/timing contract.

Native actor-property parser31E50 checks leader (literal492384) before the
selection sequence. It first uses entity leaderpowerup (literal492374), then
CharacterDef stats virtualD8 when empty, then a random/default name selected
from character metadata. That path calls2BAD0 and311E0. XML1 has the leader
literal only in the existing CharacterDef parser and no leaderpowerup literal
or EApplyLeaderPowerup RTTI type. Those absences support the traced boundary;
they are not by themselves proof that all leader behavior is absent.

Correction to the preceding note: raw x.refs(2DF50) result4066C is NOT a method
reference. It overlaps a relative call instruction to6E5C0 and was a coincidental
four-byte match. The verified direct callback call is2ED0F, and the callback's
actual vtable reference is49201C. Do not use raw absolute-reference hits without
instruction/data classification. Native source with correct boundaries retained
in work/xml2-resume/xml2-leader-scheduling-properties.asm. Previous
xml2-leader-selection-application.asm retains lookup/selection/setup routines.

Next integration work requires using XML1's named powerup attachment and
lifetime interfaces with the delayed event owner, and tracing serialized
selection/reset if this missing system is imported. No immediate activation,
independent timer, character-specific handler or guessed actor-field write
has been added. No runtime changes or new completed command this turn; the
last passing build remains difficulty-routing. Goal and12 pending script
entries remain open, with the separate leader-system dependency unresolved.


### Leader selection component implemented and built (2026-10-01)

Added raven_leader_power.c/.h with the verified14-name table and selection
rules from2BAD0. Explicit names are case-insensitive and do not draw randomness.
r/random draw0..10; random_no_invuln draws0..6 below difficulty2 and0..10
otherwise.16E1C0 establishes inclusive bounds; its third argument selects the
RNG source, not inclusivity. The callback interface borrows the eventual native
RNG and owns no generator. Unknown names/null arguments/invalid supplied random
results leave the caller's selection untouched. Power-name resolution follows
2DF50's low-nibble read and rejects14/15. No effect behavior is duplicated.

The component is included in xml1-boot-probe, but not yet called from actor
lifecycle hooks: it cannot enable a partial leader system. Actor ownership,
entity/definition parsing, delayed-event scheduling, powerup attachment and
save/load/reset still need integration. It stores no actor pointer or host
persistence and changes no original native fields, assets or stock behavior.

Release raven-leader-power-test and xml1-boot-probe builds pass. The selection
check covers all names, mixed case, packed lookup, all permitted RNG outcomes
across difficulty -1..3, both random aliases, exactly one RNG call for random
selection, no RNG call for explicit/invalid names and failed-selection isolation.
The full --powerup-definition-test also passes, exit0. Evidence:
work/xml2-resume/leader-selection-build.log, leader-selection-test.log,
leader-selection-regression.log and xml2-leader-rng-contract.asm.
These are component/contract checks, not actor-lifecycle or gameplay validation.
No scripting entry completed;12 remain pending. No executable staged, commit,
push or release. The goal remains active and incomplete.


### Leader selection actor persistence boundary located (2026-10-01)

Original XML2 actor save2CEE0 writes one byte from actor+412 at2CF78..2CF83
through73D00. Load31620 reads that byte through73D50 at316DA..316E5. The
constructor32640 initializes it to zero. This is actor-owned selection, not
CharacterDef ownership or a random value to redraw on every activation/load.
The full load routine also handles inherited actor state and existing effects;
its311E0 call must not be assumed to reapply a power unconditionally because
311E0 has an existing setup guard. Delayed-event restore/cleanup remains pending.

RTTI maps XML2 CActor492124 virtual0C/10 to2CEE0/31620 and XML1 CActor3C94B4
virtual0C/10 to2EF80/2F010. XML1's original actor payload uses6BFD0/6C020 and
stores health as a word; XML2 uses its own stream and a dword health value
before the extra selection byte. Neither record sizes nor actor offsets may
be copied. The repeated scratch-byte stream calls in XML1 have NOT been
classified as spare storage. Do not borrow them as padding or insert a byte
without a compatible format/stream-lifecycle design.

Evidence: work/xml2-resume/xml2-leader-actor-load.asm,
xml2-leader-save-state.asm and xml1-actor-save-load-boundary.asm. The selector
component and last passing tests are unchanged. Next work is native stream
field/lifetime admission and a compatible actor adjunct, then delayed
activation/retirement. No runtime mutation, save-format change, build, staging
or gameplay testing occurred in this trace pass. Goal remains incomplete.


### Native actor field storage is bounded, not spare padding (2026-10-01)

Resolved6BFC0/6BFD0/6C020/6C070 against original XML1 instructions.
6BFC0 sets global cursor498D94 to record+8. Writer6BFD0 and reader6C020
reject cursor-relative offset plus requested bytes greater than5, returning
false without advancing.6C070 clears the global cursor. This is a fixed
five-byte record area, not the general campaign stream used by vitality.
The actor's three preceding read/skip calls consume existing bytes before its
two-byte health write/read. They are NOT padding available for a leader byte.

Original base actor save91000 first delegates74C00 and uses record+D bit10
for physical health state, further confirming adjacent bytes are live state.
A compatible leader adjunct must be scoped at an enclosing entity/zone save
boundary with stable native identity and legacy admission, rather than
expanding this fixed record or changing6BFD0's limit. The existing retained
zone save boundary80D00 and loader81E15 are the next interfaces to inspect.
No layout change or extra write has been enabled.

Evidence retained in work/xml2-resume/xml1-actor-field-stream.asm and
xml1-entity-record-save.asm, alongside the previous actor save/load trace.
This closes the unsafe proposed direct-record extension route; it does not
complete leader persistence. No runtime changes/build/staging this turn.
The leader selector's previous build/contract checks remain current; full
leader integration and12 pending script entries remain unfinished.


### Bounded leader snapshot component (2026-10-01)

Traced native retained-zone ownership:80D00 saves manager+4AC's cached zone
records, each39BC bytes.6CDB0 uses a name lookup and refuses a new cache entry
when count19428 equals7;6CB70 can retire the last transient record through
6C7D0.6C830 starts a fresh snapshot through6C7D0, reserves entity slot0, captures
eligible native entities, and invokes entity virtual0C with the allocated
20-byte record at snapshot+4+index*20 (6CA1B..6CA2A). Entity capacity is600,
including reserved slot0. The original actor stream's five-byte payload stays
inside that native record. No cache-capacity or eviction-policy change.

Added a fixed600-byte raven_leader_zone_snapshot component alongside the
selector. It associates a selected leader power with the native record index;
zero means absent and index+1 preserves actual power0. It rejects slot0,
out-of-range indices and invalid selections without modifying existing data.
Reset clears all entries for a replaced native snapshot, and value copies
have independent lifetimes. This is memory-side state only, not a save format;
it allocates no map and stores no transient actor pointer. Native capture,
reset/load hooks and enclosing compatible serialization remain unconnected.

Release raven-leader-power-test and xml1-boot-probe builds pass. The component
check covers all599 usable slots, independent retained snapshots, reset/reuse,
failed-write isolation and selected-power0 versus absent state. Logs:
work/xml2-resume/leader-snapshot-build.log and leader-snapshot-test.log.
Native traces:xml1-zone-cache-ownership.asm,xml1-zone-capture-complete.asm and
xml1-leader-zone-owner.asm. No claim of save roundtrip or gameplay validation;
no script-count change, staged executable, asset/save change or publication.


### Leader record identity and complete cache replacement (2026-10-01)

Resolved both primary entity restore paths against original XML1 instructions.
Map loader80DF0 assigns placed entity IDs at82165, then calls6C520 at82173.
6C520 maps actor+6E minus1 through snapshot+2EEC, checks saved record+D bit8,
and calls entity virtual10 at6C554 with snapshot+4+record_index*20.
The separate6C560 path enumerates indices at snapshot+32F0, uses the saved
name/type/transform to create an entity through68060, then passes that same
record to virtual10 at6C694. Actor addresses and placed entity IDs cannot key
both paths; the native saved record can. The previously traced6CFB0 restores
a different collection, so hooking only that call would miss these actors.

Native83370 constructs exactly seven39BC-byte snapshots. Normal reset6CD10
calls6C7D0 for populated slots. Save loader83090 instead clears the lookup,
sets count19428 to0 at830E0, and reads replacement snapshots directly through
6E830 at83158. It does NOT run6C7D0 for each replaced snapshot. Additional
leader state therefore needs explicit whole-cache reset on this load path,
even if the manager allocation is unchanged. Native save80D00 writes each
snapshot verbatim, so no extra actor byte or embedded-record expansion is safe.

Added raven_leader_zone_cache with seven fixed600-byte selection arrays and
a native-base identity. Capture/lookup admits only complete native entity
record starts in those seven snapshots; reserved slot0, metadata, interiors,
foreign addresses and wrapping cache allocations are rejected. Per-zone reset
leaves other snapshots intact. Rebinding clears the entire cache, including
same-address replacement. Memory is bounded at4204 bytes; no growing map,
heap allocation or stored actor pointer. Native lifecycle hooks and save
serialization are still unconnected; this component does not enable leaders.

Release runtime and leader test builds pass. The test exhausts every byte
address across the full seven-zone range, tests all4193 usable entity records,
isolated reset, rejected writes and same-address replacement. Evidence:
work/xml2-resume/leader-cache-owner-build.log and leader-cache-owner-test.log.
Native traces:xml1-leader-record-restore.asm and
xml1-leader-cache-load-lifecycle.asm in work/xml2-resume. No script-count
change, player staging, gameplay claim, commit or publication. Next integration
must join actor selection/scheduling and the now-established capture/restore
identities, then persist adjunct state at a compatible enclosing boundary.


### Named shared definition and native attachment bridge (2026-10-01)

Traced XML2 leader lookup through allocation159E20 virtual58=1571C0: it
looks up the interned tag in allocation+438 and returns a two-word resource
handle. That handle is not an XML1 definition pointer. XML1's existing
attachment entry is2AA90 (not2AB80, which is in the middle of that function).
Its arguments are definition, ownership flag, optional active-handle output
and source entity handle; it returns AL and pops16 bytes. CCEPowerupD75A0
uses this entry.2A7B0 stores definition at active+2C and the ownership flag
at active+3C bit0. Native28FA0 and29130 release an owned definition through
967B0. Allocator96740 constructs through964F0/96220 with reference count1.
The leader addition must reuse these existing attachment/removal facilities.

Added a generic named-shared definition API in raven_powerup_guest.c. It
uses the existing immutable shared_powerups catalog, native allocation and
attribute parsing, existing imported affecter/effect metadata and callback
installation. Each acquired definition has one owned reference; missing names
allocate nothing and partial parse failures release the reference. A separate
attachment adapter resolves a live actor generation before and after loading,
then transfers ownership to2AA90, releasing on failure. There is no leader-
specific damage formula, copied effect implementation or new teardown queue.
No production leader caller is connected yet. Resource scope resolution,
leader actor parsing/scheduling and persistence remain pending.

Programmatic fixture uses an isolated in-memory catalog, restored after the
callback. It checks native parser output, harming callback installation,
reference counts, missing/invalid lookup, repeated partial-parse failure,
recycled definition cleanup and guest-register/stack preservation. A second
case executes original2AA90 with an unregistered native receiver and verifies
native active-handle ownership, then28FA0 release and safe repeated cleanup.
That case intentionally excludes actor-world registration, timed scheduling,
effect rendering and the public live-actor attachment path. It does not prove
leader gameplay or save/load behavior. The pre-entry fixture bypasses only
CValues singleton CRT/atexit initialization, preserving the numeric parser;
symbolic expressions and full singleton startup are not covered.

The first fixture run exposed that missing pre-entry CRT initialization;
a second exposed duplicate callback-test storage initialization. Both fixture
setup issues were corrected without changing production initialization.
Release build and full --powerup-definition-test now pass, including existing
combat/script/energy/rotation dependencies exercised by that suite. Evidence:
work/xml2-resume/leader-shared-attachment-build.log and
work/xml2-resume/leader-shared-attachment-test.log. Native attachment and
release traces are xml1-leader-native-powerup-attachment.asm and
xml1-leader-active-definition-release.asm in that directory.
Script inventory remains42 additions/12 pending. No staging, asset/settings/
save mutation, commit, push or publication. Goal remains active.


### Named shared powerup resource binding (2026-10-01)

Closed a gap in the newly added named-definition bridge: nested effect launch
requires a scope recorded by94FE0; allocating/parsing/callback installation
alone left direct named definitions without that scope. The API now requires
an explicit native resource scope and runs94FE0 after parsing. Its existing
hook retains scope for nested effects; the original routine binds the four
flat effect references at+54/+78/+84/+90 through94E90. The attachment adapter
passes its caller's scope through unchanged. No new path alias or fallback.

Native D74A0 obtains scope from its resource context; only its no-context
branch supplies0C. That event context must not be treated as an actor: actor
virtualC0 is27A60 and has a different contract. Native260B0 constructs scoped
lookup keys with125510 (format %i:%s), validates the namespace of the selected
resource and has its own scope3 lookup branch. Existing resource lookup stays
in charge; caller selection of the leader's actual scope remains to connect.
The archived XML2 shared_powerups.xmlb was decoded read-only into the private
work directory, confirming leaders use authored shared powerups with nested
auras and affecters. No package declarations or authored data were changed.

The native fixture now exercises94FE0, verifies two independently acquired
instances of the same shared name retain scopes12 and3, and verifies scope
retirement and clean reuse by a definition with no nested effects. Full
--powerup-definition-test passes after the Release build. This verifies
binding/metadata/lifetime contracts, not a populated world resource lookup or
rendered effects. Evidence:work/xml2-resume/leader-resource-scope-build.log,
leader-resource-scope-test.log and xml1-leader-resource-scope.asm. No script
count change, player staging, settings/save mutation, commit or publication.
Actor parsing/scheduling, caller scope selection and save/load integration
remain unfinished. Goal remains active.


### Native leader event transport and actor retirement gate (2026-10-01)

Resolved XML1's existing deferred entity-event path, avoiding a second timer
queue. Native277E0 accepts event pointer and float delay, adds native66AB0
simulation time, constructs a record through27480, and submits it to
CSchedulerAA4A0 virtual8=AA000. The XML2 leader setup's29780 has the same
role; no new scheduling system is needed. SchedulerAA240/AA250 dispatches
only when its earliest scheduled time is strictly less than the supplied tick
time. Delay0 therefore remains deferred at equal game time.

Native27480 stores the entity handle and event-object pointer, then asks
event virtual4 for a payload pointer and length. Existing OnlyOneEvent
virtual4=26D00 returns event+4 with length4 (the pending timestamp).
Scheduler274C0 copies a16-byte record: entity handle, event pointer and eight
payload bytes. The borrowed event object is NOT cloned or owned by the queue;
its address must survive all queued uses. Future custom payloads must fit the
eight-byte record area. Existing OnlyOneEvent callback2F3E0 compares the copied
timestamp with the live pending timestamp before clearing it/dispatching.

Scheduler dispatch274F0 resolves the stored entity handle through6BF80 before
reading the event pointer/vtable. An expired actor generation skips callback
dereference entirely; a reused actor address is not sufficient identity.
AA250 pops the timing heap before invoking274F0 and retires the queued record
throughAA380 afterward. The scheduler owns1024 records, with occupancy at
scheduler+4+5110 and a timing heap count at+4+7118. EnqueueAA0F0 does not itself
reject a full pool before consuming the free-list head; the imported leader
adapter must check capacity rather than overwrite a live native event.

This establishes the integration contract for the missing leader callback:
use the existing scheduler, maintain event-object lifetime, copy no more than
eight payload bytes, validate pending identity, and rely on native generation
resolution before actor delivery. No custom event callback, leader runtime
hook or save serializer was enabled in this turn. Evidence:
work/xml2-resume/xml1-leader-event-transport.asm and xml1-leader-scheduler.asm.
Previous resource-scope build/test results remain current. Goal remains active.


### Native leader callback implemented; lifecycle integration (2026-10-01)

The deferred leader adapter now exists in raven_leader_event_guest.c. It uses
native277E0/AA4A0 scheduling and a process-lifetime event descriptor with a
four-byte copied serial. State is bounded to512 entity slots and retains the
full generation and actor address. Duplicate arming is suppressed, dispatch
consumes before attachment, cancellation invalidates old serials, and native
queue capacity is checked before enqueue. Serial wrap is rejected.

The initial Release build and full --powerup-definition-test passed:
work/xml2-resume/leader-native-event-build.log and leader-native-event-test.log.
The fixture runs the real native scheduler constructor/enqueue/tick/dispatch;
only its terminal power attachment is substituted. It covers strict deferred
timing, copied payload identity, same-time cancellation/re-arm, expired entity
generations, duplicate suppression, full queues and reset. This is not proof
of live actor parsing, resource rendering or persisted leader powers.

Construction2E6F0 and final destruction3243A now retire leader state by retained
actor address, joining the existing scale lifecycle hooks. No possibly-cleared
actor handle is dereferenced at these boundaries. guard-leader-event.py applies
these hooks idempotently and registers the synthetic callback with indirect
code dispatch. The extended fixture additionally checks unrelated-object
retirement and cancel/re-arm after same-address retirement. Its validation is
recorded in the next checkpoint after the currently running build completes.

Further source tracing confirms XML2's2DF50 gets the leader name from491B08,
queries the shared lookup1571C0 through virtual58, then passes the returned
resource pair to15DAF0. Lookup1571C0 reads the named table rooted at owner+438;
it does not derive this resource pair from the actor. Evidence:
work/xml2-resume/xml2-leader-attachment-scope.asm and
xml2-shared-leader-resource-lookup.asm. Scope selection still requires connecting
the XML1 integration to the proper resource ownership, not guessing an actor
virtual method.

Still pending: normal actor leader parsing/selection, caller resource scope,
zone and disk persistence, and their combined integration. No additional script
is counted complete. The player EXE, assets, settings and saves are unchanged.


### Leader event lifecycle validation passed (2026-10-01)

The Release build completed successfully and --powerup-definition-test exited0.
Evidence:work/xml2-resume/leader-event-lifecycle-build.log and
leader-event-lifecycle-test.log. The expanded native scheduler fixture passed
unrelated-object retirement and same-address retirement/re-arm in addition to
its prior queue and generation checks. The fixture calls the retirement helper;
the generated constructor/destructor hook placements were inspected separately.
No claim of executing the full actor constructor/destructor in this fixture.
Both applications of guard-leader-event.py completed successfully (idempotence).
The final attachment remains substituted in the scheduler fixture; the separate
named-definition fixture verifies native allocation, parsing, resource binding,
reference ownership and retirement. Populated world resources remain untested.

The difficulty-consumer reconciliation also inspected original1489B0 through
148BED. Its difficulty branch148B2E..148B4F writes four bytes at cache+E1
for actor category29 with a nonnegative owner field+3D4. Do not mark this
consumer absent or complete merely from the class/cache name: byte consumers
still need identification before final disposition. Existing XML1 queries and
completed affecter integrations must remain authoritative. Trace retained in
work/xml2-resume/xml2-cache-initializer-presence.asm. No pending script was
reclassified, no staged game updated, and the full goal remains active.


### Difficulty cache dependency resolved as existing resistance (2026-10-01)

Classified the difficulty branch inside1489B0. Original14A4FA queries the
attribute ID, subtracts13 and indexes signed resistance bytes at cache+E0;
current raven_xml2_affecter_names.inc identifies IDs13..20 as resist_* names.
Original37E30 is the corresponding hit-time resistance reader, including
cache+E1 at37EA5. The four difficulty-initialized bytes identified in the
previous checkpoint are therefore resistance presets, not a separate absent
combat system. Evidence:work/xml2-resume/xml2-cache-initializer-presence.asm
and xml2-resistance-cache-consumer.asm, alongside the existing
raven_xml1_combat_resistance implementation and guard-raven-damage.py bridge.

Per the new-functionality-only rule, keep current XML1 resistance handling
and skip XML2's difficulty-specific balance/cache arrangement. This resolves
one difficulty-consumer inventory entry; it does not mark another script
complete or claim every pending difficulty dependency is satisfied. No source
behavior, player data, staged executable or script count changed in this pass.


### Leader selections join native zone capture (2026-10-01)

Added the bounded zone adjunct to raven_leader_event_guest.c. Native83370 binds
its seven-snapshot allocation;830DA clears/rebinds when native83090 replaces
a loaded cache;6C7D0 clears only the corresponding snapshot. Completed native
actor capture2F000 copies the armed/consumed leader selection from the exact
actor address and full generation into its native record identity. A failed
capture or a record reused by a non-leader clears the previous adjunct entry.
No native record bytes, existing five-byte field stream, capacity or eviction
policy change. Construction/destruction cleanup remains in place.

raven_leader_cache_forget provides checked record clearing; the guest query
xml1_leader_zone_selection is the planned restore interface. It does not yet
schedule restored powers. Original hook instructions were rechecked in
work/xml2-resume/xml1-leader-zone-hook-boundaries.asm. The expanded native
scheduler fixture now covers selected-state capture, replacement by non-leader,
independent zone reset and same-address full-cache replacement, restoring the
prior cache after the fixture. This calls the adjunct helpers; full native
actor save/load is not claimed by that fixture.

Build/test session27503 is running the Release xml1-boot-probe and
raven-leader-power-test build followed by both programmatic checks. Logs:
work/xml2-resume/leader-zone-capture-build.log,
leader-zone-capture-component-test.log and leader-zone-capture-native-test.log.
Do not assume success until the process completes. Remaining: actor parsing,
source resource scope, restore application and compatible disk serialization.
No script newly completed, staged EXE updated or user assets/settings/saves
changed. Goal remains active.


### Leader map-cache extension connected (2026-10-01)

The prior zone-capture Release build and both programmatic checks completed
with exit0 (leader-zone-capture-build.log, -component-test.log and
-native-test.log under work/xml2-resume). Capture/reset helper tests passed;
full actor capture execution was not claimed.

Rechecked native map writer80D00 and reader83090. Writer80DDB is immediately
after the native string table, cached snapshots and0x184-byte metadata payload;
reader831D6 is the matching post-payload boundary. The original entity record
remains untouched. Added optional XML1LDR-NUL version1 extension:16-byte header
with4200-byte payload, exactly seven600-byte selection arrays. No guest pointers
are saved. Empty arrays omit the extension entirely. Input validation rejects
invalid versions/lengths, reserved slot0 and selections outside0..14 before
mutating state. Native stream hooks check allocation/cursor/owner consistency;
legacy load retains the native cache-replacement reset and consumes no bytes.

New raven_leader_stream.c and raven_leader_stream_test.c passed a standalone
MSVC C11 build/test:work/xml2-resume/leader-stream-component-test.log. Coverage:
all records, relocated cache owner, every truncated length after the signature,
invalid header/payload, atomic rejection, omitted empty state and following-byte
preservation. CMake now includes the serializer and its test. The native fixture
adds mapped-stream cursor roundtrip and legacy omission checks; this is not
physical disk I/O or complete map loading.

Session27503 is complete. New build/test session is recorded by the terminal
result for leader-zone-stream-build.log and subsequent component/native logs.
Do not assume its result until polled. Resource/actor parsing and applying the
selected power after actor restoration are still pending. Native2F010 restores
health, base state and transform before its2F0ED return boundary; trace retained
in xml1-leader-actor-restore-tail.asm. No staged EXE, assets, settings, saves or
script counts changed; full goal remains active.


### Leader save extension verified; loading interfaces resolved (2026-10-01)

Build session96280 completed with exit0. Release raven-leader-stream-test and
--powerup-definition-test both passed. Logs:work/xml2-resume/
leader-zone-stream-build.log, leader-zone-stream-component-test.log,
leader-zone-stream-native-test.log. The latter verifies mapped native stream
cursors and ownership, optional omission, extended roundtrip and legacy no-tag
load after cache reset. This does not execute complete map load or disk I/O.

Original XML2 actor loader321F1..322F4 first queries leader (virtual24), then
leaderpowerup (virtual10). If the latter is empty, it queries CharacterDef
through actor+35C -> definition+C0 -> virtualD8; if still empty, it uses
random_no_invuln for canFly, otherwise r. The loader bounds the copied name
at63 characters. Trace:xml2-leader-property-selection.asm. The tested selector
already handles these names/ranges; native resource/actor wiring remains.

Resolved the fallback flag without copying XML2 layout: its CharacterDef
parserCA2EE..CA338 handles canFly at2AD bit2; XML1's existing parserB098A..B09D4
handles canFly at3A1 bit2. Evidence:xml1-leader-canfly-interface.asm. XML1's
existing leader property atB03F5 writes3A1 bit0x10 (not bit8 as an older note
suggested); leave that stock property handling intact. The missing named
leaderpowerup metadata must follow the CharacterDef ownership, for which
55BB6 already provides the parsed node and definition in the Race integration.

Also located XML1's existing inclusive integer RNG1233C0 (cdecl two integer
arguments, uses123330). Reuse that entry for selection, not an independent RNG
or a new range implementation. Evidence:xml1-leader-native-rng.asm. These are
integration interfaces, not new systems to import. No additional script count
change, staging, user data mutation, commit or release. Goal remains active.


### Authored leaderpowerup metadata follows CharacterDef ownership (2026-10-01)

Added raven_leader_definition.cpp/.h and raven_leader_definition_guest.c.
At native55BB6 the existing parsed CharacterDef node supplies leaderpowerup
through native1260E0/199EE0 attribute/string lookup. Text is copied into owned
metadata, bounded to63 characters as the original actor consumer does. Omitted
attributes preserve prior declarations; an explicitly empty value removes the
override. NativeB1640 construction andB2E37 final destruction erase metadata.
The existing Race hooks remain intact; both guards were applied twice to check
composition/idempotence. generate-code.ps1 runs the new guard after Race.

Release build and full --powerup-definition-test pass. Evidence:
work/xml2-resume/leader-definition-build-v3.log and
leader-definition-native-test-v3.log. Fixture exercises real native symbols,
attribute/string lookup, copied text surviving source mutation, truncation,
absent/empty behavior and metadata retirement. Full CharacterDef constructor
and destructor are not executed in this fixture; hook placement is guarded.
Initial fixture incorrectly assumed mixed-case attribute names would match;
it failed (mask14). XML1's native lookup behavior wins: the fixture now uses
the authored lowercase leaderpowerup spelling; no case-folding override added.
Earlier failed logs are retained as diagnostics, not validation evidence.

This implements the definition source for the pending actor loader fallback.
Live actor leader parsing/activation, shared resource scope and restored-power
application remain unfinished. Script completion count and staged executable
remain unchanged; no assets/settings/saves changed. Goal remains active.


### Native leader actor selection adapter verified (2026-10-01)

Added raven_leader_actor.c/.h. xml1_leader_actor_selection uses the supplied
native IEntityDef virtual24 boolean reader and virtual10 string reader, then
CharacterDef-owned leaderpowerup metadata, then existing canFly at3A1 bit2
to choose the established random alias. It calls native1233C0 for inclusive
integer sampling. It leaves output unchanged for non-leaders/invalid names,
consumes no RNG for explicit names, and preserves caller scratch registers
and guest stack. It does not yet schedule/attach a power or install an actor
loading hook; that remains the next connection.

Identified native CEntityDef vtable3CCA2C: string getter6A130 and boolean
getter69ED0. The fixture uses its real69DC0 constructor,69A20 property insertion,
virtual lookup and6A3F0 destruction, plus a private actor/CharacterDef layout.
Coverage: missing leader exclusion, explicit name, definition fallback, invalid
explicit name overriding the fallback, flight/ordinary random selection,
native RNG advancement, guest stack/FPU balance. Native strings are borrowed
only synchronously. The definition metadata lifetime remains independently
covered by the preceding native parser fixture.

Release build and full --powerup-definition-test exit0. Evidence:
work/xml2-resume/leader-actor-selection-build.log and
leader-actor-selection-native-test.log. Native property method trace:
xml1-leader-entity-properties.asm. Some unrelated error lines in the full log
are expected negative fixtures; the process exit and PASS checks are the result.

Still pending: normal actor-loading activation, shared resource scope choice,
restored-power application and full integration checks. No additional script
count change, staging, asset/settings/save mutation, commit or publication.
Goal remains active.


### Leader activation and saved selection connected (2026-10-01)

Supersedes the preceding pending actor-loading connection note. The generation
 guard now installs leader_actor_loaded at native32DA7 with live esi actor and
edi IEntityDef, preserving the original virtual24 result before native flag
updates. At successful native2F0ED restoration (BL success), the adapter reads
the adjunct saved selection and replaces an armed event or schedules a fresh
one. Already consumed identical selections are accepted without duplicate
attachment; a conflicting consumed selection is rejected with a diagnostic.
No catalog leader templates means no extra selection RNG or stock changes.

Original BE380/BE3D0/BE400 establish entity pointer/generation registration
before the actor constructor, and actor33CD0 installs the actor vtable before
32A20. Thus existing293F0 generation/type lookup is valid here; cached flags
from later66E90 are not used. Original map6C520/6C560 invokes actor restore
directly after construction and before scheduler update, permitting queued
selection replacement. Traces are xml1-leader-actor-factory.asm,
xml1-leader-actor-registration-order.asm, xml1-leader-handle-allocation.asm and
xml1-leader-actor-restore-tail.asm under work/xml2-resume.

Shared definitions use namespace12, the existing XML1 D74A0 ownerless resource
binding path. Native94FE0/260B0 retain native resource lookup/common fallback;
no invented actor virtualC0 call or character-specific namespace is used.

Generation guards pass twice (idempotence). Release build and full
--powerup-definition-test pass, exit0, including the extended scheduler fixture:
pending saved choice replaces the original without a second event, consumed
choice suppresses duplicates, mismatched consumed choice rejects, stale actor
handles/invalid selections reject, and fresh restore schedules exactly once.
Final restore tick preserves guest stack and FPU depth. Evidence:
work/xml2-resume/leader-activation-build-v2.log and
work/xml2-resume/leader-activation-native-test-v2.log (first full rebuild also
passed in leader-activation-build.log / leader-activation-native-test.log).

Limitations: the scheduling fixture substitutes the final attachment terminal;
the separate named-definition fixture exercises native parser/binding/ownership.
Full actor constructor/restoration through the new hooks, actual world effects,
leader presentation and player disk-save flows have not been exercised here.
These passes do not claim gameplay acceptance or completion of the full goal.

Also reconciled four difficulty consumers against original executable evidence:
210330/2105E0/211B70 are excluded CNetPlayManager packet/peer synchronization;
201E40 difficulty preservation/default-stat startup is already implemented,
while existing first-mission/Danger Room behavior is skipped. Details and exact
trace evidence are in XML2-DIFFICULTY-CONSUMERS.md. Remaining script counts stay
42 added,40 existing exclusions,31 console/online exclusions,12 pending.
No staging, assets/settings/save changes, commit, push or publication. Goal active.


### Leader adapter integration and difficulty exclusions (2026-10-01)

Added a private pre-entry-point leader catalog fixture with two named definitions.
It restores the prior immutable catalog on exit and changes no assets. Extended
the native event fixture to exercise the exact loaded/restored adapter entry
points installed at32DA7/2F0ED: real CEntityDef construction/insertion/lookups,
native generation/type lookup, ownerless namespace12, native scheduler queue
and tick, then saved selection replacement before dispatch. Checks verify one
final activation with the restored name and preservation of the original
volatile register values, stack and FPU depth. The final attachment terminal
is intentionally substituted, and full native actor construction/map restore,
world effects and disk I/O are still untested. This closes adapter wiring
coverage, not whole-game acceptance.

Build and complete --powerup-definition-test exit0. Evidence:
work/xml2-resume/leader-adapter-integration-build.log and
work/xml2-resume/leader-adapter-integration-test.log. New fixture code is in
raven_shared_powerups.cpp and raven_leader_event_guest.c; no runtime catalog
mutation path has been added to normal gameplay.

Further original-executable classification resolved four difficulty consumers:
5A210 is hard-mode enemy level+50/cap99 expansion, excluded by retained cap45;
BEC30's difficulty value only propagates to the network owner in online loading;
1C6C00 sends difficulty in host packet26;202990 uses it for network setup.
Mixed local load paths are preserved, not classified wholesale as online.
Exact addresses/traces are in docs/XML2-DIFFICULTY-CONSUMERS.md. Updated its
stale leader row to reflect current integration evidence. Other unclassified
consumers and12 pending gameplay scripts remain unfinished. No count increase,
staged build replacement, asset/settings/save changes, commit or publication.
Goal remains active.


### Existing course-level and disc-reward systems excluded (2026-10-01)

Resolved the78-byte6054C0 record table through original XML2 consumer1E3470:
it is course metadata, used to select a course and emit loadDangerRoomCourse.
Found original XML1 native17C480/17C8C0 course-disc reward paths and course-level
accessor7E4C0. These prove existing systems, so7D360 and1E3470 are skipped
without transplanting XML2 difficulty balance or selection rules. Current
sources and exact trace files are listed in XML2-DIFFICULTY-CONSUMERS.md.

The remaining endgame consumer1BD770 specifically calls CProgress virtualAC
when difficulty equals1, after completion virtualA4. Explicit unlock state and
script implementation already exist; automatic completion ownership remains
pending and was not classified as online-only. Spawn consumer traces also
identify their writes/virtual setters, but their final classification remains
unfinished. No runtime change or rebuild was required for this presence audit.
The latest passing code build remains leader-adapter-integration-build.log /
leader-adapter-integration-test.log. Script count stays42 implemented/12 pending.
No staging, asset/settings/save changes, commit or publication. Goal active.


### Normal-completion hard unlock connected (2026-10-01)

Original XML2 credits1BD838 marks completion;1BD847..1BD85B additionally calls
progress virtualAC when campaign difficulty is1. The explicit unlock command
and persisted adjunct already existed, but automatic completion linkage did
not. XML1 native8C300 owns its completion bit at progress+195 mask2 and its
first-completion notification. Added only xml1_progress_campaign_completed at
its final8C349 boundary, through guard-progress-extension.py. The helper checks
the exact singleton owner and original boolean low bit, then adds the missing
hard unlock for normal difficulty. It never clears earned unlocks, changes the
native completion flag/notification or changes NewGame+ behavior.

The test executes the real generated8C300 setter through the installed hook for
easy/normal/hard modes and clearing. It seeds the existing completion bit to
bypass the UI-only first-completion popup, explicitly verifies repeat completion
can unlock normal after an earlier completion, and checks unrelated owners and
non-setting low-bit arguments cannot grant the unlock. Native flag writes,
stack, existing snapshot/merge and save/options programmatic fixtures still pass.
Private test singleton initialization is restored; no player data is touched.

Guard runs twice pass. Final Release build and full --powerup-definition-test
exit0: work/xml2-resume/difficulty-completion-build-final.log and
difficulty-completion-test-final.log. First-completion popup and disk I/O remain
untested; file terminals are substituted in existing options fixtures. Updated
1BD770 in the dependency inventory. No new script registration/count change
(42 implemented,12 pending), staging, assets/settings/save edits, commit or
publication. Goal active; remaining consumers/functions still require work.


### Difficulty commands registered and validated (2026-10-01)

Registered setDifficultyLevel(n,i) and startGameDiffDialog(n,empty). Adapters
use the established campaign selection/startup and native popup implementation,
return null interpreter results and preserve the original argument/return ABI.
Script integer values are not clamped; visible choices remain bounded by the
chooser. The command fixture executes native value conversion and registered
callback lookup/dispatch, substituting only startup/UI terminals already
covered by the separate routing/popup fixtures. Both callback invocation counts,
integer value, result, stack and FPU depth pass.

Closed remaining difficulty-specific consumer classifications: DC500/DFB20
modify spawned health, already present in XML1; original308D4..308D9 proves
the ambiguous actor+284 field comes from max-healthC7FC0. The remaining8D630
branch adds50 to map level in hard mode and is excluded with retained cap45.
Its other item-generation level queries were traced to78500/7CD10/7D2F0;
this is not a claim that an entire XML2 procedural inventory system was ported.
No native XML1 health, level, course, reward or item-balance replacement added.
Current details supersede historical pending notes in the dependency inventory.

Build and full --powerup-definition-test exit0; command audit regeneration
exit0. Evidence under work/xml2-resume: difficulty-commands-build.log,
difficulty-commands-test.log, inventory-difficulty-commands.log. Inventory now
44 implemented additions,40 existing-facility exclusions,31 console/online
exclusions and10 pending gameplay names. Pending: permanentStatBoost,stashMenu,
setAutoEquip,restorelastzone,setCurrentAct,recallZone,isBlinkPortalActive,
setActorHuge,setRecallActive,dataDiscReward. Full TODO3 is not complete.
User gameplay acceptance remains separate; no visual campaign, player staging,
asset/settings/save edit, commit, push or release. Goal active.


### Current-act campaign ownership and persistence implemented (2026-10-01)

Added current_act[3] alongside difficulty, following the existing XML1 live,
baseline and retained record ownership, not XML2 offsets in native memory.
Original XML2 CGame constructor invokes775C0 on this+53C;775FD initializes
record+A4 to1, corresponding to CGame+5E0. Store uses a byte as784DC does;
getter widens it unsigned. Existing native6EB00 initialization and6F940 copy
hooks now carry both owned values and leave native record bytes unchanged.
The helper is state-only; setCurrentAct is deliberately not registered until
its applicable act-change consumers are resolved.

Optional campaign extra section keeps the existing XML1DIF tag. All default
values emit nothing. Difficulty-only values retain version1/20bytes. Nondefault
live/retained acts use version2/22bytes, with the two act bytes following the
existing difficulty integers. Reader accepts legacy/no section and version1
with act1 defaults, and version2 with exact cursor advance; baseline state is
not loaded, matching native XML1. Older game builds are not claimed to read
new version2 sections. No user save was loaded or rewritten in these tests.

Full --powerup-definition-test passes after Release build, exit0. Coverage:
all native record init/copy combinations, byte narrowing, absence/v1/v2 loads,
act-only live and retained changes with normal difficulty, act0/255, preserved
baseline state and following sentinel bytes. Evidence:
work/xml2-resume/campaign-act-state-build-final.log and
campaign-act-state-test-final.log. Runtime world/act consumers and physical
disk I/O remain untested. Existing difficulty and progress fixtures also pass.

Further original trace78AE0..78C72 identifies a category3/4 inventory refresh
that fills generated entries through78C80; it is not merely an act assignment.
The mission filter97540 also remains a consumer boundary. Existing XML1 shop
and mission systems must win where present; do not invent matches or import
XML2 balance. Traces: xml2-current-act-inventory-refresh.asm and
xml2-act-stock-generation.asm. No new script count yet:44 additions (38 real
extensions and6 retail no-op adapters),10 pending. Player staging, assets,
settings and saves unchanged. No commit/push/publication. Goal remains active.


### Current-act command and permanent reward core (2026-10-01)

setCurrentAct is registered and programmatically checked through real script
value conversion and extension dispatch. Low-byte act storage, unchanged
difficulty, null result and stack/FPU balance pass. Existing XML1 shop and
mission systems are preserved: XML2 category3/4 stock regeneration and mission
act filtering are not transplanted as parity changes. This supersedes the
previous checkpoint's unregistered-current-act note. Evidence:
work/xml2-resume/current-act-command-build.log and
current-act-command-test.log. Inventory regenerated successfully in
inventory-current-act-command.log:45 additions (39 functional extensions,
6 retail no-op adapters),9 pending commands.

Permanent reward core now connects current-act state to all six authored stat
names. XML2 B1EC0 uses act*2 for striking/agility/body/focus and act*10 for
maxhealth/maxenergy. The four existing stats pass through XML1 native47530,
retaining its cap and the original byte addition. Missing health/energy bonuses
use the previously implemented owned, saved adjunct bytes. Unknown names and
unowned stats are rejected without creating character state. This helper does
not yet register permanentStatBoost: actor maximum/current-value refresh and
player notification must be connected before the command is complete.

Release build and full --powerup-definition-test pass, exit0. Added native
setter checks for all four names and cap100, health/energy rewards at act3,
act0, byte narrowing at act255, invalid names and unowned stats, with saved
campaign state restored. Existing lifecycle/copy/save/legacy fixtures also pass.
Evidence: work/xml2-resume/permanent-reward-core-build.log and
permanent-reward-core-test.log. No world/HUD/gameplay acceptance claimed.
Player staging, assets, settings and saves remain untouched. Goal active;
no commit, push or publication.


### Permanent reward actor refresh (2026-10-01)

Added the actor half of permanentStatBoost: find native component at actor+2D8,
apply the reward to its owned stats at component+4, and recalculate the affected
health/energy maximum using native AFA90/AFBD0. XML2 B2125/B218A uses zero
arguments (no transient actor modifiers) for this reward. XML1 30CEB..30D4B
establishes native maxima as signed shorts at actor+246/+2BC and refills through
actor virtual19C/1A0. Those actual XML1 setters (2E5B0/2E5F0) are used; XML2
float fields are not copied into XML1. Base-stat rewards leave current resource
values untouched. Missing actor/component/owned stats returns without mutation.

Release build and full --powerup-definition-test pass, exit0. New fixture uses
native actor vtable3C94B4 and actual resource setters/calculators: health150 to180
and refill, energy56 to86 and refill, other resource isolation, base-stat reward
isolation, null actor/component exclusion, restored rules/campaign state and
stack/FPU balance. Logs: work/xml2-resume/permanent-reward-actor-build.log and
permanent-reward-actor-test.log. Native trace: permanent-reward-actor-consumers.asm.

Notification and script registration still pending; command count unchanged.
HUD integration trace confirms XML1 native message command9A410 uses manager
158860, virtual20, seven argument words (text,duration,RGBA,channel). Singleton
56DD08 is constructed by158330 behind init flag570D60. The message copy/ownership
boundary still needs inspection before supplying temporary text. Evidence:
hud-message-presence.asm and permanent-reward-hud-owner.asm (getter ends1588BB;
following function bytes are not part of it). No player files changed; no gameplay
acceptance claimed, commit, push or publication. Goal remains active.


### permanentStatBoost registered (2026-10-01)

Registered the original n/as descriptor after connecting the full reward path:
native script string conversion, native entity resolution and actor type check,
owned stats reward, affected resource maximum/refill, and XML1 HUD notification.
Notification uses existing manager158860 virtual20=156B50, whose virtual24
implementation156550 copies text at15659F..1565AD into its owned255-byte buffer.
Arguments retain native text,duration,RGBA,channel ownership; bounded temporary
text is valid until the synchronous call returns. New notices use English stat
labels, not XML2 localization IDs400..405 (unrelated XML1 entries). Translation
and visual presentation are not claimed verified. No game assets were modified.

Release build and full --powerup-definition-test pass, exit0. Registered-command
fixture uses real CValueString getters and extension dispatch, native character
construction/destruction and native stat/resource functions. It verifies one
act3 reward, one notification, no duplicate reward on invalid stat or absent
actor, null return and stack/FPU balance. Only entity-name lookup and final HUD
notification are substituted in that command fixture. Earlier direct native
actor fixtures cover both resources and four base stats. HUD ownership is
source-traced, not a rendered/gameplay check. Core fixture's older 'HUD and script
hook pending' text is historical for that helper's isolated test; this command
fixture supplies script integration, with the explicit HUD limitation above.

Evidence: work/xml2-resume/permanent-reward-command-build.log,
permanent-reward-command-test.log, reward-hud-constructor.asm,
reward-hud-message-copy.asm, reward-hud-text-owner.asm. Regenerated inventory:
46 additions (40 functional,6 retail no-op),8 pending gameplay commands.
Pending: stashMenu,setAutoEquip,restorelastzone,recallZone,isBlinkPortalActive,
setActorHuge,setRecallActive,dataDiscReward. Goal active, player EXE unchanged;
no commit, push or publication.


### Recall decision and load consumer trace (2026-10-01)

Full ADE80..ADF73 trace confirms isBlinkPortalActive invalidates the retained
zone if current/retained byte3 differs. Remaining branches require town metadata
and a retained zone other than the case-insensitive sentinel "none" (4945D0).
The result is not limited to being at the hub. 7C9E0..7CB24 returns from the hub
when a retained zone exists; otherwise departure needs an actor and town center.
New raven_recall_flow.h encodes these decisions without retaining pointers or
changing live state. Core fixture checks both directions, missing metadata,
actor absence, case folding, short names, sentinel and group invalidation.

Recall cannot just emit the XML2 command string: XML1's original image has no
loadextraction command. XML2 registration202DBB binds loadextraction to201940.
That consumer loads the map, distinguishes recall/extract, selects either stored
position or a marked extraction entity, positions each party member with native
formation offsets and headings, and invokes actor33220 after placement. Existing
XML1 loading/party placement must be used when connecting this missing flow.
No loader is replaced and no console string is forwarded to an unknown command.

Evidence: work/xml2-resume/recall-query-flow.asm (7C9E0 ends7CB24; subsequent
bytes not part of it), recall-load-extraction-command.asm (201940..201DF3),
recall-decision-build.log and recall-decision-test.log. This is a decision core,
not completed recall: campaign state/copy/save, loader/placement integration,
portal consumers and command dispatch remain pending. No command count change.
Player staging unchanged; goal active, no commit/push/publication.


### Recall campaign ownership and optional persistence (2026-10-01)

Recall now owns zone[32], position[3] and enabled state beside each of XML1's
three campaign records. Original XML2 79910 writes a32-byte return zone,
783D0 stores the departure vector, and775C0..77682 initializes return zone to
"none" and recall enabled (record+DA bit1). No XML1 native padding is reused.
Validated get/set helpers copy values; invalid name termination/boolean values
are rejected without mutation. Existing native record init/copy hooks now reset
and copy recall state with difficulty and act. Runtime travel consumers remain
pending, so no recall script command is registered yet.

The existing optional XML1DIF section gains version3 only when live or retained
recall data differs from defaults. Version3 is112bytes: existing22-byte v2
prefix plus two45-byte records (32 name,12 position,1 enabled), explicitly
serialized without host padding. Name tails are zeroed. Default campaigns and
previous difficulty/act-only cases retain absence/v1/v2 encoding. Load accepts
legacy/v1/v2 with recall defaults, and v3 with name/boolean validation before
publishing either record or advancing the cursor. Baseline remains unsaved,
matching XML1's native record policy. Older executables are not claimed to read
v3 saves; no user save was opened or rewritten.

Release build and full --powerup-definition-test passed, exit0. Coverage includes
all three native record initializers and all nine copy combinations, legacy/v1/v2
reset of stale recall data, separate live-only and retained-only v3 round trips,
position and disabled flag, preserved baseline and following bytes, exact cursor
advance, setter rejection and stack ownership. Evidence:
work/xml2-resume/recall-state-build.log and recall-state-test.log.
Source traces: recall-record-mutators.asm; recall-record-state.asm includes the
verified775C0 prefix and78AA0 getter (the preceding78A30 range begins mid-function
and is not evidence for a function entry).

Eight commands remain pending. Goal active; player staging, assets/settings/saves
unchanged. No gameplay/disk acceptance claimed, commit, push or publication.


### isBlinkPortalActive integrated (2026-10-01)

Registered the missing no-argument integer query. It obtains XML1's actual map
zone, authored extraction town-center presence for the saved current act, and
owned recall state. The traced ADE80 behavior checks the zone's fourth byte,
clears retained zone to "none" on mismatch, and otherwise tests retained return
availability. It does not test the separate enabled flag. The query preserves
stored position and enabled state when invalidating the zone. Town existence is
queried under the registry lock without imposing a temporary name-buffer limit.
No world portal actor, recall travel or loading behavior is claimed completed.

Release build and full --powerup-definition-test pass, exit0. The registered
query fixture uses the real native CMap getter, campaign get/set, extraction
registry, extension dispatch and native integer CValue creation. A private
interpreter arena supplies valid free-slot bookkeeping. Four cases verify hub
and field positives despite disabled recall, absent act metadata, and zone-group
invalidation; position/flag preservation and stack/FPU ownership pass. Temporary
map/game/interpreter state is restored and the private extraction definitions
are removed. No player process/assets/saves/settings are touched.

Evidence: work/xml2-resume/blink-query-build.log, blink-query-test.log,
inventory-blink-query.log. Inventory now47 additions (41 functional extensions,
6 retail no-op adapters),7 pending: stashMenu,setAutoEquip,restorelastzone,
recallZone,setActorHuge,setRecallActive,dataDiscReward. Goal active; staged EXE
unchanged. No gameplay/rendered portal acceptance claimed, commit/push/release.


### Recall-enabled consumers and portal request gate (2026-10-01)

Audited generated virtual228 calls by their actual singleton receiver. Four
calls use XML2 CGame7C550:1DC1A0 (1DC274),1DCD60 (1DCDBC),2022D0 (202358),
20D100 (20D176). Other same-slot matches use frontend1E8790 and are unrelated.
The two1DC functions gate UI action/presentation. Console spawnblinkportal is
2022D0, confirmed by registration and string4B1E14. Its hub branch invokes
recall before the enabled/cooldown tests. Outside the hub it requires enabled,
nonpositive cooldown and an eligible living party actor. Direct recallZone's
7C9E0 has neither condition; do not add the enabled gate to that script command.
20D100 forwards spawnblinkportal through session machinery; final classification
of that entry is still pending, not assumed to be a local gameplay requirement.

Added/tested this portal-request decision separately from direct recall planning.
Coverage: disabled/cooling-down hub return, normal creation, disabled/cooling-down
field rejection, no eligible actor and unordered cooldown rejection. Release and
full --powerup-definition-test passed, exit0. Evidence:
work/xml2-resume/recall-gate-build.log, recall-gate-test.log,
recall-enabled-consumers.asm, recall-cooldown-getter.asm.

New dependency traced: CGame virtual230=78490 reads cooldown at game+58C,
record+50;784A0 sets it. Update7DB99 subtracts game delta at game+3EC and clamps
at zero at7DC2C. Its surrounding pause/activation conditions and expiry action
still need tracing before a native XML1 tick hook. Use native game time, never
wall-clock time. The enabled setter remains unregistered until portal consumers
are connected. No new command completion claimed:7 pending. Player EXE unchanged,
goal active; no commit, push, release or gameplay acceptance claim.


### Recall cooldown semantics and XML1 clock boundary (2026-10-01)

XML2 spawnblinkportal sets cooldown to300.0 seconds at2025F9 (43960000),
including its post-spawn failure path. Update7DB99..7DC2C subtracts the native
game delta, clamps to zero and emits message49E only on positive-to-zero
transition. PredicateD79F0 bypasses this update; its exact integration exclusion
must be retained/classified before enabling a hook. New pure cooldown step
implements this countdown/one-shot transition without touching any game clock.
Tests cover zero delta, fractional decrement, overshoot, exact expiry, no repeated
notification and invalid negative/unordered delta rejection. Release and full
--powerup-definition-test pass, exit0; recall-cooldown-core-build.log and
recall-cooldown-core-test.log. No cooldown state or native tick hook enabled yet.

XML1 update73190 has its existing native delta at CGame+3A0, derived at731A7
from clock11C0C0 and prior time+39C. Native time scaling recalculates it at7331A;
using the earlier raw value would be wrong. Native73616 follows camera update,
a candidate boundary corresponding to the XML2 insertion region, but final
pause/branch audit and expiry notification adaptation are still required.
Source trace recall-cooldown-update.asm now begins on verified7DB7B, replacing
the earlier mid-instruction7DB60 range. Original update's49E string must not be
passed into XML1's unrelated localization table. This work preserves the game's
clock; no host time, pacing, performance, asset or player-save changes.

Seven commands remain pending and overall goal remains active. No executable
staged, gameplay acceptance, commit, push or publication.


### Owned recall cooldown and persistence (2026-10-01)

Added cooldown float to each owned recall record. Native XML1 record init/copy
now includes it through the existing whole-state ownership code. The campaign
step helper decrements only the live record and returns the one-time expiry
signal; it does not itself run on a host clock or modify native clock values.
Tick hook and expiry HUD notification remain pending.

Optional XML1DIF version4 appends two cooldown floats to the complete112-byte v3
prefix, total120bytes. It is emitted only for nonzero live/retained cooldown;
otherwise previous absence/v1/v2/v3 encodings remain unchanged. Reader accepts
all prior versions with zero cooldown defaults. Existing v3 private fixtures
remain readable; older executables are not claimed to read v4. Fields are
explicitly serialized, not copied as a padded host struct.

Release build and full --powerup-definition-test pass, exit0. Native init/copy
checks now seed cooldown; v3/v4 round trips cover live and retained independently,
combined recall/cooldown and cooldown-only state. Native section cursors, following
sentinels, baseline preservation, live-only ticking, exact expiry and repeated
zero ticks pass. Evidence: work/xml2-resume/recall-cooldown-state-build.log and
recall-cooldown-state-test.log. No player save was opened or written.

D79F0 is now traced: return602E98!=FF, with siblingD7A00 testingFE andD7A10
checkingFD. This proves its immediate predicate, not yet the mode meanings or
all writers. Trace recall-network-predicate.asm. Seven commands still pending,
overall goal active; staged player EXE unchanged. No commit/push/publication or
gameplay acceptance claim.


### Recall native tick wiring (2026-10-01; validation in progress)

Resolved the previously ambiguous D79F0 predicate: XML2 script
getDangerRoomActive AD960 calls it directly. It is Danger Room activity, not
networking; earlier filenames/labels suggesting networking for this predicate
are superseded. Existing XML1 queryBF730 (also used by endDRScenario99890)
checks mode byte4E7AB0 againstFF. Reuse that existing system unchanged.

Guard-campaign-extra now adds xml1_recall_tick at native73616, after the existing
CGame73190 admission branches and adjusted simulation-delta calculation at7331A.
The helper takes the live game owner only, reads game+3A0, suppresses countdown
in native Danger Room mode, and preserves guest registers. Expiry queues an
English readiness notice via XML1's existing owned HUD text path. It does not
alter clocks or introduce a wall-clock timer. The guard handles repeated edits
within one generated file without overwriting a prior hook and passes twice.

A fixture exercises native BF730 mode exclusions0/FE/FD versusFF, owner rejection,
countdown and single expiry, unrelated recall state and register/FPU preservation.
Only its final HUD terminal is substituted. Build/test command currently runs
under the live tool session; final result must be checked before accepting this
checkpoint. Evidence files: recall-tick-build.log and recall-tick-test.log.
Seven commands remain pending; staging and user assets/saves unchanged.


### Recall tick validation and native travel boundary (2026-10-01)

The previously pending recall-tick build completed. The follow-up
recall-hub-build.log / recall-hub-test.log run also completed with exit 0.
The programmatic fixture verifies native Danger Room exclusion, the actual
CGame owner, simulation delta, a single expiry notification and preserved
register/FPU state. The notification terminal is substituted in the fixture;
this is not visual or gameplay acceptance. Player staging remains unchanged.

Re-reading XML2 7CA70..7CA72 exposed a decision-layer bug: at the town center,
the stored "none" return sentinel exits even if an actor is available. Fixed
raven_recall_plan and added a mixed-case hub/sentinel case with a live actor.
Without this correction the adapter could have replaced the return location
with the hub. Native XML1 behavior was not changed.

XML1 travel integration evidence:
- Native loadZone 9A930..9AA0A sends the arrival string to CMap virtual68
  (806B0: copies up to64 bytes into map+A0), then destination to virtual3C
  (804B0..80554). This requests a transition; it is not synchronous arrival.
- CMap virtualAC 80640..8068C copies destination to map+1E0. LoadZone sets
  the transition flag at map+220 and invokes existing subsystem preparation.
- Native map load calls 829E0 from 821CB (return821D0). At 82A51 it invokes
  CGame virtual130 (6FD70..7008A), with map+60 and map+A0 as arguments.
  The original diagnostic string at3CEBA0 is "Placing players at start points...".
  This is followed by native persistent-player recovery and camera setup.
- The player-placement routine enumerates native start points and actors,
  checks living/eligible actors, and calls marker placement93CB0. Recall's
  stored coordinates must be integrated at the correct arrival boundary,
  not applied immediately after scheduling LoadZone or kept as actor pointers
  across zone destruction. No arrival hook is installed yet.

Raw traces: work/xml2-resume/recall-xml1-zone-loader.asm,
recall-xml1-map-request.asm, recall-xml1-map-fields.asm,
recall-xml1-arrival.asm and recall-xml1-player-placement.asm.
Seven script entries remain pending; this checkpoint does not mark recall
travel or portal creation complete.


### Recall authored hub-anchor interface (2026-10-01)

Traced XML2 action definition2B32C..2B350: the recall-anchor flag is derived
from a case-sensitive substring "blinkportal" in the act script, not the
entity display name. XML2 loadextraction201BB8 consumes that flag and the
normal action transform. XML1 already binds act at action+78 through6E2D0
(28CF8..28D14) and exposes its script name through6DE80. XML1's actionent
class descriptor is483388 (getter270A0). No XML2 flag offset or new asset
attribute is appropriate here.

Added recall_anchor_transform: given a live native actionent, use the real
XML1 script getter, consume its temporary text before any other guest call,
and copy position/rotation into caller-owned arrays. Reject missing scripts,
case mismatches, unrelated scripts and unterminated256-byte names. The helper
is not yet connected to scene enumeration or travel and is not a completed
recallZone implementation.

The fixture redirects only the script-reference table into a private native
allocation, invokes the real6DE80 getter/string copy, then restores the owner
and frees the allocation. Valid anchor transform, negative cases, output
ownership and stack/FPU checks pass. recall-anchor-build.log and
recall-anchor-test.log completed with exit0. No gameplay or assets touched.

Additional native arrival evidence: marker placement93CB0..93E43 uses the
actor's existing movement interface (virtual34, or linked actor virtual150),
not direct position writes. The range28420..28762 is action activation, NOT
the action definition parser despite the earlier scratch trace filename.
The actual XML1 definition parser is287A0..28DBE. Partial traces whose file
headers say FUNCTION at an interior address are instruction windows only;
verified generated function boundaries take precedence.


### Recall native scene enumeration (2026-10-01)

Added recall_find_anchor using native actionent class483388, query allocation
A2A70, default predicate3C898C, native result lists A2B10/A2B70 and query
release A2AC0. It selects the first matching authored act script in native
scene order and returns a generation handle plus copied position/rotation.
No entity/list pointer is retained. The query availability check A2AE0 avoids
an exhausted native pool; both result and query slots are released on all
normal and absent-result paths.

Programmatic validation uses the real query/list allocator, handle manager,
script-reference getter and default predicate. Only class scene membership
is substituted, with the requested action class and empty exclusion verified.
Two authored portal markers select the first; replacing its act script with
an unrelated script selects the second. Nonportal/empty results and exhausted
query/result pools leave no borrowed slots. Stack/FPU checks pass. All private
pool, manager and script-owner state is restored after the fixture.

recall-scene-build.log / recall-scene-test.log completed with exit0. This
helper is ready for the arrival adapter but does not yet have a production
travel caller. recallZone, portal spawning and the seven pending command
entries remain unfinished. Staged player executable remains untouched.


### Recall script context and movement call boundaries (2026-10-01)

The native recallZone descriptor49ACE8 has return n and no explicit script
arguments. B72F0 retains pushed index1 across interpreter singleton E7A70,
then invokes context getter E5D30; it does not fetch an argument-list entry.
The corresponding existing XML1 context accessor is CAEC0..CAEE9, which
bounds the index to0..15, uses current context4EBF50 and context keys4EC200,
and tails to CAC20. This prevents mistakenly exposing a required actor
argument in the new command. Resolving index1 into the actual context value
still requires a native fixture; the index accessor alone is not validation
of the complete command.

Movement integration evidence: XML1 actor vtable3CF23C virtual34 is
2E4D0..2E4FD. It calls the actor's virtual2C rotation setter and virtual1C
position setter. The native rotation implementation2E460..2E4C7 maintains
cached orientation at+1D8, invokes virtualF4/118 as applicable and updates
through66BE0. Calling the existing combined transform interface preserves
these consumers; directly writing position/rotation would not.

Traces: recall-activator.asm, recall-xml1-context-and-move.asm,
recall-xml1-actor-transform.asm, recall-xml1-actor-rotation.asm. These are
read-only interface findings. No script registration, arrival hook or travel
completion is claimed by this checkpoint. Next integration must queue owned
destination/coordinates, discard stale requests on replacement/reset, resolve
the current party after load, and use native movement before camera setup.


### Recall native script-context adapter (2026-10-01)

Implemented recall_context_actor through native CAEC0(index1), the actual
value's string virtual14, existing XML1 entity/handle resolution and native
actor RTTI. XML1 CD02F binds _activator_ to context key4EC208, confirming the
slot rather than assuming an explicit function argument. Missing context or
value yields no actor, allowing the later hub-return path to run independently.

The private native fixture sets a one-entry context tree for the real key,
uses CValueString's real getter and resolves numeric handle1024 through the
native entity manager. The actor case succeeds; nonactor, empty tree and no
active context reject cleanly. Stack/FPU checks pass. Context owner, class
metadata and native entity-manager storage are restored. This is a native
adapter check, not yet registered recallZone dispatch or travel validation.

recall-context-build.log / recall-context-test.log completed with exit0 after
correcting new helper pointer casts. Recall anchor/scene checks still pass.
No player staging changes, no inventory count change; seven entries remain.


### Recall travel adapter installed, validation running (2026-10-01)

Added raven_recall_travel.inc: owned pending destination/position, existing
native CMap load interface, departure/return campaign-state changes and a
single-use arrival adapter. The native map destination setter80640 cancels
older pending recall; live campaign record initialization also cancels it.
The arrival hook82A77 follows native player placement/recovery and precedes
camera setup. It rejects a mismatched destination and resolves the party
after loading, never retaining departing actor pointers. Direct recall keeps
its independence from the separate portal-enabled/cooldown gate.

Native party placement uses existing CGame virtualE0 collection, generation
handle resolution and actor virtual34 (combined native rotation/position).
Only the four defined XML2 formation entries are applied; any fifth XML1
collection entry keeps native placement. This boundary still needs its own
native programmatic verification before declaring travel finished.

An orchestration fixture now covers departure, actorless return, owned state,
hub no-op, gate independence and cancelled/mismatched/single-use arrivals,
with load/scene/placement terminals substituted. Build/test invocation is
currently running as shell session98677, logging to recall-travel-build.log
and recall-travel-test.log. Do not treat this paragraph as a passing result.
The header change causes a broad generated-code rebuild; poll the same live
session rather than starting another build.

Remaining travel work includes native party/transform validation, the hub
anchor activation calls, registered command dispatch and inventory refresh.
Activation interface evidence: XML2 action virtualE4=295D0 marks its active
flag and updates state; XML1 equivalent is also virtualE4=270D0, not virtualDC.
The timed action is XML2 virtualC8=298F0 / XML1 virtualC0=27A60. Do not infer
all action vtable slots by one fixed offset. No activation hook is added yet.
Player staging unchanged; recallZone is still unregistered.


### Recall travel build and activation follow-up (2026-10-01)

Shell session98677 completed with exit0. recall-travel-test.log confirms the
orchestration fixture passed. The broad generated rebuild reported an existing
shift-count warning in recomp_0025.c; the recall adapter build had no error.
The subsequent recall-activation-build.log / recall-activation-test.log run
also completed with exit0.

Corrected the context-type assumption from the prior checkpoint: XML2
B7329 uses598B24, whose class getter6E450 names ent (491378), not actor.
Actor is the distinct58BDCC type (name491EB8). recall_context_entity now
uses XML1's existing base ent type499568 after native context/name/handle
resolution. The native context fixture tests the matching base-entity RTTI.
Earlier notes saying recall must reject nonactors are superseded; general
scripted entities can provide the departure position.

Added hub-anchor activation through XML1 action virtualE4 and timed-action
virtualC0, resolving the generation handle immediately before use. The
orchestration fixture confirms activation only on hub arrival, once, and
not on return travel. Actual action calls are still a substituted terminal
in that fixture and need targeted contract validation.

Added existing XML1 ground placement34940 after each actor's native combined
transform. Its verified function range is34940..34AA9, with original native
position-query/collision handling. This corresponds to XML2's post-transform
33220 call without importing its separate navigation implementation.
recall-xml1-ground-placement.asm records the native interface evidence.

Remaining before recallZone registration: native party/transform/ground and
anchor-action contract checks, then registered script dispatch. Seven pending
entries and the staged executable remain unchanged.


### Registered recallZone and call-contract validation (2026-10-01)

Registered recallZone with the original n/empty-arguments descriptor. It
uses the existing native _activator_ context and entity resolver, retains
owned departure coordinates, requests the native asynchronous CMap load,
and consumes its arrival packet before native camera initialization. Hub
return does not require an activator or the portal enabled/cooldown gate.

Native call-contract fixture covers party selector(-1,normal caching), four
formation transforms, missing handle/nonactor skips, retained native fifth
slot placement, ground adjustment after each transform, anchor activation
then timed-action arguments, no action on absent handle, and the actual
native806B0 arrival-string copy. World/party/action terminals are substituted;
the test does not claim navigation/collision/animation execution in a level.
The existing separate fixtures exercise native scene lists, script getters,
context trees, entity handle resolution and type checks.

Registered dispatch fixture invokes the real extension lookup/thunk without
arguments, performs actorless hub return through the real empty-context path,
checks owned return coordinates at arrival, and verifies the next field call
without an activator does nothing. Stack/FPU and script void return checks
pass. Loader and movement are substituted terminals in that fixture.

recall-contract-build/test.log and recall-dispatch-build/test.log all finished
with exit0. Refreshed command/event inventories with the audit script; now
48 registered additions (42 functional plus6 original retail no-ops), with
six pending names: stashMenu, setAutoEquip, restorelastzone, setActorHuge,
setRecallActive, dataDiscReward. Portal creation/gating remains work required
for setRecallActive; recallZone itself is direct script travel, not a portal
spawn operation. No gameplay acceptance, final staging, commit or publication
was performed. The full TODO #3 goal remains unfinished.


### restorelastzone already exists as XML1 endsidemission (2026-10-01)

Presence trace found XML1's native console command endsidemission, registered
at18E26F..18E27E with function18DF20..18E08D and literal3DE958. This existing
facility reads the native cached-zone list through86000 virtual48, selects
the final record at18DF73, conditionally restores the stored four-character
party, then queues loadmap for that cached destination. This is the system
exposed by XML2 restorelastzone, whose script B0360 dispatches its console
entry2027A0. It is not merely a generic loadMap name match.

Per the user's rule, presence ends this investigation. No signature/parity,
UI policy, cache-size or behavioral reconciliation is pursued, and no alias
or replacement implementation is added. XML1 wins. Audit now validates the
original console registration bytes, original cached-record selection and
XML2 script entry, and reports restorelastzone as existing/skipped.

Evidence: work/xml2-resume/restore-last-zone-script.asm,
restore-last-zone-registration.asm, restore-last-zone-native.asm and
xml1-existing-endsidemission.asm. The registration-window FUNCTION headings
are instruction windows, not independent function-boundary claims.
Inventory audit completed with exit0 (inventory-restore-existing.log).
Five names remain pending: stashMenu,setAutoEquip,setActorHuge,setRecallActive,
dataDiscReward.48 added entries remain registered. This was read-only native
presence tracing plus inventory/documentation changes; no game rebuild was
needed and player staging is unchanged.

## Auto-equip release and ownership contract (2026-10-01)

Continued from the current five-entry inventory; no completed handler reopened.
The remaining auto-equip implementation must use a party-wide transaction,
not independent replacements that reserve each enabled hero's old equipment.

XML2 setAutoEquip AF350 reads one integer, visits the character-manager entries
accepted by virtual7C, sets each selected stats object's virtual88 boolean,
and calls CAutoSpend virtual14 immediately. Its equipment pass4A7E0 has three
separate loops over living, auto-enabled party actors: remove current effects
(CB5B0) and clear equipment (stats virtual68), choose slots1 through3 in slot-
major/party order, then rebuild effects (CBCD0) and refresh (CAB10). The choice
list is rebuilt for each character/slot. Thus gear released by another enabled
participant may legitimately become available; the earlier 'never borrow another
hero's gear' note must not be interpreted as forbidding this redistribution.
Characters outside the selected living/auto-enabled set retain ownership.

Resolved stats vtable494794 interfaces: virtual68=C7E90 repeatedly invokes
virtual64 to remove every equipment handle; virtual60=C9160 inserts a handle
and calls inventory virtual104 with state1. Removal C91F0 calls that inventory
slot with state2 atC9275 and then item virtual5C. These are item-state changes,
not a bare clear of the stats array. CB5B0 also removes active effect handles
and resets their collection. Only the final refresh should reapply new gear.
Evidence: work/xml2-resume/auto-equip-release-commit.asm,
auto-equip-inventory-transition.asm and auto-equip-release-tail.asm. Interior
trace starts are instruction windows, not additional function entry points.

XML1 integration interfaces checked: inventory quantity getter7E430 (virtual74)
returns a byte; setter7E450 (virtual7C) accepts a signed16 quantity and clamps
to the item's authored maximum byte. Automatic temporary release must therefore
not silently lose copies by exceeding that maximum. Stats47B70 and47E10 return
success in AL and mark stats+2E bit0 dirty, but do not adjust shared quantities.
A sequential executable-section disassembly found the sole direct insertion
call at166A3E in the manual equipment transfer; there are no raw absolute
references to47B70. This narrows the presence search but does not exclude
inlined native auto-selection. Evidence: xml1-equip-insert-callers.txt.

Next: finish XML1 presence/refresh and flag-lifetime assessment, then implement
the missing reusable selection/ownership transaction with quantity conservation
and disabled-character preservation checks. setAutoEquip remains pending; no
runtime changes, build, gameplay validation or staged executable replacement
were performed in this trace pass.

## Auto-equip quantity ledger and native refresh (2026-10-01)

Added src/raven_auto_equip_inventory.h and its standalone test target. The
ledger keeps intermediate released quantities in 32 bits, admits only native
byte IDs excluding FF, rejects invalid initial quantities, prevents taking
unavailable copies, and validates every final quantity before publishing any
output. A final count above the authored limit rejects the transaction rather
than silently clamping. This is a component for the upcoming guest adapter,
not a replacement inventory or a registered script implementation. The adapter
must still supply participant selection, eligibility, native stats mutations,
rollback, effect refresh and persistent preference lifetime.

Programmatic build/test passed: raven-auto-equip-inventory-test, logs
work/xml2-resume/auto-equip-inventory-build.log and
work/xml2-resume/auto-equip-inventory-test.log. Cases include 255 stored copies
plus four temporary released copies, exact conservation after re-equipping,
exhaustion, FF rejection, invalid initial state and all-or-nothing final output.
This test does not establish the native integration or gameplay behavior.

Additional XML1 integration evidence: B2490 rebuilds character-associated actor
effects; manual character-menu commit167AC1 calls it with two stack arguments
and the character in ECX. B1150 refreshes/releases existing effect references
and clears the character stats dirty bit. Further argument/use tracing remains
required before choosing a guest call boundary. Trace:
work/xml2-resume/xml1-equipment-effect-refresh.asm.

47CC0 is another inlined equipment insertion path: it restores the provided
per-character ID snapshots, paired with47BE0 capture. Its menu callers are
16A360 and16B650. It does not perform eligibility/ranking/automatic selection.
Trace: work/xml2-resume/xml1-equipment-bulk-insert.asm. These are existing
snapshot facilities to preserve, not new auto-equip code to rewrite.

Still five pending script names; no registry completion claimed. No player
assets/settings/saves, staged executable, Git commit or remote publication
changed. Continue XML1 presence/refresh and preference lifetime assessment,
then connect the ledger to the native equipment-selection transaction.

## Auto-equip preference lifetime and v6 saves (2026-10-01)

XML2 stats serializer C7CE0 writes 1C bytes from stats+28 atC7D47; reader
C8EA0 restores the same range atC8FCE. This contains auto-equip bit3 at+43.
Reset57D70 and constructor58980 clear that bit. Therefore the preference is
per-character persistent state, not a process-global toggle. CAutoSpend vtable
493DF4 slot14 is4A7E0 (equipment); slot10 is4A6A0 (stats/powers). The equipment
script calls slot14, so importing it must not trigger automatic power spending.
The inventory path88680 also calls slot14 at88DEA after an item type2 check.
This establishes a subsequent inventory-change consumer beyond script dispatch;
its XML1 integration point still needs tracing. Evidence:
work/xml2-resume/auto-equip-stats-lifetime.asm and auto-equip-apply-lifetime.asm.

Added an independent auto_equip boolean to the existing complete-stats adjunct
owner in raven_vitality_bonus.c. It shares the already audited native construct,
copy/assignment, reset and retirement boundaries, rather than creating another
owner with mismatched lifetimes. New accessor functions are separate from bonus
arithmetic. Copies preserve preference; retired/reused/reset records disable it.
Nothing is stored in XML1 padding or keyed by a skin/roster position.

Character section v6 adds exactly one flag byte after the existing v5 bonus
pair for every live/snapshot record. The production record codec rejects an
invalid flag before modifying the destination bonuses, consumes exactly three
bytes for v6 and two for v5, and defaults the preference off for older saves.
No native record layouts or unrelated save sections changed. The added flag
has no gameplay effect until the pending auto-equip adapter is connected.

Passed focused builds/tests: raven-vitality-bonus-test and
character-save-header-vitality-test. The latter calls the production record
codec for versions0 through6 and checks exact cursor advancement, adjacent-byte
preservation, legacy reset and bonus retention. Logs:
work/xml2-resume/auto-equip-state-build.log,
auto-equip-state-owner-test.log and auto-equip-state-save-test.log.
Full xml1-boot-probe build/test started separately; do not infer completion
from these focused tests. setAutoEquip and the other four names remain pending.
No staged executable or player data modified.

Full validation result: xml1-boot-probe built and --powerup-definition-test
completed with exit0 (session35923). Logs: auto-equip-state-probe-build.log
and auto-equip-state-probe-test.log in work/xml2-resume. No gameplay validation
is claimed. Inventory-change trigger disassembly is saved separately as
auto-equip-inventory-trigger.asm; slot14 call is at88DEA.

## Auto-equip selector and pickup commit trace (2026-10-01)

Added raven_auto_equip_selection.h, using the private quantity ledger. It
selects category-major then participant order, chooses the highest native cost
among available eligible definitions, and leaves eligibility/assignment to the
native adapter. Equal prices retain source order. XML1 stock items.eng supplies
classes0,1,2 (72/16/28 equipment definitions respectively); XML2's1..3 must not
be pasted over these existing values. Categories are collected from authored
candidate data, including mod categories, rather than a hardcoded mapping.
Native XML1 eligibility166790 remains the authority on three-item capacity,
class conflicts47AD0 and requirementsA34A0. No stock data is rewritten.

The selector rejects duplicate/invalid definition IDs before assignments,
stops on insertion failure and only consumes a ledger copy after assignment
succeeds. Caller still owns rollback/effect refresh and final publication.
Focused test now covers requirement rejection of the most expensive item,
shared copies across two participants, authored category42, equal-cost order,
assignment failure and empty participant set, alongside previous conservation
checks. Build and test passed exit0: auto-equip-selection-build.log and
-test.log in work/xml2-resume. This is not yet a registered/native adapter.

Located XML1 world pickup7D6A0. It checks native pickup acceptance28420 before
item handling. Equipment is record type1 (record+C); after acceptance the
quantity update is7DB3C..7DB50: add pickup amount to record+1C and call7DEC0.
Native7DEC0's clamp/commit body must be checked before wiring the hook. The
successful path continues existing pickup notifications/effects at7DC60.
Failed/full/declined pickups have earlier exits. Evidence:
work/xml2-resume/xml1-inventory-pickup.asm and xml1-item-collect-gate.asm.
Potential integration boundary is after7DB4B's quantity call, with explicit
equipment-type filtering, not a hook on every general quantity write (which
would recurse during auto-equip and affect save restoration/menu transfers).

Resolved inventory interfaces: virtualA8=7E130 returns definition count;
virtual80=7E4A0 reads authored maximum quantity; virtual74=7E430 quantity;
virtual78=7EF50 native cost; virtual8C=7EFB0 authored class. Slot1C=7E270
returns the item record. Preserve native types and exclude keys/currency/etc.
All five script entries remain pending. Staged executable and player data
are untouched; next work is the native adapter, rollback/effect refresh and
pickup integration using the persisted per-stats preference.

## Auto-equip native transfer adapter (2026-10-01)

Added src/raven_auto_equip_guest.inc, included by raven_script_extensions.c.
The transfer adapter receives unique participating character owners, snapshots
native equipment IDs before mutation, detaches effects throughB11E0, removes
through47E10, selects with native166790 eligibility and47B70 insertion, and
publishes quantities through7E450 only after the private ledger validates.
Both success and rollback refresh effects through nativeB2490 with menu-derived
arguments(0,13). This keeps native capacity, requirements, ordering and effect
ownership rather than mutating the global equipment menu or writing raw stats.

If insertion or final quantity validation fails, no inventory was published:
the adapter removes partial equipment, restores every original ID with native
insertions, then refreshes effects. Failed native restoration is explicit/fatal
rather than falsely reporting success. The caller still must supply living,
auto-enabled party owners; script dispatch and pickup hook are NOT enabled yet.

Native quantity commit7DEC0 was verified: it clamps its signed16 argument to
zero/authored byte maximum, writes record+1C and returns AL=1. The successful
pickup boundary7DB50 follows this call; filter equipment record+C==1 there.
This is distinct from hooking all quantity writes (including menu/save paths).
Evidence: work/xml2-resume/auto-equip-commit-boundaries.asm.

The production transaction is called from xml1_script_extensions_fixture,
not just the environment-gated interpreter smoke. Its isolated fixture runs
real XML1 stats getters/insertion/removal and their calling conventions.
Inventory definition/cost/quantity, native requirement evaluation and scene
refresh endpoints are substituted, with argument and owner assertions. Cases
verify successful redistribution, native byte-ID sorting, exact copy counts,
effect detach/refresh calls and full rollback when the final inventory count
would exceed its maximum. This does not validate real scene effects or native
requirement parsing in this adapter yet.

Built xml1-boot-probe and ran --powerup-definition-test successfully, exit0;
confirmed the new PASS auto-equip native stats transaction line is present.
Logs: work/xml2-resume/auto-equip-transaction-build.log and
work/xml2-resume/auto-equip-transaction-test.log. Staged executable/player data
unchanged. Five entries remain pending; continue party discovery, preference
setter/dispatch and pickup hook with ABI-preserving integration checks.

## Auto-equip party/script boundary in progress (2026-10-01)

Added auto_equip_set_preferences, auto_equip_run, set_auto_equip and the exported
xml1_auto_equip_pickup entry. The setter uses XML1 CharacterManager native
accessors56C90/56DB0/56D90/56E60, then stats801F0 and the existing adjunct owner.
XML2 available flag59D10 corresponds to XML1 available flag56DB0, not the
separate instantiated-pointer test56D90. The XML1 guards continue to own expanded
roster address/layout calculations. Party selection uses native322B0 list,
72470(game,list,-1,normal-cache), generation handles6BF80 and native actor RTTI.
Only living actors (health+240>0) with enabled owned stats participate; duplicate
character owners are collapsed. Hook saves/restores nine guest registers and
checks FPU depth; busy guard excludes recursive auto-equipment entry.

Extended the isolated fixture with actual native actor type/identity checks,
preference ownership, dead/stale/duplicate actor filtering, disabled character
preservation and hook register/FPU assertions. Inventory/party lookup terminals
remain substituted; the native stats insertion/removal methods still run.
These NEW assertions await the current full rebuild/probe test result.

Prepared scripts/guard-auto-equip.py and added it to generate-code.ps1. The
guard targets7DB50 after quantity commit7DEC0, checks the original continuation,
and is intended to be idempotent. It has NOT yet been applied to generated code,
and setAutoEquip is NOT yet in the registered extensions table. Do both only
after validating the new fixture; then validate registered dispatch and rerun
the inventory. Five pending entries remains the authoritative count.

Current live build/test session95635: xml1-boot-probe rebuild followed by
--powerup-definition-test. Log files auto-equip-party-build.log and
-auto-equip-party-test.log in work/xml2-resume. Re-poll this handle; do not
restart just because observation timed out. No staged executable/player data
changes. Earlier completed native-transfer tests remain valid but do not prove
the new party/dispatch integration.

## setAutoEquip registered and programmatically validated (2026-10-01)

The full party rebuild/probe run session95635 completed exit0. Applied
scripts/guard-auto-equip.py twice successfully (idempotence) and registered
setAutoEquip with recovered n/i descriptor. The registered-dispatch fixture
resolves its callback from the populated extension table and uses native
CValueFloat integer conversion to exercise zero and negative nonzero inputs,
per-character preferences, immediate selection, void result, caller-owned
arguments and balanced guest stack/FPU. It runs only from the programmatic
fixture, never normal startup. The generated pickup hook calls the ABI-saving
entry after native accepted pickup quantity commit, filtered to equipment.

Built and ran xml1-boot-probe --powerup-definition-test, session31361 exit0.
Confirmed PASS lines for native stats transaction, pickup/roster integration
and registered setAutoEquip in work/xml2-resume/auto-equip-dispatch-test.log.
Build log: auto-equip-dispatch-build.log. Earlier owner/save tests cover v6
roundtrip, character snapshot independence and older-save default-off behavior.
The source guards retain expanded roster access and original asset metadata.

Validation boundaries: native stats getters/insertion/removal, actor RTTI and
script argument conversion execute; inventory/party lookup, eligibility and
world effect endpoints are substituted in the transaction fixture. Their
native interfaces were traced, but actual scene effects, pickup presentation
and live gameplay are not claimed tested. User gameplay acceptance remains
separate under this goal's basic programmatic validation policy.

Audit refreshed successfully, inventory-auto-equip.log exit0. Current script
inventory:49 registered additions (43 functional,6 retail no-op adapters),
four pending: stashMenu,setActorHuge,setRecallActive,dataDiscReward.
Existing XML1 facilities remain skipped. No player assets, saves, settings or
staged executable changed. Full goal remains active; stage only after its
remaining scope is complete. No process/build currently running.


### 2026-10-01 dataDiscReward capacity ownership (in progress)

The reward remains unregistered/pending. Its XML2 milestone trace is unchanged:
counts4/8/12/16/20 add health2/energy2/health4/energy4/both6 and award
500/750/1000/1500/2500 XP. Collection flags belong to the caller's game variable.

New XML1 consumer evidence corrects the integration target: inventory vtable
3CE064 slots34 and38 both point to7E0B0, which derives the normal health/energy
allowance from the supplied level (or CharacterManager v50=54C30 for -1).
Pickup7D6A0 uses those separate slots at7D91C and7D992, compares against the
current quantities from v3C/v40, and rejects a full pickup. Thus changing only
itemrecord+1D is insufficient. The latter remains the separate authored storage
limit used by7DEC0/7E450;7DF30 defaults it to99 and7F100 parses capacity expressions.
Evidence: work/xml2-resume/xml1-pickup-capacity-consumers.asm and
xml1-disc-capacity-baseline.asm. The baseline level formula and authored limits
must remain native; independent additional allowances need to feed both virtual
capacity interfaces before this reward can be registered.

Implemented the persistence prerequisite in raven_campaign_state_guest.c/.h:
two additional byte allowances per native campaign record, zero by default,
following native init/copy ownership. XML1DIF v5 appends four explicit bytes to
the unchanged120-byte v4 prefix (live and retained owners); older versions reset
added allowances to zero and leave the unsaved baseline record alone. Default
campaigns still emit no optional section. Addition saturates at byte capacity
rather than wrapping after repeated mod-script invocations. No item definitions,
stock allowances or inventory quantities are changed by this prerequisite.

Validation: disc-capacity-state-build.log and disc-capacity-state-test.log,
xml1-boot-probe --powerup-definition-test, exit0. Expanded actual campaign fixture
executes native record initialization/copies, all legacy/v1-v5 stream round trips,
independent health/energy and live/retained values, unchanged baseline, adjacent
byte/cursor boundaries, cooldown prefix preservation, large-add saturation, and
unknown-source reset. Guest stack balance checked. This is in-memory programmatic
validation, not disk-save or gameplay acceptance. Native capacity consumers,
reward dispatch/refill/XP and popup integration remain to be connected and tested.
The player executable and assets were not changed.


### 2026-10-01 collectible capacity consumer integration

Connected the independent campaign bonuses to inventory virtual methods34/38.
Both delegate to XML1's original7E0B0 level/party query first; zero bonuses return
its value unchanged. Added capacity respects the item's authored byte storage
limit without lowering an existing native allowance. The verified constructor
7F760 installs two process-lifetime guest thunk tokens in native table3CE064;
script-extension code lookup recognizes them. No caller-address inference or
pickup-specific override is used: all virtual capacity consumers share the
result. The generation guard validates the constructor boundary and is idempotent.

Validation: disc-capacity-consumers-build.log and disc-capacity-consumers-test.log,
xml1-boot-probe --powerup-definition-test, exit0. The capacity fixture uses actual
indirect dispatch through both table slots and the native7E0B0/54C30 functions,
including a private expanded character manager for the -1 party-level query.
It covers levels0/9/10/35/45, separate health/energy bonuses, authored limits12/99/255,
zero-bonus exact preservation, saturation and unchanged definition bytes, stack
and FPU balance, code-token recognition and repeated installation. Fixture state
is restored afterward. These are native interface tests, not an in-scene pickup
or visual acceptance test. Campaign save-state checks also continue to pass.

XP connection identified for the remaining reward adapter: native XML1 script
awardXPToPlayable98AC0 calls CharacterManager vCC with (xp,1), then2FCF0(xp,0).
This is the existing facility to reuse; do not add another XP allocation system.
Evidence: work/xml2-resume/xml1-disc-reward-xp-interface.asm. The dataDiscReward
command remains pending until reward dispatch/refill/XP and popup are integrated.
No staged executable, player assets or settings changed.


### 2026-10-01 dataDiscReward registered and programmatically validated

Added dataDiscReward(n/s) through the external script extension registry, using
raven_disc_reward_guest.inc. The supplied saved game variable is queried through
the existing game_variable/flag_count path; the command never advances collection
flags. Only counts4/8/12/16/20 grant the traced capacity/XP milestones. Count0 and
nonmilestones grant neither; progress display uses modulo4 with exact multiples
shown as4, matching the native trace. Health/energy bonuses use the campaign-owned
state and shared inventory capacity interfaces documented above. Refill uses
native7E450 with the native item IDs and effective allowance, preserving authored
storage clamps and leaving the unaffected quantity alone. XP reuses XML1's
CharacterManager vCC(xp,1) followed by2FCF0(xp,0), as in98AC0.

Popup interface traced from XML1 table3E0434: v10=185E40 selects/resets page0;
v0C=1873D0 takes only (message,duration), creates the native acknowledgement
button, and shows it. It calls186BC0, whose text pipeline copies512 bytes into
owned page storage. The additional adapter therefore passes two arguments and
releases its temporary guest stack string after the call. XML2's three-argument
signature must not be copied. New reward labels are English literals, as for the
other added dialogs; XML2 localization IDs are not sent to XML1's unrelated table.
Full localization is not claimed.

Validation: disc-reward-adapter-build/test.log and disc-reward-dispatch-build/test.log,
xml1-boot-probe --powerup-definition-test, exit0. Registered entry and native
CValueString getter execute, covering unchanged input masks/popcounts0..32,
caller-owned script arguments, null return and stack/FPU balance. Every milestone
checks the independent bonus, exact XP award/notification arguments and counts,
unaffected inventory quantity, refill via the actual native quantity setter,
and popup text/duration arguments. Game-variable lookup, bonus persistence and
capacity interfaces have separate existing checks; this command fixture substitutes
those endpoints, XP and presentation terminals. No visual/gameplay or actual XP
allocation claim is made from these contract tests. The overall boot probe also
passes the new native capacity and campaign save-state checks.

Inventory regenerated (inventory-disc-reward.log, exit0):50 registered additions
(44 functional,6 retail no-ops),3 pending:stashMenu,setActorHuge,setRecallActive.
The goal remains active. No player executable/assets/settings changed; no commit,
push or release performed.


### 2026-10-01 setActorHuge ownership and restoration trace (pending)

Continued the remaining huge transformation trace; command remains unregistered.
B2E20 takes selector/string boolean, resolves an actor, and routes actor+7DC through
manager11E590 v1E0=11CD70. That method resolves the controller through v258 and
invokes13AE30. The huge bit is controller+2B9 bit80, not an actor-layout bit:
controller+10 is the actor. Do not copy this offset onto XML1 actors.
13AE30 finds the actor's slot in the native party list and calls137F60 with
(character-name, data/powerstyles/ps_apocdummy, apocdummy, enabled, party-slot).

137F60 caches current model/resource name and powerstyle name in separate64-byte
buffers per party slot (618150 and618EB8). Repeated enable preserves the first
cached names. It switches animation/model equipment resources and the powerstyle;
disable138152 restores the cached powerstyle, clears the actor override ID and
both cache markers, calls original-skin restoration2F000, resets animation and
returns to idle. This is not a substitute setScale or setSkin operation.
Evidence: actor-huge-native-followthrough.asm plus the prior137F60 window.

The immediate signed-byte huge-flag consumers found in the generated source are
in140A00 (140C9E,140DD6,141029,141271). Native disassembly saved in
actor-huge-update.asm, generated excerpts in actor-huge-flag-consumers.txt.
These include living-party and death/disable paths; the latter reset scale via
actor v1D0(1,1,1), clear actor+3DA bit4 and remove power_noknockdown through the
normal powerstyle-trigger interface. Do not expose an enable-only command that
leaves those resources/flags stuck after disable or actor retirement. The scan
is a locator, not a claim that every consumer has been classified.

XML1 presence check confirms CCEStealSkin already exists (RTTI451498, table3D6AD4),
as already recorded for ce_steal_skin; that existing event is not reimplemented.
Its presence alone does not prove that the whole huge/controller transformation
system exists. No behavior-parity changes to that event are authorized or made.
Further work must connect missing transformation state to existing native XML1
resource operations and verify restoration/ownership before registration.
No executable or player assets changed this turn; no build/gameplay test claimed.


### 2026-10-01 huge transformation XML1 resource interfaces (pending)

Identified native integration interfaces instead of writing actor layout copies:
XML1 actor2E290 returns its embedded resource-slot owner at+2DC; ED320(index)
retrieves a resource and ED380(index,resource) stores it. These correspond to
XML2's existing resource-slot operations2C370/110400/110420 used by137F60.
Important ABI detail: actor2E290/2C370 consume no index argument; the subsequent
indexed getter consumes it. A combined generated call sequence must not be read
as two methods both consuming that argument.

ED380 is a raw resource-pointer setter, NOT reference-counting ownership. Native
ED390 loads through resource manager E9E50 virtual1C after choosing XML1's resource
category/path. XML1 categories differ (default0C here versus XML2's9), so importing
numeric resource type9 would be wrong. Reuse traced XML1 resolution interfaces.
Evidence: xml1-transform-resource-interfaces.asm and
xml1-transform-slot-accessors.asm. Do not hold a resource pointer across unload
or infer addref/release from the setter's name.

Existing XML1 character equipment refresh B2490 accesses slot3 through2E290/ED320,
invokes its v60 cleanup, and clears the slot withED380 before rebuilding native
resources. This is relevant to transformation lifetime; snapshotting only an
actor pointer would not protect against refresh. Evidence:
xml1-transform-resource-refresh.asm. Existing B2490 behavior remains untouched.
Further trace is needed for model override/restoration and resource reload before
the huge command can be exposed. No implementation or completion claim is made
from these interface locations alone. No player-stage changes or gameplay runs.


### 2026-10-01 huge transformation animation restoration interface

Located XML1's existing normal-animation restoration30890, the interface needed
when leaving the missing transformation. It resolves the character's animation
name at CharacterDef+2AC through native path formatter125510 and category query
CGame vDC, then actor v180 -> model v14 -> controller v2C with slot0/path. It
retrieves resource slot1 viaED320 and uses that resource's v28 animation-name
reference plus v4 category to resolve/load slot1 through the same controller.
This keeps existing XML1 model/animation behavior rather than importing XML2's
resource category numbers or controller virtual offsets. Reference implementation
XML2 2F000 follows the corresponding native restoration path; no parity changes
to XML1's existing path are authorized or made.

Do not substitute XML1 2F620: that function resolves a skin path and invokes
controller v0C, with two arguments at its actor-level interface. Nor should
setSkin event D8EC0 be changed: it already calls3A520 using native skin selection.
Evidence: xml1-huge-animation-restore-confirmed.asm,
xml1-transform-skin-interface.asm and xml1-transform-animation-load-restore.asm.
The needed specific animation-set load interface is established by30890's actual
calls to v2C(slot,path); its argument count is not XML2's actor helper signature.

Remaining before exposing setActorHuge: resource-name snapshot/reload ownership,
transformation enable/disable composition, huge-state consumers and actor lifecycle
integration, followed by programmatic validation. This turn adds native interface
evidence only; no build or staged-executable change is claimed. Goal active.


### 2026-10-01 huge transformation owned resource snapshots

Confirmed XML1 resource types: CCombatStyles RTTI4525E4/table3D89DC is the manager;
CFightStyle RTTI452A88/table3D8D5C is the resource in actor slot3. Its v24=EAD60
returns the name-reference address atresource+8; v4=C9480 returns category at+4.
Manager E9E50 v1C=E9BE0(category,name,reload) resolves the name in its native map,
loads a missing entry throughECB00, and removes a failed load before returning0.
Use these native interfaces for resource reload; do not mistake manager RTTI for
the resource type or import XML2 virtual offsets. Evidence:
xml1-huge-powerstyle-name-reload.asm.

Added raven_actor_transform_owner.h/.cpp for the pending transformation bridge.
It owns the original name/category per actor generation, preserves the first
capture across repeated activation, exposes bounded whole-name copies, and uses
revision-checked activation/forget operations so a callback cannot overwrite a
retired/reused actor. Names are dynamically owned, not truncated into XML2's
64-byte party-slot buffers or retained as borrowed resource pointers. This avoids
party reorder redirecting restoration to a different actor. No character-specific
resource names are embedded in this ownership layer.

Connected retirement to the established native construction2E6F0 and final
 destruction3243A boundaries with guard-actor-transform.py, preserving existing
scale/leader/Bishop cleanup. The guard validates known instructions and passed
an idempotence rerun. The main generation script runs it after the leader guard.

Validation: huge-owner-test.log and huge-owner-integration-build/test.log, exit0.
Tests cover independent actors, copied names longer than64bytes, caller mutation,
repeated capture, undersized output buffers without partial writes, category
retention, stale revision rejection, generation/address reuse and retirement.
The first test run had a mistaken hand-counted string length; the assertion was
corrected to the input string's actual size and rerun successfully. Full Release
boot probe and --powerup-definition-test pass after lifecycle integration.
This validates storage/lifecycle prerequisites, not native transformation gameplay.
setActorHuge remains unregistered until enable/disable/resource callbacks and
huge-state consumers are connected and checked. Goal active, stage unchanged.

### 2026-10-01 huge resource and animation bridge validation

Added raven_actor_transform_guest.inc resource capture/reload using XML1's
native slot accessors, CFightStyle category/name accessors and resource manager.
Snapshots own the path/category; failed loads and retired/revised identities
cannot replace the active resource. The snapshot is kept until the rest of the
transformation can finish restoring. huge-resource-build/test.log passed.

Added the animation-set dispatch bridge following XML1 308F1..3090F:
actor v180 -> model reference -> model v14 -> controller v2C(slot,path).
The caller must supply an XML1-native formatted path, not XML2 category IDs.
Identity is rechecked after native callbacks; absent models/controllers are
rejected. The native virtual has no validated success result: dispatch is not
proof of asset decode success. No fixed character paths occur in this helper.

Validation: huge-animation-bridge-build/test.log, exit0. The full boot probe's
--powerup-definition-test passes. The transformation fixture exercises actual
native resource slot/category/name access and assignment, repeat capture,
failed reload, revision/retirement rejection, plus animation dispatch, null
model/controller and actor retirement at each callback boundary. Resource
manager/string-pool lookup, model/controller terminals and identity are
substituted; this is a programmatic contract test, not animation rendering.

Additional trace huge-enable-complete.asm records XML2 137F60..138151.
140A00's entity literals 4A63F8/4A63F0 resolve to genl/genr. Its flag consumers
include encounter timers, generator effects and named powerup removal. The PC
act5/apocalypse/getbig.py invokes setActorHuge separately from noknockdown,
quaddamage and nogrow combat-node triggers. The command itself is therefore
not evidence that all those encounter actions belong in its script adapter.
Full enable/disable composition and state-consumer classification remain open;
setActorHuge is still unregistered. Inventory remains 50 additions, three
pending. Player executable/assets/settings/saves untouched; goal active.

### 2026-10-01 transformation animation result and native cache followthrough

Correction to the preceding bridge note: a second XML1 native caller, 30AC0,
checks AL at30B6F after controller v2C. The virtual does return a load result.
transform_load_animation now honors that low-byte result as well as actor
identity. The fixture adds a rejected load with EAX=0x100 (AL=0) so unrelated
upper bits cannot accidentally count as success. Build and full programmatic
probe pass: huge-animation-result-build/test.log, exit0.

Trace huge-xml1-animation-override.asm establishes that existing XML1 30AC0
accepts a character name, resolves CharacterManager56E90 v40 and game72CF0
vDC, formats the CharacterDef+2AC animation path via125510, loads slot0, then
calls36570 only after a successful load. This existing interface can perform
the missing command's character animation replacement; do not duplicate its
category selection or character lookup. It consumes one argument (ret4).

huge-animation-cache.asm confirms36570 manages actor+390's shared animation
cache reference, including decrement/release and lookup/rebuild. Use this
native operation after changed animation sets instead of writing cache fields.
huge-animation-restore-return.asm confirms30890 calls36570 itself and consumes
no arguments. huge-xml1-playback-node.asm confirms40350 consumes five playback
arguments and38210/3B100 use native resource lookup/node transition ownership.
No command registration or staging change yet; all three pending commands
remain pending. These findings replace uncertainty about the animation result
and identify existing native integration operations, not new parity work.

### 2026-10-01 transformation restoration composition

Connected transform_restore in raven_actor_transform_guest.inc: revision-checked
original powerstyle reload/assignment, native30890 default-animation restoration
(including its native36570 cache rebuild),40350 playback reset with five traced
arguments,38210 fresh idle lookup at4F32A8, and3B100 native transition when a node
exists. Only after these callbacks return to the same actor generation and
snapshot revision is the snapshot forgotten. No combat-node pointer is saved
across a resource reload; no cache reference fields are authored by the bridge.

Validation: huge-restore-sequence-build/test.log, exit0. The existing full
programmatic probe passes. Added sequence fixtures for normal completion,
failed resource load (snapshot retained), absent idle node (native optional
transition), actor retirement after each callback and replacement by a new
snapshot during each callback. Stale restoration must neither continue to later
callbacks nor erase that newer snapshot. Resource slot operations remain native;
animation restoration/playback/node terminals are substituted in this sequence
fixture, so it proves ordering/arguments/lifetime contracts, not renderer output.

This completes the restoration composition helper, not the entire setActorHuge
command. Enable composition, command dispatch and the remaining state-consumer
connection are still outstanding. No new registration, inventory count change,
player staging change or gameplay acceptance claim. Goal remains active.

### 2026-10-01 transformation enable composition

Added transform_enable using guest resource/character names as parameters.
It preserves the first original resource snapshot and treats repeated active
requests as idempotent. CharacterManager56E90 v40 preflights the requested
CharacterDef before native30AC0, whose implementation otherwise assumes that
lookup succeeds. Default animations are restored through30890, the alternate
character set is loaded through30AC0 (including XML1 category/cache handling),
playback and idle transition use native40350/38210/3B100, and the requested
powerstyle loads through the native manager using the captured XML1 category.
The native slot receives the resource only after those operations succeed.
Failed animation or style loads use transform_restore; retirement/revision
changes stop processing. The helper embeds no particular hero/resource names.

Validation: huge-enable-sequence-build/test.log, exit0. Full Release boot probe
--powerup-definition-test passes. Fixtures cover enable/disable round trip,
repeated enable without replacing the original snapshot or reloading resources,
missing CharacterDef, animation-load rejection, powerstyle-load rejection with
rollback, and retirement during animation replacement. Resource slot access and
assignment execute native code. Character lookup, animation and resource-load
terminals are substituted, so these are composition contracts rather than
proof that specific mod assets load or render.

The huge command is still not registered: its controller-state consumers and
script adapter remain to be connected. Enable/restore helper completion does
not close the command or change the 50-added/three-pending inventory. Player
staging/settings/assets/saves remain untouched, goal remains active.

### 2026-10-01 huge flags separated by native ownership

The pending scale note had conflated separate flags. XML2 30E10's scale target
reads actor+3DB bit8 and selects doubles492348=1.0/492350=1.2799999713897705.
setActorHuge13AE30 writes controller+2B9 bit80 instead. The immediate writer of
the actor scale flag is311E0 (called at31709 and322F2), traced separately in
scale-multiplier-owner.asm. That owner still needs classification; do not apply
1.28 merely because the transformation snapshot is active. Updated the inline
note to state this proven distinction rather than the earlier inferred link.

Likewise actor+3DA bit4 is written by B2F80, which the presence inventory already
identifies as setDestroyObjects, an existing XML1 command that remains skipped.
136890 also sets that actor bit while initializing encounter state. The PC
getbig script calls setDestroyObjects and setActorHuge separately. Do not import
or reinterpret existing object-destruction behavior as part of the new command.

Evidence: huge-actor-scale-flag.txt, huge-scale-flag-writer.asm,
huge-actor-flag-script.asm, huge-scale-multiplier-writers.txt, and
huge-controller-update-dispatch.asm. The latter shows140A00 selected by the
encounter dispatch143350 when global618094==2; it is not a universal actor tick.
These findings narrow the required integration boundaries without declaring the
command complete. Its adapter/state consumers remain open, along with recall
activation and stash. No staging or gameplay tests performed this turn.

### 2026-10-01 transformation character-definition consumers

Traced another required transformation state consumer rather than exposing a
resource-swap-only script. XML2 actor+762 is not simply an animation bookkeeping
field: native2BA00 returns the alternate CharacterDef via59E40 v74 when it is
nonzero, otherwise the original actor+35C definition. A native combat lookup
uses that accessor at110A73 before CharacterDef C7AC0 resolves action slots5..8.
The alternate definition therefore affects power-name resolution as well as
animation loading. A resource swap alone does not prove full command coverage.
XML1's existing power binding/progression must stay authoritative; connect only
the missing temporary override behavior and do not overwrite its original
character definition, stats or persistent roster records.

Evidence: huge-character-override-consumers.asm and
huge-definition-combat-consumers.asm. XML1's corresponding native resource
lookup uses ED700, existing action vF4 and ED500 (huge-xml1-definition-consumer.asm).
This identifies the next integration interface to inspect, not permission to
compare/rewrite existing XML1 action semantics. XML2 3444E also suppresses a
resource-refresh branch while the alternate CharacterDef ID is present.

Scale-mode trace continued through31620 and31E50. These reach311E0 via actor
serialization/initialization rather than13AE30. No link from setActorHuge to
actor+3DB bit8 has been established. huge-owner-complete-boundaries.asm records
31E50 and110A10 from confirmed function boundaries; the earlier exploratory
32270/110A20 excerpts started inside functions and are not function entry proof.
The multiplier-owner classification remains separate from command completion.

No runtime changes or new completion claims this turn. Fifty additions and
three pending commands remain; player staging untouched and goal active.

### 2026-10-01 temporary transformation character identity ownership

Extended the existing transformation owner to copy the alternate character
name when activation commits. raven_actor_transform_character returns that
name only for the matching actor generation and active transformation, with
whole-name bounded copies. Reset/reuse/forget remove the alternate identity.
The original CharacterDef, roster, stats and saved power assignments are never
changed. transform_enable now commits its requested character identity together
with activation, rather than retaining a borrowed definition pointer.

Validation: huge-character-owner-build.log, huge-character-owner-test.log and
huge-character-owner-integration-test.log, exit0. Ownership checks cover inactive
rejection, null activation name, caller mutation after activation, wrong actor
generation, undersized output without partial overwrite, and address reuse.
The full boot probe's programmatic powerup-definition checks also pass.

The existing power lookup bridge in raven_power_bindings_guest.c already owns
XML1 default-chain integration for actions5..8. Its binding-name source is the
parsed imported roster, not an arbitrary native CharacterDef lookup; blindly
substituting a name there would miss temporary forms absent from that roster.
The new owned identity is not yet connected to combat lookup. That native
fallback must be traced/connected before registering setActorHuge. No command
count or staging change; goal remains active with all three pending commands.

### 2026-10-01 definition-owned temporary-form power metadata

Native XML2 C7AC0 is a four-slot CharacterDef accessor: slot*21 + C4, returning
an empty string outside0..3 (transform-power-name-getter.asm). The existing
XML1 import binding source only parses herostat, so a native-loaded temporary
form outside that file cannot be resolved by changing its character-name key.

Added definition-owned power-name storage to the transformation owner library,
with four independently present slots, copied names, explicit-empty distinction
and definition retirement. It is separate from the existing mutable per-hero
power selections and does not replace that accepted system. Move names obey the
existing XML1 binding capacity (19 bytes plus NUL); rejected input leaves the
previous valid declaration unchanged. No per-character fallback is introduced.

Validation: transform-definition-owner-build/test.log, exit0. Tests exercise
absent and explicit-empty slots, copied source lifetime, slot bounds, invalid
length without clobber, independent definitions, reset and address reuse.
Native parser/lifecycle hooks and combat lookup are not connected yet; this
storage test does not establish end-to-end temporary-form power resolution.
Existing leader-definition parser hooks identify the shared CharacterDef parse
and constructor/destructor boundaries for the next connection. No staging or
registration changes. Goal active, three commands remain pending.

### 2026-10-01 native transformation definition parser connected

Added raven_transform_definition_guest.c. It reads power1..power4 through XML1
native XML symbols/attribute lookup/value access, owns the resulting text, and
preserves missing fields across partial declarations. Explicit empty attributes
clear the corresponding slot; invalid oversized names retain the prior value
and report a diagnostic. No alternate resource paths or file scans are used.

Connected capture at native CharacterDef parse completion55BB6 and retirement
at constructionB1640/final destructionB2E37. The existing shared-boundary guard
now emits the independent transformation metadata calls after leader metadata;
its Race companion recognizes that full sequence. Both guard scripts pass
repeated runs without duplicates or loss of existing hooks. Generation already
runs these guards, so the connection survives regeneration.

Validation: transform-definition-parser-build/test.log, exit0. Full Release
boot probe and --powerup-definition-test pass. The new fixture executes native
XML attribute lookup and checks all four slots, owned source strings,
absent/empty distinction, reset and stack/FPU balance. The owner lifecycle
boundaries are source-guarded; the fixture does not construct/destruct a full
CharacterDef. Existing transformation composition fixtures also continue to pass.

Combat/HUD lookup still needs to resolve an active transformation's character
name through the native manager and consume this definition-owned metadata.
setActorHuge remains unregistered until that consumer and script dispatch are
connected. No inventory completion, staging, settings or save changes. Goal active.

### 2026-10-01 temporary-form combat and HUD power-name consumer

Added xml1_transform_power_name, resolving the active owned form identity through
XML1 CharacterManager56E90 v40 on each lookup and reading its definition-owned
power slot. It preserves guest registers/stack, validates actor generation and
transformation revision after callbacks, and aborts a stale/missing definition
rather than dispatching the original hero's power against another powerstyle.
A missing or explicitly empty temporary slot resolves empty, matching the native
XML2 CharacterDef default. No CharacterDef pointer survives across lookups.

Connected this to the existing shared combat/HUD binding lookup, only for
native default chains on actions5..8. Untransformed actors follow the existing
binding path unchanged; explicitly named chains remain untouched. This keeps
roster selections and persistent character stats separate from temporary forms.

Validation: transform-power-lookup-build/test.log, exit0 after the shared-header
rebuild. Full --powerup-definition-test passes. The transformation fixture checks
an active form's definition-owned attack, empty absent slot, non-power action
exclusion and missing native definition rejection. Native manager resolution is
substituted in that fixture; the production combat/HUD call sites were connected
in source, not separately exercised through a rendered/gameplay HUD test.
The native parser fixture and prior transformation contracts also remain green.

Script adapter/registration and remaining transformation lifecycle/input
connections still need completion. No staged executable change, inventory count
change or gameplay acceptance claim. Goal active; three commands pending.

### 2026-10-01 temporary-form input exclusion and restore ordering

Connected the active transformation state to the existing gameplay power-input
handler after its normal port/health/menu gates. XML2 3444E excludes alternate
CharacterDef actors from assignment cycling. The XML1 bridge consumes the POWER
chord while transformed without rotating the original hero's saved assignments
or accidentally falling through to hero-switching. Untransformed input is unchanged.

Also corrected restoration ordering: after native original-powerstyle assignment,
the owner deactivates the temporary identity before normal animation/node
callbacks. Deactivation advances the revision while retaining the resource
snapshot for retry; stale enable/restore callbacks cannot act on it. Repeated
inactive deactivation is stable. This prevents restore callbacks from selecting
temporary moves against the newly restored original powerstyle.

Validation: transform-input-build/test.log and transform-deactivation-build.log,
transform-deactivation-owner-test.log, transform-deactivation-test.log, all exit0.
The full programmatic probe passes. Input checks call the actual gameplay-input
bridge for all four directions, wrong port, missing POWER modifier, dead actor
and stale generation. Owner checks cover identity removal, stale-token rejection,
retained snapshot and idempotent inactive transition. Existing resource/animation
and parser fixtures continue to pass. No gameplay/visual acceptance claim.

Script adapter/registration remains the immediate setActorHuge task. No staged
EXE or inventory count change; all three pending commands remain open. Goal active.

### 2026-10-01 setActorHuge registered and adapter validated

Registered setActorHuge with recovered n/as signature. The adapter uses native
string conversions, native name/handle resolution and CActor type validation.
Only case-insensitive true enables it (numeric text1 is false, as in retail).
Disable is harmless when no snapshot exists. Enable uses the retail command's
resource arguments data/powerstyles/ps_apocdummy and apocdummy; the reusable
transformation core itself takes resource/character parameters. Missing resources
are diagnosed rather than substituting character-specific assets. Resource
availability remains a mod/package responsibility; no player assets were added.

Programmatic validation: huge-script-build/test.log, final exit0. The registered
callback fixture checks native string argument conversion, true/TRUE/TrUe,
false/1/empty, absent actor, nonactor exclusion and void-result/stack/FPU ABI.
Name resolution/type/application terminals are substituted there; native parser,
resource-slot, transformation, power-name and input contracts are covered by the
separate fixtures described above. No visual/gameplay acceptance is claimed.

Initial fixture placement preceded private dispatch initialization and failed;
then the expanded descriptor/string table exposed the old pool+800 scratch
buffer overlap. Moved the callback test after dispatch setup and placed scratch
atpool+13000 outside the table. The final complete probe passes. This was test
scratch placement, not a production command-table allocation failure.

Refreshed script/event inventories with inventory-huge-command.log. The remaining
unregistered commands are stashMenu and setRecallActive. Whole-goal completion
still requires those systems, a final scope/limitation audit and final staging.
The earlier inferred1.28 actor-scale-mode dependency is not a setActorHuge flag;
its separate owner classification remains recorded for that final scope audit.
No staged EXE/settings/assets/saves changed, no commit/push/release. Goal active.


### Recall portal factory integration (2026-10-01)

The XML1 native script descriptor for spawn starts at VA3D0E68: callback
9D100, name3C89F8, return i, arguments assss. Callback9D100 calls the existing
cdecl factory68060(template,name,position,rotation,flags), then converts the
returned entity's generation-bearing handle at+1C to a script integer.
Factory68060 resolves the authored template through69540 v20, reads its class,
uses67F20 to select the native factory, invokes its constructor, applies flags
and calls the entity initialization virtual8C. Reuse this existing system.

raven_recall_travel.inc now provides the portal creation adapter with the
retail blinkportal template/name, copied position/rotation, zero flags and
handle-only return. The native contract fixture checks all five arguments,
cdecl selection, transforms, successful handle return and null factory result.
The Release build and full --powerup-definition-test pass (exit0), recorded in
work/xml2-resume/recall-factory-build.log and recall-factory-test.log. The factory
terminal is substituted in this fixture; actual portal spawning is NOT claimed.
The adapter still needs the request/dispatch, placement, replacement and sound
orchestration before setRecallActive can be considered implemented.

Trace evidence: recall-xml1-spawn-command.asm (9D100..9D262) and
recall-xml1-entity-create.asm (68060..68122). Investigation correction:
inspect_xbe.Xbe.refs already returns virtual addresses. Do not pass these values
through offset_va a second time. Earlier exploratory addresses38D22,7A808 and
3DFA0C were double-converted and are not evidence for this factory. Actual
spawn literal references are28D22,6A808 and3D0E6C.


### Recall portal ground and sound adapters (2026-10-01)

Added recall_native_ground_portal: XML1 ground manager8F170 v8 is8FFB0,
accepting (position,output,1,1) and returning a bool in AL. The corresponding
XML2 caller2025C9 uses A4080 vC/A3C50. The XML1 interface is reused unchanged.
The adapter copies input position, resolves the generation handle again after
the query, and uses the entity's native v1C position/spatial update only on a
hit and live identity. Trace recall-ground-interfaces.asm establishes the ABI;
66CA0 confirms the native setter owns spatial notifications.

Added recall_native_portal_sound using XML1 sound9FA00's manager151EF0:
lookup v34(name,0,0), compare invalid sentinel3DD050, then playback v58(handle).
The authored XML2 path at4B35A0 is zone_shared/special/blink_spawn. No sound asset
has been installed and no audio playback is claimed. See recall-native-sound.asm.

Programmatic fixture checks hit, miss with nonzero high EAX bytes, retirement
during the query, missing/zero handles, exact sound path/arguments and missing
sound suppression. Build and full --powerup-definition-test exit0:
work/xml2-resume/recall-ground-sound-build.log and recall-ground-sound-test.log.
Ground/audio terminals are substituted. Remaining recall work includes portal
replacement, eligible actor/forward position, request dispatch and registration;
these helpers alone do not complete setRecallActive.


### Recall portal replacement (2026-10-01)

Added recall_native_remove_portals using XML1 selector9FF10("blinkportal")
and the existing remove command's entity vB4(0,0,0), traced atA0753..A075C.
XML2's portal replacement uses the corresponding vBC(0,0,0) at202546..20254D.
This is removal, not killEntity's destructor v8. XML1's selector owns name
filtering and scene-query cleanup (A0111..A01C6). Before invoking removal,
the adapter snapshots generation handles; every callback uses a fresh handle
resolution. No entity pointer or shared selector contents survive callbacks.

The fixture provides three matches; the first removal retires the second and
rewrites the shared selector. The adapter skips that stale identity and still
removes the third from its owned handle snapshot. Exact selector/cdecl and
three zero removal arguments are checked. Build/full programmatic probe exit0:
work/xml2-resume/recall-removal-build.log and recall-removal-test.log. Selection,
resolution and removal terminals are substituted; no gameplay claim.

Forward-placement tracing additionally confirms XML2 distance490E00=30.0 and
16B430 computes (cos(yaw)*cos(pitch),sin(yaw)*cos(pitch),-sin(pitch)). Remaining
work is eligible-party selection, forward transform and complete request/command
dispatch, followed by setRecallActive registration. Goal remains active.


### Recall request orchestration and party placement (2026-10-01)

recall_native_portal_transform now uses XML1 game vE0's five-entry collection,
resolves generation handles and chooses the first live CActor without AI-control.
Native XML1 health+240 and AI bit+334 are existing owners (AI setter2EC5E,
query9CCCF); XML2's +27C/+3D8 offsets are not copied. Position and rotation are
owned before further callbacks. Forward placement uses the traced30-unit
pitch/yaw vector, preserving authored actor rotation.

recall_request_portal connects the existing enabled/cooldown gate to party
selection, removal, creation, sound and grounding. Hub requests dispatch recall
before those gates. Failed creation still starts300 simulation seconds as in
XML2; no eligible actor does not start cooldown. State is re-read after callbacks
before updating cooldown so other callback-owned changes survive.

Programmatic checks cover stale/dead/AI/nonactor entries before an eligible
fifth member, empty party, yaw/pitch placement; blocked requests, exact callback
order, failed creation, preserved callback changes and disabled/cooling hub
return. Native type inspection/current-zone/state owners execute; party/scene,
load and audio terminals are substituted. Release build and full probe exit0:
work/xml2-resume/recall-request-build.log and recall-request-test.log. Earlier
party-only pass is recorded in recall-party-build.log/recall-party-test.log.

The request implementation is not yet bound to native gameplay command dispatch.
setRecallActive remains unregistered until that consumer is reachable. Neither
these fixtures nor helper integration establish visual/audio gameplay acceptance.


### Native gameplay command dispatch integration - build pending (2026-10-01)

Traced XML1 command manager11CD90/table3DA650: registration vC=11CBB0,
queue v18=11C9D0, parser v14=11C680 and queue pump v0=11C8E0. Parser11C120
owns token text at manager+46C. Missing native lookup exits at11C715; existing
commands invoke their native callbacks at11C6FB. Evidence is recorded in
work/xml2-resume/recall-native-command-dispatch.asm and native disassembly.

Added guard-native-gameplay-command.py to the generator: only the native miss
branch calls xml1_missing_gameplay_command with the already-parsed token.
spawnblinkportal invokes recall_request_portal and resumes the native parser at
11C705; unknown names retain native failure. Existing command registrations and
fixed-capacity storage remain untouched. The adapter preserves guest registers,
stack and FPU depth. Guard applied twice successfully (idempotent).

Added a fixture using native manager constructor, map lookup/parser, semicolon
separation, queue enqueue/pump and unknown rejection. Only the gameplay request
terminal is substituted. Build started in exec session79080 and is still live at
this note; do not claim a test pass or restart it from this note alone. Logs:
recall-dispatch-native-build.log and recall-dispatch-native-test.log under
work/xml2-resume. setRecallActive registration and script fixture are next after
this build/test result. No staging or inventory completion change yet.


### Stash storage tracing while dispatch rebuild runs (2026-10-01)

New evidence narrows stash storage: XML2 inventory singleton8F010 constructs
8ED10/table497924. CMenuShop1E3BBA chooses state5 for stash deposits, state4
for normal shop sales; the shared call at1E3CAD..1E3CBB passes the item reference
pair and state to inventory v104=8CC10. Retrieval of equipment uses state2
at1E3CA6. 8CC10 validates the reference, invokes8B810 when state is nonzero,
then sets item state through item v20. These are existing XML2 inventory-owned
items, not evidence of a separate stash allocation or a separate save format.

Stash capacity check1B5B5E calls inventory v50=8A7D0 and rejects counts>=60.
8A7D0 traverses the owner's linked item references starting at+7764/+7768,
counting entries whose item v18 returns5. The next investigation is XML1 item
state ownership/consumers and save serialization before deciding which additions
are required. No XML1 semantics are to be changed simply for XML2 parity.

Also classified1E2560 as the money adjustment path: stash mode exits without
changing credits. 1B6410's inventory v140=8BEB0 call is not storage-transfer
proof; its implementation has category/timing machinery and must not be mistaken
for v104's item-state transition. New traces: stash-transfer-owner.asm,
stash-transfer-consumers.asm, stash-owner-methods.asm, stash-menu-transactions.asm
and stash-storage-state.asm in work/xml2-resume. Some trace files include adjacent
functions; only named boundaries above support these conclusions.


### setRecallActive registered; native dispatch validated (2026-10-01)

The earlier running rebuild in session79080 completed successfully, including
the full programmatic probe (exit0). Actual native command parser11C680 and
queue11C9D0/11C8E0 fixtures passed for spawnblinkportal, semicolon sequences,
unknown rejection and deferred execution. Its gameplay-request terminal is
substituted; request orchestration and native adapter contracts have separate
programmatic fixtures. This supersedes the build-pending note above.

Registered setRecallActive with native descriptor n/s after the existing
additions. AD9D0's case-insensitive true-string behavior updates only the owned
campaign enabled flag. New registered-dispatch checks use actual native string
argument objects and verify true/TRUE/TrUe, false, numeric1 and empty strings,
retained zone/position/cooldown and ABI. No alias or change to existing XML1
commands. Full Release build and --powerup-definition-test exit0:
work/xml2-resume/recall-enabled-command-build.log and
work/xml2-resume/recall-enabled-command-test.log.

Refreshed script/event reports successfully (inventory-recall-command.log).
52 additions are now registered:46 functional and6 exact retail no-op adapters.
Only stashMenu remains pending in the script inventory. Final whole-goal audit,
including outstanding scale-mode classification, and player staging remain.
Portal authored resources must exist for creation/audio; neither world portal
rendering nor audio playback was verified. The goal remains active, the staged
EXE/assets/settings/saves remain untouched, and nothing was committed or pushed.


### XML1 shop/inventory integration boundaries for stash (2026-10-01)

XML1's EQUIP_SHOP_MENU factory1723A6 calls constructor1720D0, which delegates
16AE80, clears fields+ECC/+ED0 and installs table3DEDCC. Its transaction handler
is17C8C0 (confirmed generated function boundary). Existing selection names are
for_sale/current_inventory. At17CA95..17CAA2 the native list returns a selected
row identity; carried/equipped inventory rows use table575DA0/575DA4 (item ID,
optional character owner). Ordinary sale17CC45 removes equipped items through
801F0/47E10 or decrements shared quantity through inventory v74/v7C. Ordinary
purchase17CCEE increments shared quantity. Native v54 changes credits and
vA4 updates the item's shop flag. Stash mode must bypass money and shop-stock
changes, not redefine these existing native operations.

Inventory singleton7F850/table3CE064 uses item records of36 bytes:7E270 returns
record+4+id*24hex;7E430 reads owned quantity at record+1C;7E450 clamps to authored
maximum at+1D. Native7E570 only toggles bit4 of record+20, used by shop buy/sell.
This is not a spare XML2 enum-state field. 7E7F0 snapshots quantity and that flag
into paired bytes at owner+17D8 onward. Separate stashed ownership therefore
cannot be encoded by assigning XML2 state5 to XML1's shop flag. Storage/reset,
record-copy and save integration still need completion before implementation.

New trace files: stash-xml1-shop-entry.asm, stash-xml1-shop-transactions.asm and
stash-xml1-inventory-storage.asm. Exploratory mid-function disassembly from this
turn is not entry-point evidence; the verified transaction boundary is17C8C0.
No executable/source behavior, user assets/settings/saves or staged files changed
in this investigation. Goal remains active; stashMenu remains pending.


### Native inventory lifecycle executed for stash integration (2026-10-01)

Corrected classification of the inventory methods:7E5A0 is SAVE (v0), not
reset;7E6E0 is LOAD(v4). Save writes current quantity/shop flags as160 paired
records at+1698, the persisted snapshot+17D8, valid byte+1918, live credits+1690,
and snapshot credits+191C:649 bytes total. The temporary snapshot+1920,
credits+1A60 and valid flag+1A64 are not serialized by this method.

7E7F0(v8) captures persisted snapshot,7E8E0(vC) restores it only when+1918 is
set then clears that flag. 7E9B0(v10) captures temporary snapshot,7EAA0(v14)
restores it only when+1A64 is set then clears that flag. Stash ownership must
follow these inventory boundaries, not assume the campaign record's separate
three-record copies describe the inventory lifecycle. Existing native operations
remain untouched. True reset/construction integration remains to be traced.

Added stash_inventory_lifecycle_fixture to raven_campaign_state_guest.c and
included it in the existing full programmatic probe. It executes the real native
save/load and both capture/restore pairs on isolated allocations and native
memory streams: distinct current/persisted/temporary quantities and money,
160th item, shop-flag isolation,649-byte cursor advance, one-shot restoration,
and stack/FPU balance. No terminal substitution or disk/player save access.
Build and full probe exit0; [STASH INVENTORY LIFECYCLE] PASS in
work/xml2-resume/stash-inventory-lifecycle-test.log. Build log has matching prefix.

Trace files stash-xml1-inventory-reset.asm (historical filename actually contains
save/load), stash-xml1-inventory-lifecycle.asm and stash-xml1-inventory-storage.asm.
This verifies the existing interfaces, not an implemented stash owner or menu.
No staging or inventory-count change; stashMenu and the overall goal remain open.


### Stash ownership, native snapshot hooks and save codec (2026-10-01)

Added raven_stash_owner.h/.cpp with inventory-keyed owned item names, aggregate
60-instance capacity, revision-checked updates and two independent one-shot
snapshots. No fixed mod-name limit, borrowed name pointer or transient row ID.
CMake builds raven-stash and raven-stash-owner-test and links the game probe.

Traced7F4D0: loads item definitions through resource interfaces and initializes
inventory fields; it is not a simple clear operation. Native constructor7F760
returns through7F82F after initializing both snapshot-valid flags. The new
idempotent guard-stash-lifecycle.py resets stash ownership there, captures at
7E7F0/7E9B0 and restores at7E8E0/7EAA0 only when the corresponding native valid
flag is set. It is included in generate-code.ps1. Existing native behavior stays
intact. Constructor hook is source-verified; the fixture initializes an isolated
owner directly rather than claiming a resource-backed constructor execution.

Extended stash_inventory_lifecycle_fixture executes the real native snapshot
methods with distinct stash values, verifies permanent and temporary restores,
repeated restore rejection and false guest-valid gating. Native save/load still
roundtrips its original649 bytes; it does not yet include the stash section.

Added standalone save codec: XML1STSH magic, version1, explicit little-endian
length/valid/count/name-length/quantity fields, authored item-name bytes. Saves
live plus persisted snapshot only; loading preserves the temporary snapshot,
matching native7E6E0. The decoder validates the entire section before committing,
rejecting bad versions/flags, truncation, duplicate or NUL-containing names,
length overruns, trailing bytes, zero quantities and aggregate capacity overflow.
Successful load invalidates stale transaction revisions. Guest campaign stream
integration, legacy-section absence handling and stash UI/transfers remain open.
This codec alone is not evidence that actual game saves persist stash contents.

Owner tests include300-byte names, cross-owner serialization, every truncated
prefix (also with altered declared length), malformed fields, duplicate names,
capacity boundaries, empty loads, temporary snapshot preservation and unchanged
state/revision after failed loads. Build/test exit0:
work/xml2-resume/stash-codec-build.log and stash-codec-test.log.
Full game probe build/programmatic suite exit0:
work/xml2-resume/stash-attached-lifecycle-build.log/test.log and
work/xml2-resume/stash-codec-integration-build.log/test.log.
Both full runs report [STASH INVENTORY LIFECYCLE] PASS. Guard applied twice without
duplicating hooks. Trace: stash-xml1-inventory-construction.asm.

stashMenu remains pending and the goal remains active. No gameplay/visual/audio
acceptance claimed. No player stage, settings, assets or saves changed; no commit,
push or release performed.


### Campaign stash save integration and legacy loads (2026-10-01)

Connected XML1STSH to the existing progress/campaign optional-section chain in
raven_progress_guest.c through raven_stash_stream_guest.c. Verified native
70350/70570 order: inventory singleton7F850 (499820) is saved/loaded before
progress singleton8C980. New data follows the existing progress and campaign
adjuncts; original inventory bytes and stock subsystem order are unchanged.
Trace: work/xml2-resume/stash-campaign-save-order.asm.

Empty live and persistent stash omits the section. On absent marker, clear live
and persisted stash from the previous session, preserve the temporary snapshot,
and use the already-loaded native persisted-valid flag for an empty snapshot.
With a section, validate declared size, native persisted-valid agreement and the
complete codec before replacing state. Stream cursor advances by the exact
section length; write retains the native strict capacity bound. Corrupt sections
report [STASH SAVE ERROR] and terminate consistently with existing adjuncts.

Extended the native inventory lifecycle fixture to write native649-byte data
plus the stash section, mutate stash, load both, and exercise both native
snapshot restores. Also tested a legacy no-marker stream, unchanged following
bytes/cursor, omitted empty save section, valid empty persistent restore and
preserved temporary restore. No disk or player save access. Existing native
progress campaign-stream fixture still passes with no stash items.

Build, owner test and full programmatic probe exit0; logs:
work/xml2-resume/stash-save-stream-build.log
work/xml2-resume/stash-save-stream-owner-test.log
work/xml2-resume/stash-save-stream-test.log
[STASH INVENTORY LIFECYCLE] PASS and [PROGRESS EXTENSION] PASS.
The native inventory plus stash stream was exercised on isolated allocations;
full campaign file I/O and an interactive menu were not tested.

Further trace:7DEF0 only releases the item-definition resource, not inventory
ownership;7E2F0 initializes quantities/shop flags and credits. Its call contexts
still need classification before attaching new-campaign reset. No reset hook
was speculatively attached to either operation. Stash menu, deposit/withdraw,
remaining reset/lifetime audit and whole-goal completion/staging remain open.
No player staging, settings, assets or saves changed; no commit/push/release.


### Native stash reset and destruction integration (2026-10-01)

Classified resetgame18CF90 -> inventoryv50/7E2F0 at18CFD5. Native7E2F0 clears
credits/current quantities/shop flags and grants starter potions; it does not
clear persisted or temporary snapshots. Existing NewGame+ guard returns early
for this exact resetgame caller. Added raven_stash_clear_live at7E2FC after that
bypass and the credits setter, preserving both adjunct snapshots. This respects
the existing NG+ carry-over policy without modifying its implementation.
Inventory destructor7DF80 now calls raven_stash_forget. The guard generator has
both boundaries; constructor and capture/restore hooks remain unchanged.

Extended the native lifecycle fixture to execute7E2F0 through the NG+ bypass
and normal path, then restore both snapshots. No authored definitions are
installed for this case, so starter-potion lookup returns absent; the native
reset still traverses all160 quantity slots. Executed7DF80 on the isolated
allocation with zero definition-resource pointer/string handles, verifying
adjunct retirement and stack/FPU balance. Full build/probe exit0 and
[STASH INVENTORY LIFECYCLE] PASS in work/xml2-resume/stash-reset-test.log;
build log stash-reset-build.log. Trace stash-reset-lifetime.asm.

Menu tracing clarified17AB70 only refreshes the money label, not item lists.
17B1B0 clears the for_sale/current_inventory list controls, filters ordinary
shop inventory by unlock/level/type/shop flags and adds rows.17ADA0 handles
shop purchase eligibility including money, authored limits and20 equipment
capacity. Stash mode needs separate stock selection and eligibility while
retaining native rendering/list APIs, with ordinary shops unchanged.
Trace stash-native-shop-lists.asm and stash-native-shop-populate.asm; the latter
starts mid-function at17B160, so only the aligned17B1B0 section is entry evidence.
Stash menu/transfer integration is unfinished. Goal stays active, staging and
player data unchanged; no commit/push/release or gameplay acceptance claimed.


### Shared inventory stash transfers (2026-10-01)

Added raven_stash_transfer_guest.inc and public guest transfer declaration.
xml1_stash_shared_transfer moves exactly one unequipped equipment instance
between XML1 shared inventory and owned stash. It validates native definition
count/type, authored quantity maximum, XML1 carried equipment capacity20 and
stash capacity60. Uses native7E270/7E430/7E4A0/7E290 and7E450; no money or
shop-flag changes. A failed stash revision commit restores the native quantity.
The native setter has no gameplay callbacks; preflight avoids its silent clamp.
The public entry preserves guest registers and verifies stack/FPU balance.

Authored item name comes from the CStr handle at itemrecord+4 through native
199C10 pool; do not use XML attribute accessor199EE0 for this different layout.
Copy the whole name into owned memory, with guest bounds and no128-byte cutoff.
Stash keys remain names, not row/definition indices. No handler or script is
registered by this helper alone; stashMenu remains pending.

Fixture runs real CStr construction/destruction13EB0/13D370 and inventory
getters/setters on isolated allocations. Covers300-byte names, deposit/withdraw
conservation, empty withdrawal, invalid IDs, non-equipment rejection, full
carried inventory, authored maximum, full stash, changed definition order,
unchanged credits/shop flags and guest register preservation. No terminal
substitution used. Full build/probe exit0, [STASH SHARED TRANSFER] PASS:
work/xml2-resume/stash-transfer-build.log and stash-transfer-test.log.

Equipped-item deposits, native menu wiring and remaining whole-goal audit/staging
are unfinished. No player assets/settings/saves or staged executable changed;
no commit/push/release or visual/gameplay acceptance claimed.


### Equipped-item stash deposit (2026-10-01)

Added xml1_stash_equipped_deposit alongside shared transfers. Validate a real
owned equipment entry through native character801F0 and stats47690/47820, use
the common owned authored-name reader, enforce stash capacity, then remove
through native47E10 and commit stash ownership. Failed stash revision commit
restores through47B70. Does not route through the shared pool or change credits,
shop flags, item maxima or unrelated equipment. Public wrapper preserves guest
registers and checks stack/FPU balance.

Trace XML1 shop17CC50 ->801F0 ->47E10: native equipped sale marks stats+2E bit0
for XML1's existing refresh.47E10 and47B70 use479D0 to sort owned byte IDs, without
gameplay callbacks. Stash follows this existing menu ownership interface; no
second immediate effect removal/refresh mechanism was added. Actual actor
refresh effects were not exercised in this programmatic fixture.

Extended isolated native fixture uses47B70 to equip two items, deposits one at
stash59->60, rejects the next at capacity without losing equipment, clears live
stash then rejects absent/non-equipment entries and deposits the remaining one.
Checks native dirty flag preserves other bits, quantities remain in their own
shared slots, credits/shop flags unchanged, and guest registers on success and
rejection. Native interned300-byte names/reordered IDs tests remain passing.
Full build/probe exit0, [STASH SHARED TRANSFER] PASS:
work/xml2-resume/stash-equipped-build.log and stash-equipped-test.log.

Both transfer primitives are implemented; stash menu selection, presentation,
eligibility and script dispatch are still pending. Goal remains active; no
player staging/settings/assets/saves changed, no commit/push/release.


### Verified native stash menu integration boundaries (2026-10-01)

Decoded PC UI/menus/stash.engb to work/xml2-resume/xml2-stash-menu.xml. The
reference root uses type=SHOP_MENU and stash=true; it has distinct stash and
inventory tabs, stock-specific models and XML2 list/description controls. It
cannot be dropped unchanged into XML1 EQUIP_SHOP_MENU. Preserve XML1's native
shop layout/IGB and declare corresponding stash content instead of assuming
XML2 control names are supported by XML1.

Verified EQUIP_SHOP_MENU table3DEDCC: v10=17C840(open), v34=17C8C0(actions),
v3C=17C3B0(navigation), v58=161450(XML root properties), v68=17B060,
v6C=1720F0 and v70=1AF4E0. Constructor1720D0 ->16AE80 then installs table and
clearsECC/ED0.161450 accepts root node atstack+4; native keyname3C8690 resolves
through125DA0/1260E0/199EE0, copies menu name tothis+14 bounded64 bytes.
Use this verified root-property boundary for authored stash=true mode; do not
misidentify163A30 (child control parsing) or163080 (control navigation links)
as the menu root parser. No behavior was hooked at the wrong boundaries.

17C840 opens by native163930, assigns inventory context from character manager,
refreshes money, focuses for_sale then17C330(mode1).17C330 selects17BC70 when
modeECC==2, otherwise17B1B0. Those populate different sides;17AB70 only updates
money.17BD70 reads selected row1778F0/177D90: stock side uses definition IDs;
inventory side uses575DA0/575DA4 item ID plus optional equipped character owner.
The deposit/withdraw primitives already accept these native ownership domains.
Ordinary shop eligibility/pricing must remain intact outside authored stash mode.

Trace stash-menu-init-boundaries.asm. Exploratory stash-menu-parse.asm is163080
navigation links, not root properties; retained with this explicit correction.
This turn establishes menu hookup evidence, not completed menu behavior. No
new gameplay test/build, player stage or user data mutation; goal remains active.


### Authored stash menu mode wired to native root parsing (2026-10-01)

Added raven_stash_menu_guest.inc/.h, per-menu mode ownership and idempotent
guard-stash-menu.py (included in generate-code.ps1). Native161450 root parser
invokes xml1_stash_menu_parse before its original operations. Only verified
EQUIP_SHOP_MENU table3DEDCC is eligible. Read authored stash attribute through
native125DA0/1260E0/199EE0; case-insensitive true enables it, absent/false/other
values disable it. This is XML2's authored menu flag, not a guessed menu-name
alias. Parser helper preserves guest registers/stack/FPU and releases its symbol.
No native object padding is repurposed. Constructor1720D8 and destructor172720
clear owned mode so native pool address reuse cannot retain stash semantics.

Fixture builds an isolated native XML attribute node and runs the real symbol
lookup/value accessors. Covers true/TrUe, false,1,true_extra,empty, absent/null
node reset, other-menu class isolation, register preservation and actual native
172720 destruction clearing the mode. Constructor clearing is source verified,
not a resource/menu initialization test. Guard ran twice without duplication.
Full build/probe exit0; [STASH MENU PROPERTY] PASS in
work/xml2-resume/stash-menu-property-test.log; matching build log.

Native stash mode is now detectable for list/action hooks, but no rows, labels,
eligibility, script dispatch or authored stash menu assets are wired yet. The
regular shop paths are unchanged by the added mode reader. Goal remains active;
no player executable/assets/settings/saves staged or modified, no commit/push.


### Stash stock selection, eligibility and menu action dispatch (2026-10-01)

Wired stash-only branches through guard-stash-menu.py. At17B289 (stock builder),
ordinary shops keep native filters; stash shows equipment definitions whose
owned authored names have stored quantity. It joins native17B31C row rendering,
retaining name/icon/style APIs. At17B439 stash skips negative-ID shop services
and proceeds to eligibility.17ADA0 delegates stash eligibility to a native list
lookup/dynamic cast,177980/177D90 row iteration and1782F0 enabled-state setter,
then native listv64 refresh. Enable withdrawal only for a stored item below its
authored maximum and native20-equipment carried capacity; money is irrelevant.

At17CAA2, before pricing/ownership branches, stash dispatches selected row through
xml1_stash_menu_action. Stock identity is an item definition ID; inventory identity
indexes native575DA0 rows with optional equipped character owner, count+820.
Reject negative service IDs, invalid rows and invalid counts. Route to completed
shared/equipped transfer primitives, then native success sound17CD1F or failure
sound17CD33 and normal list refresh. Ordinary shops return sentinel-1 and execute
unchanged native behavior. Helpers preserve guest registers and stack/FPU.

Added [STASH MENU ROWS] fixture using isolated native inventory/character records
and temporarily saved/restored native row entries/count. It exercises stock
visibility, shared deposit/withdraw, equipped deposit, capacity/authored limits,
negative/out-of-range row rejection and ordinary-shop pass-through. Real native
CStr and inventory/stats functions execute; actual rendered list controls,
front-end sound and action-function flow were not executed by this fixture.
The native list eligibility wrapper is compiled/source-verified, not yet covered
through a populated native control. Full build/probe exit0 and both
[STASH MENU ROWS] PASS / [STASH MENU PROPERTY] PASS in
work/xml2-resume/stash-menu-actions-test.log; matching build log.
Trace stash-stock-list-tail.asm and stash-menu-action-entry.asm.

Labels/details, populated native control validation, stash assets and script
registration remain unfinished. No staging/player data changes, commit/push or
visual/gameplay acceptance claims. Goal remains active.


### Native list flag validation and stash detail labels (2026-10-01)

Factored stash_list_eligibility and exercised it with actual native list backing:
list+84 index pool, count+64, native573B48 rows stride50hex, identity+40 and
flags+4D. Real177980/177D90/1782F0 execute. Isolated fixture saves/restores three
global rows, verifies a stored item enables while absent/service rows disable,
then full carried capacity and authored maximum disable it, and restoring room
reenables it. Other flag bits remainA4. This validates native control state,
not rendering, control lookup/dynamic cast or the list refresh callback.
Full build/probe passes [STASH MENU ROWS].

Added stash-only label hook after native17BD70 detail processing at17C221;
EDI remains menu throughout the function, original name/side arguments are at
ESP+2B4/2B8 there. Labels go through native1627B0('%s') and native controls,
retaining descriptions/icons/fonts/geometry. Stash displays Stored Items,
Carried Items, Stash Capacity (count/60), and selected item's Stored quantity
instead of cost. Invalid/empty selection clears cost controls. Native17AB70
money-refresh entry delegates to stash total labels only in stash mode.
Ordinary shop helper returns without changing native paths. English labels
are new text, not unrelated XML2 localization IDs.

Build/probe exit0: work/xml2-resume/stash-native-list-build.log/test.log and
stash-labels-build.log/test.log. Label helper is compiled and source-verified;
actual text control output is not yet exercised. Trace stash-native-details.asm
confirms EDI and post-cleanup stack boundary. Menu assets, text/control lookup
validation and script registration remain unfinished, along with goal audit
and staging. No player data/staged executable changes or commit/push/release.

### Stash menu asset build (2026-10-01)

- Added scripts/build-stash-menu.py. It authors stash.eng/fre/ger and compiled XMLB documents from the native XML1 equipment menu, plus the normal stash.pkgb manifest. Existing model, texture, shared XML paths and control names are preserved. Output requires a new private directory; player assets are untouched.
- Generated work/xml2-resume/stash-assets. All three XMLB compile/decode/recompile checks passed byte-identically; PKGB round trip passed and each declared resource resolves to files. New stash labels/prompts currently remain English in all language documents. This is programmatic asset validation, not rendered menu acceptance.
- Traced XML2 stashMenu callback AD5C0: frontend singleton 1E8790, table 4B2504 slot84 -> 1E48F0 gates opening through the current frontend name (slot80) and game manager slot90 before queueing openmenu stash. XML1 frontend table is 3E00C4; its offsets differ, so slot84 must not be copied blindly. Gate mapping and script registration remain pending. Disassembly evidence: stash-xml1/2-frontend-constructor.asm, stash-xml1/2-frontend-init.asm and stash-xml2-open-gate.asm under work/xml2-resume.

### Stash script entry and native gate integration (2026-10-01)

- Registered stashMenu with the retail void/no-arguments descriptor. XML2 AD5C0's current-frontend gate maps to XML1 table3E00C4 slot54 / 1839B0 (current menu string +9CC); XML2 slot80 / 1E8120 uses +D90. Native menu-name copy consumers are XML1 181E0A and XML2 1E57EA. XML1 game table3DD7B4 slot6C / 154190 already owns the gameplay gate: call it unchanged, with no XML2 policy parity changes.
- The script uses native command-manager slot18 / 11C9D0 to queue openmenu stash. That function copies into its two-entry owned queue, avoiding stack lifetime problems or reentrant menu opening. Full queues retain native behavior.
- Built xml1-boot-probe and ran --powerup-definition-test successfully (stash-script-build.log, stash-script-test.log). Registered callback fixture executes actual native current-menu getter and queue, tests occupied frontend, denied gameplay, allowed calls, full queue, copied strings and stack/FPU. Singleton lookup and gameplay-state terminal are substituted; actual menu load/rendering/text-control refresh are not verified. Stash owner/transfer/menu-row/property fixtures also pass.
- Regenerated script/event inventories from images and current registration. There are now 53 registered additions (47 functional, six exact retail no-ops), with no remaining pending script-name rows. Registration and fixtures do not complete the wider combat/character inventory audit or prove menu integration. Private stash assets and updated EXE are not staged yet.

### Native stash text controls validation (2026-10-01)

- Added a programmatic fixture executing native menu lookup162660, RTTI34238D, formatting1627B0, menu text adaptation160FE0 and text storage17D790. Native control vtables are text3DFBCC and list3DF3E4; the latter executes native refresh177AB0. The fixture uses native interned control names and the verified menu+294 name-map layout.
- Verified capacity/section labels, clearing detail labels for an empty list, selection refresh to -1, missing optional controls and ordinary-shop bypass. String pool and inventory-init flag are privately supplied/preserved because the isolated harness does not boot the Raven heap/resource loaders. Native pool interning and actual text storage execute; no rendering claim. Initial failures exposed those absent fixture boot dependencies, not production behavior changes.
- Build and --powerup-definition-test passed exit0 in stash-controls-build.log / stash-controls-test.log. STASH CONTROLS, STASH MENU PROPERTY and STASH SCRIPT all PASS. Supporting native traces: stash-native-label-controls.asm, stash-native-control-map.asm, stash-native-text-setter.asm.
- Remaining: populated menu details/full menu loading integration, broader combat/character coverage audit, final build/staging. Player EXE and assets remain untouched.

### Broader coverage audit: leader scale owner and AI candidates (2026-10-01)

- Closed the ownership ambiguity for XML2 actor+3DB bit8: entity initialization31E50 queries the authored leader key492384 at321F5; nonzero selects leaderpowerup492374, then322F4 calls311E0. This is leader initialization, not setActorHuge. The modifier must not be attached to transformation snapshots. Existing XML1 setScale remains authoritative; any remaining leader integration work needs to distinguish missing state/lifecycle from mere numeric scale parity. Supporting evidence: scale-multiplier-owner.asm and huge-owner-complete-boundaries.asm.
- Current original-image inventory contains122 added candidate RTTI types, not122 missing systems. It includes templates, renamed ownership types and existing systems. Script and event tables alone cannot close this broader audit.
- Identified three unclassified AI attack-handler types: CAIEnemyGunAttackHandler (table4A4654), CAIHitAndRunAttackHandler (4A547C), CAITeleporterAttackHandler (4A54EC). Current XML1 already has Standard, Ranged, EnemyRanged, ShadesWing, Artillery, Sentinel, FlyNoNav and ShadesNoWing attack-handler classes. Presence alone does not establish whether these three are missing functionality versus variants of existing facilities; no implementation or parity work authorized by the names alone.
- HitAndRun has callback1143A0 at table slot58, with an actor/owner handle gate followed by movement-vector/path work. Trace saved as ai-hitandrun-candidate.asm. Next audit step: native registration/consumer evidence to classify these candidates, plus explicit powerup/affecter/damage coverage reconciliation. No runtime behavior changed or player files staged during this audit.

### AI candidate registration/selection trace (2026-10-01)

- XML2 EnemyGun vtable4A4654 is installed at1135E6 after standard attack-handler initialization and setting handler+44 bit4. No direct table-name string registration was found; this is an embedded native handler, not a ch_* combat-node factory. Its unique selection and flag consumer still require classification.
- HitAndRun table4A547C is installed by constructor120B40 and embedded selection128E78 when owner+564 equals2. Teleporter table4A54EC is installed at128DDC when the owner's CharacterDef+4CA enum equals9. Both use owner+4C8 embedded storage and owner+4C4 as the active handler pointer; do not import these offsets into XML1.
- XML2 CharacterDef enum parser references authored teleporter atCA03C (literal49DE2C). The full added-type inventory also contains CAIDumbWanderer, CAIProtect, CAIPackHunt and CAITeleporter, which the narrower handler-prefix candidate filter did not include. They remain classification candidates, not confirmed missing systems. No scope decision can rely on the prefix-filtered122 count alone.
- Evidence: ai-new-handler-construction.asm, ai-authored-selection.asm and inventory.json original-image RTTI. Some exploratory snippets start mid-function; confirmed entry points120B40 and128CB0 provide the ownership/selection evidence. Existing XML1 AI systems must be recognized before considering an adapter; no behavioral/parity comparison has been authorized.

### Native powerup callback presence inventory (2026-10-01)

- Added scripts/audit-native-powerup-callbacks.py and generated docs/XML2-POWERUP-PRESENCE.md from the verified XML1 image. It follows the original native callback resolvers2D920,2DA00,2DA60,2DEE0 used by definition parser955C0 and records37 selected function-pointer assignments, rather than inferring support from isolated strings.
- Six XML2 class families correspond to already-existing XML1 systems: Freeze, Chill, Invisible, Charged, TouchDamage and TimeBomb. Preserve XML1 behavior and skip semantic/signature/balance comparisons. This classification does not add XML2 aliases or rewrite any assets. Other classes remain subject to presence classification; callback registration evidence is not a gameplay test.
- The resolver scanner distinguishes ESI destination storage from EDI in lifecycle resolver2DA60. Generated report includes exact name-reference and assigned callback addresses. Updated XML2-COVERAGE.md with the six existing-system exclusions. No runtime edits or player staging this turn.

### Complete concrete powerup-class reconciliation list (2026-10-01)

- Extended audit-native-powerup-callbacks.py to enumerate all25 concrete CPU* classes from the full original-image RTTI inventory, not the candidate prefix subset or the imported roster. It validates both original image hashes and implementation source paths. XML2-POWERUP-PRESENCE.md now records six existing XML1 systems, three implemented additions (Harming, AtkAdd, ScaleActor) and16 classes still needing existing-system/implementation classification. These16 are not a confirmed missing-function count.
- Began tracing CPUBoostWhenShared: parser14D430 loads a linked powerup resource into definition+60/+64; callback14D490 checks attached ownership, resolves the source actor, verifies an actor flag and resource validity, queries attached virtual8C and applies the linked definition through15DAF0. Full calling interface, meaning of virtual8C and XML1 sharing lifecycle must be established before adapting it. Evidence: boost-when-shared-native.asm and boost-when-shared-apply.asm. No new runtime behavior inferred from the class name alone.
- This inventory pass changes no existing handler/progression behavior, player assets or executable. Goal remains active; class/affecter/AI coverage and final staging are outstanding.

### Shared-boost ownership and additional presence exclusions (2026-10-01)

- XML2 CPUBoostWhenShared's authored link key is extra_powerup_shared_tag (4A6ED8). Attached-powerup table4A6AF4 exposes source/target getters146EF0/146F30 from +18/+1C; callback14D490 requires matching handles. Getter146DA0 (slot8C) reads attached+64 bit4. Its setter146E70 is table slotD4. The flag's actual write/activation caller remains unresolved; do not substitute generic sharing, attachment or every-tick execution. The final application uses15DAF0, with null optional arguments and the resolved actor handle. Trace: boost-shared-owner-accessors.asm, boost-when-shared-apply.asm.
- Classified CPUInvulnerable and CPUSuspend as existing XML1 systems through already-present native ce_invulnerable and ce_atk_suspend. The reproducible powerup audit checks those event inventory rows before emitting exclusions. No aliases or semantic changes.
- Concrete powerup inventory now has eight existing-system exclusions, three implemented additions and14 pending classifications. Existing numeric scaling, effect strength and other parity concerns remain excluded. Goal active; no runtime/player changes in this pass.

## Shared boost link ownership (2026-10-01)

Confirmed XML2 recipient attach 146594/146599 sets success at 1465D6; 14661F stores the result before definition callback 14663A. Added extra_powerup_shared_tag metadata capture and an owned, class-gated visitor. The visitor runs outside the metadata lock and survives reentrant reset/replacement. Focused raven-powerup-metadata-test build and execution passed, including clone/source retirement, class exclusions, empty links and reentrant mutation. This is declaration ownership only: generation-safe successful-sharing runtime activation and resource attachment remain unfinished. No player executable staged and no gameplay verification claimed.

## Shared boost native sharing integration (2026-10-01)

Added a generation capture at XML1 2B270, successful-recipient detection immediately after 2B4FA (before the skipped-recipient label), and a single finish hook at 2B549 after native query cleanup/timing. The linked definition uses the ownerless shared catalog namespace12 and a self source, with active generation/source/target/definition revalidation after loading and native reference transfer only on successful attachment. Finish preserves guest registers and floating state. Guard regeneration is repeatable. Built xml1-boot-probe and ran --powerup-definition-test successfully. New fixture checks capture, source/target gate, the actual native disabled-sharing exit and stale-generation rejection. Successful recipient sharing/application and callback-driven owner retirement during loading still need focused integration validation; do not mark BoostWhenShared complete. No player executable staged.

## Shared boost native attachment validation (2026-10-01)

The real attachment fixture exposed XML1's 2AD03/2AD08 self-source canonicalization to the native null handle. Updated only the imported boost eligibility adapter to accept that existing representation; stock attachment remains unchanged. The fixture now publishes a private native actor and executes catalog parsing, native2AA90 allocation/attachment,28FA0 ownership retirement and full-pool rejection. A verified native2F3D0 ret8 terminal replaces only the visual notification. Verified linked definition life, canonical source/target, single reference transfer, failure cleanup and register/FPU preservation. xml1-boot-probe build and --powerup-definition-test passed. Full successful recipient-query loop and callback-driven retirement during definition loading remain unexercised; this does not claim rendered/gameplay verification. Final staging remains pending.

## Existing powerup families excluded (2026-10-01)

Presence-only audit confirms CPURogueDrained belongs to XML1's native powerstolenactivate/deactivate system; CPUStunned is covered by native registered ch_stun/CCHStun (table3D7E3C installed at E88FE); CPUDelayedDamage is covered by the native EDelayedDamage one-event implementation (table3CFC54, global descriptor44E7E4, consumer reference93C27, method93AD0). No XML2 semantic or balance comparison and no runtime modifications for these existing systems. The generated presence verifier now validates these original-image identities and references. Coverage now records11 existing families,3 completed additions,1 shared-boost hook pending sharing-loop validation,10 classes pending classification. Remaining AI/affecter work and final staging are unchanged.

## Further native powerup exclusions (2026-10-01)

CPUAddHarming is excluded as an existing on-hit damage-over-time system: XML1 authored damageaddbleed resolves to2DD90, with bleedactivate/bleedthink at2B700/2CE70. CPUHurtAttacker is excluded through XML1 reflect_damage (native enum38, name table44E960, parser lookup94706, incoming-hit consumer44175/44177 ->2A630). Existing behavior wins; no aliases or parity modifications added. Original-image verifier passed and generated presence report now records13 existing class families. Eight classes remain under classification, plus shared-boost integration validation. Exploratory original XML2 class traces are local in work/xml2-resume/powerup-remaining-classification.asm and powerup-remaining-detail.asm; they do not establish completed implementations.

## Native trail exclusion and sound-class tracing (2026-10-01)

XML1 powerup parser95E0B recognizes func_trail, resolves through2C880 and stores definition+AC. Its authored elemtrail resolves to2C6A0. Existing trail system wins; CPUTrailReplace is excluded without a replacement alias or behavior comparison. Added the trail resolver range to the presence verifier;38 native callbacks and14 existing class families now verified. Seven classes remain under classification. XML2 CPUSound parser151800 uses table546368: sound_activate0, sound_deactivate1, sound_death2, sound_attempt_hit3, sound_damage4, sound_hurt5, sound_think7, sound_trail8, sound_touch9 (sentinel10). Native sound callbacks/lifetimes still need classification and integration evidence; generic playback alone does not establish coverage. Local traces: native-trail-presence.asm and trail-sound-classification.asm. No player staging or gameplay verification.

## Powerup sound operands and dispatch trace (2026-10-01)

Original XML2 CPUSound activation/deactivation callbacks1510B0/151120 resolve the active target through virtual60, find per-definition event sound via150FF0, resolve its actor through145AF0 and invoke actor virtual8C with the cached sound ID. Lookup150FF0 lazily resolves the authored sound string through sound manager19DCD0 virtual38, with the native invalid-sound sentinel. Added owned capture/visitor for the nine exact sound_* declaration keys, class-gated to sound. Metadata tests pass for all nine independent event names, case-preserved values, clone/source retirement, unknown-key exclusion and reset during visitor. This is metadata and interface tracing only; no sound callback installation or playback completion claim. Trail declaration exists in parser, but its runtime callback remains to be traced (do not assume every declared key is dispatched). Local trace: powerup-sound-dispatch.asm. Goal and player staging remain open.

## Native powerup sound callback integration (2026-10-01)

Connected all nine CPUSound declarations to XML1 native func_* slots9C..BC, leaving any existing authored callback intact. XML2 callbacks151220/151290/151300/151370/1513E0 select think7/trail8/damage4/attempt3/hurt5; trail is an active native callback, correcting the earlier unresolved note. XML1 caller29F6E supplies instance first for trail just like the other cdecl callbacks. Playback resolves names through native151EF0 sound manager virtual34 (D7E65 interface), revalidates active generation/definition/target, then invokes actor virtual84 (D7EE9 interface). Adapter preserves guest registers/FPU; no host audio backend introduced. Metadata test and xml1-boot-probe --powerup-definition-test pass, including nine installed callback slots, absent-owner rejection, cdecl argument ownership, original callback preservation and native reset. Live-target lookup/playback and resource-callback retirement remain untested; do not mark CPUSound complete. Six classes remain under classification, two implemented integrations still require focused validation. No player executable staged.

## Powerup sound dispatch contracts validated (2026-10-01)

Private fixture uses native sound singleton getter151EF0 and native actor handle/type lookup, substituting only sound-manager lookup and actor playback terminals. All nine named event operands reach the correct interfaces; valid ID0 plays, missing sound does not, and owner generation/definition/actor invalidation during lookup prevents playback. Shared-only class declarations reject the originating owner before lookup. Registers, floating state and guest stack are preserved despite deliberate terminal clobbers. Initial fixture failure was unregistered terminal tokens; the extension code-admission check now admits those exact tokens only while the fixture is active. Production callback IDs remain unchanged. Build and --powerup-definition-test passed (work/xml2-resume/powerup-sound-dispatch-test.log). CPUSound is implemented with basic programmatic validation; no audible playback/gameplay acceptance claimed. Coverage now14 existing families,4 implemented additions,1 shared-boost hook awaiting sharing-loop validation,6 unclassified classes. Final delivery remains pending.

## Percentage-damage remaining interface traced (2026-10-01)

Confirmed atk_instant_pct factory/name and parser percent/chance/selfonly; traced distinct outgoing-hit14D020 and self-only activation14D200 paths. The outgoing path adds percent times target+27C plus1 after native chance gating; self-only constructs/submits a separate hit. Neither is implemented by the health-percent event-filter helper. Native target-field identity and XML1 delivery/flag mapping remain to establish. Added the concrete trace requirements to XML2-COVERAGE.md; no completion-count change and no guessed offsets or balance adjustments introduced. Absorb tracing remains separate from existing def_absorb_damage consumer, since CPUAbsorb has sponsor/energy/inflicted selectors.


### Percentage attack interface reconciliation (2026-10-01)

Reused the completed recall/health traces: XML2 current health+27C maps to
XML1+240; XML2 max health+284 is separate. Original-image constructor158CA0
sets both chance and percent endpoints to1.0 and selfonly=false.

Resolved the pending lethal-flag interface against original XML1 bytes:
454A4 reads context+24 (embedded record+18), tests200000, and454AF uses the
existing native32000 treatment. Constructor2C8F6/2C8FA stores flags at record+18.
XML2's45CAB reads context+20 (embedded record+14); do not copy that layout or
its damage magnitude. Native XML1 manager59CE0 v50 is already exercised by
add_attack and is the delivery integration point, corresponding to XML2 v64.

Updated the current coverage ledger. These are interface/default findings,
not a completed percentage callback; no completion-count increase, no game
launch, no new build or player staging. Implement both outgoing and self-only
paths next, using existing XML1 damage behavior and owned operand evaluation.


### Percentage attack owned operands (2026-10-01)

Added raven_percent_attack.h/.cpp to raven-actor-talent and captured percent,
chance, selfonly in the owned metadata lifecycle. Both native defaults are1.
The operand layer reads the first endpoint/current rank; it does not consume
RNG before the guest chance roll or change existing XML1 class dispatch.

The Release raven-harming-operand-test passes defaults, case-insensitive field
capture, independent cloned/snapshotted storage after retirement, current-rank
changes, first endpoints, stale active-generation rejection without output
mutation, and non-percentage-class exclusion. Initial test expectations used
incorrect integer fixture endpoints; corrected them to the authored6.25/117.25.
Logs: work/xml2-resume/percentage-operands-build.log and
work/xml2-resume/percentage-operands-test.log. Guest callback installation,
chance RNG and outgoing/self-only delivery remain pending. No game launch or
player staging; whole-class completion count remains unchanged.


### Percentage attack callbacks and outgoing dispatch (2026-10-01)

Added C ABI operand sampling and class/mode selection, two native cdecl callback
slots, and reusable outgoing/self-only guest adapters. Existing native callbacks
are preserved. Owner/source/target identities are rechecked after operand/RNG
calls; registers and FPU state are preserved. XML1 physical damage type is0
(native49480), not XML2 mask80. XML1 record+18 owns the lethal flag.

XML2 target+3DC bit4 comes from setDefaultTarget B4C60. Existing XML1 command
9DAD0 ->2F280 owns4858AC. The new callback respects that XML1 selected target
without importing an XML2 flag or changing the existing command. Outgoing hits
use XML1's physical-entity resolver2B810; self-only activation requires actors.

Release probe passes native29DC0 traversal/selector/cdecl outgoing callback:
health80 and percent0.25 adds21 to hit10; percent1 adds81 and sets200000.
Chance0, selected-target exclusion and inactive owner leave the hit unchanged.
Separate checks cover mode-specific installation, native callback preservation,
reset and absent-owner dispatch. Operand tests still pass. Logs:
work/xml2-resume/percentage-callback-build.log and percentage-callback-test.log.

Self-only construction/manager dispatch is implemented but its successful
delivery remains unvalidated. Keep CPUAtkInstantPercent in integration-pending
status until that check passes. No game launch, staging, commit or release.


### Percentage self-only delivery contract validated (2026-10-01)

Added a scoped process-local fixture that executes native entity resolution,
RNG,2C8C0 damage construction and59CE0 singleton getter. Only manager v50
delivery is substituted; its four arguments and thiscall receiver are checked.
Distinct source201 and target202 prevent swapped participants from passing.
Verified damage21/81 for health80 at25%/100%, XML1 physical type0, priority1,
source handle and lethal flag200000. Chance0 and stale target generation stop
before delivery. The terminal deliberately clobbers registers/FPU; the adapter
restores caller state. Fixture registrations exist only for the scoped run and
manager, handles, metadata and native flags are restored afterward.

Release build and complete --powerup-definition-test exit0. Evidence:
work/xml2-resume/percentage-activation-build.log and percentage-activation-test.log,
including [PERCENT ACTIVATION] PASS. No visual/audible or gameplay claim.
CPUAtkInstantPercent now joins implemented additions in the presence inventory;
five concrete class candidates and shared-boost integration remain open, as do
the broader AI/affecter/stash/staging requirements. Goal remains active.


### Feral Rage shared effect-event trace and selector (2026-10-01)

Resolved attached v20 to1451C0, not a rage counter. Feral callbacks14DDF0 and
14DE60 play inherited sounds then select how_used=custom, tag1/2 respectively.
1451C0 traverses the definition's owned CFxCoreData list, checks ready resource,
usage and signed-short tag, and invokes146960. Parser14B5C0 distinguishes tag
from fxlevel;14ADB0 maps unknown explicit usage to custom3.

Added reusable raven_xml1_powerup_effects_visit_event, preserving existing
primary-visitation API and behavior. Owned snapshots retain order, duplicates
and sharing role across reentrant retirement. Release metadata tests pass
usage0..3/defaults/unknown mapping, tag65537->1, distinct fxlevel9, sharing
filter, cloned definitions and retirement/reuse checks. Logs effect-events-
build.log/effect-events-test.log under work/xml2-resume. Native trace saved as
feral-effect-events.asm. Runtime custom/lifecycle effect launch and Feral Rage
callback/sound subclass integration remain pending. No game launch or staging.


### Feral runtime connection and callback-slot correction (2026-10-01)

Connected feral_rage inherited sound events and custom1/custom2 dispatch on
attempt/damage. Owner generation and definition are checked after sound. The
shared event launcher owns metadata snapshots, resolves original scoped effect
resources and rechecks owner/target before native manager+30 emission. It uses
the existing bone/world transform adapter; native particle lifetime owns the
one-shot burst, with no repeating powerup group. Successful burst dispatch
through a resource/bone fixture is still pending; do not mark Feral complete.

The new callback-slot test initially failed because its expected offsets were
wrong. Native95CD0 establishes damage+B0, attempt+B4, hurt+B8. Feral production
slots were correct. This exposed a percentage callback placement error from
the preceding implementation: corrected percentage damage to+B0 and its native
fixture to selector4/29E99. Existing add_attack code remains unchanged. An
over-broad fixture edit briefly changed the add_attack test selector too; it
was corrected to3 before the final successful run.

Release metadata test and full --powerup-definition-test pass. Logs:
work/xml2-resume/feral-runtime-build.log, feral-runtime-test.log and
feral-metadata-test.log. No gameplay claim, player staging or commit. Remaining
Feral validation must inspect actual one-shot dispatch arguments/lifetimes,
and lifecycle effect integration remains open.


### One-shot dispatch fixture and lifecycle event wiring (2026-10-01)

The private effect fixture now executes native actor generation/type resolution,
world position/forward transform and singleton getter. Substituted manager query
and emission terminals verify resource81, target, fxlevel9, null bolt, trailing
zero, world transform pointers and thiscall cleanup. Owner or target retirement
during manager query prevents emission. No repeating group handle is produced.
The fixture explicitly does not exercise resource lookup or bone attachment.

Traced original lifecycle callers15DF7D (usage1/tag0) and15C975 (usage2/tag0).
Added idempotent generated hooks at XML1 fresh attachment2AE80 (behind2AD98's
new-attachment gate) and eligible removal2AF53 (behind native target/destroying
gates). Primary initialization no longer reports supported event declarations
as unsupported; they remain excluded from repeating primary emission.

Release full probe and repeated guard application pass. Logs:
work/xml2-resume/effect-dispatch-build.log, effect-dispatch-test.log,
effect-lifecycle-build.log and effect-lifecycle-test.log. Feral remains pending
focused resource/bone and lifecycle launch validation. No gameplay/staging.


### Feral scoped-resource and bone-interface validation (2026-10-01)

Expanded the private effect fixture with a native one-node scoped name tree and
generation-checked resource pool. Original183D0/260B0 construct the scoped
resource path, locate it and validate ownership. Actual installed Feral attempt
and damage callbacks select custom1/2 and reach the emission terminal; generic
activation/deactivation selection also reaches it. A stale resource handle
prevents emission. Metadata/native globals/callback slots are restored afterward.

Named Bip01 R Hand lookup and interning execute original138870/199C10/12A90;
2E9F0 runs XML1's no-skeleton world fallback via original actor getter75F40.
An unknown bone rejects without emitting. This checks bone interface handling,
not posed-model attachment. Manager query/emission terminals remain substituted;
no rendering or audio acceptance claim. Release full probe exit0 in
work/xml2-resume/effect-resource-build.log and effect-resource-test.log.

Moved CPUFeralRage to implemented additions under the basic programmatic test
policy. Four concrete class candidates remain: Absorb, Vacuum, TriggerEvents,
RemoveOnEvents. Shared-boost whole-loop integration and broader AI/affecter/stash
coverage/staging remain open. No player staging, commits or releases.


## Absorb consumer and native drain presence (2026-10-01)

XML2 CPUAbsorb is not established by the existing def_absorb_damage affecter.
Its helper14C320 chooses the attached source or holder from sponsor bit1,
evaluates chance against the recipient and damagePercent against the source,
and restores health (virtual1A4) or energy (virtual1A8). Callback14C610 runs
for inflicted=true;14C630 runs for inflicted=false. Parser14C650 reads sponsor,
energy, inflicted, chance, damagePercent and beameffect. Constructor159590
sets chance=1, damagePercent=0 and all three switches false. A beam resource
at definition+70 is optional and is used only for distinct holder/recipient.
This trace establishes the callback contract, not completed implementation.

XML1 already has native energy drain: dmgmod_drain table44C518 has mask4;
45CF4 tests that bit in the damage record,45D21 reads target energy and45D67
calls its setter.45DD1 obtains the attacker and45E06 calls3A870 to credit
energy through the existing native recovery path. Preserve this existing
system without balancing or semantic parity work. The presence audit now
checks the original table and actual consumer instructions. This evidence
does not establish the health-restoration callback, which remains pending.
The added def_absorb_damage incoming-hit affecter is also kept separate.

Validation: audit-native-powerup-callbacks.py passes against the original
XML1 and XML2 image identities (38 callbacks,25 concrete class rows).
No runtime change or gameplay claim in this trace pass. Local traces:
work/xml2-resume/absorb-consumer.asm and xml1-drain-presence.asm. The latter
starts at verified function43FA0; the abandoned43000 mid-instruction span
was replaced and is not evidence. Next: resolve health callback presence
before introducing any new Absorb implementation.


### Absorb owned data binding (2026-10-01)

Added raven_absorb.h/.cpp and captured sponsor/energy/inflicted/beameffect
through the real definition metadata parser. The owned binding retains
original resource paths and cloned fields. Chance is evaluated with the
recipient actor; damagePercent with the source actor. Neither rank is cached.
Constructor defaults follow159590 (chance1,percentage0,all switches false).
Only class=absorb binds. This does not install guest callbacks yet.

Release raven-harming-operand-test passes native defaults, independent live
recipient/source ranks, endpoint0, case-insensitive field names/booleans,
clone/source retirement, original beam spelling, output atomicity after an
unreadable source and unrelated-class exclusion. Existing harming, add-attack,
percentage and duration tests also pass. Logs: work/xml2-resume/
absorb-operands-build.log and absorb-operands-test.log.

CPUAbsorb remains incomplete: guest damage/hurt dispatch, generation checks,
health/energy setter integration and optional native beam delivery are pending.
The native energy-drain consumer remains authoritative and unchanged; no
energy-drain parity implementation was authored. No gameplay or staging claim.


### Absorb C bridge and native integration interfaces (2026-10-01)

Added raven_absorb_runtime.h and raven_absorb_sample. The C bridge takes
already-resolved holder/source actor addresses and selects source as chance
recipient only for sponsor=true. It retains a complete owned result, rejects
oversized beam paths instead of truncating them, and does not publish partial
outputs on invalid/missing input. Release operand suite passes sponsor and
holder selection, exact path, oversized-path failure atomicity and definition
retirement. Logs: absorb-bridge-build.log and absorb-bridge-test.log in
work/xml2-resume. This bridge is not yet installed in native callbacks.

Native XML1 interface evidence for the next integration step:
- Actor health setter virtual19C (native call47465); implementation2E5B0
  clamps against maximum-health short+246 and stores float+240.
- Energy setter virtual1A0 (47473,45D67); getter2E8C0 uses the native energy
  policy, including its existing debug flags. Do not read energy raw instead.
- XML1 HUD singleton158860 returns56DD08. Its floating-number method is
  virtual34 ->156EB0, with seven arguments, integer amount and ret1C.
  XML2 singleton1AB960 uses virtual48 ->1A9C60, eight arguments and float
  amount. Do not copy the XML2 vtable slot or ABI. Trace saved in
  work/xml2-resume/absorb-xml1-hud.asm from verified156EB0 entry.
- Existing lightning_beam in raven_missing_area_handlers.inc shows the native
  transient beam interface (effect manager virtual30, seven arguments).
  Preserve that interface; do not copy XML2 virtual34 or lifetime argument.

The callback integration still requires scoped resource availability,
full owner/entity revalidation around guest calls, setter/HUD/beam dispatch,
and native damage/hurt traversal tests. No gameplay completion claim.


### Absorb native callback integration (2026-10-01)

Installed only the missing class=absorb damage/hurt callbacks, preserving any
existing authored native pointer. Callback pool is80 bytes; offsets72/76 are
Absorb damage/hurt. Native29ECA damage has three cdecl args;29F04 hurt has
TWO (instance,record). The hurt source is record+0. The first probe caught the
initial incorrect three-argument hurt adapter; it was corrected and the full
Release --powerup-definition-test now exits0.

raven_absorb_guest.inc validates full active generation, definition, source
and holder handles around guest calls. It canonicalizes XML1's self-source
sentinel, samples independent recipient/source operands, applies integer
nonzero rounding and uses existing actor virtual19C/1A0 setters. It leaves the
hit amount unchanged and preserves general registers/FPU. Native HUD uses
integer negative amount, seven args and virtual34. Optional beam uses captured
package scope, loaded native resource lookup and transient manager+30.

Tests execute native selectors4/5, actual health setter2E5B0 and energy setter
2E5F0/getter2E8C0. Health50->55->60, max100 clamp, unchanged hit20, native
energy getter policy, rejected chance and inactive-owner checks pass. HUD
singleton/method run with XML1's display-disabled gate. No rendered HUD or
beam claim. Logs: work/xml2-resume/absorb-callback-build.log and
absorb-callback-test.log (latest passing run replaces the initial failed log).

Still pending for Absorb: beam resource loading/ownership, distinct sponsor
recipient delivery, owner/actor/resource retirement during nested callbacks,
and substituted-terminal checks for notification/beam arguments. The callback
is implemented but the concrete class remains pending integration validation.
The player executable has not been staged from this development build.


### Absorb standalone beam scope/loading and sponsor check (2026-10-01)

Found and fixed a concrete integration gap: effect_scope only retained scope
when nested FX declarations existed. Absorb's standalone beameffect now retains
the actual native package namespace, including clone/reset/retirement behavior.
Metadata tests cover a beam-only definition with namespace37 and no FX list.

XML2 beam binder14C2A0 requests the authored resource during definition binding.
The XML1 counterpart94EEE calls188C0 virtual18(name,scope). Added that request
at94FE0 alongside scope capture through the repeatable generation guard.
The native package owns resource lifetime; emission performs a lookup, not a
new acquisition, and no cached host-owned handle survives package teardown.
The native loading terminal is not yet exercised by the new fixture.

Beam emission now obtains positions through native actor virtual24 and checks
owner/entity identity after each guest call. It re-resolves the scoped resource
after effect-manager access and requires the same live generation before emit.
This path still needs its terminal/lifetime fixture; no beam visual claim.

The full Release --powerup-definition-test passes distinct sponsor delivery:
source actor202 receives health25->30 while holder201 remains100. Recycling
the source generation rejects the callback without a second restoration.
Metadata test passes; guard-raven-powerup-metadata.py ran twice successfully.
Logs: work/xml2-resume/absorb-resource-build.log, absorb-resource-test.log,
absorb-sponsor-build.log and absorb-sponsor-test.log. No staging/goal closure.


### Absorb programmatic integration complete (2026-10-01)

CPUAbsorb is now implemented under the goal's basic programmatic acceptance
policy. Added a private fixture through the real94FE0 load boundary,188C0
singleton, scoped260B0 resource lookup, health2E5B0 and position75F40. Only
manager terminals (resource load, HUD delivery, manager query and emission)
are substituted to inspect arguments. This is not rendered/audio evidence.

Checks pass original beam path/package12, single load, distinct source202
health30->35, HUD integer-5 and seven-argument contract, source/holder beam
endpoints, and suppression after owner retirement, recipient retirement or
resource generation replacement during nested terminal calls. Registers and
FPU depth are preserved. The native position getter returns bounds centre;
the fixture's initial world-origin expectation was corrected after tracing
75F40. Runtime already used that native getter. The full Release probe exits0.
Logs: work/xml2-resume/absorb-integration-build.log and
absorb-integration-test.log. The latest passing log supersedes failed fixture
expectations; no visual correctness is inferred.

Updated concrete presence inventory:7 implemented additions,14 already-present
class systems skipped, BoostWhenShared pending sharing-loop validation, and
3 pending classes (Vacuum,TriggerEvents,RemoveOnEvents). This supersedes older
Absorb-pending notes above. Broader affecter/AI/stash integration and final
staging remain open; TODO #3 and the overall goal are not complete.


### Vacuum native consumer traced (2026-10-01)

CPUVacuum vtable4A941C virtual0C invokes153870, which resolves attached holder
(v60) and source(v5C), checks physical-entity eligibility and calls153280 with
the native frame delta plus owner context. This is an attached powerup think
callback; it is not the already implemented magnetic attack's input/update
entry. Parser154DC0 and resource binder154840 are inherited base methods.
Constructor159810 clears bit1 at+60, initializes shorts+62/+64 to1 and enables
the think-event bit80. The prop branch15369A is guarded by that initially-clear
bit; do not assume it is enabled or invent an authored option without a writer.

Consumer153280 requests a radius144 native query around holder virtual24,
sets query filters and applies source-based ally filtering. It skips holder,
a type exclusion and mass byte+31D greater than1. Direction is normalized
holder-centre minus candidate-centre in3D and scaled300. Ground gap under36
sets upward velocity300. Actor path excludes recent+628 time (<3), triggers
contact under distance60, otherwise averages pull with current velocity and
uses native orientation/animation transition interfaces. These are consumer
identity facts; no parity changes to existing XML1 pull handlers are authorized.

Contact153230 obtains the attached originating combat node (virtual7C),
queries its event100 through node virtual1C, and invokes that event's virtual4.
It must not blindly use the holder's current combat node. Existing XML1
powerup_origin_move and shared area-query helpers are integration candidates;
actor cooldown/orientation/animation identity and applicable contact-node
lifetime still require verified mapping. No runtime callback installed yet.

Traces: work/xml2-resume/vacuum-consumer.asm (153280:5F0) and vacuum-tick.asm
(153870:F7). Existing magnetic query/velocity helpers in
src/raven_missing_area_handlers.inc can supply established XML1 interfaces,
but their magnetic-specific target behavior is not a substitute for Vacuum.
Concrete presence inventory now records this trace instead of identity only.


### Vacuum actor/type mapping and motion kernel (2026-10-01)

Correction to the previous Vacuum trace note: the58BDCC eligibility check is
CActor, not generic physical entity. Prior authoritative recall/talent traces
already identify that actor descriptor. Vacuum holder/source must therefore
resolve as actors. Candidate query results are physical entities; excluded
5D67FC is projectileent, proven by initializer3E8FF0 loading name496F9C into
class descriptor5D67F8 and getterABEC0. Do not treat the name-string scanner's
missing exact XML1 match as absence: XML1 projectileent starts inside a larger
printable run at3CD5FC (native refs include7BF11 and356601).

The cooldown+628 and reaction atom60B064 are shared with the already traced
magnetic handler (FEC71/FED77). Use its established XML1 field/API mapping,
without modifying that completed handler or importing parity differences.
The existing XML1 projectile-tornado class was inspected as a presence
candidate; its name alone does not prove the attached Vacuum callback exists.

Added reusable raven_vacuum_motion geometry kernel with no guest mutation:
3D inward vector300, ground-gap threshold36/upward300, average with current
velocity. Tests cover a3D130-unit separation, current velocity, ground
threshold, coincident centres and atomic rejection of nonfinite input.
Release operand test exits0; logs vacuum-motion-build.log and
vacuum-motion-test.log in work/xml2-resume. Guest tick, query, contact/node
lifetime and animation integration remain pending. No callback is installed.


### Vacuum native actor bridge (2026-10-01)

Added src/raven_vacuum_guest.inc, compiled through raven_bishop_guest.c.
The bridge separates sphere holder from alliance-filter source, snapshots
query result handles, validates generations around nested calls, applies
3D motion/cooldown, requests yaw through native virtual2C, and resolves the
existing XML1 reaction move through its combat style. Magnetic Grasp keeps
its original same-actor query wrapper and behavior.

Contact argument correction, from153230 and caller15352C..15354A:
helper arguments are(holder,pulled target,source,active index,context).
After restoring its stack,153263 reads source from+0C then15326A reads
pulled target from+0C after pushing source. Event virtual4 therefore receives
(pulled target,source), not(source,target) and not(holder,holder). Its node
comes from attached virtual7C. The bridge delegates this dispatch to the
attached-owner layer; it does not substitute the holder's current move.

Yaw interface verified by XML2 16B2D0/16B3C0 and32F60: planar atan2,
normalized angle, rotation virtual2C(0,0,yaw). Existing XML1 lunge already
uses this interface. Nonactor/prop branch remains gated off pending proof
of a writer for the constructor-cleared definition bit; do not import
Magnetic Grasp prop destruction as a replacement.

Release build and --powerup-definition-test exit0, including new retired
owner rejection before invalid actor pointer access and native query-pool
exhaustion with a distinct source argument. Existing operand suite passes.
Logs: work/xml2-resume/vacuum-guest-build.log, vacuum-guest-probe.log,
vacuum-guest-operands.log. These checks do not prove a populated world query,
contact event, or reaction transition end to end. Attached-powerup callback
registration/owner bridge and those integration checks remain pending;
Vacuum is not yet marked implemented. No player executable staged.


### Vacuum attached callback and contact contracts (2026-10-01)

raven_vacuum_powerup.inc now connects the new Vacuum bridge to an active
XML1 powerup owner. Explicit class=vacuum installs only an empty func_think
slot+A8; callback allocation grows80->84 bytes, retaining earlier offsets.
Owner/definition/source/holder identity and native actor generations are
checked. The public tick preserves guest registers and x87 state. Contact
resolves the source combat node through powerup_origin_move, looks up event
100, revalidates the node/owner/actors, then invokes virtual4(target,source).

Native-pool fixture covers distinct source/target argument order and
suppression when lookup retires the owner, changes the source node, recycles
the target, or recycles the source. Only node lookup and event delivery
terminals are substituted. Installed think callback executes with an
exhausted native query pool and preserves ABI; direct tick returns FOUND
for the live fixture and MISSING for inactive owner. Installation retains
an existing authored callback. Initial fixture omitted the target's actor
flag at+18; corrected the fixture from the native entity contract, without
weakening runtime validation. Full Release --powerup-definition-test exits0.
Logs: work/xml2-resume/vacuum-dispatch-build.log and
work/xml2-resume/vacuum-dispatch-test.log.

Vacuum remains pending populated-query/reaction integration validation and
confirmation that the constructor-disabled prop branch has no reachable
enabling writer. Do not count callback registration as whole-class proof.
No world gameplay, visual or audio acceptance claimed; no player EXE staged.


### Vacuum basic programmatic acceptance (2026-10-01)

Added target-snapshot fixture executing native entity-generation resolution,
bounds centre, clock and velocity setter with distinct holder/source/target.
It checks inward velocity150 from a100-unit target, yawPI, self/stale handle
exclusion,3-second cooldown, mass rejection, contact order and stopping a
snapshot after contact retires the owner. Rotation's scene/model terminal is
substituted; no rendered or animated scene is claimed. Empty combat style
exercises native named-move lookup's missing-reaction result. The full
Release --powerup-definition-test exits0 (vacuum-target-build.log and
vacuum-target-test.log). The existing attached/contact fixture also passes.
An initial test copied physical RTTI rather than actor RTTI; the fixture now
uses the established private actor RTTI getter/bit contract, without changing
runtime actor selection. Extra revalidation was added between the holder and
target centre calls so nested holder updates cannot leave a stale target.

Prop control trace: full Vacuum vtable4A941C uses inherited base attribute
parser154DC0. Its entire154DC0..15578F span contains no writes to extra fields
+60/+62/+64. Vacuum copy virtual124=1531E0 copies those fields from another
Vacuum, constructor159810 clears bit1 and sets both shorts1. No authored prop
control is exposed by this class. Preserve its disabled branch rather than
inventing a property or enabling Magnetic Grasp destruction. Evidence:
work/xml2-resume/vacuum-base-parser.asm and vacuum-copy.asm.

Vacuum is now classified implemented at the user's basic-programmatic
acceptance level. This supersedes earlier requests in this ledger for a
whole scene query/animation acceptance campaign: those are not required by
the user's current policy. Scene membership/alliance filtering uses the
existing native query helper, with holder and source passed separately;
rendering, real-world filtering and successful animated reaction remain
unverified user-gameplay coverage, not claims made by these fixtures.
Concrete class counts:8 implemented additions,14 existing/skipped,
BoostWhenShared integration validation outstanding,2 missing classes
(TriggerEvents, RemoveOnEvents). Broader AI/affecter/stash/staging work remains.


### TriggerEvents declaration ownership and RemoveOnEvents trace (2026-10-01)

CPUTriggerEvents resource binder152C70 enumerates FunctionEvent children,
reading function,triggertag,sponsor,thirdparty. Native table546628 orders
activate,deactivate,death,attempt_hit,damage,hurt,hurt_attempt,think,trail,
touch (0..9). Each slot has a byte tag and sponsor/thirdparty flag bits.
Later valid declarations replace tag; absent optional flags retain previous
values. Added owned child capture via the existing native named-node iterator
in raven_xml1_powerup_capture_effects, metadata clone/reset/retirement, and
atomic selector API. The metadata test covers all ten slots, case-insensitive
fields/functions, replacement and inherited flags, independent clone after
source retirement, reset, invalid selector, and disabled wrapped byte tag.
Release metadata test and full --powerup-definition-test exit0; logs
trigger-metadata-build.log, trigger-metadata-test.log, trigger-capture-test.log.
The tests validate storage/lifetimes; no runtime TriggerEvents callbacks are
installed yet. Native child ingestion of a FunctionEvent-specific fixture
also remains to validate; existing native parsing checks still pass.

Dispatch trace152DE0 resolves source first, selects third party when bit20,
sponsor when bit10, otherwise attached holder, obtains attached origin node
virtual7C, and calls node virtual14(tag,selected actor,source actor). Several
hit callbacks bracket this with an attached reentrancy flag (virtual84/D0).
Death152EF0 additionally calls inherited154BC0. Do not omit these lifetime/
recursion semantics. hurt_attempt has its own slot6; XML1's nine ordinary
callback slots alone cannot establish coverage of all ten events.
Evidence: work/xml2-resume/trigger-events-details.asm and
trigger-final-callbacks.asm;152C70/152DE0 disassembly inspected directly.

RemoveOnEvents parser150100 authored keys: OnCombatNode (special value
randomfinisher), no_remove, shared_powerup, OnDamageType prefix12,
OnDamageMod prefix11, OnAttackType prefix12. Masks accumulate at+60/+70/+64;
node/shared names at+68/+6C; flags at+74. Handler150260 still needs full
consumer/interface mapping. Neither class is marked implemented.

### Vacuum canonical self-source correction (2026-10-01)

XML1 native2AD03 stores self-applied powerups with the null source sentinel.
Vacuum now keeps raw_source for owner identity checks and resolves that
canonical sentinel to the holder for actor/alliance/contact integration.
Added explicit-null-sentinel live-tick test alongside explicit source,
preserving the native instance bytes afterward. Release build and complete
--powerup-definition-test exit0: vacuum-self-source-build.log and
vacuum-self-source-test.log. This corrects integration for self-applied
Vacuum without changing existing XML1 source storage or other powerups.


### TriggerEvents native dispatch integration (2026-10-01)

Verified authored class identity: XML2 registration157AA5..157ADF associates
callevents (4A7C64) with factory547274 -> vtable4A7BD8 ->159850. Allocation
1598B2..1598CF constructs CPUTriggerEvents vtable4A9554 and ten two-byte
entries via159900, which clears flags/tag.159910 is its copy routine, not
its constructor (correction to earlier shorthand).

Added raven_trigger_events_guest.inc. It evaluates owned event declarations,
canonicalizes XML1's null self-source, selects thirdparty before sponsor
before holder, resolves non-sponsor targets through native physical resolver
2B810, and dispatches originating node virtual14(tag,selected,source).
XML1 E20B0 -> E1D90 retains stock actor virtual4 versus nonactor virtual8
selection. Full attached generation guards prevent same-owner hit recursion
for events3..6 and9 while preserving other lifecycle dispatch. Guest
registers/x87 are preserved. Nine existing native callback slots now install
only when empty and explicitly declared; earlier callback offsets unchanged,
allocation120 bytes. The separate hurt_attempt6 ingress is NOT installed yet.

Fixture executes all ten helper selectors, distinct source/holder/physical
third party, thirdparty precedence, invalid/stale handle suppression and
recursive-hit rejection. It additionally exercises all nine installed
callbacks through native29DC0 owner traversal/filtering/argument dispatch,
not just direct helper calls. Native E20B0 and E1D90 run; event lookup and
delivery terminals are substituted. Release --powerup-definition-test exits0:
work/xml2-resume/trigger-callback-build.log and trigger-callback-test.log.
Initial shared-core run also passed trigger-dispatch-test.log.

Remaining TriggerEvents work: connect hurt_attempt at its verified incoming
hit boundary; validate FunctionEvent-specific native node ingestion; reconcile
inherited death behavior with already-existing XML1 lifecycle (skip existing
systems). No full-class completion claim and no visual/gameplay claim.

### TriggerEvents incoming hit and native ingestion checks (2026-10-01)

XML2 actor incoming-hit boundary46F53 emits selector6 while health is
positive, before reflection handling. XML1 reflection preamble44130 now
calls raven_xml1_trigger_hurt_attempt. The helper snapshots attached full
handles, uses native94F00 hit filtering, checks owner/source lifetimes and
preserves guest registers/FPU. The fixture verifies attached traversal,
alive/dead gating and recursive-event rejection. Guard regeneration ran
twice successfully. The separate physical-entity ingress A6DE0 ->15BDD0
still requires classification; this is not a full-class completion claim.

Added FunctionEvent-specific native tree fixture through96370: two named
children with independent multi-attribute lists, sponsor/thirdparty fields,
automatic touch callback installation, native953A0 clone and96220 reset.
The first test placement preceded callback test allocator initialization;
moving the fixture after existing test-storage setup resolved that harness
failure without changing production logic. Full Release definition suite
exits0: work/xml2-resume/trigger-tree-build.log and trigger-tree-test.log.
Earlier incoming suite also passed trigger-incoming-test.log. These checks
exercise native parsing and dispatch contracts, not gameplay or visuals.
Remaining TriggerEvents work: physical ingress classification and inherited
death lifecycle reconciliation. RemoveOnEvents and other ledger gaps remain.

### TriggerEvents physical ingress and lifecycle classification (2026-10-01)

XML2 A6F6A emits hurt_attempt6 immediately before hurt5 for physical damage;
physical dispatcher15BDD0 forwards that selector to definition virtual2C.
XML1's corresponding nonactor hurt boundary92386 now invokes the same
hurt_attempt helper before native29DC0. The helper resolves physical handles
through2B810, covering actors and nonactors with full generation checks.
Fixture attaches the effect to a physical nonactor and verifies E1D90 routes
the tagged event through event virtual8, with its source actor preserved.
Complete Release definition suite exits0 (trigger-physical-build.log and
trigger-physical-test.log). Generation guards support both a clean source
and a rerun containing the existing secondary-victim hook; ordering is
secondary-victim, hurt_attempt, native hurt. Both guards reran successfully.

XML1 already supplies removepowerup_death, native resolver2DCC2 ->2C830,
which resolves the holder and invokes existing removal2AF30. This establishes
existing death-removal functionality. Per scope, skip XML2 base154BC0 parity;
do not replace XML1 cleanup or override authored lifecycle callbacks.
CPUTriggerEvents is now classified as the ninth implemented addition at
basic programmatic acceptance. This does not claim gameplay verification.
RemoveOnEvents, shared-boost loop validation, broader classification and
final staging remain open.

### RemoveOnEvents ordered operands and consumer trace (2026-10-01)

Traced150260 completely through return150437, plus150100 parser,
14FEE0 combat-node condition and14FFE0 descriptive getter. Evidence saved in
work/xml2-resume/remove-events-consumers.asm. Conditions OR damage-type,
damage-modifier and attack-type masks; combat-node matching is an alternate
condition. OnCombatNode=randomfinisher additionally uses cached randomized
selection14FEA0. no_remove skips removal but not subsequent reaction logic.
After optional removal,150361..150430 also copies/reworks a hit, optionally
links shared_powerup, schedules a follow-up hit and requests feedback. A
remove-only callback would omit observable functionality; runtime remains
pending until these native consumers are mapped into XML1 interfaces.

Added ordered declaration ownership for recognized OnDamageType*,
OnDamageMod*, OnAttackType*, OnCombatNode, no_remove and shared_powerup.
Repeated exact keys remain independent because native mask operands OR;
values preserve case, and snapshots survive reentrant reset/retirement.
Tests cover duplicate/order retention, named suffixes, unrelated-key
exclusion, clone independence and reentrant retirement. No callback is
installed from this metadata-only step. Release metadata test and complete
native definition suite exit0: removal-metadata-build/test.log and
removal-capture-build/test.log in work/xml2-resume. Existing classes remain
unchanged and CPURemoveOnEvents is not marked complete.

### RemoveOnEvents decision core (2026-10-01)

Added raven_remove_events.c/.h to raven-actor-talent. It combines native
resolved damage-type/modifier/attack masks and the adapter's combat-node
match as alternatives, returning independent removal/reaction actions.
1502DD..1502F1 suppresses a synthetic recursive hit before matching;
150376 suppresses another reaction for marked ordinary hits while allowing
removal. no_remove suppresses only removal. These distinctions are covered
by raven-harming-operand-test, including nonmatches and null configuration.
Release build/test exits0: removal-decision-build.log and
removal-decision-test.log. This core is not yet wired into native dispatch;
CPURemoveOnEvents remains incomplete.

Additional source evidence: authored name remove_on_events is at4A7C34,
registered157BA3 with factory547284. Random-finisher table4A7138 contains
attackknockback2, attackstun3, attacktrip2, popupattack;14FEA0 caches selection
in actor412 high nibble.1503E2 multiplies the copied hit by float3 at490E10,
queues it with0.1 delay through virtual19C, and retains source/node data.
14FE70 sets its shared-powerup byte toFF for zero;81F40 resolves actor-like
recipients. These interfaces still need XML1 mapping, not hardcoded XML2
field offsets or invented character-specific replacements.

### RemoveOnEvents native configuration adapter (2026-10-01)

Added raven_remove_events_guest.inc with explicit remove_on_events identity
and ordered operand resolution through XML1 native49480 damage names,
49510 modifier token parsing,59740 attack names and27EF0 node/name interning.
Masks use XML1 ordinals; repeated declarations accumulate. no_remove uses
the native true comparison and randomfinisher remains sticky. Guest general
registers/FPU are preserved. No runtime callback is installed yet.

The native fixture resolves fire+energy, trip+stun and punch, checks wrong
class/output preservation and guest registers. Initial runs exposed missing
pre-entry CRT strtok state. The fixture now provides a private88-byte CRT
block in the actual native thread/global slot selected by3465A6 and restores
that slot afterward. Production49510 and its tokenizer are unchanged.
Full Release definition test exits0: removal-native-config-build.log and
removal-native-config-test.log. Named-node/shared-tag runtime use, cached
random selection and actual removal/delayed reaction remain pending.

Delayed reaction integration evidence: XML1 native93BE0 accepts a hit record
and delay, checks positive integer damage/receiver pending record/pool32,
copies the record through18DD00 and schedules existing44E7E4 via277E0.
Use that existing system; do not create a parallel timer or damage queue.

### RemoveOnEvents native modifier list validation (2026-10-01)

Extended configuration fixture with one declaration containing several
space-separated modifiers and leading/repeated spaces. Native49510 combines
popup+drain with earlier trip+stun declarations (mask74); later no_remove=false
replaces true while randomfinisher stays set. Full definition suite exits0:
removal-native-multimod-build.log and removal-native-multimod-test.log.

Traced hit-copy interfaces: XML1 2B720 owns source, integer damage+8,
attack+C, damage type+10, modifiers+18, originating node+48 and lower four
record flags at+60. Existing18DD00 copies the full100-byte delayed record.
XML2's reaction marker lives in its+35 byte; native XML1 copy already
preserves corresponding bit1 at+60. Existing XML1 integer RNG1233C0 accepts
(min,max) cdecl (used by leader selection); avoid a separate host RNG for
finisher choice. Runtime reaction construction/dispatch still pending;
no completion claim or staged executable change.

### RemoveOnEvents cached finisher selector (2026-10-01)

Added native1233C0 inclusive0..3 selection for XML2's four traced finisher
node names. Selection is shared per actor using a bounded512-entry cache
keyed by full entity generation plus resolved actor address; no stock actor
bits are borrowed. A stale handle cannot read or create a selection, and a
new actor generation draws again. General registers and x87 state remain
preserved. Fixture runs with native entity lookup and seeded native RNG,
verifies a single draw, stable repeat lookup, stale rejection and generation
reroll, then restores cache/manager/seed state. Full Release definition suite
exits0: removal-finisher-build.log and removal-finisher-test.log.
This provides the selection helper; node matching and removal/reaction
callback wiring are still pending. CPURemoveOnEvents remains incomplete.

### RemoveOnEvents real hit condition evaluation (2026-10-01)

Added raven_xml1_remove_events_actions, consuming XML1 record damage+10,
modifiers+18, attack+C, node+48 and reaction flag+60bit1. Native table44CBC0
confirms attack0=direct and damage table44C498 confirms13=dmg_direct;
synthetic recursive records are rejected before any RNG/config work.
Mask matches short-circuit node selection as native1502FF..15033B does.
Named-node matching uses the originating hit ID, not current animation.
Random-finisher matching uses the cached name and existing native node-scope
resolver. No actor removal or queued-hit side effects are installed yet.

Fixture now checks actual record conditions, no_remove, recursive ordinary
and synthetic hits, absent actors, native named-node interning/match/mismatch,
and cached random-finisher match/mismatch without another RNG draw. Release
full definition suite exits0: removal-actions-build/test.log and latest
removal-node-build/test.log. RemoveOnEvents is still incomplete pending
runtime callback and reaction side effects; final player staging unchanged.

### RemoveOnEvents native delayed reaction queue (2026-10-01)

Added raven_xml1_remove_events_queue_reaction. It validates the full holder
handle, copies via native2B720, zeros the originating damage, converts triple
damage using existing XML1 imported-integer policy, sets attack direct0 and
dmg_direct13 plus recursive flag60bit1, allocates a fresh native hit ID
through59CE0/v1C and queues via93BE0 with0.1 simulation-time delay. It preserves
guest registers/FPU and revalidates the holder after native calls. Existing
queue rejection/pending-hit behavior stays native. Surrounding shared-powerup
override and feedback/callback integration remain pending.

The fixture uses original A9F60 scheduler construction,93BA0 hit-pool setup,
2B720 record copy,93BE0 queue and277E0 schedule; no substituted terminals.
It checks triple7->21, source/node/primary+secondary victim tag preservation,
direct-hit identifiers, recursive marker, one scheduled entry, rejection of
a second pending hit and stale-holder nonmutation. Scheduler, hit pool,
manager, actor pending pointer and clock singleton state are restored.
Full Release definition suite exits0: removal-queue-build.log and
removal-queue-test.log. The fixture does not execute the queued combat hit.
CPURemoveOnEvents is not marked complete and player staging is unchanged.

### RemoveOnEvents native detach (2026-10-01)

Added raven_xml1_remove_events_detach with full active-generation, explicit
class and holder-actor checks. It delegates to XML1 native2AF30, retaining
native deactivation/FX/list/generation/definition ownership handling. No
instance or definition is read after native detach. General registers/FPU
are restored. Fixture uses a borrowed definition, executes real unlink,
checks empty list/type masks, retired owner generation and duplicate-call
rejection, then restores pool/definition/actor and metadata state. It does
not claim owned-reference release or reentrant-deactivation coverage.
Full Release definition suite exits0: removal-detach-build/test.log.

Further trace ruled out XML2 A5A90 as the shared-powerup consumer: it is
primary/secondary victim-event dispatch, already supported. XML2 2A560
constructs a namespace3 resource identifier for the reaction's shared tag;
no unverified XML1 hit field has been repurposed for it. Shared reference
consumer and feedback remain pending before full callback installation.

### RemoveOnEvents shared-hit consumer located (2026-10-01)

The previously unresolved hit+24 shared_powerup identifier is consumed in
XML2 actor hit-context function44190 at44762..44834, called by47040 at472BB
AFTER physical damage application A6DE0 (471C8) and reaction gate43DF0.
Constructor45650 stores recipient at context+0, resolved source at+4,
actor-only source at+8, and copies the incoming hit at context+C. Therefore
44762 context+30 is exactly hit+24, not a separate instance resource field.
4476D..44780 requires recipient health>0 before resolving that identifier via
manager159E20/v5C.447D3 attaches through15DAF0 with the actor-source handle
(or native null5A9F74 for a nonactor source); the returned active handle is
validated before resolving it via43880.435A0 maps hit duration byte34=FF
to -1.0f (4905B8), otherwise unsigned byte converted to float.44834 invokes
active v94 with this duration, unless duration is zero. RemoveOnEvents sets
FF, so attachment must receive the native -1 duration override.

This rules out immediate attachment inside the removal callback: a lethal
follow-up must not attach the shared powerup, and delivery follows native
hit/reaction eligibility. Remaining implementation: preserve owned shared
metadata through the delayed queue, integrate at the XML1 native actor-hit
consumer boundary, preserve actor-source identity and native lifetime rules,
then wire and validate the complete removal callback. Existing XML1 damage
and reaction eligibility remain authoritative; do not port XML2 parity gates.
Evidence: work/xml2-resume/remove-events-shared-consumer.asm. No source or
player executable changed during this trace; class remains incomplete.

### RemoveOnEvents shared attachment adapter (2026-10-01)

XML1 actor hit46270 applies physical damage at46406 and gates reaction44630
through44410 at464D4. That is the native integration boundary; XML1's existing
eligibility remains unchanged. Hit+50 is already used by native44686..4474A
for event-resource lookup, so it must not be borrowed for shared metadata.
Evidence: work/xml2-resume/xml1-actor-hit-reactions.asm.

Implemented raven_xml1_remove_events_shared in raven_remove_events_guest.inc:
owned catalog creation in namespace12, alive full-handle recipient validation
before/after resource loading, live actor source or native null sponsor,
native2AA90 ownership transfer, generation-checked active duration override
(-1), and release on failed transfer only. Activation can retire the returned
handle; the helper never releases an already-transferred definition or writes
through a stale returned slot. Full register/FPU state is preserved.

Basic native fixtures pass distinct attacker source, -1 duration, dead/stale
recipient exclusion, stale-source null normalization, missing tag, active-pool
exhaustion cleanup, balanced definition references and register/FPU checks.
Build and complete --powerup-definition-test exited0; logs:
work/xml2-resume/removal-shared-build.log and removal-shared-test.log.
Activation-time reentrant retirement is guarded but not exercised by this
fixture. Notification terminal is substituted as in the existing shared-boost
fixture. No world/visual validation claim. Remaining: delayed-hit metadata
bridge, native consumer hook, feedback and complete callback wiring/testing.
RemoveOnEvents remains incomplete and no player executable has been staged.

### RemoveOnEvents delayed shared-tag bridge (2026-10-01)

Implemented a bounded32-slot owned-tag side table keyed by the actual native
100-byte delayed-hit pool slot, full recipient handle and fresh hit serial.
Queue acceptance transfers a duplicated tag to the slot; queue failure frees
it without disturbing an existing pending hit. The generated XML1 actor-hit
boundary464E6 invokes delivery after native reaction44630, retaining the
original44410 gate. Delivery uses the copied context+C hit serial, consumes
its association before native attachment and frees the tag afterward.
Native931D0 slot release and93BA0 pool reset clear undelivered metadata,
including cancelled/rejected hits. Generation guard installs all three hooks.
No original hit fields or native damage/reaction gates are repurposed.

Native queue fixture now checks independently owned tag text, mismatching
recipient generation and serial, copied-context once-only consumption and
actual93A30->931D0 cancellation cleanup. Existing native source/attachment
checks also still pass. Build and complete --powerup-definition-test exit0:
work/xml2-resume/removal-bridge-build.log and removal-bridge-test.log.
The bridge fixture uses a nonexistent tag and does not traverse the complete
actor damage pipeline. Successful attachment has separate native checks;
these are not claimed as one end-to-end delayed-hit test. Callback dispatch,
feedback and final combined integration remain unfinished. No player staging.

### RemoveOnEvents incoming callback wired (2026-10-01)

Incoming hurt-attempt snapshot traversal now recognizes remove_on_events,
uses XML1 filter94F00, revalidates the attached generation and dispatches the
new removal callback. The callback evaluates masks/node selection, captures
the shared tag before native detach can release its definition, guards against
reentrant reuse, and queues the reaction with owned metadata. Existing native
XML1 hit eligibility/filtering wins. Physical nonactor holders may detach;
only actors enter the delayed-reaction branch. No stock callback is replaced.

The final XML2 call15042D is spatial sound playback, not generic rumble:
manager494F94/v1C=620E0, sound-table53E940 entry15 names
common/game/break_shield. XML1 counterpart3CBCF4/v18=5CA20 has only14 sound
entries at44CCB8; copying index15 would access outside that table. The new
callback resolves the sound by name through existing XML1 manager151EF0/v34,
then uses positional v5C with native volume1/far1300/near150. Missing named
resources follow the existing sound lookup failure result; no alias/fallback
asset is invented. Runtime sound/resource availability remains unverified.

The detach fixture now invokes the complete hurt callback for a matching
recursive ordinary hit, proving removal without recursive queue/feedback,
real native unlink/mask rebuild and generation retirement. Build and full
--powerup-definition-test exit0: removal-callback-build/test.log. Existing
queue/delivery/attachment fixtures remain green, but a combined nonrecursive
callback-to-delayed-delivery test and feedback terminal assertions remain.
Owned-definition release during callback and reentrant retirement also need
combined coverage. The class is not yet marked complete. No player staging.

### RemoveOnEvents basic implementation validation complete (2026-10-01)

The combined nonrecursive no_remove callback fixture now exercises ordered
metadata, native damage copy/tripling and original-hit zeroing, actual native
queue scheduling, copied shared-tag ownership and once-only consumption.
Substituted audio lookup/position/play terminals assert the exact authored
name, positional coordinates, volume1, far1300/near150 and native stack ABI.
A separate native incoming snapshot/filter test attaches an OWNED catalog
definition, invokes removal through hurt-attempt dispatch, verifies actual
unlink/generation retirement/reference release, then repeats the hit to prove
no duplicate release. Existing attachment/source/duration and cancellation
checks remain green. Build and complete definition-test suite exit0:
work/xml2-resume/removal-combined-build/test.log and removal-owned-build/test.log.

CPURemoveOnEvents is classified as an implemented addition under the user's
basic programmatic validation policy. Ten concrete additions now implemented;
fourteen existing families skipped. Shared-boost successful-loop validation,
AI/affecter classification, stash integration and final staging remain open.
Limitations: no full world actor damage pipeline or actual audio playback was
run; the combined callback fixture uses a missing shared tag, while successful
shared attachment/source/duration has separate native tests. Activation-time
retirement is guarded but not directly injected in that attachment test.
This does not claim whole-category or goal completion. No player staging.

### AI presence classification resumed (2026-10-01)

CAITeleporter decision wrapper is now classified separately from its attack
handler. Native XML2 vtable4A4814 runtime slots0,1,3..8 resolve to identical
CActorAIDecision4A57F4 functions (115D60->130370,115D70->135A00,
115D50->133180). Its destructor115D40 only writes the derived vtable and
jumps to1302B0. XML1 already has CActorAIDecision at3D9DFC. No new decision
body should be ported for this wrapper; existing XML1 wins. The separate
CAITeleporterAttackHandler and selection still require classification/work.
Reproducible executable checks pass via scripts/audit-native-ai-presence.py;
results in docs/XML2-AI-PRESENCE.md. Six other candidate rows remain open.
No comparison of existing XML1 semantics, signatures or balance was made.
Protectent in XML1 is parsed into a spawn-related record atC8BB8; this alone
still does not establish the CAIProtect behavior, so that row remains open.
No runtime source/player-staging changes in this classification step.

### Missing AI authored-mode selection established (2026-10-01)

XML2 factory11C350 reads numeric aitype from property-bag v10, selecting
DumbWanderer for1 (11C47E->115BC0), PackHunt for6 (11C4C6->115C90), Protect
for7/8 (11C5BC->115C30). XML1 factoryF7AE0 constructs only generic10DCB0 or
flyingF2280 and calls initializer1093D0(actor,properties), which stores actor
at decision+10. XML1's aitype literal belongs to combat-node parserE2E86 and
its string enum table451118, a different existing facility; it must not be
modified to implement numeric actor modes. The three modes are now classified
as missing implementations rather than pending name-only candidates.

XML2 HitAndRun also selects from numeric aitype2 (128E19) or owner class11
(129056). Teleporter attack selection uses CharacterDef+4CA=9 at128D14.
EnemyGun selection128F33..128FD3 uses owner class8 plus native name-substring
checks; a reusable import must avoid introducing character-specific patches.
Those three attack-handler classifications remain open. Raw selection evidence
is saved in work/xml2-resume/xml2-ai-selection.asm and xml1-ai-factory.asm.
The reproducible AI audit now pins both original-image hashes and asserts
selector/factory instruction boundaries. Audit passed. No runtime/staging edit.

### Actor AI mode metadata ownership (2026-10-01)

Added raven_ai_modes.h/.cpp and raven_ai_modes_guest.c. Native actor decision
initializer1093D0 captures numeric aitype and optional aitype_patrolspeed /
aitype_runtime from its existing property bag, with traced defaults0.5/4.
Only missing modes1,2,6,7,8 create owned records; unauthored/stock modes clear
old state. Records are keyed by decision address and validated against actor
address plus full handle. Native base destructor109300 retires metadata.
No guest decision fields are borrowed and no existing decision is replaced.
Guard-ai-modes.py is integrated into generate-code.ps1 with its own failure
check. Guest capture preserves registers, x87 and the SEH frame register.

New raven-ai-modes-test passes supported modes, stale-generation/address
rejection, reinitialization, stock clearing and retirement. Main executable
build and existing --powerup-definition-test regression exit0. Logs:
work/xml2-resume/ai-mode-capture-build.log and ai-mode-capture-regression.log.
The native property-bag capture itself has not yet received a focused fixture.
Missing AI movement/decision behavior remains pending; metadata capture is
not classified as completed AI functionality and does not advance that count.
No player staging. Next: native property fixture and wandering navigation /
selection consumers, then other missing modes and attack-handler decisions.

### Native AI capture validation and wandering route core (2026-10-01)

The native property-bag fixture now passes in --powerup-definition-test:
defaults, authored overrides, absent properties, generation changes, and
register/x87/SEH preservation. Property lookup is a substituted terminal;
this validates the capture ABI, not asset parsing or world navigation.
Evidence: work/xml2-resume/ai-capture-native-test.log (exit0).

Re-read XML2 native115E90 and115DA0. Added wandering route construction and
cyclic selection to raven_ai_modes.cpp: eight compass directions, 40-unit
axis steps tested separately, at least two completed steps, at most eight,
last intermediate position retained, ninth projected home waypoint.
The focused test covers unobstructed endpoints, early rejection, distinct
X/Y obstruction boundaries, ordered cycling, home-only and empty routes.
Build and raven-ai-modes-test exit0; logs ai-wander-core-build.log and
ai-wander-core-test.log under work/xml2-resume.

This core is not yet connected to guest navigation/locomotion. No AI mode is
newly classified complete. Remaining integration must use traced XML1 native
interfaces, preserve stock decisions and full-generation ownership. No
player staging, visual/gameplay validation, commit or release in this step.

### AI navigation integration interfaces (2026-10-01)

Traced XML1 destination setter101940: owns destination at decision+34/38/3C,
then calls existing FE330 with state5; thiscall point pointer, ret4.
Do not copy XML2 state eligibility logic over the existing XML1 function.
CPathGrid RTTI establishes XML1 table3CFB54, point-validity8F910 at slot20
and projection8DAF0 at slot24. XML2 uses slots28/2C: those offsets address
unrelated methods on XML1. Native AI presence audit now pins the XML1 table,
method slots, point-test cleanup and destination copy/transition boundaries.
XML1 CActorAIDecision vtable has only three lifecycle methods. Runtime
integration must hook actual XML1 decision callers, not install XML2 vslots.
Updated generated docs/XML2-AI-PRESENCE.md with interface evidence. This is
integration tracing, not completion of a missing AI implementation.

### Wandering route native-grid integration (2026-10-01)

Added native grid adapter in raven_ai_modes_guest.c. XML1 initializer tail
10A468 invokes wandering initialization only for captured numeric mode1.
It obtains CPathGrid through existing8F130, projects the actor position twice
through slot24 (ret8), and tests candidates through slot20 (ret4).
The initialization wrapper preserves general registers, x87 and SEH state.
Owned routes use decision/actor/full-handle identity plus an initialization
epoch, preventing a guest callback from publishing a route into a same-handle
reinitialized decision. Reset/destruction clears the route with its metadata.
No navigation call executes while holding the owner mutex.

Built xml1-boot-probe and ran --powerup-definition-test, exit0. New fixture
substitutes only grid method terminals and checks projection/test ABI, two
projections, 128 axis queries, resulting waypoint, and retirement during a
query. It does not execute the real world's navigation grid. Focused route
unit test additionally checks same-handle reinitialization, stale publication
and route destruction. Both test targets pass. Logs:
work/xml2-resume/ai-native-grid-build.log, ai-native-grid-test.log,
ai-route-owner-build.log and ai-route-owner-test.log.

The grid adapter and initializer hook are present; the wandering idle/runtime
consumer still needs integration with XML1 decision dispatch and movement.
This is not a completed AI mode. No player staging or gameplay claim.

### Wandering idle consumer integrated (2026-10-01)

guard-ai-modes now hooks XML1 idle10C8D0, reached from state dispatcher10EF64.
Only numeric mode1 handles idle; absent/stale/other mode returns to stock.
Valid native combat target handles at144 or18 delegate to stock idle. New
route destinations use real XML1 setter101940 and its FE330 state transition;
FC5A0 clears the secondary target, and patrol speed is stored at1B0. Full
actor handle and owner epoch are rechecked after guest movement calls.
The wrapper preserves registers/x87/SEH and the generated hook returns AL0
with ret8. Initialization also uses stock combat-mode setterFC260(2), then
sets behavior1, as traced in missing XML2 wandering initializer115C00.

New fixture exercises actual generated hooked idle and native destination /
state transitions, verifies destination, actor movement reset, state5,
patrol speed, existing moving-state rejection, and stale actor bypass.
xml1-boot-probe build and --powerup-definition-test pass, exit0. Evidence:
work/xml2-resume/ai-idle-build.log and ai-idle-test.log. Reproducible AI audit
also passes its new dispatcher/target-setter boundary checks.

No complete AI-mode claim yet: target-validity handoff and full initialized
actor flow need targeted validation. Grid calls remain fixture terminals
in the separate route adapter check. No world simulation or player staging.

### Wandering basic implementation validated (2026-10-01)

Added real XML1 manager/full-generation validation fixtures for both combat
target slots. Valid targets delegate to stock idle without changing target,
destination or state. Same-index stale generations permit wandering again.
The initialization wrapper test uses native singleton lookup and native
combat-mode setter; grid projection/test virtual terminals are substituted.
It verifies two projections, 128 axis tests, published waypoint, mode2,
behavior1 and register/stack preservation. Manager/grid globals are restored.

Build and --powerup-definition-test exit0 (ai-handoff-build.log and
ai-handoff-test.log in work/xml2-resume). AI native-interface audit passes.
CAIDumbWanderer is now implemented with the goal's basic programmatic
acceptance evidence. Actual grid/world navigation and gameplay are untested.
Five AI candidates remain: Protect, PackHunt and three attack-handler
classifications. Coverage and generated presence inventory updated.
All other unfinished goal categories remain open; no player staging.

### Protect decision trace and positioning core (2026-10-01)

Traced XML2 Protect update1168C0 and movement116310. Numeric modes7/8 pair
with opposite modes8/7 using an actor query and positive-health candidates.
Mode7 computes an interception point relative to its partner and threat;
mode8 still runs the common decision path. This is not merely follow-target.

Added raven_ai_protect_plan to raven_ai_modes.cpp/.h. Native116310 uses the
planar partner-minus-threat direction, a60-unit stationary offset or80-unit
moving offset, threshold5 planar threat speed, and a nonnegative directional
dot test for moving threats. Speed1 or1.4 is written before distance gates;
40-unit distances to both actor and prior destination gate commands. Moving
state7 uses a redirect action; other qualifying cases request state reset and
native movement. Actual command/actor ownership belongs to pending adapter.
Native constants verified from original image4935E0/490DB8/48F504/493614;
normalization threshold49211C is FLT_MIN squared length. No XML1 behavior
comparison or replacement involved.

raven-ai-modes-test builds and passes stationary/moving positioning, opposite
and perpendicular movement, planar velocity, redirect selection, exact40-unit
boundary, destination proximity, dead and degenerate target cases. Logs:
work/xml2-resume/ai-protect-core-build.log and ai-protect-core-test.log.
Protect remains incomplete: native query/pair ownership, update integration,
command dispatch and native fixtures remain. No new complete AI count and
no player staging. Core tests do not establish world/gameplay behavior.

### Protect partner ownership and query interface trace (2026-10-01)

Added owned Protect partner handles and epoch-checked binding. Only opposite
numeric modes7/8 bind, after native query/type/health eligibility (pending
adapter). Partner selection is independent, not an implicit reciprocal pair.
No borrowed entity/query pointer is retained. Full handles remain subject to
native resolution on each tick; owner reset/reinitialization clears the pair.
Focused tests cover both directions, same-mode rejection, independent pairing,
stale candidate epoch, owner retirement and reset. raven-ai-modes-test build
and execution pass (ai-protect-pair-build.log / ai-protect-pair-test.log).

Trace identifies existing XML1 query wrapper A2A70, availability A2AE0,
result acquisition A2B10, result release A2B70 and query release A2AC0.
Protect's XML2 BB6D0/BB770/BB7D0/BB720 use the corresponding pool ownership.
XML2 query uses actor descriptor58BDC8, and excludes attributes1,1C,1D
through query virtual40; these attribute IDs need mapping through the XML1
class interface, not copying raw XML2 offsets blindly. XML1 query v40 A2090
converts attributes via the class descriptor v3C and delegates to A1EA0.
Default zero-sort comparator XML2 table491380 returns float0; XML1 already
uses zero-sort comparator3C898C in existing area queries.

Native query adapter/update integration and Protect movement command dispatch
remain unfinished. Core pairing tests do not establish runtime behavior.
No additional completed mode, player staging, or gameplay claim.

### Protect native actor query adapter (2026-10-01)

Correcting the prior query note: query+4 is the entity manager, not the class
descriptor. XML1 A1420 stores BEF20's manager there. Query v40 A2090 obtains
its attribute bitset through manager v3C BDD10, then applies A1EA0. The actor
class descriptor485874 is passed separately to query initialization A2780.
Existing XML1 AI selection101EB2/101EBF already uses attribute1C/1D; retain
these XML1 facilities and do not port or alter their flag implementations.

Added raven_ai_protect_candidates native query adapter. It checks native
query capacity, uses actor class descriptor and source full handle, applies
existing exclusions1/1C/1D, preserves native zero-sort order, snapshots full
handles only, and releases both result/query slots. Result-list exhaustion
still releases the query. Snapshot capacity truncation also releases both.
Native query availability/result ownership interfaces are reused directly.

xml1-boot-probe builds and --powerup-definition-test regression exits0.
Logs: ai-protect-query-build.log / ai-protect-query-regression.log in
work/xml2-resume. The new query adapter itself still needs its focused native
fixture before acceptance. It is not yet connected to Protect update/partner
selection. No newly completed AI mode or player staging.

### Protect native query and partner selection validated (2026-10-01)

Added focused native fixture without replacing query methods. Scene membership
and manager attribute bitsets are fixture data; native class/source exclusion,
attribute filtering, result construction, full-handle lookup, ordering and
pool cleanup execute. Tests cover truncated snapshot capacity, query and
result-pool exhaustion, recovery, and releasing every borrowed slot.

Added raven_ai_protect_refresh. Resolve existing partner first; otherwise
snapshot native actor candidates, resolve/type-check full handles and require
positive health plus the opposite authored mode. Select the first eligible
candidate in query order. Epoch-checked owned binding prevents stale decisions
from publishing pairs. Type virtual calls are followed by a second full-handle
resolution before actor fields are read. Existing resolvable partners retain
native lifetime behavior; expired handles trigger reselection. No source or
candidate address escapes as stored state. Native fixture verifies dead and
same-mode exclusion, first eligible selection, existing-partner retention and
stale-generation replacement. Actor-mode lookup rejects ambiguous ownership.

raven-ai-modes-test and xml1-boot-probe --powerup-definition-test pass; final
rebuild/regression after the extra handle recheck exit0. Logs under
work/xml2-resume: ai-partner-native-build.log and ai-partner-native-test.log.
Earlier isolated query fixture evidence: ai-query-fixture-test.log.

Protect still needs event/update hookup and native movement command adapter.
The query/pairing helper is callable and tested but not yet driven by the
normal game update. No completed-mode claim, staging or gameplay validation.

### Protect native movement command adapter validated (2026-10-01)

Added ai_protect_command using existing XML1 state setter FE330, movement
request101940, and actor redirect v158/34E40. Redirect takes destination,
optional string handle0 and float3, copies actor rotation into the request,
and leaves world position untouched. It is not actor v148. Native8F170
forwards to the existing8F130 grid singleton; redirect reads grid v1C.
No XML1 movement implementation is replaced. Native state transitions clear
normal speed, and the adapter deliberately preserves that XML1 behavior.

Commands validate native full-handle resolution and the owned decision epoch
before writes and after native calls. Speed-only plans do not change the
movement destination. Tests execute actual state/destination/redirect methods,
including native rejection, unchanged world position, redirect request fields,
stale actor generation and decision reinitialization. Only the grid scalar
threshold terminal is substituted for redirect. Core tests and the complete
--powerup-definition-test regression pass, exit0. Evidence:
work/xml2-resume/ai-protect-command-build.log and ai-protect-command-test.log.

Protect is NOT yet integrated into normal updates. Pending: nearest eligible
party-member selection through existing XML1 facilities, mode7 flag handling,
owned successful-move timestamp, update hookup and combined native fixture.
XML2 threat helper13AF00 enumerates roster via7C550/v120, excludes dead actors
and actor flag3D8 bit1, and chooses nearest in3D. Existing XML1 roster callers
use72CF0/vE0 and actor flag334 bit1 (for example1148C8/114936). Do not replace
this with the current combat target. No newly completed mode or player staging.

### Protect party-threat selection validated (2026-10-01)

Added ai_protect_threat, calling existing XML1 party buffer322B0 and game
singleton72CF0/vE0 with (buffer,-1,0). Snapshot up to five full handles;
resolve native actor type/health, exclude actor334 bit1, select nearest3D
with stable first-in-query-order ties. No current-target substitution and
no actor-pool scan. Decision epoch and owner identity guard the selection.
Native fixture covers nearest selection, dead/AI exclusions, height distance,
stable ties in both roster orders, expired generation and empty party.
Native entity/type resolution executes; only party enumeration is substituted.
Core tests and --powerup-definition-test pass, exit0. Logs:
work/xml2-resume/ai-protect-threat-build.log and ai-protect-threat-test.log.

Update hookup remains pending. Trace correction: XML2 decision600 is NOT
merely private Protect bookkeeping. Native11667B writes it, and base consumers
124132,12AFF8,13224D,135638,135914 read it. Do not just put it in unused owned
metadata: first establish the existing XML1 integration or genuinely missing
consumer needed for Protect, without replacing existing XML1 behavior.
XML1 base constructor10DCB0 initializes through decision520; raw XML2 offsets
must not be written into that object. Earlier notes prescribing an owned
successful-move timestamp were premature and are superseded by this finding.

Protect pairing clears XML2 flag2B6 bit1 at116AAC. XML1 corresponding existing
flag interface is28A bit1 (10B0D9): both gate the actor-flag update followed by
the native attack-decision interface (XML1 call103230, XML2 call127E80).
Actual runtime hookup/combined fixture still pending; Protect remains open.

### Protect update integration and combined fixture (2026-10-01)

Connected raven_ai_protect_update at generated10EF51, after the existing XML1
common event/disable/special-update gates. A handled movement request uses the
existing10F34D false-return epilogue. Otherwise the stock state dispatcher
continues. guard-ai-modes.py preserves this hook on regeneration.

Mode8 pairs without issuing Protect movement; mode7 establishes its partner,
clears existing28A bit0 only for a newly established pair, resolves the party
threat and passes current native positions/velocity/destination/state into the
validated positioning and movement adapters. All guest registers, x87 state
and SEH are restored by the update boundary. Stock/unregistered actors bypass
it. No actor-specific branches or changes to the stock movement implementation.

Combined fixture executes partner retention, native full-handle/type resolution,
positioning and native destination/state transition together. It verifies a
160-unit destination from the fixture geometry, unchanged world position,
dead-partner bypass, mode8/stock fallthrough and register/FPU/SEH preservation.
Party enumeration alone is substituted. It calls the actual hook helper;
full generated-update event-gate execution is not claimed by this fixture.
Core tests and full --powerup-definition-test pass, exit0. Evidence:
work/xml2-resume/ai-protect-update-build.log and ai-protect-update-test.log.

Protect remains open for the shared-timer integration/scope decision and final
integration audit. Do not map XML2 base600 into the smaller XML1 object or add
unused bookkeeping. Existing XML1 systems still win; do not port differences
in their timing merely for parity. No player build staged or gameplay claim.

### Protect accepted for basic programmatic scope (2026-10-01)

Resolved the timer question under the explicit existing-system rule. XML2
base-decision600 belongs to CActorAIDecision (constructor134240, initialized
13485D; shared consumers124132/12AFF8/13224D/135638/135914). XML1 already has
CActorAIDecision (native table3D9DFC, constructor10DCB0, update10EED0).
Do not add XML2 timing parity to this existing system. Protect retains the
existing XML1 state transitions/timing; no unused sidecar timer or out-of-bounds
XML2 field write. Prior notes treating timer parity as a completion blocker
are superseded. This is the user's existing-system exclusion, not a claim
that XML1 and XML2 timing match.

Protect's missing mode-specific functionality is implemented: numeric7/8
ownership and opposite-mode pairing, native query cleanup/selection, party
threat selection, positioning, destination/redirect commands and update hookup.
Existing ai-protect-update-test.log provides basic combined programmatic
acceptance. No gameplay claim. audit-native-ai-presence.py now pins original
XML1 event-call/gate/hook/epilogue instructions, ret8 and redirect ret12, plus
the exact single generated hook. The audit passes against both pinned images.
No new runtime behavior since the passing combined build; added inline scope
comment and inventory/audit reconciliation. Four AI candidates remain:
PackHunt and three attack-handler classifications. TODO #3 remains open.

### PackHunt coordination state traced and implemented (2026-10-01)

Traced native leader116180, follower116690, update116B30, contact116090 and
interrupt115CC0. Mode6 shares full leader handle618314 and target618310.
Owned phase608/60C equivalents must remain outside the smaller XML1 object.
Leader chooses an eligible target, sets phase1/deadline+10 and computes a
point200 units along its facing, projected by native grid. Failure retries
in0.3 seconds. Follower adopts leader destination when idle/ready, redirects
through native movement, enters phase3 within60 units with0.5-second deadline,
and uses native attack dispatch before returning to waiting. Target failure
retries in1 second; completed engagement waits10 seconds. Interrupt clears
an active phase and waits5 seconds. Existing base behavior remains XML1-owned.

Added epoch-checked PackHunt state read/publication, contact coordination and
interruption in raven_ai_modes.cpp/.h. Contact advances a moving member when
either member is engaging; both directions use the caller's clock. It does
not start engagement for two moving members. No native call occurs under the
registry mutex. Initialization/destruction clears phase state with its owner.
Focused tests pass ownership/defaults, contact in both directions, unchanged
engaging deadline, active/inactive interruption, stale epoch/reinitialization,
and unrelated-mode rejection. Build and test exit0:
work/xml2-resume/ai-pack-state-build.log and ai-pack-state-test.log.

PackHunt remains incomplete. Pending shared leader/target ownership, leader
and follower native movement/attack adapters, contact/interrupt entry hooks,
update integration and native programmatic validation. No runtime PackHunt
completion claim, no additional AI candidate closed, no player staging.

### PackHunt shared leader/target ownership validated (2026-10-01)

Added an owned shared full-handle leader/target snapshot with revision checks.
Native callers resolve leader health/lifetime outside the registry lock, then
claim leadership only against the snapshot they inspected. The updating actor
is selected (native116BC8/116BCE), never map-order or nearest-actor election.
Only the current decision epoch holding leadership can publish the shared
target and moving phase. Reinitialization/destruction retires leadership;
retiring the final PackHunt owner clears shared target state. No native actor
pointer is retained globally. Members retain independent phase/deadline state.

Added raven_ai_pack_refresh with actual XML1 handle/type/health resolution.
Native fixture passes healthy-leader retention, dead-leader replacement,
expired-generation replacement and stale-owner rejection. Core tests pass
competing claims, follower publication rejection, stale snapshot/epoch rejection,
leader reinitialization and last-owner cleanup. No PackHunt update hook yet.
Both core tests and complete --powerup-definition-test exit0. Evidence:
work/xml2-resume/ai-pack-leader-build.log, ai-pack-leader-core-test.log,
and ai-pack-leader-test.log. Earlier ownership regression also exits0 in
ai-pack-world-regression.log. Existing Protect/Wander regressions remain green.

PackHunt remains incomplete: leader targeting/projection, follower movement
and attack, contact/interrupt native hooks and complete update integration.
No AI candidate count change, no gameplay verification, no player staging.

### PackHunt leader targeting/projection adapter validated (2026-10-01)

Added ai_pack_leader. It reads owned phase/deadline, retains an eligible
existing target or uses the shared nearest-party selector, computes the
200-unit pitch/yaw facing objective, and calls XML1's native navigation
projection. Traced XML1 grid slot08 ->8FFB0, four arguments(input,output,1,1),
ret16. XML2 slot0C ->A3C50 is the corresponding integration interface;
XML1 slot0C is an unrelated two-argument scalar query and must not be used.
After successful projection and identity/revision checks, publish target,
phase1/deadline+10 and native destination. Missing target retries in0.3s.
Failed projection does not copy unwritten output; it retries in0.3s.
Owner retirement during projection cannot publish a destination or phase.

Native adapter fixture passes leader selection, target resolution, 200-unit
facing input, actual projected-output destination, ten-second phase deadline,
projection rejection and retirement. Party enumeration and projection terminals
are substituted; handle/type resolution and registry publication execute.
Core tests and --powerup-definition-test exit0. Evidence:
work/xml2-resume/ai-pack-projection-build.log, ai-pack-projection-core-test.log,
ai-pack-projection-test.log. Existing Protect/Wander checks remain passing.

PackHunt still needs follower movement/attack, native contact/interrupt entry
hooks and update integration. Leader helper is not yet reached by a normal
PackHunt game update. No complete-mode claim or player staging.

### PackHunt follower movement/engagement adapter (2026-10-01)

Added ai_pack_follower from native116690. Waiting members adopt an active
leader destination when ready; moving members reset/redirect through native
XML1 actor34770/v158. Strictly less than60 units enters phase3 for0.5s.
Invalid targets clear the phase with a1s retry; completed engagement waits10s.
The existing XML1 engagement/target notification104AA0 (two handles, ret8) is
used unchanged. XML2 source129B30 identifies this interface; no direct damage
or replacement combat handler is authored. Missing/dead leaders clear phase.

Focused fixture executes actual XML1 movement reset and redirect. It checks
request destination, exactly60 versus59 units, engagement call arguments,
half-second deadline, ten-second waiting and dead-target retry. Party/grid
projection/scalar threshold and final engagement call are substituted; the
fixture does not claim actual combat damage or full gameplay. Core tests and
complete --powerup-definition-test pass, exit0. Evidence:
work/xml2-resume/ai-pack-follower-build.log, ai-pack-follower-core-test.log,
ai-pack-follower-test.log. Existing AI regression checks remain passing.

PackHunt helpers still need normal update and native contact/interrupt hooks,
plus the final combined integration audit. No complete-mode claim, no player
staging and no gameplay verification.

### PackHunt runtime hooks and programmatic acceptance (2026-10-01)

Connected mode6 update after the existing XML1 common gates at10EF51; a
handled follower move uses original true-return epilogue10F02A. Leader setup
then follower processing preserve all guest registers/x87/SEH. Contact hook
at105BE0 performs owned cross-member coordination before unchanged XML1
handling; active interruption at105850 clears phase/deadline+5 and returns
false, while inactive/stock decisions retain native handling. XML1 existing
engagement104AA0 and actor movement interfaces remain untouched.

The combined fixture now exercises PackHunt through its update wrapper.
Actual generated contact105BE0 and interruption105850 entries pass phase,
deadline and stack-cleanup checks. Core tests and complete native regression
exit0: work/xml2-resume/ai-pack-hooks-build.log, ai-pack-hooks-core-test.log,
ai-pack-hooks-test.log. Party enumeration, projection, grid scalar threshold
and final engagement are substituted; no claim of full-world combat or visual
verification. Native presence audit pins the hook entry/epilogue instructions
and verifies a single generated copy of each hook. Audit passes.

PackHunt's missing mode-specific scope is implemented/basic-programmatically
validated. Three AI attack-handler classifications remain. Shared-boost loop,
affecter/modifier classification, stash integration and final player staging
also remain in TODO #3. No goal-completion or gameplay claim; no release.

### EnemyGun classified as an existing system (2026-10-01)

Original-image RTTI/vtables establish that XML2 CAIEnemyGunAttackHandler at
4A4654 has the exact same runtime method list as CAIEnemyRangedAttackHandler
at4A44EC, including callback1135F0. XML1 already has CAIEnemyRangedAttackHandler
at3D8FFC. Skip this facility under the user's existing-system rule; do not
port constructor flag or timing differences, compare combat semantics, or
add an alias class merely to match the XML2 name. Native presence audit now
asserts XML2 table identity and XML1 class presence; it passes on pinned images.

Two AI candidates remain: HitAndRun and TeleporterAttack. Their XML2 tables
contain distinct runtime callbacks (114690/1143A0 and114E40 respectively),
so EnemyGun's table-identity exclusion does not settle them. Existing XML1
facility classification/required missing implementations remain open. No
runtime changes in this classification pass; prior programmatic build stands.

### HitAndRun notification consumer traced (2026-10-01)

Confirmed XML2 actor-event chain47040 ->46ED0 -> CAI slotEC/11E1F0
->12AFF0 -> other actor decision+4C4 -> attack-handler slot58/1143A0.
The callback receives the notifying actor pointer and requires its full handle
to equal the handler owner's target+18. Caller12B09C cleans one argument.
Call12C1F5 instead uses actor+378, not an attack handler; exclude that false
lead. The native presence audit now pins these instructions and callback
identity against the original images and passes. XML2-AI-PRESENCE.md includes
the verified chain. This proves an actual consumer, not XML1 absence.

HitAndRun retreat-facility classification remains open; do not copy XML2
virtual slots into XML1 or replace the existing main attack path. Teleporter,
shared-boost loop, affecter/modifier consumers, populated stash integration
and final player staging also remain. No runtime changes or gameplay claim.

### Shared-boost successful native sharing loop validated (2026-10-01)

Added raven_xml1_shared_boost_loop_fixture to the existing native definition
fixture. It executes generated2B270, actual query/result allocation and
iteration, recipient2AA90 attachment, post-success owner boost, and28FA0
retirement. Four passes check empty results, dead recipients, a successful
recipient and a live recipient rejected by the real full128-slot allocator.
Only successful attachment creates the linked owner boost. Query/result
slots, catalog counts, definition references and guest stack balance pass.

The fixture uses native96740/953A0 to construct the owned zero-radius sharing
copy; recipients borrow that copy. An initial fixture incorrectly reused the
source definition as its sharing copy. Native ownership tracing corrected the
fixture; no production sharing behavior changed. Scene membership and clock
are substituted; native actor identity and attachment run, while existing
visual-notification terminal is substituted. This is basic programmatic
acceptance, not visual or full-world gameplay validation.

Release boot-probe build and complete --powerup-definition-test pass exit0.
Evidence: work/xml2-resume/shared-loop-build.log and shared-loop-test.log.
Powerup presence audit regenerated successfully. Shared-boost loop is no
longer pending. HitAndRun/Teleporter classification, affecter/modifier consumer
coverage, populated stash integration and final player staging remain open.

### Affecter and damage-modifier native presence inventory (2026-10-01)

Added scripts/audit-native-affecter-presence.py and generated
XML2-AFFECTER-PRESENCE.md from both pinned original images. All95 authored
XML2 operand-name/ID rows match the source include and original545998 table.
XML1's59-entry44E8C8 table and94706 resolver establish native declarations.
Conservative immediate-argument scans recover direct native operand calls to
2A220/2A400/2A4B0/2A5E0/2A630. Twenty-two XML2 rows have matching XML1 names
and actual consumer call sites; skip these existing facilities. Thirty-one
rows have declarations without a recovered direct consumer;42 lack an exact
name. Neither count means missing systems: reconcile other existing XML1
facilities and the already-implemented additions first.

Also recorded all31 XML2 damage-modifier declarations against27 XML1 rows.
Five names lack an exact declaration: no_actors, drain_battery, no_on_damage,
unblockable and no_protection. Their actual native consumers still need
classification. XML2 drain_battery uses0x200, already XML1 confusion; never
forward that numeric bit blindly. No implementation/absence claim follows
from a name difference. No stock behavior changed in this audit.

Audit passes against the original images. No runtime edit or rebuild needed
for this inventory pass. Shared-boost validation remains complete; two AI
classifications, remaining affecter/modifier reconciliation, stash integration
and final player staging remain open. TODO #3 is not complete.

### Modifier reconciliation and no-protection consumer (2026-10-01)

Reconciled dmgmod_unblockable with completed block-handler work rather than
reimplementing it. raven_bishop_guest.c recognizes the token only after native
lookup misses and its attack gate consumes0x20000000. Generated49589/5C3C0
hooks are present exactly once; the presence audit now checks both. Existing
fixture covers lowercase/uppercase, no_pain preservation, rejected suffix,
attack types and unblockable bypass. Latest shared-loop-test.log includes
PASS block handler; full regression exit0 was recorded last turn.

Located actual XML2 no_protection consumer:45ED9 reads damage-context flags
at+20 (embedded XML2 record+14),45EDC tests40000000,45EEB branches to45F14
past45F0A's target protection multiplication. Audit pins these instructions.
This is not proof XML1 lacks a corresponding protection facility. XML1's
record modifier field is+18; do not transplant the XML2 field offset.

Unblockable is no longer a pending modifier candidate. No_actors,
drain_battery, no_on_damage and no_protection still require existing-system
and native-consumer reconciliation. No runtime behavior changed this turn;
no rebuild needed for the audit update. Goal remains open.

### no_on_damage optional modifier implemented globally (2026-10-01)

Traced original XML2 dispatcher1548C0 selector4 through jump table154B98
->154A02: record+14 bit10000000 suppresses the outgoing damage callback at
154A0E/154A15. Added the missing authored token through the existing lookup-
miss adapter, preserving native tokens. XML1 selector4 maps to29E99; the
new guard uses XML1 record+18 and continues through native next-instance
label29F94. It is common to all attached powerup classes, not specific to a
character or TriggerEvents. Hurt, attempted-hit and damage application are
unchanged. No new resource names, object state or save fields.

Programmatic native dispatcher fixture verifies flagged outgoing suppression,
unflagged outgoing delivery and flagged incoming-hurt delivery. Parser checks
cover both cases, exact-name rejection and existing no_pain preservation.
Full --powerup-definition-test passes exit0; build passes. Evidence:
work/xml2-resume/no-on-damage-build.log and no-on-damage-test.log. Event lookup
and final delivery are substituted; native list traversal/filter/dispatch and
stack/FPU checks run. No gameplay claim. Removed pointer-conversion warnings
introduced by the preceding shared-loop fixture and reran the regression.

Generation guard reruns idempotently; original selector tables and XML2
consumer instructions are pinned by audit-native-affecter-presence.py.
Updated inventory marks no_on_damage implemented. Remaining new-name modifier
candidates are no_actors, drain_battery and no_protection; remaining affecter
reconciliation, two AI classifications, stash integration and final staging
still prevent goal completion. No commit, push or release performed.

### Battery-drain modifier classified as existing power-trigger facility (2026-10-01)

XML2 CCombatSystem table494F94 slot44 ->62290 consumes record+14 bit200;
CPowerTriggerEntity category5 selects A9697 ->A96A1 and that combat slot.
The XML1 image already has CPowerTriggerEntity table3CFF04 and category5
jump table9468C entry9454E ->94558 ->CCombatSystem slot40/5CB30. The shared
native category/facility is established, so stop here under the existing-
system rule. XML1 eligibility and behavior win; no XML2 flag alias or parity
change is required. In particular do not map drain_battery to XML1 bit200,
which already means confusion. The audit now pins both class identities,
category selections, combat slots and the XML2 flag consumer; it passes.

The missing declaration alone had overstated this as a potential new system.
Inventory now marks drain_battery skipped as an existing facility. Remaining
modifier candidates: no_actors and no_protection. No_actors' consumer is not
yet established; unrelated low-bit tests were not accepted as evidence. The
completed no_on_damage and unblockable integrations remain unchanged. No
runtime edits or rebuild required in this presence-classification pass.

Affecter reconciliation, two AI classifications, stash integration and final
player staging still remain; TODO #3 stays open.

### Populated stash controls and invalid selection (2026-10-01)

Extended the native controls fixture with a stored item, real singleton inventory,
text interning, native list lookup and withdraw/deposit actions. Verified displayed
quantity/capacity through all three states, preserving prior inventory, stash owner
and native row storage. The fixture exposed an actual integration bug: native
177D90 returns zero (a valid item ID), not -1, for invalid selection indices.
Added bounds validation in the new stash labels adapter before calling the native
lookup. Both negative and oversized selections now clear the quantity labels;
ordinary XML1 shop behavior is unchanged. Empty text is checked by decoded content,
not by assuming a zero interned handle.

Release probe builds; full --powerup-definition-test exits 0, including populated
controls/property checks. Evidence: work/xml2-resume/stash-populated-fixed-build.log
and stash-populated-fixed-test.log. No visual/gameplay verification claimed.
Resource dependency validation, final staging, remaining affecter/modifier inventory
and two AI classifications still remain. TODO #3 and the goal remain open.

### Stash resource staging reconciliation (2026-10-01)

Reconciled the earlier asset-build notes rather than restarting completed work.
Verified the current stash PKGB equals equip_shop's eight ordered declarations
with only its menu XML filename changed to ui/menus/stash. All model/texture and
shared XML declarations resolve for eng/fre/ger, as do the menu's supplemental
white texture and arrow model. The three compiled documents retain their earlier
compile/decode/recompile evidence. Staged all seven new files (PKGB and three
text/binary pairs) under XBOXgame at their declared paths. Preflight rejected
any existing differing destination; every staged file was then compared byte for
byte. No existing asset, setting or save was replaced. Labels remain English.

Together with stash-populated-fixed-test.log exit0, the requested basic stash
programmatic integration and resource staging are now covered. Rendering remains
untested by policy. The final updated executable is NOT staged yet. Affecter/
modifier reconciliation, two AI classifications, final build/staging and whole-
goal audit remain; TODO #3 stays open. No commit, push or publication.

### Affecter presence reconciled with current implementation (2026-10-01)

The inventory now skips all 31 exact existing XML1 declarations whose consumers
were not recovered by the conservative scan. Their absence from that scan is
not a reason to compare or replace an existing system. The other 22 existing
rows retain their direct native-consumer evidence. Five previously unresolved
names already have additions: attack_rating, atk_attack_rating, defense_rating,
def_absorb_damage and scale_factor. Pinned current parser/consumer/generated
hooks in the audit and retained their prior programmatic fixture evidence.
There are 37 unmatched operand rows still requiring reconciliation, not 37
proven missing systems. No runtime behavior was changed by this audit.

Classified no_protection as an XML2 variant of an existing defensive-damage
bypass. XML1 dmgmod_ignore_def mask04000000 is loaded from context+24 at454A4,
tested at454E0 and branches at454EC past defensive operand18 queries to455DA.
The native query starts at45501. These instructions and the declaration are
pinned against the original image. Preserve XML1's bypass; do not add an alias
or compare its detailed eligibility to XML2. Remaining modifier candidate:
no_actors. The regenerated affecter audit passes. Two AI classifications,
remaining operand reconciliation and final executable staging remain open.

### Six further completed affecter entries reconciled (2026-10-01)

Reconciled actual current code and latest native-fixture output for resist_physical,
resist_energy, resist_fire, resist_radiation, atk_critical and powerup_scope.
The generated incoming46373 resistance call and outgoing critical-probability
call are pinned by the affecter audit, as is the class share-filter consumer.
The last full probe includes typed resistance/isolation/retirement and critical
scope/repeated-query/retirement checks. Do not infer support for other resistance
names from the four named mappings. Updated inventory: 53 existing entries
skipped, 11 implemented additions, 31 unmatched rows requiring reconciliation.
The updated original-image/current-source audit passes; no runtime edits.

Continued no_actors consumer investigation: direct bit2 tests at XML2 86254,
86366, EA498 and11244C belong to other object fields (queue/event/AI context),
not established damage-record consumers. A conservative immediate load from
+14/+20 followed by a register bit2 test did not establish a consumer either.
These negative scans do not prove the flag unused; no_actors remains unresolved.
Do not add speculative behavior or classify this as a retail no-op from name
presence alone. Remaining AI/operand/flag classification and executable staging
keep TODO #3 open.

### Native cache dispatch recovered for unresolved operands (2026-10-01)

Recovered original148D60 cache dispatcher: subtract2 at148E39, byte selectors
14AA80, target table14A9A8. Inventory now includes actual branch addresses for
unresolved entries. Default14A99C is explicitly NOT evidence of an unused
operand; hit-time queries/class callbacks require independent tracing.

Health_regen_pct ID23 selects149518; health_regen ID22 selects149578. Both
feed the same cache+4C accumulator at14956A/14956D and1495BE/1495C3. XML1
already has health_regen ID11 queried at3A9A3. Under the existing-system rule,
skip the percentage variant without importing arithmetic or a name alias.
Audit pins both cache dispatches and stores plus existing XML1 consumer presence.
It passes: 53 exact existing entries, one existing variant, 11 current additions,
30 remaining unmatched rows. No runtime behavior changed.

Other newly recorded trace starting points include energy_drain1494AA,
health_per_kill1498D3, energy_per_kill149918, damage_to_energy1499BC and
move_attack14938D. These are next investigation locations, not completion
claims. no_actors, two AI candidates and final executable staging remain.

### Kill-reward affecter runtime path established (2026-10-01)

Traced health_per_kill ID25 cache write14990A (+74 signed16) and energy_per_kill
ID26 write14994F (+76 signed16) into actual runtime readers4505F/45124.
Function44E10 performs normal damage, then gates on target health and first-death
flag (44FD4/44FE2), marks victim dead at44FF1, and takes the attacker from
context+8 at45010. Health is delivered through actor virtual1A4 at45099;
energy through virtual1A8 at4516A. Both use native caps and pending-vital paths.
These are real once-per-kill rewards, not unused cache fields. Audit now pins
cache writes, runtime reads, setters and death gate against the original image.

The corresponding existing XML1 damage/death routine is45E20. It checks victim
health, tests actor+2B8 bit2 at45E94/45E9C, marks it at45EA4 and continues into
stock XP/drop handling. Context+8 is likewise its attacker (45EE0). No matching
reward invocation was found at this boundary; the two additions remain not
implemented. Native XML1 health/energy setters are2E5B0/2E5F0 (virtual19C/1A0),
already used by completed Absorb integration; energy getter2E8C0. Preserve those
interfaces and original once-only death/XP/drop behavior when adding rewards.
Need validate ownership, self/environment kills and repeated death processing
before marking these complete. Inventory remains30 unresolved rows, with these
two now having concrete runtime consumer/integration evidence. Audit passes.
No new runtime behavior or executable staging this turn; goal stays open.

### Health/energy kill rewards implemented and programmatically validated (2026-10-01)

Added raven_kill_rewards_guest.inc, reached once after XML1 marks first death
at45EA4. It reads the attacker's generation-checked active powerup list, resolves
health_per_kill/energy_per_kill from each definition using current source/talent
context and child scopes/sharing filters, and calls existing health2E5B0 and
energy2E8C0/2E5F0 interfaces. No persisted reward state, extra death flags, actor-
specific paths or stock XP/drop changes. New rating query mode sums these
resolved values without operation filtering, matching the recovered kill-reward
cache cases. User-authorized whole-point nonzero rounding applies at delivery.
Full guest registers/FPU state preserved around the adapter.

Generated hook belongs immediately after first-death flag write; generator guard
is idempotent. Native fixture executes45E20 itself, both real stat setters and
the energy getter. Covers first delivery, repeated corpse processing, living
victim, native health/energy caps, retired active effect, no-attacker environmental
kill and positive sub-one reward, with stack/FPU checks. XP/drop world effects
are deliberately bypassed through an unclassified fixture victim; gameplay is
not claimed. Build and full --powerup-definition-test pass exit0:
work/xml2-resume/kill-rewards-final-build.log and kill-rewards-final-test.log.

Presence audit pins the generated hook and original reward consumers. Updated
count: 53 exact existing entries, one existing variant, 13 implemented additions,
28 unmatched rows remaining. no_actors and two AI candidates also remain, along
with final executable staging and whole-goal audit. TODO #3 remains open.

### Existing freeze and might systems reconciled (2026-10-01)

XML1 frozenactivate native resolver2DAB2/2DAC4 installs2C010; the previously
completed native powerup presence audit already establishes freeze activation,
think, hurt and deactivation. XML2 frozen operand82 is a cached status flag at
14A317. Classify as the existing freeze system and stop; no new alias or parity
work. XML1 might_mode/might_mode_mod IDs7/8 are queried byB1BA0 atB1C24,
B1C47 andB1C59. Its callers include object weight eligibility38457 and combat
59A64/5CD5C. XML2 might_heaviness/might_structure are split might-cache inputs
(14A32F/14A419), not justification for replacing the existing might facility.
Both are skipped under the existing-system rule. Native declaration, resolver
and consumer instructions are now pinned by the affecter audit, which passes.

Movement-while-attacking operand10 selects14938D and writes cache+44; its
classification remains pending. No runtime behavior changed this pass. Inventory
now records53 exact existing entries, four existing variants,13 additions and
25 unresolved operands. no_actors, two AI candidates, final executable staging
and complete-goal verification remain open.

### Hit-time vampire operands traced; energy restoration already exists (2026-10-01)

Located XML2 query64 add/scale calls469DB/469F4 (atk_vampire), leading to
attacker health setter46AB6/virtual1A4 after gain calculation and native cap.
Query65 calls46B49/46B62 (atk_vampire_energy) lead to attacker energy setter
46C35/virtual1A8. These operands are consumed outside the cache dispatcher;
its default branch must not be treated as an absent implementation.

XML1 already implements energy drain and attacker energy restoration through
native dmgmod_drain mask4:45CF4 gate, victim energy setter45D67, attacker at
context+8 via45DD1, restoration3A870 at45E06. Preserve that existing system;
skip atk_vampire_energy without comparing formulas or adding a modifier alias.
Health-vampire classification/integration remains open; energy drain does not
establish health restoration. All listed query/consumer/declaration addresses
are pinned by the updated audit, which passes. No runtime edits or new build.
Inventory now53 exact existing entries, five existing variants,13 additions,
24 unmatched operand rows. Other open goal work remains unchanged.

### Scoped defensive-damage presence reconciliation (2026-10-01)

XML1 def_damage ID18 has original incoming queries45501/45512. Wrapper2A400
calls2A220 at2A477, which invokes native hit scope94F00 at2A333. The scope
reads hit damage type at94F16, resolves its group through494C0, tests the
scope's type/group mask at94F32/94F3F and originating node at94F79; a zero
mask permits all types. Original damage table44C498 includes mental(1),
electricity(5), cold(8), alongside its other types. The existing scoped
defensive system is established, so stop without XML2 cache/formula parity.

Classified resist_mental, resist_elemental, resist_cold, resist_electricity,
resist_all and def_damage_scope as existing-system variants. This does not
add XML2-name aliases or claim those names are newly parsed; XML1's original
authoring and behavior win under the user's explicit rule. The four previously
implemented typed resistance additions are preserved, not restarted or removed.
Audit pins original declarations, query chain and filter instructions and passes.
Updated counts:53 exact existing entries,11 existing variants,13 additions,
18 unmatched operands. no_actors and two AI candidates remain; final executable
staging and whole-goal verification are still outstanding. No runtime edits.

### Damage-to-energy runtime consumer located (2026-10-01)

Current source/stock item search did not establish health-vampire support or
complete the remaining talent/defense entries; absence from text search alone
is not evidence of absence. Stock Spiked Armor of Stryfe demonstrates the
already-classified energy drain path via damageaddattack plus dmgmod_drain.

Traced damage_to_energy ID31 cache store149A12 (+7C) into hit-time461C6.
The positive branch scales incoming damage at461E6, reads victim energy through
2C610 at461F2, reduces pending health damage and calls3ED50 at46221 for energy
spending. Other cache-field readers43EF2/46815 influence hit eligibility and
nearby-character processing, so a setter-only port would be incomplete. The
existing-system/integration decision stays open. Added the concrete cache/hit
consumer instructions to the audit; it passes. Native XML1 damage range sampling
5CD02 and modifiers5CD29/5CD42 were located while investigating min/max_damage;
classification remains open pending their source-consumer context.

No runtime edits, staging or count change. The remaining18 unmatched operands,
no_actors and two AI candidates still require resolution; goal stays active.

### Damage endpoint variants classified as existing system (2026-10-01)

XML1 native5CCA0 already receives both damage endpoints, samples them via
1233C0 at5CD02 and applies its damage16 additive/scaling affecters through
5CD29/5CD42. XML2 min_damage/max_damage are split endpoint-cache contributions
at149D47/149D8F. Preserve the existing XML1 damage-range/affecter system and
skip the endpoint-cache variants without formula changes or new aliases.
Audit pins native endpoint loads and damage-query consumers; passes. Counts:
53 exact existing entries,13 existing variants,13 additions,16 unresolved rows.

Narrowed no_actors investigation to bit2 tests in XML2 combat43000..48000.
43F56 tests derived context flags+AC;43653/4390B copy packed flags in other
records.44346 is a hit-reaction gate rather than an established no_actors
consumer. These do not establish the modifier's behavior, so it stays open.
No speculative handler or no-op classification added. No runtime changes.
Remaining AI, operand/flag integrations and executable staging keep goal active.

### Talent bonus presence reconciled with completed progression (2026-10-01)

Original XML1 talent records have a separate bonus nibble, read by482B0 from
record+169 (482CF/482D6) and written by482F0. Native add/remove consumers are
AE04C/AE066 andAE831/AE857; UI reads the same bonus at18B95B. This is existing
runtime functionality, not merely an unused record field. Completed progression
expanded the same bonus/current/pending/limit/baseline representation and its
native accessors; preserve those changes and prior validation.

Classified talent and bulk all_talents as variants of the existing rank-bonus
system under the user's system-level skip rule. No new XML2-name alias, second
bonus layer, signature comparison or progression reimplementation. This is
presence classification, not a claim that XML1 parses the XML2 affecter names.
Updated audit pins original add/remove/UI/accessor evidence and passes. Counts:
53 exact existing entries,15 existing variants,13 additions,14 unresolved rows.
No runtime edit or rebuild required. no_actors, two AI candidates, remaining
operand integrations and final self-contained executable staging stay open.


## 2026-10-01 extra-potion / extra-money native consumer trace

Both entries remain unfinished; this trace establishes the implementation
boundary rather than claiming a new runtime feature. Original XML2 7D390 is
called by CGame drop handling 7CD10 at7CE75, before its ordinary drop roll.
It gathers party actors (maximum four), refreshes their affecter caches, and
multiplies the party potion/money factors at7D448/7D463. The authored cache
branches14A76E/14A7CF accept scale affecters only. This is not a pickup-value
modifier and must not be implemented as a killer-only reward.

The potion branch checks inventory capacities, chooses the native potion
entry at7D5CE and uses the native spawn interface at7D650. The money branch
uses the source-dependent amount helper7D2F0, multiplies the extra-drop count
at7D6AF, and spawns through7D759. XML2 splits whole/fractional bonus amounts
before these branches; preserve XML1 random/drop facilities when connecting
the missing bonus system rather than replacing XML1's normal loot roll.

XML1's original CGame table3CCD14 has drop handling70FB0 at slot1B0 and
spawn715A0 at slot1B4. Its normal roll is710CB/710D4; its money amount path
is71303..713B6; the actual existing spawn call is7154D. Native item names
at3CD018/3CD024/3CD03C/3CD048 are HEALTH_ITEM, ENERGY_ITEM, XTREME_PIP,
and money1. No item renaming, new package format, pickup interception or
save-state expansion is needed for this integration.

The presence audit now pins both native cache branches, party reads,
selection/spawn calls and XML1 dispatch addresses. Remaining runtime work:
resolve party member/live-powerup metadata using existing integration
interfaces, evaluate scoped scale bonuses, invoke native potion/money
selection and spawning with stock limits, and validate no-bonus neutrality,
party combination, expired effects, inventory capacity and ABI preservation.
No runtime implementation or gameplay verification is claimed by this trace.


## 2026-10-01 bonus-drop factor implementation (partial integration)

src/raven_drop_rewards_guest.inc now evaluates extra_potions/extra_money
against each supplied party actor's generation-checked active powerup list.
It multiplies scale affecters independently and clamps the final party factors
to one, preserving ordinary drops when modifiers reduce the result. It keeps
no persistent cache and performs no RNG or item-spawn calls.

The full powerup-definition probe passes after rebuilding:
work/xml2-resume/drop-factors-final-build.log and drop-factors-final-test.log.
The new fixture exercises actual metadata/list traversal, repeated queries,
two supplied actors, independent potion/money factors, scale-only selection,
minimum-one clamping, inactive powerups and empty party. RNG state, guest
stack and FPU depth remain unchanged. The second actor shares the fixture's
powerup instance, so this does not prove real party enumeration or sharing.

This is deliberately not classified as a completed affecter. Native party
resolution, source/drop eligibility, quantity/RNG selection, potion-capacity
handling and native spawning remain to be connected. Hit-scoped authored
fields currently return INVALID through the existing rating query without
a hit record; determine native cache scope treatment before integration.
No staged EXE or gameplay validation claim is made for this helper.


## 2026-10-01 drop-cache filtering and potion accessors

The prior drop-factor hit-scope limitation is resolved. XML2 cache refresh
14AAE0 applies affecter virtual44 at14AC90 (CAffecter143910), which checks
shared/owner roles. It then calls148D60 at14ACAD. It does not call the
separate hit-scope matcher144380. raven_rating_drop_scale is now restricted
to extra_potions/extra_money, keeps scale-only and sharing filtering, and
omits attack damage/node scope checks. Existing combat queries are unchanged.
The rebuilt full powerup-definition probe passes (drop-cache-build.log and
drop-cache-test.log), including authored damage/node scopes without a hit.

Native XML1 potion interfaces are confirmed: inventory table3CE064 virtual
34/38 ->7E0B0 are maximum health/energy capacities, virtual3C ->7E0E0 is
health quantity, virtual40 ->7E100 is energy quantity. The latter two obtain
native item IDs from inventory+1696/+1697 and call quantity virtual74.
7E0B0 accepts a level or -1 to obtain the party level through character
manager virtual50. Keep this accessor rather than hard-coding a potion cap.
CGame virtual134/13C are a separate Xtreme limit interface and must not be
used for potion capacities.

Bonus spawning remains unfinished. The XML2 nearby-pickup limit is a real
spatial query789B0 (radius150, maximum20), not a global drop counter. XML1
already has entity-query and native item spawn facilities, but that boundary
still needs connecting and testing together with source/category eligibility.


## 2026-10-01 native potion-capacity adapter validated

raven_xml1_drop_potion_room now uses the original inventory virtual capacity
and quantity methods. The fixture executes those native functions against an
isolated inventory with the real3CE064 vtable; no capacity/quantity terminal
is substituted. Checks pass for level1/45, independently full health/energy,
both full, overfull quantities, RNG neutrality and stack/FPU preservation.
The full powerup-definition probe exits0 after a successful build:
work/xml2-resume/drop-capacity-build.log and drop-capacity-test.log.

Spatial-query mapping is now identified for the remaining bonus-spawn gate:
XML2 CStaticQuery virtual68 is BA010; XML1's same existing interface is
A14B0 at3D29EC+68. Both consume four stack arguments and delegate the sphere
query to their existing scene manager. Use the established query-pool
lifecycle (XML1 A2A70/A2B10/A2B70/A2AC0), with the existing inventory entity
class4997E8 and radius150, rather than inventing a pickup-count cache.
The complete XML1 native spawn disassembly is retained in
work/xml2-resume/xml1-native-item-spawn.asm. Bonus spawn dispatch is still
unfinished and has not been installed in generated gameplay code.


## 2026-10-01 party bonus drops integrated

extra_potions and extra_money now have runtime consumers in
src/raven_drop_rewards_guest.inc. guard-raven-damage.py installs the call at
XML1 710C3, after its existing mission exclusions and before the ordinary
loot roll. Native argument1 supplies category, argument3 supplies the full
source handle, and EDI supplies CGame. No-bonus parties return before spatial,
inventory, RNG and spawning operations. Stock loot formulas remain native.

The adapter uses original party enumeration, generation-checked powerup
metadata, scale-only shared-role evaluation, native potion capacities and
quantities, and715A0 item spawning. Extra money uses XML1's existing source
character value (or level-based nonactor base), native RNG and money item ID.
Fractional bonus counts use a probability draw. Extra spawned entities share
a twenty-pickup nearby budget (radius150); this avoids an authored multiplier
creating unlimited local pickups. Queries and result lists are released on
success/full/exhausted-list paths. Source handles are resolved again after
spawn callbacks before any further use. Save structures are unchanged.

Build and full --powerup-definition-test exit0:
work/xml2-resume/drop-hook-final-build.log and drop-hook-final-test.log.
Capacity checks execute real native inventory methods. Combined orchestration
checks substitute scene, party, inventory-selection and spawning terminals;
they cover no-bonus/category neutrality, money/potion output, full inventory,
nearby limit, stale source, exhausted result pool, failed spawning, source
retirement during spawning, fractional bonus and query cleanup. Existing
factor/list, retirement, mode/filter and ABI checks also pass. These are basic
programmatic checks, not rendered/gameplay verification. Final player EXE
staging remains part of the overall goal.

The affecter inventory now has15 implemented additions and12 unresolved
rows, with22 direct native consumers,31 existing declarations and15 existing
system variants skipped. The presence audit verifies the new generated hook.


## 2026-10-01 covered restoration/rating interfaces skipped

Three unmatched affecter names resolve to systems already provided by the
current XML1 build, including prior completed integrations. Under the user's
new-functionality-only rule, skip alternate interfaces without aliases or
formula/signature comparisons. This does not claim those alternate XML2
attribute names are accepted as synonyms by the asset parser.

- def_defense_rating: original XML2 query51 at5D8AF/5D8BF combines with the
  defense-rating cache at5D8E7/5D906. The current XML1 incoming rating bridge
  raven_xml1_combat_rating already supplies defensive rating modifiers.
- def_absorb_energy: original query53 at45DD4 multiplies incoming damage
  at45DF4 and restores recipient energy through45E4C. The integrated
  CPUAbsorb already provides incoming-hit energy restoration with energy=true
  and inflicted=false, using native XML1 energy accessors and caps.
- atk_vampire: original query64 restores attacker health at46AB6. Integrated
  CPUAbsorb with inflicted=true and energy=false already provides health
  restoration from outgoing damage, including holder/sponsor ownership.

The native presence audit pins the relevant original calls and current
implementation entry points. Existing CPUAbsorb and incoming-rating checks
are in the passing full drop-hook-final-test.log; no runtime code was changed
for this classification. Inventory:15 implemented additions,18 covered-system
variants skipped,22 original consumers,31 original declarations,9 unresolved.
Remaining unresolved: move_attack, energy_drain, spend_damage,
damage_to_energy, def_dodge, bypass_enemy_dr, stolen_damage, slow_immune,
reveal_hidden. Damage modifier no_actors and two AI candidates remain separate.


## 2026-10-01 energy-drain reconciliation and attack-movement trace

energy_drain resolves to the existing energy-depletion-on-hit system. XML2
cacheDC is read at46D90, multiplied by the incoming energy amount at46DD3,
and committed to victim energy through46E03. XML1 already consumes its
native dmgmod_drain at45CF4, subtracts from victim energy at45D26 and calls
its energy setter at45D67. Skip the XML2 affecter/cache variant under the
existing-system rule, without adding an alias or matching numeric behavior.
Inventory now has8 unmatched affecter rows and19 covered-system variants.

move_attack remains open. Original XML2 getter36ED0 combines cached3C/44/48;
37120 first obtains the ordinary movement factor, then calls36ED0 at3715C
only when the supplied move object's virtual58 returns false. Existing XML1
move getter38270 is present, but this trace does not by itself establish an
attack-specific movement facility. Classify that move interface and its XML1
counterpart before deciding whether any new consumer is needed.

The native presence audit pins both traces. This step changes classification
and evidence only; no runtime change or additional gameplay claim.


## 2026-10-01 combat movement system classified

move_attack is an alternate conditional multiplier on a system XML1 already
provides. XML1 combat-node execution calls its movement getter38270 at40623;
that getter consumes move9 at38286. Original XML2's37120 calls the attack
multiplier getter36ED0 only when node virtual58 is false. That interface is
CCombatNode10F1C0, reading the noncombat bit at node+144. Its parser handles
noncombat at106597. XML1 already parses noncombat atE28E8 and exposes the
corresponding flag throughEAC20 (node+12C).

Under the existing-system rule, retain XML1's combat movement behavior and
skip XML2's separate attack-only multiplier. No new move_attack alias, new
animation timing calculation or conditional-behavior parity work is added.
This is a system-level exclusion, not a claim that the alternate attribute
is supported. Presence audit now reports7 unmatched affecter rows and20
covered variants; it pins the native move getter, combat call and flag
parser/accessor evidence. No runtime change required by this classification.


## 2026-10-01 stealth detection classified; slow immunity traced

reveal_hidden is an existing-system variant. XML2 actor query2EB70 accepts
CharacterDef.canSeeStealthed (character+2AD bit4);2EB90 also accepts the
reveal_hidden cache bit. XML1 already parses canSeeStealthed atB09D9, writes
character+3A1 bit4 atB0A0A, and reads it in the corresponding actor query3052E.
Preserve that native stealth-detection facility. Do not add a second reveal
system, a dynamic alias or secret-object discovery behavior. The inventory
now has6 unresolved affecters and21 covered-system variants.

slow_immune remains open, with a concrete consumer now identified. XML2
powerup admission15D525 reads cache109 bit8. When set, it traverses incoming
affecters and identifies move9/move_attack10 at15D5AD/15D5D8. It resolves the
incoming level at15D603 and rejects the powerup through15D611 when below1.
This belongs at powerup admission, not a per-frame movement clamp. The next
step is to classify XML1's existing admission/immunity interface or connect
this missing rejection there. No runtime code was changed in this step.

The native presence audit pins parser/consumer instructions for both traces
and passes. This is source evidence, not a gameplay validation claim.


## 2026-10-01 native movement-impairment immunity classified

slow_immune is skipped as a variant of XML1's existing powerup-admission
immunity. Original XML1 attachment2AA90 identifies move9 at2ABE0, calls
383A0 at2ACD5, checks scale mode at2ACE7, and rejects the applicable movement
impairment through2ACFD ->2AF18. 383A0 queries native no_iceshell53 at383E9.
This is an actual admission rejection, not merely a hidden ice-shell graphic.

Keep XML1's existing applicability and thresholds. Do not expand the
rejection to XML2's less-than-one rule, add a slow_immune synonym, or compare
which additional slow values differ. Those are variations of the existing
system and are excluded by the user's scope. The presence audit pins the
native rejection and immunity query; it passes with5 unresolved affecters
and22 covered-system variants. No runtime edit or gameplay claim here.
Remaining affecters: spend_damage, damage_to_energy, def_dodge,
bypass_enemy_dr, stolen_damage. no_actors and the two AI candidates remain
separate, as do final generation/build checks and player EXE staging.

### 2026-10-01: attack-roll bypass reconciliation

Confirmed bypass_enemy_dr is an existing-system variant: XML2 cache579 bit4
at5DB17 sets attack-roll bypass5DB20; its no_atk_roll flag joins at5DB8B.
XML1 already tests dmgmod_no_atk_roll08000000 at5C385, sets bypass5C3BB,
and skips RNG1233A0 through5C460/5C462. No runtime alias or parity edit.
Native presence audit pins both paths. Four affecter rows remain unresolved;
no gameplay validation or final executable staging claimed.

### 2026-10-01: finite damage reserve consumer located

spend_damage30 is queried at460DC/460E6 through15BEF0, not the numeric
affecter accumulator. Its reference validation46106 precedes referent
virtual68 capacity4611D. Damage consumes that reserve through virtualB8
at4616C/46196; depleted references are removed by15C560 at461A8.
Next trace must identify the referent and native ownership contract before
classifying or implementing it. Dodge55 separately clears incoming damage
and submits HUD tokenA9; reflection is not evidence of dodge support.
Both entries remain unresolved. No runtime changes or gameplay claims.

### 2026-10-01: damage-reserve ownership and initialization

Resolved reference as CAttachedPowerup table4A6AF4: slot68=146D10 reads
instance signed word44; slotB8=146DC0 writes it. Attachment refresh146826
finds affecter30, evaluates CAffecter slot34=1446C0 and samples its range
via16E1C0 at1468A2, retaining larger existing/new capacity1468BB. Native
incoming hit consumes this state and calls15C560 on exhaustion. Audit
pins these instructions. This is not shared definition storage. Missing
classification/integration remains open; no runtime implementation claimed.

### 2026-10-01: reserve operand reader implemented and checked

src/raven_rating.cpp now exposes raven_rating_damage_reserve: first
eligible declaration, active generation/definition validation, literal or
talent endpoints, optional hit scope and eligibility-only querying. No RNG
or mutable capacity in shared definition metadata. Programmatic build and
full powerup-definition-test exit0; logs work/xml2-resume/reserve-reader-
build.log and reserve-reader-test.log. Fixture checks ranges, selection,
operation independence, ownership/retirement and RNG/ABI preservation.
Partial implementation only: per-instance capacity, refresh and hit/removal
integration remain. Do not mark spend_damage complete or claim staging.

### 2026-10-01: finite damage reserve integrated

spend_damage now has generation-owned capacity in bounded128-slot host
state, native initialization/refresh, scoped incoming-hit consumption,
actual2AF30 removal, retirement and native pool-reset clearing. Refresh
retains max(old,new); exact spend leaves zero until normal expiry, overflow
removes. Stock layouts/save data unchanged. reserve-final-build.log and
reserve-final-test.log exit0: generated initialization, real native unlink,
repeated hits/refresh/exact/overflow, generation reuse/reset and ABI checks.
Source audit pins generated integration. Three affecter rows unresolved.
No gameplay verification, final staging, commit or release performed.

### 2026-10-01: correct energy-shield base-object trace

Correction to earlier notes:43EF2/46815 dereference CharacterDef from
actor35C (43EEC/4680F), not the actor470 affecter cache. Those existing
character hit/distance paths do not belong to damage_to_energy. Confirmed
shield consumer461C6..46221 clears reaction flags unless unblockable,
subtracts available energy from pending health damage, and passes scaled
incoming damage to power-cost charging3ED50. XML1 equivalent3F410 already
queries power_cost40 and clamps energy. Reuse it when integrating the new
shield before hit reactions, not a raw setter at final damage delivery.
Audit pins base-object loads and XML1 charging calls. Still unimplemented.

### 2026-10-01: energy shield integrated and checked

Added scalar-assignment query and native455DA pre-reaction context hook.
Reserve now runs there first; energy shield then reduces pending health
damage, suppresses reactions unless unblockable, and uses native3F410
charging with existing power-cost rules. Actor revalidated after reserve
removal; original hit record preserved. Full build/programmatic fixture
exit0 in energy-shield-build.log and energy-shield-test.log. Actual energy
getter, charging and setter exercised for partial/full/no energy, scalar
replacement/disable and flags/ABI. Initial fixture lacked native setter;
fixture repaired rather than substituting charging. Two affecters remain
unresolved: def_dodge and stolen_damage. No gameplay or staging claim.


### Resumed TODO3: dodge damage contract and stolen-damage trace (2026-10-01)

Issue18 assessment remains separate in TODO9. Continued only missing-function
work. Added damage_dodge_apply to the existing pre-reaction455DA extension:
scoped additive chance times scale product, generation/source validation,
native XML1 RNG1233A0, and cancellation before reserve consumption and energy
charging. Actors without an applicable new positive chance consume no new RNG.
Original hit storage and reaction flags remain unchanged by this adapter.

Release build and --powerup-definition-test exit0 in
work/xml2-resume/dodge-contract-build.log and dodge-contract-test.log.
Checks cover guaranteed cancellation, scale-zero disabling, combined energy
shield ordering, dmg_fire versus physical scopes, detached attachments and
stack/FPU preservation. The first scope fixture incorrectly authored fire;
corrected it to the actual dmg_fire token and checked both excluded physical
and included fire. No parser aliases or runtime workaround added.

Dodge is PARTIAL, not a completed affecter: native feedback remains. XML1 HUD
singleton158860/table3DD7B4 exposes floating text at virtual30 ->156E20,
ret10, copying at most20 bytes to its owned queue (terminates byte19).
XML2 uses virtual44 and token169, which must not be blindly reused in XML1.
No gameplay/visual verification or final executable staging claimed.

stolen_damage ID84 has a name-table pointer545C38 ->4A655C. Its cache switch
148E39/148E45/148E4C resolves selector53 ->default14A99C. The direct immediate84
scan did not identify an affecter-query caller. CPURogueDrained activation
1504E0 uses the existing steal facility (XML1 powerstolenactivate2CF80 exists),
but the distinct operand consumer remains unproved. Audit pins the declaration
and cache branch; this negative evidence does not close the row. Counts remain
17 implemented additions,23 skipped variants,2 unresolved affecter rows.


### Dodge floating-feedback integration (2026-10-01)

Completed the remaining feedback adapter using XML1 HUD virtual30/156E20.
It resolves the full holder handle after singleton acquisition, uses native
actor virtual24 for bounds center, adds30 height, and submits RGB0.9 with
0.5-second duration. Native queue copies the short text and all position/color
values; guest scratch pointers do not survive the call. The successful dodge
returns before reserve or energy processing and restores guest registers/FPU.
The added label is English-only (Dodge), consistent with other new HUD notices;
no unrelated XML1 string ID or user asset is overwritten.

The fixture now initializes the actual native floating-text pool via1561D0,
uses real singleton/position/text methods, and verifies queue count, string,
position, color, duration and owned text after scratch reuse. Original pool,
HUD globals and actor method table are restored. The full Release
--powerup-definition-test exits0: work/xml2-resume/dodge-feedback-build.log
and dodge-feedback-test.log. No rendered acceptance or staged EXE claimed.

Affecter inventory now has18 implemented additions,23 existing-system variants
and1 unresolved row (stolen_damage);22 direct XML1 consumers and31 existing
declarations remain skipped. no_actors and two AI candidates remain open.


### AI trigger and phase trace refinement (2026-10-01)

Extended the native AI audit with pinned original-image instructions and
regenerated XML2-AI-PRESENCE.md; audit passes. No runtime AI behavior changed.

HitAndRun notification direction is now explicit:470BF calls46ED0 immediately
after context creation45650 and BEFORE hit-admission38630. In12AFF0 the
non-player recipient branch12B050 resolves the attacking actor, obtains its
decision at12B080, and passes the recipient actor pointer at12B08C to the
attacker handler. Thus this is not a successful-health-loss/kill callback.
The handler requires its owner target18 to match the recipient full handle.
Retreat11464F calls1264D0, then stores deadline5F8, retained target5FC and
clears active target18. XML1 destination interface101940 is already traced,
but contact105BE0/101050 is collision/yield, not proof of this hit trigger.
Retreat/resume integration remains outstanding.

Teleporter attack114E40 has two phases beyond the already-skipped decision
wrapper. It gates action6 via138210, emits80/100 input bits, sets deadline54
and start58, and computes a target-aware actor destination6E8/6EC/6F0.
The second phase gates action5, faces the target via1211E0, checks alignment
through127C50, and emits the next attack input. These XML2 object offsets
and action/input layouts must not be copied directly to XML1. Existing XML1
teleport/combat interfaces still require identification before an adapter.

Both AI rows remain open. The last successful runtime build/test remains
dodge-feedback-build/test.log; no additional build was needed for this
read-only native trace and audit update. Player executable not staged yet.


### HitAndRun destination planner implemented (2026-10-01)

Added raven_ai_hit_run_destination in raven_ai_modes.cpp. It reconstructs
native1143A0's navigation search with an injected point-validity query,
seven native yaw offsets,40-unit steps,8-query per-ray limit, previous-point
retention, farthest available endpoint and native early-exit preference.
The minimum squared displacement is119 (4A4738), not a guessed100/10000.
Full failure leaves the output unchanged; a zero planar separation makes no
navigation calls. This is a reusable planner, not a character-specific route.

raven-ai-modes-test Release build/test exits0 in
work/xml2-resume/ai-retreat-plan-build.log and ai-retreat-plan-test.log.
Checks cover open space, blocked direct route with available side escape,
fully blocked space, preserved height, query limits and degenerate targets.
Existing Wander/Protect/Pack ownership and planning tests continue to pass.

Runtime hookup remains outstanding. Further trace shows retained target5FC
is consumed by generic decision logic1358EF..1359D5, while deadline5F8 gates
13226B and13564B. It is not simply an unconditional timer restoring target18.
The XML1 integration must respect its existing target-selection machinery;
do not add a simplistic timer-based retargeter or copy XML2 object offsets.
The AI inventory remains two open rows, now explicitly showing the partial
planner. No native runtime or player-staging completion is claimed.


### HitAndRun native movement adapter and owned state (2026-10-01)

Added generation/epoch-owned retreat state and raven_ai_hit_run_notify.
The adapter resolves the matching current target, snapshots actor positions,
uses the bounded navigation planner and XML1 movement method101940, then
retains the full target handle/deadline outside guest object storage and
clears target18. Native XML2 11464F ignores movement rejection; the adapter
preserves that notification behavior without modifying XML1 movement gates.
Owner retirement during navigation prevents subsequent guest-state mutation.
The wrapper preserves guest registers, stack, SEH and FPU state.

Release raven-ai-modes-test build/test exits0 (ai-retreat-owner logs).
Release xml1-boot-probe build and --powerup-definition-test exit0
(ai-retreat-adapter-build.log / ai-retreat-adapter-test.log).
The new native fixture exercises real handle resolution and movement/state
transitions, movement rejection, target suspension, owner retirement during
navigation and unrelated-target exclusion. Navigation validity is substituted.
Existing powerup definition checks pass. No gameplay/visual claim.

Runtime combat notification/update dispatch, handler phase integration and
target-reacquisition lifecycle remain unfinished. The native adapter is not
yet called by the production hit path. AI inventory remains two open rows;
no final player executable staged and TODO3 remains open.


### HitAndRun retreat runtime dispatch (2026-10-01)

Connected the retreat notification at generated462EB before hit admission.
The recipient must be non-player; the attacker is resolved by full handle
and must own authored mode2. No stock actor entry means no added behavior.
XML2 13226B/13564B suppress attack selection, not movement, while deadline5F8
is pending. XML1 corresponding interfaces are10B9F0 and10ED7F; guarded
hooks retain native selection and locomotion after the deadline.
Movement completion10EEAB now consumes the remembered target for facing
through existing XML1 FC600, with no write restoring combat target18.
Native135974..1359D0 establishes that consumed-target/facing behavior.
The separate XML2 deadline600 mechanism is not imported as timer parity.

Release build and --powerup-definition-test exit0 in
work/xml2-resume/ai-retreat-dispatch-build.log and ai-retreat-dispatch-test.log.
Checks cover notification direction, player exclusion, actor/target generation
reuse, retired owner during navigation, native movement acceptance/rejection,
facing exactly once without retargeting and retained cooldown after arrival.
Generated10B9F0 is executed both before and at expiry with ret8/output checks.
Grid validity and final facing transform terminals are substituted; no claim
of world navigation or visible gameplay verification. Native interface and
unique generated-hook audits pass. Remaining attack-handler/selection
classification is still open; two AI rows remain under reconciliation.


### Teleporter destination planner (2026-10-01)

Added raven_ai_teleport_destination from native114F49..1150A0.
Original constants establish close threshold80, retreat distance180 and
approach standoff20. Earlier estimates of60/120 in trace notes were not
verified constants and must not drive implementation. The native13590
range and121860 normalization are full3D, with FLT_MIN degeneracy.
Close targets produce phase2, distant targets phase1; exact80 approaches.
Coincident positions copy the target without a phase. No target produces
an80-unit forward destination using actor pitch/yaw, independent of roll.
Invalid inputs leave destination and phase unchanged.

Release raven-ai-modes-test build/test exits0 in
work/xml2-resume/ai-teleport-plan-build.log / ai-teleport-plan-test.log.
Checks cover close/far/exact-boundary, vertical/diagonal, coincidence,
no-target facing and pitch, missing arguments and nonfinite input.
Native constant audit now pins80/180/20 and the traced timing constants.
No native teleport destination field has been assumed from XML2 offsets.
Authored handler selection, phase/timing/input dispatch and the native
teleport adapter remain unfinished. No rendered/gameplay claim or staging.


### Teleporter phase planner and native event interface (2026-10-01)

Added raven_ai_teleport_step from114E9C..1151D4: strict cooldown expiry,
native action6/action5 and alignment gates, (random*4+5)/3 cooldown,
current+edge input mask180 when teleporting, phase2 power follow-up90,
and phase1 melee10/20 with strict one-second expiry. Native eligible
branches alone require RNG; blocked/cooldown branches accept no sample.
Invalid inputs do not publish partial state or output.
Release raven-ai-modes-test build/test exits0 (ai-teleport-phase logs).
Checks include exact deadline, blocked actions/alignment, both follow-up
branches, random0.5 boundary, exact one-second expiry and atomic rejection.
No native dispatch or gameplay verification claimed for this pure planner.

Native teleport integration trace: XML1 CCEAtkTeleport table3D6BC8 invokes
D6440 -> D6030 -> D56B0. D6030 uses actor+4DC as teleport state (D6065).
XML2 F5290 uses actor+6DC (F52D0), then F559F tests flag0x400 and reads
state+C/+10/+14 atF55A4..F55AD for an explicit destination. This is the
consumer of AI actor+6E8; direct absolute-offset searches alone miss it.
Do not map XML2 actor+6E8 onto an assumed XML1 field: XML1 state+C is not
an established explicit-destination slot. The missing AI adapter should
supply its owned point through existing D56B0 collision/movement handling,
without changing stock teleport event behavior. Authored selection,
ownership, adapter and generated dispatch remain unfinished.


### Teleporter definition selection and runtime ownership (2026-10-01)

Added owned aiclasstype=teleporter classification through native XML lookup
at the existing CharacterDef capture boundary55BB6. ConstructionB1640 and
final retirementB2E37 clear it. Missing attributes preserve partial updates;
empty or stock classes clear the extension. No XML2 enum is placed in
XML1's fixed native selection tables. Actor decision capture reads its
existing CharacterDef pointer+2D8 and gives Teleporter priority over numeric
aitype, as native128D1B precedes128E19. Stock classes retain original paths.

Runtime state owns phase/times and an optional one-use destination. Full
actor handle and decision epoch protect lifetime; revision checks reject a
snapshot superseded by publication or destination consumption. Consumption
occurs before a future guest teleport call, preventing reentry from reusing
or restoring the old point. Definition/actor registries retain no XML text.

Release pure AI ownership build/test exits0 (ai-teleport-owner logs).
Release xml1-boot-probe build and --powerup-definition-test exit0
(ai-teleport-definition-build.log / ai-teleport-definition-test.log).
Native tests cover actual symbol/attribute lookup, absent/empty behavior,
stock-class exclusion and Teleporter precedence during actor capture.
Generated capture/reset hooks are unique and regeneration is idempotent.
Native input dispatch and teleport-event adapter are still unfinished;
no player build staged and no world/gameplay verification claimed.

Additional traced interface: XML1 F1216 calls decision1114A0(action5);
this is the existing eligibility interface corresponding to XML2 138210.
Use it for the new handler rather than synthesizing eligibility rules.


### Teleporter native event bridge (2026-10-01)

Connected owned Teleporter destinations at native event boundaryD62F1.
Existing D6030 eligibility and event setup run first. The bridge resolves
the authored actor/decision, consumes the point once, and calls existing
D56B0 with position by value plus original context, parameters, prepared
range and null optional target. No XML1 actor field is repurposed. A rejected
point returns to the original event path with its untouched locals/FPU
stack. Accepted points use the original event ret16 cleanup and pop its
pending Z operand; D56B0's seven-word argument frame uses native ret28.

Release build and --powerup-definition-test exit0 in
work/xml2-resume/ai-teleport-event-build.log / ai-teleport-event-test.log.
The fixture executes generated D6030 setup/bridge/epilogue, validates exact
by-value position and native argument ordering, one-use destination and
stack/FPU balance. A separate rejected-point check verifies delegation to
the stock path. D56B0 spatial movement is substituted; no collision/world
or rendered gameplay claim. Native opcode/generated-hook audit passes.

AI power-input dispatch remains unfinished. Traced native integration
points for the next step: XML1 EE150 validates attack handler actor/target
context (ret16);1114A0 is action eligibility;EEA60 is Standard attack update.
Decision10AD70 invokes handler main at10B3E7 and wrapper slot4C at10B4A0.
Preserve those existing entry gates while adding only the authored handler.
No final executable staged; TODO3 remains open.


### 2026-10-01: teleporter attack dispatch connected

Added the missing authored teleporter attack adapter at native XML1 main-call
sites10B3E7 and EE8DF. Reuses EE150 target/health validation,1114A0 action
eligibility, FC600 facing,102FC0 alignment and EEA60 standard attack. Existing
wrapper range gates and flag restoration remain intact. Owned revision checks
precede input publication; simulation RNG and clock remain native.

ai-teleport-dispatch-build.log and ai-teleport-dispatch-test.log pass. Native
fixture covers both follow-up phases, actual EE810 wrapper dispatch, cooldown,
dead targets, action denial, retirement and stack/FPU balance. Controller,
clock and base-attack terminals are substituted. Existing event fixture still
passes; no rendered/gameplay claim. Executable is not staged yet. Remaining:
HitAndRun classification, stolen_damage/no_actors reconciliation and final
build/audit/staging. TODO3 remains open.


### 2026-10-01: remaining AI selection classified as existing

Original XML1 FD59A selects ShadesNoWing; FD5A7 calls constructorFC4D0,
which installs table3D9C1C/mainF1110; FD5C4 stores the handler at decision494.
This establishes the existing power-selection attack/selection facility.
Preserve XML1 policy and skip XML2 parity; the missing HitAndRun retreat is
already implemented/tested separately. audit-native-ai-presence.py now pins
this evidence and passes. All seven AI candidate rows are classified.

stolen_damage84 and dmgmod_no_actors2 remain unresolved. Native bit2/combined
mask searches did not identify a confirmed damage-flag consumer. Negative
scan evidence is not proof of an unused declaration. Final build/audit and
self-contained EXE staging still remain; no gameplay acceptance claim.


### 2026-10-01: current candidate staged; operand authored uses found

Build and powerup-definition programmatic suite pass (goal-candidate-build.log,
goal-candidate-test.log). Replaced only XBOXgame/X-Men Legends.exe; prior EXE
preserved in work/xml2-resume. Source/staged SHA256 match:
51d67a144d54a1a1ab05cd4f4feba84d12678500d8841dd09eb9c5c2e96f8ea2.
PE audit verifies embedded x86 renderer RCDATA101 and Windows-only DLL imports.
No assets/settings/saves altered; no rendered/gameplay acceptance claimed.

Read-only PC data decoding found stolen_damage in Rogue Power Theft talent
and no_actors in Nightcrawler/Deadpool sword-loop triggers. Native XML2 melee
construction EB570 copies flags parameter10 -> damage14 at EB5B7/EB5BA;
EB0B0 dispatches combat slots24/30; arc5E470 -> slot64/61BC0 at5E73A.
These provide concrete remaining trace paths. Both operands remain open;
TODO3 is not complete. See latest XML2-COVERAGE.md entry for evidence.


### 2026-10-01: stolen_damage classified under existing steal system

Decoded PC Rogue Power Theft talent identifies stolen_damage as its damage
scaling variant. XML1 already owns powerstolenactivate2CF80 and
powerstolendeactivate2D3B0 (existing CPURogueDrained system in presence audit).
Apply the user's existing-system rule: skip the scalar/alias and retain XML1.
Do not claim ID84 is unused or invent behavior from a failed consumer search.
Affecter counts:22 native consumers,31 existing names,18 additions,24 existing
variants,0 unmatched operand names. dmgmod_no_actors and final audit remain.
Current staged candidate hash is unchanged; TODO3 stays open.


### October 1 resumed goal: distinguish Tiles from damage modifiers

Resumed TODO #3 after the read-only GitHub #18 assessment and TODO #9 update.
The executable and player assets are unchanged during this trace checkpoint.

Original XML2 parser EBB70 identifies string4A025C as Tiles. Its branch at
EBDAC..EBDED parses the boolean and writes parameter+48 bit1 at EBDE6.
EB720 then copies that bit into melee context+14. This positively identifies
the previously ambiguous context flag as Tiles, not dmgmod_no_actors.
Do not connect the damage-modifier token to that separate input.

The damage record path remains parameter+10 -> record+14 at EB5B7/EB5BA.
Continued bounded inspection of 61BC0 through its return6208B and its actor
attack-roll helper5DA60 through return5DD58 did not establish a bit2 consumer.
Those paths include actor admission38630, outgoing callback v118 and physical
damage delivery vB0 at62016. Their presence is not proof that no_actors works
or is unused. Classification remains open; no guessed runtime behavior added.

A raw instruction-candidate scan of the full XML2 .text (VA11000, 4049732
bytes) also checked test/and/cmp immediate2 against offsets10/14, extending
beyond earlier gameplay-region scans. Candidates require valid instruction
boundaries and data-flow verification; this is not a completeness proof.
Next trace boundary: actual physical/actor damage vB0 implementations reached
from62016, including flag propagation into their copied damage record.


### October 1: no_actors native consumer implemented and staged

Resolved the last unclassified damage-modifier token through native data flow,
not its name. XML2 actor virtual B0 is47040 (table492124); physical B0 isA6DE0
(table491CDC). Actor constructor45650 copies its damage record into context+C
through623E0/62140. Copy62164/62167 preserves record+14 flags, making them
context+20. Actor preprocessor45950 loads that byte at45958, sets EBX=2 at4595B,
tests BL against AL at45960 and returns false via459CC when present. Caller
470D8/470DF then skips damage processing to472C9. This register-mask test was
missed by prior immediate-mask searches; those searches never proved absence.

XML1 actor context already stores the copied damage record at+C, with modifier
flags at record+18, hence context+24. The generation guard now adds the opt-in
bit2 rejection at actor preprocessor45260 before its original prologue. It
returns AL=0 with the native no-argument thiscall stack contract. Existing
unflagged behavior and shared physical-object/tiles methods are untouched.
The missing-token adapter recognizes dmgmod_no_actors case-insensitively only
when native lookup misses, alongside the previous added modifiers.

no-actors-build.log and no-actors-test.log exit0. The new fixture executes the
actual generated45260 entry, checks lone/combined flags, unchanged context,
stack and FPU depth and preserved nonvolatile registers. Parser checks include
uppercase, suffix rejection and existing native tokens. Existing native energy
shield and resistance tests pass the unflagged actor path. The full programmatic
suite passes; startup mirror-allocation warnings are not failed test assertions.
No gameplay/visual/audio acceptance is claimed.

The updated affecter audit pins original XML2 copy, mask and caller instructions
and verifies the generated gate. All95 operand rows and31 modifier declarations
now have classifications. Final whole-goal completion audit remains required.

Staged XBOXgame/X-Men Legends.exe: 48,977,408 bytes, SHA256
96e2b69ce7dd0fe9a331aea4b2aade9a9cb492dd2d089b7d7395ea8b26510e35.
Build and staged bytes match. Embedded renderer is unchanged (229,888 bytes,
SHA2568c92d7786bf475c09846a26bbc669105a12d7d507b82625765d549bcc72b555e).
PE imports match the previous system-DLL-only audit; see local
work/xml2-resume/no-actors-dependencies.json. Prior staged EXE retained in work;
no assets, configuration or saves overwritten. No game process was running.


### October 1: engineering goal completion

Fresh original-image inventories, native interface audits, current build/test
evidence and staged executable/resource hashes were reconciled in
docs/XML2-COMPLETION-AUDIT.md. The former TODO3 is complete under the user
programmatic validation policy and removed from TODO.MD. No gameplay
acceptance claimed. Follow-on repairs are GitHub18,17,14,8, in that order.
