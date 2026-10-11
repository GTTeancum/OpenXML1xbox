# XML2 missing-function coverage

Current reconciliation: 2026-10-01. The former TODO #3 engineering goal is
complete under the user-selected programmatic validation policy. See
[completion audit](XML2-COMPLETION-AUDIT.md) for current evidence and limitations.
This historical coverage ledger is not a gameplay acceptance report.
The chronological XML2-INTEGRATION.md contains superseded counts and pending
notes; consult its latest evidence together with current source.

| Area | Current evidence | Remaining work |
|---|---|---|
| Character combat-node handlers | Fifteen additions registered in `src/raven_bishop_guest.c`; native-caller and callback evidence recorded in XML2-INTEGRATION.md. Completed progression/rotation is separate in XML2-POWER-PROGRESSION.md. | Do not restart completed handlers. Reconcile additional executable systems independently. |
| Python script names | Original-image inventory has 53 registered additions, including six exact retail no-ops; no pending script-name rows. Existing XML1 facilities and console/online exclusions are explicit in XML2-SCRIPT-INVENTORY.md. | Stash native controls, transfer and script-queue checks pass; its seven resource files are validated and staged. Current executable candidate is staged. Final engineering audit passed; see XML2-COMPLETION-AUDIT.md. No rendered acceptance claimed. |
| Combat events | Seventy names classified by XML2-EVENT-INVENTORY.md. Added factories and existing-system exclusions have separate evidence. | Verify generation/staging contains the current implementation. |
| Powerup classes and ownership | Implemented attached metadata/effects, harming, added attacks, scaling, shared catalog and leader activation have source and focused tests. XML2-POWERUP-PRESENCE.md establishes fourteen existing XML1 class families through native callbacks, events and concrete native types. Shared-boost attachment and failure cleanup pass native programmatic checks. Nine powerup sound callbacks pass owned metadata, dispatch, sharing-filter and lifetime checks with sound terminals substituted. | RemoveOnEvents is now implemented with basic native callback, delayed metadata, feedback-ABI and ownership checks. TriggerEvents now passes native parsing, callback dispatch and actor/physical incoming-hit checks. Absorb and Vacuum now have implementations and basic programmatic contract checks. Feral Rage sound/custom-effect callbacks pass basic programmatic integration checks. Percentage-damage callbacks pass outgoing and self-only programmatic contract checks. The shared-boost generated sharing loop now passes empty/dead/successful recipient and full-pool rejection checks; scene membership and clock substituted (shared-loop-test.log). No whole-category completion claim. |
| Affecters and damage modifiers | Native name/ID table in `src/raven_xml2_affecter_names.inc`; context, rating, absorption and scale consumers have implementations. | XML2-AFFECTER-PRESENCE.md records 95 operand rows: 22 have direct XML1 consumers, 31 existing declarations are skipped, eighteen additions have current implementation evidence, twenty-four differently named existing-system variants are skipped, and no operand-name rows remain unmatched. It also records 31 damage-modifier declarations and the drain_battery/confusion bit collision. Reconcile existing systems and implemented additions before filling real gaps. |
| Native AI | XML1 has Standard, Ranged, EnemyRanged, ShadesWing, Artillery, Sentinel, FlyNoNav and ShadesNoWing attack handlers. | All seven AI candidates are classified. Missing retreat/Teleporter/Wander/Protect/PackHunt additions have programmatic checks; existing attack-selection and decision facilities are preserved. See XML2-AI-PRESENCE.md. |
| Player delivery | Private stash assets compile and round-trip; latest programmatic build is recorded in XML2-INTEGRATION.md. | Stash resources are staged without replacing differing files. Current candidate is staged with matching SHA256 and embedded renderer verified (October 1 entry below). Final engineering audit passed; see XML2-COMPLETION-AUDIT.md. dmgmod_no_actors is implemented, programmatically checked and staged; see the latest checkpoint. |

## AI candidates under classification

