#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_package_guest.h"
#include "engine/resources/pkgb_decode.h"
#include "app/build_settings.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_random_integer_range; original guest entry 0x001233C0.
 * Evidence: src/engine/actors/raven_leader_actor.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_001233C0
 * Original: 0x001233C0 - 0x001233FF (63 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_random_integer_range(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001233C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x001233CFu); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_001233CF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001233E9; /* jle: less or equal (signed <=) */

loc_001233D3: ;
    esi = esi - edi;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = esi;
    fp_top() = fp_top() * (double)SMEM32(esp + 0xC); /* fimul dword ptr [esp + 0xc] */
    POP32(esp, edi);
    POP32(esp, esi);
    fp_top() = fp_top() + (double)SMEM32(esp + 8); /* fiadd dword ptr [esp + 8] */
    g_seh_ebp = ebp; sub_001A41F0(); return; /* tail jmp 0x001A41F0 */

loc_001233E9: ;
    edi = edi - esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edi;
    fp_top() = fp_top() * (double)SMEM32(esp + 0x10); /* fimul dword ptr [esp + 0x10] */
    POP32(esp, edi);
    POP32(esp, esi);
    fp_top() = fp_top() + (double)SMEM32(esp + 4); /* fiadd dword ptr [esp + 4] */
    g_seh_ebp = ebp; sub_001A41F0(); return; /* tail jmp 0x001A41F0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
