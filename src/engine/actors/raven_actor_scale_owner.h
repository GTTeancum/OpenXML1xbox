#ifndef RAVEN_ACTOR_SCALE_OWNER_H
#define RAVEN_ACTOR_SCALE_OWNER_H
#include <stdint.h>
#include "engine/actors/raven_actor_scale.h"
#ifdef __cplusplus
extern "C" {
#endif
typedef struct raven_actor_scale_snapshot {
    raven_actor_scale scale;
    uint64_t revision;
} raven_actor_scale_snapshot;
void raven_actor_scale_owner_begin(uint32_t actor,uint32_t generation,
    float current,float requested,float seconds,unsigned clearance);
int raven_actor_scale_owner_read(uint32_t actor,uint32_t generation,
    raven_actor_scale_snapshot *snapshot);
/* Commit before invoking native callbacks. A stale update must not overwrite
 * a retargeted transition or an actor reusing the same guest address. */
int raven_actor_scale_owner_commit(uint32_t actor,uint32_t generation,
    raven_actor_scale_snapshot *snapshot);
/* CPUScaleActor activation/deactivation changes velocity only. It must not
 * restart a transition or discard the requested multiplier/clearance state. */
void raven_actor_scale_owner_rate(uint32_t actor,uint32_t generation,float rate);
/* A scale_factor affecter changes the effective target. Removal clears the
 * old rate so the simulation update can choose a rate toward the new target. */
void raven_actor_scale_owner_invalidate(uint32_t actor,uint32_t generation,int removing);
void raven_actor_scale_owner_reset(uint32_t actor);
void xml1_actor_scale_tick(uint32_t actor,float simulation_delta);
#ifdef __cplusplus
}
#endif
#endif
