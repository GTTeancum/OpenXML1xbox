#pragma once
#include "engine/powers/raven_xml2_powerup_view.h"
#ifdef __cplusplus
extern "C" {
#endif
typedef struct raven_absorb_values {
    float chance,percentage;
    int sponsor,energy,inflicted;
    char beam[256];
} raven_absorb_values;
int raven_absorb_mode(uint32_t definition);
raven_lookup raven_absorb_beam_path(uint32_t definition,char* path,size_t capacity);
void raven_xml1_absorb_load_resource(uint32_t definition,uint32_t scope);
int raven_xml1_absorb_fixture(uint32_t instance,uint32_t actor,uint32_t scratch);
void (*raven_xml1_absorb_fixture_lookup(uint32_t address))(void);
raven_lookup raven_xml1_absorb(uint32_t instance,uint32_t other,uint32_t record,int inflicted);
/* Input actors must already be resolved from current generation handles. */
raven_lookup raven_absorb_sample(raven_guest_read,void*,uint32_t definition,
    uint32_t talents,uint32_t holder_actor,uint32_t source_actor,raven_absorb_values*);
#ifdef __cplusplus
}
#endif
