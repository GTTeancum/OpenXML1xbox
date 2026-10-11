# Native affecter presence inventory

Generated from the pinned original images by `scripts/audit-native-affecter-presence.py`.

This is presence evidence, not parity work or a completion claim. A different name
does not establish missing functionality. Existing implementations must be reconciled
before adding anything. Consumer addresses below are native XML1 operand-query calls;
the conservative scan does not recover dynamic operands or every call pattern.

| XML2 name | XML2 ID | XML1 ID | Classification / evidence |
|---|---:|---:|---|
| `none` | 0 | 0 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `count_only` | 1 | 1 | Existing XML1 operand and consumer; skip. `0004411C` push -> `0004411E` call `0002A630` |
| `strength` | 2 | 2 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `speed` | 3 | 3 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `body` | 4 | 4 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `mind` | 5 | 5 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `traits` | 6 | 6 | Existing XML1 operand and consumer; skip. `000AF7D7` push -> `000AF7DB` call `0002A400`, `000AF7E9` push -> `000AF7ED` call `0002A400` |
| `talent` | 7 | — | Existing XML1 talent bonus system; skip alternate affecter interface. Native bonus getter482B0/setter482F0, addAE04C/AE066, removalAE831/AE857 and UI18B95B. Completed progression preserves/expands this record; do not restart. |
| `all_talents` | 8 | — | Existing XML1 talent bonus system; skip bulk XML2 variant. Named bonus add/remove/accessors already exist; completed progression expands their native records. Preserve XML1 rather than importing a second rank-bonus system. |
| `move` | 9 | 9 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `move_attack` | 10 | — | Existing XML1 combat-node movement scaling; skip separate XML2 attack-only cache variant. Native combat execution40623 calls movement getter38270 (move9 query38286). XML2 node virtual58 is noncombat flag10F1C0; XML1 already parses noncombat atE28E8 and exposesEAC20. Preserve XML1, no attack-only alias or timing parity. |
| `invisible` | 11 | 10 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `energy_drain` | 12 | — | Existing XML1 energy depletion on hit; skip XML2 cache variant. XML2 cacheDC is consumed at46D90/46DD3 and victim energy setter46E03. XML1 dmgmod_drain already subtracts hit energy at45D26 and commits victim energy at45D67. Preserve XML1, no cache/formula alias. |
| `resist_physical` | 13 | — | Already implemented addition; do not restart. raven_xml1_combat_resistance at incoming46373; actual XML1 type IDs, typed reduction/isolation/retirement fixture passes. Other resistance names are not implied. |
| `resist_mental` | 14 | — | Existing XML1 scoped defensive-damage system; skip XML2 cache/query variant. Native def_damage18 queries45501/45512 use hit context; filter94F00 checks damage type/group and node, including unfiltered all-types. Original damage table includes mental/cold/electricity. Preserve XML1; no new alias. |
| `resist_energy` | 15 | — | Already implemented addition; do not restart. raven_xml1_combat_resistance at incoming46373; actual XML1 type IDs, typed reduction/isolation/retirement fixture passes. Other resistance names are not implied. |
| `resist_radiation` | 16 | — | Already implemented addition; do not restart. raven_xml1_combat_resistance at incoming46373; actual XML1 type IDs, typed reduction/isolation/retirement fixture passes. Other resistance names are not implied. |
| `resist_elemental` | 17 | — | Existing XML1 scoped defensive-damage system; skip XML2 cache/query variant. Native def_damage18 queries45501/45512 use hit context; filter94F00 checks damage type/group and node, including unfiltered all-types. Original damage table includes mental/cold/electricity. Preserve XML1; no new alias. |
| `resist_cold` | 18 | — | Existing XML1 scoped defensive-damage system; skip XML2 cache/query variant. Native def_damage18 queries45501/45512 use hit context; filter94F00 checks damage type/group and node, including unfiltered all-types. Original damage table includes mental/cold/electricity. Preserve XML1; no new alias. |
| `resist_fire` | 19 | — | Already implemented addition; do not restart. raven_xml1_combat_resistance at incoming46373; actual XML1 type IDs, typed reduction/isolation/retirement fixture passes. Other resistance names are not implied. |
| `resist_electricity` | 20 | — | Existing XML1 scoped defensive-damage system; skip XML2 cache/query variant. Native def_damage18 queries45501/45512 use hit context; filter94F00 checks damage type/group and node, including unfiltered all-types. Original damage table includes mental/cold/electricity. Preserve XML1; no new alias. |
| `resist_all` | 21 | — | Existing XML1 scoped defensive-damage system; skip XML2 cache/query variant. Native def_damage18 queries45501/45512 use hit context; filter94F00 checks damage type/group and node, including unfiltered all-types. Original damage table includes mental/cold/electricity. Preserve XML1; no new alias. |
| `health_regen` | 22 | 11 | Existing XML1 operand and consumer; skip. `0003A99F` push -> `0003A9A3` call `0002A400` |
| `health_regen_pct` | 23 | — | Existing health regeneration; skip XML2 percentage variant. XML2 IDs22/23 both accumulate cache+4C (1495BE/14956A); XML1 health_regen ID11 has native query3A9A3. Preserve XML1 without arithmetic parity or alias. |
| `energy_regen` | 24 | 12 | Existing XML1 operand and consumer; skip. `0003A98E` push -> `0003A992` call `0002A400`, `0003A9B0` push -> `0003A9B4` call `0002A400` |
| `health_per_kill` | 25 | — | Already implemented addition; do not restart. raven_xml1_combat_kill_rewards after native first-death flag45EA4; existing health setter2E5B0. kill-rewards-final-test.log passes. |
| `energy_per_kill` | 26 | — | Already implemented addition; do not restart. raven_xml1_combat_kill_rewards after native first-death flag45EA4; existing energy getter2E8C0/setter2E5F0. kill-rewards-final-test.log passes. |
| `maxhealth` | 27 | 13 | Existing XML1 operand and consumer; skip. `000AFB8A` push -> `000AFB8E` call `0002A400` |
| `maxenergy` | 28 | 14 | Existing XML1 operand and consumer; skip. `000AFC58` push -> `000AFC5C` call `0002A400` |
| `structure` | 29 | 15 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `spend_damage` | 30 | — | Already implemented addition; do not restart. raven_xml1_damage_reserve_refresh and raven_xml1_combat_damage_reserve; generation-owned capacity, refreshed maximum, scoped first eligible attachment, native2AF30 depletion removal and pool reset/retirement. reserve-final-test.log passes repeated/overflow/exact hits, generated initialization, actual native unlink, generation reuse and reset. No gameplay claim. |
| `damage_to_energy` | 31 | — | Already implemented addition; do not restart. raven_xml1_combat_defense_extensions at native455DA before reactions: scalar assignment, energy interception, unblockable flags, native3F410 charging. energy-shield-test.log passes partial/full/no energy, replacement/disable and native setter/ABI; no gameplay claim. |
| `attack_rating` | 32 | — | Already implemented addition; do not restart. raven_xml1_combat_rating outgoing scale consumer; native rating fixture passes. |
| `defense_rating` | 33 | — | Already implemented addition; do not restart. raven_xml1_combat_rating incoming scale consumer; shared owner/recipient fixture passes. |
| `min_damage` | 34 | — | Existing XML1 damage-range and damage-affecter system; skip split XML2 endpoint-cache variant. Native5CCA0 samples the supplied endpoints at5CD02 and applies damage16 at5CD29/5CD42. Preserve XML1 formulas; no alias. |
| `max_damage` | 35 | — | Existing XML1 damage-range and damage-affecter system; skip split XML2 endpoint-cache variant. Native5CCA0 samples the supplied endpoints at5CD02 and applies damage16 at5CD29/5CD42. Preserve XML1 formulas; no alias. |
| `damageLevel` | 36 | 17 | Existing XML1 operand and consumer; skip. `00059AB5` push -> `00059AB9` call `0002A400` |
| `might_heaviness` | 37 | — | Existing XML1 might system; skip split XML2 cache variant. Native might_mode/might_mode_mod IDs7/8 queried byB1BA0, called by object weight gate38457. Preserve XML1. |
| `might_structure` | 38 | — | Existing XML1 might system; skip split XML2 cache variant. Native might queriesB1C24/B1C47/B1C59 already consumed in combat59A64/5CD5C. Preserve XML1. |
| `def_damage` | 39 | 18 | Existing XML1 operand and consumer; skip. `000454FF` push -> `00045501` call `0002A400`, `00045510` push -> `00045512` call `0002A400`, `0016029B` push -> `0016029D` call `0002A630` |
| `def_knockback` | 40 | 19 | Existing XML1 operand and consumer; skip. `00045628` push -> `00045634` call `0002A400`, `00045643` push -> `00045645` call `0002A400` |
| `def_stun` | 41 | 20 | Existing XML1 operand and consumer; skip. `00044B53` push -> `00044B55` call `0002A400` |
| `def_pain` | 42 | 21 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `def_critical` | 43 | 22 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `def_pickup` | 44 | 23 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `def_grab` | 45 | 24 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `def_reflect_pain` | 46 | 25 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `def_finisher` | 47 | 26 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `def_popup` | 48 | 28 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `def_trip` | 49 | 29 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `def_mind_control` | 50 | 30 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `def_defense_rating` | 51 | — | Covered defensive rating system; skip alternate hit-query interface. XML2 query51 at5D8AF/5D8BF combines with defense-rating cache88/8C at5D8E7/5D906. Current XML1 raven_xml1_combat_rating already joins its incoming rating path. No new alias or formula parity. |
| `def_absorb_damage` | 52 | — | Already implemented addition; do not restart. raven_xml1_combat_absorb_damage incoming hit consumer; separate from CPUAbsorb. |
| `def_absorb_energy` | 53 | — | Covered incoming-hit energy restoration through integrated CPUAbsorb (energy=true, inflicted=false). XML2 query53 at45DD4 restores recipient energy via45E4C; current raven_xml1_absorb already supplies this system through native XML1 getter/setter. Skip alternate affecter interface, no alias. |
| `def_dodge` | 55 | — | Already implemented addition; do not restart. damage_dodge_apply before reserve/energy at455DA; scoped add-times-scale chance and native simulation RNG. Native HUD virtual30/156E20 owns floating text. dodge-feedback-test.log passes cancellation, shield ordering, scopes, detached exclusion, actual queue position/color/duration/text lifetime and ABI. English-only Dodge label; no rendered verification. |
| `def_damage_scope` | 56 | — | Existing XML1 scoped defensive-damage system; skip XML2 cache/query variant. Native def_damage18 queries45501/45512 use hit context; filter94F00 checks damage type/group and node, including unfiltered all-types. Original damage table includes mental/cold/electricity. Preserve XML1; no new alias. |
| `damage` | 57 | 16 | Existing XML1 operand and consumer; skip. `0005CD25` push -> `0005CD29` call `0002A5E0`, `0005CD3E` push -> `0005CD42` call `0002A400` |
| `atk_damage` | 57 | 31 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `atk_range` | 58 | 33 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `atk_range_scale` | 59 | 34 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `atk_knockback` | 60 | 35 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `atk_knockback_scale` | 61 | 36 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `atk_attack_rating` | 62 | — | Already implemented addition; do not restart. raven_rating.cpp authored alias through the outgoing rating consumer; fire/physical isolation fixture passes. |
| `atk_critical` | 63 | — | Already implemented addition; do not restart. raven_xml1_combat_critical_chance joins native probability before its single RNG draw; scope/repeat/retirement fixture passes. |
| `atk_vampire` | 64 | — | Covered outgoing-hit health restoration through integrated CPUAbsorb (energy=false, inflicted=true). Native query64 restores attacker health at46AB6; current raven_xml1_absorb supplies damage-based holder/sponsor restoration and native caps. Skip alternate affecter interface, no alias. |
| `atk_vampire_energy` | 65 | — | Existing XML1 energy drain/attacker restoration; skip XML2 variant. Native dmgmod_drain at45CF4 reduces victim energy and grants attacker energy at45E06. XML2 operand65 restores attacker energy at46C35. No formula or flag alias. |
| `reflect_damage` | 66 | 38 | Existing XML1 operand and consumer; skip. `00044175` push -> `00044177` call `0002A630`, `0004418E` push -> `00044190` call `0002A400`, `0004419F` push -> `000441A1` call `0002A400` |
| `deflect_damage` | 67 | 39 | Existing XML1 operand and consumer; skip. `0004424E` push -> `00044250` call `0002A630`, `00044267` push -> `00044269` call `0002A400`, `00044278` push -> `0004427A` call `0002A400` |
| `power_cost` | 68 | 40 | Existing XML1 operand and consumer; skip. `0003F475` push -> `0003F479` call `0002A400`, `0003F48A` push -> `0003F48E` call `0002A400` |
| `bypass_enemy_dr` | 69 | — | Existing XML1 attack-roll bypass through dmgmod_no_atk_roll; skip XML2 affecter/cache interface. XML2 cache579 bit4 at5DB17 sets bypass5DB20, joining the flag path5DB55/5DB8B. XML1 flag08000000 at5C385 sets bypass5C3BB;5C460/5C462 skips RNG1233A0 at5C46B. Preserve XML1, no affecter alias or damage-reduction conflation. |
| `critical` | 70 | 42 | Existing XML1 operand and consumer; skip. `0005C139` push -> `0005C13D` call `0002A400`, `0005C14B` push -> `0005C14F` call `0002A400` |
| `drain_victim` | 71 | 43 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `drain_time` | 72 | 44 | Existing XML1 operand and consumer; skip. `000D75F2` push -> `000D75F6` call `0002A400` |
| `xp` | 73 | 45 | Existing XML1 operand and consumer; skip. `000331BC` push -> `000331C0` call `0002A400` |
| `nullify` | 74 | 46 | Existing XML1 operand and consumer; skip. `000E70B4` push -> `000E70B8` call `0002A5E0` |
| `jump` | 75 | 47 | Existing XML1 operand and consumer; skip. `000DE5F3` push -> `000DE5F7` call `0002A400` |
| `combo_damage` | 76 | 48 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `combo_xp` | 77 | 49 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `confused` | 78 | 50 | Existing XML1 operand and consumer; skip. `0003BD47` push -> `0003BD4B` call `0002A5E0`, `0003BE09` push -> `0003BE0D` call `0002A5E0`, `001022CA` push -> `001022CC` call `0002A5E0` |
| `fear` | 79 | 51 | Existing XML1 operand and consumer; skip. `0003BB63` push -> `0003BB67` call `0002A5E0`, `0003BDDC` push -> `0003BDE0` call `0002A5E0`, `001021DC` push -> `001021DE` call `0002A630` |
| `team_switch` | 80 | 52 | Existing XML1 operand and consumer; skip. `0003BD5D` push -> `0003BD61` call `0002A5E0`, `0003BE20` push -> `0003BE24` call `0002A5E0` |
| `no_iceshell` | 81 | 53 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `frozen` | 82 | — | Existing XML1 freeze system; skip cached status variant. Native frozenactivate resolver2DAC4 installs2C010; full lifecycle/hurt callbacks in XML2-POWERUP-PRESENCE.md. No new status alias. |
| `stun_lock` | 83 | 54 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `stolen_damage` | 84 | — | Existing XML1 stolen-power system; skip the authored damage-scaling variant. PC Rogue talent rogue_ability/Power Theft authors a scale affecter with level=%rog_ability_dmg. XML1 powerstolenactivate2CF80 and powerstolendeactivate2D3B0 already own the facility (also classified in XML2-POWERUP-PRESENCE.md). Preserve XML1, no operand alias or balance parity. This is not a claim that XML2 ID84 is unused; no distinct native consumer was proved. |
| `slow_immune` | 85 | — | Existing XML1 movement-impairment admission immunity; skip XML2 slowdown-threshold variant. Native attachment2ACD5 calls383A0, which queries no_iceshell53 at383E9; blocked scale-move effects reject at2ACFD. Preserve XML1 thresholds, no alias or broader rejection. |
| `reveal_hidden` | 86 | — | Existing XML1 stealth detection; skip dynamic XML2 cache variant. XML2 cache109 bit10 joins canSeeStealthed at2EB70/2EB90. XML1 parses canSeeStealthed atB09D9 into character3A1 bit4 and consumes it in actor query3052E. No visibility alias or new detection system. |
| `extra_potions` | 87 | — | Already implemented addition; do not restart. raven_xml1_bonus_drops at native710C3 before ordinary loot roll; party scale factors, original inventory capacity methods, native715A0 spawning. drop-hook-final-test.log passes basic programmatic contracts; scene terminals substituted. |
| `extra_money` | 88 | — | Already implemented addition; do not restart. raven_xml1_bonus_drops at native710C3; party scale factors and native XML1 source value/item spawning, bounded nearby pickups, source revalidation and cleanup. drop-hook-final-test.log passes; scene terminals substituted. |
| `continuous` | 89 | 55 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `special` | 90 | 56 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `powerup_scope` | 91 | — | Already implemented addition; do not restart. raven_xml1_powerup_class_share_matches and native class-scope filter bridge; owned metadata and shared-role checks. |
| `time_bomb` | 92 | 57 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `dmg_custom_ent` | 93 | 58 | Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison. |
| `scale_factor` | 94 | — | Already implemented addition; do not restart. raven_xml1_actor_scale_factor and ordered raven_rating_actor_scale; lifecycle/ordered arithmetic fixtures pass. |

