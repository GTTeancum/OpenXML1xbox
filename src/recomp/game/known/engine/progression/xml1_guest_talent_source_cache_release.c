#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "engine/progression/talent_package_guest.h"
#include "engine/progression/talent_source_table.h"
#include "diagnostics/raven_operand_trace.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_talent_source_cache_release; original guest entry 0x000B4B30.
 * Evidence: src/engine/progression/talent_identity_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B4B30
 * Original: 0x000B4B30 - 0x000B4C36 (262 bytes, 81 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_source_cache_release(void)
{
    /* XML1 EXPANDED TALENT SOURCE CACHE */
    const int _talent_cache_expanded=xml1_talent_registry_contains(g_ecx);
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    /* XML1 EXPANDED TALENT SOURCES */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4B30: ;
    esp = esp - 0x6C;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x68) = eax;
    eax = ZX8(MEM8(0x44F388));
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4D7374)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x4D7374) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B4B58; /* jge: greater or equal (signed >=) */

loc_000B4B4E: ;
    eax = eax << 5;
    eax = eax + xml1_talent_source_table();
    goto loc_000B4B5A;

loc_000B4B58: ;
    eax = 0; /* xor self */

loc_000B4B5A: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4B67u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B4B67: ;
    eax = MEM32(esp + 0x80);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x6B) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000B4BA7; /* je: equal / zero */

loc_000B4B7A: ;
    eax = ZX8(MEM8(eax + 0x4E));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4D7374)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x4D7374) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B4B90; /* jge: greater or equal (signed >=) */

loc_000B4B86: ;
    eax = eax << 5;
    eax = eax + xml1_talent_source_table();
    goto loc_000B4B92;

loc_000B4B90: ;
    eax = 0; /* xor self */

loc_000B4B92: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B4B9Fu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B4B9F: ;
    esp = esp + 0xC;
    MEM8(esp + 0x6B) = 0;

loc_000B4BA7: ;
    PUSH32(esp, 0x40);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4BB8u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B4BB8: ;
    ecx = MEM32(esi + (_talent_expanded ? 0xA4A8u : 0x6170u));
    esi = esi + (_talent_expanded ? 0xA4A4u : 0x616Cu);
    esp = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esp + 0x53) = 0;
    PUSH32(esp, 0x000B4BD9u); RECOMP_ABI_CALL(0x000B3C30u, sub_000B3C30); /* call 0x000B3C30 */

loc_000B4BD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000B4BEC; /* jne: not equal / not zero */

loc_000B4BE8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4C24; /* je: equal / zero */

loc_000B4BEC: ;
    eax = eax + eax * 8;
    edx = MEM32(esi + eax * 8 + (_talent_cache_expanded ? 0x5038u : 0x15Cu));
    eax = esi + eax * 8 + (_talent_cache_expanded ? 0x5038u : 0x15Cu);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_000B4C24; /* jne: not equal / not zero */

loc_000B4C06: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B4C12u); RECOMP_ABI_CALL(0x000B3EF0u, sub_000B3EF0); /* call 0x000B3EF0 */

loc_000B4C12: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x68);
    PUSH32(esp, 0x000B4C1Eu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B4C1E: ;
    esp = esp + 0x6C;
    esp += 8; return; /* ret 4 */

loc_000B4C24: ;
    ecx = MEM32(esp + 0x6C);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    PUSH32(esp, 0x000B4C30u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B4C30: ;
    esp = esp + 0x6C;
    esp += 8; return; /* ret 4 */

}
