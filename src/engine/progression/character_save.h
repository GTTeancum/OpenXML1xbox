#ifndef XML1_CHARACTER_SAVE_H
#define XML1_CHARACTER_SAVE_H
#include "game/xml1/character_limits.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#ifdef XML1_EXPANDED_TALENT_RECORDS
#include "engine/progression/character_talent_stream.h"
#define XML1_CHARACTER_SECTION_VERSION 2u
#else
#define XML1_CHARACTER_SECTION_VERSION 1u
#endif
#ifdef XML1_PERSISTENT_POWER_SELECTIONS
#ifndef XML1_EXPANDED_TALENT_RECORDS
#error Persistent power selections require expanded talent records
#endif
#include "engine/powers/raven_power_selection_save.h"
#undef XML1_CHARACTER_SECTION_VERSION
#define XML1_CHARACTER_SECTION_VERSION 3u
#endif

#ifdef XML1_STABLE_TALENT_IDENTITIES
#include "engine/progression/talent_identity_guest.h"
#undef XML1_CHARACTER_SECTION_VERSION
#define XML1_CHARACTER_SECTION_VERSION 4u
#endif

#ifdef XML1_PERMANENT_VITALITY
#ifndef XML1_STABLE_TALENT_IDENTITIES
#error Permanent vitality requires the stable-identity character save layout
#endif
#include "engine/combat/raven_vitality_bonus.h"
#undef XML1_CHARACTER_SECTION_VERSION
#define XML1_CHARACTER_SECTION_VERSION 6u
#endif

/* CharacterManager's retail stream has no record count: it serializes the
 * currently instantiated herostat in definition-ID order, then 17 snapshots.
 * Loading that stream with 37 definitions otherwise consumes later sections
 * as character data. Frame this section only; keep XP,
 * physical skin bytes, subsequent section markers and the outer save intact.
 * Definition IDs retain the retail ordering contract; reordering herostat
 * remains unsupported. Missing saved definitions are rejected. Section v2
 * changes only the talent value records from three legacy packed bytes to
 * four expanded bytes; the conditional switch must match all native accessors.
 * Section v3 retains those records and appends named power selections to the
 * bounded header. Retail/v1/v2 loads reset selections to roster defaults.
 * Section v4 frames selections and native talent identities separately. The
 * latter are resolved and pinned before character byte IDs are restored.
 * Section v5 preserves the v4 header and inserts health/energy bonus bytes
 * after each native stats prefix, including snapshots. Older sections reset
 * these independent bonuses without changing their native record layouts.
 * Section v6 adds the auto-equip preference after each pair of bonus bytes.
 * Old saves default to manual equipment; native fields/padding stay unchanged.
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
#ifdef XML1_PERMANENT_VITALITY
    xml1_vitality_stream_reset();
#endif
#ifdef XML1_EXPANDED_TALENT_RECORDS
    xml1_talent_stream_reset();
#endif
    unsigned cursor = MEM32(stream + XML1_SAVE_STREAM_BYTES);
    if (cursor < stream || cursor - stream >= XML1_SAVE_STREAM_BYTES - XML1_CHARACTER_SAVE_HEADER)
        return 0;
    xml1_save_layout layout;
    xml1_current_save_layout(manager, &layout);
    unsigned char *p = (unsigned char *)((uintptr_t)g_xbox_mem_offset + cursor);
    unsigned header_bytes = XML1_CHARACTER_SAVE_HEADER;
#ifdef XML1_STABLE_TALENT_IDENTITIES
    if (XML1_SAVE_STREAM_BYTES-(cursor-stream)-header_bytes<4) return 0;
    header_bytes+=4;
#endif
#ifdef XML1_PERSISTENT_POWER_SELECTIONS
    unsigned extra = raven_power_selections_write(p + header_bytes,
        XML1_SAVE_STREAM_BYTES - (cursor - stream) - header_bytes);
    if (!extra || extra > UINT16_MAX - header_bytes) return 0;
    header_bytes += extra;
#ifdef XML1_STABLE_TALENT_IDENTITIES
    unsigned identities=xml1_talent_identity_write(p+header_bytes,
        XML1_SAVE_STREAM_BYTES-(cursor-stream)-header_bytes);
    if(!identities||identities>UINT16_MAX-header_bytes) return 0;
    MEM16(cursor+XML1_CHARACTER_SAVE_HEADER)=(uint16_t)extra;
    MEM16(cursor+XML1_CHARACTER_SAVE_HEADER+2)=(uint16_t)identities;
    header_bytes+=identities;
#endif
#endif
#ifdef XML1_EXPANDED_TALENT_RECORDS
    if (!xml1_talent_stream_begin(stream, 2)) return 0;
#endif
    memcpy(p, "XML1CHR\0", 8);
    MEM16(cursor + 8) = XML1_CHARACTER_SECTION_VERSION;
    MEM16(cursor + 10) = (uint16_t)header_bytes;
    MEM16(cursor + 12) = (uint16_t)layout.snapshot_count;
    MEM16(cursor + 14) = 0;
    memcpy(p + 16, layout.definitions, 32);
    MEM32(stream + XML1_SAVE_STREAM_BYTES) = cursor + header_bytes;
#ifdef XML1_PERMANENT_VITALITY
    if(!xml1_vitality_stream_begin(stream,XML1_CHARACTER_SECTION_VERSION)) return 0;
#endif
    xml1_character_save_trace(manager, "write");
    return 1;
}

static inline int xml1_character_load_header(unsigned manager, unsigned stream,
                                             xml1_save_layout *layout)
{
#ifdef XML1_PERMANENT_VITALITY
    xml1_vitality_stream_reset();
#endif
#ifdef XML1_EXPANDED_TALENT_RECORDS
    xml1_talent_stream_reset();
#endif
    unsigned cursor = MEM32(stream + XML1_SAVE_STREAM_BYTES);
    if (cursor < stream || cursor - stream >= XML1_SAVE_STREAM_BYTES - XML1_CHARACTER_SAVE_HEADER)
        return 0;
    const unsigned char *p = (const unsigned char *)((uintptr_t)g_xbox_mem_offset + cursor);
    unsigned version = 0;
    unsigned header_bytes = 0;
    memset(layout, 0, sizeof(*layout));
    if (memcmp(p, "XML1CHR\0", 8)) {
        /* Original World herostat: default, fourteen heroes and ProfXAstral,
         * definition IDs 1..16. Do not consume a header from a retail save. */
        for (unsigned id = 1; id <= 16; ++id)
            layout->definitions[id / 8] |= (unsigned char)(1u << (id % 8));
        layout->snapshot_count = 17;
    } else {
        version = MEM16(cursor + 8);
        header_bytes = MEM16(cursor + 10);
        if (!version || version > XML1_CHARACTER_SECTION_VERSION ||
            header_bytes < XML1_CHARACTER_SAVE_HEADER ||
            (version < 3 && header_bytes != XML1_CHARACTER_SAVE_HEADER) ||
            header_bytes > XML1_SAVE_STREAM_BYTES - (cursor - stream) ||
            MEM16(cursor + 12) != XML1_SNAPSHOT_COUNT || MEM16(cursor + 14)) return 0;
        memcpy(layout->definitions, p + 16, 32);
        layout->snapshot_count = XML1_SNAPSHOT_COUNT;
    }
    xml1_save_layout available;
    xml1_current_save_layout(manager, &available);
    for (unsigned i = 0; i < 32; ++i)
        if (layout->definitions[i] & ~available.definitions[i]) return 0;
