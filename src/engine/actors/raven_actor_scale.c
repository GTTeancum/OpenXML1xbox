#include "engine/actors/raven_actor_scale.h"

void raven_actor_scale_begin(raven_actor_scale *s, float current,
                            float requested, float seconds, unsigned clearance) {
    /* XML2 CActor:: timed scale (2C8D0) bounds the requested multiplier and
     * transition duration, then stores a signed velocity. It does not start
     * a wall-clock expiry timer or restore the old size after the duration. */
    if (requested < 0.3f) requested = 0.3f;
    if (requested > 2.5f) requested = 2.5f;
    if (seconds < 0.1f) seconds = 0.1f;
    s->requested = requested;
    s->rate = (requested - current) / seconds;
    s->active = 1;
    s->check_clearance = clearance != 0;
}

float raven_actor_scale_step(raven_actor_scale *s, float current,
                            float target, float dt) {
    if (!s->active) return current;
    /* XML2 actor update 42D42..42DD6. The target can change through an affecter;
     * recomputing velocity every frame would turn the native linear transition
     * into an exponential ease and prevent it from ending on schedule. */
    if (s->rate == 0.0f) s->rate = 2.0f * (target - current);
    float next = current + s->rate * dt;
    if ((s->rate <= 0.0f && next <= target) ||
        (s->rate > 0.0f && next >= target)) {
        s->active = 0;
        s->rate = 0.0f;
        next = target;
    }
    return next;
}
