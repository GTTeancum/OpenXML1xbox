#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/powers/raven_power_bindings_guest.h"
#include "engine/scripting/raven_script_extensions.h"
#include "engine/actors/raven_actor_transform_owner.h"
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
            int temporary=xml1_transform_power_name(actor,action,name);
            if(temporary<0){g_eax=0;return;} /* Definition/actor retired during resolution. */
            replace=temporary?1:raven_power_binding_name(character,action,name);
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
static int rotation_read(void *context,uint32_t address,void *out,size_t size) {
    (void)context;
    if(size>0x08000000u||!readable(address,(unsigned)size))return 0;
    memcpy(out,(const void*)XBOX_PTR(address),size);return 1;
}
int xml1_raven_power_rotate_input(uint32_t actor,unsigned port,uint32_t held,uint32_t pressed) {
    /* 359F0 has already applied XML1's gameplay/control gates and resolved
     * the port's live actor. Action 7 is POWER (119D0D), not a pad bit.
     * XML2 34371..34391 cycles slots with POWER + PREV/INC_AGGR/DEC_AGGR/NEXT.
     * These existing logical actions also honor PC/controller rebinding. */
    if(getenv("XML1_TALENT_TRACE")) {
        static unsigned reports;
        if(reports<24 && (reports==0||pressed)) {
            ++reports;
            uint32_t manager=MEM32(0x577210);
            fprintf(stderr,"[POWER ROTATION INPUT] actor=%08X port=%u held=%08X pressed=%08X owner=%u health=%g menu=%08X\n",
                actor,port,held,pressed,readable(actor,0x334)?MEM32(actor+0x330):~0u,
                readable(actor,0x244)?MEMF(actor+0x240):0,
                readable(manager,0xc0c)?MEM32(manager+0xc08):0);
        }
    }
    if(port>=4||!(held&(1u<<7))||!readable(actor,0x334)||MEM32(actor+0x330)!=port)
        return 0;
    uint32_t menu=MEM32(0x577210);
    if(menu&&(!readable(menu,0xc0c)||MEM32(menu+0xc08)))return 0;
    if(!(MEMF(actor+0x240)>0))return 0;
    /* XML2 3444E excludes a temporary CharacterDef override from assignment
     * cycling. Consume the POWER chord without mutating the original hero's
     * persistent choices or falling through to hero-switching input. */
    raven_actor_transform_snapshot transformation;
    if(raven_actor_transform_read(actor,MEM32(actor+0x1c),&transformation,NULL,0)&&
       transformation.active)return 1;
    uint32_t component=MEM32(actor+0x2d8);
    char character[20],move[20];
    if(!readable(component,0x224))return 0;
    memcpy(character,(const void*)XBOX_PTR(component+0x20c),20);
    if(!memchr(character,0,20)||!raven_power_binding_name(character,5,move))return 0;
    const unsigned actions[4]={12,16,17,11};
    if(pressed&((1u<<12)|(1u<<16)|(1u<<17)|(1u<<11))) {
        uint32_t ax=g_eax,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bx=g_ebx,
            bp=g_ebp,seh=g_seh_ebp,sp=g_esp;
        PUSH32(g_esp,0x00035C3Au);RECOMP_ABI_CALL(0x000B5980u,sub_000B5980);
        uint32_t system=g_eax;
        if(g_esp!=sp){fputs("[POWER ROTATION ERROR] registry ABI\n",stderr);_Exit(4);}
        for(unsigned slot=0;slot<4;++slot)if(pressed&(1u<<actions[slot])) {
            int changed=raven_power_rotate_actor(rotation_read,NULL,system,actor,slot);
            if(changed>0&&raven_power_binding_name(character,slot+5,move))
                fprintf(stderr,"[POWER ROTATION] port=%u character=%s slot=%u move=%s\n",port,character,slot+1,move);
        }
        g_eax=ax;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebx=bx;
        g_ebp=bp;g_seh_ebp=seh;g_esp=sp;
    }
    // Consume the directional chord even when only one power is eligible;
    // never switch heroes as an accidental side effect of attempted cycling.
    return 1;
}
void xml1_raven_talent_icon_grid(uint32_t menu,uint32_t row) {
    /* XML1 1643E0 loads the selected talent's texture into the native sprite
     * but hardcodes a 2x2 atlas. 164640 selects a talent row. Its +24 is the
     * generation-checked talent handle and +3C is the loaded source texture. Query that
     * texture's width/height (146650/146660), then update the sprite descriptor
     * consumed by 188F20. Do not mistake the menu's material for a texture. */
    uint32_t ax=g_eax,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bx=g_ebx,
        bp=g_ebp,seh=g_seh_ebp,sp=g_esp;
    PUSH32(g_esp,0x00164655u);RECOMP_ABI_CALL(0x000B5980u,sub_000B5980);
    g_ecx=g_eax;PUSH32(g_esp,MEM32(row+0x24));PUSH32(g_esp,0x00164655u);
    RECOMP_ABI_CALL(0x000B3E90u,sub_000B3E90);
    /* B3E90 validates occupancy/generation without acquiring a reference.
     * The definition retains the native XML selector Talent:name;Talents. */
    char talent[64]={0};
    if(g_eax) {
        const char *selector=(const char*)XBOX_PTR(g_eax+0x0c);
        if(!strncmp(selector,"Talent:",7)) {
            size_t length=0;
            while(length<56&&selector[7+length]&&selector[7+length]!=';')++length;
            if(length<56)memcpy(talent,selector+7,length);
        }
    }
    uint32_t texture=MEM32(row+0x3c);
    if(texture&&raven_talent_icon_automatic(talent)) {
        uint32_t dimensions[2];
        for(unsigned i=0;i<2;++i) {
            uint32_t target=MEM32(MEM32(texture)+4+i*4);
            g_ecx=texture;PUSH32(g_esp,0x00164655u);RECOMP_ICALL_SAFE(target,sp);
            dimensions[i]=g_eax;
        }
        uint32_t columns=dimensions[0]/32,rows=dimensions[1]/32;
        if(dimensions[0]%32||dimensions[1]%32||columns<1||columns>16||rows<1||rows>16) {
            fprintf(stderr,"[RAVEN TALENT ICON ERROR] texture=%08X size=%ux%u\n",texture,dimensions[0],dimensions[1]);_Exit(4);
        }
        MEM8(menu+0xee0+0x4c)=(uint8_t)(((columns-1)<<4)|(rows-1));
        if(getenv("XML1_TALENT_TRACE"))fprintf(stderr,
            "[RAVEN TALENT ICON GRID] texture=%08X size=%ux%u grid=%ux%u\n",
            texture,dimensions[0],dimensions[1],columns,rows);
    }
    if(g_esp!=sp){fputs("[RAVEN TALENT ICON ERROR] guest ABI imbalance\n",stderr);_Exit(4);}
    g_eax=ax;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebx=bx;g_ebp=bp;g_seh_ebp=seh;
}
