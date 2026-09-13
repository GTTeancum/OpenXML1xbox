#define RECOMP_GENERATED_CODE
#include "recomp_types.h"
#include <stdio.h>
#include <float.h>
RECOMP_TLS double g_fp_stack[8];
RECOMP_TLS int g_fp_top, g_fp_cmp;
RECOMP_TLS uint16_t g_fp_cc;
RECOMP_TLS uint32_t g_eax;
#define fp_top() g_fp_stack[g_fp_top]
#include "x87-status-fixture.inc"
int main(void) {
    /* Intel FXAM table, for values representable by this double-backed stack.
       A loaded binary64 subnormal is normal in the wider x87 exponent range. */
    const double values[]={0.0,1.0,4.712,DBL_MIN,0x1p-1074,INFINITY,NAN};
    const uint16_t classes[]={0x4000,0x0400,0x0400,0x0400,0x0400,0x0500,0x0100};
    unsigned count=0;
    for(unsigned top=0;top<8;++top) for(unsigned i=0;i<7;++i) for(unsigned sign=0;sign<2;++sign) {
        g_fp_top=top; fp_top()=copysign(values[i],sign?-1.0:1.0);
        double before=fp_top(); g_fp_cmp=2; g_fp_cc=0x4500;
        examine(); /* A separate lifted function must observe this state. */
        g_eax=0xABCD1234; status();
        uint32_t expected=0xABCD0000u|(top<<11)|classes[i]|(sign?0x200:0);
        if(g_eax!=expected || g_fp_top!=top || memcmp(&before,&fp_top(),8)) {
            fprintf(stderr,"FXAM failure top=%u case=%u sign=%u actual=%08x expected=%08x\n",top,i,sign,g_eax,expected); return 1;
        }
        test_zero(); status();
        uint16_t compare=i==6?0x4500:i==0?0x4000:sign?0x100:0;
        if((g_eax&0xFFFF)!=(uint16_t)((top<<11)|compare)) return 2;
        ++count;
    }
    printf("PASS: %u FXAM sign/class/TOP/preservation and following FTST status cases\n",count);
    return 0;
}
