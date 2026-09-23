#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "raven_native_damage.h"
#include <stdio.h>
#include <string.h>
#define fp_push(v) do {double value=(v);g_fp_top=(g_fp_top+7)&7;g_fp_stack[g_fp_top]=value;}while(0)
#define fp_pop() (g_fp_top=(g_fp_top+1)&7)
#define fp_top() g_fp_stack[g_fp_top]
#define fp_st1() g_fp_stack[(g_fp_top+1)&7]
static void subtraction_block(void) {
#include "raven_physical_health_block.inc"
}
static void minimum_block(int capture_nonzero) {
    /* Generated frameless functions keep EBP local, including its epilogue. */
    uint32_t ebp=g_ebp;
    uint32_t _fa=0,_fb=0;int32_t _fas=0,_fbs=0;
    if(!capture_nonzero)goto loc_0005C539;
#include "raven_attack_minimum_block.inc"
}
static int context_scale_block(void) {
    uint32_t _fa=0,_fb=0;int32_t _fas=0,_fbs=0;
#include "raven_context_scale_block.inc"
    return 1; /* Native positive branch would continue at45B86. */
loc_00045C56: ;
    return 0;
}
int raven_physical_health_test(void) {
    const uint32_t original_sp=g_esp,frame=original_sp-0x200,actor=original_sp-0x5000;
    const int original_fp=g_fp_top;
    {
        const struct {float amount,scale,expected;int native,imported,positive;} cases[]={
            {0.25f,0.5f,0.125f,0,1,1},{0.25f,0,0,0,1,0},
            {-0.25f,0.5f,-0.125f,0,1,0},{0,0.5f,0,5,1,0},
            {0,0.5f,2,5,0,1},{0,0.5f,0,1,0,0}
        };
        for(unsigned i=0;i<sizeof(cases)/sizeof(cases[0]);++i){
            memset((void*)XBOX_PTR(frame),0,0x100);
            MEM16(actor+0x14)=(uint16_t)cases[i].native;
            uint64_t token=cases[i].imported?raven_native_damage_import_begin(1,actor,actor+0xC,cases[i].amount):0;
            g_esp=frame;g_esi=actor;fp_push(cases[i].scale);
            int positive=context_scale_block();
            double amount=raven_native_damage_amount(actor+0xC,SMEM16(actor+0x14));
            if(token)raven_native_damage_import_end(token);
            if(amount!=cases[i].expected||positive!=cases[i].positive||g_esp!=frame||g_fp_top!=original_fp){
                fprintf(stderr,"FAIL context scale case %u: amount=%g positive=%d\n",i,amount,positive);
                g_esp=original_sp;return 4;
            }
        }
        puts("PASS generated late context scaling and positive gate: fractional/zero/negative imported damage, native rounding, stack balance");
    }
    {
        const uint32_t record=actor+0x500;
        const struct {float input,factor,expected;int native,imported;} checks[]={
            {0.25f,1,0.25f,0,1},{1.5f,0.5f,0.75f,1,1},
            {1.5f,0,1,1,1},{0,0.5f,1,1,0},{0,0.5f,2,4,0}
        };
        for(unsigned i=0;i<sizeof(checks)/sizeof(checks[0]);++i) {
            memset((void*)XBOX_PTR(frame),0,0x100);
            MEM16(record+8)=(uint16_t)checks[i].native;
            MEMF(frame+0x2C)=checks[i].factor;MEM8(frame+0x28)=1;
            uint64_t token=checks[i].imported?raven_native_damage_import_begin(1,actor,record,checks[i].input):0;
            g_esp=frame;g_edi=record;minimum_block(0);
            const double amount=raven_native_damage_amount(record,SMEM16(record+8));
            if(token)raven_native_damage_import_end(token);
            if(amount!=checks[i].expected||g_esp!=frame+0x38||g_fp_top!=original_fp){
                fprintf(stderr,"FAIL attack minimum case %u: amount=%g expected=%g stack=%08X\n",i,amount,(double)checks[i].expected,g_esp);
                g_esp=original_sp;return 2;
            }
        }
        puts("PASS generated attack scaling/minimum: positive fractions retained, zero-result minimum preserved, ordinary integer behavior and stack balance");
        /* Type1 takes the native direct-scale path. Execute the original
           nonzero capture as well, rather than supplying its result. */
        const struct {float input,expected;int native,imported;} captures[]={
            {0.25f,0.25f,0,1},{0,0,5,1},{-0.25f,1,0,1},
            {0,0,0,0},{0,5,5,0},{0,1,-2,0}
        };
        for(unsigned i=0;i<sizeof(captures)/sizeof(captures[0]);++i){
            memset((void*)XBOX_PTR(frame),0,0x100);
            MEM16(record+8)=(uint16_t)captures[i].native;
            uint64_t token=captures[i].imported?raven_native_damage_import_begin(1,actor,record,captures[i].input):0;
            g_esp=frame;g_edi=record;g_esi=1;minimum_block(1);
            const double amount=raven_native_damage_amount(record,SMEM16(record+8));
            if(token)raven_native_damage_import_end(token);
            if(amount!=captures[i].expected||g_esp!=frame+0x38||g_fp_top!=original_fp){
                fprintf(stderr,"FAIL attack nonzero capture case %u: amount=%g expected=%g\n",i,amount,(double)captures[i].expected);
                g_esp=original_sp;return 3;
            }
        }
        puts("PASS generated attack nonzero capture through minimum: imported fractions/zero/negative and native zero/positive/negative");
    }
    const struct {float health,damage,expected;int native,imported;} cases[]={
        {10,0,5,5,0},{10,0.25f,9.75f,0,1},{10,10.5f,-0.5f,10,1},
        {99,-2.75f,100,-2,1},{10,0,10,5,1},{10,0,12,-2,0}
    };
    for(unsigned i=0;i<sizeof(cases)/sizeof(cases[0]);++i) {
        memset((void*)XBOX_PTR(frame),0,0x100);memset((void*)XBOX_PTR(actor),0,0x400);
        MEM32(actor)=0x3C9204;MEM16(actor+0x246)=100;MEMF(actor+0x240)=cases[i].health;
        MEM16(frame+0x28)=(uint16_t)cases[i].native;
        uint64_t token=cases[i].imported?raven_native_damage_import_begin(1,actor,frame+0x20,cases[i].damage):0;
        g_esp=frame;g_esi=actor;subtraction_block();
        if(token)raven_native_damage_import_end(token);
        if(g_esp!=frame||g_fp_top!=original_fp||MEMF(actor+0x240)!=cases[i].expected){
            fprintf(stderr,"FAIL physical subtraction case %u: health=%g expected=%g\n",i,(double)MEMF(actor+0x240),(double)cases[i].expected);
            g_esp=original_sp;return 1;
        }
    }
    g_esp=original_sp;
    puts("PASS generated physical subtraction + native health setter: fractional loss, lethal result, healing cap, imported zero, native integer fallback and stack balance");
    return 0;
}
