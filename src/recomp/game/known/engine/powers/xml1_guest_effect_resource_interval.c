#define RECOMP_GENERATED_CODE
#include "engine/powers/raven_powerup_guest.h"
#include "diagnostics/raven_operand_trace.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_effect_resource_interval; original guest entry 0x00025EE0.
 * Evidence: src/engine/powers/raven_powerup_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00025EE0
 * Original: 0x00025EE0 - 0x00025F4E (110 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_effect_resource_interval(void)
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

loc_00025EE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00025F43; /* je: equal / zero */

loc_00025EEA: ;
    eax = MEM32(ecx + 0xA080);
    edx = ecx + 0x3B10;
    eax = eax & edi;
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x62B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4 + 0x62B4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00025F43; /* jne: not equal / not zero */

loc_00025F01: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x6298)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + eax * 4 + 0x6298), esi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00025F43; /* je: equal / zero */

loc_00025F1E: ;
    esi = MEM32(edx + 0x6570);
    esi = esi & edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x8C);
    esi = esi + edx;
    if ((esi == 0)) goto loc_00025F43; /* je: equal / zero */

loc_00025F30: ;
    PUSH32(esp, 0x00025F35u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_00025F35: ;
    fp_top() = fp_top() * MEMF(esi + 0x80); /* fmul dword ptr [esi + 0x80] */
    POP32(esp, edi);
    fp_top() = fp_top() + MEMF(esi + 0x7C); /* fadd dword ptr [esi + 0x7c] */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00025F43: ;
    fp_push(MEMF(0x3C8828)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
