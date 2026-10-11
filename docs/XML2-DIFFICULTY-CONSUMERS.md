# XML2 difficulty consumer inventory

This tracks dependencies of the registered `setDifficultyLevel` and
`startGameDiffDialog` additions. Existing XML1 systems win: their formulas,
balance and difficulty variants are not import work. A caller being in an
existing class alone does not establish that its entire operation exists.

The 25 candidates come from the original XML2 difficulty-getter call inventory
in `work/xml2-resume/difficulty-consumer-functions.txt`. This is a bounded
dependency inventory, not proof that every possible indirect caller was found.

| XML2 entry | Current disposition | Evidence / remaining boundary |
|---|---|---|
| `2BAD0` | Activation/restore adapters validated; world integration untested | Native actor32DA7 selection and successful2F0ED restore hooks now schedule or replace deferred leader powers; metadata ownership, native scheduler, seven-zone adjunct/save stream and stale-generation checks pass. Ownerless shared binding uses XML1 namespace12. Combined load/restore adapters pass with real native properties, handle lookup and scheduler; full actor constructor/restore and world effects remain untested. See leader-adapter-integration-test.log. |
| `5A210` | Excluded level/balance expansion | Original5A210..5A2B9 only boosts authored enemy level by50 for hard mode and caps at99. User explicitly retained level45; existing XML1 level/XP systems remain authoritative. No new character capability in this helper. |
| `5D330` | Existing system; skip | Attack rating already exists in XML1 `5C370`; current rating integration preserves that basis. |
| `5D6A0` | Existing system; skip | Defense rating already exists in XML1 `5C370`; no difficulty-specific replacement. |
| `62530` | Existing system; skip | Damage recalculation already exists in XML1 `5CCA0`; preserve current native damage and completed modifier integration. |
| `7D360` | Existing course-level metadata; skip difficulty balance | D8EC0 indexes the course table used by1E3470 to build loadDangerRoomCourse. The getter only reads course level and adds40 in hard mode. XML1 already owns course levels in CInventorySystem7E4C0 and uses them in17C5C2..17C5CB; preserve this existing system. |
| `8D630` | Difficulty level expansion excluded | Only difficulty-dependent branch8D6A7..8D6BE adds50 to the authored map level. Preserve level45 and XML1 level/balance behavior; do not import this hard-mode expansion. Other branches resolve actor level or average party level for XML2 item-generation callers78500/7CD10/7D2F0; classification here excludes the difficulty delta, not a claim that the entire XML2 item generator was ported. |
| `96CC0` | Existing system; skip | Objective completion already awards XP in XML1 `845C0`, through Characters virtualCC and `2FCF0`. |
| `B0530` | Registered and programmatically validated | setDifficultyLevel native integer adapter dispatches the completed campaign value/chooser/startup path. Original integer contract retained, with no script-value clamp. Native routing and command ABI tests pass; startup/UI terminals substituted. |
| `B7910` | Existing system; skip | First-mission startup already excluded in the script inventory; preserve XML1 roster and map startup. |
| `BEC30` | Excluded network difficulty propagation | Only difficulty query is BECEF, in the online-load branch; writes its low byte to CNetPlayManager+76F at BECFC. Offline branch BED05..BED1C uses existing campaign deserialization. The optional difficulty save extension is handled separately. |
| `C7FC0` | Existing system; skip | XML1 maximum health `AFA90`; preserve native calculation. Missing permanent vitality bonus integration is tracked separately. |
| `C8390` | Existing system; skip | XML1 maximum energy `AFBD0`; preserve native calculation. Missing permanent vitality bonus integration is tracked separately. |
| `DC500` | Existing spawned-health system; skip balance | Course-dependent spawned health scaling only: DC9B3 writes actor+284 and DC9BC calls health setter2B810. XML2 native308D4 calls established max-health C7FC0 and308D9 stores that same field. XML1 C6770 already initializes spawned health via AFA90, native max field+246 and current-health setter2E5B0; preserve XML1 scaling. |
| `DFB20` | Existing spawned-health system; skip balance | Hard-mode spawned health multiplier only at DFF61..DFF86, storing max health+284 and calling2B810. Existing XML1 spawned-health initialization in C6770 and current-health/max-health interfaces remain authoritative. No health formula parity. |
| `1489B0` | Existing resistance system; skip difficulty balance | Original148B2E..148B4F initializes resistance bytes at cache+E1. Attribute dispatcher14A4FA indexes this array by resistance attribute ID minus13; hit query37E30 reads it. Current resistance handling already exists in raven_xml1_combat_resistance and native XML1 damage handling. Do not transplant XML2 cache layout or difficulty-specific resistance presets. |
| `1BD770` | Missing normal-completion unlock connected | XML2 credits1BD847..1BD85B unlocks hard after difficulty1 completion. XML1 native8C300 already owns completion; its final8C349 boundary now adds only the missing progress unlock. Real setter tests pass for all three modes, clearing, repeated completion and unrelated owner exclusion; original popup untested. |
| `1C6C00` | Excluded host-network broadcast | The difficulty read1C6F80 populates packet26 sent through CNetPlayManager217B40 at1C6FC8, matching the excluded session-start synchronization paths. |
| `1E3470` | Existing course-disc reward system; skip | Original XML1 native17C480 selects course rewards, consults course eligibility/level and builds loadDangerRoomCourse at17C73A;17C8C0 also emits this command. Do not replace XML1 reward selection with XML2 course-level difficulty adjustments. |
| `200380` | Registered and programmatically validated | startGameDiffDialog dispatches the existing tested native XML1 chooser. Native popup choice/selection/lock actions and registered no-argument adapter ABI pass; actual presentation remains untested. |
| `201E40` | Difficulty continuation implemented; existing startup skipped | Saves difficulty across reset (201E8F/201EAB) and calls785D0 for fresh hard-mode default statistics (201EFC); current campaign startup retains the choice and prepares level45 definitions. Final commands are startloadedonlinegame (excluded), startFirstMission and danger_room (existing XML1 systems). Network state updates remain excluded. |
| `202990` | Excluded network difficulty setup | Difficulty read202A55 gates calls21AE50(1)/(2) on CNetPlayManager before multiplayer setup. Direct local loading is a separate202ACD..202AF8 branch without a difficulty read; preserve existing XML1 map loading. |
| `210330` | Excluded network synchronization | CNetPlayManager219670 peer iteration transfers the native save buffer in packet48 chunks; difficulty enters packet26 after peer readiness, then invokes the separately tracked201E40 local continuation. |
| `2105E0` | Excluded network synchronization | Handles peer acknowledgement4A, looks up the peer through CNetPlayManager2179B0, and broadcasts difficulty in packet26 before the separately tracked201E40 continuation. |
| `211B70` | Excluded network synchronization | Sets up multiplayer save transfer: difficulty enters packet47, per-peer offsets/readiness are initialized, and210330 is scheduled. Single-peer branch calls the separately tracked201E40 continuation. |

