#ifndef RAVEN_ACTOR_SCALE_H
#define RAVEN_ACTOR_SCALE_H

/* Missing XML2 timed scaling state. This is independent of guest actor layout;
 * the integration owner must retire it with the actor's generation handle.
 * Merely compiling this core does not install a script or actor-update hook. */
typedef struct raven_actor_scale {
    float requested;
    float rate;
    unsigned active;
    unsigned check_clearance;
} raven_actor_scale;

#ifdef __cplusplus
extern "C" {
#endif
void raven_actor_scale_begin(raven_actor_scale *state, float current_relative,
                            float requested, float seconds, unsigned check_clearance);
/* effective_target includes the actor's current scale affecter and huge state.
 * current_relative is read back from the native actor, not cached by this core:
 * a native clearance rejection must not advance the actual starting size. */
float raven_actor_scale_step(raven_actor_scale *state, float current_relative,
                            float effective_target, float simulation_delta);
#ifdef __cplusplus
}
#endif
#endif
