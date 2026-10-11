#pragma once
#include <stdint.h>
#include "engine/progression/raven_xml1_talent_view.h"
#ifdef __cplusplus
extern "C" {
#endif
int raven_power_binding_name(const char *character,unsigned action,char output[20]);
int raven_power_rotate_actor(raven_guest_read read,void *context,uint32_t system,
                            uint32_t actor,unsigned slot);
int xml1_raven_power_rotate_input(uint32_t actor,unsigned port,uint32_t held,uint32_t pressed);
void xml1_raven_power_lookup(uint32_t manager,uint32_t chain,uint32_t action,uint32_t actor);
void xml1_raven_power_hud_lookup(uint32_t manager,uint32_t slot,uint32_t actor);
int raven_power_icon_automatic(const char *texture);
void xml1_raven_power_icon_grid(uint32_t style);
int raven_talent_icon_automatic(const char *talent);
void xml1_raven_talent_icon_grid(uint32_t menu,uint32_t row);
void xml1_raven_move_search_trace(uint32_t site,uint32_t slot,uint32_t container,uint32_t candidate,uint32_t value);
#ifdef __cplusplus
}
#endif
