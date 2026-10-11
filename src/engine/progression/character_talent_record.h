#ifndef XML1_CHARACTER_TALENT_RECORD_H
#define XML1_CHARACTER_TALENT_RECORD_H
#include <stdint.h>

/* CCharacterStats' talent map already allocates four bytes per value, although
 * retail copies/serializes only three. Five independent four-bit fields occupy
 * bits 0..19; the remaining bits are padding, NOT initialized rank storage.
 *
 * The expanded representation uses five six-bit fields, matching XML2's rank
 * width. Keep the map stride and CharacterManager snapshot size unchanged.
 * All native accessors/copies and the versioned save boundary must use this
 * representation together. Do not reinterpret a retail word as an expanded
 * word, even when its current rank is less than sixteen.
 */
enum xml1_talent_field {
    XML1_TALENT_CURRENT = 0,  /* Retail byte 0 low: 00040DB0/000487F0. */
    XML1_TALENT_PENDING = 1,  /* Retail byte 0 high: 00048860/00048510. */
    XML1_TALENT_BONUS = 2,    /* Retail byte 1 low: 000482B0/000482F0. */
    XML1_TALENT_LIMIT = 3,    /* Retail byte 1 high: 000480F0/00048140. */
    XML1_TALENT_BASELINE = 4  /* Retail byte 2 low: 000481A0/000483C0. */
};
#define XML1_TALENT_FIELD_COUNT 5u
#define XML1_TALENT_RANK_MAX 63u
#define XML1_TALENT_RECORD_MASK UINT32_C(0x3fffffff)

static inline unsigned xml1_talent_record_get(uint32_t record, unsigned field)
{
    return field < XML1_TALENT_FIELD_COUNT ?
        (record >> (field * 6u)) & XML1_TALENT_RANK_MAX : 0u;
}

/* Reject overflow rather than wrapping a purchased rank to zero or silently
 * changing another field. Leave the caller's record intact on failure. */
static inline int xml1_talent_record_set(uint32_t *record, unsigned field,
                                        unsigned value)
{
    uint32_t mask;
    unsigned shift;
    if (!record || field >= XML1_TALENT_FIELD_COUNT ||
        value > XML1_TALENT_RANK_MAX || (*record & ~XML1_TALENT_RECORD_MASK))
        return 0;
    shift = field * 6u;
    mask = XML1_TALENT_RANK_MAX << shift;
    *record = (*record & ~mask) | ((uint32_t)value << shift);
    return 1;
}

/* Retail and existing XML1CHR v1 saves contain three little-endian bytes.
 * Their top nibble can contain uninitialized stack padding (00047FE6 and
 * 00049315 preserve it). Discard it explicitly; never promote it into a rank.
 * This converter is also suitable for freshly constructed retail records at
 * a deliberately audited boundary, not arbitrary live expanded records. */
static inline uint32_t xml1_talent_record_from_legacy(const uint8_t bytes[3])
{
    const uint32_t legacy = (uint32_t)bytes[0] |
        ((uint32_t)bytes[1] << 8u) | ((uint32_t)bytes[2] << 16u);
    uint32_t result = 0;
    unsigned field;
    for (field = 0; field < XML1_TALENT_FIELD_COUNT; ++field)
        result |= ((legacy >> (field * 4u)) & 15u) << (field * 6u);
    return result;
}

/* Explicit wire encoding keeps this independent of host endianness/alignment.
 * The enclosing save section must select this version before calling it.
 * These helpers do not mutate a stream cursor or introduce a global load mode.
 */
static inline int xml1_talent_record_read(const uint8_t bytes[4], uint32_t *record)
{
    uint32_t value;
    if (!bytes || !record) return 0;
    value = (uint32_t)bytes[0] | ((uint32_t)bytes[1] << 8u) |
        ((uint32_t)bytes[2] << 16u) | ((uint32_t)bytes[3] << 24u);
    if (value & ~XML1_TALENT_RECORD_MASK) return 0;
    *record = value;
    return 1;
}

static inline int xml1_talent_record_write(uint32_t record, uint8_t bytes[4])
{
    if (!bytes || (record & ~XML1_TALENT_RECORD_MASK)) return 0;
    bytes[0] = (uint8_t)record;
    bytes[1] = (uint8_t)(record >> 8u);
    bytes[2] = (uint8_t)(record >> 16u);
    bytes[3] = (uint8_t)(record >> 24u);
    return 1;
}
#endif
