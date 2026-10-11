#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void fail(const char *message,uint32_t address) {
    fprintf(stderr,"[CHARACTER TALENT MAP ERROR] %s: %08X\n",message,address);
    _Exit(4);
}
static uint32_t (*fixture_allocate)(unsigned);
static uint32_t allocate_map(void *unused,unsigned bytes) {
    (void)unused;
    if(fixture_allocate)return fixture_allocate(bytes);
    uint32_t ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,
        bp=g_ebp,sp=g_esp,seh=g_seh_ebp;
    /* The existing talent manager uses allocator 123490, category 0E/tag 1D.
     * Keep storage in guest memory: native iterators and serializers use its
     * 32-bit addresses. The owner reuses retired maps at peak live capacity. */
    PUSH32(g_esp,0x1d);PUSH32(g_esp,0x0e);PUSH32(g_esp,bytes);
    PUSH32(g_esp,0x000B5997u);
    RECOMP_ABI_CALL(0x00123490u,sub_00123490);g_esp+=12;
    uint32_t result=g_eax;
    if(g_esp!=sp||result<0x10000u||result>0x08000000u-bytes)
        fail("allocation/ABI",result);
    g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;
    g_ebp=bp;g_esp=sp;g_seh_ebp=seh;
    return result;
}
static xml1_character_map_owner owner={NULL,allocate_map,NULL,0,0};
int xml1_character_talent_map_fixture_allocator(uint32_t (*allocate)(unsigned)) {
    if(owner.active)return 0;
    fixture_allocate=allocate;return 1;
}
uint32_t xml1_character_talent_map_create(uint32_t original) {
    if(original<0x10000u||original>0x08000000u-0x1acu)
        fail("invalid embedded map",original);
    if(!xml1_character_map_bind(&owner))fail("another guest owns live maps",original);
    uint32_t result=xml1_character_map_create(&owner,original);
    if(!result)fail("allocation or duplicate construction",original);
    memset((void*)XBOX_PTR(result),0,XML1_CHARACTER_TALENT_MAP_BYTES);
    return result;
}
uint32_t xml1_character_talent_map_resolve(uint32_t original) {
    return xml1_character_map_current_resolve(original);
}
int xml1_character_talent_map_contains(uint32_t address) {
    return xml1_character_map_current_contains(address);
}
void xml1_character_talent_map_retire(uint32_t original) {
    /* Native reference-release and value cleanup must run before retiring.
     * Retiring only releases ownership; it never calls guest code itself. */
    if(!xml1_character_map_retire(&owner,original))fail("unowned destruction",original);
}
