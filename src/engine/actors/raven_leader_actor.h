#pragma once
#include <stdint.h>
/* Reads a native IEntityDef and CharacterDef fallback. Does not attach a power
 * or change XML1's leader flag. Returns1 selected,0 not a leader,-1 bad name. */
int xml1_leader_actor_selection(uint32_t actor,uint32_t properties,int32_t difficulty,uint8_t *selection);
int xml1_leader_actor_fixture(uint32_t pool);
void xml1_leader_actor_loaded(uint32_t actor,uint32_t properties);
void xml1_leader_actor_restored(uint32_t actor,uint32_t native_record);
