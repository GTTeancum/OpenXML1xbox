#ifndef XML1_PARSER_TEXT_ARENA_GUEST_H
#define XML1_PARSER_TEXT_ARENA_GUEST_H

/* 199DD0 allocates the parser's 0x1E000-byte literal arena. 19A060
 * publishes raw pointers into it, so reallocating/moving that arena would
 * invalidate earlier attributes. Append native-owned chunks instead.
 * 199E40 resets the parse generation; 199DB0 destroys it. Both release
 * overflow chunks at the same lifetime boundary as the retail literals.
 * Included only by the generated translation unit owning those methods. */
static uint32_t xml1_parser_text_chunks;
static uint32_t xml1_parser_text_start;
static uint32_t xml1_parser_text_end;
static uint32_t xml1_parser_text_live_chunks;
static uint32_t xml1_parser_text_expansions;
typedef struct Xml1ParserLiteral { uint32_t address, hash; } Xml1ParserLiteral;
static Xml1ParserLiteral *xml1_parser_literals;
static size_t xml1_parser_literal_capacity, xml1_parser_literal_count;

static uint32_t xml1_parser_literal_hash(uint32_t address)
{
    const unsigned char *s=(const unsigned char*)XBOX_PTR(address);
    uint32_t hash=2166136261u;
    while (*s) { hash^=*s++; hash*=16777619u; }
    return hash;
}

/* Retail already shares identical consecutive literal values (19A0CF).
 * Share nonconsecutive identical values too: repeated talent queries parse
 * the same descriptions while other XML documents keep the generation alive.
 * Entries own no strings and expire at exactly the arena's native boundary.
 * Compare bytes after the hash, preserving case and handling collisions. */
static uint32_t xml1_parser_text_find(uint32_t source)
{
    if (!xml1_parser_literal_capacity) return 0;
    uint32_t hash=xml1_parser_literal_hash(source);
    size_t slot=hash&(xml1_parser_literal_capacity-1);
    while (xml1_parser_literals[slot].address) {
        Xml1ParserLiteral entry=xml1_parser_literals[slot];
        if (entry.hash==hash && !strcmp((const char*)XBOX_PTR(entry.address),(const char*)XBOX_PTR(source)))
            return entry.address;
        slot=(slot+1)&(xml1_parser_literal_capacity-1);
    }
    return 0;
}

static void xml1_parser_text_publish(uint32_t address)
{
    if (xml1_parser_literal_count>=xml1_parser_literal_capacity/2) {
        size_t capacity=xml1_parser_literal_capacity?xml1_parser_literal_capacity*2:256;
        if (capacity<xml1_parser_literal_capacity || capacity>SIZE_MAX/sizeof(Xml1ParserLiteral)) abort();
        Xml1ParserLiteral *entries=(Xml1ParserLiteral*)calloc(capacity,sizeof(*entries));
        if (!entries) { fputs("[FATAL] parser literal index allocation\n",stderr); abort(); }
        for (size_t i=0;i<xml1_parser_literal_capacity;++i) if (xml1_parser_literals[i].address) {
            size_t slot=xml1_parser_literals[i].hash&(capacity-1);
            while(entries[slot].address) slot=(slot+1)&(capacity-1);
            entries[slot]=xml1_parser_literals[i];
        }
        free(xml1_parser_literals); xml1_parser_literals=entries; xml1_parser_literal_capacity=capacity;
    }
    uint32_t hash=xml1_parser_literal_hash(address);
    size_t slot=hash&(xml1_parser_literal_capacity-1);
    while(xml1_parser_literals[slot].address) slot=(slot+1)&(xml1_parser_literal_capacity-1);
    xml1_parser_literals[slot].address=address; xml1_parser_literals[slot].hash=hash;
    ++xml1_parser_literal_count;
}

static void xml1_parser_text_reset(void)
{
    uint32_t saved_ax=eax, saved_cx=ecx, saved_dx=edx, saved_sp=esp;
    free(xml1_parser_literals); xml1_parser_literals=NULL;
    xml1_parser_literal_capacity=xml1_parser_literal_count=0;
    if (xml1_parser_text_live_chunks)
        fprintf(stderr,"[XML TEXT ARENA RESET] live_chunks=%u nodes=%u\n",
            xml1_parser_text_live_chunks,MEM32(0x508558));
    while (xml1_parser_text_chunks) {
        uint32_t block=xml1_parser_text_chunks;
        xml1_parser_text_chunks=MEM32(block);
        --xml1_parser_text_live_chunks;
        PUSH32(esp,0xE); PUSH32(esp,block);
        PUSH32(esp,0x00199DB0u); RECOMP_ABI_CALL(0x001234F0u,sub_001234F0);
        esp+=8;
    }
    xml1_parser_text_start=xml1_parser_text_end=0;
    if (esp!=saved_sp) { fputs("[FATAL] parser text release ABI\n",stderr); abort(); }
    eax=saved_ax; ecx=saved_cx; edx=saved_dx;
}

static void xml1_parser_text_reserve(uint32_t source)
{
    uint32_t cursor=MEM32(0x5B76B0), base=MEM32(0x5B76BC);
    size_t length=strlen((const char*)XBOX_PTR(source))+1;
    if (!xml1_parser_text_end) {
        xml1_parser_text_start=base; xml1_parser_text_end=base+0x1E000u;
    }
    if (cursor>=xml1_parser_text_start && cursor<=xml1_parser_text_end &&
        length<=xml1_parser_text_end-cursor) return;

    /* Earlier strings remain in their original chunks until parser reset.
     * A single unusually long literal gets its own adequately sized chunk;
     * ordinary overflow grows in retail-sized blocks, without a mod cap. */
    if (length>UINT32_MAX-16u) { fputs("[FATAL] parser literal too large\n",stderr); abort(); }
    uint32_t capacity=length>0x1E000u?(uint32_t)length:0x1E000u;
    uint32_t saved_ax=eax, saved_cx=ecx, saved_dx=edx, saved_sp=esp;
    PUSH32(esp,0x2A); PUSH32(esp,0xE); PUSH32(esp,capacity+16u);
    PUSH32(esp,0x0019A116u); RECOMP_ABI_CALL(0x00123490u,sub_00123490);
    esp+=12;
    uint32_t block=eax;
    if (!block || esp!=saved_sp || (uint64_t)block+16u+capacity>UINT32_MAX) {
        fputs("[FATAL] parser text allocation/ABI\n",stderr); abort();
    }
    MEM32(block)=xml1_parser_text_chunks;
    xml1_parser_text_chunks=block;
    ++xml1_parser_text_live_chunks;
    ++xml1_parser_text_expansions;
    MEM32(0x5B76B0)=block+16u;
    xml1_parser_text_start=block+16u;
    xml1_parser_text_end=block+16u+capacity;
    if(xml1_parser_text_expansions<=8 || !(xml1_parser_text_expansions&255u))
        fprintf(stderr,"[XML TEXT ARENA] added=%u live_chunks=%u expansions=%u cursor=%08X block=%08X literal_bytes=%zu nodes=%u caller=%08X text=%.80s\n",
            capacity,xml1_parser_text_live_chunks,xml1_parser_text_expansions,cursor,block,length,
            MEM32(0x508558),MEM32(saved_sp+16),(const char*)XBOX_PTR(source));
    eax=saved_ax; ecx=saved_cx; edx=saved_dx;
}
#endif