#ifdef XML1_EXPANDED_TALENT_RECORDS
    if (!xml1_talent_stream_begin(stream, version >= 2 ? 2 : version)) return 0;
#endif
#ifdef XML1_PERSISTENT_POWER_SELECTIONS
    const unsigned char *selections=version>=3?p+XML1_CHARACTER_SAVE_HEADER:NULL;
    unsigned selection_bytes=version>=3?header_bytes-XML1_CHARACTER_SAVE_HEADER:0;
#ifdef XML1_STABLE_TALENT_IDENTITIES
    xml1_talent_identity_load_end();
    if(version>=4) {
        if(header_bytes<XML1_CHARACTER_SAVE_HEADER+4) { xml1_talent_stream_reset(); return 0; }
        selection_bytes=MEM16(cursor+XML1_CHARACTER_SAVE_HEADER);
        unsigned identity_bytes=MEM16(cursor+XML1_CHARACTER_SAVE_HEADER+2);
        if((unsigned long)selection_bytes+identity_bytes+XML1_CHARACTER_SAVE_HEADER+4!=header_bytes) { xml1_talent_stream_reset(); return 0; }
        selections=p+XML1_CHARACTER_SAVE_HEADER+4;
        if(!xml1_talent_identity_load(stream,selections+selection_bytes,identity_bytes)) { xml1_talent_stream_reset(); return 0; }
    }
#endif
    if (!raven_power_selections_read(selections,selection_bytes)) {
        xml1_talent_stream_reset();
        return 0;
    }
#endif
    MEM32(stream + XML1_SAVE_STREAM_BYTES) = cursor + header_bytes;
#ifdef XML1_PERMANENT_VITALITY
    if(!xml1_vitality_stream_begin(stream,version)) return 0;
#endif
    if (getenv("XML1_CHARACTER_TRACE"))
        fprintf(stderr, "[CHARACTER SAVE] load section=%s snapshots=%u cursor=%u\n",
            version == 0 ? "retail" : version == 1 ? "v1" : version == 2 ? "v2" : version == 3 ? "v3" : version == 4 ? "v4" : version == 5 ? "v5" : "v6", layout->snapshot_count, cursor - stream);
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

/* Called only after all CharacterManager definitions and snapshots load. */
static inline void xml1_character_load_finished(void) {
#ifdef XML1_PERMANENT_VITALITY
    xml1_vitality_stream_reset();
#endif
#ifdef XML1_STABLE_TALENT_IDENTITIES
    xml1_talent_identity_load_end();
#endif
}

#endif