These are original-image observations, not a request to port all seven classes
or to compare existing AI behavior. Once an existing XML1 facility is established,
skip that facility without parity work.

| XML2 type | XML2 evidence | Status |
|---|---|---|
| CAIEnemyGunAttackHandler | Table `4A4654`; runtime methods are identical to XML2 EnemyRanged table `4A44EC`. | Existing XML1 EnemyRanged facility at `3D8FFC`; skipped without behavior/flag parity work. |
| CAIHitAndRunAttackHandler | Table `4A547C`; constructor `120B40`; embedded selection at `128E78` when owner `+564 == 2`; callback `1143A0`. | Missing retreat planner, owned state, pre-admission notification, cooldown and movement completion/facing are connected and programmatically checked. Main attack/selection already exists as XML1 ShadesNoWing (F1110), constructed at FD5A7 and installed at FD5C4; skip XML2 selection-policy parity. |
| CAITeleporterAttackHandler | Table `4A54EC`; selected at `128DDC` when CharacterDef `+4CA == 9`; owner uses `+4C4` pointer and `+4C8` storage. | Implemented destination/phase planners, authored class capture, revision-checked ownership, native attack dispatch and generated teleport-event bridge. Both follow-ups, native gates, wrapper flags, cooldown and retirement pass basic programmatic checks. Clock/controller/base attack/spatial terminals substituted; no gameplay claim. |
| CAIDumbWanderer | Table `4A4774`. | Implemented and basic programmatic validation passed: native grid adapter, initialization, idle destination/state transition and target handoff. Grid terminals substituted; no gameplay claim. |
| CAIProtect | Table `4A479C`. | Implemented numeric modes7/8: owned pairing, party threat selection, interception, native movement/redirect and update hook. Combined basic programmatic validation passes. Existing XML1 base-decision timing retained; party enumeration terminal substituted. |
| CAIPackHunt | Table `4A47EC`. | Implemented numeric mode6 with owned leader/target, phase coordination, leader projection, native movement/engagement and runtime hooks. Basic programmatic checks pass; scene/engagement terminals substituted. |
| CAITeleporter | Table `4A4814`; runtime slots resolve to CActorAIDecision; destructor115D40 only restores table and delegates. | No distinct decision implementation; existing XML1 decision facility wins. TeleporterAttackHandler/selection remains separate. |

XML1 already parses `aiclasstype` at `B0517` and includes `genericranged`,
`rangedenemy`, `genericrangednostraffe`, `flynonav` and `brawler` declarations.
This establishes existing AI selection, not support for every XML2 mode.

## Leader scaling ownership

XML2 initialization `31E50` reads `leader` at `321F5`; its enabled branch selects
`leaderpowerup` and calls `311E0` at `322F4`. That function writes actor `+3DB`
bit 8, which the scale consumer reads. This is separate from `setActorHuge`'s
controller flag. Do not attach the multiplier to transformation snapshots.
Classify remaining leader consumers against XML1's existing scale system;
numeric scale parity is not this goal.

## Evidence locations and limitations

Original-image identities are recorded in the generated script/event inventories.
Local `work/xml2-resume/inventory.json` contains all 393 added RTTI names and the
122-name filtered candidate subset, including templates and renamed types.
Neither count is a count of missing gameplay systems. Local native disassembly
includes `ai-new-handler-construction.asm`, `ai-authored-selection.asm`,
`ai-mode-identity.asm` and `huge-owner-complete-boundaries.asm`.

The stash checks execute native control lookup, RTTI, formatting, text storage,
list refresh and script queue operations. They do not prove rendered menus,
media, audio or gameplay. User gameplay testing remains the acceptance policy;
no new visual acceptance campaign is required by this ledger.

## Remaining percentage-damage interface evidence

`CPUAtkInstantPercent` is registered as `atk_instant_pct` (XML2 string
`4A7CEC`, factory references `157736`/`15774D`). Parser `14CF70` recognizes
`percent`, `chance`, and `selfonly`. Its two paths are not interchangeable:

