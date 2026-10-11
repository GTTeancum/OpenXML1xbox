#ifndef XML1_CHARACTER_TALENT_GUEST_H
#define XML1_CHARACTER_TALENT_GUEST_H
#include "engine/progression/character_talent_record.h"
#include "engine/progression/character_talent_stream.h"
#ifdef XML1_STABLE_TALENT_IDENTITIES
#include "engine/progression/talent_identity_guest.h"
#endif
#include <stdio.h>
#include <stdlib.h>

/* Include after the guest memory definitions. Use a local value rather than
 * taking an unaligned host pointer or evaluating an address expression twice.
 * Overflow indicates a missing admission check, not permission to truncate. */
static inline void xml1_talent_guest_set(uint32_t address, unsigned field, unsigned value)
{
    uint32_t record = MEM32(address);
    if (!xml1_talent_record_set(&record, field, value)) {
        fprintf(stderr, "[TALENT RECORD] invalid mutation address=%08x field=%u value=%u\n",
                address, field, value);
        abort();
    }
    MEM32(address) = record;
}
static inline unsigned xml1_talent_guest_record_bytes(uint32_t stream)
{
    unsigned count = xml1_talent_stream_record_bytes(stream);
    if (!count) {
        fputs("[TALENT RECORD] stream has no valid character section\n", stderr);
        abort();
    }
    return count;
}
static inline void xml1_talent_guest_decode(uint32_t stream, uint32_t address)
{
    unsigned count = xml1_talent_guest_record_bytes(stream), i;
    uint8_t bytes[4] = {0};
    uint32_t record;
    for (i = 0; i < count; ++i) bytes[i] = MEM8(address + i);
    if (count == 3) record = xml1_talent_record_from_legacy(bytes);
    else if (!xml1_talent_record_read(bytes, &record)) {
        fputs("[TALENT RECORD] invalid saved record\n", stderr);
        abort();
    }
    MEM32(address) = record;
#ifdef XML1_STABLE_TALENT_IDENTITIES
    /* 49280 reads the byte ID immediately before this rank record. Resolve
     * it while its saved identity table is pinned, before map insertion. */
    MEM8(address-1)=(uint8_t)xml1_talent_identity_remap(stream,MEM8(address-1));
#endif
}
#endif
