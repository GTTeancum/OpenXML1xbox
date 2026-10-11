#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/progression/talent_package_guest.h"
#include "engine/progression/talent_source_table.h"
#include "engine/progression/talent_registry_layout.h"
#include "engine/progression/character_talent_map_owner.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* XML2 16BF20 makes xml_talents resident for the package owner and invokes
 * its talent manager. XML1's B4870/B5620 already parse/register native talent
 * definitions. Scope their source context and retain exactly the references
 * this package acquired, rather than appending imports to shared_talents. */
struct TalentPackage {
    uint32_t buffer,owner,path,character;
    unsigned count;
    uint8_t ids[XML1_TALENT_REGISTRY_CAPACITY];
    struct TalentPackage *next;
};
static struct TalentPackage *packages,*loading;
struct GuestState {uint32_t ax,bx,cx,dx,si,di,bp,sp,seh;};
static struct GuestState save_state(void) {
    struct GuestState s={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};return s;
}
static void restore(struct GuestState s) {
    g_eax=s.ax;g_ebx=s.bx;g_ecx=s.cx;g_edx=s.dx;g_esi=s.si;g_edi=s.di;
    g_ebp=s.bp;g_esp=s.sp;g_seh_ebp=s.seh;
}
static void fail(const char *message) {
    fprintf(stderr,"[TALENT PACKAGE ERROR] %s\n",message);_Exit(4);
}
static void stack_at(uint32_t expected) {if(g_esp!=expected)fail("guest ABI imbalance");}
static void trace_registry(uint32_t manager) {
    /* Read the native pool's occupancy bitmap, not stale freed slots. These
     * offsets follow B39E0/B5843; this diagnostic never acquires references. */
    if(!getenv("XML1_TALENT_TRACE"))return;
    uint32_t pool=manager+XML1_TALENT_META_POOL;
    fprintf(stderr,"[TALENT REGISTRY] active=%u/%u/%u\n",MEM32(manager+16+XML1_TALENT_NAME_USED),
        MEM32(pool+XML1_TALENT_META_USED),MEM32(manager+XML1_TALENT_ID_MAP+12+XML1_TALENT_ID_USED));
    for(unsigned i=0;i<XML1_TALENT_REGISTRY_CAPACITY;++i) {
        if(!(MEM32(pool+XML1_TALENT_META_BITMAP+(i/32)*4)&(1u<<(i%32))))continue;
        uint32_t record=pool+i*0x54;
        unsigned source=MEM8(record+0x4e);
        const char *path=source<MEM32(0x4d7374)?
            (const char*)XBOX_PTR(xml1_talent_source_table()+source*32):"<invalid>";
        fprintf(stderr,"[TALENT REGISTRY ENTRY] slot=%u refs=%u source=%s selector=%.64s\n",
            i,MEM16(record+0x4c),path,(const char*)XBOX_PTR(record+0x0c));
    }
}
static void attribute(uint32_t node,uint32_t name,uint32_t output) {
    uint32_t sp=g_esp;MEM8(output)=0;
    PUSH32(g_esp,output);PUSH32(g_esp,name);PUSH32(g_esp,node);
    PUSH32(g_esp,0x00121011u);RECOMP_ABI_CALL(0x00121040u,sub_00121040);
    g_esp+=12;stack_at(sp);
    if(!(g_eax&255)||!MEM8(output))fail("missing required package/talent attribute");
}
uint32_t xml1_talent_package_path(void) {return loading?loading->path:0x3d4010u;}
uint32_t xml1_talent_package_owner(void) {return loading?loading->owner:4u;}

