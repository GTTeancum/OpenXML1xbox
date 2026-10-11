#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "engine/progression/talent_package_guest.h"
#include "engine/progression/talent_source_table.h"
#include "diagnostics/raven_operand_trace.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_values_evaluate; original guest entry 0x000B7E60.
 * Evidence: src/engine/world/raven_extraction_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B7E60
 * Original: 0x000B7E60 - 0x000B7EFB (155 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_values_evaluate(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B7E60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000B7EAB; /* je: equal / zero */

loc_000B7E6C: ;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B7E75u); RECOMP_ABI_CALL(0x00341F4Cu, sub_00341F4C); /* call 0x00341F4C */

loc_000B7E75: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B7E8A; /* jne: not equal / not zero */

loc_000B7E7C: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7E8A; /* je: equal / zero */

loc_000B7E82: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7E8A; /* je: equal / zero */

loc_000B7E86: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B7EAB; /* jne: not equal / not zero */

loc_000B7E8A: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B7E9D; /* je: equal / zero */

loc_000B7E92: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B7E98u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000B7E98: ;
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;

loc_000B7E9D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B7EA3u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000B7EA3: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000B7EAB: ;
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x000B7EB5u); RECOMP_ABI_CALL(0x00013EB0u, sub_00013EB0); /* call 0x00013EB0 */

loc_000B7EB5: ;
    ecx = MEM32(edi + 8);
    esi = edi + 4;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000B7EC8u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_000B7EC8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B7ED3; /* jne: not equal / not zero */

loc_000B7ECF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7EF0; /* je: equal / zero */

loc_000B7ED3: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B7EE4; /* je: equal / zero */

loc_000B7EDB: ;
    edx = MEM32(esi + eax * 8 + 0x998);
    MEM32(ecx) = edx;

loc_000B7EE4: ;
    fp_push(MEMF(esi + eax * 8 + 0x994)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000B7EF0: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
