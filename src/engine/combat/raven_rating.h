#pragma once
#include "engine/powers/raven_xml2_powerup_view.h"
#ifdef __cplusplus
extern "C" {
#endif
/* Evaluate captured scale modifiers in the active source's current context.
 * This does not edit base stats or cache an actor's learned rank. */
typedef raven_lookup (*raven_rating_scope)(void *context,const char *kind,const char *name,uint32_t record);
/* First spend_damage declaration, not an aggregate. Null endpoints requests
 * only eligibility; initialization resolves endpoints without hit filtering. */
raven_lookup raven_rating_damage_reserve(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t definition,uint32_t system,
    uint32_t handle,uint32_t talents,uint32_t null_handle,uint32_t record,
    raven_rating_scope scope_match,float endpoints[2]);
raven_lookup raven_rating_scale(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t definition,uint32_t system,
    uint32_t handle,uint32_t talents,uint32_t null_handle,const char *attribute,uint32_t record,raven_rating_scope scope_match,float *scale);
raven_lookup raven_rating_energy_shield(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t definition,uint32_t system,
    uint32_t handle,uint32_t talents,uint32_t null_handle,float *factor);
/* Party drop cache: scale affecters with share-role filtering, no hit scope. */
raven_lookup raven_rating_drop_scale(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t definition,uint32_t system,
    uint32_t handle,uint32_t talents,uint32_t null_handle,const char *attribute,float *scale);
/* XML2 query mode 0 adds authored affecters. In particular, Bishop's
 * def_absorb_damage has no affect_type and must not be treated as a scale. */
raven_lookup raven_rating_add(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t definition,uint32_t system,
    uint32_t handle,uint32_t talents,uint32_t null_handle,const char *attribute,uint32_t record,raven_rating_scope scope_match,float *amount);
/* Missing on-kill consumers sum resolved values without an operation filter. */
raven_lookup raven_rating_kill_reward(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t definition,uint32_t system,
    uint32_t handle,uint32_t talents,uint32_t null_handle,const char *attribute,
    uint32_t record,raven_rating_scope scope_match,float *amount);
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif
/* Apply the missing actor-scale consumer's ordered add/multiply affecters to
 * an incoming factor. Retains definition order and active operand context. */
raven_lookup raven_rating_actor_scale(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t definition,uint32_t system,
    uint32_t handle,uint32_t talents,uint32_t null_handle,float *factor);
#ifdef __cplusplus
}
#endif
