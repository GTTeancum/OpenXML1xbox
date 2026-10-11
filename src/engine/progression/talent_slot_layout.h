#pragma once
#include <stddef.h>

/* XML1 169200 emits the original font's B3..BC slot glyphs. Keep their
 * textures, vertical size and fill/highlight states; only long runs need a
 * narrower horizontal footprint. Use the same factor in metrics and drawing.
 * Ordinary text, including extended characters, must not be compressed. */
static inline int xml1_talent_slot_glyph(unsigned char c) {
    return c>=0xb3 && c<=0xbc;
}
/* 169200 builds a strip in a 128-byte local, appending ~dd, one slot, ~00
 * repeatedly. Compact after each append so extended ranks fit without
 * changing that stack layout. Delay colour output until a glyph needs it;
 * retain the final colour state for text following the strip. Reject any
 * other grammar before writing, and never read beyond the supplied buffer. */
static inline void xml1_talent_slot_compact(unsigned char *text,size_t size) {
    size_t length=0,read=0,write=0;
    int active=-1,pending=-1;
    if(!text)return;
    while(length<size&&text[length])++length;
    if(length==size)return;
    for(size_t i=0;i<length;++i) {
        if(xml1_talent_slot_glyph(text[i]))continue;
        if(text[i]!='~'||i+2>=length||text[i+1]<'0'||text[i+1]>'9'||
           text[i+2]<'0'||text[i+2]>'9')return;
        i+=2;
    }
    while(read<length) {
        if(text[read]=='~') {
            pending=(text[read+1]-'0')*10+text[read+2]-'0';read+=3;
        }else {
            unsigned char glyph=text[read++];
            if(pending>=0&&pending!=active) {
                text[write++]='~';text[write++]=(unsigned char)('0'+pending/10);
                text[write++]=(unsigned char)('0'+pending%10);active=pending;
            }
            text[write++]=glyph;
        }
    }
    if(pending>=0&&pending!=active) {
        text[write++]='~';text[write++]=(unsigned char)('0'+pending/10);
        text[write++]=(unsigned char)('0'+pending%10);
    }
    text[write]=0;
}
static inline float xml1_talent_slot_scale(const unsigned char *text,size_t size) {
    size_t run=0,longest=0;
    if(!text)return 1.0f;
    for(size_t i=0;i<size&&text[i];++i) {
        if(xml1_talent_slot_glyph(text[i])) {
            ++run;if(run>longest)longest=run;
        }else if(text[i]=='~') {
            /* Native colour commands are ~0..~99 or ~~. They do not break
             * the filled/pending/empty portions of one rank strip. */
            if(i+1<size&&text[i+1]=='~')++i;
            else if(i+1<size&&text[i+1]>='0'&&text[i+1]<='9') {
                ++i;
                if(i+1<size&&text[i+1]>='0'&&text[i+1]<='9')++i;
            }else run=0;
        }else run=0;
    }
    return longest>5?5.0f/(float)longest:1.0f;
}
