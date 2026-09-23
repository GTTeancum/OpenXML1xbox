#ifndef RAVEN_SCRIPT_EXTENSIONS_H
#define RAVEN_SCRIPT_EXTENSIONS_H
#include <stdint.h>
/* Registered addresses are allocated guest thunk tokens, never XBE addresses. */
int xml1_script_extension_is_code(uint32_t address);
void (*xml1_script_extension_lookup(uint32_t address))(void);
void xml1_register_script_extensions(uint32_t manager);
uint32_t xml1_script_extension_descriptor(uint32_t manager,uint32_t name);
/* Shared with the private native-event fixture; no host input involved. */
int xml1_script_dispatch_combat_trigger(uint32_t node,uint32_t actor,int32_t tag);
#endif
