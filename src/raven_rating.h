#pragma once
#include "raven_xml2_powerup_view.h"
#ifdef __cplusplus
extern "C" {
#endif
/* Evaluate captured scale modifiers in the active source's current context.
 * This does not edit base stats or cache an actor's learned rank. */
typedef raven_lookup (*raven_rating_damage_scope)(void *context,const char *name,uint32_t record);
raven_lookup raven_rating_scale(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t definition,uint32_t system,
    uint32_t handle,uint32_t talents,uint32_t null_handle,const char *attribute,uint32_t record,raven_rating_damage_scope scope_match,float *scale);
/* XML2 query mode 0 adds authored affecters. In particular, Bishop's
 * def_absorb_damage has no affect_type and must not be treated as a scale. */
raven_lookup raven_rating_add(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t definition,uint32_t system,
    uint32_t handle,uint32_t talents,uint32_t null_handle,const char *attribute,uint32_t record,raven_rating_damage_scope scope_match,float *amount);
#ifdef __cplusplus
}
#endif
