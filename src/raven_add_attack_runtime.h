#pragma once
#include "raven_xml2_powerup_view.h"
#ifdef __cplusplus
extern "C" {
#endif
int raven_add_attack_definition(uint32_t definition);
raven_lookup raven_add_attack_sample(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t definition,uint32_t system,
    uint32_t handle,uint32_t talents,uint32_t null_handle,double percent_random,
    double flat_random,float *percentage,int16_t *flat,int *mirror);
#ifdef __cplusplus
}
#endif
