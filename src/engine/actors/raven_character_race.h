#ifndef RAVEN_CHARACTER_RACE_H
#define RAVEN_CHARACTER_RACE_H
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
/* Authored CharacterDef metadata. Reset on construction and final destruction;
 * never attached to an actor handle or serialized into campaign saves. */
void raven_character_race_reset(uint32_t definition);
int raven_character_race_add(uint32_t definition,const char *name);
uint16_t raven_character_race_mask(uint32_t definition);
void xml1_character_race_capture(uint32_t definition,uint32_t node);
int xml1_character_race_fixture(uint32_t pool);
#ifdef __cplusplus
}
#endif
#endif
