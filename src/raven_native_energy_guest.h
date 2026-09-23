#pragma once
#include <stdint.h>
int xml1_raven_spawn_life_parse(uint32_t event,uint32_t value);
int xml1_raven_spawn_lifetime(uint32_t event,uint32_t spawned,uint32_t source);
int xml1_raven_energy_parse(uint32_t event,uint32_t field,uint32_t value);
int xml1_raven_held_parse(uint32_t node,uint32_t field,uint32_t value);
void xml1_raven_held_update(uint32_t node,uint32_t actor);
float xml1_raven_held_requirement(uint32_t node,uint32_t actor);
void xml1_raven_held_chain_parse(uint32_t table,uint32_t action,uint32_t result);
int xml1_raven_held_input(uint32_t actor,uint32_t input);
uint32_t xml1_raven_held_destination(uint32_t actor,uint32_t input);
void xml1_raven_held_trigger_observe(uint32_t event,uint32_t actor);
int xml1_raven_attack_parse(uint32_t event,uint32_t value);
int xml1_raven_projectile_count_parse(uint32_t event,uint32_t value);
int xml1_raven_projectile_spawn(uint32_t event,uint32_t target);
int xml1_raven_attack_maxrange_parse(uint32_t event,uint32_t value);
int32_t xml1_raven_attack_maxrange(uint32_t event,uint32_t actor,int32_t fallback);
void xml1_raven_attack_range(uint32_t event,uint32_t actor,uint32_t lower,uint32_t upper);
int32_t xml1_raven_energy_cost(uint32_t event,uint32_t actor,int32_t native_cost);
void xml1_raven_energy_observe(uint32_t event,uint32_t caller,uint32_t si,uint32_t di,uint32_t bp);
double xml1_raven_energy_query(uint32_t event,uint32_t actor,double native_cost);
void xml1_raven_energy_gate(uint32_t actor,double available,double required);

int xml1_raven_explosion_parse(uint32_t event,uint32_t field,uint32_t value);
