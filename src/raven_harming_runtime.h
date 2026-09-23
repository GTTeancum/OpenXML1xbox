#pragma once
#include "raven_xml2_powerup_view.h"
#include "raven_harming_settings.h"
#ifdef __cplusplus
extern "C" {
#endif
int raven_harming_runtime_definition(uint32_t definition);
int raven_imported_powerup_life_definition(uint32_t definition);
raven_lookup raven_harming_runtime_life(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t definition,uint32_t system,
    uint32_t handle,uint32_t talents,uint32_t null_handle,float *life);
/* Read current definition/settings and evaluate against startup character
 * resources and this active instance's source context. No guest mutation. */
raven_lookup raven_harming_runtime_sample(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t definition,uint32_t system,
    uint32_t handle,uint32_t talents,uint32_t null_handle,double random_unit,
    float *sample,raven_harming_settings *settings);
#ifdef __cplusplus
}
#endif
