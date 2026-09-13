#pragma once
#include <stdint.h>
#include "xinput_xbox.h"
typedef void (*xml1_guest_function)(void);
xml1_guest_function xml1_input_lookup(uint32_t va);
/* Accepted only in XML1_TEST_PAD mode, entirely inside this process. */
int xml1_input_test_state(unsigned port, int connected, const XBOX_GAMEPAD *state);
