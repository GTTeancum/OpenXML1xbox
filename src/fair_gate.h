#pragma once
#include <windows.h>
#include <stdint.h>
/* Zero-initialized FIFO gate. A later caller cannot overtake an assigned
 * ticket. No host input, renderer commands or application state live here. */
typedef struct { volatile LONG next, serving; } xml1_fair_gate;
static inline uint32_t xml1_fair_enter(xml1_fair_gate *gate) {
    uint32_t ticket=(uint32_t)InterlockedIncrement(&gate->next)-1u;
    while((uint32_t)InterlockedCompareExchange(&gate->serving,0,0)!=ticket) Sleep(1);
    return ticket;
}
static inline void xml1_fair_leave(xml1_fair_gate *gate) {
    InterlockedIncrement(&gate->serving);
}
