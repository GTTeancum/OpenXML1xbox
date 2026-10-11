#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static uint32_t memory[0x100000 / 4];
#define MEM8(a) (((uint8_t *)memory)[(uint32_t)(a)])
#define MEM16(a) (*(uint16_t *)((uint8_t *)memory + (uint32_t)(a)))
#define MEM32(a) (*(uint32_t *)((uint8_t *)memory + (uint32_t)(a)))
#define g_xbox_mem_offset ((uintptr_t)memory)
#include "engine/progression/character_save.h"
#ifdef XML1_PERMANENT_VITALITY
#include "engine/combat/raven_vitality_save_guest.h"
#endif
#ifdef XML1_PERSISTENT_POWER_SELECTIONS
extern int power_selection_save_fixture(unsigned phase);
#endif
#define CHECK(test) do { if (!(test)) { fprintf(stderr,"FAIL %u: %s\n",__LINE__,#test); return 1; } } while (0)
int main(void)
{
    const unsigned manager = 0x10000, stream = 0x50000, start = stream + 64;
    xml1_save_layout layout;
    unsigned id;
#ifdef XML1_PERSISTENT_POWER_SELECTIONS
    CHECK(power_selection_save_fixture(0));
#endif
    /* Original definitions must all exist for a retail save to be admitted. */
    MEM32(manager + 0x8534 + XML1_MANAGER_DELTA) = 17;
    for (id = 1; id <= 16; ++id) {
        unsigned meta = manager + 0x6D48 + XML1_MANAGER_DELTA + id * 24;
        MEM8(meta + 22) = 1; MEM32(meta + 16) = id;
    }
    MEM32(stream + XML1_SAVE_STREAM_BYTES) = start;
    CHECK(xml1_character_save_header(manager, stream));
    CHECK(!memcmp((uint8_t *)memory + start, "XML1CHR\0", 8));
    CHECK(MEM16(start + 8) == XML1_CHARACTER_SECTION_VERSION);
    const unsigned written_header = MEM16(start + 10);
#ifdef XML1_STABLE_TALENT_IDENTITIES
    CHECK(written_header>154u);
#else
    CHECK(written_header == (XML1_CHARACTER_SECTION_VERSION >= 3 ? 150u : 48u));
#endif
    unsigned char original_header[65536];
    memcpy(original_header,(uint8_t*)memory+start,written_header);
    CHECK(MEM32(stream + XML1_SAVE_STREAM_BYTES) == start + written_header);
#ifdef XML1_PERMANENT_VITALITY
    CHECK(xml1_vitality_stream_version(stream)==XML1_CHARACTER_SECTION_VERSION);
    CHECK(xml1_vitality_stream_version(stream+4)==-1);
#endif
    for (id = 1; id <= XML1_CHARACTER_SECTION_VERSION; ++id) {
        memcpy((uint8_t*)memory+start,original_header,written_header);
        unsigned this_header=id>=3?written_header:48u;
#ifdef XML1_STABLE_TALENT_IDENTITIES
        if(id==3) {
            unsigned bytes=MEM16(start+48);
            memmove((uint8_t*)memory+start+48,(uint8_t*)memory+start+52,bytes);
            this_header=48+bytes;
        }
#endif
        MEM16(start + 8) = (uint16_t)id;
        MEM16(start + 10) = (uint16_t)this_header;
        MEM32(stream + XML1_SAVE_STREAM_BYTES) = start;
        CHECK(xml1_character_load_header(manager, stream, &layout));
        CHECK(layout.snapshot_count == XML1_SNAPSHOT_COUNT);
        CHECK(MEM32(stream + XML1_SAVE_STREAM_BYTES) == start + this_header);
#ifdef XML1_PERMANENT_VITALITY
        CHECK(xml1_vitality_stream_version(stream)==(int)id);
#endif
#ifdef XML1_EXPANDED_TALENT_RECORDS
        CHECK(xml1_talent_stream_record_bytes(stream) == (id >= 2 ? 4 : 3));
#endif
#ifdef XML1_PERSISTENT_POWER_SELECTIONS
        CHECK(power_selection_save_fixture(id>=3?2:1));
#endif
    }
#ifdef XML1_STABLE_TALENT_IDENTITIES
    memcpy((uint8_t*)memory+start,original_header,written_header);
    MEM32(stream+XML1_SAVE_STREAM_BYTES)=start;
    MEM16(start+50)++; /* Identity length must fit the enclosing header. */
    CHECK(!xml1_character_load_header(manager,stream,&layout));
    CHECK(MEM32(stream+XML1_SAVE_STREAM_BYTES)==start);
#ifdef XML1_PERMANENT_VITALITY
    CHECK(xml1_vitality_stream_version(stream)==-1);
#endif
    xml1_character_load_finished();
#endif
#ifdef XML1_PERSISTENT_POWER_SELECTIONS
    MEM32(stream + XML1_SAVE_STREAM_BYTES) = start;
    MEM16(start + 8) = 3;
    MEM16(start + 10) = 48; /* v3 requires its count even with no changes. */
    CHECK(!xml1_character_load_header(manager, stream, &layout));
    CHECK(MEM32(stream + XML1_SAVE_STREAM_BYTES) == start);
    CHECK(xml1_talent_stream_record_bytes(stream) == 0);
    MEM16(start + 10) = 50; MEM16(start + 48) = 1; /* truncated record */
    CHECK(!xml1_character_load_header(manager, stream, &layout));
    CHECK(MEM32(stream + XML1_SAVE_STREAM_BYTES) == start);
    CHECK(xml1_talent_stream_record_bytes(stream) == 0);
    CHECK(power_selection_save_fixture(2)); /* rejected loads leave selection */
#endif
    MEM16(start + 8) = XML1_CHARACTER_SECTION_VERSION + 1;
    MEM32(stream + XML1_SAVE_STREAM_BYTES) = start;
    CHECK(!xml1_character_load_header(manager, stream, &layout));
    CHECK(MEM32(stream + XML1_SAVE_STREAM_BYTES) == start);
#ifdef XML1_PERSISTENT_POWER_SELECTIONS
    CHECK(power_selection_save_fixture(2));
#endif
#ifdef XML1_EXPANDED_TALENT_RECORDS
    CHECK(xml1_talent_stream_record_bytes(stream) == 0);
#endif
    /* No header means retail: don't eat 48 bytes from the first record. */
    memset((uint8_t *)memory + start, 0x5a, 48);
    CHECK(xml1_character_load_header(manager, stream, &layout));
    CHECK(layout.snapshot_count == 17 && xml1_saved_definition(&layout, 16));
    CHECK(MEM32(stream + XML1_SAVE_STREAM_BYTES) == start);
#ifdef XML1_EXPANDED_TALENT_RECORDS
    CHECK(xml1_talent_stream_record_bytes(stream) == 3);
#endif
#ifdef XML1_PERMANENT_VITALITY
    CHECK(xml1_vitality_stream_version(stream)==0);
    xml1_character_load_finished();
    CHECK(xml1_vitality_stream_version(stream)==-1);
#endif
#ifdef XML1_PERSISTENT_POWER_SELECTIONS
    CHECK(power_selection_save_fixture(1));
#endif
    /* Both the cursor check and unavailable roster reject without consuming. */
    MEM8(manager + 0x6D48 + XML1_MANAGER_DELTA + 16 * 24 + 22) = 0;
    CHECK(!xml1_character_load_header(manager, stream, &layout));
    CHECK(MEM32(stream + XML1_SAVE_STREAM_BYTES) == start);
    MEM32(stream + XML1_SAVE_STREAM_BYTES) = stream - 1;
    CHECK(!xml1_character_save_header(manager, stream));
    CHECK(!xml1_character_load_header(manager, stream, &layout));
#ifdef XML1_EXPANDED_TALENT_RECORDS
    CHECK(xml1_talent_stream_record_bytes(stream) == 0);
#endif
#ifdef XML1_PERMANENT_VITALITY
    /* Exercise the production per-record codec with adjacent native bytes.
     * A v5 record has two extra bytes; v6 adds exactly one independent flag.
     * Loading older saves into an already enabled character must disable it. */
    xml1_vitality_construct(0x1000);
    xml1_vitality_construct(0x2000);
    CHECK(raven_vitality_add(xml1_vitality_owner(),0x1000,0,17));
    CHECK(raven_vitality_add(xml1_vitality_owner(),0x1000,1,29));
    CHECK(raven_auto_equip_set(xml1_vitality_owner(),0x1000,1));
    for(unsigned version=0;version<=6;++version) {
        unsigned bytes=version<5?0:version==5?2:3;
        uint8_t value=99;
        memset((uint8_t*)memory+start,0xcc,8);
        MEM32(stream+XML1_SAVE_STREAM_BYTES)=start;
        CHECK(xml1_vitality_stream_begin(stream,version));
        xml1_vitality_saved_record(0x1000,stream,0);
        CHECK(MEM32(stream+XML1_SAVE_STREAM_BYTES)==start+bytes);
        CHECK(MEM8(start+bytes)==0xcc);
        if(version>=5)CHECK(MEM8(start)==17&&MEM8(start+1)==29);
        if(version==6)CHECK(MEM8(start+2)==1);
        CHECK(raven_auto_equip_set(xml1_vitality_owner(),0x2000,1));
        MEM32(stream+XML1_SAVE_STREAM_BYTES)=start;
        xml1_vitality_saved_record(0x2000,stream,1);
        CHECK(MEM32(stream+XML1_SAVE_STREAM_BYTES)==start+bytes);
        CHECK(raven_auto_equip_get(xml1_vitality_owner(),0x2000,&value));
        CHECK(value==(version==6));
        CHECK(raven_vitality_get(xml1_vitality_owner(),0x2000,0,&value));
        CHECK(value==(version>=5?17:0));
    }
    xml1_vitality_retire(0x1000);
    xml1_vitality_retire(0x2000);
    xml1_vitality_stream_reset();
#endif
    printf("PASS character section v%u: header, legacy versions, retail, cursor and rejection\n", XML1_CHARACTER_SECTION_VERSION);
    return 0;
}