- `14D020` handles outgoing damage when `selfonly` is false. After native
  source/target eligibility and authored operand evaluation, it rolls the
  native RNG and adds `percent * target[+27C] + 1` to the existing hit. A
  percentage at least one adds native damage flag `0x200000`.
- `14D200` handles activation when `selfonly` is true. It evaluates operands,
  rolls the native RNG, constructs a separate native damage record and submits
  it through the combat manager. Both source and target come from the active
  powerup interface.

These traced XML2 interfaces now have XML1 callback implementations and basic programmatic checks.
Previously established health ownership is XML2 `+27C` / XML1 `+240`;
maximum health is a separate XML2 `+284` field. The native XML1 combat-manager
submission interface is `59CE0`, virtual `+50`, already used by the added-attack
implementation. XML2's corresponding virtual is `+64`.

Constructor `158CA0` initializes both `chance` and `percent` operand endpoints
to `1.0` and clears `selfonly`. Do not default the chance or percentage to zero.
The flag `0x200000` already has a native XML1 consumer: `454A4` reads it from
the context's embedded damage record (`context+0xC`, record flags `+0x18`).
Its branch `454AF` uses XML1's native 32000-damage treatment. XML2 reads its
corresponding flag at `45CAB` (record flags `+0x14`). Preserve XML1's existing
consumer; do not import XML2's damage magnitude or record layout. XML1
constructor `2C8F6/2C8FA` confirms the flags parameter is stored at record `+0x18`.
The owned operand layer now exists in `src/raven_percent_attack.cpp`. Metadata
capture retains `percent`, `chance`, and `selfonly`; evaluation uses current
source rank and the first authored endpoint, matching the native reads before
the chance roll. Programmatic checks cover defaults, parser/clone ownership,
rank changes, stale generations, and unrelated-class exclusion. Both guest callbacks are installed without replacing existing native callbacks.
The native outgoing dispatcher now passes current-health amount, lethal flag,
chance rejection, selected-target protection and inactive-owner checks.
Self-only activation passes a private native actor fixture with distinct source
and target handles, original damage construction and manager singleton lookup.
Its final combat-delivery terminal is substituted to inspect argument order,
physical type, priority, amount and lethal flag. Checks also cover chance and
stale-target rejection, caller stack and register/FPU restoration. This is
programmatic integration evidence, not gameplay acceptance.
Existing health-percent **event filters** in
`raven_native_energy.cpp` do not establish this damage callback's presence.
Local traces: `percent-absorb-trace.asm`, `instant-percent-self.asm`.

## Feral Rage effect-event integration

`CPUFeralRage` callbacks `14DDF0`/`14DE60` invoke inherited sound callbacks
then attached-powerup virtual `+20` with `(3,1)` / `(3,2)`. This is effect
selection, not rage-meter accumulation: `1451C0` traverses the definition's
effect list, requires a bound resource, matches usage and signed-short tag,
and invokes `146960` for each match. `CFxCoreData` getters `89290`/`14BC10`
read usage/tag; parser `14B5C0` assigns `how_used` and `tag` separately from
`fxlevel`. Native usage lookup `14ADB0` maps primary/activation/deactivation
to 0/1/2, and custom or unknown explicit values to 3.

