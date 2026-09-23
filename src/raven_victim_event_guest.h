#pragma once
#include <stdint.h>
int raven_secondary_victim_attribute(uint32_t event,const char *key,const char *value);
void raven_secondary_victim_dispatch(uint32_t record,uint32_t target_handle);
void raven_projectile_victim_store(uint32_t projectile,uint32_t record);
void raven_projectile_victim_restore(uint32_t projectile,uint32_t record);
void raven_projectile_victim_retire(uint32_t projectile);
void raven_projectile_death_parse(uint32_t projectile,uint32_t attributes);
void raven_projectile_death_dispatch(uint32_t projectile);
int raven_projectile_death_position(uint32_t event,float position[3]);
void raven_spawn_harm_context(uint32_t spawned,uint32_t source,uint32_t record);
void raven_harm_pulse_parse(uint32_t actor,uint32_t attributes);
void raven_harm_pulse_retire(uint32_t actor);
int raven_harm_pulse_is_code(uint32_t address);
void (*raven_harm_pulse_lookup(uint32_t address))(void);

int raven_harm_pulse_accept_zero(uint32_t record);

void raven_projectile_explosion_victim_store(uint32_t projectile,uint32_t record);
void raven_projectile_explosion_victim_restore(uint32_t projectile,uint32_t record);

uint32_t raven_projectile_explosion_scope(uint32_t record);
void raven_projectile_explosion_native_store(uint32_t projectile,uint32_t record);

void raven_projectile_fire_event(uint32_t event,uint32_t actor,uint32_t record);
