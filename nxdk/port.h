#pragma once
#include <stdint.h>
#include <stddef.h>
void port_log(const char *format, ...);
void port_screen(const char *message);
int port_load_xbe(const char *path);
void port_init_thread(uint32_t stack_bytes);
void port_cleanup_thread(void);
int port_selftest(void);
void port_patch_imports(void);
void *port_guest_pointer(uint32_t address);
extern uint8_t port_xbe_header[65536];
extern uint32_t port_entry;
extern uint32_t port_last_call;
void port_init_guest_tls(uint32_t size);
void *port_native_thread(uint32_t address);
uint32_t port_call_guest(uint32_t address,const uint32_t *args,unsigned count);
void port_init_callbacks(void);
uint32_t port_call_interrupt(uint32_t address,const uint32_t *args,unsigned count);
