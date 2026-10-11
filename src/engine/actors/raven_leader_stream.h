#pragma once
#include "engine/actors/raven_leader_power.h"
#include <stddef.h>
/* Optional extension after XML1's native map-cache section. No guest pointers
 * are serialized. Returns bytes consumed/written, zero if absent, -1 invalid.
 * On invalid input the destination/cache is unchanged. */
#define RAVEN_LEADER_STREAM_BYTES (16u+RAVEN_LEADER_ZONE_COUNT*RAVEN_LEADER_ZONE_RECORDS)
int raven_leader_stream_write(const raven_leader_zone_cache *,void *,size_t);
int raven_leader_stream_read(raven_leader_zone_cache *,const void *,size_t);
