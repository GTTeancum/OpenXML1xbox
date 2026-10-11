#include "engine/progression/talent_slot_layout.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
static void test_compact(void) {
    struct {unsigned char left[8],text[128],right[8];} guarded;
    for(unsigned count=1;count<=63;++count)for(unsigned filled=0;filled<=count;++filled) {
        memset(&guarded,0xa5,sizeof(guarded));guarded.text[0]=0;
        for(unsigned i=0;i<count;++i) {
            size_t at=strlen((char*)guarded.text);
            assert(at+7<sizeof(guarded.text));
            memcpy(guarded.text+at,i<filled?"~19":"~00",3);
            guarded.text[at+3]=(unsigned char)(0xb3+i%10);
            memcpy(guarded.text+at+4,"~00",4);
            xml1_talent_slot_compact(guarded.text,sizeof(guarded.text));
        }
        unsigned seen=0;int color=-1;
        for(size_t i=0;guarded.text[i];++i) {
            if(guarded.text[i]=='~') {
                color=(guarded.text[i+1]-'0')*10+guarded.text[i+2]-'0';i+=2;
            }else {
                assert(guarded.text[i]==0xb3+seen%10);
                assert(color==(seen<filled?19:0));++seen;
            }
        }
        assert(seen==count&&color==0);
        unsigned char before[128];memcpy(before,guarded.text,128);
        xml1_talent_slot_compact(guarded.text,128);
        assert(!strcmp((char*)before,(char*)guarded.text));
        for(unsigned i=0;i<8;++i)assert(guarded.left[i]==0xa5&&guarded.right[i]==0xa5);
    }
    /* Invalid or unterminated input is untouched, including incomplete codes. */
    const char *invalid[]={"~0","~x1","ordinary text","~~","~00x"};
    for(unsigned i=0;i<sizeof(invalid)/sizeof(*invalid);++i) {
        strcpy((char*)guarded.text,invalid[i]);
        xml1_talent_slot_compact(guarded.text,128);
        assert(!strcmp((char*)guarded.text,invalid[i]));
    }
    memset(guarded.text,0xb3,128);xml1_talent_slot_compact(guarded.text,128);
    for(unsigned i=0;i<128;++i)assert(guarded.text[i]==0xb3);
}
int main(void) {
    test_compact();
    unsigned char text[256];
    assert(xml1_talent_slot_scale(NULL,0)==1);
    assert(xml1_talent_slot_scale((const unsigned char*)"Ordinary text",13)==1);
    for(unsigned n=1;n<=63;++n) {
        size_t at=0;
        memcpy(text,"Power\t",6);at=6;
        for(unsigned i=0;i<n;++i) {
            if(i==n/2){memcpy(text+at,"~03",3);at+=3;}
            text[at++]=(unsigned char)(0xb3+i%10);
        }
        text[at]=0;
        float scale=xml1_talent_slot_scale(text,at+1);
        assert(fabsf(scale-(n>5?5.0f/n:1.0f))<0.000001f);
        assert(fabsf(n*scale-(n>5?5.0f:(float)n))<0.000001f);
    }
    /* A second row is independent, and a bounded/nonterminated buffer is safe. */
    memset(text,0xb5,5);text[5]='\n';memset(text+6,0xb8,5);text[11]=0;
    assert(xml1_talent_slot_scale(text,12)==1);
    memset(text,0xb5,sizeof(text));
    assert(xml1_talent_slot_scale(text,5)==1);
    assert(xml1_talent_slot_scale(text,20)==0.25f);
    puts("PASS: original slot glyph layout, ranks 1-63, colour changes and bounds");
    return 0;
}
