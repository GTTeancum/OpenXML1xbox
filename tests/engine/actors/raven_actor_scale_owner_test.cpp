#include "engine/actors/raven_actor_scale_owner.h"
#include <cstdio>
#include <cmath>

static int failed;
static void check(bool ok,const char *name){if(!ok){std::fprintf(stderr,"FAIL scale ownership: %s\n",name);++failed;}}
int main() {
    const uint32_t a=0x401000,b=0x402000;
    raven_actor_scale_snapshot initial{},changed{},other{};
    check(!raven_actor_scale_owner_read(a,1,&initial),"stock actor has no added state");
    raven_actor_scale_owner_begin(a,1,1,2,2,0);
    raven_actor_scale_owner_begin(b,2,1,0.5f,1,1);
    check(raven_actor_scale_owner_read(a,1,&initial)&&initial.scale.rate==0.5f,"growth actor");
    check(raven_actor_scale_owner_read(b,2,&other)&&other.scale.rate==-0.5f&&other.scale.check_clearance,"independent shrinking actor");
    check(!raven_actor_scale_owner_read(a,3,&changed),"stale generation cannot read");
    changed=initial;changed.scale.active=0;
    check(raven_actor_scale_owner_commit(a,1,&changed),"valid completion accepted");
    check(!raven_actor_scale_owner_commit(a,1,&initial),"older update cannot undo completion");
    check(raven_actor_scale_owner_read(a,1,&changed)&&!changed.scale.active&&changed.scale.requested==2,"completed multiplier retained");
    raven_actor_scale_owner_begin(a,1,1.5f,0.5f,1,0);
    check(!raven_actor_scale_owner_commit(a,1,&changed),"callback retarget invalidates previous snapshot");
    raven_actor_scale_owner_read(a,1,&changed);
    raven_actor_scale_owner_reset(a);
    check(!raven_actor_scale_owner_commit(a,1,&changed)&&!raven_actor_scale_owner_read(a,1,&initial),"retired actor cannot be revived by update");
    raven_actor_scale_owner_begin(a,3,1,2,1,0);
    check(!raven_actor_scale_owner_commit(a,1,&changed),"same address with new generation rejects old update");
    raven_actor_scale_owner_read(a,3,&changed);
    raven_actor_scale_owner_reset(a);
    raven_actor_scale_owner_begin(a,3,1,1.5f,1,0);
    check(!raven_actor_scale_owner_commit(a,3,&changed),"reset and same handle reuse still rejects old snapshot");
    check(raven_actor_scale_owner_read(b,2,&other)&&other.scale.active,"other actor survives retirement");
    raven_actor_scale_owner_read(b,2,&initial);
    raven_actor_scale_owner_rate(b,2,-3.0f);
    check(raven_actor_scale_owner_read(b,2,&changed)&&changed.scale.rate==-3.0f&&
          changed.scale.requested==other.scale.requested&&changed.scale.active&&
          changed.scale.check_clearance,"powerup removal rate preserves transition target and clearance");
    check(!raven_actor_scale_owner_commit(b,2,&initial),"powerup rate change invalidates in-flight tick");
    raven_actor_scale_owner_reset(a);
    raven_actor_scale_owner_rate(a,8,2.0f);
    check(raven_actor_scale_owner_read(a,8,&changed)&&changed.scale.rate==2.0f&&
          changed.scale.requested==1.0f&&!changed.scale.active&&!changed.scale.check_clearance,
          "powerup activation alone does not start an unrequested transition");
    raven_actor_scale_owner_rate(a,9,-1.0f);
    check(!raven_actor_scale_owner_read(a,8,&initial)&&
          raven_actor_scale_owner_read(a,9,&changed)&&changed.scale.requested==1.0f,
          "replacement actor does not inherit old powerup state");
    raven_actor_scale_owner_read(b,2,&initial);
    raven_actor_scale_owner_invalidate(b,2,0);
    check(raven_actor_scale_owner_read(b,2,&changed)&&changed.scale.active&&
          changed.scale.rate==initial.scale.rate&&changed.scale.requested==initial.scale.requested&&
          changed.scale.check_clearance==initial.scale.check_clearance,
          "affecter application preserves authored rate and requested multiplier");
    check(!raven_actor_scale_owner_commit(b,2,&initial),"affecter invalidation rejects stale update");
    raven_actor_scale_owner_invalidate(b,2,1);
    check(raven_actor_scale_owner_read(b,2,&changed)&&changed.scale.active&&changed.scale.rate==0&&
          changed.scale.requested==initial.scale.requested,"affecter removal clears velocity only");
    float restored=raven_actor_scale_step(&changed.scale,2,changed.scale.requested,0.25f);
    check(restored==1.25f&&changed.scale.active,"removal computes return velocity from actual size");
    raven_actor_scale_owner_reset(a);
    raven_actor_scale_owner_invalidate(a,10,0);
    check(raven_actor_scale_owner_read(a,10,&changed)&&changed.scale.active&&changed.scale.requested==1&&
          changed.scale.rate==0&&!changed.scale.check_clearance,"first affecter uses native actor defaults");
    raven_actor_scale_owner_reset(a);raven_actor_scale_owner_reset(b);
    check(!raven_actor_scale_owner_read(a,3,&changed)&&!raven_actor_scale_owner_read(b,2,&other),"all owned state retired");
    if(!failed)std::puts("PASS actor scale ownership: stock exclusion, generations, retargeting, stale commits, reset/reuse and independent actors");
    return failed?1:0;
}