22 rows have direct native XML1 consumer evidence; 31 have an existing
XML1 declaration and are skipped; 18 additions have current implementation evidence;
24 differently named variants feed existing systems and are skipped;
0 unmatched rows still need existing-system/current-implementation reconciliation.
Counts are inventory rows, not numbers of missing systems. Separate damage-modifier
flags and their consumers remain outside this operand-name inventory.


## Damage-modifier declarations

Separate from affecter operands. Exact existing declarations are recorded without
comparing behavior. New names still need native-consumer classification. Never
treat equal numeric bits as equivalent behavior across the two titles.

| XML2 declaration | XML2 mask | XML1 declaration evidence / next action |
|---|---:|---|
| `dmgmod_none` | `0x00000000` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_no_damage` | `0x00000001` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_no_actors` | `0x00000002` | Implemented addition. XML2 actor preprocessor45950 tests copied damage flags at context+20 against BL=2 and returns false; caller470DF skips damage delivery. XML1 actor preprocessor45260 gates context+24. Missing-token parser preserves native names; physical-object delivery untouched. See no-actors-test.log for native entry, combined masks, parser and ABI checks. |
| `dmgmod_drain` | `0x00000004` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_auto_knockback` | `0x00000008` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_popup` | `0x00000010` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_trip` | `0x00000020` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_stun` | `0x00000040` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_immobilize` | `0x00000080` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_extinguish` | `0x00000100` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_drain_battery` | `0x00000200` | Existing power-trigger category5 facility; skip XML2 eligibility/flag variant. XML2 A9697 -> combat slot44/62290 consumes flag200. XML1 category5 9454E -> slot40/5CB30 already exists. Preserve XML1 behavior; do not alias200, which is XML1 confusion. |
| `dmgmod_ground_only` | `0x00000400` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_critical` | `0x00000800` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_energize` | `0x00002000` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_weld` | `0x00004000` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_ground` | `0x00020000` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_bounce` | `0x00040000` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_ignore_dist` | `0x00100000` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_kill` | `0x00200000` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_no_text` | `0x00400000` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_environment` | `0x00800000` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_no_pain` | `0x00080000` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_teleport` | `0x00010000` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_pierce` | `0x00008000` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_forcepain` | `0x00001000` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_force_fx` | `0x02000000` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_ignore_def` | `0x04000000` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_no_atk_roll` | `0x08000000` | Existing XML1 declaration; skip and preserve its system without behavior comparison. |
| `dmgmod_no_on_damage` | `0x10000000` | Implemented addition. XML2 selector4 at154A02 tests record+14 mask10000000; XML1 outgoing dispatcher29E99 now skips its callback for this optional flag. Missing-token parser preserves existing names. no-on-damage-test.log: suppression, unflagged delivery, incoming-hurt isolation, spelling and ABI pass. |
| `dmgmod_unblockable` | `0x20000000` | Already implemented addition; do not restart. raven_bishop_guest.c missing-token adapter and block gate; generated49589/5C3C0 hooks verified. Block fixture checks token spelling, existing-token preservation and attack gates; shared-loop-test.log passes the complete fixture. |
| `dmgmod_no_protection` | `0x40000000` | Existing XML1 defensive-damage bypass; skip XML2 variant. XML1 dmgmod_ignore_def at454E0/454EC skips defensive operand18 queries at45501/45512 to455DA. XML2 protection bypass at45EDC/45EEB is not a new defensive bypass system. Preserve XML1; no flag alias. |
