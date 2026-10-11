/**
 * X-Men Legends - Recompiled code chunk 38
 * Functions: 250 (0x001A7DB0 - 0x001AD220)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001A7DB0
 * Original: 0x001A7DB0 - 0x001A7E3D (141 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7DB0(void)
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

loc_001A7DB0: ;
    esp = esp - 0xC;
    fp_push(MEMF(0x3CCC88)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = fp_top() / MEMF(esp + 0x1C); /* fdiv dword ptr [esp + 0x1c] */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001A7E37; /* jle: less or equal (signed <=) */

loc_001A7DCE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    edi = 0; /* xor self */

loc_001A7DD6: ;
    eax = MEM32(ebp + 0x10);
    fp_push(MEMF(eax + edi)); /* fld float */
    ecx = MEM32(eax + edi + 4);
    fp_top() = fp_top() - MEMF(esp + 0x24); /* fsub dword ptr [esp + 0x24] */
    edx = MEM32(eax + edi + 8);
    eax = eax + edi;
    MEM32(esp + 0x14) = ecx;
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x001A7DFBu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001A7DFB: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x24); /* fsub dword ptr [esp + 0x24] */
    MEM16(esi) = LO16(eax);
    esi = esi + 2;
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    PUSH32(esp, 0x001A7E12u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001A7E12: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x24); /* fsub dword ptr [esp + 0x24] */
    MEM16(esi) = LO16(eax);
    esi = esi + 2;
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    PUSH32(esp, 0x001A7E29u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001A7E29: ;
    MEM16(esi) = LO16(eax);
    esi = esi + 2;
    edi = edi + 0xC;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A7DD6; /* jne: not equal / not zero */

loc_001A7E35: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001A7E37: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A7E40
 * Original: 0x001A7E40 - 0x001A818A (842 bytes, 309 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7E40(void)
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

loc_001A7E40: ;
    esp = esp - 0x10;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esi + 0x10);
    fp_push(MEMF(eax)); /* fld float */
    ebx = MEM32(esi + 8);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_001A80B6; /* jl: less (signed <) */

loc_001A7E69: ;
    ebx = ebx + 0xFFFFFFFCu;
    ebx = ebx >> 2;
    edi = 0; /* xor self */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ebx * 4;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, ebp);
    edi = edi;

loc_001A7E80: ;
    eax = MEM32(esi + 0x10);
    fp_push(MEMF(eax + edi)); /* fld float */
    edx = MEM32(eax + edi + 4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx] */
    eax = eax + edi;
    eax = MEM32(eax + 8);
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = edx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001A7EA8; /* jp: parity */

loc_001A7EA4: ;
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001A7EB7;

loc_001A7EA8: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A7EB7; /* jne: not equal / not zero */

loc_001A7EB1: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */

loc_001A7EB7: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001A7ECC; /* jp: parity */

loc_001A7EC4: ;
    edx = MEM32(esp + 0x18);
    MEM32(ecx) = edx;
    goto loc_001A7EDF;

loc_001A7ECC: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A7EDF; /* jne: not equal / not zero */

loc_001A7ED9: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */

loc_001A7EDF: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001A7EF4; /* jp: parity */

loc_001A7EEC: ;
    eax = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;
    goto loc_001A7F07;

loc_001A7EF4: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A7F07; /* jne: not equal / not zero */

loc_001A7F01: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */

loc_001A7F07: ;
    edx = MEM32(esi + 0x10);
    fp_push(MEMF(edx + edi + 0xC)); /* fld float */
    eax = edx + edi + 0xC;
    edx = MEM32(eax + 4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx] */
    eax = MEM32(eax + 8);
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = edx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001A7F31; /* jp: parity */

loc_001A7F2D: ;
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001A7F40;

loc_001A7F31: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A7F40; /* jne: not equal / not zero */

loc_001A7F3A: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */

loc_001A7F40: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001A7F55; /* jp: parity */

loc_001A7F4D: ;
    edx = MEM32(esp + 0x18);
    MEM32(ecx) = edx;
    goto loc_001A7F68;

loc_001A7F55: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A7F68; /* jne: not equal / not zero */

loc_001A7F62: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */

loc_001A7F68: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001A7F7D; /* jp: parity */

loc_001A7F75: ;
    eax = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;
    goto loc_001A7F90;

loc_001A7F7D: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A7F90; /* jne: not equal / not zero */

loc_001A7F8A: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */

loc_001A7F90: ;
    eax = MEM32(esi + 0x10);
    edx = edi + 0x24;
    fp_push(MEMF(eax + edx + -12)); /* fld float */
    ebp = MEM32(eax + edx + -8);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx] */
    eax = eax + edx + -12;
    eax = MEM32(eax + 8);
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = ebp;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001A7FBE; /* jp: parity */

loc_001A7FBA: ;
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001A7FCD;

loc_001A7FBE: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A7FCD; /* jne: not equal / not zero */

loc_001A7FC7: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */

loc_001A7FCD: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001A7FE2; /* jp: parity */

loc_001A7FDA: ;
    eax = MEM32(esp + 0x18);
    MEM32(ecx) = eax;
    goto loc_001A7FF5;

loc_001A7FE2: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A7FF5; /* jne: not equal / not zero */

loc_001A7FEF: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */

loc_001A7FF5: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001A800A; /* jp: parity */

loc_001A8002: ;
    eax = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;
    goto loc_001A801D;

loc_001A800A: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A801D; /* jne: not equal / not zero */

loc_001A8017: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */

loc_001A801D: ;
    eax = MEM32(esi + 0x10);
    fp_push(MEMF(eax + edx)); /* fld float */
    eax = eax + edx;
    edx = MEM32(eax + 4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx] */
    eax = MEM32(eax + 8);
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = edx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001A8044; /* jp: parity */

loc_001A8040: ;
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001A8053;

loc_001A8044: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A8053; /* jne: not equal / not zero */

loc_001A804D: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */

loc_001A8053: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001A8068; /* jp: parity */

loc_001A8060: ;
    edx = MEM32(esp + 0x18);
    MEM32(ecx) = edx;
    goto loc_001A807B;

loc_001A8068: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A807B; /* jne: not equal / not zero */

loc_001A8075: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */

loc_001A807B: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001A8090; /* jp: parity */

loc_001A8088: ;
    eax = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;
    goto loc_001A80A3;

loc_001A8090: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A80A3; /* jne: not equal / not zero */

loc_001A809D: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */

loc_001A80A3: ;
    edi = edi + 0x30;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A7E80; /* jne: not equal / not zero */

loc_001A80AD: ;
    eax = MEM32(esp + 0x24);
    ebx = MEM32(esp + 0x10);
    POP32(esp, ebp);

loc_001A80B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A8161; /* jge: greater or equal (signed >=) */

loc_001A80BE: ;
    edx = eax + eax * 2;
    edx = edx << 2;
    ebx = ebx - eax;
    edi = ebx;
    goto loc_001A80D0;

    /* nop */

loc_001A80D0: ;
    eax = MEM32(esi + 0x10);
    fp_push(MEMF(eax + edx)); /* fld float */
    ebx = MEM32(eax + edx + 4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx] */
    eax = eax + edx;
    eax = MEM32(eax + 8);
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ebx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001A80F8; /* jp: parity */

loc_001A80F4: ;
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001A8107;

loc_001A80F8: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A8107; /* jne: not equal / not zero */

loc_001A8101: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_001A8107: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001A811C; /* jp: parity */

loc_001A8114: ;
    eax = MEM32(esp + 0x14);
    MEM32(ecx) = eax;
    goto loc_001A812F;

loc_001A811C: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A812F; /* jne: not equal / not zero */

loc_001A8129: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */

loc_001A812F: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001A8144; /* jp: parity */

loc_001A813C: ;
    eax = MEM32(esp + 0x18);
    MEM32(ecx) = eax;
    goto loc_001A8157;

loc_001A8144: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A8157; /* jne: not equal / not zero */

loc_001A8151: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */

loc_001A8157: ;
    edx = edx + 0xC;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A80D0; /* jne: not equal / not zero */

loc_001A8161: ;
    fp_top() = fp_top() - MEMF(ecx); /* fsub dword ptr [ecx] */
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x24);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A8180u); RECOMP_ABI_CALL(0x001A7DB0u, sub_001A7DB0); /* call 0x001A7DB0 */

loc_001A8180: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A8190
 * Original: 0x001A8190 - 0x001A8245 (181 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8190(void)
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

loc_001A8190: ;
    esp = esp - 0x10;
    fp_push(MEMF(0x3CCC88)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = fp_top() / MEMF(esp + 0x20); /* fdiv dword ptr [esp + 0x20] */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001A823F; /* jle: less or equal (signed <=) */

loc_001A81B2: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    /* nop */

loc_001A81C0: ;
    eax = MEM32(ebp + 0x10);
    fp_push(MEMF(eax + edi)); /* fld float */
    ecx = MEM32(eax + edi + 4);
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    edx = MEM32(eax + edi + 8);
    eax = eax + edi;
    eax = MEM32(eax + 0xC);
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x001A81ECu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001A81EC: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    MEM16(esi) = LO16(eax);
    esi = esi + 2;
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    PUSH32(esp, 0x001A8203u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001A8203: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    MEM16(esi) = LO16(eax);
    esi = esi + 2;
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    PUSH32(esp, 0x001A821Au); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001A821A: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    MEM16(esi) = LO16(eax);
    esi = esi + 2;
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    PUSH32(esp, 0x001A8231u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001A8231: ;
    MEM16(esi) = LO16(eax);
    esi = esi + 2;
    edi = edi + 0x10;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A81C0; /* jne: not equal / not zero */

loc_001A823D: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001A823F: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A8250
 * Original: 0x001A8250 - 0x001A835F (271 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8250(void)
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

loc_001A8250: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0x10);
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ecx = MEM32(esp + 0x20);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001A8338; /* jle: less or equal (signed <=) */

loc_001A8270: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    edi = eax;

loc_001A8276: ;
    eax = MEM32(esi + 0x10);
    fp_push(MEMF(eax + edx)); /* fld float */
    ebx = MEM32(eax + edx + 4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx] */
    eax = eax + edx;
    MEM32(esp + 0x10) = ebx;
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    ebx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    MEM32(esp + 0x14) = ebx;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001A82A5; /* jp: parity */

loc_001A82A1: ;
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001A82B4;

loc_001A82A5: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A82B4; /* jne: not equal / not zero */

loc_001A82AE: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_001A82B4: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001A82C9; /* jp: parity */

loc_001A82C1: ;
    eax = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    goto loc_001A82DC;

loc_001A82C9: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A82DC; /* jne: not equal / not zero */

loc_001A82D6: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_001A82DC: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001A82F1; /* jp: parity */

loc_001A82E9: ;
    eax = MEM32(esp + 0x14);
    MEM32(ecx) = eax;
    goto loc_001A8304;

loc_001A82F1: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A8304; /* jne: not equal / not zero */

loc_001A82FE: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */

loc_001A8304: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001A8319; /* jp: parity */

loc_001A8311: ;
    eax = MEM32(esp + 0x18);
    MEM32(ecx) = eax;
    goto loc_001A832C;

loc_001A8319: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A832C; /* jne: not equal / not zero */

loc_001A8326: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */

loc_001A832C: ;
    edx = edx + 0x10;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A8276; /* jne: not equal / not zero */

loc_001A8336: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001A8338: ;
    fp_top() = fp_top() - MEMF(ecx); /* fsub dword ptr [ecx] */
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A8357u); RECOMP_ABI_CALL(0x001A8190u, sub_001A8190); /* call 0x001A8190 */

loc_001A8357: ;
    esp = esp + 0x10;
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
 * sub_001A8360
 * Original: 0x001A8360 - 0x001A8407 (167 bytes, 64 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8360: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001A8370; /* je: equal / zero */

loc_001A836D: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001A8370: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A838C; /* je: equal / zero */

loc_001A8377: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001A838C; /* jne: not equal / not zero */

loc_001A8387: ;
    PUSH32(esp, 0x001A838Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001A838C: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 8) = edi;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001A839Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A839B: ;
    ecx = eax;
    PUSH32(esp, 0x001A83A2u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_001A83A2: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A83AB; /* je: equal / zero */

loc_001A83A8: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001A83AB: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A83C7; /* je: equal / zero */

loc_001A83B2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001A83C7; /* jne: not equal / not zero */

loc_001A83C2: ;
    PUSH32(esp, 0x001A83C7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001A83C7: ;
    MEM32(esi + 0xC) = ebx;
    eax = ebx;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 0x1C);
    PUSH32(esp, edx);
    ecx = esi + 0x10;
    PUSH32(esp, 0x001A83DBu); RECOMP_ABI_CALL(0x00123E50u, sub_00123E50); /* call 0x00123E50 */

loc_001A83DB: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = esi + 0x14;
    PUSH32(esp, 0x001A83EAu); RECOMP_ABI_CALL(0x00123E50u, sub_00123E50); /* call 0x00123E50 */

loc_001A83EA: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001A8401; /* jne: not equal / not zero */

loc_001A83FA: ;
    ecx = edi;
    PUSH32(esp, 0x001A8401u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001A8401: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A8410
 * Original: 0x001A8410 - 0x001A845E (78 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8410: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001A841F; /* je: equal / zero */

loc_001A841C: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001A841F: ;
    ecx = MEM32(edi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A843B; /* je: equal / zero */

loc_001A8426: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001A843B; /* jne: not equal / not zero */

loc_001A8436: ;
    PUSH32(esp, 0x001A843Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001A843B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi + 0x18) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_001A8459; /* je: equal / zero */

loc_001A8442: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001A8459; /* jne: not equal / not zero */

loc_001A8452: ;
    ecx = esi;
    PUSH32(esp, 0x001A8459u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001A8459: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A8460
 * Original: 0x001A8460 - 0x001A8531 (209 bytes, 85 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8460(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8460: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x001A846Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A846E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A8477; /* je: equal / zero */

loc_001A8474: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001A8477: ;
    edx = MEM32(edi);
    ebx = MEM32(esi + 0xC);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001A8481u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A8481: ;
    ebp = eax;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001A848Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A848A: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x001A8492u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_001A8492: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A84B6; /* jne: not equal / not zero */

loc_001A8496: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001A84AD; /* jne: not equal / not zero */

loc_001A84A6: ;
    ecx = edi;
    PUSH32(esp, 0x001A84ADu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001A84AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001A84B6: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001A84C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A84C8: ;
    eax = MEM32(edi + 8);
    ebx = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    eax = eax + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001A84DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A84DD: ;
    eax = MEM32(0x5BA98C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A84FB; /* jne: not equal / not zero */

loc_001A84E6: ;
    ecx = MEM32(0x5BC28C);
    PUSH32(esp, 0x3E35B4);
    PUSH32(esp, 0x001A84F6u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_001A84F6: ;
    MEM32(0x5BA98C) = eax;

loc_001A84FB: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(esi + 0xC);
    eax = MEM32(ecx + edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A8511; /* je: equal / zero */

loc_001A8508: ;
    ecx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001A850Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A850E: ;
    esp = esp + 4;

loc_001A8511: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001A8528; /* jne: not equal / not zero */

loc_001A8521: ;
    ecx = edi;
    PUSH32(esp, 0x001A8528u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001A8528: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A8540
 * Original: 0x001A8540 - 0x001A85AA (106 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8540(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8540: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A854Du); RECOMP_ABI_CALL(0x001F7AB0u, sub_001F7AB0); /* call 0x001F7AB0 */

loc_001A854D: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A85A7; /* je: equal / zero */

loc_001A8556: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001A8565u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_001A8565: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A856E; /* je: equal / zero */

loc_001A856B: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001A856E: ;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A858A; /* je: equal / zero */

loc_001A8575: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001A858A; /* jne: not equal / not zero */

loc_001A8585: ;
    PUSH32(esp, 0x001A858Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001A858A: ;
    MEM32(edi + 0xC) = ebx;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_001A85A7; /* jne: not equal / not zero */

loc_001A859E: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_001A85A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A85B0
 * Original: 0x001A85B0 - 0x001A85E8 (56 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A85B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A85B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    ebx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001A85E0; /* jle: less or equal (signed <=) */

loc_001A85C1: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);

loc_001A85C6: ;
    edx = MEM32(edi + 8);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, 0x001A85DAu); RECOMP_ABI_CALL(0x001A8460u, sub_001A8460); /* call 0x001A8460 */

loc_001A85DA: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A85C6; /* jl: less (signed <) */

loc_001A85DF: ;
    POP32(esp, ebp);

loc_001A85E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A85F0
 * Original: 0x001A85F0 - 0x001A89E8 (1016 bytes, 386 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A85F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A85F0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + 8);
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = ecx;
    MEM8(esp + 0x13) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_001A8652; /* jne: not equal / not zero */

loc_001A8614: ;
    eax = MEM32(edi + 0x14);
    edx = MEM32(esp + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(edi + 0x10);
    ebx = MEM32(esp + 0x2C);
    if (CMP_L(_fas, _fbs)) goto loc_001A8631; /* jl: less (signed <) */

loc_001A8626: ;
    if (CMP_G(_fas, _fbs)) goto loc_001A862C; /* jg: greater (signed >) */

loc_001A8628: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001A8631; /* jbe: below or equal (unsigned <=) */

loc_001A862C: ;
    MEM32(esi) = ecx;
    MEM32(esi + 4) = eax;

loc_001A8631: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(edi + 0x20);
    if (CMP_G(_fas, _fbs)) goto loc_001A8648; /* jg: greater (signed >) */

loc_001A863B: ;
    if (CMP_L(_fas, _fbs)) goto loc_001A8641; /* jl: less (signed <) */

loc_001A863D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001A8648; /* jae: above or equal (unsigned >=) */

loc_001A8641: ;
    MEM32(esi) = ecx;
    goto loc_001A87A1;

loc_001A8648: ;
    MEM32(esi) = ebx;
    MEM32(esi + 4) = edx;
    goto loc_001A87A4;

loc_001A8652: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001A8702; /* jne: not equal / not zero */

loc_001A865B: ;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(edi + 0x24);
    ebp = MEM32(edi + 0x10);
    eax = MEM32(edi + 0x14);
    ebx = MEM32(esp + 0x2C);
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(ecx));
    ebp = ebp - ecx;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(ecx));
    ebx = ebx - ecx;
    ecx = MEM32(esp + 0x30);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x1C) = eax;
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ecx;
    edx = ebx;
    if (CMP_G(_fas & _fbs, 0)) goto loc_001A8698; /* jg: greater (signed >) */

loc_001A8686: ;
    if (TEST_S(_fas, _fbs)) goto loc_001A868C; /* jl: less (signed <) */

loc_001A8688: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_AE(_fa & _fb, 0)) goto loc_001A8698; /* jae: above or equal (unsigned >=) */

loc_001A868C: ;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    MEM32(esi) = edx;
    MEM32(esi + 4) = ecx;

loc_001A8698: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001A86A6u); RECOMP_ABI_CALL(0x00343BF0u, sub_00343BF0); /* call 0x00343BF0 */

loc_001A86A6: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 1;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = edx;
    eax = 0;
    if ((eax == 0)) goto loc_001A86C1; /* je: equal / zero */

loc_001A86B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esp + 0x13) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001A86C5; /* je: equal / zero */

loc_001A86C1: ;
    MEM8(esp + 0x13) = LO8(eax);

loc_001A86C5: ;
    MEM32(esi) = ecx;
    _fa = (uint32_t)(MEM8(esp + 0x13)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x13), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001A86E9; /* je: equal / zero */

loc_001A86D0: ;
    eax = MEM32(esi);
    edx = MEM32(edi + 0x20);
    ecx = MEM32(edi + 0x24);
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(eax));
    ebp = ebp - eax;
    eax = MEM32(esp + 0x1C);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(edx)) >> 32) & 1);
    ebp = ebp + edx;
    MEM32(esi) = ebp;
    goto loc_001A879F;

loc_001A86E9: ;
    edx = MEM32(edi + 0x20);
    ebx = MEM32(esi);
    ecx = MEM32(esi + 4);
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edx)) >> 32) & 1);
    ebx = ebx + edx;
    MEM32(esi) = ebx;
    eax = MEM32(edi + 0x24);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    MEM32(esi + 4) = ecx;
    goto loc_001A87A4;

loc_001A8702: ;
    edx = MEM32(esp + 0x2C);
    ecx = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(edi + 0x20);
    if (CMP_NE(_fa, _fb)) goto loc_001A874C; /* jne: not equal / not zero */

loc_001A8711: ;
    ebp = MEM32(edi + 0x10);
    ebx = MEM32(edi + 0x14);
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(eax));
    ebp = ebp - eax;
    { uint64_t _t = (uint64_t)(ebx) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* sbb */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esi) = edx;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x001A8733u); RECOMP_ABI_CALL(0x00343B30u, sub_00343B30); /* call 0x00343B30 */

loc_001A8733: ;
    MEM32(esi) = eax;
    ecx = eax;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esi + 4) = edx;
    if (CMP_G(_fas & _fbs, 0)) goto loc_001A8790; /* jg: greater (signed >) */

loc_001A8740: ;
    if (TEST_S(_fas, _fbs)) goto loc_001A8746; /* jl: less (signed <) */

loc_001A8742: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_AE(_fa & _fb, 0)) goto loc_001A8790; /* jae: above or equal (unsigned >=) */

loc_001A8746: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(ebx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    goto loc_001A878B;

loc_001A874C: ;
    ebx = MEM32(edi + 0x10);
    ebp = MEM32(edi + 0x14);
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    { uint64_t _t = (uint64_t)(ebp) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebp = (uint32_t)_t; }  /* sbb */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(1)) >> 32) & 1);
    ebx = ebx + 1;
    { uint64_t _t = (uint64_t)(ebp) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebp = (uint32_t)_t; }  /* adc */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ebp);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esi) = edx;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x001A8774u); RECOMP_ABI_CALL(0x00343B30u, sub_00343B30); /* call 0x00343B30 */

loc_001A8774: ;
    MEM32(esi) = eax;
    ecx = eax;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esi + 4) = edx;
    if (CMP_G(_fas & _fbs, 0)) goto loc_001A8790; /* jg: greater (signed >) */

loc_001A8781: ;
    if (TEST_S(_fas, _fbs)) goto loc_001A8787; /* jl: less (signed <) */

loc_001A8783: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_AE(_fa & _fb, 0)) goto loc_001A8790; /* jae: above or equal (unsigned >=) */

loc_001A8787: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(ebp) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */

loc_001A878B: ;
    MEM32(esi + 4) = eax;
    MEM32(esi) = ecx;

loc_001A8790: ;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(esi);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    eax = MEM32(esi + 4);
    MEM32(esi) = ecx;
    ecx = MEM32(edi + 0x24);

loc_001A879F: ;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */

loc_001A87A1: ;
    MEM32(esi + 4) = eax;

loc_001A87A4: ;
    ebp = MEM32(esp + 0x14);
    ebx = MEM32(esi);
    edx = MEM32(esi + 4);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x18) = ebp;

