#pragma once
#include <stddef.h>
#include <string.h>
/* Xbox palette entries are packed ARGB words (BGRA bytes on little-endian
 * hosts), matching Windows D3DFMT_A8R8G8B8 including palette alpha. */
static void xml1_expand_palette_row(unsigned char *destination,
    const unsigned char *indices,size_t count,const unsigned char palette[1024]) {
    for(size_t x=0;x<count;++x)memcpy(destination+x*4,palette+indices[x]*4,4);
}
