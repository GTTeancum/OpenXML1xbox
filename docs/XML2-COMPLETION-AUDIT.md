# XML2 missing-function engineering completion audit

October 1, 2026. Scope: the former TODO #3, missing XML2 combat, character and
gameplay scripting functionality integrated into XML1. Existing XML1 systems
win without parity work. Console/online services, a standalone XML2 port,
NewGame+, the separate conversion tool and a hardware Xbox port are excluded.

## Requirement evidence

| Requirement | Current evidence and result |
|---|---|
| Missing script surface across XML2 | Fresh original-image inventory: 307 XML2 descriptors, compared against 213 XML1 descriptors. 53 registered additions, including six exact original no-ops; zero pending commands or pending no-op adapters. Named existing facilities and console/online exclusions are explicit in XML2-SCRIPT-INVENTORY.md. Native descriptor dispatch, argument/result ABI and functional checks are in the current programmatic test log. |
| Unique character combat handlers | Fifteen added handlers have registered native callbacks and targeted decision, update, interruption, identity and cleanup fixtures in raven_bishop_guest.c. Current test covers all fifteen, including the shared Magnetic Grasp/Chain Lightning implementation. The simple entered/returned checks are supplemental, not the sole evidence. |
| Combat-event additions | All 70 event names classified: 57 exact existing names, six existing-system variants skipped, seven implemented factories. Native factory/parser/copy/lifetime and execution-contract fixtures cover the additions. XML2-EVENT-INVENTORY.md identifies source and generation guards. |
| Powerup systems | Fresh native callback audit: 25 concrete class rows, fourteen existing families and eleven additions. XML2-POWERUP-PRESENCE.md identifies the native existing facilities or implementation source. Current native tests cover attachment/reference ownership, dispatch, removal, reuse, sound routing, shared boost, absorb, vacuum, percentage damage, triggered events and delayed removal reactions. |
| Affecters and damage modifiers | XML2-AFFECTER-PRESENCE.md: all 95 operand rows classified (22 native consumers, 31 existing names, 18 additions, 24 existing-system variants). All 31 modifier declarations classified. The final no_actors addition has pinned original consumer instructions and native XML1 entry tests. Existing bit collisions are not forwarded blindly. |
| Native AI additions | Refreshed XML2-AI-PRESENCE.md validates native interfaces and generated hooks for all seven candidates. Existing decision/attack facilities are skipped; new Wander, Protect, PackHunt, HitAndRun retreat and Teleporter behavior has owned-state and native adapter tests. |
| Scope beyond the imported characters | Inventories derive from original executable command/event/name tables and RTTI, not Bishop/Sunfire powerstyles alone. The inventory retains all 393 added RTTI records and its 122-record triage subset. Interface, container, factory and event-template records are not separate gameplay capabilities. Existing stats, inventory, spawning, equipment, menus and rendering systems remain XML1-owned; new dependent gameplay systems are tracked through their command/event/operand/AI consumers. This is not a port of every XML2 C++ class. |
| Save/state ownership | Current native tests cover campaign extension legacy versions, stash snapshots/save/load/reset, leader cache/save records, actor/definition generations and retirement. No populated-campaign or disk-save acceptance is inferred from those fixtures. |
| Resource structure | Fresh stash build compiled and round-tripped three language documents plus PKGB. All seven outputs match staged files byte-for-byte; hashes saved in work/xml2-completion-audit/stash-manifest.json. The builder retains existing model/texture paths and PKGB declarations. |
| Reproducible integration | Source implementations and scripts/guard-*.py install native-boundary hooks; audited generated hook locations exist. Latest Release build succeeds and the complete --powerup-definition-test run exits0 without failed assertions. Existing unflagged native defense/resistance paths pass alongside no_actors. |
| Self-contained staged deliverable | XBOXgame/X-Men Legends.exe matches the successful build byte-for-byte: 48,977,408 bytes; SHA256 96e2b69ce7dd0fe9a331aea4b2aade9a9cb492dd2d089b7d7395ea8b26510e35. Embedded DX8 worker and system-only imports verified in no-actors-dependencies.json. Assets/settings/saves were not overwritten during executable staging. |
| Preserved constraints | Existing XML1 systems and balance are skipped by explicit inventories. Level45 decision remains in force; no level99 or NewGame+ expansion is part of this goal. Existing progression/rotation work is retained. DX8 worker is unchanged; no commit, push or release performed. |

## Validation limits

Engineering acceptance is the user-selected basic programmatic policy.
The latest log is work/xml2-resume/no-actors-test.log; build evidence is
no-actors-build.log. Original-image inventory and evidence hashes are under
work/xml2-completion-audit. This does not claim rendered menus, audible sound,
full campaign travel or gameplay validation. Individual fixtures identify
substituted scene, UI, audio, resource and other terminal callbacks. Several
older fixture messages still say an integration is pending; later fixtures in
the same run cover those integrations (recall travel, leader attachment,
vitality command/refill, shared removal and scale lifecycle). Those messages
are historical test-boundary labels, not outstanding implementation items.

All identified in-scope additions are implemented with programmatic evidence;
no pending inventory rows remain. Player gameplay acceptance and unrelated
reported crashes remain separate. The next authorized goal addresses GitHub
issues18,17,14,8 in that order; it must not reopen XML2 parity work.
