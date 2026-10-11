#include "engine/actors/raven_actor_scale.h"
#include <math.h>
#include <stdio.h>

static int failed;
static void check(int ok, const char *name) {
    if (!ok) { fprintf(stderr, "FAIL timed actor scale: %s\n", name); ++failed; }
}
static int near(float a, float b) { return fabsf(a-b) < 0.00001f; }
int main(void) {
    raven_actor_scale s = {0};
    raven_actor_scale_begin(&s, 1, 2, 2, 0);
    float value = 1;
    for (int i=0;i<8;++i) value = raven_actor_scale_step(&s,value,s.requested,0.25f);
    check(near(value,2) && !s.active, "growth reaches target at simulation duration");
    check(near(raven_actor_scale_step(&s,value,1,30),2), "completion holds size, no timed reversion");
    raven_actor_scale_begin(&s,2,0.5f,1,1);
    value=raven_actor_scale_step(&s,2,0.5f,0.25f);
    check(near(value,1.625f) && s.active && s.check_clearance, "shrinking and clearance request");
    value=raven_actor_scale_step(&s,value,0.5f,4);
    check(near(value,0.5f) && !s.active, "long frame stops at target");
    raven_actor_scale_begin(&s,1,100,0,0);
    check(near(s.requested,2.5f) && near(s.rate,15), "upper bound and minimum duration");
    raven_actor_scale_begin(&s,1,-4,-2,0);
    check(near(s.requested,0.3f) && near(s.rate,-7), "lower bound and negative duration");
    raven_actor_scale_begin(&s,1,2,2,0);
    check(near(raven_actor_scale_step(&s,1,2,0),1) && s.active, "paused simulation does not move");
    value=raven_actor_scale_step(&s,1,2,0.5f);
    raven_actor_scale_begin(&s,value,0.5f,1,0);
    check(near(raven_actor_scale_step(&s,value,0.5f,1),0.5f) && !s.active,
          "new request starts from actual intermediate scale");
    raven_actor_scale_begin(&s,1,1,1,0);
    check(near(raven_actor_scale_step(&s,1,1.5f,0.25f),1.25f) && s.active,
          "zero initial velocity responds to effective scale affecter");
    raven_actor_scale_begin(&s,1,2,2,1);
    float rejected = raven_actor_scale_step(&s,1,2,0.25f);
    check(near(raven_actor_scale_step(&s,1,2,0.25f),rejected),
          "failed native clearance uses unchanged actual scale");
    raven_actor_scale_begin(&s,1,1,1,0);
    check(near(raven_actor_scale_step(&s,1,1,0),1) && !s.active,
          "already at target completes without movement");
    if(!failed) puts("PASS timed actor scale core: simulation time, growth/shrink, bounds, interruption, affecter target, clearance readback; guest integration pending");
    return failed ? 1 : 0;
}
