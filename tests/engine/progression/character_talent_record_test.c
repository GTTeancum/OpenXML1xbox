#include "engine/progression/character_talent_record.h"
#include <stdio.h>
#include <string.h>

#define CHECK(test) do { if (!(test)) { \
    fprintf(stderr, "FAIL line %u: %s\n", (unsigned)__LINE__, #test); return 1; \
} } while (0)

int main(void)
{
    unsigned legacy, field, value, padding;
    uint32_t record, decoded;
    uint8_t bytes[4];
    /* All possible retail logical records, including nonzero adjacent fields.
     * Test every value of the unspecified padding nibble independently below. */
    for (legacy = 0; legacy < 0x100000u; ++legacy) {
        bytes[0] = (uint8_t)legacy;
        bytes[1] = (uint8_t)(legacy >> 8);
        bytes[2] = (uint8_t)((legacy >> 16) | 0xf0);
        record = xml1_talent_record_from_legacy(bytes);
        for (field = 0; field < XML1_TALENT_FIELD_COUNT; ++field)
            CHECK(xml1_talent_record_get(record, field) == ((legacy >> (4 * field)) & 15));
        CHECK(xml1_talent_record_write(record, bytes));
        CHECK(xml1_talent_record_read(bytes, &decoded) && decoded == record);
    }
    for (padding = 0; padding < 16; ++padding) {
        const uint8_t old[3] = {0x21, 0x43, (uint8_t)((padding << 4) | 5)};
        record = xml1_talent_record_from_legacy(old);
        for (field = 0; field < XML1_TALENT_FIELD_COUNT; ++field)
            CHECK(xml1_talent_record_get(record, field) == field + 1);
    }
    /* Set each field across its entire range while every neighboring field is
     * at its maximum. Catch both accidental truncation and overlapping masks. */
    for (field = 0; field < XML1_TALENT_FIELD_COUNT; ++field) {
        for (value = 0; value <= XML1_TALENT_RANK_MAX; ++value) {
            unsigned neighbor;
            record = XML1_TALENT_RECORD_MASK;
            CHECK(xml1_talent_record_set(&record, field, value));
            for (neighbor = 0; neighbor < XML1_TALENT_FIELD_COUNT; ++neighbor)
                CHECK(xml1_talent_record_get(record, neighbor) ==
                    (neighbor == field ? value : XML1_TALENT_RANK_MAX));
            CHECK(xml1_talent_record_write(record, bytes));
            CHECK(xml1_talent_record_read(bytes, &decoded) && decoded == record);
        }
    }
    /* Known wire vector is independent of the encoder/decoder roundtrip. */
    record = 0;
    CHECK(xml1_talent_record_set(&record, XML1_TALENT_CURRENT, 20));
    CHECK(xml1_talent_record_set(&record, XML1_TALENT_PENDING, 1));
    CHECK(xml1_talent_record_set(&record, XML1_TALENT_BONUS, 2));
    CHECK(xml1_talent_record_set(&record, XML1_TALENT_LIMIT, 63));
    CHECK(xml1_talent_record_set(&record, XML1_TALENT_BASELINE, 18));
    CHECK(xml1_talent_record_write(record, bytes));
    CHECK(bytes[0] == 0x54 && bytes[1] == 0x20 && bytes[2] == 0xfc && bytes[3] == 0x12);
    decoded = record;
    CHECK(!xml1_talent_record_set(&record, 0, 64) && record == decoded);
    CHECK(!xml1_talent_record_set(&record, 5, 1) && record == decoded);
    CHECK(!xml1_talent_record_set(0, 0, 1));
    bytes[3] |= 0x80;
    CHECK(!xml1_talent_record_read(bytes, &record) && record == decoded);
    memset(bytes, 0xa5, sizeof(bytes));
    CHECK(!xml1_talent_record_write(UINT32_C(0x80000000), bytes));
    CHECK(bytes[0] == 0xa5 && bytes[3] == 0xa5);
    puts("PASS talent record: all 1,048,576 legacy states, padding, expanded fields, wire and rejection checks");
    return 0;
}
