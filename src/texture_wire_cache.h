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
} xml1_texture_wire_cache;

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
}
