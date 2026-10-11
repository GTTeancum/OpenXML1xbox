#include "engine/combat/raven_vacuum.h"
#include <math.h>
#include <string.h>

int raven_vacuum_motion(const float centre[3],const float target[3],
    const float current[3],float ground_gap,float* distance,float velocity[3]) {
    if(!centre||!target||!current||!distance||!velocity||!isfinite(ground_gap))return 0;
    double delta[3],length2=0;
    for(unsigned i=0;i<3;++i) {
        if(!isfinite(centre[i])||!isfinite(target[i])||!isfinite(current[i]))return 0;
        delta[i]=(double)centre[i]-target[i];length2+=delta[i]*delta[i];
    }
    double length=sqrt(length2);float result[3];
    // XML2 153434..1534A1 forms a three-dimensional inward vector at300;
    // 1534AA..1534CA lifts grounded targets, then15355C..1535AD averages
    // with their existing velocity. This is not magnetic_grasp's XY pull.
    for(unsigned i=0;i<3;++i) {
        double pull=length?300*delta[i]/length:0;
        if(i==2&&ground_gap<36)pull=300;
        result[i]=(float)(.5*(pull+current[i]));
        if(!isfinite(result[i]))return 0;
    }
    float separation=(float)length;
    if(!isfinite(separation))return 0;
    *distance=separation;memcpy(velocity,result,sizeof(result));return 1;
}
