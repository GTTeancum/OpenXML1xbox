# Character progression

Native talent views, imported declarations and curves, character rank records,
registry/source ownership, and persistent talent identities live here. Stock
XML1 behavior and guest ABI remain authoritative; assets select character powers.

- `raven_talent_*`, `raven_imported_talents*`: declaration ingestion/evaluation.
- `raven_actor_talent*`, `raven_xml1_talent_view*`: actor/native integration.
- `character_talent_*`: rank record, map ownership and guest save stream.
- `talent_registry_*`, `talent_source_*`, `talent_package_*`: definition lifetime.
- `talent_identity_*`, `character_save.h`: stable identities and save integration.

Include headers through `engine/progression/` from the `src` include root.
Tests mirror this directory under `tests/engine/progression`. Generated guest
functions remain in `src/recomp/gen` pending the guard and symbol migration.
`*_guest` files explicitly access guest memory/registers; portable codecs and
declaration helpers should not acquire Windows or renderer dependencies.
