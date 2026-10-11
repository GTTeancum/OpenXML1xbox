#ifndef RAVEN_AUTO_EQUIP_INVENTORY_H
#define RAVEN_AUTO_EQUIP_INVENTORY_H
#include <stdint.h>
#include <string.h>

/* XML1 item IDs are bytes; FF is the native no-item sentinel. This ledger is
 * temporary transaction state, never a replacement inventory or save format.
 * XML2 4A7E0 releases all participating heroes before choosing slot-major.
 * XML1 7E450 clamps stored quantities to an authored maximum, so writing each
 * temporary release back to the native inventory can destroy a real copy.
 * Keep the intermediate pool wide and publish only a complete valid result.
 * The guest adapter owns eligibility, stats changes and rollback. It must
 * release only participating heroes' gear and must not publish on failure. */
#define RAVEN_AUTO_EQUIP_ITEMS 255u
typedef struct raven_auto_equip_inventory {
    uint32_t available[RAVEN_AUTO_EQUIP_ITEMS];
    uint8_t maximum[RAVEN_AUTO_EQUIP_ITEMS];
    unsigned count;
} raven_auto_equip_inventory;

static inline int raven_auto_equip_inventory_begin(
    raven_auto_equip_inventory *pool, const uint8_t *quantity,
    const uint8_t *maximum, unsigned count)
{
    unsigned i;
    if (!pool || !quantity || !maximum || count > RAVEN_AUTO_EQUIP_ITEMS)
        return 0;
    for (i = 0; i < count; ++i)
        if (quantity[i] > maximum[i]) return 0;
    memset(pool, 0, sizeof(*pool));
    pool->count = count;
    for (i = 0; i < count; ++i) {
        pool->available[i] = quantity[i];
        pool->maximum[i] = maximum[i];
    }
    return 1;
}

static inline int raven_auto_equip_inventory_release(
    raven_auto_equip_inventory *pool, unsigned item)
{
    if (!pool || item >= pool->count || item >= RAVEN_AUTO_EQUIP_ITEMS ||
        pool->available[item] == UINT32_MAX) return 0;
    ++pool->available[item];
    return 1;
}

static inline int raven_auto_equip_inventory_take(
    raven_auto_equip_inventory *pool, unsigned item)
{
    if (!pool || item >= pool->count || item >= RAVEN_AUTO_EQUIP_ITEMS ||
        !pool->available[item]) return 0;
    --pool->available[item];
    return 1;
}

static inline int raven_auto_equip_inventory_finish(
    const raven_auto_equip_inventory *pool, uint8_t *quantity, unsigned count)
{
    unsigned i;
    if (!pool || !quantity || count != pool->count ||
        count > RAVEN_AUTO_EQUIP_ITEMS) return 0;
    /* Validate every item before touching the output. A final overflow means
     * the adapter must roll back equipment, not clamp/drop leftover copies. */
    for (i = 0; i < count; ++i)
        if (pool->available[i] > pool->maximum[i]) return 0;
    for (i = 0; i < count; ++i)
        quantity[i] = (uint8_t)pool->available[i];
    return 1;
}
#endif
