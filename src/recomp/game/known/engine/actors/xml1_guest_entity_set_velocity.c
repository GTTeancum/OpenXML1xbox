#define RECOMP_GENERATED_CODE
#include "audio/raven_loop_sound_runtime.h"
#include "engine/combat/raven_native_damage.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/scripting/raven_script_extensions.h"
#include "engine/world/raven_campaign_state_guest.h"
#include "engine/world/raven_extraction_guest.h"
#include "engine/world/raven_extraction_owner.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_entity_set_velocity; original guest entry 0x000760D0.
 * Evidence: docs/XML2-INTEGRATION.md
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000760D0
 * Original: 0x000760D0 - 0x000761A9 (217 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_entity_set_velocity(void)
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

loc_000760D0: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    eax = eax >> 5;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007616A; /* jne: not equal / not zero */

loc_000760E4: ;
    fp_push(MEMF(esi + 0x120)); /* fld float */
    fp_push(MEMF(esi + 0x11C)); /* fld float */
    fp_push(MEMF(esi + 0x118)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CD304)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cd304] */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0007616A; /* jp: parity */

loc_00076119: ;
    fp_push(MEMF(esi + 0x44)); /* fld float */
    ecx = MEM32(esi + 0x38);
    fp_push(MEMF(esi + 0x48)); /* fld float */
    edx = MEM32(esi + 0x3C);
    fp_push(MEMF(esi + 0x4C)); /* fld float */
    MEM32(esp + 0x10) = ecx;
    fp_top() = fp_top() + MEMF(esi + 0x16C); /* fadd dword ptr [esi + 0x16c] */
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(0x3CD0E4); /* fadd dword ptr [0x3cd0e4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(0x3CD0E4); /* fadd dword ptr [0x3cd0e4] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00076159u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_00076159: ;
    edx = MEM32(eax);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0007616Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007616A: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(eax);
    MEM32(esi + 0x118) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x11C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x120) = edx;
    ecx = MEM32(eax);
    MEM32(esi + 0x100) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x104) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x108) = eax;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
