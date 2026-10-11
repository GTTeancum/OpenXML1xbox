#include "engine/actors/raven_actor_scale_clearance.h"
#include <math.h>
#include <string.h>

static float length(const float v[3]) {
    return sqrtf(v[0]*v[0]+v[1]*v[1]+v[2]*v[2]);
}
int raven_actor_scale_clearance(const raven_scale_clearance_geometry *g,
                               const raven_scale_clearance_callbacks *cb) {
    /* XML2 2D6D0: shrinking/equal size bypasses scene queries entirely. */
    if(g->requested<=g->current)return 1;
    float unit_upper[3]={g->dimensions[0]*0.5f,g->dimensions[1]*0.5f,g->dimensions[2]};
    float unit_lower[3]={-unit_upper[0],-unit_upper[1],0};
    float positive[3],negative[3],lower[3],upper[3],position[3];
    memcpy(position,g->position,sizeof(position));
    for(unsigned i=0;i<3;++i) {
        positive[i]=unit_upper[i]*g->requested-g->upper[i];
        negative[i]=unit_lower[i]*g->requested-g->lower[i];
        lower[i]=unit_lower[i]*g->current;
        upper[i]=unit_upper[i]*g->current;
    }
    float direction[3]={0,0,positive[2]+1.0f},displacement[3];
    if(cb->sweep(cb->context,position,direction,displacement))return 0;
    if(negative[2]!=0) {
        position[2]+=negative[2];cb->position(cb->context,position);
    }
    /* Original clearance grows one temporary bounds axis at a time. Actual
     * final-size geometry is a separate operation after this returns success.
     * Restore the original bounds on both acceptance and side rejection. */
    upper[2]*=g->requested;lower[2]*=g->requested;
    cb->bounds(cb->context,lower,upper);
    int accepted=1;
    for(unsigned axis=0;axis<2;++axis) {
        float back=fabsf(negative[axis]),span=back+positive[axis];
        float distance=span+2.0f,forward_distance=distance,back_distance=distance;
        for(unsigned i=0;i<3;++i)direction[i]=distance*g->basis[axis][i];
        if(cb->sweep(cb->context,position,direction,displacement))forward_distance=length(displacement);
        for(unsigned i=0;i<3;++i)direction[i]=-distance*g->basis[axis][i];
        if(cb->sweep(cb->context,position,direction,displacement))back_distance=length(displacement);
        if(span+2.0f>forward_distance+back_distance) {
            cb->position(cb->context,g->position);accepted=0;break;
        }
        float shift=0;
        if(forward_distance<positive[axis])shift=forward_distance-positive[axis]-1.0f;
        else if(back_distance<back)shift=back-back_distance+1.0f;
        if(shift!=0) {
            for(unsigned i=0;i<3;++i)position[i]+=shift*g->basis[axis][i];
            cb->position(cb->context,position);
        }
        lower[axis]*=g->requested;upper[axis]*=g->requested;
        cb->bounds(cb->context,lower,upper);
    }
    cb->bounds(cb->context,g->lower,g->upper);
    return accepted;
}