The shared metadata event selector now implements owned, ordered selection
with sharing filters and native tag narrowing. Focused Release metadata tests
pass selector modes, default fields, distinct tag/fxlevel, copied ownership,
retirement during visitation and reuse cleanup. Feral Rage callback installation and one-shot event playback are now implemented.
Inherited sound events remain available; attack/damage wrappers select custom
1/2 after sound and revalidate the active owner. One-shot playback uses native
XML1 manager virtual+30, leaving particle lifetime with the native emitter and
creating no repeating powerup group. Callback installation/stack/absent-owner checks pass. A private one-shot
fixture executes native actor lookup and world transform, checks the manager+30
argument contract and rejects owner/target retirement during manager lookup.
The expanded fixture also executes native scoped name construction/tree lookup,
resource-generation validation, Feral attempt/damage callbacks and lifecycle
selection. Named-bone lookup, interning and native no-skeleton fallback pass;
invalid bone names do not emit. Manager query/emission terminals are substituted.
No posed-model attachment or rendered particle claim is made. Lifecycle hooks
are at fresh attachment `2AE80` and eligible removal `2AF53`, with repeatable
regeneration; refresh does not pass the activation boundary. Feral Rage is
implemented under the goal's basic programmatic validation policy. Gameplay
appearance remains for the user, as agreed.


Callback-slot correction: native parser `95CD0` assigns func_damage to `+B0`,
func_attempt_hit to `+B4`. Percentage damage now uses `+B0`; its programmatic
native traversal uses selector4 (`29E99`), not selector3 (`29E5A`). The latest
full probe passes with the corrected damage-event slot.


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
spending. Correction:43EF2/46815 are NOT reads of this cache: they dereference
CharacterDef through actor+35C before reading+4EC. Do not import those
existing character hit/distance behaviors as part of the energy shield. The
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

## Attack-roll bypass reconciliation

XML2 bypass_enemy_dr is an alternate interface to attack-roll bypass, already
present in XML1 as dmgmod_no_atk_roll. XML2 cache579 bit4 at5DB17 sets
the same bypass local as its damage-modifier branch5DB55/5DB8B. XML1
flag08000000 at5C385 sets bypass5C3BB and skips its RNG at5C460/5C462.
This is distinct from defensive damage reduction. Preserve XML1; no alias
or runtime change. The presence audit pins these native instructions.

## Finite damage-reserve ownership

The spend_damage query returns a CAttachedPowerup pool reference, not a numeric
multiplier. Table4A6AF4 slot68 resolves146D10, reading signed capacity at+44;
slotB8 resolves146DC0, writing that instance field. Attachment refresh finds
affecter30 at146826, evaluates CAffecter virtual34 (1446C0), samples its range
through16E1C0 at1468A2 and retains the larger old/new capacity at1468BB.
Incoming-hit processing consumes the reserve and calls native removal15C560
on exhaustion. Implementing only a damage multiplier would lose this state
and lifecycle. Classification/integration remains open; no runtime support
for spend_damage is claimed. The audit now pins these instructions.

## Damage-reserve operand reader (partial implementation)

`raven_rating_damage_reserve` now reads the first eligible spend_damage
metadata declaration, validates the active generation/definition, resolves
literal or talent endpoints, and separates unfiltered initialization from
hit-scope selection. It does not aggregate capacities, consume RNG, or
re-evaluate rank for an eligibility-only query. The guest fixture checks
ranges, first matching selection, operation independence, stale ownership,
retired metadata and unchanged RNG/stack/FPU. Build and full
`--powerup-definition-test` exited0 (`reserve-reader-build.log`,
`reserve-reader-test.log` under work/xml2-resume).

This is an operand interface only. Mutable per-instance capacity, refresh,
incoming-hit consumption and native removal are not integrated yet.
spend_damage remains unresolved in the completion ledger; no gameplay
or staged executable claim.

## Damage-reserve integration complete (programmatic scope)

`src/raven_damage_reserve_guest.inc` now connects spend_damage to native
initialization/refresh, hit delivery at46373, removal2AF30 and active-pool
retirement/reset. Capacity is bounded to128 generation-owned records; shared
definitions, stock slot layouts and saves are unchanged. Refresh retains the
larger old/new capacity; overflow spends the reserve and calls native removal;
exact depletion leaves the zero-capacity attachment until ordinary expiry,
as observed in the original consumer. No per-character routing.

