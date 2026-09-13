#define RECOMP_GENERATED_CODE
#include "recomp_types.h"
#include <stdio.h>
RECOMP_TLS uint32_t g_eax, g_ecx, g_edx, g_ebx, g_esi, g_edi, g_esp;
#include "flags-fixture.inc"
int main(void)
{
    const uint32_t saved_cases[]={0,1,2,0x7f,0x80,0xff,0x7fff,0x8000,0xffff,0x7fffffff,0x80000000,0xffffffff};
    unsigned fixture=0;
    for(unsigned width=8;width<=32;width*=2) for(unsigned increment=0;increment<2;++increment) {
        uint32_t mask=width==32?0xffffffffu:(1u<<width)-1, sign=1u<<(width-1);
        for(unsigned condition=0;condition<4;++condition,++fixture) for(unsigned i=0;i<12;++i) {
            uint32_t before=saved_cases[i]&mask, result=(before+(increment?1:0xffffffffu))&mask;
            unsigned sf=(result&sign)!=0, of=increment?before==sign-1:before==sign;
            unsigned expected=condition==0?result==0:condition==1?sf:condition==2?of:sf!=of;
            g_eax=saved_cases[i];g_esp=1024;saved_incdec_fixtures[fixture]();
            if(g_eax!=expected || g_esp!=1028) { fprintf(stderr,"Saved INC/DEC failure width=%u increment=%u condition=%u input=%x actual=%u expected=%u\n",width,increment,condition,saved_cases[i],g_eax,expected);return 1; }
        }
    }
    const uint32_t values[] = {0, 1, 255, 0x7FFFFFFF, 0x80000000, 0xFFFFFFFF, 0x12345678};
    unsigned count = 288; /* Saved-result cases above. */
    for (unsigned kind = 0; kind < 2; ++kind)
    for (unsigned path = 0; path < 2; ++path)
    for (unsigned i = 0; i < 7; ++i)
    for (unsigned j = 0; j < 7; ++j) {
        g_eax = values[i]; g_edx = values[j]; g_ebx = ~values[i];
        g_esi = values[j]; g_ecx = path; g_edi = 0xCAFEBABE; g_esp = 1024;
        uint32_t condition = path ? g_eax != g_edx : g_ebx != g_esi;
        uint32_t expected = kind ? (condition ? g_edi : g_eax) : ((g_eax & 0xFFFFFF00u) | condition);
        if (kind) fixture_cmovne(); else fixture_setne();
        if (g_eax != expected || g_esp != 1028) {
            fprintf(stderr, "FAIL kind=%u path=%u i=%u j=%u result=%08X expected=%08X\n",
                    kind, path, i, j, g_eax, expected);
            return 1;
        }
        ++count;
    }
    for(unsigned kind=0;kind<8;++kind)
    for(unsigned i=0;i<7;++i)
    for(unsigned j=0;j<7;++j)
    for(unsigned k=0;k<7;++k) {
        g_eax=values[i];g_edx=values[j];g_esi=values[k];g_esp=1024;
        unsigned mask=kind&4?255:0xFFFFFFFFu;
        unsigned result=(g_eax+(kind&1?1:0xFFFFFFFFu))&mask;
        unsigned carry=(uint64_t)g_edx+g_esi>0xFFFFFFFFu;
        unsigned expected=kind&2?(carry||result==0):(!carry&&result!=0);
        incdec_fixtures[kind]();
        if(g_eax!=expected||g_esp!=1028) {
            fprintf(stderr,"FAIL INCDEC kind=%u i=%u j=%u k=%u result=%u expected=%u\n",kind,i,j,k,g_eax,expected);return 2;
        }
        ++count;
    }
    printf("PASS: %u executed translated comparison-join and INC/DEC carry cases.\n", count);
    return 0;
}