loc_001A87C2: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(edi + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_001A880A; /* jle: less or equal (signed <=) */

loc_001A87CD: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    edx = MEM32(ecx + 0x10);
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((1) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    ecx = MEM32(edx + eax * 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = MEM32(edx + eax * 8 + 4);
    edx = MEM32(esp + 0x30);
    if (CMP_NE(_fa, _fb)) goto loc_001A87EA; /* jne: not equal / not zero */

loc_001A87E6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A8820; /* je: equal / zero */

loc_001A87EA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_001A8803; /* jg: greater (signed >) */

loc_001A87EE: ;
    if (CMP_L(_fas, _fbs)) goto loc_001A87F4; /* jl: less (signed <) */

loc_001A87F0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001A87F9; /* jae: above or equal (unsigned >=) */

loc_001A87F4: ;
    ebp = eax + -1;
    goto loc_001A87C2;

loc_001A87F9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001A87C2; /* jl: less (signed <) */

loc_001A87FD: ;
    if (CMP_G(_fas, _fbs)) goto loc_001A8803; /* jg: greater (signed >) */

loc_001A87FF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001A87C2; /* jbe: below or equal (unsigned <=) */

loc_001A8803: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x34) = eax;
    goto loc_001A87C2;

loc_001A880A: ;
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + ebp * 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = MEM32(edx + ebp * 8 + 4);
    eax = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_001A8824; /* jne: not equal / not zero */

loc_001A881A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x30) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001A8824; /* jne: not equal / not zero */

loc_001A8820: ;
    SET_LO8(edx, 1);
    goto loc_001A884A;

loc_001A8824: ;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x30), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esp + 0x34) = 0;
    if (CMP_G(_fas, _fbs)) goto loc_001A8846; /* jg: greater (signed >) */

loc_001A882F: ;
    if (CMP_L(_fas, _fbs)) goto loc_001A8837; /* jl: less (signed <) */

loc_001A8831: ;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x2C), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001A8846; /* jae: above or equal (unsigned >=) */

loc_001A8837: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001A8846; /* jle: less or equal (signed <=) */

loc_001A883B: ;
    ecx = MEM32(edx + ebp * 8 + -8);
    esi = MEM32(edx + ebp * 8 + -4);
    eax = ebp + -1;

loc_001A8846: ;
    SET_LO8(edx, MEM8(esp + 0x34));

loc_001A884A: ;
    ebx = MEM32(edi + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001A89DE; /* ja: above (unsigned >) */

loc_001A8856: ;
    { uint32_t _jt = MEM32(ebx * 4 + 0x1A89E8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x001A885Du) goto loc_001A885D;
    if (_jt == 0x001A889Cu) goto loc_001A889C;
    if (_jt == 0x001A88C1u) goto loc_001A88C1;
    if (_jt == 0x001A8981u) goto loc_001A8981;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001A885D: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ebx = MEM32(esp + 0x38);
    MEM32(ebx) = eax;
    ebx = MEM32(esp + 0x3C);
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_001A88D4; /* jne: not equal / not zero */

loc_001A8870: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x14)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x14))); }
    eax = MEM32(esp + 0x40);
    MEM32(eax) = edx;
    ecx = MEM32(edi + 8);
    ecx = MEM32(ecx + 0x10);
    esi = MEM32(ecx + edx * 8);
    eax = MEM32(esp + 0x44);
    POP32(esp, edi);
    MEM32(eax) = esi;
    edx = MEM32(ecx + edx * 8 + 4);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 4) = edx;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 32; return; /* ret 28 */

loc_001A889C: ;
    edx = MEM32(esp + 0x38);
    MEM32(edx) = eax;
    edx = MEM32(esp + 0x3C);
    MEM32(edx) = ecx;
    MEM32(edx + 4) = esi;
    edx = MEM32(esp + 0x14);
    ecx = eax + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001A89C2; /* jge: greater or equal (signed >=) */

loc_001A88BA: ;
    eax = ecx;
    goto loc_001A89C2;

loc_001A88C1: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001A88ED; /* je: equal / zero */

loc_001A88C5: ;
    edx = MEM32(esp + 0x38);
    MEM32(edx) = eax;
    edx = MEM32(esp + 0x3C);
    MEM32(edx) = ecx;
    MEM32(edx + 4) = esi;

loc_001A88D4: ;
    edx = MEM32(esp + 0x40);
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x44);
    POP32(esp, edi);
    MEM32(eax + 4) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 32; return; /* ret 28 */

loc_001A88ED: ;
    SET_LO8(edx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    edx = MEM32(esp + 0x38);
    MEM32(edx) = eax;
    edx = MEM32(esp + 0x3C);
    MEM32(edx) = ecx;
    MEM32(edx + 4) = esi;
    edx = MEM32(esp + 0x14);
    ecx = eax + 1;
    if (TEST_Z(_fa, _fb)) goto loc_001A8954; /* je: equal / zero */

loc_001A890B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001A892E; /* jl: less (signed <) */

loc_001A890F: ;
    ecx = MEM32(esp + 0x40);
    MEM32(ecx) = eax;
    edx = MEM32(edi + 0x10);
    eax = MEM32(esp + 0x44);
    MEM32(eax) = edx;
    ecx = MEM32(edi + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 4) = ecx;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 32; return; /* ret 28 */

loc_001A892E: ;
    edx = MEM32(esp + 0x40);
    MEM32(edx) = ecx;
    eax = MEM32(edi + 8);
    edx = MEM32(eax + 0x10);
    esi = MEM32(edx + ecx * 8);
    eax = MEM32(esp + 0x44);
    POP32(esp, edi);
    MEM32(eax) = esi;
    ecx = MEM32(edx + ecx * 8 + 4);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 4) = ecx;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 32; return; /* ret 28 */

loc_001A8954: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001A895B; /* jl: less (signed <) */

loc_001A8958: ;
    ecx = eax + -1;

loc_001A895B: ;
    eax = MEM32(esp + 0x40);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 8);
    edx = MEM32(edx + 0x10);
    esi = MEM32(edx + ecx * 8);
    eax = MEM32(esp + 0x44);
    POP32(esp, edi);
    MEM32(eax) = esi;
    ecx = MEM32(edx + ecx * 8 + 4);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 4) = ecx;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 32; return; /* ret 28 */

loc_001A8981: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ebx = MEM32(esp + 0x38);
    MEM32(ebx) = eax;
    ebx = MEM32(esp + 0x3C);
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_001A88D4; /* jne: not equal / not zero */

loc_001A8998: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001A89C1; /* jne: not equal / not zero */

loc_001A899E: ;
    eax = MEM32(esp + 0x40);
    MEM32(eax) = 0;
    ecx = MEM32(edi + 0x10);
    eax = MEM32(esp + 0x44);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 4) = edx;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 32; return; /* ret 28 */

loc_001A89C1: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001A89C2: ;
    ecx = MEM32(esp + 0x40);
    MEM32(ecx) = eax;
    edx = MEM32(edi + 8);
    edx = MEM32(edx + 0x10);
    esi = MEM32(edx + eax * 8);
    ecx = MEM32(esp + 0x44);
    MEM32(ecx) = esi;
    eax = MEM32(edx + eax * 8 + 4);
    MEM32(ecx + 4) = eax;

loc_001A89DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001A8A00
 * Original: 0x001A8A00 - 0x001A8A16 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8A00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8A00: ;
    esp = esp - 0x24;
    MEM32(esp + 8) = ecx;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001A8A16(); return; } /* jne: not equal / not zero */

loc_001A8A0E: ;
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 0x24;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A8A16
 * Original: 0x001A8A16 - 0x001A8BDB (453 bytes, 158 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001A8A16(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8A16: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x4C);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A8A42u); RECOMP_ABI_CALL(0x001A85F0u, sub_001A85F0); /* call 0x001A85F0 */

loc_001A8A42: ;
    ebx = MEM32(esp + 0x30);
    esi = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x50);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E35D0);
    PUSH32(esp, 0x001A8A7Eu); RECOMP_ABI_CALL(0x00342EF1u, sub_00342EF1); /* call 0x00342EF1 */

loc_001A8A7E: ;
    ecx = MEM32(esp + 0x4C);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001A8A8D; /* jne: not equal / not zero */

loc_001A8A89: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A8AB9; /* je: equal / zero */

loc_001A8A8D: ;
    eax = MEM32(esp + 0x24);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    { uint64_t _t = (uint64_t)(ebp) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebp = (uint32_t)_t; }  /* sbb */
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = ebp;
    fp_push((double)SMEM64(esp + 0x38)); /* fild */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(edi));
    esi = esi - edi;
    { uint64_t _t = (uint64_t)(ebx) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* sbb */
    MEM32(esp + 0x38) = esi;
    MEM32(esp + 0x3C) = ebx;
    fp_push((double)SMEM64(esp + 0x38)); /* fild */
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001A8AC1;

loc_001A8AB9: ;
    MEM32(esp + 0x38) = 0x3F800000;

loc_001A8AC1: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3E35C8);
    PUSH32(esp, 0x001A8AD5u); RECOMP_ABI_CALL(0x00342EF1u, sub_00342EF1); /* call 0x00342EF1 */

loc_001A8AD5: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x44); /* fmul dword ptr [esp + 0x44] */
    ecx = MEM32(esp + 0x24);
    edx = MEM32(ecx + 0x18);
    fp_push(MEMF(esp + 0x44)); /* fld float */
    eax = MEM32(edx + 0x28);
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x1C));
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x44); /* fsub dword ptr [esp + 0x44] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    edx = MEM32(edx + 0x30);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    esi = MEM32(edx + 0x10);
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    fp_top() = fp_top() * MEMF(eax + 0x20); /* fmul dword ptr [eax + 0x20] */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 5) & 7]; /* fmul st(5) */
    fp_top() = fp_top() * MEMF(0x3C837C); /* fmul dword ptr [0x3c837c] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(eax + 0x10); /* fmul dword ptr [eax + 0x10] */
    fp_top() = fp_top() * MEMF(esp + 0x38); /* fmul dword ptr [esp + 0x38] */
    fp_top() = fp_top() * MEMF(0x3C837C); /* fmul dword ptr [0x3c837c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = fp_top() * MEMF(eax + 0x30); /* fmul dword ptr [eax + 0x30] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(eax + 0x24); /* fmul dword ptr [eax + 0x24] */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 5) & 7]; /* fmul st(5) */
    fp_top() = fp_top() * MEMF(0x3C837C); /* fmul dword ptr [0x3c837c] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(eax + 0x14); /* fmul dword ptr [eax + 0x14] */
    fp_top() = fp_top() * MEMF(esp + 0x38); /* fmul dword ptr [esp + 0x38] */
    fp_top() = fp_top() * MEMF(0x3C837C); /* fmul dword ptr [0x3c837c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = fp_top() * MEMF(eax + 0x34); /* fmul dword ptr [eax + 0x34] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(eax + 0x28); /* fmul dword ptr [eax + 0x28] */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 5) & 7]; /* fmul st(5) */
    fp_top() = fp_top() * MEMF(0x3C837C); /* fmul dword ptr [0x3c837c] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(eax + 0x18); /* fmul dword ptr [eax + 0x18] */
    fp_top() = fp_top() * MEMF(esp + 0x38); /* fmul dword ptr [esp + 0x38] */
    fp_top() = fp_top() * MEMF(0x3C837C); /* fmul dword ptr [0x3c837c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = fp_top() * MEMF(eax + 0x38); /* fmul dword ptr [eax + 0x38] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    POP32(esp, ebx);
    fp_top() = fp_top() * MEMF(eax + 0x2C); /* fmul dword ptr [eax + 0x2c] */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_top() = fp_top() * MEMF(0x3C837C); /* fmul dword ptr [0x3c837c] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(eax + 0x1C); /* fmul dword ptr [eax + 0x1c] */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    fp_top() = fp_top() * MEMF(0x3C837C); /* fmul dword ptr [0x3c837c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(eax + 0xC); /* fmul dword ptr [eax + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(eax + 0x3C); /* fmul dword ptr [eax + 0x3c] */
    SET_LO8(eax, 1);
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A8BE0
 * Original: 0x001A8BE0 - 0x001A8CD3 (243 bytes, 100 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8BE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A8BE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x14);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A8CCC; /* je: equal / zero */

loc_001A8BF1: ;
    edx = MEM32(edi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A8CCC; /* je: equal / zero */

loc_001A8BFC: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A8C06u); RECOMP_ABI_CALL(0x0020A1A0u, sub_0020A1A0); /* call 0x0020A1A0 */

loc_001A8C06: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A8CC4; /* je: equal / zero */

loc_001A8C10: ;
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001A8C18u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A8C18: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A8CBB; /* je: equal / zero */

loc_001A8C22: ;
    eax = MEM32(edi + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x001A8C2Eu); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_001A8C2E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A8C86; /* jne: not equal / not zero */

loc_001A8C34: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A8C3Au); RECOMP_ABI_CALL(0x0022A440u, sub_0022A440); /* call 0x0022A440 */

loc_001A8C3A: ;
    esi = eax;
    eax = MEM32(edi + 0x18);
    SET_LO8(ecx, MEM8(eax));
    esp = esp + 4;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5F (8-bit) */
    MEM32(esp + 0x10) = esi;
    ecx = 0x3D2C44;
    if (CMP_EQ(_fa, _fb)) goto loc_001A8C57; /* je: equal / zero */

loc_001A8C52: ;
    ecx = 0x3E360C;

loc_001A8C57: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A8C5Fu); RECOMP_ABI_CALL(0x002046C0u, sub_002046C0); /* call 0x002046C0 */

loc_001A8C5F: ;
    esi = MEM32(esi + 8);
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A8C6F; /* jne: not equal / not zero */

loc_001A8C69: ;
    esi = MEM32(0x46A3C8);

loc_001A8C6F: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x001A8C77u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_001A8C77: ;
    ecx = esp + 0x10;
    esi = eax;
    PUSH32(esp, 0x001A8C82u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_001A8C82: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A8CB1; /* je: equal / zero */

loc_001A8C86: ;
    ecx = MEM32(0x5BC248);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x001A8C94u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_001A8C94: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A8CB1; /* je: equal / zero */

loc_001A8C98: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + ebx);
    PUSH32(esp, eax);
    ecx = edi + 0x10;
    PUSH32(esp, 0x001A8CA7u); RECOMP_ABI_CALL(0x001C2500u, sub_001C2500); /* call 0x001C2500 */

loc_001A8CA7: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001A8CB1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001A8CBB: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001A8CC4: ;
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001A8CCC: ;
    SET_LO8(eax, LO8(ecx));
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A8CE0
 * Original: 0x001A8CE0 - 0x001A8CE6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8CE0(void)
{

loc_001A8CE0: ;
    eax = MEM32(0x5BA8AC);
    esp += 4; return; /* ret */

}

/**
 * sub_001A8CF0
 * Original: 0x001A8CF0 - 0x001A8CF6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8CF0(void)
{

loc_001A8CF0: ;
    eax = MEM32(0x5BA8B4);
    esp += 4; return; /* ret */

}

/**
 * sub_001A8D00
 * Original: 0x001A8D00 - 0x001A8D24 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8D00(void)
{

loc_001A8D00: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001A8D0Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A8D0B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E3030;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A8D30
 * Original: 0x001A8D30 - 0x001A8D74 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8D30: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A8D40; /* jne: not equal / not zero */

loc_001A8D39: ;
    MEM8(0x5BA988) = 1;

loc_001A8D40: ;
    PUSH32(esp, 0x462014);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A8D00);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E36CC);
    PUSH32(esp, 0x1A6820);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BA8B8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A8D70u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A8D70: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A8D80
 * Original: 0x001A8D80 - 0x001A8DC1 (65 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8D80: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A8D90; /* jne: not equal / not zero */

loc_001A8D89: ;
    MEM8(0x5BA988) = 1;

loc_001A8D90: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A73B0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x3E36E0);
    PUSH32(esp, 0x1A69A0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BA8D8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001A8DBDu); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A8DBD: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A8DD0
 * Original: 0x001A8DD0 - 0x001A8E12 (66 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8DD0(void)
{

loc_001A8DD0: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x001A8DDDu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A8DDD: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x3E3120;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x001A8E0Bu); RECOMP_ABI_CALL(0x001A74C0u, sub_001A74C0); /* call 0x001A74C0 */

loc_001A8E0B: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_001A8E20
 * Original: 0x001A8E20 - 0x001A8E67 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8E20: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A8E30; /* jne: not equal / not zero */

loc_001A8E29: ;
    MEM8(0x5BA988) = 1;

loc_001A8E30: ;
    PUSH32(esp, 0x46201C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A4A00);
    PUSH32(esp, 0x1A8DD0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x3E36F0);
    PUSH32(esp, 0x1A5A70);
    PUSH32(esp, 0x1A4460);
    PUSH32(esp, 0x226510);
    PUSH32(esp, 0x5BA8E8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A8E63u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A8E63: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A8E70
 * Original: 0x001A8E70 - 0x001A8E76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8E70(void)
{

loc_001A8E70: ;
    eax = MEM32(0x5BA8F0);
    esp += 4; return; /* ret */

}

/**
 * sub_001A8E80
 * Original: 0x001A8E80 - 0x001A8EC7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8E80: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A8E90; /* jne: not equal / not zero */

loc_001A8E89: ;
    MEM8(0x5BA988) = 1;

loc_001A8E90: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A4BB0);
    PUSH32(esp, 0x1A7650);
    PUSH32(esp, 0x9CC);
    PUSH32(esp, 0x3E375C);
    PUSH32(esp, 0x1A6B20);
    PUSH32(esp, 0x1A4450);
    PUSH32(esp, 0x1A8D80);
    PUSH32(esp, 0x5BA8FC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A8EC3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A8EC3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A8ED0
 * Original: 0x001A8ED0 - 0x001A8ED6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8ED0(void)
{

loc_001A8ED0: ;
    eax = MEM32(0x5BA90C);
    esp += 4; return; /* ret */

}

/**
 * sub_001A8EE0
 * Original: 0x001A8EE0 - 0x001A8F04 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8EE0(void)
{

loc_001A8EE0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001A8EEBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A8EEB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E3230;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A8F10
 * Original: 0x001A8F10 - 0x001A8F54 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8F10: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A8F20; /* jne: not equal / not zero */

loc_001A8F19: ;
    MEM8(0x5BA988) = 1;

loc_001A8F20: ;
    PUSH32(esp, 0x462028);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A8EE0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E37DC);
    PUSH32(esp, 0x1A6BB0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BA910);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A8F50u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A8F50: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A8F60
 * Original: 0x001A8F60 - 0x001A8F66 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8F60(void)
{

loc_001A8F60: ;
    eax = MEM32(0x5BA918);
    esp += 4; return; /* ret */

}

/**
 * sub_001A8F70
 * Original: 0x001A8F70 - 0x001A8F94 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8F70(void)
{

loc_001A8F70: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001A8F7Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A8F7B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E32A0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A8FA0
 * Original: 0x001A8FA0 - 0x001A8FE4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A8FA0: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A8FB0; /* jne: not equal / not zero */

loc_001A8FA9: ;
    MEM8(0x5BA988) = 1;

loc_001A8FB0: ;
    PUSH32(esp, 0x462030);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A8F70);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E384C);
    PUSH32(esp, 0x1A6C70);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BA91C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A8FE0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A8FE0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A8FF0
 * Original: 0x001A8FF0 - 0x001A8FF6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8FF0(void)
{

loc_001A8FF0: ;
    eax = MEM32(0x5BA928);
    esp += 4; return; /* ret */

}

/**
 * sub_001A9000
 * Original: 0x001A9000 - 0x001A9024 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9000(void)
{

loc_001A9000: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001A900Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A900B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E3318;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9030
 * Original: 0x001A9030 - 0x001A9074 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9030: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A9040; /* jne: not equal / not zero */

loc_001A9039: ;
    MEM8(0x5BA988) = 1;

loc_001A9040: ;
    PUSH32(esp, 0x462038);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A9000);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E38BC);
    PUSH32(esp, 0x1A6D00);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BA92C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A9070u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A9070: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9080
 * Original: 0x001A9080 - 0x001A90AC (44 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9080(void)
{

loc_001A9080: ;
    esp = esp - 0x24;
    ecx = esp;
    PUSH32(esp, 0x001A908Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A908B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp + 8) = 0;
    MEM32(esp) = 0x3E3388;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_001A90B0
 * Original: 0x001A90B0 - 0x001A90F4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A90B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A90B0: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A90C0; /* jne: not equal / not zero */

loc_001A90B9: ;
    MEM8(0x5BA988) = 1;

loc_001A90C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A4F20);
    PUSH32(esp, 0x1A9080);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x3E38D0);
    PUSH32(esp, 0x1A5B20);
    PUSH32(esp, 0x1A4440);
    PUSH32(esp, 0x1A7360);
    PUSH32(esp, 0x5BA934);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A90F0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A90F0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9100
 * Original: 0x001A9100 - 0x001A912E (46 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9100(void)
{

loc_001A9100: ;
    esp = esp - 0x38;
    ecx = esp;
    PUSH32(esp, 0x001A910Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A910B: ;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x30) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E33F0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9130
 * Original: 0x001A9130 - 0x001A9177 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9130: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A9140; /* jne: not equal / not zero */

loc_001A9139: ;
    MEM8(0x5BA988) = 1;

loc_001A9140: ;
    PUSH32(esp, 0x462040);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A4FB0);
    PUSH32(esp, 0x1A9100);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x3E38E4);
    PUSH32(esp, 0x1A5B50);
    PUSH32(esp, 0x1A44F0);
    PUSH32(esp, 0x1A7AB0);
    PUSH32(esp, 0x5BA93C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A9173u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A9173: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9180
 * Original: 0x001A9180 - 0x001A91C7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9180: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A9190; /* jne: not equal / not zero */

loc_001A9189: ;
    MEM8(0x5BA988) = 1;

loc_001A9190: ;
    PUSH32(esp, 0x462048);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A50E0);
    PUSH32(esp, 0x1A7A50);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x3E38FC);
    PUSH32(esp, 0x1A5BB0);
    PUSH32(esp, 0x1A44F0);
    PUSH32(esp, 0x1A7AB0);
    PUSH32(esp, 0x5BA948);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A91C3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A91C3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A91D0
 * Original: 0x001A91D0 - 0x001A91F4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A91D0(void)
{

loc_001A91D0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001A91DBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A91DB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E3458;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9200
 * Original: 0x001A9200 - 0x001A9244 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9200: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A9210; /* jne: not equal / not zero */

loc_001A9209: ;
    MEM8(0x5BA988) = 1;

loc_001A9210: ;
    PUSH32(esp, 0x462050);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A91D0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E3914);
    PUSH32(esp, 0x1A5BE0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BA95C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A9240u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A9240: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9250
 * Original: 0x001A9250 - 0x001A927E (46 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9250(void)
{

loc_001A9250: ;
    esp = esp - 0x18;
    ecx = esp;
    PUSH32(esp, 0x001A925Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A925B: ;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E34B8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9280
 * Original: 0x001A9280 - 0x001A928C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9280(void)
{

loc_001A9280: ;
    PUSH32(esp, 0x1A7B90);
    PUSH32(esp, 0x001A928Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A928A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A9290
 * Original: 0x001A9290 - 0x001A92D7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9290: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A92A0; /* jne: not equal / not zero */

loc_001A9299: ;
    MEM8(0x5BA988) = 1;

loc_001A92A0: ;
    PUSH32(esp, 0x462058);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A53E0);
    PUSH32(esp, 0x1A7BE0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3E3924);
    PUSH32(esp, 0x1A6EE0);
    PUSH32(esp, 0x1A4500);
    PUSH32(esp, 0x1A6090);
    PUSH32(esp, 0x5BA96C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A92D3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A92D3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A92E0
 * Original: 0x001A92E0 - 0x001A92E6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A92E0(void)
{

loc_001A92E0: ;
    eax = MEM32(0x5BA978);
    esp += 4; return; /* ret */

}

/**
 * sub_001A92F0
 * Original: 0x001A92F0 - 0x001A9314 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A92F0(void)
{

loc_001A92F0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001A92FBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A92FB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E3548;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9320
 * Original: 0x001A9320 - 0x001A9364 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9320: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A9330; /* jne: not equal / not zero */

loc_001A9329: ;
    MEM8(0x5BA988) = 1;

loc_001A9330: ;
    PUSH32(esp, 0x462060);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A92F0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E39A4);
    PUSH32(esp, 0x1A6F70);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BA97C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A9360u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A9360: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9370
 * Original: 0x001A9370 - 0x001A9417 (167 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001A9370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001A9370: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001A9388; /* jne: not equal / not zero */

loc_001A937E: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    esp += 12; return; /* ret 8 */

loc_001A9388: ;
    PUSH32(esp, ebx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001A93B3u); RECOMP_ABI_CALL(0x001A85F0u, sub_001A85F0); /* call 0x001A85F0 */

loc_001A93B3: ;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(esp + 0x2C);
    fp_push(MEMF(eax + edx * 4)); /* fld float */
    ecx = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x14);
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ecx));
    esi = esi - ecx;
    MEM32(esp + 0x2C) = esi;
    esi = MEM32(esp + 0x20);
    { uint64_t _t = (uint64_t)(ebx) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* sbb */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ecx));
    esi = esi - ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0x30) = ebx;
    fp_push((double)SMEM64(esp + 0x2C)); /* fild */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x30) = ecx;
    fp_push((double)SMEM64(esp + 0x2C)); /* fild */
    edx = MEM32(esp + 0xC);
    POP32(esp, ebx);
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    fp_push(MEMF(eax + edx * 4)); /* fld float */
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    SET_LO8(eax, 1);
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    fp_pop(); /* fstp st(0) */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A9420
 * Original: 0x001A9420 - 0x001A9542 (290 bytes, 103 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9420(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9420: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x34));
    esp = esp - 0x34;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001A9438; /* jne: not equal / not zero */

