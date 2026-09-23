#pragma once
#include "raven_xml1_talent_view.h"
#ifdef __cplusplus
extern "C" {
#endif
void raven_xml1_harming_life(uint32_t instance);
int raven_xml1_powerup_enemy_query(uint32_t instance,uint32_t query,
    uint32_t actor,uint32_t team);
void raven_xml1_combat_damage_scale(uint32_t actor,uint32_t record,uint32_t address);
void raven_xml1_combat_defense_damage_scale(uint32_t actor,uint32_t record,uint32_t address);
/* XML2 mode-0 energy absorption on the final incoming XML1 hit record.
 * Runs before XML1's own health/hit-response method, using its health setter. */
void raven_xml1_combat_absorb_damage(uint32_t actor,uint32_t record);
/* Consume imported XML2 per-type resistance on XML1's completed incoming hit.
 * Source XBE 37E30/45F42 applies the cached percentage before health delivery. */
void raven_xml1_combat_resistance(uint32_t actor,uint32_t record);
void raven_xml1_combat_rating(uint32_t actor,uint32_t record,uint32_t rating_address,int defense);
void raven_xml1_effect_probe_tick(void);
void raven_xml1_powerup_node_begin(uint32_t instance);
void raven_xml1_powerup_effects_begin(uint32_t instance);
void raven_xml1_powerup_runtime_retire(uint32_t owner);
/* Native outgoing-hit callback: borrowed record and generation-checked owner.
 * XML1's own combat manager delivers separate elemental hits. */
raven_lookup raven_xml1_add_attack(uint32_t instance,uint32_t target,uint32_t record);
void raven_xml1_powerup_capture_effects(uint32_t definition,uint32_t node);
/* Borrow a package-owned native resource; does not load or add references. */
raven_lookup raven_xml1_guest_effect_resource(const char *path,uint32_t scope,uint32_t *handle);
/* Launch a native owned group on an actor bone. Duration uses game seconds.
 * The returned group is released through XML1, never an incidental launch EAX. */
raven_lookup raven_xml1_guest_effect_group(uint32_t target,uint32_t resource,
    const char *bolt,uint32_t level,float duration,uint32_t *group);
/* Repeat into the same live group; generation validation rejects stale owners. */
raven_lookup raven_xml1_guest_effect_group_emit(uint32_t target,uint32_t resource,
    const char *bolt,uint32_t level,uint32_t group);
/* Native LoopTime + native RNG * RandLoopTime, with native resource validation. */
float raven_xml1_guest_effect_interval(uint32_t resource);
void raven_xml1_guest_effect_group_release(uint32_t group);
void raven_xml1_trace_effect_registration(uint32_t path,uint32_t selector);
/* Native XML1 handle/type queries. Context is unused. The actor query is
 * the base actor cast only; callers must additionally establish the imported
 * handler's character/context eligibility before evaluating talent operands. */
int raven_xml1_guest_entity_valid(void *context,uint32_t handle);
raven_lookup raven_xml1_guest_entity_actor(void *context,uint32_t handle,uint32_t *actor);
/* Resolve actor identity before reading XML1's currently selected fight node.
 * A node pointer is borrowed and must not be dereferenced after callbacks. */
raven_lookup raven_xml1_guest_actor_move(uint32_t handle,uint32_t *node);
/* XML1 character-context adapter: native actor cast followed by its own
 * character component at +2D8 (stats begin at component+4). */
raven_lookup raven_xml1_guest_talent_actor(void *context,uint32_t handle,uint32_t *actor);
float raven_xml1_guest_game_time(void);
/* Consumes exactly one native XML1 RNG step; no independent seed/state. */
double raven_xml1_guest_random_unit(void);
/* Construct XML1's 100-byte hit record through its native constructor.
 * type/flags are already translated XML1 values, not XML2 enum values.
 * No delivery occurs here. Destination must be writable guest memory. */
raven_lookup raven_xml1_guest_damage_record(uint32_t record,uint32_t source,
    int16_t amount,uint32_t type,uint32_t flags);
/* Resolve the current target handle immediately before synchronous delivery.
 * FOUND means its native damage method ran, not that health necessarily fell
 * (native death/immunity/resistance rules remain authoritative). */
raven_lookup raven_xml1_guest_harming_deliver(uint32_t target,uint32_t record);
/* Dedicated harming callback timing; +24 is native callback scratch (also
 * used by bleed), while +34 belongs to native propagation. These routines
 * must only be installed for harming, not layered onto another think handler.
 * MISSING means retired/not due/expired; outputs remain unchanged then. */
raven_lookup raven_xml1_harming_begin(uint32_t system,uint32_t instance,uint32_t *handle);
/* Callback body; registration and title skirmish/null-handle lookup belong
 * to the lifecycle adapter. No RNG consumption when this slot is not due. */
raven_lookup raven_xml1_harming_think(uint32_t system,uint32_t instance,
    uint32_t talent_system,uint32_t null_handle,int skirmish);
raven_lookup raven_xml1_harming_due(uint32_t system,uint32_t handle,float *now);
/* Convert a sampled total into this due tick's native integer damage.
 * Reads the active slot's native life/end time, clips the final interval,
 * and leaves output untouched for not-due/expired/retired/invalid input.
 * Does not deliver or reschedule; retain this handle across delivery. */
raven_lookup raven_xml1_harming_tick_amount(uint32_t system,uint32_t handle,
    float sampled_damage,uint8_t attacks_per_second,int16_t *amount);
/* Execute a prepared harming tick through XML1 and revalidate before
 * rescheduling. Type/flags must already be translated to XML1;
 * definition_flags are the parsed harming settings (trait scale in bit1).
 * sampled_damage is evaluated for this actor, not a cached definition value. */
raven_lookup raven_xml1_harming_apply_tick(uint32_t system,uint32_t handle,
    float sampled_damage,uint8_t attacks_per_second,uint32_t type,
    uint32_t flags,uint8_t definition_flags,int skirmish);
raven_lookup raven_xml1_harming_reschedule(uint32_t system,uint32_t handle,uint8_t attacks_per_second);
#ifdef __cplusplus
}
#endif
