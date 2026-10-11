#include "engine/combat/raven_vitality_bonus.h"
#include "engine/powers/raven_power_selection_save.h"
#include "engine/actors/raven_leader_definition.h"
#include "engine/actors/raven_ai_modes.h"
#include "engine/actors/raven_actor_transform_owner.h"
#include "engine/actors/raven_character_race.h"
/**
 * X-Men Legends - Recompiled code chunk 5
 * Functions: 250 (0x0004D720 - 0x00058660)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include "game/xml1/newgame_plus.h"
#include "game/xml1/character_limits.h"
#include <math.h>
#include "game/xml1/character_limits.h"
#include "engine/progression/character_save.h"
#include "game/xml1/modder_mode.h"

/**
 * sub_0004D720
 * Original: 0x0004D720 - 0x0004D7D9 (185 bytes, 59 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D720(void)
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

loc_0004D720: ;
    eax = MEM32(esp + 0x1C);
    esp = esp - 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004D7CD; /* je: equal / zero */

loc_0004D72F: ;
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    fp_push(MEMF(eax + 0x28)); /* fld float */
    fp_push(MEMF(0x44E550)); /* fld float */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - MEMF(esp + 0x1C); /* fsub dword ptr [esp + 0x1c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(esp + 0x20); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x24); /* fsub dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x2C); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    esp = esp + 0x18;
    esp += 32; return; /* ret 28 */

loc_0004D7CD: ;
    fp_push(MEMF(0x3C7B8C)); /* fld float */
    esp = esp + 0x18;
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004D7E0
 * Original: 0x0004D7E0 - 0x0004D9DC (508 bytes, 162 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D7E0(void)
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

loc_0004D7E0: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    ebx = ecx;
    fp_push(MEMF(ebx + 0x184)); /* fld float */
    PUSH32(esp, ebp);
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x2C;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push(MEMF(ebx + 0x234)); /* fld float */
    ecx = esp + 0x24;
    fp_push(MEMF(ebx + 0x240)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = -fp_top(); /* fchs */
    MEM32(esp + 0x18) = 0;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x34) = 0;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0004D82Eu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_0004D82E: ;
    fp_push(MEMF(eax)); /* fld float */
    edx = MEM32(eax + 8);
    fp_push(MEMF(eax + 4)); /* fld float */
    MEM32(esp + 0x30) = edx;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    eax = 0x48585C;
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    esp = esp + 8;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    edi = 0; /* xor self */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    MEM32(esp + 0x14) = eax;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    /* nop */

loc_0004D890: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFCu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0004D89A; /* jle: less or equal (signed <=) */

loc_0004D895: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004D89F; /* jl: less (signed <) */

loc_0004D89A: ;
    eax = 0x498D90;

loc_0004D89F: ;
    eax = MEM32(eax);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0004D8AEu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0004D8AE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004D925; /* je: equal / zero */

loc_0004D8B4: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0004D8BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004D8BA: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004D925; /* je: equal / zero */

loc_0004D8D8: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x50);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x60);
    MEM32(eax + 4) = ecx;
    ecx = ebx;
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x0004D912u); RECOMP_ABI_CALL(0x0004D720u, sub_0004D720); /* call 0x0004D720 */

loc_0004D912: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004D923; /* jne: not equal / not zero */

loc_0004D91D: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0004D925;

loc_0004D923: ;
    fp_pop(); /* fstp st(0) */

loc_0004D925: ;
    eax = MEM32(esp + 0x14);
    edi = edi + 4;
    eax = eax + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x10 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0004D890; /* jl: less (signed <) */

loc_0004D93C: ;
    eax = MEM32(esp + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004D991; /* je: equal / zero */

loc_0004D944: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x50);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x60);
    MEM32(eax + 4) = ecx;
    ecx = ebx;
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x0004D97Eu); RECOMP_ABI_CALL(0x0004D720u, sub_0004D720); /* call 0x0004D720 */

loc_0004D97E: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004D98F; /* jne: not equal / not zero */

loc_0004D989: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0004D991;

loc_0004D98F: ;
    fp_pop(); /* fstp st(0) */

loc_0004D991: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004D9CE; /* jne: not equal / not zero */

loc_0004D9A2: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0004D9A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004D9A9: ;
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    fp_top() = fp_top() * MEMF(0x3C83B0); /* fmul dword ptr [0x3c83b0] */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = MEMF(esp + 0x10) / fp_top(); /* fdivr dword ptr [esp + 0x10] */
    fp_top() = fp_top() + MEMF(0x3CAA50); /* fadd dword ptr [0x3caa50] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004D9D2; /* je: equal / zero */

loc_0004D9CC: ;
    fp_pop(); /* fstp st(0) */

loc_0004D9CE: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */

loc_0004D9D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004D9E0
 * Original: 0x0004D9E0 - 0x0004DB87 (423 bytes, 132 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0004D9E0(void)
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

loc_0004D9E0: ;
    esp = esp - 0x20;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    ebp = ecx;
    MEM32(esp + 8) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_0004DA03; /* jne: not equal / not zero */

loc_0004D9F5: ;
    MEM32(ebp + 0x3B4) = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

loc_0004DA03: ;
    ecx = MEM32(eax + 0x20);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x34) = 0;
    ebx = 0x48585C;

loc_0004DA20: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFCu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0004DA2C; /* jle: less or equal (signed <=) */

loc_0004DA25: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x10 (32-bit) */
    eax = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0004DA31; /* jl: less (signed <) */

loc_0004DA2C: ;
    eax = 0x498D90;

loc_0004DA31: ;
    eax = MEM32(eax);
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0004DA40u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0004DA40: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004DAAB; /* je: equal / zero */

loc_0004DA46: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0004DA4Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004DA4C: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    ebp = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_0004DAAB; /* je: equal / zero */

loc_0004DA6E: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004DAA9; /* jne: not equal / not zero */

loc_0004DAA3: ;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0004DAAB;

loc_0004DAA9: ;
    fp_pop(); /* fstp st(0) */

loc_0004DAAB: ;
    edi = edi + 4;
    ebx = ebx + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004DA20; /* jl: less (signed <) */

loc_0004DABA: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    POP32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x3C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0x3c0] */
    POP32(esp, ebx);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004DAD5; /* jne: not equal / not zero */

loc_0004DACD: ;
    fp_push(MEMF(ebp + 0x3D0)); /* fld float */
    goto loc_0004DB20;

loc_0004DAD5: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x3BC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0x3bc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0004DAEE; /* jp: parity */

loc_0004DAE6: ;
    fp_push(MEMF(ebp + 0x3D4)); /* fld float */
    goto loc_0004DB20;

loc_0004DAEE: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp + 0x3BC); /* fsub dword ptr [ebp + 0x3bc] */
    fp_push(MEMF(ebp + 0x3C0)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp + 0x3BC); /* fsub dword ptr [ebp + 0x3bc] */
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    fp_top() = MEMF(0x3C6E40) - fp_top(); /* fsubr dword ptr [0x3c6e40] */
    fp_push(MEMF(ebp + 0x3D4)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp + 0x3D0); /* fsub dword ptr [ebp + 0x3d0] */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_top() = fp_top() + MEMF(ebp + 0x3D0); /* fadd dword ptr [ebp + 0x3d0] */

loc_0004DB20: ;
    eax = MEM32(ebp + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004DB32; /* je: equal / zero */

loc_0004DB2A: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */

loc_0004DB32: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x3B4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebp + 0x3b4] */
    fp_push(MEMF(ebp + 0x3B4)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004DB68; /* jne: not equal / not zero */

loc_0004DB45: ;
    fp_top() = fp_top() + MEMF(0x3C9760); /* fadd dword ptr [0x3c9760] */
    MEMF(ebp + 0x3B4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004DB7D; /* jne: not equal / not zero */

loc_0004DB5A: ;
    POP32(esp, edi);
    MEMF(ebp + 0x3B4) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

loc_0004DB68: ;
    fp_top() = fp_top() - MEMF(0x3C9760); /* fsub dword ptr [0x3c9760] */
    MEMF(ebp + 0x3B4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0004DB5A; /* jnp: not parity */

loc_0004DB7D: ;
    POP32(esp, edi);
    fp_pop(); /* fstp st(0) */
    POP32(esp, ebp);
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004DB90
 * Original: 0x0004DB90 - 0x0004DD7D (493 bytes, 129 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DB90(void)
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

loc_0004DB90: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x2D8)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = fp_top() + MEMF(esi + 0xEC); /* fadd dword ptr [esi + 0xec] */
    fp_push(MEMF(esi + 0x2DC)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0xF0); /* fadd dword ptr [esi + 0xf0] */
    fp_push(MEMF(esi + 0x2E0)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0xF4); /* fadd dword ptr [esi + 0xf4] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - MEMF(ebx); /* fsub dword ptr [ebx] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(ebx + 4); /* fsub dword ptr [ebx + 4] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(ebx + 8); /* fsub dword ptr [ebx + 8] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0004DC51; /* jp: parity */

loc_0004DBF1: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0004DC51; /* jp: parity */

loc_0004DC04: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    edi = esi + 0x18C;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0004DC2D; /* jp: parity */

loc_0004DC1D: ;
    PUSH32(esp, 0x46D0A0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0004DC28u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0004DC28: ;
    esp = esp + 8;
    goto loc_0004DC90;

loc_0004DC2D: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0x3F800000;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, ecx);
    goto loc_0004DC88;

loc_0004DC51: ;
    ecx = esi;
    PUSH32(esp, 0x0004DC58u); RECOMP_ABI_CALL(0x0004A390u, sub_0004A390); /* call 0x0004A390 */

loc_0004DC58: ;
    fp_top() = MEMF(0x3C6E40) - fp_top(); /* fsubr dword ptr [0x3c6e40] */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    fp_top() = fp_top() * MEMF(0x3C83B0); /* fmul dword ptr [0x3c83b0] */
    eax = esp + 0x10;
    MEM32(esp + 0x20) = 0;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x24) = 0x3F800000;
    edi = esi + 0x18C;
    PUSH32(esp, eax);

loc_0004DC88: ;
    ecx = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0004DC90u); RECOMP_ABI_CALL(0x00242D60u, sub_00242D60); /* call 0x00242D60 */

loc_0004DC90: ;
    PUSH32(esp, edi);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0004DC9Du); RECOMP_ABI_CALL(0x00242F50u, sub_00242F50); /* call 0x00242F50 */

loc_0004DC9D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0004DCA3u); RECOMP_ABI_CALL(0x000125F0u, sub_000125F0); /* call 0x000125F0 */

loc_0004DCA3: ;
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004DCD0; /* je: equal / zero */

loc_0004DCAA: ;
    edx = esi + 0x19C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0004DCB6u); RECOMP_ABI_CALL(0x000125F0u, sub_000125F0); /* call 0x000125F0 */

loc_0004DCB6: ;
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004DCD0; /* je: equal / zero */

loc_0004DCBD: ;
    eax = esi + 0x1AC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004DCC9u); RECOMP_ABI_CALL(0x000125F0u, sub_000125F0); /* call 0x000125F0 */

loc_0004DCC9: ;
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004DCDE; /* jne: not equal / not zero */

loc_0004DCD0: ;
    PUSH32(esp, 0x46D0A0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0004DCDBu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0004DCDB: ;
    esp = esp + 8;

loc_0004DCDE: ;
    ecx = MEM32(esi + 0x1AC);
    MEM32(esi + 0x20C) = ecx;
    edx = MEM32(esi + 0x1B0);
    MEM32(esi + 0x210) = edx;
    eax = MEM32(esi + 0x1B4);
    MEM32(esi + 0x214) = eax;
    fp_push(MEMF(esi + 0x20C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esi + 0x210)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esi + 0x214)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x20);
    MEM32(esi + 0x214) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x20C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x210) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(edi);
    MEM32(esi + 0x218) = edx;
    eax = MEM32(edi + 4);
    MEM32(esi + 0x21C) = eax;
    ecx = MEM32(edi + 8);
    MEM32(esi + 0x220) = ecx;
    edx = MEM32(esi + 0x19C);
    MEM32(esi + 0x224) = edx;
    eax = MEM32(esi + 0x1A0);
    MEM32(esi + 0x228) = eax;
    ecx = MEM32(esi + 0x1A4);
    POP32(esp, edi);
    MEM32(esi + 0x22C) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004DD80
 * Original: 0x0004DD80 - 0x0004DE32 (178 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DD80(void)
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

loc_0004DD80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0004DD89u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_0004DD89: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0004DD90u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004DD90: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0004DD99u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_0004DD99: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0004DDA0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004DDA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004DE10; /* jg: greater (signed >) */

loc_0004DDA5: ;
    eax = MEM32(0x4858AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004DDBC; /* je: equal / zero */

loc_0004DDAE: ;
    ecx = 0x4858AC;
    PUSH32(esp, 0x0004DDB8u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_0004DDB8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004DE10; /* jne: not equal / not zero */

loc_0004DDBC: ;
    fp_push(MEMF(esi + 0x3E4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004DE21; /* jne: not equal / not zero */

loc_0004DDCD: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x3E0);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x0004DDDDu); RECOMP_ABI_CALL(0x0002B810u, sub_0002B810); /* call 0x0002B810 */

loc_0004DDDD: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004DE00; /* je: equal / zero */

loc_0004DDE4: ;
    ecx = eax;
    PUSH32(esp, 0x0004DDEBu); RECOMP_ABI_CALL(0x00029080u, sub_00029080); /* call 0x00029080 */

loc_0004DDEB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004DE00; /* je: equal / zero */

loc_0004DDEF: ;
    edx = MEM32(esi + 0x3E0);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0004DE00: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3C832C); /* fsub dword ptr [0x3c832c] */
    MEMF(esi + 0x3E4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004DE10: ;
    ecx = MEM32(0x498D90);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0004DE21: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(0x498D90);
    MEM32(eax) = edx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004DE40
 * Original: 0x0004DE40 - 0x0004DEDF (159 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DE40(void)
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

loc_0004DE40: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0x0004DE56u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0004DE56: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004DED9; /* je: equal / zero */

loc_0004DE5C: ;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0004DE63u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004DE63: ;
    edx = MEM32(0x4C0A60);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    POP32(esp, ebp);
    if (TEST_Z(_fa, _fb)) goto loc_0004DED9; /* je: equal / zero */

loc_0004DE82: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004DED9; /* jne: not equal / not zero */

loc_0004DE95: ;
    PUSH32(esp, 0x0004DE9Au); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_0004DE9A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0004DEA1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004DEA1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004DED9; /* jge: greater or equal (signed >=) */

loc_0004DEA6: ;
    eax = MEM32(0x4858AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004DEBD; /* je: equal / zero */

loc_0004DEAF: ;
    ecx = 0x4858AC;
    PUSH32(esp, 0x0004DEB9u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_0004DEB9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004DED9; /* jne: not equal / not zero */

loc_0004DEBD: ;
    MEM32(edi + 0x3E0) = ebx;
    PUSH32(esp, 0x0004DEC8u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_0004DEC8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0004DECFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004DECF: ;
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    MEMF(edi + 0x3E4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004DED9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004DEE0
 * Original: 0x0004DEE0 - 0x0004E37C (1180 bytes, 260 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DEE0(void)
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

loc_0004DEE0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    MEM32(esi + 0x88) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x8C) = edx;
    eax = MEM32(eax + 8);
    PUSH32(esp, edi);
    MEM32(esi + 0x90) = eax;
    ecx = esi + 0xC4;
    eax = esi + 0x9C;
    edx = 4;
    edi = 0; /* xor self */

loc_0004DF17: ;
    MEM32(eax + -8) = edi;
    MEM32(eax + -4) = edi;
    MEM32(eax) = edi;
    MEM32(ecx) = edi;
    ecx = ecx + 4;
    eax = eax + 0xC;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0004DF17; /* jne: not equal / not zero */

loc_0004DF2A: ;
    ebp = MEM32(esp + 0x14);
    MEM32(esi + 0xD4) = edi;
    MEM32(esi + 0xD8) = edi;
    MEM32(esi + 0xDC) = edi;
    ecx = MEM32(ebp);
    MEM32(esi + 0xF8) = ecx;
    edx = MEM32(ebp + 4);
    MEM32(esi + 0xFC) = edx;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x100) = eax;
    ecx = MEM32(ebp);
    MEM32(esi + 0x104) = ecx;
    edx = MEM32(ebp + 4);
    MEM32(esi + 0x108) = edx;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x10C) = eax;
    ecx = MEM32(ebp);
    ebx = esi + 0x104;
    MEM32(esi + 0x110) = ecx;
    edx = MEM32(ebp + 4);
    MEM32(esi + 0x114) = edx;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x118) = eax;
    ecx = MEM32(ebp);
    MEM32(esi + 0x11C) = ecx;
    edx = MEM32(ebp + 4);
    MEM32(esi + 0x120) = edx;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x124) = eax;
    MEM32(esi + 0x398) = edi;
    MEM32(esi + 0x39C) = edi;
    MEM32(esi + 0x3A0) = edi;
    _fa = (uint32_t)(MEM8(esi + 0x412)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x412), 1 (8-bit) */
    MEM32(esi + 0x3A4) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0004DFE7; /* je: equal / zero */

loc_0004DFD3: ;
    fp_push(MEMF(esi + 0x238)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB1E8); /* fmul dword ptr [0x3cb1e8] */
    MEMF(esi + 0x23C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0004E022;

loc_0004DFE7: ;
    eax = MEM32(esi + 0x84);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0004E018; /* je: equal / zero */

loc_0004DFF0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0004DFD3; /* je: equal / zero */

loc_0004DFF3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0004E004; /* je: equal / zero */

loc_0004DFF6: ;
    ecx = MEM32(esi + 0x238);
    MEM32(esi + 0x23C) = ecx;
    goto loc_0004E022;

loc_0004E004: ;
    fp_push(MEMF(esi + 0x238)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB1E4); /* fmul dword ptr [0x3cb1e4] */
    MEMF(esi + 0x23C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0004E022;

loc_0004E018: ;
    MEM32(esi + 0x23C) = 0x3FA78D36;

loc_0004E022: ;
    SET_LO8(eax, MEM8(esi + 0x411));
    edx = MEM32(esi + 0x23C);
    ecx = MEM32(esi + 0x24C);
    SET_LO8(eax, LO8(eax) & 0xDF);
    MEM8(esi + 0x411) = LO8(eax);
    eax = MEM32(esi + 0x230);
    MEM32(esi + 0x244) = edx;
    MEM32(esi + 0x234) = eax;
    MEM32(esi + 0x260) = edi;
    MEM32(esi + 0x25C) = edi;
    MEM32(esi + 0x258) = edi;
    MEM32(esi + 0x26C) = edi;
    MEM32(esi + 0x268) = edi;
    MEM32(esi + 0x270) = edi;
    MEM32(esi + 0x274) = edi;
    MEM32(esi + 0x278) = ecx;
    PUSH32(esp, 0x0004E083u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0004E083: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0004E08Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004E08D: ;
    MEMF(esi + 0x148) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(esi + 0x411));
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    SET_LO8(eax, LO8(eax) & 0xFB);
    PUSH32(esp, ebp);
    SET_LO8(eax, LO8(eax) | 2);
    PUSH32(esp, esi);
    ecx = esi + 4;
    MEM32(esi + 0x14C) = edi;
    MEM8(esi + 0x411) = LO8(eax);
    PUSH32(esp, 0x0004E0B8u); RECOMP_ABI_CALL(0x00053CE0u, sub_00053CE0); /* call 0x00053CE0 */

loc_0004E0B8: ;
    edx = MEM32(0x498D90);
    MEM32(esi + 0x2E4) = edx;
    MEM32(esi + 0x248) = edi;
    MEM32(esi + 0x2E8) = 0x3F800000;
    PUSH32(esp, 0x0004E0D9u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0004E0D9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0004E0E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004E0E3: ;
    MEMF(esi + 0x2EC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esi + 0x18C;
    PUSH32(esp, 0x46D0A0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004E0FAu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0004E0FA: ;
    ecx = esi + 0x1CC;
    PUSH32(esp, 0x46D0A0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004E10Bu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0004E10B: ;
    esp = esp + 0x10;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0004E116u); RECOMP_ABI_CALL(0x0004DB90u, sub_0004DB90); /* call 0x0004DB90 */

loc_0004E116: ;
    MEM8(esi + 0x410) = MEM8(esi + 0x410) & 0x94;
    MEM32(esi + 0x2F4) = edi;
    MEM32(esi + 0x2F8) = edi;
    MEM32(esi + 0x2FC) = edi;
    MEM32(esi + 0x300) = edi;
    MEM32(esi + 0x7C) = edi;
    eax = esi + 0x2A8;
    ecx = esi + 0x2C8;
    edx = 2;
    /* nop */

loc_0004E150: ;
    MEM32(eax + -8) = edi;
    MEM32(eax) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + -16) = edi;
    MEM32(eax + 0x10) = edi;
    ebp = MEM32(0x5BC9D0);
    MEM32(ecx + -8) = ebp;
    ebp = MEM32(0x5BC9D4);
    MEM32(ecx + -4) = ebp;
    ebp = MEM32(0x5BC9D8);
    MEM32(ecx) = ebp;
    eax = eax + 4;
    ecx = ecx + 0xC;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0004E150; /* jne: not equal / not zero */

loc_0004E181: ;
    edx = MEM32(esi + 0x174);
    MEM32(esi + 0x178) = edx;
    MEM32(esi + 0x2E8) = edi;
    MEM32(esi + 0x2EC) = edi;
    MEM32(esi + 0x2F0) = edi;
    MEM16(esi + 0x394) = LO16(edi);
    MEM32(esi + 0x390) = edi;
    MEM32(esi + 0x16C) = edi;
    eax = MEM32(0x498D90);
    MEM32(esi + 0x3E0) = eax;
    MEM32(esi + 0x3E4) = edi;
    MEM32(esi + 0x3BC) = 0x43C80000;
    MEM32(esi + 0x3C0) = 0x442F0000;
    ecx = MEM32(esi + 0x178);
    MEM32(esi + 0x3B8) = ecx;
    edx = MEM32(ebx);
    MEM32(esi + 0x3C4) = edx;
    eax = MEM32(ebx + 4);
    MEM32(esi + 0x3C8) = eax;
    ecx = MEM32(ebx + 8);
    MEM32(esi + 0x3CC) = ecx;
    MEM32(esi + 0x3B4) = edi;
    MEM32(esi + 0x3D4) = 0x3F400000;
    MEM32(esi + 0x3D8) = 0x43AF0000;
    MEM32(esi + 0x3DC) = 0x43FA0000;
    eax = 0x3E800000;
    MEM32(esi + 0x3B4) = eax;
    MEM32(esi + 0x3D0) = eax;
    MEM32(esi + 0x3FC) = edi;
    MEM32(esi + 0x400) = 0x453B8000;
    edx = MEM32(esi + 0x178);
    MEM32(esi + 0x3F8) = edx;
    eax = MEM32(ebx);
    MEM32(esi + 0x404) = eax;
    ecx = MEM32(ebx + 4);
    MEM32(esi + 0x408) = ecx;
    edx = MEM32(ebx + 8);
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 0x40C) = edx;
    MEM32(esi + 0x3F4) = edi;
    edx = MEM32(ecx);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    ecx = esi;
    PUSH32(esp, 0x0004E28Eu); RECOMP_ABI_CALL(0x00051970u, sub_00051970); /* call 0x00051970 */

loc_0004E28E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004E2DE; /* jne: not equal / not zero */

loc_0004E292: ;
    edx = MEM32(esi + 0x180);
    fp_push(MEMF(esi + 0x184)); /* fld float */
    MEMF(esi + 0x350) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x34C) = edx;
    eax = MEM32(esi + 0x178);
    MEM32(esi + 0x348) = eax;
    ecx = MEM32(ebx);
    MEM32(esi + 0x354) = ecx;
    edx = MEM32(ebx + 4);
    MEM32(esi + 0x358) = edx;
    eax = MEM32(ebx + 8);
    MEM32(esi + 0x35C) = eax;
    MEM32(esi + 0x344) = edi;
    MEM32(esi + 0x360) = edi;
    goto loc_0004E2F6;

loc_0004E2DE: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0004E2E8u); RECOMP_ABI_CALL(0x0004CF00u, sub_0004CF00); /* call 0x0004CF00 */

loc_0004E2E8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004E2F6; /* je: equal / zero */

loc_0004E2EC: ;
    MEM32(esi + 0x344) = 0x3F800000;

loc_0004E2F6: ;
    eax = 0x3F000000;
    MEM32(esi + 0x164) = eax;
    MEM32(esi + 0x3EC) = eax;
    MEM32(esi + 0x254) = eax;
    SET_LO8(eax, MEM8(esi + 0x411));
    ecx = 0x3D4CCCD0;
    SET_LO8(eax, LO8(eax) & 0xEF);
    MEM32(esi + 0x160) = ecx;
    MEM32(esi + 0x3E8) = ecx;
    MEM32(esi + 0x3F0) = 0x3E000000;
    MEM32(esi + 0x168) = edi;
    MEM8(esi + 0x411) = LO8(eax);
    MEM32(esi + 0x3B0) = edi;
    PUSH32(esp, 0x0004E347u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0004E347: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0004E351u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004E351: ;
    MEMF(esi + 0x3AC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0004E35Cu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0004E35C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0004E366u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004E366: ;
    MEMF(esi + 0x140) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x74);
    POP32(esp, edi);
    MEM32(esi + 0x144) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004E380
 * Original: 0x0004E380 - 0x0004E586 (518 bytes, 151 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E380(void)
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

loc_0004E380: ;
    esp = esp - 0x2C;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x3A8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0004E56E; /* jnp: not parity */

loc_0004E39D: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x34); /* fsub dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x38); /* fsub dword ptr [esp + 0x38] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x3C); /* fsub dword ptr [esp + 0x3c] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x40); /* fadd dword ptr [esp + 0x40] */
    fp_top() = fp_top() + MEMF(esp + 4); /* fadd dword ptr [esp + 4] */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004E577; /* jne: not equal / not zero */

loc_0004E3F2: ;
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = 0;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 4); /* fadd dword ptr [esp + 4] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004E57D; /* jne: not equal / not zero */

loc_0004E441: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0004E44Au); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_0004E44A: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    fp_top() = fp_top() * MEMF(0x3C6DE4); /* fmul dword ptr [0x3c6de4] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C6E40); /* fmul dword ptr [0x3c6e40] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004E57B; /* jne: not equal / not zero */

loc_0004E477: ;
    fp_push(MEMF(esi + 0x3A8)); /* fld float */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004E4A2; /* jne: not equal / not zero */

loc_0004E49C: ;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0004E4A4;

loc_0004E4A2: ;
    fp_pop(); /* fstp st(0) */

loc_0004E4A4: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x40); /* fsub dword ptr [esp + 0x40] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004E57B; /* jne: not equal / not zero */

loc_0004E4DD: ;
    fp_top() = MEMF(esi + 0x3A8) / fp_top(); /* fdivr dword ptr [esi + 0x3a8] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004E4F6; /* jne: not equal / not zero */

loc_0004E4F0: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x40)); /* fld float */

loc_0004E4F6: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0004E507; /* jnp: not parity */

loc_0004E501: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */

loc_0004E507: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ecx = MEM32(esi + 0x3A8);
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x20;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    ecx = esi;
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x48); /* fadd dword ptr [esp + 0x48] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x4C); /* fadd dword ptr [esp + 0x4c] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(esp + 0x50); /* fadd dword ptr [esp + 0x50] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0004E561u); RECOMP_ABI_CALL(0x0004C290u, sub_0004C290); /* call 0x0004C290 */

loc_0004E561: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0004E57D; /* jnp: not parity */

loc_0004E56E: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0x2C;
    esp += 28; return; /* ret 24 */

loc_0004E577: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */

loc_0004E57B: ;
    fp_pop(); /* fstp st(0) */

loc_0004E57D: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x2C;
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004E590
 * Original: 0x0004E590 - 0x0004EA70 (1248 bytes, 316 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E590(void)
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

loc_0004E590: ;
    esp = esp - 0x68;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x234);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0004E5A8u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_0004E5A8: ;
    ecx = MEM32(esp + 0x7C);
    edx = MEM32(eax);
    ebx = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0004E5C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004E5C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0004E5EC; /* jle: less or equal (signed <=) */

loc_0004E5C6: ;
    edx = MEM32(esi);
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0004E5D2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004E5D2: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3CB1B0); /* fadd dword ptr [0x3cb1b0] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0004E5E5u); RECOMP_ABI_CALL(0x001206E0u, sub_001206E0); /* call 0x001206E0 */

loc_0004E5E5: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;

loc_0004E5EC: ;
    PUSH32(esp, 0x0004E5F1u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0004E5F1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0004E5FBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004E5FB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004E609; /* je: equal / zero */

loc_0004E5FF: ;
    SET_LO8(eax, MEM8(esi + 0x411));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_0004E610; /* jns: not sign (positive) */

loc_0004E609: ;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0x74) = eax;

loc_0004E610: ;
    ecx = esi;
    PUSH32(esp, 0x0004E617u); RECOMP_ABI_CALL(0x0004A430u, sub_0004A430); /* call 0x0004A430 */

loc_0004E617: ;
    _fa = (uint32_t)(MEM8(esi + 0x412)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x412), 1 (8-bit) */
    ecx = MEM32(esi + 0x17C);
    MEM32(esp + 0x10) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0004E636; /* je: equal / zero */

loc_0004E62A: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB1EC); /* fmul dword ptr [0x3cb1ec] */
    goto loc_0004E64F;

loc_0004E636: ;
    eax = MEM32(esi + 0x84);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0004E645; /* je: equal / zero */

loc_0004E63F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0004E62A; /* je: equal / zero */

loc_0004E642: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0004E653; /* jne: not equal / not zero */

loc_0004E645: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB1F0); /* fmul dword ptr [0x3cb1f0] */

loc_0004E64F: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004E653: ;
    ebp = 0; /* xor self */
    goto loc_0004E660;

    /* nop */
    edi = edi;

loc_0004E660: ;
    _fa = (uint32_t)(MEM8(0x48D120)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x48D120), 1 (8-bit) */
    edx = MEM32(esi + 0x23C);
    MEM32(esp + 0x14) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0004E70A; /* jne: not equal / not zero */

loc_0004E677: ;
    MEM32(0x48D120) = MEM32(0x48D120) | 1;
    MEM32(0x48D0E8) = 0x3F490FDB;
    MEM32(0x48D0EC) = 0x3F490FDB;
    MEM32(0x48D0F0) = 0xBF490FDBu;
    MEM32(0x48D0F4) = 0xBF490FDBu;
    MEM32(0x48D0F8) = 0x3FC90FDB;
    MEM32(0x48D0FC) = 0x3FC90FDB;
    MEM32(0x48D100) = 0xBFC90FDBu;
    MEM32(0x48D104) = 0xBFC90FDBu;
    MEM32(0x48D108) = 0x4016CBE4;
    MEM32(0x48D10C) = 0x4016CBE4;
    MEM32(0x48D110) = 0xC016CBE4u;
    MEM32(0x48D114) = 0xC016CBE4u;
    MEM32(0x48D118) = 0x40490FDB;
    MEM32(0x48D11C) = 0x40490FDB;

loc_0004E70A: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() + MEMF(ebp * 4 + 0x48D0E0); /* fadd dword ptr [ebp*4 + 0x48d0e0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0004E71Eu); RECOMP_ABI_CALL(0x001206E0u, sub_001206E0); /* call 0x001206E0 */

loc_0004E71E: ;
    edi = ebp;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    edi = edi & 1;
    /* nop */

loc_0004E730: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E742; /* je: equal / zero */

loc_0004E734: ;
    _fa = (uint32_t)(MEM8(esp + 0x7C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x7C), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E742; /* je: equal / zero */

loc_0004E73A: ;
    MEM32(esp + 0x14) = 0x3FA78D2D;

loc_0004E742: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = MEM32(esp + 0x1C);
    ecx = esp + 0x3C;
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, ecx);
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x58;
    PUSH32(esp, edx);
    MEM32(esp + 0x44) = 0;
    MEM32(esp + 0x4C) = eax;
    PUSH32(esp, 0x0004E76Bu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_0004E76B: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x2C) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x30) = edx;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    esp = esp + 8;
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x28); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x2C); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esi + 0x3A8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0004E823; /* jnp: not parity */

loc_0004E7D5: ;
    fp_push(MEMF(esi + 0x294)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CB264)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cb264] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004E823; /* jne: not equal / not zero */

loc_0004E7E8: ;
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0004E7FAu); RECOMP_ABI_CALL(0x0004D2E0u, sub_0004D2E0); /* call 0x0004D2E0 */

loc_0004E7FA: ;
    fp_push(MEMF(esi + 0x294)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x3A8); /* fsub dword ptr [esi + 0x3a8] */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004E821; /* jne: not equal / not zero */

loc_0004E813: ;
    fp_top() = MEMF(esp + 0x50) - fp_top(); /* fsubr dword ptr [esp + 0x50] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004E821: ;
    fp_pop(); /* fstp st(0) */

loc_0004E823: ;
    PUSH32(esp, ebx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0004E83Fu); RECOMP_ABI_CALL(0x0004C290u, sub_0004C290); /* call 0x0004C290 */

loc_0004E83F: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004E89B; /* jne: not equal / not zero */

loc_0004E84C: ;
    _fa = (uint32_t)(MEM8(esp + 0x7C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x7C), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E8E8; /* je: equal / zero */

loc_0004E856: ;
    ecx = MEM32(esp + 0x30);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x40);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x44);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x2C) = esp;
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = edx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esp + 0x44);
    ecx = esi;
    MEM32(esp + 0x38) = esp;
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x0004E897u); RECOMP_ABI_CALL(0x0004E380u, sub_0004E380); /* call 0x0004E380 */

loc_0004E897: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E8E8; /* je: equal / zero */

loc_0004E89B: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3CB1C8); /* fadd dword ptr [0x3cb1c8] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CB1C4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cb1c4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0004E730; /* jnp: not parity */

loc_0004E8BA: ;
    _fa = (uint32_t)(MEM8(esp + 0x7C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x7C), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E8CA; /* je: equal / zero */

loc_0004E8C0: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004E660; /* jl: less (signed <) */

loc_0004E8CA: ;
    MEM32(esi + 0x398) = ebx;
    MEM32(esi + 0x39C) = ebx;
    MEM32(esi + 0x3A0) = ebx;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x68;
    esp += 8; return; /* ret 4 */

loc_0004E8E8: ;
    fp_push(MEMF(esi + 0x17C)); /* fld float */
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x14);
    MEMF(esi + 0x174) = (float)fp_top(); /* fst */
    MEM32(esi + 0x240) = eax;
    MEMF(esi + 0x178) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x24);
    MEM32(esi + 0x230) = ecx;
    edx = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(esi + 0x234) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(esi + 0xFC) = ecx;
    MEM32(esi + 0x100) = edx;
    MEM32(esi + 0xF8) = eax;
    MEM32(esi + 0x11C) = eax;
    ecx = MEM32(esi + 0xFC);
    MEM32(esi + 0x120) = ecx;
    edx = MEM32(esi + 0x100);
    MEM32(esi + 0x124) = edx;
    MEM32(esi + 0x110) = eax;
    ecx = MEM32(esi + 0x120);
    MEM32(esi + 0x114) = ecx;
    edx = MEM32(esi + 0x124);
    MEM32(esi + 0x118) = edx;
    MEM32(esi + 0x104) = eax;
    ecx = MEM32(esi + 0x114);
    eax = MEM32(esp + 0x30);
    MEM32(esi + 0x108) = ecx;
    edx = MEM32(esi + 0x118);
    ecx = MEM32(esp + 0x34);
    MEM32(esi + 0x10C) = edx;
    edx = MEM32(esp + 0x38);
    MEM32(esi + 0xE4) = ecx;
    MEM32(esi + 0xE8) = edx;
    MEM32(esi + 0xE0) = eax;
    MEM32(esi + 0xEC) = eax;
    ecx = MEM32(esi + 0xE4);
    MEM32(esi + 0xF0) = ecx;
    edx = MEM32(esi + 0xE8);
    MEM32(esi + 0xF4) = edx;
    PUSH32(esp, 0x0004E9CFu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0004E9CF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0004E9D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004E9D9: ;
    MEMF(esi + 0x148) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi + 0x14C) = ebx;
    PUSH32(esp, 0x0004E9F7u); RECOMP_ABI_CALL(0x0004D2E0u, sub_0004D2E0); /* call 0x0004D2E0 */

loc_0004E9F7: ;
    edx = MEM32(eax);
    MEM32(esi + 0x398) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x39C) = ecx;
    edx = MEM32(eax + 8);
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x3A0) = edx;
    SET_LO8(edx, MEM8(esi + 0x411));
    SET_LO8(edx, LO8(edx) & 0xDD);
    MEM32(esi + 0x244) = eax;
    MEM8(esi + 0x411) = LO8(edx);
    PUSH32(esp, 0x0004EA2Fu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0004EA2F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0004EA39u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004EA39: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004EA47; /* je: equal / zero */

loc_0004EA3D: ;
    SET_LO8(eax, MEM8(esi + 0x411));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_0004EA50; /* jns: not sign (positive) */

loc_0004EA47: ;
    eax = MEM32(esi + 0x234);
    MEM32(esi + 0x74) = eax;

loc_0004EA50: ;
    SET_LO8(eax, MEM8(esi + 0x411));
    SET_LO8(eax, LO8(eax) & 0xEF);
    POP32(esp, edi);
    MEM8(esi + 0x411) = LO8(eax);
    MEM32(esi + 0x3B0) = ebx;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x68;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004EA70
 * Original: 0x0004EA70 - 0x0004ECBE (590 bytes, 152 insns)
 * Category: game_vtable
 * CC: thiscall, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EA70(void)
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

loc_0004EA70: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x410)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x410), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004ECB7; /* jne: not equal / not zero */

loc_0004EA83: ;
    PUSH32(esp, 0x0004EA88u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_0004EA88: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0004EA8Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004EA8F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004EAB6; /* je: equal / zero */

loc_0004EA93: ;
    SET_LO8(eax, MEM8(esi + 0x410));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004EAB6; /* jne: not equal / not zero */

loc_0004EA9D: ;
    SET_LO8(eax, LO8(eax) | 1);
    MEM8(esi + 0x410) = LO8(eax);
    PUSH32(esp, 0x0004EAAAu); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_0004EAAA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0004EAB1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004EAB1: ;
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0004EAD6;

loc_0004EAB6: ;
    _fa = (uint32_t)(MEM8(esi + 0x410)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x410), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004EAD6; /* je: equal / zero */

loc_0004EABF: ;
    PUSH32(esp, 0x0004EAC4u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_0004EAC4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0004EACBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004EACB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004EAD6; /* jne: not equal / not zero */

loc_0004EACF: ;
    MEM8(esi + 0x410) = MEM8(esi + 0x410) & 0xFE;

loc_0004EAD6: ;
    eax = MEM32(esp + 0x60);
    ecx = MEM32(esp + 0x5C);
    edx = MEM32(esp + 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x58);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = esi + 4;
    PUSH32(esp, 0x0004EAFEu); RECOMP_ABI_CALL(0x00053F10u, sub_00053F10); /* call 0x00053F10 */

loc_0004EAFE: ;
    ecx = esi;
    PUSH32(esp, 0x0004EB05u); RECOMP_ABI_CALL(0x0004BEF0u, sub_0004BEF0); /* call 0x0004BEF0 */

loc_0004EB05: ;
    SET_LO8(eax, MEM8(esi + 0x411));
    edi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004EBE6; /* je: equal / zero */

loc_0004EB15: ;
    eax = MEM32(esi + 0x174);
    ecx = MEM32(esi + 0x23C);
    edx = MEM32(esi + 0x230);
    MEM32(esi + 0x178) = eax;
    MEM32(esi + 0x240) = ecx;
    MEM32(esi + 0x234) = edx;
    eax = MEM32(esi + 0xF8);
    MEM32(esi + 0x11C) = eax;
    ecx = MEM32(esi + 0xFC);
    MEM32(esi + 0x120) = ecx;
    edx = MEM32(esi + 0x100);
    MEM32(esi + 0x124) = edx;
    MEM32(esi + 0x110) = eax;
    ecx = MEM32(esi + 0x120);
    MEM32(esi + 0x114) = ecx;
    edx = MEM32(esi + 0x124);
    MEM32(esi + 0x118) = edx;
    MEM32(esi + 0x104) = eax;
    ecx = MEM32(esi + 0x114);
    MEM32(esi + 0x108) = ecx;
    edx = MEM32(esi + 0x118);
    MEM32(esi + 0x10C) = edx;
    eax = MEM32(esi + 0xE0);
    MEM32(esi + 0xEC) = eax;
    ecx = MEM32(esi + 0xE4);
    MEM32(esi + 0xF0) = ecx;
    edx = MEM32(esi + 0xE8);
    MEM32(esi + 0xF4) = edx;
    PUSH32(esp, 0x0004EBC2u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0004EBC2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0004EBCCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004EBCC: ;
    MEMF(esi + 0x148) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(esi + 0x411));
    SET_LO8(eax, LO8(eax) & 0xFD);
    MEM32(esi + 0x14C) = edi;
    MEM8(esi + 0x411) = LO8(eax);

loc_0004EBE6: ;
    eax = esi + 0x104;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0004EBF4u); RECOMP_ABI_CALL(0x0004DB90u, sub_0004DB90); /* call 0x0004DB90 */

loc_0004EBF4: ;
    PUSH32(esp, 0x0004EBF9u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0004EBF9: ;
    fp_push(MEMF(esi + 0x390)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    edx = MEM32(eax);
    ecx = eax;
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0004EC13u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004EC13: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x64)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x64] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004EC41; /* jne: not equal / not zero */

loc_0004EC1E: ;
    ecx = esi;
    PUSH32(esp, 0x0004EC25u); RECOMP_ABI_CALL(0x0004CB60u, sub_0004CB60); /* call 0x0004CB60 */

loc_0004EC25: ;
    MEM16(esi + 0x394) = LO16(eax);
    PUSH32(esp, 0x0004EC31u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0004EC31: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0004EC3Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004EC3B: ;
    MEMF(esi + 0x390) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004EC41: ;
    MEM32(esi + 0xC4) = edi;
    MEM32(esi + 0xC8) = edi;
    MEM32(esi + 0xCC) = edi;
    MEM32(esi + 0xD0) = edi;
    PUSH32(esp, 0x0004EC5Eu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0004EC5E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0004EC65u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004EC65: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0004ECB7; /* je: equal / zero */

loc_0004EC6A: ;
    eax = esi + 0x18C;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004EC7Bu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0004EC7B: ;
    esp = esp + 8;
    edx = esp + 4;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0004EC91u); RECOMP_ABI_CALL(0x00242F50u, sub_00242F50); /* call 0x00242F50 */

loc_0004EC91: ;
    PUSH32(esp, 0x0004EC96u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0004EC96: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0004EC9Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004EC9D: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    esi = esi + 0x1CC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0004ECABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004ECAB: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0004ECB7u); RECOMP_ABI_CALL(0x00242660u, sub_00242660); /* call 0x00242660 */

loc_0004ECB7: ;
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004ECC0
 * Original: 0x0004ECC0 - 0x0004EE4D (397 bytes, 129 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004ECC0(void)
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

loc_0004ECC0: ;
    esp = esp - 0x1C;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    fp_top() = fp_top() - MEMF(edi + 0x10C); /* fsub dword ptr [edi + 0x10c] */
    eax = MEM32(edi);
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 0x108); /* fsub dword ptr [edi + 0x108] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 0x104); /* fsub dword ptr [edi + 0x104] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0004ED2Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004ED2C: ;
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    ecx = MEM32(edi + 0x184);
    esi = MEM32(esp + 0x3C);
    eax = 0x48585C;
    fp_top() = fp_top() - MEMF(0x3C8324); /* fsub dword ptr [0x3c8324] */
    ebx = 0; /* xor self */
    MEM32(esp + 0x10) = ecx;
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEM32(esp + 0x14) = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10 (32-bit) */
    { fp_top() = tan(fp_top()); fp_push(1.0); } /* fptan */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004ED62: ;
    if (_flags /* jge: greater or equal (signed >=) */) goto loc_0004EDB7;

loc_0004ED64: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFCu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004ED6E; /* jg: greater (signed >) */

loc_0004ED69: ;
    eax = 0x498D90;

loc_0004ED6E: ;
    edx = MEM32(eax);
    ecx = esp + 0x18;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x0004ED7Du); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0004ED7D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004EDAF; /* je: equal / zero */

loc_0004ED83: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0004ED89u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004ED89: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004EDAF; /* je: equal / zero */

loc_0004EDA7: ;
    eax = esi;
    esi = MEM32(esp + 0x3C);
    goto loc_0004EDC1;

loc_0004EDAF: ;
    esi = MEM32(esp + 0x3C);
    eax = 0; /* xor self */
    goto loc_0004EDC1;

loc_0004EDB7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004EE3F; /* je: equal / zero */

loc_0004EDBF: ;
    eax = esi;

loc_0004EDC1: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x48);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x58);
    MEM32(eax + 8) = ecx;
    ecx = edi;
    MEM32(eax + 4) = edx;
    PUSH32(esp, 0x0004EE00u); RECOMP_ABI_CALL(0x0004CA00u, sub_0004CA00); /* call 0x0004CA00 */

loc_0004EE00: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CB268)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3cb268] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004EE15; /* jne: not equal / not zero */

loc_0004EE0D: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3CB268)); /* fld float */

loc_0004EE15: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004EE26; /* jne: not equal / not zero */

loc_0004EE20: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0004EE28;

loc_0004EE26: ;
    fp_pop(); /* fstp st(0) */

loc_0004EE28: ;
    eax = MEM32(esp + 0x14);
    ebx = ebx + 4;
    eax = eax + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0004ED62; /* jle: less or equal (signed <=) */

loc_0004EE3F: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004EE50
 * Original: 0x0004EE50 - 0x0004EFB5 (357 bytes, 98 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EE50(void)
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

loc_0004EE50: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x128)); /* fld float */
    MEM32(esp + 0xC) = 0;
    fp_push(MEMF(esi + 0x12C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - MEMF(esp + 0x24); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CB26C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cb26c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004EEA0; /* jne: not equal / not zero */

loc_0004EE99: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    goto loc_0004EEC9;

loc_0004EEA0: ;
    eax = MEM32(esp + 0x20);
    fp_push(MEMF(eax + 8)); /* fld float */
    ecx = esp + 0x10;
    fp_top() = fp_top() - MEMF(esp + 0x2C); /* fsub dword ptr [esp + 0x2c] */
    PUSH32(esp, ecx);
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x2C); /* fsub dword ptr [esp + 0x2c] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004EEC9: ;
    PUSH32(esp, 0x0004EECEu); RECOMP_ABI_CALL(0x00120720u, sub_00120720); /* call 0x00120720 */

loc_0004EECE: ;
    MEMF(esi + 0x230) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x230)); /* fld float */
    esp = esp + 4;
    fp_top() = fp_top() + MEMF(0x3CB1B0); /* fadd dword ptr [0x3cb1b0] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0004EEECu); RECOMP_ABI_CALL(0x001206E0u, sub_001206E0); /* call 0x001206E0 */

loc_0004EEEC: ;
    edx = MEM32(esp + 0x28);
    MEMF(esi + 0x230) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x2C);
    esp = esp + 4;
    PUSH32(esp, 0);
    esp = esp - 0xC;
    eax = esp;
    MEM32(esi + 0x240) = 0x3F860A92;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 4) = ecx;
    ecx = esi;
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x0004EF21u); RECOMP_ABI_CALL(0x0004ECC0u, sub_0004ECC0); /* call 0x0004ECC0 */

loc_0004EF21: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x3F8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0x3f8] */
    fp_push(MEMF(esi + 0x3F8)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004EF51; /* jne: not equal / not zero */

loc_0004EF34: ;
    fp_top() = fp_top() + MEMF(0x3CB260); /* fadd dword ptr [0x3cb260] */
    MEMF(esi + 0x3F8) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004EF66; /* jne: not equal / not zero */

loc_0004EF49: ;
    MEMF(esi + 0x3F8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0004EF68;

loc_0004EF51: ;
    fp_top() = fp_top() - MEMF(0x3CB260); /* fsub dword ptr [0x3cb260] */
    MEMF(esi + 0x3F8) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0004EF49; /* jnp: not parity */

loc_0004EF66: ;
    fp_pop(); /* fstp st(0) */

loc_0004EF68: ;
    eax = MEM32(esi + 0x3F8);
    ecx = MEM32(esi + 0x234);
    edx = MEM32(esi + 0x240);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esi + 0x404;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0004EF90u); RECOMP_ABI_CALL(0x0004BF90u, sub_0004BF90); /* call 0x0004BF90 */

loc_0004EF90: ;
    edx = MEM32(esi + 0x3F8);
    eax = edx;
    MEM32(esi + 0x3FC) = edx;
    MEM32(esi + 0x400) = eax;
    MEM32(esi + 0x3F4) = 0x3F400000;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004EFC0
 * Original: 0x0004EFC0 - 0x0004F0C7 (263 bytes, 73 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EFC0(void)
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

loc_0004EFC0: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x17C);
    ecx = MEM32(esp + 0x2C);
    MEM32(esi + 0x174) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(esi + 0x230) = ecx;
    edx = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(esi + 0x234) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(esi + 0xF8) = eax;
    MEM32(esi + 0xFC) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(esi + 0x100) = edx;
    eax = MEM32(esi + 0x24C);
    edx = MEM32(esp + 0x34);
    MEM32(esi + 0x250) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(esi + 0xF4) = eax;
    MEM32(esi + 0xEC) = ecx;
    eax = esp + 0x30;
    MEM32(esi + 0xF0) = edx;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0004F038u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004F038: ;
    edx = MEM32(esi);
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi + 0x5C) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0004F050u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004F050: ;
    edx = MEM32(esi + 0x23C);
    eax = MEM32(esi + 0x15C);
    MEM32(esi + 0x240) = edx;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esi + 0x158) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x0004F072u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004F072: ;
    eax = esi + 0x3A8;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0004F08Au); RECOMP_ABI_CALL(0x0004D2E0u, sub_0004D2E0); /* call 0x0004D2E0 */

loc_0004F08A: ;
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0004F0A7u); RECOMP_ABI_CALL(0x0004C290u, sub_0004C290); /* call 0x0004C290 */

loc_0004F0A7: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0004F0C0; /* jp: parity */

loc_0004F0B4: ;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0004F0C0u); RECOMP_ABI_CALL(0x0004E590u, sub_0004E590); /* call 0x0004E590 */

loc_0004F0C0: ;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004F0D0
 * Original: 0x0004F0D0 - 0x0004F1EA (282 bytes, 97 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004F0D0(void)
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

loc_0004F0D0: ;
    esp = esp - 0x18;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0x24) = ecx;
    ecx = esp + 0x24;
    PUSH32(esp, 0x0004F0EAu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0004F0EA: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004F1E0; /* je: equal / zero */

loc_0004F0F4: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0004F0FBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004F0FB: ;
    edx = MEM32(0x48D8FC);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0004F1E0; /* je: equal / zero */

loc_0004F11E: ;
    eax = MEM32(esi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0004F12Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004F12A: ;
    edx = MEM32(edi);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x0004F13Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004F13E: ;
    edx = MEM32(eax);
    MEM32(esp + 8) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0xC) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x0004F157u); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_0004F157: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0004F15Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004F15E: ;
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004F1BE; /* je: equal / zero */

loc_0004F16D: ;
    PUSH32(esp, 0x0004F172u); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_0004F172: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0004F179u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004F179: ;
    fp_top() = fp_top() + MEMF(esp + 0x28); /* fadd dword ptr [esp + 0x28] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0004F1BE; /* jnp: not parity */

loc_0004F188: ;
    PUSH32(esp, 0x0004F18Du); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_0004F18D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0004F194u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004F194: ;
    fp_top() = fp_top() + MEMF(esp + 0x28); /* fadd dword ptr [esp + 0x28] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0004F1BE; /* jnp: not parity */

loc_0004F1A3: ;
    PUSH32(esp, 0x0004F1A8u); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_0004F1A8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0004F1AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004F1AF: ;
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004F1E0; /* jne: not equal / not zero */

loc_0004F1BE: ;
    eax = MEM32(esp + 0x2C);
    fp_push(MEMF(esp + 8)); /* fld float */
    ecx = MEM32(esp + 0xC);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 16; return; /* ret 12 */

loc_0004F1E0: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004F1F0
 * Original: 0x0004F1F0 - 0x0004F239 (73 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004F1F0(void)
{

loc_0004F1F0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    edx = eax + 4;
    MEM32(edx + 4) = 0;
    edx = edx + 4;
    MEM32(edx + 4) = 0;
    edx = edx + 4;
    edx = edx + 4;
    MEM32(edx) = 0;
    edx = edx + 4;
    MEM32(edx) = 0;
    edx = edx + 4;
    MEM32(edx) = 0;
    MEM32(edx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0004F240
 * Original: 0x0004F240 - 0x0004F3DF (415 bytes, 110 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004F240(void)
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

loc_0004F240: ;
    esp = esp - 0x5C;
    PUSH32(esp, esi);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    esi = ecx;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0x3F800000;
    PUSH32(esp, 0x0004F260u); RECOMP_ABI_CALL(0x0004D280u, sub_0004D280); /* call 0x0004D280 */

loc_0004F260: ;
    ecx = MEM32(esi + 0x234);
    MEM32(esp + 4) = ecx;
    ecx = esi;
    PUSH32(esp, 0x0004F271u); RECOMP_ABI_CALL(0x0004A390u, sub_0004A390); /* call 0x0004A390 */

loc_0004F271: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0004F288; /* jp: parity */

loc_0004F282: ;
    fp_top() = fp_top() - MEMF(0x3CB1C0); /* fsub dword ptr [0x3cb1c0] */

loc_0004F288: ;
    fp_push(MEMF(esi + 0x23C)); /* fld float */
    edx = MEM32(esi + 0x23C);
    fp_top() = fp_top() + MEMF(0x3CB1C8); /* fadd dword ptr [0x3cb1c8] */
    MEM32(esp + 4) = edx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x240)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x240] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0004F2C3; /* jp: parity */

loc_0004F2AB: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    MEM32(esp + 0xC) = 0x40000000;
    fp_top() = fp_top() - MEMF(0x3CB1C8); /* fsub dword ptr [0x3cb1c8] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004F2C3: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004F2D1: ;
    ecx = esi;
    PUSH32(esp, 0x0004F2D8u); RECOMP_ABI_CALL(0x0004A390u, sub_0004A390); /* call 0x0004A390 */

loc_0004F2D8: ;
    fp_top() = fp_top() * MEMF(esp + 0x64); /* fmul dword ptr [esp + 0x64] */
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0);
    fp_top() = cos(fp_top()); /* fcos */
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    ecx = esp + 0x30;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0xE0); /* fadd dword ptr [esi + 0xe0] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0xE4); /* fadd dword ptr [esi + 0xe4] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() + MEMF(esi + 0xE8); /* fadd dword ptr [esi + 0xe8] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x44);
    MEM32(esp + 0x38) = eax;
    eax = esp + 0x48;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    PUSH32(esp, 0x0004F34Du); RECOMP_ABI_CALL(0x0004C290u, sub_0004C290); /* call 0x0004C290 */

loc_0004F34D: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0004F368; /* jp: parity */

loc_0004F35A: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3CB1C8); /* fadd dword ptr [0x3cb1c8] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004F368: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0004F3A7; /* jp: parity */

loc_0004F383: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CB1C4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cb1c4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0004F3A7; /* jp: parity */

loc_0004F394: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0004F2D1; /* jnp: not parity */

loc_0004F3A7: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CB1C4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cb1c4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004F3C0; /* jne: not equal / not zero */

loc_0004F3B8: ;
    MEM32(esp + 4) = 0x3FA78D2D;

loc_0004F3C0: ;
    SET_LO8(eax, MEM8(esi + 0x411));
    edx = MEM32(esp + 4);
    SET_LO8(eax, LO8(eax) & 0xDF);
    MEM8(esi + 0x411) = LO8(eax);
    MEM32(esi + 0x244) = edx;
    POP32(esp, esi);
    esp = esp + 0x5C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004F3E0
 * Original: 0x0004F3E0 - 0x0004FC50 (2160 bytes, 603 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004F3E0(void)
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

loc_0004F3E0: ;
    esp = esp - 0xD0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xDC);
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x110)); /* fld float */
    ebx = esi + 0x110;
    fp_top() = fp_top() - MEMF(ebp); /* fsub dword ptr [ebp] */
    eax = MEM32(ebp);
    ecx = MEM32(ebp + 4);
    edx = MEM32(ebp + 8);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x1C) = eax;
    fp_push(MEMF(ebx + 4)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = fp_top() - MEMF(ebp + 4); /* fsub dword ptr [ebp + 4] */
    eax = esp + 0x64;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    fp_push(MEMF(ebx + 8)); /* fld float */
    MEM32(esp + 0x2C) = edx;
    fp_top() = fp_top() - MEMF(ebp + 8); /* fsub dword ptr [ebp + 8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0xEC); /* fsub dword ptr [esi + 0xec] */
    fp_push(MEMF(ebp + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0xF0); /* fsub dword ptr [esi + 0xf0] */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0xF4); /* fsub dword ptr [esi + 0xf4] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0004F473u); RECOMP_ABI_CALL(0x0004D280u, sub_0004D280); /* call 0x0004D280 */

loc_0004F473: ;
    fp_push(MEMF(esi + 0x184)); /* fld float */
    ecx = esi;
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0004F486u); RECOMP_ABI_CALL(0x0004B400u, sub_0004B400); /* call 0x0004B400 */

loc_0004F486: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004F49D; /* je: equal / zero */

loc_0004F48A: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x7C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x7c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0004F4CF; /* jnp: not parity */

loc_0004F49D: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CAA70)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3caa70] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004F4D8; /* jne: not equal / not zero */

loc_0004F4C6: ;
    _fa = (uint32_t)(MEM8(esi + 0x411)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x411), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004F4D8; /* je: equal / zero */

loc_0004F4CF: ;
    ecx = esi;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0004F4D8u); RECOMP_ABI_CALL(0x0004E590u, sub_0004E590); /* call 0x0004E590 */

loc_0004F4D8: ;
    fp_push(MEMF(esi + 0x3A0)); /* fld float */
    edi = esi + 0x398;
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_push(MEMF(edi)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0004F545; /* jp: parity */

loc_0004F50C: ;
    eax = esi + 0x3A8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0004F523u); RECOMP_ABI_CALL(0x0004D2E0u, sub_0004D2E0); /* call 0x0004D2E0 */

loc_0004F523: ;
    edx = MEM32(eax);
    MEM32(edi) = edx;
    ecx = MEM32(eax + 4);
    MEM32(edi + 4) = ecx;
    edx = MEM32(eax + 8);
    MEM32(edi + 8) = edx;
    fp_push(MEMF(esi + 0x3A8)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C72F0); /* fadd dword ptr [0x3c72f0] */
    MEMF(esi + 0x3A8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004F545: ;
    MEM32(esp + 0x50) = 0;
    /* nop */

loc_0004F550: ;
    PUSH32(esp, 0);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0xDC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0004F566u); RECOMP_ABI_CALL(0x0004D2E0u, sub_0004D2E0); /* call 0x0004D2E0 */

loc_0004F566: ;
    edx = MEM32(eax);
    MEM32(esp + 0xA4) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0xA8) = ecx;
    edx = MEM32(eax + 8);
    eax = MEM32(esi + 0x3A8);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    MEM32(esp + 0xB4) = edx;
    edx = esp + 0xB8;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = esp + 0xB4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0004F5A7u); RECOMP_ABI_CALL(0x0004C290u, sub_0004C290); /* call 0x0004C290 */

loc_0004F5A7: ;
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = MEM32(esp + 0x50);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0004F922; /* jp: parity */

loc_0004F5C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0004FB01; /* je: equal / zero */

loc_0004F5F3: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(ebx); /* fsub dword ptr [ebx] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() - MEMF(ebx + 4); /* fsub dword ptr [ebx + 4] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(ebx + 8); /* fsub dword ptr [ebx + 8] */
    MEMF(esp + 0xA0) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0xB0); /* fsub dword ptr [esp + 0xb0] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0xB4); /* fsub dword ptr [esp + 0xb4] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0xB8); /* fsub dword ptr [esp + 0xb8] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA9DC); /* fmul dword ptr [0x3ca9dc] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(esp + 0x60); /* fmul dword ptr [esp + 0x60] */
    MEMF(esp + 0x98) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x60); /* fmul dword ptr [esp + 0x60] */
    fp_push(MEMF(esp + 0xA0)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x60); /* fmul dword ptr [esp + 0x60] */
    fp_push(MEMF(esp + 0x98)); /* fld float */
    fp_top() = fp_top() + MEMF(ebx); /* fadd dword ptr [ebx] */
    MEMF(esp + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(ebx + 4); /* fadd dword ptr [ebx + 4] */
    MEMF(esp + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(ebx + 8); /* fadd dword ptr [ebx + 8] */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x1C); /* fsub dword ptr [esp + 0x1c] */
    fp_top() = fp_top() * MEMF(0x3C83B0); /* fmul dword ptr [0x3c83b0] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x2C); /* fmul dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x34); /* fmul dword ptr [esp + 0x34] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x34); /* fmul dword ptr [esp + 0x34] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_top() = fp_top() - MEMF(esp + 0x54); /* fsub dword ptr [esp + 0x54] */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x58); /* fsub dword ptr [esp + 0x58] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x5C); /* fsub dword ptr [esp + 0x5c] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_top() = fp_top() - MEMF(esp + 0x58); /* fsub dword ptr [esp + 0x58] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x5C); /* fsub dword ptr [esp + 0x5c] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x80)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x38); /* fadd dword ptr [esp + 0x38] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x84)); /* fld float */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_top() = fp_top() + MEMF(esp + 0x40); /* fadd dword ptr [esp + 0x40] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x44); /* fmul dword ptr [esp + 0x44] */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x4C); /* fmul dword ptr [esp + 0x4c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x48); /* fmul dword ptr [esp + 0x48] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C93C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c93c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004FAFD; /* jne: not equal / not zero */

loc_0004F7E3: ;
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x24); /* fadd dword ptr [esp + 0x24] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esi + 0x3A8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0004F892; /* jnp: not parity */

loc_0004F83A: ;
    fp_push(MEMF(esi + 0x294)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CB264)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cb264] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004F892; /* jne: not equal / not zero */

loc_0004F84D: ;
    PUSH32(esp, 0);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0xD0;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0004F863u); RECOMP_ABI_CALL(0x0004D2E0u, sub_0004D2E0); /* call 0x0004D2E0 */

loc_0004F863: ;
    fp_push(MEMF(esi + 0x294)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x3A8); /* fsub dword ptr [esi + 0x3a8] */
    fp_push(MEMF(esp + 0xD0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004F890; /* jne: not equal / not zero */

loc_0004F87F: ;
    fp_push(MEMF(esp + 0xD0)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    fp_top() = MEMF(esp + 0x28) - fp_top(); /* fsubr dword ptr [esp + 0x28] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004F890: ;
    fp_pop(); /* fstp st(0) */

loc_0004F892: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    eax = esp + 0x10;
    fp_top() = fp_top() - MEMF(esp + 0x64); /* fsub dword ptr [esp + 0x64] */
    PUSH32(esp, eax);
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x70); /* fsub dword ptr [esp + 0x70] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x74); /* fsub dword ptr [esp + 0x74] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0004F8C8u); RECOMP_ABI_CALL(0x00120950u, sub_00120950); /* call 0x00120950 */

loc_0004F8C8: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = MEM32(esp + 0x58);
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    edx = MEM32(esp + 0x9C);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    esp = esp + 8;
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esi + 0x234) = edx;
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    MEM32(esp + 0x50) = eax;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esi + 0x178) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x90)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x240) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_0004F550; /* jl: less (signed <) */

loc_0004F91D: ;
    goto loc_0004FB01;

loc_0004F922: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0004F9F8; /* jle: less or equal (signed <=) */

loc_0004F92C: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0xEC); /* fsub dword ptr [esi + 0xec] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0xF0); /* fsub dword ptr [esi + 0xf0] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0xF4); /* fsub dword ptr [esi + 0xf4] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x184)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C8244); /* fadd dword ptr [0x3c8244] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x7C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x7c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004F9CD; /* jne: not equal / not zero */

loc_0004F979: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004F9D1; /* jne: not equal / not zero */

loc_0004F98C: ;
    _fa = (uint32_t)(MEM8(esi + 0x411)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x411), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004F9DA; /* je: equal / zero */

loc_0004F995: ;
    PUSH32(esp, 0x0004F99Au); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0004F99A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0004F9A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004F9A4: ;
    fp_top() = fp_top() - MEMF(0x3C837C); /* fsub dword ptr [0x3c837c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x3B0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x3b0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004F9D1; /* jne: not equal / not zero */

loc_0004F9B7: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0004F9C0u); RECOMP_ABI_CALL(0x0004E590u, sub_0004E590); /* call 0x0004E590 */

loc_0004F9C0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xD0;
    esp += 8; return; /* ret 4 */

loc_0004F9CD: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */

loc_0004F9D1: ;
    _fa = (uint32_t)(MEM8(esi + 0x411)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x411), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004F9EF; /* jne: not equal / not zero */

loc_0004F9DA: ;
    PUSH32(esp, 0x0004F9DFu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0004F9DF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0004F9E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004F9E9: ;
    MEMF(esi + 0x3B0) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004F9EF: ;
    MEM8(esi + 0x411) = MEM8(esi + 0x411) | 0x10;
    SET_LO8(ebx, 1);

loc_0004F9F8: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    eax = MEM32(esp + 0x20);
    fp_top() = fp_top() - MEMF(esp + 0x64); /* fsub dword ptr [esp + 0x64] */
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    MEM32(ebp) = eax;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x10;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEM32(ebp + 4) = ecx;
    fp_top() = fp_top() - MEMF(esp + 0x68); /* fsub dword ptr [esp + 0x68] */
    PUSH32(esp, eax);
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebp + 8) = edx;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x74); /* fsub dword ptr [esp + 0x74] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0004FA43u); RECOMP_ABI_CALL(0x00120950u, sub_00120950); /* call 0x00120950 */

loc_0004FA43: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    edx = MEM32(esp + 0x9C);
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    esp = esp + 8;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, 0);
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    PUSH32(esp, ebp);
    eax = esp + 0xDC;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    ecx = esi;
    MEM32(esi + 0x234) = edx;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esi + 0x178) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x9C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x240) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0004FA98u); RECOMP_ABI_CALL(0x0004D2E0u, sub_0004D2E0); /* call 0x0004D2E0 */

loc_0004FA98: ;
    ecx = MEM32(eax);
    MEM32(edi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(edi + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0x0004FAADu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0004FAAD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0004FAB7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004FAB7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004FAC5; /* je: equal / zero */

loc_0004FABB: ;
    SET_LO8(eax, MEM8(esi + 0x411));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_0004FAD8; /* jns: not sign (positive) */

loc_0004FAC5: ;
    SET_LO8(eax, MEM8(esi + 0x411));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0004FAD8; /* js: sign (negative) */

loc_0004FACF: ;
    ecx = MEM32(esi + 0x234);
    MEM32(esi + 0x74) = ecx;

loc_0004FAD8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004FAEE; /* jne: not equal / not zero */

loc_0004FADC: ;
    SET_LO8(eax, LO8(eax) & 0xEF);
    MEM8(esi + 0x411) = LO8(eax);
    MEM32(esi + 0x3B0) = 0;

loc_0004FAEE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xD0;
    esp += 8; return; /* ret 4 */

loc_0004FAFD: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */

loc_0004FB01: ;
    fp_push(MEMF(edi)); /* fld float */
    edx = esp + 0x70;
    fp_top() = fp_top() - MEMF(esi + 0xEC); /* fsub dword ptr [esi + 0xec] */
    PUSH32(esp, edx);
    fp_push(MEMF(edi + 4)); /* fld float */
    eax = esp + 0xC0;
    fp_top() = fp_top() - MEMF(esi + 0xF0); /* fsub dword ptr [esi + 0xf0] */
    PUSH32(esp, eax);
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0xF4); /* fsub dword ptr [esi + 0xf4] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esi + 0x3A4)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() + MEMF(edi); /* fadd dword ptr [edi] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 4); /* fadd dword ptr [edi + 4] */
    MEMF(esp + 0x8C) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() + MEMF(edi + 8); /* fadd dword ptr [edi + 8] */
    MEMF(esp + 0x90) = (float)fp_top(); /* fst */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(ebp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(esp + 0x6C); /* fsub dword ptr [esp + 0x6c] */
    MEMF(esp + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x8C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x70); /* fsub dword ptr [esp + 0x70] */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x90)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x74); /* fsub dword ptr [esp + 0x74] */
    MEMF(esp + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0004FBD5u); RECOMP_ABI_CALL(0x00120950u, sub_00120950); /* call 0x00120950 */

loc_0004FBD5: ;
    fp_push(MEMF(esp + 0x80)); /* fld float */
    esp = esp + 8;
    fp_top() = fp_top() * MEMF(esp + 0x78); /* fmul dword ptr [esp + 0x78] */
    fp_push(MEMF(esp + 0x74)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x74); /* fmul dword ptr [esp + 0x74] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x70); /* fmul dword ptr [esp + 0x70] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    ecx = MEM32(esp + 0xC4);
    MEMF(esi + 0x178) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC0)); /* fld float */
    MEM32(esi + 0x234) = ecx;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x240) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0004FC20u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0004FC20: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0004FC2Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004FC2A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004FC38; /* je: equal / zero */

loc_0004FC2E: ;
    SET_LO8(eax, MEM8(esi + 0x411));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_0004FC41; /* jns: not sign (positive) */

loc_0004FC38: ;
    eax = MEM32(esi + 0x234);
    MEM32(esi + 0x74) = eax;

loc_0004FC41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xD0;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004FC50
 * Original: 0x0004FC50 - 0x0004FE7B (555 bytes, 163 insns)
 * CC: cdecl, 5 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0004FC50(void)
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

loc_0004FC50: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x128)); /* fld float */
    PUSH32(esp, edi);
    fp_push(MEMF(esi + 0x12C)); /* fld float */
    if (TEST_Z(_fa, _fb)) goto loc_0004FE6E; /* je: equal / zero */

loc_0004FC70: ;
    fp_top() = fp_top() - MEMF(esp + 0x30); /* fsub dword ptr [esp + 0x30] */
    MEM32(esp + 0x14) = 0;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - MEMF(esp + 0x2C); /* fsub dword ptr [esp + 0x2c] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CB26C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cb26c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004FCAE; /* jne: not equal / not zero */

loc_0004FCA7: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    goto loc_0004FCD7;

loc_0004FCAE: ;
    eax = MEM32(esp + 0x28);
    fp_push(MEMF(eax + 8)); /* fld float */
    ecx = esp + 0x18;
    fp_top() = fp_top() - MEMF(esp + 0x34); /* fsub dword ptr [esp + 0x34] */
    PUSH32(esp, ecx);
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x34); /* fsub dword ptr [esp + 0x34] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x30); /* fsub dword ptr [esp + 0x30] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004FCD7: ;
    PUSH32(esp, 0x0004FCDCu); RECOMP_ABI_CALL(0x00120720u, sub_00120720); /* call 0x00120720 */

loc_0004FCDC: ;
    fp_pop(); /* fstp st(0) */
    edx = MEM32(esi + 0x230);
    esp = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0004FCEDu); RECOMP_ABI_CALL(0x001206E0u, sub_001206E0); /* call 0x001206E0 */

loc_0004FCED: ;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x3B4)); /* fld float */
    ecx = MEM32(esp + 0x3C);
    fp_top() = fp_top() * MEMF(0x3CB250); /* fmul dword ptr [0x3cb250] */
    eax = MEM32(esi + 0x23C);
    edi = esi + 0x234;
    MEM32(esi + 0x240) = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0004FD1Fu); RECOMP_ABI_CALL(0x0004A490u, sub_0004A490); /* call 0x0004A490 */

loc_0004FD1F: ;
    edx = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 4) = ecx;
    ecx = esi;
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x0004FD40u); RECOMP_ABI_CALL(0x0004D7E0u, sub_0004D7E0); /* call 0x0004D7E0 */

loc_0004FD40: ;
    fp_push(MEMF(esi + 0x3B4)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x3D0)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB270); /* fmul dword ptr [0x3cb270] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x3B4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x3b4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004FD71; /* jne: not equal / not zero */

loc_0004FD69: ;
    MEM32(esp + 0x38) = 0;

loc_0004FD71: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x3B4); /* fsub dword ptr [esi + 0x3b4] */
    fp_top() = fp_top() * MEMF(esi + 0x184); /* fmul dword ptr [esi + 0x184] */
    fp_push(MEMF(esi + 0x3DC)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x3B4); /* fmul dword ptr [esi + 0x3b4] */
    fp_top() = fp_top() - MEMF(0x3C6E40); /* fsub dword ptr [0x3c6e40] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x3DC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0x3dc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004FDB2; /* jne: not equal / not zero */

loc_0004FDA8: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x3DC)); /* fld float */
    goto loc_0004FDC7;

loc_0004FDB2: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x3D8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0x3d8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0004FDC7; /* jp: parity */

loc_0004FDBF: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x3D8)); /* fld float */

loc_0004FDC7: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x38); /* fsub dword ptr [esp + 0x38] */
    fp_top() = fp_top() * MEMF(esi + 0x178); /* fmul dword ptr [esi + 0x178] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004FDF2; /* jne: not equal / not zero */

loc_0004FDEC: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x28)); /* fld float */

loc_0004FDF2: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x178)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0x178] */
    fp_push(MEMF(esi + 0x178)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004FE22; /* jne: not equal / not zero */

loc_0004FE05: ;
    fp_top() = fp_top() + MEMF(0x3CB260); /* fadd dword ptr [0x3cb260] */
    MEMF(esi + 0x178) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004FE37; /* jne: not equal / not zero */

loc_0004FE1A: ;
    MEMF(esi + 0x178) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0004FE39;

loc_0004FE22: ;
    fp_top() = fp_top() - MEMF(0x3CB260); /* fsub dword ptr [0x3cb260] */
    MEMF(esi + 0x178) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0004FE1A; /* jnp: not parity */

loc_0004FE37: ;
    fp_pop(); /* fstp st(0) */

loc_0004FE39: ;
    eax = MEM32(esi + 0x178);
    ecx = MEM32(edi);
    edx = MEM32(esi + 0x240);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esi + 0x3C4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0004FE5Du); RECOMP_ABI_CALL(0x0004BF90u, sub_0004BF90); /* call 0x0004BF90 */

loc_0004FE5D: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0004FE65u); RECOMP_ABI_CALL(0x0004D9E0u, sub_0004D9E0); /* call 0x0004D9E0 */

loc_0004FE65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 24; return; /* ret 20 */

loc_0004FE6E: ;
    POP32(esp, edi);
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    fp_pop(); /* fstp st(0) */
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004FE80
 * Original: 0x0004FE80 - 0x000502C3 (1091 bytes, 276 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004FE80(void)
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

loc_0004FE80: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 4;
    MEM32(esi) = 0x3CB2F4;
    PUSH32(esp, 0x0004FE95u); RECOMP_ABI_CALL(0x00051F70u, sub_00051F70); /* call 0x00051F70 */

loc_0004FE95: ;
    ecx = esi + 0x18C;
    PUSH32(esp, 0x0004FEA0u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0004FEA0: ;
    ecx = esi + 0x1CC;
    PUSH32(esp, 0x0004FEABu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0004FEAB: ;
    ebx = 0; /* xor self */
    ecx = esi + 0x304;
    MEM32(esi + 0x2E4) = ebx;
    PUSH32(esp, 0x0004FEBEu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0004FEBE: ;
    ecx = esi + 0x36C;
    PUSH32(esp, 0x0004FEC9u); RECOMP_ABI_CALL(0x0004F1F0u, sub_0004F1F0); /* call 0x0004F1F0 */

loc_0004FEC9: ;
    MEM32(esi + 0x3E0) = ebx;
    MEM32(esi + 0x84) = ebx;
    MEM32(esi + 0x80) = ebx;
    MEM32(esi + 0x128) = ebx;
    MEM32(esi + 0x12C) = ebx;
    MEM32(esi + 0x130) = ebx;
    MEM32(esi + 0x398) = ebx;
    MEM32(esi + 0x39C) = ebx;
    MEM32(esi + 0x3A0) = ebx;
    MEM32(esi + 0x3A4) = ebx;
    PUSH32(esp, 0x0004FF0Au); RECOMP_ABI_CALL(0x0011CDD0u, sub_0011CDD0); /* call 0x0011CDD0 */

loc_0004FF0A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4BA90);
    PUSH32(esp, 0x4AFF0);
    PUSH32(esp, 0x3CB200);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0004FF1Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004FF1F: ;
    PUSH32(esp, 0x0004FF24u); RECOMP_ABI_CALL(0x0011CDD0u, sub_0011CDD0); /* call 0x0011CDD0 */

loc_0004FF24: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4B050);
    PUSH32(esp, 0x4A2F0);
    PUSH32(esp, 0x3CB1D4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0004FF39u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004FF39: ;
    eax = MEM32(esi + 0x24C);
    MEM32(esi + 0x230) = ebx;
    MEM32(esi + 0x234) = ebx;
    MEM32(esi + 0x258) = ebx;
    MEM32(esi + 0x260) = ebx;
    MEM32(esi + 0x25C) = ebx;
    MEM32(esi + 0x26C) = ebx;
    MEM32(esi + 0x268) = ebx;
    MEM32(esi + 0x270) = ebx;
    MEM32(esi + 0x274) = ebx;
    MEM32(esi + 0x278) = eax;
    MEM32(esp + 0x10) = 0x42700000;
    PUSH32(esp, 0x0004FF88u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_0004FF88: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x42700000);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB1F4);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0004FFA3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004FFA3: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0004FFAFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004FFAF: ;
    PUSH32(esp, 0x0004FFB4u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_0004FFB4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x43AF0000);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB2E4);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0004FFCFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004FFCF: ;
    edx = MEM32(esp + 8);
    MEM32(esi + 0x174) = edx;
    PUSH32(esp, 0x0004FFDEu); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_0004FFDE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x42960000);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB2D8);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0004FFF9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004FFF9: ;
    PUSH32(esp, 0x0004FFFEu); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_0004FFFE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x43BB8000);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB2CC);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00050019u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050019: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 8); /* fsub dword ptr [esp + 8] */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    edx = MEM32(esp + 8);
    MEM32(esi + 0x184) = eax;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(esi + 0x180) = edx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0005004E; /* jp: parity */

loc_00050046: ;
    MEM32(esi + 0x188) = ebx;
    goto loc_0005005C;

loc_0005004E: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    MEMF(esi + 0x188) = (float)fp_top(); fp_pop(); /* fstp */

loc_0005005C: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00050063u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050063: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x42340000);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB200);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0005007Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005007E: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esi + 0x238) = (float)fp_top(); /* fst */
    MEMF(esi + 0x240) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00050099u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050099: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F0CCCCD);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB2BC);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000500B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000500B4: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000500C0u); RECOMP_ABI_CALL(0x0004A860u, sub_0004A860); /* call 0x0004A860 */

loc_000500C0: ;
    PUSH32(esp, 0x000500C5u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000500C5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F7EB852);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB2A8);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000500E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000500E0: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000500ECu); RECOMP_ABI_CALL(0x0004A8C0u, sub_0004A8C0); /* call 0x0004A8C0 */

loc_000500EC: ;
    PUSH32(esp, 0x000500F1u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000500F1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB29C);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00050109u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050109: ;
    SET_LO8(edx, MEM8(esp + 0xC));
    SET_LO8(eax, MEM8(esi + 0x410));
    SET_LO8(edx, LO8(edx) << 4);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 0x10);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x410) = LO8(eax);
    PUSH32(esp, 0x00050128u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050128: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB1D4);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0005013Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005013F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    SET_LO8(ecx, MEM8(esi + 0x410));
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) << 2);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(esi + 0x410) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00050169; /* jne: not equal / not zero */

loc_0005015F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00050169u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050169: ;
    PUSH32(esp, 0x0005016Eu); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_0005016E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x41F00000);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB28C);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00050189u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050189: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(0x3CB288)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000501AE; /* jp: parity */

loc_0005019C: ;
    PUSH32(esp, 0x000501A1u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501A1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000501A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501A9: ;
    MEM32(esi + 0x74) = ebx;
    goto loc_000501C9;

loc_000501AE: ;
    PUSH32(esp, 0x000501B3u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501B3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000501BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501BC: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB284); /* fmul dword ptr [0x3cb284] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */

loc_000501C9: ;
    MEM8(esi + 0x411) = MEM8(esi + 0x411) | 8;
    MEM32(esi + 0x170) = ebx;
    MEM32(esi + 0x16C) = ebx;
    PUSH32(esp, 0x000501E1u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000501E1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB274);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000501F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501F9: ;
    PUSH32(esp, 0x000501FEu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501FE: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0005020Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005020D: ;
    edx = MEM32(esi + 0x154);
    eax = MEM32(esi + 0x15C);
    ecx = MEM32(esi + 0x174);
    MEM32(esi + 0x150) = edx;
    SET_LO8(edx, MEM8(esi + 0x412));
    MEM32(esi + 0x254) = eax;
    MEM16(esi + 0x394) = LO16(ebx);
    MEM32(esi + 0x390) = ebx;
    MEM32(esi + 0x17C) = ecx;
    MEM32(esi + 0x3A8) = ebx;
    SET_LO8(ebx, MEM8(esi + 0x411));
    eax = esp + 0x18;
    SET_LO8(edx, LO8(edx) & 0xFC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEM8(esi + 0x412) = LO8(edx);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    SET_LO8(ebx, LO8(ebx) & 0x3F);
    ecx = esi;
    MEM8(esi + 0x411) = LO8(ebx);
    MEM32(esi + 0x294) = 0xC61C4000u;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x28) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x000502ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000502AD: ;
    ecx = esi;
    PUSH32(esp, 0x000502B4u); RECOMP_ABI_CALL(0x000516C0u, sub_000516C0); /* call 0x000516C0 */

loc_000502B4: ;
    MEM8(esi + 0x410) = MEM8(esi + 0x410) | 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00050000
 * Original: 0x00050000 - 0x000502C3 (707 bytes, 187 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050000(void)
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

loc_00050000: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x43BB8000);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB2CC);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00050019u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050019: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 8); /* fsub dword ptr [esp + 8] */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    edx = MEM32(esp + 8);
    MEM32(esi + 0x184) = eax;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(esi + 0x180) = edx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0005004E; /* jp: parity */

loc_00050046: ;
    MEM32(esi + 0x188) = ebx;
    goto loc_0005005C;

loc_0005004E: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    MEMF(esi + 0x188) = (float)fp_top(); fp_pop(); /* fstp */

loc_0005005C: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00050063u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050063: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x42340000);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB200);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0005007Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005007E: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esi + 0x238) = (float)fp_top(); /* fst */
    MEMF(esi + 0x240) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00050099u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050099: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F0CCCCD);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB2BC);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000500B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000500B4: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000500C0u); RECOMP_ABI_CALL(0x0004A860u, sub_0004A860); /* call 0x0004A860 */

loc_000500C0: ;
    PUSH32(esp, 0x000500C5u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000500C5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F7EB852);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB2A8);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000500E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000500E0: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000500ECu); RECOMP_ABI_CALL(0x0004A8C0u, sub_0004A8C0); /* call 0x0004A8C0 */

loc_000500EC: ;
    PUSH32(esp, 0x000500F1u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000500F1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB29C);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00050109u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050109: ;
    SET_LO8(edx, MEM8(esp + 0xC));
    SET_LO8(eax, MEM8(esi + 0x410));
    SET_LO8(edx, LO8(edx) << 4);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 0x10);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x410) = LO8(eax);
    PUSH32(esp, 0x00050128u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050128: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB1D4);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0005013Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005013F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    SET_LO8(ecx, MEM8(esi + 0x410));
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) << 2);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(esi + 0x410) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00050169; /* jne: not equal / not zero */

loc_0005015F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00050169u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050169: ;
    PUSH32(esp, 0x0005016Eu); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_0005016E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x41F00000);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB28C);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00050189u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050189: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(0x3CB288)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000501AE; /* jp: parity */

loc_0005019C: ;
    PUSH32(esp, 0x000501A1u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501A1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000501A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501A9: ;
    MEM32(esi + 0x74) = ebx;
    goto loc_000501C9;

loc_000501AE: ;
    PUSH32(esp, 0x000501B3u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501B3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000501BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501BC: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB284); /* fmul dword ptr [0x3cb284] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */

loc_000501C9: ;
    MEM8(esi + 0x411) = MEM8(esi + 0x411) | 8;
    MEM32(esi + 0x170) = ebx;
    MEM32(esi + 0x16C) = ebx;
    PUSH32(esp, 0x000501E1u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000501E1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB274);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000501F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501F9: ;
    PUSH32(esp, 0x000501FEu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501FE: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0005020Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005020D: ;
    edx = MEM32(esi + 0x154);
    eax = MEM32(esi + 0x15C);
    ecx = MEM32(esi + 0x174);
    MEM32(esi + 0x150) = edx;
    SET_LO8(edx, MEM8(esi + 0x412));
    MEM32(esi + 0x254) = eax;
    MEM16(esi + 0x394) = LO16(ebx);
    MEM32(esi + 0x390) = ebx;
    MEM32(esi + 0x17C) = ecx;
    MEM32(esi + 0x3A8) = ebx;
    SET_LO8(ebx, MEM8(esi + 0x411));
    eax = esp + 0x18;
    SET_LO8(edx, LO8(edx) & 0xFC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEM8(esi + 0x412) = LO8(edx);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    SET_LO8(ebx, LO8(ebx) & 0x3F);
    ecx = esi;
    MEM8(esi + 0x411) = LO8(ebx);
    MEM32(esi + 0x294) = 0xC61C4000u;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x28) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x000502ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000502AD: ;
    ecx = esi;
    PUSH32(esp, 0x000502B4u); RECOMP_ABI_CALL(0x000516C0u, sub_000516C0); /* call 0x000516C0 */

loc_000502B4: ;
    MEM8(esi + 0x410) = MEM8(esi + 0x410) | 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00050005
 * Original: 0x00050005 - 0x000502C3 (702 bytes, 186 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050005(void)
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

loc_00050005: ;
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB2CC);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00050019u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050019: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 8); /* fsub dword ptr [esp + 8] */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    edx = MEM32(esp + 8);
    MEM32(esi + 0x184) = eax;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(esi + 0x180) = edx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0005004E; /* jp: parity */

loc_00050046: ;
    MEM32(esi + 0x188) = ebx;
    goto loc_0005005C;

loc_0005004E: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    MEMF(esi + 0x188) = (float)fp_top(); fp_pop(); /* fstp */

loc_0005005C: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00050063u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050063: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x42340000);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB200);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0005007Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005007E: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esi + 0x238) = (float)fp_top(); /* fst */
    MEMF(esi + 0x240) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00050099u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050099: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F0CCCCD);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB2BC);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000500B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000500B4: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000500C0u); RECOMP_ABI_CALL(0x0004A860u, sub_0004A860); /* call 0x0004A860 */

loc_000500C0: ;
    PUSH32(esp, 0x000500C5u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000500C5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F7EB852);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB2A8);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000500E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000500E0: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000500ECu); RECOMP_ABI_CALL(0x0004A8C0u, sub_0004A8C0); /* call 0x0004A8C0 */

loc_000500EC: ;
    PUSH32(esp, 0x000500F1u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000500F1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB29C);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00050109u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050109: ;
    SET_LO8(edx, MEM8(esp + 0xC));
    SET_LO8(eax, MEM8(esi + 0x410));
    SET_LO8(edx, LO8(edx) << 4);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 0x10);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x410) = LO8(eax);
    PUSH32(esp, 0x00050128u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050128: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB1D4);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0005013Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005013F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    SET_LO8(ecx, MEM8(esi + 0x410));
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) << 2);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(esi + 0x410) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00050169; /* jne: not equal / not zero */

loc_0005015F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00050169u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050169: ;
    PUSH32(esp, 0x0005016Eu); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_0005016E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x41F00000);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB28C);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00050189u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050189: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(0x3CB288)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000501AE; /* jp: parity */

loc_0005019C: ;
    PUSH32(esp, 0x000501A1u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501A1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000501A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501A9: ;
    MEM32(esi + 0x74) = ebx;
    goto loc_000501C9;

loc_000501AE: ;
    PUSH32(esp, 0x000501B3u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501B3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000501BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501BC: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB284); /* fmul dword ptr [0x3cb284] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */

loc_000501C9: ;
    MEM8(esi + 0x411) = MEM8(esi + 0x411) | 8;
    MEM32(esi + 0x170) = ebx;
    MEM32(esi + 0x16C) = ebx;
    PUSH32(esp, 0x000501E1u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000501E1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB274);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000501F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501F9: ;
    PUSH32(esp, 0x000501FEu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501FE: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0005020Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005020D: ;
    edx = MEM32(esi + 0x154);
    eax = MEM32(esi + 0x15C);
    ecx = MEM32(esi + 0x174);
    MEM32(esi + 0x150) = edx;
    SET_LO8(edx, MEM8(esi + 0x412));
    MEM32(esi + 0x254) = eax;
    MEM16(esi + 0x394) = LO16(ebx);
    MEM32(esi + 0x390) = ebx;
    MEM32(esi + 0x17C) = ecx;
    MEM32(esi + 0x3A8) = ebx;
    SET_LO8(ebx, MEM8(esi + 0x411));
    eax = esp + 0x18;
    SET_LO8(edx, LO8(edx) & 0xFC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEM8(esi + 0x412) = LO8(edx);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    SET_LO8(ebx, LO8(ebx) & 0x3F);
    ecx = esi;
    MEM8(esi + 0x411) = LO8(ebx);
    MEM32(esi + 0x294) = 0xC61C4000u;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x28) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x000502ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000502AD: ;
    ecx = esi;
    PUSH32(esp, 0x000502B4u); RECOMP_ABI_CALL(0x000516C0u, sub_000516C0); /* call 0x000516C0 */

loc_000502B4: ;
    MEM8(esi + 0x410) = MEM8(esi + 0x410) | 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00050009
 * Original: 0x00050009 - 0x000502C3 (698 bytes, 185 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050009(void)
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

loc_00050009: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB2CC);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00050019u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050019: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 8); /* fsub dword ptr [esp + 8] */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    edx = MEM32(esp + 8);
    MEM32(esi + 0x184) = eax;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(esi + 0x180) = edx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0005004E; /* jp: parity */

loc_00050046: ;
    MEM32(esi + 0x188) = ebx;
    goto loc_0005005C;

loc_0005004E: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    MEMF(esi + 0x188) = (float)fp_top(); fp_pop(); /* fstp */

loc_0005005C: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00050063u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050063: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x42340000);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB200);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0005007Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005007E: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esi + 0x238) = (float)fp_top(); /* fst */
    MEMF(esi + 0x240) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00050099u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050099: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F0CCCCD);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB2BC);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000500B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000500B4: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000500C0u); RECOMP_ABI_CALL(0x0004A860u, sub_0004A860); /* call 0x0004A860 */

loc_000500C0: ;
    PUSH32(esp, 0x000500C5u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000500C5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F7EB852);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB2A8);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000500E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000500E0: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000500ECu); RECOMP_ABI_CALL(0x0004A8C0u, sub_0004A8C0); /* call 0x0004A8C0 */

loc_000500EC: ;
    PUSH32(esp, 0x000500F1u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000500F1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB29C);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00050109u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050109: ;
    SET_LO8(edx, MEM8(esp + 0xC));
    SET_LO8(eax, MEM8(esi + 0x410));
    SET_LO8(edx, LO8(edx) << 4);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 0x10);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x410) = LO8(eax);
    PUSH32(esp, 0x00050128u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050128: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB1D4);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0005013Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005013F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    SET_LO8(ecx, MEM8(esi + 0x410));
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) << 2);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(esi + 0x410) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00050169; /* jne: not equal / not zero */

loc_0005015F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00050169u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050169: ;
    PUSH32(esp, 0x0005016Eu); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_0005016E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x41F00000);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB28C);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00050189u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050189: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(0x3CB288)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000501AE; /* jp: parity */

loc_0005019C: ;
    PUSH32(esp, 0x000501A1u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501A1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000501A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501A9: ;
    MEM32(esi + 0x74) = ebx;
    goto loc_000501C9;

loc_000501AE: ;
    PUSH32(esp, 0x000501B3u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501B3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000501BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501BC: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB284); /* fmul dword ptr [0x3cb284] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */

loc_000501C9: ;
    MEM8(esi + 0x411) = MEM8(esi + 0x411) | 8;
    MEM32(esi + 0x170) = ebx;
    MEM32(esi + 0x16C) = ebx;
    PUSH32(esp, 0x000501E1u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000501E1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB274);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000501F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501F9: ;
    PUSH32(esp, 0x000501FEu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501FE: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0005020Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005020D: ;
    edx = MEM32(esi + 0x154);
    eax = MEM32(esi + 0x15C);
    ecx = MEM32(esi + 0x174);
    MEM32(esi + 0x150) = edx;
    SET_LO8(edx, MEM8(esi + 0x412));
    MEM32(esi + 0x254) = eax;
    MEM16(esi + 0x394) = LO16(ebx);
    MEM32(esi + 0x390) = ebx;
    MEM32(esi + 0x17C) = ecx;
    MEM32(esi + 0x3A8) = ebx;
    SET_LO8(ebx, MEM8(esi + 0x411));
    eax = esp + 0x18;
    SET_LO8(edx, LO8(edx) & 0xFC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEM8(esi + 0x412) = LO8(edx);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    SET_LO8(ebx, LO8(ebx) & 0x3F);
    ecx = esi;
    MEM8(esi + 0x411) = LO8(ebx);
    MEM32(esi + 0x294) = 0xC61C4000u;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x28) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x000502ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000502AD: ;
    ecx = esi;
    PUSH32(esp, 0x000502B4u); RECOMP_ABI_CALL(0x000516C0u, sub_000516C0); /* call 0x000516C0 */

loc_000502B4: ;
    MEM8(esi + 0x410) = MEM8(esi + 0x410) | 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0005000A
 * Original: 0x0005000A - 0x000502C3 (697 bytes, 184 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005000A(void)
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

loc_0005000A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3CB2CC);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00050019u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050019: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 8); /* fsub dword ptr [esp + 8] */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    edx = MEM32(esp + 8);
    MEM32(esi + 0x184) = eax;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(esi + 0x180) = edx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0005004E; /* jp: parity */

loc_00050046: ;
    MEM32(esi + 0x188) = ebx;
    goto loc_0005005C;

loc_0005004E: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    MEMF(esi + 0x188) = (float)fp_top(); fp_pop(); /* fstp */

loc_0005005C: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00050063u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050063: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x42340000);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB200);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0005007Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005007E: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esi + 0x238) = (float)fp_top(); /* fst */
    MEMF(esi + 0x240) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00050099u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050099: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F0CCCCD);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB2BC);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000500B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000500B4: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000500C0u); RECOMP_ABI_CALL(0x0004A860u, sub_0004A860); /* call 0x0004A860 */

loc_000500C0: ;
    PUSH32(esp, 0x000500C5u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000500C5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F7EB852);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB2A8);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000500E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000500E0: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000500ECu); RECOMP_ABI_CALL(0x0004A8C0u, sub_0004A8C0); /* call 0x0004A8C0 */

loc_000500EC: ;
    PUSH32(esp, 0x000500F1u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000500F1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB29C);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00050109u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050109: ;
    SET_LO8(edx, MEM8(esp + 0xC));
    SET_LO8(eax, MEM8(esi + 0x410));
    SET_LO8(edx, LO8(edx) << 4);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 0x10);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x410) = LO8(eax);
    PUSH32(esp, 0x00050128u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050128: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB1D4);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0005013Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005013F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    SET_LO8(ecx, MEM8(esi + 0x410));
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) << 2);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(esi + 0x410) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00050169; /* jne: not equal / not zero */

loc_0005015F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00050169u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050169: ;
    PUSH32(esp, 0x0005016Eu); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_0005016E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x41F00000);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB28C);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00050189u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050189: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(0x3CB288)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000501AE; /* jp: parity */

loc_0005019C: ;
    PUSH32(esp, 0x000501A1u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501A1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000501A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501A9: ;
    MEM32(esi + 0x74) = ebx;
    goto loc_000501C9;

loc_000501AE: ;
    PUSH32(esp, 0x000501B3u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501B3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000501BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501BC: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB284); /* fmul dword ptr [0x3cb284] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */

loc_000501C9: ;
    MEM8(esi + 0x411) = MEM8(esi + 0x411) | 8;
    MEM32(esi + 0x170) = ebx;
    MEM32(esi + 0x16C) = ebx;
    PUSH32(esp, 0x000501E1u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000501E1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB274);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000501F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501F9: ;
    PUSH32(esp, 0x000501FEu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501FE: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0005020Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005020D: ;
    edx = MEM32(esi + 0x154);
    eax = MEM32(esi + 0x15C);
    ecx = MEM32(esi + 0x174);
    MEM32(esi + 0x150) = edx;
    SET_LO8(edx, MEM8(esi + 0x412));
    MEM32(esi + 0x254) = eax;
    MEM16(esi + 0x394) = LO16(ebx);
    MEM32(esi + 0x390) = ebx;
    MEM32(esi + 0x17C) = ecx;
    MEM32(esi + 0x3A8) = ebx;
    SET_LO8(ebx, MEM8(esi + 0x411));
    eax = esp + 0x18;
    SET_LO8(edx, LO8(edx) & 0xFC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEM8(esi + 0x412) = LO8(edx);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    SET_LO8(ebx, LO8(ebx) & 0x3F);
    ecx = esi;
    MEM8(esi + 0x411) = LO8(ebx);
    MEM32(esi + 0x294) = 0xC61C4000u;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x28) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x000502ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000502AD: ;
    ecx = esi;
    PUSH32(esp, 0x000502B4u); RECOMP_ABI_CALL(0x000516C0u, sub_000516C0); /* call 0x000516C0 */

loc_000502B4: ;
    MEM8(esi + 0x410) = MEM8(esi + 0x410) | 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00050014
 * Original: 0x00050014 - 0x000502C3 (687 bytes, 182 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050014(void)
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

loc_00050014: ;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00050019u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050019: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 8); /* fsub dword ptr [esp + 8] */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    edx = MEM32(esp + 8);
    MEM32(esi + 0x184) = eax;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(esi + 0x180) = edx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0005004E; /* jp: parity */

loc_00050046: ;
    MEM32(esi + 0x188) = ebx;
    goto loc_0005005C;

loc_0005004E: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    MEMF(esi + 0x188) = (float)fp_top(); fp_pop(); /* fstp */

loc_0005005C: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00050063u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050063: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x42340000);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB200);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0005007Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005007E: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esi + 0x238) = (float)fp_top(); /* fst */
    MEMF(esi + 0x240) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00050099u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050099: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F0CCCCD);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB2BC);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000500B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000500B4: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000500C0u); RECOMP_ABI_CALL(0x0004A860u, sub_0004A860); /* call 0x0004A860 */

loc_000500C0: ;
    PUSH32(esp, 0x000500C5u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000500C5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F7EB852);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB2A8);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000500E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000500E0: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000500ECu); RECOMP_ABI_CALL(0x0004A8C0u, sub_0004A8C0); /* call 0x0004A8C0 */

loc_000500EC: ;
    PUSH32(esp, 0x000500F1u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000500F1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB29C);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00050109u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050109: ;
    SET_LO8(edx, MEM8(esp + 0xC));
    SET_LO8(eax, MEM8(esi + 0x410));
    SET_LO8(edx, LO8(edx) << 4);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 0x10);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x410) = LO8(eax);
    PUSH32(esp, 0x00050128u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050128: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB1D4);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0005013Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005013F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    SET_LO8(ecx, MEM8(esi + 0x410));
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) << 2);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(esi + 0x410) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00050169; /* jne: not equal / not zero */

loc_0005015F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00050169u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050169: ;
    PUSH32(esp, 0x0005016Eu); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_0005016E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x41F00000);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB28C);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00050189u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050189: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(0x3CB288)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000501AE; /* jp: parity */

loc_0005019C: ;
    PUSH32(esp, 0x000501A1u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501A1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000501A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501A9: ;
    MEM32(esi + 0x74) = ebx;
    goto loc_000501C9;

loc_000501AE: ;
    PUSH32(esp, 0x000501B3u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501B3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000501BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501BC: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB284); /* fmul dword ptr [0x3cb284] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */

loc_000501C9: ;
    MEM8(esi + 0x411) = MEM8(esi + 0x411) | 8;
    MEM32(esi + 0x170) = ebx;
    MEM32(esi + 0x16C) = ebx;
    PUSH32(esp, 0x000501E1u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000501E1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB274);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000501F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501F9: ;
    PUSH32(esp, 0x000501FEu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501FE: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0005020Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005020D: ;
    edx = MEM32(esi + 0x154);
    eax = MEM32(esi + 0x15C);
    ecx = MEM32(esi + 0x174);
    MEM32(esi + 0x150) = edx;
    SET_LO8(edx, MEM8(esi + 0x412));
    MEM32(esi + 0x254) = eax;
    MEM16(esi + 0x394) = LO16(ebx);
    MEM32(esi + 0x390) = ebx;
    MEM32(esi + 0x17C) = ecx;
    MEM32(esi + 0x3A8) = ebx;
    SET_LO8(ebx, MEM8(esi + 0x411));
    eax = esp + 0x18;
    SET_LO8(edx, LO8(edx) & 0xFC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEM8(esi + 0x412) = LO8(edx);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    SET_LO8(ebx, LO8(ebx) & 0x3F);
    ecx = esi;
    MEM8(esi + 0x411) = LO8(ebx);
    MEM32(esi + 0x294) = 0xC61C4000u;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x28) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x000502ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000502AD: ;
    ecx = esi;
    PUSH32(esp, 0x000502B4u); RECOMP_ABI_CALL(0x000516C0u, sub_000516C0); /* call 0x000516C0 */

loc_000502B4: ;
    MEM8(esi + 0x410) = MEM8(esi + 0x410) | 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00050016
 * Original: 0x00050016 - 0x000502C3 (685 bytes, 181 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050016(void)
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

loc_00050016: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00050019u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050019: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 8); /* fsub dword ptr [esp + 8] */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    edx = MEM32(esp + 8);
    MEM32(esi + 0x184) = eax;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(esi + 0x180) = edx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0005004E; /* jp: parity */

loc_00050046: ;
    MEM32(esi + 0x188) = ebx;
    goto loc_0005005C;

loc_0005004E: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    MEMF(esi + 0x188) = (float)fp_top(); fp_pop(); /* fstp */

loc_0005005C: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00050063u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050063: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x42340000);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB200);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0005007Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005007E: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esi + 0x238) = (float)fp_top(); /* fst */
    MEMF(esi + 0x240) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00050099u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050099: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F0CCCCD);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB2BC);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000500B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000500B4: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000500C0u); RECOMP_ABI_CALL(0x0004A860u, sub_0004A860); /* call 0x0004A860 */

loc_000500C0: ;
    PUSH32(esp, 0x000500C5u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000500C5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F7EB852);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB2A8);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000500E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000500E0: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000500ECu); RECOMP_ABI_CALL(0x0004A8C0u, sub_0004A8C0); /* call 0x0004A8C0 */

loc_000500EC: ;
    PUSH32(esp, 0x000500F1u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000500F1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB29C);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00050109u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050109: ;
    SET_LO8(edx, MEM8(esp + 0xC));
    SET_LO8(eax, MEM8(esi + 0x410));
    SET_LO8(edx, LO8(edx) << 4);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 0x10);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x410) = LO8(eax);
    PUSH32(esp, 0x00050128u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050128: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB1D4);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0005013Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005013F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    SET_LO8(ecx, MEM8(esi + 0x410));
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) << 2);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(esi + 0x410) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00050169; /* jne: not equal / not zero */

loc_0005015F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00050169u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050169: ;
    PUSH32(esp, 0x0005016Eu); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_0005016E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x41F00000);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB28C);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00050189u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050189: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(0x3CB288)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000501AE; /* jp: parity */

loc_0005019C: ;
    PUSH32(esp, 0x000501A1u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501A1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000501A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501A9: ;
    MEM32(esi + 0x74) = ebx;
    goto loc_000501C9;

loc_000501AE: ;
    PUSH32(esp, 0x000501B3u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501B3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000501BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501BC: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB284); /* fmul dword ptr [0x3cb284] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */

loc_000501C9: ;
    MEM8(esi + 0x411) = MEM8(esi + 0x411) | 8;
    MEM32(esi + 0x170) = ebx;
    MEM32(esi + 0x16C) = ebx;
    PUSH32(esp, 0x000501E1u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000501E1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB274);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000501F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501F9: ;
    PUSH32(esp, 0x000501FEu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501FE: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0005020Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005020D: ;
    edx = MEM32(esi + 0x154);
    eax = MEM32(esi + 0x15C);
    ecx = MEM32(esi + 0x174);
    MEM32(esi + 0x150) = edx;
    SET_LO8(edx, MEM8(esi + 0x412));
    MEM32(esi + 0x254) = eax;
    MEM16(esi + 0x394) = LO16(ebx);
    MEM32(esi + 0x390) = ebx;
    MEM32(esi + 0x17C) = ecx;
    MEM32(esi + 0x3A8) = ebx;
    SET_LO8(ebx, MEM8(esi + 0x411));
    eax = esp + 0x18;
    SET_LO8(edx, LO8(edx) & 0xFC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEM8(esi + 0x412) = LO8(edx);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    SET_LO8(ebx, LO8(ebx) & 0x3F);
    ecx = esi;
    MEM8(esi + 0x411) = LO8(ebx);
    MEM32(esi + 0x294) = 0xC61C4000u;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x28) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x000502ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000502AD: ;
    ecx = esi;
    PUSH32(esp, 0x000502B4u); RECOMP_ABI_CALL(0x000516C0u, sub_000516C0); /* call 0x000516C0 */

loc_000502B4: ;
    MEM8(esi + 0x410) = MEM8(esi + 0x410) | 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00050019
 * Original: 0x00050019 - 0x000502C3 (682 bytes, 180 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050019(void)
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

loc_00050019: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 8); /* fsub dword ptr [esp + 8] */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    edx = MEM32(esp + 8);
    MEM32(esi + 0x184) = eax;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(esi + 0x180) = edx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0005004E; /* jp: parity */

loc_00050046: ;
    MEM32(esi + 0x188) = ebx;
    goto loc_0005005C;

loc_0005004E: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    MEMF(esi + 0x188) = (float)fp_top(); fp_pop(); /* fstp */

loc_0005005C: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00050063u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050063: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x42340000);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB200);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0005007Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005007E: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esi + 0x238) = (float)fp_top(); /* fst */
    MEMF(esi + 0x240) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00050099u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050099: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F0CCCCD);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB2BC);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000500B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000500B4: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000500C0u); RECOMP_ABI_CALL(0x0004A860u, sub_0004A860); /* call 0x0004A860 */

loc_000500C0: ;
    PUSH32(esp, 0x000500C5u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000500C5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F7EB852);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB2A8);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000500E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000500E0: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000500ECu); RECOMP_ABI_CALL(0x0004A8C0u, sub_0004A8C0); /* call 0x0004A8C0 */

loc_000500EC: ;
    PUSH32(esp, 0x000500F1u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000500F1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB29C);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00050109u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050109: ;
    SET_LO8(edx, MEM8(esp + 0xC));
    SET_LO8(eax, MEM8(esi + 0x410));
    SET_LO8(edx, LO8(edx) << 4);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 0x10);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x410) = LO8(eax);
    PUSH32(esp, 0x00050128u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050128: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB1D4);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0005013Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005013F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    SET_LO8(ecx, MEM8(esi + 0x410));
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) << 2);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(esi + 0x410) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00050169; /* jne: not equal / not zero */

loc_0005015F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00050169u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050169: ;
    PUSH32(esp, 0x0005016Eu); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_0005016E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x41F00000);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB28C);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00050189u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050189: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(0x3CB288)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000501AE; /* jp: parity */

loc_0005019C: ;
    PUSH32(esp, 0x000501A1u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501A1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000501A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501A9: ;
    MEM32(esi + 0x74) = ebx;
    goto loc_000501C9;

loc_000501AE: ;
    PUSH32(esp, 0x000501B3u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501B3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000501BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501BC: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB284); /* fmul dword ptr [0x3cb284] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */

loc_000501C9: ;
    MEM8(esi + 0x411) = MEM8(esi + 0x411) | 8;
    MEM32(esi + 0x170) = ebx;
    MEM32(esi + 0x16C) = ebx;
    PUSH32(esp, 0x000501E1u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000501E1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB274);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000501F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501F9: ;
    PUSH32(esp, 0x000501FEu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501FE: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0005020Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005020D: ;
    edx = MEM32(esi + 0x154);
    eax = MEM32(esi + 0x15C);
    ecx = MEM32(esi + 0x174);
    MEM32(esi + 0x150) = edx;
    SET_LO8(edx, MEM8(esi + 0x412));
    MEM32(esi + 0x254) = eax;
    MEM16(esi + 0x394) = LO16(ebx);
    MEM32(esi + 0x390) = ebx;
    MEM32(esi + 0x17C) = ecx;
    MEM32(esi + 0x3A8) = ebx;
    SET_LO8(ebx, MEM8(esi + 0x411));
    eax = esp + 0x18;
    SET_LO8(edx, LO8(edx) & 0xFC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEM8(esi + 0x412) = LO8(edx);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    SET_LO8(ebx, LO8(ebx) & 0x3F);
    ecx = esi;
    MEM8(esi + 0x411) = LO8(ebx);
    MEM32(esi + 0x294) = 0xC61C4000u;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x28) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x000502ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000502AD: ;
    ecx = esi;
    PUSH32(esp, 0x000502B4u); RECOMP_ABI_CALL(0x000516C0u, sub_000516C0); /* call 0x000516C0 */

loc_000502B4: ;
    MEM8(esi + 0x410) = MEM8(esi + 0x410) | 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0005001D
 * Original: 0x0005001D - 0x000502C3 (678 bytes, 179 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005001D(void)
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

loc_0005001D: ;
    fp_top() = fp_top() - MEMF(esp + 8); /* fsub dword ptr [esp + 8] */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    edx = MEM32(esp + 8);
    MEM32(esi + 0x184) = eax;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(esi + 0x180) = edx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0005004E; /* jp: parity */

loc_00050046: ;
    MEM32(esi + 0x188) = ebx;
    goto loc_0005005C;

loc_0005004E: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    MEMF(esi + 0x188) = (float)fp_top(); fp_pop(); /* fstp */

loc_0005005C: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00050063u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050063: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x42340000);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB200);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0005007Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005007E: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esi + 0x238) = (float)fp_top(); /* fst */
    MEMF(esi + 0x240) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00050099u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050099: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F0CCCCD);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB2BC);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000500B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000500B4: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000500C0u); RECOMP_ABI_CALL(0x0004A860u, sub_0004A860); /* call 0x0004A860 */

loc_000500C0: ;
    PUSH32(esp, 0x000500C5u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000500C5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F7EB852);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB2A8);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000500E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000500E0: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000500ECu); RECOMP_ABI_CALL(0x0004A8C0u, sub_0004A8C0); /* call 0x0004A8C0 */

loc_000500EC: ;
    PUSH32(esp, 0x000500F1u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000500F1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB29C);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00050109u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050109: ;
    SET_LO8(edx, MEM8(esp + 0xC));
    SET_LO8(eax, MEM8(esi + 0x410));
    SET_LO8(edx, LO8(edx) << 4);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 0x10);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x410) = LO8(eax);
    PUSH32(esp, 0x00050128u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00050128: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB1D4);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0005013Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005013F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    SET_LO8(ecx, MEM8(esi + 0x410));
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) << 2);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(esi + 0x410) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00050169; /* jne: not equal / not zero */

loc_0005015F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00050169u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050169: ;
    PUSH32(esp, 0x0005016Eu); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_0005016E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x41F00000);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB28C);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00050189u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050189: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(0x3CB288)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000501AE; /* jp: parity */

loc_0005019C: ;
    PUSH32(esp, 0x000501A1u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501A1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000501A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501A9: ;
    MEM32(esi + 0x74) = ebx;
    goto loc_000501C9;

loc_000501AE: ;
    PUSH32(esp, 0x000501B3u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501B3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000501BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501BC: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB284); /* fmul dword ptr [0x3cb284] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */

loc_000501C9: ;
    MEM8(esi + 0x411) = MEM8(esi + 0x411) | 8;
    MEM32(esi + 0x170) = ebx;
    MEM32(esi + 0x16C) = ebx;
    PUSH32(esp, 0x000501E1u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000501E1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB274);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000501F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000501F9: ;
    PUSH32(esp, 0x000501FEu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000501FE: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0005020Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005020D: ;
    edx = MEM32(esi + 0x154);
    eax = MEM32(esi + 0x15C);
    ecx = MEM32(esi + 0x174);
    MEM32(esi + 0x150) = edx;
    SET_LO8(edx, MEM8(esi + 0x412));
    MEM32(esi + 0x254) = eax;
    MEM16(esi + 0x394) = LO16(ebx);
    MEM32(esi + 0x390) = ebx;
    MEM32(esi + 0x17C) = ecx;
    MEM32(esi + 0x3A8) = ebx;
    SET_LO8(ebx, MEM8(esi + 0x411));
    eax = esp + 0x18;
    SET_LO8(edx, LO8(edx) & 0xFC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEM8(esi + 0x412) = LO8(edx);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    SET_LO8(ebx, LO8(ebx) & 0x3F);
    ecx = esi;
    MEM8(esi + 0x411) = LO8(ebx);
    MEM32(esi + 0x294) = 0xC61C4000u;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x28) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x000502ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000502AD: ;
    ecx = esi;
    PUSH32(esp, 0x000502B4u); RECOMP_ABI_CALL(0x000516C0u, sub_000516C0); /* call 0x000516C0 */

loc_000502B4: ;
    MEM8(esi + 0x410) = MEM8(esi + 0x410) | 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000502D0
 * Original: 0x000502D0 - 0x000502ED (29 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000502D0(void)
{

loc_000502D0: ;
    SET_LO8(eax, MEM8(ecx + 0x412));
    SET_LO8(eax, LO8(eax) ^ MEM8(esp + 4));
    SET_LO8(edx, MEM8(ecx + 0x412));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(ecx + 0x412) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000502F0
 * Original: 0x000502F0 - 0x000502F8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000502F0(void)
{

loc_000502F0: ;
    MEM8(ecx + 0x410) = MEM8(ecx + 0x410) | 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00050300
 * Original: 0x00050300 - 0x0005030C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050300(void)
{

loc_00050300: ;
    SET_LO8(eax, MEM8(ecx + 0x410));
    SET_LO8(eax, LO8(eax) >> 3);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00050310
 * Original: 0x00050310 - 0x0005031C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050310(void)
{

loc_00050310: ;
    SET_LO8(eax, MEM8(ecx + 0x410));
    SET_LO8(eax, LO8(eax) >> 4);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00050320
 * Original: 0x00050320 - 0x0005032D (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050320(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00050320: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0x154); /* fsub dword ptr [ecx + 0x154] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00050330
 * Original: 0x00050330 - 0x00050337 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050330(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00050330: ;
    fp_push(MEMF(ecx + 0x174)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00050340
 * Original: 0x00050340 - 0x0005034D (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050340(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00050340: ;
    fp_push(MEMF(ecx + 0x238)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB460); /* fmul dword ptr [0x3cb460] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00050350
 * Original: 0x00050350 - 0x00050357 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050350(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00050350: ;
    fp_push(MEMF(ecx + 0x180)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00050360
 * Original: 0x00050360 - 0x00050367 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050360(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00050360: ;
    fp_push(MEMF(ecx + 0x184)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00050370
 * Original: 0x00050370 - 0x00050378 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050370(void)
{

loc_00050370: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x394);
    esp += 4; return; /* ret */

}

/**
 * sub_00050380
 * Original: 0x00050380 - 0x000503AD (45 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00050380(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00050380: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = fp_top() + MEMF(0x3CB1B0); /* fadd dword ptr [0x3cb1b0] */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x144) = eax;
    PUSH32(esp, 0x000503A0u); RECOMP_ABI_CALL(0x001206E0u, sub_001206E0); /* call 0x001206E0 */

loc_000503A0: ;
    MEMF(esi + 0x144) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000503B0
 * Original: 0x000503B0 - 0x000503CA (26 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000503B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000503B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000503B8u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000503B8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000503C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000503C2: ;
    MEMF(esi + 0x140) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000503D0
 * Original: 0x000503D0 - 0x000503DA (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000503D0(void)
{

loc_000503D0: ;
    PUSH32(esp, ecx);
    ecx = ecx + 4;
    PUSH32(esp, 0x000503D9u); RECOMP_ABI_CALL(0x00052510u, sub_00052510); /* call 0x00052510 */

loc_000503D9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000503E0
 * Original: 0x000503E0 - 0x00050401 (33 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000503E0(void)
{

loc_000503E0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x88) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x8C) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x90) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00050410
 * Original: 0x00050410 - 0x00050417 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050410(void)
{

loc_00050410: ;
    eax = ecx + 0xEC;
    esp += 4; return; /* ret */

}

/**
 * sub_00050420
 * Original: 0x00050420 - 0x00050427 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050420(void)
{

loc_00050420: ;
    eax = ecx + 0x104;
    esp += 4; return; /* ret */

}

/**
 * sub_00050430
 * Original: 0x00050430 - 0x00050438 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050430(void)
{

loc_00050430: ;
    MEM8(ecx + 0x410) = MEM8(ecx + 0x410) & 0xFD;
    esp += 4; return; /* ret */

}

/**
 * sub_00050440
 * Original: 0x00050440 - 0x0005044C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050440(void)
{

loc_00050440: ;
    SET_LO8(eax, MEM8(ecx + 0x410));
    SET_LO8(eax, LO8(eax) >> 2);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00050450
 * Original: 0x00050450 - 0x0005047C (44 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00050450: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0005046F; /* jl: less (signed <) */

loc_00050458: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0005046F; /* jg: greater (signed >) */

loc_0005045D: ;
    _fa = (uint32_t)(MEM32(ecx + 0x84)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x84), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00050479; /* je: equal / zero */

loc_00050466: ;
    MEM32(ecx + 0x84) = eax;
    esp += 8; return; /* ret 4 */

loc_0005046F: ;
    MEM32(ecx + 0x84) = 0;

loc_00050479: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00050480
 * Original: 0x00050480 - 0x0005048E (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00050480: ;
    edx = MEM32(ecx + 0x2F4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00050490
 * Original: 0x00050490 - 0x0005049B (11 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050490(void)
{

loc_00050490: ;
    SET_LO8(eax, MEM8(ecx + 0x410));
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000504A0
 * Original: 0x000504A0 - 0x000504C5 (37 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000504A0(void)
{

loc_000504A0: ;
    PUSH32(esp, esi);
    esi = ecx + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000504ACu); RECOMP_ABI_CALL(0x00051DA0u, sub_00051DA0); /* call 0x00051DA0 */

loc_000504AC: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    PUSH32(esp, 0x000504C1u); RECOMP_ABI_CALL(0x000524B0u, sub_000524B0); /* call 0x000524B0 */

loc_000504C1: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000504D0
 * Original: 0x000504D0 - 0x000504D8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000504D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000504D0: ;
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_00051F10(); return; /* tail jmp 0x00051F10 */

}

/**
 * sub_000504E0
 * Original: 0x000504E0 - 0x0005050B (43 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000504E0(void)
{

loc_000504E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000504EFu); RECOMP_ABI_CALL(0x00051DA0u, sub_00051DA0); /* call 0x00051DA0 */

loc_000504EF: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00050506u); RECOMP_ABI_CALL(0x000528D0u, sub_000528D0); /* call 0x000528D0 */

loc_00050506: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00050510
 * Original: 0x00050510 - 0x0005053A (42 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050510(void)
{

loc_00050510: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0005051Fu); RECOMP_ABI_CALL(0x00051DA0u, sub_00051DA0); /* call 0x00051DA0 */

loc_0005051F: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00050535u); RECOMP_ABI_CALL(0x00052CA0u, sub_00052CA0); /* call 0x00052CA0 */

loc_00050535: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00050540
 * Original: 0x00050540 - 0x0005056A (42 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050540(void)
{

loc_00050540: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0005054Fu); RECOMP_ABI_CALL(0x00051DA0u, sub_00051DA0); /* call 0x00051DA0 */

loc_0005054F: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00050565u); RECOMP_ABI_CALL(0x00052CF0u, sub_00052CF0); /* call 0x00052CF0 */

loc_00050565: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00050570
 * Original: 0x00050570 - 0x0005057E (14 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050570(void)
{

loc_00050570: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = ecx + 4;
    PUSH32(esp, 0x0005057Du); RECOMP_ABI_CALL(0x00053CE0u, sub_00053CE0); /* call 0x00053CE0 */

loc_0005057D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00050580
 * Original: 0x00050580 - 0x0005058D (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050580(void)
{

loc_00050580: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x3D0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00050590
 * Original: 0x00050590 - 0x0005059D (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050590(void)
{

loc_00050590: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x3D4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000505A0
 * Original: 0x000505A0 - 0x000505AD (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000505A0(void)
{

loc_000505A0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x3BC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000505B0
 * Original: 0x000505B0 - 0x000505BD (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000505B0(void)
{

loc_000505B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x3C0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000505C0
 * Original: 0x000505C0 - 0x000505CD (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000505C0(void)
{

loc_000505C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x3D8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000505D0
 * Original: 0x000505D0 - 0x000505DD (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000505D0(void)
{

loc_000505D0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x3DC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000505E0
 * Original: 0x000505E0 - 0x00050601 (33 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000505E0(void)
{

loc_000505E0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x134) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x138) = edx;
    MEM32(ecx + 0x13C) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00050610
 * Original: 0x00050610 - 0x00050631 (33 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050610(void)
{

loc_00050610: ;
    edx = MEM32(ecx + 0x27C);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x280);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x284);
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00050640
 * Original: 0x00050640 - 0x0005077B (315 bytes, 103 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00050640(void)
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

loc_00050640: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0005064Bu); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_0005064B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00050662u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050662: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00050681; /* jge: greater or equal (signed >=) */

loc_00050667: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ecx;
    goto loc_0005069B;

loc_00050681: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() + MEMF(0x3CB1B0); /* fadd dword ptr [0x3cb1b0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00050694u); RECOMP_ABI_CALL(0x001206E0u, sub_001206E0); /* call 0x001206E0 */

loc_00050694: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;

loc_0005069B: ;
    fp_push(MEMF(esi + 0x90)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    fp_push(MEMF(esi + 0x8C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0xC); /* fsub dword ptr [esp + 0xc] */
    fp_push(MEMF(esi + 0x88)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 8); /* fsub dword ptr [esp + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CB464)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cb464] */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (TEST_NZ(_fa, _fb)) goto loc_00050742; /* jne: not equal / not zero */

loc_000506DC: ;
    edx = MEM32(esi + 0x17C);
    eax = MEM32(esp + 4);
    ecx = MEM32(esi + 0x238);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00050700u); RECOMP_ABI_CALL(0x0004BF90u, sub_0004BF90); /* call 0x0004BF90 */

loc_00050700: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 1);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 8) = ecx;
    ecx = esi;
    MEM32(eax + 4) = edx;
    PUSH32(esp, 0x00050740u); RECOMP_ABI_CALL(0x0004EFC0u, sub_0004EFC0); /* call 0x0004EFC0 */

loc_00050740: ;
    goto loc_00050762;

loc_00050742: ;
    PUSH32(esp, 0x00050747u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_00050747: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0005074Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005074E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00050762; /* jge: greater or equal (signed >=) */

loc_00050753: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F400000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xB8); PUSH32(esp, 0x00050762u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050762: ;
    PUSH32(esp, 0x00050767u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_00050767: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0005076Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005076E: ;
    MEMF(esi + 0x168) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00050780
 * Original: 0x00050780 - 0x00050878 (248 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050780(void)
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

loc_00050780: ;
    esp = esp - 0x18;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(esi + 0x128) = eax;
    MEM32(esi + 0x12C) = ecx;
    MEM32(esi + 0x130) = edx;
    fp_push(MEMF(esi + 0x134)); /* fld float */
    eax = MEM32(esi + 0x138);
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_push(MEMF(esi + 0x13C)); /* fld float */
    edx = MEM32(esi + 0x12C);
    fp_push(MEMF(0x44E550)); /* fld float */
    ecx = MEM32(esi + 0x128);
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x130);
    MEM32(esp + 0xC) = eax;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = ecx;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0005082B; /* jp: parity */

loc_00050813: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;

loc_0005082B: ;
    esp = esp - 0xC;
    eax = esp;
    MEM32(esi + 0x3F4) = 0x3F800000;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 8) = edx;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00050856u); RECOMP_ABI_CALL(0x0004EE50u, sub_0004EE50); /* call 0x0004EE50 */

loc_00050856: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00050867u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050867: ;
    MEM32(esi + 0x3F4) = 0x3F400000;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00050800
 * Original: 0x00050800 - 0x00050878 (120 bytes, 35 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050800(void)
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

loc_00050800: ;
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0005082B; /* jp: parity */

loc_00050813: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;

loc_0005082B: ;
    esp = esp - 0xC;
    eax = esp;
    MEM32(esi + 0x3F4) = 0x3F800000;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 8) = edx;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00050856u); RECOMP_ABI_CALL(0x0004EE50u, sub_0004EE50); /* call 0x0004EE50 */

loc_00050856: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00050867u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050867: ;
    MEM32(esi + 0x3F4) = 0x3F400000;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00050880
 * Original: 0x00050880 - 0x00050BD9 (857 bytes, 251 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050880(void)
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

loc_00050880: ;
    esp = esp - 0x60;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x234);
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x00050895u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_00050895: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000508ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000508AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000508D6; /* jle: less or equal (signed <=) */

loc_000508B0: ;
    edx = MEM32(esi);
    eax = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x000508BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000508BC: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3CB1B0); /* fadd dword ptr [0x3cb1b0] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000508CFu); RECOMP_ABI_CALL(0x001206E0u, sub_001206E0); /* call 0x001206E0 */

loc_000508CF: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;

loc_000508D6: ;
    PUSH32(esp, 0x000508DBu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000508DB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x000508E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000508E5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000508F3; /* je: equal / zero */

loc_000508E9: ;
    SET_LO8(eax, MEM8(esi + 0x411));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_000508FA; /* jns: not sign (positive) */

loc_000508F3: ;
    eax = MEM32(esp + 4);
    MEM32(esi + 0x74) = eax;

loc_000508FA: ;
    ecx = esi;
    PUSH32(esp, 0x00050901u); RECOMP_ABI_CALL(0x0004A430u, sub_0004A430); /* call 0x0004A430 */

loc_00050901: ;
    _fa = (uint32_t)(MEM8(esi + 0x412)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x412), 1 (8-bit) */
    ecx = MEM32(esi + 0x17C);
    MEM32(esp + 8) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00050920; /* je: equal / zero */

loc_00050914: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB1EC); /* fmul dword ptr [0x3cb1ec] */
    goto loc_00050939;

loc_00050920: ;
    eax = MEM32(esi + 0x84);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0005092F; /* je: equal / zero */

loc_00050929: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00050914; /* je: equal / zero */

loc_0005092C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0005093D; /* jne: not equal / not zero */

loc_0005092F: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB1F0); /* fmul dword ptr [0x3cb1f0] */

loc_00050939: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0005093D: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    ecx = MEM32(esi + 0x23C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0005095Fu); RECOMP_ABI_CALL(0x0004BF90u, sub_0004BF90); /* call 0x0004BF90 */

loc_0005095F: ;
    fp_push(MEMF(esi + 0xF4)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x10C); /* fsub dword ptr [esi + 0x10c] */
    fp_push(MEMF(esi + 0xF0)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x108); /* fsub dword ptr [esi + 0x108] */
    fp_push(MEMF(esi + 0xEC)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x104); /* fsub dword ptr [esi + 0x104] */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x10C); /* fsub dword ptr [esi + 0x10c] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x108); /* fsub dword ptr [esi + 0x108] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x104); /* fsub dword ptr [esi + 0x104] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x104); /* fadd dword ptr [esi + 0x104] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x1C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(esi + 0x108); /* fadd dword ptr [esi + 0x108] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x20);
    fp_top() = fp_top() + MEMF(esi + 0x10C); /* fadd dword ptr [esi + 0x10c] */
    MEM32(esi + 0xEC) = ecx;
    MEM32(esi + 0xF0) = edx;
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    ecx = esp + 0x1C;
    MEMF(esi + 0xF4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x00050A69u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050A69: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x10C); /* fsub dword ptr [esi + 0x10c] */
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x108); /* fsub dword ptr [esi + 0x108] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x104); /* fsub dword ptr [esi + 0x104] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x10C)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0xF4); /* fsub dword ptr [esi + 0xf4] */
    fp_push(MEMF(esi + 0x108)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0xF0); /* fsub dword ptr [esi + 0xf0] */
    fp_push(MEMF(esi + 0x104)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0xEC); /* fsub dword ptr [esi + 0xec] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00050AD2u); RECOMP_ABI_CALL(0x00120950u, sub_00120950); /* call 0x00120950 */

loc_00050AD2: ;
    fp_push(MEMF(esp + 0x60)); /* fld float */
    ecx = MEM32(esp + 0x5C);
    fp_top() = fp_top() * MEMF(esp + 0x60); /* fmul dword ptr [esp + 0x60] */
    eax = MEM32(esp + 0xC);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    edx = ecx;
    PUSH32(esp, ecx);
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(esi + 0x230) = ecx;
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    MEM32(esp + 0x1C) = edx;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x40); /* fmul dword ptr [esp + 0x40] */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x3C); /* fmul dword ptr [esp + 0x3c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x38); /* fmul dword ptr [esp + 0x38] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00050B3Bu); RECOMP_ABI_CALL(0x001207A0u, sub_001207A0); /* call 0x001207A0 */

loc_00050B3B: ;
    fp_top() = fp_top() - MEMF(esp + 0x1C); /* fsub dword ptr [esp + 0x1c] */
    esp = esp + 0x10;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CB468)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cb468] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00050B94; /* je: equal / zero */

loc_00050B57: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CA834)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3ca834] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00050B94; /* je: equal / zero */

loc_00050B6A: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00050B8Fu); RECOMP_ABI_CALL(0x0004B7B0u, sub_0004B7B0); /* call 0x0004B7B0 */

loc_00050B8F: ;
    POP32(esp, esi);
    esp = esp + 0x60;
    esp += 4; return; /* ret */

loc_00050B94: ;
    edx = MEM32(esp + 0x34);
    PUSH32(esp, 1);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = edx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0x50);
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x68);
    MEM32(eax + 8) = ecx;
    ecx = esi;
    MEM32(eax + 4) = edx;
    PUSH32(esp, 0x00050BD4u); RECOMP_ABI_CALL(0x0004EFC0u, sub_0004EFC0); /* call 0x0004EFC0 */

loc_00050BD4: ;
    POP32(esp, esi);
    esp = esp + 0x60;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00050A09
 * Original: 0x00050A09 - 0x00050BD9 (464 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050A09(void)
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

loc_00050A09: ;
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x104); /* fadd dword ptr [esi + 0x104] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x1C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(esi + 0x108); /* fadd dword ptr [esi + 0x108] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x20);
    fp_top() = fp_top() + MEMF(esi + 0x10C); /* fadd dword ptr [esi + 0x10c] */
    MEM32(esi + 0xEC) = ecx;
    MEM32(esi + 0xF0) = edx;
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    ecx = esp + 0x1C;
    MEMF(esi + 0xF4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x00050A69u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050A69: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x10C); /* fsub dword ptr [esi + 0x10c] */
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x108); /* fsub dword ptr [esi + 0x108] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x104); /* fsub dword ptr [esi + 0x104] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x10C)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0xF4); /* fsub dword ptr [esi + 0xf4] */
    fp_push(MEMF(esi + 0x108)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0xF0); /* fsub dword ptr [esi + 0xf0] */
    fp_push(MEMF(esi + 0x104)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0xEC); /* fsub dword ptr [esi + 0xec] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00050AD2u); RECOMP_ABI_CALL(0x00120950u, sub_00120950); /* call 0x00120950 */

loc_00050AD2: ;
    fp_push(MEMF(esp + 0x60)); /* fld float */
    ecx = MEM32(esp + 0x5C);
    fp_top() = fp_top() * MEMF(esp + 0x60); /* fmul dword ptr [esp + 0x60] */
    eax = MEM32(esp + 0xC);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    edx = ecx;
    PUSH32(esp, ecx);
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(esi + 0x230) = ecx;
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    MEM32(esp + 0x1C) = edx;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x40); /* fmul dword ptr [esp + 0x40] */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x3C); /* fmul dword ptr [esp + 0x3c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x38); /* fmul dword ptr [esp + 0x38] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00050B3Bu); RECOMP_ABI_CALL(0x001207A0u, sub_001207A0); /* call 0x001207A0 */

loc_00050B3B: ;
    fp_top() = fp_top() - MEMF(esp + 0x1C); /* fsub dword ptr [esp + 0x1c] */
    esp = esp + 0x10;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CB468)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cb468] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00050B94; /* je: equal / zero */

loc_00050B57: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CA834)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3ca834] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00050B94; /* je: equal / zero */

loc_00050B6A: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00050B8Fu); RECOMP_ABI_CALL(0x0004B7B0u, sub_0004B7B0); /* call 0x0004B7B0 */

loc_00050B8F: ;
    POP32(esp, esi);
    esp = esp + 0x60;
    esp += 4; return; /* ret */

loc_00050B94: ;
    edx = MEM32(esp + 0x34);
    PUSH32(esp, 1);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = edx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0x50);
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x68);
    MEM32(eax + 8) = ecx;
    ecx = esi;
    MEM32(eax + 4) = edx;
    PUSH32(esp, 0x00050BD4u); RECOMP_ABI_CALL(0x0004EFC0u, sub_0004EFC0); /* call 0x0004EFC0 */

loc_00050BD4: ;
    POP32(esp, esi);
    esp = esp + 0x60;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00050BE0
 * Original: 0x00050BE0 - 0x000510F4 (1300 bytes, 378 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050BE0(void)
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

loc_00050BE0: ;
    esp = esp - 0x38;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM8(esp + 0xF) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00050BF2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050BF2: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00050BF9u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_00050BF9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00050C00u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050C00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00050C23; /* jle: less or equal (signed <=) */

loc_00050C05: ;
    PUSH32(esp, 0x00050C0Au); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_00050C0A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00050C11u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050C11: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00050C23; /* jne: not equal / not zero */

loc_00050C15: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB46C); /* fmul dword ptr [0x3cb46c] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */

loc_00050C23: ;
    _fa = (uint32_t)(MEM8(esi + 0x411)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x411), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00050C33; /* je: equal / zero */

loc_00050C2C: ;
    ecx = esi;
    PUSH32(esp, 0x00050C33u); RECOMP_ABI_CALL(0x0004C010u, sub_0004C010); /* call 0x0004C010 */

loc_00050C33: ;
    PUSH32(esp, 0x00050C38u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_00050C38: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00050C3Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050C3F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00050C72; /* je: equal / zero */

loc_00050C43: ;
    ecx = MEM32(esi + 0xE0);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0xE4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 0xE8);
    edx = esi + 0xF8;
    MEM32(eax + 8) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00050C70u); RECOMP_ABI_CALL(0x0004EE50u, sub_0004EE50); /* call 0x0004EE50 */

loc_00050C70: ;
    goto loc_00050C7C;

loc_00050C72: ;
    MEM32(esi + 0x3F4) = 0;

loc_00050C7C: ;
    eax = MEM32(0x4858AC);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00050C8Eu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_00050C8E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00050CE8; /* je: equal / zero */

loc_00050C94: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00050C9Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050C9A: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00050CE8; /* je: equal / zero */

loc_00050CB8: ;
    ecx = MEM32(esi + 0xEC);
    PUSH32(esp, edi);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0xF0);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 0xF4);
    edx = esi + 0xF8;
    MEM32(eax + 8) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00050CE6u); RECOMP_ABI_CALL(0x0004FC50u, sub_0004FC50); /* call 0x0004FC50 */

loc_00050CE6: ;
    goto loc_00050CF2;

loc_00050CE8: ;
    MEM32(esi + 0x3B4) = 0;

loc_00050CF2: ;
    ecx = MEM32(esi + 0xE0);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0xE4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 0xE8);
    MEM32(eax + 8) = ecx;
    ecx = esi;
    PUSH32(esp, 0x00050D18u); RECOMP_ABI_CALL(0x00051970u, sub_00051970); /* call 0x00051970 */

loc_00050D18: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00050D22u); RECOMP_ABI_CALL(0x0004CF00u, sub_0004CF00); /* call 0x0004CF00 */

loc_00050D22: ;
    PUSH32(esp, 0x00050D27u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_00050D27: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00050D31u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050D31: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00050D3F; /* je: equal / zero */

loc_00050D35: ;
    SET_LO8(eax, MEM8(esi + 0x411));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_00050D77; /* jns: not sign (positive) */

loc_00050D3F: ;
    _fa = (uint32_t)(MEM8(esi + 0x411)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x411), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00050D77; /* jne: not equal / not zero */

loc_00050D48: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C83B0); /* fmul dword ptr [0x3c83b0] */
    fp_top() = MEMF(esi + 0x74) - fp_top(); /* fsubr dword ptr [esi + 0x74] */
    MEMF(esp + 0x48) = (float)fp_top(); /* fst */
    eax = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00050D66u); RECOMP_ABI_CALL(0x001206E0u, sub_001206E0); /* call 0x001206E0 */

loc_00050D66: ;
    MEMF(esi + 0x74) = (float)fp_top(); /* fst */
    MEMF(esi + 0x230) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    goto loc_00050E91;

loc_00050D77: ;
    PUSH32(esp, 0x00050D7Cu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00050D7C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00050D86u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050D86: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x248)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x248] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00050E91; /* jnp: not parity */

loc_00050D97: ;
    fp_push(MEMF(esi + 0xDC)); /* fld float */
    fp_push(MEMF(esi + 0xD8)); /* fld float */
    fp_push(MEMF(esi + 0xD4)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x108)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esi + 0x104)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esi + 0xE4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xE0)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CB254)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3cb254] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00050E16; /* jnp: not parity */

loc_00050E04: ;
    fp_push(MEMF(esi + 0x184)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */

loc_00050E16: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esi + 0x230) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8380); /* fmul dword ptr [0x3c8380] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); /* fst */
    eax = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    MEMF(esi + 0x230) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00050E48u); RECOMP_ABI_CALL(0x001206E0u, sub_001206E0); /* call 0x001206E0 */

loc_00050E48: ;
    MEMF(esi + 0x230) = (float)fp_top(); /* fst */
    SET_LO8(eax, MEM8(esi + 0x411));
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00050E68; /* je: equal / zero */

loc_00050E5B: ;
    SET_LO8(eax, LO8(eax) & 0xFE);
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(esi + 0x411) = LO8(eax);
    goto loc_00050E6A;

loc_00050E68: ;
    fp_pop(); /* fstp st(0) */

loc_00050E6A: ;
    PUSH32(esp, 0x00050E6Fu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00050E6F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00050E79u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050E79: ;
    fp_top() = fp_top() - MEMF(0x3C7084); /* fsub dword ptr [0x3c7084] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x3AC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x3ac] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00050E91; /* jp: parity */

loc_00050E8C: ;
    MEM8(esp + 0xF) = 0;

loc_00050E91: ;
    eax = MEM32(esi + 0x234);
    edi = esi + 0x230;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00050EA6u); RECOMP_ABI_CALL(0x0004B140u, sub_0004B140); /* call 0x0004B140 */

loc_00050EA6: ;
    fp_push(MEMF(esi + 0x174)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x184)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x184] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00050EC7; /* jne: not equal / not zero */

loc_00050EB9: ;
    ecx = MEM32(esi + 0x184);
    MEM32(esi + 0x174) = ecx;
    goto loc_00050EE6;

loc_00050EC7: ;
    fp_push(MEMF(esi + 0x174)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x180)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x180] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00050EE6; /* jp: parity */

loc_00050EDA: ;
    edx = MEM32(esi + 0x180);
    MEM32(esi + 0x174) = edx;

loc_00050EE6: ;
    eax = MEM32(esi + 0x174);
    ecx = esi;
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, 0x00050EF7u); RECOMP_ABI_CALL(0x0004A430u, sub_0004A430); /* call 0x0004A430 */

loc_00050EF7: ;
    _fa = (uint32_t)(MEM8(esi + 0x412)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x412), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00050F0C; /* je: equal / zero */

loc_00050F00: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB1EC); /* fmul dword ptr [0x3cb1ec] */
    goto loc_00050F25;

loc_00050F0C: ;
    eax = MEM32(esi + 0x84);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00050F1B; /* je: equal / zero */

loc_00050F15: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00050F00; /* je: equal / zero */

loc_00050F18: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00050F29; /* jne: not equal / not zero */

loc_00050F1B: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB1F0); /* fmul dword ptr [0x3cb1f0] */

loc_00050F25: ;
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */

loc_00050F29: ;
    ecx = MEM32(esi + 0x244);
    MEM32(esp + 0x10) = ecx;
    SET_LO8(ecx, MEM8(esi + 0x411));
    SET_LO8(ecx, LO8(ecx) | 0x20);
    edx = esp + 0x48;
    MEM8(esi + 0x411) = LO8(ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00050F4Eu); RECOMP_ABI_CALL(0x0004A580u, sub_0004A580); /* call 0x0004A580 */

loc_00050F4E: ;
    eax = MEM32(edi);
    MEM32(esi + 0x234) = eax;
    PUSH32(esp, 0x00050F5Bu); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_00050F5B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00050F62u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00050F62: ;
    fp_top() = fp_top() - MEMF(0x3C7084); /* fsub dword ptr [0x3c7084] */
    ebp = esi + 0x240;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x170)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x170] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00050F84; /* jp: parity */

loc_00050F7B: ;
    eax = MEM32(esp + 0x10);
    MEM32(ebp) = eax;
    goto loc_00050F96;

loc_00050F84: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3D0EFA2E);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00050F96u); RECOMP_ABI_CALL(0x0004A500u, sub_0004A500); /* call 0x0004A500 */

loc_00050F96: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00050FA2u); RECOMP_ABI_CALL(0x0004D280u, sub_0004D280); /* call 0x0004D280 */

loc_00050FA2: ;
    eax = MEM32(esi + 0x178);
    ecx = MEM32(esi + 0x234);
    edx = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    edi = esi + 0xF8;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00050FC7u); RECOMP_ABI_CALL(0x0004BF90u, sub_0004BF90); /* call 0x0004BF90 */

loc_00050FC7: ;
    ecx = esi;
    PUSH32(esp, 0x00050FCEu); RECOMP_ABI_CALL(0x0004C1B0u, sub_0004C1B0); /* call 0x0004C1B0 */

loc_00050FCE: ;
    ecx = MEM32(esi + 0xEC);
    PUSH32(esp, 0x3F400000);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0xF0);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 0xF4);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edi);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = edx;
    ecx = MEM32(edi + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edi + 8);
    ecx = esi;
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x0005100Eu); RECOMP_ABI_CALL(0x0004D4E0u, sub_0004D4E0); /* call 0x0004D4E0 */

loc_0005100E: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esi + 0x3A8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00051072; /* jnp: not parity */

loc_00051023: ;
    fp_push(MEMF(esi + 0x294)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CB264)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cb264] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00051072; /* jne: not equal / not zero */

loc_00051036: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00051045u); RECOMP_ABI_CALL(0x0004D2E0u, sub_0004D2E0); /* call 0x0004D2E0 */

loc_00051045: ;
    fp_push(MEMF(esi + 0x294)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x3A8); /* fsub dword ptr [esi + 0x3a8] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00051070; /* jne: not equal / not zero */

loc_0005105E: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    fp_top() = MEMF(esi + 0x100) - fp_top(); /* fsubr dword ptr [esi + 0x100] */
    MEMF(esi + 0x100) = (float)fp_top(); fp_pop(); /* fstp */

loc_00051070: ;
    fp_pop(); /* fstp st(0) */

loc_00051072: ;
    fp_push(MEMF(edi)); /* fld float */
    ecx = esp + 0x14;
    fp_top() = fp_top() - MEMF(esp + 0x2C); /* fsub dword ptr [esp + 0x2c] */
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x38); /* fsub dword ptr [esp + 0x38] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x3C); /* fsub dword ptr [esp + 0x3c] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000510A1u); RECOMP_ABI_CALL(0x00120950u, sub_00120950); /* call 0x00120950 */

loc_000510A1: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    eax = MEM32(esp + 0x48);
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    MEM32(esi + 0x234) = eax;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    SET_LO8(eax, MEM8(esp + 0x17));
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esi + 0x178) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_Z(_fa, _fb)) goto loc_000510EB; /* je: equal / zero */

loc_000510E3: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000510EBu); RECOMP_ABI_CALL(0x0004F3E0u, sub_0004F3E0); /* call 0x0004F3E0 */

loc_000510EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x38;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00051100
 * Original: 0x00051100 - 0x0005115C (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00051100: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x48D53C));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E6AE);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_00051149; /* jne: not equal / not zero */

loc_00051124: ;
    MEM32(0x48D53C) = MEM32(0x48D53C) | eax;
    ecx = 0x48D128;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0005113Cu); RECOMP_ABI_CALL(0x0004FE80u, sub_0004FE80); /* call 0x0004FE80 */

loc_0005113C: ;
    PUSH32(esp, 0x359E40);
    PUSH32(esp, 0x00051146u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00051146: ;
    esp = esp + 4;

loc_00051149: ;
    ecx = MEM32(esp);
    eax = 0x48D128;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00051160
 * Original: 0x00051160 - 0x0005147F (799 bytes, 213 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051160(void)
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

loc_00051160: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00051476; /* je: equal / zero */

loc_00051174: ;
    fp_push(MEMF(eax + 0x34)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() + MEMF(0x3CB1B0); /* fadd dword ptr [0x3cb1b0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00051186u); RECOMP_ABI_CALL(0x001206E0u, sub_001206E0); /* call 0x001206E0 */

loc_00051186: ;
    esp = esp + 4;
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00051192u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_00051192: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000511A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000511A9: ;
    fp_push(MEMF(esi + 0x238)); /* fld float */
    edx = MEM32(esp + 0x6C);
    MEMF(esi + 0x23C) = (float)fp_top(); /* fst */
    ecx = MEM32(esp + 0x10);
    MEMF(esi + 0x240) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x230) = edx;
    eax = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esi + 0x234) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0xE4) = edx;
    MEM32(esi + 0xE8) = eax;
    MEM32(esi + 0xE0) = ecx;
    MEM32(esi + 0xEC) = ecx;
    edx = MEM32(esi + 0xE4);
    MEM32(esi + 0xF0) = edx;
    eax = MEM32(esi + 0xE8);
    MEM32(esi + 0xF4) = eax;
    PUSH32(esp, 0x0005120Eu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0005120E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00051218u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00051218: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00051226; /* je: equal / zero */

loc_0005121C: ;
    SET_LO8(eax, MEM8(esi + 0x411));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_0005122F; /* jns: not sign (positive) */

loc_00051226: ;
    eax = MEM32(esi + 0x234);
    MEM32(esi + 0x74) = eax;

loc_0005122F: ;
    ecx = MEM32(esp + 0x10);
    esp = esp - 0xC;
    eax = esp;
    MEM32(esi + 0x294) = 0xC61C4000u;
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 8) = ecx;
    ecx = esi;
    PUSH32(esp, 0x00051259u); RECOMP_ABI_CALL(0x00051970u, sub_00051970); /* call 0x00051970 */

loc_00051259: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000513B9; /* je: equal / zero */

loc_00051261: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0005126Bu); RECOMP_ABI_CALL(0x0004CF00u, sub_0004CF00); /* call 0x0004CF00 */

loc_0005126B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000513B9; /* je: equal / zero */

loc_00051273: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edi = esi + 0x354;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00051286u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00051286: ;
    ecx = MEM32(esi + 0x178);
    edx = MEM32(esi + 0x234);
    MEM32(esi + 0x174) = ecx;
    MEM32(esi + 0x230) = edx;
    MEM32(esi + 0x344) = 0x3F800000;
    eax = MEM32(edi);
    MEM32(esi + 0xF8) = eax;
    ecx = MEM32(edi + 4);
    MEM32(esi + 0xFC) = ecx;
    edx = MEM32(edi + 8);
    MEM32(esi + 0x100) = edx;
    MEM32(esi + 0x11C) = eax;
    ecx = MEM32(esi + 0xFC);
    MEM32(esi + 0x120) = ecx;
    edx = MEM32(esi + 0x100);
    MEM32(esi + 0x124) = edx;
    MEM32(esi + 0x110) = eax;
    ecx = MEM32(esi + 0x120);
    MEM32(esi + 0x114) = ecx;
    edx = MEM32(esi + 0x124);
    MEM32(esi + 0x118) = edx;
    MEM32(esi + 0x104) = eax;
    ecx = MEM32(esi + 0x114);
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x108) = ecx;
    edx = MEM32(esi + 0x118);
    ecx = MEM32(esp + 0x14);
    edi = esi + 0x104;
    MEM32(edi + 8) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0xE4) = ecx;
    MEM32(esi + 0xE8) = edx;
    MEM32(esi + 0xE0) = eax;
    MEM32(esi + 0xEC) = eax;
    ecx = MEM32(esi + 0xE4);
    MEM32(esi + 0xF0) = ecx;
    edx = MEM32(esi + 0xE8);
    MEM32(esi + 0xF4) = edx;
    PUSH32(esp, 0x00051360u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00051360: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0005136Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005136A: ;
    MEMF(esi + 0x148) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x14C) = 0;
    PUSH32(esp, 0x00051389u); RECOMP_ABI_CALL(0x0004D2E0u, sub_0004D2E0); /* call 0x0004D2E0 */

loc_00051389: ;
    ecx = MEM32(eax);
    MEM32(esi + 0x398) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x39C) = edx;
    eax = MEM32(eax + 8);
    ecx = esi;
    MEM32(esi + 0x3A0) = eax;
    PUSH32(esp, 0x000513AAu); RECOMP_ABI_CALL(0x0004A360u, sub_0004A360); /* call 0x0004A360 */

loc_000513AA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005141F; /* je: equal / zero */

loc_000513AE: ;
    ecx = MEM32(esi + 0x234);
    MEM32(esi + 0x74) = ecx;
    goto loc_0005141F;

loc_000513B9: ;
    edx = MEM32(esi + 0x17C);
    eax = MEM32(esi + 0x234);
    ecx = MEM32(esi + 0x238);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000513DFu); RECOMP_ABI_CALL(0x0004BF90u, sub_0004BF90); /* call 0x0004BF90 */

loc_000513DF: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x7C);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(eax + 8) = ecx;
    ecx = esi;
    MEM32(eax + 4) = edx;
    PUSH32(esp, 0x0005141Fu); RECOMP_ABI_CALL(0x0004EFC0u, sub_0004EFC0); /* call 0x0004EFC0 */

loc_0005141F: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x00051428u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00051428: ;
    edx = MEM32(esi);
    eax = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC4); PUSH32(esp, 0x00051437u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00051437: ;
    PUSH32(esp, 0x0005143Cu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0005143C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00051443u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00051443: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    edx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0005144Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005144F: ;
    PUSH32(esp, 0x00051454u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_00051454: ;
    esi = eax;
    PUSH32(esp, 0x0005145Bu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0005145B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00051462u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00051462: ;
    edi = MEM32(eax);
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0005146Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005146D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(ebx + 0x40); PUSH32(esp, 0x00051476u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00051476: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x5C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00051480
 * Original: 0x00051480 - 0x000514D9 (89 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051480(void)
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

loc_00051480: ;
    edx = MEM32(esp + 4);
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000514D4; /* jp: parity */

loc_00051490: ;
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000514D4; /* jne: not equal / not zero */

loc_0005149B: ;
    fp_push(MEMF(edx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000514D4; /* jp: parity */

loc_000514A8: ;
    fp_push(MEMF(edx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000514D4; /* jne: not equal / not zero */

loc_000514B5: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000514D4; /* jp: parity */

loc_000514C2: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000514D4; /* jne: not equal / not zero */

loc_000514CF: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_000514D4: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000514E0
 * Original: 0x000514E0 - 0x0005151E (62 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000514E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000514E0: ;
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, 0x000514EAu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000514EA: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005151A; /* je: equal / zero */

loc_000514F0: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000514F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000514F7: ;
    edx = MEM32(0x48D550);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0005151A; /* je: equal / zero */

loc_00051516: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0005151A: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00051520
 * Original: 0x00051520 - 0x000515B3 (147 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051520(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00051520: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = edi;
    ebx = ebx | 0xFFFFFFFFu;
    esi = ecx + 0x36C;
    /* nop */

loc_00051540: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00051585; /* je: equal / zero */

loc_00051545: ;
    ecx = esi;
    PUSH32(esp, 0x0005154Cu); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_0005154C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00051585; /* je: equal / zero */

loc_00051550: ;
    ecx = esi;
    PUSH32(esp, 0x00051557u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_00051557: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00051585; /* je: equal / zero */

loc_0005155B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00051561u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00051561: ;
    edx = MEM32(0x48D550);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00051585; /* je: equal / zero */

loc_0005157F: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00051592;

loc_00051585: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    eax = MEM32(0x498D90);
    MEM32(esi) = eax;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00051592; /* jge: greater or equal (signed >=) */

loc_00051590: ;
    ebx = edi;

loc_00051592: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00051540; /* jl: less (signed <) */

loc_0005159B: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    MEM32(ecx + 0x368) = edx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000515C0
 * Original: 0x000515C0 - 0x0005165F (159 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000515C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000515C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00051622; /* je: equal / zero */

loc_000515CB: ;
    ecx = esp + 8;
    PUSH32(esp, 0x000515D4u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000515D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00051622; /* je: equal / zero */

loc_000515D8: ;
    PUSH32(esp, 0x000515DDu); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000515DD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000515E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000515E4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00051628; /* je: equal / zero */

loc_000515E8: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x000515F6u); RECOMP_ABI_CALL(0x000514E0u, sub_000514E0); /* call 0x000514E0 */

loc_000515F6: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00051628; /* je: equal / zero */

loc_000515FD: ;
    SET_LO8(ecx, MEM8(eax + 0x25C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00051628; /* je: equal / zero */

loc_00051607: ;
    edx = MEM32(eax + 0x20);
    MEM32(esi + 0x128) = edx;
    ecx = MEM32(eax + 0x24);
    MEM32(esi + 0x12C) = ecx;
    edx = MEM32(eax + 0x28);
    MEM32(esi + 0x130) = edx;

loc_00051622: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00051628: ;
    ecx = esi;
    PUSH32(esp, 0x0005162Fu); RECOMP_ABI_CALL(0x00051520u, sub_00051520); /* call 0x00051520 */

loc_0005162F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00051622; /* jl: less (signed <) */

loc_00051633: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + eax * 4 + 0x36C) = ecx;
    ecx = MEM32(esi + 0x368);
    SET_LO8(eax, MEM8(esi + 0x410));
    SET_LO8(eax, LO8(eax) & 0x7F);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x410) = LO8(eax);
    MEM32(esi + 0x368) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00051660
 * Original: 0x00051660 - 0x000516BC (92 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00051660: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00051678; /* je: equal / zero */

loc_0005166B: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00051674u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_00051674: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005167E; /* jne: not equal / not zero */

loc_00051678: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0005167E: ;
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    ecx = esi + 0x36C;
    /* nop */

loc_00051690: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000516A3; /* je: equal / zero */

loc_00051694: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00051690; /* jl: less (signed <) */

loc_0005169D: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000516A3: ;
    ecx = MEM32(0x498D90);
    MEM32(esi + eax * 4 + 0x36C) = ecx;
    MEM32(esi + 0x368) = MEM32(esi + 0x368) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x368)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000516C0
 * Original: 0x000516C0 - 0x0005174F (143 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000516C0(void)
{

loc_000516C0: ;
    eax = 0; /* xor self */
    MEM32(ecx + 0x368) = eax;
    edx = MEM32(0x498D90);
    MEM32(ecx + 0x36C) = edx;
    edx = MEM32(0x498D90);
    MEM32(ecx + 0x370) = edx;
    edx = MEM32(0x498D90);
    MEM32(ecx + 0x374) = edx;
    edx = MEM32(0x498D90);
    MEM32(ecx + 0x378) = edx;
    edx = MEM32(0x498D90);
    MEM32(ecx + 0x37C) = edx;
    edx = MEM32(0x498D90);
    MEM32(ecx + 0x380) = edx;
    edx = MEM32(0x498D90);
    MEM32(ecx + 0x384) = edx;
    edx = MEM32(0x498D90);
    MEM32(ecx + 0x388) = edx;
    MEM8(ecx + 0x410) = MEM8(ecx + 0x410) & 0x7F;
    MEM8(ecx + 0x411) = MEM8(ecx + 0x411) & 0xFE;
    MEM32(ecx + 0x128) = eax;
    MEM32(ecx + 0x12C) = eax;
    MEM32(ecx + 0x130) = eax;
    MEM32(ecx + 0x344) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00051750
 * Original: 0x00051750 - 0x00051966 (534 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051750(void)
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

loc_00051750: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E6D0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    MEM32(esp + 0x24) = esi;
    PUSH32(esp, 0x0005177Eu); RECOMP_ABI_CALL(0x000A2950u, sub_000A2950); /* call 0x000A2950 */

loc_0005177E: ;
    edi = esi + 0x36C;
    MEM32(esp + 0x50) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x18) = edi;
    goto loc_000517A0;

    /* nop */
    /* nop */

loc_000517A0: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x368)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x368) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00051934; /* jge: greater or equal (signed >=) */

loc_000517B0: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00051917; /* je: equal / zero */

loc_000517B8: ;
    ecx = edi;
    PUSH32(esp, 0x000517BFu); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000517BF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00051917; /* je: equal / zero */

loc_000517C7: ;
    ecx = edi;
    PUSH32(esp, 0x000517CEu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000517CE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00051917; /* je: equal / zero */

loc_000517D8: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000517DEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000517DE: ;
    edx = MEM32(0x48D550);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00051917; /* je: equal / zero */

loc_00051800: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x28) = ebx;
    eax = MEM32(ecx);
    PUSH32(esp, 0x48D8F8);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00051820u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00051820: ;
    eax = MEM32(esp + 0x10);
    ebp = MEM32(eax);
    ecx = esp + 0x28;
    edi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x190); PUSH32(esp, 0x00051837u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00051837: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x3C); PUSH32(esp, 0x0005183Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005183F: ;
    eax = MEM32(esp + 0x10);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = 0x3C898C;
    PUSH32(esp, 0x00051856u); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_00051856: ;
    edi = eax;
    esp = esp + 8;
    MEM32(esp + 0x2C) = edi;
    edx = MEM32(edi);
    ecx = edi;
    MEM8(esp + 0x50) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0005186Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005186A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000518FC; /* jle: less or equal (signed <=) */

loc_00051872: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0005187Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005187A: ;
    ecx = MEM32(eax + 0x20);
    MEM32(esi + 0x244) = ecx;
    edx = MEM32(eax + 0x24);
    MEM32(esi + 0x248) = edx;
    eax = MEM32(eax + 0x28);
    MEM32(esi + 0x24C) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x240)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x240), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00051906; /* jne: not equal / not zero */

loc_0005189E: ;
    fp_push(MEMF(esi + 0x24C)); /* fld float */
    ecx = esp + 0x30;
    fp_top() = fp_top() - MEMF(esi + 0x28); /* fsub dword ptr [esi + 0x28] */
    fp_push(MEMF(esi + 0x248)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x24); /* fsub dword ptr [esi + 0x24] */
    fp_push(MEMF(esi + 0x244)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x20); /* fsub dword ptr [esi + 0x20] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000518CEu); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_000518CE: ;
    ecx = esp + 0x30;
    MEMF(esi + 0x258) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000518E3u); RECOMP_ABI_CALL(0x00120950u, sub_00120950); /* call 0x00120950 */

loc_000518E3: ;
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(eax + 8);
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x254) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 8;
    MEM32(esi + 0x250) = eax;
    goto loc_00051906;

loc_000518FC: ;
    MEM32(esi + 0x240) = 0xFFFFFFFFu;

loc_00051906: ;
    PUSH32(esp, edi);
    MEM8(esp + 0x54) = LO8(ebx);
    PUSH32(esp, 0x00051910u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_00051910: ;
    edi = MEM32(esp + 0x1C);
    esp = esp + 4;

loc_00051917: ;
    eax = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000517A0; /* jl: less (signed <) */

loc_00051934: ;
    SET_LO8(eax, MEM8(esi + 0x410));
    SET_LO8(eax, LO8(eax) | 0x80);
    ecx = esp + 0x10;
    MEM8(esi + 0x410) = LO8(eax);
    MEM32(esp + 0x50) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00051953u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_00051953: ;
    ecx = MEM32(esp + 0x48);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x44;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00051970
 * Original: 0x00051970 - 0x00051AB3 (323 bytes, 106 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051970(void)
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

loc_00051970: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x410));
    esi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x10) = esi;
    if (TEST_S(_fas, _fbs)) goto loc_0005198E; /* js: sign (negative) */

loc_00051989: ;
    PUSH32(esp, 0x0005198Eu); RECOMP_ABI_CALL(0x00051750u, sub_00051750); /* call 0x00051750 */

loc_0005198E: ;
    MEM8(edi + 0x411) = MEM8(edi + 0x411) & 0x7F;
    MEM32(esp + 0x14) = esi;
    ebp = edi + 0x36C;
    /* nop */

loc_000519A0: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x368)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x368) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00051A77; /* jge: greater or equal (signed >=) */

loc_000519B0: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00051A62; /* je: equal / zero */

loc_000519BA: ;
    ecx = ebp;
    PUSH32(esp, 0x000519C1u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000519C1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00051A62; /* je: equal / zero */

loc_000519C9: ;
    ecx = ebp;
    PUSH32(esp, 0x000519D0u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000519D0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00051A62; /* je: equal / zero */

loc_000519DA: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000519E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000519E0: ;
    edx = MEM32(0x48D550);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00051A62; /* je: equal / zero */

loc_000519FE: ;
    eax = MEM32(esi + 4);
    eax = eax >> 0x13;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00051A5E; /* je: equal / zero */

loc_00051A08: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    eax = MEM32(esi);
    fp_top() = fp_top() - MEMF(esi + 0x20); /* fsub dword ptr [esi + 0x20] */
    edx = esp + 0x18;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    fp_top() = fp_top() - MEMF(esi + 0x24); /* fsub dword ptr [esi + 0x24] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x28); /* fsub dword ptr [esi + 0x28] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x30);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x24) = ecx;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00051A3Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00051A3F: ;
    ecx = eax;
    PUSH32(esp, 0x00051A46u); RECOMP_ABI_CALL(0x00051480u, sub_00051480); /* call 0x00051480 */

loc_00051A46: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00051A5E; /* je: equal / zero */

loc_00051A4A: ;
    eax = MEM32(esi + 0x240);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00051A5E; /* jl: less (signed <) */

loc_00051A54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00051AA0; /* jle: less or equal (signed <=) */

loc_00051A59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00051A8D; /* je: equal / zero */

loc_00051A5E: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00051A62: ;
    eax = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000519A0; /* jl: less (signed <) */

loc_00051A77: ;
    ecx = MEM32(esp + 0x10);
    MEM32(edi + 0x368) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 16; return; /* ret 12 */

loc_00051A8D: ;
    MEM8(edi + 0x411) = MEM8(edi + 0x411) | 0x80;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 16; return; /* ret 12 */

loc_00051AA0: ;
    MEM8(edi + 0x411) = MEM8(edi + 0x411) | 1;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00051AC0
 * Original: 0x00051AC0 - 0x00051AC6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051AC0(void)
{

loc_00051AC0: ;
    eax = 0x260;
    esp += 4; return; /* ret */

}

/**
 * sub_00051AD0
 * Original: 0x00051AD0 - 0x00051BAF (223 bytes, 71 insns)
 * Category: game_camera
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00051AD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    ebx = ecx;
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB4D8);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00051AEAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00051AEA: ;
    SET_LO16(eax, MEM16(esp + 0x10));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00051B06; /* jl: less (signed <) */

loc_00051AF5: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 4 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00051B06; /* jge: greater or equal (signed >=) */

loc_00051AFB: ;
    edx = SX16(LO16(eax));
    MEM32(ebx + 0x240) = edx;
    goto loc_00051B10;

loc_00051B06: ;
    MEM32(ebx + 0x240) = 0xFFFFFFFFu;

loc_00051B10: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CB4CC);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00051B1Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00051B1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebx + 0x25C) = LO8(ecx);
    esi = MEM32(ebx + 0x9C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00051B3A; /* jne: not equal / not zero */

loc_00051B33: ;
    eax = 0x3C806C;
    goto loc_00051B50;

loc_00051B3A: ;
    PUSH32(esp, 0x00051B3Fu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00051B3F: ;
    esi = esi & 0xFFFFFF;
    edx = MEM32(eax + esi * 4 + 4);
    eax = edx + eax + 0x4008;

loc_00051B50: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CB4BC);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00051B5Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00051B5D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00051B88; /* je: equal / zero */

loc_00051B63: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00051B88; /* je: equal / zero */

loc_00051B68: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00051B6Eu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00051B6E: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00051B79u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00051B79: ;
    ecx = eax;
    PUSH32(esp, 0x00051B80u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_00051B80: ;
    MEM32(ebx + 0x9C) = eax;
    goto loc_00051B92;

loc_00051B88: ;
    MEM32(ebx + 0x9C) = 0;

loc_00051B92: ;
    PUSH32(esp, 0x00051B97u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_00051B97: ;
    edx = MEM32(ebx + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x00051BA9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00051BA9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00051BB0
 * Original: 0x00051BB0 - 0x00051C0C (92 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00051BB0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00051BBFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00051BBF: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00051BCAu); RECOMP_ABI_CALL(0x00066B20u, sub_00066B20); /* call 0x00066B20 */

loc_00051BCA: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00051C05; /* je: equal / zero */

loc_00051BD1: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x00051BF5u); RECOMP_ABI_CALL(0x00051C10u, sub_00051C10); /* call 0x00051C10 */

loc_00051BF5: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x00051BFEu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_00051BFE: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_00051C05: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00051C10
 * Original: 0x00051C10 - 0x00051CC9 (185 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00051C10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E6E8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    esi = ecx;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x40) = esp;
    PUSH32(esp, 0x00051C56u); RECOMP_ABI_CALL(0x00079B60u, sub_00079B60); /* call 0x00079B60 */

loc_00051C56: ;
    MEM32(esi) = 0x3CB4EC;
    MEM32(esi + 0x240) = 0xFFFFFFFFu;
    edx = MEM32(0x5BC9D0);
    MEM32(esi + 0x244) = edx;
    ecx = MEM32(0x5BC9D4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esi + 0x248) = ecx;
    edx = MEM32(0x5BC9D8);
    MEM32(esi + 0x24C) = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esi + 0x250) = eax;
    MEM32(esi + 0x254) = eax;
    MEM32(esi + 0x258) = eax;
    MEM8(esi + 0x25C) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00051CB4; /* je: equal / zero */

loc_00051CAC: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00051CB4u); RECOMP_ABI_CALL(0x00051AD0u, sub_00051AD0); /* call 0x00051AD0 */

loc_00051CB4: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00051CD0
 * Original: 0x00051CD0 - 0x00051CD6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051CD0(void)
{

loc_00051CD0: ;
    eax = 0x48D54C;
    esp += 4; return; /* ret */

}

/**
 * sub_00051CE0
 * Original: 0x00051CE0 - 0x00051CE6 (6 bytes, 2 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051CE0(void)
{

loc_00051CE0: ;
    eax = 0x3CB498;
    esp += 4; return; /* ret */

}

/**
 * sub_00051CF0
 * Original: 0x00051CF0 - 0x00051CFF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051CF0(void)
{

loc_00051CF0: ;
    ecx = MEM32(ecx + 0x9C);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00051D00
 * Original: 0x00051D00 - 0x00051D1E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00051D00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00051D08u); RECOMP_ABI_CALL(0x00051D20u, sub_00051D20); /* call 0x00051D20 */

loc_00051D08: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00051D18; /* je: equal / zero */

loc_00051D0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00051D15u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00051D15: ;
    esp = esp + 4;

loc_00051D18: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00051D20
 * Original: 0x00051D20 - 0x00051D2B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051D20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00051D20: ;
    MEM32(ecx) = 0x3CB4EC;
    g_seh_ebp = ebp; sub_00075970(); return; /* tail jmp 0x00075970 */

}

/**
 * sub_00051D30
 * Original: 0x00051D30 - 0x00051D9C (108 bytes, 32 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00051D30(void)
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

loc_00051D30: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esp + 4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x58) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00051D6C; /* jp: parity */

loc_00051D4B: ;
    MEM32(esi + 0x5C) = 0;
    PUSH32(esp, 0x00051D57u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00051D57: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00051D61u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00051D61: ;
    MEMF(esi + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(esi + 0x6E) = MEM8(esi + 0x6E) | 2;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00051D6C: ;
    PUSH32(esp, 0x00051D71u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00051D71: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00051D7Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00051D7B: ;
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    MEMF(esi + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00051D87u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00051D87: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00051D91u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00051D91: ;
    MEMF(esi + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(esi + 0x6E) = MEM8(esi + 0x6E) & 0xFD;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00051DA0
 * Original: 0x00051DA0 - 0x00051DC4 (36 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00051DA0: ;
    eax = MEM32(ecx + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00051DC1; /* jne: not equal / not zero */

loc_00051DA7: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x234);
    MEM32(ecx + 0x50) = edx;
    eax = MEM32(eax + 0x240);
    MEM32(ecx + 0x54) = eax;
    MEM8(ecx + 0x6E) = MEM8(ecx + 0x6E) | 8;

loc_00051DC1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00051DD0
 * Original: 0x00051DD0 - 0x00051F0A (314 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051DD0(void)
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

loc_00051DD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00051DD9u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_00051DD9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00051DE0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00051DE0: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00051DE9u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_00051DE9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00051DF0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00051DF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00051E50; /* jle: less or equal (signed <=) */

loc_00051DF5: ;
    PUSH32(esp, 0x00051DFAu); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_00051DFA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00051E01u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00051E01: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00051E50; /* jne: not equal / not zero */

loc_00051E05: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x168); /* fsub dword ptr [esi + 0x168] */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00051E32; /* jne: not equal / not zero */

loc_00051E22: ;
    eax = MEM32(esi + 0x160);
    fp_pop(); /* fstp st(0) */
    MEM32(esi + 0x158) = eax;
    goto loc_00051EAA;

loc_00051E32: ;
    fp_push(MEMF(esi + 0x160)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x164); /* fsub dword ptr [esi + 0x164] */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() + MEMF(esi + 0x164); /* fadd dword ptr [esi + 0x164] */
    MEMF(esi + 0x158) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    goto loc_00051EAA;

loc_00051E50: ;
    _fa = (uint32_t)(MEM8(esi + 0x411)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x411), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00051E9E; /* je: equal / zero */

loc_00051E59: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x120); PUSH32(esp, 0x00051E63u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00051E63: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00051E80; /* jne: not equal / not zero */

loc_00051E70: ;
    eax = MEM32(esi + 0x15C);
    fp_pop(); /* fstp st(0) */
    MEM32(esi + 0x158) = eax;
    goto loc_00051EAA;

loc_00051E80: ;
    fp_push(MEMF(esi + 0x15C)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x254); /* fsub dword ptr [esi + 0x254] */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() + MEMF(esi + 0x254); /* fadd dword ptr [esi + 0x254] */
    MEMF(esi + 0x158) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    goto loc_00051EAA;

loc_00051E9E: ;
    ecx = MEM32(esi + 0x15C);
    MEM32(esi + 0x158) = ecx;

loc_00051EAA: ;
    ecx = esi;
    PUSH32(esp, 0x00051EB1u); RECOMP_ABI_CALL(0x0004A7A0u, sub_0004A7A0); /* call 0x0004A7A0 */

loc_00051EB1: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00051EEA; /* jne: not equal / not zero */

loc_00051EBE: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00051EEA; /* jp: parity */

loc_00051ECB: ;
    fp_push(MEMF(esi + 0x3E8)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x3EC); /* fsub dword ptr [esi + 0x3ec] */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() + MEMF(esi + 0x3EC); /* fadd dword ptr [esi + 0x3ec] */
    MEMF(esi + 0x158) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    fp_pop(); /* fstp st(0) */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00051EEA: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00051F07; /* jp: parity */

loc_00051EFB: ;
    edx = MEM32(esi + 0x3F0);
    MEM32(esi + 0x158) = edx;

loc_00051F07: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00051F10
 * Original: 0x00051F10 - 0x00051F20 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051F10(void)
{

loc_00051F10: ;
    SET_LO8(eax, MEM8(ecx + 0x6E));
    SET_LO8(eax, LO8(eax) & 0xFE);
    MEM32(ecx + 0x64) = 0;
    MEM8(ecx + 0x6E) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00051F20
 * Original: 0x00051F20 - 0x00051F70 (80 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051F20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00051F20: ;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x2F4) = eax;
    MEM32(esi + 0x2F8) = eax;
    MEM32(esi + 0x2FC) = eax;
    MEM32(esi + 0x300) = eax;
    SET_LO8(eax, MEM8(esi + 0x410));
    SET_LO8(eax, LO8(eax) & 0xBF);
    SET_LO8(eax, LO8(eax) | 0x20);
    MEM8(esi + 0x410) = LO8(eax);
    PUSH32(esp, 0x00051F52u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00051F52: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00051F59u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00051F59: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00051F68; /* je: equal / zero */

loc_00051F5D: ;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x11C)); return; /* indirect tail jmp */

loc_00051F68: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00051F70
 * Original: 0x00051F70 - 0x00051F80 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051F70(void)
{

loc_00051F70: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x68) = ecx;
    MEM8(eax + 0x6E) = MEM8(eax + 0x6E) & 0xF1;
    MEM16(eax + 0x6C) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00051F80
 * Original: 0x00051F80 - 0x0005201D (157 bytes, 45 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00051F80(void)
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

loc_00051F80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x60); /* fsub dword ptr [esi + 0x60] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00051F93u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00051F93: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00051F9Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00051F9D: ;
    fp_top() = fp_top() - MEMF(esi + 0x60); /* fsub dword ptr [esi + 0x60] */
    fp_push(MEMF(esp + 4)); /* fld float */
    POP32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C93C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c93c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00052009; /* jne: not equal / not zero */

loc_00051FB2: ;
    fp_top() = fp_top() / MEMF(esp); /* fdiv dword ptr [esp] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00051FCC; /* jne: not equal / not zero */

loc_00051FC2: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    goto loc_00051FE1;

loc_00051FCC: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00051FE1; /* jp: parity */

loc_00051FD9: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */

loc_00051FE1: ;
    fp_top() = fp_top() * MEMF(0x3CB680); /* fmul dword ptr [0x3cb680] */
    eax = MEM32(esp + 8);
    fp_top() = fp_top() - MEMF(0x3CB680); /* fsub dword ptr [0x3cb680] */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    MEMF(eax + 0x14C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00052009: ;
    ecx = MEM32(esp + 8);
    fp_pop(); /* fstp st(0) */
    MEM32(ecx + 0x14C) = 0x3F800000;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00052020
 * Original: 0x00052020 - 0x00052108 (232 bytes, 45 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00052020(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00052020: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi + 0xF8) = eax;
    edx = MEM32(ecx + 0x10);
    MEM32(esi + 0xFC) = edx;
    eax = MEM32(ecx + 0x14);
    edx = MEM32(esi + 0xF8);
    MEM32(esi + 0x100) = eax;
    MEM32(esi + 0x104) = edx;
    eax = MEM32(esi + 0xFC);
    MEM32(esi + 0x108) = eax;
    edx = MEM32(esi + 0x100);
    MEM32(esi + 0x10C) = edx;
    eax = MEM32(ecx + 0x18);
    MEM32(esi + 0x88) = eax;
    edx = MEM32(ecx + 0x1C);
    MEM32(esi + 0x8C) = edx;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(esi + 0x88);
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0xEC) = ecx;
    edx = MEM32(esi + 0x8C);
    MEM32(esi + 0xF0) = edx;
    eax = MEM32(esi + 0x90);
    MEM32(esi + 0xF4) = eax;
    ecx = MEM32(esi + 0xF8);
    MEM32(esi + 0x11C) = ecx;
    edx = MEM32(esi + 0xFC);
    MEM32(esi + 0x120) = edx;
    eax = MEM32(esi + 0x100);
    MEM32(esi + 0x124) = eax;
    MEM32(esi + 0x110) = ecx;
    edx = MEM32(esi + 0x120);
    MEM32(esi + 0x114) = edx;
    eax = MEM32(esi + 0x124);
    MEM32(esi + 0x118) = eax;
    PUSH32(esp, 0x000520EAu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000520EA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000520F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000520F4: ;
    MEMF(esi + 0x148) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x14C) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00052110
 * Original: 0x00052110 - 0x0005216D (93 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052110(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00052110: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0x0005211Fu); RECOMP_ABI_CALL(0x00051F80u, sub_00051F80); /* call 0x00051F80 */

loc_0005211F: ;
    ecx = MEM32(esi + 0x14C);
    eax = ebx + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    edi = esi + 0xF8;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00052138u); RECOMP_ABI_CALL(0x0023FC50u, sub_0023FC50); /* call 0x0023FC50 */

loc_00052138: ;
    edx = MEM32(edi);
    MEM32(esi + 0x104) = edx;
    eax = MEM32(edi + 4);
    MEM32(esi + 0x108) = eax;
    ecx = MEM32(edi + 8);
    MEM32(esi + 0x10C) = ecx;
    PUSH32(esp, 0x00052157u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00052157: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00052161u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00052161: ;
    MEMF(esi + 0x148) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00052170
 * Original: 0x00052170 - 0x000521E6 (118 bytes, 34 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00052170(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00052170: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00052182u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_00052182: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = edx;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB244); /* fmul dword ptr [0x3cb244] */
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEMF(ecx) = (float)fp_top(); /* fst */
    MEM32(ecx + 8) = eax;
    fp_push(MEMF(ecx + 4)); /* fld float */
    eax = MEM32(esp + 0x18);
    fp_top() = fp_top() * MEMF(0x3CB244); /* fmul dword ptr [0x3cb244] */
    MEMF(ecx + 4) = (float)fp_top(); /* fst */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB244); /* fmul dword ptr [0x3cb244] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(eax + 0x104); /* fadd dword ptr [eax + 0x104] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(eax + 0x108); /* fadd dword ptr [eax + 0x108] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 0x10C); /* fadd dword ptr [eax + 0x10c] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 0x14;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000521F0
 * Original: 0x000521F0 - 0x0005232B (315 bytes, 87 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000521F0(void)
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

loc_000521F0: ;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x44);
    ecx = MEM32(edi + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00052204u); RECOMP_ABI_CALL(0x001207A0u, sub_001207A0); /* call 0x001207A0 */

loc_00052204: ;
    fp_top() = fp_top() - MEMF(edi + 0x38); /* fsub dword ptr [edi + 0x38] */
    esi = MEM32(esp + 0x30);
    esp = esp + 8;
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    PUSH32(esp, 0x0005221Au); RECOMP_ABI_CALL(0x00051F80u, sub_00051F80); /* call 0x00051F80 */

loc_0005221A: ;
    fp_push(MEMF(edi + 0x3C)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 0x30); /* fsub dword ptr [edi + 0x30] */
    PUSH32(esp, ecx);
    fp_top() = fp_top() * MEMF(esi + 0x14C); /* fmul dword ptr [esi + 0x14c] */
    fp_top() = fp_top() + MEMF(edi + 0x30); /* fadd dword ptr [edi + 0x30] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00052232u); RECOMP_ABI_CALL(0x001206E0u, sub_001206E0); /* call 0x001206E0 */

loc_00052232: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x40)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 0x34); /* fsub dword ptr [edi + 0x34] */
    fp_top() = fp_top() * MEMF(esi + 0x14C); /* fmul dword ptr [esi + 0x14c] */
    fp_top() = fp_top() + MEMF(edi + 0x34); /* fadd dword ptr [edi + 0x34] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0005224Du); RECOMP_ABI_CALL(0x001206E0u, sub_001206E0); /* call 0x001206E0 */

loc_0005224D: ;
    SET_LO8(eax, MEM8(edi + 0x6E));
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000522A3; /* je: equal / zero */

loc_0005225B: ;
    SET_LO8(ecx, MEM8(0x48D584));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005227A; /* jne: not equal / not zero */

loc_0005226A: ;
    MEM32(0x48D584) = MEM32(0x48D584) | eax;
    MEM32(0x48D580) = 0x40C90FDB;

loc_0005227A: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00052297; /* jp: parity */

loc_0005228B: ;
    fp_push(MEMF(0x48D580)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 8); /* fadd dword ptr [esp + 8] */
    goto loc_000522A7;

loc_00052297: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(0x48D580); /* fsub dword ptr [0x48d580] */
    goto loc_000522A7;

loc_000522A3: ;
    fp_push(MEMF(esp + 8)); /* fld float */

loc_000522A7: ;
    fp_top() = fp_top() * MEMF(esi + 0x14C); /* fmul dword ptr [esi + 0x14c] */
    PUSH32(esp, ecx);
    fp_top() = fp_top() + MEMF(edi + 0x38); /* fadd dword ptr [edi + 0x38] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000522B9u); RECOMP_ABI_CALL(0x001206E0u, sub_001206E0); /* call 0x001206E0 */

loc_000522B9: ;
    esp = esp + 4;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000522D2u); RECOMP_ABI_CALL(0x00052170u, sub_00052170); /* call 0x00052170 */

loc_000522D2: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    MEM32(esi + 0x8C) = edx;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x88) = ecx;
    MEM32(esi + 0xEC) = ecx;
    edx = MEM32(esi + 0x8C);
    MEM32(esi + 0xF0) = edx;
    eax = MEM32(esi + 0x90);
    MEM32(esi + 0xF4) = eax;
    PUSH32(esp, 0x00052313u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00052313: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0005231Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005231D: ;
    MEMF(esi + 0x148) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00052330
 * Original: 0x00052330 - 0x00052372 (66 bytes, 23 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00052330(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00052330: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0005233Eu); RECOMP_ABI_CALL(0x00051F80u, sub_00051F80); /* call 0x00051F80 */

loc_0005233E: ;
    fp_push(MEMF(esi + 0x4C)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x48); /* fsub dword ptr [esi + 0x48] */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    fp_top() = fp_top() * MEMF(edi + 0x14C); /* fmul dword ptr [edi + 0x14c] */
    fp_top() = fp_top() + MEMF(esi + 0x48); /* fadd dword ptr [esi + 0x48] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00052358u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00052358: ;
    PUSH32(esp, 0x0005235Du); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0005235D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00052367u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00052367: ;
    MEMF(edi + 0x148) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00052380
 * Original: 0x00052380 - 0x0005242D (173 bytes, 49 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00052380(void)
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

loc_00052380: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x2E4;
    if (TEST_Z(_fa, _fb)) goto loc_000523A2; /* je: equal / zero */

loc_00052397: ;
    ecx = edi;
    PUSH32(esp, 0x0005239Eu); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_0005239E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000523B2; /* jne: not equal / not zero */

loc_000523A2: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x11C); PUSH32(esp, 0x000523ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000523AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_000523B2: ;
    ecx = edi;
    PUSH32(esp, 0x000523B9u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000523B9: ;
    ecx = MEM32(eax + 0x20);
    MEM32(esi + 0x104) = ecx;
    edx = MEM32(eax + 0x24);
    MEM32(esi + 0x108) = edx;
    ecx = MEM32(eax + 0x28);
    eax = eax + 0x2C;
    PUSH32(esp, eax);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(esi + 0x10C) = ecx;
    PUSH32(esp, 0x000523E2u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000523E2: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8244); /* fmul dword ptr [0x3c8244] */
    esp = esp + 8;
    POP32(esp, edi);
    fp_top() = fp_top() + MEMF(esi + 0x104); /* fadd dword ptr [esi + 0x104] */
    MEMF(esi + 0xEC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8244); /* fmul dword ptr [0x3c8244] */
    fp_top() = fp_top() + MEMF(esi + 0x108); /* fadd dword ptr [esi + 0x108] */
    MEMF(esi + 0xF0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8244); /* fmul dword ptr [0x3c8244] */
    fp_top() = fp_top() + MEMF(esi + 0x10C); /* fadd dword ptr [esi + 0x10c] */
    MEMF(esi + 0xF4) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00052430
 * Original: 0x00052430 - 0x00052483 (83 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052430(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00052430: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x2E4;
    if (TEST_Z(_fa, _fb)) goto loc_0005244F; /* je: equal / zero */

loc_00052444: ;
    ecx = edi;
    PUSH32(esp, 0x0005244Bu); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_0005244B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005245B; /* jne: not equal / not zero */

loc_0005244F: ;
    eax = MEM32(esi);
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x11C)); return; /* indirect tail jmp */

loc_0005245B: ;
    ecx = edi;
    PUSH32(esp, 0x00052462u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_00052462: ;
    ecx = MEM32(eax + 0x20);
    eax = eax + 0x20;
    MEM32(esi + 0x104) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x108) = edx;
    eax = MEM32(eax + 8);
    POP32(esp, edi);
    MEM32(esi + 0x10C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00052490
 * Original: 0x00052490 - 0x000524A2 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052490(void)
{

loc_00052490: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    ecx = ecx + 4;
    PUSH32(esp, 0x0005249Fu); RECOMP_ABI_CALL(0x00051D30u, sub_00051D30); /* call 0x00051D30 */

loc_0005249F: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000524B0
 * Original: 0x000524B0 - 0x00052503 (83 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000524B0(void)
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

loc_000524B0: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    esi = ecx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000524DA; /* jp: parity */

loc_000524C4: ;
    MEM8(esi + 0x6E) = MEM8(esi + 0x6E) | 1;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x64) = 0;
    MEM32(esi + 0x68) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000524DA: ;
    PUSH32(esp, 0x000524DFu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000524DF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000524E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000524E9: ;
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    SET_LO8(eax, MEM8(esi + 0x6E));
    SET_LO8(eax, LO8(eax) & 0xFE);
    MEM8(esi + 0x6E) = LO8(eax);
    MEMF(esi + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    MEM32(esi + 0x68) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00052510
 * Original: 0x00052510 - 0x000525FB (235 bytes, 83 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052510(void)
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

loc_00052510: ;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM8(edi + 0x6E)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x6E), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000525E4; /* je: equal / zero */

loc_00052521: ;
    PUSH32(esp, 0x00052526u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_00052526: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0005253Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005253D: ;
    esi = MEM32(esp + 0x40);
    edx = MEM32(esi + 0x17C);
    eax = MEM32(edi + 0x50);
    ecx = MEM32(edi + 0x54);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00052561u); RECOMP_ABI_CALL(0x0004BF90u, sub_0004BF90); /* call 0x0004BF90 */

loc_00052561: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edi + 0x50);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 8) = ecx;
    ecx = esi;
    PUSH32(esp, 0x000525A0u); RECOMP_ABI_CALL(0x0004EFC0u, sub_0004EFC0); /* call 0x0004EFC0 */

loc_000525A0: ;
    edx = MEM32(esi + 0x3A8);
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000525C2u); RECOMP_ABI_CALL(0x0004C290u, sub_0004C290); /* call 0x0004C290 */

loc_000525C2: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000525D8; /* jp: parity */

loc_000525CF: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000525D8u); RECOMP_ABI_CALL(0x0004E590u, sub_0004E590); /* call 0x0004E590 */

loc_000525D8: ;
    MEM8(edi + 0x6E) = MEM8(edi + 0x6E) & 0xF7;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 8; return; /* ret 4 */

loc_000525E4: ;
    PUSH32(esp, 0x000525E9u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_000525E9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x11C); PUSH32(esp, 0x000525F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000525F3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00052600
 * Original: 0x00052600 - 0x000528C3 (707 bytes, 194 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00052600(void)
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

loc_00052600: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0005260Bu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0005260B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x108); PUSH32(esp, 0x00052615u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00052615: ;
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(MEM8(esi + 0x410)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x410), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00052635; /* je: equal / zero */

loc_00052620: ;
    PUSH32(esp, 0x00052625u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_00052625: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0005262Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005262C: ;
    fp_top() = fp_top() - MEMF(esi + 0x7C); /* fsub dword ptr [esi + 0x7c] */
    fp_top() = fp_top() + MEMF(esi + 0x7C); /* fadd dword ptr [esi + 0x7c] */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */

loc_00052635: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() * MEMF(0x3C97D0); /* fmul dword ptr [0x3c97d0] */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_top() = fp_top() * MEMF(0x3CB6A4); /* fmul dword ptr [0x3cb6a4] */
    fp_top() = MEMF(esi + 0x234) - fp_top(); /* fsubr dword ptr [esi + 0x234] */
    MEMF(esi + 0x234) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_top() = fp_top() * MEMF(0x3C97D0); /* fmul dword ptr [0x3c97d0] */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_top() = fp_top() * MEMF(0x3CB6A4); /* fmul dword ptr [0x3cb6a4] */
    fp_top() = MEMF(esi + 0x78) - fp_top(); /* fsubr dword ptr [esi + 0x78] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CA844)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3ca844] */
    MEMF(esi + 0x78) = (float)fp_top(); /* fst */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00052695; /* jne: not equal / not zero */

loc_0005268A: ;
    fp_pop(); /* fstp st(0) */
    MEM32(esi + 0x78) = 0x3FC00000;
    goto loc_000526A9;

loc_00052695: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CB6A0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cb6a0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000526A9; /* jp: parity */

loc_000526A2: ;
    MEM32(esi + 0x78) = 0xBFC00000u;

loc_000526A9: ;
    fp_push(MEMF(esi + 0xEC)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x104); /* fsub dword ptr [esi + 0x104] */
    fp_push(MEMF(esi + 0xF0)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x108); /* fsub dword ptr [esi + 0x108] */
    fp_push(MEMF(esi + 0xF4)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x10C); /* fsub dword ptr [esi + 0x10c] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() + MEMF(esi + 0x104); /* fadd dword ptr [esi + 0x104] */
    MEMF(esi + 0x104) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_top() = fp_top() + MEMF(esi + 0x108); /* fadd dword ptr [esi + 0x108] */
    MEMF(esi + 0x108) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() + MEMF(esi + 0x10C); /* fadd dword ptr [esi + 0x10c] */
    MEMF(esi + 0x10C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0005273Eu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0005273E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00052747u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00052747: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00052750u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00052750: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00052759u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00052759: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00052762u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00052762: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0005276Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005276B: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    fp_top() = fp_top() * MEMF(0x3C8C34); /* fmul dword ptr [0x3c8c34] */
    fp_top() = fp_top() + MEMF(esi + 0x10C); /* fadd dword ptr [esi + 0x10c] */
    MEMF(esi + 0x10C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0005278Au); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0005278A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00052793u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00052793: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0005279Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005279C: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000527A5u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_000527A5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000527AEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000527AE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000527B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000527B7: ;
    fp_top() = fp_top() - MEMF(esp + 0x14); /* fsub dword ptr [esp + 0x14] */
    fp_top() = fp_top() * MEMF(0x3C97D0); /* fmul dword ptr [0x3c97d0] */
    fp_top() = fp_top() + MEMF(esi + 0x250); /* fadd dword ptr [esi + 0x250] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de0] */
    MEMF(esi + 0x250) = (float)fp_top(); /* fst */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000527E8; /* jp: parity */

loc_000527DA: ;
    fp_pop(); /* fstp st(0) */
    MEM32(esi + 0x250) = 0x40A00000;
    goto loc_000527FF;

loc_000527E8: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CB69C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cb69c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000527FF; /* jne: not equal / not zero */

loc_000527F5: ;
    MEM32(esi + 0x250) = 0x42F00000;

loc_000527FF: ;
    fp_push(MEMF(esi + 0x234)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3CB698); /* fadd dword ptr [0x3cb698] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = cos(fp_top()); /* fcos */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_top() = fp_top() + MEMF(esi + 0x104); /* fadd dword ptr [esi + 0x104] */
    MEMF(esi + 0x104) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_top() = fp_top() + MEMF(esi + 0x108); /* fadd dword ptr [esi + 0x108] */
    MEMF(esi + 0x108) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C6DE4); /* fmul dword ptr [0x3c6de4] */
    fp_top() = fp_top() + MEMF(esi + 0x10C); /* fadd dword ptr [esi + 0x10c] */
    MEMF(esi + 0x10C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    fp_push(MEMF(esi + 0x234)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_top() = fp_top() * MEMF(0x3C8244); /* fmul dword ptr [0x3c8244] */
    fp_top() = MEMF(esi + 0x104) - fp_top(); /* fsubr dword ptr [esi + 0x104] */
    MEMF(esi + 0xEC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    fp_push(MEMF(esi + 0x234)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_top() = fp_top() * MEMF(0x3C8244); /* fmul dword ptr [0x3c8244] */
    fp_top() = MEMF(esi + 0x108) - fp_top(); /* fsubr dword ptr [esi + 0x108] */
    MEMF(esi + 0xF0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = fp_top() * MEMF(0x3C8244); /* fmul dword ptr [0x3c8244] */
    fp_top() = MEMF(esi + 0x10C) - fp_top(); /* fsubr dword ptr [esi + 0x10c] */
    MEMF(esi + 0xF4) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000528D0
 * Original: 0x000528D0 - 0x0005291B (75 bytes, 27 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000528D0(void)
{

loc_000528D0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x10) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x14) = eax;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    MEM32(esi + 0x1C) = edx;
    eax = MEM32(eax + 8);
    PUSH32(esp, 6);
    ecx = esi;
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x0005290Bu); RECOMP_ABI_CALL(0x00051D30u, sub_00051D30); /* call 0x00051D30 */

loc_0005290B: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00052917u); RECOMP_ABI_CALL(0x00052020u, sub_00052020); /* call 0x00052020 */

loc_00052917: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00052920
 * Original: 0x00052920 - 0x00052A4B (299 bytes, 95 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052920(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00052920: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 9 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    if (CMP_NE(_fa, _fb)) goto loc_0005297F; /* jne: not equal / not zero */

loc_00052933: ;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005297F; /* je: equal / zero */

loc_00052939: ;
    PUSH32(esp, 0x0005293Eu); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_0005293E: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x0005294Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005294D: ;
    MEM8(edi + 0x411) = MEM8(edi + 0x411) | 0x40;
    PUSH32(esp, 0x00052959u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_00052959: ;
    ebx = eax;
    PUSH32(esp, 0x00052960u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_00052960: ;
    edx = MEM32(ebx);
    ebp = eax;
    eax = MEM32(ebp);
    ecx = ebx;
    MEM32(esp + 0x20) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00052970u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00052970: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0005297Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005297F: ;
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00052989u); RECOMP_ABI_CALL(0x000125F0u, sub_000125F0); /* call 0x000125F0 */

loc_00052989: ;
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00052A41; /* je: equal / zero */

loc_00052994: ;
    ecx = MEM32(ebp);
    ebx = MEM32(esp + 0x28);
    MEM32(esi) = ecx;
    edx = MEM32(ebp + 4);
    MEM32(esi + 4) = edx;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x000529AFu); RECOMP_ABI_CALL(0x000125F0u, sub_000125F0); /* call 0x000125F0 */

loc_000529AF: ;
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00052A41; /* je: equal / zero */

loc_000529BA: ;
    ecx = MEM32(ebx);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(ebx + 4);
    MEM32(esi + 0x10) = edx;
    eax = MEM32(ebx + 8);
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(ebp);
    MEM32(edi + 0xF8) = ecx;
    edx = MEM32(ebp + 4);
    MEM32(edi + 0xFC) = edx;
    eax = MEM32(ebp + 8);
    MEM32(edi + 0x100) = eax;
    MEM32(edi + 0x104) = ecx;
    edx = MEM32(edi + 0xFC);
    MEM32(edi + 0x108) = edx;
    eax = MEM32(edi + 0x100);
    MEM32(edi + 0x10C) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00052A10; /* jne: not equal / not zero */

loc_00052A0A: ;
    MEM8(esi + 0x6C) = MEM8(esi + 0x6C) | 1;
    goto loc_00052A24;

loc_00052A10: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, 9);
    ecx = esi;
    MEM16(esi + 0x6C) = 1;
    PUSH32(esp, 0x00052A24u); RECOMP_ABI_CALL(0x00051D30u, sub_00051D30); /* call 0x00051D30 */

loc_00052A24: ;
    SET_LO8(edx, MEM8(esp + 0x30));
    SET_LO8(eax, MEM8(esi + 0x6E));
    SET_LO8(edx, LO8(edx) << 1);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 2);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(esi + 0x6E) = LO8(ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00052A41u); RECOMP_ABI_CALL(0x00052110u, sub_00052110); /* call 0x00052110 */

loc_00052A41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00052A50
 * Original: 0x00052A50 - 0x00052A73 (35 bytes, 12 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052A50(void)
{

loc_00052A50: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    edx = eax + 0x104;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00052A70u); RECOMP_ABI_CALL(0x00052920u, sub_00052920); /* call 0x00052920 */

loc_00052A70: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00052A80
 * Original: 0x00052A80 - 0x00052BAD (301 bytes, 98 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052A80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00052A80: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 9 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    if (CMP_NE(_fa, _fb)) goto loc_00052AE0; /* jne: not equal / not zero */

loc_00052A92: ;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00052AE0; /* je: equal / zero */

loc_00052A98: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00052A9Eu); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_00052A9E: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x00052AADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00052AAD: ;
    MEM8(edi + 0x411) = MEM8(edi + 0x411) | 0x40;
    PUSH32(esp, 0x00052AB9u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_00052AB9: ;
    ebp = eax;
    PUSH32(esp, 0x00052AC0u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_00052AC0: ;
    edx = MEM32(ebp);
    ebx = eax;
    eax = MEM32(ebx);
    ecx = ebp;
    MEM32(esp + 0x20) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00052AD0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00052AD0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00052ADFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00052ADF: ;
    POP32(esp, ebp);

loc_00052AE0: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax);
    MEM32(esi + 0x3C) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x40) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x44) = eax;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax);
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x34) = edx;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(esp + 0x30));
    MEM32(esi + 0x38) = ecx;
    SET_LO8(ecx, MEM8(esi + 0x6E));
    SET_LO8(edx, LO8(edx) << 2);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(esi + 0x6E) = LO8(ecx);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00052B2Cu); RECOMP_ABI_CALL(0x00052170u, sub_00052170); /* call 0x00052170 */

loc_00052B2C: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(edi + 0x8C) = eax;
    MEM32(edi + 0x90) = ecx;
    MEM32(edi + 0x88) = edx;
    MEM32(edi + 0xEC) = edx;
    eax = MEM32(edi + 0x8C);
    MEM32(edi + 0xF0) = eax;
    ecx = MEM32(edi + 0x90);
    MEM32(edi + 0xF4) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00052B74; /* jne: not equal / not zero */

loc_00052B6E: ;
    MEM8(esi + 0x6C) = MEM8(esi + 0x6C) | 2;
    goto loc_00052B88;

loc_00052B74: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 9);
    ecx = esi;
    MEM16(esi + 0x6C) = 2;
    PUSH32(esp, 0x00052B88u); RECOMP_ABI_CALL(0x00051D30u, sub_00051D30); /* call 0x00051D30 */

loc_00052B88: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    SET_LO8(ebx, MEM8(esi + 0x6E));
    SET_LO8(eax, LO8(eax) << 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(esi + 0x6E) = LO8(ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00052BA4u); RECOMP_ABI_CALL(0x000521F0u, sub_000521F0); /* call 0x000521F0 */

loc_00052BA4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00052BB0
 * Original: 0x00052BB0 - 0x00052C0C (92 bytes, 34 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052BB0(void)
{

loc_00052BB0: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    eax = edi + 0x20C;
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00052BCCu); RECOMP_ABI_CALL(0x00120950u, sub_00120950); /* call 0x00120950 */

loc_00052BCC: ;
    edx = MEM32(eax);
    MEM32(esp + 0x10) = edx;
    ecx = MEM32(eax + 4);
    esp = esp + 8;
    MEM32(esp + 0xC) = ecx;
    edx = MEM32(eax + 8);
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00052C04u); RECOMP_ABI_CALL(0x00052A80u, sub_00052A80); /* call 0x00052A80 */

loc_00052C04: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00052C10
 * Original: 0x00052C10 - 0x00052C96 (134 bytes, 45 insns)
 * CC: cdecl, 4 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00052C10(void)
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

loc_00052C10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x250);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x48) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 9 (32-bit) */
    MEM32(esi + 0x4C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00052C34; /* jne: not equal / not zero */

loc_00052C2E: ;
    MEM8(esi + 0x6C) = MEM8(esi + 0x6C) | 4;
    goto loc_00052C48;

loc_00052C34: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 9);
    ecx = esi;
    MEM16(esi + 0x6C) = 4;
    PUSH32(esp, 0x00052C48u); RECOMP_ABI_CALL(0x00051D30u, sub_00051D30); /* call 0x00051D30 */

loc_00052C48: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    SET_LO8(edx, MEM8(esi + 0x6E));
    SET_LO8(eax, LO8(eax) << 1);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(esi + 0x6E) = LO8(edx);
    PUSH32(esp, 0x00052C62u); RECOMP_ABI_CALL(0x00051F80u, sub_00051F80); /* call 0x00051F80 */

loc_00052C62: ;
    fp_push(MEMF(esi + 0x4C)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x48); /* fsub dword ptr [esi + 0x48] */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    fp_top() = fp_top() * MEMF(edi + 0x14C); /* fmul dword ptr [edi + 0x14c] */
    fp_top() = fp_top() + MEMF(esi + 0x48); /* fadd dword ptr [esi + 0x48] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00052C7Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00052C7C: ;
    PUSH32(esp, 0x00052C81u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00052C81: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00052C8Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00052C8B: ;
    MEMF(edi + 0x148) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00052CA0
 * Original: 0x00052CA0 - 0x00052CE1 (65 bytes, 23 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00052CA0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00052CDD; /* je: equal / zero */

loc_00052CAB: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00052CB4u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_00052CB4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00052CDD; /* je: equal / zero */

loc_00052CB8: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 8);
    ecx = edi;
    MEM32(esi + 0x2E4) = eax;
    PUSH32(esp, 0x00052CD5u); RECOMP_ABI_CALL(0x00051D30u, sub_00051D30); /* call 0x00051D30 */

loc_00052CD5: ;
    ecx = esi;
    PUSH32(esp, 0x00052CDCu); RECOMP_ABI_CALL(0x00052380u, sub_00052380); /* call 0x00052380 */

loc_00052CDC: ;
    POP32(esp, esi);

loc_00052CDD: ;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00052CF0
 * Original: 0x00052CF0 - 0x00052D31 (65 bytes, 23 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00052CF0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00052D2D; /* je: equal / zero */

loc_00052CFB: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00052D04u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_00052D04: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00052D2D; /* je: equal / zero */

loc_00052D08: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 7);
    ecx = edi;
    MEM32(esi + 0x2E4) = eax;
    PUSH32(esp, 0x00052D25u); RECOMP_ABI_CALL(0x00051D30u, sub_00051D30); /* call 0x00051D30 */

loc_00052D25: ;
    ecx = esi;
    PUSH32(esp, 0x00052D2Cu); RECOMP_ABI_CALL(0x00052430u, sub_00052430); /* call 0x00052430 */

loc_00052D2C: ;
    POP32(esp, esi);

loc_00052D2D: ;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00052D40
 * Original: 0x00052D40 - 0x00052DF6 (182 bytes, 43 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00052D40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00052D40: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x28);
    edx = esp + 4;
    MEM32(esp + 8) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0x00052D6Bu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_00052D6B: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(eax);
    MEM32(ecx + 0xF8) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0xFC) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x100) = eax;
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    esp = esp + 8;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    POP32(esp, esi);
    fp_top() = fp_top() * MEMF(ecx + 0xF8); /* fmul dword ptr [ecx + 0xf8] */
    MEMF(ecx + 0xF8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx + 0xFC); /* fmul dword ptr [ecx + 0xfc] */
    MEMF(ecx + 0xFC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(ecx + 0x100); /* fmul dword ptr [ecx + 0x100] */
    MEMF(ecx + 0x100) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xE0)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 0xF8); /* fadd dword ptr [ecx + 0xf8] */
    MEMF(ecx + 0xF8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xE4)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 0xFC); /* fadd dword ptr [ecx + 0xfc] */
    MEMF(ecx + 0xFC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xE8)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 0x100); /* fadd dword ptr [ecx + 0x100] */
    MEMF(ecx + 0x100) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00052E00
 * Original: 0x00052E00 - 0x000530F0 (752 bytes, 177 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052E00(void)
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

loc_00052E00: ;
    esp = esp - 0x28;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000530E1; /* je: equal / zero */

loc_00052E14: ;
    PUSH32(esp, 0x00052E19u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00052E19: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00052E23u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00052E23: ;
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x2FC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x2fc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00052E78; /* jne: not equal / not zero */

loc_00052E34: ;
    SET_LO8(eax, MEM8(esi + 0x410));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00052E4A; /* je: equal / zero */

loc_00052E3E: ;
    eax = MEM32(esi + 0x2FC);
    MEM32(esp + 4) = eax;
    goto loc_00052E78;

loc_00052E4A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000530E1; /* je: equal / zero */

loc_00052E52: ;
    fp_push(MEMF(esi + 0x2FC)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x2F8); /* fsub dword ptr [esi + 0x2f8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() + MEMF(esi + 0x2FC); /* fadd dword ptr [esi + 0x2fc] */
    MEMF(esi + 0x2FC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(esi + 0x2F8); /* fadd dword ptr [esi + 0x2f8] */
    MEMF(esi + 0x2F8) = (float)fp_top(); fp_pop(); /* fstp */

loc_00052E78: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x300)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x300] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000530EB; /* jne: not equal / not zero */

loc_00052E8D: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x2F8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x2f8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000530EB; /* jne: not equal / not zero */

loc_00052EA2: ;
    ecx = MEM32(esi + 0x2F4);
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = fp_top() - MEMF(esi + 0x2F8); /* fsub dword ptr [esi + 0x2f8] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = esi + 0x304;
    PUSH32(esp, edi);
    MEM32(esi + 0x300) = eax;
    edx = MEM32(ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00052ECCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00052ECC: ;
    edx = MEM32(edi + 8);
    ecx = MEM32(edi + 4);
    eax = MEM32(edi);
    MEM32(esp + 0x20) = edx;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    MEM32(esp + 0x1C) = ecx;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(esp + 0x18) = eax;
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    edx = MEM32(esi + 0x31C);
    ecx = MEM32(esi + 0x318);
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = MEM32(esi + 0x314);
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esi + 0x32C);
    MEM32(esp + 0x28) = ecx;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    ecx = MEM32(esi + 0x328);
    MEM32(esp + 0x14) = edx;
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esi + 0x324);
    MEM32(esp + 0xC) = eax;
    ecx = esp + 0x18;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    fp_top() = fp_top() * MEMF(0x3C94A8); /* fmul dword ptr [0x3c94a8] */
    MEMF(esi + 0x250) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00052F73u); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_00052F73: ;
    ecx = esp + 0x24;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00052F7Eu); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_00052F7E: ;
    fp_pop(); /* fstp st(0) */
    ecx = esp + 0xC;
    PUSH32(esp, 0x00052F89u); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_00052F89: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    MEM32(edi) = eax;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = edx;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    MEM32(esi + 0x314) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x318) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x31C) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esi + 0x324) = eax;
    MEM32(esi + 0x328) = ecx;
    MEM32(esi + 0x32C) = edx;
    MEM32(esi + 0x20C) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0x210) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(esi + 0x214) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(esi + 0x218) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(esi + 0x21C) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(esi + 0x220) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(esi + 0x224) = eax;
    MEM32(esi + 0x228) = ecx;
    MEM32(esi + 0x22C) = edx;
    fp_push(MEMF(esi + 0x20C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    eax = esi + 0x18C;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEMF(esi + 0x20C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x210)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esi + 0x210) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x214)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esi + 0x214) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0005306Cu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0005306C: ;
    ecx = MEM32(esi + 0x334);
    MEM32(esi + 0x104) = ecx;
    edx = MEM32(esi + 0x338);
    MEM32(esi + 0x108) = edx;
    eax = MEM32(esi + 0x33C);
    MEM32(esi + 0x10C) = eax;
    fp_push(MEMF(esi + 0x20C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8244); /* fmul dword ptr [0x3c8244] */
    esp = esp + 8;
    POP32(esp, edi);
    fp_top() = fp_top() + MEMF(esi + 0x104); /* fadd dword ptr [esi + 0x104] */
    MEMF(esi + 0xEC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x210)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8244); /* fmul dword ptr [0x3c8244] */
    fp_top() = fp_top() + MEMF(esi + 0x108); /* fadd dword ptr [esi + 0x108] */
    MEMF(esi + 0xF0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x214)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8244); /* fmul dword ptr [0x3c8244] */
    fp_top() = fp_top() + MEMF(esi + 0x10C); /* fadd dword ptr [esi + 0x10c] */
    MEMF(esi + 0xF4) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_000530E1: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE4); PUSH32(esp, 0x000530EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000530EB: ;
    POP32(esp, esi);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000530F0
 * Original: 0x000530F0 - 0x0005326C (380 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000530F0(void)
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

loc_000530F0: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0xD4;
    ebx = 0; /* xor self */
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    edx = edi + 0xC4;
    ecx = edi + 0x9C;
    /* nop */

loc_00053120: ;
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005315D; /* jne: not equal / not zero */

loc_0005312F: ;
    fp_push(MEMF(edx)); /* fld float */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edx = edx + 4;
    fp_top() = fp_top() * MEMF(ecx + -8); /* fmul dword ptr [ecx - 8] */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    fp_top() = fp_top() + MEMF(esi); /* fadd dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx + -16); /* fmul dword ptr [ecx - 0x10] */
    fp_top() = fp_top() + MEMF(esi + 4); /* fadd dword ptr [esi + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(ecx + -12); /* fmul dword ptr [ecx - 0xc] */
    fp_top() = fp_top() + MEMF(esi + 8); /* fadd dword ptr [esi + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(edx + -4); /* fadd dword ptr [edx - 4] */
    if (CMP_L(_fas, _fbs)) goto loc_00053120; /* jl: less (signed <) */

loc_0005315D: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    ebx = edi + 0xE0;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000531BB; /* jne: not equal / not zero */

loc_00053170: ;
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = edi + 0x88;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3E800000);
    ecx = ebx;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(esi); /* fmul dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(esi + 4); /* fmul dword ptr [esi + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esi + 8); /* fmul dword ptr [esi + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0005319Fu); RECOMP_ABI_CALL(0x0023FC50u, sub_0023FC50); /* call 0x0023FC50 */

loc_0005319F: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp); /* fsub dword ptr [ebp] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp + 4); /* fsub dword ptr [ebp + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp + 8); /* fsub dword ptr [ebp + 8] */
    POP32(esp, ebp);
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000531D7;

loc_000531BB: ;
    eax = MEM32(edi + 0x88);
    fp_pop(); /* fstp st(0) */
    MEM32(ebx) = eax;
    ecx = MEM32(edi + 0x8C);
    MEM32(ebx + 4) = ecx;
    edx = MEM32(edi + 0x90);
    MEM32(ebx + 8) = edx;

loc_000531D7: ;
    PUSH32(esp, 0x000531DCu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000531DC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x108); PUSH32(esp, 0x000531E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000531E6: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 0xEC); /* fsub dword ptr [edi + 0xec] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 0xF0); /* fsub dword ptr [edi + 0xf0] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 0xF4); /* fsub dword ptr [edi + 0xf4] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x158)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, 0x0005321Fu); RECOMP_ABI_CALL(0x00341990u, sub_00341990); /* call 0x00341990 */

loc_0005321F: ;
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + MEMF(ebx); /* fadd dword ptr [ebx] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() + MEMF(ebx + 4); /* fadd dword ptr [ebx + 4] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() + MEMF(ebx + 8); /* fadd dword ptr [ebx + 8] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x24);
    MEM32(edi + 0xF4) = eax;
    MEMF(edi + 0xEC) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(edi + 0xF0) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00053270
 * Original: 0x00053270 - 0x000533A5 (309 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053270(void)
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

loc_00053270: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0xC4)); /* fld float */
    ebx = esi + 0xE0;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000532E3; /* jne: not equal / not zero */

loc_00053290: ;
    eax = MEM32(esi + 0x94);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = esi + 0xD4;
    MEM32(edi) = eax;
    ecx = MEM32(esi + 0x98);
    PUSH32(esp, edi);
    MEM32(edi + 4) = ecx;
    edx = MEM32(esi + 0x9C);
    ebp = esi + 0x88;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3EA8F5C3);
    ecx = ebx;
    MEM32(edi + 8) = edx;
    PUSH32(esp, 0x000532C6u); RECOMP_ABI_CALL(0x0023FC50u, sub_0023FC50); /* call 0x0023FC50 */

loc_000532C6: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp); /* fsub dword ptr [ebp] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp + 4); /* fsub dword ptr [ebp + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp + 8); /* fsub dword ptr [ebp + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, ebp);
    goto loc_00053311;

loc_000532E3: ;
    eax = MEM32(esi + 0x88);
    MEM32(ebx) = eax;
    ecx = MEM32(esi + 0x8C);
    MEM32(ebx + 4) = ecx;
    edx = MEM32(esi + 0x90);
    eax = 0; /* xor self */
    MEM32(ebx + 8) = edx;
    MEM32(esi + 0xD4) = eax;
    MEM32(esi + 0xD8) = eax;
    MEM32(esi + 0xDC) = eax;

loc_00053311: ;
    PUSH32(esp, 0x00053316u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00053316: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x108); PUSH32(esp, 0x00053320u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00053320: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0xEC); /* fsub dword ptr [esi + 0xec] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0xF0); /* fsub dword ptr [esi + 0xf0] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0xF4); /* fsub dword ptr [esi + 0xf4] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x158)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, 0x00053359u); RECOMP_ABI_CALL(0x00341990u, sub_00341990); /* call 0x00341990 */

loc_00053359: ;
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() + MEMF(ebx); /* fadd dword ptr [ebx] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + MEMF(ebx + 4); /* fadd dword ptr [ebx + 4] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() + MEMF(ebx + 8); /* fadd dword ptr [ebx + 8] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x20);
    MEM32(esi + 0xF4) = eax;
    MEMF(esi + 0xEC) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xF0) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000533B0
 * Original: 0x000533B0 - 0x000535C3 (531 bytes, 121 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000533B0(void)
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

loc_000533B0: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000533BBu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000533BB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000533C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000533C5: ;
    fp_top() = fp_top() - MEMF(esi + 0x148); /* fsub dword ptr [esi + 0x148] */
    fp_top() = fp_top() * MEMF(0x3C8324); /* fmul dword ptr [0x3c8324] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(esp + 4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    MEM32(esi + 0x14C) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00053517; /* jnp: not parity */

loc_000533F4: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C9404)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c9404] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00053517; /* je: equal / zero */

loc_00053409: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000534F7; /* jne: not equal / not zero */

loc_0005341E: ;
    ecx = MEM32(esi + 0x11C);
    MEM32(esi + 0x110) = ecx;
    edx = MEM32(esi + 0x120);
    MEM32(esi + 0x114) = edx;
    eax = MEM32(esi + 0x124);
    MEM32(esi + 0x118) = eax;
    SET_LO8(eax, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00053455; /* je: equal / zero */

loc_0005344A: ;
    PUSH32(esp, esi);
    ecx = esi + 4;
    PUSH32(esp, 0x00053453u); RECOMP_ABI_CALL(0x00052D40u, sub_00052D40); /* call 0x00052D40 */

loc_00053453: ;
    goto loc_00053466;

loc_00053455: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00053466u); RECOMP_ABI_CALL(0x00050BE0u, sub_00050BE0); /* call 0x00050BE0 */

loc_00053466: ;
    fp_push(MEMF(esi + 0xF8)); /* fld float */
    eax = MEM32(esi + 0x154);
    fp_top() = fp_top() - MEMF(esi + 0x110); /* fsub dword ptr [esi + 0x110] */
    MEM32(esp + 0x20) = eax;
    fp_push(MEMF(esi + 0xFC)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x114); /* fsub dword ptr [esi + 0x114] */
    fp_push(MEMF(esi + 0x100)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x118); /* fsub dword ptr [esi + 0x118] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_top() = fp_top() + MEMF(esi + 0x110); /* fadd dword ptr [esi + 0x110] */
    MEMF(esi + 0x11C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_top() = fp_top() + MEMF(esi + 0x114); /* fadd dword ptr [esi + 0x114] */
    MEMF(esi + 0x120) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_top() = fp_top() + MEMF(esi + 0x118); /* fadd dword ptr [esi + 0x118] */
    MEMF(esi + 0x124) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x148)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3CB690); /* fadd dword ptr [0x3cb690] */
    MEMF(esi + 0x148) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x14C)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3C6E40); /* fsub dword ptr [0x3c6e40] */
    MEMF(esi + 0x14C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0005359C;

loc_000534F7: ;
    _fa = (uint32_t)(MEM8(esi + 0x411)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x411), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005359C; /* je: equal / zero */

loc_00053504: ;
    ecx = MEM32(esi + 0x178);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00053512u); RECOMP_ABI_CALL(0x0004F240u, sub_0004F240); /* call 0x0004F240 */

loc_00053512: ;
    goto loc_0005359C;

loc_00053517: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005352A; /* je: equal / zero */

loc_0005351F: ;
    PUSH32(esp, esi);
    ecx = esi + 4;
    PUSH32(esp, 0x00053528u); RECOMP_ABI_CALL(0x00052D40u, sub_00052D40); /* call 0x00052D40 */

loc_00053528: ;
    goto loc_0005353B;

loc_0005352A: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0005353Bu); RECOMP_ABI_CALL(0x00050BE0u, sub_00050BE0); /* call 0x00050BE0 */

loc_0005353B: ;
    ecx = MEM32(esi + 0xF8);
    MEM32(esi + 0x11C) = ecx;
    edx = MEM32(esi + 0xFC);
    MEM32(esi + 0x120) = edx;
    eax = MEM32(esi + 0x100);
    MEM32(esi + 0x124) = eax;
    MEM32(esi + 0x110) = ecx;
    edx = MEM32(esi + 0x120);
    MEM32(esi + 0x114) = edx;
    eax = MEM32(esi + 0x124);
    MEM32(esi + 0x118) = eax;
    PUSH32(esp, 0x00053582u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00053582: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0005358Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005358C: ;
    MEMF(esi + 0x148) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x14C) = 0;

loc_0005359C: ;
    edx = MEM32(esi + 0x14C);
    eax = esi + 0x11C;
    PUSH32(esp, eax);
    ecx = esi + 0x110;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi + 0x104;
    PUSH32(esp, 0x000535BCu); RECOMP_ABI_CALL(0x0023FC50u, sub_0023FC50); /* call 0x0023FC50 */

loc_000535BC: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000535D0
 * Original: 0x000535D0 - 0x0005364B (123 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000535D0(void)
{

loc_000535D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x240);
    ecx = MEM32(esi + 0x230);
    MEM32(esi + 0x234) = ecx;
    MEM32(esi + 0x78) = eax;
    edx = MEM32(esi + 0xF8);
    MEM32(esi + 0x104) = edx;
    eax = MEM32(esi + 0xFC);
    MEM32(esi + 0x108) = eax;
    ecx = MEM32(esi + 0x100);
    MEM32(esi + 0x10C) = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 4;
    MEM32(esi + 0x2D8) = 0;
    MEM32(esi + 0x2DC) = 0;
    MEM32(esi + 0x2E0) = 0;
    PUSH32(esp, 0x00053636u); RECOMP_ABI_CALL(0x00051D30u, sub_00051D30); /* call 0x00051D30 */

loc_00053636: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00053649u); RECOMP_ABI_CALL(0x00052600u, sub_00052600); /* call 0x00052600 */

loc_00053649: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00053650
 * Original: 0x00053650 - 0x000537F4 (420 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053650(void)
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

loc_00053650: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(0x48D58C));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_00053677; /* jne: not equal / not zero */

loc_00053667: ;
    MEM32(0x48D58C) = MEM32(0x48D58C) | eax;
    MEM32(0x48D588) = 0x3EF1463B;

loc_00053677: ;
    fp_push(MEMF(esi + 0x104)); /* fld float */
    edi = esi + 0xE0;
    fp_top() = fp_top() - MEMF(edi); /* fsub dword ptr [edi] */
    ebx = esi + 0xD4;
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push(MEMF(esi + 0x108)); /* fld float */
    ecx = esp + 0x3C;
    fp_top() = fp_top() - MEMF(edi + 4); /* fsub dword ptr [edi + 4] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x10C)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 8); /* fsub dword ptr [edi + 8] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000536B8u); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_000536B8: ;
    fp_push(MEMF(ebx + 8)); /* fld float */
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_push(MEMF(ebx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CB254)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cb254] */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000536F3; /* jp: parity */

loc_000536E3: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    goto loc_00053720;

loc_000536F3: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    fp_push(MEMF(esi + 0xD8)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005371A; /* jne: not equal / not zero */

loc_00053712: ;
    fp_top() = fp_top() + MEMF(0x3CB6AC); /* fadd dword ptr [0x3cb6ac] */
    goto loc_00053720;

loc_0005371A: ;
    fp_top() = fp_top() - MEMF(0x3CB6AC); /* fsub dword ptr [0x3cb6ac] */

loc_00053720: ;
    ecx = esi;
    MEMF(esi + 0x230) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0005372Du); RECOMP_ABI_CALL(0x0004A390u, sub_0004A390); /* call 0x0004A390 */

loc_0005372D: ;
    fp_top() = fp_top() * MEMF(0x3CB6A8); /* fmul dword ptr [0x3cb6a8] */
    PUSH32(esp, 0);
    edx = esp + 0x44;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    fp_push(MEMF(0x48D588)); /* fld float */
    ebx = esi + 0xF8;
    fp_top() = cos(fp_top()); /* fcos */
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    fp_push(MEMF(esi + 0x230)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x230)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x48D588)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() + MEMF(edi); /* fadd dword ptr [edi] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 4); /* fadd dword ptr [edi + 4] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() + MEMF(edi + 8); /* fadd dword ptr [edi + 8] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x38);
    MEM32(ebx + 8) = ecx;
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    MEMF(ebx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000537AEu); RECOMP_ABI_CALL(0x0004C290u, sub_0004C290); /* call 0x0004C290 */

loc_000537AE: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000537EB; /* jp: parity */

loc_000537BB: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x180)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x180] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000537ED; /* jne: not equal / not zero */

loc_000537D0: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x30);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = edx;
    MEM32(ebx + 8) = eax;
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

loc_000537EB: ;
    fp_pop(); /* fstp st(0) */

loc_000537ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00053800
 * Original: 0x00053800 - 0x000539A9 (425 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053800(void)
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

loc_00053800: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0005380Bu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0005380B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00053815u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00053815: ;
    fp_top() = fp_top() - MEMF(esi + 0x148); /* fsub dword ptr [esi + 0x148] */
    fp_top() = fp_top() * MEMF(0x3CB6B4); /* fmul dword ptr [0x3cb6b4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(esp + 4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    MEM32(esi + 0x14C) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0005391C; /* jnp: not parity */

loc_00053844: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C9404)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c9404] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005391C; /* je: equal / zero */

loc_00053859: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00053984; /* jne: not equal / not zero */

loc_0005386E: ;
    ecx = MEM32(esi + 0x11C);
    MEM32(esi + 0x110) = ecx;
    edx = MEM32(esi + 0x120);
    MEM32(esi + 0x114) = edx;
    eax = MEM32(esi + 0x124);
    MEM32(esi + 0x118) = eax;
    fp_push(MEMF(esi + 0xF8)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x110); /* fsub dword ptr [esi + 0x110] */
    fp_push(MEMF(esi + 0xFC)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x114); /* fsub dword ptr [esi + 0x114] */
    fp_push(MEMF(esi + 0x100)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x118); /* fsub dword ptr [esi + 0x118] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_top() = fp_top() + MEMF(esi + 0x110); /* fadd dword ptr [esi + 0x110] */
    MEMF(esi + 0x11C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_top() = fp_top() + MEMF(esi + 0x114); /* fadd dword ptr [esi + 0x114] */
    MEMF(esi + 0x120) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_top() = fp_top() + MEMF(esi + 0x118); /* fadd dword ptr [esi + 0x118] */
    MEMF(esi + 0x124) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x148)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3CB6B0); /* fadd dword ptr [0x3cb6b0] */
    MEMF(esi + 0x148) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x14C)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3C6E40); /* fsub dword ptr [0x3c6e40] */
    MEMF(esi + 0x14C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00053984;

loc_0005391C: ;
    ecx = esi;
    PUSH32(esp, 0x00053923u); RECOMP_ABI_CALL(0x00053650u, sub_00053650); /* call 0x00053650 */

loc_00053923: ;
    ecx = MEM32(esi + 0xF8);
    MEM32(esi + 0x11C) = ecx;
    edx = MEM32(esi + 0xFC);
    MEM32(esi + 0x120) = edx;
    eax = MEM32(esi + 0x100);
    MEM32(esi + 0x124) = eax;
    MEM32(esi + 0x110) = ecx;
    edx = MEM32(esi + 0x120);
    MEM32(esi + 0x114) = edx;
    eax = MEM32(esi + 0x124);
    MEM32(esi + 0x118) = eax;
    PUSH32(esp, 0x0005396Au); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0005396A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00053974u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00053974: ;
    MEMF(esi + 0x148) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x14C) = 0;

loc_00053984: ;
    edx = MEM32(esi + 0x14C);
    eax = esi + 0x11C;
    PUSH32(esp, eax);
    ecx = esi + 0x110;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi + 0x104;
    PUSH32(esp, 0x000539A4u); RECOMP_ABI_CALL(0x0023FC50u, sub_0023FC50); /* call 0x0023FC50 */

loc_000539A4: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000539B0
 * Original: 0x000539B0 - 0x000539EE (62 bytes, 19 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000539B0(void)
{

loc_000539B0: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    esi = ecx;
    PUSH32(esp, 0x000539BFu); RECOMP_ABI_CALL(0x00051D30u, sub_00051D30); /* call 0x00051D30 */

loc_000539BF: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x28) = ecx;
    MEM32(esi + 0x24) = edx;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(eax + 0x148) = 0;
    PUSH32(esp, 0x000539EAu); RECOMP_ABI_CALL(0x00052D40u, sub_00052D40); /* call 0x00052D40 */

loc_000539EA: ;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000539F0
 * Original: 0x000539F0 - 0x00053B9D (429 bytes, 138 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000539F0(void)
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

loc_000539F0: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x40);
    ebp = ecx;
    ecx = esp + 0x40;
    MEM32(esp + 0x40) = edi;
    PUSH32(esp, 0x00053A0Au); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_00053A0A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00053A34; /* je: equal / zero */

loc_00053A10: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00053A16u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00053A16: ;
    edx = MEM32(0x48D8FC);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00053A36; /* jne: not equal / not zero */

loc_00053A34: ;
    esi = 0; /* xor self */

loc_00053A36: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x00053A43u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_00053A43: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00053A6D; /* je: equal / zero */

loc_00053A49: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00053A4Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00053A4F: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00053A6F; /* jne: not equal / not zero */

loc_00053A6D: ;
    edi = 0; /* xor self */

loc_00053A6F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00053B93; /* je: equal / zero */

loc_00053A77: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00053A98; /* je: equal / zero */

loc_00053A7B: ;
    fp_push(MEMF(edi + 0x28)); /* fld float */
    eax = MEM32(edi + 0x20);
    fp_top() = fp_top() + MEMF(0x3C94A8); /* fadd dword ptr [0x3c94a8] */
    ecx = MEM32(edi + 0x24);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00053AAD;

loc_00053A98: ;
    edx = MEM32(esi + 0x20);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x28);
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;

loc_00053AAD: ;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0;
    edx = MEM32(esi + 0x30);
    eax = edx;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x00053AD4u); RECOMP_ABI_CALL(0x001206E0u, sub_001206E0); /* call 0x001206E0 */

loc_00053AD4: ;
    fp_top() = fp_top() + MEMF(esp + 0x50); /* fadd dword ptr [esp + 0x50] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00053AE0u); RECOMP_ABI_CALL(0x001206E0u, sub_001206E0); /* call 0x001206E0 */

loc_00053AE0: ;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x34);
    edx = ecx;
    PUSH32(esp, edx);
    MEM32(esp + 0x48) = ecx;
    PUSH32(esp, 0x00053AF3u); RECOMP_ABI_CALL(0x001206E0u, sub_001206E0); /* call 0x001206E0 */

loc_00053AF3: ;
    fp_top() = fp_top() + MEMF(esp + 0x50); /* fadd dword ptr [esp + 0x50] */
    esp = esp + 4;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00053B02u); RECOMP_ABI_CALL(0x001206E0u, sub_001206E0); /* call 0x001206E0 */

loc_00053B02: ;
    eax = esp + 0x30;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00053B15u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_00053B15: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    edx = MEM32(eax + 8);
    fp_push(MEMF(esp + 0x50)); /* fld float */
    edi = MEM32(esp + 0x60);
    fp_top() = -fp_top(); /* fchs */
    ebx = MEM32(esp + 0x5C);
    MEMF(esp + 0x4C) = (float)fp_top(); /* fst */
    esi = MEM32(esp + 0x48);
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEM32(esp + 0x34) = edx;
    esp = esp + 0xC;
    PUSH32(esp, edi);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    fp_top() = fp_top() * MEMF(esp + 0x48); /* fmul dword ptr [esp + 0x48] */
    PUSH32(esp, eax);
    ecx = esi + 0x104;
    PUSH32(esp, ecx);
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    PUSH32(esp, esi);
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    ecx = ebp;
    fp_top() = fp_top() * MEMF(esp + 0x54); /* fmul dword ptr [esp + 0x54] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x28); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x2C); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(esp + 0x30); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00053B82u); RECOMP_ABI_CALL(0x00052920u, sub_00052920); /* call 0x00052920 */

loc_00053B82: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00053B93u); RECOMP_ABI_CALL(0x00052BB0u, sub_00052BB0); /* call 0x00052BB0 */

loc_00053B93: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00053BA0
 * Original: 0x00053BA0 - 0x00053CD9 (313 bytes, 79 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053BA0(void)
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

loc_00053BA0: ;
    esp = esp - 0x204;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    MEM32(esp + 0x204) = eax;
    eax = MEM32(esp + 0x20C);
    PUSH32(esp, 0x100);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00053BCCu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00053BCC: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x3CAA94);
    ecx = esp + 8;
    MEM8(esp + 0x107) = 0;
    PUSH32(esp, 0x00053BE5u); RECOMP_ABI_CALL(0x0013CFF0u, sub_0013CFF0); /* call 0x0013CFF0 */

loc_00053BE5: ;
    eax = MEM32(esp + 0x210);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00053BFA; /* je: equal / zero */

loc_00053BF0: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x00053BFAu); RECOMP_ABI_CALL(0x0013CFF0u, sub_0013CFF0); /* call 0x0013CFF0 */

loc_00053BFA: ;
    edx = esp + 0x104;
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    MEM8(esp + 0x110) = 0;
    PUSH32(esp, 0x00053C16u); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_00053C16: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x00053C1Eu); RECOMP_ABI_CALL(0x0013D320u, sub_0013D320); /* call 0x0013D320 */

loc_00053C1E: ;
    edx = MEM32(eax);
    ecx = esp + 0x104;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00053C2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00053C2D: ;
    SET_LO8(ecx, MEM8(esp + 0x214));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    MEM32(esi + 0x2F4) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00053C6E; /* je: equal / zero */

loc_00053C3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00053C6E; /* je: equal / zero */

loc_00053C42: ;
    PUSH32(esp, 0x00053C47u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00053C47: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00053C51u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00053C51: ;
    MEMF(esi + 0x2F8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x2F4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00053C62u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00053C62: ;
    fp_top() = fp_top() + MEMF(esi + 0x2F8); /* fadd dword ptr [esi + 0x2f8] */
    MEMF(esi + 0x2FC) = (float)fp_top(); fp_pop(); /* fstp */

loc_00053C6E: ;
    SET_LO8(ecx, MEM8(esp + 0x21C));
    SET_LO8(edx, MEM8(esp + 0x218));
    SET_LO8(eax, MEM8(esi + 0x410));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    SET_LO8(ecx, LO8(ecx) << 5);
    SET_LO8(eax, LO8(eax) & 0x9F);
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    PUSH32(esp, 0);
    MEM8(esi + 0x410) = LO8(ecx);
    PUSH32(esp, 2);
    ecx = esi + 4;
    MEM32(esi + 0x300) = 0;
    PUSH32(esp, 0x00053CAFu); RECOMP_ABI_CALL(0x00051D30u, sub_00051D30); /* call 0x00051D30 */

loc_00053CAF: ;
    ecx = esi;
    PUSH32(esp, 0x00053CB6u); RECOMP_ABI_CALL(0x00052E00u, sub_00052E00); /* call 0x00052E00 */

loc_00053CB6: ;
    ecx = MEM32(esi + 0x2F4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ecx = MEM32(esp + 0x204);
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    PUSH32(esp, 0x00053CD0u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00053CD0: ;
    esp = esp + 0x204;
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00053CE0
 * Original: 0x00053CE0 - 0x00053E81 (417 bytes, 116 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00053CE0(void)
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

loc_00053CE0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00053CEAu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00053CEA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00053CF4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00053CF4: ;
    MEMF(edi + 0x5C) = (float)fp_top(); /* fst */
    SET_LO8(edx, MEM8(edi + 0x6E));
    MEMF(edi + 0x60) = (float)fp_top(); /* fst */
    esi = MEM32(esp + 0x10);
    MEMF(edi + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(edx, LO8(edx) & 0xFE);
    MEM8(edi + 0x6E) = LO8(edx);
    eax = MEM32(0x498D90);
    MEM32(edi + 0x68) = eax;
    eax = MEM32(edi + 0x58);
    eax = eax - 2;
    ebp = 0;
    if ((eax == 0)) goto loc_00053D45; /* je: equal / zero */

loc_00053D1F: ;
    eax = eax - 7;
    if ((eax != 0)) goto loc_00053D6F; /* jne: not equal / not zero */

loc_00053D24: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x00053D2Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00053D2E: ;
    _fa = (uint32_t)(MEM8(edi + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x6C), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00053D3F; /* je: equal / zero */

loc_00053D34: ;
    ecx = MEM32(edi + 0x48);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00053D3Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00053D3F: ;
    MEM16(edi + 0x6C) = LO16(ebp);
    goto loc_00053D6F;

loc_00053D45: ;
    SET_LO8(edx, MEM8(esi + 0x410));
    SET_LO8(edx, LO8(edx) & 0xBF);
    SET_LO8(edx, LO8(edx) | 0x20);
    MEM32(esi + 0x2F4) = ebp;
    MEM32(esi + 0x2F8) = ebp;
    MEM32(esi + 0x2FC) = ebp;
    MEM32(esi + 0x300) = ebp;
    MEM8(esi + 0x410) = LO8(edx);

loc_00053D6F: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00053D88; /* je: equal / zero */

loc_00053D77: ;
    ecx = MEM32(eax);
    MEM32(edi + 0xC) = ecx;
    edx = MEM32(eax + 4);
    MEM32(edi + 0x10) = edx;
    eax = MEM32(eax + 8);
    MEM32(edi + 0x14) = eax;

loc_00053D88: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00053DA1; /* je: equal / zero */

loc_00053D90: ;
    ecx = MEM32(eax);
    MEM32(edi + 0x18) = ecx;
    edx = MEM32(eax + 4);
    MEM32(edi + 0x1C) = edx;
    eax = MEM32(eax + 8);
    MEM32(edi + 0x20) = eax;

loc_00053DA1: ;
    _fa = (uint32_t)(MEM32(edi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x58), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00053DD3; /* je: equal / zero */

loc_00053DA6: ;
    _fa = (uint32_t)(MEM8(esi + 0x411)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x411), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00053DD3; /* jne: not equal / not zero */

loc_00053DAF: ;
    PUSH32(esp, 0x00053DB4u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00053DB4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00053DBBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00053DBB: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x45800000);
    PUSH32(esp, 0x42800000);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00053DCCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00053DCC: ;
    ecx = esi;
    PUSH32(esp, 0x00053DD3u); RECOMP_ABI_CALL(0x00050880u, sub_00050880); /* call 0x00050880 */

loc_00053DD3: ;
    MEM32(edi + 0x58) = ebp;
    _fa = (uint32_t)(MEM8(esi + 0x411)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x411), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00053DEB; /* jne: not equal / not zero */

loc_00053DDF: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00053DE9u); RECOMP_ABI_CALL(0x000533B0u, sub_000533B0); /* call 0x000533B0 */

loc_00053DE9: ;
    goto loc_00053E66;

loc_00053DEB: ;
    ecx = MEM32(esi + 0x104);
    MEM32(esi + 0xF8) = ecx;
    edx = MEM32(esi + 0x108);
    MEM32(esi + 0xFC) = edx;
    eax = MEM32(esi + 0x10C);
    MEM32(esi + 0x100) = eax;
    MEM32(esi + 0x11C) = ecx;
    edx = MEM32(esi + 0xFC);
    MEM32(esi + 0x120) = edx;
    eax = MEM32(esi + 0x100);
    MEM32(esi + 0x124) = eax;
    MEM32(esi + 0x110) = ecx;
    edx = MEM32(esi + 0x120);
    MEM32(esi + 0x114) = edx;
    eax = MEM32(esi + 0x124);
    MEM32(esi + 0x118) = eax;
    PUSH32(esp, 0x00053E50u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00053E50: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00053E5Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00053E5A: ;
    MEMF(esi + 0x148) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x14C) = ebp;

loc_00053E66: ;
    ecx = esi;
    PUSH32(esp, 0x00053E6Du); RECOMP_ABI_CALL(0x000530F0u, sub_000530F0); /* call 0x000530F0 */

loc_00053E6D: ;
    SET_LO8(eax, MEM8(esi + 0x411));
    SET_LO8(eax, LO8(eax) & 0xBF);
    POP32(esp, edi);
    MEM8(esi + 0x411) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00053E90
 * Original: 0x00053E90 - 0x00053ECF (63 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00053E90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(edx, MEM8(esi + 0x410));
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(eax, LO8(eax) << 1);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    MEM8(esi + 0x410) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_00053EC1; /* je: equal / zero */

loc_00053EB3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xE8); PUSH32(esp, 0x00053EBDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00053EBD: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00053EC1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00053ECBu); RECOMP_ABI_CALL(0x00053CE0u, sub_00053CE0); /* call 0x00053CE0 */

loc_00053ECB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00053ED0
 * Original: 0x00053ED0 - 0x00053F10 (64 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053ED0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00053ED0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    ecx = esi + 4;
    PUSH32(esp, 0x00053EE2u); RECOMP_ABI_CALL(0x00051D30u, sub_00051D30); /* call 0x00051D30 */

loc_00053EE2: ;
    ecx = esi;
    PUSH32(esp, 0x00053EE9u); RECOMP_ABI_CALL(0x00053650u, sub_00053650); /* call 0x00053650 */

loc_00053EE9: ;
    PUSH32(esp, 0x00053EEEu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00053EEE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00053EF8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00053EF8: ;
    MEMF(esi + 0x148) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    PUSH32(esp, 0x00053F05u); RECOMP_ABI_CALL(0x00053270u, sub_00053270); /* call 0x00053270 */

loc_00053F05: ;
    ecx = esi;
    PUSH32(esp, 0x00053F0Cu); RECOMP_ABI_CALL(0x00053800u, sub_00053800); /* call 0x00053800 */

loc_00053F0C: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00053F10
 * Original: 0x00053F10 - 0x0005412C (540 bytes, 204 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053F10(void)
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

loc_00053F10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x6E)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6E), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00053F51; /* jne: not equal / not zero */

loc_00053F20: ;
    fp_push(MEMF(esi + 0x64)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00053FD7; /* jne: not equal / not zero */

loc_00053F34: ;
    PUSH32(esp, 0x00053F39u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00053F39: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00053F43u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00053F43: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x64)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x64] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00053FD7; /* jp: parity */

loc_00053F51: ;
    PUSH32(esp, edi);
    edi = esi + 0x68;
    ecx = edi;
    PUSH32(esp, 0x00053F5Cu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_00053F5C: ;
    ebx = eax;
    eax = MEM32(edi);
    ecx = esp + 0x10;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00053F71u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_00053F71: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00053F9F; /* je: equal / zero */

loc_00053F77: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00053F7Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00053F7D: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    ebx = MEM32(esp + 0x18);
    if (TEST_NZ(_fa, _fb)) goto loc_00053FA1; /* jne: not equal / not zero */

loc_00053F9F: ;
    edi = 0; /* xor self */

loc_00053FA1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00053FC0; /* je: equal / zero */

loc_00053FA5: ;
    eax = MEM32(ebx + 0x20);
    MEM32(ebp + 0x88) = eax;
    ecx = MEM32(ebx + 0x24);
    MEM32(ebp + 0x8C) = ecx;
    edx = MEM32(ebx + 0x28);
    MEM32(ebp + 0x90) = edx;

loc_00053FC0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00053FD7; /* je: equal / zero */

loc_00053FC5: ;
    fp_push(MEMF(ebp + 0x90)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C94A8); /* fadd dword ptr [0x3c94a8] */
    MEMF(ebp + 0x90) = (float)fp_top(); fp_pop(); /* fstp */

loc_00053FD7: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ebx, 2);
    if (TEST_Z(_fa, _fb)) goto loc_0005400A; /* je: equal / zero */

loc_00053FE0: ;
    _fa = (uint32_t)(MEM8(esi + 0x6E)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6E), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005400A; /* jne: not equal / not zero */

loc_00053FE5: ;
    PUSH32(esp, 0x00053FEAu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00053FEA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00053FF4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00053FF4: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x5C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x5c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005400A; /* jne: not equal / not zero */

loc_00053FFE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0005400Au); RECOMP_ABI_CALL(0x00053CE0u, sub_00053CE0); /* call 0x00053CE0 */

loc_0005400A: ;
    ecx = ebp;
    PUSH32(esp, 0x00054011u); RECOMP_ABI_CALL(0x00051DD0u, sub_00051DD0); /* call 0x00051DD0 */

loc_00054011: ;
    eax = MEM32(esi + 0x58);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000540F8; /* ja: above (unsigned >) */

loc_0005401E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x5412C); /* switch: 9 entries, 9 targets */
    if (_jt == 0x00054025u) goto loc_00054025;
    if (_jt == 0x00054051u) goto loc_00054051;
    if (_jt == 0x0005405Fu) goto loc_0005405F;
    if (_jt == 0x0005406Du) goto loc_0005406D;
    if (_jt == 0x0005407Bu) goto loc_0005407B;
    if (_jt == 0x00054096u) goto loc_00054096;
    if (_jt == 0x000540A5u) goto loc_000540A5;
    if (_jt == 0x000540D5u) goto loc_000540D5;
    if (_jt == 0x000540EAu) goto loc_000540EA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00054025: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0005404Au); RECOMP_ABI_CALL(0x00052600u, sub_00052600); /* call 0x00052600 */

loc_0005404A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 32; return; /* ret 28 */

loc_00054051: ;
    ecx = ebp;
    PUSH32(esp, 0x00054058u); RECOMP_ABI_CALL(0x00052E00u, sub_00052E00); /* call 0x00052E00 */

loc_00054058: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 32; return; /* ret 28 */

loc_0005405F: ;
    ecx = ebp;
    PUSH32(esp, 0x00054066u); RECOMP_ABI_CALL(0x00053270u, sub_00053270); /* call 0x00053270 */

loc_00054066: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 32; return; /* ret 28 */

loc_0005406D: ;
    ecx = ebp;
    PUSH32(esp, 0x00054074u); RECOMP_ABI_CALL(0x00053800u, sub_00053800); /* call 0x00053800 */

loc_00054074: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 32; return; /* ret 28 */

loc_0005407B: ;
    ecx = ebp;
    PUSH32(esp, 0x00054082u); RECOMP_ABI_CALL(0x000530F0u, sub_000530F0); /* call 0x000530F0 */

loc_00054082: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x0005408Fu); RECOMP_ABI_CALL(0x000533B0u, sub_000533B0); /* call 0x000533B0 */

loc_0005408F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 32; return; /* ret 28 */

loc_00054096: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0005409Eu); RECOMP_ABI_CALL(0x00052020u, sub_00052020); /* call 0x00052020 */

loc_0005409E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 32; return; /* ret 28 */

loc_000540A5: ;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000540B3; /* je: equal / zero */

loc_000540AB: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x000540B3u); RECOMP_ABI_CALL(0x00052110u, sub_00052110); /* call 0x00052110 */

loc_000540B3: ;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000540C0; /* je: equal / zero */

loc_000540B8: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x000540C0u); RECOMP_ABI_CALL(0x000521F0u, sub_000521F0); /* call 0x000521F0 */

loc_000540C0: ;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00054125; /* je: equal / zero */

loc_000540C6: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x000540CEu); RECOMP_ABI_CALL(0x00052330u, sub_00052330); /* call 0x00052330 */

loc_000540CE: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 32; return; /* ret 28 */

loc_000540D5: ;
    ecx = ebp;
    PUSH32(esp, 0x000540DCu); RECOMP_ABI_CALL(0x000530F0u, sub_000530F0); /* call 0x000530F0 */

loc_000540DC: ;
    ecx = ebp;
    PUSH32(esp, 0x000540E3u); RECOMP_ABI_CALL(0x00052430u, sub_00052430); /* call 0x00052430 */

loc_000540E3: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 32; return; /* ret 28 */

loc_000540EA: ;
    ecx = ebp;
    PUSH32(esp, 0x000540F1u); RECOMP_ABI_CALL(0x00052380u, sub_00052380); /* call 0x00052380 */

loc_000540F1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 32; return; /* ret 28 */

loc_000540F8: ;
    PUSH32(esp, 0x000540FDu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000540FD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x148); PUSH32(esp, 0x00054107u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00054107: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00054112; /* jne: not equal / not zero */

loc_0005410B: ;
    ecx = ebp;
    PUSH32(esp, 0x00054112u); RECOMP_ABI_CALL(0x000530F0u, sub_000530F0); /* call 0x000530F0 */

loc_00054112: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00054125u); RECOMP_ABI_CALL(0x000533B0u, sub_000533B0); /* call 0x000533B0 */

loc_00054125: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00054150
 * Original: 0x00054150 - 0x000541A0 (80 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054150(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00054150: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00054158u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00054158: ;
    ecx = eax;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    ecx = edx;
    ecx = ecx >> 0x1F;
    edx = edx + ecx + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054190; /* jge: greater or equal (signed >=) */

loc_00054172: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00054179u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00054179: ;
    ecx = eax;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    ecx = edx;
    ecx = ecx >> 0x1F;
    eax = edx + ecx + 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00054190: ;
    eax = 5;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000541A0
 * Original: 0x000541A0 - 0x000541B9 (25 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000541A0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_000541A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x3C); PUSH32(esp, 0x000541AEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000541AE: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x000541B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000541B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000541C0
 * Original: 0x000541C0 - 0x000541DB (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000541C0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_000541C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0xA4); PUSH32(esp, 0x000541CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000541CD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x000541D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000541D9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}



/**
 * sub_00054270
 * Original: 0x00054270 - 0x0005428F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054270(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00054270: ;
    eax = MEM32(0x48D59C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005428E; /* je: equal / zero */

loc_00054279: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00054281u); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_00054281: ;
    esp = esp + 8;
    MEM32(0x48D59C) = 0;

loc_0005428E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00054290
 * Original: 0x00054290 - 0x000542AD (29 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054290(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_00054290: ;
    SET_LO8(eax, MEM8(ecx + 0xC));
    SET_LO8(eax, LO8(eax) & 0xFE);
    MEM32(ecx + 4) = 0;
    MEM32(ecx) = 0;
    MEM32(ecx + 8) = 0xFFFFFFFFu;
    MEM8(ecx + 0xC) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_000542B0
 * Original: 0x000542B0 - 0x000542BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000542B0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000542B0: ;
    MEM32(ecx) = 0x3CB6CC;
    g_seh_ebp = ebp; sub_000AE0F0(); return; /* tail jmp 0x000AE0F0 */

}

/**
 * sub_000542C0
 * Original: 0x000542C0 - 0x000542E4 (36 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000542C0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000542C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3CB6CC;
    PUSH32(esp, 0x000542CEu); RECOMP_ABI_CALL(0x000AE0F0u, sub_000AE0F0); /* call 0x000AE0F0 */

loc_000542CE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000542DE; /* je: equal / zero */

loc_000542D5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000542DBu); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000542DB: ;
    esp = esp + 4;

loc_000542DE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000542F0
 * Original: 0x000542F0 - 0x00054571 (641 bytes, 185 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000542F0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000542F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E728);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB6E0);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0005431Au); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0005431A: ;
    ecx = MEM32(esp + 0x80);
    PUSH32(esp, 0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEM32(esp + 0x7C) = 0;
    PUSH32(esp, 0x00054335u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_00054335: ;
    edi = eax;
    ebx = ebx | 0xFFFFFFFFu;
    ecx = esp + 0x1C;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x74) = ebx;
    PUSH32(esp, 0x0005434Bu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0005434B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005455E; /* je: equal / zero */

loc_00054353: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    goto loc_00054360;

loc_00054357: ;
    edi = MEM32(esp + 0x18);
    goto loc_00054360;

    /* nop */

loc_00054360: ;
    esi = MEM32(edi + 8);
    ecx = 0; /* xor self */
    ebp = 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & edi;
    esi = ecx;
    if ((ecx == 0)) goto loc_00054514; /* je: equal / zero */

loc_0005437A: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x0005438Au); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0005438A: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x80) = ebp;
    PUSH32(esp, 0x0005439Du); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0005439D: ;
    ecx = esp + 0x34;
    edi = eax;
    MEM32(esp + 0x7C) = ebx;
    PUSH32(esp, 0x000543ACu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000543AC: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB6D8);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x000543BCu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000543BC: ;
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x80) = 2;
    PUSH32(esp, 0x000543D3u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000543D3: ;
    ecx = esp + 0x44;
    ebp = eax;
    MEM32(esp + 0x7C) = ebx;
    PUSH32(esp, 0x000543E2u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000543E2: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB6D0);
    ecx = esp + 0x5C;
    PUSH32(esp, 0x000543F2u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000543F2: ;
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x80) = 3;
    PUSH32(esp, 0x00054409u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00054409: ;
    ecx = esp + 0x54;
    ebx = eax;
    MEM32(esp + 0x7C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0005441Cu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0005441C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005450D; /* je: equal / zero */

loc_00054424: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005450D; /* je: equal / zero */

loc_0005442C: ;
    ecx = ebp;
    MEM8(esp + 0x1C) = 0;
    PUSH32(esp, 0x00054438u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00054438: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005443Eu); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_0005443E: ;
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM8(esp + 0x14) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0005445D; /* je: equal / zero */

loc_00054449: ;
    ecx = ebx;
    PUSH32(esp, 0x00054450u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00054450: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00054456u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_00054456: ;
    esp = esp + 4;
    MEM8(esp + 0x1C) = LO8(eax);

loc_0005445D: ;
    edx = MEM32(esp + 0x1C);
    ebp = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x8C);
    ebx = MEM32(esp + 0x84);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0005447Eu); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_0005447E: ;
    ecx = eax;
    PUSH32(esp, 0x00054485u); RECOMP_ABI_CALL(0x00048D50u, xml1_guest_character_talent_insert_declaration); /* call 0x00048D50 */

loc_00054485: ;
    PUSH32(esp, 0x0005448Au); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_0005448A: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = edi;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x00054499u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00054499: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000544A3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000544A3: ;
    MEM8(esp + 0x13) = LO8(eax);
    eax = MEM32(0x498DB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000544F9; /* je: equal / zero */

loc_000544B0: ;
    PUSH32(esp, 0x000544B5u); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_000544B5: ;
    edx = MEM32(eax);
    ecx = esp + 0x13;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000544C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000544C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000544F9; /* je: equal / zero */

loc_000544C5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000544CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000544CC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000544F9; /* jle: less or equal (signed <=) */

loc_000544D0: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM8(esp + 0x14) = 1;
    if (CMP_B(_fa, _fb)) goto loc_000544E1; /* jb: below (unsigned <) */

loc_000544DD: ;
    MEM8(esp + 0x14) = LO8(eax);

loc_000544E1: ;
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000544F2u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000544F2: ;
    ecx = eax;
    PUSH32(esp, 0x000544F9u); RECOMP_ABI_CALL(0x000487F0u, xml1_guest_talent_rank_set); /* call 0x000487F0 */

loc_000544F9: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x17;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00054506u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_00054506: ;
    ecx = eax;
    PUSH32(esp, 0x0005450Du); RECOMP_ABI_CALL(0x000481A0u, xml1_guest_talent_baseline_rank_set); /* call 0x000481A0 */

loc_0005450D: ;
    edi = MEM32(esp + 0x18);
    ebx = ebx | 0xFFFFFFFFu;

loc_00054514: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB6E0);
    ecx = esp + 0x6C;
    PUSH32(esp, 0x00054524u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00054524: ;
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, edi);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    MEM32(esp + 0x84) = 4;
    PUSH32(esp, 0x00054541u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_00054541: ;
    esi = eax;
    ecx = esp + 0x64;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x7C) = ebx;
    PUSH32(esp, 0x00054554u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00054554: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00054357; /* jne: not equal / not zero */

loc_0005455C: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0005455E: ;
    ecx = MEM32(esp + 0x6C);
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x70;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00054580
 * Original: 0x00054580 - 0x000546EA (362 bytes, 111 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054580(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00054580: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E760);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x48;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    edi = 0; /* xor self */
    PUSH32(esp, 0x3CB6F8);
    ecx = esp + 0x1C;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x000545B1u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000545B1: ;
    ecx = MEM32(esp + 0x68);
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x64) = edi;
    PUSH32(esp, 0x000545C4u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000545C4: ;
    ebp = ebp | 0xFFFFFFFFu;
    ecx = esp + 0x14;
    esi = eax;
    MEM32(esp + 0x5C) = ebp;
    PUSH32(esp, 0x000545D6u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000545D6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000546D6; /* je: equal / zero */

loc_000545DE: ;
    PUSH32(esp, ebx);
    /* nop */

loc_000545E0: ;
    edi = MEM32(esi + 8);
    ecx = 0; /* xor self */
    ebx = 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & esi;
    edi = ecx;
    if ((ecx == 0)) goto loc_00054697; /* je: equal / zero */

loc_000545FA: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB6F0);
    ecx = esp + 0x30;
    PUSH32(esp, 0x0005460Au); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0005460A: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x64) = ebx;
    PUSH32(esp, 0x0005461Au); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0005461A: ;
    ecx = esp + 0x28;
    ebx = eax;
    MEM32(esp + 0x60) = ebp;
    PUSH32(esp, 0x00054629u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00054629: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB6E8);
    ecx = esp + 0x40;
    PUSH32(esp, 0x00054639u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00054639: ;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x64) = 2;
    PUSH32(esp, 0x0005464Du); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0005464D: ;
    ecx = esp + 0x38;
    edi = eax;
    MEM32(esp + 0x60) = ebp;
    PUSH32(esp, 0x0005465Cu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0005465C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00054697; /* je: equal / zero */

loc_00054660: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    eax = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_0005467B; /* je: equal / zero */

loc_00054666: ;
    ecx = esp + 0x13;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00054672u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00054672: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00054678u); RECOMP_ABI_CALL(0x00138870u, xml1_guest_bone_name_lookup); /* call 0x00138870 */

loc_00054678: ;
    esp = esp + 8;

loc_0005467B: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00054683u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00054683: ;
    edi = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x6C);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00054692u); RECOMP_ABI_CALL(0x000B1B30u, sub_000B1B30); /* call 0x000B1B30 */

loc_00054692: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = edi;

loc_00054697: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB6F8);
    ecx = esp + 0x50;
    PUSH32(esp, 0x000546A7u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000546A7: ;
    ecx = MEM32(esp + 0x6C);
    PUSH32(esp, esi);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    MEM32(esp + 0x68) = 3;
    PUSH32(esp, 0x000546BEu); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000546BE: ;
    ecx = esp + 0x48;
    esi = eax;
    MEM32(esp + 0x60) = ebp;
    PUSH32(esp, 0x000546CDu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000546CD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000545E0; /* jne: not equal / not zero */

loc_000546D5: ;
    POP32(esp, ebx);

loc_000546D6: ;
    ecx = MEM32(esp + 0x54);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x54;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000546F0
 * Original: 0x000546F0 - 0x000547FB (267 bytes, 80 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000546F0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000546F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E788);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB704);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0005471Bu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0005471B: ;
    ebp = MEM32(esp + 0x50);
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x4C) = 0;
    PUSH32(esp, 0x00054735u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_00054735: ;
    ebx = ebx | 0xFFFFFFFFu;
    ecx = esp + 0xC;
    esi = eax;
    MEM32(esp + 0x44) = ebx;
    PUSH32(esp, 0x00054747u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00054747: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000547E7; /* je: equal / zero */

loc_0005474F: ;
    PUSH32(esp, edi);

loc_00054750: ;
    edi = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & esi;
    edi = ecx;
    if ((ecx == 0)) goto loc_000547AA; /* je: equal / zero */

loc_00054762: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00054772u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00054772: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x4C) = 1;
    PUSH32(esp, 0x00054786u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00054786: ;
    ecx = esp + 0x20;
    edi = eax;
    MEM32(esp + 0x48) = ebx;
    PUSH32(esp, 0x00054795u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00054795: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000547AA; /* je: equal / zero */

loc_00054799: ;
    ecx = edi;
    PUSH32(esp, 0x000547A0u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000547A0: ;
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000547AAu); RECOMP_ABI_CALL(0x000B18B0u, sub_000B18B0); /* call 0x000B18B0 */

loc_000547AA: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB704);
    ecx = esp + 0x38;
    PUSH32(esp, 0x000547BAu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000547BA: ;
    PUSH32(esp, esi);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x50) = 2;
    PUSH32(esp, 0x000547CFu); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000547CF: ;
    ecx = esp + 0x30;
    esi = eax;
    MEM32(esp + 0x48) = ebx;
    PUSH32(esp, 0x000547DEu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000547DE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00054750; /* jne: not equal / not zero */

loc_000547E6: ;
    POP32(esp, edi);

loc_000547E7: ;
    ecx = MEM32(esp + 0x3C);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x3C;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00054800
 * Original: 0x00054800 - 0x00054826 (38 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054800(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
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

loc_00054800: ;
    eax = MEM32(esp + 4);
    fp_push(MEMD(0x3CB710)); /* fld double */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    PUSH32(esp, 0x00054818u); RECOMP_ABI_CALL(0x00341990u, sub_00341990); /* call 0x00341990 */

loc_00054818: ;
    fp_top() = fp_top() * MEMF(0x3C8C98); /* fmul dword ptr [0x3c8c98] */
    PUSH32(esp, 0x00054823u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00054823: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00054830
 * Original: 0x00054830 - 0x0005489D (109 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054830(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00054830: ;
    eax = MEM32(ecx + 0xDA58);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005485B; /* jne: not equal / not zero */

loc_0005483C: ;
    /* nop */

loc_00054840: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(XML1_CHARACTER_POOL_CAPACITY) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x18 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0005488C; /* jge: greater or equal (signed >=) */

loc_0005484B: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(ecx + eax * 4 + 0xDA58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00054840; /* je: equal / zero */

loc_0005485B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00054868; /* jne: not equal / not zero */

loc_00054862: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_00054868: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00054872; /* jne: not equal / not zero */

loc_0005486C: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_00054872: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005487C; /* jne: not equal / not zero */

loc_00054876: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_0005487C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00054887; /* jne: not equal / not zero */

loc_00054880: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00054880; /* je: equal / zero */

loc_00054887: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(XML1_CHARACTER_POOL_CAPACITY) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x18 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054891; /* jl: less (signed <) */

loc_0005488C: ;
    edx = 0x18;

loc_00054891: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000548A0
 * Original: 0x000548A0 - 0x0005499E (254 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000548A0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000548A0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0xD980);
    PUSH32(esp, edi);
    edi = ebx + 0xD980;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000548D1; /* jne: not equal / not zero */

loc_000548B6: ;
    ecx = ecx & 0xFFFFFFE0u;
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(XML1_CHARACTER_POOL_CAPACITY) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x18 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054995; /* jge: greater or equal (signed >=) */

loc_000548C5: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000548B6; /* je: equal / zero */

loc_000548D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000548DE; /* jne: not equal / not zero */

loc_000548D8: ;
    ecx = ecx + 0x10;
    eax = eax >> 0x10;

loc_000548DE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000548E8; /* jne: not equal / not zero */

loc_000548E2: ;
    ecx = ecx + 8;
    eax = eax >> 8;

loc_000548E8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000548F2; /* jne: not equal / not zero */

loc_000548EC: ;
    ecx = ecx + 4;
    eax = eax >> 4;

loc_000548F2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000548FD; /* jne: not equal / not zero */

loc_000548F6: ;
    eax = eax >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000548F6; /* je: equal / zero */

loc_000548FD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(XML1_CHARACTER_POOL_CAPACITY) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x18 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054995; /* jge: greater or equal (signed >=) */

loc_00054906: ;
    PUSH32(esp, esi);
    esi = ecx;
    /* nop */

loc_00054910: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x488);
    edx = MEM32(ecx + ebx);
    ecx = ecx + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00054921u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00054921: ;
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(XML1_CHARACTER_POOL_CAPACITY) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054994; /* jge: greater or equal (signed >=) */

loc_00054929: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    edx = MEM32(edi + edx * 4);
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00054957; /* jne: not equal / not zero */

loc_0005493C: ;
    /* nop */

loc_00054940: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(XML1_CHARACTER_POOL_CAPACITY) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054994; /* jge: greater or equal (signed >=) */

loc_0005494B: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = MEM32(edi + ecx * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00054940; /* je: equal / zero */

loc_00054957: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00054965; /* jne: not equal / not zero */

loc_0005495F: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_00054965: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005496F; /* jne: not equal / not zero */

loc_00054969: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_0005496F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005497A; /* jne: not equal / not zero */

loc_00054974: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_0005497A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00054988; /* jne: not equal / not zero */

loc_0005497F: ;
    /* nop */

loc_00054980: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00054980; /* je: equal / zero */

loc_00054988: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(XML1_CHARACTER_POOL_CAPACITY) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054994; /* jge: greater or equal (signed >=) */

loc_0005498D: ;
    esi = eax;
    goto loc_00054910;

loc_00054994: ;
    POP32(esp, esi);

loc_00054995: ;
    MEM32(edi) = 0;
    MEM32(edi + 4) = 0; /* reset both construction words */
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}



/**
 * sub_000549C0
 * Original: 0x000549C0 - 0x000549D7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000549C0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_000549C0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x400) = ecx;
    MEM32(eax + 0x404) = ecx;
    MEM32(eax + 0x408) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000549E0
 * Original: 0x000549E0 - 0x00054A0E (46 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000549E0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000549E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000549EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000549EF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00054A08; /* je: equal / zero */

loc_000549F3: ;
    eax = ZX8(LO8(eax));
    edx = eax + eax * 2;
    SET_LO8(eax, MEM8(esi + edx * 8 + 0xDB46));
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(eax, LO8(eax) & 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00054A08: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00054A10
 * Original: 0x00054A10 - 0x00054A55 (69 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054A10(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00054A10: ;
    /* resetgame's campaign-list clear; retain availability, not mission flags. */
    if(xml1_newgame_plus_starting && MEM32(esp)==0x0018CFFC){esp+=4;return;}
    if(MEM32(esp)==0x0018CFFC) raven_power_selections_read(NULL,0);

    edx = MEM32(ecx + 0x1BEE8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00054A4A; /* jle: less or equal (signed <=) */

loc_00054A1C: ;
    PUSH32(esp, ebx);
    /* nop */

loc_00054A20: ;
    edx = ZX8(MEM8(ecx + eax + 0x1BDE8));
    edx = edx + edx * 2;
    SET_LO8(ebx, MEM8(ecx + edx * 8 + 0xDB46));
    edx = ecx + edx * 8 + 0xDB46;
    SET_LO8(ebx, LO8(ebx) & 0xFD);
    MEM8(edx) = LO8(ebx);
    edx = MEM32(ecx + 0x1BEE8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054A20; /* jl: less (signed <) */

loc_00054A49: ;
    POP32(esp, ebx);

loc_00054A4A: ;
    MEM32(ecx + 0x1BEE8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00054A60
 * Original: 0x00054A60 - 0x00054A91 (49 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054A60(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00054A60: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00054A8E; /* je: equal / zero */

loc_00054A68: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 2;
    SET_LO8(edx, MEM8(ecx + eax * 8 + 0xDB46));
    eax = ecx + eax * 8;
    SET_LO8(ecx, 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00054A8E; /* jne: not equal / not zero */

loc_00054A7E: ;
    edx = MEM32(eax + 0xDB40);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00054A8E; /* jne: not equal / not zero */

loc_00054A88: ;
    MEM8(eax + 0xDB46) = MEM8(eax + 0xDB46) | LO8(ecx);

loc_00054A8E: ;
    esp += 8; return; /* ret 4 */

}





/**
 * sub_00054B20
 * Original: 0x00054B20 - 0x00054B82 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054B20(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00054B20: ;
    edx = ecx;
    eax = MEM32(edx + 0x13F8);
    eax = MEM32(edx + eax * 4 + 0xFF4);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x1400;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x13F8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF (32-bit) */
    MEM32(edx + 0x13F8) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00054B6C; /* jl: less (signed <) */

loc_00054B62: ;
    MEM32(edx + 0x13F8) = 0;

loc_00054B6C: ;
    MEM32(edx + 0x13FC) = MEM32(edx + 0x13FC) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x13FC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x1420);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x1420) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00054B90
 * Original: 0x00054B90 - 0x00054B9C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054B90(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_00054B90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00054B98u); RECOMP_ABI_CALL(0x000549C0u, sub_000549C0); /* call 0x000549C0 */

loc_00054B98: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00054BA0
 * Original: 0x00054BA0 - 0x00054C27 (135 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054BA0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00054BA0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00054BB2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00054BB2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00054BD9; /* jne: not equal / not zero */

loc_00054BB6: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = esi + 4;
    PUSH32(esp, 0x00054BC3u); RECOMP_ABI_CALL(0x00054830u, sub_00054830); /* call 0x00054830 */

loc_00054BC3: ;
    ecx = eax;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x488);
    eax = eax + edx;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_00054BD9: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 2;
    ecx = MEM32(esi + eax * 8 + 0xDB40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00054C0D; /* jne: not equal / not zero */

loc_00054BEA: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi + 4;
    PUSH32(esp, 0x00054BF7u); RECOMP_ABI_CALL(0x00054830u, sub_00054830); /* call 0x00054830 */

loc_00054BF7: ;
    ecx = eax;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x488);
    eax = eax + edx;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_00054C0D: ;
    eax = MEM32(esi + 0xDB28);
    edx = esi + 4;
    eax = eax & ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x488);
    eax = eax + edx;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00054C30
 * Original: 0x00054C30 - 0x00054CB0 (128 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054C30(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00054C30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x1BFEC);
    eax = 0; /* xor self */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00054CAC; /* jle: less or equal (signed <=) */

loc_00054C47: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = edi + 4;
    /* nop */

loc_00054C50: ;
    eax = ZX8(MEM8(edi + ebx + 0x1BEEC));
    edx = MEM32(ebp + 0xDB24);
    eax = eax + eax * 2;
    esi = MEM32(edi + eax * 8 + 0xDB40);
    esi = esi & edx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x488);
    SET_LO8(eax, MEM8(esi + ebp + 0x3A1));
    esi = esi + ebp;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00054C9B; /* jne: not equal / not zero */

loc_00054C7D: ;
    ecx = esi;
    PUSH32(esp, 0x00054C84u); RECOMP_ABI_CALL(0x000AF700u, sub_000AF700); /* call 0x000AF700 */

loc_00054C84: ;
    ecx = SX16(LO16(eax));
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00054C9B; /* jg: greater (signed >) */

loc_00054C8D: ;
    ecx = esi;
    PUSH32(esp, 0x00054C94u); RECOMP_ABI_CALL(0x000AF700u, sub_000AF700); /* call 0x000AF700 */

loc_00054C94: ;
    edx = SX16(LO16(eax));
    MEM32(esp + 0x10) = edx;

loc_00054C9B: ;
    eax = MEM32(edi + 0x1BFEC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054C50; /* jl: less (signed <) */

loc_00054CA6: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00054CAC: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00054CB0
 * Original: 0x00054CB0 - 0x00054D40 (144 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054CB0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00054CB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x1BFEC);
    eax = 0; /* xor self */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00054D2E; /* jle: less or equal (signed <=) */

loc_00054CC7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = edi + 4;
    /* nop */

loc_00054CD0: ;
    eax = ZX8(MEM8(edi + ebx + 0x1BEEC));
    edx = MEM32(ebp + 0xDB24);
    eax = eax + eax * 2;
    esi = MEM32(edi + eax * 8 + 0xDB40);
    esi = esi & edx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x488);
    SET_LO8(eax, MEM8(esi + ebp + 0x3A1));
    esi = esi + ebp;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00054D1D; /* jne: not equal / not zero */

loc_00054CFD: ;
    ecx = esi;
    PUSH32(esp, 0x00054D04u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_00054D04: ;
    ecx = ZX8(MEM8(eax + 0x19));
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00054D1D; /* jg: greater (signed >) */

loc_00054D0E: ;
    ecx = esi;
    PUSH32(esp, 0x00054D15u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_00054D15: ;
    edx = ZX8(MEM8(eax + 0x19));
    MEM32(esp + 0x10) = edx;

loc_00054D1D: ;
    eax = MEM32(edi + 0x1BFEC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054CD0; /* jl: less (signed <) */

loc_00054D28: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00054D2E: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}



/**
 * sub_00054E10
 * Original: 0x00054E10 - 0x00054E83 (115 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054E10(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00054E10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ebp = ebx + 0xDB40;

loc_00054E22: ;
    ecx = esi;
    PUSH32(esp, 0x00054E29u); RECOMP_ABI_CALL(0x00048C60u, xml1_guest_character_stats_reset); /* call 0x00048C60 */

loc_00054E29: ;
    ecx = esi;
    PUSH32(esp, 0x00054E30u); RECOMP_ABI_CALL(0x00047810u, sub_00047810); /* call 0x00047810 */

loc_00054E30: ;
    ecx = esi + 4;
    PUSH32(esp, 0x00054E38u); RECOMP_ABI_CALL(0x000472F0u, sub_000472F0); /* call 0x000472F0 */

loc_00054E38: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xF31C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 0xF31C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054E6D; /* jge: greater or equal (signed >=) */

loc_00054E40: ;
    _fa = (uint32_t)(MEM8(ebp + 6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 6), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00054E6D; /* je: equal / zero */

loc_00054E46: ;
    edx = MEM32(ebp);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00054E6D; /* je: equal / zero */

loc_00054E4D: ;
    ecx = MEM32(ebx + 0xDB28);
    eax = ebx + 4;
    ecx = ecx & edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x488);
    ecx = ecx + eax;
    PUSH32(esp, 0x00054E65u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_00054E65: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00054E6Du); RECOMP_ABI_CALL(0x000490F0u, xml1_guest_character_stats_assign); /* call 0x000490F0 */

loc_00054E6D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 0x18;
    esi = esi + 0x1E4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(XML1_SNAPSHOT_COUNT) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, XML1_SNAPSHOT_COUNT (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054E22; /* jl: less (signed <) */

loc_00054E7C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00054E90
 * Original: 0x00054E90 - 0x00054F03 (115 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054E90(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00054E90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ebp = ebx + 0xDB40;

loc_00054EA2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xF31C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 0xF31C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054ED7; /* jge: greater or equal (signed >=) */

loc_00054EAA: ;
    _fa = (uint32_t)(MEM8(ebp + 6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 6), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00054ED7; /* je: equal / zero */

loc_00054EB0: ;
    edx = MEM32(ebp);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00054ED7; /* je: equal / zero */

loc_00054EB7: ;
    ecx = MEM32(ebx + 0xDB28);
    eax = ebx + 4;
    ecx = ecx & edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x488);
    ecx = ecx + eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00054ED0u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_00054ED0: ;
    ecx = eax;
    PUSH32(esp, 0x00054ED7u); RECOMP_ABI_CALL(0x000490F0u, xml1_guest_character_stats_assign); /* call 0x000490F0 */

loc_00054ED7: ;
    ecx = esi;
    PUSH32(esp, 0x00054EDEu); RECOMP_ABI_CALL(0x00048C60u, xml1_guest_character_stats_reset); /* call 0x00048C60 */

loc_00054EDE: ;
    ecx = esi;
    PUSH32(esp, 0x00054EE5u); RECOMP_ABI_CALL(0x00047810u, sub_00047810); /* call 0x00047810 */

loc_00054EE5: ;
    ecx = esi + 4;
    PUSH32(esp, 0x00054EEDu); RECOMP_ABI_CALL(0x000472F0u, sub_000472F0); /* call 0x000472F0 */

loc_00054EED: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 0x18;
    esi = esi + 0x1E4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(XML1_SNAPSHOT_COUNT) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, XML1_SNAPSHOT_COUNT (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054EA2; /* jl: less (signed <) */

loc_00054EFC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00054F10
 * Original: 0x00054F10 - 0x00054F60 (80 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00054F10(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00054F10: ;
    if(xml1_newgame_plus_starting && MEM32(esp)==0x0018D008){esp+=4;return;}

    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xF31C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00054F5D; /* jle: less or equal (signed <=) */

loc_00054F20: ;
    PUSH32(esp, esi);
    esi = edi + 0xDB40;

loc_00054F27: ;
    _fa = (uint32_t)(MEM8(esi + 6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 6), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00054F4E; /* je: equal / zero */

loc_00054F2D: ;
    ecx = MEM32(edi + 0xDB28);
    edx = MEM32(esi);
    eax = edi + 4;
    ecx = ecx & edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x488);
    ecx = ecx + eax;
    PUSH32(esp, 0x00054F47u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_00054F47: ;
    ecx = eax;
    PUSH32(esp, 0x00054F4Eu); RECOMP_ABI_CALL(0x00047810u, sub_00047810); /* call 0x00047810 */

loc_00054F4E: ;
    eax = MEM32(edi + 0xF31C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054F27; /* jl: less (signed <) */

loc_00054F5C: ;
    POP32(esp, esi);

loc_00054F5D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00054F60
 * Original: 0x00054F60 - 0x00054FCD (109 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054F60(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00054F60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xF31C);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    SET_LO8(ebx, 1);
    if (CMP_LE(_fas, _fbs)) goto loc_00054FCA; /* jle: less or equal (signed <=) */

loc_00054F75: ;
    goto loc_00054F80;

    /* nop */
    edi = edi;

loc_00054F80: ;
    eax = eax + eax * 2;
    SET_LO8(ecx, MEM8(esi + eax * 8 + 0xDB46));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    eax = esi + eax * 8;
    if (TEST_NZ(_fa, _fb)) goto loc_00054FBB; /* jne: not equal / not zero */

loc_00054F92: ;
    edx = MEM32(eax + 0xDB40);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00054FBB; /* je: equal / zero */

loc_00054F9C: ;
    ecx = MEM32(esi + 0xDB28);
    eax = esi + 4;
    ecx = ecx & edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x488);
    ecx = ecx + eax;
    PUSH32(esp, 0x00054FB4u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_00054FB4: ;
    ecx = eax;
    PUSH32(esp, 0x00054FBBu); RECOMP_ABI_CALL(0x00047E80u, sub_00047E80); /* call 0x00047E80 */

loc_00054FBB: ;
    ecx = MEM32(esi + 0xF31C);
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(LO8(ebx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054F80; /* jl: less (signed <) */

loc_00054FCA: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00054FD0
 * Original: 0x00054FD0 - 0x00055013 (67 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054FD0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00054FD0: ;
    eax = ZX8(MEM8(esp + 4));
    eax = eax + eax * 2;
    SET_LO8(edx, MEM8(ecx + eax * 8 + 0xDB46));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    eax = ecx + eax * 8 + 0xDB30;
    if (TEST_Z(_fa, _fb)) goto loc_0005500D; /* je: equal / zero */

loc_00054FEB: ;
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005500D; /* je: equal / zero */

loc_00054FF2: ;
    eax = ecx + 4;
    ecx = MEM32(eax + 0xDB24);
    ecx = ecx & edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x488);
    ecx = ecx + eax;
    PUSH32(esp, 0x0005500Au); RECOMP_ABI_CALL(0x000AF700u, sub_000AF700); /* call 0x000AF700 */

loc_0005500A: ;
    esp += 8; return; /* ret 4 */

loc_0005500D: ;
    SET_LO8(eax, MEM8(eax + 0x14));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00055020
 * Original: 0x00055020 - 0x00055090 (112 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055020(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00055020: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xF31C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0005508D; /* jle: less or equal (signed <=) */

loc_0005502F: ;
    ecx = eax + eax * 2;
    PUSH32(esp, edi);
    edi = esi + ecx * 8 + 0xDB40;
    MEM32(esp + 8) = eax;
    edi = edi;

loc_00055040: ;
    edx = MEM32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005507E; /* je: equal / zero */

loc_00055046: ;
    ecx = MEM32(esi + 0xDB28);
    eax = esi + 4;
    ecx = ecx & edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x488);
    ecx = ecx + eax;
    PUSH32(esp, 0x0005505Eu); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_0005505E: ;
    SET_LO8(ecx, MEM8(eax + 0x10));
    eax = eax + 4;
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM8(eax + 0xC) = LO8(ecx);

loc_0005507E: ;
    eax = MEM32(esp + 8);
    edi = edi - 0x18;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 8) = eax;
    if ((_fa != 0)) goto loc_00055040; /* jne: not equal / not zero */

loc_0005508C: ;
    POP32(esp, edi);

loc_0005508D: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00055090
 * Original: 0x00055090 - 0x000550D5 (69 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055090(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00055090: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0005509Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005509F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000550D1; /* je: equal / zero */

loc_000550A3: ;
    eax = ZX8(LO8(eax));
    edx = eax + eax * 2;
    eax = MEM32(esi + edx * 8 + 0xDB40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000550D1; /* je: equal / zero */

loc_000550B4: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xDB28);
    edx = esi + 4;
    ecx = ecx & eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x488);
    ecx = ecx + edx;
    PUSH32(esp, 0x000550D1u); RECOMP_ABI_CALL(0x000B22D0u, sub_000B22D0); /* call 0x000B22D0 */

loc_000550D1: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000550E0
 * Original: 0x000550E0 - 0x00055129 (73 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000550E0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000550E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000550EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000550EF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00055125; /* je: equal / zero */

loc_000550F3: ;
    eax = ZX8(LO8(eax));
    edx = eax + eax * 2;
    eax = MEM32(esi + edx * 8 + 0xDB40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00055125; /* je: equal / zero */

loc_00055104: ;
    edx = esi + 4;
    POP32(esp, esi);
    MEM32(esp + 4) = 1;
    ecx = MEM32(edx + 0xDB24);
    ecx = ecx & eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x488);
    ecx = ecx + edx;
    g_seh_ebp = ebp; sub_000B14C0(); return; /* tail jmp 0x000B14C0 */

loc_00055125: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00055130
 * Original: 0x00055130 - 0x0005517A (74 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055130(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00055130: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xF31C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00055178; /* jle: less or equal (signed <=) */

loc_0005513E: ;
    PUSH32(esp, ebx);
    ecx = eax + eax * 2;
    PUSH32(esp, esi);
    esi = edi + ecx * 8 + 0xDB40;
    ebx = eax;
    /* nop */

loc_00055150: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00055170; /* je: equal / zero */

loc_00055156: ;
    ecx = MEM32(edi + 0xDB28);
    eax = edi + 4;
    ecx = ecx & edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x488);
    PUSH32(esp, 1);
    ecx = ecx + eax;
    PUSH32(esp, 0x00055170u); RECOMP_ABI_CALL(0x000B14C0u, sub_000B14C0); /* call 0x000B14C0 */

loc_00055170: ;
    esi = esi - 0x18;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00055150; /* jne: not equal / not zero */

loc_00055176: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00055178: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00055180
 * Original: 0x00055180 - 0x0005521E (158 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055180(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00055180: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0xF31C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00055219; /* jle: less or equal (signed <=) */

loc_0005519A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ebp + 0xDB40;

loc_000551A3: ;
    _fa = (uint32_t)(MEM8(ebx + 6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 6), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00055200; /* je: equal / zero */

loc_000551A9: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00055200; /* je: equal / zero */

loc_000551AF: ;
    esi = MEM32(ebp + 0xDB28);
    eax = ebp + 4;
    esi = esi & ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x488);
    esi = esi + eax;
    if ((esi == 0)) goto loc_00055200; /* je: equal / zero */

loc_000551C4: ;
    _fa = (uint32_t)(MEM32(esi + 0x398)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x398), 0x1B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055200; /* jne: not equal / not zero */

loc_000551CD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000551D3u); RECOMP_ABI_CALL(0x0002FF20u, sub_0002FF20); /* call 0x0002FF20 */

loc_000551D3: ;
    edi = eax;
    eax = MEM32(esp + 0x1C);
    esp = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000551E4u); RECOMP_ABI_CALL(0x000AF890u, sub_000AF890); /* call 0x000AF890 */

loc_000551E4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000551F1; /* jne: not equal / not zero */

loc_000551E8: ;
    ecx = esi;
    PUSH32(esp, 0x000551EFu); RECOMP_ABI_CALL(0x000AF950u, xml1_guest_character_reconcile_level); /* call 0x000AF950 */

loc_000551EF: ;
    goto loc_00055200;

loc_000551F1: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00055200; /* je: equal / zero */

loc_000551F9: ;
    ecx = edi;
    PUSH32(esp, 0x00055200u); RECOMP_ABI_CALL(0x00031F90u, sub_00031F90); /* call 0x00031F90 */

loc_00055200: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(ebp + 0xF31C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000551A3; /* jl: less (signed <) */

loc_00055216: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00055219: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00055220
 * Original: 0x00055220 - 0x00055255 (53 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055220(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00055220: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_00055250; /* jl: less (signed <) */

loc_0005522C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00055250; /* jge: greater or equal (signed >=) */

loc_00055231: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)XML1_SNAPSHOT_BYTES);
    ecx = eax + esi + 0x10858;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00055248u); RECOMP_ABI_CALL(0x00054E10u, sub_00054E10); /* call 0x00054E10 */

loc_00055248: ;
    MEM8(edi + esi + 0x1BDE4) = 1;

loc_00055250: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00055260
 * Original: 0x00055260 - 0x000552A0 (64 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055260(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00055260: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_0005529B; /* jl: less (signed <) */

loc_0005526C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0005529B; /* jge: greater or equal (signed >=) */

loc_00055271: ;
    SET_LO8(eax, MEM8(edi + esi + 0x1BDE4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005529B; /* je: equal / zero */

loc_0005527C: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)XML1_SNAPSHOT_BYTES);
    ecx = eax + esi + 0x10858;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00055293u); RECOMP_ABI_CALL(0x00054E90u, sub_00054E90); /* call 0x00054E90 */

loc_00055293: ;
    MEM8(edi + esi + 0x1BDE4) = 0;

loc_0005529B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000552A0
 * Original: 0x000552A0 - 0x000552F0 (80 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000552A0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000552A0: ;
    SET_LO8(edx, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000552ED; /* je: equal / zero */

loc_000552A8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX8(LO8(edx));
    eax = esi + esi * 2;
    SET_LO8(ebx, MEM8(ecx + eax * 8 + 0xDB46));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    eax = ecx + eax * 8 + 0xDB46;
    if (TEST_NZ(_fa, _fb)) goto loc_000552EB; /* jne: not equal / not zero */

loc_000552C3: ;
    SET_LO8(ebx, LO8(ebx) | 2);
    MEM8(eax) = LO8(ebx);
    eax = ecx + 0x1BDE8;
    ecx = MEM32(eax + 0x100);
    ecx = ecx + eax;
    MEM8(ecx) = LO8(edx);
    MEM32(eax + 0x100) = MEM32(eax + 0x100) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x100)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x000552E3u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000552E3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000552EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000552EB: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000552ED: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000552F0
 * Original: 0x000552F0 - 0x0005567E (910 bytes, 220 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000552F0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000552F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E7EE);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0xBC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    esi = 0; /* xor self */
    PUSH32(esp, 0x3CB780);
    ecx = esp + 0x50;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x00055324u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00055324: ;
    ecx = MEM32(esp + 0xDC);
    PUSH32(esp, esi);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    MEM32(esp + 0xD8) = esi;
    PUSH32(esp, 0x0005533Du); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_0005533D: ;
    ebx = eax;
    edi = edi | 0xFFFFFFFFu;
    ecx = esp + 0x48;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0xD0) = edi;
    PUSH32(esp, 0x00055356u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00055356: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055664; /* je: equal / zero */

loc_0005535E: ;
    PUSH32(esp, ebp);
    goto loc_00055365;

loc_00055361: ;
    ebx = MEM32(esp + 0x14);

loc_00055365: ;
    esi = MEM32(ebx + 8);
    ecx = 0; /* xor self */
    ebp = 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & ebx;
    esi = ecx;
    if ((ecx == 0)) goto loc_0005560F; /* je: equal / zero */

loc_0005537F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB778);
    ecx = esp + 0xC4;
    PUSH32(esp, 0x00055392u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00055392: ;
    edx = esp + 0xBC;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0xD8) = ebp;
    PUSH32(esp, 0x000553A8u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000553A8: ;
    ecx = esp + 0xBC;
    ebx = eax;
    MEM32(esp + 0xD4) = edi;
    PUSH32(esp, 0x000553BDu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000553BD: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB770);
    ecx = esp + 0x74;
    PUSH32(esp, 0x000553CDu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000553CD: ;
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0xD8) = 2;
    PUSH32(esp, 0x000553E4u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000553E4: ;
    ecx = esp + 0x6C;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0xD4) = edi;
    PUSH32(esp, 0x000553F8u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000553F8: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB764);
    ecx = esp + 0xB4;
    PUSH32(esp, 0x0005540Bu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0005540B: ;
    ecx = esp + 0xAC;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0xD8) = 3;
    PUSH32(esp, 0x00055425u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00055425: ;
    ecx = esp + 0xAC;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0xD4) = edi;
    PUSH32(esp, 0x0005543Cu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0005543C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB75C);
    ecx = esp + 0x94;
    PUSH32(esp, 0x0005544Fu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0005544F: ;
    edx = esp + 0x8C;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0xD8) = 4;
    PUSH32(esp, 0x00055469u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00055469: ;
    ecx = esp + 0x8C;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0xD4) = edi;
    PUSH32(esp, 0x00055480u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00055480: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB6E8);
    ecx = esp + 0x64;
    PUSH32(esp, 0x00055490u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00055490: ;
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0xD8) = 5;
    PUSH32(esp, 0x000554A7u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000554A7: ;
    ecx = esp + 0x5C;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0xD4) = edi;
    PUSH32(esp, 0x000554BBu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000554BB: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB74C);
    ecx = esp + 0x84;
    PUSH32(esp, 0x000554CEu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000554CE: ;
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0xD8) = 6;
    PUSH32(esp, 0x000554E5u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000554E5: ;
    ebp = eax;
    ecx = esp + 0x7C;
    MEM32(esp + 0xD4) = edi;
    PUSH32(esp, 0x000554F7u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000554F7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00055518; /* je: equal / zero */

loc_000554FB: ;
    ecx = ebp;
    PUSH32(esp, 0x00055502u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00055502: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, 0x0005550Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0005550D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005560B; /* je: equal / zero */

loc_00055518: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005560B; /* je: equal / zero */

loc_00055520: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005560B; /* je: equal / zero */

loc_0005552C: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x00055538u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00055538: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x44C5F0);
    PUSH32(esp, 0x00055543u); RECOMP_ABI_CALL(0x00123100u, sub_00123100); /* call 0x00123100 */

loc_00055543: ;
    eax = MEM32(esp + 0x2C);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00055663; /* jle: less or equal (signed <=) */

loc_00055552: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00055663; /* jge: greater or equal (signed >=) */

loc_0005555B: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ebp = 0x3C806C;
    MEM8(esp + 0x13) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00055574; /* je: equal / zero */

loc_0005556D: ;
    PUSH32(esp, 0x00055572u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00055572: ;
    ebp = eax;

loc_00055574: ;
    ecx = MEM32(esp + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ebx = 0x3C806C;
    if (TEST_Z(_fa, _fb)) goto loc_00055588; /* je: equal / zero */

loc_00055581: ;
    PUSH32(esp, 0x00055586u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00055586: ;
    ebx = eax;

loc_00055588: ;
    MEM32(esp + 0x30) = 0x3C9748;
    MEM32(esp + 0x48) = 0;
    PUSH32(esp, esi);
    ecx = esp + 0x34;
    MEM32(esp + 0xD8) = 7;
    PUSH32(esp, 0x000555ADu); RECOMP_ABI_CALL(0x000A41F0u, sub_000A41F0); /* call 0x000A41F0 */

loc_000555AD: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x000555B6u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000555B6: ;
    ecx = MEM32(esp + 0x1C);
    esi = eax;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000555C8u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000555C8: ;
    PUSH32(esp, eax);
    ecx = esp + 0x23;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000555D4u); RECOMP_ABI_CALL(0x00138870u, xml1_guest_bone_name_lookup); /* call 0x00138870 */

loc_000555D4: ;
    edx = MEM32(esp + 0x38);
    esi = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0xF4);
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000555EEu); RECOMP_ABI_CALL(0x000B2D10u, sub_000B2D10); /* call 0x000B2D10 */

loc_000555EE: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esp + 0x30;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0xD4) = edi;
    MEM32(esp + 0x30) = 0x3C9748;
    PUSH32(esp, 0x0005560Bu); RECOMP_ABI_CALL(0x000A4120u, sub_000A4120); /* call 0x000A4120 */

loc_0005560B: ;
    ebx = MEM32(esp + 0x14);

loc_0005560F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB780);
    ecx = esp + 0xA4;
    PUSH32(esp, 0x00055622u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00055622: ;
    ecx = MEM32(esp + 0xE0);
    PUSH32(esp, ebx);
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    MEM32(esp + 0xDC) = 8;
    PUSH32(esp, 0x00055642u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_00055642: ;
    esi = eax;
    ecx = esp + 0x9C;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0xD4) = edi;
    PUSH32(esp, 0x0005565Bu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0005565B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00055361; /* jne: not equal / not zero */

loc_00055663: ;
    POP32(esp, ebp);

loc_00055664: ;
    ecx = MEM32(esp + 0xC8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00055680
 * Original: 0x00055680 - 0x00055796 (278 bytes, 83 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055680(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00055680: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E810);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB788);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000556ACu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000556AC: ;
    ebp = MEM32(esp + 0x48);
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x40) = 0;
    PUSH32(esp, 0x000556C6u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000556C6: ;
    ecx = esp + 0x10;
    esi = eax;
    MEM32(esp + 0x38) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000556D9u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000556D9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00055781; /* je: equal / zero */

loc_000556E1: ;
    PUSH32(esp, 0x000556E6u); RECOMP_ABI_CALL(0x00089FC0u, sub_00089FC0); /* call 0x00089FC0 */

loc_000556E6: ;
    ecx = MEM32(esp + 0x44);
    edi = eax;
    eax = MEM32(esp + 0x40);
    eax = eax + 0x20C;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(esp + 0x50) = esp;
    ebx = esp;
    if ((eax == 0)) goto loc_00055729; /* je: equal / zero */

loc_000556FF: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055729; /* je: equal / zero */

loc_00055704: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005570Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0005570A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x4C);
    eax = eax + 0x20C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005571Eu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0005571E: ;
    ecx = eax;
    PUSH32(esp, 0x00055725u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00055725: ;
    MEM32(ebx) = eax;
    goto loc_0005572F;

loc_00055729: ;
    MEM32(ebx) = 0;

loc_0005572F: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00055737u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00055737: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 2);
    MEM32(ecx + 0x3B0) = eax;
    PUSH32(esp, 0x3CB788);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00055751u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00055751: ;
    PUSH32(esp, esi);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = ebp;
    MEM32(esp + 0x40) = 1;
    PUSH32(esp, 0x00055766u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_00055766: ;
    ecx = esp + 0x20;
    esi = eax;
    MEM32(esp + 0x38) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00055779u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00055779: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000556E1; /* jne: not equal / not zero */

loc_00055781: ;
    ecx = MEM32(esp + 0x30);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000557A0
 * Original: 0x000557A0 - 0x000558B3 (275 bytes, 81 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000557A0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000557A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E810);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB794);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000557CCu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000557CC: ;
    ebx = MEM32(esp + 0x44);
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x40) = 0;
    PUSH32(esp, 0x000557E6u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000557E6: ;
    ecx = esp + 0x10;
    esi = eax;
    MEM32(esp + 0x38) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000557F9u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000557F9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005589E; /* je: equal / zero */

loc_00055801: ;
    PUSH32(esp, 0x00055806u); RECOMP_ABI_CALL(0x000F7060u, sub_000F7060); /* call 0x000F7060 */

loc_00055806: ;
    edi = eax;
    eax = MEM32(esp + 0x40);
    eax = eax + 0x20C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x48) = esp;
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    if ((eax == 0)) goto loc_00055845; /* je: equal / zero */

loc_0005581A: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055845; /* je: equal / zero */

loc_0005581F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00055825u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00055825: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    eax = eax + 0x20C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00055839u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00055839: ;
    ecx = eax;
    PUSH32(esp, 0x00055840u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_00055840: ;
    MEM32(ebp) = eax;
    goto loc_0005584C;

loc_00055845: ;
    MEM32(ebp) = 0;

loc_0005584C: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00055854u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00055854: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 2);
    MEM32(ecx + 0x3B4) = eax;
    PUSH32(esp, 0x3CB794);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0005586Eu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0005586E: ;
    PUSH32(esp, esi);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(esp + 0x40) = 1;
    PUSH32(esp, 0x00055883u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_00055883: ;
    ecx = esp + 0x20;
    esi = eax;
    MEM32(esp + 0x38) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00055896u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00055896: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00055801; /* jne: not equal / not zero */

loc_0005589E: ;
    ecx = MEM32(esp + 0x30);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000558C0
 * Original: 0x000558C0 - 0x0005591D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000558C0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000558C0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0xDA4C) = esi;
    MEM32(ecx + 0xDA50) = esi;
    MEM32(ecx + 0xDA54) = esi;
    edx = 0; /* xor self */
    goto loc_000558E0;

    /* nop */

loc_000558E0: ;
    eax = MEM32(ecx + 0xDA4C);
    edi = MEM32(ecx + 0xDA54);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(XML1_CHARACTER_POOL_CAPACITY) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    MEM32(ecx + 0xDA4C) = eax;
    MEM32(ecx + 0xDA54) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0005590C; /* jl: less (signed <) */

loc_000558FF: ;
    MEM32(ecx + 0xDA4C) = esi;
    eax = XML1_CHARACTER_POOL_CAPACITY - 1;
    goto loc_0005590D;

loc_0005590C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0005590D: ;
    MEM32(ecx + eax * 4 + 0xD988) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(XML1_CHARACTER_POOL_CAPACITY) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x18 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000558E0; /* jl: less (signed <) */

loc_0005591A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00055920
 * Original: 0x00055920 - 0x000559B1 (145 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055920(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00055920: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x488);
    esi = ecx;
    edx = MEM32(eax + esi);
    ecx = eax + esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0005593Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005593A: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax << 2;
    ecx = MEM32(eax + esi + 0xD980);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax + esi + 0xD980) = ecx;
    MEM32(eax + esi + 0xDA58) = MEM32(eax + esi + 0xDA58) & edx;
    eax = MEM32(esi + 0xDA4C);
    edx = MEM32(esi + 0xDA54);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(XML1_CHARACTER_POOL_CAPACITY) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    MEM32(esi + 0xDA4C) = eax;
    MEM32(esi + 0xDA54) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00055997; /* jl: less (signed <) */

loc_00055986: ;
    MEM32(esi + 0xDA4C) = 0;
    eax = XML1_CHARACTER_POOL_CAPACITY - 1;
    goto loc_00055998;

loc_00055997: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00055998: ;
    MEM32(esi + eax * 4 + 0xD988) = edi;
    eax = MEM32(esi + 0xDA60);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0xDA60) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000559C0
 * Original: 0x000559C0 - 0x00055A22 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000559C0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000559C0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x13F4) = esi;
    MEM32(ecx + 0x13F8) = esi;
    MEM32(ecx + 0x13FC) = esi;
    edx = 0; /* xor self */
    goto loc_000559E0;

    /* nop */

loc_000559E0: ;
    eax = MEM32(ecx + 0x13F4);
    edi = MEM32(ecx + 0x13FC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    MEM32(ecx + 0x13F4) = eax;
    MEM32(ecx + 0x13FC) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00055A0E; /* jl: less (signed <) */

loc_00055A01: ;
    MEM32(ecx + 0x13F4) = esi;
    eax = 0xFE;
    goto loc_00055A0F;

loc_00055A0E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00055A0F: ;
    MEM32(ecx + eax * 4 + 0xFF4) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000559E0; /* jl: less (signed <) */

loc_00055A1F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00055A30
 * Original: 0x00055A30 - 0x00055A87 (87 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055A30(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00055A30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    ecx = 0xFF;
    goto loc_00055A40;

    /* nop */

loc_00055A40: ;
    MEM32(eax) = 0;
    eax = eax + 0x10;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00055A40; /* jne: not equal / not zero */

loc_00055A4C: ;
    ecx = esi + 0xFF4;
    PUSH32(esp, 0x00055A57u); RECOMP_ABI_CALL(0x00054B90u, sub_00054B90); /* call 0x00054B90 */

loc_00055A57: ;
    eax = 0; /* xor self */
    ecx = esi + 0x1400;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    ecx = esi;
    MEM32(esi + 0x1420) = eax;
    PUSH32(esp, 0x00055A83u); RECOMP_ABI_CALL(0x000559C0u, sub_000559C0); /* call 0x000559C0 */

loc_00055A83: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00055A90
 * Original: 0x00055A90 - 0x00055B1E (142 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055A90(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00055A90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00055B17; /* je: equal / zero */

loc_00055A9C: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055B17; /* je: equal / zero */

loc_00055AA1: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    edi = esi + 0x1BFF0;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00055AB3u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00055AB3: ;
    PUSH32(esp, edi);
    MEM8(edi + 0xFE) = 0;
    PUSH32(esp, 0x00055AC0u); RECOMP_ABI_CALL(0x00199B50u, sub_00199B50); /* call 0x00199B50 */

loc_00055AC0: ;
    esp = esp + 0x10;
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00055ACDu); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_00055ACD: ;
    eax = MEM32(esi + 0xF324);
    edi = esi + 0xF320;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00055AE6u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_00055AE6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    MEM32(esi + 0x10854) = edi;
    MEM32(esi + 0x10850) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00055AFF; /* jne: not equal / not zero */

loc_00055AF9: ;
    eax = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055B17; /* je: equal / zero */

loc_00055AFF: ;
    edx = MEM32(esi + 0x10854);
    eax = MEM32(esi + 0x10850);
    SET_LO8(eax, MEM8(edx + eax + 0x1430));
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00055B17: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00055B20
 * Original: 0x00055B20 - 0x00055BBF (159 bytes, 67 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055B20(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00055B20: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    ebp = ecx;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 1 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edi;
    esi = MEM32(eax + 0x54);
    eax = eax + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055B76; /* je: equal / zero */

loc_00055B44: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00055B76; /* je: equal / zero */

loc_00055B48: ;
    ecx = esi + 4;
    PUSH32(esp, 0x00055B50u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00055B50: ;
    ecx = esi + 0x14;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x00055B5Cu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00055B5C: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00055B69u); RECOMP_ABI_CALL(0x000AFD70u, xml1_guest_character_definition_parse); /* call 0x000AFD70 */

loc_00055B69: ;
    ecx = esi;
    PUSH32(esp, 0x00055B70u); RECOMP_ABI_CALL(0x00125BD0u, sub_00125BD0); /* call 0x00125BD0 */

loc_00055B70: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00055B48; /* jne: not equal / not zero */

loc_00055B76: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x00055B84u); RECOMP_ABI_CALL(0x000542F0u, sub_000542F0); /* call 0x000542F0 */

loc_00055B84: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x00055B8Du); RECOMP_ABI_CALL(0x000552F0u, sub_000552F0); /* call 0x000552F0 */

loc_00055B8D: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x00055B96u); RECOMP_ABI_CALL(0x00054580u, sub_00054580); /* call 0x00054580 */

loc_00055B96: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x00055BA4u); RECOMP_ABI_CALL(0x00055680u, sub_00055680); /* call 0x00055680 */

loc_00055BA4: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x00055BADu); RECOMP_ABI_CALL(0x000557A0u, sub_000557A0); /* call 0x000557A0 */

loc_00055BAD: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x00055BB6u); RECOMP_ABI_CALL(0x000546F0u, sub_000546F0); /* call 0x000546F0 */

loc_00055BB6: ;
    xml1_character_race_capture(ebx, edi);
    xml1_leader_definition_capture(ebx, edi);
    xml1_transform_definition_capture(ebx, edi);
    raven_ai_definition_capture(ebx, edi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00055BC0
 * Original: 0x00055BC0 - 0x00055E22 (610 bytes, 187 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055BC0(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
    /* XML1 CHARACTER LAYOUT v2 */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00055BC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E828);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    esi = 0; /* xor self */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = 0x3CB6CC;
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x18;
    MEM32(esp + 0x28) = esi;
    PUSH32(esp, 0x00055BFDu); RECOMP_ABI_CALL(0x000AE120u, sub_000AE120); /* call 0x000AE120 */

loc_00055BFD: ;
    _fa = (uint32_t)(MEM32(ebp + 0xF31C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xF31C), esi (32-bit) */
    MEM32(esp + 8) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_00055DE1; /* jle: less or equal (signed <=) */

loc_00055C0D: ;
    edx = ebp + 0xDB40;
    PUSH32(esp, ebx);
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, edi);
    /* nop */

loc_00055C20: ;
    _fa = (uint32_t)(MEM8(edx + 6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 6), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00055DC1; /* je: equal / zero */

loc_00055C2A: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00055DC1; /* je: equal / zero */

loc_00055C34: ;
    esi = MEM32(ebp + 0xDB28);
    eax = ebp + 4;
    esi = esi & ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x488);
    esi = esi + eax;
    _fa = (uint32_t)(MEM32(esi + 0x398)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x398), 0x1B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055DC1; /* jne: not equal / not zero */

loc_00055C54: ;
    _fa = (uint32_t)(MEM8(esi + 0x3A1)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3A1), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00055DC1; /* jne: not equal / not zero */

loc_00055C61: ;
    PUSH32(esp, 0x00055C66u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00055C66: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00055C76u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00055C76: ;
    ecx = esi;
    PUSH32(esp, 0x00055C7Du); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_00055C7D: ;
    edi = xml1_character_talent_map_resolve(eax+0x30u);
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055CA3; /* je: equal / zero */

loc_00055C8A: ;
    ecx = eax + 1;
    ecx = ecx << 4;
    ecx = MEM32(ecx + edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055CA3; /* je: equal / zero */

loc_00055C9B: ;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00055CA3u); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_00055CA3: ;
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x00055CACu); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_00055CAC: ;
    eax = xml1_character_talent_map_resolve(eax+0x30u);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055CBB; /* jne: not equal / not zero */

loc_00055CB7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055CF4; /* je: equal / zero */

loc_00055CBB: ;
    PUSH32(esp, 0x00055CC0u); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_00055CC0: ;
    edx = MEM32(eax);
    ecx = ebx;
    ecx = ecx << 4;
    ecx = ecx + edi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00055CD1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00055CD1: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00055CE6; /* je: equal / zero */

loc_00055CD7: ;
    PUSH32(esp, 0x00055CDCu); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_00055CDC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00055CE6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00055CE6: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00055CEEu); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_00055CEE: ;
    ebp = MEM32(esp + 0x18);
    goto loc_00055CA3;

loc_00055CF4: ;
    SET_LO8(eax, MEM8(esp + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    edi = MEM32(esp + 0x34);
    if (TEST_NZ(_fa, _fb)) goto loc_00055D0D; /* jne: not equal / not zero */

loc_00055D00: ;
    PUSH32(esp, 0x00055D05u); RECOMP_ABI_CALL(0x000BF750u, sub_000BF750); /* call 0x000BF750 */

loc_00055D05: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00055D96; /* je: equal / zero */

loc_00055D0D: ;
    eax = esi + 0x20C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00055D96; /* je: equal / zero */

loc_00055D17: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x43) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x43 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055D24; /* jne: not equal / not zero */

loc_00055D1E: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x6F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0x6F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055D3A; /* je: equal / zero */

loc_00055D24: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x4D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x4D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055D2F; /* jne: not equal / not zero */

loc_00055D29: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0x61 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055D3A; /* je: equal / zero */

loc_00055D2F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x4E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x4E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055D3D; /* jne: not equal / not zero */

loc_00055D34: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x69) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0x69 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055D3D; /* jne: not equal / not zero */

loc_00055D3A: ;
    edi = edi + 2;

loc_00055D3D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x53) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x53 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055D48; /* jne: not equal / not zero */

loc_00055D42: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x74) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0x74 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055D53; /* je: equal / zero */

loc_00055D48: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x43) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x43 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055D56; /* jne: not equal / not zero */

loc_00055D4D: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x79) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0x79 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055D56; /* jne: not equal / not zero */

loc_00055D53: ;
    edi = edi + 4;

loc_00055D56: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x50) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x50 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055D61; /* jne: not equal / not zero */

loc_00055D5B: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x73) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0x73 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055D6C; /* je: equal / zero */

loc_00055D61: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x47) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x47 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055D6F; /* jne: not equal / not zero */

loc_00055D66: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0x61 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055D6F; /* jne: not equal / not zero */

loc_00055D6C: ;
    edi = edi + 6;

loc_00055D6F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x4A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x4A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055D7A; /* jne: not equal / not zero */

loc_00055D74: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x75) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0x75 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055D85; /* je: equal / zero */

loc_00055D7A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x46) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x46 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055D88; /* jne: not equal / not zero */

loc_00055D7F: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x72) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0x72 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055D88; /* jne: not equal / not zero */

loc_00055D85: ;
    edi = edi + 0xA;

loc_00055D88: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x49) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x49 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055D96; /* jne: not equal / not zero */

loc_00055D8D: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x63) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0x63 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055D96; /* jne: not equal / not zero */

loc_00055D93: ;
    edi = edi + 0xC;

loc_00055D96: ;
    ecx = esi;
    PUSH32(esp, 0x00055D9Du); RECOMP_ABI_CALL(0x000AF700u, sub_000AF700); /* call 0x000AF700 */

loc_00055D9D: ;
    edx = MEM32(ebp);
    eax = SX16(LO16(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F000000);
    edi = edi - eax;
    PUSH32(esp, 1);
    eax = edi;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x00055DBDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00055DBD: ;
    edx = MEM32(esp + 0x14);

loc_00055DC1: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(ebp + 0xF31C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00055C20; /* jl: less (signed <) */

loc_00055DDF: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00055DE1: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00055DEAu); RECOMP_ABI_CALL(0x000AE0F0u, sub_000AE0F0); /* call 0x000AE0F0 */

loc_00055DEA: ;
    PUSH32(esp, 0x00055DEFu); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_00055DEF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00055DF6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00055DF6: ;
    ecx = esp + 0x14;
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    MEM32(esp + 0x14) = 0x3CB6CC;
    PUSH32(esp, 0x00055E0Fu); RECOMP_ABI_CALL(0x000AE0F0u, sub_000AE0F0); /* call 0x000AE0F0 */

loc_00055E0F: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x20;
    esp += 12; return; /* ret 8 */

}



/**
 * sub_00055ED0
 * Original: 0x00055ED0 - 0x00055ED5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055ED0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00055ED0: ;
    g_seh_ebp = ebp; sub_000548A0(); return; /* tail jmp 0x000548A0 */

}

/**
 * sub_00055EE0
 * Original: 0x00055EE0 - 0x00055F68 (136 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055EE0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_00055EE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x00055EEEu); RECOMP_ABI_CALL(0x00054B20u, sub_00054B20); /* call 0x00054B20 */

loc_00055EEE: ;
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx);
    ecx = eax;
    ecx = ecx << 4;
    MEM32(ecx + edi + 0xC) = edx;
    MEM32(esi + 8) = eax;
    MEM32(ecx + esi + 0x10) = 0x3FFFFFFF;
    MEM32(ecx + esi + 0x14) = 0x3FFFFFFF;
    MEM32(ecx + esi + 0xC) = 0x7FFFFFFF;
    edi = esi + 4;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00055F23u); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_00055F23: ;
    eax = MEM32(edi);
    eax = eax << 4;
    ecx = MEM32(eax + esi + 0xC);
    eax = eax + esi + 0xC;
    ecx = ecx & 0xBFFFFFFFu;
    MEM32(eax) = ecx;
    ecx = MEM32(edi);
    ecx = ecx << 4;
    edx = MEM32(ecx + esi + 0xC);
    eax = ecx + esi + 0xC;
    edx = edx & 0x40000000;
    edx = edx | 0x3FFFFFFF;
    MEM32(eax) = edx;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 8);
    SET_LO8(edx, MEM8(eax));
    POP32(esp, edi);
    MEM8(esi + ecx + 0x1430) = LO8(edx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}



/**
 * sub_000560B0
 * Original: 0x000560B0 - 0x000560FE (78 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000560B0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */

loc_000560B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0xDB24);
    esi = esi & MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000560C6u); RECOMP_ABI_CALL(0x00055920u, sub_00055920); /* call 0x00055920 */

loc_000560C6: ;
    ecx = MEM32(edi + 0xDB28);
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(edi + esi * 4 + 0xDA64) = MEM32(edi + esi * 4 + 0xDA64) + eax;
    if (((int32_t)MEM32(edi + esi * 4 + 0xDA64) >= 0)) goto loc_000560F9; /* jns: not sign (positive) */

loc_000560DC: ;
    MEM32(edi + esi * 4 + 0xDA64) = esi;
    ecx = MEM32(edi + 0xDB28);
    edx = 1;
    edx = edx << LO8(ecx);
    edx = edx | esi;
    MEM32(edi + esi * 4 + 0xDA64) = edx;

loc_000560F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00056100
 * Original: 0x00056100 - 0x00056108 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056100(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00056100: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_00056110(); return; /* tail jmp 0x00056110 */

}

/**
 * sub_00056110
 * Original: 0x00056110 - 0x00056185 (117 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056110(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00056110: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x1400;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x13F4);
    edi = MEM32(eax + 0x13FC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF (32-bit) */
    MEM32(eax + 0x13F4) = ecx;
    MEM32(eax + 0x13FC) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0005616B; /* jl: less (signed <) */

loc_0005615A: ;
    MEM32(eax + 0x13F4) = 0;
    ecx = 0xFE;
    goto loc_0005616C;

loc_0005616B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0005616C: ;
    MEM32(eax + ecx * 4 + 0xFF4) = esi;
    ecx = MEM32(eax + 0x1420);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x1420) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00056190
 * Original: 0x00056190 - 0x0005621D (141 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056190(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00056190: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xF31C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0005621A; /* jle: less or equal (signed <=) */

loc_000561A0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = esi + 0xDB30;

loc_000561A8: ;
    SET_LO8(eax, MEM8(ebp + 0x16));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005620A; /* je: equal / zero */

loc_000561AF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005620A; /* jne: not equal / not zero */

loc_000561B3: ;
    edi = MEM32(ebp);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000561C1; /* jne: not equal / not zero */

loc_000561BA: ;
    eax = 0x3C806C;
    goto loc_000561D7;

loc_000561C1: ;
    PUSH32(esp, 0x000561C6u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000561C6: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    eax = ecx + eax + 0xEDF0;

loc_000561D7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x000561E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000561E2: ;
    eax = ZX8(LO8(ebx));
    eax = eax + eax * 2;
    edi = esi + eax * 8 + 0xDB30;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00056206; /* je: equal / zero */

loc_000561F6: ;
    PUSH32(esp, eax);
    ecx = esi + 4;
    PUSH32(esp, 0x000561FFu); RECOMP_ABI_CALL(0x000560B0u, sub_000560B0); /* call 0x000560B0 */

loc_000561FF: ;
    MEM32(edi + 0x10) = 0;

loc_00056206: ;
    MEM8(edi + 0x16) = MEM8(edi + 0x16) & 0xF7;

loc_0005620A: ;
    eax = MEM32(esi + 0xF31C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000561A8; /* jl: less (signed <) */

loc_00056218: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0005621A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00056220
 * Original: 0x00056220 - 0x00056A50 (2096 bytes, 574 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056220(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00056220: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E8FC);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xFC));
    esp = esp - 0xFC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    esi = ecx;
    MEM32(esp + 0x14) = edi;
    eax = MEM32(esi + 0xF31C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x20) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0005625C; /* jne: not equal / not zero */

loc_00056255: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xF31C) = eax;

loc_0005625C: ;
    ecx = esp + 0xC8;
    PUSH32(esp, 0x00056268u); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_00056268: ;
    MEM32(esp + 0x114) = edi;
    edi = MEM32(esp + 0x11C);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    ecx = esp + 0x30;
    PUSH32(esp, 0x00056282u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00056282: ;
    PUSH32(esp, 4);
    ebp = 1;
    PUSH32(esp, ebp);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0xD4;
    MEM8(esp + 0x120) = 1;
    PUSH32(esp, 0x000562A3u); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_000562A3: ;
    SET_LO8(ebx, LO8(eax));
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    ecx = esp + 0x28;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x114) = 0;
    PUSH32(esp, 0x000562BCu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000562BC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000562DE; /* je: equal / zero */

loc_000562C0: ;
    ecx = esp + 0xC8;
    MEM32(esp + 0x114) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000562D7u); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_000562D7: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    goto loc_00056A35;

loc_000562DE: ;
    PUSH32(esp, 0x3CB7F4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000562E9u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000562E9: ;
    edi = MEM32(esp + 0xDC);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM8(esp + 0x13) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_000569D6; /* je: equal / zero */

loc_00056305: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB7E8);
    ecx = esp + 0x40;
    PUSH32(esp, 0x00056315u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00056315: ;
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = edi + 0x14;
    MEM8(esp + 0x118) = 2;
    PUSH32(esp, 0x0005632Au); RECOMP_ABI_CALL(0x001258F0u, sub_001258F0); /* call 0x001258F0 */

loc_0005632A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00056341; /* je: equal / zero */

loc_0005632E: ;
    ebx = MEM32(edi + 8);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    edx = edx & edi;
    MEM32(esp + 0x18) = edx;
    goto loc_0005637A;

loc_00056341: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB7E8);
    ecx = esp + 0x30;
    PUSH32(esp, 0x00056351u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00056351: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(esp + 0x118) = 3;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x00056369u); RECOMP_ABI_CALL(0x00126080u, sub_00126080); /* call 0x00126080 */

loc_00056369: ;
    ebx = MEM32(eax + 8);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    MEM32(esp + 0x18) = ecx;

loc_0005637A: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x114) = 2;
    if (TEST_Z(_fa, _fb)) goto loc_00056395; /* je: equal / zero */

loc_0005638C: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x00056395u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00056395: ;
    ecx = esp + 0x38;
    MEM8(esp + 0x114) = 0;
    PUSH32(esp, 0x000563A6u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000563A6: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000569D6; /* je: equal / zero */

loc_000563B2: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB7E0);
    ecx = esp + 0x40;
    PUSH32(esp, 0x000563C2u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000563C2: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    MEM8(esp + 0x11C) = 4;
    PUSH32(esp, 0x000563DAu); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000563DA: ;
    ebx = eax;
    ecx = esp + 0x38;
    MEM32(esp + 0x14) = ebx;
    MEM8(esp + 0x114) = 0;
    PUSH32(esp, 0x000563F1u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000563F1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00056988; /* je: equal / zero */

loc_000563F9: ;
    goto loc_00056400;

loc_000563FB: ;
    ebx = MEM32(esp + 0x14);
    /* nop */

loc_00056400: ;
    edi = MEM32(ebx + 8);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    ebp = eax;
    if ((eax == 0)) goto loc_00056934; /* je: equal / zero */

loc_00056415: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0x30;
    PUSH32(esp, 0x00056425u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00056425: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM8(esp + 0x118) = 5;
    PUSH32(esp, 0x00056439u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00056439: ;
    edi = eax;
    ecx = esp + 0x28;
    MEM32(esp + 0x1C) = edi;
    MEM8(esp + 0x114) = 0;
    PUSH32(esp, 0x00056450u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00056450: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00056934; /* je: equal / zero */

loc_00056458: ;
    eax = MEM32(esi);
    ecx = edi;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x00056465u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00056465: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0005646Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005646F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00056840; /* jne: not equal / not zero */

loc_00056477: ;
    eax = MEM32(esi + 0xF31C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00056934; /* je: equal / zero */

loc_00056488: ;
    ecx = eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(eax));
    eax = ecx;
    MEM32(esi + 0xF31C) = ecx;
    ecx = MEM32(esp + 0x1C);
    edx = eax + eax * 2;
    MEM8(esp + 0x12) = LO8(ebx);
    edi = esi + edx * 8 + 0xDB18;
    PUSH32(esp, 0x000564ACu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000564AC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000564D3; /* je: equal / zero */

loc_000564B2: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000564D3; /* je: equal / zero */

loc_000564B7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000564BDu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000564BD: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000564C8u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000564C8: ;
    ecx = eax;
    PUSH32(esp, 0x000564CFu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000564CF: ;
    MEM32(edi) = eax;
    goto loc_000564D9;

loc_000564D3: ;
    MEM32(edi) = 0;

loc_000564D9: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(edi + 0x10) = 0;
    MEM8(edi + 0x14) = 0;
    MEM8(edi + 0x15) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_000564FF; /* jne: not equal / not zero */

loc_000564F0: ;
    SET_LO8(eax, MEM8(esp + 0x120));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000564FF; /* je: equal / zero */

loc_000564FB: ;
    SET_LO8(eax, 1);
    goto loc_00056501;

loc_000564FF: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */

loc_00056501: ;
    SET_LO8(edx, MEM8(edi + 0x16));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 0xD0);
    if (3) _cf = (int)(((LO8(eax)) >> (8 - (3))) & 1);
    SET_LO8(eax, LO8(eax) << 3);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    SET_LO8(edx, LO8(ecx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 1);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM8(edi + 0x16) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_00056533; /* je: equal / zero */

loc_0005651C: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(ecx + 0x1BFEC);
    MEM8(eax + ecx + 0x1BEEC) = LO8(ebx);
    MEM32(ecx + 0x1BFEC) = MEM32(ecx + 0x1BFEC) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x1BFEC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00056533: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB7D0);
    ecx = esp + 0x60;
    PUSH32(esp, 0x00056543u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00056543: ;
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM8(esp + 0x118) = 6;
    PUSH32(esp, 0x00056557u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00056557: ;
    ecx = esp + 0x58;
    esi = eax;
    MEM8(esp + 0x114) = 0;
    PUSH32(esp, 0x0005656Au); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0005656A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00056595; /* je: equal / zero */

loc_0005656E: ;
    ecx = esi;
    PUSH32(esp, 0x00056575u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00056575: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00056595; /* je: equal / zero */

loc_00056579: ;
    ecx = esi;
    PUSH32(esp, 0x00056580u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00056580: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00056595; /* je: equal / zero */

loc_00056585: ;
    ecx = esi;
    PUSH32(esp, 0x0005658Cu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0005658C: ;
    PUSH32(esp, eax);
    ecx = edi + 4;
    PUSH32(esp, 0x00056595u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_00056595: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C96F4);
    ecx = esp + 0xA0;
    PUSH32(esp, 0x000565A8u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000565A8: ;
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM8(esp + 0x118) = 7;
    PUSH32(esp, 0x000565BFu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000565BF: ;
    ecx = esp + 0x98;
    esi = eax;
    MEM8(esp + 0x114) = 0;
    PUSH32(esp, 0x000565D5u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000565D5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00056600; /* je: equal / zero */

loc_000565D9: ;
    ecx = esi;
    PUSH32(esp, 0x000565E0u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000565E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00056600; /* je: equal / zero */

loc_000565E4: ;
    ecx = esi;
    PUSH32(esp, 0x000565EBu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000565EB: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00056600; /* je: equal / zero */

loc_000565F0: ;
    ecx = esi;
    PUSH32(esp, 0x000565F7u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000565F7: ;
    PUSH32(esp, eax);
    ecx = edi + 8;
    PUSH32(esp, 0x00056600u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_00056600: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB7C0);
    ecx = esp + 0x80;
    PUSH32(esp, 0x00056613u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00056613: ;
    edx = esp + 0x78;
    PUSH32(esp, edx);
    ecx = ebp;
    MEM8(esp + 0x118) = 8;
    PUSH32(esp, 0x00056627u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00056627: ;
    ecx = esp + 0x78;
    esi = eax;
    MEM8(esp + 0x114) = 0;
    PUSH32(esp, 0x0005663Au); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0005663A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00056665; /* je: equal / zero */

loc_0005663E: ;
    ecx = esi;
    PUSH32(esp, 0x00056645u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00056645: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00056665; /* je: equal / zero */

loc_00056649: ;
    ecx = esi;
    PUSH32(esp, 0x00056650u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00056650: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00056665; /* je: equal / zero */

loc_00056655: ;
    ecx = esi;
    PUSH32(esp, 0x0005665Cu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0005665C: ;
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    PUSH32(esp, 0x00056665u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_00056665: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C9708);
    ecx = esp + 0xC0;
    PUSH32(esp, 0x00056678u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00056678: ;
    eax = esp + 0xB8;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM8(esp + 0x118) = 9;
    PUSH32(esp, 0x0005668Fu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0005668F: ;
    ecx = esp + 0xB8;
    esi = eax;
    MEM8(esp + 0x114) = 0;
    PUSH32(esp, 0x000566A5u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000566A5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000566D3; /* je: equal / zero */

loc_000566A9: ;
    ecx = esi;
    PUSH32(esp, 0x000566B0u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000566B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000566D3; /* je: equal / zero */

loc_000566B4: ;
    ecx = esi;
    PUSH32(esp, 0x000566BBu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000566BB: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000566D3; /* je: equal / zero */

loc_000566C0: ;
    ecx = esi;
    PUSH32(esp, 0x000566C7u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000566C7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000566CDu); RECOMP_ABI_CALL(0x000668E0u, sub_000668E0); /* call 0x000668E0 */

loc_000566CD: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    MEM8(edi + 0x15) = LO8(eax);

loc_000566D3: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB6D8);
    ecx = esp + 0x50;
    PUSH32(esp, 0x000566E3u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000566E3: ;
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM8(esp + 0x118) = 0xA;
    PUSH32(esp, 0x000566F7u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000566F7: ;
    ecx = esp + 0x48;
    esi = eax;
    MEM8(esp + 0x114) = 0;
    PUSH32(esp, 0x0005670Au); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0005670A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00056738; /* je: equal / zero */

loc_0005670E: ;
    ecx = esi;
    PUSH32(esp, 0x00056715u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00056715: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00056738; /* je: equal / zero */

loc_00056719: ;
    ecx = esi;
    PUSH32(esp, 0x00056720u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00056720: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00056738; /* je: equal / zero */

loc_00056725: ;
    ecx = esi;
    PUSH32(esp, 0x0005672Cu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0005672C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00056732u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_00056732: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    MEM8(edi + 0x14) = LO8(eax);

loc_00056738: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB7B4);
    ecx = esp + 0x70;
    PUSH32(esp, 0x00056748u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00056748: ;
    edx = esp + 0x68;
    PUSH32(esp, edx);
    ecx = ebp;
    MEM8(esp + 0x118) = 0xB;
    PUSH32(esp, 0x0005675Cu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0005675C: ;
    ecx = esp + 0x68;
    esi = eax;
    MEM8(esp + 0x114) = 0;
    PUSH32(esp, 0x0005676Fu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0005676F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000567B9; /* je: equal / zero */

loc_00056773: ;
    ecx = esi;
    PUSH32(esp, 0x0005677Au); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0005677A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000567B9; /* je: equal / zero */

loc_0005677E: ;
    ecx = esi;
    PUSH32(esp, 0x00056785u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00056785: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000567B9; /* je: equal / zero */

loc_0005678A: ;
    ecx = esi;
    PUSH32(esp, 0x00056791u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00056791: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x74) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x74 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000567A6; /* je: equal / zero */

loc_00056796: ;
    ecx = esi;
    PUSH32(esp, 0x0005679Du); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0005679D: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x54) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x54 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000567A6; /* je: equal / zero */

loc_000567A2: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    goto loc_000567A8;

loc_000567A6: ;
    SET_LO8(eax, 1);

loc_000567A8: ;
    SET_LO8(ebx, MEM8(edi + 0x16));
    if (2) _cf = (int)(((LO8(eax)) >> (8 - (2))) & 1);
    SET_LO8(eax, LO8(eax) << 2);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(ecx, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(edi + 0x16) = LO8(ecx);

loc_000567B9: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x000567C2u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000567C2: ;
    edi = MEM32(esp + 0x20);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    esi = edi + 0x1BFF0;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000567D8u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000567D8: ;
    PUSH32(esp, esi);
    MEM8(esi + 0xFE) = 0;
    PUSH32(esp, 0x000567E5u); RECOMP_ABI_CALL(0x00199B50u, sub_00199B50); /* call 0x00199B50 */

loc_000567E5: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0005680F; /* je: equal / zero */

loc_000567EC: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0005680F; /* je: equal / zero */

loc_000567F1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000567F7u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000567F7: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00056802u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00056802: ;
    ecx = eax;
    PUSH32(esp, 0x00056809u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00056809: ;
    MEM32(esp + 0x1C) = eax;
    goto loc_00056817;

loc_0005680F: ;
    MEM32(esp + 0x1C) = 0;

loc_00056817: ;
    eax = esp + 0x12;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = edi + 0xF320;
    PUSH32(esp, 0x0005682Cu); RECOMP_ABI_CALL(0x00055EE0u, sub_00055EE0); /* call 0x00055EE0 */

loc_0005682C: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ebx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x20);
    if (TEST_Z(_fa, _fb)) goto loc_00056934; /* je: equal / zero */

loc_00056840: ;
    eax = ZX8(LO8(eax));
    edx = eax + eax * 2;
    eax = MEM32(esi + edx * 8 + 0xDB40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    edi = esi + edx * 8 + 0xDB30;
    if (TEST_NZ(_fa, _fb)) goto loc_00056934; /* jne: not equal / not zero */

loc_0005685C: ;
    SET_LO8(eax, MEM8(edi + 0x16));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00056876; /* jne: not equal / not zero */

loc_00056863: ;
    SET_LO8(ecx, MEM8(esp + 0x120));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00056876; /* jne: not equal / not zero */

loc_0005686E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00056934; /* je: equal / zero */

loc_00056876: ;
    _fa = (uint32_t)(MEM32(esi + 0xDA64)) & 0xFFFFFFFFu; _fb = (uint32_t)(XML1_CHARACTER_POOL_CAPACITY) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xDA64), 0x18 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00056934; /* je: equal / zero */

loc_00056883: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x10);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    ecx = esi;
    MEM8(edi + 0x16) = LO8(eax);
    PUSH32(esp, 0x00056892u); RECOMP_ABI_CALL(0x00054AC0u, xml1_guest_character_pool_allocate); /* call 0x00054AC0 */

loc_00056892: ;
    ebp = eax;
    ecx = ebp;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x488);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x1C) = ecx;
    MEM8(esp + 0x114) = 0xC;
    if ((ecx == 0)) goto loc_000568B5; /* je: equal / zero */

loc_000568B0: ;
    PUSH32(esp, 0x000568B5u); RECOMP_ABI_CALL(0x000B1640u, xml1_guest_character_definition_construct); /* call 0x000B1640 */

loc_000568B5: ;
    ecx = ebp;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    eax = ebp;
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((5) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    edx = 1;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    ecx = MEM32(esi + eax * 4 + 0xD980);
    eax = esi + eax * 4 + 0xD980;
    MEM8(esp + 0x114) = 0;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    SET_LO8(eax, MEM8(edi + 0x16));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 9 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ebp = MEM32(esi + ebp * 4 + 0xDA64);
    MEM32(edi + 0x10) = ebp;
    if (TEST_NZ(_fa, _fb)) goto loc_00056901; /* jne: not equal / not zero */

loc_000568F1: ;
    SET_LO8(ecx, MEM8(esp + 0x120));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00056901; /* je: equal / zero */

loc_000568FC: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 8);
    MEM8(edi + 0x16) = LO8(eax);

loc_00056901: ;
    eax = MEM32(esi + 0xDB24);
    _cf = 0; /* logical op clears CF */
    eax = eax & ebp;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x488);
    SET_LO8(edx, MEM8(edi + 0x16));
    ecx = esp + 0xC8;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFFFFF01u;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00056930u); RECOMP_ABI_CALL(0x00055B20u, sub_00055B20); /* call 0x00055B20 */

loc_00056930: ;
    esi = MEM32(esp + 0x20);

loc_00056934: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB7E0);
    ecx = esp + 0x90;
    PUSH32(esp, 0x00056947u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00056947: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    eax = esp + 0x8C;
    PUSH32(esp, eax);
    MEM8(esp + 0x11C) = 0xD;
    PUSH32(esp, 0x00056961u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_00056961: ;
    edi = eax;
    ecx = esp + 0x88;
    MEM32(esp + 0x14) = edi;
    MEM8(esp + 0x114) = 0;
    PUSH32(esp, 0x0005697Bu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0005697B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ebp = 1;
    if (TEST_NZ(_fa, _fb)) goto loc_000563FB; /* jne: not equal / not zero */

loc_00056988: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB7E8);
    ecx = esp + 0xB0;
    PUSH32(esp, 0x0005699Bu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0005699B: ;
    ecx = esp + 0xA8;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    MEM8(esp + 0x118) = 0xE;
    PUSH32(esp, 0x000569B4u); RECOMP_ABI_CALL(0x00126080u, sub_00126080); /* call 0x00126080 */

loc_000569B4: ;
    edi = eax;
    ecx = esp + 0xA8;
    MEM32(esp + 0x18) = edi;
    MEM8(esp + 0x114) = 0;
    PUSH32(esp, 0x000569CEu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000569CE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000563B2; /* jne: not equal / not zero */

loc_000569D6: ;
    ecx = esp + 0xC8;
    MEM32(esp + 0x114) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000569EDu); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_000569ED: ;
    _fa = (uint32_t)(MEM32(esi + 0xF31C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xF31C), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00056A33; /* jle: less or equal (signed <=) */

loc_000569F5: ;
    edi = esi + 0xDB5E;
    goto loc_00056A00;

    /* nop */

loc_00056A00: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00056A25; /* je: equal / zero */

loc_00056A06: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xEF);
    MEM8(edi) = LO8(eax);
    ecx = MEM32(edi + -6);
    ebx = MEM32(esi + 0xDB28);
    eax = esi + 4;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x488);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    PUSH32(esp, 0x00056A25u); RECOMP_ABI_CALL(0x000B0F10u, sub_000B0F10); /* call 0x000B0F10 */

loc_00056A25: ;
    eax = MEM32(esi + 0xF31C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x18)) >> 32) & 1);
    edi = edi + 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00056A00; /* jl: less (signed <) */

loc_00056A33: ;
    xml1_modder_unlock(esi);
        if (getenv("XML1_CHARACTER_TRACE")) {
            unsigned pc_count = MEM32(esi + XML1_MANAGER_OFFSET(0xDCCC));
            fprintf(stderr, "[CHARACTER TRACE] definitions=%u herostat=%u instantiated=%u\n",
                MEM32(esi + 0x8534 + XML1_MANAGER_DELTA), pc_count, MEM32(esi + 4 + XML1_POOL_LIVE_COUNT));
            for (unsigned pc_i = 0; pc_i < pc_count; ++pc_i) {
                unsigned pc_id = MEM8(esi + XML1_MANAGER_OFFSET(0xDBCC) + pc_i);
                unsigned pc_meta = esi + 0x6D48 + XML1_MANAGER_DELTA + pc_id * 24;
                unsigned pc_handle = MEM32(pc_meta + 16);
                if (!pc_handle) continue;
                unsigned pc_char = esi + 4 + (pc_handle & 63) * XML1_CHARACTER_BYTES;
                fprintf(stderr, "[CHARACTER TRACE] id=%u slot=%u name=%s selected=%u skins=",
                    pc_id, pc_handle & 63, (const char *)((uintptr_t)g_xbox_mem_offset + pc_char + 0x20C), MEM8(pc_char + 0x1E));
                for (unsigned pc_c=0; pc_c<XML1_SKIN_CATEGORY_COUNT; ++pc_c)
                    fprintf(stderr, "%s%u", pc_c ? "," : "", XML1_SKIN_BYTE(pc_char,pc_c)+1);
                fprintf(stderr, "\n");
            }
        }
    SET_LO8(eax, 1);

loc_00056A35: ;
    ecx = MEM32(esp + 0x10C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x108)) >> 32) & 1);
    esp = esp + 0x108;
    esp += 12; return; /* ret 8 */

}



/**
 * sub_00056C60
 * Original: 0x00056C60 - 0x00056C66 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056C60(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_00056C60: ;
    SET_LO8(eax, MEM8(0x44F1F0));
    esp += 4; return; /* ret */

}

/**
 * sub_00056C70
 * Original: 0x00056C70 - 0x00056C7C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056C70(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_00056C70: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(0x44F1F0) = LO8(eax);
    esp += 8; return; /* ret 4 */

}



/**
 * sub_00056C90
 * Original: 0x00056C90 - 0x00056C97 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056C90(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_00056C90: ;
    eax = MEM32(ecx + 0xF31C);
    esp += 4; return; /* ret */

}

/**
 * sub_00056CA0
 * Original: 0x00056CA0 - 0x00056CA7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056CA0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_00056CA0: ;
    eax = MEM32(ecx + 0x1BFEC);
    esp += 4; return; /* ret */

}

/**
 * sub_00056CB0
 * Original: 0x00056CB0 - 0x00056CB7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056CB0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_00056CB0: ;
    eax = MEM32(ecx + 0x1BEE8);
    esp += 4; return; /* ret */

}

/**
 * sub_00056CC0
 * Original: 0x00056CC0 - 0x00056CC9 (9 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056CC0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00056CC0: ;
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0x00056CC7u); RECOMP_ABI_CALL(0x000541E0u, xml1_guest_character_manager_xp_threshold); /* call 0x000541E0 */

loc_00056CC7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00056CD0
 * Original: 0x00056CD0 - 0x00056CDE (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056CD0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_00056CD0: ;
    eax = MEM32(esp + 4);
    SET_LO8(eax, MEM8(eax + ecx + 0x1BEEC));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00056CE0
 * Original: 0x00056CE0 - 0x00056CEE (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056CE0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_00056CE0: ;
    eax = MEM32(esp + 4);
    SET_LO8(eax, MEM8(eax + ecx + 0x1BDE8));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00056CF0
 * Original: 0x00056CF0 - 0x00056D02 (18 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056CF0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_00056CF0: ;
    eax = ZX8(MEM8(esp + 4));
    eax = eax + eax * 2;
    eax = ecx + eax * 8 + 0xDB30;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00056D10
 * Original: 0x00056D10 - 0x00056D22 (18 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056D10(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_00056D10: ;
    eax = ZX8(MEM8(esp + 4));
    eax = eax + eax * 2;
    eax = ecx + eax * 8 + 0xDB34;
    esp += 8; return; /* ret 4 */

}



/**
 * sub_00056D50
 * Original: 0x00056D50 - 0x00056D62 (18 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056D50(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_00056D50: ;
    eax = ZX8(MEM8(esp + 4));
    eax = eax + eax * 2;
    eax = ecx + eax * 8 + 0xDB3C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00056D70
 * Original: 0x00056D70 - 0x00056D83 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056D70(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_00056D70: ;
    eax = ZX8(MEM8(esp + 4));
    eax = eax + eax * 2;
    eax = ZX8(MEM8(ecx + eax * 8 + 0xDB45));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00056D90
 * Original: 0x00056D90 - 0x00056DAD (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056D90(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00056D90: ;
    eax = ZX8(MEM8(esp + 4));
    eax = eax + eax * 2;
    PUSH32(esp, esi);
    esi = MEM32(ecx + eax * 8 + 0xDB40);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(edx));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00056DB0
 * Original: 0x00056DB0 - 0x00056DC4 (20 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056DB0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_00056DB0: ;
    eax = ZX8(MEM8(esp + 4));
    eax = eax + eax * 2;
    SET_LO8(eax, MEM8(ecx + eax * 8 + 0xDB46));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00056DD0
 * Original: 0x00056DD0 - 0x00056DE7 (23 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056DD0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_00056DD0: ;
    eax = ZX8(MEM8(esp + 4));
    eax = eax + eax * 2;
    SET_LO8(eax, MEM8(ecx + eax * 8 + 0xDB46));
    SET_LO8(eax, LO8(eax) >> 2);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00056DF0
 * Original: 0x00056DF0 - 0x00056E06 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056DF0(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_00056DF0: ;
    eax = ZX8(MEM8(esp + 4));
    eax = eax + eax * 2;
    SET_LO8(eax, MEM8(ecx + eax * 8 + 0xDB46));
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00056E10
 * Original: 0x00056E10 - 0x00056E27 (23 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056E10(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_00056E10: ;
    eax = ZX8(MEM8(esp + 4));
    eax = eax + eax * 2;
    SET_LO8(eax, MEM8(ecx + eax * 8 + 0xDB46));
    SET_LO8(eax, LO8(eax) >> 5);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00056E30
 * Original: 0x00056E30 - 0x00056E59 (41 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056E30(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_00056E30: ;
    eax = ZX8(MEM8(esp + 4));
    eax = eax + eax * 2;
    SET_LO8(edx, MEM8(ecx + eax * 8 + 0xDB46));
    eax = ecx + eax * 8 + 0xDB46;
    SET_LO8(ecx, MEM8(esp + 8));
    SET_LO8(ecx, LO8(ecx) << 5);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 0x20);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(eax) = LO8(edx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00056E60
 * Original: 0x00056E60 - 0x00056E83 (35 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056E60(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_00056E60: ;
    eax = ZX8(MEM8(esp + 4));
    eax = eax + eax * 2;
    eax = MEM32(ecx + eax * 8 + 0xDB40);
    edx = ecx + 4;
    eax = eax & MEM32(edx + 0xDB24);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x488);
    eax = eax + edx;
    esp += 8; return; /* ret 4 */

}





/**
 * sub_00057050
 * Original: 0x00057050 - 0x00057087 (55 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057050(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_00057050: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00057058u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_00057058: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CB7F4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00057066u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00057066: ;
    PUSH32(esp, 0x0005706Bu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0005706B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CB8FC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00057079u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00057079: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00057085u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00057085: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00057090
 * Original: 0x00057090 - 0x00057242 (434 bytes, 128 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057090(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00057090: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E960);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x30;
    PUSH32(esp, 0x000570B5u); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_000570B5: ;
    eax = MEM32(esp + 0x84);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    MEM32(esp + 0x84) = 0;
    PUSH32(esp, 0x000570D3u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000570D3: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x3C;
    MEM8(esp + 0x88) = 1;
    PUSH32(esp, 0x000570EDu); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_000570ED: ;
    ecx = esp + 0x10;
    SET_LO8(ebx, LO8(eax));
    MEM8(esp + 0x7C) = 0;
    PUSH32(esp, 0x000570FDu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000570FD: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005717B; /* je: equal / zero */

loc_00057101: ;
    PUSH32(esp, 0x3CB7E8);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00057114u); RECOMP_ABI_CALL(0x00126650u, sub_00126650); /* call 0x00126650 */

loc_00057114: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0005711Du); RECOMP_ABI_CALL(0x00125C40u, sub_00125C40); /* call 0x00125C40 */

loc_0005711D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005717B; /* je: equal / zero */

loc_00057121: ;
    PUSH32(esp, 0x3C91A4);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00057134u); RECOMP_ABI_CALL(0x00126D00u, sub_00126D00); /* call 0x00126D00 */

loc_00057134: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0005713Du); RECOMP_ABI_CALL(0x00125C40u, sub_00125C40); /* call 0x00125C40 */

loc_0005713D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005717B; /* je: equal / zero */

loc_00057141: ;
    PUSH32(esp, 0x00057146u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_00057146: ;
    PUSH32(esp, 0x3C806C);
    esi = eax;
    edi = MEM32(esi);
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0005715Du); RECOMP_ABI_CALL(0x001266F0u, sub_001266F0); /* call 0x001266F0 */

loc_0005715D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x18); PUSH32(esp, 0x00057163u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00057163: ;
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0005716Eu); RECOMP_ABI_CALL(0x00126DB0u, sub_00126DB0); /* call 0x00126DB0 */

loc_0005716E: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00057177u); RECOMP_ABI_CALL(0x00125C40u, sub_00125C40); /* call 0x00125C40 */

loc_00057177: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00057141; /* jne: not equal / not zero */

loc_0005717B: ;
    ebp = 0; /* xor self */
    /* nop */

loc_00057180: ;
    PUSH32(esp, 0x00057185u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00057185: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x00057190u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00057190: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000571E9; /* je: equal / zero */

loc_00057196: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000571E9; /* je: equal / zero */

loc_0005719C: ;
    PUSH32(esp, 0x000571A1u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000571A1: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0xEDF0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000571E9; /* je: equal / zero */

loc_000571B7: ;
    PUSH32(esp, 0x000571BCu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_000571BC: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_000571CB; /* jne: not equal / not zero */

loc_000571C4: ;
    eax = 0x3C806C;
    goto loc_000571E1;

loc_000571CB: ;
    PUSH32(esp, 0x000571D0u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000571D0: ;
    esi = esi & 0xFFFFFF;
    edx = MEM32(eax + esi * 4 + 4);
    eax = edx + eax + 0xEDF0;

loc_000571E1: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000571E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000571E9: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00057180; /* jl: less (signed <) */

loc_000571EF: ;
    PUSH32(esp, 0x000571F4u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_000571F4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CB910);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00057207u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00057207: ;
    PUSH32(esp, 0x0005720Cu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0005720C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CB8FC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0005721Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005721A: ;
    ecx = esp + 0x30;
    MEM32(esp + 0x7C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0005722Bu); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_0005722B: ;
    ecx = MEM32(esp + 0x74);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x70;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00057250
 * Original: 0x00057250 - 0x00057359 (265 bytes, 88 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057250(void)
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

loc_00057250: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0005725Du); RECOMP_ABI_CALL(0x000AF700u, sub_000AF700); /* call 0x000AF700 */

loc_0005725D: ;
    edi = MEM32(esp + 0x14);
    ecx = SX16(LO16(eax));
    eax = 0x2D;
    eax = eax - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00057271; /* jl: less (signed <) */

loc_0005726F: ;
    edi = eax;

loc_00057271: ;
    ecx = esi;
    PUSH32(esp, 0x00057278u); RECOMP_ABI_CALL(0x000AF700u, sub_000AF700); /* call 0x000AF700 */

loc_00057278: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x23) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x23 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000572A4; /* jge: greater or equal (signed >=) */

loc_0005727E: ;
    ecx = esi;
    PUSH32(esp, 0x00057285u); RECOMP_ABI_CALL(0x000AF700u, sub_000AF700); /* call 0x000AF700 */

loc_00057285: ;
    edx = SX16(LO16(eax));
    eax = 0x23;
    eax = eax - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000572A4; /* jle: less or equal (signed <=) */

loc_00057293: ;
    ecx = esi;
    PUSH32(esp, 0x0005729Au); RECOMP_ABI_CALL(0x000AF700u, sub_000AF700); /* call 0x000AF700 */

loc_0005729A: ;
    ecx = SX16(LO16(eax));
    edi = 0x23;
    edi = edi - ecx;

loc_000572A4: ;
    ecx = esi;
    PUSH32(esp, 0x000572ABu); RECOMP_ABI_CALL(0x000AF700u, sub_000AF700); /* call 0x000AF700 */

loc_000572AB: ;
    edx = SX16(LO16(eax));
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00057354; /* jl: less (signed <) */

loc_000572B9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000572C0u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_000572C0: ;
    ebx = eax;
    ebp = MEM32(ebx);
    ecx = esi;
    PUSH32(esp, 0x000572CBu); RECOMP_ABI_CALL(0x000AF700u, sub_000AF700); /* call 0x000AF700 */

loc_000572CB: ;
    eax = SX16(LO16(eax));
    eax = eax + edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0xC8); PUSH32(esp, 0x000572D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000572D9: ;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000572E2u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_000572E2: ;
    ebx = eax;
    ebp = MEM32(ebx);
    ecx = esi;
    PUSH32(esp, 0x000572EDu); RECOMP_ABI_CALL(0x000AF700u, sub_000AF700); /* call 0x000AF700 */

loc_000572ED: ;
    ecx = SX16(LO16(eax));
    edx = ecx + edi + 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0xC8); PUSH32(esp, 0x000572FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000572FD: ;
    eax = eax - MEM32(esp + 0x18);
    MEM32(esp + 0x1C) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_top() = fp_top() + (double)SMEM32(esp + 0x18); /* fiadd dword ptr [esp + 0x18] */
    fp_top() = fp_top() - (double)SMEM32(esi + 0x18); /* fisub dword ptr [esi + 0x18] */
    PUSH32(esp, 0x00057319u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00057319: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00057321u); RECOMP_ABI_CALL(0x000AF890u, sub_000AF890); /* call 0x000AF890 */

loc_00057321: ;
    ecx = esi;
    PUSH32(esp, 0x00057328u); RECOMP_ABI_CALL(0x000AF950u, xml1_guest_character_reconcile_level); /* call 0x000AF950 */

loc_00057328: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00057334u); RECOMP_ABI_CALL(0x000B1CA0u, sub_000B1CA0); /* call 0x000B1CA0 */

loc_00057334: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00057354; /* je: equal / zero */

loc_0005733E: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00057346u); RECOMP_ABI_CALL(0x000AF4E0u, sub_000AF4E0); /* call 0x000AF4E0 */

loc_00057346: ;
    ecx = esi;
    PUSH32(esp, 0x0005734Du); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_0005734D: ;
    ecx = eax;
    PUSH32(esp, 0x00057354u); RECOMP_ABI_CALL(0x00048950u, xml1_guest_talent_pending_commit); /* call 0x00048950 */

loc_00057354: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00057360
 * Original: 0x00057360 - 0x0005736E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057360(void)
{

loc_00057360: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00057370
 * Original: 0x00057370 - 0x0005737C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057370(void)
{

loc_00057370: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00057378u); RECOMP_ABI_CALL(0x00057360u, sub_00057360); /* call 0x00057360 */

loc_00057378: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00057380
 * Original: 0x00057380 - 0x000573DA (90 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057380: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x88) = esi;
    MEM32(ecx + 0x8C) = esi;
    MEM32(ecx + 0x90) = esi;
    edx = 0; /* xor self */
    goto loc_000573A0;

    /* nop */

loc_000573A0: ;
    eax = MEM32(ecx + 0x88);
    edi = MEM32(ecx + 0x90);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(ecx + 0x88) = eax;
    MEM32(ecx + 0x90) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000573CC; /* jl: less (signed <) */

loc_000573BF: ;
    MEM32(ecx + 0x88) = esi;
    eax = 7;
    goto loc_000573CD;

loc_000573CC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000573CD: ;
    MEM32(ecx + eax * 4 + 0x64) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000573A0; /* jl: less (signed <) */

loc_000573D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000573E0
 * Original: 0x000573E0 - 0x00057404 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000573E0(void)
{

loc_000573E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x64;
    PUSH32(esp, 0x000573EBu); RECOMP_ABI_CALL(0x00057370u, sub_00057370); /* call 0x00057370 */

loc_000573EB: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x94) = eax;
    ecx = esi;
    MEM32(esi + 0x98) = eax;
    PUSH32(esp, 0x00057400u); RECOMP_ABI_CALL(0x00057380u, sub_00057380); /* call 0x00057380 */

loc_00057400: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00057410
 * Original: 0x00057410 - 0x0005741C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057410(void)
{

loc_00057410: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00057418u); RECOMP_ABI_CALL(0x000573E0u, sub_000573E0); /* call 0x000573E0 */

loc_00057418: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00057420
 * Original: 0x00057420 - 0x0005743B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057420(void)
{

loc_00057420: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00057428u); RECOMP_ABI_CALL(0x00057410u, sub_00057410); /* call 0x00057410 */

loc_00057428: ;
    eax = eax | 0xFFFFFFFFu;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0xA0) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00057440
 * Original: 0x00057440 - 0x0005744C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057440(void)
{

loc_00057440: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00057448u); RECOMP_ABI_CALL(0x00057420u, sub_00057420); /* call 0x00057420 */

loc_00057448: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00057450
 * Original: 0x00057450 - 0x000574B1 (97 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057450(void)
{

loc_00057450: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esi) = 0x3CB938;
    MEM32(esi + 4) = ebx;
    edi = esi + 0x10;
    MEM32(esi + 8) = ebx;
    ecx = edi;
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0x00057470u); RECOMP_ABI_CALL(0x00057440u, sub_00057440); /* call 0x00057440 */

loc_00057470: ;
    MEM8(esi + 0xB4) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(edi + 0x9C) = 0xFFFFFFFFu;
    MEM32(edi + 0xA0) = 0xFFFFFFFFu;
    MEM32(edi + 0x98) = ebx;
    ecx = edi;
    MEM32(edi + 0x94) = ebx;
    PUSH32(esp, 0x000574A0u); RECOMP_ABI_CALL(0x00057380u, sub_00057380); /* call 0x00057380 */

loc_000574A0: ;
    MEM32(esi + 0xC) = 0xFFFFFFFFu;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0xFFFFFFFEu;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000574C0
 * Original: 0x000574C0 - 0x000574E3 (35 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000574C0(void)
{

loc_000574C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000574CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000574CF: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000574DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000574DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000574F0
 * Original: 0x000574F0 - 0x000574F7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000574F0(void)
{

loc_000574F0: ;
    SET_LO8(eax, MEM8(ecx + 0xB4));
    esp += 4; return; /* ret */

}

/**
 * sub_00057500
 * Original: 0x00057500 - 0x0005750D (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057500(void)
{

loc_00057500: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0xB4) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00057510
 * Original: 0x00057510 - 0x00057545 (53 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00057510: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_0005753F; /* jl: less (signed <) */

loc_0005751B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0005753F; /* jge: greater or equal (signed >=) */

loc_00057520: ;
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((5) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = MEM32(esi + edx * 4 + 8);
    POP32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    esp += 8; return; /* ret 4 */

loc_0005753F: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00057550
 * Original: 0x00057550 - 0x0005759B (75 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057550: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00057598; /* jl: less (signed <) */

loc_0005755A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00057598; /* jge: greater or equal (signed >=) */

loc_0005755F: ;
    SET_LO8(edx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    edx = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0005757F; /* je: equal / zero */

loc_00057569: ;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = eax + edx * 4 + 8;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    MEM32(eax) = MEM32(eax) | edx;
    esp += 12; return; /* ret 8 */

loc_0005757F: ;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = eax + edx * 4 + 8;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;

loc_00057598: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000575A0
 * Original: 0x000575A0 - 0x000575EB (75 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000575A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000575A0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000575E8; /* jl: less (signed <) */

loc_000575AA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000575E8; /* jge: greater or equal (signed >=) */

loc_000575AF: ;
    SET_LO8(edx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    edx = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000575CF; /* je: equal / zero */

loc_000575B9: ;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = eax + edx * 4 + 0xC;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    MEM32(eax) = MEM32(eax) | edx;
    esp += 12; return; /* ret 8 */

loc_000575CF: ;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = eax + edx * 4 + 0xC;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;

loc_000575E8: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000575F0
 * Original: 0x000575F0 - 0x000577F5 (517 bytes, 167 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000575F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000575F0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0x00057602u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00057602: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0005760Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005760C: ;
    ecx = MEM32(edi + 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0005777D; /* jne: not equal / not zero */

loc_0005761D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005777D; /* je: equal / zero */

loc_00057625: ;
    _fa = (uint32_t)(MEM32(edi + 0xA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xA8), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00057649; /* jne: not equal / not zero */

loc_0005762E: ;
    eax = MEM32(edi + 0xAC);
    ecx = edi + 0x10;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, 0x00057649u); RECOMP_ABI_CALL(0x00057910u, sub_00057910); /* call 0x00057910 */

loc_00057649: ;
    eax = esp + 0x20;
    esi = edi + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00057658u); RECOMP_ABI_CALL(0x00057800u, sub_00057800); /* call 0x00057800 */

loc_00057658: ;
    edx = MEM32(esi + 0x9C);
    MEM8(esp + 0x13) = 1;

loc_00057663: ;
    eax = esi;
    MEM32(esp + 0x14) = ebp;
    /* nop */

loc_00057670: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005767D; /* jne: not equal / not zero */

loc_00057675: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000577EB; /* je: equal / zero */

loc_0005767D: ;
    eax = 0; /* xor self */
    /* nop */

loc_00057680: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edi + ecx * 4 + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + ecx * 4 + 0xC), ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000576D8; /* je: equal / zero */

loc_00057697: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x13));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000576D8; /* je: equal / zero */

loc_0005769F: ;
    ecx = MEM32(eax * 8 + 0x44CB58);
    edi = MEM32(esp + 0x14);
    edi = ecx + edi * 4;
    ecx = MEM32(edi);
    ebp = 1;
    ebp = ebp << LO8(ecx);
    ebx = edx + edx * 2;
    ecx = esi;
    _fa = (uint32_t)(MEM32(ecx + ebx * 4 + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + ebx * 4 + 8), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000576D4; /* je: equal / zero */

loc_000576C1: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057729; /* je: equal / zero */

loc_000576C8: ;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 0x1E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057729; /* je: equal / zero */

loc_000576CE: ;
    edi = MEM32(esp + 0x1C);
    goto loc_000576DD;

loc_000576D4: ;
    edi = MEM32(esp + 0x1C);

loc_000576D8: ;
    MEM8(esp + eax + 0x13) = 0;

loc_000576DD: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00057680; /* jl: less (signed <) */

loc_000576E3: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00057716; /* jne: not equal / not zero */

loc_000576EB: ;
    ebx = ebx | 0xFFFFFFFFu;
    ebp = 0; /* xor self */
    MEM32(esi + 0x9C) = ebx;
    MEM32(esi + 0xA0) = ebx;
    MEM32(esi + 0x98) = ebp;
    ecx = esi;
    MEM32(esi + 0x94) = ebp;
    PUSH32(esp, 0x0005770Fu); RECOMP_ABI_CALL(0x00057380u, sub_00057380); /* call 0x00057380 */

loc_0005770F: ;
    edx = ebx;
    goto loc_00057663;

loc_00057716: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + edx * 2;
    eax = esi;
    edx = MEM32(eax + edx * 4);
    ebp = 0; /* xor self */
    goto loc_00057670;

loc_00057729: ;
    eax = eax | 0xFFFFFFFFu;
    edi = 0; /* xor self */
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0x98) = edi;
    ecx = esi;
    MEM32(esi + 0x94) = edi;
    PUSH32(esp, 0x0005774Du); RECOMP_ABI_CALL(0x00057380u, sub_00057380); /* call 0x00057380 */

loc_0005774D: ;
    PUSH32(esp, 0x00057752u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00057752: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0005775Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005775B: ;
    eax = MEM32(esp + 0x1C);
    MEM32(eax + 4) = 1;
    PUSH32(esp, 0x0005776Bu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0005776B: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00057773u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00057773: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

loc_0005777D: ;
    ebx = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000577EB; /* jne: not equal / not zero */

loc_00057786: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000577EB; /* je: equal / zero */

loc_0005778A: ;
    SET_LO8(ecx, MEM8(edi + 0xC));
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000577C9; /* je: equal / zero */

loc_00057793: ;
    ecx = MEM32(0x44CB5C);
    esi = ebx;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000577C9; /* je: equal / zero */

loc_000577A1: ;
    _fa = (uint32_t)(MEM8(edi + 8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 8), LO8(ebx) (8-bit) */
    eax = MEM32(edi + 8);
    if (TEST_Z(_fa, _fb)) goto loc_000577AE; /* je: equal / zero */

loc_000577A9: ;
    eax = eax & 0xFFFFFFFEu;
    goto loc_000577B0;

loc_000577AE: ;
    eax = eax | ebx;

loc_000577B0: ;
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0x000577B8u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000577B8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x000577C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000577C1: ;
    MEM8(edi + 0xB4) = LO8(ebx);
    SET_LO8(edx, LO8(ebx));

loc_000577C9: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000577DB; /* jne: not equal / not zero */

loc_000577CD: ;
    PUSH32(esp, 0x000577D2u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000577D2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x000577DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000577DB: ;
    MEM32(edi + 4) = ebp;
    PUSH32(esp, 0x000577E3u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_000577E3: ;
    edx = MEM32(eax);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000577EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000577EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00057800
 * Original: 0x00057800 - 0x00057838 (56 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057800(void)
{

loc_00057800: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0005780Bu); RECOMP_ABI_CALL(0x00057840u, sub_00057840); /* call 0x00057840 */

loc_0005780B: ;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx);
    edx = eax + eax * 2;
    MEM32(esi + edx * 4 + 8) = ecx;
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x00057831u); RECOMP_ABI_CALL(0x000578B0u, sub_000578B0); /* call 0x000578B0 */

loc_00057831: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00057840
 * Original: 0x00057840 - 0x00057887 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057840(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057840: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x8C);
    eax = esi + 0x64;
    PUSH32(esp, edi);
    edi = MEM32(eax + ecx * 4);
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esi + edx * 4 + 0x94);
    edx = esi + edx * 4 + 0x94;
    ecx = ecx | ebx;
    MEM32(edx) = ecx;
    ecx = eax;
    PUSH32(esp, 0x0005787Bu); RECOMP_ABI_CALL(0x00057890u, sub_00057890); /* call 0x00057890 */

loc_0005787B: ;
    MEM32(esi + 0x98) = MEM32(esi + 0x98) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x98)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00057890
 * Original: 0x00057890 - 0x000578AB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057890: ;
    eax = MEM32(ecx + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x28) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    eax = MEM32(ecx + 0x2C);
    if (CMP_L(_fas, _fbs)) goto loc_000578A6; /* jl: less (signed <) */

loc_0005789F: ;
    MEM32(ecx + 0x28) = 0;

loc_000578A6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x2C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000578B0
 * Original: 0x000578B0 - 0x00057909 (89 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000578B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000578B0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000578C5; /* je: equal / zero */

loc_000578BC: ;
    edx = eax + eax * 2;
    edi = MEM32(ecx + edx * 4 + 4);
    goto loc_000578CB;

loc_000578C5: ;
    edi = MEM32(ecx + 0xA0);

loc_000578CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = edx + edx * 2;
    esi = ecx + esi * 4;
    MEM32(esi + 4) = edi;
    MEM32(esi) = eax;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000578EA; /* je: equal / zero */

loc_000578E1: ;
    eax = eax + eax * 2;
    MEM32(ecx + eax * 4 + 4) = edx;
    goto loc_000578F0;

loc_000578EA: ;
    MEM32(ecx + 0xA0) = edx;

loc_000578F0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000578FF; /* je: equal / zero */

loc_000578F5: ;
    eax = edi + edi * 2;
    MEM32(ecx + eax * 4) = edx;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_000578FF: ;
    MEM32(ecx + 0x9C) = edx;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00057910
 * Original: 0x00057910 - 0x00057966 (86 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057910: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    edx = eax + eax * 2;
    esi = MEM32(ecx + edx * 4 + 4);
    edx = ecx + edx * 4;
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057931; /* je: equal / zero */

loc_0005792A: ;
    ebx = edx + edx * 2;
    MEM32(ecx + ebx * 4 + 4) = esi;

loc_00057931: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005793C; /* je: equal / zero */

loc_00057936: ;
    ebx = esi + esi * 2;
    MEM32(ecx + ebx * 4) = edx;

loc_0005793C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xA0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xA0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005794A; /* jne: not equal / not zero */

loc_00057944: ;
    MEM32(ecx + 0xA0) = esi;

loc_0005794A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x9C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x9C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00057958; /* jne: not equal / not zero */

loc_00057952: ;
    MEM32(ecx + 0x9C) = edx;

loc_00057958: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005795Eu); RECOMP_ABI_CALL(0x00057970u, sub_00057970); /* call 0x00057970 */

loc_0005795E: ;
    MEM32(edi) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00057970
 * Original: 0x00057970 - 0x000579DF (111 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057970: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x94;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x88);
    edi = MEM32(eax + 0x90);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    MEM32(eax + 0x88) = ecx;
    MEM32(eax + 0x90) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000579C8; /* jl: less (signed <) */

loc_000579B7: ;
    MEM32(eax + 0x88) = 0;
    ecx = 7;
    goto loc_000579C9;

loc_000579C8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000579C9: ;
    MEM32(eax + ecx * 4 + 0x64) = esi;
    ecx = MEM32(eax + 0x98);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x98) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000579E0
 * Original: 0x000579E0 - 0x00057A1A (58 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000579E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000579E0: ;
    SET_LO8(ecx, MEM8(0x48D730));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00057A14; /* jne: not equal / not zero */

loc_000579EF: ;
    edx = MEM32(0x48D730);
    edx = edx | eax;
    ecx = 0x48D678;
    MEM32(0x48D730) = edx;
    PUSH32(esp, 0x00057A07u); RECOMP_ABI_CALL(0x00057450u, sub_00057450); /* call 0x00057450 */

loc_00057A07: ;
    PUSH32(esp, 0x359E50);
    PUSH32(esp, 0x00057A11u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00057A11: ;
    esp = esp + 4;

loc_00057A14: ;
    eax = 0x48D678;
    esp += 4; return; /* ret */

}

/**
 * sub_00057A20
 * Original: 0x00057A20 - 0x00057A6E (78 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057A20: ;
    SET_LO8(ecx, MEM8(0x48D740));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00057A68; /* jne: not equal / not zero */

loc_00057A2F: ;
    edx = MEM32(0x48D740);
    edx = edx | eax;
    PUSH32(esp, 0x359E60);
    MEM32(0x48D740) = edx;
    MEM32(0x48D734) = 0x3CB964;
    MEM32(0x48D738) = 0;
    MEM32(0x48D73C) = 0;
    PUSH32(esp, 0x00057A65u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00057A65: ;
    esp = esp + 4;

loc_00057A68: ;
    eax = 0x48D734;
    esp += 4; return; /* ret */

}

/**
 * sub_00057A70
 * Original: 0x00057A70 - 0x00057B06 (150 bytes, 58 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057A70: ;
    esp = esp - 0x40;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00057A81u); RECOMP_ABI_CALL(0x00058340u, sub_00058340); /* call 0x00058340 */

loc_00057A81: ;
    PUSH32(esp, 0x00057A86u); RECOMP_ABI_CALL(0x0006BF00u, sub_0006BF00); /* call 0x0006BF00 */

loc_00057A86: ;
    edx = MEM32(eax);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00057A9Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00057A9C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    edi = MEM32(esp + 0x50);
    if (TEST_Z(_fa, _fb)) goto loc_00057AF4; /* je: equal / zero */

loc_00057AA4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = esp + 0xC;
    esi = esp + 0x10;
    ecx = 0; /* xor self */
    edx = edx - edi;
    eax = edi + 8;
    esi = esi - edi;

loc_00057AB7: ;
    edi = MEM32(esp + ecx * 4 + 0xC);
    ebx = MEM32(eax + -8);
    ebx = ebx & edi;
    edi = MEM32(esp + ecx * 4 + 0x10);
    MEM32(eax + -8) = ebx;
    ebx = MEM32(eax + -4);
    ebx = ebx & edi;
    edi = MEM32(edx + eax);
    MEM32(eax + -4) = ebx;
    ebx = MEM32(eax);
    ebx = ebx & edi;
    edi = MEM32(esi + eax);
    MEM32(eax) = ebx;
    MEM32(eax + 4) = MEM32(eax + 4) & edi;
    ecx = ecx + 4;
    eax = eax + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00057AB7; /* jl: less (signed <) */

loc_00057AE9: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp = esp + 0x40;
    esp += 16; return; /* ret 12 */

loc_00057AF4: ;
    eax = 0; /* xor self */
    ecx = 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp = esp + 0x40;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00057B10
 * Original: 0x00057B10 - 0x00057C59 (329 bytes, 122 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057B10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00057B10: ;
    esp = esp - 0x58;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x00057B23u); RECOMP_ABI_CALL(0x00058340u, sub_00058340); /* call 0x00058340 */

loc_00057B23: ;
    PUSH32(esp, 0x00057B28u); RECOMP_ABI_CALL(0x0006BF00u, sub_0006BF00); /* call 0x0006BF00 */

loc_00057B28: ;
    esi = MEM32(esp + 0x6C);
    ebx = MEM32(esp + 0x68);
    edx = MEM32(eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00057B3Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00057B3E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00057B58; /* jne: not equal / not zero */

loc_00057B42: ;
    edi = MEM32(esp + 0x70);
    ecx = 0x10;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x58;
    esp += 20; return; /* ret 16 */

loc_00057B58: ;
    edx = MEM32(esp + 0x70);
    edi = esp + 0x24;
    ecx = edx + 0xC;
    edx = edx - edi;
    eax = esp + 0x28;
    edi = 4;
    PUSH32(esp, ebp);
    /* nop */

loc_00057B70: ;
    ebp = MEM32(ecx + -12);
    MEM32(eax + -4) = MEM32(eax + -4) & ebp;
    ebp = MEM32(edx + eax);
    MEM32(eax) = MEM32(eax) & ebp;
    ebp = MEM32(ecx + -4);
    MEM32(eax + 4) = MEM32(eax + 4) & ebp;
    ebp = MEM32(ecx);
    MEM32(eax + 8) = MEM32(eax + 8) & ebp;
    eax = eax + 0x10;
    ecx = ecx + 0x10;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00057B70; /* jne: not equal / not zero */

loc_00057B8F: ;
    ebp = MEM32(esp + 0x74);
    eax = 0; /* xor self */
    ecx = 0x10;
    edi = ebp;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(ebx + 8);
    edx = MEM32(ebx);
    eax = MEM32(ebx + 4);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esi + 8);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esi);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, 1);
    MEM32(esp + 0x28) = ecx;
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    ecx = esp + 0x30;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x00057BD4u); RECOMP_ABI_CALL(0x00057C60u, sub_00057C60); /* call 0x00057C60 */

loc_00057BD4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x200 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00057C4D; /* jge: greater or equal (signed >=) */

loc_00057BDE: ;
    SET_LO8(ebx, MEM8(esp + 0x78));

loc_00057BE2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00057BE8u); RECOMP_ABI_CALL(0x00066B00u, sub_00066B00); /* call 0x00066B00 */

loc_00057BE8: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00057BF2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00057BF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057C36; /* je: equal / zero */

loc_00057BF6: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057C08; /* je: equal / zero */

loc_00057BFA: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00057C06u); RECOMP_ABI_CALL(0x00057D00u, sub_00057D00); /* call 0x00057D00 */

loc_00057C06: ;
    goto loc_00057C14;

loc_00057C08: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00057C14u); RECOMP_ABI_CALL(0x00057D60u, sub_00057D60); /* call 0x00057D60 */

loc_00057C14: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057C36; /* je: equal / zero */

loc_00057C18: ;
    ecx = esi;
    ecx = ecx & 0x1F;
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(ebp + eax * 4);
    eax = ebp + eax * 4;
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00057C36: ;
    PUSH32(esp, 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = esp + 0x30;
    PUSH32(esp, 0x00057C43u); RECOMP_ABI_CALL(0x00057C60u, sub_00057C60); /* call 0x00057C60 */

loc_00057C43: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00057BE2; /* jl: less (signed <) */

loc_00057C4D: ;
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x58;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00057C60
 * Original: 0x00057C60 - 0x00057CF9 (153 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057C60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00057C77; /* jl: less (signed <) */

loc_00057C6E: ;
    eax = 0x200;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00057C77: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + ecx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_00057C8A; /* jne: not equal / not zero */

loc_00057C88: ;
    edx = ~edx;

loc_00057C8A: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00057CB4; /* jne: not equal / not zero */

loc_00057C95: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00057CEF; /* jge: greater or equal (signed >=) */

loc_00057CA2: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + edx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_00057CB0; /* jne: not equal / not zero */

loc_00057CAE: ;
    edx = ~edx;

loc_00057CB0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057C95; /* je: equal / zero */

loc_00057CB4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00057CC2; /* jne: not equal / not zero */

loc_00057CBC: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_00057CC2: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00057CCC; /* jne: not equal / not zero */

loc_00057CC6: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_00057CCC: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00057CD7; /* jne: not equal / not zero */

loc_00057CD1: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_00057CD7: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00057CE8; /* jne: not equal / not zero */

loc_00057CDC: ;
    /* nop */

loc_00057CE0: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057CE0; /* je: equal / zero */

loc_00057CE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00057CF4; /* jl: less (signed <) */

loc_00057CEF: ;
    eax = 0x200;

loc_00057CF4: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00057D00
 * Original: 0x00057D00 - 0x00057D5A (90 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057D00(void)
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

loc_00057D00: ;
    fp_push(MEMF(ecx)); /* fld float */
    edx = MEM32(esp + 4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057D55; /* je: equal / zero */

loc_00057D10: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00057D55; /* jnp: not parity */

loc_00057D1C: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057D55; /* je: equal / zero */

loc_00057D29: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00057D55; /* jnp: not parity */

loc_00057D36: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057D55; /* je: equal / zero */

loc_00057D43: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00057D55; /* jnp: not parity */

loc_00057D50: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_00057D55: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00057D60
 * Original: 0x00057D60 - 0x00057DBA (90 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057D60(void)
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

loc_00057D60: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    edx = MEM32(esp + 4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00057DB5; /* jp: parity */

loc_00057D71: ;
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00057DB5; /* jne: not equal / not zero */

loc_00057D7C: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00057DB5; /* jp: parity */

loc_00057D89: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00057DB5; /* jne: not equal / not zero */

loc_00057D96: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00057DB5; /* jp: parity */

loc_00057DA3: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00057DB5; /* jne: not equal / not zero */

loc_00057DB0: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_00057DB5: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00057DC0
 * Original: 0x00057DC0 - 0x00057F9E (478 bytes, 164 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057DC0(void)
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

loc_00057DC0: ;
    esp = esp - 0x68;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x70);
    fp_push(MEMF(esi)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = fp_top() - MEMF(esp + 0x78); /* fsub dword ptr [esp + 0x78] */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x78); /* fsub dword ptr [esp + 0x78] */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x78); /* fsub dword ptr [esp + 0x78] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x78)); /* fld float */
    fp_top() = fp_top() + MEMF(esi); /* fadd dword ptr [esi] */
    fp_push(MEMF(esp + 0x78)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 4); /* fadd dword ptr [esi + 4] */
    fp_push(MEMF(esp + 0x78)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 8); /* fadd dword ptr [esi + 8] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x28);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x10) = ecx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00057E22u); RECOMP_ABI_CALL(0x0006BF00u, sub_0006BF00); /* call 0x0006BF00 */

loc_00057E22: ;
    edx = MEM32(eax);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00057E38u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00057E38: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00057E51; /* jne: not equal / not zero */

loc_00057E3C: ;
    edi = MEM32(esp + 0x7C);
    ecx = 0x10;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x68;
    esp += 20; return; /* ret 16 */

loc_00057E51: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x84);
    ecx = ebp;
    edx = esp + 0x38;
    eax = 0; /* xor self */
    ecx = ecx - edx;

loc_00057E64: ;
    ebx = MEM32(esp + eax * 4 + 0x38);
    edx = ecx + eax * 4;
    edx = MEM32(esp + edx + 0x38);
    ebx = ebx & edx;
    MEM32(esp + eax * 4 + 0x38) = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00057E64; /* jl: less (signed <) */

loc_00057E7B: ;
    fp_push(MEMF(esp + 0x80)); /* fld float */
    eax = 0; /* xor self */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CB95C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3cb95c] */
    ecx = 0x10;
    edi = ebp;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00057EA2; /* jp: parity */

loc_00057E9A: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3CB95C)); /* fld float */

loc_00057EA2: ;
    ecx = MEM32(esi + 4);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    edx = MEM32(esi + 8);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x28) = eax;
    edi = 0; /* xor self */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x30) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00057EEE; /* jne: not equal / not zero */

loc_00057EC6: ;
    goto loc_00057ED0;

    /* nop */
    /* nop */

loc_00057ED0: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00057F92; /* jge: greater or equal (signed >=) */

loc_00057EE1: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    ecx = MEM32(esp + ecx * 4 + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057ED0; /* je: equal / zero */

loc_00057EEE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00057EFC; /* jne: not equal / not zero */

loc_00057EF6: ;
    eax = eax + 0x10;
    ecx = ecx >> 0x10;

loc_00057EFC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00057F06; /* jne: not equal / not zero */

loc_00057F00: ;
    eax = eax + 8;
    ecx = ecx >> 8;

loc_00057F06: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00057F11; /* jne: not equal / not zero */

loc_00057F0B: ;
    eax = eax + 4;
    ecx = ecx >> 4;

loc_00057F11: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00057F1E; /* jne: not equal / not zero */

loc_00057F16: ;
    ecx = ecx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057F16; /* je: equal / zero */

loc_00057F1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00057F92; /* jge: greater or equal (signed >=) */

loc_00057F25: ;
    SET_LO8(ebx, MEM8(esp + 0x88));
    esi = eax;
    edi = edi;

loc_00057F30: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00057F36u); RECOMP_ABI_CALL(0x00066B00u, sub_00066B00); /* call 0x00066B00 */

loc_00057F36: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00057F40u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00057F40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057F7B; /* je: equal / zero */

loc_00057F44: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    ecx = esp + 0x28;
    PUSH32(esp, eax);
    if (TEST_Z(_fa, _fb)) goto loc_00057F54; /* je: equal / zero */

loc_00057F4D: ;
    PUSH32(esp, 0x00057F52u); RECOMP_ABI_CALL(0x00122D10u, sub_00122D10); /* call 0x00122D10 */

loc_00057F52: ;
    goto loc_00057F59;

loc_00057F54: ;
    PUSH32(esp, 0x00057F59u); RECOMP_ABI_CALL(0x00122E20u, sub_00122E20); /* call 0x00122E20 */

loc_00057F59: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057F7B; /* je: equal / zero */

loc_00057F5D: ;
    ecx = esi;
    ecx = ecx & 0x1F;
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(ebp + eax * 4);
    eax = ebp + eax * 4;
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00057F7B: ;
    PUSH32(esp, 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = esp + 0x40;
    PUSH32(esp, 0x00057F88u); RECOMP_ABI_CALL(0x00057C60u, sub_00057C60); /* call 0x00057C60 */

loc_00057F88: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00057F30; /* jl: less (signed <) */

loc_00057F92: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x68;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00057FA0
 * Original: 0x00057FA0 - 0x00058056 (182 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057FA0(void)
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

loc_00057FA0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    esp = esp - 0x19C;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1B4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C0);
    esi = ecx;
    ecx = MEM32(esp + 0x1B4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, 0x00057FD5u); RECOMP_ABI_CALL(0x00058380u, sub_00058380); /* call 0x00058380 */

loc_00057FD5: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esp + 0x100)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00057FF8; /* jp: parity */

loc_00057FEB: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x19C;
    esp += 28; return; /* ret 24 */

loc_00057FF8: ;
    ecx = MEM32(esp + 0xE4);
    edx = MEM32(esp + 0xE8);
    eax = MEM32(esp + 0xEC);
    MEM32(esp + 8) = ecx;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, edi);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0x38;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0005802Du); RECOMP_ABI_CALL(0x00058870u, sub_00058870); /* call 0x00058870 */

loc_0005802D: ;
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x0005803Cu); RECOMP_ABI_CALL(0x00058810u, sub_00058810); /* call 0x00058810 */

loc_0005803C: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00058044u); RECOMP_ABI_CALL(0x00058060u, sub_00058060); /* call 0x00058060 */

loc_00058044: ;
    eax = MEM32(esp + 0x108);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x19C;
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00058060
 * Original: 0x00058060 - 0x000582C0 (608 bytes, 193 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058060(void)
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

loc_00058060: ;
    esp = esp - 0x7C;
    eax = MEM32(esp + 0x80);
    ecx = MEM32(eax);
    fp_push(MEMF(eax)); /* fld float */
    edx = MEM32(eax + 4);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x84);
    edx = MEM32(ecx);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x8C);
    fp_top() = fp_top() + MEMF(edx); /* fadd dword ptr [edx] */
    PUSH32(esp, edi);
    fp_push(MEMF(edx + 4)); /* fld float */
    esp = esp - 0xC;
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x3C) = eax;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 8); /* fadd dword ptr [ecx + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 4); /* fadd dword ptr [ecx + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    ecx = esp + 0x10;
    fp_top() = fp_top() + MEMF(edx); /* fadd dword ptr [edx] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000580EEu); RECOMP_ABI_CALL(0x00012010u, sub_00012010); /* call 0x00012010 */

loc_000580EE: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    MEM32(esp + 0x34) = ecx;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x00058114u); RECOMP_ABI_CALL(0x000582C0u, sub_000582C0); /* call 0x000582C0 */

loc_00058114: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00058122u); RECOMP_ABI_CALL(0x00058300u, sub_00058300); /* call 0x00058300 */

loc_00058122: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3CB95C); /* fsub dword ptr [0x3cb95c] */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x10;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3CB95C); /* fsub dword ptr [0x3cb95c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3CB95C); /* fsub dword ptr [0x3cb95c] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00058164u); RECOMP_ABI_CALL(0x00012010u, sub_00012010); /* call 0x00012010 */

loc_00058164: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0);
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    PUSH32(esp, 0);
    ecx = esp + 0x48;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x28); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x2C); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00058195u); RECOMP_ABI_CALL(0x00058340u, sub_00058340); /* call 0x00058340 */

loc_00058195: ;
    PUSH32(esp, 0x0005819Au); RECOMP_ABI_CALL(0x0006BF00u, sub_0006BF00); /* call 0x0006BF00 */

loc_0005819A: ;
    edx = MEM32(eax);
    ecx = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000581B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000581B0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000581CB; /* jne: not equal / not zero */

loc_000581B4: ;
    edi = MEM32(esp + 0x8C);
    ecx = 0x10;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp = esp + 0x7C;
    esp += 20; return; /* ret 16 */

loc_000581CB: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x90);
    ecx = ebx;
    edx = esp + 0x44;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    ecx = ecx - edx;
    edi = edi;

loc_000581E0: ;
    edi = MEM32(esp + eax * 4 + 0x48);
    edx = ecx + eax * 4;
    edx = MEM32(esp + edx + 0x48);
    edi = edi & edx;
    MEM32(esp + eax * 4 + 0x48) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000581E0; /* jl: less (signed <) */

loc_000581F7: ;
    eax = 0; /* xor self */
    ecx = 0x10;
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x48);
    edi = 0; /* xor self */
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005822F; /* jne: not equal / not zero */

loc_0005820E: ;
    edi = edi;

loc_00058210: ;
    esi = esi & 0xFFFFFFE0u;
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x200 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000582B5; /* jge: greater or equal (signed >=) */

loc_00058222: ;
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esp + eax * 4 + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00058210; /* je: equal / zero */

loc_0005822F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005823C; /* jne: not equal / not zero */

loc_00058236: ;
    esi = esi + 0x10;
    eax = eax >> 0x10;

loc_0005823C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00058246; /* jne: not equal / not zero */

loc_00058240: ;
    esi = esi + 8;
    eax = eax >> 8;

loc_00058246: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00058250; /* jne: not equal / not zero */

loc_0005824A: ;
    esi = esi + 4;
    eax = eax >> 4;

loc_00058250: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005825B; /* jne: not equal / not zero */

loc_00058254: ;
    eax = eax >> 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00058254; /* je: equal / zero */

loc_0005825B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x200 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000582B5; /* jge: greater or equal (signed >=) */

loc_00058263: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00058269u); RECOMP_ABI_CALL(0x00066B00u, sub_00066B00); /* call 0x00066B00 */

loc_00058269: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00058273u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00058273: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005829E; /* je: equal / zero */

loc_00058277: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00058283u); RECOMP_ABI_CALL(0x00057D00u, sub_00057D00); /* call 0x00057D00 */

loc_00058283: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005829E; /* je: equal / zero */

loc_00058287: ;
    edx = esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = ebx + edx * 4;
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    MEM32(eax) = MEM32(eax) | edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0005829E: ;
    PUSH32(esp, 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = esp + 0x50;
    PUSH32(esp, 0x000582ABu); RECOMP_ABI_CALL(0x00057C60u, sub_00057C60); /* call 0x00057C60 */

loc_000582AB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00058263; /* jl: less (signed <) */

loc_000582B5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = edi;
    POP32(esp, edi);
    esp = esp + 0x7C;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000582C0
 * Original: 0x000582C0 - 0x000582FC (60 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000582C0(void)
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

loc_000582C0: ;
    fp_push(MEMF(ecx)); /* fld float */
    edx = MEM32(esp + 4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000582D3; /* jne: not equal / not zero */

loc_000582CF: ;
    eax = MEM32(edx);
    MEM32(ecx) = eax;

loc_000582D3: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000582E6; /* jne: not equal / not zero */

loc_000582E0: ;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;

loc_000582E6: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000582F9; /* jne: not equal / not zero */

loc_000582F3: ;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;

loc_000582F9: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00058300
 * Original: 0x00058300 - 0x0005833C (60 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058300(void)
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

loc_00058300: ;
    fp_push(MEMF(ecx)); /* fld float */
    edx = MEM32(esp + 4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00058313; /* jp: parity */

loc_0005830F: ;
    eax = MEM32(edx);
    MEM32(ecx) = eax;

loc_00058313: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00058326; /* jp: parity */

loc_00058320: ;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;

loc_00058326: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00058339; /* jp: parity */

loc_00058333: ;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;

loc_00058339: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00058340
 * Original: 0x00058340 - 0x00058371 (49 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00058340: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    edx = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0005836C; /* je: equal / zero */

loc_0005834A: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    edi = edx;
    ecx = 0x10;
    if (TEST_Z(_fa, _fb)) goto loc_00058367; /* je: equal / zero */

loc_0005835A: ;
    eax = 0xFFFFFFFFu;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    eax = edx;
    esp += 12; return; /* ret 8 */

loc_00058367: ;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_0005836C: ;
    eax = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00058380
 * Original: 0x00058380 - 0x00058652 (722 bytes, 203 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058380(void)
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

loc_00058380: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0005838Eu); RECOMP_ABI_CALL(0x000587D0u, sub_000587D0); /* call 0x000587D0 */

loc_0005838E: ;
    eax = MEM32(esp + 0x3C);
    ebx = MEM32(esp + 0x2C);
    edi = MEM32(esp + 0x30);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    MEM32(esi + 0xD0) = eax;
    MEM32(esi + 0xD4) = 0x3F800000;
    MEM32(esi + 0xDC) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000584CD; /* je: equal / zero */

loc_000583BA: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000583C2u); RECOMP_ABI_CALL(0x00058660u, sub_00058660); /* call 0x00058660 */

loc_000583C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005843C; /* jne: not equal / not zero */

loc_000583C6: ;
    edi = MEM32(esi + 0xD0);
    eax = 0; /* xor self */
    ecx = 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(0x5BC9D0);
    MEM32(esi + 0xB8) = ecx;
    edx = MEM32(0x5BC9D4);
    MEM32(esi + 0xBC) = edx;
    eax = MEM32(0x5BC9D8);
    MEM32(esi + 0xC0) = eax;
    MEM32(esi + 0xD4) = ebp;
    MEM32(esi + 0xDC) = ebp;
    eax = MEM32(0x48D744);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005842A; /* jl: less (signed <) */

loc_0005840E: ;
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00058648; /* jne: not equal / not zero */

loc_00058416: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x48D744) = 0x65;
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 24; return; /* ret 20 */

loc_0005842A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x48D744) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 24; return; /* ret 20 */

loc_0005843C: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005844D; /* je: equal / zero */

loc_00058444: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000584D9; /* jne: not equal / not zero */

loc_0005844D: ;
    edx = MEM32(ebx);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00058459u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00058459: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = fp_top() - MEMF(eax); /* fsub dword ptr [eax] */
    ebx = esi + 0xA8;
    fp_push(MEMF(edi + 4)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = fp_top() - MEMF(eax + 4); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 8); /* fsub dword ptr [eax + 8] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x28);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0xE8) = ecx;
    MEMF(esi + 0xE0) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x14;
    MEMF(esi + 0xE4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00058495u); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_00058495: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edx = esp + 0x10;
    fp_top() = fp_top() + MEMF(esi + 0xE0); /* fadd dword ptr [esi + 0xe0] */
    PUSH32(esp, edx);
    ecx = ebx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0xE4); /* fadd dword ptr [esi + 0xe4] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0xE8); /* fadd dword ptr [esi + 0xe8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000584CBu); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_000584CB: ;
    goto loc_000584D9;

loc_000584CD: ;
    MEM32(esi + 0x28) = 3;
    MEM32(esi) = ebp;
    MEM32(esi + 0x74) = ebp;

loc_000584D9: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(eax);
    MEM32(esi + 4) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 8) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(edi);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(edi + 4);
    MEM32(esi + 0x14) = edx;
    eax = MEM32(edi + 8);
    MEM32(esi + 0x18) = eax;
    eax = MEM32(esp + 0x34);
    fp_push(MEMF(eax)); /* fld float */
    ebx = esi + 0xC4;
    fp_top() = fp_top() - MEMF(esi + 0x10); /* fsub dword ptr [esi + 0x10] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x14); /* fsub dword ptr [esi + 0x14] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x18); /* fsub dword ptr [esi + 0x18] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x24);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(ebx + 8) = ecx;
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ebx;
    MEMF(ebx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00058533u); RECOMP_ABI_CALL(0x00074320u, sub_00074320); /* call 0x00074320 */

loc_00058533: ;
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esi + 0xD8) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8378)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c8378] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000585AD; /* jp: parity */

loc_00058548: ;
    edi = MEM32(esi + 0xD0);
    fp_pop(); /* fstp st(0) */
    eax = 0; /* xor self */
    ecx = 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edx = MEM32(0x5BC9D0);
    MEM32(esi + 0xB8) = edx;
    eax = MEM32(0x5BC9D4);
    MEM32(esi + 0xBC) = eax;
    ecx = MEM32(0x5BC9D8);
    MEM32(esi + 0xC0) = ecx;
    edx = MEM32(0x5BC9D0);
    MEM32(ebx) = edx;
    eax = MEM32(0x5BC9D4);
    MEM32(ebx + 4) = eax;
    ecx = MEM32(0x5BC9D8);
    MEM32(ebx + 8) = ecx;
    POP32(esp, edi);
    MEM32(esi + 0xD4) = ebp;
    MEM32(esi + 0xDC) = ebp;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 24; return; /* ret 20 */

loc_000585AD: ;
    fp_push(MEMF(0x3CB95C)); /* fld float */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    fp_st1() = fp_top() / fp_st1(); fp_pop(); /* fdivrp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ebx); /* fmul dword ptr [ebx] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(ebx + 4); /* fmul dword ptr [ebx + 4] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() * MEMF(ebx + 8); /* fmul dword ptr [ebx + 8] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x24);
    MEM32(esi + 0xC0) = edx;
    MEMF(esi + 0xB8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xBC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x10);
    MEM32(esi + 0xEC) = eax;
    ecx = MEM32(esi + 0x14);
    MEM32(esi + 0xF0) = ecx;
    edx = MEM32(esi + 0x18);
    MEM32(esi + 0xF4) = edx;
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_push(MEMF(esi + 4)); /* fld float */
    MEMF(esp + 0x3C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00058613; /* jne: not equal / not zero */

loc_0005860D: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x3C)); /* fld float */

loc_00058613: ;
    MEMF(esi + 0xF8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0xC);
    MEM32(esi + 0xFC) = eax;
    ecx = MEM32(esi + 0xB8);
    MEM32(esi + 0x12C) = ecx;
    edx = MEM32(esi + 0xBC);
    MEM32(esi + 0x130) = edx;
    eax = MEM32(esi + 0xC0);
    MEM32(esi + 0x134) = eax;
    eax = esi;

loc_00058648: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00058660
 * Original: 0x00058660 - 0x00058756 (246 bytes, 91 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00058660: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0005867B; /* jne: not equal / not zero */

loc_0005866F: ;
    MEM32(esi) = edi;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_0005867B: ;
    ecx = esp + 8;
    MEM32(esi) = edi;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00058689u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00058689: ;
    edx = MEM32(eax);
    MEM32(esi + 4) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 8) = ecx;
    edx = MEM32(eax + 8);
    ecx = esp + 8;
    MEM32(esi + 0xC) = edx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000586A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000586A6: ;
    edx = MEM32(eax);
    MEM32(esi + 0x10) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x18) = edx;
    eax = MEM32(edi + 0x20);
    MEM32(esi + 0x1C) = eax;
    ecx = MEM32(edi + 0x24);
    MEM32(esi + 0x20) = ecx;
    edx = MEM32(edi + 0x28);
    MEM32(esi + 0x24) = edx;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x000586D0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000586D0: ;
    MEM32(esi + 0x28) = eax;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000586DAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000586DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x74) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000586EC; /* je: equal / zero */

loc_000586E1: ;
    eax = MEM32(edi);
    ecx = esi + 0x78;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x000586ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000586EC: ;
    ecx = edi + 4;
    PUSH32(esp, 0x000586F4u); RECOMP_ABI_CALL(0x00058760u, sub_00058760); /* call 0x00058760 */

loc_000586F4: ;
    MEM32(esi + 0x50) = eax;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058704; /* je: equal / zero */

loc_000586FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005871C; /* jne: not equal / not zero */

loc_00058704: ;
    ecx = MEM32(esi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005871C; /* jne: not equal / not zero */

loc_0005870B: ;
    MEM32(esi + 0x28) = 2;

loc_00058712: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_0005871C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00058712; /* jne: not equal / not zero */

loc_00058720: ;
    eax = MEM32(0x48D748);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00058738; /* jl: less (signed <) */

loc_0005872A: ;
    if (CMP_NE(_fa, _fb)) goto loc_0005873E; /* jne: not equal / not zero */

loc_0005872C: ;
    MEM32(0x48D748) = 0x65;
    goto loc_0005873E;

loc_00058738: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x48D748) = eax;

loc_0005873E: ;
    POP32(esp, edi);
    MEM32(esi + 0x28) = 3;
    MEM32(esi + 0x74) = 0;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}