Build and complete --powerup-definition-test passed (reserve-final-build.log,
reserve-final-test.log). Tests include generated2A7B0 initialization, repeated
hits, lower refresh, exact/overflow depletion, actual2AF30 unlink/retirement,
recycled generations, reset, operand scopes and stack/FPU checks. Source audit
pins the generated hit/reset hooks. No rendered/gameplay acceptance claimed.
Three affecter entries remain unresolved; final executable staging is pending.

## Energy-shield trace correction and integration boundary

Earlier43EF2/46815 observations conflated equal numeric offsets on different
objects. Their bases are CharacterDef loaded at43EEC/4680F, unlike461B5,
which explicitly adds actor470 to reach the affecter cache. Native audit now
pins those base loads. Do not expand this task into existing character
hit-eligibility or distance-processing changes.

Confirmed damage_to_energy consumer461C6..46221: positive factor gates the
shield; incoming damage multiplied by the factor supplies energy cost, while
available energy is subtracted from health damage with a zero floor. The
consumer clears reaction flags unless unblockable. Its3ED50 call is power-cost
charging, not a raw setter. XML1 equivalent3F410 already queries power_cost40
at3F479/3F48E and clamps available energy via2E8C0. New shield integration must
use that existing charging routine and a pre-reaction hit boundary; simply
setting energy at final health delivery would omit those contracts. No runtime
shield implementation is claimed yet.

## Energy shield integrated before hit reactions

`damage_to_energy` now uses `raven_rating_energy_shield` and the generated
455DA defensive-context hook. Eligible declarations assign the scalar rather
than accumulating it. The shield reduces pending health damage by available
energy and charges scaled incoming damage through native3F410, preserving
XML1 power-cost modifiers and energy clamping. Reaction suppression respects
the unblockable flag. No character-specific behavior or save-format changes.

The finite reserve also moved from final delivery46373 to this pre-reaction
boundary, before energy interception. The bridge preserves the original hit
record and only publishes changed pending damage; it revalidates the actor
after reserve removal callbacks before accessing energy.

energy-shield-build.log and energy-shield-test.log exit0. Full programmatic
fixture passes partial/full/no energy, scalar replacement/disable, unblockable
reaction flags, original-hit preservation and ABI using actual XML1 charging,
getter and setter. The initial fixture failure was an absent energy-setter
vtable entry; repaired fixture also supplies the native maximum-energy field.
Remaining affecters: def_dodge and stolen_damage. No gameplay claim or final
executable staging; TODO3 remains open.


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

## October 1 teleporter attack dispatch

Connected the missing two-phase attack behavior at native main-call sites
10B3E7 and EE8DF, retaining XML1 target/action eligibility, wrapper flags,
facing/alignment and standard attacks. The owned destination is published
before input bits reach the existing teleport-event bridge. Native simulation
RNG is used only when a new teleport or phase1 attack requires it.

`work/xml2-resume/ai-teleport-dispatch-build.log` and
`ai-teleport-dispatch-test.log` pass. The fixture executes native target/health
checks, action-table query, geometry, RNG and the EE810 wrapper; it checks both
follow-up phases, cooldown delegation, action denial and owner retirement.
Clock, controller and standard-attack terminals are substituted. Existing
teleport-event checks also pass. No visual/gameplay verification is claimed.

HitAndRun classification, stolen_damage and dmgmod_no_actors consumer
reconciliation, final audit/build and self-contained executable staging remain.

The independent AI planner/ownership target also passes in
`ai-teleport-dispatch-pure-build.log` / `ai-teleport-dispatch-pure-test.log`.
Native interface/hook audit passes after idempotent guard regeneration.
The remaining HitAndRun attack routine uses an existing power-selection
facility present in XML1 ShadesNoWing (F1110); its remaining selection mapping
still needs reconciliation, without behavioral parity work. The no_actors
consumer search has not established a new system; do not invent a flag handler
from its name. These unresolved classifications are not completed work.

## October 1 AI classification closed

