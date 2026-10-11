/* Missing XML2 CCERandomEvent, included in the native event adapter.
 * F8C10/F8C90/109B60: five byte tags, contiguous prefix, one gameplay RNG
 * sample and owner dispatch. No host random source or independently owned event.
 * Base XML1 methods retain scheduling, clone ownership and pool retirement. */
#include "engine/powers/raven_powerup_guest.h"
static uint32_t random_table,random_test_owner;
static void random_balanced(uint32_t sp) {
    if(g_esp!=sp){fprintf(stderr,"[RANDOM EVENT ERROR] stack ABI\n");_Exit(4);}
}
static void random_parse(void) {
    uint32_t event=g_ecx,sp=g_esp;
    const char *key=(const char*)XBOX_PTR(MEM32(sp+4));
    if(strlen(key)==4 && !_strnicmp(key,"tag",3)) {
        int index=atoi(key+3);
        if(index>=0&&index<5)
            MEM8(event+0x10+index)=(uint8_t)atoi((const char*)XBOX_PTR(MEM32(sp+8)));
        g_eax=1;g_esp=sp+12;return;
    }
    sub_000E3FB0();
}
static void random_copy(void) {
    uint32_t event=g_ecx,sp=g_esp,source=MEM32(sp+4);
    int matching=source&&MEM32(source)==random_table;
    PUSH32(g_esp,source);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x000CEE80u,sub_000CEE80);random_balanced(sp);
    if(matching)memcpy((void*)XBOX_PTR(event+0x10),(const void*)XBOX_PTR(source+0x10),5);
    g_esp=sp+8;
}
static void random_execute(void) {
    uint32_t event=g_ecx,sp=g_esp,actor=MEM32(sp+4),other=MEM32(sp+8);
    uint32_t owner=MEM32(event+4);
    unsigned count=0;
    if(actor&&other&&owner) {
        while(count<5&&MEM8(event+0x10+count))++count;
        if(count) {
            /* XML2 16E1C0(0,count-1,1) samples its gameplay stream. XML1's
             * native unit RNG supplies that stream without disturbing time. */
            unsigned index=(unsigned)(raven_xml1_guest_random_unit()*count);
            uint32_t tag=MEM8(event+0x10+index),method=MEM32(MEM32(owner)+0x14);
            g_ecx=owner;PUSH32(g_esp,other);PUSH32(g_esp,actor);PUSH32(g_esp,tag);
            PUSH32(g_esp,0);RECOMP_ICALL_SAFE(method,sp);random_balanced(sp);
        }
    }
    /* No event or actor dereference after the owner callback: it may retire
     * this event or replace the node while dispatch is in progress. */
    g_esp=sp+12;
}
static void random_owner_fixture(void) {
    uint32_t sp=g_esp;
    MEM32(random_test_owner+4)=MEM32(sp+4);
    MEM32(random_test_owner+8)=MEM32(sp+8);
    MEM32(random_test_owner+12)=MEM32(sp+12);
    ++MEM32(random_test_owner+16);g_esp=sp+16;
}
static int random_is_code(uint32_t a) {
    return random_table && (a==random_table+40||a==random_table+44||a==random_table+48||
        (random_test_owner&&a==random_table+52));
}
static void (*random_lookup(uint32_t a))(void) {
    if(!random_is_code(a))return NULL;
    switch(a-random_table) {
    case 40:return random_execute;case 44:return random_parse;
    case 48:return random_copy;case 52:return random_owner_fixture;
    }return NULL;
}
static void random_install(uint32_t storage) {
    MEM32(storage)=MEM32(0x3d5b44);random_table=storage+4;
    memcpy((void*)XBOX_PTR(random_table),(const void*)XBOX_PTR(0x3d5b48),40);
    MEM32(random_table+4)=random_table+40;
    MEM32(random_table+0x10)=random_table+44;
    MEM32(random_table+0x18)=random_table+48;
    /* This is a base event, not CEAction. Tags at +10 must never be read
     * as an energy cost; retain the base zero query and non-energy predicate. */
}
static int random_construct(uint32_t event,uint32_t name) {
    if(!name||_stricmp((const char*)XBOX_PTR(name),"ce_random_event"))return 0;
    uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    if(!random_table) {
        PUSH32(g_esp,0x2bc90);PUSH32(g_esp,14);PUSH32(g_esp,60);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00123490u,sub_00123490);g_esp+=12;random_balanced(sp);
        if(!g_eax)_Exit(4);
        random_install(g_eax);
    }
    MEM32(event)=random_table;MEM32(event+4)=0;MEM32(event+8)=0;
    MEM8(event+0xc)=0;MEM8(event+0xd)=0;MEM8(event+0xe)&=0xf0;
    memset((void*)XBOX_PTR(event+0x10),0,5);
    g_eax=ax;g_ecx=cx;g_edx=dx;return 1;
}

