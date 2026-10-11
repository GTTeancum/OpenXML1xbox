#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "engine/progression/talent_package_guest.h"
#include "engine/progression/talent_source_table.h"
#include "diagnostics/raven_operand_trace.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_talent_id_by_name; original guest entry 0x000B4D90.
 * Evidence: src/engine/progression/talent_identity_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B4D90
 * Original: 0x000B4D90 - 0x000B4DE4 (84 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_id_by_name(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4D90: ;
    esp = esp - 0x20;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B4DA7u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B4DA7: ;
    edx = MEM32(esi + 8);
    esi = esi + 4;
    esp = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + 0x2B) = 0;
    PUSH32(esp, 0x000B4DC2u); RECOMP_ABI_CALL(0x000B3B30u, sub_000B3B30); /* call 0x000B3B30 */

loc_000B4DC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4DCD; /* jne: not equal / not zero */

loc_000B4DC9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4DDB; /* je: equal / zero */

loc_000B4DCD: ;
    xml1_raven_trace_talent_name(esi - 4, MEM32(esp + 0x28), MEM8(esi + eax + (_talent_expanded ? 0x2FE4u : 0x1C58u)));
    SET_LO8(eax, MEM8(esi + eax + (_talent_expanded ? 0x2FE4u : 0x1C58u)));
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

loc_000B4DDB: ;
    SET_LO8(eax, LO8(eax) | 0xFF);
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

}
