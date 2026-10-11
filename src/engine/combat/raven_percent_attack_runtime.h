#pragma once
#include "engine/powers/raven_xml2_powerup_view.h"
#ifdef __cplusplus
extern "C" {
#endif
/* 0 unrelated, 1 outgoing-hit mode, 2 self-only activation. */
int raven_percent_attack_mode(uint32_t definition);
raven_lookup raven_percent_attack_sample(raven_guest_read,raven_handle_valid,
    raven_handle_actor,void*,uint32_t definition,uint32_t system,uint32_t handle,
    uint32_t talents,uint32_t null_handle,float* chance,float* percent);
raven_lookup raven_xml1_percent_attack(uint32_t instance,uint32_t target,
    uint32_t record,int activating);
int raven_xml1_percent_attack_fixture(uint32_t instance,uint32_t actor,uint32_t scratch);
void (*raven_xml1_percent_attack_fixture_lookup(uint32_t address))(void);
#ifdef __cplusplus
}
#endif
