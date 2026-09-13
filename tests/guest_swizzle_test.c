#include "xbox_memory_layout.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>
extern ptrdiff_t g_xbox_mem_offset;
extern RECOMP_TLS uint32_t g_esp;
typedef void (*guest_fn)(void);
extern guest_fn recomp_lookup(uint32_t);
static unsigned morton(unsigned x,unsigned y,unsigned w,unsigned h) {
    unsigned address=0,out=0;
    for(unsigned bit=0;(1u<<bit)<w||(1u<<bit)<h;++bit) {
        if((1u<<bit)<w) address|=((x>>bit)&1u)<<out++;
        if((1u<<bit)<h) address|=((y>>bit)&1u)<<out++;
    }
    return address;
}
int xml1_swizzle_test(void) {
    uint8_t *memory=(uint8_t *)(uintptr_t)g_xbox_mem_offset;
    guest_fn swizzle=recomp_lookup(0x3A6D39);
    if(!swizzle) return 30;
    const unsigned cases[][4]={{32,16,32,16},{32,16,24,12},{1024,512,640,480}};
    for(unsigned c=0;c<3;++c) {
        unsigned w=cases[c][0],h=cases[c][1],rw=cases[c][2],rh=cases[c][3];
        uint32_t destination=c==2?0xF2000000:0x08400000;
        uint32_t *src=(uint32_t *)(memory+0x08000000),*dst=(uint32_t *)(memory+(c==2?0x82000000:destination));
        for(unsigned i=0;i<w*h;++i) src[i]=0xFF000000u|i;
        memset(dst,0xCD,w*h*4);
        uint32_t *rect=(uint32_t *)(memory+0x08800000),*point=rect+4;
        rect[0]=rect[1]=0;rect[2]=rw;rect[3]=rh;point[0]=point[1]=0;
        g_esp=0xF7FF00;
        uint32_t args[]={0xBEEF0001,0x08000000,w*4,0x08800000,destination,w,h,0x08800010,4};
        memcpy(memory+g_esp,args,sizeof(args));
        swizzle();
        if(g_esp!=0xF7FF24) {fprintf(stderr,"[TEST] Swizzle stack=%08X\n",g_esp);return 31;}
        for(unsigned y=0;y<h;++y) for(unsigned x=0;x<w;++x) {
            uint32_t expected=x<rw&&y<rh?src[y*w+x]:0xCDCDCDCD;
            uint32_t actual=dst[morton(x,y,w,h)];
            if(actual!=expected) {
                fprintf(stderr,"[TEST] Swizzle %ux%u rect%ux%u failed at(%u,%u): %08X expected %08X\n",w,h,rw,rh,x,y,actual,expected);return 32;
            }
        }
    }
    puts("[TEST] Original generated XGSwizzleRect passes full/partial rectangles including 640x480.");
    return 0;
}
