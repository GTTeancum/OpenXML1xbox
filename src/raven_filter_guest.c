#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "raven_filter_event.h"
#include "raven_filter_guest.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static uint32_t table;
static int diagnostic;
static void fail(const char *message) {
    fprintf(stderr,"[RAVEN FILTER ERROR] %s\n",message);fflush(stderr);_Exit(4);
}
static int read_guest(void *context,uint32_t address,void *out,size_t size) {
    (void)context;
    if(address<0x10000u||(uint64_t)address+size>0x08000000ull)return 0;
    memcpy(out,(const void*)XBOX_PTR(address),size);return 1;
}
static raven_filter_event fields(uint32_t event) {
    raven_filter_event result;
    memcpy(&result,(const void*)XBOX_PTR(event+0x14),sizeof(result));return result;
}
static void put_fields(uint32_t event,const raven_filter_event *value) {
    memcpy((void*)XBOX_PTR(event+0x14),value,sizeof(*value));
}
static void call0(uint32_t object,uint32_t method) {
    uint32_t before=g_esp;g_ecx=object;PUSH32(g_esp,0x000E60DDu);
    RECOMP_ICALL_SAFE(method,before);
    if(g_esp!=before)fail("zero-argument method ABI");
}
static void parse(void) {
    uint32_t event=g_ecx,sp=g_esp;
    raven_filter_event value=fields(event);
    if(raven_filter_event_parse(&value,(const char*)XBOX_PTR(MEM32(sp+4)),
        (const char*)XBOX_PTR(MEM32(sp+8)))) {
        put_fields(event,&value);g_eax=1;g_esp=sp+12;return;
    }
    /* Tail-call the XML1 base parser using the original return/arguments. */
    sub_000E3FB0();
}
static void copy(void) {
    uint32_t destination=g_ecx,source=MEM32(g_esp+4),sp=g_esp;
    int matching=source&&MEM32(source)==table;
    g_ecx=destination;PUSH32(g_esp,source);PUSH32(g_esp,0x000E60DDu);
    RECOMP_ABI_CALL(0x000CEE80u,sub_000CEE80);
    if(g_esp!=sp)fail("base copy ABI");
    if(matching) {
        MEM16(destination+0x10)=MEM16(source+0x10);
        MEM8(destination+0x12)=(MEM8(destination+0x12)&0xfe)|(MEM8(source+0x12)&1);
        raven_filter_event from=fields(source),to=fields(destination);
        raven_filter_event_copy(&to,&from);put_fields(destination,&to);
    }
    g_esp=sp+8;
}
static int actor_type(uint32_t actor) {
    if(!actor)return 0;
    call0(actor,MEM32(MEM32(actor)));
    uint32_t descriptor=g_eax,index=MEM32(0x485878)+0x21;
    if(!descriptor)fail("null native type descriptor");
    return !!(MEM32(descriptor+0x14+4*(index>>5))&(1u<<(index&31)));
}
static void dispatch(int character_path) {
    uint32_t event=g_ecx,sp=g_esp,actor=MEM32(sp+4),other=MEM32(sp+8);
    raven_filter_event value=fields(event);
    raven_filter_target target={0};target.character_path=character_path;
    /* Match the original paths: character dispatch assumes an actor;
     * generic dispatch only classifies when filteractor requests it. */
    if(!character_path&&(value.flags&4))target.is_actor=actor_type(actor);
    if(value.team_filter!=32) {
        if(!actor)fail("team query has no target");
        g_ecx=actor;PUSH32(g_esp,0x000E60DDu);
        RECOMP_ABI_CALL(0x00026E60u,sub_00026E60);
        target.team=raven_filter_event_xml1_team(g_eax);
    }
    if(value.flags&16) {
        PUSH32(g_esp,0x000E60DDu);RECOMP_ABI_CALL(0x000BF750u,sub_000BF750);
        target.skirmish=!!g_eax;
    }
    if(character_path) {
        if(!raven_filter_xml1_character(read_guest,NULL,actor,&target))fail("invalid character definition");
        if(value.flags&1) {
            PUSH32(g_esp,0x000E60DDu);RECOMP_ABI_CALL(0x0008A600u,sub_0008A600);
            if(!raven_filter_xml1_default_target(read_guest,NULL,actor,&target))fail("invalid default-target state");
        }
    }
    if(g_esp!=sp)fail("target query ABI");
    uint8_t tag=raven_filter_event_tag(&value,&target);
    uint32_t owner=MEM32(event+4);
    g_eax=0;
    if(tag&&owner) {
        g_ecx=owner;uint32_t method=MEM32(MEM32(owner)+0x14);
        PUSH32(g_esp,other);PUSH32(g_esp,actor);PUSH32(g_esp,tag);PUSH32(g_esp,0x000E60DDu);
        RECOMP_ICALL_SAFE(method,sp);
        if(g_esp!=sp)fail("owner dispatch ABI");
        g_eax=!!(g_eax&255);
    }
    g_esp=sp+12;
}
static void character(void){dispatch(1);}
static void generic(void){dispatch(0);}
static void test_owner(void) {
    uint32_t owner=g_ecx,sp=g_esp;
    MEM32(owner+4)=MEM32(sp+4);MEM32(owner+8)=MEM32(sp+8);MEM32(owner+12)=MEM32(sp+12);
    g_eax=MEM32(owner+16);g_esp=sp+16;
}
uint32_t xml1_filter_event_test_owner_method(void) {return diagnostic?table+56:0;}
int xml1_filter_event_is_code(uint32_t address) {
    return table&&(address==table+40||address==table+44||address==table+48||address==table+52||(diagnostic&&address==table+56));
}
void (*xml1_filter_event_lookup(uint32_t address))(void) {
    if(!table)return NULL;
    if(address==table+40)return character;
    if(address==table+44)return generic;
    if(address==table+48)return parse;
    if(address==table+52)return copy;
    if(diagnostic&&address==table+56)return test_owner;
    return NULL;
}
static void install(uint32_t address) {
    if(!address||table)fail("invalid vtable installation");
    /* Native dynamic_cast may inspect vtable[-1]. Publish XML1 base-event
     * RTTI rather than leaving a heap header there. The new subtype's own
     * copy check uses its exact vtable, never a fabricated retail type ID. */
    MEM32(address)=MEM32(0x3d5b44);
    table=address+4;
    memcpy((void*)XBOX_PTR(table),(const void*)XBOX_PTR(0x3d5b48),40);
    MEM32(table+4)=table+40;MEM32(table+8)=table+44;
    MEM32(table+0x10)=table+48;MEM32(table+0x18)=table+52;
    /* Filter has the same zero-initialized energy word/flag as XML1 events. */
    MEM32(table+0x20)=0x000CF640;MEM32(table+0x24)=0x000CF650;
}
void xml1_filter_event_test_storage(uint32_t address){diagnostic=1;install(address);}
int xml1_filter_event_construct(uint32_t event,uint32_t name) {
    if(!name||_stricmp((const char*)XBOX_PTR(name),"ce_filter_event"))return 0;
    uint32_t ax=g_eax,cx=g_ecx,dx=g_edx,sp=g_esp;
    if(!table) {
        PUSH32(g_esp,0x2BC90);PUSH32(g_esp,14);PUSH32(g_esp,60);
        PUSH32(g_esp,0x000E60DDu);RECOMP_ABI_CALL(0x00123490u,sub_00123490);g_esp+=12;
        if(g_esp!=sp)fail("vtable allocation ABI");
        install(g_eax);
    }
    /* The factory already allocated the native 60-byte slot. Retain its
     * pool bitmaps, capacity and generation handle; never allocate an event. */
    MEM32(event)=table;MEM32(event+4)=0;MEM32(event+8)=0;
    MEM8(event+0xc)=0;MEM8(event+0xd)=0;MEM8(event+0xe)&=0xf0;
    MEM16(event+0x10)=0;MEM8(event+0x12)&=0xfe;
    raven_filter_event value;raven_filter_event_init(&value);put_fields(event,&value);
    g_eax=ax;g_ecx=cx;g_edx=dx;return 1;
}