Supporting current-state evidence:

- `scripts/guard-raven-damage.py` retains native `5C370` ratings and `5CCA0`
  damage, with the existing added-modifier interfaces. The historical
  `XML2-INTEGRATION.md` sections on Energy Fury attack-rating integration and
  damage recalculation identify the corresponding XML2 consumer roles. Their
  older parity proposals are superseded by the user's new-functionality rule.
- Original XML1 `845C0..84723` in
  `work/xml2-resume/xml1-objective-xp-presence.asm` checks newly completed state
  and positive authored reward, then calls `56E90`, virtualCC and `2FCF0`.
  XML2 `96CC0..96E0C` is retained in `xml2-objective-xp-difficulty.asm`.
  This establishes existing objective XP awards; no reward multiplier port.
- `src/raven_campaign_state_guest.c` and `src/raven_campaign_menu_guest.c`
  contain the current startup and chooser implementation. Latest passing
  checks: `work/xml2-resume/difficulty-routing-build.log` and
  `difficulty-routing-test.log`. Final command/UI terminals are substituted.
- Health/energy presence and the independent vitality bonus integration are
  documented in the permanent-vitality sections of `XML2-INTEGRATION.md`.

No gameplay acceptance, script registration or player staging is claimed by
this inventory. Difficulty integration remains unfinished.

Session-consumer classification (2026-10-01): original singleton219670
constructs2190C0 at6F9078 with vtable4B47A4. Original RTTI identifies it as
CNetPlayManager (descriptor5579A8, locator530F34). Peer list/count interfaces
217A00/217950 and broadcast217B40 establish network ownership independently
of the caller names. Evidence: work/xml2-resume/xml2-difficulty-session-
consumers.asm, xml2-difficulty-session-owner.asm and
xml2-difficulty-session-transport.asm. Only the packet/peer machinery is
excluded; the shared local201E40 continuation remains separately tracked.

