#pragma once
#include <windows.h>
#include <stdint.h>
#pragma comment(lib, "Synchronization.lib")
/* Zero-initialized FIFO gate. A later caller cannot overtake an assigned
 * ticket. No host input, renderer commands or application state live here. */
typedef struct { volatile LONG next, serving; } xml1_fair_gate;
static inline uint32_t xml1_fair_enter(xml1_fair_gate *gate) {
    uint32_t ticket=(uint32_t)InterlockedIncrement(&gate->next)-1u;
    for (;;) {
        LONG observed=InterlockedCompareExchange(&gate->serving,0,0);
        if ((uint32_t)observed==ticket) break;
        /* Compare-and-wait closes the release-before-wait race. Wake all:
         * Windows may otherwise wake a ticket that cannot enter yet. */
        WaitOnAddress(&gate->serving,&observed,sizeof(observed),INFINITE);
    }
    return ticket;
}
static inline void xml1_fair_leave(xml1_fair_gate *gate) {
    InterlockedIncrement(&gate->serving);
    WakeByAddressAll((void *)&gate->serving);
}
