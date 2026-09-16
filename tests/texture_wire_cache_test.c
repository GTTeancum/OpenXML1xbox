#include "texture_wire_cache.h"
#include <stdio.h>
int main(void) {
    xml1_texture_wire_cache cache={0}; unsigned char pixels[16]={0};
    uint32_t first=xml1_texture_wire_token(&cache,100,2,2,6,pixels,16);
    if(first!=(XML1_WIRE_TEXTURE_DEFINE|1)) return 1;
    if(xml1_texture_wire_token(&cache,100,2,2,6,pixels,16)!=1) return 2;
    pixels[15]=1; /* Last byte changes; an address-only cache misses this. */
    if(xml1_texture_wire_token(&cache,100,2,2,6,pixels,16)!=(XML1_WIRE_TEXTURE_DEFINE|2))return 3;
    pixels[15]=0;
    if(xml1_texture_wire_token(&cache,100,2,2,6,pixels,16)!=1)return 4;
    if(xml1_texture_wire_token(&cache,100,1,4,6,pixels,16)!=(XML1_WIRE_TEXTURE_DEFINE|3))return 5;
    for(unsigned i=3;i<256;++i) if(xml1_texture_wire_token(&cache,1000+i,2,2,6,pixels,16)!=(XML1_WIRE_TEXTURE_DEFINE|i+1))return 6;
    if(xml1_texture_wire_token(&cache,10000,2,2,6,pixels,16)!=0)return 7;
    if(cache.count!=256 || cache.bytes!=4096)return 8;
    xml1_texture_wire_reset(&cache);
    if(cache.count || cache.bytes)return 9;
    if(xml1_texture_wire_token(&cache,100,2,2,6,pixels,16)!=first)return 10;
    xml1_texture_wire_reset(&cache);
    /* A rejected oversized entry must not read its supplied pixels. */
    if(xml1_texture_wire_token(&cache,100,4096,4096,6,pixels,XML1_WIRE_TEXTURE_LIMIT+1)!=0)return 11;
    xml1_texture_wire_reset(&cache);
    uint32_t token=xml1_texture_wire_token_v9(&cache,100,2,2,6,pixels,16);
    if(token!=first || cache.evicted_count)return 12;
    pixels[15]=2;
    if(xml1_texture_wire_token_v9(&cache,100,2,2,6,pixels,16)!=first || cache.evicted_count!=1 || cache.evicted[0]!=1)return 13;
    if(xml1_texture_wire_token_v9(&cache,100,2,2,6,pixels,16)!=1 || cache.evicted_count)return 14;
    for(unsigned i=1;i<256;++i)xml1_texture_wire_token_v9(&cache,1000+i,2,2,6,pixels,16);
    if(xml1_texture_wire_token_v9(&cache,100,2,2,6,pixels,16)!=1)return 15;
    token=xml1_texture_wire_token_v9(&cache,9000,2,2,6,pixels,16);
    if(token!=(XML1_WIRE_TEXTURE_DEFINE|2) || cache.evicted_count!=1 || cache.evicted[0]!=2 || cache.bytes!=4096)return 16;
    if(xml1_texture_wire_token_v9(&cache,100,2,2,6,pixels,16)!=1)return 17;
    for(unsigned i=0;i<2000;++i) {pixels[15]=(unsigned char)i;xml1_texture_wire_token_v9(&cache,9000,2,2,6,pixels,16);}
    if(cache.bytes!=4096 || cache.full)return 18;
    xml1_texture_wire_reset(&cache);
    /* One larger definition can evict several entries to fit the byte budget.
     * Every retired ID must travel to the receiver, in order, before reuse. */
    size_t chunk=XML1_WIRE_TEXTURE_LIMIT/4;
    unsigned char *large=(unsigned char*)calloc(1,XML1_WIRE_TEXTURE_LIMIT);
    if(!large)return 19;
    for(unsigned i=0;i<4;++i)
        if(xml1_texture_wire_token_v9(&cache,200+i,1,1,6,large,chunk)!=(XML1_WIRE_TEXTURE_DEFINE|i+1))return 20;
    if(xml1_texture_wire_token_v9(&cache,999,1,1,6,large,chunk*3)!=(XML1_WIRE_TEXTURE_DEFINE|5) ||
       cache.evicted_count!=3 || cache.evicted[0]!=1 || cache.evicted[1]!=2 || cache.evicted[2]!=3 ||
       cache.bytes!=XML1_WIRE_TEXTURE_LIMIT)return 21;
    if(xml1_texture_wire_token_v9(&cache,203,1,1,6,large,chunk)!=4 || cache.evicted_count)return 22;
    xml1_texture_wire_reset(&cache);free(large);
    puts("PASS: exact texture reuse, mutation, dimensions, reset, bounded fallback and v9 individual LRU replacement");return 0;
}