Local continuation201E40 (trace xml2-local-start-continuation.asm, through
201F63) uses CGame virtual268/26C for difficulty preservation across2010A0.
Virtual270 resolves to785D0, the already implemented default-stat startup
source; this is not a new remaining handler. See raven_campaign_state_guest.c
startup_begin/after_reset and prepare_default_stats. Original command strings
at4B3588,4968A8,49C7BC identify online loaded-game, first mission and Danger
Room branches. Existing first-mission/Danger Room systems are skipped, not
reimplemented. Registration and the other consumers remain pending.

Additional consumer dispositions (2026-10-01): original disassembly retained
in xml2-difficulty-level-inventory.asm (5A210 through5A2B9),
xml2-difficulty-load-transport.asm (complete BEC30 and202990) and
xml2-difficulty-host-menu.asm (complete1C6C00), all under work/xml2-resume.
The network classifications refer specifically to difficulty propagation;
they do not claim that every operation in mixed local/network routines is
online-only. The existing native load paths are retained. No script completion
counts changed from these consumer classifications.

Course presence evidence (2026-10-01): original XML1 course-disc selection
17C480..17C7AD, course-level accessor7E4C0..7E4DD and the second reward path
17C8C0..17CD78 are retained in work/xml2-resume/xml1-course-disc-reward-
presence.asm, xml1-course-level-presence.asm and
xml1-course-reward-spawn-presence.asm. XML2's1E3470 reads indexed records from
D8EC0, checks their level/availability, and formats loadDangerRoomCourse from
the selected record name at1E35B5..1E35ED. This identifies the6054C0 table as
course metadata, correcting the earlier unresolved record-purpose note.
Existing XML1 course systems win; no selection-rule or level-offset parity.

Other traces advanced but are not yet sufficient for final classification:
xml2-difficulty-spawn-consumer.asm shows DC500 writes its scaled value to
actor+284 and calls virtual1A4 atDC9BC; DFB20 does so atDFF80. The setter
resolves through CActor492124 to2B810 (xml2-spawn-vitality-setter.asm).
xml2-difficulty-endgame-consumer.asm isolates the completion/unlock path.
These candidate traces do not themselves claim missing-system completion.

Completion unlock validation (2026-10-01): guard-progress-extension.py installs
the added callback at8C349 before the original completion-bit write. It uses
the actual boolean low bit and owns only the separate hard-unlock state.
The native completion flag/popup and NewGame+ logic are unchanged. Release
build and full --powerup-definition-test pass: difficulty-completion-build-
final.log / difficulty-completion-test-final.log under work/xml2-resume.

Spawned-health field identification (2026-10-01): original308C9..308DE
in xml2-spawn-health-field.asm establishes actor+284 from max-healthC7FC0;
this closes the previously ambiguous setter identity. The original XML1
C6770 trace in xml1-course-reward-spawn-presence.asm includes AFA90 atC6B76,
max-health storage atC6B91, and its native setter call. Native2E5B0 clamps
current health+240 to max+246 (xml1-native-actor-health-presence.asm).
All traces are under work/xml2-resume. No further scaling comparison or
porting is needed because the system exists in XML1.

Current registration checkpoint (2026-10-01): both commands are registered
and the current original-image audit lists them as implemented extensions.
Earlier pending-registration statements above are historical. Remaining
physical UI, full world effects and disk-I/O gaps remain explicit test limits,
not claims of gameplay acceptance. The bounded difficulty-consumer inventory
has no unresolved difficulty-specific consumer: level+50/cap99 expansions and
existing XML1 health/course/rating/damage/XP systems are excluded under scope;
network paths are excluded by user direction; unique leader activation and
normal-completion unlock have programmatic coverage. This does not establish
full TODO3 completion or a complete XML2 inventory-system port.

Evidence: work/xml2-resume/xml2-inventory-level-callers.asm and
xml2-difficulty-level-inventory.asm for the last dependency;
difficulty-commands-build.log, difficulty-commands-test.log and
inventory-difficulty-commands.log for build, complete native fixture run and
original-image inventory regeneration (all exit0).