loc_001A942E: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x34)) >> 32) & 1);
    esp = esp + 0x34;
    esp += 12; return; /* ret 8 */

loc_001A9438: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x50);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x50);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001A9462u); RECOMP_ABI_CALL(0x001A85F0u, sub_001A85F0); /* call 0x001A85F0 */

loc_001A9462: ;
    ecx = MEM32(esi + 0x30);
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 0x40);
    esi = MEM32(esp + 0x18);
    edx = eax + eax * 2;
    fp_push(MEMF(ecx + edx * 4)); /* fld float */
    eax = ecx + edx * 4;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 8);
    MEM32(esp + 0x28) = edx;
    edx = eax + eax * 2;
    fp_push(MEMF(ecx + edx * 4)); /* fld float */
    eax = ecx + edx * 4;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + 8);
    eax = MEM32(esp + 0xC);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_001A94D3; /* jne: not equal / not zero */

loc_001A94B2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001A94D3; /* jne: not equal / not zero */

loc_001A94B6: ;
    eax = MEM32(esp + 0x28);
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(esp + 0x2C);
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 0x10) = ecx;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x34)) >> 32) & 1);
    esp = esp + 0x34;
    esp += 12; return; /* ret 8 */

loc_001A94D3: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(ecx));
    ebx = ebx - ecx;
    { uint64_t _t = (uint64_t)(ebp) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebp = (uint32_t)_t; }  /* sbb */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x4C) = ebp;
    fp_push((double)SMEM64(esp + 0x48)); /* fild */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = edx;
    fp_push((double)SMEM64(esp + 0x48)); /* fild */
    POP32(esp, ebp);
    POP32(esp, ebx);
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    SET_LO8(eax, 1);
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    fp_top() = fp_top() * MEMF(esp + 0x40); /* fmul dword ptr [esp + 0x40] */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    fp_top() = fp_top() * MEMF(esp + 0x40); /* fmul dword ptr [esp + 0x40] */
    fp_top() = fp_top() + MEMF(esp + 0x28); /* fadd dword ptr [esp + 0x28] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x2C); /* fsub dword ptr [esp + 0x2c] */
    fp_top() = fp_top() * MEMF(esp + 0x40); /* fmul dword ptr [esp + 0x40] */
    fp_top() = fp_top() + MEMF(esp + 0x2C); /* fadd dword ptr [esp + 0x2c] */
    MEMF(edi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x34)) >> 32) & 1);
    esp = esp + 0x34;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A9550
 * Original: 0x001A9550 - 0x001A9699 (329 bytes, 114 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001A9550(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A9550: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x3C));
    esp = esp - 0x3C;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001A9568; /* jne: not equal / not zero */

loc_001A955E: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x3C)) >> 32) & 1);
    esp = esp + 0x3C;
    esp += 12; return; /* ret 8 */

loc_001A9568: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x58);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x58);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001A9592u); RECOMP_ABI_CALL(0x001A85F0u, sub_001A85F0); /* call 0x001A85F0 */

loc_001A9592: ;
    ecx = MEM32(edi + 0x30);
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 0x48);
    edi = MEM32(esp + 0x18);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    edx = MEM32(eax + ecx + 4);
    fp_push(MEMF(eax + ecx)); /* fld float */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 8);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    fp_push(MEMF(eax + ecx)); /* fld float */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_001A9617; /* jne: not equal / not zero */

loc_001A95EF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001A9617; /* jne: not equal / not zero */

loc_001A95F3: ;
    eax = MEM32(esp + 0x30);
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(esp + 0x28);
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x2C);
    MEM32(esi + 0x14) = eax;
    POP32(esp, edi);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x3C)) >> 32) & 1);
    esp = esp + 0x3C;
    esp += 12; return; /* ret 8 */

loc_001A9617: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(ecx));
    ebx = ebx - ecx;
    { uint64_t _t = (uint64_t)(ebp) - (uint64_t)(edi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebp = (uint32_t)_t; }  /* sbb */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    MEM32(esp + 0x50) = ebx;
    MEM32(esp + 0x54) = ebp;
    fp_push((double)SMEM64(esp + 0x50)); /* fild */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(edi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = edx;
    fp_push((double)SMEM64(esp + 0x50)); /* fild */
    POP32(esp, ebp);
    POP32(esp, ebx);
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    fp_top() = fp_top() * MEMF(esp + 0x44); /* fmul dword ptr [esp + 0x44] */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x24); /* fsub dword ptr [esp + 0x24] */
    fp_top() = fp_top() * MEMF(esp + 0x44); /* fmul dword ptr [esp + 0x44] */
    fp_top() = fp_top() + MEMF(esp + 0x24); /* fadd dword ptr [esp + 0x24] */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    fp_top() = fp_top() * MEMF(esp + 0x44); /* fmul dword ptr [esp + 0x44] */
    fp_top() = fp_top() + MEMF(esp + 0x28); /* fadd dword ptr [esp + 0x28] */
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x2C); /* fsub dword ptr [esp + 0x2c] */
    fp_top() = fp_top() * MEMF(esp + 0x44); /* fmul dword ptr [esp + 0x44] */
    fp_top() = fp_top() + MEMF(esp + 0x2C); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x3C)) >> 32) & 1);
    esp = esp + 0x3C;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001A96A0
 * Original: 0x001A96A0 - 0x001A96A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A96A0(void)
{

loc_001A96A0: ;
    eax = MEM32(0x5BA8A8);
    esp += 4; return; /* ret */

}

/**
 * sub_001A96B0
 * Original: 0x001A96B0 - 0x001A96D4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A96B0(void)
{

loc_001A96B0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001A96BBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A96BB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E3610;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A96E0
 * Original: 0x001A96E0 - 0x001A9724 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A96E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A96E0: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A96F0; /* jne: not equal / not zero */

loc_001A96E9: ;
    MEM8(0x5BA988) = 1;

