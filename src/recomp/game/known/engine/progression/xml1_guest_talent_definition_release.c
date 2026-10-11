#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "engine/progression/talent_package_guest.h"
#include "engine/progression/talent_source_table.h"
#include "diagnostics/raven_operand_trace.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_talent_definition_release; original guest entry 0x000B5080.
 * Evidence: src/engine/progression/talent_identity_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B5080
 * Original: 0x000B5080 - 0x000B516F (239 bytes, 81 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_definition_release(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B5080: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + (_talent_expanded ? 0x8C90u : 0x5324u));
    ecx = MEM32(esp + 0x34);
    ebx = edi + (_talent_expanded ? 0x8C8Cu : 0x5320u);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x000B50A2u); RECOMP_ABI_CALL(0x000B3BE0u, sub_000B3BE0); /* call 0x000B3BE0 */

loc_000B50A2: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B50B4; /* jne: not equal / not zero */

loc_000B50AC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5163; /* je: equal / zero */

loc_000B50B4: ;
    eax = MEM32(ebx + ebp * 4 + (_talent_expanded ? 0x141Cu : 0xBF0u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B5163; /* je: equal / zero */

loc_000B50C3: ;
    esi = edi + (_talent_expanded ? 0x30E8u : 0x1CF4u);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B50D1u); RECOMP_ABI_CALL(0x000B39E0u, xml1_guest_talent_metadata_handle_valid); /* call 0x000B39E0 */

loc_000B50D1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B5163; /* je: equal / zero */

loc_000B50D9: ;
    edx = MEM32(ebx + ebp * 4 + (_talent_expanded ? 0x141Cu : 0xBF0u));
    eax = MEM32(esi + (_talent_expanded ? 0x5B9Cu : 0x3624u));
    eax = eax & edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    eax = eax + esi;
    MEM16(eax + 0x4C) = MEM16(eax + 0x4C) - 1;
    _fa = (uint32_t)(MEM16(eax + 0x4C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebx + ebp * 4 + (_talent_expanded ? 0x141Cu : 0xBF0u));
    edx = MEM32(esi + (_talent_expanded ? 0x5B9Cu : 0x3624u));
    edx = edx & eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x54);
    _fa = (uint32_t)(MEM16(edx + esi + 0x4C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + esi + 0x4C), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5157; /* jne: not equal / not zero */

loc_000B510B: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B5113u); RECOMP_ABI_CALL(0x000B4F60u, xml1_guest_talent_metadata_pool_release); /* call 0x000B4F60 */

loc_000B5113: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x000B511Bu); RECOMP_ABI_CALL(0x00199920u, sub_00199920); /* call 0x00199920 */

loc_000B511B: ;
    ecx = MEM32(esp + 0x34);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000B5127u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B5127: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B5134u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B5134: ;
    eax = MEM32(edi + 8);
    esi = edi + 4;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(esp + 0x37) = 0;
    PUSH32(esp, 0x000B514Fu); RECOMP_ABI_CALL(0x000B3B30u, sub_000B3B30); /* call 0x000B3B30 */

loc_000B514F: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B5157u); RECOMP_ABI_CALL(0x00199920u, sub_00199920); /* call 0x00199920 */

loc_000B5157: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

loc_000B5163: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

}
