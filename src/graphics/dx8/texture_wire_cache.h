#pragma once
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#define XML1_WIRE_TEXTURE_SLOTS 256u
#define XML1_WIRE_TEXTURE_LIMIT (64u*1024u*1024u)
#define XML1_WIRE_TEXTURE_DEFINE 0x80000000u
typedef struct {
    uint32_t address,width,height,packed;
    size_t bytes;
    unsigned char *pixels;
} xml1_wire_texture;
typedef struct {
    xml1_wire_texture entries[XML1_WIRE_TEXTURE_SLOTS];
    unsigned count;
    int full;
    size_t bytes;
    uint64_t requests,references,avoided_bytes;
    uint64_t stamp[XML1_WIRE_TEXTURE_SLOTS], clock, replacements, compared_bytes;
    unsigned evicted[XML1_WIRE_TEXTURE_SLOTS], evicted_count;
    unsigned heads[512], next[XML1_WIRE_TEXTURE_SLOTS];
} xml1_texture_wire_cache;

static unsigned xml1_wire_bucket(uint32_t address) {return ((address>>4)*2654435761u)>>23;}
static void xml1_wire_evict(xml1_texture_wire_cache *cache,unsigned slot) {
    xml1_wire_texture *entry=&cache->entries[slot];
    unsigned *link=&cache->heads[xml1_wire_bucket(entry->address)];
    while(*link && *link!=slot+1)link=&cache->next[*link-1];
    if(*link)*link=cache->next[slot];
    cache->evicted[cache->evicted_count++]=slot+1;
    cache->bytes-=entry->bytes;free(entry->pixels);memset(entry,0,sizeof(*entry));
    cache->stamp[slot]=0;cache->next[slot]=0;++cache->replacements;
}
/* V9 evicts individual tokens in stream order instead of clearing every
 * texture at a frame boundary. Immutable snapshots still prove exact equality:
 * mapped Xbox aliases cannot safely use VirtualAlloc write-watch tracking.
 * Address buckets avoid rescanning the whole dictionary on every draw. */
static uint32_t xml1_texture_wire_token_v9(xml1_texture_wire_cache *cache,
    uint32_t address,unsigned width,unsigned height,uint32_t packed,
    const void *pixels,size_t bytes) {
    cache->evicted_count=0;++cache->requests;
    if(!bytes || bytes>XML1_WIRE_TEXTURE_LIMIT)return 0;
    unsigned bucket=xml1_wire_bucket(address),slot=XML1_WIRE_TEXTURE_SLOTS;
    for(unsigned id=cache->heads[bucket];id;id=cache->next[id-1]) {
        xml1_wire_texture *entry=&cache->entries[id-1];
        if(entry->address!=address)continue;
        slot=id-1;
        if(entry->width==width && entry->height==height && entry->packed==packed && entry->bytes==bytes) {
            cache->compared_bytes+=bytes;
            if(!memcmp(entry->pixels,pixels,bytes)) {
                ++cache->references;cache->avoided_bytes+=bytes;cache->stamp[slot]=++cache->clock;return id;
            }
        }
        break;
    }
    unsigned char *copy=(unsigned char*)malloc(bytes);if(!copy)return 0;
    memcpy(copy,pixels,bytes);
    if(slot<XML1_WIRE_TEXTURE_SLOTS)xml1_wire_evict(cache,slot);
    if(slot==XML1_WIRE_TEXTURE_SLOTS) {
        for(unsigned i=0;i<XML1_WIRE_TEXTURE_SLOTS;++i)if(!cache->entries[i].pixels){slot=i;break;}
        if(slot==XML1_WIRE_TEXTURE_SLOTS) {
            slot=0;for(unsigned i=1;i<XML1_WIRE_TEXTURE_SLOTS;++i)if(cache->stamp[i]<cache->stamp[slot])slot=i;
            xml1_wire_evict(cache,slot);
        }
    }
    while(cache->bytes>XML1_WIRE_TEXTURE_LIMIT-bytes) {
        unsigned victim=XML1_WIRE_TEXTURE_SLOTS;
        for(unsigned i=0;i<XML1_WIRE_TEXTURE_SLOTS;++i)if(cache->entries[i].pixels &&
            (victim==XML1_WIRE_TEXTURE_SLOTS || cache->stamp[i]<cache->stamp[victim]))victim=i;
        if(victim==XML1_WIRE_TEXTURE_SLOTS){free(copy);return 0;}
        xml1_wire_evict(cache,victim);
    }
    xml1_wire_texture *entry=&cache->entries[slot];
    entry->address=address;entry->width=width;entry->height=height;entry->packed=packed;entry->bytes=bytes;entry->pixels=copy;
    cache->bytes+=bytes;cache->stamp[slot]=++cache->clock;
    cache->next[slot]=cache->heads[bucket];cache->heads[bucket]=slot+1;
    if(cache->count<=slot)cache->count=slot+1;
    return XML1_WIRE_TEXTURE_DEFINE|(slot+1);
}

/* References last until an explicit dictionary reset. Full byte equality catches
 * texture mutation and reuse of a guest allocation; addresses are not versions. */
static uint32_t xml1_texture_wire_token(xml1_texture_wire_cache *cache,
    uint32_t address,unsigned width,unsigned height,uint32_t packed,
    const void *pixels,size_t bytes) {
    ++cache->requests;
    for(unsigned i=0;i<cache->count;++i) {
        xml1_wire_texture *entry=&cache->entries[i];
        if(entry->address==address && entry->width==width && entry->height==height &&
           entry->packed==packed && entry->bytes==bytes && !memcmp(entry->pixels,pixels,bytes)) {
            ++cache->references;cache->avoided_bytes+=bytes;
            return i+1;
        }
    }
    /* Token0 is an inline texture when the bounded dictionary is full. */
    if(!bytes || cache->count==XML1_WIRE_TEXTURE_SLOTS || bytes>XML1_WIRE_TEXTURE_LIMIT-cache->bytes) {
        cache->full=1;
        return 0;
    }
    unsigned char *copy=(unsigned char*)malloc(bytes);
    if(!copy) return 0;
    memcpy(copy,pixels,bytes);
    xml1_wire_texture *entry=&cache->entries[cache->count++];
    entry->address=address;entry->width=width;entry->height=height;entry->packed=packed;
    entry->bytes=bytes;entry->pixels=copy;cache->bytes+=bytes;
    return XML1_WIRE_TEXTURE_DEFINE|cache->count;
}
static void xml1_texture_wire_reset(xml1_texture_wire_cache *cache) {
    for(unsigned i=0;i<cache->count;++i) free(cache->entries[i].pixels);
    cache->count=0;cache->bytes=0;cache->full=0;
    memset(cache->entries,0,sizeof(cache->entries));memset(cache->stamp,0,sizeof(cache->stamp));
    memset(cache->heads,0,sizeof(cache->heads));memset(cache->next,0,sizeof(cache->next));cache->evicted_count=0;
}