int xml1_random_event_fixture(uint32_t pool) {
    uint32_t old_table=random_table,sp=g_esp,name=pool+0x11000;
    uint32_t old_seed=MEM32(0x50622c);int fp=g_fp_top,failed=0;
    random_install(pool+0x10000);
    random_test_owner=pool+0x12000;
    memset((void*)XBOX_PTR(random_test_owner),0,64);
    MEM32(random_test_owner)=random_test_owner+32;
    MEM32(random_test_owner+32+0x14)=random_table+52;
    g_ecx=pool;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000E33F0u,sub_000E33F0);
    strcpy((char*)XBOX_PTR(name),"ce_random_event");
    g_ecx=pool;PUSH32(g_esp,name);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000E6040u,sub_000E6040);
    uint32_t handle=g_eax;
    g_ecx=pool;PUSH32(g_esp,handle);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000E4DA0u,sub_000E4DA0);
    uint32_t event=g_eax;
    if(!handle||!event||MEM32(event)!=random_table)return 1;
    const char *keys[]={"tag0","TAG1","tag2","tag3","tag4","tag5","tag","time"};
    const char *values[]={"101","257","-1","103","104","99","7","-1"};
    for(unsigned i=0;i<8;++i) {
        strcpy((char*)XBOX_PTR(name),keys[i]);strcpy((char*)XBOX_PTR(name+128),values[i]);
        g_ecx=event;PUSH32(g_esp,name+128);PUSH32(g_esp,name);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(MEM32(random_table+0x10),sp);
        if(g_esp!=sp)failed=2;
    }
    const uint8_t expected[]={101,1,255,103,104};
    if(memcmp((const void*)XBOX_PTR(event+0x10),expected,5)||MEM8(event+0xd)!=7||MEM8(event+0xc)!=255)failed=3;
    const uint32_t seeds[]={1,12345,987654321,2147483646};
    for(unsigned seed=0;seed<4;++seed)for(unsigned count=0;count<=5;++count)for(unsigned gate=0;gate<4;++gate) {
        memcpy((void*)XBOX_PTR(event+0x10),expected,5);
        if(count<5)MEM8(event+0x10+count)=0;
        MEM32(event+4)=gate==3?0:random_test_owner;
        MEM32(random_test_owner+16)=0;
        MEM32(0x50622c)=seeds[seed];
        double sample=raven_xml1_guest_random_unit();uint32_t advanced=MEM32(0x50622c);
        MEM32(0x50622c)=seeds[seed];
        g_ecx=event;PUSH32(g_esp,gate==2?0:0x2345);PUSH32(g_esp,gate==1?0:0x1234);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(MEM32(random_table+4),sp);
        unsigned run=count&&gate==0;
        if(MEM32(random_test_owner+16)!=run || MEM32(0x50622c)!=(run?advanced:seeds[seed]) ||
           g_esp!=sp||g_fp_top!=fp)failed=4;
        if(run&&(MEM32(random_test_owner+4)!=expected[(unsigned)(sample*count)]||
            MEM32(random_test_owner+8)!=0x1234||MEM32(random_test_owner+12)!=0x2345))failed=5;
    }
    strcpy((char*)XBOX_PTR(name),"ce_random_event");
    g_ecx=pool;PUSH32(g_esp,name);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000E6040u,sub_000E6040);
    uint32_t clone_handle=g_eax;
    g_ecx=pool;PUSH32(g_esp,clone_handle);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000E4DA0u,sub_000E4DA0);
    uint32_t clone=g_eax;
    if(!clone)return 8;
    MEM32(clone+4)=0x12345678;
    g_ecx=clone;PUSH32(g_esp,event);PUSH32(g_esp,0);RECOMP_ICALL_SAFE(MEM32(random_table+0x18),sp);
    if(memcmp((const void*)XBOX_PTR(clone+0x10),(const void*)XBOX_PTR(event+0x10),5)||
       MEM32(clone+4)!=0x12345678||MEM8(clone+0xd)!=7||MEM8(clone+0xc)!=255||g_esp!=sp)failed=9;
    MEM8(event+0x10)=17;
    if(MEM8(clone+0x10)!=101)failed=10;
    /* A base-event copy must not reinterpret another subtype's payload. */
    MEM32(event)=0x3d5b48;
    g_ecx=clone;PUSH32(g_esp,event);PUSH32(g_esp,0);RECOMP_ICALL_SAFE(MEM32(random_table+0x18),sp);
    if(MEM8(clone+0x10)!=101||g_esp!=sp)failed=11;
    MEM32(event)=random_table;
    g_ecx=pool;PUSH32(g_esp,clone_handle);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000E6CC0u,sub_000E6CC0);
    g_ecx=pool;PUSH32(g_esp,handle);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000E6CC0u,sub_000E6CC0);
    if(!(g_eax&255)||MEM32(pool+0xc3d8))failed=6;
    g_ecx=pool;PUSH32(g_esp,handle);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000E4DA0u,sub_000E4DA0);
    if(g_eax||g_esp!=sp||g_fp_top!=fp)failed=7;
    g_ecx=pool;PUSH32(g_esp,name);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000E6040u,sub_000E6040);
    uint32_t reused_handle=g_eax;
    g_ecx=pool;PUSH32(g_esp,reused_handle);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000E4DA0u,sub_000E4DA0);
    if(!g_eax||reused_handle==handle||reused_handle==clone_handle||MEM32(g_eax+0x10)||MEM8(g_eax+0x14))failed=12;
    g_ecx=pool;PUSH32(g_esp,reused_handle);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000E6CC0u,sub_000E6CC0);
    if(MEM32(pool+0xc3d8)||g_esp!=sp||g_fp_top!=fp)failed=13;
    random_test_owner=0;random_table=old_table;MEM32(0x50622c)=old_seed;
    if(failed)fprintf(stderr,"FAIL random event fixture %d\n",failed);
    else puts("PASS random event native factory, tag parser, contiguous prefix, RNG consumption, owner arguments, clone isolation, retirement and slot reuse");
    return failed;
}
