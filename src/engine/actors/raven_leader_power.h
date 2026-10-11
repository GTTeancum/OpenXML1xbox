#pragma once
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

/* Borrow the game's inclusive integer RNG. This component owns no generator,
 * actor pointer, effect or persistent state. Failure leaves selection intact. */
typedef int (*raven_leader_random)(void *context,int minimum,int maximum);
int raven_leader_select(const char *name,int32_t difficulty,
                        raven_leader_random random,void *context,uint8_t *selection);
const char *raven_leader_power_name(uint8_t packed_selection);

/* XML1 zone capture6C830 owns 600 entity-record slots, with slot0 reserved.
 * Keep the adjunct aligned with those records, not with transient actor
 * addresses or roster IDs. Its owner must reset it whenever6C7D0 resets the
 * corresponding native snapshot. This is not an on-disk format. */
#define RAVEN_LEADER_ZONE_RECORDS 600u
typedef struct raven_leader_zone_snapshot {
    uint8_t selected[RAVEN_LEADER_ZONE_RECORDS]; /* 0 absent, index+1 present */
} raven_leader_zone_snapshot;
void raven_leader_zone_reset(raven_leader_zone_snapshot *snapshot);
int raven_leader_zone_capture(raven_leader_zone_snapshot *snapshot,
                             unsigned record,uint8_t selection);
int raven_leader_zone_get(const raven_leader_zone_snapshot *snapshot,
                         unsigned record,uint8_t *selection);

/* Native83370 owns exactly seven contiguous39BC-byte snapshots. Native
 * actor-load calls6C554 (placed) and6C694 (spawned) both receive a20-byte
 * record inside one of these snapshots. Keep selection keyed by that record,
 * never by the short placed-entity ID (spawned actors do not have one).
 * Bind also clears state:83090 replaces the cache without calling6C7D0. */
#define RAVEN_LEADER_ZONE_COUNT 7u
typedef struct raven_leader_zone_cache {
    uint32_t native_base;
    raven_leader_zone_snapshot zones[RAVEN_LEADER_ZONE_COUNT];
} raven_leader_zone_cache;
void raven_leader_cache_bind(raven_leader_zone_cache *,uint32_t native_base);
int raven_leader_cache_reset_zone(raven_leader_zone_cache *,uint32_t native_snapshot);
int raven_leader_cache_capture(raven_leader_zone_cache *,uint32_t native_record,uint8_t selection);
int raven_leader_cache_forget(raven_leader_zone_cache *,uint32_t native_record);
int raven_leader_cache_get(const raven_leader_zone_cache *,uint32_t native_record,uint8_t *selection);

#ifdef __cplusplus
}
#endif
