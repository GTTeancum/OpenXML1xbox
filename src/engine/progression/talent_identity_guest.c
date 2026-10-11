#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/progression/talent_identity_guest.h"
#include "engine/progression/talent_identity_save.h"
#include "engine/progression/talent_registry_layout.h"
#include "engine/progression/talent_source_table.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Save names, never transient tree slots or generation handles. Temporary
 * definition references cover the entire CharacterManager load, including
 * its snapshots. Each native character then acquires its own reference. */
static uint32_t active_stream;
static unsigned pin_count;
static uint8_t pins[254],remap[256];
struct State {uint32_t ax,bx,cx,dx,si,di,bp,sp,seh;};
static struct State state(void) {
    struct State s={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};return s;
}
static void restore(struct State s) {
    g_eax=s.ax;g_ebx=s.bx;g_ecx=s.cx;g_edx=s.dx;g_esi=s.si;g_edi=s.di;
    g_ebp=s.bp;g_esp=s.sp;g_seh_ebp=s.seh;
}
static void fail(const char *message) {
    fprintf(stderr,"[TALENT SAVE IDENTITY] %s\n",message);_Exit(4);
}
static void balanced(uint32_t sp) {if(g_esp!=sp)fail("native ABI imbalance");}
static uint32_t manager(void) {
    PUSH32(g_esp,0x000B59C0u);RECOMP_ABI_CALL(0x000B5980u,sub_000B5980);return g_eax;
}
static uint32_t by_id(uint32_t mgr,uint32_t id) {
    g_ecx=mgr;PUSH32(g_esp,id);PUSH32(g_esp,0x000B3554u);
    RECOMP_ABI_CALL(0x000B3540u,sub_000B3540);return g_eax;
}
static unsigned by_name(uint32_t mgr,uint32_t name) {
    g_ecx=mgr;PUSH32(g_esp,name);PUSH32(g_esp,0x000B497Du);
    RECOMP_ABI_CALL(0x000B4D90u,sub_000B4D90);return g_eax&255;
}
static int copy_text(char *target,unsigned capacity,uint32_t address) {
    if(!address||address==0x3fffffffu)return 0;
    const char *source=(const char*)XBOX_PTR(address);size_t n=strnlen(source,capacity);
    if(!n||n>=capacity)return 0;memcpy(target,source,n+1);return 1;
}
unsigned xml1_talent_identity_write(void *output,unsigned capacity) {
    struct State saved=state();g_esp-=4;uint32_t scratch=g_esp,mgr=manager();
    xml1_saved_talent_identity entries[254]={0};unsigned count=0;
    const uint32_t pool=mgr+XML1_TALENT_ID_MAP+12;
    for(unsigned i=0;i<254;++i) {
        if(!(MEM32(pool+XML1_TALENT_ID_BITMAP+(i/32)*4)&(1u<<(i%32))))continue;
        unsigned id=MEM8(pool+i*16+12);MEM32(scratch)=id;
        uint32_t definition=by_id(mgr,scratch);balanced(scratch);
        if(!definition||definition==0x3fffffffu)fail("live ID has no definition");
        xml1_saved_talent_identity *entry=entries+count++;entry->id=(uint8_t)id;
        g_ecx=mgr;PUSH32(g_esp,scratch);PUSH32(g_esp,0x000B5127u);
        RECOMP_ABI_CALL(0x000B4EA0u,sub_000B4EA0);balanced(scratch);
        unsigned source=MEM8(definition+0x4e);
        if(source>=MEM32(0x4d7374u)||!copy_text(entry->name,32,g_eax)||
           !copy_text(entry->source,32,xml1_talent_source_table()+32*source)||
           !copy_text(entry->selector,64,definition+12))fail("invalid live declaration identity");
    }
    unsigned bytes=(unsigned)xml1_talent_identities_write(output,capacity,entries,count);
    restore(saved);return bytes;
}
void xml1_talent_identity_load_end(void) {
    struct State saved=state();g_esp-=4;uint32_t scratch=g_esp;
    uint32_t mgr=pin_count?manager():0;
    while(pin_count) {
        MEM32(scratch)=pins[--pin_count];g_ecx=mgr;PUSH32(g_esp,scratch);
        PUSH32(g_esp,0x000B4A39u);RECOMP_ABI_CALL(0x000B5080u,sub_000B5080);
        balanced(scratch);if(!(g_eax&255))fail("temporary definition reference was lost");
    }
    active_stream=0;memset(remap,255,sizeof(remap));restore(saved);
}
static unsigned register_identity(uint32_t mgr,const xml1_saved_talent_identity *entry,uint32_t scratch) {
    /* Descriptor is used only by native source/selector resolution. It is
     * never inserted into the registry or exposed as a real definition. */
    const uint32_t descriptor=scratch,name=scratch+0x60,source=scratch+0x80,id=scratch+0xa0;
    memset((void*)XBOX_PTR(descriptor),0,0x54);
    memcpy((void*)XBOX_PTR(descriptor+12),entry->selector,64);
    memcpy((void*)XBOX_PTR(name),entry->name,32);memcpy((void*)XBOX_PTR(source),entry->source,32);
    if(!xml1_talent_source_path_valid(source))fail("invalid saved source filename");
    PUSH32(g_esp,source);PUSH32(g_esp,0x000B48A7u);RECOMP_ABI_CALL(0x000B41B0u,sub_000B41B0);g_esp+=4;
    balanced(scratch);unsigned source_id=g_eax&255;if(source_id==255)fail("source table exhausted");
    MEM8(descriptor+0x4e)=(uint8_t)source_id;
    /* Pin the parsed document while locating and registering the actual node.
     * B59D0 acquires the same cache a second time; release both below. */
    g_ecx=mgr;PUSH32(g_esp,0xffffffffu);PUSH32(g_esp,descriptor);PUSH32(g_esp,0x000B5A46u);
    RECOMP_ABI_CALL(0x000B53A0u,sub_000B53A0);balanced(scratch);uint32_t document=g_eax;
    if(!document)fail("saved talent source cannot be loaded");
    g_ecx=descriptor;PUSH32(g_esp,0x000B5CC0u);RECOMP_ABI_CALL(0x000B59D0u,sub_000B59D0);
    balanced(scratch);uint32_t node=g_eax;
    if(!node) {
        fprintf(stderr,"[TALENT SAVE IDENTITY] id=%u name=%s source=%s selector=%s document=%08X\n",
            entry->id,entry->name,entry->source,entry->selector,document);
        fail("saved talent selector is missing");
    }
    /* B4250 uses 44F388 together with the global format at 44F38C to
     * shortcut selector construction for top-level shared/package talents.
     * A save can also contain nested herostat/NPC references. Matching the
     * saved source here falsely rewrites those as Talent:name;Talents.
     * Source 255 is reserved/invalid: force B45B0's native parent walk to
     * derive the exact selector from the resolved node for every source.
     * The document still supplies the real source through B44F1/B41B0. */
    uint8_t previous_source=MEM8(0x44f388u);MEM8(0x44f388u)=255;
    g_ecx=mgr;PUSH32(g_esp,document);PUSH32(g_esp,node);PUSH32(g_esp,0x000B497Du);
    RECOMP_ABI_CALL(0x000B5620u,sub_000B5620);balanced(scratch);uint32_t definition=g_eax;
    if(!definition)fail("saved talent registration failed");
    /* A herostat may have reserved the name before its package appeared. */
    if(!MEM8(definition+0x4f)) {
        g_ecx=definition;PUSH32(g_esp,document);PUSH32(g_esp,node);PUSH32(g_esp,0x000B5872u);
        RECOMP_ABI_CALL(0x000B4250u,sub_000B4250);balanced(scratch);
        if(!(g_eax&255))fail("saved declaration could not populate reserved name");
    }
    MEM8(0x44f388u)=previous_source;
    unsigned current=by_name(mgr,name);balanced(scratch);
    if(!current||current==255)fail("saved declaration did not register its name");
    MEM32(id)=current;if(by_id(mgr,id)!=definition)fail("saved selector/name mismatch");balanced(scratch);
    for(unsigned i=0;i<2;++i) {
        g_ecx=mgr;PUSH32(g_esp,descriptor);PUSH32(g_esp,0x000B4C35u);
        RECOMP_ABI_CALL(0x000B4B30u,sub_000B4B30);balanced(scratch);
    }
    return current;
}
int xml1_talent_identity_load(uint32_t stream,const void *input,unsigned size) {
    xml1_saved_talent_identity entries[254];unsigned count=0;
    if(!stream||size<8||xml1_talent_identities_read(input,size,entries,254,&count)!=size)return 0;
    xml1_talent_identity_load_end();
    struct State saved=state();g_esp-=256;uint32_t scratch=g_esp,mgr=manager();
    for(unsigned i=0;i<count;++i) {
        unsigned current=register_identity(mgr,entries+i,scratch);
        remap[entries[i].id]=(uint8_t)current;pins[pin_count++]=(uint8_t)current;
    }
    active_stream=stream;restore(saved);return 1;
}
unsigned xml1_talent_identity_remap(uint32_t stream,unsigned saved_id) {
    if(!active_stream)return saved_id;
    if(stream!=active_stream||saved_id>254||remap[saved_id]==255)fail("talent record has no saved identity");
    return remap[saved_id];
}
