#include "engine/progression/raven_xml1_talent_view.h"
#include <string.h>
#include "engine/progression/character_talent_record.h"
#include "engine/progression/character_talent_map_owner.h"
#include "engine/progression/talent_registry_layout.h"
#ifndef XML1_EXPANDED_TALENT_REGISTRY
#define TALENT_NAME_VALUES 0x1C58u
#else
#define TALENT_NAME_VALUES XML1_TALENT_NAME_VALUES
#endif

#define END_NODE 0x3FFFFFFFu
static int bytes(raven_guest_read read,void *ctx,uint32_t base,uint64_t offset,void *out,size_t n) {
    uint64_t address=(uint64_t)base+offset;
    if(!read||!base||address+n>0x100000000ull)return 0;
    return read(ctx,(uint32_t)address,out,n);
}
static int word(raven_guest_read read,void *ctx,uint32_t base,uint64_t offset,uint32_t *out) {
    uint8_t b[4];
    if(!bytes(read,ctx,base,offset,b,4))return 0;
    *out=(uint32_t)b[0]|((uint32_t)b[1]<<8)|((uint32_t)b[2]<<16)|((uint32_t)b[3]<<24);
    return 1;
}
static unsigned fold(unsigned c) {return c>='A'&&c<='Z'?c+('a'-'A'):c;}
raven_lookup raven_xml1_talent_id(raven_guest_read read,void *ctx,uint32_t system,const char *name,uint8_t *id) {
    uint32_t node;
    unsigned length=0,steps;
    if(!name||!id)return RAVEN_INVALID;
    for(;length<32&&name[length];++length)if((unsigned char)name[length]>=128)return RAVEN_INVALID;
    if(!length||length==32)return RAVEN_INVALID;
    /* CTalentSystem::name lookup 000B4D90 copies at most 31 bytes, searches
     * the case-insensitive tree at system+4 (000B3B30), then reads its byte
     * ID array. Reject oversized input rather than aliasing a truncated name.
     * Only ASCII identifiers are supported; no invented locale folding. */
    if(!word(read,ctx,system,8,&node))return RAVEN_INVALID;
    for(steps=0;node!=END_NODE&&steps<256;++steps) {
        char stored[32];
        uint64_t at=4ull+(uint64_t)node*0x2C;
        int cmp=0;
        unsigned i;
        if(!bytes(read,ctx,system,at+0x18,stored,sizeof(stored)))return RAVEN_INVALID;
        if(!memchr(stored,0,sizeof(stored)))return RAVEN_INVALID;
        for(i=0;i<32;++i) {
            unsigned a=(unsigned char)name[i],b=(unsigned char)stored[i];
            if(b>=128)return RAVEN_INVALID;
            cmp=(int)fold(a)-(int)fold(b);
            if(cmp||!a)break;
        }
        if(!cmp) {
            uint8_t value;
            if(!bytes(read,ctx,system,4ull+node+TALENT_NAME_VALUES,&value,1))return RAVEN_INVALID;
            if(value==255)return RAVEN_MISSING;
            *id=value;return RAVEN_FOUND;
        }
        if(!word(read,ctx,system,at+(cmp<0?0x10:0x14),&node))return RAVEN_INVALID;
    }
    return node==END_NODE?RAVEN_MISSING:RAVEN_INVALID;
}
static raven_lookup talent_rank(raven_guest_read read,void *ctx,uint32_t stats,uint8_t id,uint8_t *rank,int effective) {
    uint32_t node;
    unsigned steps;
    if(!rank||id==255||!stats||stats>UINT32_MAX-0x30u)return RAVEN_INVALID;
    /* 00040DB0 -> 000B3BE0: byte-keyed tree at stats+0x30. The build must
     * select the same record representation as the generated native methods. */
    uint32_t original=stats+0x30u;
    uint32_t map=xml1_character_map_current_resolve(original);
    unsigned capacity=map==original?16u:XML1_CHARACTER_TALENT_MAP_CAPACITY;
    uint32_t values=map==original?0x168u:XML1_CHARACTER_TALENT_MAP_VALUES;
    if(!word(read,ctx,map,4,&node))return RAVEN_INVALID;
    for(steps=0;node!=END_NODE&&steps<256;++steps) {
        uint8_t key;
        if(node>=capacity)return RAVEN_INVALID;
        uint64_t at=(uint64_t)node*16;
        if(!bytes(read,ctx,map,at+0x18,&key,1))return RAVEN_INVALID;
        if(key==id) {
#ifdef XML1_EXPANDED_TALENT_RECORDS
            uint32_t value;
            if(!word(read,ctx,map,(uint64_t)node*4+values,&value)||
               (value&~XML1_TALENT_RECORD_MASK))return RAVEN_INVALID;
            *rank=(uint8_t)(xml1_talent_record_get(value,XML1_TALENT_CURRENT)+
                (effective?xml1_talent_record_get(value,XML1_TALENT_BONUS):0));
            return RAVEN_FOUND;
#else
            uint8_t value[2];
            if(!bytes(read,ctx,map,(uint64_t)node*4+values,value,effective?2:1))return RAVEN_INVALID;
            *rank=(value[0]&15)+(effective?(value[1]&15):0);return RAVEN_FOUND;
#endif
        }
        if(!word(read,ctx,map,at+(id<key?0x10:0x14),&node))return RAVEN_INVALID;
    }
    return node==END_NODE?RAVEN_MISSING:RAVEN_INVALID;
}
raven_lookup raven_xml1_talent_rank(raven_guest_read read,void *ctx,uint32_t stats,uint8_t id,uint8_t *rank) {
    return talent_rank(read,ctx,stats,id,rank,0);
}
raven_lookup raven_xml1_talent_effective_rank(raven_guest_read read,void *ctx,uint32_t stats,uint8_t id,uint8_t *rank) {
    return talent_rank(read,ctx,stats,id,rank,1);
}