void xml1_talent_package_registered(uint32_t node,uint32_t result,uint32_t document) {
    if(!loading)return;
    struct GuestState saved=save_state();
    g_esp-=128;uint32_t text=g_esp;
    attribute(node,0x3c8690u,text); /* native name attribute */
    PUSH32(g_esp,0x000B59C0u);RECOMP_ABI_CALL(0x000B5980u,sub_000B5980);
    if(!result||loading->count>=XML1_TALENT_REGISTRY_CAPACITY) {
        trace_registry(g_eax);
        fprintf(stderr,"[TALENT PACKAGE REGISTER] name=%s acquired=%u result=%08X maps=%u/%u/%u\n",
            (const char*)XBOX_PTR(text),loading->count,result,
            MEM32(g_eax+16+XML1_TALENT_NAME_USED),
            MEM32(g_eax+XML1_TALENT_META_POOL+XML1_TALENT_META_USED),
            MEM32(g_eax+XML1_TALENT_ID_MAP+12+XML1_TALENT_ID_USED));
        fail("native talent registration failed");
    }
    g_ecx=g_eax;PUSH32(g_esp,text);PUSH32(g_esp,0x000B497Du);
    RECOMP_ABI_CALL(0x000B4D90u,sub_000B4D90);stack_at(text);
    if((g_eax&255)==255)fail("registered talent has no native ID");
    loading->ids[loading->count++]=(uint8_t)g_eax;
    if(getenv("XML1_TALENT_TRACE"))fprintf(stderr,
        "[TALENT DEFINITION] name=%s id=%u ranks=%u refs=%u selector=%.64s\n",
        (const char*)XBOX_PTR(text),(unsigned)(g_eax&255),MEM8(result+0x4f),
        MEM16(result+0x4c),(const char*)XBOX_PTR(result+0xc));
    /* Herostat references can register an identifier before its package is
     * resident. B5620 only parses on the first reference, leaving those
     * zero-level placeholders without the real definition. Populate that
     * empty metadata in place, preserving its ID and all owners' references.
     * Never replace an existing definition that already has level data. */
    if(!MEM8(result+0x4f)) {
        g_ecx=result;PUSH32(g_esp,document);PUSH32(g_esp,node);
        PUSH32(g_esp,0x000B5872u);RECOMP_ABI_CALL(0x000B4250u,sub_000B4250);
        stack_at(text);
        if(!(g_eax&255))fail("cannot populate referenced talent definition");
        if(getenv("XML1_TALENT_TRACE"))fprintf(stderr,
            "[TALENT DEFINITION RESOLVED] name=%s ranks=%u selector=%.64s\n",
            (const char*)XBOX_PTR(text),MEM8(result+0x4f),(const char*)XBOX_PTR(result+0xc));
    }
    /* XML2 CF660 derives the character from the talent filename, resolves
     * it through CharacterManager, and inserts each declared talent into its
     * stats. XML1 48D50 is the native equivalent insertion path. Keep existing
     * records (earned ranks, caps and baseline) intact on package reload. */
    if(loading->character) {
        const uint32_t stats=loading->character+4;
        const uint32_t map=xml1_character_map_current_resolve(stats+0x30);
        const int expanded=map!=stats+0x30;
        const uint32_t used=map+(expanded?0x1418u:0x164u);
        const unsigned capacity=expanded?XML1_CHARACTER_TALENT_MAP_CAPACITY:16u;
        const uint32_t id=text+124;
        MEM32(id)=loading->ids[loading->count-1];
        g_ecx=map;PUSH32(g_esp,MEM32(map+4));PUSH32(g_esp,id);
        PUSH32(g_esp,0x00048E6Cu);RECOMP_ABI_CALL(0x000B3BE0u,sub_000B3BE0);
        stack_at(text);
        if(g_eax==0x3fffffffu) {
            // Check before 48D50 acquires its reference: retail checks late.
            if(MEM32(used)>=capacity)fail("character talent map capacity exceeded");
            g_ecx=stats;PUSH32(g_esp,0);PUSH32(g_esp,0);
            PUSH32(g_esp,document);PUSH32(g_esp,node);
            PUSH32(g_esp,0x00054485u);RECOMP_ABI_CALL(0x00048D50u,sub_00048D50);
            stack_at(text);
            if(getenv("XML1_TALENT_TRACE"))fprintf(stderr,
                "[TALENT CHARACTER INSERT] character=%s name=%s count=%u\n",
                (const char*)XBOX_PTR(loading->character+0x20c),
                (const char*)XBOX_PTR(text),MEM32(used));
        }
    }
    restore(saved);
}

