#pragma once
#include <stdint.h>
void raven_harming_install_callbacks(uint32_t definition);
int raven_harming_callback_is_code(uint32_t address);
void (*raven_harming_callback_lookup(uint32_t address))(void);
void raven_harming_callback_test_storage(uint32_t address);
