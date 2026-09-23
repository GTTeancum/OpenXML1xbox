#pragma once
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
int raven_power_binding_name(const char *character,unsigned action,char output[20]);
void xml1_raven_power_lookup(uint32_t manager,uint32_t chain,uint32_t action,uint32_t actor);
void xml1_raven_power_hud_lookup(uint32_t manager,uint32_t slot,uint32_t actor);
int raven_power_icon_automatic(const char *texture);
void xml1_raven_power_icon_grid(uint32_t style);
void xml1_raven_move_search_trace(uint32_t site,uint32_t slot,uint32_t container,uint32_t candidate,uint32_t value);
#ifdef __cplusplus
}
#endif
