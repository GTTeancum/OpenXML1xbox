/* Runs native XML1 factory/parser/copy/retirement with the registered adapter.
 * The owner boundary records arguments; it is not a gameplay event consumer. */
#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "raven_filter_guest.h"
#include "raven_script_extensions.h"
#include <stdio.h>
#include <string.h>
static uint32_t pool,name,stack;
static uint32_t create(const char *type) {
    strcpy((char*)XBOX_PTR(name),type);g_ecx=pool;PUSH32(g_esp,name);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x000E6040u,sub_000E6040);return g_eax;
}
static uint32_t resolve(uint32_t handle) {
    g_ecx=pool;PUSH32(g_esp,handle);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x000E4DA0u,sub_000E4DA0);return g_eax;
}
static void field(uint32_t event,const char *key,const char *value) {
    strcpy((char*)XBOX_PTR(name),key);strcpy((char*)XBOX_PTR(name+128),value);
    g_ecx=event;uint32_t method=MEM32(MEM32(event)+0x10),before=g_esp;
    PUSH32(g_esp,name+128);PUSH32(g_esp,name);PUSH32(g_esp,0);RECOMP_ICALL_SAFE(method,before);
}
static unsigned dispatch(uint32_t event,uint32_t actor,uint32_t other,int character) {
    g_ecx=event;uint32_t method=MEM32(MEM32(event)+(character?4:8)),before=g_esp;
    PUSH32(g_esp,other);PUSH32(g_esp,actor);PUSH32(g_esp,0);RECOMP_ICALL_SAFE(method,before);return g_eax;
}
int xml1_filter_event_test(void) {
    stack=g_esp;pool=stack-0x90000;name=pool+0x11000;
    uint32_t owner=pool+0x12000,actor=pool+0x13000,definition=pool+0x14000;
    memset((void*)XBOX_PTR(pool),0,0x16000);
    xml1_filter_event_test_storage(pool+0x10000);
    g_ecx=pool;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000E33F0u,sub_000E33F0);
    uint32_t handle=create("ce_filter_event"),event=resolve(handle);
    if(!handle||!event||g_esp!=stack||MEM32(pool+0xc3d8)!=1)return 1;
    field(event,"passtag","101");field(event,"failtag","102");
    field(event,"time","-1");field(event,"tag","100");
    if(g_esp!=stack||MEM8(event+0xc)!=255||MEM8(event+0xd)!=100)return 2;
    MEM32(event+4)=owner;MEM32(owner)=owner+32;
    MEM32(owner+32+0x14)=xml1_filter_event_test_owner_method();MEM32(owner+16)=7;
    if(dispatch(event,actor,123,0)!=1||MEM32(owner+4)!=101||MEM32(owner+8)!=actor||MEM32(owner+12)!=123||g_esp!=stack)return 3;
    if(!xml1_script_dispatch_combat_trigger(owner,actor,117) ||
       MEM32(owner+4)!=117 || MEM32(owner+8)!=actor ||
       MEM32(owner+12)!=actor || g_esp!=stack)return 27;
    /* Original 2E6B0 returns this as a descriptor; the bitmap fixture tests
     * the real native virtual query and XML1 type bit, not an adapter shortcut. */
    MEM32(actor)=actor+0x100;MEM32(actor+0x100)=0x0002e6b0;MEM32(0x485878)=0;
    MEM32(actor+0x18)=2;field(event,"filteractor","true");
    if(dispatch(event,actor,123,0)!=1||MEM32(owner+4)!=101)return 11;
    MEM32(actor+0x18)=0;
    if(dispatch(event,actor,123,0)!=1||MEM32(owner+4)!=102)return 12;
    field(event,"filteractor","false");
    MEM32(owner+16)=0;
    if(dispatch(event,actor,123,0)!=0||MEM32(owner+4)!=101)return 13;
    MEM32(owner+16)=7;
    MEM32(actor+0x2d8)=definition;MEMF(definition+0x478)=7.5f;
    field(event,"filterhumanoid","true");MEM8(definition+0x487)=1;
    if(dispatch(event,actor,456,1)!=1||MEM32(owner+4)!=102||g_esp!=stack)return 4;
    MEM8(definition+0x487)=0;
    if(dispatch(event,actor,456,1)!=1||MEM32(owner+4)!=101)return 5;
    field(event,"maxdangerrating","7");
    if(dispatch(event,actor,456,1)!=1||MEM32(owner+4)!=102)return 6;
    field(event,"failtag","0");MEM32(owner+4)=999;
    if(dispatch(event,actor,456,1)!=0||MEM32(owner+4)!=999)return 7;
    /* Replace the recorder with the real owner, native handle lookup and
     * native ce_invulnerable handler. Only its object/data inputs are fixtures. */
    uint32_t follow_handle=create("ce_invulnerable"),follow=resolve(follow_handle);
    if(!follow)return 17;
    field(follow,"tag","101");MEMF(follow+0x10)=-1.0f;
    uint32_t manager=pool-0x16798,saved_manager=MEM32(0x4f3d4c);
    MEM32(manager)=0x3d89dc;MEM32(0x4f3d4c)=manager;
    MEM32(owner)=0x3d8bdc;MEM32(owner+0xbc)=follow_handle;MEM32(owner+0x104)=1;
    MEM32(follow+4)=owner;MEM32(actor+0x18)=2;
    field(event,"maxdangerrating","255");field(event,"failtag","102");
    MEMF(actor+0x254)=0.0f;
    if(dispatch(event,actor,456,1)!=1||MEMF(actor+0x254)!=-1.0f||g_esp!=stack)return 18;
    MEMF(actor+0x254)=0.0f;MEM8(definition+0x487)=1;
    if(dispatch(event,actor,456,1)!=0||MEMF(actor+0x254)!=0.0f||g_esp!=stack)return 19;
    MEMF(actor+0x254)=0.0f;
    if(!xml1_script_dispatch_combat_trigger(owner,actor,101) ||
       MEMF(actor+0x254)!=-1.0f || g_esp!=stack)return 25;
    MEMF(actor+0x254)=0.0f;
    if(xml1_script_dispatch_combat_trigger(owner,actor,102) ||
       xml1_script_dispatch_combat_trigger(0,actor,101) ||
       MEMF(actor+0x254)!=0.0f || g_esp!=stack)return 26;
    puts("PASS script combat trigger delivery: real node tag selection and native event effect, missing node/tag no-op, balanced stack");
    /* Exercise the original owner's loop-mode rejection on an otherwise
     * matching tag; the imported filter must propagate the native refusal. */
    MEM8(definition+0x487)=0;MEM8(follow+0xe)=8;MEM8(actor+0x336)=0;
    if(dispatch(event,actor,456,1)!=0||MEMF(actor+0x254)!=0.0f)return 20;
    MEM8(actor+0x336)=0x20;
    if(dispatch(event,actor,456,1)!=1||MEMF(actor+0x254)!=-1.0f)return 21;
    /* The complementary XML2 startup policy already exists in XML1. Parse
       it natively and prove dispatch rejects repeats but accepts a new use. */
    field(follow,"only_looped","false");field(follow,"only_non_looped","true");
    MEMF(actor+0x254)=0.0f;
    if(dispatch(event,actor,456,1)!=0||MEMF(actor+0x254)!=0.0f)return 23;
    MEM8(actor+0x336)=0;
    if(dispatch(event,actor,456,1)!=1||MEMF(actor+0x254)!=-1.0f)return 24;
    MEM32(0x4f3d4c)=saved_manager;
    g_ecx=pool;PUSH32(g_esp,follow_handle);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000E6CC0u,sub_000E6CC0);
    if(!(g_eax&255)||g_esp!=stack||MEM32(pool+0xc3d8)!=1)return 22;
    puts("PASS real XML1 owner: tag lookup, native ce_invulnerable effect, missing-tag no-op and loop-mode rejection/acceptance");
    uint32_t second_handle=create("ce_filter_event"),second=resolve(second_handle);
    MEM32(second+4)=owner+128;g_ecx=second;uint32_t method=MEM32(MEM32(second)+0x18),before=g_esp;
    PUSH32(g_esp,event);PUSH32(g_esp,0);RECOMP_ICALL_SAFE(method,before);
    if(g_esp!=stack||MEM32(second+4)!=owner+128||memcmp((void*)XBOX_PTR(second+0x14),(void*)XBOX_PTR(event+0x14),8)||MEM8(second+0xd)!=100)return 8;
    g_ecx=pool;PUSH32(g_esp,handle);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000E6CC0u,sub_000E6CC0);
    if(!(g_eax&255)||resolve(handle)||g_esp!=stack||MEM32(pool+0xc3d8)!=1)return 9;
    if(create("no_such_event")||MEM32(pool+0xc3d8)!=1)return 10;
    uint32_t last=0,replacement=0;
    for(unsigned i=0;i<779;++i) {
        last=create("CE_FILTER_EVENT");
        if(!last||g_esp!=stack)return 14;
        if(resolve(last)==event)replacement=last;
    }
    if(create("ce_filter_event")||MEM32(pool+0xc3d8)!=780)return 15;
    uint32_t reused=resolve(replacement);
    if(!replacement||reused!=event||replacement==handle||resolve(handle)||MEM32(reused+4)||
       MEM8(reused+0x14)||MEM8(reused+0x15)||MEM8(reused+0x16)!=255)return 16;
    puts("PASS native filter factory, virtual parser, owner boundary arguments, character predicates, zero-tag suppression, copy, stale-handle retirement, capacity and clean slot reuse");
    puts("NOT COVERED: production allocation, asset loading, real-world combat, audio or visuals");
    return 0;
}