All seven AI candidate rows are classified. XML1 already selects and constructs
ShadesNoWing through FD59A -> FD5A7/FC4D0 -> FD5C4. Its table3D9C1C/mainF1110
provides the existing power-selection attack facility. Keep XML1 policy and
behavior; only the missing HitAndRun retreat lifecycle was added. The native
audit now pins these original instructions and passes. No additional handler
or selection-policy replacement is needed under the existing-system rule.

Remaining operand work stays open: stolen_damage84 and dmgmod_no_actors2.
Follow-up searches of bit2 tests and compound damage-field masks found no
confirmed no_actors consumer. Actor admission38630 reads damage flags+14 but
the inspected gates do not establish that bit. This is negative evidence,
not a claim that the declaration is unused. Continue from the damage-record
construction/dispatch path; do not repeat the completed AI work.

## October 1 candidate staging and authored operand evidence

`goal-candidate-build.log` and `goal-candidate-test.log` pass. Copied only the
built EXE to `XBOXgame/X-Men Legends.exe`, preserving the previous EXE in
ignored work storage. Source and destination SHA256:
`51d67a144d54a1a1ab05cd4f4feba84d12678500d8841dd09eb9c5c2e96f8ea2`.
The 48,976,896-byte host contains RCDATA101: a 229,888-byte x86 renderer.
Both PE import lists contain only Windows-provided DLLs; no adjacent runtime
DLL/EXE is needed. Dependency evidence is in `goal-candidate-dependencies.json`.
Assets, build.ini and saves were not modified. No game window was launched.
This stages completed work; it does not close TODO3 or the two open operands.

Read-only decoding of PC reference data located concrete authored uses:
- `Data/talents/rogue.engb`: rogue_ability/Power Theft, scale affecter
  stolen_damage, level=%rog_ability_dmg (authored endpoints3 to6.5).
- `Data/powerstyles/ps_nightcrawler.engb` and `ps_deadpool.engb`: sword-loop
  attacks use dmgmod_no_actors separately from the no_damage victim event.
  power_sword inherits sword_strike -> punch_heavy.

Local decoded references: rogue-operand-reference.xml,
nightcrawler-operand-reference.xml and deadpool-operand-reference.xml.
These are evidence, not edited game assets. XML2 melee punch table4A1D14
uses EBF30 -> EB720 -> EB570 to construct damage flags from parameter+10
into record+14 (EB5B7/EB5BA). Event execution EB0B0 dispatches through combat
manager494F94 slots24/30 (5EEA0/5E470). The arc path calls slot64/61BC0 at
5E73A. Continue tracing this concrete path; earlier name/bit scans alone do
not establish the operand's behavior. Existing XML1 facilities still win.

## October 1 stolen-power operand classification

The decoded Rogue Power Theft talent identifies stolen_damage as its damage
scaling variant. XML1 already has the stolen-power system: native
powerstolenactivate2CF80 / powerstolendeactivate2D3B0, also established by the
powerup presence audit. Per the existing-system rule, preserve XML1 and skip
the scaling variant without adding an alias or comparing balance. This does
not claim XML2 ID84 is unused. Its missing direct consumer is not grounds to
invent new semantics or reopen XML1's existing steal facility.

The affecter inventory now has 22 direct native consumers,31 existing
names,18 additions and24 existing-system variants; no unmatched operand rows.
The separate damage flag dmgmod_no_actors remains under classification.

### Remaining no_actors trace checkpoint

Melee damage construction and dispatch are now identified, avoiding further
blind bit scans: EBF30 -> EB720 -> EB570, then EB0B0 -> combat slot30/5E470
-> slot64/61BC0. In EB570, parameter+10 is copied into damage record+14.
EB720 context+14 bit1 instead comes from parameter+48 at EB85E..EB869;
that is a separate context flag, not proof of a no_actors damage consumer.
The arc iterator5E68B uses that context-derived argument to filter a type;
do not mistakenly wire dmgmod_no_actors to this unrelated input.

The remaining classification is still open. The current staged executable
and successful programmatic checks are unchanged by these read-only traces.


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
