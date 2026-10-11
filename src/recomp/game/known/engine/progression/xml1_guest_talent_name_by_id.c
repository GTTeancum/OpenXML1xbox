#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "engine/progression/talent_package_guest.h"
#include "engine/progression/talent_source_table.h"
#include "diagnostics/raven_operand_trace.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_talent_name_by_id; original guest entry 0x000B4EA0.
 * Evidence: src/engine/progression/talent_identity_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B4EA0
 * Original: 0x000B4EA0 - 0x000B4F01 (97 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_name_by_id(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4EA0: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx + 4;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4ECB; /* je: equal / zero */

loc_000B4EB2: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    ecx = MEM32(ecx + esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4ECB; /* je: equal / zero */

loc_000B4EC3: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B4ECBu); RECOMP_ABI_CALL(0x000B3BB0u, sub_000B3BB0); /* call 0x000B3BB0 */

loc_000B4ECB: ;
    ebx = MEM32(esp + 0x10);
    /* nop */

loc_000B4ED0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4EDB; /* jne: not equal / not zero */

loc_000B4ED7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4EF9; /* je: equal / zero */

loc_000B4EDB: ;
    SET_LO8(edx, MEM8(esi + eax + (_talent_expanded ? 0x2FE4u : 0x1C58u)));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4EEF; /* jne: not equal / not zero */

loc_000B4EE6: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    edi = ecx + esi + 0x18;

loc_000B4EEF: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B4EF7u); RECOMP_ABI_CALL(0x000B3F40u, sub_000B3F40); /* call 0x000B3F40 */

loc_000B4EF7: ;
    goto loc_000B4ED0;

loc_000B4EF9: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
