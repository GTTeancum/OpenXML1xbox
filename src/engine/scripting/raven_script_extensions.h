#ifndef RAVEN_SCRIPT_EXTENSIONS_H
#define RAVEN_SCRIPT_EXTENSIONS_H
#include <stdint.h>
int xml1_missing_gameplay_command(uint32_t token);
/* Registered addresses are allocated guest thunk tokens, never XBE addresses. */
int xml1_script_extension_is_code(uint32_t address);
void (*xml1_script_extension_lookup(uint32_t address))(void);
void xml1_register_script_extensions(uint32_t manager);
uint32_t xml1_script_extension_descriptor(uint32_t manager,uint32_t name);
/* Shared with the private native-event fixture; no host input involved. */
int xml1_script_dispatch_combat_trigger(uint32_t node,uint32_t actor,int32_t tag);
int xml1_script_action_silent(uint32_t target);
int xml1_script_take_silent(uint32_t target);
uint32_t xml1_script_silent_schedule(uint32_t target,uint32_t original);
void xml1_recall_tick(uint32_t game);
void xml1_recall_cancel(void);
void xml1_recall_arrive(uint32_t map);
void xml1_auto_equip_pickup(uint32_t inventory_record);
int xml1_transform_power_name(uint32_t actor,unsigned action,char output[20]);
#endif
