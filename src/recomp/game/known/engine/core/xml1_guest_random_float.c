#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_package_guest.h"
#include "engine/resources/pkgb_decode.h"
#include "app/build_settings.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_random_float; original guest entry 0x00123330.
 * Evidence: src/engine/powers/raven_powerup_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00123330
 * Original: 0x00123330 - 0x00123398 (104 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_random_float(void)
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

loc_00123330: ;
    ecx = MEM32(0x50622C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123356; /* jne: not equal / not zero */

loc_0012333A: ;
    ecx = MEM32(0x5BC568);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00123345u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00123345: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0012334F; /* jge: greater or equal (signed >=) */

loc_0012334B: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */

loc_0012334F: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00123356; /* jne: not equal / not zero */

loc_00123351: ;
    ecx = 0x9610EE;

loc_00123356: ;
    eax = 0x834E0B5Fu;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x41A7);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x10) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7FFFFFFF);
    ecx = ecx - eax;
    MEM32(0x50622C) = ecx;
    if (((int32_t)ecx >= 0)) goto loc_0012338B; /* jns: not sign (positive) */

loc_0012337F: ;
    eax = ecx;
    eax = eax + 0x7FFFFFFF;
    MEM32(0x50622C) = eax;

loc_0012338B: ;
    fp_push((double)SMEM32(0x50622C)); /* fild */
    fp_top() = fp_top() * MEMF(0x3DB11C); /* fmul dword ptr [0x3db11c] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