int xml1_talent_package_load(uint32_t node,uint32_t type) {
    if(!type||_stricmp((const char*)XBOX_PTR(type),"xml_talents"))return 0;
    if(loading)fail("recursive talent package registration");
    struct GuestState saved=save_state();
    g_esp-=256;uint32_t text=g_esp;
    attribute(node,0x3daeb0u,text); /* filename, same as native xml_resident */
    char *filename=(char*)XBOX_PTR(text);
    size_t length=strnlen(filename,128);
    if(length>=128)fail("unterminated package filename");
    if(!strrchr(filename,'.')) {
        if(length+4>=128)fail("package filename too long");
        memcpy(filename+length,".xml",5);
    }
    if(!xml1_talent_source_path_valid(text))fail("native talent source path is invalid");
    uint32_t owner=MEM32(0x502ee4u);
    PUSH32(g_esp,0x00120F84u);RECOMP_ABI_CALL(0x0014A660u,sub_0014A660);
    g_ecx=g_eax;PUSH32(g_esp,owner);PUSH32(g_esp,text);PUSH32(g_esp,0x00120F93u);
    RECOMP_ABI_CALL(0x0014A130u,sub_0014A130);stack_at(text);
    uint32_t buffer=g_eax;
    if(!buffer)fail("cannot load declared talent resource");
    for(struct TalentPackage *p=packages;p;p=p->next)if(p->buffer==buffer) {
        restore(saved);return 1;
    }
    struct TalentPackage *p=(struct TalentPackage*)calloc(1,sizeof(*p));
    if(!p)fail("cannot allocate package registration record");
    p->buffer=buffer;p->owner=owner;p->path=text;
    /* XML2 16BF20 -> 16E250/16DD00 strips the extension/directories before
     * CFBD0/CF660 resolves the owning character. Preserve that convention;
     * no Bishop names, fabricated attributes or resource aliases. */
    const char *basename=filename;
    for(const char *c=filename;*c;++c)if(*c=='/'||*c=='\\')basename=c+1;
    const char *dot=strrchr(basename,'.');
    size_t name_length=dot?(size_t)(dot-basename):strlen(basename);
    if(!name_length||name_length>19)fail("talent filename exceeds character name capacity");
    uint32_t character_name=text+128;
    memcpy((void*)XBOX_PTR(character_name),basename,name_length);MEM8(character_name+name_length)=0;
    uint32_t character_manager=MEM32(0x48d59cu);
    if(!character_manager)fail("talent package loaded before character manager");
    g_ecx=character_manager;PUSH32(g_esp,character_name);PUSH32(g_esp,0x00054BB2u);
    RECOMP_ABI_CALL(0x00055A90u,sub_00055A90);stack_at(text);
    if(!(g_eax&255))fail("talent package has no matching character");
    g_ecx=character_manager;PUSH32(g_esp,character_name);PUSH32(g_esp,0x000CFC49u);
    RECOMP_ABI_CALL(0x00054BA0u,sub_00054BA0);stack_at(text);
    p->character=g_eax;
    if(!p->character)fail("talent package character is not resident");
    uint8_t default_source=MEM8(0x44f388u);
    loading=p;
    PUSH32(g_esp,0x000B59C0u);RECOMP_ABI_CALL(0x000B5980u,sub_000B5980);
    g_ecx=g_eax;PUSH32(g_esp,0x000B49D7u);RECOMP_ABI_CALL(0x000B4870u,sub_000B4870);
    stack_at(text);loading=NULL;MEM8(0x44f388u)=default_source;
    if(!(g_eax&255)||!p->count)fail("talent resource registered no definitions");
    p->path=0;p->next=packages;packages=p;
    fprintf(stderr,"[TALENT PACKAGE] owner=%u definitions=%u source=%s buffer=%08X\n",owner,p->count,filename,buffer);
    restore(saved);return 1;
}

void xml1_talent_package_release(uint32_t buffer) {
    struct TalentPackage **link=&packages;
    while(*link&&(*link)->buffer!=buffer)link=&(*link)->next;
    if(!*link)return;
    struct TalentPackage *p=*link;*link=p->next; /* detach before native reentry */
    struct GuestState saved=save_state();
    g_esp-=4;uint32_t id=g_esp;
    for(unsigned i=p->count;i>0;--i) {
        MEM32(id)=p->ids[i-1];
        PUSH32(g_esp,0x000B59C0u);RECOMP_ABI_CALL(0x000B5980u,sub_000B5980);
        const uint32_t manager=g_eax;
        /* Keep failure evidence before native teardown reuses IDs. A package
         * owns exactly its registrations; a missing registration must never
         * be disguised by skipping release or decrementing a replacement. */
        if(getenv("XML1_TALENT_TRACE"))fprintf(stderr,
            "[TALENT PACKAGE RELEASE REQUEST] owner=%u buffer=%08X id=%u remaining=%u manager=%08X\n",
            p->owner,p->buffer,MEM32(id),i,manager);
        g_ecx=manager;PUSH32(g_esp,id);PUSH32(g_esp,0x000B4A39u);
        RECOMP_ABI_CALL(0x000B5080u,sub_000B5080);stack_at(id);
        if(!(g_eax&255)) {
            fprintf(stderr,"[TALENT PACKAGE RELEASE FAILED] owner=%u buffer=%08X id=%u remaining=%u\n",
                p->owner,p->buffer,MEM32(id),i);
            trace_registry(manager);
            fail("unbalanced native talent release");
        }
    }
    fprintf(stderr,"[TALENT PACKAGE RELEASE] owner=%u definitions=%u buffer=%08X\n",p->owner,p->count,buffer);
    free(p);restore(saved);
}
void xml1_talent_package_release_all(void) {
    while(packages)xml1_talent_package_release(packages->buffer);
}
