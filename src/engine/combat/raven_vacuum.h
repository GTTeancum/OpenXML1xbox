#pragma once
#ifdef __cplusplus
extern "C" {
#endif
/* Geometry only. Query membership, actor eligibility, cooldown and contact
 * dispatch belong to the guest callback. Returns0 for nonfinite inputs and
 * leaves outputs unchanged. Native units/second; no frame-clock mutation. */
int raven_vacuum_motion(const float centre[3],const float target[3],
    const float current_velocity[3],float ground_gap,float* distance,float velocity[3]);
#ifdef __cplusplus
}
#endif
