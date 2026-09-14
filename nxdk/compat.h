#pragma once
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
/* Stop explicitly at an unsupported path. Never make it appear successful. */
_Noreturn void nxdk_port_fail(const char *reason, const char *file, int line);
void port_audio_creation_result(uint32_t result,uint32_t handle);
#define _exit(code) nxdk_port_fail("guest diagnostic exit", __FILE__, __LINE__)
#include "../src/diagnostics.h"
