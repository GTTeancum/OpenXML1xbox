#pragma once
#include <stdint.h>
#ifdef __cplusplus
#include <map>
#include <optional>
#include <string>
#include <vector>
namespace raven {
// Imported definition operands belong to the definition, not an actor or tick.
// Preserve source text until the title adapter evaluates it in actor context.
using PowerupFields=std::map<std::string,std::string>;
// Multiple declarations may use the same effect at different skeleton bolts.
// Keep declaration order and duplicates; never key this list by effect path.
using PowerupEffects=std::vector<PowerupFields>;
using PowerupAffecters=std::vector<PowerupFields>;
bool xml1_powerup_share_matches(const PowerupFields& fields,uint32_t definition,float radius);
PowerupAffecters xml1_powerup_affecters_snapshot(uint32_t definition);
void xml1_powerup_effects_bind(uint32_t definition,PowerupEffects effects);
PowerupEffects xml1_powerup_effects_snapshot(uint32_t definition);
// These APIs store metadata only. They do not acknowledge a native parse,
// select an XML1 powerup type, install callbacks or make a handler executable.
void xml1_powerup_metadata_bind(uint32_t definition,PowerupFields fields);
std::optional<PowerupFields> xml1_powerup_metadata_snapshot(uint32_t definition);
}
extern "C" {
#endif
/* Called at verified XML1 boundaries: 96220 reset, 955B7 completed clone,
 * and 964A0 final destruction. Never retire at every 967B0 reference release.
 * No guest register, memory, refcount, callback or resource ownership changes. */
void raven_xml1_powerup_metadata_reset(uint32_t definition);
void raven_xml1_powerup_metadata_clone(uint32_t destination,uint32_t source);
void raven_xml1_powerup_metadata_retire(uint32_t definition);
/* Preserve recognized XML2 operands at the real attribute parser boundary.
 * Native parsing still runs; capture neither accepts nor executes a handler. */
void raven_xml1_powerup_metadata_attribute(uint32_t definition,const char *key,const char *value);
void raven_xml1_powerup_effects_clear(uint32_t definition);
void raven_xml1_powerup_effect_scope(uint32_t definition,uint32_t scope);
int raven_xml1_powerup_effect_scope_get(uint32_t definition,uint32_t *scope);
int raven_xml1_powerup_remove_on_node_end(uint32_t definition);
int raven_xml1_powerup_share_enemies(uint32_t definition);
int raven_xml1_powerup_class_share_matches(uint32_t definition,float radius);
/* Native 2AEC9 has just made a recipient definition. Its lifetime is
 * share_life, not the original owner's life; ordinary clones are unchanged. */
void raven_xml1_powerup_metadata_shared_copy(uint32_t definition);
/* Strings are borrowed for one synchronous visit only. Visits occur outside
 * the metadata lock, from an owned snapshot, preserving order/duplicates. */
typedef void (*raven_powerup_effect_visitor)(void *context,const char *effect,
    const char *bolt,const char *level,const char *usage);
void raven_xml1_powerup_effects_visit(uint32_t definition,
    raven_powerup_effect_visitor visitor,void *context);
void raven_xml1_powerup_effects_visit_shared(uint32_t definition,float radius,
    raven_powerup_effect_visitor visitor,void *context);
uint32_t raven_xml1_powerup_affecter_begin(uint32_t definition);
void raven_xml1_powerup_affecter_attribute(uint32_t definition,uint32_t index,const char *key,const char *value);
uint32_t raven_xml1_powerup_effect_begin(uint32_t definition);
void raven_xml1_powerup_effect_attribute(uint32_t definition,uint32_t index,const char *key,const char *value);
#ifdef __cplusplus
}
#endif
