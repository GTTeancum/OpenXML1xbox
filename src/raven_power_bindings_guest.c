#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "raven_power_bindings_guest.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

static int readable(uint32_t address,unsigned size) {
    return address>=0x10000u && (uint64_t)address+size<=0x08000000ull;
}
static unsigned trace_melee_lookup;
void xml1_raven_move_search_trace(uint32_t site,uint32_t slot,uint32_t container,uint32_t candidate,uint32_t value) {
    static unsigned count;
    if(trace_melee_lookup && count++<96)
        fprintf(stderr,"[RAVEN MOVE SEARCH] site=%08X slot=%u container=%08X candidate=%08X value=%08X\n",
            site,slot,container,candidate,value);
}
static const uint32_t defaults[]={0x4F33B4,0x4F3384,0x4F33A0,0x4F3374};
static void lookup(uint32_t manager,uint32_t chain,uint32_t action,uint32_t actor,uint32_t requirement_actor) {
    char name[20]={0},character[21]={0};int replace=0;
    uint32_t original_key=readable(chain,4)?MEM32(chain):0;
    if(readable(actor,0x2dc)) {
        uint32_t component=MEM32(actor+0x2d8);
        if(readable(component,0x224)) {
            memcpy(character,(const void*)XBOX_PTR(component+0x20c),20);character[20]=0;
        }
    }
    /* XML2 110A42..110A84 only resolves default chains for actions5..8.
     * Use XML1's own interned default keys; never change the shared chain. */
    if(action>=5 && action<=8 && readable(chain,4) &&
       MEM32(chain)==MEM32(defaults[action-5]) && readable(actor,0x2dc)) {
        uint32_t component=MEM32(actor+0x2d8);
        /* Native 308C8 reads the identity directly at component+20C.
         * The +4 stats getter used by talent ranks does not apply here. */
        if(readable(component,0x224)) {
            memcpy(character,(const void*)XBOX_PTR(component+0x20c),20);character[20]=0;
            replace=raven_power_binding_name(character,action,name);
        }
    }
    uint32_t sp=g_esp,si=g_esi,di=g_edi,bx=g_ebx,bp=g_ebp,seh=g_seh_ebp;
    if(replace) {
        g_esp-=32;
        uint32_t text=g_esp+4;
        memset((void*)XBOX_PTR(g_esp),0,32);memcpy((void*)XBOX_PTR(text),name,strlen(name)+1);
        g_ecx=g_esp;PUSH32(g_esp,text);PUSH32(g_esp,0x000ED724u);
        RECOMP_ABI_CALL(0x00027EF0u,sub_00027EF0);
        if(g_esp!=sp-32) {fputs("[RAVEN POWER ERROR] intern ABI\n",stderr);_Exit(4);}
        chain=g_esp;
    }
    const char *trace_actor=getenv("XML1_TRACE_FIGHT_CHAINS");
    unsigned previous_trace=trace_melee_lookup;
    trace_melee_lookup=trace_actor && !strcmp(trace_actor,character) && (action==1 || action==2);
    uint32_t before=g_esp;
    PUSH32(g_esp,0);PUSH32(g_esp,requirement_actor);PUSH32(g_esp,chain);
    g_ecx=manager;PUSH32(g_esp,0x000ED733u);
    RECOMP_ABI_CALL(0x000ED500u,sub_000ED500);
    if(g_esp!=before) {fputs("[RAVEN POWER ERROR] lookup ABI\n",stderr);_Exit(4);}
    /* Optional all-action diagnostics distinguish missing melee chains from
     * resolved moves whose animation/trigger never reaches combat. */
    trace_melee_lookup=previous_trace;
    if((trace_actor && !strcmp(trace_actor,character)) ||
       (getenv("XML1_TRACE_POWER_BINDINGS") && action>=5 && action<=8)) {
        static struct {uint32_t actor,action,key,result;} seen[128];
        static unsigned count;
        unsigned i;
        for(i=0;i<count;++i)if(seen[i].actor==actor && seen[i].action==action &&
            seen[i].key==original_key && seen[i].result==g_eax)break;
        if(i==count && count<128) {
            seen[count].actor=actor;seen[count].action=action;
            seen[count].key=original_key;seen[count++].result=g_eax;
            fprintf(stderr,"[RAVEN POWER LOOKUP] actor=%08X name=%s action=%u key=%08X default=%08X replace=%d move=%s result=%08X\n",
                actor,character,action,original_key,
                action>=5 && action<=8 ? MEM32(defaults[action-5]) : 0,replace,name,g_eax);
            if(replace && readable(g_eax,0xBC)) {
                uint32_t handler=MEM32(g_eax+0xB8);
                fprintf(stderr,"[RAVEN POWER HANDLER] actor=%08X move=%s node=%08X handler=%08X vtable=%08X\n",
                    actor,name,g_eax,handler,readable(handler,4)?MEM32(handler):0);
            }
        }
    }
    g_esp=sp;g_esi=si;g_edi=di;g_ebx=bx;g_ebp=bp;g_seh_ebp=seh;
}
void xml1_raven_power_lookup(uint32_t manager,uint32_t chain,uint32_t action,uint32_t actor) {
    lookup(manager,chain,action,actor,actor);
}
void xml1_raven_power_hud_lookup(uint32_t manager,uint32_t slot,uint32_t actor) {
    /* XML1 15EB55 uses ED6E0 with a null requirement actor to discover the
     * move for HUD metadata. Bind its name without changing that policy. */
    lookup(manager,defaults[slot<4?slot:3],slot+5,actor,0);
}
void xml1_raven_power_icon_grid(uint32_t style) {
    uint32_t texture=MEM32(style+0x12c);
    if(!texture)return;
    uint32_t ax=g_eax,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bx=g_ebx,
        bp=g_ebp,seh=g_seh_ebp,sp=g_esp;
    g_ecx=style+0x130;PUSH32(g_esp,0x000EA31Cu);
    RECOMP_ABI_CALL(0x00027B00u,sub_00027B00);
    if(raven_power_icon_automatic((const char*)XBOX_PTR(g_eax))) {
        uint32_t dimensions[2];
        for(unsigned i=0;i<2;++i) {
            uint32_t target=MEM32(MEM32(texture)+4+i*4);
            g_ecx=texture;PUSH32(g_esp,0x000EA31Cu);RECOMP_ICALL_SAFE(target,sp);
            dimensions[i]=g_eax;
        }
        /* XML2 10EB65/10EB86 derives each dimension in 32-pixel cells.
         * Keep the native packed-nibble representation used by XML1. */
        uint32_t columns=dimensions[0]/32,rows=dimensions[1]/32;
        if(columns>=1&&columns<=16&&rows>=1&&rows<=16)
            MEM8(style+0x124)=(uint8_t)(((columns-1)<<4)|(rows-1));
        else {fputs("[RAVEN POWER ERROR] icon grid exceeds native capacity\n",stderr);_Exit(4);}
        if(getenv("XML1_TRACE_POWER_BINDINGS"))fprintf(stderr,
            "[RAVEN POWER ICON GRID] style=%08X texture=%08X size=%ux%u grid=%ux%u\n",
            style,texture,dimensions[0],dimensions[1],columns,rows);
    }
    if(g_esp!=sp){fputs("[RAVEN POWER ERROR] icon ABI\n",stderr);_Exit(4);}
    g_eax=ax;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebx=bx;g_ebp=bp;g_seh_ebp=seh;
}
