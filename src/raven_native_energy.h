#pragma once
#include "raven_xml1_talent_view.h"
#ifdef __cplusplus
extern "C" {
#endif
int raven_native_energy_parse(uint32_t event,const char *field,const char *value);
/* Explicit XML2 explosion fields; absent fields keep the native record values. */
int raven_native_explosion_parse(uint32_t event,const char *field,const char *value);
int raven_native_explosion_resolve(raven_guest_read read,uint32_t system,uint32_t event,
    uint32_t actor,int16_t *damage,uint8_t *primary,uint8_t *secondary);

/* Private operand of the missing chain-lightning data event. */
void raven_lightning_operand_set(uint32_t event,const char *value);
void raven_lightning_operand_copy(uint32_t destination,uint32_t source);
int raven_lightning_operand_count(raven_guest_read read,uint32_t system,uint32_t event,uint32_t actor);
int raven_native_attack_parse(uint32_t event,const char *value);
int raven_native_projectile_count_parse(uint32_t event,const char *value);
int raven_native_spawn_life_parse(uint32_t event,const char *value);
int raven_native_spawn_life(raven_guest_read read,uint32_t system,uint32_t event,uint32_t actor,float *value);
int raven_native_projectile_count(raven_guest_read read,uint32_t system,uint32_t event,uint32_t actor);
int raven_native_held_parse(uint32_t node,const char *field,const char *value);
int raven_native_held_chain_parse(uint32_t node,const char *action,const char *result);
const char *raven_native_held_chain(uint32_t node);
void raven_native_held_retire(uint32_t node);
int raven_native_held_bound(uint32_t node);
uint64_t raven_native_held_revision(uint32_t node);
int raven_native_held_rate(raven_guest_read read,void *context,uint32_t system,
    uint32_t node,uint32_t actor,int16_t *rate);
int raven_native_attack_maxrange_parse(uint32_t event,const char *value);
int32_t raven_native_attack_maxrange(raven_guest_read read,void *context,uint32_t system,
    uint32_t event,uint32_t actor,int32_t fallback);
int raven_native_attack_range(raven_guest_read read,void *context,uint32_t system,
    uint32_t event,uint32_t actor,int32_t *lower,int32_t *upper);
int raven_native_attack_damage_bound(uint32_t event);
void raven_native_energy_lifetime(uint32_t event,int kind);
void raven_native_energy_copy(uint32_t destination,uint32_t source);
int raven_native_energy_bound(uint32_t event);
int32_t raven_native_energy_resolve(raven_guest_read read,void *context,
    uint32_t system,uint32_t event,uint32_t actor,int32_t fallback);
#ifdef __cplusplus
}
#endif
