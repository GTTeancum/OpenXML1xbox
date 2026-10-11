#ifndef XML1_CHARACTER_TALENT_MAP_GUEST_H
#define XML1_CHARACTER_TALENT_MAP_GUEST_H
#include "engine/progression/character_talent_map_owner.h"
uint32_t xml1_character_talent_map_create(uint32_t original);
uint32_t xml1_character_talent_map_resolve(uint32_t original);
int xml1_character_talent_map_contains(uint32_t address);
void xml1_character_talent_map_retire(uint32_t original);
/* Isolated native-lifecycle fixture only; switching while maps are live is
 * rejected. NULL restores production guest allocation. */
int xml1_character_talent_map_fixture_allocator(uint32_t (*allocate)(unsigned));
#endif
