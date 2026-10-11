#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/world/raven_extraction_guest.h"
#include "engine/world/raven_extraction_owner.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

static void fail(const char* reason) {
    fprintf(stderr,"[EXTRACTION ERROR] %s\n",reason); _Exit(4);
}
static void check(uint32_t expected) { if(g_esp!=expected)fail("Native XML ABI"); }
static void symbol(uint32_t object,uint32_t text) {
    uint32_t sp=g_esp;g_ecx=object;
    PUSH32(g_esp,2);PUSH32(g_esp,text);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00125DA0u,sub_00125DA0);check(sp);
}
static void release_symbol(uint32_t object) {
    uint32_t sp=g_esp;g_ecx=object;PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00125890u,sub_00125890);check(sp);
}
static uint32_t attribute(uint32_t node,uint32_t key) {
    uint32_t sp=g_esp;g_ecx=node;
    PUSH32(g_esp,key);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x001260E0u,sub_001260E0);check(sp);
    if(!g_eax)return 0;
    g_ecx=g_eax;PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00199EE0u,sub_00199EE0);check(sp);
    return g_eax;
}
static unsigned char act_number(uint32_t text) {
    if(!text)return 1; /* Native extraction initializer76890 default. */
    uint32_t sp=g_esp;
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000B8550u,sub_000B8550);check(sp);
    g_ecx=g_eax;
    PUSH32(g_esp,0);PUSH32(g_esp,text);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x000B7E60u,sub_000B7E60);check(sp);
    // Keep XML1 CValues, including its authored symbolic-value lookup. XML2's
    // extraction record stores the low byte after integer conversion.
    double value=g_fp_stack[g_fp_top];g_fp_top=(g_fp_top+1)&7;
    if(!isfinite(value)||value>=9223372036854775808.0||value< -9223372036854775808.0)return 0;
    return (unsigned char)(int64_t)value;
}
void xml1_extraction_capture(uint32_t root) {
    // 81031 has the actual native zoneinfo root, after VFS/language resolution.
    // Capture its additional declarations before the retail loop stops at the
    // current zone and destroys its parser. No parallel host path selection.
    if(!root)return;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    g_esp-=160;const uint32_t frame=g_esp;
    strcpy((char*)XBOX_PTR(frame+80),"zone");
    strcpy((char*)XBOX_PTR(frame+88),"extraction");
    strcpy((char*)XBOX_PTR(frame+104),"name");
    strcpy((char*)XBOX_PTR(frame+112),"act");
    strcpy((char*)XBOX_PTR(frame+120),"towncenter");
    symbol(frame,frame+80);symbol(frame+16,frame+88);symbol(frame+32,frame+104);
    symbol(frame+48,frame+112);symbol(frame+64,frame+120);
    raven_extraction_point* points=NULL;size_t count=0,capacity=0;
    uint32_t child=0;unsigned visited=0;
    for(;;) {
        g_ecx=root;PUSH32(g_esp,child);PUSH32(g_esp,frame);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00126C30u,sub_00126C30);check(frame);
        child=g_eax;if(!child)break;
        // Corrupt resource traversal guard, not a saved-state bitmap limit.
        if(++visited>65536)fail("Cyclic/excessive native zone declarations");
        uint32_t flag=attribute(child,frame+16);
        if(!flag||_stricmp((const char*)XBOX_PTR(flag),"true"))continue;
        uint32_t name=attribute(child,frame+32);
        if(!name||!MEM8(name))fail("Extraction zone has no name");
        if(count==capacity) {
            size_t next=capacity?capacity*2:32;
            raven_extraction_point* grown=(raven_extraction_point*)realloc(points,next*sizeof(*points));
            if(!grown)fail("Extraction metadata allocation");
            points=grown;capacity=next;
        }
        uint32_t town=attribute(child,frame+64);
        points[count].name=(const char*)XBOX_PTR(name);
        points[count].town_center=town&&!_stricmp((const char*)XBOX_PTR(town),"true");
        points[count].act=act_number(attribute(child,frame+48));
        ++count;
    }
    if(!raven_extraction_points(points,count))fail("Extraction metadata rejected");
    free(points);
    release_symbol(frame+64);release_symbol(frame+48);
    release_symbol(frame+32);release_symbol(frame+16);release_symbol(frame);
    g_esp=sp;g_eax=ax;g_ecx=cx;g_edx=dx;
}
static size_t stream_room(uint32_t stream,uint32_t* cursor) {
    const uint32_t limit=0x2FC00;
    if(stream<0x10000||stream>0x08000000-limit-4)fail("Invalid campaign stream");
    *cursor=MEM32(stream+limit);
    if(*cursor<stream||*cursor-stream>=limit)fail("Invalid campaign cursor");
    return limit-(*cursor-stream);
}
void xml1_extraction_campaign_save(uint32_t stream) {
    uint32_t cursor;size_t room=stream_room(stream,&cursor),written;
    if(!raven_extraction_save((void*)XBOX_PTR(cursor),room,&written))fail("Campaign save rejected");
    MEM32(stream+0x2FC00)=cursor+(uint32_t)written;
}
void xml1_extraction_campaign_load(uint32_t stream) {
    uint32_t cursor;size_t room=stream_room(stream,&cursor),consumed;
    if(!raven_extraction_load((const void*)XBOX_PTR(cursor),room,&consumed))fail("Campaign load rejected");
    MEM32(stream+0x2FC00)=cursor+(uint32_t)consumed;
}
int xml1_extraction_fixture(uint32_t pool) {
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    const int fp=g_fp_top;
    /* This pre-entry fixture does not initialize the retail CRT heap. Skip
     * only CValues' singleton construction/atexit registration: the numeric
     * parser below does not access its symbol table. Restore the flag before
     * returning; production capture still uses the real singleton normally.
     * Symbolic act values and full singleton startup are not covered here. */
    const uint32_t values_initialized=MEM32(0x4D810C);
    MEM32(0x4D810C)=values_initialized|1;
    memset((void*)XBOX_PTR(pool),0,0x1000);
    MEM32(pool+0xc)=pool+0x100;
    const char* zone_names[]={"stock","Town\\Hub","locked"};
    for(unsigned i=0;i<3;++i) {
        uint32_t child=pool+0x100+i*0x200,attr=child+0x60;
        strcpy((char*)XBOX_PTR(child+0x100),"zone");symbol(child+0x14,child+0x100);
        MEM32(child+0x28)=i<2?child+0x200:0;
        MEM32(child+0x54)=attr;
        strcpy((char*)XBOX_PTR(child+0x110),"name");symbol(attr+4,child+0x110);
        strcpy((char*)XBOX_PTR(child+0x120),zone_names[i]);
        MEM32(attr+0x14)=child+0x120;MEM32(attr+0x1c)=1;
        MEM32(attr+0x28)=i?child+0xa0:child+0x2c;
        if(i) {
            attr=child+0xa0;
            strcpy((char*)XBOX_PTR(child+0x140),"extraction");symbol(attr+4,child+0x140);
            strcpy((char*)XBOX_PTR(child+0x150),i==1?"TrUe":"false");
            MEM32(attr+0x14)=child+0x150;MEM32(attr+0x1c)=1;
            MEM32(attr+0x28)=child+0x2c;
            if(i==1) {
                MEM32(attr+0x28)=child+0xd0;
                attr=child+0xd0;
                strcpy((char*)XBOX_PTR(child+0x160),"towncenter");symbol(attr+4,child+0x160);
                strcpy((char*)XBOX_PTR(child+0x1a0),"TRUE");
                MEM32(attr+0x14)=child+0x1a0;MEM32(attr+0x1c)=1;MEM32(attr+0x28)=child+0x1c0;
                attr=child+0x1c0;
                strcpy((char*)XBOX_PTR(child+0x1b0),"act");symbol(attr+4,child+0x1b0);
                strcpy((char*)XBOX_PTR(child+0x1b8),"2.9");
                MEM32(attr+0x14)=child+0x1b8;MEM32(attr+0x1c)=1;MEM32(attr+0x28)=child+0x2c;
            }
        }
    }
    raven_extraction_reset();
    xml1_extraction_capture(pool);
    int failed=raven_extraction_unlock("stock")!=0||raven_extraction_unlock("locked")!=0||
        raven_extraction_unlock("TOWN\\HUB")!=1||raven_extraction_unlocked("town/hub")!=0;
    char destination[64];
    if(raven_extraction_town_center(2,destination,sizeof(destination))!=1||strcmp(destination,"Town\\Hub"))failed=1;
    if(raven_extraction_town_center(1,destination,sizeof(destination))!=0)failed=1;
    strcpy((char*)XBOX_PTR(pool+0x300+0x1b8),"3");
    xml1_extraction_capture(pool);
    if(raven_extraction_unlocked("town\\hub")!=1)failed=1;
    if(raven_extraction_town_center(2,destination,sizeof(destination))!=0||
       raven_extraction_town_center(3,destination,sizeof(destination))!=1||strcmp(destination,"Town\\Hub"))failed=1;
    for(unsigned i=0;i<3;++i) {
        uint32_t child=pool+0x100+i*0x200;
        release_symbol(child+0x14);release_symbol(child+0x64);
        if(i)release_symbol(child+0xa4);
        if(i==1){release_symbol(child+0xd4);release_symbol(child+0x1c4);}
    }
    memset((void*)XBOX_PTR(pool),0,0x1000);
    if(raven_extraction_unlocked("Town\\Hub")!=1)failed=1;
    if(raven_extraction_town_center(3,destination,sizeof(destination))!=1||strcmp(destination,"Town\\Hub"))failed=1;
    {
        // Real native marker writer/reader around the guest cursor bridge.
        // Include the native cursor and temporary label fields in allocation.
        uint32_t stream=xbox_HeapAlloc(0x2fc80,16);
        if(!stream)fail("Campaign fixture allocation");
        memset((void*)XBOX_PTR(stream),0xA5,0x2fc80);
        MEM32(stream+0x2fc00)=stream+64;
        xml1_extraction_campaign_save(stream);
        uint32_t marker=MEM32(stream+0x2fc00);
        strcpy((char*)XBOX_PTR(pool+0x900),"fixture");
        PUSH32(g_esp,pool+0x900);PUSH32(g_esp,0x3CCF34);PUSH32(g_esp,stream);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0006E880u,sub_0006E880);g_esp+=12;check(sp);
        uint32_t end=MEM32(stream+0x2fc00);
        if(marker<=stream+64||end!=marker+52)failed=1;
        raven_extraction_reset();MEM32(stream+0x2fc00)=stream+64;
        xml1_extraction_campaign_load(stream);
        if(MEM32(stream+0x2fc00)!=marker||raven_extraction_unlocked("Town\\Hub")!=1)failed=1;
        g_ecx=stream;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0006E920u,sub_0006E920);check(sp);
        if(MEM32(stream+0x2fc00)!=end)failed=1;
        for(unsigned i=0;i<64;++i)if(MEM8(stream+i)!=0xA5)failed=1;
        memmove((void*)XBOX_PTR(stream+64),(void*)XBOX_PTR(marker),52);
        MEM32(stream+0x2fc00)=stream+64;
        xml1_extraction_campaign_load(stream);
        if(MEM32(stream+0x2fc00)!=stream+64||raven_extraction_unlocked("Town\\Hub"))failed=1;
        xbox_HeapFree(stream);
    }
    raven_extraction_reset();
    if(raven_extraction_unlocked("Town\\Hub")!=0)failed=1;
    if(!raven_extraction_definitions(NULL,0))failed=1;
    if(g_esp!=sp||g_fp_top!=fp)failed=1;
    MEM32(0x4D810C)=values_initialized;
    g_eax=ax;g_ecx=cx;g_edx=dx;
    puts(failed?"FAIL extraction native parser fixture":
        "PASS extraction native parser/save: declaration filter, owned travel metadata, native act parsing, town selection, reparse persistence, native marker roundtrip, legacy reset, cursor isolation and ABI");
    return failed;
}
