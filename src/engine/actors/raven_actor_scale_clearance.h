#ifndef RAVEN_ACTOR_SCALE_CLEARANCE_H
#define RAVEN_ACTOR_SCALE_CLEARANCE_H
/* Geometry supplied by the guest adapter. Basis contains normalized actor
 * forward and its horizontal perpendicular, from the native direction getter.
 * Callbacks must operate synchronously on the targeted actor. */
typedef struct raven_scale_clearance_geometry {
    float current, requested;
    float dimensions[3],lower[3],upper[3],position[3],basis[2][3];
} raven_scale_clearance_geometry;
typedef struct raven_scale_clearance_callbacks {
    void *context;
    int (*sweep)(void *,const float origin[3],const float direction[3],float displacement[3]);
    void (*bounds)(void *,const float lower[3],const float upper[3]);
    void (*position)(void *,const float position[3]);
} raven_scale_clearance_callbacks;
#ifdef __cplusplus
extern "C" {
#endif
int raven_actor_scale_clearance(const raven_scale_clearance_geometry *,const raven_scale_clearance_callbacks *);
#ifdef __cplusplus
}
#endif
#endif
