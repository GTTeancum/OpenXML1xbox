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

Status: all 15 absent XML2 character combat handlers are implemented and registered. The current player executable is staged in XBOXgame. Startup regression repair and verification are documented in STARTUP-REGRESSION.md. Beta publication remains pending; the existing 17 script additions remain deferred from further work until the combat beta release.

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
