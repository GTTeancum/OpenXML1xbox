#pragma once
/* Interrupt callbacks can run over a kernel thread which has no NXDK TLS.
   At DISPATCH_LEVEL or above, use a preallocated bank; ordinary guest threads
   retain their own native TLS bank. The Xbox has one processor. */
typedef struct PortRegisterBank {
    uint32_t words[16];
    double fp[8];
    uint64_t mm[8];
    uint8_t xmm[8][16] __attribute__((aligned(16)));
} PortRegisterBank;
extern RECOMP_TLS PortRegisterBank port_thread_register_bank;
extern PortRegisterBank *volatile port_interrupt_register_bank;
static inline PortRegisterBank *port_acquire_register_bank(void) {
    PortRegisterBank *p=port_interrupt_register_bank;
    return p?p:&port_thread_register_bank;
}
static inline PortRegisterBank *port_registers(void) { return port_acquire_register_bank(); }
