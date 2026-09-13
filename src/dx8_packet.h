#pragma once
#include <stdint.h>
#include <stddef.h>
/* Version6 packs the explicit mip count above the low-byte Xbox format. Older
 * packets carry a bare format and therefore represent one level. */
static unsigned xml1_texture_levels(uint32_t format) { return (format>>8)?(format>>8):1; }
static size_t xml1_texture_level_bytes(unsigned width,unsigned height,unsigned format) {
    return format==14?(size_t)((width+3)/4)*((height+3)/4)*16:(size_t)width*height*(format==6?4:1);
}
static size_t xml1_texture_bytes(unsigned width,unsigned height,uint32_t packed) {
    unsigned format=packed&255,levels=xml1_texture_levels(packed),max_levels=1;
    if(!width||!height||width>4096||height>4096||(format!=0&&format!=6&&format!=14&&format!=25)) return 0;
    for(unsigned n=width>height?width:height;n>1;n>>=1) ++max_levels;
    if(levels>max_levels) return 0;
    size_t total=0;
    for(unsigned level=0;level<levels;++level) {
        total+=xml1_texture_level_bytes(width,height,format);
        width=width>1?width/2:1; height=height>1?height/2:1;
    }
    return total;
}
/* Fixed-function XYZ, optional normal/diffuse, and zero or one 2D UV set. */
static unsigned xml1_fvf_stride(uint32_t fvf) {
    if((fvf&~0x152u)||!(fvf&2)) return 0;
    return 12+((fvf&0x10)?12:0)+((fvf&0x40)?4:0)+((fvf&0x100)?8:0);
}
