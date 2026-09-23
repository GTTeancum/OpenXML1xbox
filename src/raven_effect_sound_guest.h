#pragma once
#include <stdint.h>
int raven_effect_sound_construct(uint32_t event,uint32_t name);
int raven_effect_sound_is_code(uint32_t address);
void (*raven_effect_sound_lookup(uint32_t address))(void);
