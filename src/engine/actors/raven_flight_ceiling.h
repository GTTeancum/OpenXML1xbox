#ifndef RAVEN_FLIGHT_CEILING_H
#define RAVEN_FLIGHT_CEILING_H
#include <math.h>

/* XML1's AI ascent gate FCD52..FCDA6 uses the loaded spatial-grid maximum Z
 * minus the local collision-box centre and one unit of clearance. Apply that
 * boundary to shared flight movement, including human input. Limit this tick's
 * travel, not just acceleration: held ascent retains velocity. No character
 * names, map names, fixed world heights or cached zone state. */
static inline float raven_flight_ceiling_velocity(float z, float velocity,
    float seconds, float lower_z, float upper_z, float world_min, float world_max)
{
    if (!(velocity > 0.0f) || !(seconds > 0.0f) ||
        !isfinite(z) || !isfinite(velocity) || !isfinite(seconds) ||
        !isfinite(lower_z) || !isfinite(upper_z) || upper_z < lower_z ||
        !isfinite(world_min) || !isfinite(world_max) || world_max <= world_min)
        return velocity;
    double ceiling = (double)world_max - ((double)lower_z + upper_z) * 0.5 - 1.0;
    double remaining = ceiling - z;
    /* Above-boundary actors can descend normally; never teleport them down. */
    if (remaining <= 0.0) return 0.0f;
    if ((double)velocity * seconds <= remaining) return velocity;
    float allowed = (float)(remaining / seconds);
    if ((double)allowed * seconds > remaining) allowed = nextafterf(allowed, 0.0f);
    return allowed;
}

/* Native collision movement has a minimum nonzero Z displacement (413CB).
 * Constrain the resolved position too, otherwise zero velocity still creeps
 * upward. Preserve X/Y and allow recovery from an already-invalid altitude. */
static inline float raven_flight_ceiling_position(float z, float requested,
    float lower_z, float upper_z, float world_min, float world_max)
{
    if (!isfinite(z) || !isfinite(requested) || !isfinite(lower_z) ||
        !isfinite(upper_z) || upper_z < lower_z || !isfinite(world_min) ||
        !isfinite(world_max) || world_max <= world_min) return requested;
    float ceiling = (float)((double)world_max - ((double)lower_z + upper_z)*0.5 - 1.0);
    if (ceiling < z) ceiling = z;
    return requested > ceiling ? ceiling : requested;
}
#endif
