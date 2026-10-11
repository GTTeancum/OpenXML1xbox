#pragma once
#include "engine/progression/raven_xml1_talent_view.h"
#ifdef __cplusplus
extern "C" {
#endif
/* XML1 29C00: a handle identifies one generation of a 64-byte active slot.
 * Supply the CActivePowerupSystem base, not its pool at base+4. No guest
 * mutation or retained host pointer; resolve again after native callbacks. */
raven_lookup raven_xml1_active_powerup(raven_guest_read read,void *context,
    uint32_t system,uint32_t handle,uint32_t *address);
/* Lifecycle callbacks receive an instance pointer, not a handle. Capture its
 * current generation BEFORE calling native effects, then re-resolve that
 * handle afterward. Never reacquire identity from the old pointer afterward:
 * the same slot may already belong to an unrelated effect. */
raven_lookup raven_xml1_active_powerup_identity(raven_guest_read read,void *context,
    uint32_t system,uint32_t address,uint32_t *handle);
/* Snapshot an actor's native linked list before callbacks mutate it. Output is
 * committed only for a valid complete list; caller revalidates each generation
 * before use. Empty lists succeed with count zero. Capacity is the native 128. */
raven_lookup raven_xml1_actor_powerups(raven_guest_read read,void *context,
    uint32_t system,uint32_t actor,uint32_t handles[128],unsigned *count);
#ifdef __cplusplus
}
#endif
