#include "engine/actors/raven_flight_ceiling.h"
#include <stdio.h>
#include <stdlib.h>
static void check(int ok, const char *what) {
    if (!ok) { fprintf(stderr,"FAIL flight ceiling: %s\n",what); exit(1); }
}
int main(void) {
    const float steps[] = {1.0f/15,1.0f/30,1.0f/40,1.0f/60,1.0f/144,0.25f};
    const float tops[] = {120,600,1800,-120};
    for(unsigned t=0;t<4;++t) for(unsigned s=0;s<6;++s)
    for(unsigned size=0;size<3;++size) {
        float h=40.0f+size*40, max=tops[t], ceiling=max-h*0.5f-1;
        float z=ceiling-100, v=0, dt=steps[s];
        for(unsigned i=0;i<10000;++i) {
            if(v<250)v+=50; /* Original held-ascent acceleration, 432F3. */
            v=raven_flight_ceiling_velocity(z,v,dt,0,h,max-1000,max);
            float next=z+v*dt;
            if (fabsf(next-z)<.001f) next=z+.001f; /* Native sweep epsilon. */
            z=raven_flight_ceiling_position(z,next,0,h,max-1000,max);
            check(z<=ceiling+0.0002f,"held ascent escaped map boundary");
        }
        check(fabsf(z-ceiling)<0.001f,"flight stopped below its ceiling");
        check(v==0,"held ascent retained upward speed at ceiling");
        check(raven_flight_ceiling_velocity(z,-150,dt,0,h,max-1000,max)==-150,"descent blocked");
        check(raven_flight_ceiling_velocity(z+100,250,dt,0,h,max-1000,max)==0,"above ceiling still rising");
    }
    check(raven_flight_ceiling_velocity(0,250,.01f,0,70,-100,1000)==250,"normal ascent changed");
    check(raven_flight_ceiling_velocity(0,250,0,0,70,-100,1000)==250,"zero timestep changed");
    check(raven_flight_ceiling_velocity(0,250,.01f,0,70,0,0)==250,"unloaded bounds changed flight");
    check(raven_flight_ceiling_velocity(0,250,.01f,0,70,0,NAN)==250,"invalid bounds changed flight");
    check(raven_flight_ceiling_position(1000,1001,0,70,-100,500)==1000,"above ceiling rises");
    check(raven_flight_ceiling_position(1000,999,0,70,-100,500)==999,"above ceiling cannot descend");
    puts("PASS flight ceiling: 72 sustained-ascent scenarios, variable timestep/elevation/actor size, descent and invalid bounds");
    return 0;
}
