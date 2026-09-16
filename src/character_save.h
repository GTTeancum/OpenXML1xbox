#ifndef XML1_CHARACTER_SAVE_H
#define XML1_CHARACTER_SAVE_H
#include "character_limits.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

/* CharacterManager's retail stream has no record count: it serializes the
 * currently instantiated herostat in definition-ID order, then 17 snapshots.
 * Loading that stream with 37 definitions otherwise consumes later sections
 * as character data. Frame this section only; keep native state records, XP,
 * physical skin bytes, subsequent section markers and the outer save intact.
 * Definition IDs retain the retail ordering contract; reordering herostat
 * remains unsupported. Missing saved definitions are rejected.
 */
typedef struct xml1_save_layout {
    unsigned char definitions[32];
    unsigned snapshot_count;
} xml1_save_layout;

#define XML1_SAVE_STREAM_BYTES 0x2FC00u
#define XML1_CHARACTER_SAVE_HEADER 48u

static inline int xml1_saved_definition(const xml1_save_layout *layout, unsigned id)
{
    return id < 256 && ((layout->definitions[id / 8] >> (id % 8)) & 1);
}

static inline void xml1_current_save_layout(unsigned manager, xml1_save_layout *layout)
{
    memset(layout, 0, sizeof(*layout));
    layout->snapshot_count = XML1_SNAPSHOT_COUNT;
    unsigned count = MEM32(manager + 0x8534u + XML1_MANAGER_DELTA);
    for (unsigned id = 1; id < count && id < 255; ++id) {
        unsigned meta = manager + 0x6D48u + XML1_MANAGER_DELTA + id * 24u;
        if ((MEM8(meta + 22) & 1) && MEM32(meta + 16))
            layout->definitions[id / 8] |= (unsigned char)(1u << (id % 8));
    }
}

static inline void xml1_character_save_trace(unsigned manager, const char *phase)
{
    if (!getenv("XML1_CHARACTER_TRACE")) return;
    xml1_save_layout layout;
    xml1_current_save_layout(manager, &layout);
    for (unsigned id = 1; id < 255; ++id) {
        if (!xml1_saved_definition(&layout, id)) continue;
        unsigned meta = manager + 0x6D48u + XML1_MANAGER_DELTA + id * 24u;
        unsigned character = manager + 4 + (MEM32(meta + 16) & 63u) * XML1_CHARACTER_BYTES;
        fprintf(stderr, "[CHARACTER SAVE STATE] %s id=%u name=%.20s level=%u xp=%u skin=%u\n",
            phase, id, (const char *)((uintptr_t)g_xbox_mem_offset + character + 0x20C),
            MEM8(character + 0x1C), MEM32(character + 0x18), MEM8(character + 0x1E));
    }
}

static inline int xml1_character_save_header(unsigned manager, unsigned stream)
{
    unsigned cursor = MEM32(stream + XML1_SAVE_STREAM_BYTES);
    if (cursor < stream || cursor - stream >= XML1_SAVE_STREAM_BYTES - XML1_CHARACTER_SAVE_HEADER)
        return 0;
    xml1_save_layout layout;
    xml1_current_save_layout(manager, &layout);
    unsigned char *p = (unsigned char *)((uintptr_t)g_xbox_mem_offset + cursor);
    memcpy(p, "XML1CHR\0", 8);
    MEM16(cursor + 8) = 1; /* Section version, not game/save version. */
    MEM16(cursor + 10) = XML1_CHARACTER_SAVE_HEADER;
    MEM16(cursor + 12) = (uint16_t)layout.snapshot_count;
    MEM16(cursor + 14) = 0;
    memcpy(p + 16, layout.definitions, 32);
    MEM32(stream + XML1_SAVE_STREAM_BYTES) = cursor + XML1_CHARACTER_SAVE_HEADER;
    xml1_character_save_trace(manager, "write");
    return 1;
}

static inline int xml1_character_load_header(unsigned manager, unsigned stream,
                                             xml1_save_layout *layout)
{
    unsigned cursor = MEM32(stream + XML1_SAVE_STREAM_BYTES);
    if (cursor < stream || cursor - stream >= XML1_SAVE_STREAM_BYTES - XML1_CHARACTER_SAVE_HEADER)
        return 0;
    const unsigned char *p = (const unsigned char *)((uintptr_t)g_xbox_mem_offset + cursor);
    memset(layout, 0, sizeof(*layout));
    if (memcmp(p, "XML1CHR\0", 8)) {
        /* Original World herostat: default, fourteen heroes and ProfXAstral,
         * definition IDs 1..16. Do not consume a header from a retail save. */
        for (unsigned id = 1; id <= 16; ++id)
            layout->definitions[id / 8] |= (unsigned char)(1u << (id % 8));
        layout->snapshot_count = 17;
    } else {
        if (MEM16(cursor + 8) != 1 || MEM16(cursor + 10) != XML1_CHARACTER_SAVE_HEADER ||
            MEM16(cursor + 12) != XML1_SNAPSHOT_COUNT || MEM16(cursor + 14)) return 0;
        memcpy(layout->definitions, p + 16, 32);
        layout->snapshot_count = XML1_SNAPSHOT_COUNT;
    }
    xml1_save_layout available;
    xml1_current_save_layout(manager, &available);
    for (unsigned i = 0; i < 32; ++i)
        if (layout->definitions[i] & ~available.definitions[i]) return 0;
    if (layout->snapshot_count != 17)
        MEM32(stream + XML1_SAVE_STREAM_BYTES) = cursor + XML1_CHARACTER_SAVE_HEADER;
    if (getenv("XML1_CHARACTER_TRACE"))
        fprintf(stderr, "[CHARACTER SAVE] load section=%s snapshots=%u cursor=%u\n",
            layout->snapshot_count == 17 ? "retail" : "v1", layout->snapshot_count, cursor - stream);
    return 1;
}

static inline void xml1_character_save_rejected(void)
{
    /* The retail serializer returns void. Stop before consuming/writing other
     * sections rather than letting an unsupported layout corrupt a save. */
    fputs("[CHARACTER SAVE] unsupported roster/header or exhausted save stream\n", stderr);
    fflush(stderr);
    exit(4);
}
#endif
