#pragma once
#include <stdint.h>
#include "engine/progression/talent_registry_layout.h"
int xml1_talent_registry_contains(uint32_t pointer);
void xml1_talent_registry_begin(uint32_t pointer);
void xml1_talent_registry_end(void);
void xml1_talent_registry_clear_bits(uint32_t pointer,unsigned kind);
unsigned xml1_talent_registry_id_predecessor(uint32_t manager);
