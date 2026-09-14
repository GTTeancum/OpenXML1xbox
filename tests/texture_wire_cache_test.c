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
    puts("PASS: exact texture reuse, mutation, dimensions, frame reset and bounded fallback");return 0;
}
