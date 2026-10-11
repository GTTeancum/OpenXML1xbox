#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "engine/progression/talent_package_guest.h"
#include "engine/progression/talent_source_table.h"
#include "diagnostics/raven_operand_trace.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_talent_registry_construct; original guest entry 0x000B58A0.
 * Evidence: tests/engine/progression/progression_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B58A0
 * Original: 0x000B58A0 - 0x000B597A (218 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_registry_construct(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    xml1_talent_registry_begin(g_ecx);
    const int _talent_expanded=1;

loc_000B58A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3D40CC;
    PUSH32(esp, edi);
    ecx = esi + 0x10;
    MEM32(esi + 8) = 0x3FFFFFFF;
    MEM32(esi + 0xC) = 0xFFFFFFFFu;
    MEM32(esi + 4) = 0x3D402C;
    PUSH32(esp, 0x000B58C7u); RECOMP_ABI_CALL(0x000B4090u, xml1_guest_talent_name_pool_construct); /* call 0x000B4090 */

loc_000B58C7: ;
    ecx = esi + (_talent_expanded ? 0x30E8u : 0x1CF4u);
    MEM32(esi + 4) = 0x3D4080;
    PUSH32(esp, 0x000B58D9u); RECOMP_ABI_CALL(0x000B4770u, xml1_guest_talent_metadata_pool_construct); /* call 0x000B4770 */

loc_000B58D9: ;
    MEM32(esi + (_talent_expanded ? 0x8C90u : 0x5324u)) = 0x3FFFFFFF;
    MEM32(esi + (_talent_expanded ? 0x8C94u : 0x5328u)) = 0xFFFFFFFFu;
    MEM32(esi + (_talent_expanded ? 0x8C8Cu : 0x5320u)) = 0x3D4044;
    ecx = esi + (_talent_expanded ? 0x8C98u : 0x532Cu);
    edi = 0; /* xor self */
    MEM32(ecx + (_talent_expanded ? 0x13E0u : 0xBC0u)) = edi;
    MEM32(ecx + (_talent_expanded ? 0x13E4u : 0xBC4u)) = edi;
    MEM32(ecx + (_talent_expanded ? 0x13E8u : 0xBC8u)) = edi;
    eax = 0; /* xor self */
    edx = ecx + (_talent_expanded ? 0x13ECu : 0xBCCu);
    MEM32(edx) = eax;
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = eax;
    MEM32(edx + 0x10) = eax;
    MEM32(ecx + (_talent_expanded ? 0x140Cu : 0xBE0u)) = edi;
    PUSH32(esp, 0x000B5932u); RECOMP_ABI_CALL(0x000EA9E0u, xml1_guest_talent_id_pool_construct); /* call 0x000EA9E0 */

loc_000B5932: ;
    MEM32(esi + (_talent_expanded ? 0x8C8Cu : 0x5320u)) = 0x3D4098;
    ecx = esi + (_talent_expanded ? 0xA4B0u : 0x6178u);
    MEM32(esi + (_talent_expanded ? 0xA4A8u : 0x6170u)) = 0x3FFFFFFF;
    MEM32(esi + (_talent_expanded ? 0xA4ACu : 0x6174u)) = 0xFFFFFFFFu;
    MEM32(esi + (_talent_expanded ? 0xA4A4u : 0x616Cu)) = 0x3D405C;
    PUSH32(esp, 0x000B5965u); RECOMP_ABI_CALL(0x000B47E0u, xml1_guest_talent_source_cache_pool_construct); /* call 0x000B47E0 */

loc_000B5965: ;
    MEM32(esi + (_talent_expanded ? 0x13C50u : 0x635Cu)) = edi;
    POP32(esp, edi);
    MEM32(esi + (_talent_expanded ? 0xA4A4u : 0x616Cu)) = 0x3D40B0;
    xml1_talent_registry_end();
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
