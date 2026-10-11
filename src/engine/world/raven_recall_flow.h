#ifndef RAVEN_RECALL_FLOW_H
#define RAVEN_RECALL_FLOW_H
#include <stddef.h>
#include <string.h>

/* Decision layer for XML2 7C9E0 and ADE80. No guest addresses or borrowed
 * campaign state are retained. The caller owns destination storage, records
 * departure position before travel, and invokes XML1's actual load interface.
 * This does not implement loading, portal creation or campaign persistence. */
enum raven_recall_action { RAVEN_RECALL_NONE, RAVEN_RECALL_DEPART, RAVEN_RECALL_RETURN };
enum raven_portal_request { RAVEN_PORTAL_DENIED, RAVEN_PORTAL_RETURN, RAVEN_PORTAL_SPAWN };
static int raven_recall_cooldown_step(float *remaining,float simulation_delta) {
    /* XML2 7DB99..7DC2C: decrement by the game's simulation delta, clamp
     * at zero, and notify only the positive-to-zero transition. The native
     * caller supplies pause/scaling policy; never substitute a wall clock. */
    if(!remaining||!(simulation_delta>=0.0f))return 0;
    float before=*remaining,next=before-simulation_delta;
    *remaining=next>0.0f?next:0.0f;
    return before>0.0f&&*remaining==0.0f;
}
static int raven_recall_equal(const char *a,const char *b) {
    if(!a||!b)return 0;
    for(;;++a,++b) {
        unsigned char x=(unsigned char)*a,y=(unsigned char)*b;
        if(x>='A'&&x<='Z')x+=32;
        if(y>='A'&&y<='Z')y+=32;
        if(x!=y)return 0;
        if(!x)return 1;
    }
}
static enum raven_recall_action raven_recall_plan(const char *current,
    const char *town,const char *retained,int actor_available) {
    if(!town||!*town)return RAVEN_RECALL_NONE;
    if(current&&raven_recall_equal(current,town)&&retained&&*retained) {
        /* 7CA70..7CA72 exits on the sentinel even with an available actor.
         * Falling through would overwrite the return point with the hub. */
        return raven_recall_equal(retained,"none")?
            RAVEN_RECALL_NONE:RAVEN_RECALL_RETURN;
    }
    return actor_available?RAVEN_RECALL_DEPART:RAVEN_RECALL_NONE;
}
static enum raven_portal_request raven_recall_portal_request(const char *current,
    const char *town,int enabled,float cooldown,int eligible_actor) {
    /* XML2 spawnblinkportal2022D0 first dispatches recall from the hub,
     * before checking enabled/cooldown. Outside it, creation requires an
     * eligible live party actor. This gate does NOT belong in recallZone:
     * direct scripted travel7C9E0 has no enabled or cooldown condition. */
    if(current&&town&&*town&&raven_recall_equal(current,town))
        return RAVEN_PORTAL_RETURN;
    if(!enabled||!(cooldown<=0.0f)||!eligible_actor)return RAVEN_PORTAL_DENIED;
    return RAVEN_PORTAL_SPAWN;
}
static unsigned char raven_recall_zone_group(const char *name) {
    /* Retail compares byte3 directly. Safely treat shorter mod names as an
     * empty group instead of reading beyond their string object. */
    return name&&strlen(name)>3?(unsigned char)name[3]:0;
}
static int raven_recall_portal_query(const char *current,const char *town,
    const char *retained,int *clear_retained) {
    *clear_retained=0;
    if(raven_recall_zone_group(current)!=raven_recall_zone_group(retained)) {
        *clear_retained=1;return 0;
    }
    /* ADEE9..ADF37's two routes both reject the literal "none" (4945D0);
     * the town match does not limit the final positive result to the hub. */
    return town&&*town&&retained&&*retained&&!raven_recall_equal(retained,"none");
}
#endif