loc_001A96F0: ;
    PUSH32(esp, 0x462068);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A96B0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E3A14);
    PUSH32(esp, 0x1A6790);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BA8AC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A9720u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A9720: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9730
 * Original: 0x001A9730 - 0x001A9754 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9730(void)
{

loc_001A9730: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001A973Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A973B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E3670;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9760
 * Original: 0x001A9760 - 0x001A97A4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9760: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A9770; /* jne: not equal / not zero */

loc_001A9769: ;
    MEM8(0x5BA988) = 1;

loc_001A9770: ;
    PUSH32(esp, 0x462070);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A9730);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E3A28);
    PUSH32(esp, 0x1A6850);
    PUSH32(esp, 0x1A43F0);
    PUSH32(esp, 0x223F30);
    PUSH32(esp, 0x5BA8B4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A97A0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A97A0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A97B0
 * Original: 0x001A97B0 - 0x001A97B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A97B0(void)
{

loc_001A97B0: ;
    eax = MEM32(0x5BA8E4);
    esp += 4; return; /* ret */

}

/**
 * sub_001A97C0
 * Original: 0x001A97C0 - 0x001A97CC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A97C0(void)
{

loc_001A97C0: ;
    PUSH32(esp, 0x1A8E20);
    PUSH32(esp, 0x001A97CAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A97CA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A97D0
 * Original: 0x001A97D0 - 0x001A97FE (46 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A97D0(void)
{

loc_001A97D0: ;
    esp = esp - 0x28;
    ecx = esp;
    PUSH32(esp, 0x001A97DBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A97DB: ;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E3708;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9800
 * Original: 0x001A9800 - 0x001A9847 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9800: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A9810; /* jne: not equal / not zero */

loc_001A9809: ;
    MEM8(0x5BA988) = 1;

loc_001A9810: ;
    PUSH32(esp, 0x462078);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A4AE0);
    PUSH32(esp, 0x1A97D0);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x3E3AA4);
    PUSH32(esp, 0x1A6AC0);
    PUSH32(esp, 0x1A4480);
    PUSH32(esp, 0x1A7880);
    PUSH32(esp, 0x5BA8F0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A9843u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A9843: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9850
 * Original: 0x001A9850 - 0x001A9874 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9850(void)
{

loc_001A9850: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001A985Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A985B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E3780;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9880
 * Original: 0x001A9880 - 0x001A98C4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9880: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A9890; /* jne: not equal / not zero */

loc_001A9889: ;
    MEM8(0x5BA988) = 1;

loc_001A9890: ;
    PUSH32(esp, 0x462080);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A9850);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E3AC0);
    PUSH32(esp, 0x1A6BE0);
    PUSH32(esp, 0x1A43F0);
    PUSH32(esp, 0x223F30);
    PUSH32(esp, 0x5BA90C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A98C0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A98C0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A98D0
 * Original: 0x001A98D0 - 0x001A98F4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A98D0(void)
{

loc_001A98D0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001A98DBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A98DB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E37F0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9900
 * Original: 0x001A9900 - 0x001A9944 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9900: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A9910; /* jne: not equal / not zero */

loc_001A9909: ;
    MEM8(0x5BA988) = 1;

loc_001A9910: ;
    PUSH32(esp, 0x462088);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A98D0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E3AE0);
    PUSH32(esp, 0x1A6CA0);
    PUSH32(esp, 0x1A43F0);
    PUSH32(esp, 0x223F30);
    PUSH32(esp, 0x5BA918);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A9940u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A9940: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9950
 * Original: 0x001A9950 - 0x001A9974 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9950(void)
{

loc_001A9950: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001A995Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A995B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E3860;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9980
 * Original: 0x001A9980 - 0x001A99C4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9980: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A9990; /* jne: not equal / not zero */

loc_001A9989: ;
    MEM8(0x5BA988) = 1;

loc_001A9990: ;
    PUSH32(esp, 0x462090);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A9950);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E3B00);
    PUSH32(esp, 0x1A6D30);
    PUSH32(esp, 0x1A43F0);
    PUSH32(esp, 0x223F30);
    PUSH32(esp, 0x5BA928);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A99C0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A99C0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A99D0
 * Original: 0x001A99D0 - 0x001A99DC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A99D0(void)
{

loc_001A99D0: ;
    PUSH32(esp, 0x1A90B0);
    PUSH32(esp, 0x001A99DAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A99DA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A99E0
 * Original: 0x001A99E0 - 0x001A99EC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A99E0(void)
{

loc_001A99E0: ;
    PUSH32(esp, 0x1A9130);
    PUSH32(esp, 0x001A99EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A99EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A99F0
 * Original: 0x001A99F0 - 0x001A9A37 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A99F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A99F0: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A9A00; /* jne: not equal / not zero */

loc_001A99F9: ;
    MEM8(0x5BA988) = 1;

loc_001A9A00: ;
    PUSH32(esp, 0x462098);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A5000);
    PUSH32(esp, 0x1A79F0);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x3E3B20);
    PUSH32(esp, 0x1A6DC0);
    PUSH32(esp, 0x1A4500);
    PUSH32(esp, 0x1A6090);
    PUSH32(esp, 0x5BA940);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A9A33u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A9A33: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9A40
 * Original: 0x001A9A40 - 0x001A9A87 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9A40: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A9A50; /* jne: not equal / not zero */

loc_001A9A49: ;
    MEM8(0x5BA988) = 1;

loc_001A9A50: ;
    PUSH32(esp, 0x4620A0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A5070);
    PUSH32(esp, 0x1A7A20);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x3E3B40);
    PUSH32(esp, 0x1A6DF0);
    PUSH32(esp, 0x1A4500);
    PUSH32(esp, 0x1A6090);
    PUSH32(esp, 0x5BA944);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A9A83u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A9A83: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9A90
 * Original: 0x001A9A90 - 0x001A9A9C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9A90(void)
{

loc_001A9A90: ;
    PUSH32(esp, 0x1A9180);
    PUSH32(esp, 0x001A9A9Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9A9A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A9AA0
 * Original: 0x001A9AA0 - 0x001A9AE7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9AA0: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A9AB0; /* jne: not equal / not zero */

loc_001A9AA9: ;
    MEM8(0x5BA988) = 1;

loc_001A9AB0: ;
    PUSH32(esp, 0x4620A8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A5130);
    PUSH32(esp, 0x1A7A80);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x3E3B60);
    PUSH32(esp, 0x1A6E20);
    PUSH32(esp, 0x1A4500);
    PUSH32(esp, 0x1A6090);
    PUSH32(esp, 0x5BA94C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A9AE3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A9AE3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9AF0
 * Original: 0x001A9AF0 - 0x001A9AFC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9AF0(void)
{

loc_001A9AF0: ;
    PUSH32(esp, 0x1A9200);
    PUSH32(esp, 0x001A9AFAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9AFA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A9B00
 * Original: 0x001A9B00 - 0x001A9B47 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9B00: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A9B10; /* jne: not equal / not zero */

loc_001A9B09: ;
    MEM8(0x5BA988) = 1;

loc_001A9B10: ;
    PUSH32(esp, 0x4620B0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A5320);
    PUSH32(esp, 0x1A9250);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x3E3B80);
    PUSH32(esp, 0x1A6E80);
    PUSH32(esp, 0x1A4510);
    PUSH32(esp, 0x2371D0);
    PUSH32(esp, 0x5BA964);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A9B43u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A9B43: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9B50
 * Original: 0x001A9B50 - 0x001A9B74 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9B50(void)
{

loc_001A9B50: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001A9B5Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A9B5B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E3948;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9B80
 * Original: 0x001A9B80 - 0x001A9BC4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9B80: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A9B90; /* jne: not equal / not zero */

loc_001A9B89: ;
    MEM8(0x5BA988) = 1;

loc_001A9B90: ;
    PUSH32(esp, 0x4620B8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A9B50);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E3B90);
    PUSH32(esp, 0x1A6FA0);
    PUSH32(esp, 0x1A43F0);
    PUSH32(esp, 0x223F30);
    PUSH32(esp, 0x5BA978);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A9BC0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A9BC0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9BD0
 * Original: 0x001A9BD0 - 0x001A9C17 (71 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9BD0: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A9BE0; /* jne: not equal / not zero */

loc_001A9BD9: ;
    MEM8(0x5BA988) = 1;

loc_001A9BE0: ;
    PUSH32(esp, 0x4620C0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A55A0);
    PUSH32(esp, 0x1A7D60);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E3BB0);
    PUSH32(esp, 0x1A6FD0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BA984);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A9C13u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A9C13: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9C20
 * Original: 0x001A9C20 - 0x001A9E49 (553 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9C20(void)
{

loc_001A9C20: ;
    PUSH32(esp, 0x1A7000);
    PUSH32(esp, 0x001A9C2Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9C2A: ;
    PUSH32(esp, 0x1A96E0);
    PUSH32(esp, 0x001A9C34u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9C34: ;
    PUSH32(esp, 0x1A9E80);
    PUSH32(esp, 0x001A9C3Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9C3E: ;
    PUSH32(esp, 0x1A7060);
    PUSH32(esp, 0x001A9C48u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9C48: ;
    PUSH32(esp, 0x1A8D30);
    PUSH32(esp, 0x001A9C52u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9C52: ;
    PUSH32(esp, 0x1A9760);
    PUSH32(esp, 0x001A9C5Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9C5C: ;
    PUSH32(esp, 0x1A72E0);
    PUSH32(esp, 0x001A9C66u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9C66: ;
    PUSH32(esp, 0x1A7260);
    PUSH32(esp, 0x001A9C70u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9C70: ;
    PUSH32(esp, 0x1A71E0);
    PUSH32(esp, 0x001A9C7Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9C7A: ;
    PUSH32(esp, 0x1A7160);
    PUSH32(esp, 0x001A9C84u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9C84: ;
    PUSH32(esp, 0x1A70E0);
    PUSH32(esp, 0x001A9C8Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9C8E: ;
    PUSH32(esp, 0x1A7360);
    PUSH32(esp, 0x001A9C98u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9C98: ;
    PUSH32(esp, 0x1A8D80);
    PUSH32(esp, 0x001A9CA2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9CA2: ;
    PUSH32(esp, 0x1A73F0);
    PUSH32(esp, 0x001A9CACu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9CAC: ;
    PUSH32(esp, 0x1A8E20);
    PUSH32(esp, 0x001A9CB6u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9CB6: ;
    PUSH32(esp, 0x1A9F00);
    PUSH32(esp, 0x001A9CC0u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9CC0: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x1A7470);
    PUSH32(esp, 0x001A9CCDu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9CCD: ;
    PUSH32(esp, 0x1A7570);
    PUSH32(esp, 0x001A9CD7u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9CD7: ;
    PUSH32(esp, 0x1A9800);
    PUSH32(esp, 0x001A9CE1u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9CE1: ;
    PUSH32(esp, 0x1A7600);
    PUSH32(esp, 0x001A9CEBu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9CEB: ;
    PUSH32(esp, 0x1A8E80);
    PUSH32(esp, 0x001A9CF5u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9CF5: ;
    PUSH32(esp, 0x1A5DF0);
    PUSH32(esp, 0x001A9CFFu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9CFF: ;
    PUSH32(esp, 0x1A76C0);
    PUSH32(esp, 0x001A9D09u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9D09: ;
    PUSH32(esp, 0x1A77A0);
    PUSH32(esp, 0x001A9D13u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9D13: ;
    PUSH32(esp, 0x1A8F10);
    PUSH32(esp, 0x001A9D1Du); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9D1D: ;
    PUSH32(esp, 0x1A9880);
    PUSH32(esp, 0x001A9D27u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9D27: ;
    PUSH32(esp, 0x1A7740);
    PUSH32(esp, 0x001A9D31u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9D31: ;
    PUSH32(esp, 0x1A7800);
    PUSH32(esp, 0x001A9D3Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9D3B: ;
    PUSH32(esp, 0x1A8FA0);
    PUSH32(esp, 0x001A9D45u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9D45: ;
    PUSH32(esp, 0x1A9900);
    PUSH32(esp, 0x001A9D4Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9D4F: ;
    PUSH32(esp, 0x1A7880);
    PUSH32(esp, 0x001A9D59u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9D59: ;
    PUSH32(esp, 0x1A78E0);
    PUSH32(esp, 0x001A9D63u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9D63: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x1A9030);
    PUSH32(esp, 0x001A9D70u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9D70: ;
    PUSH32(esp, 0x1A9980);
    PUSH32(esp, 0x001A9D7Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9D7A: ;
    PUSH32(esp, 0x1A90B0);
    PUSH32(esp, 0x001A9D84u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9D84: ;
    PUSH32(esp, 0x1A7990);
    PUSH32(esp, 0x001A9D8Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9D8E: ;
    PUSH32(esp, 0x1A9130);
    PUSH32(esp, 0x001A9D98u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9D98: ;
    PUSH32(esp, 0x1A99F0);
    PUSH32(esp, 0x001A9DA2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9DA2: ;
    PUSH32(esp, 0x1A9A40);
    PUSH32(esp, 0x001A9DACu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9DAC: ;
    PUSH32(esp, 0x1A9180);
    PUSH32(esp, 0x001A9DB6u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9DB6: ;
    PUSH32(esp, 0x1A9AA0);
    PUSH32(esp, 0x001A9DC0u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9DC0: ;
    PUSH32(esp, 0x1A7AB0);
    PUSH32(esp, 0x001A9DCAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9DCA: ;
    PUSH32(esp, 0x1A9F50);
    PUSH32(esp, 0x001A9DD4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9DD4: ;
    PUSH32(esp, 0x1A9200);
    PUSH32(esp, 0x001A9DDEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9DDE: ;
    PUSH32(esp, 0x1A6090);
    PUSH32(esp, 0x001A9DE8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9DE8: ;
    PUSH32(esp, 0x1A9B00);
    PUSH32(esp, 0x001A9DF2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9DF2: ;
    PUSH32(esp, 0x1A7B90);
    PUSH32(esp, 0x001A9DFCu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9DFC: ;
    PUSH32(esp, 0x1A9290);
    PUSH32(esp, 0x001A9E06u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9E06: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x1A7C60);
    PUSH32(esp, 0x001A9E13u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9E13: ;
    PUSH32(esp, 0x1A7CB0);
    PUSH32(esp, 0x001A9E1Du); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9E1D: ;
    PUSH32(esp, 0x1A7D10);
    PUSH32(esp, 0x001A9E27u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9E27: ;
    PUSH32(esp, 0x1A9320);
    PUSH32(esp, 0x001A9E31u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9E31: ;
    PUSH32(esp, 0x1A9B80);
    PUSH32(esp, 0x001A9E3Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9E3B: ;
    PUSH32(esp, 0x1A9BD0);
    PUSH32(esp, 0x001A9E45u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9E45: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9E50
 * Original: 0x001A9E50 - 0x001A9E74 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9E50(void)
{

loc_001A9E50: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001A9E5Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A9E5B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E39B8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9E80
 * Original: 0x001A9E80 - 0x001A9EC4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9E80: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A9E90; /* jne: not equal / not zero */

loc_001A9E89: ;
    MEM8(0x5BA988) = 1;

loc_001A9E90: ;
    PUSH32(esp, 0x4620D0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A9E50);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E3BD0);
    PUSH32(esp, 0x1A67C0);
    PUSH32(esp, 0x1A43F0);
    PUSH32(esp, 0x223F30);
    PUSH32(esp, 0x5BA8A8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A9EC0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A9EC0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9ED0
 * Original: 0x001A9ED0 - 0x001A9EF4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9ED0(void)
{

loc_001A9ED0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001A9EDBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A9EDB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E3A48;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9F00
 * Original: 0x001A9F00 - 0x001A9F44 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9F00: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A9F10; /* jne: not equal / not zero */

loc_001A9F09: ;
    MEM8(0x5BA988) = 1;

loc_001A9F10: ;
    PUSH32(esp, 0x4620D8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A9ED0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E3BF0);
    PUSH32(esp, 0x1A6A00);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BA8E4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A9F40u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A9F40: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9F50
 * Original: 0x001A9F50 - 0x001A9F97 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9F50: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A9F60; /* jne: not equal / not zero */

loc_001A9F59: ;
    MEM8(0x5BA988) = 1;

loc_001A9F60: ;
    PUSH32(esp, 0x4620E0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A6000);
    PUSH32(esp, 0x1A7B00);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3E3C08);
    PUSH32(esp, 0x1A6EB0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BA958);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A9F93u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A9F93: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9FA0
 * Original: 0x001A9FA0 - 0x001A9FBE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9FA0(void)
{

loc_001A9FA0: ;
    PUSH32(esp, 0x1A9200);
    PUSH32(esp, 0x001A9FAAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A9FAA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BA95C);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A9FBDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_001A9FBD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9FC0
 * Original: 0x001A9FC0 - 0x001A9FE8 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9FC0: ;
    eax = MEM32(0x5BB06C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A9FE7; /* jne: not equal / not zero */

loc_001A9FC9: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x4679F0);
    PUSH32(esp, 0x4679E8);
    PUSH32(esp, 0x3E416C);
    PUSH32(esp, 0x001A9FDFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001A9FDF: ;
    esp = esp + 0x10;
    MEM32(0x5BB06C) = eax;

loc_001A9FE7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A9FF0
 * Original: 0x001A9FF0 - 0x001AA018 (40 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A9FF0: ;
    eax = MEM32(0x5BB078);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA017; /* jne: not equal / not zero */

loc_001A9FF9: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x467A20);
    PUSH32(esp, 0x4679F8);
    PUSH32(esp, 0x3E424C);
    PUSH32(esp, 0x001AA00Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA00F: ;
    esp = esp + 0x10;
    MEM32(0x5BB078) = eax;

loc_001AA017: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA020
 * Original: 0x001AA020 - 0x001AA048 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA020: ;
    eax = MEM32(0x5BB08C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA047; /* jne: not equal / not zero */

loc_001AA029: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x467A50);
    PUSH32(esp, 0x467A48);
    PUSH32(esp, 0x3E42A8);
    PUSH32(esp, 0x001AA03Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA03F: ;
    esp = esp + 0x10;
    MEM32(0x5BB08C) = eax;

loc_001AA047: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA050
 * Original: 0x001AA050 - 0x001AA078 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA050: ;
    eax = MEM32(0x5BB098);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA077; /* jne: not equal / not zero */

loc_001AA059: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x467A78);
    PUSH32(esp, 0x467A58);
    PUSH32(esp, 0x3E43C8);
    PUSH32(esp, 0x001AA06Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA06F: ;
    esp = esp + 0x10;
    MEM32(0x5BB098) = eax;

loc_001AA077: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA080
 * Original: 0x001AA080 - 0x001AA0A8 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA080: ;
    eax = MEM32(0x5BB09C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA0A7; /* jne: not equal / not zero */

loc_001AA089: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x467AB8);
    PUSH32(esp, 0x467A98);
    PUSH32(esp, 0x3E44E8);
    PUSH32(esp, 0x001AA09Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA09F: ;
    esp = esp + 0x10;
    MEM32(0x5BB09C) = eax;

loc_001AA0A7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA0B0
 * Original: 0x001AA0B0 - 0x001AA0D8 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA0B0: ;
    eax = MEM32(0x5BB0A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA0D7; /* jne: not equal / not zero */

loc_001AA0B9: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x467AE4);
    PUSH32(esp, 0x467AD8);
    PUSH32(esp, 0x3E4544);
    PUSH32(esp, 0x001AA0CFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA0CF: ;
    esp = esp + 0x10;
    MEM32(0x5BB0A0) = eax;

loc_001AA0D7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA0E0
 * Original: 0x001AA0E0 - 0x001AA108 (40 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA0E0: ;
    eax = MEM32(0x5BB0A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA107; /* jne: not equal / not zero */

loc_001AA0E9: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x467AFC);
    PUSH32(esp, 0x467AF0);
    PUSH32(esp, 0x3E45A4);
    PUSH32(esp, 0x001AA0FFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA0FF: ;
    esp = esp + 0x10;
    MEM32(0x5BB0A8) = eax;

loc_001AA107: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA110
 * Original: 0x001AA110 - 0x001AA138 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA110: ;
    eax = MEM32(0x5BB0AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA137; /* jne: not equal / not zero */

loc_001AA119: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x467B28);
    PUSH32(esp, 0x467B08);
    PUSH32(esp, 0x3E46D8);
    PUSH32(esp, 0x001AA12Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA12F: ;
    esp = esp + 0x10;
    MEM32(0x5BB0AC) = eax;

loc_001AA137: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA140
 * Original: 0x001AA140 - 0x001AA168 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA140: ;
    eax = MEM32(0x5BB0B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA167; /* jne: not equal / not zero */

loc_001AA149: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x467B50);
    PUSH32(esp, 0x467B48);
    PUSH32(esp, 0x3E472C);
    PUSH32(esp, 0x001AA15Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA15F: ;
    esp = esp + 0x10;
    MEM32(0x5BB0B0) = eax;

loc_001AA167: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA170
 * Original: 0x001AA170 - 0x001AA198 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA170: ;
    eax = MEM32(0x5BB0B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA197; /* jne: not equal / not zero */

loc_001AA179: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x467B60);
    PUSH32(esp, 0x467B58);
    PUSH32(esp, 0x3E477C);
    PUSH32(esp, 0x001AA18Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA18F: ;
    esp = esp + 0x10;
    MEM32(0x5BB0B4) = eax;

loc_001AA197: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA1A0
 * Original: 0x001AA1A0 - 0x001AA1C8 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA1A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA1A0: ;
    eax = MEM32(0x5BB0B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA1C7; /* jne: not equal / not zero */

loc_001AA1A9: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x467B88);
    PUSH32(esp, 0x467B68);
    PUSH32(esp, 0x3E4884);
    PUSH32(esp, 0x001AA1BFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA1BF: ;
    esp = esp + 0x10;
    MEM32(0x5BB0B8) = eax;

loc_001AA1C7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA1D0
 * Original: 0x001AA1D0 - 0x001AA1F8 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA1D0: ;
    eax = MEM32(0x5BB0C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA1F7; /* jne: not equal / not zero */

loc_001AA1D9: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x467BD4);
    PUSH32(esp, 0x467BA8);
    PUSH32(esp, 0x3E4A84);
    PUSH32(esp, 0x001AA1EFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA1EF: ;
    esp = esp + 0x10;
    MEM32(0x5BB0C8) = eax;

loc_001AA1F7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA200
 * Original: 0x001AA200 - 0x001AA228 (40 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA200: ;
    eax = MEM32(0x5BB0D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA227; /* jne: not equal / not zero */

loc_001AA209: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x467C18);
    PUSH32(esp, 0x467C00);
    PUSH32(esp, 0x3E4BCC);
    PUSH32(esp, 0x001AA21Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA21F: ;
    esp = esp + 0x10;
    MEM32(0x5BB0D0) = eax;

loc_001AA227: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA230
 * Original: 0x001AA230 - 0x001AA258 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA230: ;
    eax = MEM32(0x5BB0D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA257; /* jne: not equal / not zero */

loc_001AA239: ;
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0x467CA0);
    PUSH32(esp, 0x467C30);
    PUSH32(esp, 0x3E5030);
    PUSH32(esp, 0x001AA24Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA24F: ;
    esp = esp + 0x10;
    MEM32(0x5BB0D8) = eax;

loc_001AA257: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA260
 * Original: 0x001AA260 - 0x001AA288 (40 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA260: ;
    eax = MEM32(0x5BB0E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA287; /* jne: not equal / not zero */

loc_001AA269: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x467D20);
    PUSH32(esp, 0x467D0C);
    PUSH32(esp, 0x3E5118);
    PUSH32(esp, 0x001AA27Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA27F: ;
    esp = esp + 0x10;
    MEM32(0x5BB0E0) = eax;

loc_001AA287: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA290
 * Original: 0x001AA290 - 0x001AA2B8 (40 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA290: ;
    eax = MEM32(0x5BB0E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA2B7; /* jne: not equal / not zero */

loc_001AA299: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x467D3C);
    PUSH32(esp, 0x467D34);
    PUSH32(esp, 0x3E517C);
    PUSH32(esp, 0x001AA2AFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA2AF: ;
    esp = esp + 0x10;
    MEM32(0x5BB0E4) = eax;

loc_001AA2B7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA2C0
 * Original: 0x001AA2C0 - 0x001AA2E8 (40 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA2C0: ;
    eax = MEM32(0x5BB0E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA2E7; /* jne: not equal / not zero */

loc_001AA2C9: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x467D54);
    PUSH32(esp, 0x467D44);
    PUSH32(esp, 0x3E5228);
    PUSH32(esp, 0x001AA2DFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA2DF: ;
    esp = esp + 0x10;
    MEM32(0x5BB0E8) = eax;

loc_001AA2E7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA2F0
 * Original: 0x001AA2F0 - 0x001AA318 (40 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA2F0: ;
    eax = MEM32(0x5BB0F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA317; /* jne: not equal / not zero */

loc_001AA2F9: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x467D78);
    PUSH32(esp, 0x467D64);
    PUSH32(esp, 0x3E52D8);
    PUSH32(esp, 0x001AA30Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA30F: ;
    esp = esp + 0x10;
    MEM32(0x5BB0F0) = eax;

loc_001AA317: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA320
 * Original: 0x001AA320 - 0x001AA348 (40 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA320: ;
    eax = MEM32(0x5BB0F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA347; /* jne: not equal / not zero */

loc_001AA329: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x467D9C);
    PUSH32(esp, 0x467D8C);
    PUSH32(esp, 0x3E5370);
    PUSH32(esp, 0x001AA33Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA33F: ;
    esp = esp + 0x10;
    MEM32(0x5BB0F4) = eax;

loc_001AA347: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA350
 * Original: 0x001AA350 - 0x001AA378 (40 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA350: ;
    eax = MEM32(0x5BB0F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA377; /* jne: not equal / not zero */

loc_001AA359: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x467DC4);
    PUSH32(esp, 0x467DAC);
    PUSH32(esp, 0x3E5478);
    PUSH32(esp, 0x001AA36Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA36F: ;
    esp = esp + 0x10;
    MEM32(0x5BB0F8) = eax;

loc_001AA377: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA380
 * Original: 0x001AA380 - 0x001AA3A8 (40 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA380: ;
    eax = MEM32(0x5BB100);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA3A7; /* jne: not equal / not zero */

loc_001AA389: ;
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x467ED0);
    PUSH32(esp, 0x467DE0);
    PUSH32(esp, 0x3E5CC8);
    PUSH32(esp, 0x001AA39Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA39F: ;
    esp = esp + 0x10;
    MEM32(0x5BB100) = eax;

loc_001AA3A7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA3B0
 * Original: 0x001AA3B0 - 0x001AA3D8 (40 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA3B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA3B0: ;
    eax = MEM32(0x5BB108);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA3D7; /* jne: not equal / not zero */

loc_001AA3B9: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x467FD4);
    PUSH32(esp, 0x467FBC);
    PUSH32(esp, 0x3E5DC0);
    PUSH32(esp, 0x001AA3CFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA3CF: ;
    esp = esp + 0x10;
    MEM32(0x5BB108) = eax;

loc_001AA3D7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA3E0
 * Original: 0x001AA3E0 - 0x001AA408 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA3E0: ;
    eax = MEM32(0x5BB114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA407; /* jne: not equal / not zero */

loc_001AA3E9: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x467FF8);
    PUSH32(esp, 0x467FEC);
    PUSH32(esp, 0x3E5E2C);
    PUSH32(esp, 0x001AA3FFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA3FF: ;
    esp = esp + 0x10;
    MEM32(0x5BB114) = eax;

loc_001AA407: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA410
 * Original: 0x001AA410 - 0x001AA438 (40 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA410: ;
    eax = MEM32(0x5BB11C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA437; /* jne: not equal / not zero */

loc_001AA419: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x46801C);
    PUSH32(esp, 0x468004);
    PUSH32(esp, 0x3E5ED0);
    PUSH32(esp, 0x001AA42Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA42F: ;
    esp = esp + 0x10;
    MEM32(0x5BB11C) = eax;

loc_001AA437: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA440
 * Original: 0x001AA440 - 0x001AA468 (40 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA440: ;
    eax = MEM32(0x5BB124);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA467; /* jne: not equal / not zero */

loc_001AA449: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x468040);
    PUSH32(esp, 0x468034);
    PUSH32(esp, 0x3E5F60);
    PUSH32(esp, 0x001AA45Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA45F: ;
    esp = esp + 0x10;
    MEM32(0x5BB124) = eax;

loc_001AA467: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA470
 * Original: 0x001AA470 - 0x001AA48E (30 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA470: ;
    SET_LO8(eax, MEM8(0x5BC548));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AA480; /* je: equal / zero */

loc_001AA479: ;
    eax = MEM32(esp + 4);
    esp += 8; return; /* ret 4 */

loc_001AA480: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AA488u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001AA488: ;
    esp = esp + 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AA490
 * Original: 0x001AA490 - 0x001AA496 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA490(void)
{

loc_001AA490: ;
    eax = MEM32(0x5BB274);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA4A0
 * Original: 0x001AA4A0 - 0x001AA4A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA4A0(void)
{

loc_001AA4A0: ;
    eax = MEM32(0x5BB178);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA4B0
 * Original: 0x001AA4B0 - 0x001AA508 (88 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA4B0(void)
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

loc_001AA4B0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C7B8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c7b8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA4E4; /* jne: not equal / not zero */

loc_001AA4C1: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001AA4F6; /* jp: parity */

loc_001AA4D2: ;
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x001AA4E3u); RECOMP_ABI_CALL(0x00341C74u, sub_00341C74); /* call 0x00341C74 */

loc_001AA4E3: ;
    esp += 4; return; /* ret */

loc_001AA4E4: ;
    MEM32(esp + 4) = 0xBF800000u;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x001AA4F5u); RECOMP_ABI_CALL(0x00341C74u, sub_00341C74); /* call 0x00341C74 */

loc_001AA4F5: ;
    esp += 4; return; /* ret */

loc_001AA4F6: ;
    MEM32(esp + 4) = 0x3F800000;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x001AA507u); RECOMP_ABI_CALL(0x00341C74u, sub_00341C74); /* call 0x00341C74 */

loc_001AA507: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AA510
 * Original: 0x001AA510 - 0x001AA53F (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001AA510(void)
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

loc_001AA510: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0xC); /* fsub dword ptr [esp + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001AA53C; /* jp: parity */

loc_001AA523: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA53C; /* jne: not equal / not zero */

loc_001AA536: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_001AA53C: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AA540
 * Original: 0x001AA540 - 0x001AA546 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA540(void)
{

loc_001AA540: ;
    eax = MEM32(0x5BB160);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA550
 * Original: 0x001AA550 - 0x001AA556 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA550(void)
{

loc_001AA550: ;
    eax = MEM32(0x5BC444);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA560
 * Original: 0x001AA560 - 0x001AA566 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA560(void)
{

loc_001AA560: ;
    eax = MEM32(0x5BC448);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA570
 * Original: 0x001AA570 - 0x001AA576 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA570(void)
{

loc_001AA570: ;
    eax = MEM32(0x5BB220);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA580
 * Original: 0x001AA580 - 0x001AA5AA (42 bytes, 15 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001AA580(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AA580: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 0xC); /* fadd dword ptr [eax + 0xc] */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AA5B0
 * Original: 0x001AA5B0 - 0x001AA5CF (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001AA5B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AA5B0: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AA5D0
 * Original: 0x001AA5D0 - 0x001AA61F (79 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA5D0(void)
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

loc_001AA5D0: ;
    fp_push(MEMF(ecx)); /* fld float */
    edx = MEM32(esp + 4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA5E3; /* jne: not equal / not zero */

loc_001AA5DF: ;
    eax = MEM32(edx);
    MEM32(ecx) = eax;

loc_001AA5E3: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA5F6; /* jne: not equal / not zero */

loc_001AA5F0: ;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;

loc_001AA5F6: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA609; /* jne: not equal / not zero */

loc_001AA603: ;
    eax = MEM32(edx + 8);
    MEM32(ecx + 8) = eax;

loc_001AA609: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA61C; /* jne: not equal / not zero */

loc_001AA616: ;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;

loc_001AA61C: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AA620
 * Original: 0x001AA620 - 0x001AA66F (79 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA620(void)
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

loc_001AA620: ;
    fp_push(MEMF(ecx)); /* fld float */
    edx = MEM32(esp + 4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001AA633; /* jp: parity */

loc_001AA62F: ;
    eax = MEM32(edx);
    MEM32(ecx) = eax;

loc_001AA633: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001AA646; /* jp: parity */

loc_001AA640: ;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;

loc_001AA646: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001AA659; /* jp: parity */

loc_001AA653: ;
    eax = MEM32(edx + 8);
    MEM32(ecx + 8) = eax;

loc_001AA659: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001AA66C; /* jp: parity */

loc_001AA666: ;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;

loc_001AA66C: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AA670
 * Original: 0x001AA670 - 0x001AA676 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA670(void)
{

loc_001AA670: ;
    eax = MEM32(0x5BB144);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA680
 * Original: 0x001AA680 - 0x001AA686 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA680(void)
{

loc_001AA680: ;
    eax = MEM32(0x5BB170);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA690
 * Original: 0x001AA690 - 0x001AA696 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA690(void)
{

loc_001AA690: ;
    eax = MEM32(0x5BC43C);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA6A0
 * Original: 0x001AA6A0 - 0x001AA6A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA6A0(void)
{

loc_001AA6A0: ;
    eax = MEM32(0x5BB18C);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA6B0
 * Original: 0x001AA6B0 - 0x001AA6B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA6B0(void)
{

loc_001AA6B0: ;
    eax = MEM32(0x5BB198);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA6C0
 * Original: 0x001AA6C0 - 0x001AA6C6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA6C0(void)
{

loc_001AA6C0: ;
    eax = MEM32(0x5BB1C8);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA6D0
 * Original: 0x001AA6D0 - 0x001AA6D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA6D0(void)
{

loc_001AA6D0: ;
    eax = MEM32(0x5BB1CC);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA6E0
 * Original: 0x001AA6E0 - 0x001AA6E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA6E0(void)
{

loc_001AA6E0: ;
    eax = MEM32(0x5BB1D0);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA6F0
 * Original: 0x001AA6F0 - 0x001AA6F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA6F0(void)
{

loc_001AA6F0: ;
    eax = MEM32(0x5BB1DC);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA700
 * Original: 0x001AA700 - 0x001AA706 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA700(void)
{

loc_001AA700: ;
    eax = MEM32(0x5BB1D8);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA710
 * Original: 0x001AA710 - 0x001AA716 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA710(void)
{

loc_001AA710: ;
    eax = MEM32(0x5BB1D4);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA720
 * Original: 0x001AA720 - 0x001AA726 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA720(void)
{

loc_001AA720: ;
    eax = MEM32(0x5BC944);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA730
 * Original: 0x001AA730 - 0x001AA752 (34 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA730: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AA74E; /* je: equal / zero */

loc_001AA739: ;
    eax = MEM32(0x5BC944);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001AA746u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001AA746: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AA74E; /* je: equal / zero */

loc_001AA74A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001AA74E: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA760
 * Original: 0x001AA760 - 0x001AA766 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA760(void)
{

loc_001AA760: ;
    eax = MEM32(0x5BC84C);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA770
 * Original: 0x001AA770 - 0x001AA792 (34 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA770: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AA78E; /* je: equal / zero */

loc_001AA779: ;
    eax = MEM32(0x5BC84C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001AA786u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001AA786: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AA78E; /* je: equal / zero */

loc_001AA78A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001AA78E: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA7A0
 * Original: 0x001AA7A0 - 0x001AA7C2 (34 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA7A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AA7BE; /* je: equal / zero */

loc_001AA7A9: ;
    eax = MEM32(0x5BC8D0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001AA7B6u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001AA7B6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AA7BE; /* je: equal / zero */

loc_001AA7BA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001AA7BE: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA7D0
 * Original: 0x001AA7D0 - 0x001AA7D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA7D0(void)
{

loc_001AA7D0: ;
    eax = MEM32(0x5BB1F4);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA7E0
 * Original: 0x001AA7E0 - 0x001AA7E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA7E0(void)
{

loc_001AA7E0: ;
    eax = MEM32(0x5BB1F0);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA7F0
 * Original: 0x001AA7F0 - 0x001AA7F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA7F0(void)
{

loc_001AA7F0: ;
    eax = MEM32(0x5BB1EC);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA800
 * Original: 0x001AA800 - 0x001AA806 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA800(void)
{

loc_001AA800: ;
    eax = MEM32(0x5BB258);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA810
 * Original: 0x001AA810 - 0x001AA816 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA810(void)
{

loc_001AA810: ;
    eax = MEM32(0x5BB25C);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA820
 * Original: 0x001AA820 - 0x001AA826 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA820(void)
{

loc_001AA820: ;
    eax = MEM32(0x5BB2CC);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA830
 * Original: 0x001AA830 - 0x001AA836 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA830(void)
{

loc_001AA830: ;
    eax = MEM32(0x5BB2C8);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA840
 * Original: 0x001AA840 - 0x001AA846 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA840(void)
{

loc_001AA840: ;
    eax = MEM32(0x5BB2C4);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA850
 * Original: 0x001AA850 - 0x001AA856 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA850(void)
{

loc_001AA850: ;
    eax = MEM32(0x5BB2C0);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA860
 * Original: 0x001AA860 - 0x001AA866 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA860(void)
{

loc_001AA860: ;
    eax = MEM32(0x5BB308);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA870
 * Original: 0x001AA870 - 0x001AA876 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA870(void)
{

loc_001AA870: ;
    eax = MEM32(0x5BB310);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA880
 * Original: 0x001AA880 - 0x001AA886 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA880(void)
{

loc_001AA880: ;
    eax = MEM32(0x5BB328);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA890
 * Original: 0x001AA890 - 0x001AA896 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA890(void)
{

loc_001AA890: ;
    eax = MEM32(0x5BB134);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA8A0
 * Original: 0x001AA8A0 - 0x001AA8C3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA8A0: ;
    eax = MEM32(0x5BB144);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA8C2; /* jne: not equal / not zero */

loc_001AA8A9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AA8B4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001AA8B4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AA8BAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001AA8BA: ;
    esp = esp + 8;
    MEM32(0x5BB144) = eax;

loc_001AA8C2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA8D0
 * Original: 0x001AA8D0 - 0x001AA8DC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA8D0(void)
{

loc_001AA8D0: ;
    PUSH32(esp, 0x1DDDD0);
    PUSH32(esp, 0x001AA8DAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001AA8DA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA8E0
 * Original: 0x001AA8E0 - 0x001AA949 (105 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA8E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA8E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BB148);
    PUSH32(esp, 0x3E226C);
    ecx = edi;
    PUSH32(esp, 0x001AA8F5u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_001AA8F5: ;
    ecx = MEM32(edi + 0x28);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AA900u); RECOMP_ABI_CALL(0x001E8890u, sub_001E8890); /* call 0x001E8890 */

loc_001AA900: ;
    ebx = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x001AA90Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AA90B: ;
    esi = eax;
    PUSH32(esp, 0x001AA912u); RECOMP_ABI_CALL(0x00224BA0u, sub_00224BA0); /* call 0x00224BA0 */

loc_001AA912: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x1C) = 0x5BAACC;
    PUSH32(esp, 0x001AA92Cu); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_001AA92C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001AA946; /* jne: not equal / not zero */

loc_001AA93D: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_001AA946: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA950
 * Original: 0x001AA950 - 0x001AA973 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA950: ;
    eax = MEM32(0x5BB154);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA972; /* jne: not equal / not zero */

loc_001AA959: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AA964u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001AA964: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AA96Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001AA96A: ;
    esp = esp + 8;
    MEM32(0x5BB154) = eax;

loc_001AA972: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA980
 * Original: 0x001AA980 - 0x001AA9A8 (40 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA980: ;
    eax = MEM32(0x5BB158);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA9A7; /* jne: not equal / not zero */

loc_001AA989: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x468058);
    PUSH32(esp, 0x46804C);
    PUSH32(esp, 0x3E6554);
    PUSH32(esp, 0x001AA99Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA99F: ;
    esp = esp + 0x10;
    MEM32(0x5BB158) = eax;

loc_001AA9A7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA9B0
 * Original: 0x001AA9B0 - 0x001AA9D8 (40 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA9B0: ;
    eax = MEM32(0x5BB15C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AA9D7; /* jne: not equal / not zero */

loc_001AA9B9: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x468074);
    PUSH32(esp, 0x468064);
    PUSH32(esp, 0x3E65DC);
    PUSH32(esp, 0x001AA9CFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AA9CF: ;
    esp = esp + 0x10;
    MEM32(0x5BB15C) = eax;

loc_001AA9D7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AA9E0
 * Original: 0x001AA9E0 - 0x001AAA03 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AA9E0: ;
    eax = MEM32(0x5BB164);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AAA02; /* jne: not equal / not zero */

loc_001AA9E9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AA9F4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001AA9F4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AA9FAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001AA9FA: ;
    esp = esp + 8;
    MEM32(0x5BB164) = eax;

loc_001AAA02: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AAA10
 * Original: 0x001AAA10 - 0x001AAA38 (40 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AAA10: ;
    eax = MEM32(0x5BB168);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AAA37; /* jne: not equal / not zero */

loc_001AAA19: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x4680B0);
    PUSH32(esp, 0x468084);
    PUSH32(esp, 0x3E6734);
    PUSH32(esp, 0x001AAA2Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AAA2F: ;
    esp = esp + 0x10;
    MEM32(0x5BB168) = eax;

loc_001AAA37: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AAA40
 * Original: 0x001AAA40 - 0x001AAACB (139 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAA40(void)
{

loc_001AAA40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BB16C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001AAA51u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001AAA51: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x468124);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001AAA61u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001AAA61: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001AAA69u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AAA69: ;
    ebx = eax;
    PUSH32(esp, 0x001AAA70u); RECOMP_ABI_CALL(0x00222C80u, sub_00222C80); /* call 0x00222C80 */

loc_001AAA70: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001AAA7Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AAA7E: ;
    ecx = esp + 0xC;
    ebx = eax;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001AAA94u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_001AAA94: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x1AAA10;
    PUSH32(esp, 0x001AAAA6u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AAAA6: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x001AAAAFu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001AAAAF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46810C);
    PUSH32(esp, 0x4680F4);
    PUSH32(esp, 0x4680DC);
    ecx = esi;
    PUSH32(esp, 0x001AAAC6u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001AAAC6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001AAAD0
 * Original: 0x001AAAD0 - 0x001AABB6 (230 bytes, 76 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAAD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AAAD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BB170);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001AAAE1u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001AAAE1: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x468184);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001AAAF1u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001AAAF1: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001AAAF9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AAAF9: ;
    MEM16(eax + 0x14) = 4;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001AAB0Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AAB0A: ;
    ebp = eax;
    PUSH32(esp, 0x001AAB11u); RECOMP_ABI_CALL(0x00229BE0u, sub_00229BE0); /* call 0x00229BE0 */

loc_001AAB11: ;
    ecx = edi + 2;
    SET_LO8(ebx, 1);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x3C) = eax;
    MEM8(ebp + 0x35) = LO8(ebx);
    MEM8(ebp + 0x40) = LO8(ebx);
    MEM8(ebp + 0x41) = LO8(ebx);
    PUSH32(esp, 0x001AAB2Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AAB2A: ;
    ebp = eax;
    PUSH32(esp, 0x001AAB31u); RECOMP_ABI_CALL(0x0021C510u, sub_0021C510); /* call 0x0021C510 */

loc_001AAB31: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x3C) = eax;
    MEM8(ebp + 0x35) = LO8(ebx);
    MEM8(ebp + 0x40) = LO8(ebx);
    MEM8(ebp + 0x41) = LO8(ebx);
    PUSH32(esp, 0x001AAB48u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AAB48: ;
    MEM8(eax + 0x26) = 0;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001AAB57u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AAB57: ;
    ebp = eax;
    PUSH32(esp, 0x001AAB5Eu); RECOMP_ABI_CALL(0x00229BE0u, sub_00229BE0); /* call 0x00229BE0 */

loc_001AAB5E: ;
    ecx = edi + 5;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x3C) = eax;
    MEM8(ebp + 0x35) = LO8(ebx);
    MEM8(ebp + 0x40) = LO8(ebx);
    MEM8(ebp + 0x41) = LO8(ebx);
    PUSH32(esp, 0x001AAB75u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AAB75: ;
    ebp = eax;
    PUSH32(esp, 0x001AAB7Cu); RECOMP_ABI_CALL(0x00222910u, sub_00222910); /* call 0x00222910 */

loc_001AAB7C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46816C);
    PUSH32(esp, 0x468154);
    PUSH32(esp, 0x46813C);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x24) = 3;
    MEM8(ebp + 0x26) = 0;
    MEM8(ebp + 0x28) = LO8(ebx);
    MEM8(ebp + 0x27) = LO8(ebx);
    PUSH32(esp, 0x001AABA4u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001AABA4: ;
    edx = MEM32(0x5BB170);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx + 0x3C) = 0x1DE8C0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001AABC0
 * Original: 0x001AABC0 - 0x001AABE3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AABC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AABC0: ;
    eax = MEM32(0x5BB178);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AABE2; /* jne: not equal / not zero */

loc_001AABC9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AABD4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001AABD4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AABDAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001AABDA: ;
    esp = esp + 8;
    MEM32(0x5BB178) = eax;

loc_001AABE2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AABF0
 * Original: 0x001AABF0 - 0x001AAC13 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AABF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AABF0: ;
    eax = MEM32(0x5BB180);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AAC12; /* jne: not equal / not zero */

loc_001AABF9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AAC04u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001AAC04: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AAC0Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001AAC0A: ;
    esp = esp + 8;
    MEM32(0x5BB180) = eax;

loc_001AAC12: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AAC20
 * Original: 0x001AAC20 - 0x001AAC26 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAC20(void)
{

loc_001AAC20: ;
    eax = MEM32(0x5BB184);
    esp += 4; return; /* ret */

}

/**
 * sub_001AAC30
 * Original: 0x001AAC30 - 0x001AACAE (126 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001AAC30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AAC30: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BB188);
    PUSH32(esp, 0x3E6854);
    ecx = edi;
    PUSH32(esp, 0x001AAC45u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_001AAC45: ;
    ecx = MEM32(edi + 0x28);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AAC50u); RECOMP_ABI_CALL(0x001E8890u, sub_001E8890); /* call 0x001E8890 */

loc_001AAC50: ;
    ebp = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x001AAC5Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AAC5B: ;
    esi = eax;
    PUSH32(esp, 0x001AAC62u); RECOMP_ABI_CALL(0x00224B80u, sub_00224B80); /* call 0x00224B80 */

loc_001AAC62: ;
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = 0;
    PUSH32(esp, 0x001AAC75u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001AAC75: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = edi;
    MEM8(esi + 0x35) = 1;
    MEM8(esi + 0x40) = 1;
    MEM8(esi + 0x41) = 1;
    MEM32(esi + 0x1C) = 0x5BADD8;
    PUSH32(esp, 0x001AAC91u); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_001AAC91: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001AACAB; /* jne: not equal / not zero */

loc_001AACA2: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_001AACAB: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001AACB0
 * Original: 0x001AACB0 - 0x001AACD3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AACB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AACB0: ;
    eax = MEM32(0x5BB18C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AACD2; /* jne: not equal / not zero */

loc_001AACB9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AACC4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001AACC4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AACCAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001AACCA: ;
    esp = esp + 8;
    MEM32(0x5BB18C) = eax;

loc_001AACD2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AACE0
 * Original: 0x001AACE0 - 0x001AAD08 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AACE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AACE0: ;
    eax = MEM32(0x5BB190);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AAD07; /* jne: not equal / not zero */

loc_001AACE9: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x4681A4);
    PUSH32(esp, 0x46819C);
    PUSH32(esp, 0x3E6894);
    PUSH32(esp, 0x001AACFFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AACFF: ;
    esp = esp + 0x10;
    MEM32(0x5BB190) = eax;

loc_001AAD07: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AAD10
 * Original: 0x001AAD10 - 0x001AAD38 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAD10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AAD10: ;
    eax = MEM32(0x5BB194);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AAD37; /* jne: not equal / not zero */

loc_001AAD19: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x4681B4);
    PUSH32(esp, 0x4681AC);
    PUSH32(esp, 0x3E68F4);
    PUSH32(esp, 0x001AAD2Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AAD2F: ;
    esp = esp + 0x10;
    MEM32(0x5BB194) = eax;

loc_001AAD37: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AAD40
 * Original: 0x001AAD40 - 0x001AAD68 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAD40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AAD40: ;
    eax = MEM32(0x5BB1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AAD67; /* jne: not equal / not zero */

loc_001AAD49: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x4681C8);
    PUSH32(esp, 0x4681BC);
    PUSH32(esp, 0x3E6968);
    PUSH32(esp, 0x001AAD5Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AAD5F: ;
    esp = esp + 0x10;
    MEM32(0x5BB1A4) = eax;

loc_001AAD67: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AAD70
 * Original: 0x001AAD70 - 0x001AAD93 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AAD70: ;
    eax = MEM32(0x5BB1AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AAD92; /* jne: not equal / not zero */

loc_001AAD79: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AAD84u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001AAD84: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AAD8Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001AAD8A: ;
    esp = esp + 8;
    MEM32(0x5BB1AC) = eax;

loc_001AAD92: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AADA0
 * Original: 0x001AADA0 - 0x001AADC8 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AADA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AADA0: ;
    eax = MEM32(0x5BB1B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AADC7; /* jne: not equal / not zero */

loc_001AADA9: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x4681E4);
    PUSH32(esp, 0x4681D4);
    PUSH32(esp, 0x3E6A08);
    PUSH32(esp, 0x001AADBFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AADBF: ;
    esp = esp + 0x10;
    MEM32(0x5BB1B0) = eax;

loc_001AADC7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AADD0
 * Original: 0x001AADD0 - 0x001AADD6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AADD0(void)
{

loc_001AADD0: ;
    eax = MEM32(0x5BB1B4);
    esp += 4; return; /* ret */

}

/**
 * sub_001AADE0
 * Original: 0x001AADE0 - 0x001AAFB3 (467 bytes, 146 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AADE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AADE0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BB1B4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001AADF4u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001AADF4: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x46826C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001AAE04u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001AAE04: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001AAE0Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AAE0C: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    ecx = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x001AAE22u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_001AAE22: ;
    edx = MEM32(esp + 0x14);
    eax = edi + 1;
    ebp = 0x1AADA0;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(edx + 0x34) = ebp;
    PUSH32(esp, 0x001AAE39u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AAE39: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x001AAE4Du); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_001AAE4D: ;
    edx = MEM32(esp + 0x10);
    eax = edi + 2;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(edx + 0x34) = ebp;
    PUSH32(esp, 0x001AAE5Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AAE5F: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x001AAE73u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_001AAE73: ;
    edx = MEM32(esp + 0x10);
    eax = edi + 3;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(edx + 0x34) = ebp;
    PUSH32(esp, 0x001AAE85u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AAE85: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x001AAE99u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_001AAE99: ;
    edx = MEM32(esp + 0x10);
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(edx + 0x34) = ebp;
    PUSH32(esp, 0x001AAEABu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AAEAB: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x001AAEBFu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_001AAEBF: ;
    edx = MEM32(esp + 0x10);
    eax = edi + 5;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(edx + 0x34) = ebp;
    PUSH32(esp, 0x001AAED1u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AAED1: ;
    ecx = esp + 0x14;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x001AAEE5u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_001AAEE5: ;
    edx = MEM32(esp + 0x10);
    eax = edi + 6;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(edx + 0x34) = 0x1AA410;
    PUSH32(esp, 0x001AAEFBu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AAEFB: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = 1;
    PUSH32(esp, 0x001AAF13u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_001AAF13: ;
    edx = MEM32(esp + 0x10);
    eax = edi + 7;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(edx + 0x34) = 0x1AACE0;
    PUSH32(esp, 0x001AAF29u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AAF29: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x001AAF3Du); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_001AAF3D: ;
    edx = MEM32(esp + 0x10);
    eax = edi + 8;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(edx + 0x34) = 0x1AAD10;
    PUSH32(esp, 0x001AAF53u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AAF53: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x001AAF67u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_001AAF67: ;
    edx = MEM32(esp + 0x10);
    eax = edi + 9;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(edx + 0x34) = ebp;
    PUSH32(esp, 0x001AAF79u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AAF79: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x001AAF8Du); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_001AAF8D: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x468244);
    PUSH32(esp, 0x46821C);
    PUSH32(esp, 0x4681F4);
    ecx = esi;
    MEM32(edx + 0x34) = ebp;
    PUSH32(esp, 0x001AAFABu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001AAFAB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001AAFC0
 * Original: 0x001AAFC0 - 0x001AAFE8 (40 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AAFC0: ;
    eax = MEM32(0x5BB1B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AAFE7; /* jne: not equal / not zero */

loc_001AAFC9: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x4682A4);
    PUSH32(esp, 0x468294);
    PUSH32(esp, 0x3E6B80);
    PUSH32(esp, 0x001AAFDFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AAFDF: ;
    esp = esp + 0x10;
    MEM32(0x5BB1B8) = eax;

loc_001AAFE7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AAFF0
 * Original: 0x001AAFF0 - 0x001AB018 (40 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AAFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AAFF0: ;
    eax = MEM32(0x5BB1C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AB017; /* jne: not equal / not zero */

loc_001AAFF9: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x4682C0);
    PUSH32(esp, 0x4682B4);
    PUSH32(esp, 0x3E6C5C);
    PUSH32(esp, 0x001AB00Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AB00F: ;
    esp = esp + 0x10;
    MEM32(0x5BB1C0) = eax;

loc_001AB017: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AB020
 * Original: 0x001AB020 - 0x001AB048 (40 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB020: ;
    eax = MEM32(0x5BB1C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AB047; /* jne: not equal / not zero */

loc_001AB029: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x4682D8);
    PUSH32(esp, 0x4682CC);
    PUSH32(esp, 0x3E6CE8);
    PUSH32(esp, 0x001AB03Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AB03F: ;
    esp = esp + 0x10;
    MEM32(0x5BB1C4) = eax;

loc_001AB047: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AB050
 * Original: 0x001AB050 - 0x001AB073 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB050: ;
    eax = MEM32(0x5BB1D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AB072; /* jne: not equal / not zero */

loc_001AB059: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB064u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001AB064: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB06Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001AB06A: ;
    esp = esp + 8;
    MEM32(0x5BB1D0) = eax;

loc_001AB072: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AB080
 * Original: 0x001AB080 - 0x001AB08C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB080(void)
{

loc_001AB080: ;
    PUSH32(esp, 0x1DB2A0);
    PUSH32(esp, 0x001AB08Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001AB08A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001AB090
 * Original: 0x001AB090 - 0x001AB0DD (77 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB090(void)
{

loc_001AB090: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BB1E0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001AB09Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001AB09F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4682F0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001AB0AFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001AB0AF: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001AB0B7u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB0B7: ;
    PUSH32(esp, 0x3C806C);
    ecx = eax;
    PUSH32(esp, 0x001AB0C3u); RECOMP_ABI_CALL(0x00217FA0u, sub_00217FA0); /* call 0x00217FA0 */

loc_001AB0C3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4682EC);
    PUSH32(esp, 0x4682E8);
    PUSH32(esp, 0x4682E4);
    ecx = esi;
    PUSH32(esp, 0x001AB0DAu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001AB0DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001AB0E0
 * Original: 0x001AB0E0 - 0x001AB103 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB0E0: ;
    eax = MEM32(0x5BB1F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AB102; /* jne: not equal / not zero */

loc_001AB0E9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB0F4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001AB0F4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB0FAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001AB0FA: ;
    esp = esp + 8;
    MEM32(0x5BB1F4) = eax;

loc_001AB102: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AB110
 * Original: 0x001AB110 - 0x001AB133 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB110: ;
    eax = MEM32(0x5BB1FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AB132; /* jne: not equal / not zero */

loc_001AB119: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB124u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001AB124: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB12Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001AB12A: ;
    esp = esp + 8;
    MEM32(0x5BB1FC) = eax;

loc_001AB132: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AB140
 * Original: 0x001AB140 - 0x001AB168 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB140: ;
    eax = MEM32(0x5BB200);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AB167; /* jne: not equal / not zero */

loc_001AB149: ;
    PUSH32(esp, 0x16);
    PUSH32(esp, 0x468350);
    PUSH32(esp, 0x4682F8);
    PUSH32(esp, 0x3E6EF8);
    PUSH32(esp, 0x001AB15Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AB15F: ;
    esp = esp + 0x10;
    MEM32(0x5BB200) = eax;

loc_001AB167: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AB170
 * Original: 0x001AB170 - 0x001AB1E7 (119 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB170(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB170: ;
    eax = MEM32(0x5BB208);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AB1E6; /* jne: not equal / not zero */

loc_001AB179: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB184u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001AB184: ;
    ecx = MEM32(0x5BB204);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB193u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_001AB193: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(0x5BB208) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001AB1E6; /* je: equal / zero */

loc_001AB19C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB1A2u); RECOMP_ABI_CALL(0x001F7760u, sub_001F7760); /* call 0x001F7760 */

loc_001AB1A2: ;
    ecx = eax;
    PUSH32(esp, 0x001AB1A9u); RECOMP_ABI_CALL(0x002086E0u, sub_002086E0); /* call 0x002086E0 */

loc_001AB1A9: ;
    eax = MEM32(0x5BB208);
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001AB1C6; /* jne: not equal / not zero */

loc_001AB1C1: ;
    PUSH32(esp, 0x001AB1C6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001AB1C6: ;
    PUSH32(esp, 0x001AB1CBu); RECOMP_ABI_CALL(0x001F7760u, sub_001F7760); /* call 0x001F7760 */

loc_001AB1CB: ;
    SET_LO16(ecx, MEM16(eax + 0xC));
    edx = MEM32(0x5BB208);
    SET_LO16(ecx, LO16(ecx) - 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(edx + 0x12) = LO16(ecx);
    ecx = MEM32(0x5BB208);
    g_seh_ebp = ebp; sub_001E9E90(); return; /* tail jmp 0x001E9E90 */

loc_001AB1E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AB1F0
 * Original: 0x001AB1F0 - 0x001AB240 (80 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB1F0(void)
{

loc_001AB1F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BB210);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001AB200u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001AB200: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x4683C0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001AB210u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001AB210: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001AB21Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB21B: ;
    ebx = eax;
    PUSH32(esp, 0x001AB222u); RECOMP_ABI_CALL(0x001F3260u, sub_001F3260); /* call 0x001F3260 */

loc_001AB222: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4683B8);
    PUSH32(esp, 0x4683B0);
    PUSH32(esp, 0x4683A8);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x001AB23Cu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001AB23C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001AB240
 * Original: 0x001AB240 - 0x001AB28D (77 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB240(void)
{

loc_001AB240: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BB21C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001AB24Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001AB24F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x4683E0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001AB25Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001AB25F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001AB267u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB267: ;
    PUSH32(esp, 0x3C806C);
    ecx = eax;
    PUSH32(esp, 0x001AB273u); RECOMP_ABI_CALL(0x00217FA0u, sub_00217FA0); /* call 0x00217FA0 */

loc_001AB273: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4683D8);
    PUSH32(esp, 0x4683D0);
    PUSH32(esp, 0x4683C8);
    ecx = esi;
    PUSH32(esp, 0x001AB28Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001AB28A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001AB290
 * Original: 0x001AB290 - 0x001AB2B3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB290: ;
    eax = MEM32(0x5BB224);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AB2B2; /* jne: not equal / not zero */

loc_001AB299: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB2A4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001AB2A4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB2AAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001AB2AA: ;
    esp = esp + 8;
    MEM32(0x5BB224) = eax;

loc_001AB2B2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AB2C0
 * Original: 0x001AB2C0 - 0x001AB2E3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB2C0: ;
    eax = MEM32(0x5BB230);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AB2E2; /* jne: not equal / not zero */

loc_001AB2C9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB2D4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001AB2D4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB2DAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001AB2DA: ;
    esp = esp + 8;
    MEM32(0x5BB230) = eax;

loc_001AB2E2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AB2F0
 * Original: 0x001AB2F0 - 0x001AB34E (94 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB2F0(void)
{

loc_001AB2F0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BB234);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001AB2FFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001AB2FF: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x468400);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001AB30Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001AB30F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001AB317u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB317: ;
    ecx = MEM32(0x5BC554);
    edx = edi + 1;
    MEM32(eax + 0x38) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001AB32Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB32B: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x001AB334u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001AB334: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4683F8);
    PUSH32(esp, 0x4683F0);
    PUSH32(esp, 0x4683E8);
    ecx = esi;
    PUSH32(esp, 0x001AB34Bu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001AB34B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001AB350
 * Original: 0x001AB350 - 0x001AB373 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB350: ;
    eax = MEM32(0x5BB238);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AB372; /* jne: not equal / not zero */

loc_001AB359: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB364u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001AB364: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB36Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001AB36A: ;
    esp = esp + 8;
    MEM32(0x5BB238) = eax;

loc_001AB372: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AB380
 * Original: 0x001AB380 - 0x001AB3B9 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB380(void)
{

loc_001AB380: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BB23C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001AB38Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001AB38F: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x46842C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001AB39Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001AB39F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x468420);
    PUSH32(esp, 0x468414);
    PUSH32(esp, 0x468408);
    ecx = esi;
    PUSH32(esp, 0x001AB3B6u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001AB3B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001AB3C0
 * Original: 0x001AB3C0 - 0x001AB3C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB3C0(void)
{

loc_001AB3C0: ;
    eax = MEM32(0x5BB240);
    esp += 4; return; /* ret */

}

/**
 * sub_001AB3D0
 * Original: 0x001AB3D0 - 0x001AB3D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB3D0(void)
{

loc_001AB3D0: ;
    eax = MEM32(0x5BB244);
    esp += 4; return; /* ret */

}

/**
 * sub_001AB3E0
 * Original: 0x001AB3E0 - 0x001AB3E6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB3E0(void)
{

loc_001AB3E0: ;
    eax = MEM32(0x5BB248);
    esp += 4; return; /* ret */

}

/**
 * sub_001AB3F0
 * Original: 0x001AB3F0 - 0x001AB3F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB3F0(void)
{

loc_001AB3F0: ;
    eax = MEM32(0x5BB250);
    esp += 4; return; /* ret */

}

/**
 * sub_001AB400
 * Original: 0x001AB400 - 0x001AB439 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB400(void)
{

loc_001AB400: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BB26C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001AB40Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001AB40F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x468444);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001AB41Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001AB41F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x468440);
    PUSH32(esp, 0x46843C);
    PUSH32(esp, 0x468438);
    ecx = esi;
    PUSH32(esp, 0x001AB436u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001AB436: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001AB440
 * Original: 0x001AB440 - 0x001AB446 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB440(void)
{

loc_001AB440: ;
    eax = MEM32(0x5BB270);
    esp += 4; return; /* ret */

}

/**
 * sub_001AB450
 * Original: 0x001AB450 - 0x001AB51A (202 bytes, 71 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB450(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB450: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BB270);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001AB462u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001AB462: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x46849C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001AB472u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001AB472: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001AB47Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB47A: ;
    ebx = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001AB490u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_001AB490: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x221530;
    PUSH32(esp, 0x001AB4A2u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB4A2: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x001AB4ABu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001AB4AB: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001AB4B6u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB4B6: ;
    ebx = eax;
    PUSH32(esp, 0x001AB4BDu); RECOMP_ABI_CALL(0x0021C510u, sub_0021C510); /* call 0x0021C510 */

loc_001AB4BD: ;
    MEM32(ebx + 0x3C) = eax;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001AB4CBu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB4CB: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x001AB4D4u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001AB4D4: ;
    ecx = edi + 5;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001AB4DFu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB4DF: ;
    ebp = eax;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0x001AB4EAu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001AB4EA: ;
    edx = edi + 6;
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x001AB4FAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB4FA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x468480);
    PUSH32(esp, 0x468464);
    PUSH32(esp, 0x468448);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x001AB514u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001AB514: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001AB520
 * Original: 0x001AB520 - 0x001AB543 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB520: ;
    eax = MEM32(0x5BB274);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AB542; /* jne: not equal / not zero */

loc_001AB529: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB534u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001AB534: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB53Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001AB53A: ;
    esp = esp + 8;
    MEM32(0x5BB274) = eax;

loc_001AB542: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AB550
 * Original: 0x001AB550 - 0x001AB573 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB550: ;
    eax = MEM32(0x5BB27C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AB572; /* jne: not equal / not zero */

loc_001AB559: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB564u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001AB564: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB56Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001AB56A: ;
    esp = esp + 8;
    MEM32(0x5BB27C) = eax;

loc_001AB572: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AB580
 * Original: 0x001AB580 - 0x001AB5E2 (98 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB580(void)
{

loc_001AB580: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BB27C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001AB591u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001AB591: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4684C4);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001AB5A1u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001AB5A1: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001AB5A9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB5A9: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001AB5BFu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_001AB5BF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4684C0);
    PUSH32(esp, 0x4684BC);
    PUSH32(esp, 0x4684B8);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x221530;
    PUSH32(esp, 0x001AB5DDu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001AB5DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001AB5F0
 * Original: 0x001AB5F0 - 0x001AB67C (140 bytes, 48 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB5F0(void)
{

loc_001AB5F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BB280);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001AB600u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001AB600: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x468540);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001AB610u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001AB610: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001AB618u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB618: ;
    ebx = eax;
    PUSH32(esp, 0x001AB61Fu); RECOMP_ABI_CALL(0x00222AF0u, sub_00222AF0); /* call 0x00222AF0 */

loc_001AB61F: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001AB62Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB62D: ;
    ebx = eax;
    PUSH32(esp, 0x001AB634u); RECOMP_ABI_CALL(0x0021C510u, sub_0021C510); /* call 0x0021C510 */

loc_001AB634: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x3C) = eax;
    PUSH32(esp, 0x001AB642u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB642: ;
    ebx = eax;
    PUSH32(esp, 0x001AB649u); RECOMP_ABI_CALL(0x0021C510u, sub_0021C510); /* call 0x0021C510 */

loc_001AB649: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebx + 0x3C) = eax;
    PUSH32(esp, 0x001AB657u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB657: ;
    ebx = eax;
    PUSH32(esp, 0x001AB65Eu); RECOMP_ABI_CALL(0x0021C510u, sub_0021C510); /* call 0x0021C510 */

loc_001AB65E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x468518);
    PUSH32(esp, 0x4684F0);
    PUSH32(esp, 0x4684C8);
    ecx = esi;
    MEM32(ebx + 0x3C) = eax;
    PUSH32(esp, 0x001AB678u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001AB678: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001AB680
 * Original: 0x001AB680 - 0x001AB6CD (77 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB680(void)
{

loc_001AB680: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BB284);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001AB690u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001AB690: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x468574);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001AB6A0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001AB6A0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001AB6A8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB6A8: ;
    ebx = eax;
    PUSH32(esp, 0x001AB6AFu); RECOMP_ABI_CALL(0x00222AF0u, sub_00222AF0); /* call 0x00222AF0 */

loc_001AB6AF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x468570);
    PUSH32(esp, 0x46856C);
    PUSH32(esp, 0x468568);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x001AB6C9u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001AB6C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001AB6D0
 * Original: 0x001AB6D0 - 0x001AB747 (119 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB6D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB6D0: ;
    eax = MEM32(0x5BB2DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AB746; /* jne: not equal / not zero */

loc_001AB6D9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB6E4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001AB6E4: ;
    ecx = MEM32(0x5BB2D8);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB6F3u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_001AB6F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(0x5BB2DC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001AB746; /* je: equal / zero */

loc_001AB6FC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB702u); RECOMP_ABI_CALL(0x001F7760u, sub_001F7760); /* call 0x001F7760 */

loc_001AB702: ;
    ecx = eax;
    PUSH32(esp, 0x001AB709u); RECOMP_ABI_CALL(0x002086E0u, sub_002086E0); /* call 0x002086E0 */

loc_001AB709: ;
    eax = MEM32(0x5BB2DC);
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001AB726; /* jne: not equal / not zero */

loc_001AB721: ;
    PUSH32(esp, 0x001AB726u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001AB726: ;
    PUSH32(esp, 0x001AB72Bu); RECOMP_ABI_CALL(0x001F7760u, sub_001F7760); /* call 0x001F7760 */

loc_001AB72B: ;
    SET_LO16(ecx, MEM16(eax + 0xC));
    edx = MEM32(0x5BB2DC);
    SET_LO16(ecx, LO16(ecx) - 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(edx + 0x12) = LO16(ecx);
    ecx = MEM32(0x5BB2DC);
    g_seh_ebp = ebp; sub_001E9E90(); return; /* tail jmp 0x001E9E90 */

loc_001AB746: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AB750
 * Original: 0x001AB750 - 0x001AB778 (40 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AB750: ;
    eax = MEM32(0x5BB2F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AB777; /* jne: not equal / not zero */

loc_001AB759: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x46858C);
    PUSH32(esp, 0x468578);
    PUSH32(esp, 0x3E7284);
    PUSH32(esp, 0x001AB76Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001AB76F: ;
    esp = esp + 0x10;
    MEM32(0x5BB2F0) = eax;

loc_001AB777: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AB780
 * Original: 0x001AB780 - 0x001AB78C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB780(void)
{

loc_001AB780: ;
    PUSH32(esp, 0x1DCD80);
    PUSH32(esp, 0x001AB78Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001AB78A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001AB790
 * Original: 0x001AB790 - 0x001ABA23 (659 bytes, 225 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB790(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB790: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BB2FC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001AB7A2u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001AB7A2: ;
    PUSH32(esp, 0x16);
    PUSH32(esp, 0x4686A8);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001AB7B2u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001AB7B2: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001AB7BDu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB7BD: ;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x001AB7C7u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001AB7C7: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001AB7D2u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB7D2: ;
    ebp = eax;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x001AB7DCu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001AB7DC: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x001AB7EAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB7EA: ;
    ebp = eax;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x001AB7F4u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001AB7F4: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x001AB802u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB802: ;
    ebp = eax;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x001AB80Cu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001AB80C: ;
    ecx = edi + 5;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x001AB81Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB81A: ;
    ebp = eax;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x001AB824u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001AB824: ;
    edx = edi + 6;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x001AB832u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB832: ;
    ebp = eax;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x001AB83Cu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001AB83C: ;
    eax = edi + 7;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x001AB84Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB84A: ;
    ecx = edi + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x001AB858u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB858: ;
    SET_LO8(ecx, 3);
    edx = edi + 9;
    MEM8(eax + 0x28) = LO8(ecx);
    MEM8(eax + 0x27) = LO8(ecx);
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001AB86Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB86E: ;
    ebp = eax;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x001AB878u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001AB878: ;
    eax = edi + 0xA;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x001AB886u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB886: ;
    ecx = edi + 0xB;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x001AB894u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB894: ;
    ebp = eax;
    eax = MEM32(0x5BB2BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AB8B9; /* jne: not equal / not zero */

loc_001AB89F: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001AB8ABu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001AB8AB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB8B1u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001AB8B1: ;
    esp = esp + 8;
    MEM32(0x5BB2BC) = eax;

loc_001AB8B9: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x3C) = LO8(ebx);
    MEM8(ebp + 0x26) = LO8(ebx);
    MEM8(ebp + 0x28) = 1;
    MEM8(ebp + 0x27) = 1;
    PUSH32(esp, 0x001AB8D5u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB8D5: ;
    ebp = eax;
    eax = MEM32(0x5BB2E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AB8FA; /* jne: not equal / not zero */

loc_001AB8E0: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AB8ECu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001AB8EC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB8F2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001AB8F2: ;
    esp = esp + 8;
    MEM32(0x5BB2E4) = eax;

loc_001AB8FA: ;
    edx = edi + 0xD;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x001AB90Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB90F: ;
    ebp = eax;
    eax = MEM32(0x5BB164);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AB933; /* jne: not equal / not zero */

loc_001AB91A: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB925u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001AB925: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AB92Bu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001AB92B: ;
    esp = esp + 8;
    MEM32(0x5BB164) = eax;

loc_001AB933: ;
    ecx = edi + 0xE;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x001AB944u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB944: ;
    edx = edi + 0xF;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x001AB952u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB952: ;
    ebp = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x14) = 1;
    PUSH32(esp, 0x001AB968u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_001AB968: ;
    ecx = edi + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    MEM32(ebp + 0x34) = 0x1AB750;
    PUSH32(esp, 0x001AB97Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB97D: ;
    ebp = eax;
    PUSH32(esp, 0x001AB984u); RECOMP_ABI_CALL(0x002459A0u, sub_002459A0); /* call 0x002459A0 */

loc_001AB984: ;
    edx = edi + 0x11;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x3C) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x001AB995u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB995: ;
    ebp = eax;
    PUSH32(esp, 0x001AB99Cu); RECOMP_ABI_CALL(0x002459A0u, sub_002459A0); /* call 0x002459A0 */

loc_001AB99C: ;
    MEM32(ebp + 0x3C) = eax;
    eax = edi + 0x12;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x001AB9ADu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB9AD: ;
    ebp = eax;
    PUSH32(esp, 0x001AB9B4u); RECOMP_ABI_CALL(0x00222F00u, sub_00222F00); /* call 0x00222F00 */

loc_001AB9B4: ;
    ecx = edi + 0x13;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x001AB9C5u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB9C5: ;
    ebp = eax;
    PUSH32(esp, 0x001AB9CCu); RECOMP_ABI_CALL(0x00222F50u, sub_00222F50); /* call 0x00222F50 */

loc_001AB9CC: ;
    edx = edi + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x001AB9DDu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB9DD: ;
    MEM8(eax + 0x26) = LO8(ebx);
    eax = edi + 0x15;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001AB9EBu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001AB9EB: ;
    ebp = eax;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0x001AB9F6u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001AB9F6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x468650);
    PUSH32(esp, 0x4685F8);
    PUSH32(esp, 0x4685A0);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x001ABA10u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001ABA10: ;
    ecx = MEM32(0x5BB2FC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 0x3C) = 0x1DDB70;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001ABA30
 * Original: 0x001ABA30 - 0x001ABA3C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABA30(void)
{

loc_001ABA30: ;
    PUSH32(esp, 0x1DDE60);
    PUSH32(esp, 0x001ABA3Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001ABA3A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001ABA40
 * Original: 0x001ABA40 - 0x001ABA68 (40 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ABA40: ;
    eax = MEM32(0x5BB30C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001ABA67; /* jne: not equal / not zero */

loc_001ABA49: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x468740);
    PUSH32(esp, 0x468700);
    PUSH32(esp, 0x3E7638);
    PUSH32(esp, 0x001ABA5Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001ABA5F: ;
    esp = esp + 0x10;
    MEM32(0x5BB30C) = eax;

loc_001ABA67: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001ABA70
 * Original: 0x001ABA70 - 0x001ABAEB (123 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ABA70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BB310);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001ABA80u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001ABA80: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x46878C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001ABA90u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001ABA90: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001ABA98u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001ABA98: ;
    ebx = eax;
    eax = MEM32(0x5BB2BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001ABABC; /* jne: not equal / not zero */

loc_001ABAA3: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ABAAEu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001ABAAE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ABAB4u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001ABAB4: ;
    esp = esp + 8;
    MEM32(0x5BB2BC) = eax;

loc_001ABABC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x468788);
    PUSH32(esp, 0x468784);
    PUSH32(esp, 0x468780);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x3C) = 0;
    PUSH32(esp, 0x001ABADAu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001ABADA: ;
    ecx = MEM32(0x5BB310);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x3C) = 0x1DE920;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001ABAF0
 * Original: 0x001ABAF0 - 0x001ABAF6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABAF0(void)
{

loc_001ABAF0: ;
    eax = MEM32(0x5BB320);
    esp += 4; return; /* ret */

}

/**
 * sub_001ABB00
 * Original: 0x001ABB00 - 0x001ABB7B (123 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ABB00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BB328);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001ABB10u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001ABB10: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x46879C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001ABB20u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001ABB20: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001ABB28u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001ABB28: ;
    ebx = eax;
    eax = MEM32(0x5BB2BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001ABB4C; /* jne: not equal / not zero */

loc_001ABB33: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ABB3Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001ABB3E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ABB44u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001ABB44: ;
    esp = esp + 8;
    MEM32(0x5BB2BC) = eax;

loc_001ABB4C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x468798);
    PUSH32(esp, 0x468794);
    PUSH32(esp, 0x468790);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x3C) = 0;
    PUSH32(esp, 0x001ABB6Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001ABB6A: ;
    ecx = MEM32(0x5BB328);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x3C) = 0x1DE950;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001ABB80
 * Original: 0x001ABB80 - 0x001ABBEE (110 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ABB80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BB36C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001ABB90u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001ABB90: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4687AC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001ABBA0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001ABBA0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001ABBA8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001ABBA8: ;
    ebx = eax;
    eax = MEM32(0x5BB334);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001ABBCC; /* jne: not equal / not zero */

loc_001ABBB3: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ABBBEu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001ABBBE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ABBC4u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001ABBC4: ;
    esp = esp + 8;
    MEM32(0x5BB334) = eax;

loc_001ABBCC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4687A8);
    PUSH32(esp, 0x4687A4);
    PUSH32(esp, 0x4687A0);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x3C) = 0;
    PUSH32(esp, 0x001ABBEAu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001ABBEA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001ABBF0
 * Original: 0x001ABBF0 - 0x001ABC5E (110 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ABBF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BB370);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001ABC00u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001ABC00: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4687BC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001ABC10u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001ABC10: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001ABC18u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001ABC18: ;
    ebx = eax;
    eax = MEM32(0x5BB334);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001ABC3C; /* jne: not equal / not zero */

loc_001ABC23: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ABC2Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001ABC2E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ABC34u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001ABC34: ;
    esp = esp + 8;
    MEM32(0x5BB334) = eax;

loc_001ABC3C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4687B8);
    PUSH32(esp, 0x4687B4);
    PUSH32(esp, 0x4687B0);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x3C) = 0;
    PUSH32(esp, 0x001ABC5Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001ABC5A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001ABC60
 * Original: 0x001ABC60 - 0x001ABEBC (604 bytes, 89 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ABC60: ;
    esp = esp - 0x158;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x160);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x78) = esi;
    MEM32(esp + 0x7C) = 1;
    MEM32(esp + 0x80) = 2;
    MEM32(esp + 0x84) = 3;
    MEM32(esp + 0x88) = 4;
    MEM32(esp + 0x8C) = 5;
    MEM32(esp + 0x90) = 6;
    MEM32(esp + 0x94) = 7;
    MEM32(esp + 0x98) = 8;
    MEM32(esp + 0x9C) = 9;
    MEM32(esp + 0xA0) = 0xA;
    MEM32(esp + 0xA4) = 0xB;
    MEM32(esp + 0xA8) = 0xD;
    MEM32(esp + 0xAC) = 0xE;
    MEM32(esp + 0xB0) = 0xF;
    MEM32(esp + 0xB4) = 0x10;
    MEM32(esp + 0xB8) = 0x11;
    MEM32(esp + 0xBC) = 0x12;
    MEM32(esp + 0xC0) = 0x13;
    MEM32(esp + 0xC4) = 0x14;
    MEM32(esp + 0xC8) = 0x15;
    MEM32(esp + 0xCC) = 0x16;
    MEM32(esp + 0xD0) = 0x17;
    MEM32(esp + 0xD4) = 0x18;
    MEM32(esp + 0xD8) = 0x19;
    MEM32(esp + 0xDC) = 0x1A;
    MEM32(esp + 0xE0) = 0x1B;
    MEM32(esp + 0xC) = 0x3E6470;
    MEM32(esp + 0x10) = 0x3E6450;
    MEM32(esp + 0x14) = 0x3E642C;
    MEM32(esp + 0x18) = 0x3E6408;
    MEM32(esp + 0x1C) = 0x3E63E4;
    MEM32(esp + 0x20) = 0x3E63C0;
    MEM32(esp + 0x24) = 0x3E6390;
    MEM32(esp + 0x28) = 0x3E636C;
    MEM32(esp + 0x2C) = 0x3E6344;
    MEM32(esp + 0x30) = 0x3E6324;
    MEM32(esp + 0x34) = 0x3E62FC;
    MEM32(esp + 0x38) = 0x3E62D4;
    MEM32(esp + 0x3C) = 0x3E6274;
    MEM32(esp + 0x40) = 0x3E6240;
    MEM32(esp + 0x44) = 0x3E620C;
    MEM32(esp + 0x48) = 0x3E61DC;
    MEM32(esp + 0x4C) = 0x3E61A0;
    MEM32(esp + 0x50) = 0x3E6170;
    MEM32(esp + 0x54) = 0x3E6140;
    MEM32(esp + 0x58) = 0x3E6110;
    MEM32(esp + 0x5C) = 0x3E60EC;
    MEM32(esp + 0x60) = 0x3E60C0;
    MEM32(esp + 0x64) = 0x3E609C;
    MEM32(esp + 0x68) = 0x3E6058;
    MEM32(esp + 0x6C) = 0x3E6010;
    MEM32(esp + 0x70) = 0x3E5FC8;
    MEM32(esp + 0x74) = 0x3E5F80;
    goto loc_001ABE70;

    /* nop */

loc_001ABE70: ;
    ecx = MEM32(esp + esi + 0x78);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x001ABE7Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ABE7C: ;
    PUSH32(esp, eax);
    edx = esp + 0xE8;
    PUSH32(esp, 0x3CB224);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001ABE8Fu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_001ABE8F: ;
    ecx = MEM32(esp + esi + 0x18);
    esp = esp + 0xC;
    eax = esp + 0xE4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 8);
    ecx = ebx;
    PUSH32(esp, 0x001ABEA8u); RECOMP_ABI_CALL(0x00220A00u, sub_00220A00); /* call 0x00220A00 */

loc_001ABEA8: ;
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ABE70; /* jl: less (signed <) */

loc_001ABEB0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x158;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ABEC0
 * Original: 0x001ABEC0 - 0x001ABEC5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABEC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ABEC0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x5C)); return; /* indirect tail jmp */

}

/**
 * sub_001ABED0
 * Original: 0x001ABED0 - 0x001ABF67 (151 bytes, 43 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABED0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ABED0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10000 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001ABF31; /* jg: greater (signed >) */

loc_001ABEDB: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001ABF4F; /* je: equal / zero */

loc_001ABEDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001ABF38; /* ja: above (unsigned >) */

loc_001ABEE2: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1ABF68); /* switch: 9 entries, 4 targets */
    if (_jt == 0x001ABEE9u) goto loc_001ABEE9;
    if (_jt == 0x001ABF01u) goto loc_001ABF01;
    if (_jt == 0x001ABF19u) goto loc_001ABF19;
    if (_jt == 0x001ABF4Fu) goto loc_001ABF4F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001ABEE9: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    MEM32(eax) = 2;
    eax = MEM32(eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 8));
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

loc_001ABF01: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    MEM32(eax) = 3;
    eax = MEM32(eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 8));
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

loc_001ABF19: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    MEM32(eax) = 4;
    eax = MEM32(eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 8));
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

loc_001ABF31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10001) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10001 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ABF4F; /* je: equal / zero */

loc_001ABF38: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = 0xFFFFFFFEu;
    MEM32(ecx) = 0xFFFFFFFEu;
    eax = MEM32(eax);
    esp += 4; return; /* ret */

loc_001ABF4F: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    MEM32(eax) = 1;
    eax = MEM32(eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 8));
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001ABF90
 * Original: 0x001ABF90 - 0x001AC006 (118 bytes, 45 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ABF90: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AC001; /* je: equal / zero */

loc_001ABF9C: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ABFB0; /* je: equal / zero */

loc_001ABFA3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ABFA9u); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_001ABFA9: ;
    MEM32(esi + 0x14) = 0;

loc_001ABFB0: ;
    eax = MEM32(ebx + 8);
    MEM32(esi + 8) = eax;
    ecx = MEM32(ebx + 0xC);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(ebx + 0x10);
    MEM32(esi + 0x10) = edx;
    eax = MEM32(ebx + 0x18);
    MEM32(esi + 0x18) = eax;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(ecx, MEM8(ebx + 0x1D));
    MEM8(esi + 0x1D) = LO8(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_001AC001; /* je: equal / zero */

loc_001ABFD6: ;
    edx = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0x80);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001ABFE7u); RECOMP_ABI_CALL(0x001F7F00u, sub_001F7F00); /* call 0x001F7F00 */

loc_001ABFE7: ;
    ecx = MEM32(esi + 0x18);
    MEM32(esi + 0x14) = eax;
    esi = MEM32(ebx + 0x14);
    edi = eax;
    eax = ecx;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    POP32(esp, edi);

loc_001AC001: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AC010
 * Original: 0x001AC010 - 0x001AC029 (25 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC010: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AC027; /* je: equal / zero */

loc_001AC01A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AC020u); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_001AC020: ;
    MEM32(esi + 0x14) = 0;

loc_001AC027: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001AC030
 * Original: 0x001AC030 - 0x001AC06A (58 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC030: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AC065; /* je: equal / zero */

loc_001AC03F: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001AC056u); RECOMP_ABI_CALL(0x001F7F90u, sub_001F7F90); /* call 0x001F7F90 */

loc_001AC056: ;
    edx = MEM32(esi + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x18) = edx;

loc_001AC065: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AC070
 * Original: 0x001AC070 - 0x001AC137 (199 bytes, 88 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC070(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AC070: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x001AC084u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AC084: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AC130; /* jne: not equal / not zero */

loc_001AC08C: ;
    eax = MEM32(ebp + 0x28);
    edx = eax + 1;

loc_001AC092: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AC092; /* jne: not equal / not zero */

loc_001AC099: ;
    eax = eax - edx;
    PUSH32(esp, esi);
    edx = eax;
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, edi);
    esi = eax + 1;

loc_001AC0A5: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AC0A5; /* jne: not equal / not zero */

loc_001AC0AC: ;
    eax = eax - esi;
    eax = eax + edx + 2;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x001AC0BAu); RECOMP_ABI_CALL(0x001F7ED0u, sub_001F7ED0); /* call 0x001F7ED0 */

loc_001AC0BA: ;
    ecx = MEM32(ebp + 0x28);
    ebx = eax;
    edx = ebx;

loc_001AC0C1: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AC0C1; /* jne: not equal / not zero */

loc_001AC0CB: ;
    edi = ebx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_001AC0D0: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AC0D0; /* jne: not equal / not zero */

loc_001AC0D8: ;
    SET_LO16(ecx, MEM16(0x3CAA94));
    MEM16(edi) = LO16(ecx);
    eax = MEM32(ebp + 0x20);
    esi = eax;

loc_001AC0E7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AC0E7; /* jne: not equal / not zero */

loc_001AC0EE: ;
    edi = ebx;
    eax = eax - esi;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001AC0F3: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AC0F3; /* jne: not equal / not zero */

loc_001AC0FB: ;
    ecx = eax;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x001AC116u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AC116: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ebp;
    PUSH32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_001AC12B; /* jne: not equal / not zero */

loc_001AC11F: ;
    PUSH32(esp, 0x001AC124u); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_001AC124: ;
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001AC12B: ;
    PUSH32(esp, 0x001AC130u); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_001AC130: ;
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AC140
 * Original: 0x001AC140 - 0x001AC156 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC140(void)
{

loc_001AC140: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001AC148u); RECOMP_ABI_CALL(0x0021A310u, sub_0021A310); /* call 0x0021A310 */

loc_001AC148: ;
    PUSH32(esp, 0x3ED12C);
    ecx = esi;
    PUSH32(esp, 0x001AC154u); RECOMP_ABI_CALL(0x00215CD0u, sub_00215CD0); /* call 0x00215CD0 */

loc_001AC154: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001AC160
 * Original: 0x001AC160 - 0x001AC17B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC160: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AC16E; /* jl: less (signed <) */

loc_001AC169: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

loc_001AC16E: ;
    eax = eax + eax * 2;
    eax = MEM32(eax * 4 + 0x467600);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AC180
 * Original: 0x001AC180 - 0x001AC1D1 (81 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC180(void)
{

loc_001AC180: ;
    edx = ecx;
    ecx = MEM32(edx + 0x48);
    eax = MEM32(edx + 0x54);
    eax = eax + ecx;
    ecx = MEM32(edx + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x28);
    PUSH32(esp, edi);
    eax = eax + MEM32(edx + 0x40);
    edi = MEM32(edx + 0x20);
    eax = eax + esi;
    esi = MEM32(edx + 0x1C);
    eax = eax + ecx;
    eax = eax + edi;
    edi = MEM32(edx + 0x4C);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x10));
    eax = eax + esi;
    esi = MEM32(esp + 0x14);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0xC));
    edi = edi + eax;
    edi = edi + MEM32(edx + 0x34);
    eax = ecx;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AC1E0
 * Original: 0x001AC1E0 - 0x001AC5CC (1004 bytes, 276 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC1E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AC1E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AC1F1; /* jne: not equal / not zero */

loc_001AC1EB: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 28; return; /* ret 24 */

loc_001AC1F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_G(_fas, _fbs)) goto loc_001AC574; /* jg: greater (signed >) */

loc_001AC1FD: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001AC20F; /* je: equal / zero */

loc_001AC1FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x23 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001AC57E; /* ja: above (unsigned >) */

loc_001AC208: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1AC5CC); /* switch: 36 entries, 25 targets */
    if (_jt == 0x001AC20Fu) goto loc_001AC20F;
    if (_jt == 0x001AC218u) goto loc_001AC218;
    if (_jt == 0x001AC22Bu) goto loc_001AC22B;
    if (_jt == 0x001AC247u) goto loc_001AC247;
    if (_jt == 0x001AC260u) goto loc_001AC260;
    if (_jt == 0x001AC27Cu) goto loc_001AC27C;
    if (_jt == 0x001AC295u) goto loc_001AC295;
    if (_jt == 0x001AC2ABu) goto loc_001AC2AB;
    if (_jt == 0x001AC2C4u) goto loc_001AC2C4;
    if (_jt == 0x001AC2E0u) goto loc_001AC2E0;
    if (_jt == 0x001AC2F6u) goto loc_001AC2F6;
    if (_jt == 0x001AC33Du) goto loc_001AC33D;
    if (_jt == 0x001AC388u) goto loc_001AC388;
    if (_jt == 0x001AC3D3u) goto loc_001AC3D3;
    if (_jt == 0x001AC3DFu) goto loc_001AC3DF;
    if (_jt == 0x001AC3EEu) goto loc_001AC3EE;
    if (_jt == 0x001AC439u) goto loc_001AC439;
    if (_jt == 0x001AC448u) goto loc_001AC448;
    if (_jt == 0x001AC48Fu) goto loc_001AC48F;
    if (_jt == 0x001AC4C6u) goto loc_001AC4C6;
    if (_jt == 0x001AC50Du) goto loc_001AC50D;
    if (_jt == 0x001AC52Du) goto loc_001AC52D;
    if (_jt == 0x001AC540u) goto loc_001AC540;
    if (_jt == 0x001AC55Du) goto loc_001AC55D;
    if (_jt == 0x001AC588u) goto loc_001AC588;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001AC20F: ;
    edx = MEM32(esp + 0xC);
    goto loc_001AC5A2;

loc_001AC218: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0xC);
    MEM32(eax) = 2;
    goto loc_001AC5AC;

loc_001AC22B: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0xC);
    esi = MEM32(esp + 0x1C);
    MEM32(eax) = 2;
    eax = edx + edx;
    MEM32(esi) = eax;
    goto loc_001AC5B2;

loc_001AC247: ;
    edx = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0xC);
    MEM32(edx) = 3;
    MEM32(esi) = eax;
    goto loc_001AC5B2;

loc_001AC260: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x1C);
    eax = eax + eax * 2;
    MEM32(edx) = 3;
    MEM32(esi) = eax;
    goto loc_001AC5B2;

loc_001AC27C: ;
    edx = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0xC);
    MEM32(edx) = 1;
    MEM32(esi) = eax;
    goto loc_001AC5B2;

loc_001AC295: ;
    eax = MEM32(esp + 0x18);
    MEM32(eax) = 3;
    eax = MEM32(esp + 0xC);
    edx = eax + eax * 2;
    goto loc_001AC5AC;

loc_001AC2AB: ;
    edx = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0xC);
    MEM32(edx) = 4;
    MEM32(esi) = eax;
    goto loc_001AC5B2;

loc_001AC2C4: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0xC);
    esi = MEM32(esp + 0x1C);
    MEM32(eax) = 4;
    eax = edx + edx;
    MEM32(esi) = eax;
    goto loc_001AC5B2;

loc_001AC2E0: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0xC);
    MEM32(edx) = 4;
    edx = eax + eax;
    goto loc_001AC5AC;

loc_001AC2F6: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 4;
    eax = MEM32(esp + 0x10);
    ecx = ecx >> 2;
    eax = eax >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001AC318; /* jg: greater (signed >) */

loc_001AC313: ;
    ecx = 1;

loc_001AC318: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001AC322; /* jg: greater (signed >) */

loc_001AC31D: ;
    eax = 1;

loc_001AC322: ;
    edx = MEM32(esp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax << 5;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x1C);
    ecx = ecx << 3;
    MEM32(eax) = ecx;
    eax = MEM32(edx);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_001AC33D: ;
    ecx = MEM32(esp + 0x18);
    MEM32(ecx) = 2;

loc_001AC347: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    ecx = ecx >> 2;
    eax = eax >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001AC35F; /* jg: greater (signed >) */

loc_001AC35A: ;
    ecx = 1;

loc_001AC35F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001AC369; /* jg: greater (signed >) */

loc_001AC364: ;
    eax = 1;

loc_001AC369: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax << 5;

loc_001AC36F: ;
    edx = MEM32(esp + 0x14);
    MEM32(edx) = eax;
    eax = ecx * 8;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;
    eax = MEM32(edx);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_001AC388: ;
    edx = MEM32(esp + 0x18);
    MEM32(edx) = 1;

loc_001AC392: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    ecx = ecx >> 2;
    eax = eax >> 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001AC3AA; /* jg: greater (signed >) */

loc_001AC3A5: ;
    ecx = 1;

loc_001AC3AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001AC3B4; /* jg: greater (signed >) */

loc_001AC3AF: ;
    eax = 1;

loc_001AC3B4: ;
    edx = MEM32(esp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax << 5;
    MEM32(edx) = eax;
    eax = ecx * 4;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;
    eax = MEM32(edx);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_001AC3D3: ;
    edx = MEM32(esp + 0x18);
    MEM32(edx) = 2;
    goto loc_001AC392;

loc_001AC3DF: ;
    edx = MEM32(esp + 0x18);
    MEM32(edx) = 3;
    goto loc_001AC347;

loc_001AC3EE: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    ecx = ecx >> 2;
    eax = eax >> 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    MEM32(edx) = 1;
    if (CMP_G(_fas, _fbs)) goto loc_001AC410; /* jg: greater (signed >) */

loc_001AC40B: ;
    ecx = 1;

loc_001AC410: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001AC41A; /* jg: greater (signed >) */

loc_001AC415: ;
    eax = 1;

loc_001AC41A: ;
    edx = MEM32(esp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax << 6;
    MEM32(edx) = eax;
    eax = ecx * 4;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;
    eax = MEM32(edx);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_001AC439: ;
    edx = MEM32(esp + 0x18);
    MEM32(edx) = 1;
    goto loc_001AC347;

loc_001AC448: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    ecx = ecx >> 2;
    eax = eax >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    MEM32(edx) = 1;
    if (CMP_G(_fas, _fbs)) goto loc_001AC46A; /* jg: greater (signed >) */

loc_001AC465: ;
    ecx = 1;

loc_001AC46A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001AC474; /* jg: greater (signed >) */

loc_001AC46F: ;
    eax = 1;

loc_001AC474: ;
    edx = MEM32(esp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax << 6;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x1C);
    ecx = ecx << 4;
    MEM32(eax) = ecx;
    eax = MEM32(edx);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_001AC48F: ;
    ecx = MEM32(esp + 0x18);
    MEM32(ecx) = 4;
    ecx = MEM32(esp + 0xC);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001AC4AA; /* jg: greater (signed >) */

loc_001AC4A5: ;
    ecx = 1;

loc_001AC4AA: ;
    eax = MEM32(esp + 0x10);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001AC4BB; /* jg: greater (signed >) */

loc_001AC4B6: ;
    eax = 1;

loc_001AC4BB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax << 3;
    goto loc_001AC36F;

loc_001AC4C6: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x18);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    MEM32(edx) = 4;
    if (CMP_G(_fas, _fbs)) goto loc_001AC4E1; /* jg: greater (signed >) */

loc_001AC4DC: ;
    ecx = 1;

loc_001AC4E1: ;
    eax = MEM32(esp + 0x10);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001AC4F2; /* jg: greater (signed >) */

loc_001AC4ED: ;
    eax = 1;

loc_001AC4F2: ;
    edx = MEM32(esp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax << 4;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x1C);
    ecx = ecx << 4;
    MEM32(eax) = ecx;
    eax = MEM32(edx);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_001AC50D: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0xC);
    esi = MEM32(esp + 0x1C);
    MEM32(eax) = 2;
    eax = edx * 4;
    MEM32(esi) = eax;
    goto loc_001AC5B2;

loc_001AC52D: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0xC);
    MEM32(edx) = 3;
    edx = eax + eax;
    goto loc_001AC5AC;

loc_001AC540: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0xC);
    esi = MEM32(esp + 0x1C);
    MEM32(eax) = 4;
    eax = edx * 4;
    MEM32(esi) = eax;
    goto loc_001AC5B2;

loc_001AC55D: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0xC);
    MEM32(edx) = 4;
    edx = eax * 4;
    goto loc_001AC5AC;

loc_001AC574: ;
    eax = eax - 0x10001;
    if ((eax == 0)) goto loc_001AC59B; /* je: equal / zero */

loc_001AC57B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001AC588; /* je: equal / zero */

loc_001AC57E: ;
    eax = MEM32(esp + 0x14);
    eax = MEM32(eax);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_001AC588: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0xC);
    MEM32(edx) = 2;
    edx = eax + eax;
    goto loc_001AC5AC;

loc_001AC59B: ;
    edx = MEM32(esp + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx >> 1;

loc_001AC5A2: ;
    eax = MEM32(esp + 0x18);
    MEM32(eax) = 1;

loc_001AC5AC: ;
    esi = MEM32(esp + 0x1C);
    MEM32(esi) = edx;

loc_001AC5B2: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA4); PUSH32(esp, 0x001AC5BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AC5BB: ;
    eax = MEM32(esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x10));
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001AC660
 * Original: 0x001AC660 - 0x001AC68A (42 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC660(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AC660: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001AC686; /* ja: above (unsigned >) */

loc_001AC66A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1AC68C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x001AC671u) goto loc_001AC671;
    if (_jt == 0x001AC674u) goto loc_001AC674;
    if (_jt == 0x001AC67Au) goto loc_001AC67A;
    if (_jt == 0x001AC680u) goto loc_001AC680;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001AC671: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_001AC674: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_001AC67A: ;
    eax = 5;
    esp += 4; return; /* ret */

loc_001AC680: ;
    eax = 7;
    esp += 4; return; /* ret */

loc_001AC686: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_001AC68A
 * Original: 0x001AC68A - 0x001AC6A0 (22 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC68A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AC68A: ;
    edi = edi;
    if (_flags /* jno: not overflow */) { g_seh_ebp = ebp; sub_001AC654(); return; }

loc_001AC68E: ;
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(MEM8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    if ((LO8(eax) == 0)) { g_seh_ebp = ebp; sub_001AC658(); return; } /* je: equal / zero */

loc_001AC692: ;
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(MEM8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    if (_flags /* jp: parity */) { g_seh_ebp = ebp; sub_001AC65C(); return; }

loc_001AC696: ;
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(MEM8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    _cf = (int)((((uint64_t)(HI8(edx)) + (uint64_t)(0x1A)) >> 8) & 1);
    SET_HI8(edx, HI8(edx) + 0x1A);
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + LO8(ecx));
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_001AC6A0
 * Original: 0x001AC6A0 - 0x001AC6C2 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC6A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AC6A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AC6BC; /* je: equal / zero */

loc_001AC6AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10001) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10001 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AC6BC; /* je: equal / zero */

loc_001AC6B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10002) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10002 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AC6BC; /* je: equal / zero */

loc_001AC6B9: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_001AC6BC: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001AC6D0
 * Original: 0x001AC6D0 - 0x001AC772 (162 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC6D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AC6D0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x34);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x14);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((2) & 31u));
    edx = ebx + ebx;
    PUSH32(esp, edi);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((2) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = edx * 4;
    MEM32(esp + 0xC) = edi;
    edx = edi + ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001AC76D; /* jle: less or equal (signed <=) */

loc_001AC700: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi >> 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, ebp);
    /* nop */

loc_001AC710: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001AC761; /* jle: less or equal (signed <=) */

loc_001AC714: ;
    edi = ebx + -1;
    edi = edi >> 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* nop */

loc_001AC720: ;
    esi = MEM32(ecx + 4);
    ebp = MEM32(ecx);
    MEM32(eax) = ebp;
    MEM32(eax + 4) = esi;
    esi = MEM32(ecx + 0xC);
    ebp = MEM32(ecx + 8);
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0xC) = esi;
    esi = MEM32(edx + 4);
    ebp = MEM32(edx);
    MEM32(eax + 0x10) = ebp;
    MEM32(eax + 0x14) = esi;
    esi = MEM32(edx + 0xC);
    ebp = MEM32(edx + 8);
    MEM32(eax + 0x18) = ebp;
    MEM32(eax + 0x1C) = esi;
    eax = eax + 0x20;
    ecx = ecx + 0x10;
    edx = edx + 0x10;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001AC720; /* jne: not equal / not zero */

loc_001AC759: ;
    edi = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x18);

loc_001AC761: ;
    ecx = ecx + edi;
    edx = edx + edi;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = esi;
    if ((_fa != 0)) goto loc_001AC710; /* jne: not equal / not zero */

loc_001AC76C: ;
    POP32(esp, ebp);

loc_001AC76D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001AC780
 * Original: 0x001AC780 - 0x001ACABB (827 bytes, 266 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC780(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AC780: ;
    esp = esp - 0x48;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x50);
    SET_LO8(eax, MEM8(esi + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AC7A2; /* je: equal / zero */

loc_001AC78F: ;
    eax = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AC79Au); RECOMP_ABI_CALL(0x001AC6D0u, sub_001AC6D0); /* call 0x001AC6D0 */

loc_001AC79A: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

loc_001AC7A2: ;
    edx = MEM32(esi + 0x48);
    eax = MEM32(esi + 0x54);
    ecx = MEM32(esi + 0x40);
    eax = eax + edx;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x24);
    eax = eax + ecx;
    PUSH32(esp, ebp);
    eax = eax + MEM32(esi + 0x28);
    eax = eax + ebx;
    PUSH32(esp, edi);
    eax = eax + MEM32(esi + 0x20);
    eax = eax + edx;
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    MEM32(esp + 0x48) = eax;
    if (CMP_A(_fa, _fb)) goto loc_001ACAB3; /* ja: above (unsigned >) */

loc_001AC7D2: ;
    ecx = ZX8(MEM8(eax + 0x1ACAD0));
    { uint32_t _jt = MEM32(ecx * 4 + 0x1ACABC); /* switch: 5 entries, 5 targets */
    if (_jt == 0x001AC7E0u) goto loc_001AC7E0;
    if (_jt == 0x001AC7F5u) goto loc_001AC7F5;
    if (_jt == 0x001AC80Cu) goto loc_001AC80C;
    if (_jt == 0x001AC817u) goto loc_001AC817;
    if (_jt == 0x001ACAB3u) goto loc_001ACAB3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001AC7E0: ;
    ecx = 8;
    MEM32(esp + 0x5C) = ecx;
    ebx = ecx;
    MEM32(esp + 0x14) = 1;
    goto loc_001AC82C;

loc_001AC7F5: ;
    MEM32(esp + 0x5C) = 4;
    ebx = 8;
    MEM32(esp + 0x14) = 2;
    goto loc_001AC828;

loc_001AC80C: ;
    ebx = 4;
    MEM32(esp + 0x14) = ebx;
    goto loc_001AC824;

loc_001AC817: ;
    ebx = 4;
    MEM32(esp + 0x14) = 8;

loc_001AC824: ;
    MEM32(esp + 0x5C) = ebx;

loc_001AC828: ;
    ecx = MEM32(esp + 0x5C);

loc_001AC82C: ;
    edx = MEM32(esi + 8);
    edi = edx + ebx + -1;
    eax = ebx + -1;
    eax = ~eax;
    edi = edi & eax;
    edx = 0; /* xor self */
    eax = edi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    edx = ecx + -1;
    edx = ~edx;
    ebp = MEM32(esi + 0x34);
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x40) = eax;
    eax = MEM32(esi + 0xC);
    eax = eax + ecx + -1;
    eax = eax & edx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001ACAB3; /* jbe: below or equal (unsigned <=) */

loc_001AC86F: ;
    MEM32(esp + 0x10) = edx;
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x40);
    esi = edx;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x14));
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx);
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x50) = esi;
    MEM32(esp + 0x44) = eax;

loc_001AC897: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001ACA8C; /* jbe: below or equal (unsigned <=) */

loc_001AC89F: ;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x28);
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    eax = 0; /* xor self */
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx);
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x4C) = esi;
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x3C) = edx;
    /* nop */

loc_001AC8C0: ;
    edx = MEM32(esp + 0x60);
    edi = edi >> 1;
    edi = edi + edx;
    edx = MEM32(esp + 0x48);
    edx = ZX8(MEM8(edx + 0x1ACB04));
    { uint32_t _jt = MEM32(edx * 4 + 0x1ACAF0); /* switch: 5 entries, 5 targets */
    if (_jt == 0x001AC8DAu) goto loc_001AC8DA;
    if (_jt == 0x001AC949u) goto loc_001AC949;
    if (_jt == 0x001AC997u) goto loc_001AC997;
    if (_jt == 0x001AC9ECu) goto loc_001AC9EC;
    if (_jt == 0x001ACA5Du) goto loc_001ACA5D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001AC8DA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001ACA5D; /* jbe: below or equal (unsigned <=) */

loc_001AC8E2: ;
    edx = MEM32(esp + 0x10);
    esi = 0; /* xor self */
    eax = eax + edx;
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x30) = ecx;

loc_001AC8F6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001AC921; /* jbe: below or equal (unsigned <=) */

loc_001AC8FA: ;
    ecx = eax;
    eax = ebx + -1;
    eax = eax >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001AC902: ;
    edx = ecx;
    edx = edx >> 1;
    SET_LO8(edx, MEM8(edx + ebp));
    ebx = esi;
    ebx = ebx >> 1;
    ecx = ecx + 2;
    esi = esi + 2;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(ebx + edi) = LO8(edx);
    if ((_fa != 0)) goto loc_001AC902; /* jne: not equal / not zero */

loc_001AC919: ;
    ebx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x5C);

loc_001AC921: ;
    eax = MEM32(esp + 0x24);
    esi = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x30);
    eax = eax + esi;
    esi = MEM32(esp + 0x2C);
    esi = esi + ebx;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x30) = edx;
    if ((_fa != 0)) goto loc_001AC8F6; /* jne: not equal / not zero */

loc_001AC944: ;
    goto loc_001ACA5D;

loc_001AC949: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001ACA5D; /* jbe: below or equal (unsigned <=) */

loc_001AC951: ;
    esi = MEM32(esp + 0x10);
    eax = eax + esi;
    edx = edi;
    eax = eax + ebp;
    MEM32(esp + 0x30) = ecx;
    /* nop */

loc_001AC960: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001AC981; /* jbe: below or equal (unsigned <=) */

loc_001AC964: ;
    edi = edx;
    esi = eax;
    ebp = ebx;
    /* nop */

loc_001AC970: ;
    SET_LO8(ecx, MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001AC970; /* jne: not equal / not zero */

loc_001AC979: ;
    ebp = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x5C);

loc_001AC981: ;
    eax = eax + MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x30);
    edx = edx + ebx;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x30) = esi;
    if ((_fa != 0)) goto loc_001AC960; /* jne: not equal / not zero */

loc_001AC992: ;
    goto loc_001ACA5D;

loc_001AC997: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001ACA5D; /* jbe: below or equal (unsigned <=) */

loc_001AC99F: ;
    edx = MEM32(esp + 0x10);
    edx = edx + eax;
    esi = ebp + edx * 2;
    MEM32(esp + 0x30) = ecx;
    /* nop */

loc_001AC9B0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001AC9D7; /* jbe: below or equal (unsigned <=) */

loc_001AC9B4: ;
    ecx = edi;
    eax = esi;
    edx = ebx;
    /* nop */

loc_001AC9C0: ;
    SET_LO16(ebp, MEM16(eax));
    MEM16(ecx) = LO16(ebp);
    eax = eax + 2;
    ecx = ecx + 2;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001AC9C0; /* jne: not equal / not zero */

loc_001AC9CF: ;
    ebp = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x5C);

loc_001AC9D7: ;
    eax = MEM32(esp + 0x1C);
    eax = eax + eax;
    esi = esi + eax;
    eax = ebx + ebx;
    edi = edi + eax;
    MEM32(esp + 0x30) = MEM32(esp + 0x30) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001AC9B0; /* jne: not equal / not zero */

loc_001AC9EA: ;
    goto loc_001ACA5D;

loc_001AC9EC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001ACA5D; /* jbe: below or equal (unsigned <=) */

loc_001AC9F0: ;
    edx = MEM32(esp + 0x1C);
    edx = edx << 2;
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0x10);
    edx = edx + eax;
    MEM32(esp + 0x24) = edi;
    edi = ebp + edx * 4;
    MEM32(esp + 0x30) = ecx;
    /* nop */

loc_001ACA10: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001ACA3F; /* jbe: below or equal (unsigned <=) */

loc_001ACA14: ;
    eax = MEM32(esp + 0x24);
    edx = edi;
    esi = ebx;
    /* nop */

loc_001ACA20: ;
    ecx = MEM32(edx);
    ebp = ecx;
    ebp = ebp >> 0x10;
    MEM16(eax) = LO16(ebp);
    MEM16(eax + 0x20) = LO16(ecx);
    edx = edx + 4;
    eax = eax + 2;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001ACA20; /* jne: not equal / not zero */

loc_001ACA37: ;
    ecx = MEM32(esp + 0x5C);
    ebp = MEM32(esp + 0x20);

loc_001ACA3F: ;
    edx = MEM32(esp + 0x24);
    esi = MEM32(esp + 0x2C);
    eax = ebx + ebx;
    edx = edx + eax;
    eax = MEM32(esp + 0x30);
    edi = edi + esi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x30) = eax;
    if ((_fa != 0)) goto loc_001ACA10; /* jne: not equal / not zero */

loc_001ACA5D: ;
    edi = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x4C);
    edx = MEM32(esp + 0x3C);
    edi = edi + eax;
    eax = MEM32(esp + 0x38);
    eax = eax + ebx;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = edx;
    if ((_fa != 0)) goto loc_001AC8C0; /* jne: not equal / not zero */

loc_001ACA84: ;
    edx = MEM32(esp + 0x40);
    esi = MEM32(esp + 0x50);

loc_001ACA8C: ;
    eax = MEM32(esp + 0x54);
    edi = MEM32(esp + 0x10);
    edi = edi + eax;
    eax = MEM32(esp + 0x44);
    MEM32(esp + 0x10) = edi;
    edi = MEM32(esp + 0x28);
    edi = edi + esi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x44) = eax;
    if ((_fa != 0)) goto loc_001AC897; /* jne: not equal / not zero */

loc_001ACAB3: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_001ACB30
 * Original: 0x001ACB30 - 0x001ACB7E (78 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACB30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ACB30: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    eax = ecx + -1;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001ACB6C; /* jle: less or equal (signed <=) */

loc_001ACB43: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax + -1;
    eax = MEM32(esp + 0x18);
    esi = esi >> 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = esi + esi;

loc_001ACB52: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(edx, LO8(edx) << 4);
    SET_LO8(ebx, LO8(ebx) & 0xF);
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    MEM8(edi) = LO8(edx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 2;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001ACB52; /* jne: not equal / not zero */

loc_001ACB68: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    goto loc_001ACB70;

loc_001ACB6C: ;
    eax = MEM32(esp + 0x10);

loc_001ACB70: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001ACB7B; /* jge: greater or equal (signed >=) */

loc_001ACB74: ;
    SET_LO8(eax, MEM8(eax));
    SET_LO8(eax, LO8(eax) << 4);
    MEM8(edi) = LO8(eax);

loc_001ACB7B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001ACB80
 * Original: 0x001ACB80 - 0x001ACB9C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ACB80: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ACB9B; /* je: equal / zero */

loc_001ACB8C: ;
    edx = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ACB98u); RECOMP_ICALL_SAFE(0x00342AA0u, _icall_esp); /* manual call 0x00342AA0 */
    }

loc_001ACB98: ;
    esp = esp + 0xC;

loc_001ACB9B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001ACBA0
 * Original: 0x001ACBA0 - 0x001ACBFD (93 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ACBA0: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = ecx + 1;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    esi = esi + edx + -1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    PUSH32(esp, edi);
    eax = eax + ecx + -1;
    if (TEST_Z(_fa, _fb)) goto loc_001ACBD6; /* je: equal / zero */

loc_001ACBC2: ;
    edi = ZX8(MEM8(esi));
    edx = edi;
    edx = edx >> 4;
    SET_LO8(edx, LO8(edx) & 0xF);
    MEM8(eax) = LO8(edx);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 1;

loc_001ACBD6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001ACBFA; /* jge: greater or equal (signed >=) */

loc_001ACBDA: ;
    ecx = ecx - edx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = ecx;

loc_001ACBE2: ;
    ecx = ZX8(MEM8(esi));
    edx = ecx;
    edx = edx >> 4;
    SET_LO8(edx, LO8(edx) & 0xF);
    MEM8(eax) = LO8(edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ecx, LO8(ecx) & 0xF);
    MEM8(eax) = LO8(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001ACBE2; /* jne: not equal / not zero */

loc_001ACBFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001ACC00
 * Original: 0x001ACC00 - 0x001ACCE4 (228 bytes, 94 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACC00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ACC00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ebx = ecx;
    eax = MEM32(ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_001ACC14; /* jae: above or equal (unsigned >=) */

loc_001ACC12: ;
    esi = eax;

loc_001ACC14: ;
    eax = MEM32(ebx);
    ebp = 0; /* xor self */
    ecx = ebx;
    MEM32(esp + 0x10) = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x001ACC24u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ACC24: ;
    edi = MEM32(esp + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ACC33; /* jne: not equal / not zero */

loc_001ACC2E: ;
    ebp = MEM32(ebx + 0xC);
    goto loc_001ACC3A;

loc_001ACC33: ;
    ecx = MEM32(ebx + 0xC);
    MEM32(esp + 0x10) = ecx;

loc_001ACC3A: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ebx);
    MEM32(ebx + 0xC) = eax;
    MEM32(ebx + 0x10) = eax;
    eax = MEM32(esp + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001ACC57u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ACC57: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001ACC95; /* je: equal / zero */

loc_001ACC5F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001ACC7C; /* jne: not equal / not zero */

loc_001ACC63: ;
    edi = MEM32(ebx + 0xC);
    ecx = esi + esi;
    edx = ecx;
    ecx = ecx >> 2;
    esi = ebp;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    PUSH32(esp, ebp);
    goto loc_001ACCC6;

loc_001ACC7C: ;
    ecx = MEM32(ebx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001ACC92; /* jbe: below or equal (unsigned <=) */

loc_001ACC85: ;
    edx = ZX16(MEM16(ebp + eax * 2));
    MEM32(ecx + eax * 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001ACC85; /* jb: below (unsigned <) */

loc_001ACC92: ;
    PUSH32(esp, ebp);
    goto loc_001ACCC6;

loc_001ACC95: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ACCA7; /* jne: not equal / not zero */

loc_001ACC9A: ;
    edi = MEM32(ebx + 0xC);
    ecx = esi;
    esi = MEM32(esp + 0x10);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    goto loc_001ACCC1;

loc_001ACCA7: ;
    ecx = MEM32(ebx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001ACCC1; /* jbe: below or equal (unsigned <=) */

loc_001ACCB0: ;
    edx = MEM32(esp + 0x10);
    SET_LO16(edx, MEM16(edx + eax * 4));
    MEM16(ecx + eax * 2) = LO16(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001ACCB0; /* jb: below (unsigned <) */

loc_001ACCC1: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);

loc_001ACCC6: ;
    PUSH32(esp, 0x001ACCCBu); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_001ACCCB: ;
    edx = MEM32(ebx);
    esp = esp + 4;
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x001ACCD8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ACCD8: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001ACCF0
 * Original: 0x001ACCF0 - 0x001ACD11 (33 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACCF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ACCF0: ;
    eax = MEM32(ecx + 0x14);
    eax = eax - 0;
    if ((eax == 0)) goto loc_001ACD00; /* je: equal / zero */

loc_001ACCF8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001ACD0E; /* jne: not equal / not zero */

loc_001ACCFB: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x70)); return; /* indirect tail jmp */

loc_001ACD00: ;
    edx = ZX16(MEM16(esp + 4));
    eax = MEM32(ecx);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x6C)); return; /* indirect tail jmp */

loc_001ACD0E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ACD20
 * Original: 0x001ACD20 - 0x001ACD46 (38 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACD20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ACD20: ;
    eax = MEM32(ecx + 0x14);
    eax = eax - 0;
    if ((eax == 0)) goto loc_001ACD35; /* je: equal / zero */

loc_001ACD28: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001ACD30; /* je: equal / zero */

loc_001ACD2B: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

loc_001ACD30: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x7C)); return; /* indirect tail jmp */

loc_001ACD35: ;
    edx = ZX16(MEM16(esp + 4));
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x001ACD40u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ACD40: ;
    eax = ZX16(LO16(eax));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ACD50
 * Original: 0x001ACD50 - 0x001ACDCF (127 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACD50(void)
{

loc_001ACD50: ;
    eax = 0; /* xor self */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    MEM32(ecx + 0x38) = eax;
    MEM32(ecx + 0x3C) = eax;
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x44) = eax;
    MEM32(ecx + 0x48) = eax;
    MEM32(ecx + 0x4C) = eax;
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0x54) = eax;
    MEM32(ecx + 0x58) = eax;
    MEM32(ecx + 0x5C) = eax;
    MEM32(ecx + 0x60) = eax;
    MEM32(ecx + 0x64) = eax;
    MEM32(ecx + 0x68) = eax;
    MEM32(ecx + 0x6C) = eax;
    MEM32(ecx + 0x70) = eax;
    edx = 0x3F800000;
    MEM32(ecx + 0x74) = edx;
    MEM32(ecx + 0x78) = edx;
    MEM32(ecx + 0x7C) = eax;
    MEM32(ecx + 0x80) = eax;
    MEM32(ecx + 0x84) = eax;
    MEM32(ecx + 0x88) = eax;
    MEM32(ecx + 0x8C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001ACDD0
 * Original: 0x001ACDD0 - 0x001ACDEB (27 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACDD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ACDD0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001ACDE3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ACDE3: ;
    eax = MEM32(esi + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ACDF0
 * Original: 0x001ACDF0 - 0x001ACE0A (26 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACDF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ACDF0: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x10) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001ACDFE; /* jb: below (unsigned <) */

loc_001ACDF9: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

loc_001ACDFE: ;
    eax = MEM32(ecx + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    eax = eax + MEM32(ecx + 0x24);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ACE10
 * Original: 0x001ACE10 - 0x001ACE17 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACE10(void)
{

loc_001ACE10: ;
    MEM8(ecx + 0x48) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ACE20
 * Original: 0x001ACE20 - 0x001ACE2A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACE20(void)
{

loc_001ACE20: ;
    MEM32(ecx + 0x4C) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ACE30
 * Original: 0x001ACE30 - 0x001ACE3A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACE30(void)
{

loc_001ACE30: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x14) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ACE40
 * Original: 0x001ACE40 - 0x001ACE5B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ACE40: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ACE4E; /* jl: less (signed <) */

loc_001ACE49: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

loc_001ACE4E: ;
    eax = eax + eax * 2;
    eax = MEM32(eax * 4 + 0x467750);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ACE60
 * Original: 0x001ACE60 - 0x001ACE79 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACE60(void)
{

loc_001ACE60: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001ACE80
 * Original: 0x001ACE80 - 0x001ACF2F (175 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001ACE80: ;
    edx = MEM32(esp + 8);
    SET_LO8(eax, LO8(edx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 3);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xC (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001ACE9C; /* je: equal / zero */

loc_001ACE97: ;
    _cf = 0; /* logical op clears CF */
    esi = esi | 2;
    goto loc_001ACE9F;

loc_001ACE9C: ;
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFFFFDu;

loc_001ACE9F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF0 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001ACEA9; /* je: equal / zero */

loc_001ACEA4: ;
    _cf = 0; /* logical op clears CF */
    esi = esi | 4;
    goto loc_001ACEAC;

loc_001ACEA9: ;
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFFFFBu;

loc_001ACEAC: ;
    eax = edx;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF0000;
    ecx = 0;
    if ((eax == 0)) goto loc_001ACECB; /* je: equal / zero */

loc_001ACEBA: ;
    /* nop */

loc_001ACEC0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001ACEC5; /* je: equal / zero */

loc_001ACEC4: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001ACEC5: ;
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001ACEC0; /* jne: not equal / not zero */

loc_001ACECB: ;
    eax = ZX8(LO8(ecx));
    if (0x10) _cf = (int)(((eax) >> (32 - (0x10))) & 1);
    eax = eax << 0x10;
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFF0FFFFu;
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    eax = eax | esi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF00;
    ebx = 0;
    if ((ecx == 0)) goto loc_001ACEF4; /* je: equal / zero */

loc_001ACEE8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001ACEEE; /* je: equal / zero */

loc_001ACEED: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001ACEEE: ;
    if (1) _cf = (int)(((ecx) >> ((1) - 1)) & 1);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001ACEE8; /* jne: not equal / not zero */

loc_001ACEF4: ;
    ecx = ZX8(LO8(ebx));
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFF0Fu;
    if (4) _cf = (int)(((ecx) >> (32 - (4))) & 1);
    ecx = ecx << 4;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | eax;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xF000;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0;
    if ((edx == 0)) goto loc_001ACF1C; /* je: equal / zero */

loc_001ACF10: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001ACF16; /* je: equal / zero */

loc_001ACF15: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001ACF16: ;
    if (1) _cf = (int)(((edx) >> ((1) - 1)) & 1);
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001ACF10; /* jne: not equal / not zero */

loc_001ACF1C: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    SET_HI8(edx, LO8(eax));
    eax = MEM32(esp + 4);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFF0FFu;
    _cf = 0; /* logical op clears CF */
    edx = edx | ecx;
    MEM32(eax) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001ACF30
 * Original: 0x001ACF30 - 0x001ACF64 (52 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACF30(void)
{

loc_001ACF30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001ACF42u); RECOMP_ABI_CALL(0x001ACE80u, sub_001ACE80); /* call 0x001ACE80 */

loc_001ACF42: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esi);
    esp = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001ACF60u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ACF60: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001ACF70
 * Original: 0x001ACF70 - 0x001AD058 (232 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACF70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ACF70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001ACF7Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ACF7A: ;
    ebp = eax;
    SET_LO8(eax, MEM8(ebp));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ACF9C; /* je: equal / zero */

loc_001ACF85: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ACF9C; /* je: equal / zero */

loc_001ACF8E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ACF94u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_001ACF94: ;
    edx = MEM32(esi + 8);
    esp = esp + 4;
    MEM32(edx) = ebx;

loc_001ACF9C: ;
    eax = MEM32(ebp);
    eax = eax >> 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ACFBE; /* je: equal / zero */

loc_001ACFA5: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ACFBE; /* je: equal / zero */

loc_001ACFAF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ACFB5u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_001ACFB5: ;
    edx = MEM32(esi + 8);
    esp = esp + 4;
    MEM32(edx + 4) = ebx;

loc_001ACFBE: ;
    eax = MEM32(ebp);
    eax = eax >> 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ACFE1; /* je: equal / zero */

loc_001ACFC8: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ACFE1; /* je: equal / zero */

loc_001ACFD2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ACFD8u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_001ACFD8: ;
    edx = MEM32(esi + 8);
    esp = esp + 4;
    MEM32(edx + 8) = ebx;

loc_001ACFE1: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ACFF4; /* je: equal / zero */

loc_001ACFE8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ACFEEu); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_001ACFEE: ;
    esp = esp + 4;
    MEM32(esi + 0x20) = ebx;

loc_001ACFF4: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AD007; /* je: equal / zero */

loc_001ACFFB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AD001u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_001AD001: ;
    esp = esp + 4;
    MEM32(esi + 0x24) = ebx;

loc_001AD007: ;
    _fa = (uint32_t)(MEM8(ebp + 2)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 2), 0xF (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001AD041; /* jbe: below or equal (unsigned <=) */

loc_001AD00D: ;
    PUSH32(esp, edi);
    edi = 0x2C;

loc_001AD013: ;
    eax = MEM32(esi + 8);
    eax = MEM32(edi + eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AD030; /* je: equal / zero */

loc_001AD01D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AD023u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_001AD023: ;
    ecx = MEM32(esi + 8);
    esp = esp + 4;
    MEM32(edi + ecx) = 0;

loc_001AD030: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebp + 2));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    edx = edx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001AD013; /* jb: below (unsigned <) */

loc_001AD040: ;
    POP32(esp, edi);

loc_001AD041: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF0); PUSH32(esp, 0x001AD04Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AD04B: ;
    edx = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xF4)); return; /* indirect tail jmp */

}

/**
 * sub_001AD060
 * Original: 0x001AD060 - 0x001AD0F3 (147 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD060(void)
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

loc_001AD060: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001AD06Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AD06A: ;
    edx = MEM32(eax);
    edx = edx >> 4;
    edx = edx & 0xF;
    if (0) goto loc_001AD0F0; /* jbe: below or equal (unsigned <=) */

loc_001AD074: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = MEM32(ebp + 0x20);
    MEM32(esp + 4) = 0;
    if (CMP_BE(_fa & _fb, 0)) goto loc_001AD0F0; /* jbe: below or equal (unsigned <=) */

loc_001AD086: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edx * 4;
    PUSH32(esp, edi);
    edi = eax;
    ebx = esi + eax + -4;
    goto loc_001AD0A0;

    /* nop */
    /* nop */

loc_001AD0A0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    if (CMP_BE(_fa, _fb)) goto loc_001AD0BC; /* jbe: below or equal (unsigned <=) */

loc_001AD0AB: ;
    ecx = 1;
    eax = edi;

loc_001AD0B2: ;
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    eax = eax + 4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001AD0B2; /* jb: below (unsigned <) */

loc_001AD0BC: ;
    fp_top() = MEMF(0x3C6E40) - fp_top(); /* fsubr dword ptr [0x3c6e40] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001AD0D7; /* jp: parity */

loc_001AD0CF: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */

loc_001AD0D7: ;
    eax = MEM32(esp + 0x10);
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + esi;
    ebx = ebx + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001AD0A0; /* jb: below (unsigned <) */

loc_001AD0ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001AD0F0: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AD100
 * Original: 0x001AD100 - 0x001AD12C (44 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001AD100(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AD100: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x3C);
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    ecx = ecx + edx * 8;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    fp_push(MEMF(eax)); /* fld float */
    ecx = MEM32(ecx + 4);
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    MEM32(eax + 4) = ecx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AD130
 * Original: 0x001AD130 - 0x001AD144 (20 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001AD130(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AD130: ;
    eax = MEM32(ecx + 8);
    fp_push(MEMF(esp + 8)); /* fld float */
    ecx = MEM32(eax + 0x4C);
    edx = MEM32(esp + 4);
    MEMF(ecx + edx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AD150
 * Original: 0x001AD150 - 0x001AD160 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD150(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AD150: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x4C);
    edx = MEM32(esp + 4);
    fp_push(MEMF(ecx + edx * 4)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AD160
 * Original: 0x001AD160 - 0x001AD1BC (92 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AD160: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    eax = MEM32(eax + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AD180; /* je: equal / zero */

loc_001AD16D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AD173u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_001AD173: ;
    ecx = MEM32(esi + 8);
    esp = esp + 4;
    MEM32(ecx + 0x40) = 0;

loc_001AD180: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AD19D; /* je: equal / zero */

loc_001AD18A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AD190u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_001AD190: ;
    eax = MEM32(esi + 8);
    esp = esp + 4;
    MEM32(eax + 0x3C) = 0;

loc_001AD19D: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AD1BA; /* je: equal / zero */

loc_001AD1A7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AD1ADu); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_001AD1AD: ;
    edx = MEM32(esi + 8);
    esp = esp + 4;
    MEM32(edx + 0x4C) = 0;

loc_001AD1BA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001AD1C0
 * Original: 0x001AD1C0 - 0x001AD1FF (63 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AD1C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    eax = MEM32(eax + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AD1E0; /* je: equal / zero */

loc_001AD1CD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AD1D3u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_001AD1D3: ;
    ecx = MEM32(esi + 8);
    esp = esp + 4;
    MEM32(ecx + 0x44) = 0;

loc_001AD1E0: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AD1FD; /* je: equal / zero */

loc_001AD1EA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AD1F0u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_001AD1F0: ;
    eax = MEM32(esi + 8);
    esp = esp + 4;
    MEM32(eax + 0x48) = 0;

loc_001AD1FD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001AD200
 * Original: 0x001AD200 - 0x001AD21C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AD200: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AD219; /* jne: not equal / not zero */

loc_001AD20D: ;
    edx = MEM32(eax + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AD219; /* jne: not equal / not zero */

loc_001AD216: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_001AD219: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001AD220
 * Original: 0x001AD220 - 0x001AD422 (514 bytes, 200 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD220(void)
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

loc_001AD220: ;
    eax = MEM32(esp + 0x10);
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    if (TEST_Z(_fa, _fb)) goto loc_001AD251; /* je: equal / zero */

loc_001AD23A: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001AD242u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AD242: ;
    ebx = MEM32(esp + 0x1C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x001AD24Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AD24F: ;
    goto loc_001AD255;

loc_001AD251: ;
    ebx = MEM32(esp + 0x1C);

loc_001AD255: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(eax);
    ecx = ecx >> 1;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AD273; /* je: equal / zero */

loc_001AD262: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x001AD26Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AD26A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x001AD273u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AD273: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(eax);
    ecx = ecx >> 0x16;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AD298; /* je: equal / zero */

loc_001AD281: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x001AD28Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AD28C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x001AD298u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AD298: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(eax);
    ecx = ecx >> 0x17;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AD2BD; /* je: equal / zero */

loc_001AD2A6: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x001AD2B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AD2B1: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x001AD2BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AD2BD: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AD2E2; /* je: equal / zero */

loc_001AD2CB: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x001AD2D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AD2D6: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x001AD2E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AD2E2: ;
    eax = MEM32(esp + 0x28);
    eax = MEM32(eax);
    eax = eax >> 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AD332; /* je: equal / zero */

loc_001AD2EF: ;
    eax = eax & 0xF;
    MEM32(esp + 0x20) = eax;
    ebx = 0;
    if (0) goto loc_001AD32E; /* jbe: below or equal (unsigned <=) */

loc_001AD2FD: ;
    /* nop */

loc_001AD300: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x001AD30Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AD30C: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x001AD325u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AD325: ;
    eax = MEM32(esp + 0x20);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001AD300; /* jb: below (unsigned <) */

loc_001AD32E: ;
    ebx = MEM32(esp + 0x1C);

loc_001AD332: ;
    eax = MEM32(esp + 0x28);
    eax = MEM32(eax);
    eax = eax >> 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AD382; /* je: equal / zero */

loc_001AD33F: ;
    eax = eax & 0xF;
    MEM32(esp + 0x20) = eax;
    ebx = 0;
    if (0) goto loc_001AD37E; /* jbe: below or equal (unsigned <=) */

loc_001AD34D: ;
    /* nop */

loc_001AD350: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x001AD35Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AD35C: ;
    edx = MEM32(esp + 0x1C);
    MEM8(esp + 0x24) = LO8(eax);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xB0); PUSH32(esp, 0x001AD375u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AD375: ;
    eax = MEM32(esp + 0x20);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001AD350; /* jb: below (unsigned <) */

loc_001AD37E: ;
    ebx = MEM32(esp + 0x1C);

loc_001AD382: ;
    eax = MEM32(esp + 0x28);
    eax = MEM32(eax);
    eax = eax >> 0x14;
    SET_LO8(eax, LO8(eax) & 3);
    if ((LO8(eax) == 0)) goto loc_001AD3D8; /* je: equal / zero */

loc_001AD38F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AD3B4; /* jne: not equal / not zero */

loc_001AD393: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x001AD39Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AD39E: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x001AD3B2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AD3B2: ;
    goto loc_001AD3D8;

loc_001AD3B4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AD3D8; /* jne: not equal / not zero */

loc_001AD3B8: ;
    edx = MEM32(edi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x001AD3C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AD3C8: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC4); PUSH32(esp, 0x001AD3D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AD3D8: ;
    ecx = MEM32(esp + 0x28);
    eax = ZX16(MEM16(ecx + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AD418; /* je: equal / zero */

loc_001AD3E4: ;
    eax = eax & 0xF;
    MEM32(esp + 0x28) = eax;
    ebx = 0;
    if (0) goto loc_001AD418; /* jbe: below or equal (unsigned <=) */

loc_001AD3F2: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC4); PUSH32(esp, 0x001AD3FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AD3FE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x001AD40Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AD40F: ;
    eax = MEM32(esp + 0x28);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001AD3F2; /* jb: below (unsigned <) */

loc_001AD418: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
