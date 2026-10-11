#pragma once
#include <stdint.h>

/* Only absent devices are cached. A connected pad is always sampled, including
 * its first disconnect; reconnection is discovered within two seconds. Callers
 * serialize this state with their polling lock. No game input is cached here. */
typedef struct { uint64_t retry_after[4]; } xml1_controller_retry;
static int xml1_controller_probe_due(const xml1_controller_retry *state,unsigned slot,uint64_t now) {
    return slot<4 && now>=state->retry_after[slot];
}
static void xml1_controller_probe_result(xml1_controller_retry *state,unsigned slot,uint64_t now,unsigned result) {
    if(slot<4)state->retry_after[slot]=result==1167u?now+2000:0;
}
