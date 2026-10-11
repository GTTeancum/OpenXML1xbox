/**
 * X-Men Legends - Recompiled code chunk 96
 * Functions: 250 (0x003615B0 - 0x00371952)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003615B0
 * Original: 0x003615B0 - 0x003615FB (75 bytes, 24 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003615B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003615B0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_003615DF; /* jne: not equal / not zero */

loc_003615BB: ;
    esi = MEM32(0x36CAF8);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003615CD; /* jb: below (unsigned <) */

loc_003615C8: ;
    PUSH32(esp, 0x003615CDu); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_003615CD: ;
    MEM32(eax) = 0x41710;
    MEM32(eax + 4) = 0;
    eax = eax + 8;
    MEM32(esi) = eax;

loc_003615DF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xA0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0xA0 (8-bit) */
    esi = MEM32(esp + 0xC);
    if (TEST_NZ(_fa, _fb)) goto loc_003615EE; /* jne: not equal / not zero */

loc_003615E8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003615EEu); RECOMP_ABI_CALL(0x00360190u, sub_00360190); /* call 0x00360190 */

loc_003615EE: ;
    eax = MEM32(esi + 4);
    POP32(esp, esi);
    eax = eax | 0x80000000u;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00361600
 * Original: 0x00361600 - 0x0036165E (94 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361600: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0036160Du); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_0036160D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00361617; /* jne: not equal / not zero */

loc_00361613: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00361617: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi * 4 + 0x36A93C);
    PUSH32(esp, 0xB6800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036162Eu); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_0036162E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00361644; /* jne: not equal / not zero */

loc_00361632: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036163Du); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_0036163D: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00361644: ;
    esi = esi << 0x1E;
    esi = esi | 0x1030001;
    eax = eax & 0xFFFFFFF;
    MEM32(edi) = esi;
    MEM32(edi + 4) = eax;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00361660
 * Original: 0x00361660 - 0x0036167E (30 bytes, 10 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361660: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(0xA0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 0xA0 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_NZ(_fa, _fb)) goto loc_00361672; /* jne: not equal / not zero */

loc_0036166C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00361672u); RECOMP_ABI_CALL(0x00360190u, sub_00360190); /* call 0x00360190 */

loc_00361672: ;
    eax = MEM32(esi + 4);
    eax = eax | 0x80000000u;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00361680
 * Original: 0x00361680 - 0x0036168C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361680(void)
{

loc_00361680: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    eax = eax >> 0x1E;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00361690
 * Original: 0x00361690 - 0x00361699 (9 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361690(void)
{

loc_00361690: ;
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003616A0
 * Original: 0x003616A0 - 0x003616A9 (9 bytes, 3 insns)
 * Category: crt
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003616A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003616A0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003616B0
 * Original: 0x003616B0 - 0x00361702 (82 bytes, 37 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: standard_frame
 */
void sub_003616B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_003616B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    fp_push(MEMF(ebp + 8)); /* fld float */
    SET_HI8(ecx, 0); /* xor self */
    fp_push(1.44269504088896340736); /* fldl2e */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = rint(fp_top()); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), 0.0); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* ftst */
    /* wait - FPU sync */
    MEM16(ebp + -8) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [ebp - 8] */
    /* wait - FPU sync */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), 0.0); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* ftst */
    /* wait - FPU sync */
    MEM16(ebp + -4) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [ebp - 4] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = exp2(fp_top()) - 1.0; /* f2xm1 */
    fp_push(1.0); /* fld1 */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    _fa = (uint32_t)(MEM16(ebp + -3)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + -3), 1 (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003616E8; /* je: equal / zero */

loc_003616E4: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = fp_top() / fp_st1(); fp_pop(); /* fdivrp st(1) */

loc_003616E8: ;
    _fa = (uint32_t)(MEM16(ebp + -7)) & 0xFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + -7), 0x40 (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003616F2; /* jne: not equal / not zero */

loc_003616F0: ;
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */

loc_003616F2: ;
    SET_HI8(ecx, HI8(ecx) | HI8(ecx));
    if ((HI8(ecx) == 0)) goto loc_003616F8; /* je: equal / zero */

loc_003616F6: ;
    fp_top() = -fp_top(); /* fchs */

loc_003616F8: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_pop(); /* fstp st(0) */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00361710
 * Original: 0x00361710 - 0x0036171B (11 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361710(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00361710: ;
    fp_push(0.69314718055994530942); /* fldln2 */
    fp_push(MEMF(esp + 4)); /* fld float */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00361720
 * Original: 0x00361720 - 0x0036172C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361720: ;
    PUSH32(esp, ecx);
    MEM32(esp) = ecx;
    ecx = MEM32(esp);
    { uint32_t _bs_v = (uint32_t)(ecx); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsf: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 0; _bs_i < 32; _bs_i++)
          if (_bs_v & (1u << _bs_i)) break;
        eax = (uint32_t)_bs_i;;
      } else { (void)(eax); } }
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00361730
 * Original: 0x00361730 - 0x00361792 (98 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361730(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00361730: ;
    eax = MEM32(esp + 4);
    ecx = eax + -2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2B (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0036178F; /* ja: above (unsigned >) */

loc_0036173C: ;
    ecx = ZX8(MEM8(ecx + 0x3617BC));
    { uint32_t _jt = MEM32(ecx * 4 + 0x361794); /* switch: 10 entries, 10 targets */
    if (_jt == 0x0036174Au) goto loc_0036174A;
    if (_jt == 0x00361752u) goto loc_00361752;
    if (_jt == 0x0036175Au) goto loc_0036175A;
    if (_jt == 0x00361762u) goto loc_00361762;
    if (_jt == 0x0036176Au) goto loc_0036176A;
    if (_jt == 0x00361772u) goto loc_00361772;
    if (_jt == 0x0036177Au) goto loc_0036177A;
    if (_jt == 0x00361782u) goto loc_00361782;
    if (_jt == 0x0036178Au) goto loc_0036178A;
    if (_jt == 0x0036178Fu) goto loc_0036178F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0036174A: ;
    eax = 0x12;
    esp += 8; return; /* ret 4 */

loc_00361752: ;
    eax = 0x1E;
    esp += 8; return; /* ret 4 */

loc_0036175A: ;
    eax = 0x11;
    esp += 8; return; /* ret 4 */

loc_00361762: ;
    eax = 0x1C;
    esp += 8; return; /* ret 4 */

loc_0036176A: ;
    eax = 0x10;
    esp += 8; return; /* ret 4 */

loc_00361772: ;
    eax = 0x30;
    esp += 8; return; /* ret 4 */

loc_0036177A: ;
    eax = 0x2E;
    esp += 8; return; /* ret 4 */

loc_00361782: ;
    eax = 0x31;
    esp += 8; return; /* ret 4 */

loc_0036178A: ;
    eax = 0x2F;

loc_0036178F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00361792
 * Original: 0x00361792 - 0x003617F0 (94 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361792(void)
{

loc_00361792: ;
    edi = edi;
    PUSH32(esp, 0x17);
    MEM8(edx + 0x17) = MEM8(edx + 0x17) + HI8(eax);
    MEM8(edx + 0x17) = MEM8(edx + 0x17) + LO8(ebx);
    MEM8(edx + 0x17) = MEM8(edx + 0x17) + LO8(ecx);
    MEM8(edx + 0x17) = MEM8(edx + 0x17) + LO8(edx);
    MEM8(edx + 0x17) = MEM8(edx + 0x17) + HI8(ebx);
    MEM8(edx + 0x72003617) = MEM8(edx + 0x72003617) + LO8(ecx);
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ss - segment register */
    MEM8(edx + -1895811561) = MEM8(edx + -1895811561) + LO8(eax);
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ss - segment register */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM32(ecx) = MEM32(ecx) + ecx;
    SET_LO8(eax, LO8(eax) + MEM8(ebx));
    SET_LO8(eax, LO8(eax) + 9);
    MEM32(ecx) = MEM32(ecx) | ecx;
    MEM32(ecx) = MEM32(ecx) | ecx;
    MEM32(ecx) = MEM32(ecx) | ecx;
    MEM32(ecx) = MEM32(ecx) | ecx;
    MEM32(ecx) = MEM32(ecx) | ecx;
    MEM32(ecx) = MEM32(ecx) | ecx;
    MEM32(ecx) = MEM32(ecx) | ecx;
    MEM32(ecx) = MEM32(ecx) | ecx;
    MEM32(ecx) = MEM32(ecx) | ecx;
    MEM32(ecx) = MEM32(ecx) | ecx;
    MEM32(ecx) = MEM32(ecx) | ecx;
    MEM32(ecx) = MEM32(ecx) | ecx;
    MEM32(ecx) = MEM32(ecx) | ecx;
    MEM32(ecx) = MEM32(ecx) | ecx;
    MEM32(ecx) = MEM32(ecx) | ecx;
    MEM32(ecx) = MEM32(ecx) | ecx;
    MEM32(-871889146) = MEM32(-871889146) | eax;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003617F0
 * Original: 0x003617F0 - 0x0036180A (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003617F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003617F0: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00361805; /* je: equal / zero */

loc_003617FB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00361807; /* jle: less or equal (signed <=) */

loc_00361800: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00361807; /* jg: greater (signed >) */

loc_00361805: ;
    SET_LO8(eax, 1);

loc_00361807: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00361810
 * Original: 0x00361810 - 0x00361833 (35 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361810: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036182B; /* je: equal / zero */

loc_00361819: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036182B; /* je: equal / zero */

loc_0036181E: ;
    eax = ZX8(MEM8(eax + 0x36A270));
    eax = eax & 0x3C;
    esp += 8; return; /* ret 4 */

loc_0036182B: ;
    eax = 0xF;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00361840
 * Original: 0x00361840 - 0x0036187C (60 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361840: ;
    eax = MEM32(esp + 8);
    eax = ZX8(MEM8(eax + 0x36A270));
    eax = eax & 0x3C;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 4));
    eax = eax >> 3;
    eax = eax + 0x3F;
    eax = eax & 0xFFFFFFC0u;
    ecx = 0; /* xor self */
    edi = edi;

loc_00361860: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 4 + 0x36A208)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx * 4 + 0x36A208) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00361872; /* jbe: below or equal (unsigned <=) */

loc_00361869: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1A (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00361860; /* jb: below (unsigned <) */

loc_0036186F: ;
    esp += 12; return; /* ret 8 */

loc_00361872: ;
    eax = MEM32(ecx * 4 + 0x36A208);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00361880
 * Original: 0x00361880 - 0x0036193B (187 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361880(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00361880: ;
    ecx = MEM32(esp + 4);
    edx = ZX8(MEM8(ecx + 0xD));
    eax = ZX8(MEM8(edx + 0x361965));
    { uint32_t _jt = MEM32(eax * 4 + 0x36193C); /* switch: 10 entries, 10 targets */
    if (_jt == 0x00361896u) goto loc_00361896;
    if (_jt == 0x003618BDu) goto loc_003618BD;
    if (_jt == 0x003618E9u) goto loc_003618E9;
    if (_jt == 0x003618F0u) goto loc_003618F0;
    if (_jt == 0x003618F7u) goto loc_003618F7;
    if (_jt == 0x003618FEu) goto loc_003618FE;
    if (_jt == 0x00361905u) goto loc_00361905;
    if (_jt == 0x0036190Cu) goto loc_0036190C;
    if (_jt == 0x00361913u) goto loc_00361913;
    if (_jt == 0x0036191Au) goto loc_0036191A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00361896: ;
    eax = 8;

loc_0036189B: ;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    esi = esi & 0xF00000;
    esi = esi | 0x2000;
    esi = esi >> 4;
    ecx = ecx & 0xF000000;
    esi = esi | ecx;
    eax = eax | esi;
    POP32(esp, esi);
    goto loc_003618C7;

loc_003618BD: ;
    eax = 8;

loc_003618C2: ;
    eax = eax | 0x100;

loc_003618C7: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00361927; /* je: equal / zero */

loc_003618CF: ;
    ecx = ZX8(MEM8(ecx + 0xD));
    ecx = ecx + 0xFFFFFFD6u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00361924; /* ja: above (unsigned >) */

loc_003618DB: ;
    ecx = ZX8(MEM8(ecx + 0x36198C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x361984); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00361921u) goto loc_00361921;
    if (_jt == 0x00361935u) goto loc_00361935;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003618E9: ;
    eax = 4;
    goto loc_0036189B;

loc_003618F0: ;
    eax = 4;
    goto loc_003618C2;

loc_003618F7: ;
    eax = 3;
    goto loc_0036189B;

loc_003618FE: ;
    eax = 3;
    goto loc_003618C2;

loc_00361905: ;
    eax = 1;
    goto loc_0036189B;

loc_0036190C: ;
    eax = 1;
    goto loc_003618C2;

loc_00361913: ;
    eax = 9;
    goto loc_003618C2;

loc_0036191A: ;
    eax = 0xA;
    goto loc_003618C2;

loc_00361921: ;
    eax = eax | 0x20;

loc_00361924: ;
    esp += 12; return; /* ret 8 */

loc_00361927: ;
    SET_LO8(edx, MEM8(edx + 0x36A270));
    SET_LO8(edx, LO8(edx) & 0x3C);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x20 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00361921; /* je: equal / zero */

loc_00361935: ;
    eax = eax | 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003619A0
 * Original: 0x003619A0 - 0x003619E6 (70 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003619A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003619A0: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0xD));
    ecx = ecx - 0x2A;
    { uint32_t _jt = MEM32(ecx * 4 + 0x3619E8); /* switch: 8 entries, 4 targets */
    if (_jt == 0x003619B2u) goto loc_003619B2;
    if (_jt == 0x003619BFu) goto loc_003619BF;
    if (_jt == 0x003619CCu) goto loc_003619CC;
    if (_jt == 0x003619D9u) goto loc_003619D9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003619B2: ;
    edx = MEM32(esp + 8);
    MEM32(edx) = 0x477FFF00;
    esp += 12; return; /* ret 8 */

loc_003619BF: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0x4B7FFFFF;
    esp += 12; return; /* ret 8 */

loc_003619CC: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = 0x43FFF800;
    esp += 12; return; /* ret 8 */

loc_003619D9: ;
    edx = MEM32(esp + 8);
    MEM32(edx) = 0x7149F2CA;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003619E6
 * Original: 0x003619E6 - 0x00361A10 (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003619E6(void)
{
    int _cf = 0; /* carry flag */

loc_003619E6: ;
    edi = edi;
    edi = 0xD9003619u;
    { uint64_t _t = (uint64_t)(MEM32(esi)) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi) = (uint32_t)_t; }  /* sbb */
    _cf = (int)((((uint64_t)(MEM8(edx + -872401383)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(edx + -872401383) = MEM8(edx + -872401383) + HI8(edx);
    { uint64_t _t = (uint64_t)(MEM32(esi)) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi) = (uint32_t)_t; }  /* sbb */
    _cf = (int)((((uint64_t)(MEM8(edi + -654297575)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(edi + -654297575) = MEM8(edi + -654297575) + HI8(ebx);
    { uint64_t _t = (uint64_t)(MEM32(esi)) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi) = (uint32_t)_t; }  /* sbb */
    _cf = (int)((((uint64_t)(MEM8(edx + -872401383)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(edx + -872401383) = MEM8(edx + -872401383) + HI8(edx);
    { uint64_t _t = (uint64_t)(MEM32(esi)) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi) = (uint32_t)_t; }  /* sbb */
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + LO8(ecx));
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00361A10
 * Original: 0x00361A10 - 0x00361B60 (336 bytes, 126 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361A10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00361A10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00361B19; /* jne: not equal / not zero */

loc_00361A20: ;
    ecx = MEM32(esi + 0xC);
    eax = ecx;
    edx = ecx;
    if (0x1C) _cf = (int)(((ecx) >> ((0x1C) - 1)) & 1);
    ecx = ecx >> 0x1C;
    if (0x14) _cf = (int)(((eax) >> ((0x14) - 1)) & 1);
    eax = eax >> 0x14;
    if (0x18) _cf = (int)(((edx) >> ((0x18) - 1)) & 1);
    edx = edx >> 0x18;
    PUSH32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xF;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edi));
    ecx = ecx - edi;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(edi));
    edx = edx - edi;
    edi = ecx;
    ecx = ZX8(MEM8(esi + 0xD));
    ecx = ZX8(MEM8(ecx + 0x36A270));
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x3C;
    ebp = ecx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(ecx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    ebx = 1;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    if (LO8(ecx)) _cf = (int)(((ebx) >> (32 - (LO8(ecx)))) & 1);
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = ebx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(ecx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    edi = 1;
    if (LO8(ecx)) _cf = (int)(((edi) >> (32 - (LO8(ecx)))) & 1);
    edi = edi << LO8(ecx);
    ecx = MEM32(esp + 0x24);
    MEM32(ecx) = edi;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(ecx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    edi = 1;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    if (LO8(ecx)) _cf = (int)(((edi) >> (32 - (LO8(ecx)))) & 1);
    edi = edi << LO8(ecx);
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = edi;
    esi = ZX8(MEM8(esi + 0xD));
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00361AAF; /* je: equal / zero */

loc_00361AA5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00361AB1; /* jle: less or equal (signed <=) */

loc_00361AAA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00361AB1; /* jg: greater (signed >) */

loc_00361AAF: ;
    SET_LO8(ecx, 1);

loc_00361AB1: ;
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 2;
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00361AC0; /* jle: less or equal (signed <=) */

loc_00361ABE: ;
    eax = ebx;

loc_00361AC0: ;
    edi = 1;
    ecx = eax;
    if (LO8(ecx)) _cf = (int)(((edi) >> (32 - (LO8(ecx)))) & 1);
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00361ACF; /* jle: less or equal (signed <=) */

loc_00361ACD: ;
    edx = ebx;

loc_00361ACF: ;
    eax = 1;
    ecx = edx;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00361AFA; /* je: equal / zero */

loc_00361ADD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00361AF0; /* jle: less or equal (signed <=) */

loc_00361AE2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00361AF0; /* jg: greater (signed >) */

loc_00361AE7: ;
    edx = edi * 4;
    goto loc_00361AFD;

loc_00361AF0: ;
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    if (3) _cf = (int)(((edx) >> ((3) - 1)) & 1);
    edx = edx >> 3;
    goto loc_00361AFD;

loc_00361AFA: ;
    edx = edi + edi;

loc_00361AFD: ;
    ecx = MEM32(esp + 0x28);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x24);
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    POP32(esp, ebx);
    MEM32(edx) = eax;
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

loc_00361B19: ;
    edx = MEM32(esp + 0x10);
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFF;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x14);
    edx = eax;
    if (0xC) _cf = (int)(((edx) >> ((0xC) - 1)) & 1);
    edx = edx >> 0xC;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFF;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(edx) = 1;
    edx = MEM32(esp + 0x1C);
    if (0x18) _cf = (int)(((eax) >> ((0x18) - 1)) & 1);
    eax = eax >> 0x18;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (6) _cf = (int)(((eax) >> (32 - (6))) & 1);
    eax = eax << 6;
    MEM32(edx) = eax;
    ecx = MEM32(ecx);
    edx = MEM32(esp + 0x20);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00361B60
 * Original: 0x00361B60 - 0x00361C11 (177 bytes, 57 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361B60: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = ZX8(MEM8(edi + 0xD));
    PUSH32(esp, edi);
    MEM32(esi) = eax;
    PUSH32(esp, 0x00361B79u); RECOMP_ABI_CALL(0x003613F0u, sub_003613F0); /* call 0x003613F0 */

loc_00361B79: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_00361BAD; /* jne: not equal / not zero */

loc_00361B8B: ;
    edx = ZX8(MEM8(edi + 0xD));
    SET_LO8(eax, MEM8(edx + 0x36A270));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_00361BA2; /* jns: not sign (positive) */

loc_00361B99: ;
    MEM32(esi + 8) = 1;
    goto loc_00361BAD;

loc_00361BA2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00361BAD; /* je: equal / zero */

loc_00361BA6: ;
    MEM32(esi + 8) = 2;

loc_00361BAD: ;
    eax = MEM32(0x36CAF8);
    edx = MEM32(eax + 0x1A14);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx + 4) (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00361BCD; /* jne: not equal / not zero */

loc_00361BC2: ;
    eax = MEM32(eax + 0x196C);
    MEM32(esi + 0x10) = eax;
    goto loc_00361BD4;

loc_00361BCD: ;
    MEM32(esi + 0x10) = 0x11;

loc_00361BD4: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00361BF4u); RECOMP_ABI_CALL(0x00361A10u, sub_00361A10); /* call 0x00361A10 */

loc_00361BF4: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0xC) = edx;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00361C20
 * Original: 0x00361C20 - 0x00361E43 (547 bytes, 194 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361C20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00361C20: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    eax = ZX8(MEM8(ebx + 0xD));
    eax = ZX8(MEM8(eax + 0x36A270));
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx + 0x10);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x80000000u;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x3C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00361E00; /* jne: not equal / not zero */

loc_00361C54: ;
    eax = MEM32(ebx + 0xC);
    esi = ZX8(MEM8(ebx + 0xD));
    edx = eax;
    edi = eax;
    if (0x14) _cf = (int)(((edx) >> ((0x14) - 1)) & 1);
    edx = edx >> 0x14;
    if (0x18) _cf = (int)(((edi) >> ((0x18) - 1)) & 1);
    edi = edi >> 0x18;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xF;
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xF;
    if (0x1C) _cf = (int)(((eax) >> ((0x1C) - 1)) & 1);
    eax = eax >> 0x1C;
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00361C7F; /* je: equal / zero */

loc_00361C75: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00361C81; /* jle: less or equal (signed <=) */

loc_00361C7A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00361C81; /* jg: greater (signed >) */

loc_00361C7F: ;
    SET_LO8(ecx, 1);

loc_00361C81: ;
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    PUSH32(esp, ebp);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 2;
    ebp = ecx;
    ecx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x20) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_00361D25; /* je: equal / zero */

loc_00361C9B: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 0xE));
    esi = edx;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x1C) = eax;
    ebp = 0;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF;
    if ((ecx == 0)) goto loc_00361D0C; /* je: equal / zero */

loc_00361CB4: ;
    MEM32(esp + 0x24) = ecx;

loc_00361CB8: ;
    ebx = MEM32(esp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00361CC2; /* jbe: below or equal (unsigned <=) */

loc_00361CC0: ;
    ebx = esi;

loc_00361CC2: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00361CD0; /* jbe: below or equal (unsigned <=) */

loc_00361CCC: ;
    ecx = MEM32(esp + 0x10);

loc_00361CD0: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    ebx = 1;
    if (LO8(ecx)) _cf = (int)(((ebx) >> (32 - (LO8(ecx)))) & 1);
    ebx = ebx << LO8(ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(esp + 0x18));
    if (3) _cf = (int)(((ebx) >> ((3) - 1)) & 1);
    ebx = ebx >> 3;
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(ebx)) >> 32) & 1);
    ebp = ebp + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00361CE8; /* jbe: below or equal (unsigned <=) */

loc_00361CE7: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00361CE8: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00361CF5; /* jbe: below or equal (unsigned <=) */

loc_00361CF0: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;

loc_00361CF5: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00361D02; /* jbe: below or equal (unsigned <=) */

loc_00361CFD: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = ecx;

loc_00361D02: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00361CB8; /* jne: not equal / not zero */

loc_00361D08: ;
    ebx = MEM32(esp + 0x2C);

loc_00361D0C: ;
    ecx = MEM32(esp + 0x14);
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x7F)) >> 32) & 1);
    ebp = ebp + 0x7F;
    _cf = 0; /* logical op clears CF */
    ebp = ebp & 0xFFFFFF80u;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)MEM32(esp + 0x30));
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    ebp = MEM32(esp + 0x20);
    MEM32(esp + 0x14) = ecx;

loc_00361D25: ;
    ecx = MEM32(esp + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00361D73; /* je: equal / zero */

loc_00361D2D: ;
    MEM32(esp + 0x2C) = ecx;

loc_00361D31: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = edx;
    if (CMP_A(_fa, _fb)) goto loc_00361D39; /* ja: above (unsigned >) */

loc_00361D37: ;
    esi = ebp;

loc_00361D39: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edi;
    if (CMP_A(_fa, _fb)) goto loc_00361D41; /* ja: above (unsigned >) */

loc_00361D3F: ;
    ecx = ebp;

loc_00361D41: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    esi = 1;
    if (LO8(ecx)) _cf = (int)(((esi) >> (32 - (LO8(ecx)))) & 1);
    esi = esi << LO8(ecx);
    ecx = MEM32(esp + 0x14);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x18));
    if (3) _cf = (int)(((esi) >> ((3) - 1)) & 1);
    esi = esi >> 3;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x14) = ecx;
    if (CMP_BE(_fa & _fb, 0)) goto loc_00361D63; /* jbe: below or equal (unsigned <=) */

loc_00361D62: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00361D63: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00361D68; /* jbe: below or equal (unsigned <=) */

loc_00361D67: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00361D68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00361D6D; /* jbe: below or equal (unsigned <=) */

loc_00361D6C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00361D6D: ;
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00361D31; /* jne: not equal / not zero */

loc_00361D73: ;
    ecx = MEM32(ebx + 0xC);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _cf = 0; /* logical op clears CF */
    eax = eax | edi;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    if (0x14) _cf = (int)(((eax) >> (32 - (0x14))) & 1);
    eax = eax << 0x14;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFF;
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = eax;
    if (CMP_A(_fa, _fb)) goto loc_00361D93; /* ja: above (unsigned >) */

loc_00361D91: ;
    edx = ebp;

loc_00361D93: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00361D99; /* ja: above (unsigned >) */

loc_00361D97: ;
    edi = ebp;

loc_00361D99: ;
    eax = ZX8(MEM8(ebx + 0xD));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00361DCE; /* je: equal / zero */

loc_00361DA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00361DBB; /* jle: less or equal (signed <=) */

loc_00361DA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00361DBB; /* jg: greater (signed >) */

loc_00361DAD: ;
    eax = 1;
    ecx = edx;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    if (2) _cf = (int)(((eax) >> (32 - (2))) & 1);
    eax = eax << 2;
    goto loc_00361DD9;

loc_00361DBB: ;
    eax = 1;
    ecx = edx;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x14));
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    goto loc_00361DD9;

loc_00361DCE: ;
    eax = 1;
    ecx = edx;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    if (1) _cf = (int)(((eax) >> (32 - (1))) & 1);
    eax = eax << 1;

loc_00361DD9: ;
    ecx = edi + edx;
    edx = 1;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    ecx = MEM32(esp + 0x40);
    MEM32(ecx) = esi;
    ecx = MEM32(ebx + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x14));
    esi = MEM32(esp + 0x44);
    MEM32(esi) = ecx;
    ecx = MEM32(esp + 0x10);
    if (3) _cf = (int)(((edx) >> ((3) - 1)) & 1);
    edx = edx >> 3;
    goto loc_00361E28;

loc_00361E00: ;
    esi = MEM32(ebx + 0xC);
    edi = MEM32(esp + 0x40);
    eax = edx;
    if (0x18) _cf = (int)(((eax) >> ((0x18) - 1)) & 1);
    eax = eax >> 0x18;
    if (0xC) _cf = (int)(((edx) >> ((0xC) - 1)) & 1);
    edx = edx >> 0xC;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFF;
    MEM32(edi) = esi;
    esi = MEM32(ebx + 0x10);
    edi = MEM32(esp + 0x44);
    if (6) _cf = (int)(((eax) >> (32 - (6))) & 1);
    eax = eax << 6;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    MEM32(edi) = esi;

loc_00361E28: ;
    esi = MEM32(esp + 0x34);
    MEM32(esi) = ecx;
    ecx = MEM32(esp + 0x38);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x38);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 36; return; /* ret 32 */

}

/**
 * sub_00361E50
 * Original: 0x00361E50 - 0x00361EEB (155 bytes, 57 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361E50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    if (TEST_NZ(_fa, _fb)) goto loc_00361E66; /* jne: not equal / not zero */

loc_00361E60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00361E66u); RECOMP_ABI_CALL(0x00360110u, sub_00360110); /* call 0x00360110 */

loc_00361E66: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00361E8Fu); RECOMP_ABI_CALL(0x00361C20u, sub_00361C20); /* call 0x00361C20 */

loc_00361E8F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    ecx = MEM32(esp + 0x24);
    if (TEST_Z(_fa, _fb)) goto loc_00361E9E; /* je: equal / zero */

loc_00361E98: ;
    ecx = ecx | 0xF0000000u;

loc_00361E9E: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00361ED8; /* je: equal / zero */

loc_00361EA6: ;
    edx = ZX8(MEM8(esi + 0xD));
    edx = ZX8(MEM8(edx + 0x36A270));
    esi = MEM32(eax + 4);
    edx = edx & 0x3C;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax));
    eax = MEM32(esp + 0x10);
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    edx = edx >> 3;
    esi = esi + ecx;
    ecx = esi + edx;
    edx = MEM32(esp + 0x1C);
    POP32(esp, esi);
    MEM32(edx) = eax;
    MEM32(edx + 4) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 28; return; /* ret 24 */

loc_00361ED8: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00361EF0
 * Original: 0x00361EF0 - 0x003620E5 (501 bytes, 185 insns)
 * Category: game_render
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361EF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00361EF0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    SET_LO8(eax, MEM8(edi + 0x36A270));
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(eax));
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    MEM32(esp + 0x10) = ebx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x3C;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    esi = ecx;
    MEM32(esp + 0x20) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00361F72; /* jne: not equal / not zero */

loc_00361F18: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00361F72; /* je: equal / zero */

loc_00361F1D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00361F27; /* jle: less or equal (signed <=) */

loc_00361F22: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00361F72; /* jle: less or equal (signed <=) */

loc_00361F27: ;
    ebp = MEM32(esp + 0x34);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00361F3E; /* jne: not equal / not zero */

loc_00361F39: ;
    ebp = 1;

loc_00361F3E: ;
    ecx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(esp + 0x28);
    if (CMP_NE(_fa, _fb)) goto loc_00361F58; /* jne: not equal / not zero */

loc_00361F4A: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)edx);
    if (3) _cf = (int)(((esi) >> ((3) - 1)) & 1);
    esi = esi >> 3;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x3F)) >> 32) & 1);
    esi = esi + 0x3F;
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFFFC0u;
    ecx = esi;

loc_00361F58: ;
    esi = MEM32(esp + 0x40);
    edi = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x1C) = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    MEM32(esp + 0x10) = edx;
    goto loc_00362059;

loc_00361F72: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x00361F7Bu); RECOMP_ABI_CALL(0x00361720u, sub_00361720); /* call 0x00361720 */

loc_00361F7B: ;
    ecx = MEM32(esp + 0x2C);
    esi = eax;
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x00361F8Au); RECOMP_ABI_CALL(0x00361720u, sub_00361720); /* call 0x00361720 */

loc_00361F8A: ;
    ecx = MEM32(esp + 0x30);
    edx = eax;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x00361F99u); RECOMP_ABI_CALL(0x00361720u, sub_00361720); /* call 0x00361720 */

loc_00361F99: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x1C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00361FB2; /* je: equal / zero */

loc_00361FA8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00361FB4; /* jle: less or equal (signed <=) */

loc_00361FAD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00361FB4; /* jg: greater (signed >) */

loc_00361FB2: ;
    SET_LO8(ecx, 1);

loc_00361FB4: ;
    ebp = MEM32(esp + 0x34);
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = ecx;
    MEM32(esp + 0x28) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00361FE4; /* jne: not equal / not zero */

loc_00361FC9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edx;
    if (CMP_A(_fa, _fb)) goto loc_00361FD1; /* ja: above (unsigned >) */

loc_00361FCF: ;
    ecx = eax;

loc_00361FD1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00361FD9; /* jbe: below or equal (unsigned <=) */

loc_00361FD5: ;
    ecx = esi;
    goto loc_00361FE1;

loc_00361FD9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edx;
    if (CMP_A(_fa, _fb)) goto loc_00361FE1; /* ja: above (unsigned >) */

loc_00361FDF: ;
    ecx = eax;

loc_00361FE1: ;
    ebp = ecx + 1;

loc_00361FE4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ebx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00362036; /* je: equal / zero */

loc_00361FEA: ;
    MEM32(esp + 0x2C) = ebp;
    goto loc_00361FF4;

loc_00361FF0: ;
    edi = MEM32(esp + 0x28);

loc_00361FF4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00361FFA; /* jbe: below or equal (unsigned <=) */

loc_00361FF8: ;
    edi = esi;

loc_00361FFA: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00362004; /* jbe: below or equal (unsigned <=) */

loc_00362002: ;
    ecx = edx;

loc_00362004: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    edi = 1;
    if (LO8(ecx)) _cf = (int)(((edi) >> (32 - (LO8(ecx)))) & 1);
    edi = edi << LO8(ecx);
    ecx = MEM32(esp + 0x10);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x20));
    if (3) _cf = (int)(((edi) >> ((3) - 1)) & 1);
    edi = edi >> 3;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x10) = ecx;
    if (CMP_BE(_fa & _fb, 0)) goto loc_00362026; /* jbe: below or equal (unsigned <=) */

loc_00362025: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00362026: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0036202B; /* jbe: below or equal (unsigned <=) */

loc_0036202A: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0036202B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00362030; /* jbe: below or equal (unsigned <=) */

loc_0036202F: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00362030: ;
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00361FF0; /* jne: not equal / not zero */

loc_00362036: ;
    esi = MEM32(esp + 0x40);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    edi = MEM32(esp + 0x30);
    if (TEST_Z(_fa, _fb)) goto loc_00362055; /* je: equal / zero */

loc_00362042: ;
    ecx = MEM32(esp + 0x10);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x7F)) >> 32) & 1);
    ecx = ecx + 0x7F;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFF80u;
    edx = ecx + ecx * 2;
    if (1) _cf = (int)(((edx) >> (32 - (1))) & 1);
    edx = edx << 1;
    MEM32(esp + 0x10) = edx;

loc_00362055: ;
    ecx = MEM32(esp + 0x3C);

loc_00362059: ;
    edx = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x38);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    edx = MEM32(esp + 0x18);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _cf = 0; /* logical op clears CF */
    eax = eax | ebp;
    ebp = MEM32(esp + 0x44);
    if (8) _cf = (int)(((eax) >> (32 - (8))) & 1);
    eax = eax << 8;
    _cf = 0; /* logical op clears CF */
    eax = eax | ebx;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(2)) >> 32) & 1);
    edx = edx + 2;
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    edx = MEM32(esp + 0x48);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    esi = esi & 4;
    _cf = 0; /* logical op clears CF */
    eax = eax | esi;
    _cf = 0; /* logical op clears CF */
    eax = eax | 9;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(edx) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003620CD; /* je: equal / zero */

loc_003620A5: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x4C);
    if (6) _cf = (int)(((ecx) >> ((6) - 1)) & 1);
    ecx = ecx >> 6;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if (0xC) _cf = (int)(((ecx) >> (32 - (0xC))) & 1);
    ecx = ecx << 0xC;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | eax;
    eax = MEM32(esp + 0x10);
    if (0xC) _cf = (int)(((ecx) >> (32 - (0xC))) & 1);
    ecx = ecx << 0xC;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    esp += 44; return; /* ret 40 */

loc_003620CD: ;
    eax = MEM32(esp + 0x4C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = 0;
    eax = MEM32(esp + 4);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    esp += 44; return; /* ret 40 */

}

/**
 * sub_003620E5
 * Original: 0x003620E5 - 0x00362125 (64 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003620E5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003620E5: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003620F6; /* je: equal / zero */

loc_003620F3: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_003620F6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00362103; /* je: equal / zero */

loc_003620FE: ;
    eax = eax | 0x20;
    goto loc_00362115;

loc_00362103: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00362112; /* je: equal / zero */

loc_0036210B: ;
    eax = eax | 0xA0;
    goto loc_00362115;

loc_00362112: ;
    eax = eax | 0x40;

loc_00362115: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x2000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00362122; /* je: equal / zero */

loc_0036211D: ;
    eax = eax | 0x100;

loc_00362122: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00362125
 * Original: 0x00362125 - 0x00362144 (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362125(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362125: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(0x36C648)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x36C648), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036213E; /* jne: not equal / not zero */

loc_0036212F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x36C648);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6D14); PUSH32(esp, 0x0036213Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036213E: ;
    eax = MEM32(0x36C648);
    esp += 4; return; /* ret */

}

/**
 * sub_00362144
 * Original: 0x00362144 - 0x003621BD (121 bytes, 49 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362144(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00362144: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036214Fu); RECOMP_ABI_CALL(0x00362125u, sub_00362125); /* call 0x00362125 */

loc_0036214F: ;
    ecx = eax;
    ebx = 0xFF;
    edi = 0xFF00;
    eax = eax & ebx;
    ecx = ecx & edi;
    edx = 0; /* xor self */
    MEM32(esp + 0x14) = eax;
    esi = 0x36A950;
    ebp = 0; /* xor self */

loc_0036216C: ;
    eax = MEM32(esi);
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00362187; /* je: equal / zero */

loc_00362178: ;
    ebp = ebp + 0xC;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x8AC (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036216C; /* jb: below (unsigned <) */

loc_00362187: ;
    eax = 0xB9;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003621B2; /* jae: above or equal (unsigned >=) */

loc_00362190: ;
    esi = edx + edx * 2;
    esi = esi * 4 + 0x36A950;

loc_0036219A: ;
    ecx = MEM32(esi);
    ecx = ecx & ebx;
    MEM32(esp + 0x10) = esi;
    if ((ecx == 0)) goto loc_003621B2; /* je: equal / zero */

loc_003621A4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003621B2; /* je: equal / zero */

loc_003621AA: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036219A; /* jb: below (unsigned <) */

loc_003621B2: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003621BD
 * Original: 0x003621BD - 0x00362422 (613 bytes, 193 insns)
 * Category: game_render
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003621BD(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003621BD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003621D0u); RECOMP_ABI_CALL(0x00361730u, sub_00361730); /* call 0x00361730 */

loc_003621D0: ;
    PUSH32(esp, eax);
    MEM32(ebp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003621D9u); RECOMP_ABI_CALL(0x00361810u, sub_00361810); /* call 0x00361810 */

loc_003621D9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003621DEu); RECOMP_ABI_CALL(0x00362144u, sub_00362144); /* call 0x00362144 */

loc_003621DE: ;
    edi = eax;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003621E8u); RECOMP_ABI_CALL(0x00362125u, sub_00362125); /* call 0x00362125 */

loc_003621E8: ;
    edx = MEM32(ebp + 0x14);
    edi = MEM32(edi);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    MEM32(ebp + -12) = eax;
    ebx = 0xFF;
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -12);
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    edi = edi & ebx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x60;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xC00000;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -8) = ecx;
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_0036221D; /* jns: not sign (positive) */

loc_00362217: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFFDFu;
    MEM32(ebp + -8) = ecx;

loc_0036221D: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036222F; /* jne: not equal / not zero */

loc_00362223: ;
    ecx = MEM32(ebp + -12);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xE0000;
    MEM32(ebp + -24) = ecx;

loc_0036222F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x32 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003622D5; /* je: equal / zero */

loc_00362239: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x3C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036228A; /* jne: not equal / not zero */

loc_0036223F: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003622CE; /* je: equal / zero */

loc_00362248: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x800000 (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003622CE; /* je: equal / zero */

loc_0036224F: ;
    edi = esi + 0x820;
    _cf = 0; /* logical op clears CF */
    MEM32(edi + 4) = MEM32(edi + 4) & 0;
    ecx = esi;
    MEM32(edi) = 0xFE9156;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00362266u); RECOMP_ABI_CALL(0x0036376Cu, sub_0036376C); /* call 0x0036376C */

loc_00362266: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(edi))) >> 32) & 1);
    eax = eax + MEM32(edi);
    PUSH32(esp, 1);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(edi + 4)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    ecx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esi + 0x828) = eax;
    MEM32(esi + 0x82C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00362282u); RECOMP_ABI_CALL(0x0036379Fu, sub_0036379F); /* call 0x0036379F */

loc_00362282: ;
    edi = MEM32(ebp + -20);

loc_00362285: ;
    eax = 0x800000;

loc_0036228A: ;
    ecx = MEM32(ebp + -4);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00362411; /* jne: not equal / not zero */

loc_00362298: ;
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ebp + 0x20);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = edx;
    edx = MEM32(esi + 0x7E4);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + edx * 4 + 0x7DC) = eax;
    ecx = MEM32(ecx);
    MEM32(esi + 0x1B8) = eax;
    MEM32(esi + 0x1B4) = ecx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_003622C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

loc_003622CE: ;
    eax = 0x400000;
    goto loc_0036228A;

loc_003622D5: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00362285; /* je: equal / zero */

loc_003622DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00362285; /* je: equal / zero */

loc_003622E1: ;
    edi = esi + 0x820;
    _cf = 0; /* logical op clears CF */
    MEM32(edi + 4) = MEM32(edi + 4) & 0;
    ecx = esi;
    MEM32(edi) = 0x1312D00;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003622F8u); RECOMP_ABI_CALL(0x0036376Cu, sub_0036376C); /* call 0x0036376C */

loc_003622F8: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(edi))) >> 32) & 1);
    eax = eax + MEM32(edi);
    PUSH32(esp, 1);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(edi + 4)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    ecx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esi + 0x828) = eax;
    MEM32(esi + 0x82C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00362314u); RECOMP_ABI_CALL(0x0036379Fu, sub_0036379F); /* call 0x0036379F */

loc_00362314: ;
    edi = MEM32(ebp + -20);
    eax = 0x400000;
    goto loc_0036228A;

loc_00362321: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036233E; /* jne: not equal / not zero */

loc_00362327: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + -24), ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0036233B; /* jne: not equal / not zero */

loc_0036232F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xE0000 (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00362408; /* jne: not equal / not zero */

loc_0036233B: ;
    ecx = MEM32(ebp + -4);

loc_0036233E: ;
    edx = ZX16(MEM16(ecx + 4));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036240B; /* jne: not equal / not zero */

loc_0036234B: ;
    edx = ZX16(MEM16(ecx + 6));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036240B; /* jne: not equal / not zero */

loc_00362358: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    if (0x10) _cf = (int)(((ecx) >> ((0x10) - 1)) & 1);
    ecx = ecx >> 0x10;
    if (4) _cf = (int)(((edx) >> ((4) - 1)) & 1);
    edx = edx >> 4;
    ecx = ~ecx;
    edx = ~edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00362408; /* jne: not equal / not zero */

loc_00362373: ;
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx);
    edx = MEM32(ebp + 0x14);
    if (0x18) _cf = (int)(((ecx) >> ((0x18) - 1)) & 1);
    ecx = ecx >> 0x18;
    if (7) _cf = (int)(((edx) >> ((7) - 1)) & 1);
    edx = edx >> 7;
    ecx = ~ecx;
    edx = ~edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00362408; /* jne: not equal / not zero */

loc_0036238C: ;
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx);
    edx = MEM32(ebp + 0x14);
    if (0x19) _cf = (int)(((ecx) >> ((0x19) - 1)) & 1);
    ecx = ecx >> 0x19;
    if (8) _cf = (int)(((edx) >> ((8) - 1)) & 1);
    edx = edx >> 8;
    ecx = ~ecx;
    edx = ~edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00362408; /* jne: not equal / not zero */

loc_003623A5: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx), eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0036240B; /* je: equal / zero */

loc_003623AC: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003623CA; /* je: equal / zero */

loc_003623B2: ;
    _fa = (uint32_t)(MEM8(ebp + -8)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -8), 0x20 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003623BE; /* je: equal / zero */

loc_003623B8: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 2), 0x20 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003623CA; /* jne: not equal / not zero */

loc_003623BE: ;
    _fa = (uint32_t)(MEM8(ebp + -8)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -8), 0x40 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0036240B; /* je: equal / zero */

loc_003623C4: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 2), 0x20 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0036240B; /* jne: not equal / not zero */

loc_003623CA: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003623FE; /* je: equal / zero */

loc_003623D1: ;
    edi = MEM32(ebp + -12);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003623DA; /* jne: not equal / not zero */

loc_003623D8: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */

loc_003623DA: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003623E6; /* jne: not equal / not zero */

loc_003623E0: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 2), 6 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003623F6; /* jne: not equal / not zero */

loc_003623E6: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), 0x10 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003623F6; /* je: equal / zero */

loc_003623EC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x10000 (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003623F6; /* jne: not equal / not zero */

loc_003623F4: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */

loc_003623F6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00362298; /* jne: not equal / not zero */

loc_003623FE: ;
    eax = 0x80004005u;
    goto loc_003622C7;

loc_00362408: ;
    ecx = MEM32(ebp + -4);

loc_0036240B: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xC)) >> 32) & 1);
    ecx = ecx + 0xC;
    MEM32(ebp + -4) = ecx;

loc_00362411: ;
    edx = MEM32(ecx);
    MEM32(ebp + 0x10) = edx;
    _cf = 0; /* logical op clears CF */
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00362321; /* je: equal / zero */

loc_00362420: ;
    goto loc_003623FE;

}

/**
 * sub_00362430
 * Original: 0x00362430 - 0x003627CF (927 bytes, 264 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362430(void)
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

loc_00362430: ;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x36CAF8);
    ebx = MEM32(ebp + 0x1A08);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x1A04);
    eax = ZX8(MEM8(edi + 0xD));
    SET_LO8(ecx, MEM8(eax + 0x36A270));
    esi = 0; /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x20) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0036249B; /* je: equal / zero */

loc_00362462: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00362469u); RECOMP_ABI_CALL(0x00361880u, sub_00361880); /* call 0x00361880 */

loc_00362469: ;
    ecx = MEM32(ebp + 4);
    esi = eax;
    esi = esi & 0xFFFFFDFFu;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ebp);
    esi = esi | 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036248A; /* jb: below (unsigned <) */

loc_00362485: ;
    PUSH32(esp, 0x0036248Au); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_0036248A: ;
    MEM32(eax) = 0x40208;
    MEM32(eax + 4) = esi;
    eax = eax + 8;
    MEM32(ebp) = eax;
    esi = 0; /* xor self */

loc_0036249B: ;
    edx = MEM32(esp + 0x54);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF0 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00362505; /* je: equal / zero */

loc_003624A4: ;
    eax = ZX8(MEM8(edi + 0xD));
    eax = eax + 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00362505; /* ja: above (unsigned >) */

loc_003624B0: ;
    ecx = ZX8(MEM8(eax + 0x3627DC));
    { uint32_t _jt = MEM32(ecx * 4 + 0x3627D0); /* switch: 3 entries, 3 targets */
    if (_jt == 0x003624BEu) goto loc_003624BE;
    if (_jt == 0x003624DBu) goto loc_003624DB;
    if (_jt == 0x00362505u) goto loc_00362505;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003624BE: ;
    ecx = MEM32(esp + 0x58);
    eax = ecx;
    eax = eax >> 3;
    edi = ecx;
    eax = eax & 0x1F0000;
    edi = edi & 0xFC00;
    eax = eax | edi;
    eax = eax >> 2;
    goto loc_003624F6;

loc_003624DB: ;
    ecx = MEM32(esp + 0x58);
    eax = ecx;
    eax = eax >> 3;
    edi = ecx;
    eax = eax & 0x1F0000;
    edi = edi & 0xF800;
    eax = eax | edi;
    eax = eax >> 3;

loc_003624F6: ;
    ecx = ecx & 0xF8;
    eax = eax | ecx;
    eax = eax >> 3;
    MEM32(esp + 0x58) = eax;

loc_00362505: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00362516; /* jne: not equal / not zero */

loc_00362509: ;
    edx = edx & 0xFFFFFFFCu;
    MEM32(esp + 0x54) = edx;
    if ((edx == 0)) goto loc_003627C5; /* je: equal / zero */

loc_00362516: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00362603; /* je: equal / zero */

loc_0036251F: ;
    edx = ZX8(MEM8(ebx + 0xD));
    edx = edx - 0x2A;
    { uint32_t _jt = MEM32(edx * 4 + 0x3627F8); /* switch: 8 entries, 4 targets */
    if (_jt == 0x0036252Du) goto loc_0036252D;
    if (_jt == 0x0036255Fu) goto loc_0036255F;
    if (_jt == 0x00362591u) goto loc_00362591;
    if (_jt == 0x003625C9u) goto loc_003625C9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0036252D: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() * MEMF(0x3CCC88); /* fmul dword ptr [0x3ccc88] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00362540u); RECOMP_ABI_CALL(0x00361690u, sub_00361690); /* call 0x00361690 */

loc_00362540: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0036254C; /* jle: less or equal (signed <=) */

loc_00362547: ;
    eax = 0xFFFF;

loc_0036254C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    MEM32(esp + 0x10) = ecx;
    goto loc_00362603;

loc_0036255F: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() * MEMF(0x3E1EB0); /* fmul dword ptr [0x3e1eb0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00362572u); RECOMP_ABI_CALL(0x00361690u, sub_00361690); /* call 0x00361690 */

loc_00362572: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0036257E; /* jle: less or equal (signed <=) */

loc_00362579: ;
    eax = 0xFFFFFF;

loc_0036257E: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & eax;
    edx = edx << 8;
    MEM32(esp + 0x10) = edx;
    goto loc_00362603;

loc_00362591: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003625FF; /* jnp: not parity */

loc_003625A4: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = fp_top() * MEMD(0x3E1EA8); /* fmul qword ptr [0x3e1ea8] */
    MEMD(esp + 0x30) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x34);
    eax = eax >> 8;
    eax = eax - 0x8000;
    eax = eax & 0xFFFF;
    MEM32(esp + 0x10) = eax;
    goto loc_00362603;

loc_003625C9: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003625FF; /* jnp: not parity */

loc_003625DC: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = fp_top() * MEMD(0x3E1EA0); /* fmul qword ptr [0x3e1ea0] */
    MEMD(esp + 0x30) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x34);
    eax = eax + 0xF8000000u;
    eax = eax & 0xFFFFFFF0u;
    eax = eax << 4;
    MEM32(esp + 0x10) = eax;
    goto loc_00362603;

loc_003625FF: ;
    MEM32(esp + 0x10) = esi;

loc_00362603: ;
    ebx = MEM32(ebp + 0xEE0);
    edi = MEM32(ebp + 0xEE4);
    edx = MEM32(ebp + 0xEE8);
    esi = MEM32(ebp + 0xEEC);
    eax = MEM32(esp + 0x4C);
    edx = edx + ebx;
    esi = esi + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x2C) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00362659; /* jne: not equal / not zero */

loc_00362637: ;
    ecx = esp + 0x38;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = edi;
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = esi;
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x4C) = 1;
    goto loc_00362663;

loc_00362659: ;
    ecx = MEM32(esp + 0x50);
    goto loc_00362663;

loc_0036265F: ;
    edi = MEM32(esp + 0x24);

loc_00362663: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_00362671; /* jg: greater (signed >) */

loc_0036266D: ;
    MEM32(esp + 0x14) = ebx;

loc_00362671: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x5C) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_00362680; /* jg: greater (signed >) */

loc_0036267C: ;
    MEM32(esp + 0x5C) = edi;

loc_00362680: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    edi = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0036268B; /* jl: less (signed <) */

loc_00362689: ;
    edi = edx;

loc_0036268B: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00362698; /* jl: less (signed <) */

loc_00362696: ;
    eax = esi;

loc_00362698: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), edi (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0036278B; /* jge: greater or equal (signed >=) */

loc_003626A6: ;
    _fa = (uint32_t)(MEM32(esp + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x5C), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0036278B; /* jge: greater or equal (signed >=) */

loc_003626B0: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    PUSH32(esp, ecx);
    fp_top() = fp_top() * MEMF(ebp + 0x95C); /* fmul dword ptr [ebp + 0x95c] */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x003626C9u); RECOMP_ABI_CALL(0x00361690u, sub_00361690); /* call 0x00361690 */

loc_003626C9: ;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    PUSH32(esp, ecx);
    ebx = eax;
    fp_top() = fp_top() * MEMF(ebp + 0x95C); /* fmul dword ptr [ebp + 0x95c] */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x003626E4u); RECOMP_ABI_CALL(0x00361690u, sub_00361690); /* call 0x00361690 */

loc_003626E4: ;
    fp_push((double)SMEM32(esp + 0x5C)); /* fild */
    PUSH32(esp, ecx);
    esi = eax;
    fp_top() = fp_top() * MEMF(ebp + 0x960); /* fmul dword ptr [ebp + 0x960] */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x003626FFu); RECOMP_ABI_CALL(0x00361690u, sub_00361690); /* call 0x00361690 */

loc_003626FF: ;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    PUSH32(esp, ecx);
    MEM32(esp + 0x60) = eax;
    fp_top() = fp_top() * MEMF(ebp + 0x960); /* fmul dword ptr [ebp + 0x960] */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036271Cu); RECOMP_ABI_CALL(0x00361690u, sub_00361690); /* call 0x00361690 */

loc_0036271C: ;
    ecx = MEM32(ebp + 4);
    edi = eax;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036272D; /* jb: below (unsigned <) */

loc_00362728: ;
    PUSH32(esp, 0x0036272Du); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_0036272D: ;
    edx = MEM32(esp + 0x60);
    ecx = MEM32(esp + 0x10);
    esi = esi << 0x10;
    esi = esi - 0x10000;
    esi = esi | ebx;
    ebx = MEM32(esp + 0x28);
    MEM32(eax) = 0x81D98;
    MEM32(eax + 4) = esi;
    esi = MEM32(esp + 0x5C);
    edi = edi << 0x10;
    edi = edi - 0x10000;
    ecx = ecx | edx;
    edx = MEM32(esp + 0x58);
    edi = edi | esi;
    esi = MEM32(esp + 0x2C);
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = 0xC1D8C;
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x54);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x50);
    eax = eax + 0x1C;
    MEM32(ebp) = eax;

loc_0036278B: ;
    eax = MEM32(esp + 0x4C);
    ecx = ecx + 0x10;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x4C) = eax;
    if ((_fa != 0)) goto loc_0036265F; /* jne: not equal / not zero */

loc_003627A1: ;
    esi = MEM32(esp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003627C5; /* je: equal / zero */

loc_003627A9: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003627B6; /* jb: below (unsigned <) */

loc_003627B1: ;
    PUSH32(esp, 0x003627B6u); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_003627B6: ;
    MEM32(eax) = 0x40208;
    MEM32(eax + 4) = esi;
    eax = eax + 8;
    MEM32(ebp) = eax;

loc_003627C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00362820
 * Original: 0x00362820 - 0x00362831 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362820(void)
{

loc_00362820: ;
    eax = MEM32(ecx + 0x1BC);
    eax = eax & 1;
    eax = eax + eax * 2 + 0x5D;
    eax = MEM32(ecx + eax * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00362840
 * Original: 0x00362840 - 0x00362843 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362840(void)
{

loc_00362840: ;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    esp += 4; return; /* ret */

}

/**
 * sub_00362850
 * Original: 0x00362850 - 0x00362967 (279 bytes, 73 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362850: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi);
    if (TEST_Z(_fa, _fb)) goto loc_00362960; /* je: equal / zero */

loc_00362866: ;
    eax = MEM32(edi + 0x140);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00362960; /* je: equal / zero */

loc_00362874: ;
    ecx = MEM32(esi + 8);
    ecx = ecx & 0xC0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00362898; /* jne: not equal / not zero */

loc_00362885: ;
    _fa = (uint32_t)(MEM32(esi + 0x1B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x1B4), 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00362898; /* je: equal / zero */

loc_00362891: ;
    eax = 1;
    goto loc_0036289A;

loc_00362898: ;
    eax = 0; /* xor self */

loc_0036289A: ;
    edx = MEM32(esi + 0xA4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036293E; /* jne: not equal / not zero */

loc_003628A8: ;
    _fa = (uint32_t)(MEM32(esi + 0x1B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x1B4), 0x1000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003628BC; /* jne: not equal / not zero */

loc_003628B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036293E; /* je: equal / zero */

loc_003628BC: ;
    _fa = (uint32_t)(MEM32(edi + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x100), 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036293E; /* je: equal / zero */

loc_003628C8: ;
    SET_LO16(edx, 0x80C0);
    /* TODO: in al, dx */
    eax = eax >> 5;
    eax = ~eax;
    eax = eax & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40000000 (32-bit) */
    MEM32(esi + 0x1D0) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003628F0; /* jne: not equal / not zero */

loc_003628E3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x1D0) = ecx;

loc_003628F0: ;
    eax = MEM32(esi + 0x1BC);
    eax = eax & 1;
    edx = eax + eax * 2 + 0x5D;
    MEM32(esi + 0xA4) = 1;
    _fa = (uint32_t)(MEM32(esi + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + edx * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362931; /* je: equal / zero */

loc_0036290D: ;
    ecx = MEM32(esi + 0x1C0);
    eax = eax + eax * 2;
    edx = MEM32(esi + eax * 4 + 0x178);
    eax = esi + eax * 4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00362931; /* jne: not equal / not zero */

loc_00362925: ;
    edx = MEM32(eax + 0x17C);
    MEM32(0x36F29C) = edx;

loc_00362931: ;
    eax = MEM32(0x36F29C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0036293Eu); RECOMP_ABI_CALL(0x0035C9DCu, sub_0035C9DC); /* call 0x0035C9DC */

loc_0036293E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = esi + 0x84;
    PUSH32(esp, esi);
    MEM32(edi + 0x140) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6D20); PUSH32(esp, 0x00362959u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00362959: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00362960: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00362970
 * Original: 0x00362970 - 0x00362A42 (210 bytes, 65 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362970(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00362970: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1BC);
    ebx = MEM32(esi);
    eax = eax & 1;
    ecx = eax + eax * 2 + 0x5D;
    edx = MEM32(esi + ecx * 4);
    ecx = esi + ecx * 4;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00362A3C; /* je: equal / zero */

loc_00362994: ;
    PUSH32(esp, edi);
    goto loc_003629A0;

    /* nop */
    edi = edi;

loc_003629A0: ;
    edi = MEM32(esi + 0x1C0);
    edx = eax + eax * 2;
    eax = esi + edx * 4;
    edx = MEM32(eax + 0x178);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00362A35; /* jne: not equal / not zero */

loc_003629B6: ;
    MEM32(ecx) = 0;
    eax = MEM32(eax + 0x17C);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(0x36F29C) = eax;
    PUSH32(esp, 0x003629CFu); RECOMP_ABI_CALL(0x0035C9DCu, sub_0035C9DC); /* call 0x0035C9DC */

loc_003629CF: ;
    edi = MEM32(esi + 0x1BC);
    edi = edi & 1;
    _fa = (uint32_t)(MEM32(esi + edi * 4 + 0x7DC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + edi * 4 + 0x7DC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00362A02; /* jne: not equal / not zero */

loc_003629E2: ;
    eax = edi + edi * 2;
    eax = eax << 8;
    ecx = eax + esi + 0x1DC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003629F7u); RECOMP_ABI_CALL(0x0035CA5Eu, sub_0035CA5E); /* call 0x0035CA5E */

loc_003629F7: ;
    MEM32(esi + edi * 4 + 0x7DC) = 0;

loc_00362A02: ;
    eax = MEM32(ebx + 0x40071C);
    eax = eax | 2;
    MEM32(ebx + 0x40071C) = eax;
    ecx = MEM32(esi + 0x1BC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    eax = eax & 1;
    edx = eax + eax * 2 + 0x5D;
    MEM32(esi + 0x1BC) = ecx;
    ecx = esi + edx * 4;
    edx = MEM32(ecx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003629A0; /* jne: not equal / not zero */

loc_00362A35: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00362A3C: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00362A50
 * Original: 0x00362A50 - 0x00362B5A (266 bytes, 79 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362A50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00362A50: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    PUSH32(esp, 0x00362A60u); RECOMP_ABI_CALL(0x00362840u, sub_00362840); /* call 0x00362840 */

loc_00362A60: ;
    ecx = MEM32(esi + 0x1D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00362A74; /* je: equal / zero */

loc_00362A6A: ;
    edx = eax;
    edx = edx - ecx;
    MEM32(esi + 0x1D4) = edx;

loc_00362A74: ;
    ebx = MEM32(esi + 0x1C0);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1D8) = eax;
    MEM32(esi + 0x1C0) = ebx;
    SET_LO8(ebx, MEM8(edi + 0x6013D4));
    ecx = esi;
    ebp = 0; /* xor self */
    PUSH32(esp, 0x00362A96u); RECOMP_ABI_CALL(0x00362970u, sub_00362970); /* call 0x00362970 */

loc_00362A96: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = 1;
    if (TEST_Z(_fa, _fb)) goto loc_00362AA3; /* je: equal / zero */

loc_00362A9F: ;
    ebp = ecx;
    goto loc_00362ABD;

loc_00362AA3: ;
    eax = MEM32(esi + 0x1C4);
    _fa = (uint32_t)(MEM32(esi + 0x1C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C0), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00362ABD; /* jne: not equal / not zero */

loc_00362AB1: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C4) = eax;
    ebp = 2;

loc_00362ABD: ;
    _fa = (uint32_t)(MEM32(esi + 0x1B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x1B4), 0x1000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00362AF9; /* jne: not equal / not zero */

loc_00362AC9: ;
    SET_LO16(edx, 0x80C0);
    /* TODO: in al, dx */
    edx = MEM32(esi + 8);
    edx = edx & 0xC0000000u;
    eax = eax >> 5;
    eax = ~eax;
    eax = eax & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40000000 (32-bit) */
    MEM32(esi + 0x1D0) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00362AF9; /* jne: not equal / not zero */

loc_00362AEC: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x1D0) = edx;

loc_00362AF9: ;
    eax = 0x1000000;
    edi = edi;

loc_00362B00: ;
    MEM32(edi + 0x600100) = ecx;
    _fa = (uint32_t)(MEM32(edi + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x100), eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00362B00; /* jne: not equal / not zero */

loc_00362B0E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esi + 0x194;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6D00); PUSH32(esp, 0x00362B1Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00362B1E: ;
    eax = MEM32(esi + 0x190);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00362B4A; /* je: equal / zero */

loc_00362B28: ;
    ecx = MEM32(esi + 0x1C0);
    edx = MEM32(esi + 0x1BC);
    MEM32(esp + 0x10) = ecx;
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = ebp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00362B47u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00362B47: ;
    esp = esp + 4;

loc_00362B4A: ;
    MEM8(edi + 0x6013D4) = LO8(ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00362B60
 * Original: 0x00362B60 - 0x00362C90 (304 bytes, 86 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362B60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00362B60: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    MEM32(eax + 0x9100) = 1;
    edi = MEM32(esi + 0x840);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00362C82; /* je: equal / zero */

loc_00362B7F: ;
    ecx = MEM32(esi + edi * 8 + 0x830);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | MEM32(esi + edi * 8 + 0x834);
    if ((ecx == 0)) goto loc_00362C82; /* je: equal / zero */

loc_00362B93: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    /* nop */

loc_00362BA0: ;
    edx = edi + 1;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x80000001u;
    if (((int32_t)edx >= 0)) goto loc_00362BB0; /* jns: not sign (positive) */

loc_00362BAB: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    edx = edx | 0xFFFFFFFEu;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00362BB0: ;
    MEM32(esi + 0x840) = edx;
    MEM32(esi + edi * 8 + 0x830) = ebx;
    MEM32(esi + edi * 8 + 0x834) = ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x844)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x844) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00362BF4; /* jne: not equal / not zero */

loc_00362BCC: ;
    eax = MEM32(esi + 0x848);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x844) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_00362C3E; /* je: equal / zero */

loc_00362BE0: ;
    ecx = MEM32(esi + 0x84C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esi + 0x848) = ebx;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00362BEFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00362BEF: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    goto loc_00362C3E;

loc_00362BF4: ;
    eax = MEM32(esi + 0x824);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(esi + 0x820);
    if (CMP_A(_fa, _fb)) goto loc_00362C08; /* ja: above (unsigned >) */

loc_00362C04: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00362C3E; /* jbe: below or equal (unsigned <=) */

loc_00362C08: ;
    edx = MEM32(esi + 0x828);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    ecx = MEM32(esi + 0x82C);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    MEM32(esi + 0x828) = edx;
    eax = MEM32(esi + 0x828);
    PUSH32(esp, 1);
    edx = ecx;
    PUSH32(esp, edx);
    MEM32(esi + 0x82C) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00362C37u); RECOMP_ABI_CALL(0x0036379Fu, sub_0036379F); /* call 0x0036379F */

loc_00362C37: ;
    ecx = esi;
    PUSH32(esp, 0x00362C3Eu); RECOMP_ABI_CALL(0x00362A50u, sub_00362A50); /* call 0x00362A50 */

loc_00362C3E: ;
    eax = MEM32(esi + 0x840);
    ecx = MEM32(esi + eax * 8 + 0x830);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | MEM32(esi + eax * 8 + 0x834);
    if ((ecx == 0)) goto loc_00362C7B; /* je: equal / zero */

loc_00362C54: ;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00362C5Du); RECOMP_ABI_CALL(0x0036376Cu, sub_0036376C); /* call 0x0036376C */

loc_00362C5D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + edi * 8 + 0x834)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + edi * 8 + 0x834) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00362C7B; /* jb: below (unsigned <) */

loc_00362C66: ;
    if (CMP_A(_fa, _fb)) goto loc_00362C71; /* ja: above (unsigned >) */

loc_00362C68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + edi * 8 + 0x830)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + edi * 8 + 0x830) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00362C7B; /* jb: below (unsigned <) */

loc_00362C71: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00362BA0; /* jl: less (signed <) */

loc_00362C7B: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00362C82: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00362C8Bu); RECOMP_ABI_CALL(0x00363781u, sub_00363781); /* call 0x00363781 */

loc_00362C8B: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00362C90
 * Original: 0x00362C90 - 0x00362CF2 (98 bytes, 19 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362C90: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(0x36C648);
    eax = MEM32(ecx + -356);
    ecx = ecx + 0xFFFFFE9Cu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00362CE0; /* je: equal / zero */

loc_00362CAA: ;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362CD6; /* je: equal / zero */

loc_00362CB5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362CD6; /* je: equal / zero */

loc_00362CBA: ;
    MEM32(eax + 0x68084C) = 0x800080;
    MEM32(eax + 0x140) = 0;
    PUSH32(esp, 0x00362CD3u); RECOMP_ABI_CALL(0x00363CC6u, sub_00363CC6); /* call 0x00363CC6 */

loc_00362CD3: ;
    esp += 8; return; /* ret 4 */

loc_00362CD6: ;
    MEM32(eax + 0x68084C) = 0;

loc_00362CE0: ;
    MEM32(eax + 0x140) = 0;
    PUSH32(esp, 0x00362CEFu); RECOMP_ABI_CALL(0x00363CC6u, sub_00363CC6); /* call 0x00363CC6 */

loc_00362CEF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00362D00
 * Original: 0x00362D00 - 0x00362D48 (72 bytes, 22 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362D00(void)
{

loc_00362D00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x36B248);
    PUSH32(esp, 0x00362D0Bu); RECOMP_ABI_CALL(0x003659B0u, sub_003659B0); /* call 0x003659B0 */

loc_00362D0B: ;
    esi = MEM32(-46137012);
    PUSH32(esp, 0x3C6F8C);
    PUSH32(esp, 0x00362D1Bu); RECOMP_ABI_CALL(0x003659B0u, sub_003659B0); /* call 0x003659B0 */

loc_00362D1B: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    esi = esi & 0xFF;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x36B200);
    PUSH32(esp, 0x00362D40u); RECOMP_ABI_CALL(0x003659B0u, sub_003659B0); /* call 0x003659B0 */

loc_00362D40: ;
    esp = esp + 0x20;
    /* int3: debug-trap slide byte, stepped over */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00362D50
 * Original: 0x00362D50 - 0x00362F83 (563 bytes, 167 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362D50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00362D50: ;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    edx = edi;
    eax = edi;
    edx = edx & 0x1F;
    eax = eax >> 5;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xD (32-bit) */
    esi = ecx;
    ecx = MEM32(esi);
    if (CMP_A(_fa, _fb)) goto loc_00362F45; /* ja: above (unsigned >) */

loc_00362D71: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x362F84); /* switch: 14 entries, 10 targets */
    if (_jt == 0x00362D78u) goto loc_00362D78;
    if (_jt == 0x00362E83u) goto loc_00362E83;
    if (_jt == 0x00362E8Bu) goto loc_00362E8B;
    if (_jt == 0x00362EB5u) goto loc_00362EB5;
    if (_jt == 0x00362EBBu) goto loc_00362EBB;
    if (_jt == 0x00362ED3u) goto loc_00362ED3;
    if (_jt == 0x00362EECu) goto loc_00362EEC;
    if (_jt == 0x00362F06u) goto loc_00362F06;
    if (_jt == 0x00362F2Eu) goto loc_00362F2E;
    if (_jt == 0x00362F45u) goto loc_00362F45;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00362D78: ;
    edi = MEM32(esi + 0x1C8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = eax;
    ecx = eax;
    ebp = ebp & 7;
    eax = eax & 0xFFFFFFF0u;
    edi = edi + ebp;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x1C0);
    edx = 0; /* xor self */
    ebx = edi;
    ebx = ebx - eax;
    ecx = ecx & 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x30) = edx;
    if (CMP_G(_fas, _fbs)) goto loc_00362DC7; /* jg: greater (signed >) */

loc_00362DAB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362DBA; /* je: equal / zero */

loc_00362DAF: ;
    edi = 1;
    edi = edi - ebx;
    MEM32(esp + 0x10) = edi;

loc_00362DBA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00362DC3; /* jne: not equal / not zero */

loc_00362DC0: ;
    edi = eax + 1;

loc_00362DC3: ;
    ebx = edi;
    ebx = ebx - eax;

loc_00362DC7: ;
    eax = edi + ebp;
    MEM32(esi + 0x1C4) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x1D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1D4), edx (32-bit) */
    MEM32(esi + 0x1C8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00362E04; /* je: equal / zero */

loc_00362DDE: ;
    ecx = esi;
    PUSH32(esp, 0x00362DE5u); RECOMP_ABI_CALL(0x00362840u, sub_00362840); /* call 0x00362840 */

loc_00362DE5: ;
    ecx = MEM32(esi + 0x1D4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    ecx = ecx + MEM32(esi + 0x1D8);
    ecx = ecx - eax;
    MEM32(esp + 0x30) = ecx;
    if (((int32_t)ecx >= 0)) goto loc_00362E04; /* jns: not sign (positive) */

loc_00362DFC: ;
    MEM32(esp + 0x30) = 0;

loc_00362E04: ;
    eax = MEM32(esi + 0x1CC);
    eax = eax & 1;
    ecx = eax + eax * 2 + 0x5D;
    MEM32(esi + ecx * 4) = 1;
    ecx = MEM32(esp + 0x14);
    edx = eax + eax * 2;
    eax = esi + edx * 4;
    MEM32(eax + 0x178) = edi;
    MEM32(eax + 0x17C) = ecx;
    edx = MEM32(esi + 0x1CC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    MEM32(esi + 0x1CC) = edx;
    PUSH32(esp, 0x00362E42u); RECOMP_ABI_CALL(0x00362970u, sub_00362970); /* call 0x00362970 */

loc_00362E42: ;
    eax = MEM32(esi + 0x18C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00362E81; /* je: equal / zero */

loc_00362E4C: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esi + 0x1CC);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esi + 0x1D4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x24) = edx;
    edx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x2C) = ecx;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00362E7Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00362E7E: ;
    esp = esp + 4;

loc_00362E81: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00362E83: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

loc_00362E8B: ;
    ecx = MEM32(0x36CB50);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax + eax * 4;
    MEM32(0x36CB50) = ecx;
    ecx = eax * 4 + 0x36CD64;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00362EA8u); RECOMP_ABI_CALL(0x003659F0u, sub_003659F0); /* call 0x003659F0 */

loc_00362EA8: ;
    PUSH32(esp, 0x00362EADu); RECOMP_ABI_CALL(0x0035FBD0u, sub_0035FBD0); /* call 0x0035FBD0 */

loc_00362EAD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

loc_00362EB5: ;
    MEM32(0x36CB50) = MEM32(0x36CB50) - 1;
    _fa = (uint32_t)(MEM32(0x36CB50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00362EBB: ;
    eax = eax | 0x80000000u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00362EC6u); RECOMP_ABI_CALL(0x003659F0u, sub_003659F0); /* call 0x003659F0 */

loc_00362EC6: ;
    PUSH32(esp, 0x00362ECBu); RECOMP_ABI_CALL(0x0035FBD0u, sub_0035FBD0); /* call 0x0035FBD0 */

loc_00362ECB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

loc_00362ED3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    esi = esi + 0x1A4;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6D00); PUSH32(esp, 0x00362EE4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00362EE4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

loc_00362EEC: ;
    eax = MEM32(ecx + 0x401A88);
    ecx = MEM32(ecx + 0x40186C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00362EFBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00362EFB: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

loc_00362F06: ;
    MEM32(ecx + 0x400750) = 0xE00050;
    MEM32(ecx + 0x400754) = eax;
    POP32(esp, edi);
    MEM32(ecx + 0x400750) = 0xDF0008;
    MEM32(ecx + 0x400754) = eax;
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

loc_00362F2E: ;
    eax = MEM32(ecx + 0x401A88);
    edx = MEM32(ecx + 0x40186C);
    POP32(esp, edi);
    MEM32(eax + ecx) = edx;
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

loc_00362F45: ;
    PUSH32(esp, 0x36B248);
    PUSH32(esp, 0x00362F4Fu); RECOMP_ABI_CALL(0x003659B0u, sub_003659B0); /* call 0x003659B0 */

loc_00362F4F: ;
    esi = MEM32(-46137012);
    PUSH32(esp, 0x3C6F8C);
    PUSH32(esp, 0x00362F5Fu); RECOMP_ABI_CALL(0x003659B0u, sub_003659B0); /* call 0x003659B0 */

loc_00362F5F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    esi = esi & 0xFF;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x36B200);
    PUSH32(esp, 0x00362F77u); RECOMP_ABI_CALL(0x003659B0u, sub_003659B0); /* call 0x003659B0 */

loc_00362F77: ;
    esp = esp + 0x20;
    /* int3: debug-trap slide byte, stepped over */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00362FC0
 * Original: 0x00362FC0 - 0x0036306B (171 bytes, 52 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362FC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00362FC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    MEM32(esi + 0x400720) = 0;
    eax = MEM32(esi + 0x400100);
    ebp = MEM32(esi + 0x400704);
    ebx = MEM32(esi + 0x400108);
    ebp = ebp & 0x1FFC;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036301F; /* je: equal / zero */

loc_00362FEF: ;
    eax = ebp;
    eax = eax >> 0x14;
    MEM32(esi + 0x400100) = 0x1000;
    ecx = MEM32(edi);
    eax = eax & 0x1F;

loc_00363003: ;
    edx = MEM32(ecx + 0x400700);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00363003; /* jne: not equal / not zero */

loc_0036300D: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00363015u); RECOMP_ABI_CALL(0x00366D2Du, sub_00366D2D); /* call 0x00366D2D */

loc_00363015: ;
    eax = MEM32(esi + 0x400100);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00363056; /* je: equal / zero */

loc_0036301F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esi + 0x400100) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00363056; /* je: equal / zero */

loc_00363029: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100001) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x100001 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00363056; /* je: equal / zero */

loc_00363030: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    eax = MEM32(esi + 0x400708);
    if (TEST_NZ(_fa, _fb)) goto loc_00363056; /* jne: not equal / not zero */

loc_0036303B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x100 (32-bit) */
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_0036304D; /* jne: not equal / not zero */

loc_00363044: ;
    ecx = edi;
    PUSH32(esp, 0x0036304Bu); RECOMP_ABI_CALL(0x00362D50u, sub_00362D50); /* call 0x00362D50 */

loc_0036304B: ;
    goto loc_00363056;

loc_0036304D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00363056u); RECOMP_ABI_CALL(0x00362D00u, sub_00362D00); /* call 0x00362D00 */

loc_00363056: ;
    POP32(esp, edi);
    MEM32(esi + 0x400720) = 1;
    eax = MEM32(esi + 0x400100);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00363070
 * Original: 0x00363070 - 0x003631F3 (387 bytes, 97 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363070(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00363070: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx);
    eax = MEM32(esi + 0x2100);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x100000 (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0036308F; /* je: equal / zero */

loc_00363085: ;
    MEM32(esi + 0x2100) = 0x100000;

loc_0036308F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003630A0; /* je: equal / zero */

loc_00363096: ;
    MEM32(esi + 0x2100) = 0x1000000;

loc_003630A0: ;
    edx = MEM32(esi + 0x2100);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    edi = 1;
    if (TEST_Z(_fa, _fb)) goto loc_003630F0; /* je: equal / zero */

loc_003630B2: ;
    eax = MEM32(esi + 0x3250);
    MEM32(esi + 0x2500) = ebp;
    MEM32(esi + 0x3250) = ebp;
    MEM32(esi + 0x2100) = edi;
    ecx = 0xFFFF;
    /* nop */

loc_003630D0: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003630DE; /* je: equal / zero */

loc_003630D5: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x3250);
    if ((_fa != 0)) goto loc_003630D0; /* jne: not equal / not zero */

loc_003630DE: ;
    MEM32(esi + 0x3258) = ebp;
    MEM32(esi + 0x3250) = edi;
    MEM32(esi + 0x2500) = edi;

loc_003630F0: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036315B; /* je: equal / zero */

loc_003630F5: ;
    PUSH32(esp, 0x36B248);
    PUSH32(esp, 0x003630FFu); RECOMP_ABI_CALL(0x003659B0u, sub_003659B0); /* call 0x003659B0 */

loc_003630FF: ;
    edi = MEM32(-46137012);
    PUSH32(esp, 0x3C6F8C);
    PUSH32(esp, 0x0036310Fu); RECOMP_ABI_CALL(0x003659B0u, sub_003659B0); /* call 0x003659B0 */

loc_0036310F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    edi = edi & 0xFF;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0x36B200);
    PUSH32(esp, 0x00363125u); RECOMP_ABI_CALL(0x003659B0u, sub_003659B0); /* call 0x003659B0 */

loc_00363125: ;
    esp = esp + 0x20;
    /* int3: debug-trap slide byte, stepped over */
    MEM32(esi + 0x2100) = 0x1000;
    MEM32(esi + 0x3228) = ebp;
    eax = MEM32(esi + 0x3240);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x3244)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x3244) (32-bit) */
    edi = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0036315B; /* je: equal / zero */

loc_0036314C: ;
    eax = MEM32(esi + 0x3244);
    eax = eax + 4;
    MEM32(esi + 0x3244) = eax;

loc_0036315B: ;
    eax = MEM32(esi + 0x3220);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003631CA; /* je: equal / zero */

loc_00363166: ;
    eax = MEM32(esi + 0x3214);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003631A3; /* jne: not equal / not zero */

loc_00363170: ;
    _fa = (uint32_t)(MEM32(esi + 0x2100)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2100), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003631A3; /* jne: not equal / not zero */

loc_00363178: ;
    _fa = (uint32_t)(MEM32(esi + 0x400100)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x400100), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00363187; /* je: equal / zero */

loc_00363180: ;
    ecx = ebx;
    PUSH32(esp, 0x00363187u); RECOMP_ABI_CALL(0x00362FC0u, sub_00362FC0); /* call 0x00362FC0 */

loc_00363187: ;
    _fa = (uint32_t)(MEM32(esi + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x100), 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036319A; /* je: equal / zero */

loc_00363193: ;
    ecx = ebx;
    PUSH32(esp, 0x0036319Au); RECOMP_ABI_CALL(0x00362A50u, sub_00362A50); /* call 0x00362A50 */

loc_0036319A: ;
    _fa = (uint32_t)(MEM8(esi + 0x3214)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3214), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00363170; /* je: equal / zero */

loc_003631A3: ;
    _fa = (uint32_t)(MEM8(esi + 0x3214)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3214), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003631CA; /* je: equal / zero */

loc_003631AC: ;
    /* nop */

loc_003631B0: ;
    _fa = (uint32_t)(MEM8(esi + 0x2500)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2500), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003631B0; /* jne: not equal / not zero */

loc_003631B9: ;
    eax = MEM32(esi + 0x3220);
    eax = eax & 0xFFFFEFFFu;
    MEM32(esi + 0x3220) = eax;

loc_003631CA: ;
    _fa = (uint32_t)(MEM32(esi + 0x2100)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2100), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003631DE; /* jne: not equal / not zero */

loc_003631D2: ;
    MEM32(esi + 0x3250) = edi;
    MEM32(esi + 0x2500) = edi;

loc_003631DE: ;
    ecx = MEM32(esi + 0x2100);
    eax = MEM32(esi + 0x2080);
    eax = eax & edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00363200
 * Original: 0x00363200 - 0x003632D7 (215 bytes, 57 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363200(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00363200: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx);
    /* nop */

loc_00363210: ;
    esi = MEM32(edi + 0x100);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x1000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00363229; /* je: equal / zero */

loc_00363220: ;
    ecx = ebx;
    PUSH32(esp, 0x00363227u); RECOMP_ABI_CALL(0x00362FC0u, sub_00362FC0); /* call 0x00362FC0 */

loc_00363227: ;
    ebp = eax;

loc_00363229: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFEFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0xFFFFEFFFu (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003632B6; /* je: equal / zero */

loc_00363235: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x100000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00363246; /* je: equal / zero */

loc_0036323D: ;
    ecx = ebx;
    PUSH32(esp, 0x00363244u); RECOMP_ABI_CALL(0x00362B60u, sub_00362B60); /* call 0x00362B60 */

loc_00363244: ;
    ebp = ebp | eax;

loc_00363246: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00363288; /* je: equal / zero */

loc_0036324E: ;
    eax = MEM32(ebx + 0x820);
    eax = eax | MEM32(ebx + 0x824);
    if ((eax != 0)) goto loc_00363270; /* jne: not equal / not zero */

loc_0036325C: ;
    ecx = ebx;
    PUSH32(esp, 0x00363263u); RECOMP_ABI_CALL(0x00362A50u, sub_00362A50); /* call 0x00362A50 */

loc_00363263: ;
    ebp = ebp | eax;
    goto loc_00363288;

    goto loc_00363270;

    /* nop */

loc_00363270: ;
    MEM32(edi + 0x600100) = 1;
    esi = MEM32(edi + 0x100);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x1000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00363270; /* jne: not equal / not zero */

loc_00363288: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x100 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00363299; /* je: equal / zero */

loc_00363290: ;
    ecx = ebx;
    PUSH32(esp, 0x00363297u); RECOMP_ABI_CALL(0x00363070u, sub_00363070); /* call 0x00363070 */

loc_00363297: ;
    ebp = ebp | eax;

loc_00363299: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003632B6; /* je: equal / zero */

loc_003632A1: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM8(eax + 0x8100)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x8100), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003632B6; /* je: equal / zero */

loc_003632AC: ;
    MEM32(eax + 0x8100) = 1;

loc_003632B6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00363210; /* jne: not equal / not zero */

loc_003632BE: ;
    ecx = MEM32(ebx + 0xB4);
    MEM32(ebx + 0xA4) = ebp;
    MEM32(edi + 0x140) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003632D7
 * Original: 0x003632D7 - 0x003632EA (19 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003632D7(void)
{

loc_003632D7: ;
    edx = MEM32(esp + 4);
    ecx = ecx + 0x160;
    eax = MEM32(ecx);
    edx = edx + eax;
    MEM32(ecx) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003632EA
 * Original: 0x003632EA - 0x0036332A (64 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003632EA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003632EA: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = eax << 8;
    eax = eax + ecx + 0x1DC;
    PUSH32(esp, esi);
    edx = eax + 0x100;
    esi = eax;
    ecx = 0; /* xor self */
    esi = esi - edx;
    eax = eax - edx;
    PUSH32(esp, edi);
    edi = eax + 0x200;

loc_00363311: ;
    eax = edx + ecx;
    MEM8(esi + eax) = LO8(ecx);
    MEM8(eax) = LO8(ecx);
    MEM8(edi + eax) = LO8(ecx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00363311; /* jb: below (unsigned <) */

loc_00363325: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036332A
 * Original: 0x0036332A - 0x0036338D (99 bytes, 31 insns)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036332A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036332A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    eax = 0; /* xor self */
    MEM32(esi + 0x100) = eax;
    MEM32(esi + 0x104) = eax;
    MEM32(esi + 0x110) = eax;
    MEM32(esi + 0x118) = eax;
    eax = esi + 0x160;
    ecx = MEM32(eax);
    PUSH32(esp, 8);
    edi = 0x80;
    edx = ecx + 0x37F;
    PUSH32(esp, edi);
    MEM32(esi + 0x10C) = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(eax) = edx;
    PUSH32(esp, 0x00363372u); RECOMP_ABI_CALL(0x00366113u, sub_00366113); /* call 0x00366113 */

loc_00363372: ;
    eax = MEM32(esi + 0x100);
    ecx = MEM32(esp + 0x1C);
    eax = eax + edi;
    eax = eax << 0x10;
    eax = eax + MEM32(esi);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0036338D
 * Original: 0x0036338D - 0x003633C1 (52 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036338D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036338D: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 6));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(eax + 0xC));
    eax = edx;
    PUSH32(esp, MEM32(ecx + 0x100));
    eax = eax >> 0xB;
    eax = eax ^ edx;
    eax = eax >> 0xB;
    eax = eax ^ edx;
    PUSH32(esp, edx);
    eax = eax & 0x7FF;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003633BAu); RECOMP_ABI_CALL(0x003662A0u, sub_003662A0); /* call 0x003662A0 */

loc_003633BA: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003633C1
 * Original: 0x003633C1 - 0x003633EC (43 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003633C1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003633C1: ;
    MEM32(ecx) = 0xFD000000u;
    eax = MEM32(0xFD001804u);
    eax = eax | 4;
    MEM32(0xFD001804u) = eax;
    eax = 0; /* xor self */
    MEM32(-44039872) = 0;
    MEM32(-50294464) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_003633EC
 * Original: 0x003633EC - 0x0036342D (65 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003633EC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003633EC: ;
    edx = MEM32(ecx);
    eax = MEM32(edx + 0x1800);
    eax = eax >> 0x10;
    eax = eax & 0xFFFC;
    MEM32(ecx + 0xA8) = eax;
    eax = MEM32(edx + 0x1808);
    eax = eax & 0xFF;
    MEM32(ecx + 0xC0) = eax;
    edx = MEM32(edx + 0x10020C);
    eax = 0; /* xor self */
    MEM32(ecx + 0xAC) = edx;
    MEM32(ecx + 0xBC) = 0xFE502A;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0036342D
 * Original: 0x0036342D - 0x003634B0 (131 bytes, 30 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036342D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036342D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    MEM32(edi + 0x1830) = 0;
    MEM32(edi + 0x180C) = 0xF800;
    PUSH32(esp, 0x0036344Cu); RECOMP_ABI_CALL(0x00365A81u, sub_00365A81); /* call 0x00365A81 */

loc_0036344C: ;
    MEM32(esi + 0xB4) = 1;
    MEM32(edi + 0x9200) = 0xDE86;
    MEM32(edi + 0x9210) = 0x1DCD;
    ecx = esi;
    MEM32(edi + 0x9420) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0036347Bu); RECOMP_ABI_CALL(0x00365BE8u, sub_00365BE8); /* call 0x00365BE8 */

loc_0036347B: ;
    ecx = esi;
    PUSH32(esp, 0x00363482u); RECOMP_ABI_CALL(0x00365CE6u, sub_00365CE6); /* call 0x00365CE6 */

loc_00363482: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0036348Bu); RECOMP_ABI_CALL(0x003632EAu, sub_003632EA); /* call 0x003632EA */

loc_0036348B: ;
    ecx = esi;
    PUSH32(esp, 0x00363492u); RECOMP_ABI_CALL(0x00365DB5u, sub_00365DB5); /* call 0x00365DB5 */

loc_00363492: ;
    ecx = esi;
    MEM32(esi + 0x134) = 2;
    PUSH32(esp, 0x003634A3u); RECOMP_ABI_CALL(0x00365DEBu, sub_00365DEB); /* call 0x00365DEB */

loc_003634A3: ;
    ecx = esi;
    PUSH32(esp, 0x003634AAu); RECOMP_ABI_CALL(0x00365E1Bu, sub_00365E1B); /* call 0x00365E1B */

loc_003634AA: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003634B0
 * Original: 0x003634B0 - 0x00363548 (152 bytes, 42 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003634B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003634B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    eax = esi + 0x184C;
    ecx = MEM32(eax);
    edx = ecx;
    edx = edx & 0xFFFFFCFFu;
    MEM32(eax) = edx;
    MEM32(eax) = ecx;
    ebx = ebx | 0xFFFFFFFFu;
    MEM32(esi + 0x200) = ebx;
    eax = MEM32(edi + 0xB4);
    MEM32(esi + 0x140) = eax;
    ecx = edi;
    PUSH32(esp, 0x003634E8u); RECOMP_ABI_CALL(0x00366101u, sub_00366101); /* call 0x00366101 */

loc_003634E8: ;
    ebp = 0; /* xor self */
    MEM32(esi + 0x9400) = ebp;
    MEM32(esi + 0x9410) = ebp;
    MEM32(esi + 0x400720) = ebp;
    ecx = edi;
    PUSH32(esp, 0x00363503u); RECOMP_ABI_CALL(0x00366ED1u, sub_00366ED1); /* call 0x00366ED1 */

loc_00363503: ;
    MEM32(esi + 0x400100) = ebx;
    MEM32(esi + 0x400140) = ebx;
    ecx = edi;
    PUSH32(esp, 0x00363516u); RECOMP_ABI_CALL(0x00366E50u, sub_00366E50); /* call 0x00366E50 */

loc_00363516: ;
    MEM32(esi + 0x2100) = ebx;
    eax = MEM32(edi + 0x11C);
    MEM32(esi + 0x2140) = eax;
    MEM32(edi + 0x840) = ebx;
    MEM32(edi + 0x844) = ebx;
    MEM32(edi + 0x820) = ebp;
    MEM32(edi + 0x824) = ebp;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00363548
 * Original: 0x00363548 - 0x003635A2 (90 bytes, 27 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00363548(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363548: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0036356E; /* je: equal / zero */

loc_00363554: ;
    ecx = MEM32(ebp + 0xC);
    eax = eax & 0xFFFFFFF;
    eax = eax | 0x40000000;
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 3;
    goto loc_0036359E;

loc_0036356E: ;
    ecx = eax;
    ecx = ecx & 0xF0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000000u (32-bit) */
    ecx = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0036358E; /* je: equal / zero */

loc_00363581: ;
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 2;
    goto loc_0036359E;

loc_0036358E: ;
    eax = eax & 0xFFFFFFF;
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 1;

loc_0036359E: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003635A2
 * Original: 0x003635A2 - 0x00363671 (207 bytes, 80 insns)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003635A2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003635A2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    edx = ecx;
    edi = MEM32(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003635C7u); RECOMP_ABI_CALL(0x00363548u, sub_00363548); /* call 0x00363548 */

loc_003635C7: ;
    ebx = MEM32(ebp + -8);
    ecx = edx + 0x160;
    edx = MEM32(ecx);
    esi = edx + 1;
    MEM32(ecx) = esi;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 2);
    eax = ebx;
    POP32(esp, esi);
    eax = eax | 3;
    ecx = ecx - esi;
    if ((ecx == 0)) goto loc_003635F0; /* je: equal / zero */

loc_003635E6: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003635ED; /* je: equal / zero */

loc_003635E9: ;
    PUSH32(esp, 0x3D);
    goto loc_003635EF;

loc_003635ED: ;
    PUSH32(esp, 3);

loc_003635EF: ;
    POP32(esp, esi);

loc_003635F0: ;
    ebx = ebx << 0x14;
    ebx = ebx | 0x3000;
    esi = esi | ebx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036361B; /* je: equal / zero */

loc_00363601: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036360F; /* jne: not equal / not zero */

loc_00363607: ;
    esi = esi | 0x30000;
    goto loc_0036361B;

loc_0036360F: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036361B; /* jne: not equal / not zero */

loc_00363615: ;
    esi = esi | 0x20000;

loc_0036361B: ;
    ecx = edx;
    ecx = ecx << 4;
    ecx = ecx + edi;
    MEM32(ecx + 0x700008) = eax;
    MEM32(ecx + 0x70000C) = eax;
    esi = esi | 0x8000;
    eax = edx + 0x70000;
    eax = eax << 4;
    MEM32(eax + edi) = esi;
    eax = MEM32(ebp + 0x14);
    MEM32(ecx + 0x700004) = eax;
    ecx = MEM32(ebp + 0x18);
    eax = 0; /* xor self */
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebp + 8);
    MEM16(ecx + 6) = MEM16(ecx + 6) & 0;
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 0xC);
    POP32(esp, edi);
    MEM32(ecx + 8) = eax;
    eax = 0; /* xor self */
    POP32(esp, esi);
    MEM32(ecx + 0xC) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00363671
 * Original: 0x00363671 - 0x00363701 (144 bytes, 59 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00363671(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363671: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x57) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x57 (32-bit) */
    PUSH32(esp, edi);
    ebx = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_0036369B; /* jbe: below or equal (unsigned <=) */

loc_00363681: ;
    eax = MEM32(ebp + 0xC);
    eax = eax - 0x62;
    if ((eax == 0)) goto loc_0036369B; /* je: equal / zero */

loc_00363689: ;
    eax = eax - 0x10;
    if ((eax == 0)) goto loc_0036369B; /* je: equal / zero */

loc_0036368E: ;
    eax = eax - 0x25;
    if ((eax != 0)) goto loc_0036369B; /* jne: not equal / not zero */

loc_00363693: ;
    eax = 0x330;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0036369E;

loc_0036369B: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_0036369E: ;
    ecx = ebx + 0x160;
    esi = MEM32(ecx);
    eax = eax >> 4;
    eax = eax + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(ecx) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003636C5; /* je: equal / zero */

loc_003636B1: ;
    eax = MEM32(ebx + 0x100);
    ecx = ebx;
    MEM32(ebx + eax * 4 + 0x144) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003636C5u); RECOMP_ABI_CALL(0x0036634Eu, sub_0036634E); /* call 0x0036634E */

loc_003636C5: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebx;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003636D0u); RECOMP_ABI_CALL(0x003662D9u, sub_003662D9); /* call 0x003662D9 */

loc_003636D0: ;
    ecx = MEM32(ebp + 0x10);
    eax = 0; /* xor self */
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = esi;
    MEM16(ecx + 6) = 1;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003636F7u); RECOMP_ABI_CALL(0x0036338Du, sub_0036338D); /* call 0x0036338D */

loc_003636F7: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363701
 * Original: 0x00363701 - 0x0036376C (107 bytes, 31 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363701(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363701: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);

loc_00363707: ;
    _fa = (uint32_t)(MEM8(esi + 0x3214)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3214), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00363722; /* je: equal / zero */

loc_00363710: ;
    _fa = (uint32_t)(MEM8(esi + 0x2400)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2400), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00363722; /* je: equal / zero */

loc_00363719: ;
    _fa = (uint32_t)(MEM8(esi + 0x3220)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3220), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036374E; /* je: equal / zero */

loc_00363722: ;
    ecx = edi;
    PUSH32(esp, 0x00363729u); RECOMP_ABI_CALL(0x00363070u, sub_00363070); /* call 0x00363070 */

loc_00363729: ;
    _fa = (uint32_t)(MEM32(esi + 0x400100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x400100), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00363739; /* je: equal / zero */

loc_00363732: ;
    ecx = edi;
    PUSH32(esp, 0x00363739u); RECOMP_ABI_CALL(0x00362FC0u, sub_00362FC0); /* call 0x00362FC0 */

loc_00363739: ;
    _fa = (uint32_t)(MEM32(esi + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x100), 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00363707; /* je: equal / zero */

loc_00363745: ;
    ecx = edi;
    PUSH32(esp, 0x0036374Cu); RECOMP_ABI_CALL(0x00362A50u, sub_00362A50); /* call 0x00362A50 */

loc_0036374C: ;
    goto loc_00363707;

loc_0036374E: ;
    edx = MEM32(esp + 0xC);
    eax = esi + 0x3220;
    ecx = MEM32(eax);
    POP32(esp, edi);
    MEM32(edx) = ecx;
    MEM32(eax) = 0;
    POP32(esp, esi);

loc_00363764: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00363764; /* jne: not equal / not zero */

loc_00363769: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036376C
 * Original: 0x0036376C - 0x00363781 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036376C(void)
{

loc_0036376C: ;
    eax = MEM32(ecx);
    ecx = eax + 0x9410;
    edx = MEM32(ecx);
    eax = MEM32(eax + 0x9400);
    ecx = MEM32(ecx);
    edx = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00363781
 * Original: 0x00363781 - 0x0036379F (30 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363781(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363781: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    MEM32(esi + 0x9140) = edx;
    MEM32(ecx + 0x818) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036379F
 * Original: 0x0036379F - 0x0036386D (206 bytes, 67 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0036379F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0036379F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_003637BF; /* je: equal / zero */

loc_003637AE: ;
    _fa = (uint32_t)(MEM32(ecx + 0x844)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x844), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003637B7; /* jne: not equal / not zero */

loc_003637B6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003637B7: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    goto loc_003637E4;

loc_003637BF: ;
    eax = ecx + 0x844;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003637CC; /* je: equal / zero */

loc_003637C9: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003637CC: ;
    MEM32(eax) = esi;
    edx = edi + 0x9410;
    eax = MEM32(edx);
    eax = MEM32(edi + 0x9400);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + 8))) >> 32) & 1);
    eax = eax + MEM32(ebp + 8);
    edx = MEM32(edx);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(ebp + 0xC)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */

loc_003637E4: ;
    MEM32(ecx + esi * 8 + 0x830) = eax;
    MEM32(ecx + esi * 8 + 0x834) = edx;
    ebx = MEM32(ecx + 0x834);
    esi = MEM32(ecx + 0x83C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(ecx + 0x830);
    eax = MEM32(ecx + 0x838);
    if (CMP_B(_fa, _fb)) goto loc_00363818; /* jb: below (unsigned <) */

loc_0036380E: ;
    if (CMP_A(_fa, _fb)) goto loc_00363814; /* ja: above (unsigned >) */

loc_00363810: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00363818; /* jb: below (unsigned <) */

loc_00363814: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | esi;
    if ((eax != 0)) goto loc_00363828; /* jne: not equal / not zero */

loc_00363818: ;
    _cf = 0; /* logical op clears CF */
    edx = edx | ebx;
    if ((edx == 0)) goto loc_00363828; /* je: equal / zero */

loc_0036381C: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ecx + 0x840) = MEM32(ecx + 0x840) & 0;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00363831;

loc_00363828: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x840) = edx;

loc_00363831: ;
    esi = MEM32(ecx + 0x840);
    eax = MEM32(ecx + esi * 8 + 0x830);
    esi = MEM32(ecx + esi * 8 + 0x834);
    ebx = eax;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | esi;
    if ((ebx == 0)) goto loc_00363866; /* je: equal / zero */

loc_0036384B: ;
    MEM32(edi + 0x9420) = eax;
    eax = ecx + 0x818;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00363866; /* jne: not equal / not zero */

loc_0036385C: ;
    ecx = MEM32(ecx);
    MEM32(ecx + 0x9140) = edx;
    MEM32(eax) = edx;

loc_00363866: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036386D
 * Original: 0x0036386D - 0x003638B4 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036386D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036386D: ;
    edx = MEM32(0x3C6CCC);
    _fa = (uint32_t)(MEM8(edx + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 1), 2 (8-bit) */
    eax = MEM32(ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_003638B3; /* jne: not equal / not zero */

loc_0036387B: ;
    ecx = ZX8(MEM8(ecx + 0xA));
    ecx = ecx - 0xF;
    if ((ecx == 0)) goto loc_00363899; /* je: equal / zero */

loc_00363884: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00363892; /* je: equal / zero */

loc_00363887: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003638B3; /* jne: not equal / not zero */

loc_0036388B: ;
    ecx = 0x108E48;
    goto loc_0036389E;

loc_00363892: ;
    ecx = 0xE2194;
    goto loc_0036389E;

loc_00363899: ;
    ecx = 0xDAEBC;

loc_0036389E: ;
    MEM32(eax + 0x680680) = ecx;
    ecx = eax + 0x6806A0;
    eax = MEM32(ecx);
    eax = ~eax;
    eax = eax & 1;
    MEM32(ecx) = eax;

loc_003638B3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003638B4
 * Original: 0x003638B4 - 0x00363A16 (354 bytes, 115 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003638B4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003638B4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x363200);
    eax = esi + 0x84;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CFC); PUSH32(esp, 0x003638D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003638D1: ;
    eax = esi + 0x1AC;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    MEM32(esi + 0x1B0) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x19C;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    MEM8(esi + 0x1A4) = 0;
    MEM8(esi + 0x1A6) = 4;
    MEM32(esi + 0x1A8) = ebx;
    MEM8(esi + 0x194) = 0;
    MEM8(esi + 0x196) = 4;
    MEM32(esi + 0x198) = ebx;
    MEM32(esi + 0x1A0) = eax;
    MEM32(eax) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036391Fu); RECOMP_ABI_CALL(0x003633C1u, sub_003633C1); /* call 0x003633C1 */

loc_0036391F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0036392A; /* jne: not equal / not zero */

loc_00363923: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_00363A12;

loc_0036392A: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00363931u); RECOMP_ABI_CALL(0x003633ECu, sub_003633EC); /* call 0x003633EC */

loc_00363931: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00363923; /* je: equal / zero */

loc_00363935: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(0x3C6D30); PUSH32(esp, 0x00363942u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00363942: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -16));
    edi = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x362850);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x3C6D2C); PUSH32(esp, 0x00363959u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00363959: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x3C6D28); PUSH32(esp, 0x00363960u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00363960: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0036396B; /* jne: not equal / not zero */

loc_00363964: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_00363A11;

loc_0036396B: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x168) = MEM32(esi + 0x168) & 0;
    eax = esi + 0x164;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(eax) = 0x362C90;
    { uint32_t _icall_target = MEM32(0x3C6CD0); PUSH32(esp, 0x00363986u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00363986: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036398Du); RECOMP_ABI_CALL(0x0036342Du, sub_0036342D); /* call 0x0036342D */

loc_0036398D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00363964; /* je: equal / zero */

loc_00363991: ;
    eax = esi + 0x2DC;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -12) = 2;
    edx = 0x100;

loc_003639A6: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_003639A8: ;
    ecx = MEM32(ebp + -4);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    edi = 0xFFFFFF00u;
    MEM8(edi + ecx) = LO8(eax);
    edi = 0x100;
    MEM8(ecx) = LO8(eax);
    MEM8(edi + ecx) = LO8(eax);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003639A8; /* jb: below (unsigned <) */

loc_003639C4: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + -4)) + (uint64_t)(0x300)) >> 32) & 1);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0x300;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003639A6; /* jne: not equal / not zero */

loc_003639D0: ;
    edi = MEM32(0x3C6D24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    SET_LO16(edx, 0x80C0);
    SET_LO8(eax, LO8(ebx));
    PUSH32(esp, 4);
    /* TODO: out dx, al */
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x003639ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003639EC: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -5) = MEM8(ebp + -5) | 0x1F;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x003639FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003639FE: ;
    ecx = esi;
    MEM32(esi + 0xA0) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00363A0Bu); RECOMP_ABI_CALL(0x003634B0u, sub_003634B0); /* call 0x003634B0 */

loc_00363A0B: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);

loc_00363A11: ;
    POP32(esp, edi);

loc_00363A12: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00363A16
 * Original: 0x00363A16 - 0x00363C04 (494 bytes, 141 insns)
 * Category: game_render
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00363A16(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363A16: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    PUSH32(esp, edi);
    eax = ebp + -32;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00363A2Du); RECOMP_ABI_CALL(0x00363701u, sub_00363701); /* call 0x00363701 */

loc_00363A2D: ;
    edi = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0xC);
    eax = eax & 1;
    MEM32(ebp + -20) = eax;
    eax = 0x1FFC;
    ecx = edi * 4 + 0x10;
    ecx = ecx & eax;
    ebx = 0xEA0000;
    ecx = ecx | ebx;
    MEM32(ebp + -12) = ecx;
    ecx = edi * 4 + 0x30;
    ecx = ecx & eax;
    ecx = ecx | ebx;
    MEM32(ebp + -24) = ecx;
    ecx = MEM32(ebp + 0x10);
    ecx = edx + ecx + -1;
    MEM32(ebp + -16) = ecx;
    ecx = edi * 4 + 0x50;
    ecx = ecx & eax;
    eax = edi + 0x10024;
    eax = eax << 4;
    eax = eax + esi;
    MEM32(ebp + 8) = eax;
    eax = edi + 0x40090;
    eax = eax << 4;
    eax = eax + esi;
    MEM32(ebp + 0x10) = eax;
    eax = edi;
    ecx = ecx | ebx;
    eax = eax << 4;
    eax = eax + esi;
    MEM32(ebp + -28) = ecx;
    MEM32(ebp + -4) = eax;

loc_00363AA0: ;
    ecx = MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00363AA8u); RECOMP_ABI_CALL(0x00365E8Cu, sub_00365E8C); /* call 0x00365E8C */

loc_00363AA8: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    eax = MEM32(ebp + -4);
    edx = MEM32(ebp + -16);
    ecx = MEM32(ebp + 0x14);
    MEM32(eax + 0x100244) = edx;
    MEM32(eax + 0x100248) = ecx;
    MEM32(eax + 0x400904) = edx;
    edx = MEM32(ebp + 0x10);
    MEM32(eax + 0x400908) = ecx;
    eax = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_00363ADA; /* je: equal / zero */

loc_00363AD5: ;
    eax = eax | 3;
    goto loc_00363ADD;

loc_00363ADA: ;
    eax = eax | 1;

loc_00363ADD: ;
    MEM32(edx) = eax;
    edx = MEM32(ebp + 8);
    MEM32(edx) = eax;
    edx = MEM32(ebp + -12);
    MEM32(esi + 0x400750) = edx;
    MEM32(esi + 0x400754) = eax;
    eax = MEM32(ebp + -24);
    MEM32(esi + 0x400750) = eax;
    eax = MEM32(ebp + -16);
    MEM32(esi + 0x400754) = eax;
    eax = MEM32(ebp + -28);
    MEM32(esi + 0x400750) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x400754) = ecx;
    eax = MEM32(eax);
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00363AA0; /* jne: not equal / not zero */

loc_00363B20: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ecx + 0x100248);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x400908)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x400908) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00363AA0; /* jne: not equal / not zero */

loc_00363B35: ;
    eax = ecx;
    ecx = MEM32(eax + 0x100244);
    eax = MEM32(eax + 0x400904);
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFC000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFC000u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00363AA0; /* jne: not equal / not zero */

loc_00363B50: ;
    ecx = 0x80000000u;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x18), ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00363BF1; /* je: equal / zero */

loc_00363B5E: ;
    eax = MEM32(ebp + 0x1C);
    eax = eax >> 2;
    eax = eax | ecx;
    ecx = 0x4000000;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x18), ecx (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00363B78; /* je: equal / zero */

loc_00363B73: ;
    eax = eax | ecx;
    MEM32(ebp + 0xC) = eax;

loc_00363B78: ;
    eax = edi * 4 + 0x90;
    eax = eax & 0x1FFC;
    eax = eax | ebx;
    MEM32(ebp + 0x18) = eax;
    ebx = esi + edi * 4 + 0x100300;

loc_00363B90: ;
    ecx = MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00363B98u); RECOMP_ABI_CALL(0x00365E8Cu, sub_00365E8C); /* call 0x00365E8C */

loc_00363B98: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x18);
    MEM32(ebx) = eax;
    MEM32(esi + edi * 4 + 0x400980) = eax;
    MEM32(esi + 0x400750) = ecx;
    MEM32(esi + 0x400754) = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + edi * 4 + 0x400980)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + edi * 4 + 0x400980) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00363B90; /* jne: not equal / not zero */

loc_00363BBE: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00363BF1; /* je: equal / zero */

loc_00363BC4: ;
    edi = edi | MEM32(ebp + 0x20);
    ebx = esi + 0x100324;
    edi = edi | 0x80000000u;
    MEM32(ebp + 0xC) = edi;
    edi = esi + 0x4009A0;

loc_00363BDC: ;
    ecx = MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00363BE4u); RECOMP_ABI_CALL(0x00365E8Cu, sub_00365E8C); /* call 0x00365E8C */

loc_00363BE4: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebx) = eax;
    MEM32(edi) = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00363BDC; /* jne: not equal / not zero */

loc_00363BF1: ;
    eax = MEM32(ebp + -32);
    MEM32(esi + 0x3220) = eax;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00363C04
 * Original: 0x00363C04 - 0x00363CC6 (194 bytes, 56 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00363C04(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363C04: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00363C1Bu); RECOMP_ABI_CALL(0x00363701u, sub_00363701); /* call 0x00363701 */

loc_00363C1B: ;
    edi = MEM32(ebp + 8);
    eax = edi + 0x10024;
    eax = eax << 4;
    eax = eax + esi;
    MEM32(ebp + 8) = eax;
    ebx = edi * 4 + 0x10;
    ebx = ebx & 0x1FFC;
    eax = edi + 0x40090;
    eax = eax << 4;
    ebx = ebx | 0xEA0000;
    eax = eax + esi;
    MEM32(ebp + -8) = eax;

loc_00363C4D: ;
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00363C55u); RECOMP_ABI_CALL(0x00365E8Cu, sub_00365E8C); /* call 0x00365E8C */

loc_00363C55: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    edx = 0; /* xor self */
    MEM32(eax) = edx;
    MEM32(ecx) = edx;
    MEM32(esi + 0x400750) = ebx;
    MEM32(esi + 0x400754) = edx;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00363C4D; /* jne: not equal / not zero */

loc_00363C73: ;
    eax = 0; /* xor self */
    ecx = edi * 4 + 0x90;
    ecx = ecx & 0x1FFC;
    MEM32(esi + edi * 4 + 0x100300) = eax;
    ecx = ecx | 0xEA0000;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    MEM32(esi + edi * 4 + 0x400980) = eax;
    MEM32(esi + 0x400750) = ecx;
    MEM32(esi + 0x400754) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00363CB3; /* je: equal / zero */

loc_00363CA7: ;
    MEM32(esi + 0x100324) = eax;
    MEM32(esi + 0x4009A0) = eax;

loc_00363CB3: ;
    eax = MEM32(ebp + -12);
    MEM32(esi + 0x3220) = eax;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00363CC6
 * Original: 0x00363CC6 - 0x00363E82 (444 bytes, 119 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00363CC6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363CC6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    eax = edi + 0x818;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00363CE7; /* je: equal / zero */

loc_00363CDF: ;
    MEM32(esi + 0x9140) = ebx;
    MEM32(eax) = ebx;

loc_00363CE7: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6D10); PUSH32(esp, 0x00363CEDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00363CED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00363CFD; /* jne: not equal / not zero */

loc_00363CF1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 9);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x3C6D14); PUSH32(esp, 0x00363CFDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00363CFD: ;
    MEM32(ebp + -4) = ebx;

loc_00363D00: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00363D0Cu); RECOMP_ABI_CALL(0x00363C04u, sub_00363C04); /* call 0x00363C04 */

loc_00363D0C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00363D00; /* jl: less (signed <) */

loc_00363D15: ;
    MEM32(esi + 0x2044) = ebx;

loc_00363D1B: ;
    _fa = (uint32_t)(MEM8(esi + 0x3214)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3214), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00363D36; /* je: equal / zero */

loc_00363D24: ;
    _fa = (uint32_t)(MEM8(esi + 0x2400)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2400), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00363D36; /* je: equal / zero */

loc_00363D2D: ;
    _fa = (uint32_t)(MEM8(esi + 0x3220)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3220), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00363D61; /* je: equal / zero */

loc_00363D36: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00363D3Du); RECOMP_ABI_CALL(0x00363070u, sub_00363070); /* call 0x00363070 */

loc_00363D3D: ;
    _fa = (uint32_t)(MEM32(esi + 0x400100)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x400100), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00363D4C; /* je: equal / zero */

loc_00363D45: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00363D4Cu); RECOMP_ABI_CALL(0x00362FC0u, sub_00362FC0); /* call 0x00362FC0 */

loc_00363D4C: ;
    _fa = (uint32_t)(MEM32(esi + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x100), 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00363D1B; /* je: equal / zero */

loc_00363D58: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00363D5Fu); RECOMP_ABI_CALL(0x00362A50u, sub_00362A50); /* call 0x00362A50 */

loc_00363D5F: ;
    goto loc_00363D1B;

loc_00363D61: ;
    eax = esi + 0x3220;
    MEM32(eax) = ebx;

loc_00363D69: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00363D69; /* jne: not equal / not zero */

loc_00363D6E: ;
    MEM32(esi + 0x2500) = ebx;
    MEM32(esi + 0x3000) = ebx;
    MEM32(esi + 0x3050) = ebx;
    MEM32(esi + 0x3200) = ebx;
    MEM32(esi + 0x3250) = ebx;
    PUSH32(esp, 1);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00363D95u); RECOMP_ABI_CALL(0x00365F04u, sub_00365F04); /* call 0x00365F04 */

loc_00363D95: ;
    MEM32(esi + 0x3210) = ebx;
    MEM32(esi + 0x3270) = ebx;
    eax = MEM32(esi + 0x2500);
    MEM32(ebp + -16) = eax;
    eax = MEM32(esi + 0x3200);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x3250);
    MEM32(esi + 0x2500) = ebx;
    MEM32(esi + 0x3200) = ebx;
    MEM32(ebp + -8) = eax;
    MEM32(esi + 0x3250) = ebx;
    MEM32(ebp + -4) = ebx;

loc_00363DD1: ;
    _fa = (uint32_t)(MEM32(edi + 0x108)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x108), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00363DF8; /* je: equal / zero */

loc_00363DD9: ;
    ecx = MEM32(ebp + -4);
    eax = edi + 0x128;
    edx = MEM32(eax);
    ecx = ecx + esi;
    ecx = ecx + edx;
    edx = MEM32(ecx);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(ebp + -4);
    eax = MEM32(eax);
    ecx = ecx + esi;
    MEM32(ecx + eax + 0x10) = ebx;

loc_00363DF8: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0x40;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x80 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00363DD1; /* jb: below (unsigned <) */

loc_00363E05: ;
    eax = MEM32(ebp + -8);
    MEM32(esi + 0x3250) = eax;
    eax = MEM32(ebp + -12);
    MEM32(esi + 0x3200) = eax;
    eax = MEM32(ebp + -16);
    MEM32(esi + 0x2500) = eax;
    MEM32(esi + 0x2508) = ebx;
    MEM32(esi + 0x2140) = ebx;
    PUSH32(esp, 2);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00363E35u); RECOMP_ABI_CALL(0x00366D2Du, sub_00366D2D); /* call 0x00366D2D */

loc_00363E35: ;
    eax = MEM32(edi + 0x14C);
    MEM32(esi + 0x100200) = eax;
    eax = MEM32(edi + 0x150);
    MEM32(esi + 0x100204) = eax;
    eax = MEM32(edi + 0x154);
    MEM32(esi + 0x200) = eax;
    eax = MEM32(edi + 0x158);
    MEM32(esi + 0x140) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = edi + 0x164;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CD0); PUSH32(esp, 0x00363E73u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00363E73: ;
    edi = edi + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x3C6D34); PUSH32(esp, 0x00363E7Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00363E7D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00363E90
 * Original: 0x00363E90 - 0x00363F28 (152 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363E90: ;
    ecx = MEM32(0x36CA04);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00363F27; /* je: equal / zero */

loc_00363EA0: ;
    eax = MEM32(0x36CA08);
    ecx = MEM32(0x36CA0C);
    eax = eax << 2;
    eax = eax | ecx;
    ecx = MEM32(0x36CA10);
    eax = eax << 2;
    eax = eax | ecx;
    ecx = MEM32(0x36CA14);
    eax = eax << 2;
    eax = eax | ecx;
    ecx = MEM32(0x36CA18);
    eax = eax << 2;
    eax = eax | ecx;
    ecx = MEM32(0x36CA1C);
    eax = eax << 2;
    eax = eax | ecx;
    ecx = MEM32(0x36CA20);
    eax = eax << 2;
    eax = eax | ecx;
    ecx = MEM32(0x36CA24);
    eax = eax << 2;
    eax = eax | ecx;
    ecx = MEM32(0x36CAF8);
    ecx = MEM32(ecx + 0x794);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00363F09; /* jne: not equal / not zero */

loc_00363F06: ;
    eax = eax & 0xFFFFFFAAu;

loc_00363F09: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00363F13; /* jne: not equal / not zero */

loc_00363F0E: ;
    eax = eax & 0xFFFFFF55u;

loc_00363F13: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00363F1D; /* jne: not equal / not zero */

loc_00363F18: ;
    eax = eax & 0xFFFFAAFFu;

loc_00363F1D: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00363F27; /* jne: not equal / not zero */

loc_00363F22: ;
    eax = eax & 0xFFFF55FFu;

loc_00363F27: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00363F30
 * Original: 0x00363F30 - 0x00364095 (357 bytes, 99 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363F30(void)
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

loc_00363F30: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00363F45; /* jb: below (unsigned <) */

loc_00363F40: ;
    PUSH32(esp, 0x00363F45u); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_00363F45: ;
    ecx = MEM32(0x36CA34);
    edx = MEM32(0x36CA4C);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(0x36CA30);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(0x36CA3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    esi = eax;
    MEM32(esp + 0x20) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00363FB9; /* jne: not equal / not zero */

loc_00363F6F: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(edi + 0x964); /* fmul dword ptr [edi + 0x964] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00363F8A; /* jp: parity */

loc_00363F84: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */

loc_00363F8A: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00363F9B; /* jne: not equal / not zero */

loc_00363F95: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */

loc_00363F9B: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x36B2A4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x36b2a4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036404C; /* jne: not equal / not zero */

loc_00363FAC: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x36B2A4)); /* fld float */
    goto loc_0036404C;

loc_00363FB9: ;
    edx = MEM32(0x36CA40);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 8); /* fsub dword ptr [esp + 8] */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(0x36CA44);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(0x36CA48);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(edi + 0xEEC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 0xC) = edx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00363FFF; /* jge: greater or equal (signed >=) */

loc_00363FF9: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00363FFF: ;
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEM32(eax) = 0x200A30;
    edx = MEM32(esp + 0x20);
    fp_top() = MEMF(esp + 0x20) / fp_top(); /* fdivr dword ptr [esp + 0x20] */
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 8);
    MEM32(eax + 0x20) = edx;
    esi = eax + 0x24;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x20); /* fdiv dword ptr [esp + 0x20] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0036404C: ;
    fp_top() = fp_top() * MEMF(0x3CA800); /* fmul dword ptr [0x3ca800] */
    eax = MEM32(0x36CA38);
    MEM32(esi) = 0x80318;
    PUSH32(esp, ecx);
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00364072u); RECOMP_ABI_CALL(0x00361690u, sub_00361690); /* call 0x00361690 */

loc_00364072: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1FF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0036407E; /* jbe: below or equal (unsigned <=) */

loc_00364079: ;
    eax = 0x1FF;

loc_0036407E: ;
    MEM32(esi + 0xC) = 0x4043C;
    MEM32(esi + 0x10) = eax;
    esi = esi + 0x14;
    MEM32(edi) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003640A0
 * Original: 0x003640A0 - 0x0036441C (892 bytes, 306 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003640A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003640A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x784);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00364206; /* jne: not equal / not zero */

loc_003640B4: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ecx = 1;
    if (((int32_t)((_fa) & (_fb)) >= 0)) goto loc_003640C4; /* jns: not sign (positive) */

loc_003640C0: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    goto loc_00364102;

loc_003640C4: ;
    edx = MEM32(0x36C790);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x19 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003640D6; /* jne: not equal / not zero */

loc_003640CF: ;
    ecx = 6;
    goto loc_00364102;

loc_003640D6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1A (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003640E2; /* jne: not equal / not zero */

loc_003640DB: ;
    ecx = 7;
    goto loc_00364102;

loc_003640E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003640ED; /* je: equal / zero */

loc_003640E6: ;
    ecx = 3;
    goto loc_00364102;

loc_003640ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x40000000 (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003640FD; /* jne: not equal / not zero */

loc_003640F4: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF0;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x30 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00364102; /* jne: not equal / not zero */

loc_003640FD: ;
    ecx = 2;

loc_00364102: ;
    eax = ecx;
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    edx = 1;
    if (((int32_t)((_fa) & (_fb)) >= 0)) goto loc_00364114; /* jns: not sign (positive) */

loc_00364110: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    goto loc_00364156;

loc_00364114: ;
    esi = MEM32(0x36C710);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x19 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00364126; /* jne: not equal / not zero */

loc_0036411F: ;
    edx = 6;
    goto loc_00364156;

loc_00364126: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1A (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00364132; /* jne: not equal / not zero */

loc_0036412B: ;
    edx = 7;
    goto loc_00364156;

loc_00364132: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0036413E; /* je: equal / zero */

loc_00364137: ;
    edx = 3;
    goto loc_00364156;

loc_0036413E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x40000000 (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00364151; /* jne: not equal / not zero */

loc_00364146: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF0;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00364156; /* jne: not equal / not zero */

loc_00364151: ;
    edx = 2;

loc_00364156: ;
    ecx = MEM32(edi + 0x10);
    if (5) _cf = (int)(((eax) >> (32 - (5))) & 1);
    eax = eax << 5;
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    edx = 1;
    if (((int32_t)((_fa) & (_fb)) >= 0)) goto loc_0036416B; /* jns: not sign (positive) */

loc_00364167: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    goto loc_003641AD;

loc_0036416B: ;
    esi = MEM32(0x36C690);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x19 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036417D; /* jne: not equal / not zero */

loc_00364176: ;
    edx = 6;
    goto loc_003641AD;

loc_0036417D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1A (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00364189; /* jne: not equal / not zero */

loc_00364182: ;
    edx = 7;
    goto loc_003641AD;

loc_00364189: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00364195; /* je: equal / zero */

loc_0036418E: ;
    edx = 3;
    goto loc_003641AD;

loc_00364195: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x40000000 (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003641A8; /* jne: not equal / not zero */

loc_0036419D: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF0;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003641AD; /* jne: not equal / not zero */

loc_003641A8: ;
    edx = 2;

loc_003641AD: ;
    ecx = MEM32(edi + 0xC);
    if (5) _cf = (int)(((eax) >> (32 - (5))) & 1);
    eax = eax << 5;
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    edx = 1;
    if (((int32_t)((_fa) & (_fb)) >= 0)) goto loc_003641CC; /* jns: not sign (positive) */

loc_003641BE: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    if (5) _cf = (int)(((eax) >> (32 - (5))) & 1);
    eax = eax << 5;
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    esi = eax;
    goto loc_003643FD;

loc_003641CC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003641E2; /* je: equal / zero */

loc_003641D1: ;
    edx = 3;
    if (5) _cf = (int)(((eax) >> (32 - (5))) & 1);
    eax = eax << 5;
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    esi = eax;
    goto loc_003643FD;

loc_003641E2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x40000000 (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003641F5; /* jne: not equal / not zero */

loc_003641EA: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF0;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003641FA; /* jne: not equal / not zero */

loc_003641F5: ;
    edx = 2;

loc_003641FA: ;
    if (5) _cf = (int)(((eax) >> (32 - (5))) & 1);
    eax = eax << 5;
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    esi = eax;
    goto loc_003643FD;

loc_00364206: ;
    eax = MEM32(edi + 0x78C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    esi = MEM32(edi + 0x790);
    if (TEST_Z(_fa, _fb)) goto loc_003643FD; /* je: equal / zero */

loc_0036421A: ;
    ecx = MEM32(edi + 0x18);
    eax = esi;
    if (0xF) _cf = (int)(((eax) >> ((0xF) - 1)) & 1);
    eax = eax >> 0xF;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (((int32_t)((_fa) & (_fb)) >= 0)) goto loc_00364241; /* jns: not sign (positive) */

loc_00364229: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00364241; /* je: equal / zero */

loc_0036422E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00364241; /* je: equal / zero */

loc_00364233: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00364241; /* je: equal / zero */

loc_00364238: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00364241; /* je: equal / zero */

loc_0036423D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_00364290;

loc_00364241: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00364278; /* jb: below (unsigned <) */

loc_00364246: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00364278; /* ja: above (unsigned >) */

loc_0036424B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00364257; /* je: equal / zero */

loc_00364250: ;
    eax = 3;
    goto loc_00364290;

loc_00364257: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x40000000 (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00364271; /* jne: not equal / not zero */

loc_0036425F: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF0;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00364271; /* je: equal / zero */

loc_0036426A: ;
    eax = 1;
    goto loc_00364290;

loc_00364271: ;
    eax = 2;
    goto loc_00364290;

loc_00364278: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00364282; /* je: equal / zero */

loc_0036427D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00364290; /* jne: not equal / not zero */

loc_00364282: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 4);
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xD)) >> 32) & 1);
    ecx = ecx + 0xD;
    eax = ecx;

loc_00364290: ;
    edx = MEM32(edi + 0x14);
    ecx = esi;
    if (0xA) _cf = (int)(((ecx) >> ((0xA) - 1)) & 1);
    ecx = ecx >> 0xA;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (((int32_t)((_fa) & (_fb)) >= 0)) goto loc_003642B7; /* jns: not sign (positive) */

loc_0036429F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003642B7; /* je: equal / zero */

loc_003642A4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003642B7; /* je: equal / zero */

loc_003642A9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003642B7; /* je: equal / zero */

loc_003642AE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x11 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003642B7; /* je: equal / zero */

loc_003642B3: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    goto loc_00364306;

loc_003642B7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003642EE; /* jb: below (unsigned <) */

loc_003642BC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_003642EE; /* ja: above (unsigned >) */

loc_003642C1: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003642CD; /* je: equal / zero */

loc_003642C6: ;
    ecx = 3;
    goto loc_00364306;

loc_003642CD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x40000000 (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003642E7; /* jne: not equal / not zero */

loc_003642D5: ;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xF0;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x30 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003642E7; /* je: equal / zero */

loc_003642E0: ;
    ecx = 1;
    goto loc_00364306;

loc_003642E7: ;
    ecx = 2;
    goto loc_00364306;

loc_003642EE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003642F8; /* je: equal / zero */

loc_003642F3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xE (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00364306; /* jne: not equal / not zero */

loc_003642F8: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 4);
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xD)) >> 32) & 1);
    edx = edx + 0xD;
    ecx = edx;

loc_00364306: ;
    if (5) _cf = (int)(((eax) >> (32 - (5))) & 1);
    eax = eax << 5;
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    ecx = MEM32(edi + 0x10);
    edx = eax;
    eax = esi;
    if (5) _cf = (int)(((eax) >> ((5) - 1)) & 1);
    eax = eax >> 5;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (((int32_t)((_fa) & (_fb)) >= 0)) goto loc_00364334; /* jns: not sign (positive) */

loc_0036431C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00364334; /* je: equal / zero */

loc_00364321: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00364334; /* je: equal / zero */

loc_00364326: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00364334; /* je: equal / zero */

loc_0036432B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00364334; /* je: equal / zero */

loc_00364330: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_00364383;

loc_00364334: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0036436B; /* jb: below (unsigned <) */

loc_00364339: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0036436B; /* ja: above (unsigned >) */

loc_0036433E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0036434A; /* je: equal / zero */

loc_00364343: ;
    eax = 3;
    goto loc_00364383;

loc_0036434A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x40000000 (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00364364; /* jne: not equal / not zero */

loc_00364352: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF0;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00364364; /* je: equal / zero */

loc_0036435D: ;
    eax = 1;
    goto loc_00364383;

loc_00364364: ;
    eax = 2;
    goto loc_00364383;

loc_0036436B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00364375; /* je: equal / zero */

loc_00364370: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00364383; /* jne: not equal / not zero */

loc_00364375: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 4);
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xD)) >> 32) & 1);
    ecx = ecx + 0xD;
    eax = ecx;

loc_00364383: ;
    if (5) _cf = (int)(((edx) >> (32 - (5))) & 1);
    edx = edx << 5;
    _cf = 0; /* logical op clears CF */
    edx = edx | eax;
    eax = MEM32(edi + 0xC);
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ecx = esi;
    if (((int32_t)((_fa) & (_fb)) >= 0)) goto loc_003643AC; /* jns: not sign (positive) */

loc_00364394: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003643AC; /* je: equal / zero */

loc_00364399: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003643AC; /* je: equal / zero */

loc_0036439E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003643AC; /* je: equal / zero */

loc_003643A3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x11 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003643AC; /* je: equal / zero */

loc_003643A8: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    goto loc_003643F6;

loc_003643AC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003643DF; /* jb: below (unsigned <) */

loc_003643B1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_003643DF; /* ja: above (unsigned >) */

loc_003643B6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003643C1; /* je: equal / zero */

loc_003643BA: ;
    ecx = 3;
    goto loc_003643F6;

loc_003643C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x40000000 (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003643D8; /* jne: not equal / not zero */

loc_003643C8: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF0;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x30 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003643D8; /* je: equal / zero */

loc_003643D1: ;
    ecx = 1;
    goto loc_003643F6;

loc_003643D8: ;
    ecx = 2;
    goto loc_003643F6;

loc_003643DF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003643E9; /* je: equal / zero */

loc_003643E4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xE (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003643F6; /* jne: not equal / not zero */

loc_003643E9: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 4);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xD)) >> 32) & 1);
    eax = eax + 0xD;
    ecx = eax;

loc_003643F6: ;
    if (5) _cf = (int)(((edx) >> (32 - (5))) & 1);
    edx = edx << 5;
    _cf = 0; /* logical op clears CF */
    edx = edx | ecx;
    esi = edx;

loc_003643FD: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00364409; /* jb: below (unsigned <) */

loc_00364404: ;
    PUSH32(esp, 0x00364409u); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_00364409: ;
    MEM32(eax) = 0x41E70;
    MEM32(eax + 4) = esi;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00364420
 * Original: 0x00364420 - 0x00364605 (485 bytes, 142 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364420(void)
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

loc_00364420: ;
    esp = esp - 0x18;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = ecx + 0x774;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 0x41B14;
    MEM32(esp + 0x18) = ecx;
    esi = 0x36C664;
    MEM32(esp + 0x1C) = 4;
    /* nop */

loc_00364450: ;
    _fa = (uint32_t)(MEM8(esp + 0x30)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x30), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003645CA; /* je: equal / zero */

loc_0036445B: ;
    eax = MEM32(esi + 4);
    ebp = MEM32(esi);
    edx = MEM32(esi + 0x6C);
    ebx = MEM32(esi + 0x20);
    eax = eax << 8;
    eax = eax | ebp;
    ebp = MEM32(esi + 0x28);
    edx = edx & 0xFFFF;
    edi = MEM32(edx * 4 + 0x36C9E8);
    edx = MEM32(esi + -4);
    eax = eax << 8;
    eax = eax | edi;
    edi = MEM32(esi + 0x18);
    edi = edi << 0x1A;
    eax = eax | edx;
    edi = edi | ebp;
    edi = edi | ebx;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ecx + 0x814);
    edi = edi | 0x3FFC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003644A9; /* je: equal / zero */

loc_003644A3: ;
    edi = edi | 0x40000000;

loc_003644A9: ;
    ebx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    ebp = MEM32(esi + 8);
    MEM32(esp + 0x10) = 0x2000;
    if (CMP_AE(_fa, _fb)) goto loc_003644C4; /* jae: above or equal (unsigned >=) */

loc_003644BC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00364513; /* jb: below (unsigned <) */

loc_003644C1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */

loc_003644C4: ;
    if (CMP_A(_fa, _fb)) goto loc_003644EF; /* ja: above (unsigned >) */

loc_003644C6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003644EF; /* ja: above (unsigned >) */

loc_003644CB: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003644E0; /* jne: not equal / not zero */

loc_003644D2: ;
    ebx = 1;
    eax = eax << 4;
    ebp = ebx;
    edi = edi | eax;
    goto loc_00364513;

loc_003644E0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = 2;
    eax = eax << 4;
    ebp = ebx;
    edi = edi | eax;
    goto loc_00364513;

loc_003644EF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003644F9; /* je: equal / zero */

loc_003644F4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00364501; /* jne: not equal / not zero */

loc_003644F9: ;
    MEM32(esp + 0x10) = 0x4000;

loc_00364501: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) | 0x70000;
    ebx = 2;
    ebp = 4;

loc_00364513: ;
    edx = MEM32(esp + 0x2C);
    eax = edi;
    eax = eax | 0x40000000;
    MEM32(ecx) = eax;
    ecx = MEM32(esi + 0x14);
    MEM32(esp + 0x20) = ecx;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() + MEMF(edx + 0x968); /* fadd dword ptr [edx + 0x968] */
    fp_top() = fp_top() * MEMF(0x3CB254); /* fmul dword ptr [0x3cb254] */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00364546u); RECOMP_ABI_CALL(0x00361690u, sub_00361690); /* call 0x00361690 */

loc_00364546: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFF000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00364554; /* jge: greater or equal (signed >=) */

loc_0036454D: ;
    eax = 0xFFFFF000u;
    goto loc_00364560;

loc_00364554: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00364560; /* jle: less or equal (signed <=) */

loc_0036455B: ;
    eax = 0xFFF;

loc_00364560: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), 0x19 (32-bit) */
    ecx = 0xC0000000u;
    if (CMP_AE(_fa, _fb)) goto loc_0036456E; /* jae: above or equal (unsigned >=) */

loc_0036456B: ;
    ecx = MEM32(esi + 0x24);

loc_0036456E: ;
    edx = ebx + ebx * 2;
    ebx = MEM32(esi + 0x10);
    ebx = ebx + edx;
    edx = MEM32(ebx * 4 + 0x36A2D0);
    ebx = MEM32(esp + 0x2C);
    eax = eax & 0x1FFF;
    eax = eax | edx;
    edx = MEM32(esp + 0x10);
    ebp = ebp << 0x18;
    eax = eax | ebp;
    eax = eax | ecx;
    ecx = MEM32(ebx + 4);
    eax = eax | edx;
    ebp = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003645A5; /* jb: below (unsigned <) */

loc_003645A0: ;
    PUSH32(esp, 0x003645A5u); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_003645A5: ;
    ecx = MEM32(esp + 0x14);
    edx = ecx + 0x3FFF4;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0x10) = ebp;
    eax = eax + 0x14;
    MEM32(ebx) = eax;

loc_003645CA: ;
    edi = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x1C);
    ecx = ecx + 4;
    edi = edi + 0x40;
    edx = edx >> 1;
    esi = esi + 0x80;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x1C) = eax;
    if ((_fa != 0)) goto loc_00364450; /* jne: not equal / not zero */

loc_003645FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00364610
 * Original: 0x00364610 - 0x003647EC (476 bytes, 130 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364610(void)
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

loc_00364610: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = esi;
    PUSH32(esp, 0x0036461Fu); RECOMP_ABI_CALL(0x0035D670u, sub_0035D670); /* call 0x0035D670 */

loc_0036461F: ;
    eax = MEM32(0x36C9D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00364785; /* je: equal / zero */

loc_0036462C: ;
    ecx = MEM32(0x36C9D8);
    eax = MEM32(0x36C9D4);
    edx = MEM32(0x36C9DC);
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(0x36C9E4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(ebx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(0x36C9E0);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x10) = ecx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0036467C; /* jne: not equal / not zero */

loc_00364663: ;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0xC) = 0x3F800000;
    edi = 0x2601;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    goto loc_003646EE;

loc_0036467C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003646C1; /* jne: not equal / not zero */

loc_00364681: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003646A2; /* jnp: not parity */

loc_00364692: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0xC); /* fsub dword ptr [esp + 0xc] */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    goto loc_003646A8;

loc_003646A2: ;
    fp_push(MEMF(0x36B2A8)); /* fld float */

loc_003646A8: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edi = 0x2601;
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = -fp_top(); /* fchs */
    goto loc_003646EA;

loc_003646C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(esp + 0x18) = 0x3FC00000;
    if (CMP_NE(_fa, _fb)) goto loc_003646DF; /* jne: not equal / not zero */

loc_003646D2: ;
    fp_top() = fp_top() * MEMF(0x3E1EB8); /* fmul dword ptr [0x3e1eb8] */
    edi = 0x800;
    goto loc_003646EA;

loc_003646DF: ;
    fp_top() = fp_top() * MEMF(0x3E1EB4); /* fmul dword ptr [0x3e1eb4] */
    edi = 0x801;

loc_003646EA: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_003646EE: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003646FA; /* jb: below (unsigned <) */

loc_003646F5: ;
    PUSH32(esp, 0x003646FAu); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_003646FA: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x18);
    MEM32(eax) = 0x802A0;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = 1;
    MEM32(eax + 0xC) = 0x4029C;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = 0xC09C0;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = 0;
    ecx = MEM32(esi + 0x784);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00364752; /* je: equal / zero */

loc_0036473C: ;
    ecx = MEM32(esi + 0x788);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00364752; /* je: equal / zero */

loc_00364746: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x24)) >> 32) & 1);
    eax = eax + 0x24;
    MEM32(esi) = eax;
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_00364752: ;
    ecx = MEM32(0x36C9FC);
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x20000;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x130C0300)) >> 32) & 1);
    ecx = ecx + 0x130C0300;
    MEM32(eax + 0x24) = 0x80288;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = 0x1C80;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    MEM32(esi) = eax;
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_00364785: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00364791; /* jb: below (unsigned <) */

loc_0036478C: ;
    PUSH32(esp, 0x00364791u); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_00364791: ;
    MEM32(eax) = 0x402A4;
    MEM32(eax + 4) = 0;
    ecx = MEM32(esi + 0x784);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003647BE; /* je: equal / zero */

loc_003647A8: ;
    ecx = MEM32(esi + 0x788);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003647BE; /* je: equal / zero */

loc_003647B2: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    MEM32(esi) = eax;
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_003647BE: ;
    edx = MEM32(0x36C9FC);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(eax + 8) = 0x80288;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x14)) >> 32) & 1);
    eax = eax + 0x14;
    ecx = ecx + ecx + 0xC;
    MEM32(eax + -8) = ecx;
    MEM32(eax + -4) = 0x1C80;
    MEM32(esi) = eax;
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003647F0
 * Original: 0x003647F0 - 0x00364B70 (896 bytes, 278 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003647F0(void)
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

loc_003647F0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x794);
    SET_LO8(edx, MEM8(eax + 4));
    esp = esp - 0xC;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x12 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00364B6A; /* jne: not equal / not zero */

loc_00364809: ;
    edx = MEM32(ecx + 0x1928);
    edx = edx & 0xFFFFFFEFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00364B6A; /* je: equal / zero */

loc_0036481B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = 0x3FF9B4;
    PUSH32(esp, esi);
    eax = eax - ecx;
    ebp = 0x40420;
    MEM32(esp + 0xC) = 0x36C6D0;
    esi = ecx + 0xD0C;
    MEM32(esp + 0x10) = eax;
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    /* nop */

loc_00364840: ;
    eax = MEM32(esp + 0x10);
    edi = MEM32(eax + -28);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00364857; /* jb: below (unsigned <) */

loc_0036484E: ;
    PUSH32(esp, 0x00364853u); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_00364853: ;
    ecx = MEM32(esp + 0x20);

loc_00364857: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036486A; /* jne: not equal / not zero */

loc_0036485B: ;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebx;
    eax = eax + 8;
    MEM32(ecx) = eax;
    goto loc_00364B46;

loc_0036486A: ;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx);
    edx = ecx;
    edx = edx & 0xFFFF0000u;
    MEM32(esp + 0x18) = edx;
    if ((edx == 0)) goto loc_00364885; /* je: equal / zero */

loc_0036487E: ;
    edx = 3;
    goto loc_003648AA;

loc_00364885: ;
    edx = MEM32(esp + 0x20);
    edx = MEM32(edx + 0x794);
    edx = MEM32(edx + 0x10);
    ecx = ecx & 0xFFFF;
    ecx = ecx << 3;
    edx = edx >> LO8(ecx);
    edx = edx & 0xFF;
    if ((edx != 0)) goto loc_003648AA; /* jne: not equal / not zero */

loc_003648A5: ;
    edx = 2;

loc_003648AA: ;
    ecx = edi;
    ecx = ecx & 0xFF;
    edx = edx << 4;
    edx = edx | ecx;
    ecx = MEM32(esp + 0x14);
    edi = edi >> 8;
    edx = edx << 4;
    edi = edi & 1;
    ecx = ecx + esi;
    MEM32(eax) = ebp;
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x320) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x320 (32-bit) */
    MEM32(eax + 4) = 1;
    MEM32(eax + 8) = ecx;
    ecx = eax + 0x4C;
    if (CMP_A(_fa, _fb)) goto loc_00364A59; /* ja: above (unsigned >) */

loc_003648E3: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00364A18; /* je: equal / zero */

loc_003648E9: ;
    edx = ZX8(MEM8(edx + 0x364964));
    { uint32_t _jt = MEM32(edx * 4 + 0x364B70); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003648F7u) goto loc_003648F7;
    if (_jt == 0x00364932u) goto loc_00364932;
    if (_jt == 0x00364970u) goto loc_00364970;
    if (_jt == 0x003649C0u) goto loc_003649C0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003648F7: ;
    fp_push(MEMF(esi + -12)); /* fld float */
    edx = MEM32(esi + -44);
    fp_push(MEMF(esi + -28)); /* fld float */
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x14) = ebx;
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + -40);
    fp_push(MEMF(esi + -8)); /* fld float */
    fp_push(MEMF(esi + -24)); /* fld float */
    MEM32(eax + 0x1C) = edx;
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x24) = ebx;
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x2C) = ebx;
    MEM32(eax + 0x30) = ebx;
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 0x38) = ebx;
    goto loc_00364B2E;

loc_00364932: ;
    fp_push(MEMF(esi + -12)); /* fld float */
    edx = MEM32(esi + -44);
    fp_push(MEMF(esi + -28)); /* fld float */
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x14) = ebx;
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + -40);
    fp_push(MEMF(esi + -8)); /* fld float */
    fp_push(MEMF(esi + -24)); /* fld float */
    MEM32(eax + 0x1C) = edx;
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x24) = ebx;
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + -36);
    fp_push(MEMF(esi + -4)); /* fld float */
    fp_push(MEMF(esi + -20)); /* fld float */
    MEM32(eax + 0x34) = ebx;
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00364B28;

loc_00364970: ;
    fp_push(MEMF(esi + -12)); /* fld float */
    edx = MEM32(esi + -44);
    fp_push(MEMF(esi + -28)); /* fld float */
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x14) = ebx;
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + -40);
    fp_push(MEMF(esi + -8)); /* fld float */
    fp_push(MEMF(esi + -24)); /* fld float */
    MEM32(eax + 0x1C) = edx;
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x24) = ebx;
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x2C) = ebx;
    MEM32(eax + 0x30) = ebx;
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 0x38) = ebx;
    fp_push(MEMF(esi + -4)); /* fld float */
    fp_push(MEMF(esi + -20)); /* fld float */
    edx = MEM32(esi + -36);
    MEMF(eax + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x44) = ebx;
    MEMF(eax + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00364B3E;

loc_003649C0: ;
    fp_push(MEMF(esi + -12)); /* fld float */
    edx = MEM32(esi + -44);
    fp_push(MEMF(esi + -28)); /* fld float */
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x14) = ebx;
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + -40);
    fp_push(MEMF(esi + -8)); /* fld float */
    fp_push(MEMF(esi + -24)); /* fld float */
    MEM32(eax + 0x1C) = edx;
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x24) = ebx;
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + -36);
    fp_push(MEMF(esi + -4)); /* fld float */
    fp_push(MEMF(esi + -20)); /* fld float */
    MEM32(eax + 0x2C) = edx;
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x34) = ebx;
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + -32);
    fp_push(MEMF(esi)); /* fld float */
    fp_push(MEMF(esi + -16)); /* fld float */
    MEM32(eax + 0x3C) = edx;
    MEMF(eax + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x44) = ebx;
    MEMF(eax + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00364B3E;

loc_00364A18: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    edx = MEM32(esi + -44);
    fp_push(MEMF(esi + -12)); /* fld float */
    fp_push(MEMF(esi + -28)); /* fld float */
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + -40);
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_push(MEMF(esi + -8)); /* fld float */
    fp_push(MEMF(esi + -24)); /* fld float */
    MEM32(eax + 0x1C) = edx;
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x2C) = ebx;
    MEM32(eax + 0x30) = ebx;
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 0x38) = ebx;
    goto loc_00364B2E;

loc_00364A59: ;
    edx = edx - 0x330;
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_push(MEMF(esi + -12)); /* fld float */
    fp_push(MEMF(esi + -28)); /* fld float */
    if ((edx == 0)) goto loc_00364AEF; /* je: equal / zero */

loc_00364A6E: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(esi + -44);
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + -40);
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_push(MEMF(esi + -8)); /* fld float */
    fp_push(MEMF(esi + -24)); /* fld float */
    MEM32(eax + 0x1C) = edx;
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa == 0)) goto loc_00364AC9; /* je: equal / zero */

loc_00364A98: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    edx = MEM32(esi + -36);
    fp_push(MEMF(esi + -4)); /* fld float */
    fp_push(MEMF(esi + -20)); /* fld float */
    MEM32(eax + 0x2C) = edx;
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + -32);
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_push(MEMF(esi)); /* fld float */
    fp_push(MEMF(esi + -16)); /* fld float */
    MEM32(eax + 0x3C) = edx;
    MEMF(eax + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00364B3E;

loc_00364AC9: ;
    MEM32(eax + 0x2C) = ebx;
    MEM32(eax + 0x30) = ebx;
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 0x38) = ebx;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_push(MEMF(esi + -4)); /* fld float */
    edx = MEM32(esi + -36);
    fp_push(MEMF(esi + -20)); /* fld float */
    MEM32(eax + 0x3C) = edx;
    MEMF(eax + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00364B3E;

loc_00364AEF: ;
    edx = MEM32(esi + -44);
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + -40);
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_push(MEMF(esi + -8)); /* fld float */
    fp_push(MEMF(esi + -24)); /* fld float */
    MEM32(eax + 0x1C) = edx;
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + -36);
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_push(MEMF(esi + -4)); /* fld float */
    fp_push(MEMF(esi + -20)); /* fld float */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */

loc_00364B28: ;
    MEM32(eax + 0x2C) = edx;
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */

loc_00364B2E: ;
    MEM32(eax + 0x3C) = ebx;
    MEM32(eax + 0x40) = ebx;
    MEM32(eax + 0x44) = ebx;
    MEM32(eax + 0x48) = 0x3F800000;

loc_00364B3E: ;
    eax = MEM32(esp + 0x20);
    MEM32(eax) = ecx;
    ecx = eax;

loc_00364B46: ;
    edi = MEM32(esp + 0x10);
    ebp = ebp + 4;
    edi = edi + 0x80;
    esi = esi + 0x40;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40430) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x40430 (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_B(_fa, _fb)) goto loc_00364840; /* jb: below (unsigned <) */

loc_00364B66: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00364B6A: ;
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00364BB0
 * Original: 0x00364BB0 - 0x00364C9E (238 bytes, 82 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364BB0(void)
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

loc_00364BB0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x36CA94);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ebp = ebp + 0x4820;
    PUSH32(esp, edi);
    edi = MEM32(0x36CAF8);
    ebp = ebp << 7;
    esi = edi + 0xF00;
    MEM32(eax) = ebp;

loc_00364BD5: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xC (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00364BF7; /* jne: not equal / not zero */

loc_00364BDA: ;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x24); /* fmul dword ptr [ecx + 0x24] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x28); /* fmul dword ptr [ecx + 0x28] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x2C); /* fmul dword ptr [ecx + 0x2c] */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00364C09;

loc_00364BF7: ;
    ebp = MEM32(ecx + 0x24);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(ecx + 0x28);
    MEM32(eax + 8) = ebp;
    ebp = MEM32(ecx + 0x2C);
    MEM32(eax + 0xC) = ebp;

loc_00364C09: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x30 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00364C2A; /* jne: not equal / not zero */

loc_00364C0E: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(esi); /* fmul dword ptr [esi] */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0xC); /* fmul dword ptr [ecx + 0xc] */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00364C3C;

loc_00364C2A: ;
    ebp = MEM32(ecx + 4);
    MEM32(eax + 0x10) = ebp;
    ebp = MEM32(ecx + 8);
    MEM32(eax + 0x14) = ebp;
    ebp = MEM32(ecx + 0xC);
    MEM32(eax + 0x18) = ebp;

loc_00364C3C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xC0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xC0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00364C5E; /* jne: not equal / not zero */

loc_00364C41: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x14); /* fmul dword ptr [ecx + 0x14] */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x18); /* fmul dword ptr [ecx + 0x18] */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x1C); /* fmul dword ptr [ecx + 0x1c] */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00364C70;

loc_00364C5E: ;
    esi = MEM32(ecx + 0x14);
    MEM32(eax + 0x1C) = esi;
    esi = MEM32(ecx + 0x18);
    MEM32(eax + 0x20) = esi;
    esi = MEM32(ecx + 0x1C);
    MEM32(eax + 0x24) = esi;

loc_00364C70: ;
    eax = eax + 0x28;
    esi = ebx;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00364C97; /* je: equal / zero */

loc_00364C7A: ;
    esi = MEM32(esp + 0x14);
    esi = esi + 0x9030;
    esi = esi << 6;
    MEM32(eax) = esi;
    edx = edx >> 8;
    esi = edi + 0xF44;
    goto loc_00364BD5;

loc_00364C97: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00364CA0
 * Original: 0x00364CA0 - 0x00364E54 (436 bytes, 117 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364CA0(void)
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

loc_00364CA0: ;
    esp = esp - 0x1C;
    edx = MEM32(0x36CAF8);
    ecx = MEM32(0x36CA94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(0x36CA2C);
    edx = edx + 0xF00;
    esi = 0xC0A10;
    edi = 0xC03A8;
    ebp = 0x403B4;
    goto loc_00364CE0;

    /* nop */
    /* nop */

loc_00364CE0: ;
    ebx = ecx;
    ebx = ebx >> 0x10;
    ebx = ebx & 0xFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00364CFD; /* jge: greater or equal (signed >=) */

loc_00364CF7: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00364CFD: ;
    ebx = ecx;
    ebx = ebx >> 8;
    ebx = ebx & 0xFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00364D20; /* jge: greater or equal (signed >=) */

loc_00364D1A: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00364D20: ;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00364D42; /* jge: greater or equal (signed >=) */

loc_00364D3C: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00364D42: ;
    ebx = MEM32(esp + 0x30);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0xC (8-bit) */
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_Z(_fa, _fb)) goto loc_00364D78; /* je: equal / zero */

loc_00364D55: ;
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x30)); /* fld float */
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x10);
    fp_push(MEMF(edx + 0x34)); /* fld float */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(edx + 0x38);
    MEM32(esp + 0x10) = ecx;
    goto loc_00364DDB;

loc_00364D78: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    fp_top() = fp_top() * MEMF(edx + 0x10); /* fmul dword ptr [edx + 0x10] */
    if (TEST_Z(_fa, _fb)) goto loc_00364DA8; /* je: equal / zero */

loc_00364D80: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esp + 0x18) = 0x3F800000;
    fp_top() = fp_top() * MEMF(edx + 0x14); /* fmul dword ptr [edx + 0x14] */
    MEM32(esp + 0x1C) = 0x3F800000;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(esp + 0x20) = 0x3F800000;
    fp_top() = fp_top() * MEMF(edx + 0x18); /* fmul dword ptr [edx + 0x18] */
    goto loc_00364DD7;

loc_00364DA8: ;
    fp_top() = fp_top() + MEMF(edx + 0x30); /* fadd dword ptr [edx + 0x30] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esp + 0x18) = 0;
    fp_top() = fp_top() * MEMF(edx + 0x14); /* fmul dword ptr [edx + 0x14] */
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    fp_top() = fp_top() + MEMF(edx + 0x34); /* fadd dword ptr [edx + 0x34] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(edx + 0x18); /* fmul dword ptr [edx + 0x18] */
    fp_top() = fp_top() + MEMF(edx + 0x38); /* fadd dword ptr [edx + 0x38] */

loc_00364DD7: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_00364DDB: ;
    ecx = MEM32(esp + 0x10);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(eax + 0xC) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0x14) = ecx;
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(eax) = esi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 0x20) = ebp;
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0x24) = edx;
    eax = eax + 0x28;
    edx = ecx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 0x24) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00364E4A; /* je: equal / zero */

loc_00364E1F: ;
    edx = MEM32(esp + 0x28);
    ecx = MEM32(0x36CA28);
    ebx = ebx >> 8;
    MEM32(esp + 0x30) = ebx;
    edx = edx + 0xF44;
    esi = 0xC17A0;
    edi = 0xC17B0;
    ebp = 0x417AC;
    goto loc_00364CE0;

loc_00364E4A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00364E60
 * Original: 0x00364E60 - 0x00364F98 (312 bytes, 91 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364E60(void)
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

loc_00364E60: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = MEM32(0x36CA94);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x36CAF8);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    esi = eax;
    eax = MEM32(edi + 0xF40);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = eax;
    MEM32(esi) = 0x1809E0;
    PUSH32(esp, 0x00364E94u); RECOMP_ABI_CALL(0x0035F140u, sub_0035F140); /* call 0x0035F140 */

loc_00364E94: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    fp_top() = fp_top() - MEMF(esp + 0x18); /* fsub dword ptr [esp + 0x18] */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00364EC3u); RECOMP_ABI_CALL(0x0035F140u, sub_0035F140); /* call 0x0035F140 */

loc_00364EC3: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = MEM32(esp + 0x10);
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x20);
    MEM32(esi + 4) = eax;
    fp_top() = fp_top() - MEMF(esp + 0x1C); /* fsub dword ptr [esp + 0x1c] */
    eax = MEM32(esp + 0x18);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = ecx;
    esi = esi + 0x1C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00364F8F; /* je: equal / zero */

loc_00364F02: ;
    edx = MEM32(edi + 0xF84);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = edx;
    MEM32(esi) = 0x181E28;
    PUSH32(esp, 0x00364F22u); RECOMP_ABI_CALL(0x0035F140u, sub_0035F140); /* call 0x0035F140 */

loc_00364F22: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    fp_top() = fp_top() - MEMF(esp + 0x18); /* fsub dword ptr [esp + 0x18] */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00364F51u); RECOMP_ABI_CALL(0x0035F140u, sub_0035F140); /* call 0x0035F140 */

loc_00364F51: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edx = MEM32(esp + 0x10);
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x20);
    MEM32(esi + 4) = edx;
    edx = MEM32(esp + 0x18);
    fp_top() = fp_top() - MEMF(esp + 0x1C); /* fsub dword ptr [esp + 0x1c] */
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    esi = esi + 0x1C;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00364F02; /* jne: not equal / not zero */

loc_00364F8F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00364FA0
 * Original: 0x00364FA0 - 0x003652EE (846 bytes, 240 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364FA0(void)
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

loc_00364FA0: ;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 4) (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_00364FB8; /* jb: below (unsigned <) */

loc_00364FB3: ;
    PUSH32(esp, 0x00364FB8u); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_00364FB8: ;
    ecx = MEM32(esp + 0x44);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x10 (8-bit) */
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00365092; /* je: equal / zero */

loc_00364FC7: ;
    ecx = MEM32(0x36C9FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ebx = 1;
    if (TEST_NZ(_fa, _fb)) goto loc_00364FE0; /* jne: not equal / not zero */

loc_00364FD6: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00364FE0; /* jne: not equal / not zero */

loc_00364FDC: ;
    ecx = 0; /* xor self */
    goto loc_00364FE2;

loc_00364FE0: ;
    ecx = ebx;

loc_00364FE2: ;
    edx = MEM32(ebp + 0x794);
    _fa = (uint32_t)(MEM8(edx + 4)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 4), 0x12 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036506A; /* jne: not equal / not zero */

loc_00364FEE: ;
    edx = MEM32(0x36C9F8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036506A; /* je: equal / zero */

loc_00364FF8: ;
    edx = MEM32(ebp + 0x1928);
    edx = edx & 0xFFFFFFEFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036506A; /* je: equal / zero */

loc_00365005: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edi = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_0036502B; /* je: equal / zero */

loc_0036500B: ;
    ecx = MEM32(0x36CA00);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00365024; /* je: equal / zero */

loc_00365015: ;
    ecx = MEM32(ebp + 0x7CC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00365024; /* je: equal / zero */

loc_0036501F: ;
    edi = 0x10001;

loc_00365024: ;
    PUSH32(esp, 0x00365029u); RECOMP_ABI_CALL(0x00364E60u, sub_00364E60); /* call 0x00364E60 */

loc_00365029: ;
    esi = eax;

loc_0036502B: ;
    MEM32(esi) = 0x40294;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = 0x40314;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = 0x403B8;
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, 0x0036504Du); RECOMP_ABI_CALL(0x00363E90u, sub_00363E90); /* call 0x00363E90 */

loc_0036504D: ;
    MEM32(ebp + 0x7D0) = eax;
    MEM32(esi + 0x18) = 0x40298;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, eax);
    eax = esi + 0x20;
    PUSH32(esp, 0x00365066u); RECOMP_ABI_CALL(0x00364CA0u, sub_00364CA0); /* call 0x00364CA0 */

loc_00365066: ;
    esi = eax;
    goto loc_00365092;

loc_0036506A: ;
    MEM32(eax) = 0x40314;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x403B8;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0x40294;
    MEM32(eax + 0x14) = 0x20001;
    esi = eax + 0x18;

loc_00365092: ;
    edx = MEM32(esp + 0x44);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFF8000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003652E1; /* je: equal / zero */

loc_003650A2: ;
    eax = MEM32(ebp + 0x7D0);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp + 0x7CC);
    MEM32(esi) = 0x403BC;
    MEM32(esi + 4) = eax;
    esi = esi + 8;
    ecx = 0; /* xor self */
    eax = ebp + 0x7AC;
    MEM32(esp + 0x40) = ecx;
    ebx = 0x41024;
    MEM32(esp + 0x10) = eax;
    goto loc_003650E0;

loc_003650D5: ;
    edx = MEM32(esp + 0x44);
    /* nop */

loc_003650E0: ;
    eax = MEM32(esp + 0x10);
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003652BB; /* je: equal / zero */

loc_003650EE: ;
    eax = 0x10000;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00365127; /* jne: not equal / not zero */

loc_003650F9: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(HI8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), HI8(edx) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_003652BB; /* jns: not sign (positive) */

loc_00365101: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 4) (32-bit) */
    MEM32(ebp) = esi;
    eax = esi;
    if (CMP_B(_fa, _fb)) goto loc_00365110; /* jb: below (unsigned <) */

loc_0036510B: ;
    PUSH32(esp, 0x00365110u); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_00365110: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00365120u); RECOMP_ABI_CALL(0x00364BB0u, sub_00364BB0); /* call 0x00364BB0 */

loc_00365120: ;
    esi = eax;
    goto loc_003652BB;

loc_00365127: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 4) (32-bit) */
    MEM32(ebp) = esi;
    eax = esi;
    if (CMP_B(_fa, _fb)) goto loc_00365136; /* jb: below (unsigned <) */

loc_00365131: ;
    PUSH32(esp, 0x00365136u); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_00365136: ;
    edx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    ecx = edi;
    PUSH32(esp, 0x00365146u); RECOMP_ABI_CALL(0x00364BB0u, sub_00364BB0); /* call 0x00364BB0 */

loc_00365146: ;
    esi = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 3 (32-bit) */
    eax = ebp + 0xC60;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_003651DE; /* jne: not equal / not zero */

loc_00365158: ;
    PUSH32(esp, 0);
    edi = edi + 0x6C;
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00365168u); RECOMP_ABI_CALL(0x0035EFE0u, sub_0035EFE0); /* call 0x0035EFE0 */

loc_00365168: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00365172u); RECOMP_ABI_CALL(0x0035F2A0u, sub_0035F2A0); /* call 0x0035F2A0 */

loc_00365172: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3C6E40); /* fsub dword ptr [0x3c6e40] */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    PUSH32(esp, 0x0036519Au); RECOMP_ABI_CALL(0x0035F2A0u, sub_0035F2A0); /* call 0x0035F2A0 */

loc_0036519A: ;
    MEM32(esi) = ebx;
    MEM32(esi + 4) = 0x7149F2CA;
    eax = ebx + 0x140004;
    MEM32(esi + 8) = eax;
    ecx = MEM32(esp + 0x24);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(esp + 0x28);
    MEM32(esi + 0x10) = edx;
    eax = MEM32(esp + 0x2C);
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(esp + 0x1C);
    MEM32(esi + 0x1C) = edx;
    eax = MEM32(esp + 0x20);
    MEM32(esi + 0x20) = eax;
    esi = esi + 0x24;
    goto loc_003652BB;

loc_003651DE: ;
    fp_push(MEMF(edi + 0x4C)); /* fld float */
    PUSH32(esp, 0x3F800000);
    ecx = edi + 0x34;
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    MEM32(esi) = ebx;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003651F9u); RECOMP_ABI_CALL(0x0035EFE0u, sub_0035EFE0); /* call 0x0035EFE0 */

loc_003651F9: ;
    eax = ebx + 0x140038;
    MEM32(esi + 8) = eax;
    ecx = MEM32(esp + 0x30);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(esp + 0x34);
    MEM32(esi + 0x10) = edx;
    eax = MEM32(esp + 0x38);
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(edi + 0x54);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(edi + 0x58);
    MEM32(esi + 0x1C) = edx;
    eax = MEM32(edi + 0x5C);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(edi);
    esi = esi + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003652BB; /* jne: not equal / not zero */

loc_00365237: ;
    eax = ebp + 0xC60;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi + 0x6C;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036524Eu); RECOMP_ABI_CALL(0x0035EFE0u, sub_0035EFE0); /* call 0x0035EFE0 */

loc_0036524E: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00365273u); RECOMP_ABI_CALL(0x0035F210u, sub_0035F210); /* call 0x0035F210 */

loc_00365273: ;
    fp_top() = fp_top() * MEMF(edi + 0x84); /* fmul dword ptr [edi + 0x84] */
    eax = ebx + 0x18001C;
    MEM32(esi) = eax;
    ecx = MEM32(edi + 0x78);
    MEM32(esi + 4) = ecx;
    edx = MEM32(edi + 0x7C);
    MEM32(esi + 8) = edx;
    eax = MEM32(edi + 0x80);
    MEM32(esi + 0xC) = eax;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    esi = esi + 0x20;
    MEMF(esi + -16) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esi + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    MEMF(esi + -8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edi + 0x88);
    MEM32(esi + -4) = ecx;

loc_003652BB: ;
    ecx = MEM32(esp + 0x40);
    edi = MEM32(esp + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    ebx = ebx + 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41424) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x41424 (32-bit) */
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x10) = edi;
    if (CMP_B(_fa, _fb)) goto loc_003650D5; /* jb: below (unsigned <) */

loc_003652E1: ;
    POP32(esp, edi);
    MEM32(ebp) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036505E
 * Original: 0x0036505E - 0x003652EE (656 bytes, 184 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036505E(void)
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

loc_0036505E: ;
    eax = esi + 0x20;
    PUSH32(esp, 0x00365066u); RECOMP_ABI_CALL(0x00364CA0u, sub_00364CA0); /* call 0x00364CA0 */

loc_00365066: ;
    esi = eax;
    goto loc_00365092;

    MEM32(eax) = 0x40314;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x403B8;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0x40294;
    MEM32(eax + 0x14) = 0x20001;
    esi = eax + 0x18;

loc_00365092: ;
    edx = MEM32(esp + 0x44);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFF8000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003652E1; /* je: equal / zero */

loc_003650A2: ;
    eax = MEM32(ebp + 0x7D0);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp + 0x7CC);
    MEM32(esi) = 0x403BC;
    MEM32(esi + 4) = eax;
    esi = esi + 8;
    ecx = 0; /* xor self */
    eax = ebp + 0x7AC;
    MEM32(esp + 0x40) = ecx;
    ebx = 0x41024;
    MEM32(esp + 0x10) = eax;
    goto loc_003650E0;

loc_003650D5: ;
    edx = MEM32(esp + 0x44);
    /* nop */

loc_003650E0: ;
    eax = MEM32(esp + 0x10);
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003652BB; /* je: equal / zero */

loc_003650EE: ;
    eax = 0x10000;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00365127; /* jne: not equal / not zero */

loc_003650F9: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(HI8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), HI8(edx) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_003652BB; /* jns: not sign (positive) */

loc_00365101: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 4) (32-bit) */
    MEM32(ebp) = esi;
    eax = esi;
    if (CMP_B(_fa, _fb)) goto loc_00365110; /* jb: below (unsigned <) */

loc_0036510B: ;
    PUSH32(esp, 0x00365110u); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_00365110: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00365120u); RECOMP_ABI_CALL(0x00364BB0u, sub_00364BB0); /* call 0x00364BB0 */

loc_00365120: ;
    esi = eax;
    goto loc_003652BB;

loc_00365127: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 4) (32-bit) */
    MEM32(ebp) = esi;
    eax = esi;
    if (CMP_B(_fa, _fb)) goto loc_00365136; /* jb: below (unsigned <) */

loc_00365131: ;
    PUSH32(esp, 0x00365136u); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_00365136: ;
    edx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    ecx = edi;
    PUSH32(esp, 0x00365146u); RECOMP_ABI_CALL(0x00364BB0u, sub_00364BB0); /* call 0x00364BB0 */

loc_00365146: ;
    esi = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 3 (32-bit) */
    eax = ebp + 0xC60;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_003651DE; /* jne: not equal / not zero */

loc_00365158: ;
    PUSH32(esp, 0);
    edi = edi + 0x6C;
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00365168u); RECOMP_ABI_CALL(0x0035EFE0u, sub_0035EFE0); /* call 0x0035EFE0 */

loc_00365168: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00365172u); RECOMP_ABI_CALL(0x0035F2A0u, sub_0035F2A0); /* call 0x0035F2A0 */

loc_00365172: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3C6E40); /* fsub dword ptr [0x3c6e40] */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    PUSH32(esp, 0x0036519Au); RECOMP_ABI_CALL(0x0035F2A0u, sub_0035F2A0); /* call 0x0035F2A0 */

loc_0036519A: ;
    MEM32(esi) = ebx;
    MEM32(esi + 4) = 0x7149F2CA;
    eax = ebx + 0x140004;
    MEM32(esi + 8) = eax;
    ecx = MEM32(esp + 0x24);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(esp + 0x28);
    MEM32(esi + 0x10) = edx;
    eax = MEM32(esp + 0x2C);
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(esp + 0x1C);
    MEM32(esi + 0x1C) = edx;
    eax = MEM32(esp + 0x20);
    MEM32(esi + 0x20) = eax;
    esi = esi + 0x24;
    goto loc_003652BB;

loc_003651DE: ;
    fp_push(MEMF(edi + 0x4C)); /* fld float */
    PUSH32(esp, 0x3F800000);
    ecx = edi + 0x34;
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    MEM32(esi) = ebx;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003651F9u); RECOMP_ABI_CALL(0x0035EFE0u, sub_0035EFE0); /* call 0x0035EFE0 */

loc_003651F9: ;
    eax = ebx + 0x140038;
    MEM32(esi + 8) = eax;
    ecx = MEM32(esp + 0x30);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(esp + 0x34);
    MEM32(esi + 0x10) = edx;
    eax = MEM32(esp + 0x38);
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(edi + 0x54);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(edi + 0x58);
    MEM32(esi + 0x1C) = edx;
    eax = MEM32(edi + 0x5C);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(edi);
    esi = esi + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003652BB; /* jne: not equal / not zero */

loc_00365237: ;
    eax = ebp + 0xC60;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi + 0x6C;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036524Eu); RECOMP_ABI_CALL(0x0035EFE0u, sub_0035EFE0); /* call 0x0035EFE0 */

loc_0036524E: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00365273u); RECOMP_ABI_CALL(0x0035F210u, sub_0035F210); /* call 0x0035F210 */

loc_00365273: ;
    fp_top() = fp_top() * MEMF(edi + 0x84); /* fmul dword ptr [edi + 0x84] */
    eax = ebx + 0x18001C;
    MEM32(esi) = eax;
    ecx = MEM32(edi + 0x78);
    MEM32(esi + 4) = ecx;
    edx = MEM32(edi + 0x7C);
    MEM32(esi + 8) = edx;
    eax = MEM32(edi + 0x80);
    MEM32(esi + 0xC) = eax;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    esi = esi + 0x20;
    MEMF(esi + -16) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esi + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    MEMF(esi + -8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edi + 0x88);
    MEM32(esi + -4) = ecx;

loc_003652BB: ;
    ecx = MEM32(esp + 0x40);
    edi = MEM32(esp + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    ebx = ebx + 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41424) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x41424 (32-bit) */
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x10) = edi;
    if (CMP_B(_fa, _fb)) goto loc_003650D5; /* jb: below (unsigned <) */

loc_003652E1: ;
    POP32(esp, edi);
    MEM32(ebp) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003652F0
 * Original: 0x003652F0 - 0x003654E3 (499 bytes, 154 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003652F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003652F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x154;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_S(_fas, _fbs)) goto loc_003654DA; /* js: sign (negative) */

loc_0036530A: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x794);
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 0x12 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003654DA; /* jne: not equal / not zero */

loc_0036531D: ;
    ecx = MEM32(esi + 0x1928);
    ecx = ecx & 0xFFFFFFEFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003654DA; /* je: equal / zero */

loc_0036532F: ;
    ebx = MEM32(esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036533D; /* jb: below (unsigned <) */

loc_00365336: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036533Bu); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_0036533B: ;
    ebx = eax;

loc_0036533D: ;
    eax = esi + 0xC60;
    PUSH32(esp, eax);
    edx = esi + 0xDE0;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00365355u); RECOMP_ABI_CALL(0x0035F040u, sub_0035F040); /* call 0x0035F040 */

loc_00365355: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x400480);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00365365u); RECOMP_ABI_CALL(0x0035F890u, sub_0035F890); /* call 0x0035F890 */

loc_00365365: ;
    eax = MEM32(esi + 0x950);
    ebx = ebx + 0x44;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036537B; /* jne: not equal / not zero */

loc_00365372: ;
    eax = MEM32(0x36C9F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003653B7; /* je: equal / zero */

loc_0036537B: ;
    eax = MEM32(0x36CA98);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    eax = esp + 0x20;
    ecx = esp + 0xE0;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036539Au); RECOMP_ABI_CALL(0x0035F2F0u, sub_0035F2F0); /* call 0x0035F2F0 */

loc_0036539A: ;
    edi = ebx + 4;
    MEM32(ebx) = 0x300580;
    ecx = 0xC;
    esi = esp + 0xE0;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    esi = MEM32(ebp + 8);
    ebx = ebx + 0x34;

loc_003653B7: ;
    eax = MEM32(0x36CA84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003653FA; /* jne: not equal / not zero */

loc_003653C0: ;
    edx = esi + 0x980;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0xA8;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003653D9u); RECOMP_ABI_CALL(0x0035F040u, sub_0035F040); /* call 0x0035F040 */

loc_003653D9: ;
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x400680);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003653ECu); RECOMP_ABI_CALL(0x0035F890u, sub_0035F890); /* call 0x0035F890 */

loc_003653EC: ;
    ebx = ebx + 0x44;
    MEM32(esi) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_003653FA: ;
    eax = esi + 0x980;
    PUSH32(esp, eax);
    PUSH32(esp, 0x400680);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036540Cu); RECOMP_ABI_CALL(0x0035F890u, sub_0035F890); /* call 0x0035F890 */

loc_0036540C: ;
    ecx = MEM32(esi + 4);
    eax = ebx + 0x44;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0036541D; /* jb: below (unsigned <) */

loc_00365418: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036541Du); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_0036541D: ;
    ebx = eax;
    eax = eax + 4;
    edi = 0x4004C0;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = edi;
    /* nop */

loc_00365430: ;
    eax = esi + 0xC60;
    PUSH32(esp, eax);
    ecx = esi + edi + -4191904;
    PUSH32(esp, ecx);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00365449u); RECOMP_ABI_CALL(0x0035F040u, sub_0035F040); /* call 0x0035F040 */

loc_00365449: ;
    eax = esp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00365455u); RECOMP_ABI_CALL(0x0035F890u, sub_0035F890); /* call 0x0035F890 */

loc_00365455: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esi + 0x950);
    ecx = ecx + 0x44;
    ebx = ebx + 0x44;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00365476; /* jne: not equal / not zero */

loc_0036546D: ;
    eax = MEM32(0x36C9F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003654C5; /* je: equal / zero */

loc_00365476: ;
    edx = MEM32(0x36CA98);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    edx = esp + 0x60;
    eax = esp + 0x120;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00365496u); RECOMP_ABI_CALL(0x0035F2F0u, sub_0035F2F0); /* call 0x0035F2F0 */

loc_00365496: ;
    eax = MEM32(esp + 0x18);
    edi = edi + 0xFFF00100u;
    MEM32(ebx) = edi;
    edi = MEM32(esp + 0x18);
    ecx = 0xC;
    esi = esp + 0x120;
    ebx = ebx + 0x34;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    edi = MEM32(esp + 0x1C);
    esi = MEM32(ebp + 8);
    eax = eax + 0x34;
    MEM32(esp + 0x18) = eax;

loc_003654C5: ;
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400580) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x400580 (32-bit) */
    MEM32(esp + 0x1C) = edi;
    if (CMP_B(_fa, _fb)) goto loc_00365430; /* jb: below (unsigned <) */

loc_003654D8: ;
    MEM32(esi) = ebx;

loc_003654DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003654F0
 * Original: 0x003654F0 - 0x0036556E (126 bytes, 46 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003654F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003654F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x36C658);
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(0x36CAF8);
    if (TEST_Z(_fa, _fb)) goto loc_00365509; /* je: equal / zero */

loc_00365503: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00365509u); RECOMP_ABI_CALL(0x00363F30u, sub_00363F30); /* call 0x00363F30 */

loc_00365509: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00365517; /* je: equal / zero */

loc_0036550E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00365515u); RECOMP_ABI_CALL(0x003671F0u, sub_003671F0); /* call 0x003671F0 */

loc_00365515: ;
    ebx = eax;

loc_00365517: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00365522; /* je: equal / zero */

loc_0036551C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00365522u); RECOMP_ABI_CALL(0x003640A0u, sub_003640A0); /* call 0x003640A0 */

loc_00365522: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0xF (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036552E; /* je: equal / zero */

loc_00365527: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036552Eu); RECOMP_ABI_CALL(0x00364420u, sub_00364420); /* call 0x00364420 */

loc_0036552E: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00365539; /* je: equal / zero */

loc_00365533: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00365539u); RECOMP_ABI_CALL(0x00364610u, sub_00364610); /* call 0x00364610 */

loc_00365539: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00365544; /* je: equal / zero */

loc_0036553E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00365544u); RECOMP_ABI_CALL(0x003647F0u, sub_003647F0); /* call 0x003647F0 */

loc_00365544: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0xFF1000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00365553; /* je: equal / zero */

loc_0036554C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00365553u); RECOMP_ABI_CALL(0x00364FA0u, sub_00364FA0); /* call 0x00364FA0 */

loc_00365553: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036555F; /* je: equal / zero */

loc_00365558: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036555Fu); RECOMP_ABI_CALL(0x003652F0u, sub_003652F0); /* call 0x003652F0 */

loc_0036555F: ;
    ebx = ebx & 0xC0000070u;
    POP32(esp, esi);
    MEM32(0x36C658) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00365570
 * Original: 0x00365570 - 0x00365701 (401 bytes, 127 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365570(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00365570: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(0x36C658);
    eax = ebx;
    PUSH32(esp, esi);
    eax = eax & 0xFFFFFFAFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFF8F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x3FFFFF8F (32-bit) */
    esi = ecx;
    MEM32(esp + 0x10) = esi;
    MEM32(0x36C658) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00365598; /* je: equal / zero */

loc_00365593: ;
    PUSH32(esp, 0x00365598u); RECOMP_ABI_CALL(0x003654F0u, sub_003654F0); /* call 0x003654F0 */

loc_00365598: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x40000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003656F9; /* jne: not equal / not zero */

loc_003655A4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    if (TEST_NZ(_fa, _fb)) goto loc_003655B7; /* jne: not equal / not zero */

loc_003655AE: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003656F8; /* je: equal / zero */

loc_003655B7: ;
    eax = MEM32(esi + 0x794);
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebp);
    MEM32(esi + 0x20) = edi;
    ebp = MEM32(eax + 4);
    ebp = ebp & 0x10;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi);
    ebp = ebp + 0x461BF4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003655DF; /* jb: below (unsigned <) */

loc_003655DA: ;
    PUSH32(esp, 0x003655DFu); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_003655DF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0036561F; /* je: equal / zero */

loc_003655E6: ;
    MEM32(eax) = 0x401760;
    ecx = eax + 4;
    edx = 0; /* xor self */

loc_003655F1: ;
    eax = ZX8(MEM8(edx + ebp));
    esi = MEM32(esp + 0x10);
    eax = eax << 4;
    ebx = MEM32(eax + esi + 0x1C);
    eax = eax + esi;
    esi = MEM32(eax + 0x14);
    esi = esi + esi * 2;
    esi = MEM32(esi * 4 + 0x36EFA0);
    esi = esi << 8;
    esi = esi + ebx;
    MEM32(ecx) = esi;
    ecx = ecx + 4;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003655F1; /* jb: below (unsigned <) */

loc_0036561F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00365688; /* jne: not equal / not zero */

loc_00365625: ;
    edi = 0x41720;
    /* nop */

loc_00365630: ;
    eax = ZX8(MEM8(ebx + ebp));
    edx = MEM32(esp + 0x10);
    eax = eax << 4;
    edx = edx + eax;
    _fa = (uint32_t)(MEM32(edx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x1C), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036566C; /* je: equal / zero */

loc_00365643: ;
    eax = MEM32(edx + 0x14);
    esi = eax + eax * 2;
    eax = MEM32(esi * 4 + 0x36EFA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = esi * 4 + 0x36EFA0;
    if (TEST_Z(_fa, _fb)) goto loc_0036566C; /* je: equal / zero */

loc_0036565B: ;
    eax = MEM32(eax + 4);
    eax = eax + MEM32(edx + 0x18);
    eax = eax + MEM32(esi + 4);
    MEM32(ecx) = edi;
    MEM32(ecx + 4) = eax;
    ecx = ecx + 8;

loc_0036566C: ;
    edi = edi + 4;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41760) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x41760 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00365630; /* jb: below (unsigned <) */

loc_00365678: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_00365688: ;
    MEM32(esp + 0x14) = ebx;
    ebx = 0x41720;

loc_00365691: ;
    eax = MEM32(esp + 0x14);
    eax = ZX8(MEM8(eax + ebp));
    edx = MEM32(esp + 0x10);
    eax = eax << 4;
    esi = eax + edx;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003656DD; /* je: equal / zero */

loc_003656A9: ;
    eax = MEM32(esi + 0x14);
    edx = eax + eax * 2;
    edi = MEM32(edx * 4 + 0x36EFA8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    edx = edx * 4 + 0x36EFA0;
    if (TEST_Z(_fa, _fb)) goto loc_003656DD; /* je: equal / zero */

loc_003656C1: ;
    eax = MEM32(edx);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x20));
    eax = eax + MEM32(edi + 4);
    edi = MEM32(esi + 0x18);
    esi = MEM32(edx + 4);
    eax = eax + edi;
    eax = eax + esi;
    MEM32(ecx) = ebx;
    MEM32(ecx + 4) = eax;
    ecx = ecx + 8;

loc_003656DD: ;
    esi = MEM32(esp + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41760) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x41760 (32-bit) */
    MEM32(esp + 0x14) = esi;
    if (CMP_B(_fa, _fb)) goto loc_00365691; /* jb: below (unsigned <) */

loc_003656F1: ;
    eax = MEM32(esp + 0x18);
    MEM32(eax) = ecx;
    POP32(esp, ebp);

loc_003656F8: ;
    POP32(esp, edi);

loc_003656F9: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00365710
 * Original: 0x00365710 - 0x0036584E (318 bytes, 91 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365710(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00365710: ;
    eax = MEM32(0x36C658);
    esp = esp - 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFF8F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x3FFFFF8F (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0036572C; /* je: equal / zero */

loc_00365722: ;
    PUSH32(esp, 0x00365727u); RECOMP_ABI_CALL(0x003654F0u, sub_003654F0); /* call 0x003654F0 */

loc_00365727: ;
    eax = MEM32(0x36C658);

loc_0036572C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00365849; /* je: equal / zero */

loc_00365734: ;
    eax = eax & 0xFFFFFFDFu;
    eax = eax | 0x50;
    MEM32(0x36C658) = eax;
    eax = MEM32(esi + 0x794);
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    PUSH32(esp, ebp);
    ebx = ebx & 0x10;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ebx = ebx + 0x461BF4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = edi;
    if (CMP_B(_fa, _fb)) goto loc_00365770; /* jb: below (unsigned <) */

loc_0036576B: ;
    PUSH32(esp, 0x00365770u); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_00365770: ;
    MEM32(eax) = 0x401760;
    ebp = eax + 4;
    MEM32(esp + 0x10) = 0;

loc_00365781: ;
    eax = MEM32(esp + 0x10);
    eax = ZX8(MEM8(eax + ebx));
    ecx = MEM32(esp + 0x1C);
    eax = eax << 4;
    edx = eax + ecx;
    ecx = MEM32(edx + 0x1C);
    MEM32(ebp) = ecx;
    ebp = ebp + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036580C; /* je: equal / zero */

loc_003657A1: ;
    edx = MEM32(edx + 0x18);
    eax = ecx;
    eax = eax >> 4;
    eax = eax & 0xF;
    eax = ZX8(MEM8(eax + 0x36A2FC));
    ecx = ecx & 0xF;
    ecx = ZX8(MEM8(ecx + 0x36A2F4));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax + 3;
    eax = eax >> 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003657DB; /* jne: not equal / not zero */

loc_003657CA: ;
    MEM32(esp + 0x20) = edx;
    MEM32(esi + 0xBD4) = eax;
    edi = 1;
    goto loc_003657FB;

loc_003657DB: ;
    ecx = edx;
    ecx = ecx - MEM32(esp + 0x18);
    if ((ecx != 0)) goto loc_003657EC; /* jne: not equal / not zero */

loc_003657E3: ;
    MEM32(esi + edi * 8 + 0xBCC) = MEM32(esi + edi * 8 + 0xBCC) + eax;
    goto loc_003657FB;

loc_003657EC: ;
    MEM32(esi + edi * 8 + 0xBD0) = ecx;
    MEM32(esi + edi * 8 + 0xBD4) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003657FB: ;
    ecx = MEM32(esp + 0x14);
    ecx = ecx + eax;
    edx = edx + eax * 4;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;

loc_0036580C: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00365781; /* jb: below (unsigned <) */

loc_0036581E: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 0xBC8) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(esi + 0xC54) = edi;
    POP32(esp, edi);
    MEM32(esi) = ebp;
    MEM32(esi + 0xBCC) = eax;
    eax = eax - ecx;
    POP32(esp, ebp);
    MEM32(esi + 0xBD0) = eax;
    POP32(esp, ebx);

loc_00365849: ;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00365850
 * Original: 0x00365850 - 0x003658A1 (81 bytes, 25 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365850: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x0036585Du); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_0036585D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00365867; /* jne: not equal / not zero */

loc_00365863: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00365867: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = eax & 0xFFFFFFF;
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    MEM32(esi) = 0x1050001;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 8) = 0;
    PUSH32(esp, 0x0036589Bu); RECOMP_ABI_CALL(0x00361360u, sub_00361360); /* call 0x00361360 */

loc_0036589B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003658B0
 * Original: 0x003658B0 - 0x003658E0 (48 bytes, 13 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003658B0(void)
{

loc_003658B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    ecx = ecx & 0xFFFFFFF;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x10) = ecx;
    ecx = 0; /* xor self */
    MEM32(eax) = 0x1050001;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003658E0
 * Original: 0x003658E0 - 0x00365970 (144 bytes, 50 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003658E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003658E0: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036590Au); RECOMP_ABI_CALL(0x00361EF0u, sub_00361EF0); /* call 0x00361EF0 */

loc_0036590A: ;
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x18);
    edi = eax;
    PUSH32(esp, 0x00365918u); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_00365918: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00365938; /* je: equal / zero */

loc_0036591E: ;
    PUSH32(esp, 0xB6800000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00365929u); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_00365929: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036593F; /* jne: not equal / not zero */

loc_0036592D: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00365938u); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_00365938: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0036593F: ;
    eax = eax & 0xFFFFFFF;
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x81050001u;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0xC) = edx;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x10) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x14) = 0;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00365970
 * Original: 0x00365970 - 0x00365984 (20 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365970(void)
{

loc_00365970: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00365981u); RECOMP_ABI_CALL(0x00361B60u, sub_00361B60); /* call 0x00361B60 */

loc_00365981: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00365990
 * Original: 0x00365990 - 0x003659B0 (32 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365990(void)
{

loc_00365990: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003659ADu); RECOMP_ABI_CALL(0x00361E50u, sub_00361E50); /* call 0x00361E50 */

loc_003659AD: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003659B0
 * Original: 0x003659B0 - 0x003659E3 (51 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003659B0(void)
{

loc_003659B0: ;
    ecx = MEM32(esp + 4);
    esp = esp - 0x104;
    eax = esp + 0x10C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, 0x104);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003659D2u); RECOMP_ABI_CALL(0x0034278Eu, sub_0034278E); /* call 0x0034278E */

loc_003659D2: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003659DCu); RECOMP_ABI_CALL(0x0034DC9Au, sub_0034DC9A); /* call 0x0034DC9A */

loc_003659DC: ;
    esp = esp + 0x118;
    esp += 4; return; /* ret */

}

/**
 * sub_003659F0
 * Original: 0x003659F0 - 0x00365A81 (145 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003659F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003659F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_00365A00: ;
    ecx = MEM32(ebx);
    edx = MEM32(ebx + 8);
    eax = ecx;
    eax = eax & 0xFFFFFFF;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x20000000 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM32(edx) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00365A5B; /* je: equal / zero */

loc_00365A1B: ;
    edx = MEM32(ebx + 0x10);
    eax = MEM32(ebx + 0xC);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00365A5B; /* je: equal / zero */

loc_00365A2C: ;
    /* nop */

loc_00365A30: ;
    edi = MEM32(eax + 4);
    ebp = MEM32(esp + 0x18);
    edi = edi + ebp;
    ecx = edx;
    ebp = ecx;
    eax = eax + 8;
    ecx = ecx >> 2;
    esi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = ebp;
    ecx = ecx & 3;
    eax = eax + edx;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00365A30; /* jne: not equal / not zero */

loc_00365A57: ;
    ecx = MEM32(esp + 0x10);

loc_00365A5B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = MEM32(ebx + 4);
    MEM32(ebx + 4) = 0xFFFFFFFFu;
    if (((int32_t)((_fa) & (_fb)) >= 0)) goto loc_00365A71; /* jns: not sign (positive) */

loc_00365A69: ;
    ecx = ecx & 0xBFFFFFFFu;
    MEM32(ebx) = ecx;

loc_00365A71: ;
    ebx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00365A00; /* ja: above (unsigned >) */

loc_00365A79: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00365A81
 * Original: 0x00365A81 - 0x00365BE8 (359 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00365A81(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365A81: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    ecx = edi + 0x200;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x154) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00365AA2; /* jne: not equal / not zero */

loc_00365AA0: ;
    MEM32(ecx) = eax;

loc_00365AA2: ;
    eax = MEM32(edi + 0x140);
    MEM32(esi + 0x158) = eax;
    MEM32(ecx) = 0xFFFFFFFFu;
    eax = edi + 0x680504;
    ecx = MEM32(eax);
    ebx = 0xFF;
    ecx = ecx & ebx;
    edx = ecx;
    ecx = ZX8(MEM8(eax + 1));
    eax = MEM32(eax);
    MEM32(ebp + -4) = edx;
    MEM32(esi + 0xD0) = edx;
    eax = eax >> 0x10;
    edx = 0; /* xor self */
    eax = eax & 7;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    MEM32(ebp + -8) = eax;
    MEM32(esi + 0xD4) = ecx;
    MEM32(esi + 0xD8) = edx;
    MEM32(esi + 0xDC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00365B1B; /* je: equal / zero */

loc_00365AF8: ;
    eax = MEM32(esi + 0xBC);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = edx;
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(ebp + -8);
    edx = edx << LO8(ecx);
    ecx = edx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -4)); }
    edx = 0; /* xor self */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00365B1D;

loc_00365B1B: ;
    eax = 0; /* xor self */

loc_00365B1D: ;
    MEM32(esi + 0xC4) = eax;
    eax = edi + 0x680508;
    ecx = MEM32(eax);
    ecx = ecx & ebx;
    MEM32(ebp + -4) = ecx;
    ecx = ZX8(MEM8(eax + 1));
    eax = MEM32(eax);
    eax = eax >> 0x10;
    eax = eax & 7;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    MEM32(esi + 0xE0) = eax;
    eax = MEM32(ebp + -8);
    MEM32(esi + 0xE4) = ecx;
    MEM32(esi + 0xE8) = edx;
    MEM32(esi + 0xEC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00365B86; /* je: equal / zero */

loc_00365B63: ;
    eax = MEM32(esi + 0xBC);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = edx;
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(ebp + -8);
    edx = edx << LO8(ecx);
    ecx = edx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -4)); }
    edx = 0; /* xor self */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00365B88;

loc_00365B86: ;
    eax = 0; /* xor self */

loc_00365B88: ;
    MEM32(esi + 0xC8) = eax;
    eax = edi + 0x680500;
    ecx = MEM32(eax);
    edi = ZX8(MEM8(eax + 1));
    eax = MEM32(eax);
    ecx = ecx & ebx;
    eax = eax >> 0x10;
    ebx = ecx;
    eax = eax & 7;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    ecx = eax;
    MEM32(esi + 0xF0) = ebx;
    MEM32(esi + 0xF4) = edi;
    MEM32(esi + 0xF8) = edx;
    MEM32(esi + 0xFC) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00365BDB; /* je: equal / zero */

loc_00365BC4: ;
    eax = MEM32(esi + 0xBC);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edi = edx;
    edi = edi << LO8(ecx);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    goto loc_00365BDD;

loc_00365BDB: ;
    eax = 0; /* xor self */

loc_00365BDD: ;
    POP32(esp, edi);
    MEM32(esi + 0xCC) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00365BE8
 * Original: 0x00365BE8 - 0x00365CE6 (254 bytes, 72 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00365BE8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365BE8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    eax = MEM32(edi + 0x100200);
    MEM32(esi + 0x14C) = eax;
    eax = MEM32(edi + 0x100204);
    MEM32(esi + 0x150) = eax;
    eax = MEM32(edi + 0x1218);
    ecx = 0x100;
    eax = eax & ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ebx = 0x5000;
    PUSH32(esp, ebx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xB0) = edx;
    { uint32_t _icall_target = MEM32(0x3C6D3C); PUSH32(esp, 0x00365C37u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00365C37: ;
    ecx = MEM32(ebp + -4);
    eax = eax - ebx;
    MEM32(esi + 0x10) = eax;
    eax = ecx + 0x700000;
    ecx = ecx >> 8;
    MEM32(esi + 0x130) = eax;
    ecx = ecx & 0x1F0;
    ecx = ecx | 0x3000000;
    MEM32(edi + 0x2210) = ecx;
    eax = eax + 0x1000;
    ecx = esi + 0x128;
    MEM32(ecx) = eax;
    ecx = MEM32(ecx);
    eax = eax + 0x80;
    edx = eax;
    edx = edx & 0x1FC00;
    MEM32(esi + 0x12C) = eax;
    edx = edx | 0x200;
    ecx = ecx >> 8;
    ecx = ecx & 0x1FC;
    eax = eax + 0xFF900020u;
    edx = edx << 7;
    edx = edx | ecx;
    eax = eax >> 4;
    MEM32(edi + 0x2214) = edx;
    MEM32(esi + 0x160) = eax;
    ecx = edi + 0x100214;
    eax = MEM32(ecx);
    eax = eax & 0xFFFFFFFEu;
    MEM32(ecx) = eax;
    eax = 0x700000;

loc_00365CBC: ;
    ecx = MEM32(ebp + -4);
    ecx = ecx + eax;
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x705000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x705000 (32-bit) */
    MEM32(ecx + edi) = 0;
    if (CMP_B(_fa, _fb)) goto loc_00365CBC; /* jb: below (unsigned <) */

loc_00365CD2: ;
    PUSH32(esp, 8);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00365CDBu); RECOMP_ABI_CALL(0x003632D7u, sub_003632D7); /* call 0x003632D7 */

loc_00365CDB: ;
    POP32(esp, edi);
    MEM32(esi + 0x140) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00365CE6
 * Original: 0x00365CE6 - 0x00365DB5 (207 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365CE6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365CE6: ;
    eax = MEM32(ecx);
    MEM8(eax + 0x6013D4) = 0x1F;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x6013D5));
    MEM8(eax + 0x6013D4) = 0x1F;
    MEM8(eax + 0x6013D5) = 0x57;
    MEM8(eax + 0x6013D4) = 0x52;
    SET_LO8(ecx, MEM8(eax + 0x6013D5));
    MEM8(eax + 0x6013D4) = 0x52;
    SET_LO8(ecx, LO8(ecx) + 4);
    MEM8(eax + 0x6013D5) = LO8(ecx);
    ecx = MEM32(eax + 0x8088);
    ecx = ecx & 0xFFFFF43Fu;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x400;
    ecx = ecx | edi;
    MEM32(eax + 0x8088) = ecx;
    ecx = MEM32(eax + 0x8088);
    ecx = ecx & 0xF43FFFFFu;
    esi = 0x4000000;
    ecx = ecx | esi;
    MEM32(eax + 0x8088) = ecx;
    ecx = eax + 0x808C;
    edx = MEM32(ecx);
    edx = edx & 0xFFFFF40Fu;
    edx = edx | edi;
    MEM32(ecx) = edx;
    edx = MEM32(ecx);
    edx = edx & 0xF40FFFFFu;
    edx = edx | esi;
    MEM32(ecx) = edx;
    MEM8(eax + 0x6013D4) = 0x20;
    MEM8(eax + 0x6013D5) = 0x29;
    MEM8(eax + 0x6013D4) = 0x1B;
    edx = eax + 0x600804;
    MEM8(eax + 0x6013D5) = 5;
    ecx = MEM32(edx);
    ecx = ecx & 0xFFFFFFFAu;
    POP32(esp, edi);
    ecx = ecx | 2;
    POP32(esp, esi);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_00365DB4; /* jne: not equal / not zero */

loc_00365DA6: ;
    MEM8(eax + 0x6013D4) = 0x1F;
    MEM8(eax + 0x6013D5) = 0x99;

loc_00365DB4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00365DB5
 * Original: 0x00365DB5 - 0x00365DEB (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365DB5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365DB5: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    eax = eax + 0x8918;
    POP32(esp, esi);
    edx = 0x1000;
    ecx = 0x100000;

loc_00365DCA: ;
    MEM32(eax + -8) = edx;
    MEM32(eax) = edx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x10) = 0xFFFFFFFFu;
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00365DCA; /* jne: not equal / not zero */

loc_00365DE9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00365DEB
 * Original: 0x00365DEB - 0x00365E1B (48 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365DEB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365DEB: ;
    edx = MEM32(ecx);
    ecx = MEM32(ecx + 0x140);
    eax = ecx;
    eax = eax & 0xFFFF;
    MEM32(edx + 0x400780) = eax;
    eax = ecx + 0x70000;
    eax = eax << 4;
    PUSH32(esp, 2);
    eax = eax + edx;
    POP32(esp, ecx);

loc_00365E0E: ;
    MEM32(eax) = 0;
    eax = eax + 4;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00365E0E; /* jne: not equal / not zero */

loc_00365E1A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00365E1B
 * Original: 0x00365E1B - 0x00365E8C (113 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365E1B(void)
{

loc_00365E1B: ;
    eax = MEM32(ecx);
    MEM32(ecx + 0x120) = 0xFF;
    MEM32(ecx + 0x124) = 0x800000;
    MEM32(ecx + 0x11C) = 0x1111111;
    edx = 0; /* xor self */
    MEM32(eax + 0x3210) = edx;
    MEM32(eax + 0x3270) = edx;
    MEM32(eax + 0x3240) = edx;
    MEM32(eax + 0x3244) = edx;
    MEM32(eax + 0x3058) = edx;
    MEM32(eax + 0x3258) = edx;
    ecx = MEM32(ecx + 0x104);
    MEM32(eax + 0x2504) = ecx;
    MEM32(eax + 0x2508) = edx;
    MEM32(eax + 0x250C) = edx;
    MEM32(eax + 0x3228) = edx;
    MEM32(eax + 0x2410) = edx;
    MEM32(eax + 0x2420) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00365E8C
 * Original: 0x00365E8C - 0x00365ECB (63 bytes, 23 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365E8C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365E8C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    eax = MEM32(esi + 0x400700);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00365EC8; /* je: equal / zero */

loc_00365E9C: ;
    PUSH32(esp, ebx);

loc_00365E9D: ;
    ebx = MEM32(esi + 0x100);
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00365EAF; /* je: equal / zero */

loc_00365EA8: ;
    ecx = edi;
    PUSH32(esp, 0x00365EAFu); RECOMP_ABI_CALL(0x00362FC0u, sub_00362FC0); /* call 0x00362FC0 */

loc_00365EAF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00365EBE; /* je: equal / zero */

loc_00365EB7: ;
    ecx = edi;
    PUSH32(esp, 0x00365EBEu); RECOMP_ABI_CALL(0x00362A50u, sub_00362A50); /* call 0x00362A50 */

loc_00365EBE: ;
    _fa = (uint32_t)(MEM32(esi + 0x400700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x400700), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00365E9D; /* jne: not equal / not zero */

loc_00365EC7: ;
    POP32(esp, ebx);

loc_00365EC8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00365ECB
 * Original: 0x00365ECB - 0x00365F04 (57 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365ECB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365ECB: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    PUSH32(esp, 2);
    POP32(esp, edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00365F00; /* je: equal / zero */

loc_00365ED9: ;
    eax = MEM32(ecx + eax * 4 + 0x138);
    eax = eax & 0xFFFF;
    MEM32(esi + 0x400784) = eax;
    MEM32(esi + 0x400788) = edx;
    PUSH32(esp, 0x00365EF6u); RECOMP_ABI_CALL(0x00365E8Cu, sub_00365E8C); /* call 0x00365E8C */

loc_00365EF6: ;
    MEM32(esi + 0x400144) = 0x10000000;

loc_00365F00: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00365F04
 * Original: 0x00365F04 - 0x00366101 (509 bytes, 132 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00365F04(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365F04: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x2500);
    ebx = MEM32(esi + 0x128);
    MEM32(ebp + -20) = ecx;
    ecx = MEM32(eax + 0x3200);
    MEM32(ebp + -16) = ecx;
    ecx = MEM32(eax + 0x3250);
    MEM32(ebp + -12) = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x2500) = ecx;
    MEM32(eax + 0x3200) = ecx;
    MEM32(eax + 0x3250) = ecx;
    ecx = MEM32(eax + 0x3204);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x3240);
    ecx = ecx & 0x1F;
    edx = ecx;
    edx = edx << 6;
    edx = edx + ebx;
    edx = edx + eax;
    MEM32(edx) = edi;
    edi = MEM32(eax + 0x3244);
    MEM32(edx + 4) = edi;
    edi = MEM32(eax + 0x3248);
    MEM32(edx + 8) = edi;
    edi = MEM32(eax + 0x322C);
    MEM32(edx + 0xC) = edi;
    edi = MEM32(eax + 0x3228);
    MEM32(edx + 0x10) = edi;
    edi = MEM32(eax + 0x3224);
    MEM32(edx + 0x14) = edi;
    edi = MEM32(eax + 0x3280);
    MEM32(edx + 0x18) = edi;
    edi = MEM32(eax + 0x3254);
    MEM32(edx + 0x1C) = edi;
    edi = MEM32(eax + 0x3268);
    MEM32(edx + 0x20) = edi;
    edi = MEM32(eax + 0x3264);
    MEM32(edx + 0x24) = edi;
    edi = MEM32(eax + 0x3260);
    MEM32(edx + 0x28) = edi;
    edi = MEM32(eax + 0x326C);
    MEM32(edx + 0x2C) = edi;
    edi = MEM32(eax + 0x324C);
    MEM32(edx + 0x30) = edi;
    edx = MEM32(eax + 0x3204);
    edi = 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036600C; /* je: equal / zero */

loc_00365FDB: ;
    edx = MEM32(eax + 0x2508);
    MEM32(ebp + -4) = 1;
    MEM32(ebp + -4) = MEM32(ebp + -4) << LO8(ecx);
    ecx = MEM32(ebp + -4);
    ecx = ~ecx;
    ecx = ecx & edx;
    MEM32(ebp + -8) = edx;
    edx = MEM32(eax + 0x3240);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x3244)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x3244) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00366006; /* je: equal / zero */

loc_00366003: ;
    ecx = ecx | MEM32(ebp + -4);

loc_00366006: ;
    MEM32(eax + 0x2508) = ecx;

loc_0036600C: ;
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = edx & 0x1F;
    MEM32(eax + 0x3204) = edx;
    edx = 0; /* xor self */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(MEM32(esi + 0x104)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x104), edx (32-bit) */
    MEM32(ebp + -8) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0036603D; /* je: equal / zero */

loc_0036602A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036603D; /* je: equal / zero */

loc_0036602F: ;
    ecx = MEM32(eax + 0x3204);
    ecx = ecx | edi;
    MEM32(eax + 0x3204) = ecx;

loc_0036603D: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx << 6;
    ecx = ecx + ebx;
    edx = ecx + eax;
    edi = MEM32(edx);
    MEM32(eax + 0x3240) = edi;
    edi = MEM32(edx + 4);
    MEM32(eax + 0x3244) = edi;
    edi = MEM32(edx + 8);
    MEM32(eax + 0x3248) = edi;
    edi = MEM32(edx + 0xC);
    MEM32(eax + 0x322C) = edi;
    edi = MEM32(edx + 0x10);
    MEM32(eax + 0x3228) = edi;
    edi = MEM32(edx + 0x14);
    MEM32(eax + 0x3224) = edi;
    edi = MEM32(edx + 0x18);
    ecx = MEM32(ebp + -8);
    MEM32(eax + 0x3280) = edi;
    edi = MEM32(edx + 0x1C);
    MEM32(eax + 0x3254) = edi;
    edi = MEM32(edx + 0x20);
    MEM32(eax + 0x3268) = edi;
    edi = MEM32(edx + 0x24);
    MEM32(eax + 0x3264) = edi;
    edi = MEM32(edx + 0x28);
    MEM32(eax + 0x3260) = edi;
    edi = MEM32(edx + 0x2C);
    MEM32(eax + 0x326C) = edi;
    edx = MEM32(edx + 0x30);
    POP32(esp, edi);
    MEM32(eax + 0x324C) = edx;
    _fa = (uint32_t)(MEM32(esi + 0x104)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x104), ecx (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_003660D8; /* je: equal / zero */

loc_003660CA: ;
    ecx = 0; /* xor self */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003660D8; /* je: equal / zero */

loc_003660D2: ;
    MEM32(eax + 0x3220) = ecx;

loc_003660D8: ;
    ecx = MEM32(ebp + -12);
    MEM32(eax + 0x204C) = 0x1FFFFF;
    MEM32(eax + 0x3250) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x3200) = ecx;
    ecx = MEM32(ebp + -20);
    MEM32(eax + 0x2500) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00365F45
 * Original: 0x00365F45 - 0x00366101 (444 bytes, 114 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365F45(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00365F45: ;
    ecx = MEM32(eax + 0x3204);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x3240);
    ecx = ecx & 0x1F;
    edx = ecx;
    edx = edx << 6;
    edx = edx + ebx;
    edx = edx + eax;
    MEM32(edx) = edi;
    edi = MEM32(eax + 0x3244);
    MEM32(edx + 4) = edi;
    edi = MEM32(eax + 0x3248);
    MEM32(edx + 8) = edi;
    edi = MEM32(eax + 0x322C);
    MEM32(edx + 0xC) = edi;
    edi = MEM32(eax + 0x3228);
    MEM32(edx + 0x10) = edi;
    edi = MEM32(eax + 0x3224);
    MEM32(edx + 0x14) = edi;
    edi = MEM32(eax + 0x3280);
    MEM32(edx + 0x18) = edi;
    edi = MEM32(eax + 0x3254);
    MEM32(edx + 0x1C) = edi;
    edi = MEM32(eax + 0x3268);
    MEM32(edx + 0x20) = edi;
    edi = MEM32(eax + 0x3264);
    MEM32(edx + 0x24) = edi;
    edi = MEM32(eax + 0x3260);
    MEM32(edx + 0x28) = edi;
    edi = MEM32(eax + 0x326C);
    MEM32(edx + 0x2C) = edi;
    edi = MEM32(eax + 0x324C);
    MEM32(edx + 0x30) = edi;
    edx = MEM32(eax + 0x3204);
    edi = 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036600C; /* je: equal / zero */

loc_00365FDB: ;
    edx = MEM32(eax + 0x2508);
    MEM32(ebp + -4) = 1;
    MEM32(ebp + -4) = MEM32(ebp + -4) << LO8(ecx);
    ecx = MEM32(ebp + -4);
    ecx = ~ecx;
    ecx = ecx & edx;
    MEM32(ebp + -8) = edx;
    edx = MEM32(eax + 0x3240);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x3244)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x3244) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00366006; /* je: equal / zero */

loc_00366003: ;
    ecx = ecx | MEM32(ebp + -4);

loc_00366006: ;
    MEM32(eax + 0x2508) = ecx;

loc_0036600C: ;
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = edx & 0x1F;
    MEM32(eax + 0x3204) = edx;
    edx = 0; /* xor self */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(MEM32(esi + 0x104)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x104), edx (32-bit) */
    MEM32(ebp + -8) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0036603D; /* je: equal / zero */

loc_0036602A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036603D; /* je: equal / zero */

loc_0036602F: ;
    ecx = MEM32(eax + 0x3204);
    ecx = ecx | edi;
    MEM32(eax + 0x3204) = ecx;

loc_0036603D: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx << 6;
    ecx = ecx + ebx;
    edx = ecx + eax;
    edi = MEM32(edx);
    MEM32(eax + 0x3240) = edi;
    edi = MEM32(edx + 4);
    MEM32(eax + 0x3244) = edi;
    edi = MEM32(edx + 8);
    MEM32(eax + 0x3248) = edi;
    edi = MEM32(edx + 0xC);
    MEM32(eax + 0x322C) = edi;
    edi = MEM32(edx + 0x10);
    MEM32(eax + 0x3228) = edi;
    edi = MEM32(edx + 0x14);
    MEM32(eax + 0x3224) = edi;
    edi = MEM32(edx + 0x18);
    ecx = MEM32(ebp + -8);
    MEM32(eax + 0x3280) = edi;
    edi = MEM32(edx + 0x1C);
    MEM32(eax + 0x3254) = edi;
    edi = MEM32(edx + 0x20);
    MEM32(eax + 0x3268) = edi;
    edi = MEM32(edx + 0x24);
    MEM32(eax + 0x3264) = edi;
    edi = MEM32(edx + 0x28);
    MEM32(eax + 0x3260) = edi;
    edi = MEM32(edx + 0x2C);
    MEM32(eax + 0x326C) = edi;
    edx = MEM32(edx + 0x30);
    POP32(esp, edi);
    MEM32(eax + 0x324C) = edx;
    _fa = (uint32_t)(MEM32(esi + 0x104)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x104), ecx (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_003660D8; /* je: equal / zero */

loc_003660CA: ;
    ecx = 0; /* xor self */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003660D8; /* je: equal / zero */

loc_003660D2: ;
    MEM32(eax + 0x3220) = ecx;

loc_003660D8: ;
    ecx = MEM32(ebp + -12);
    MEM32(eax + 0x204C) = 0x1FFFFF;
    MEM32(eax + 0x3250) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x3200) = ecx;
    ecx = MEM32(ebp + -20);
    MEM32(eax + 0x2500) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00366101
 * Original: 0x00366101 - 0x00366113 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366101(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366101: ;
    eax = MEM32(ecx);
    ecx = 0; /* xor self */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x600100) = ecx;
    MEM32(eax + 0x600140) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00366113
 * Original: 0x00366113 - 0x003662A0 (397 bytes, 115 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00366113(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366113: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    edx = ecx;
    eax = MEM32(edx);
    ecx = MEM32(edx + 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x2500);
    PUSH32(esp, edi);
    MEM32(eax + 0x2500) = 0;
    esi = 0; /* xor self */

loc_00366136: ;
    edi = MEM32(edx + 0x10C);
    edi = esi + edi * 4 + 0x1C0000;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDFC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xDFC (32-bit) */
    MEM32(eax + edi * 4) = 0;
    if (CMP_B(_fa, _fb)) goto loc_00366136; /* jb: below (unsigned <) */

loc_00366153: ;
    edi = MEM32(edx + 0x140);
    esi = MEM32(edx + 0x10C);
    edi = ecx + edi * 4 + 0x1C0000;
    MEM32(eax + edi * 4) = esi;
    esi = MEM32(edx + 0x10C);
    MEM32(edx + ecx * 4 + 0x138) = esi;
    esi = ecx;
    esi = esi << 6;
    esi = esi + MEM32(edx + 0x128);
    PUSH32(esp, 0x10);
    esi = esi + eax;
    MEM32(ebp + -4) = esi;
    edi = esi;
    POP32(esp, ebx);

loc_0036618B: ;
    MEM32(edi) = 0;
    edi = edi + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0036618B; /* jne: not equal / not zero */

loc_00366197: ;
    edi = MEM32(ebp + 0x14);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    edi = MEM32(edi + 0xC);
    MEM32(esi + 0xC) = edi;
    if (CMP_AE(_fa, _fb)) goto loc_003661AB; /* jae: above or equal (unsigned >=) */

loc_003661A8: ;
    PUSH32(esp, 8);
    POP32(esp, ebx);

loc_003661AB: ;
    esi = 0x100;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003661B6; /* jbe: below or equal (unsigned <=) */

loc_003661B4: ;
    ebx = esi;

loc_003661B6: ;
    edi = MEM32(ebp + 0xC);
    ebx = ebx >> 3;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003661C5; /* jae: above or equal (unsigned >=) */

loc_003661C2: ;
    PUSH32(esp, 0x20);
    POP32(esp, edi);

loc_003661C5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003661CB; /* jbe: below or equal (unsigned <=) */

loc_003661C9: ;
    edi = esi;

loc_003661CB: ;
    esi = MEM32(ebp + 0x10);
    edi = edi >> 5;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003661DA; /* jbe: below or equal (unsigned <=) */

loc_003661D7: ;
    PUSH32(esp, 0xF);
    POP32(esp, esi);

loc_003661DA: ;
    esi = esi & 0x1F;
    esi = esi << 3;
    edi = edi & 7;
    esi = esi | edi;
    esi = esi << 0xA;
    ebx = ebx & 0x1F;
    esi = esi | ebx;
    edi = 0; /* xor self */
    esi = esi << 3;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = esi;
    esi = MEM32(ebp + -4);
    MEM32(esi + 0x14) = ebx;
    edi = edi << LO8(ecx);
    ecx = ecx & 0x1F;
    MEM32(edx + 0x104) = MEM32(edx + 0x104) | edi;
    esi = MEM32(edx + 0x104);
    MEM32(eax + 0x2504) = esi;
    MEM32(eax + 0x3200) = 0;
    MEM32(eax + 0x3250) = 0;
    esi = eax + 0x3204;
    MEM32(esi) = ecx;
    _fa = (uint32_t)(MEM32(edx + 0x104)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 0x104), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00366240; /* je: equal / zero */

loc_00366236: ;
    ecx = MEM32(esi);
    ecx = ecx | 0x100;
    MEM32(esi) = ecx;

loc_00366240: ;
    esi = MEM32(ebp + 0x14);
    ecx = 0; /* xor self */
    MEM32(eax + 0x3240) = ecx;
    MEM32(eax + 0x3244) = ecx;
    esi = MEM32(esi + 0xC);
    MEM32(eax + 0x322C) = esi;
    MEM32(eax + 0x3230) = ecx;
    MEM32(eax + 0x3228) = ecx;
    MEM32(eax + 0x3280) = ecx;
    MEM32(eax + 0x3224) = ebx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(edx + 0x104)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 0x104), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00366281; /* je: equal / zero */

loc_0036627B: ;
    MEM32(eax + 0x3220) = ecx;

loc_00366281: ;
    MEM32(eax + 0x3250) = ecx;
    MEM32(eax + 0x3200) = ecx;
    MEM32(eax + 0x2500) = ecx;
    MEM32(edx + 0x108) = MEM32(edx + 0x108) | edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003662A0
 * Original: 0x003662A0 - 0x003662D9 (57 bytes, 20 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003662A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003662A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 0x130);
    edx = MEM32(ebp + 8);
    ecx = ecx + edx * 8;
    edx = MEM32(ebp + 0x14);
    eax = eax + ecx;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx | 0xFFFFFF80u;
    ecx = ecx << 8;
    ecx = ecx | MEM32(ebp + 0x18);
    edx = edx & 0xFFFF;
    ecx = ecx << 0x10;
    ecx = ecx | edx;
    MEM32(eax + 4) = ecx;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003662D9
 * Original: 0x003662D9 - 0x0036634E (117 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003662D9(void)
{
    int _flags = 0; /* fallback flag var */

loc_003662D9: ;
    eax = MEM32(esp + 8);
    edx = MEM32(ecx);
    ecx = eax;
    PUSH32(esp, esi);
    ecx = ecx & 0xFF;
    esi = 0; /* xor self */
    eax = eax - 0x39;
    PUSH32(esp, edi);
    if ((eax == 0)) goto loc_00366314; /* je: equal / zero */

loc_003662F0: ;
    eax = eax - 0xB;
    if ((eax == 0)) goto loc_0036630D; /* je: equal / zero */

loc_003662F5: ;
    eax = eax - 0x13;
    if ((eax == 0)) goto loc_00366306; /* je: equal / zero */

loc_003662FA: ;
    eax = eax - 0x40;
    if ((eax != 0)) goto loc_0036631A; /* jne: not equal / not zero */

loc_003662FF: ;
    esi = 0xA00;
    goto loc_0036631A;

loc_00366306: ;
    esi = 0xB00;
    goto loc_0036631A;

loc_0036630D: ;
    esi = 0x201;
    goto loc_0036631A;

loc_00366314: ;
    ecx = ecx | 0x1000000;

loc_0036631A: ;
    eax = MEM32(esp + 0xC);
    edi = eax + 0x70000;
    edi = edi << 4;
    MEM32(edi + edx) = ecx;
    eax = eax << 4;
    eax = eax + edx;
    MEM32(eax + 0x700004) = esi;
    POP32(esp, edi);
    MEM32(eax + 0x700008) = 0;
    MEM32(eax + 0x70000C) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036634E
 * Original: 0x0036634E - 0x00366D2D (2527 bytes, 568 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0036634E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036634E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x1C;
    edx = MEM32(ecx + 0x100);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + edx * 4 + 0x138);
    esi = edi + 0x70000;
    ecx = esi;
    ecx = ecx << 4;
    edx = ecx + eax;
    ecx = MEM32(edx);
    ebx = 0; /* xor self */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx | ebx;
    MEM32(edx) = ecx;
    ecx = esi;
    ecx = ecx << 2;
    MEM32(eax + ecx * 4 + 0x33C) = 0xFFFF0000u;
    edx = 0; /* xor self */
    MEM32(eax + ecx * 4 + 0x340) = edx;
    MEM32(eax + ecx * 4 + 0x344) = edx;
    MEM32(eax + ecx * 4 + 0x348) = edx;
    MEM32(eax + ecx * 4 + 0x34C) = edx;
    MEM32(eax + ecx * 4 + 0x350) = edx;
    MEM32(eax + ecx * 4 + 0x354) = edx;
    MEM32(eax + ecx * 4 + 0x358) = edx;
    MEM32(eax + ecx * 4 + 0x35C) = edx;
    MEM32(eax + ecx * 4 + 0x360) = edx;
    MEM32(eax + ecx * 4 + 0x364) = edx;
    MEM32(eax + ecx * 4 + 0x368) = edx;
    MEM32(eax + ecx * 4 + 0x36C) = edx;
    MEM32(eax + ecx * 4 + 0x370) = edx;
    MEM32(eax + ecx * 4 + 0x374) = edx;
    MEM32(eax + ecx * 4 + 0x378) = edx;
    MEM32(eax + ecx * 4 + 0x37C) = edx;
    MEM32(eax + ecx * 4 + 0x380) = edx;
    MEM32(eax + ecx * 4 + 0x384) = edx;
    MEM32(eax + ecx * 4 + 0x388) = edx;
    MEM32(eax + ecx * 4 + 0x38C) = edx;
    MEM32(eax + ecx * 4 + 0x390) = edx;
    MEM32(eax + ecx * 4 + 0x394) = edx;
    MEM32(eax + ecx * 4 + 0x398) = edx;
    MEM32(eax + ecx * 4 + 0x39C) = edx;
    esi = 0xFFF0000;
    MEM32(eax + ecx * 4 + 0x3A0) = esi;
    MEM32(eax + ecx * 4 + 0x3A4) = esi;
    MEM32(eax + ecx * 4 + 0x3A8) = edx;
    MEM32(eax + ecx * 4 + 0x3AC) = edx;
    MEM32(eax + ecx * 4 + 0x3B0) = edx;
    MEM32(eax + ecx * 4 + 0x3B4) = edx;
    MEM32(eax + ecx * 4 + 0x3B8) = edx;
    MEM32(eax + ecx * 4 + 0x3BC) = edx;
    MEM32(eax + ecx * 4 + 0x3C0) = edx;
    MEM32(eax + ecx * 4 + 0x3C4) = edx;
    MEM32(eax + ecx * 4 + 0x3C8) = edx;
    MEM32(eax + ecx * 4 + 0x3CC) = edx;
    MEM32(eax + ecx * 4 + 0x3D0) = edx;
    MEM32(eax + ecx * 4 + 0x3D4) = edx;
    MEM32(eax + ecx * 4 + 0x3D8) = edx;
    MEM32(eax + ecx * 4 + 0x3DC) = edx;
    MEM32(eax + ecx * 4 + 0x3E0) = edx;
    MEM32(eax + ecx * 4 + 0x3E4) = edx;
    MEM32(eax + ecx * 4 + 0x3E8) = edx;
    MEM32(eax + ecx * 4 + 0x3EC) = edx;
    MEM32(eax + ecx * 4 + 0x3F0) = edx;
    MEM32(eax + ecx * 4 + 0x3F4) = edx;
    MEM32(eax + ecx * 4 + 0x3F8) = edx;
    MEM32(eax + ecx * 4 + 0x3FC) = edx;
    MEM32(eax + ecx * 4 + 0x400) = edx;
    MEM32(eax + ecx * 4 + 0x404) = edx;
    MEM32(eax + ecx * 4 + 0x408) = edx;
    MEM32(eax + ecx * 4 + 0x40C) = edx;
    MEM32(eax + ecx * 4 + 0x410) = edx;
    MEM32(eax + ecx * 4 + 0x414) = edx;
    MEM32(eax + ecx * 4 + 0x418) = edx;
    MEM32(eax + ecx * 4 + 0x41C) = edx;
    MEM32(eax + ecx * 4 + 0x420) = edx;
    MEM32(eax + ecx * 4 + 0x424) = edx;
    MEM32(eax + ecx * 4 + 0x428) = edx;
    MEM32(ebp + -20) = edi;
    MEM32(eax + ecx * 4 + 0x42C) = edx;
    MEM32(eax + ecx * 4 + 0x430) = edx;
    MEM32(eax + ecx * 4 + 0x434) = edx;
    MEM32(eax + ecx * 4 + 0x438) = edx;
    MEM32(eax + ecx * 4 + 0x43C) = edx;
    MEM32(eax + ecx * 4 + 0x440) = edx;
    MEM32(eax + ecx * 4 + 0x444) = edx;
    MEM32(eax + ecx * 4 + 0x448) = edx;
    MEM32(eax + ecx * 4 + 0x44C) = edx;
    MEM32(eax + ecx * 4 + 0x450) = edx;
    MEM32(eax + ecx * 4 + 0x454) = edx;
    MEM32(eax + ecx * 4 + 0x458) = edx;
    MEM32(eax + ecx * 4 + 0x45C) = edx;
    MEM32(eax + ecx * 4 + 0x460) = edx;
    MEM32(eax + ecx * 4 + 0x464) = edx;
    MEM32(eax + ecx * 4 + 0x468) = edx;
    MEM32(eax + ecx * 4 + 0x46C) = edx;
    MEM32(eax + ecx * 4 + 0x470) = edx;
    MEM32(eax + ecx * 4 + 0x474) = edx;
    MEM32(eax + ecx * 4 + 0x478) = edx;
    MEM32(eax + ecx * 4 + 0x47C) = 0x101;
    MEM32(eax + ecx * 4 + 0x480) = edx;
    MEM32(eax + ecx * 4 + 0x484) = edx;
    MEM32(eax + ecx * 4 + 0x488) = edx;
    MEM32(eax + ecx * 4 + 0x48C) = edx;
    MEM32(eax + ecx * 4 + 0x490) = 0x111;
    MEM32(eax + ecx * 4 + 0x494) = edx;
    MEM32(eax + ecx * 4 + 0x498) = edx;
    MEM32(eax + ecx * 4 + 0x49C) = edx;
    MEM32(eax + ecx * 4 + 0x4A0) = edx;
    MEM32(eax + ecx * 4 + 0x4A4) = edx;
    MEM32(eax + ecx * 4 + 0x4A8) = 0x44400000;
    MEM32(eax + ecx * 4 + 0x4AC) = edx;
    MEM32(eax + ecx * 4 + 0x4B0) = edx;
    MEM32(eax + ecx * 4 + 0x4B4) = edx;
    MEM32(eax + ecx * 4 + 0x4B8) = edx;
    MEM32(eax + ecx * 4 + 0x4BC) = edx;
    MEM32(eax + ecx * 4 + 0x4C0) = edx;
    MEM32(eax + ecx * 4 + 0x4C4) = edx;
    MEM32(eax + ecx * 4 + 0x4C8) = edx;
    MEM32(eax + ecx * 4 + 0x4CC) = edx;
    MEM32(eax + ecx * 4 + 0x4D0) = edx;
    esi = 0x30303;
    MEM32(eax + ecx * 4 + 0x4D4) = esi;
    MEM32(eax + ecx * 4 + 0x4D8) = esi;
    MEM32(eax + ecx * 4 + 0x4DC) = esi;
    MEM32(eax + ecx * 4 + 0x4E0) = esi;
    MEM32(eax + ecx * 4 + 0x4E4) = edx;
    MEM32(eax + ecx * 4 + 0x4E8) = edx;
    MEM32(eax + ecx * 4 + 0x4EC) = edx;
    MEM32(eax + ecx * 4 + 0x4F0) = edx;
    esi = 0x80000;
    MEM32(eax + ecx * 4 + 0x4F4) = esi;
    MEM32(eax + ecx * 4 + 0x4F8) = esi;
    MEM32(eax + ecx * 4 + 0x4FC) = esi;
    MEM32(eax + ecx * 4 + 0x500) = esi;
    MEM32(eax + ecx * 4 + 0x504) = edx;
    MEM32(eax + ecx * 4 + 0x508) = edx;
    esi = 0x1012000;
    MEM32(eax + ecx * 4 + 0x50C) = esi;
    MEM32(eax + ecx * 4 + 0x510) = esi;
    MEM32(eax + ecx * 4 + 0x514) = esi;
    MEM32(eax + ecx * 4 + 0x518) = esi;
    esi = 0x105B8;
    MEM32(eax + ecx * 4 + 0x51C) = esi;
    MEM32(eax + ecx * 4 + 0x520) = esi;
    MEM32(eax + ecx * 4 + 0x524) = esi;
    MEM32(eax + ecx * 4 + 0x528) = esi;
    esi = 0x80008;
    MEM32(eax + ecx * 4 + 0x52C) = esi;
    MEM32(eax + ecx * 4 + 0x530) = esi;
    MEM32(eax + ecx * 4 + 0x534) = esi;
    MEM32(eax + ecx * 4 + 0x538) = esi;
    MEM32(eax + ecx * 4 + 0x53C) = edx;
    MEM32(eax + ecx * 4 + 0x540) = edx;
    MEM32(eax + ecx * 4 + 0x544) = edx;
    MEM32(eax + ecx * 4 + 0x548) = edx;
    MEM32(eax + ecx * 4 + 0x54C) = edx;
    MEM32(eax + ecx * 4 + 0x550) = edx;
    MEM32(eax + ecx * 4 + 0x554) = edx;
    MEM32(eax + ecx * 4 + 0x558) = edx;
    edi = edi << 4;
    PUSH32(esp, 8);
    esi = edi + eax + 0x70055C;
    POP32(esp, edi);

loc_0036677A: ;
    MEM32(esi) = 0x7FF0000;
    esi = esi + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0036677A; /* jne: not equal / not zero */

loc_00366786: ;
    PUSH32(esp, 8);
    esi = eax + ecx * 4 + 0x57C;
    POP32(esp, edi);

loc_00366790: ;
    MEM32(esi) = 0x7FF0000;
    esi = esi + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00366790; /* jne: not equal / not zero */

loc_0036679C: ;
    MEM32(eax + ecx * 4 + 0x59C) = edx;
    MEM32(eax + ecx * 4 + 0x5A0) = edx;
    MEM32(eax + ecx * 4 + 0x5A4) = 0x4B7FFFFF;
    MEM32(eax + ecx * 4 + 0x5A8) = edx;
    MEM32(eax + ecx * 4 + 0x5AC) = edx;
    MEM32(eax + ecx * 4 + 0x5B0) = edx;
    MEM32(eax + ecx * 4 + 0x5B4) = edx;
    MEM32(eax + ecx * 4 + 0x5B8) = edx;
    MEM32(eax + ecx * 4 + 0x5BC) = edx;
    MEM32(eax + ecx * 4 + 0x5C0) = edx;
    MEM32(eax + ecx * 4 + 0x5C4) = edx;
    MEM32(eax + ecx * 4 + 0x5C8) = edx;
    MEM32(eax + ecx * 4 + 0x5CC) = edx;
    MEM32(eax + ecx * 4 + 0x5D0) = edx;
    MEM32(eax + ecx * 4 + 0x5D4) = edx;
    MEM32(eax + ecx * 4 + 0x5D8) = edx;
    MEM32(eax + ecx * 4 + 0x5DC) = edx;
    MEM32(eax + ecx * 4 + 0x5E0) = edx;
    MEM32(eax + ecx * 4 + 0x5E4) = edx;
    MEM32(eax + ecx * 4 + 0x5E8) = edx;
    MEM32(eax + ecx * 4 + 0x5EC) = edx;
    MEM32(eax + ecx * 4 + 0x5F0) = edx;
    MEM32(eax + ecx * 4 + 0x5F4) = edx;
    MEM32(eax + ecx * 4 + 0x5F8) = edx;
    MEM32(eax + ecx * 4 + 0x5FC) = ebx;
    MEM32(eax + ecx * 4 + 0x600) = edx;
    MEM32(eax + ecx * 4 + 0x604) = 0x4000;
    MEM32(eax + ecx * 4 + 0x608) = edx;
    MEM32(eax + ecx * 4 + 0x60C) = edx;
    MEM32(eax + ecx * 4 + 0x610) = ebx;
    MEM32(eax + ecx * 4 + 0x614) = edx;
    PUSH32(esp, 0x23);
    MEM32(eax + ecx * 4 + 0x618) = 0x40000;
    MEM32(eax + ecx * 4 + 0x61C) = 0x10000;
    POP32(esp, edi);
    MEM32(eax + ecx * 4 + 0x620) = edx;
    PUSH32(esp, 4);
    MEM32(eax + ecx * 4 + 0x624) = edx;
    MEM32(eax + ecx * 4 + 0x628) = edx;
    esi = eax + ecx * 4 + 0x62C;
    POP32(esp, ebx);

loc_003668B5: ;
    MEM32(esi) = edx;
    esi = esi + ebx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003668B5; /* jne: not equal / not zero */

loc_003668BC: ;
    PUSH32(esp, 0x1D);
    esi = eax + ecx * 4 + 0x6B8;
    POP32(esp, edi);

loc_003668C6: ;
    MEM32(esi) = edx;
    esi = esi + ebx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003668C6; /* jne: not equal / not zero */

loc_003668CD: ;
    PUSH32(esp, 0x1D);
    esi = eax + ecx * 4 + 0x72C;
    POP32(esp, edi);

loc_003668D7: ;
    MEM32(esi) = edx;
    esi = esi + ebx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003668D7; /* jne: not equal / not zero */

loc_003668DE: ;
    PUSH32(esp, 0x1D);
    esi = eax + ecx * 4 + 0x7A0;
    POP32(esp, edi);

loc_003668E8: ;
    MEM32(esi) = edx;
    esi = esi + ebx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003668E8; /* jne: not equal / not zero */

loc_003668EF: ;
    PUSH32(esp, 2);
    esi = eax + ecx * 4 + 0x814;
    POP32(esp, edi);

loc_003668F9: ;
    MEM32(esi) = edx;
    esi = esi + ebx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003668F9; /* jne: not equal / not zero */

loc_00366900: ;
    esi = 0x80;
    ebx = eax + ecx * 4 + 0x81C;
    edi = esi;

loc_0036690E: ;
    MEM32(ebx) = edx;
    ebx = ebx + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0036690E; /* jne: not equal / not zero */

loc_00366916: ;
    ebx = eax + ecx * 4 + 0xA1C;
    edi = esi;

loc_0036691F: ;
    MEM32(ebx) = edx;
    ebx = ebx + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0036691F; /* jne: not equal / not zero */

loc_00366927: ;
    ebx = eax + ecx * 4 + 0xC1C;
    edi = esi;

loc_00366930: ;
    MEM32(ebx) = edx;
    ebx = ebx + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00366930; /* jne: not equal / not zero */

loc_00366938: ;
    ebx = eax + ecx * 4 + 0xE1C;

loc_0036693F: ;
    MEM32(ebx) = edx;
    ebx = ebx + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0036693F; /* jne: not equal / not zero */

loc_00366947: ;
    esi = eax + ecx * 4 + 0x101C;
    edi = 0xC0;

loc_00366953: ;
    MEM32(esi) = edx;
    esi = esi + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00366953; /* jne: not equal / not zero */

loc_0036695B: ;
    ebx = eax + ecx * 4 + 0x131C;
    edi = 0x1E0;
    esi = 0x6A7;

loc_0036696C: ;
    MEM32(ebx) = edx;
    ebx = ebx + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0036696C; /* jne: not equal / not zero */

loc_00366974: ;
    edi = eax + ecx * 4 + 0x1A9C;
    MEM32(ebp + -12) = 0x88;

loc_00366982: ;
    MEM32(edi) = 0x10700FF9;
    PUSH32(esp, 4);
    POP32(esp, ebx);
    edi = edi + ebx;
    MEM32(edi) = 0x436086C;
    edi = edi + ebx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi) = 0xC001B;
    edi = edi + ebx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + ebx;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00366982; /* jne: not equal / not zero */

loc_003669AA: ;
    edi = ecx + esi;
    ebx = esi;
    edi = eax + edi * 4;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -12) = 0x300;
    esi = esi + 0x300;

loc_003669C5: ;
    edi = MEM32(ebp + -4);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_003669C5; /* jne: not equal / not zero */

loc_003669D3: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0x68;
    esi = esi + 0x68;

loc_003669E9: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_003669E9; /* jne: not equal / not zero */

loc_003669F7: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0xD0;
    esi = esi + 0xD0;

loc_00366A0D: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00366A0D; /* jne: not equal / not zero */

loc_00366A1B: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 4;
    esi = esi + 4;

loc_00366A31: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00366A31; /* jne: not equal / not zero */

loc_00366A3F: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0x14;
    esi = esi + 0x14;

loc_00366A55: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00366A55; /* jne: not equal / not zero */

loc_00366A63: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0xF;
    esi = esi + 0xF;

loc_00366A76: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00366A76; /* jne: not equal / not zero */

loc_00366A84: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0xE;
    esi = esi + 0xE;

loc_00366A97: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00366A97; /* jne: not equal / not zero */

loc_00366AA5: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0x44;
    esi = esi + 0x44;

loc_00366AB8: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00366AB8; /* jne: not equal / not zero */

loc_00366AC6: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0x20;
    esi = esi + 0x20;

loc_00366AD9: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00366AD9; /* jne: not equal / not zero */

loc_00366AE7: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0xF;
    esi = esi + 0xF;

loc_00366AFA: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00366AFA; /* jne: not equal / not zero */

loc_00366B08: ;
    esi = esi + ecx;
    MEM32(eax + esi * 4) = edx;
    edi = ebx + 0xE0;
    esi = ecx + edi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + esi * 4) = 0x3F800000;
    esi = ecx + edi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + esi * 4) = edx;
    esi = ecx + edi;
    MEM32(eax + esi * 4) = edx;
    esi = MEM32(ebp + -20);
    esi = esi << 2;
    edi = edi + esi;
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = ebx + 0xF0;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x40000000;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x3F800000;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x3F000000;
    edi = edi + esi;
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -8);
    edi = edi + 0xF4;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x40000000;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x3F800000;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi = edi + esi;
    MEM32(eax + edi * 4 + 0x700004) = 0xBF800000u;
    edi = MEM32(ebp + -8);
    edi = edi + 0xF8;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0xBF800000u;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi = edi + esi;
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -8);
    edi = edi + 0xE4;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x3F800000;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi = edi + esi;
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -8);
    edi = edi + 0xFC;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi = edi + esi;
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -4);
    edi = edi + 0x58;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi = edi + esi;
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -4);
    edi = edi + 0x40;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0xFE000;
    edi = edi + esi;
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -4);
    edi = edi + 0x44;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi = edi + esi;
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -4);
    edi = edi + 0x4C;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi = edi + esi;
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -4);
    edi = edi + 0x60;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x3F8;
    ebx = MEM32(ebp + -20);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + edi;
    MEM32(eax + ecx * 4) = edx;
    ecx = esi + edi;
    edi = MEM32(ebp + -28);
    MEM32(eax + ecx * 4 + 0x700004) = edx;
    ecx = MEM32(ebp + -24);
    ecx = ecx + esi;
    MEM32(eax + ecx * 4 + 0x700004) = 0x2FE000;
    ecx = 0x1C527C;
    edx = edi + ebx * 4 + 0x1C0004;
    MEM32(eax + edx * 4) = ecx;
    edx = esi + edi;
    MEM32(eax + edx * 4 + 0x700014) = ecx;
    MEM32(eax + edx * 4 + 0x700018) = ecx;
    esi = edi + ebx * 4 + 0x1C0008;
    MEM32(eax + edx * 4 + 0x70001C) = ecx;
    MEM32(eax + esi * 4) = ecx;
    POP32(esp, edi);
    MEM32(eax + edx * 4 + 0x700024) = ecx;
    POP32(esp, esi);
    MEM32(eax + edx * 4 + 0x700028) = ecx;
    MEM32(eax + edx * 4 + 0x70002C) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00366D2D
 * Original: 0x00366D2D - 0x00366E50 (291 bytes, 78 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00366D2D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366D2D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx);
    eax = MEM32(esi + 0x400100);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00366D47; /* je: equal / zero */

loc_00366D42: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366D47u); RECOMP_ABI_CALL(0x00362FC0u, sub_00362FC0); /* call 0x00362FC0 */

loc_00366D47: ;
    eax = MEM32(esi + 0x400720);
    ecx = ebx;
    MEM32(ebp + -4) = eax;
    MEM32(esi + 0x400720) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366D61u); RECOMP_ABI_CALL(0x00365E8Cu, sub_00365E8C); /* call 0x00365E8C */

loc_00366D61: ;
    edx = MEM32(ebp + 8);
    edi = ebx + 0x134;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00366D7B; /* je: equal / zero */

loc_00366D70: ;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366D78u); RECOMP_ABI_CALL(0x00365ECBu, sub_00365ECB); /* call 0x00365ECB */

loc_00366D78: ;
    edx = MEM32(ebp + 8);

loc_00366D7B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    MEM32(edi) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00366DA7; /* jne: not equal / not zero */

loc_00366D82: ;
    eax = MEM32(ebp + -4);
    MEM32(esi + 0x400144) = 0x10000100;
    eax = eax | 1;
    MEM32(esi + 0x400764) = 0x8000000;
    MEM32(esi + 0x400720) = eax;
    goto loc_00366E49;

loc_00366DA7: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebx + edx * 4 + 0x144)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + edx * 4 + 0x144), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00366DDA; /* je: equal / zero */

loc_00366DB2: ;
    eax = esi + 0x400080;
    MEM32(eax) = 0x70000;
    edi = MEM32(eax);
    MEM32(eax) = ecx;
    eax = MEM32(eax);
    PUSH32(esp, 0xF);
    MEM32(esi + 0x400750) = 0x3D0000;
    POP32(esp, eax);

loc_00366DD1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x400754) = ecx;
    if ((_fa != 0)) goto loc_00366DD1; /* jne: not equal / not zero */

loc_00366DDA: ;
    ecx = esi + 0x400084;
    eax = MEM32(ecx);
    eax = eax | 0x1000000;
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 8);
    edi = edx;
    edi = edi & 0x1F;
    edi = edi << 0x18;
    MEM32(esi + 0x400148) = edi;
    eax = MEM32(ebx + eax * 4 + 0x138);
    eax = eax & 0xFFFF;
    MEM32(esi + 0x400784) = eax;
    MEM32(esi + 0x400788) = 1;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366E1Du); RECOMP_ABI_CALL(0x00365E8Cu, sub_00365E8C); /* call 0x00365E8C */

loc_00366E1D: ;
    eax = MEM32(esi + 0x400148);
    eax = eax & 0xE0FFFFFFu;
    eax = eax | edi;
    MEM32(esi + 0x400148) = eax;
    MEM32(esi + 0x400144) = 0x10010100;
    esi = esi + 0x400764;
    eax = MEM32(esi);
    eax = eax & 0xCFFFFFFFu;
    MEM32(esi) = eax;

loc_00366E49: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00366E50
 * Original: 0x00366E50 - 0x00366ED1 (129 bytes, 33 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366E50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00366E50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    MEM32(esi + 0x3224) = 0xF0078;
    MEM32(esi + 0x2044) = 0x101FFFF;
    eax = MEM32(ecx + 0x120);
    ebp = 0; /* xor self */
    eax = eax & 0x3FF;
    MEM32(esi + 0x2040) = eax;
    MEM32(esi + 0x2500) = ebp;
    MEM32(esi + 0x3000) = ebp;
    PUSH32(esp, edi);
    MEM32(esi + 0x3050) = ebp;
    ebx = 0; /* xor self */
    MEM32(esi + 0x3200) = ebp;
    edi = esi + 0x3250;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi) = ebp;
    MEM32(esi + 0x3220) = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00366EACu); RECOMP_ABI_CALL(0x00365F04u, sub_00365F04); /* call 0x00365F04 */

loc_00366EAC: ;
    MEM32(esi + 0x3210) = ebp;
    MEM32(esi + 0x3270) = ebp;
    MEM32(edi) = ebx;
    MEM32(esi + 0x3200) = ebx;
    MEM32(esi + 0x2500) = ebx;
    POP32(esp, edi);
    MEM32(esi + 0x2500) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00366E6F
 * Original: 0x00366E6F - 0x00366ED1 (98 bytes, 26 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366E6F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00366E6F: ;
    ebp = 0; /* xor self */
    eax = eax & 0x3FF;
    MEM32(esi + 0x2040) = eax;
    MEM32(esi + 0x2500) = ebp;
    MEM32(esi + 0x3000) = ebp;
    PUSH32(esp, edi);
    MEM32(esi + 0x3050) = ebp;
    ebx = 0; /* xor self */
    MEM32(esi + 0x3200) = ebp;
    edi = esi + 0x3250;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi) = ebp;
    MEM32(esi + 0x3220) = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00366EACu); RECOMP_ABI_CALL(0x00365F04u, sub_00365F04); /* call 0x00365F04 */

loc_00366EAC: ;
    MEM32(esi + 0x3210) = ebp;
    MEM32(esi + 0x3270) = ebp;
    MEM32(edi) = ebx;
    MEM32(esi + 0x3200) = ebx;
    MEM32(esi + 0x2500) = ebx;
    POP32(esp, edi);
    MEM32(esi + 0x2500) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00366ED1
 * Original: 0x00366ED1 - 0x00367146 (629 bytes, 133 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366ED1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00366ED1: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    eax = esi + 0x200;
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFEFFFu;
    MEM32(eax) = ecx;
    ecx = MEM32(eax);
    ecx = ecx | 0x1000;
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    MEM32(edi + 0x7EC) = eax;
    MEM32(edi + 0x7FC) = eax;
    MEM32(edi + 0x808) = eax;
    MEM32(edi + 0x814) = eax;
    MEM32(edi + 0x7F0) = 0x118700;
    MEM32(edi + 0x7F4) = 0x28C3FF;
    MEM32(edi + 0x7F8) = 0xF3DE0479u;
    MEM32(edi + 0x800) = 4;
    MEM32(edi + 0x804) = 0x45EAD10E;
    MEM32(edi + 0x80C) = 0x78;
    MEM32(edi + 0x810) = 0x40;
    MEM32(esi + 0x400080) = eax;
    eax = MEM32(edi + 0x7F0);
    MEM32(esi + 0x400084) = eax;
    eax = MEM32(edi + 0x7F4);
    MEM32(esi + 0x400880) = eax;
    eax = MEM32(edi + 0x7F8);
    MEM32(esi + 0x40008C) = eax;
    eax = MEM32(edi + 0x7FC);
    MEM32(esi + 0x400090) = eax;
    eax = MEM32(edi + 0x800);
    MEM32(esi + 0x400094) = eax;
    eax = MEM32(edi + 0x804);
    MEM32(esi + 0x400B80) = eax;
    eax = MEM32(edi + 0x808);
    MEM32(esi + 0x400B84) = eax;
    eax = MEM32(edi + 0x80C);
    MEM32(esi + 0x400098) = eax;
    eax = MEM32(edi + 0x810);
    MEM32(esi + 0x40009C) = eax;
    eax = MEM32(edi + 0x814);
    MEM32(esi + 0x400B88) = eax;
    eax = MEM32(edi + 0x140);
    eax = eax & 0xFFFF;
    ecx = edi;
    MEM32(esi + 0x400780) = eax;
    PUSH32(esp, 0x00366FEBu); RECOMP_ABI_CALL(0x00365E8Cu, sub_00365E8C); /* call 0x00365E8C */

loc_00366FEB: ;
    PUSH32(esp, 0x50);
    POP32(esp, edx);
    eax = esi + 0x400904;
    ebx = 0x1FFC;
    ecx = 0xEA0000;

loc_00366FFE: ;
    ebp = MEM32(eax + -3147456);
    MEM32(eax) = ebp;
    MEM32(esp + 0x10) = ebp;
    ebp = edx + -32;
    ebp = ebp & ebx;
    ebp = ebp | ecx;
    MEM32(esi + 0x400750) = ebp;
    ebp = MEM32(esp + 0x10);
    MEM32(esi + 0x400754) = ebp;
    ebp = MEM32(eax + -3147452);
    MEM32(eax + 4) = ebp;
    MEM32(esp + 0x10) = ebp;
    ebp = edx;
    ebp = ebp & ebx;
    ebp = ebp | ecx;
    MEM32(esi + 0x400750) = ebp;
    ebp = MEM32(esp + 0x10);
    MEM32(esi + 0x400754) = ebp;
    ebp = MEM32(eax + -3147460);
    MEM32(eax + -4) = ebp;
    MEM32(esp + 0x10) = ebp;
    ebp = edx + -64;
    ebp = ebp & ebx;
    ebp = ebp | ecx;
    MEM32(esi + 0x400750) = ebp;
    ebp = MEM32(esp + 0x10);
    edx = edx + 4;
    eax = eax + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x70 (32-bit) */
    MEM32(esi + 0x400754) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_00366FFE; /* jl: less (signed <) */

loc_00367073: ;
    MEM32(esp + 0x10) = 0xFFBFF710u;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - esi;
    eax = esi + 0x400980;
    MEM32(esp + 0x14) = 8;

loc_0036708D: ;
    ebp = MEM32(esp + 0x10);
    edx = MEM32(eax + -3147392);
    ebp = ebp + eax;
    ebp = ebp & ebx;
    MEM32(eax) = edx;
    ebp = ebp | ecx;
    eax = eax + 4;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x400750) = ebp;
    MEM32(esi + 0x400754) = edx;
    if ((_fa != 0)) goto loc_0036708D; /* jne: not equal / not zero */

loc_003670B4: ;
    eax = MEM32(esi + 0x100324);
    MEM32(esi + 0x4009A0) = eax;
    MEM32(esi + 0x400750) = 0xEA000C;
    MEM32(esi + 0x400754) = eax;
    eax = MEM32(esi + 0x100200);
    MEM32(esi + 0x4009A4) = eax;
    MEM32(esi + 0x400750) = ecx;
    MEM32(esi + 0x400754) = eax;
    eax = MEM32(esi + 0x100204);
    MEM32(esi + 0x4009A8) = eax;
    MEM32(esi + 0x400750) = 0xEA0004;
    MEM32(esi + 0x400754) = eax;
    eax = 0; /* xor self */
    MEM32(esi + 0x40014C) = eax;
    MEM32(esi + 0x400150) = eax;
    MEM32(esi + 0x400154) = eax;
    MEM32(esi + 0x400158) = eax;
    MEM32(esi + 0x400144) = 0x10000000;
    MEM32(esi + 0x400764) = 0x8000000;
    PUSH32(esp, MEM32(edi + 0x134));
    ecx = edi;
    PUSH32(esp, 0x0036713Fu); RECOMP_ABI_CALL(0x00366D2Du, sub_00366D2D); /* call 0x00366D2D */

loc_0036713F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367150
 * Original: 0x00367150 - 0x003671D1 (129 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367150(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367150: ;
    eax = edi;
    PUSH32(esp, esi);
    eax = eax & 0xF;
    { uint32_t _jt = MEM32(eax * 4 + 0x3671D4); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0036715Du) goto loc_0036715D;
    if (_jt == 0x00367177u) goto loc_00367177;
    if (_jt == 0x0036717Eu) goto loc_0036717E;
    if (_jt == 0x00367192u) goto loc_00367192;
    if (_jt == 0x00367199u) goto loc_00367199;
    if (_jt == 0x003671A3u) goto loc_003671A3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0036715D: ;
    eax = edx;
    eax = eax & 3;
    esi = MEM32(eax * 4 + 0x36DA88);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00367172; /* jne: not equal / not zero */

loc_0036716D: ;
    esi = esi | 0xFFFFFFFFu;
    goto loc_003671A8;

loc_00367172: ;
    esi = eax + 8;
    goto loc_003671A8;

loc_00367177: ;
    esi = 1;
    goto loc_003671A8;

loc_0036717E: ;
    eax = MEM32(0x36CB08);
    eax = eax | 0x40;
    esi = 5;
    MEM32(0x36CB08) = eax;
    goto loc_003671A8;

loc_00367192: ;
    esi = 0xD;
    goto loc_003671A8;

loc_00367199: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x10 (8-bit) */
    esi = 0xC;
    if (TEST_Z(_fa, _fb)) goto loc_003671A8; /* je: equal / zero */

loc_003671A3: ;
    esi = 4;

loc_003671A8: ;
    eax = ecx;
    eax = eax | edx;
    eax = eax | edi;
    edx = ecx;
    edx = edx ^ edi;
    eax = eax >> 1;
    edx = edx & 0x10;
    eax = eax & 0x10;
    edx = edx << 1;
    eax = eax | edx;
    edx = ecx;
    edx = edx & 0x40;
    eax = eax | edx;
    ecx = ecx >> 0xD;
    eax = eax | esi;
    ecx = ecx & 0x78;
    eax = eax << LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003671F0
 * Original: 0x003671F0 - 0x00367747 (1367 bytes, 373 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003671F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003671F0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x784);
    esp = esp - 0xB8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00367214; /* je: equal / zero */

loc_00367204: ;
    eax = MEM32(esp + 0xC0);
    esp = esp + 0xB8;
    esp += 12; return; /* ret 8 */

loc_00367214: ;
    eax = MEM32(ecx + 8);
    MEM32(esp + 0x24) = eax;
    eax = eax & 0xFFFEFFBFu;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(0x36CA38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0036723F; /* je: equal / zero */

loc_00367233: ;
    MEM32(esp + 0xC) = 3;
    eax = MEM32(esp + 0xC);

loc_0036723F: ;
    PUSH32(esp, ebx);
    ebx = eax;
    ecx = esp + 0x30;
    MEM32(esp + 0x14) = eax;
    ebx = ebx | 0x10;
    eax = eax << 7;
    PUSH32(esp, ebp);
    MEM32(esp + 0x10) = ecx;
    ecx = eax + 0x36C660;
    eax = MEM32(ecx + 0x30);
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, edi);
    goto loc_00367270;

    /* nop */

loc_00367270: ;
    ecx = MEM32(esp + 0x24);
    edi = MEM32(ecx + 0x34);
    esi = MEM32(ecx + 0x38);
    ebp = MEM32(ecx + 0x3C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ecx + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x50), 5 (32-bit) */
    MEM32(esp + 0x10) = edi;
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0x100;
    edx = edx + 0xC00;
    MEM32(esp + 0x2C) = edx;
    goto loc_003672A0;

    /* nop */

loc_003672A0: ;
    MEM32(esp + 0x14) = edx;
    ecx = eax + -1;
    { uint32_t _jt = MEM32(ecx * 4 + 0x367748); /* switch: 26 entries, 22 targets */
    if (_jt == 0x003672AEu) goto loc_003672AE;
    if (_jt == 0x003672F8u) goto loc_003672F8;
    if (_jt == 0x00367310u) goto loc_00367310;
    if (_jt == 0x00367325u) goto loc_00367325;
    if (_jt == 0x0036732Eu) goto loc_0036732E;
    if (_jt == 0x00367339u) goto loc_00367339;
    if (_jt == 0x00367353u) goto loc_00367353;
    if (_jt == 0x0036735Eu) goto loc_0036735E;
    if (_jt == 0x00367366u) goto loc_00367366;
    if (_jt == 0x00367381u) goto loc_00367381;
    if (_jt == 0x0036739Cu) goto loc_0036739C;
    if (_jt == 0x003673C8u) goto loc_003673C8;
    if (_jt == 0x003673F9u) goto loc_003673F9;
    if (_jt == 0x0036741Eu) goto loc_0036741E;
    if (_jt == 0x0036745Au) goto loc_0036745A;
    if (_jt == 0x00367486u) goto loc_00367486;
    if (_jt == 0x0036748Du) goto loc_0036748D;
    if (_jt == 0x003674B9u) goto loc_003674B9;
    if (_jt == 0x003674F7u) goto loc_003674F7;
    if (_jt == 0x00367525u) goto loc_00367525;
    if (_jt == 0x0036756Au) goto loc_0036756A;
    if (_jt == 0x00367593u) goto loc_00367593;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003672AE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003672ED; /* je: equal / zero */

loc_003672B3: ;
    ecx = ebx;
    ecx = ecx & 0x20;
    eax = ecx;
    eax = eax << 0x17;
    ebp = 0; /* xor self */
    eax = eax | 0x4200000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003675D6; /* jne: not equal / not zero */

loc_003672CC: ;
    edi = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x20);
    MEM32(edi) = eax;
    eax = eax | 0x10000000;
    MEM32(edi + 0x24) = edx;
    MEM32(edi + 0x48) = eax;
    MEM32(edi + 0x6C) = edx;
    edi = edi + 4;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00367675;

loc_003672ED: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x14) = eax;
    goto loc_003675D6;

loc_003672F8: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x00367306u); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_00367306: ;
    eax = eax | 0x200000;
    goto loc_003675D6;

loc_00367310: ;
    edi = ebp;
    edx = ebx;
    ecx = 0; /* xor self */
    PUSH32(esp, 0x0036731Bu); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_0036731B: ;
    eax = eax | 0x2000;
    goto loc_003675D6;

loc_00367325: ;
    eax = edx;
    eax = eax | 0x20000;
    goto loc_00367335;

loc_0036732E: ;
    eax = edx;
    eax = eax | 0x10000;

loc_00367335: ;
    MEM32(esp + 0x14) = eax;

loc_00367339: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x00367347u); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_00367347: ;
    esi = eax;
    ecx = 0x20000;
    goto loc_003675CB;

loc_00367353: ;
    eax = edx;
    eax = eax | 0x18000;
    MEM32(esp + 0x14) = eax;

loc_0036735E: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) | 0x8000;

loc_00367366: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x00367374u); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_00367374: ;
    esi = eax;
    esi = esi | 0x202000;
    goto loc_003675C9;

loc_00367381: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x0036738Fu); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_0036738F: ;
    esi = eax;
    esi = esi | 0x204000;
    goto loc_003675C9;

loc_0036739C: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x003673AAu); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_003673AA: ;
    eax = eax | 0x200000;
    edx = ebx;
    ecx = 0x10010;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x003673BFu); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_003673BF: ;
    esi = MEM32(esp + 0x10);
    goto loc_003675C7;

loc_003673C8: ;
    eax = eax + 0xFFFFFFF4u;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x003673DDu); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_003673DD: ;
    edi = MEM32(esp + 0x10);
    edx = ebx;
    ecx = 0x20020;
    esi = eax;
    PUSH32(esp, 0x003673EFu); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_003673EF: ;
    ecx = 0x10030;
    goto loc_003675BE;

loc_003673F9: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x00367407u); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_00367407: ;
    esi = eax;
    esi = esi | 0x200000;
    edi = 2;
    ecx = 0x10030;
    goto loc_003675C0;

loc_0036741E: ;
    ecx = 0x30000;
    edx = ebx;
    edi = esi;
    PUSH32(esp, 0x0036742Cu); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_0036742C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0036744D; /* je: equal / zero */

loc_00367433: ;
    edi = 2;
    edx = ebx;
    ecx = 0x20000;
    PUSH32(esp, 0x00367444u); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_00367444: ;
    esi = esi | eax;
    eax = esi;
    goto loc_003675D6;

loc_0036744D: ;
    esi = esi | 0x200000;
    eax = esi;
    goto loc_003675D6;

loc_0036745A: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x00367468u); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_00367468: ;
    eax = eax | 0x200000;
    edx = ebx;
    ecx = 0x10020;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0036747Du); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_0036747D: ;
    esi = MEM32(esp + 0x10);
    goto loc_003675C7;

loc_00367486: ;
    ecx = 0x30000;
    goto loc_003674BE;

loc_0036748D: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x0036749Bu); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_0036749B: ;
    eax = eax | 0x200000;
    edx = ebx;
    ecx = 0x10030;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x003674B0u); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_003674B0: ;
    esi = MEM32(esp + 0x10);
    goto loc_003675C7;

loc_003674B9: ;
    ecx = 0x30010;

loc_003674BE: ;
    edi = esi;
    edx = ebx;
    PUSH32(esp, 0x003674C7u); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_003674C7: ;
    edi = ebp;
    edx = ebx;
    ecx = 0x20000;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x003674D9u); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_003674D9: ;
    ebp = MEM32(esp + 0x10);
    edi = esi;
    edx = ebx;
    ecx = 0x10020;
    ebp = ebp | eax;
    PUSH32(esp, 0x003674EDu); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_003674ED: ;
    eax = eax | ebp;
    eax = eax | 0x20;
    goto loc_003675D6;

loc_003674F7: ;
    edi = 1;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x00367508u); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_00367508: ;
    ecx = MEM32(esp + 0xCC);
    edx = MEM32(ecx + 8);
    eax = eax | 0x200000;
    edx = edx | 0x10000;
    MEM32(ecx + 8) = edx;
    goto loc_003675D6;

loc_00367525: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30040;
    PUSH32(esp, 0x00367533u); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_00367533: ;
    edi = ebp;
    edx = ebx;
    ecx = 0x20040;
    esi = eax;
    PUSH32(esp, 0x00367543u); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_00367543: ;
    ecx = MEM32(esp + 0x2C);
    ecx = ecx | 0x820000;
    ecx = ecx >> 4;
    edx = 0; /* xor self */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x18);
    eax = eax | esi;
    MEM32(ecx + 0x48) = edx;
    MEM32(ecx + 0x6C) = edx;
    ebx = ebx | 0x80;
    goto loc_003675D6;

loc_0036756A: ;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x00367576u); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_00367576: ;
    eax = eax | 0x200000;
    edi = esi;
    edx = ebx;
    ecx = 0x10000;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0036758Du); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_0036758D: ;
    esi = MEM32(esp + 0x10);
    goto loc_003675C7;

loc_00367593: ;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x0036759Fu); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_0036759F: ;
    edi = esi;
    edx = ebx;
    ecx = 0x20000;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x003675B1u); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_003675B1: ;
    esi = MEM32(esp + 0x30);
    edi = MEM32(esp + 0x10);
    ecx = 0x10010;

loc_003675BE: ;
    esi = esi | eax;

loc_003675C0: ;
    edx = ebx;
    PUSH32(esp, 0x003675C7u); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_003675C7: ;
    esi = esi | eax;

loc_003675C9: ;
    ecx = 0; /* xor self */

loc_003675CB: ;
    edx = ebx;
    edi = ebp;
    PUSH32(esp, 0x003675D4u); RECOMP_ABI_CALL(0x00367150u, sub_00367150); /* call 0x00367150 */

loc_003675D4: ;
    eax = eax | esi;

loc_003675D6: ;
    edx = eax;
    edx = edx & 0xFF000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFF000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367602; /* jne: not equal / not zero */

loc_003675E6: ;
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, ~LO8(eax));
    eax = ZX8(LO8(eax));
    eax = eax & 0x10;
    ecx = ebx;
    eax = eax << 0x17;
    ecx = ecx & 0x20;
    eax = eax | 0x4200000;
    ecx = ecx << 0x17;
    eax = eax | ecx;

loc_00367602: ;
    edi = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    ecx = ebx;
    ecx = ecx & 0x48;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    MEM32(ecx + edi) = eax;
    MEM32(ecx + edi + 0x24) = edx;
    if (TEST_S(_fas, _fbs)) goto loc_0036763F; /* js: sign (negative) */

loc_0036761A: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0x44);
    esi = MEM32(eax + 0x48);
    ebp = MEM32(eax + 0x4C);
    eax = MEM32(eax + 0x40);
    edx = MEM32(esp + 0x2C);
    ebx = ebx | 0xE8;
    MEM32(esp + 0x10) = ecx;
    edi = ecx;
    goto loc_003672A0;

loc_0036763F: ;
    esi = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x28);
    edi = edi + 4;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x28) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00367673; /* je: equal / zero */

loc_00367661: ;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    ebx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00367270; /* jne: not equal / not zero */

loc_00367673: ;
    ebp = 0; /* xor self */

loc_00367675: ;
    esi = esi - MEM32(esp + 0x1C);
    eax = 8;
    eax = eax - esi;

loc_00367680: ;
    MEM32(edi) = ebp;
    MEM32(edi + 0x24) = ebp;
    MEM32(edi + 0x48) = ebp;
    MEM32(edi + 0x6C) = ebp;
    edi = edi + 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00367680; /* jne: not equal / not zero */

loc_00367691: ;
    ecx = MEM32(esp + 0xCC);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    MEM32(esp + 0x38) = 0x200AC0;
    MEM32(esp + 0x5C) = 0x201E40;
    MEM32(esp + 0x80) = 0x200260;
    MEM32(esp + 0xA4) = 0x200AA0;
    if (CMP_B(_fa, _fb)) goto loc_003676CA; /* jb: below (unsigned <) */

loc_003676C5: ;
    PUSH32(esp, 0x003676CAu); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_003676CA: ;
    MEM32(eax) = 0x41E60;
    MEM32(eax + 4) = esi;
    edi = eax + 8;
    ecx = 0x24;
    esi = esp + 0x38;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    esi = MEM32(esp + 0xCC);
    edi = MEM32(esp + 0x34);
    ecx = eax + 0x98;
    eax = MEM32(esi + 8);
    edx = eax;
    edx = edx ^ edi;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036771A; /* je: equal / zero */

loc_003676FE: ;
    edx = MEM32(0x36C9FC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036771A; /* jne: not equal / not zero */

loc_00367708: ;
    eax = eax >> 6;
    eax = eax & 1;
    MEM32(ecx) = 0x403B8;
    MEM32(ecx + 4) = eax;
    ecx = ecx + 8;

loc_0036771A: ;
    eax = MEM32(esi + 8);
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    MEM32(esi) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00367733; /* je: equal / zero */

loc_00367728: ;
    MEM32(esp + 0xD0) = MEM32(esp + 0xD0) | 0x400F;

loc_00367733: ;
    eax = MEM32(esp + 0xD0);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xB8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003677B0
 * Original: 0x003677B0 - 0x00367840 (144 bytes, 52 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003677B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003677B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 8);
    edx = MEM32(ebp + 0x10);
    ecx = edi;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = ecx & 0x1F;
    ecx = ecx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003677D0; /* jg: greater (signed >) */

loc_003677CC: ;
    ecx = edx;
    goto loc_00367836;

loc_003677D0: ;
    edx = edx - ecx;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    goto loc_0036782E;

    goto loc_003677E0;

    /* nop */

loc_003677E0: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    mm0 = MMX_MEM(esi); /* movq */
    mm1 = MMX_MEM(esi + 8); /* movq */
    mm2 = MMX_MEM(esi + 0x10); /* movq */
    mm3 = MMX_MEM(esi + 0x18); /* movq */
    mm4 = MMX_MEM(esi + 0x20); /* movq */
    mm5 = MMX_MEM(esi + 0x28); /* movq */
    mm6 = MMX_MEM(esi + 0x30); /* movq */
    mm7 = MMX_MEM(esi + 0x38); /* movq */
    MMX_STORE(edi, mm0); /* movntq */
    MMX_STORE(edi + 8, mm1); /* movntq */
    MMX_STORE(edi + 0x10, mm2); /* movntq */
    MMX_STORE(edi + 0x18, mm3); /* movntq */
    MMX_STORE(edi + 0x20, mm4); /* movntq */
    MMX_STORE(edi + 0x28, mm5); /* movntq */
    MMX_STORE(edi + 0x30, mm6); /* movntq */
    MMX_STORE(edi + 0x38, mm7); /* movntq */
    /* nop */
    /* nop */
    esi = esi + 0x40;
    edi = edi + 0x40;

loc_0036782E: ;
    ecx = ecx - 0x10;
    if (CMP_GE((uint32_t)ecx + (uint32_t)0x10, (uint32_t)0x10)) goto loc_003677E0; /* jge: greater or equal (signed >=) */

loc_00367833: ;
    ecx = ecx + 0x10;

loc_00367836: ;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00367840
 * Original: 0x00367840 - 0x003679A5 (357 bytes, 118 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00367840(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367840: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x36CAF8);
    ecx = edi;
    MEM32(ebp + -20) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367859u); RECOMP_ABI_CALL(0x00365710u, sub_00365710); /* call 0x00365710 */

loc_00367859: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00367865; /* jb: below (unsigned <) */

loc_00367860: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367865u); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_00367865: ;
    ecx = MEM32(ebp + 8);
    ebx = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 0x14);
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = ecx;
    edx = MEM32(edi + 0xC54);
    eax = eax + 8;
    MEM32(edi) = eax;
    MEM32(edi + 8) = MEM32(edi + 8) | 0x800;
    eax = MEM32(edi + 0xBCC);
    eax = eax + ebx;
    ebx = MEM32(ebp + 0xC);
    MEM32(ebp + 8) = eax;
    eax = MEM32(edi + 0xBD0);
    eax = eax + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10 (32-bit) */
    ecx = edi + 0xBD4;
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -4) = edx;
    MEM32(ebp + -12) = eax;
    MEM32(ecx + edx * 8 + -4) = eax;
    if (CMP_A(_fa, _fb)) goto loc_003678C1; /* ja: above (unsigned >) */

loc_003678B7: ;
    eax = 0x10;
    MEM32(ebp + 0x14) = eax;
    goto loc_003678D4;

loc_003678C1: ;
    eax = 0x7FF;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(edi + 0xBC8));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(edi + 0xBC8)); }
    MEM32(ebp + 0x14) = eax;

loc_003678D1: ;
    eax = MEM32(ebp + 0x14);

loc_003678D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003678DA; /* jb: below (unsigned <) */

loc_003678D8: ;
    eax = ebx;

loc_003678DA: ;
    esi = MEM32(edi + 0xBC8);
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    edx = esi + 3;
    ebx = ebx - eax;
    PUSH32(esp, edx);
    MEM32(ebp + -8) = eax;
    MEM32(ebp + 0xC) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003678F4u); RECOMP_ABI_CALL(0x003600A0u, sub_003600A0); /* call 0x003600A0 */

loc_003678F4: ;
    edx = esi;
    edx = edx << 0x12;
    ecx = eax;
    eax = eax + 4;
    edx = edx + 0x40001818;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80 (32-bit) */
    MEM32(ebp + 0x10) = eax;
    MEM32(ecx) = edx;
    if (CMP_B(_fa, _fb)) goto loc_00367937; /* jb: below (unsigned <) */

loc_00367911: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367937; /* jne: not equal / not zero */

loc_00367917: ;
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00367937; /* jne: not equal / not zero */

loc_0036791E: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367929u); RECOMP_ABI_CALL(0x003677B0u, sub_003677B0); /* call 0x003677B0 */

loc_00367929: ;
    ecx = esi * 4;
    MEM32(ebp + 8) = MEM32(ebp + 8) + ecx;
    eax = eax + ecx;
    goto loc_00367965;

loc_00367937: ;
    edx = MEM32(ebp + -8);
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x10);

loc_00367940: ;
    ebx = MEM32(ebp + -16);
    eax = MEM32(ebp + -4);

loc_00367946: ;
    ecx = MEM32(ebx);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    esi = esi + MEM32(ebx + 4);
    ebx = ebx + 8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00367946; /* jne: not equal / not zero */

loc_00367953: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00367940; /* jne: not equal / not zero */

loc_00367956: ;
    MEM32(ebp + 0x10) = edi;
    MEM32(ebp + 8) = esi;
    eax = MEM32(ebp + 0x10);
    ebx = MEM32(ebp + 0xC);
    edi = MEM32(ebp + -20);

loc_00367965: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00367970; /* je: equal / zero */

loc_00367969: ;
    MEM32(edi) = eax;
    goto loc_003678D1;

loc_00367970: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 0;
    eax = eax + 8;
    MEM32(edi) = eax;
    eax = MEM32(edi + 8);
    edx = eax;
    edx = edx & 0xFFFFE7FFu;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    MEM32(edi + 8) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0036799F; /* je: equal / zero */

loc_00367998: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036799Fu); RECOMP_ABI_CALL(0x0035FD20u, xml1_guest_dx8_insert_fence); /* call 0x0035FD20 */

loc_0036799F: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003679B0
 * Original: 0x003679B0 - 0x00367AE7 (311 bytes, 103 insns)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003679B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003679B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x36CAF8);
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(ebp + -8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003679C9u); RECOMP_ABI_CALL(0x00365710u, sub_00365710); /* call 0x00365710 */

loc_003679C9: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003679D5; /* jb: below (unsigned <) */

loc_003679D0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003679D5u); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_003679D5: ;
    ecx = MEM32(ebp + 8);
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(esi + 8);
    eax = eax + 8;
    MEM32(esi) = eax;
    eax = MEM32(esi + 0xBCC);
    eax = eax + ecx;
    ecx = MEM32(esi + 0xC54);
    edx = edx | 0x800;
    MEM32(ebp + -20) = ecx;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    MEM32(esi + 8) = edx;
    edx = esi + 0xBD4;
    MEM32(ebp + -16) = edx;
    MEM32(ebp + -12) = eax;
    if (CMP_A(_fa, _fb)) goto loc_00367A24; /* ja: above (unsigned >) */

loc_00367A1A: ;
    eax = 0x10;
    MEM32(ebp + -4) = eax;
    goto loc_00367A37;

loc_00367A24: ;
    eax = 0x7FF;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esi + 0xBC8));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esi + 0xBC8)); }
    MEM32(ebp + -4) = eax;

loc_00367A34: ;
    eax = MEM32(ebp + -4);

loc_00367A37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00367A3D; /* jb: below (unsigned <) */

loc_00367A3B: ;
    eax = ecx;

loc_00367A3D: ;
    esi = MEM32(esi + 0xBC8);
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    edx = esi + 3;
    ecx = ecx - eax;
    PUSH32(esp, edx);
    MEM32(ebp + 0x14) = eax;
    MEM32(ebp + 0xC) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367A57u); RECOMP_ABI_CALL(0x003600A0u, sub_003600A0); /* call 0x003600A0 */

loc_00367A57: ;
    ecx = eax;
    esi = esi << 0x12;
    eax = eax + 4;
    esi = esi + 0x40001818;
    MEM32(ebp + 8) = eax;
    MEM32(ecx) = esi;
    edx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 8);

loc_00367A70: ;
    esi = ZX16(MEM16(edx));
    edx = edx + 2;
    eax = MEM32(ebp + -20);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + 0x18));
    ebx = MEM32(ebp + -16);
    esi = esi + MEM32(ebp + -12);

loc_00367A83: ;
    ecx = MEM32(ebx);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    esi = esi + MEM32(ebx + 4);
    ebx = ebx + 8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00367A83; /* jne: not equal / not zero */

loc_00367A90: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00367A70; /* jne: not equal / not zero */

loc_00367A95: ;
    MEM32(ebp + 8) = edi;
    MEM32(ebp + 0x10) = edx;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    eax = MEM32(ebp + 8);
    if (TEST_Z(_fa, _fb)) goto loc_00367AB2; /* je: equal / zero */

loc_00367AA8: ;
    esi = MEM32(ebp + -8);
    MEM32(ecx) = eax;
    ecx = MEM32(ebp + 0xC);
    goto loc_00367A34;

loc_00367AB2: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 0;
    eax = eax + 8;
    MEM32(ecx) = eax;
    eax = MEM32(ecx + 8);
    POP32(esp, edi);
    edx = eax;
    edx = edx & 0xFFFFE7FFu;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    POP32(esp, esi);
    MEM32(ecx + 8) = edx;
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00367AE1; /* je: equal / zero */

loc_00367ADA: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367AE1u); RECOMP_ABI_CALL(0x0035FD20u, xml1_guest_dx8_insert_fence); /* call 0x0035FD20 */

loc_00367AE1: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00367AF0
 * Original: 0x00367AF0 - 0x00367B84 (148 bytes, 46 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367AF0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x36CAF8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x00367B02u); RECOMP_ABI_CALL(0x00365570u, sub_00365570); /* call 0x00365570 */

loc_00367B02: ;
    edi = MEM32(esp + 0x18);
    esi = edi + -1;
    esi = esi >> 8;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi + 5;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00367B16u); RECOMP_ABI_CALL(0x003600A0u, sub_003600A0); /* call 0x003600A0 */

loc_00367B16: ;
    ecx = MEM32(esp + 0x10);
    esi = esi << 0x12;
    MEM32(eax) = 0x417FC;
    esi = esi + 0x40001810;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x100 (32-bit) */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 8) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_00367B62; /* jbe: below or equal (unsigned <=) */

loc_00367B3B: ;
    edx = edi + -257;
    edx = edx >> 8;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00367B45: ;
    esi = ecx;
    esi = esi | 0xFF000000u;
    MEM32(eax + 0xC) = esi;
    eax = eax + 4;
    ecx = ecx + 0x100;
    edi = edi - 0x100;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00367B45; /* jne: not equal / not zero */

loc_00367B62: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi << 0x18;
    edi = edi | ecx;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = 0x417FC;
    MEM32(eax + 0x14) = 0;
    POP32(esp, edi);
    eax = eax + 0x18;
    POP32(esp, esi);
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00367B90
 * Original: 0x00367B90 - 0x00367DE7 (599 bytes, 192 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00367B90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367B90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x36CAF8);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(ebp + -8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367BADu); RECOMP_ABI_CALL(0x00365570u, sub_00365570); /* call 0x00365570 */

loc_00367BAD: ;
    ebx = MEM32(esi + 8);
    ebx = ebx | 0x800;
    PUSH32(esp, 0x209);
    MEM32(esi + 8) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367BC3u); RECOMP_ABI_CALL(0x003600A0u, sub_003600A0); /* call 0x003600A0 */

loc_00367BC3: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    ebx = eax;
    MEM32(ebx) = 0x417FC;
    MEM32(ebx + 4) = ecx;
    ebx = ebx + 8;
    eax = ebx;
    eax = (uint32_t)(-(int32_t)eax);
    eax = eax >> 2;
    eax = eax & 7;
    ecx = eax + eax + 0x3E;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(ebp + 8) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_00367D6D; /* jb: below (unsigned <) */

loc_00367BF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00367C31; /* je: equal / zero */

loc_00367BF4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    ecx = ecx << 0x12;
    ecx = ecx + 0x40001800;
    MEM32(ebp + 0xC) = eax;
    MEM32(ebx) = ecx;
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 8);
    edi = edi + 4;
    ecx = MEM32(ebp + 0xC);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    esi = MEM32(ebp + 0x10);
    ecx = eax * 4;
    esi = esi + ecx;
    eax = (uint32_t)(-(int32_t)eax);
    ebx = ebx + ecx + 4;
    edx = edx + eax * 2;
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + 0x10) = esi;
    MEM32(ebp + 0xC) = edx;

loc_00367C31: ;
    eax = 0x804021;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(ebp + 0xC);
    ecx = eax;
    ecx = ecx - edx;
    ecx = ecx >> 1;
    ecx = ecx + edx;
    ecx = ecx >> 9;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3FE);
    edx = eax;
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3E (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00367C5E; /* jb: below (unsigned <) */

loc_00367C55: ;
    edx = edx >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx & 0xFFFFFFF0u;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00367C63;

loc_00367C5E: ;
    edx = 0x1FF;

loc_00367C63: ;
    MEM32(ebp + -4) = edx;

loc_00367C66: ;
    eax = edx;
    eax = eax << 0x12;
    eax = eax + 0x40001800;
    MEM32(ebx) = eax;
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    ecx = ecx - 0xF;
    ecx = ecx >> 4;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    eax = MEM32(esi);
    mm1 = MMX_MEM(esi + 4); /* movq */
    mm2 = MMX_MEM(esi + 0xC); /* movq */
    mm3 = MMX_MEM(esi + 0x14); /* movq */
    mm4 = MMX_MEM(esi + 0x1C); /* movq */
    mm5 = MMX_MEM(esi + 0x24); /* movq */
    mm6 = MMX_MEM(esi + 0x2C); /* movq */
    mm7 = MMX_MEM(esi + 0x34); /* movq */
    /* nop */
    /* nop */
    MEM32(edi + 4) = eax;
    MMX_STORE(edi + 8, mm1); /* movntq */
    MMX_STORE(edi + 0x10, mm2); /* movntq */
    MMX_STORE(edi + 0x18, mm3); /* movntq */
    MMX_STORE(edi + 0x20, mm4); /* movntq */
    MMX_STORE(edi + 0x28, mm5); /* movntq */
    MMX_STORE(edi + 0x30, mm6); /* movntq */
    MMX_STORE(edi + 0x38, mm7); /* movntq */
    esi = esi + 0x3C;
    edi = edi + 0x40;
    edi = edi;

loc_00367CD0: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    mm0 = MMX_MEM(esi); /* movq */
    mm1 = MMX_MEM(esi + 8); /* movq */
    mm2 = MMX_MEM(esi + 0x10); /* movq */
    mm3 = MMX_MEM(esi + 0x18); /* movq */
    mm4 = MMX_MEM(esi + 0x20); /* movq */
    mm5 = MMX_MEM(esi + 0x28); /* movq */
    mm6 = MMX_MEM(esi + 0x30); /* movq */
    mm7 = MMX_MEM(esi + 0x38); /* movq */
    /* nop */
    /* nop */
    MMX_STORE(edi, mm0); /* movntq */
    MMX_STORE(edi + 8, mm1); /* movntq */
    MMX_STORE(edi + 0x10, mm2); /* movntq */
    MMX_STORE(edi + 0x18, mm3); /* movntq */
    MMX_STORE(edi + 0x20, mm4); /* movntq */
    MMX_STORE(edi + 0x28, mm5); /* movntq */
    MMX_STORE(edi + 0x30, mm6); /* movntq */
    MMX_STORE(edi + 0x38, mm7); /* movntq */
    esi = esi + 0x40;
    edi = edi + 0x40;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00367CD0; /* jne: not equal / not zero */

loc_00367D21: ;
    ecx = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 0x10);
    eax = edx * 4;
    edx = (uint32_t)(-(int32_t)edx);
    edi = edi + eax;
    edx = ecx + edx * 2;
    ecx = MEM32(ebp + -8);
    eax = eax + ebx + 4;
    PUSH32(esp, 0x204);
    MEM32(ebp + 0x10) = edi;
    MEM32(ebp + 0xC) = edx;
    MEM32(ecx) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367D4Eu); RECOMP_ABI_CALL(0x003600A0u, sub_003600A0); /* call 0x003600A0 */

loc_00367D4E: ;
    ebx = eax;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FE (32-bit) */
    edx = 0x1FF;
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + -4) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_00367C66; /* jae: above or equal (unsigned >=) */

loc_00367D69: ;
    (void)0; /* emms - empty MMX state */
    edx = eax;

loc_00367D6D: ;
    eax = edx;
    eax = eax >> 1;
    ecx = eax;
    ecx = ecx << 0x12;
    ecx = ecx + 0x40001800;
    MEM32(ebp + 0xC) = eax;
    MEM32(ebx) = ecx;
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 8);
    edi = edi + 4;
    ecx = MEM32(ebp + 0xC);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + 0x10);
    eax = eax << 2;
    ecx = ecx + eax;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    ebx = ebx + eax + 4;
    if (TEST_Z(_fa, _fb)) goto loc_00367DAF; /* je: equal / zero */

loc_00367DA0: ;
    eax = ZX16(MEM16(ecx));
    MEM32(ebx) = 0x41808;
    MEM32(ebx + 4) = eax;
    ebx = ebx + 8;

loc_00367DAF: ;
    ecx = MEM32(ebp + -8);
    MEM32(ebx) = 0x417FC;
    MEM32(ebx + 4) = 0;
    eax = MEM32(ecx + 8);
    ebx = ebx + 8;
    POP32(esp, edi);
    edx = eax;
    edx = edx & 0xFFFFE7FFu;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    POP32(esp, esi);
    MEM32(ecx) = ebx;
    MEM32(ecx + 8) = edx;
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00367DE1; /* je: equal / zero */

loc_00367DDA: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367DE1u); RECOMP_ABI_CALL(0x0035FD20u, xml1_guest_dx8_insert_fence); /* call 0x0035FD20 */

loc_00367DE1: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00367DF0
 * Original: 0x00367DF0 - 0x00367E27 (55 bytes, 17 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367DF0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x36CAF8);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00367E03; /* jb: below (unsigned <) */

loc_00367DFE: ;
    PUSH32(esp, 0x00367E03u); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_00367E03: ;
    ecx = MEM32(esp + 8);
    edx = ecx * 8 + 0x81880;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    eax = eax + 0xC;
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00367E30
 * Original: 0x00367E30 - 0x00367E65 (53 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367E30: ;
    PUSH32(esp, esi);
    esi = MEM32(0x36CAF8);
    PUSH32(esp, 0x00367E3Cu); RECOMP_ABI_CALL(0x003654F0u, sub_003654F0); /* call 0x003654F0 */

loc_00367E3C: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00367E48; /* jb: below (unsigned <) */

loc_00367E43: ;
    PUSH32(esp, 0x00367E48u); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_00367E48: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = ecx;
    eax = eax + 8;
    MEM32(esi) = eax;
    MEM32(esi + 8) = MEM32(esi + 8) | 0x800;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00367E70
 * Original: 0x00367E70 - 0x00367EB1 (65 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367E70: ;
    PUSH32(esp, esi);
    esi = MEM32(0x36CAF8);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00367E83; /* jb: below (unsigned <) */

loc_00367E7E: ;
    PUSH32(esp, 0x00367E83u); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_00367E83: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 0;
    eax = eax + 8;
    MEM32(esi) = eax;
    eax = MEM32(esi + 8);
    ecx = eax;
    ecx = ecx & 0xFFFFE7FFu;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00367EB0; /* je: equal / zero */

loc_00367EA9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00367EB0u); RECOMP_ABI_CALL(0x0035FD20u, xml1_guest_dx8_insert_fence); /* call 0x0035FD20 */

loc_00367EB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00367EC0
 * Original: 0x00367EC0 - 0x00367EC8 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367EC0(void)
{

loc_00367EC0: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00367ED0
 * Original: 0x00367ED0 - 0x00367EF9 (41 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367ED0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00367EE0; /* je: equal / zero */

loc_00367ED8: ;
    eax = 0x8876086Cu;
    esp += 16; return; /* ret 12 */

loc_00367EE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = 0x10B;
    esi = 0x36B400;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00367F00
 * Original: 0x00367F00 - 0x00367F2E (46 bytes, 14 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00367F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367F00: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00367F10; /* je: equal / zero */

loc_00367F08: ;
    eax = 0x8876086Cu;
    esp += 16; return; /* ret 12 */

loc_00367F10: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00367F1F; /* je: equal / zero */

loc_00367F17: ;
    eax = 0x8876086Bu;
    esp += 16; return; /* ret 12 */

loc_00367F1F: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00367F29u); RECOMP_ABI_CALL(0x0035ADB0u, sub_0035ADB0); /* call 0x0035ADB0 */

loc_00367F29: ;
    eax = 0; /* xor self */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00367F30
 * Original: 0x00367F30 - 0x00367FE9 (185 bytes, 60 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367F30: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00367F40; /* je: equal / zero */

loc_00367F38: ;
    eax = 0x8876086Cu;
    esp += 12; return; /* ret 8 */

loc_00367F40: ;
    PUSH32(esp, esi);
    esi = MEM32(0x36CAF8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00367F63; /* jne: not equal / not zero */

loc_00367F4B: ;
    ecx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00367F63: ;
    ecx = MEM32(esi + 0x1A18);
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00367F82; /* jne: not equal / not zero */

loc_00367F70: ;
    ecx = MEM32(ecx + 0xC);
    ecx = ecx >> 0x14;
    ecx = ecx & 0xF;
    eax = 1;
    eax = eax << LO8(ecx);
    goto loc_00367F88;

loc_00367F82: ;
    eax = eax & 0xFFF;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00367F88: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 0x1A18);
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00367FAC; /* jne: not equal / not zero */

loc_00367F9C: ;
    ecx = ZX8(MEM8(ecx + 0xF));
    ecx = ecx & 0xF;
    eax = 1;
    eax = eax << LO8(ecx);
    goto loc_00367FB5;

loc_00367FAC: ;
    eax = eax >> 0xC;
    eax = eax & 0xFFF;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00367FB5: ;
    ecx = esi + 0x1C28;
    MEM32(edi + 4) = eax;
    PUSH32(esp, 0x00367FC3u); RECOMP_ABI_CALL(0x0035B130u, sub_0035B130); /* call 0x0035B130 */

loc_00367FC3: ;
    MEM32(edi + 8) = eax;
    edx = MEM32(esi + 0x1A18);
    eax = ZX8(MEM8(edx + 0xD));
    MEM32(edi + 0x10) = eax;
    ecx = MEM32(esi + 0x1DDC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00367FDFu); RECOMP_ABI_CALL(0x003620E5u, sub_003620E5); /* call 0x003620E5 */

loc_00367FDF: ;
    MEM32(edi + 0xC) = eax;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00367FF0
 * Original: 0x00367FF0 - 0x0036804E (94 bytes, 27 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00367FF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00368000; /* je: equal / zero */

loc_00367FF8: ;
    eax = 0x8876086Cu;
    esp += 24; return; /* ret 20 */

loc_00368000: ;
    ecx = MEM32(esp + 8);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00368015; /* je: equal / zero */

loc_0036800D: ;
    eax = 0x8876086Bu;
    esp += 24; return; /* ret 20 */

loc_00368015: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00368023; /* jne: not equal / not zero */

loc_0036801B: ;
    eax = 0x8876086Au;
    esp += 24; return; /* ret 20 */

loc_00368023: ;
    eax = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(eax + 0x36A270));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_0036801B; /* jns: not sign (positive) */

loc_00368031: ;
    ecx = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(ecx + 0x36A270));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x80);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7789F796;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8876086Au)) >> 32) & 1);
    eax = eax + 0x8876086Au;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00368050
 * Original: 0x00368050 - 0x003680CE (126 bytes, 36 insns)
 * CC: cdecl, 6 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00368050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00368050: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00368060; /* je: equal / zero */

loc_00368058: ;
    eax = 0x8876086Cu;
    esp += 28; return; /* ret 24 */

loc_00368060: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036806F; /* je: equal / zero */

loc_00368067: ;
    eax = 0x8876086Bu;
    esp += 28; return; /* ret 24 */

loc_0036806F: ;
    eax = MEM32(esp + 0xC);
    SET_LO8(edx, MEM8(eax + 0x36A270));
    SET_LO8(ecx, 0x80);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003680C1; /* je: equal / zero */

loc_0036807F: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036809C; /* je: equal / zero */

loc_00368087: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM8(ecx + 0x36A270)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x36A270), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003680C9; /* jne: not equal / not zero */

loc_00368094: ;
    eax = 0x8876086Au;
    esp += 28; return; /* ret 24 */

loc_0036809C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003680B4; /* je: equal / zero */

loc_003680A0: ;
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM8(edx + 0x36A270)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x36A270), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003680C9; /* jne: not equal / not zero */

loc_003680AC: ;
    eax = 0x8876086Au;
    esp += 28; return; /* ret 24 */

loc_003680B4: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM8(eax + 0x36A270)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x36A270), 0x3C (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003680C9; /* jne: not equal / not zero */

loc_003680C1: ;
    eax = 0x8876086Au;
    esp += 28; return; /* ret 24 */

loc_003680C9: ;
    eax = 0; /* xor self */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003680D0
 * Original: 0x003680D0 - 0x00368174 (164 bytes, 47 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003680D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003680D0: ;
    eax = MEM32(0x36F294);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003680E3; /* jne: not equal / not zero */

loc_003680D9: ;
    MEM32(0x36F294) = 0x80000;

loc_003680E3: ;
    eax = MEM32(0x36F290);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003680F6; /* jne: not equal / not zero */

loc_003680EC: ;
    MEM32(0x36F290) = 0x8000;

loc_003680F6: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(0x36CB08);
    PUSH32(esp, edi);
    eax = eax & 0x10;
    edi = 0x36CB00;
    esi = esi | eax;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(0x36CAF8) = edi;
    MEM32(0x36D438) = 1;
    MEM32(0x36CB08) = esi;
    PUSH32(esp, 0x0036812Eu); RECOMP_ABI_CALL(0x00360B70u, sub_00360B70); /* call 0x00360B70 */

loc_0036812E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00368163; /* jge: greater or equal (signed >=) */

loc_00368134: ;
    ecx = edi;
    PUSH32(esp, 0x0036813Bu); RECOMP_ABI_CALL(0x00361040u, sub_00361040); /* call 0x00361040 */

loc_0036813B: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00368149; /* je: equal / zero */

loc_00368143: ;
    MEM32(eax) = 0;

loc_00368149: ;
    eax = 0; /* xor self */
    ecx = 0x928;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    eax = esi;
    MEM32(0x36CAF8) = 0;
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_00368163: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036816D; /* je: equal / zero */

loc_0036816B: ;
    MEM32(eax) = edi;

loc_0036816D: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00368180
 * Original: 0x00368180 - 0x0036825F (223 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00368180: ;
    eax = MEM32(0x36CAF8);
    ecx = MEM32(eax + 0x784);
    MEM32(edx) = ecx;
    eax = MEM32(eax + 0x798);
    MEM32(edx + 4) = eax;
    ecx = MEM32(0x36C710);
    MEM32(edx + 8) = ecx;
    ecx = edx + 0x14;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    goto loc_003681B0;

    /* nop */
    edi = edi;

loc_003681B0: ;
    esi = MEM32(eax + 0x36B888);
    esi = MEM32(esi * 4 + 0x36C860);
    MEM32(ecx + -4) = esi;
    esi = MEM32(eax + 0x36B890);
    esi = MEM32(esi * 4 + 0x36C860);
    MEM32(ecx) = esi;
    esi = MEM32(eax + 0x36B898);
    esi = MEM32(esi * 4 + 0x36C860);
    MEM32(ecx + 4) = esi;
    esi = MEM32(eax + 0x36B8A0);
    esi = MEM32(esi * 4 + 0x36C860);
    MEM32(ecx + 8) = esi;
    esi = MEM32(eax + 0x36B8A8);
    esi = MEM32(esi * 4 + 0x36C860);
    MEM32(ecx + 0xC) = esi;
    eax = eax + 0x28;
    ecx = ecx + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003681B0; /* jb: below (unsigned <) */

loc_0036820C: ;
    ecx = edx + 0x60;
    eax = 0; /* xor self */

loc_00368211: ;
    esi = MEM32(eax + 0x36B830);
    esi = MEM32(esi * 4 + 0x36C660);
    MEM32(ecx) = esi;
    eax = eax + 8;
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x58 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00368211; /* jb: below (unsigned <) */

loc_0036822B: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036825D; /* je: equal / zero */

loc_00368230: ;
    ecx = edx + 0x8C;
    eax = 0; /* xor self */
    goto loc_00368240;

    /* nop */

loc_00368240: ;
    esi = MEM32(eax + 0x36C860);
    MEM32(ecx) = esi;
    eax = eax + 4;
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00368240; /* jb: below (unsigned <) */

loc_00368255: ;
    eax = MEM32(0x36CA80);
    MEM32(edx + 0xC) = eax;

loc_0036825D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00368260
 * Original: 0x00368260 - 0x00368376 (278 bytes, 90 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368260(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368260: ;
    esp = esp - 0x10;
    eax = MEM32(edi + 0x1C34);
    ecx = MEM32(edi + 0x1C28);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x1C2C);
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 0x1C30);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0x0036828Bu); RECOMP_ABI_CALL(0x003600F0u, sub_003600F0); /* call 0x003600F0 */

loc_0036828B: ;
    _fa = (uint32_t)(MEM32(edi + 0x1DDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x1DDC), 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00368299; /* je: equal / zero */

loc_00368297: ;
    ebx = ebx >> 1;

loc_00368299: ;
    edx = MEM32(edi + 0x1A18);
    eax = MEM32(edx + 4);
    MEM32(esp + 0x10) = eax;
    esi = 0; /* xor self */

loc_003682A8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x003682ADu); RECOMP_ICALL_SAFE(0x0035B040u, _icall_esp); /* manual call 0x0035B040 */
    }

loc_003682AD: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6D18); PUSH32(esp, 0x003682C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003682C5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003682A8; /* jne: not equal / not zero */

loc_003682CB: ;
    _fa = (uint32_t)(MEM32(edi + 0x1DDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x1DDC), 0x1000000 (32-bit) */
    ebx = MEM32(0x3C6D14);
    if (TEST_Z(_fa, _fb)) goto loc_003682EE; /* je: equal / zero */

loc_003682DD: ;
    ecx = MEM32(edi + 0x1C28);
    ebp = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xB);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x003682ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003682EC: ;
    goto loc_003682F0;

loc_003682EE: ;
    ebp = 0; /* xor self */

loc_003682F0: ;
    eax = MEM32(edi + 0x1C28);
    edx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    esi = edi + 0x1C28;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00368307u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00368307: ;
    eax = MEM32(edi + 0x1DE8);
    edx = MEM32(esp + 0x18);
    ecx = eax;
    ecx = ecx ^ edx;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00368321; /* jne: not equal / not zero */

loc_0036831A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x1DE8) = eax;

loc_00368321: ;
    ecx = esi;
    MEM32(0x36BA30) = ebp;
    MEM32(0x36BA2C) = ebp;
    PUSH32(esp, 0x00368334u); RECOMP_ABI_CALL(0x0036386Du, sub_0036386D); /* call 0x0036386D */

loc_00368334: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6D10); PUSH32(esp, 0x0036833Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036833A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036835E; /* je: equal / zero */

loc_00368340: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x3C6C4C); PUSH32(esp, 0x00368347u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00368347: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x3C6C30); PUSH32(esp, 0x00368350u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00368350: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x3C6C3C); PUSH32(esp, 0x00368357u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00368357: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(0x3C6D1C); PUSH32(esp, 0x0036835Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036835E: ;
    edx = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 9);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00368369u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00368369: ;
    POP32(esp, esi);
    MEM32(edi + 0x1DE0) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00368380
 * Original: 0x00368380 - 0x00368497 (279 bytes, 75 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00368380: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x36CAF8);
    esi = 0; /* xor self */
    /* nop */

loc_00368390: ;
    eax = MEM32(esi + 0x36B888);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5C (32-bit) */
    ecx = MEM32(esi + 0x36B88C);
    if (CMP_GE(_fas, _fbs)) goto loc_003683AD; /* jge: greater or equal (signed >=) */

loc_003683A1: ;
    edx = MEM32(0x36CAF8);
    _fa = (uint32_t)(MEM8(edx + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 8), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003683B6; /* jne: not equal / not zero */

loc_003683AD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 4 + 0x36C860)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax * 4 + 0x36C860) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003683BD; /* je: equal / zero */

loc_003683B6: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003683BDu); RECOMP_ABI_CALL(0x0035D930u, sub_0035D930); /* call 0x0035D930 */

loc_003683BD: ;
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00368390; /* jb: below (unsigned <) */

loc_003683C8: ;
    esi = 0; /* xor self */
    /* nop */

loc_003683D0: ;
    ecx = MEM32(esi + 0x36B830);
    eax = MEM32(esi + 0x36B834);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 4 + 0x36C660)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx * 4 + 0x36C660) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003683EE; /* je: equal / zero */

loc_003683E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003683EEu); RECOMP_ABI_CALL(0x0035E370u, sub_0035E370); /* call 0x0035E370 */

loc_003683EE: ;
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x58 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003683D0; /* jb: below (unsigned <) */

loc_003683F6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x003683FDu); RECOMP_ABI_CALL(0x003692E0u, sub_003692E0); /* call 0x003692E0 */

loc_003683FD: ;
    esi = MEM32(0x36CA58);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x36C670)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x36C670) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00368415; /* je: equal / zero */

loc_0036840B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00368415u); RECOMP_ABI_CALL(0x0035E370u, sub_0035E370); /* call 0x0035E370 */

loc_00368415: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x36C66C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x36C66C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00368427; /* je: equal / zero */

loc_0036841D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00368427u); RECOMP_ABI_CALL(0x0035E370u, sub_0035E370); /* call 0x0035E370 */

loc_00368427: ;
    _fa = (uint32_t)(MEM32(0x36C710)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x36C710), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036843B; /* je: equal / zero */

loc_00368430: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0036843Bu); RECOMP_ABI_CALL(0x0035E370u, sub_0035E370); /* call 0x0035E370 */

loc_0036843B: ;
    PUSH32(esp, 0x00368440u); RECOMP_ABI_CALL(0x003654F0u, sub_003654F0); /* call 0x003654F0 */

loc_00368440: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x36B928);
    PUSH32(esp, 0x0036844Cu); RECOMP_ABI_CALL(0x0035D610u, sub_0035D610); /* call 0x0035D610 */

loc_0036844C: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00368458; /* jb: below (unsigned <) */

loc_00368453: ;
    PUSH32(esp, 0x00368458u); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_00368458: ;
    MEM32(eax) = 0x81E94;
    MEM32(eax + 4) = 6;
    MEM32(eax + 8) = 0;
    MEM32(eax + 0xC) = 0x41EA0;
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 0x14) = 0x80394;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x1C) = 0x4B7FFFFF;
    eax = eax + 0x20;
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003684A0
 * Original: 0x003684A0 - 0x0036861D (381 bytes, 126 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003684A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003684A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x36CAF8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x003684BBu); RECOMP_ABI_CALL(0x003692E0u, sub_003692E0); /* call 0x003692E0 */

loc_003684BB: ;
    ebx = MEM32(esi + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x36C710);
    ebx = ebx & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003684D8; /* je: equal / zero */

loc_003684CE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x003684D8u); RECOMP_ABI_CALL(0x0035E370u, sub_0035E370); /* call 0x0035E370 */

loc_003684D8: ;
    edi = ebp + 0x10;
    esi = 0; /* xor self */
    /* nop */

loc_003684E0: ;
    eax = MEM32(esi + 0x36B888);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5C (32-bit) */
    ecx = MEM32(edi);
    if (CMP_GE(_fas, _fbs)) goto loc_003684F9; /* jge: greater or equal (signed >=) */

loc_003684ED: ;
    edx = MEM32(0x36CAF8);
    _fa = (uint32_t)(MEM8(edx + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 8), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00368509; /* jne: not equal / not zero */

loc_003684F9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 4 + 0x36C860)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax * 4 + 0x36C860) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00368509; /* je: equal / zero */

loc_00368502: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00368509u); RECOMP_ABI_CALL(0x0035D930u, sub_0035D930); /* call 0x0035D930 */

loc_00368509: ;
    esi = esi + 8;
    edi = edi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003684E0; /* jb: below (unsigned <) */

loc_00368517: ;
    edi = ebp + 0x60;
    esi = 0; /* xor self */
    /* nop */

loc_00368520: ;
    ecx = MEM32(esi + 0x36B830);
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 4 + 0x36C660)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx * 4 + 0x36C660) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036853A; /* je: equal / zero */

loc_00368531: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0036853Au); RECOMP_ABI_CALL(0x0035E370u, sub_0035E370); /* call 0x0035E370 */

loc_0036853A: ;
    esi = esi + 8;
    edi = edi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x58 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00368520; /* jb: below (unsigned <) */

loc_00368545: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003685A9; /* jne: not equal / not zero */

loc_00368549: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00368595; /* je: equal / zero */

loc_0036854F: ;
    esi = 0; /* xor self */
    edi = ebp + 0x8C;

loc_00368557: ;
    eax = MEM32(ebp);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00368575; /* jne: not equal / not zero */

loc_00368564: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00368575; /* jne: not equal / not zero */

loc_0036856B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00368575; /* jb: below (unsigned <) */

loc_00368570: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 9 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0036857E; /* jbe: below or equal (unsigned <=) */

loc_00368575: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036857Eu); RECOMP_ABI_CALL(0x0035D930u, sub_0035D930); /* call 0x0035D930 */

loc_0036857E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x39 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00368557; /* jb: below (unsigned <) */

loc_00368587: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x88);
    PUSH32(esp, 0x00368595u); RECOMP_ABI_CALL(0x0035D930u, sub_0035D930); /* call 0x0035D930 */

loc_00368595: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 8);
    eax = esi + 0x10A8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003685A7u); RECOMP_ABI_CALL(0x0035D610u, sub_0035D610); /* call 0x0035D610 */

loc_003685A7: ;
    goto loc_003685AD;

loc_003685A9: ;
    esi = MEM32(esp + 0x14);

loc_003685AD: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003685B9; /* jb: below (unsigned <) */

loc_003685B4: ;
    PUSH32(esp, 0x003685B9u); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_003685B9: ;
    ecx = MEM32(esi + 0x794);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x12 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003685E7; /* jne: not equal / not zero */

loc_003685C7: ;
    MEM32(eax) = 0x41E94;
    edx = eax + 8;
    ecx = esi;
    MEM32(eax + 4) = 4;
    PUSH32(esp, 0x003685DEu); RECOMP_ABI_CALL(0x0035E4D0u, sub_0035E4D0); /* call 0x0035E4D0 */

loc_003685DE: ;
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003685E7: ;
    MEM32(eax) = 0x81E94;
    ecx = ecx & 1;
    MEM32(eax + 4) = 6;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esi + 0x79C);
    MEM32(eax + 0xC) = 0x41EA0;
    MEM32(eax + 0x10) = ecx;
    edx = eax + 0x14;
    ecx = esi;
    PUSH32(esp, 0x00368614u); RECOMP_ABI_CALL(0x0035E4D0u, sub_0035E4D0); /* call 0x0035E4D0 */

loc_00368614: ;
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00368620
 * Original: 0x00368620 - 0x003686AA (138 bytes, 45 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00368620: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x1A04);
    PUSH32(esp, eax);
    MEM32(edi + 0x1A90) = eax;
    PUSH32(esp, 0x00368637u); RECOMP_ABI_CALL(0x00361360u, sub_00361360); /* call 0x00361360 */

loc_00368637: ;
    eax = MEM32(edi + 0x1A08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edi + 0x1A94) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0036864D; /* je: equal / zero */

loc_00368647: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036864Du); RECOMP_ABI_CALL(0x00361360u, sub_00361360); /* call 0x00361360 */

loc_0036864D: ;
    esi = edi + 0x1A98;
    ebx = 4;
    goto loc_00368660;

    /* nop */

loc_00368660: ;
    eax = MEM32(esi + -2832);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00368672; /* je: equal / zero */

loc_0036866C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00368672u); RECOMP_ABI_CALL(0x00361360u, sub_00361360); /* call 0x00361360 */

loc_00368672: ;
    esi = esi + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00368660; /* jne: not equal / not zero */

loc_00368678: ;
    eax = edi + 0xEE0;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    edi = edi + 0x1AA8;
    MEM32(edi) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edi + 4) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(edi + 8) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(edi + 0xC) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x14) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003686B0
 * Original: 0x003686B0 - 0x00368718 (104 bytes, 37 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003686B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003686B0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x1A94);
    ecx = MEM32(esi + 0x1A90);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003686C7u); RECOMP_ABI_CALL(0x0035B3F0u, sub_0035B3F0); /* call 0x0035B3F0 */

loc_003686C7: ;
    edx = esi + 0x1AA8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003686D3u); RECOMP_ABI_CALL(0x0035BA10u, sub_0035BA10); /* call 0x0035BA10 */

loc_003686D3: ;
    eax = MEM32(esi + 0x1A90);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003686DFu); RECOMP_ABI_CALL(0x003613A0u, sub_003613A0); /* call 0x003613A0 */

loc_003686DF: ;
    eax = MEM32(esi + 0x1A94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003686EF; /* je: equal / zero */

loc_003686E9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003686EFu); RECOMP_ABI_CALL(0x003613A0u, sub_003613A0); /* call 0x003613A0 */

loc_003686EF: ;
    edi = 0; /* xor self */
    esi = esi + 0x1A98;

loc_003686F7: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00368700u); RECOMP_ABI_CALL(0x0035C060u, sub_0035C060); /* call 0x0035C060 */

loc_00368700: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036870C; /* je: equal / zero */

loc_00368706: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036870Cu); RECOMP_ABI_CALL(0x003613A0u, sub_003613A0); /* call 0x003613A0 */

loc_0036870C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003686F7; /* jb: below (unsigned <) */

loc_00368715: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00368720
 * Original: 0x00368720 - 0x0036889B (379 bytes, 117 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368720(void)
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

loc_00368720: ;
    esp = esp - 0x14;
    edx = MEM32(eax + 0x970);
    ecx = MEM32(eax + 0x96C);
    PUSH32(esp, ebx);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x1A04);
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0036875A; /* jne: not equal / not zero */

loc_00368748: ;
    ecx = MEM32(edx + 0xC);
    ecx = ecx >> 0x14;
    ecx = ecx & 0xF;
    edi = 1;
    edi = edi << LO8(ecx);
    goto loc_00368762;

loc_0036875A: ;
    eax = eax & 0xFFF;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = eax;

loc_00368762: ;
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036877A; /* jne: not equal / not zero */

loc_00368769: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edx + 0xF));
    esi = 1;
    ecx = ecx & 0xF;
    esi = esi << LO8(ecx);
    goto loc_00368785;

loc_0036877A: ;
    eax = eax >> 0xC;
    eax = eax & 0xFFF;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = eax;

loc_00368785: ;
    eax = MEM32(0x36C670);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_003687A4; /* je: equal / zero */

loc_0036879F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003687DA; /* jne: not equal / not zero */

loc_003687A4: ;
    fp_push(MEMF(0x3C9404)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003687BF; /* jp: parity */

loc_003687B7: ;
    MEM32(esp + 0x10) = 0x3F000000;

loc_003687BF: ;
    fp_push(MEMF(0x3C9404)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003687DA; /* jp: parity */

loc_003687D2: ;
    MEM32(esp + 0x14) = 0x3F000000;

loc_003687DA: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x003687E1u); RECOMP_ABI_CALL(0x00367E30u, sub_00367E30); /* call 0x00367E30 */

loc_003687E1: ;
    ebx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 9);
    PUSH32(esp, 0x003687F2u); RECOMP_ABI_CALL(0x00367DF0u, sub_00367DF0); /* call 0x00367DF0 */

loc_003687F2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003687FDu); RECOMP_ABI_CALL(0x00367DF0u, sub_00367DF0); /* call 0x00367DF0 */

loc_003687FD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x1C) = edi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0036880F; /* jge: greater or equal (signed >=) */

loc_00368809: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0036880F: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_top() = fp_top() * MEMF(0x3C76B0); /* fmul dword ptr [0x3c76b0] */
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 9);
    PUSH32(esp, 0x00368831u); RECOMP_ABI_CALL(0x00367DF0u, sub_00367DF0); /* call 0x00367DF0 */

loc_00368831: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C76B0); /* fmul dword ptr [0x3c76b0] */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, 0x00368848u); RECOMP_ABI_CALL(0x00367DF0u, sub_00367DF0); /* call 0x00367DF0 */

loc_00368848: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0036885A; /* jge: greater or equal (signed >=) */

loc_00368854: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0036885A: ;
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    PUSH32(esp, ecx);
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_top() = fp_top() * MEMF(0x3C76B0); /* fmul dword ptr [0x3c76b0] */
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebp);
    PUSH32(esp, 9);
    PUSH32(esp, 0x00368878u); RECOMP_ABI_CALL(0x00367DF0u, sub_00367DF0); /* call 0x00367DF0 */

loc_00368878: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C76B0); /* fmul dword ptr [0x3c76b0] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0036888Fu); RECOMP_ABI_CALL(0x00367DF0u, sub_00367DF0); /* call 0x00367DF0 */

loc_0036888F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    g_seh_ebp = ebp; sub_00367E70(); return; /* tail jmp 0x00367E70 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003688A0
 * Original: 0x003688A0 - 0x00368A85 (485 bytes, 144 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003688A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003688A0: ;
    esp = esp - 0x170;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x178));
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    PUSH32(esp, edi);
    edi = 0x40100;
    if (TEST_Z(_fa, _fb)) goto loc_003689F1; /* je: equal / zero */

loc_003688C0: ;
    _fa = (uint32_t)(MEM32(esi + 0x1A10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003688F9; /* jne: not equal / not zero */

loc_003688C9: ;
    eax = MEM32(esi + 0x1A18);
    ecx = MEM32(esi + 0x1A1C);
    ebx = MEM32(eax + 4);
    edx = MEM32(ecx + 4);
    edi = MEM32(ecx + 8);
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(eax + 8);
    MEM32(ecx + 8) = ebx;
    SET_LO8(ebx, MEM8(esp + 0x180));
    MEM32(eax + 8) = edi;
    MEM32(eax + 4) = edx;
    edi = 0x40100;

loc_003688F9: ;
    eax = esi;
    PUSH32(esp, 0x00368900u); RECOMP_ABI_CALL(0x00368620u, sub_00368620); /* call 0x00368620 */

loc_00368900: ;
    eax = MEM32(esi + 0x1A18);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036890Du); RECOMP_ABI_CALL(0x0035B3F0u, sub_0035B3F0); /* call 0x0035B3F0 */

loc_0036890D: ;
    ecx = MEM32(esi + 0x1A14);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0036891Au); RECOMP_ABI_CALL(0x0035C060u, sub_0035C060); /* call 0x0035C060 */

loc_0036891A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00368922u); RECOMP_ABI_CALL(0x0035C060u, sub_0035C060); /* call 0x0035C060 */

loc_00368922: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0036892Au); RECOMP_ABI_CALL(0x0035C060u, sub_0035C060); /* call 0x0035C060 */

loc_0036892A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00368932u); RECOMP_ABI_CALL(0x0035C060u, sub_0035C060); /* call 0x0035C060 */

loc_00368932: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00368945; /* je: equal / zero */

loc_00368937: ;
    edx = esp + 0xC;
    PUSH32(esp, 0x00368940u); RECOMP_ABI_CALL(0x00368180u, sub_00368180); /* call 0x00368180 */

loc_00368940: ;
    PUSH32(esp, 0x00368945u); RECOMP_ABI_CALL(0x00368380u, sub_00368380); /* call 0x00368380 */

loc_00368945: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00368951; /* jb: below (unsigned <) */

loc_0036894C: ;
    PUSH32(esp, 0x00368951u); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_00368951: ;
    _fa = (uint32_t)(MEM32(esi + 0x1A10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A10), 3 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003689D3; /* jae: above or equal (unsigned >=) */

loc_0036895A: ;
    _fa = (uint32_t)(MEM32(0x36CA5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x36CA5C), 0x80000000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00368972; /* je: equal / zero */

loc_00368966: ;
    MEM32(eax) = 0x40110;
    MEM32(eax + 4) = ebp;
    eax = eax + 8;

loc_00368972: ;
    edx = MEM32(esi + 0x1A18);
    ecx = MEM32(edx + 4);
    edx = MEM32(0x36CA5C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036898A; /* jne: not equal / not zero */

loc_00368985: ;
    edx = 1;

loc_0036898A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00368992; /* je: equal / zero */

loc_0036898F: ;
    ecx = ecx | 1;

loc_00368992: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036899A; /* je: equal / zero */

loc_00368997: ;
    ecx = ecx | 2;

loc_0036899A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003689A2; /* je: equal / zero */

loc_0036899F: ;
    ecx = ecx | 3;

loc_003689A2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (((int32_t)((_fa) & (_fb)) >= 0)) goto loc_003689A9; /* jns: not sign (positive) */

loc_003689A6: ;
    ecx = ecx | 8;

loc_003689A9: ;
    MEM32(eax) = edi;
    ecx = ecx << 5;
    ecx = ecx | 1;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 0x4012C;
    MEM32(eax + 0xC) = ebp;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = ebp;
    MEM32(eax + 0x18) = 0x40130;
    MEM32(eax + 0x1C) = ebp;
    eax = eax + 0x20;
    goto loc_003689EF;

loc_003689D3: ;
    MEM32(eax) = 0x4012C;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = ebp;
    MEM32(eax + 0x10) = 0x40130;
    MEM32(eax + 0x14) = ebp;
    eax = eax + 0x18;

loc_003689EF: ;
    MEM32(esi) = eax;

loc_003689F1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00368A07; /* je: equal / zero */

loc_003689F6: ;
    eax = esi;
    PUSH32(esp, 0x003689FDu); RECOMP_ABI_CALL(0x00368720u, sub_00368720); /* call 0x00368720 */

loc_003689FD: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00368A07u); RECOMP_ABI_CALL(0x003684A0u, sub_003684A0); /* call 0x003684A0 */

loc_00368A07: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00368A79; /* je: equal / zero */

loc_00368A0C: ;
    eax = esi;
    PUSH32(esp, 0x00368A13u); RECOMP_ABI_CALL(0x003686B0u, sub_003686B0); /* call 0x003686B0 */

loc_00368A13: ;
    _fa = (uint32_t)(MEM32(esi + 0x1A10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00368A79; /* jne: not equal / not zero */

loc_00368A1C: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00368A28; /* jb: below (unsigned <) */

loc_00368A23: ;
    PUSH32(esp, 0x00368A28u); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_00368A28: ;
    MEM32(eax) = 0x40110;
    MEM32(eax + 4) = ebp;
    edx = MEM32(0x36CA5C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    ecx = MEM32(esi + 0x1A18);
    ecx = MEM32(ecx + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00368A49; /* jne: not equal / not zero */

loc_00368A44: ;
    edx = 1;

loc_00368A49: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00368A51; /* je: equal / zero */

loc_00368A4E: ;
    ecx = ecx | 1;

loc_00368A51: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00368A59; /* je: equal / zero */

loc_00368A56: ;
    ecx = ecx | 2;

loc_00368A59: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00368A61; /* je: equal / zero */

loc_00368A5E: ;
    ecx = ecx | 3;

loc_00368A61: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (((int32_t)((_fa) & (_fb)) >= 0)) goto loc_00368A68; /* jns: not sign (positive) */

loc_00368A65: ;
    ecx = ecx | 8;

loc_00368A68: ;
    ecx = ecx << 5;
    MEM32(eax + 8) = edi;
    ecx = ecx | 1;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;

loc_00368A79: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x170;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00368A90
 * Original: 0x00368A90 - 0x00368B94 (260 bytes, 81 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368A90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368A90: ;
    PUSH32(esp, ecx);
    edx = MEM32(esi + 0x1A10);
    ecx = MEM32(esi + edx * 4 + 0x1A10);
    eax = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = eax;
    edi = esi + edx * 4 + 0x1A10;

loc_00368AB3: ;
    eax = MEM32(edi);
    ebp = MEM32(eax + 4);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(ecx + 8) = ebp;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = 0; /* xor self */
    edi = edi - 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    ecx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00368AB3; /* jne: not equal / not zero */

loc_00368ACD: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00368AE3; /* jb: below (unsigned <) */

loc_00368ADE: ;
    PUSH32(esp, 0x00368AE3u); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_00368AE3: ;
    edx = MEM32(esi + 0x1A18);
    ecx = MEM32(edx + 4);
    MEM32(eax) = 0x40110;
    MEM32(eax + 4) = ebp;
    edx = MEM32(0x36CA5C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00368B04; /* jne: not equal / not zero */

loc_00368AFF: ;
    edx = 1;

loc_00368B04: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00368B0C; /* je: equal / zero */

loc_00368B09: ;
    ecx = ecx | 1;

loc_00368B0C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00368B14; /* je: equal / zero */

loc_00368B11: ;
    ecx = ecx | 2;

loc_00368B14: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00368B1C; /* je: equal / zero */

loc_00368B19: ;
    ecx = ecx | 3;

loc_00368B1C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (((int32_t)((_fa) & (_fb)) >= 0)) goto loc_00368B23; /* jns: not sign (positive) */

loc_00368B20: ;
    ecx = ecx | 8;

loc_00368B23: ;
    ecx = ecx << 5;
    edx = 0x40100;
    MEM32(eax + 8) = edx;
    ecx = ecx | 1;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0x4012C;
    MEM32(eax + 0x14) = ebp;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ebp;
    ecx = MEM32(esi + 0x1A04);
    edx = MEM32(esi + 0x1A14);
    eax = eax + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00368B6C; /* je: equal / zero */

loc_00368B57: ;
    _fa = (uint32_t)(MEM32(0x36CA5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x36CA5C), 0x80000000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00368B6C; /* je: equal / zero */

loc_00368B63: ;
    MEM32(esi + 8) = MEM32(esi + 8) | 0x100;
    goto loc_00368B78;

loc_00368B6C: ;
    MEM32(eax) = 0x40130;
    MEM32(eax + 4) = ebp;
    eax = eax + 8;

loc_00368B78: ;
    edx = MEM32(esi + 0x1A14);
    ecx = MEM32(edx + 4);
    MEM32(eax) = 0x40210;
    POP32(esp, edi);
    MEM32(eax + 4) = ecx;
    eax = eax + 8;
    POP32(esp, ebp);
    MEM32(esi) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00368BA0
 * Original: 0x00368BA0 - 0x00368BE0 (64 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00368BA0: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x1A18);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00368BB2; /* je: equal / zero */

loc_00368BB0: ;
    eax = ecx;

loc_00368BB2: ;
    ecx = MEM32(edi + 0x2C);
    PUSH32(esp, 0);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0x00368BBFu); RECOMP_ABI_CALL(0x0035FD20u, xml1_guest_dx8_insert_fence); /* call 0x0035FD20 */

loc_00368BBF: ;
    edx = MEM32(edi + 0x2478);
    edx = edx & 1;
    MEM32(edi + edx * 4 + 0x1974) = eax;
    eax = MEM32(edi + 0x1DE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00368BDE; /* je: equal / zero */

loc_00368BD9: ;
    PUSH32(esp, 0x00368BDEu); RECOMP_ABI_CALL(0x00368260u, sub_00368260); /* call 0x00368260 */

loc_00368BDE: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00368CD0
 * Original: 0x00368CD0 - 0x00368D87 (183 bytes, 43 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368CD0(void)
{

loc_00368CD0: ;
    esp = esp - 0x178;
    PUSH32(esp, esi);
    esi = MEM32(0x36CAF8);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x00368CE5u); RECOMP_ABI_CALL(0x00368620u, sub_00368620); /* call 0x00368620 */

loc_00368CE5: ;
    eax = MEM32(esp + 0x184);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00368CF4u); RECOMP_ABI_CALL(0x0035B3F0u, sub_0035B3F0); /* call 0x0035B3F0 */

loc_00368CF4: ;
    ecx = MEM32(esp + 0x188);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00368D03u); RECOMP_ABI_CALL(0x0035C060u, sub_0035C060); /* call 0x0035C060 */

loc_00368D03: ;
    edx = esp + 0x10;
    PUSH32(esp, 0x00368D0Cu); RECOMP_ABI_CALL(0x00368180u, sub_00368180); /* call 0x00368180 */

loc_00368D0C: ;
    PUSH32(esp, 0x00368D11u); RECOMP_ABI_CALL(0x00368380u, sub_00368380); /* call 0x00368380 */

loc_00368D11: ;
    edx = MEM32(esi + 0x96C);
    eax = MEM32(esi + 0x970);
    ecx = MEM32(esp + 0x18C);
    edi = MEM32(0x36C670);
    MEM32(esp + 0xC) = edx;
    edx = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esi + 0x96C) = ecx;
    MEM32(esi + 0x970) = edx;
    eax = esi;
    MEM32(0x36C670) = 5;
    PUSH32(esp, 0x00368D51u); RECOMP_ABI_CALL(0x00368720u, sub_00368720); /* call 0x00368720 */

loc_00368D51: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = esp + 0x10;
    MEM32(esi + 0x96C) = eax;
    MEM32(esi + 0x970) = ecx;
    PUSH32(esp, edx);
    MEM32(0x36C670) = edi;
    PUSH32(esp, 0x00368D75u); RECOMP_ABI_CALL(0x003684A0u, sub_003684A0); /* call 0x003684A0 */

loc_00368D75: ;
    eax = esi;
    PUSH32(esp, 0x00368D7Cu); RECOMP_ABI_CALL(0x003686B0u, sub_003686B0); /* call 0x003686B0 */

loc_00368D7C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x178;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00368D90
 * Original: 0x00368D90 - 0x00368E40 (176 bytes, 61 insns)
 * Category: game_render
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00368D90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    eax = MEM32(esp + 0x20);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00368DD2u); RECOMP_ABI_CALL(0x00361EF0u, sub_00361EF0); /* call 0x00361EF0 */

loc_00368DD2: ;
    edi = eax;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x1C), 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00368DE3; /* je: equal / zero */

loc_00368DDE: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) & 0xFFFFFFF7u;

loc_00368DE3: ;
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x00368DEFu); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_00368DEF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00368E0F; /* je: equal / zero */

loc_00368DF5: ;
    PUSH32(esp, 0xB7800000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00368E00u); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_00368E00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00368E16; /* jne: not equal / not zero */

loc_00368E04: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00368E0Fu); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_00368E0F: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

loc_00368E16: ;
    eax = eax & 0xFFFFFFF;
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x1040001;
    ecx = MEM32(esp + 0x24);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(esp + 0x20);
    POP32(esp, edi);
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00368E40
 * Original: 0x00368E40 - 0x00368E4E (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368E40(void)
{

loc_00368E40: ;
    eax = MEM32(esp + 4);
    eax = ZX8(MEM8(eax + 0xE));
    eax = eax & 0xF;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00368E50
 * Original: 0x00368E50 - 0x00368E9A (74 bytes, 29 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368E50(void)
{

loc_00368E50: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00368E7Eu); RECOMP_ABI_CALL(0x00361C20u, sub_00361C20); /* call 0x00361C20 */

loc_00368E7E: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00368E93u); RECOMP_ABI_CALL(0x00365850u, sub_00365850); /* call 0x00365850 */

loc_00368E93: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00368EA0
 * Original: 0x00368EA0 - 0x00368EA5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368EA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368EA0: ;
    g_seh_ebp = ebp; sub_00361B60(); return; /* tail jmp 0x00361B60 */

}

/**
 * sub_00368EB0
 * Original: 0x00368EB0 - 0x00368EFD (77 bytes, 30 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368EB0(void)
{

loc_00368EB0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00368EE1u); RECOMP_ABI_CALL(0x00361C20u, sub_00361C20); /* call 0x00361C20 */

loc_00368EE1: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00368EF6u); RECOMP_ABI_CALL(0x00365850u, sub_00365850); /* call 0x00365850 */

loc_00368EF6: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00368F00
 * Original: 0x00368F00 - 0x00368F48 (72 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00368F00: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0x00368F0Fu); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_00368F0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00368F1B; /* jne: not equal / not zero */

loc_00368F13: ;
    eax = 0x8007000Eu;
    esp += 12; return; /* ret 8 */

loc_00368F1B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = eax + 0xC;
    MEM32(eax + 8) = edi;
    MEM32(eax) = 1;
    MEM32(eax + 4) = 1;
    ecx = 0x3C;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00368F50
 * Original: 0x00368F50 - 0x00368F6D (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00368F50: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00368F6A; /* jne: not equal / not zero */

loc_00368F58: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00368F6A; /* je: equal / zero */

loc_00368F5F: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00368F6Au); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_00368F6A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00368F70
 * Original: 0x00368F70 - 0x003692D8 (872 bytes, 235 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368F70(void)
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

loc_00368F70: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00369218; /* jl: less (signed <) */

loc_00368F86: ;
    ebx = MEM32(esp + 0x10);
    esi = edi + -4;
    esi = esi >> 2;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi * 4;
    edx = ebx * 4 + 0x8E8;
    ebx = ebx + ecx;
    MEM32(esp + 0x10) = ebx;
    ebx = ecx;
    PUSH32(esp, ebp);
    goto loc_00368FB0;

    /* nop */

loc_00368FB0: ;
    ecx = MEM32(0x36CAF8);
    ecx = MEM32(edx + ecx + -4);
    ebp = ecx;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x18) = ebp;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00368FD1; /* jge: greater or equal (signed >=) */

loc_00368FCB: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00368FD1: ;
    ebp = ecx;
    ebp = ebp >> 0x10;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x18) = ebp;
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00368FF7; /* jge: greater or equal (signed >=) */

loc_00368FF1: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00368FF7: ;
    ebp = ecx;
    ebp = ebp >> 8;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x18) = ebp;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0036901C; /* jge: greater or equal (signed >=) */

loc_00369016: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0036901C: ;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x18) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0036903D; /* jge: greater or equal (signed >=) */

loc_00369037: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0036903D: ;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x36CAF8);
    ecx = MEM32(edx + ecx);
    ebp = ecx;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x18) = ebp;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00369066; /* jge: greater or equal (signed >=) */

loc_00369060: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00369066: ;
    ebp = ecx;
    ebp = ebp >> 0x10;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x18) = ebp;
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0036908C; /* jge: greater or equal (signed >=) */

loc_00369086: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0036908C: ;
    ebp = ecx;
    ebp = ebp >> 8;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x18) = ebp;
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003690B2; /* jge: greater or equal (signed >=) */

loc_003690AC: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_003690B2: ;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x18) = ecx;
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003690D3; /* jge: greater or equal (signed >=) */

loc_003690CD: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_003690D3: ;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x36CAF8);
    ecx = MEM32(edx + ecx + 4);
    ebp = ecx;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x18) = ebp;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003690FD; /* jge: greater or equal (signed >=) */

loc_003690F7: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_003690FD: ;
    ebp = ecx;
    ebp = ebp >> 0x10;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x18) = ebp;
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00369123; /* jge: greater or equal (signed >=) */

loc_0036911D: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00369123: ;
    ebp = ecx;
    ebp = ebp >> 8;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x18) = ebp;
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00369149; /* jge: greater or equal (signed >=) */

loc_00369143: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00369149: ;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x18) = ecx;
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0036916A; /* jge: greater or equal (signed >=) */

loc_00369164: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0036916A: ;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x36CAF8);
    ecx = MEM32(edx + ecx + 8);
    ebp = ecx;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x18) = ebp;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00369194; /* jge: greater or equal (signed >=) */

loc_0036918E: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00369194: ;
    ebp = ecx;
    ebp = ebp >> 0x10;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x18) = ebp;
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003691BA; /* jge: greater or equal (signed >=) */

loc_003691B4: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_003691BA: ;
    ebp = ecx;
    ebp = ebp >> 8;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x18) = ebp;
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003691E0; /* jge: greater or equal (signed >=) */

loc_003691DA: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_003691E0: ;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x18) = ecx;
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00369201; /* jge: greater or equal (signed >=) */

loc_003691FB: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00369201: ;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    edx = edx + 0x10;
    eax = eax + 0x40;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(eax + -8) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_00368FB0; /* jne: not equal / not zero */

loc_00369217: ;
    POP32(esp, ebp);

loc_00369218: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003692D2; /* jae: above or equal (unsigned >=) */

loc_00369220: ;
    edx = MEM32(esp + 0x10);
    edi = edi - ebx;
    edx = edx * 4 + 0x8E4;
    esi = edi;
    /* nop */

loc_00369230: ;
    ecx = MEM32(0x36CAF8);
    ecx = MEM32(edx + ecx);
    edi = ecx;
    edi = edi >> 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x10) = edi;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00369250; /* jge: greater or equal (signed >=) */

loc_0036924A: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00369250: ;
    edi = ecx;
    edi = edi >> 0x10;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    edi = edi & 0xFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00369276; /* jge: greater or equal (signed >=) */

loc_00369270: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00369276: ;
    edi = ecx;
    edi = edi >> 8;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    edi = edi & 0xFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0036929B; /* jge: greater or equal (signed >=) */

loc_00369295: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0036929B: ;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003692BC; /* jge: greater or equal (signed >=) */

loc_003692B6: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_003692BC: ;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    edx = edx + 4;
    eax = eax + 0x10;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(eax + -8) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_00369230; /* jne: not equal / not zero */

loc_003692D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003692E0
 * Original: 0x003692E0 - 0x003694D3 (499 bytes, 124 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003692E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003692E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(0x36CAF8);
    eax = MEM32(ebx + 0x784);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebx + 0x784) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00369360; /* jne: not equal / not zero */

loc_00369300: ;
    ecx = MEM32(0x36C658);
    ecx = ecx | 0x4800;
    MEM32(0x36C658) = ecx;
    eax = MEM32(ebx + 0x788);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00369328; /* je: equal / zero */

loc_0036931C: ;
    eax = ecx;
    eax = eax | 0x2000;
    MEM32(0x36C658) = eax;

loc_00369328: ;
    ecx = MEM32(0x36CAB0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00369334u); RECOMP_ABI_CALL(0x0035DDC0u, sub_0035DDC0); /* call 0x0035DDC0 */

loc_00369334: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00369340; /* jb: below (unsigned <) */

loc_0036933B: ;
    PUSH32(esp, 0x00369340u); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_00369340: ;
    edx = eax;
    ecx = ebx;
    PUSH32(esp, 0x00369349u); RECOMP_ABI_CALL(0x0035E460u, sub_0035E460); /* call 0x0035E460 */

loc_00369349: ;
    MEM32(eax) = 0x41E78;
    MEM32(eax + 4) = 0x210000;
    eax = eax + 8;
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00369360: ;
    edx = MEM32(eax + 8);
    ecx = MEM32(edx + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = ecx | MEM32(edx + 0x20);
    if ((ecx != 0)) goto loc_00369381; /* jne: not equal / not zero */

loc_0036936D: ;
    edx = MEM32(ebx + 0x788);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00369381; /* je: equal / zero */

loc_00369377: ;
    MEM32(0x36C658) = MEM32(0x36C658) | 0x2000;

loc_00369381: ;
    MEM32(ebx + 0x788) = ecx;
    edx = MEM32(eax + 8);
    ecx = MEM32(edx + 0xEC);
    ecx = ecx & 0x100;
    MEM32(ebx + 0x78C) = ecx;
    ebp = MEM32(eax + 8);
    edx = MEM32(ebp + 0xD8);
    MEM32(ebx + 0x790) = edx;
    MEM32(0x36C658) = MEM32(0x36C658) | 0x4000;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003693C1; /* jb: below (unsigned <) */

loc_003693BC: ;
    PUSH32(esp, 0x003693C1u); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_003693C1: ;
    _fa = (uint32_t)(MEM8(ebx + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 8), 0x10 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_003693E2; /* jne: not equal / not zero */

loc_003693C8: ;
    ecx = 0x39;
    esi = ebp;
    edi = 0x36C860;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + 0xD8);
    MEM32(0x36CA80) = ecx;

loc_003693E2: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003693F3; /* jne: not equal / not zero */

loc_003693EA: ;
    edx = eax;
    ecx = ebx;
    PUSH32(esp, 0x003693F3u); RECOMP_ABI_CALL(0x0035E460u, sub_0035E460); /* call 0x0035E460 */

loc_003693F3: ;
    MEM32(eax) = 0x200260;
    edi = eax + 4;
    ecx = 8;
    esi = ebp;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM32(eax + 0x24) = 0x800A60;
    esi = ebp + 0x28;
    edi = eax + 0x28;
    ecx = 0x20;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + 0xA8);
    MEM32(eax + 0xA8) = 0x417F8;
    MEM32(eax + 0xAC) = ecx;
    MEM32(eax + 0xB0) = 0x81E20;
    edx = MEM32(ebp + 0xAC);
    MEM32(eax + 0xB4) = edx;
    ecx = MEM32(ebp + 0xB0);
    MEM32(eax + 0xB8) = ecx;
    MEM32(eax + 0xBC) = 0x241E40;
    esi = ebp + 0xB4;
    edi = eax + 0xC0;
    ecx = 9;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM32(eax + 0xE4) = 0x81E74;
    edx = MEM32(ebp + 0xDC);
    MEM32(eax + 0xE8) = edx;
    ecx = MEM32(ebp + 0xE0);
    MEM32(eax + 0xEC) = ecx;
    ecx = MEM32(ebx + 0x788);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_003694C5; /* je: equal / zero */

loc_0036949B: ;
    MEM32(eax + 0xF0) = 0x80288;
    edx = MEM32(ebp + 0x20);
    MEM32(eax + 0xF4) = edx;
    ecx = MEM32(ebp + 0x24);
    MEM32(eax + 0xF8) = ecx;
    POP32(esp, esi);
    eax = eax + 0xFC;
    POP32(esp, ebp);
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_003694C5: ;
    POP32(esp, esi);
    eax = eax + 0xF0;
    POP32(esp, ebp);
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003694E0
 * Original: 0x003694E0 - 0x003697A7 (711 bytes, 189 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003694E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003694E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    edx = MEM32(0x36CAF8);
    eax = MEM32(edx + 0x784);
    ecx = MEM32(eax + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + -4) = edx;
    MEM32(ebp + -8) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003697A1; /* je: equal / zero */

loc_0036950C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(ebp + 0x10) = eax;
    goto loc_00369520;

    /* nop */
    edi = edi;

loc_00369520: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_MEM(eax); /* movups */
    xmm0 = XMM_MIN(xmm0, XMM_MEM(0x47AFD0)); /* minps */
    xmm0 = XMM_MAX(xmm0, XMM_MEM(0x5DCF50)); /* maxps */
    xmm0 = XMM_MUL(xmm0, XMM_MEM(0x47AFE0)); /* mulps */
    eax = (int32_t)xmm0.f[0]; /* cvtss2si */
    eax = eax << 0x10;
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x39); /* shufps */
    ebx = (int32_t)xmm0.f[0]; /* cvtss2si */
    ebx = ebx << 8;
    eax = eax | ebx;
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x39); /* shufps */
    ebx = (int32_t)xmm0.f[0]; /* cvtss2si */
    eax = eax | ebx;
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x39); /* shufps */
    ebx = (int32_t)xmm0.f[0]; /* cvtss2si */
    ebx = ebx << 0x18;
    eax = eax | ebx;
    MEM32(ebp + 8) = eax;
    esi = MEM32(ebp + 8);
    MEM32(edx + edi * 4 + 0x8E4) = esi;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00369582; /* jb: below (unsigned <) */

loc_0036957A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036957Fu); RECOMP_ABI_CALL(0x00360090u, sub_00360090); /* call 0x00360090 */

loc_0036957F: ;
    edx = MEM32(ebp + -4);

loc_00369582: ;
    ecx = MEM32(edi * 4 + 0x47AFF0);
    ebx = MEM32(ebp + -8);
    ecx = ecx ^ MEM32(ebx + 0xE4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003695A9; /* jne: not equal / not zero */

loc_00369597: ;
    MEM32(0x36C888) = esi;
    MEM32(eax) = 0x40A60;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_003695A9: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003695C0; /* jne: not equal / not zero */

loc_003695AE: ;
    MEM32(0x36C88C) = esi;
    MEM32(eax) = 0x40A64;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_003695C0: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003695D7; /* jne: not equal / not zero */

loc_003695C5: ;
    MEM32(0x36C890) = esi;
    MEM32(eax) = 0x40A68;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_003695D7: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0xF0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003695EE; /* jne: not equal / not zero */

loc_003695DC: ;
    MEM32(0x36C894) = esi;
    MEM32(eax) = 0x40A6C;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_003695EE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF0000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00369608; /* jne: not equal / not zero */

loc_003695F6: ;
    MEM32(0x36C898) = esi;
    MEM32(eax) = 0x40A70;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_00369608: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF00000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00369622; /* jne: not equal / not zero */

loc_00369610: ;
    MEM32(0x36C89C) = esi;
    MEM32(eax) = 0x40A74;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_00369622: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036963C; /* jne: not equal / not zero */

loc_0036962A: ;
    MEM32(0x36C8A0) = esi;
    MEM32(eax) = 0x40A78;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_0036963C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF0000000u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00369656; /* jne: not equal / not zero */

loc_00369644: ;
    MEM32(0x36C8A4) = esi;
    MEM32(eax) = 0x40A7C;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_00369656: ;
    ecx = MEM32(edi * 4 + 0x47AFF0);
    ecx = ecx ^ MEM32(ebx + 0xE8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036967A; /* jne: not equal / not zero */

loc_00369668: ;
    MEM32(0x36C8A8) = esi;
    MEM32(eax) = 0x40A80;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_0036967A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00369691; /* jne: not equal / not zero */

loc_0036967F: ;
    MEM32(0x36C8AC) = esi;
    MEM32(eax) = 0x40A84;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_00369691: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003696A8; /* jne: not equal / not zero */

loc_00369696: ;
    MEM32(0x36C8B0) = esi;
    MEM32(eax) = 0x40A88;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_003696A8: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0xF0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003696BF; /* jne: not equal / not zero */

loc_003696AD: ;
    MEM32(0x36C8B4) = esi;
    MEM32(eax) = 0x40A8C;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_003696BF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF0000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003696D9; /* jne: not equal / not zero */

loc_003696C7: ;
    MEM32(0x36C8B8) = esi;
    MEM32(eax) = 0x40A90;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_003696D9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF00000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003696F3; /* jne: not equal / not zero */

loc_003696E1: ;
    MEM32(0x36C8BC) = esi;
    MEM32(eax) = 0x40A94;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_003696F3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036970D; /* jne: not equal / not zero */

loc_003696FB: ;
    MEM32(0x36C8C0) = esi;
    MEM32(eax) = 0x40A98;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_0036970D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF0000000u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00369727; /* jne: not equal / not zero */

loc_00369715: ;
    MEM32(0x36C8C4) = esi;
    MEM32(eax) = 0x40A9C;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_00369727: ;
    ecx = MEM32(edi * 4 + 0x47AFF0);
    ecx = ecx ^ MEM32(ebx + 0xEC);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036974B; /* jne: not equal / not zero */

loc_00369739: ;
    MEM32(0x36C90C) = esi;
    MEM32(eax) = 0x41E20;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_0036974B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00369762; /* jne: not equal / not zero */

loc_00369750: ;
    MEM32(0x36C910) = esi;
    MEM32(eax) = 0x41E24;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_00369762: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00369785; /* jne: not equal / not zero */

loc_00369766: ;
    esi = MEM32(ebp + 0xC);
    MEM32(eax) = 0xC181C;
    ebx = MEM32(esi);
    ecx = eax + 4;
    MEM32(ecx) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(ecx + 4) = ebx;
    esi = MEM32(esi + 8);
    MEM32(ecx + 8) = esi;
    eax = eax + 0x10;

loc_00369785: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(edx) = eax;
    eax = MEM32(ebp + 0x10);
    ecx = ecx + 0x10;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = ecx;
    MEM32(ebp + 0x10) = eax;
    if ((_fa != 0)) goto loc_00369520; /* jne: not equal / not zero */

loc_0036979E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003697A1: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003697B0
 * Original: 0x003697B0 - 0x003697E6 (54 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003697B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003697B0: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0x1000 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003697D0; /* ja: above (unsigned >) */

loc_003697BA: ;
    eax = 0xC;
    eax = eax << 0x18;
    eax = eax | 0xB0800000u;
    MEM32(esp + 8) = eax;
    g_seh_ebp = ebp; sub_001A1DDB(); return; /* tail jmp 0x001A1DDB */

loc_003697D0: ;
    { uint32_t _bs_v = (uint32_t)(MEM32(esp + 8)); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsf: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 0; _bs_i < 32; _bs_i++)
          if (_bs_v & (1u << _bs_i)) break;
        eax = (uint32_t)_bs_i;;
      } else { (void)(eax); } }
    eax = eax << 0x18;
    eax = eax | 0xB0800000u;
    MEM32(esp + 8) = eax;
    g_seh_ebp = ebp; sub_001A1DDB(); return; /* tail jmp 0x001A1DDB */

}

/**
 * sub_003697F0
 * Original: 0x003697F0 - 0x0036983D (77 bytes, 26 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003697F0(void)
{

loc_003697F0: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036981Eu); RECOMP_ABI_CALL(0x00361EF0u, sub_00361EF0); /* call 0x00361EF0 */

loc_0036981E: ;
    eax = MEM32(esp + 0x18);
    MEM32(esi) = 0x50001;
    MEM32(esi + 8) = 0;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x14) = 0;
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00369840
 * Original: 0x00369840 - 0x003698CC (140 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369840(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00369840: ;
    eax = MEM32(0x36CAF8);
    _fa = (uint32_t)(MEM8(eax + 0x8D8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x8D8), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003698CB; /* je: equal / zero */

loc_0036984E: ;
    eax = MEM32(0x36F2D4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x70) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x70 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003698CB; /* je: equal / zero */

loc_00369857: ;
    _fa = (uint32_t)(MEM32(0x36F2D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x36F2D0), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003698CB; /* jne: not equal / not zero */

loc_00369860: ;
    ecx = MEM32(0x36CA5C);
    eax = eax >> 4;
    eax = eax & 7;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    MEM32(0x36F2D0) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_003698CB; /* ja: above (unsigned >) */

loc_00369878: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3698CC); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0036987Fu) goto loc_0036987F;
    if (_jt == 0x0036988Au) goto loc_0036988A;
    if (_jt == 0x00369895u) goto loc_00369895;
    if (_jt == 0x003698A0u) goto loc_003698A0;
    if (_jt == 0x003698ABu) goto loc_003698AB;
    if (_jt == 0x003698B6u) goto loc_003698B6;
    if (_jt == 0x003698C1u) goto loc_003698C1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0036987F: ;
    MEM32(0x36CA5C) = 1;
    esp += 4; return; /* ret */

loc_0036988A: ;
    MEM32(0x36CA5C) = 2;
    esp += 4; return; /* ret */

loc_00369895: ;
    MEM32(0x36CA5C) = 4;
    esp += 4; return; /* ret */

loc_003698A0: ;
    MEM32(0x36CA5C) = 0x80000000u;
    esp += 4; return; /* ret */

loc_003698AB: ;
    MEM32(0x36CA5C) = 0x80000001u;
    esp += 4; return; /* ret */

loc_003698B6: ;
    MEM32(0x36CA5C) = 0x80000002u;
    esp += 4; return; /* ret */

loc_003698C1: ;
    MEM32(0x36CA5C) = 0x80000004u;

loc_003698CB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003698F0
 * Original: 0x003698F0 - 0x00369C6B (891 bytes, 260 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003698F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003698F0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x30));
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x36CAF8);
    eax = MEM32(esi + 0x8D8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0x40000000;
    MEM32(esp + 0x20) = 0x40800000;
    MEM32(esp + 0x24) = 0x41000000;
    if (TEST_Z(_fa, _fb)) goto loc_00369A27; /* je: equal / zero */

loc_0036992B: ;
    edi = MEM32(0x36F2D8);
    eax = MEM32(esi + 0x8DC);
    ecx = MEM32(0x36F2CC);
    PUSH32(esp, 0x36F2C0);
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x1FF)) >> 32) & 1);
    edi = edi + 0x1FF;
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFFFFFE00u;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x36F2B8);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x3C6BB8); PUSH32(esp, 0x00369961u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00369961: ;
    ebx = MEM32(esi + 0x8DC);
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x18)) >> 32) & 1);
    ebx = ebx + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00369972; /* jge: greater or equal (signed >=) */

loc_0036996E: ;
    MEM32(ebx) = ebp;
    goto loc_003699C6;

loc_00369972: ;
    edx = MEM32(0x36F2CC);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00369983u); RECOMP_ABI_CALL(0x0019F557u, sub_0019F557); /* call 0x0019F557 */

loc_00369983: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036999F; /* jne: not equal / not zero */

loc_0036998A: ;
    PUSH32(esp, 0x36B968);
    PUSH32(esp, 0x00369994u); RECOMP_ABI_CALL(0x003659B0u, sub_003659B0); /* call 0x003659B0 */

loc_00369994: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

loc_0036999F: ;
    eax = MEM32(0x36F2C0);
    edx = MEM32(0x36F2C4);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    MEM32(0x36F2C0) = eax;
    eax = MEM32(0x36F2C8);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ebp) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x36F2C4) = edx;
    MEM32(0x36F2C8) = eax;
    MEM32(ebx) = eax;

loc_003699C6: ;
    _fa = (uint32_t)(MEM32(esi + 0x8D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x8D4), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00369C63; /* jne: not equal / not zero */

loc_003699D2: ;
    MEM32(esi + 0x8D4) = 0x26000000;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    ebx = 0xFFFFFFEFu;

loc_003699E3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x003699EAu); RECOMP_ABI_CALL(0x0019F583u, sub_0019F583); /* call 0x0019F583 */

loc_003699EA: ;
    eax = edi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2710) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2710 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00369A13; /* jb: below (unsigned <) */

loc_003699F4: ;
    ecx = MEM32(esi + 0x8D8);
    eax = MEM32(0x36F2C8);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & ebx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x8D4) = ebp;
    MEM32(esi + 0x8D8) = ecx;
    MEM32(0x36F2C8) = eax;

loc_00369A13: ;
    _fa = (uint32_t)(MEM32(esi + 0x8D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x8D4), 0x26000000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003699E3; /* je: equal / zero */

loc_00369A1F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

loc_00369A27: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00369C63; /* je: equal / zero */

loc_00369A2F: ;
    ecx = MEM32(0x36F2B0);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | MEM32(0x36F2B4);
    if ((ecx == 0)) goto loc_00369A8C; /* je: equal / zero */

loc_00369A3D: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00369A47u); RECOMP_ABI_CALL(0x0034D3C8u, sub_0034D3C8); /* call 0x0034D3C8 */

loc_00369A47: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(0x36F2B0);
    edi = MEM32(esp + 0x14);
    ebp = MEM32(0x36F2B4);
    ebx = MEM32(0x36F2AC);
    ecx = edx;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    eax = edi;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ebp) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00369C63; /* jl: less (signed <) */

loc_00369A70: ;
    if (CMP_G(_fas, _fbs)) goto loc_00369A7E; /* jg: greater (signed >) */

loc_00369A72: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x36F2A8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x36F2A8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00369C63; /* jb: below (unsigned <) */

loc_00369A7E: ;
    MEM32(0x36F2B0) = edx;
    MEM32(0x36F2B4) = edi;
    goto loc_00369A96;

loc_00369A8C: ;
    PUSH32(esp, 0x36F2B0);
    PUSH32(esp, 0x00369A96u); RECOMP_ABI_CALL(0x0034D3C8u, sub_0034D3C8); /* call 0x0034D3C8 */

loc_00369A96: ;
    SET_LO8(eax, MEM8(0x36F2D4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_00369ACB; /* jns: not sign (positive) */

loc_00369A9F: ;
    eax = MEM32(0x36F2CC);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00369AAFu); RECOMP_ABI_CALL(0x0019F557u, sub_0019F557); /* call 0x0019F557 */

loc_00369AAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00369ACB; /* jne: not equal / not zero */

loc_00369AB6: ;
    PUSH32(esp, 0x36B948);
    PUSH32(esp, 0x00369AC0u); RECOMP_ABI_CALL(0x003659B0u, sub_003659B0); /* call 0x003659B0 */

loc_00369AC0: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

loc_00369ACB: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00369AD2u); RECOMP_ABI_CALL(0x0035B670u, sub_0035B670); /* call 0x0035B670 */

loc_00369AD2: ;
    ebp = eax;
    eax = MEM32(0x36F2D4);
    edx = MEM32(ebp + 0x10);
    edi = eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _cf = 0; /* logical op clears CF */
    edi = edi & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ebx = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00369AFB; /* jne: not equal / not zero */

loc_00369AEA: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 0xF));
    eax = 1;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    goto loc_00369B06;

loc_00369AFB: ;
    eax = edx;
    if (0xC) _cf = (int)(((eax) >> ((0xC) - 1)) & 1);
    eax = eax >> 0xC;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFF;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00369B06: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00369B1C; /* jne: not equal / not zero */

loc_00369B0A: ;
    ecx = MEM32(ebp + 0xC);
    if (0x14) _cf = (int)(((ecx) >> ((0x14) - 1)) & 1);
    ecx = ecx >> 0x14;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF;
    edx = 1;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    goto loc_00369B23;

loc_00369B1C: ;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFF;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00369B23: ;
    ecx = MEM32(esi + 0x8DC);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x40)) >> 32) & 1);
    ecx = ecx + 0x40;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFFF;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx + ecx + 0x1C;
    PUSH32(esp, ecx);
    ecx = edi;
    if (LO8(ecx)) _cf = (int)(((eax) >> ((LO8(ecx)) - 1)) & 1);
    eax = eax >> LO8(ecx);
    if (LO8(ecx)) _cf = (int)(((edx) >> ((LO8(ecx)) - 1)) & 1);
    edx = edx >> LO8(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00369B53u); RECOMP_ABI_CALL(0x003697F0u, sub_003697F0); /* call 0x003697F0 */

loc_00369B53: ;
    edx = MEM32(esp + edi * 4 + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00369B63u); RECOMP_ABI_CALL(0x00368CD0u, sub_00368CD0); /* call 0x00368CD0 */

loc_00369B63: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00369B69u); RECOMP_ABI_CALL(0x003613A0u, sub_003613A0); /* call 0x003613A0 */

loc_00369B69: ;
    PUSH32(esp, 0x00369B6Eu); RECOMP_ABI_CALL(0x0035B020u, sub_0035B020); /* call 0x0035B020 */

loc_00369B6E: ;
    edi = MEM32(esi + 0x8DC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00369B7Au); RECOMP_ABI_CALL(0x0034D3C8u, sub_0034D3C8); /* call 0x0034D3C8 */

loc_00369B7A: ;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(8)) >> 32) & 1);
    edi = edi + 8;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00369B83u); RECOMP_ABI_CALL(0x0034D3D9u, sub_0034D3D9); /* call 0x0034D3D9 */

loc_00369B83: ;
    SET_LO8(eax, MEM8(0x36F2D4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ecx = MEM32(0x36F2C8);
    MEM32(edi + 0x10) = ecx;
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_00369C03; /* jns: not sign (positive) */

loc_00369B95: ;
    edi = MEM32(0x36F2D8);
    edx = MEM32(esi + 0x8DC);
    eax = MEM32(0x36F2CC);
    PUSH32(esp, 0x36F2C0);
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x1FF)) >> 32) & 1);
    edi = edi + 0x1FF;
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFFFFFE00u;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x36F2B8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BB0); PUSH32(esp, 0x00369BCBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00369BCB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_00369C63; /* jl: less (signed <) */

loc_00369BD3: ;
    edx = MEM32(0x36F2C8);
    ecx = MEM32(0x36F2C0);
    eax = MEM32(0x36F2C4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    POP32(esp, edi);
    POP32(esp, esi);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    POP32(esp, ebp);
    MEM32(0x36F2C8) = edx;
    MEM32(0x36F2C0) = ecx;
    MEM32(0x36F2C4) = eax;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

loc_00369C03: ;
    eax = MEM32(esi + 0x8D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00369C63; /* jne: not equal / not zero */

loc_00369C0D: ;
    ebp = 0x26000000;
    MEM32(esi + 0x8D4) = ebp;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    ebx = 0xFFFFFFEFu;
    /* nop */

loc_00369C20: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00369C27u); RECOMP_ABI_CALL(0x0019F583u, sub_0019F583); /* call 0x0019F583 */

loc_00369C27: ;
    ecx = edi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2710) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2710 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00369C55; /* jb: below (unsigned <) */

loc_00369C32: ;
    ecx = MEM32(esi + 0x8D8);
    eax = MEM32(0x36F2C8);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & ebx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x8D4) = 0;
    MEM32(esi + 0x8D8) = ecx;
    MEM32(0x36F2C8) = eax;

loc_00369C55: ;
    _fa = (uint32_t)(MEM32(esi + 0x8D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x8D4), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00369C20; /* je: equal / zero */

loc_00369C5D: ;
    MEM32(0x36F2C8) = MEM32(0x36F2C8) + 1;
    _fa = (uint32_t)(MEM32(0x36F2C8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00369C63: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_00369C70
 * Original: 0x00369C70 - 0x0036A1D4 (1380 bytes, 409 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369C70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00369C70: ;
    eax = MEM32(0x36F2D0);
    esp = esp - 0x70;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x36CAF8);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00369C9D; /* je: equal / zero */

loc_00369C89: ;
    _fa = (uint32_t)(MEM8(ebp + 0x8D8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x8D8), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00369C9D; /* je: equal / zero */

loc_00369C92: ;
    MEM32(0x36CA5C) = eax;
    MEM32(0x36F2D0) = ebx;

loc_00369C9D: ;
    ecx = MEM32(ebp + 0x8D4);
    eax = ecx;
    eax = eax & 0xFF000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28000000 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0036A08F; /* ja: above (unsigned >) */

loc_00369CB5: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0036A06D; /* je: equal / zero */

loc_00369CBB: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A082; /* je: equal / zero */

loc_00369CC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x21000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00369D56; /* je: equal / zero */

loc_00369CD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x23000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036A1CC; /* jne: not equal / not zero */

loc_00369CDB: ;
    SET_LO8(eax, MEM8(0x36F2D4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_00369D1A; /* jns: not sign (positive) */

loc_00369CE4: ;
    eax = MEM32(0x36F2CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00369D1A; /* je: equal / zero */

loc_00369CED: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, 1);
    ecx = esp + 0x1B;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x36F2B8);
    PUSH32(esp, eax);
    MEM8(esp + 0x27) = 1;
    { uint32_t _icall_target = MEM32(0x3C6BD4); PUSH32(esp, 0x00369D07u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00369D07: ;
    edx = MEM32(0x36F2CC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x3C6BA0); PUSH32(esp, 0x00369D14u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00369D14: ;
    MEM32(0x36F2CC) = edi;

loc_00369D1A: ;
    edx = MEM32(ebp + 0x8D8);
    eax = MEM32(ebp + 0x8DC);
    edx = edx & 0xFFFFFFCFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + 0x8D8) = edx;
    MEM32(ebp + 0x8D4) = 0x24000000;
    if (CMP_EQ(_fa, _fb)) goto loc_00369D48; /* je: equal / zero */

loc_00369D3D: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00369D48u); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_00369D48: ;
    MEM32(ebp + 0x8DC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x70;
    esp += 4; return; /* ret */

loc_00369D56: ;
    eax = MEM32(ebp + 0x8DC);
    ecx = MEM32(eax);
    edx = MEM32(eax + 8);
    esi = MEM32(eax + 4);
    eax = MEM32(eax + 0xC);
    MEM32(0x36F2D4) = ecx;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEM32(0x36F2E4) = edx;
    MEM32(0x36F2E0) = eax;
    MEM32(0x36F2D0) = ebx;
    PUSH32(esp, 0x00369D88u); RECOMP_ABI_CALL(0x0034D3D9u, sub_0034D3D9); /* call 0x0034D3D9 */

loc_00369D88: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00369D99u); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_00369D99: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00369DA6u); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_00369DA6: ;
    PUSH32(esp, ebx);
    MEM32(0x36F2A8) = eax;
    MEM32(0x36F2AC) = edx;
    MEM32(0x36F2B0) = edi;
    MEM32(0x36F2B4) = edi;
    PUSH32(esp, 0x00369DC3u); RECOMP_ABI_CALL(0x0035B670u, sub_0035B670); /* call 0x0035B670 */

loc_00369DC3: ;
    ebx = eax;
    eax = MEM32(0x36F2D4);
    esi = MEM32(ebx + 0x10);
    edx = eax;
    eax = eax & 4;
    edx = edx & 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x14) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_00369DF4; /* jne: not equal / not zero */

loc_00369DE3: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 0xF));
    eax = 1;
    ecx = ecx & 0xF;
    eax = eax << LO8(ecx);
    goto loc_00369DFF;

loc_00369DF4: ;
    eax = esi;
    eax = eax >> 0xC;
    eax = eax & 0xFFF;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00369DFF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00369E15; /* jne: not equal / not zero */

loc_00369E03: ;
    ecx = MEM32(ebx + 0xC);
    ecx = ecx >> 0x14;
    ecx = ecx & 0xF;
    esi = 1;
    esi = esi << LO8(ecx);
    goto loc_00369E1C;

loc_00369E15: ;
    esi = esi & 0xFFF;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00369E1C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx + ecx + 0x1C;
    PUSH32(esp, ecx);
    ecx = edx;
    eax = eax >> LO8(ecx);
    esi = esi >> LO8(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00369E3Eu); RECOMP_ABI_CALL(0x003697F0u, sub_003697F0); /* call 0x003697F0 */

loc_00369E3E: ;
    ebx = MEM32(esp + 0x50);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00369E59; /* jne: not equal / not zero */

loc_00369E46: ;
    ecx = MEM32(esp + 0x4C);
    ecx = ecx >> 0x18;
    ecx = ecx & 0xF;
    edi = 1;
    edi = edi << LO8(ecx);
    goto loc_00369E65;

loc_00369E59: ;
    edi = ebx;
    edi = edi >> 0xC;
    edi = edi & 0xFFF;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00369E65: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00369E6Fu); RECOMP_ABI_CALL(0x0035B180u, sub_0035B180); /* call 0x0035B180 */

loc_00369E6F: ;
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)edi);
    edi = 0; /* xor self */
    esi = esi + 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esp + 0x58) = 0x28;
    if (CMP_NE(_fa, _fb)) goto loc_00369E98; /* jne: not equal / not zero */

loc_00369E85: ;
    ecx = MEM32(esp + 0x4C);
    ecx = ecx >> 0x14;
    ecx = ecx & 0xF;
    eax = 1;
    eax = eax << LO8(ecx);
    goto loc_00369EA0;

loc_00369E98: ;
    eax = ebx;
    eax = eax & 0xFFF;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00369EA0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esp + 0x5C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00369EBB; /* jne: not equal / not zero */

loc_00369EA8: ;
    ecx = MEM32(esp + 0x4C);
    ecx = ecx >> 0x18;
    ecx = ecx & 0xF;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    goto loc_00369EC5;

loc_00369EBB: ;
    ebx = ebx >> 0xC;
    ebx = ebx & 0xFFF;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00369EC5: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x60) = ebx;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), edi (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    MEM16(esp + 0x68) = 1;
    MEM32(esp + 0x6C) = edi;
    MEM32(esp + 0x70) = esi;
    MEM32(0x36F2D8) = esi;
    eax = eax * 8 + 0x10;
    MEM16(esp + 0x6A) = LO16(eax);
    MEM32(esp + 0x74) = edi;
    MEM32(esp + 0x78) = edi;
    MEM32(esp + 0x7C) = edi;
    PUSH32(esp, 0x00369F09u); RECOMP_ABI_CALL(0x0035B180u, sub_0035B180); /* call 0x0035B180 */

loc_00369F09: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    MEM32(esp + 0x80) = eax;
    PUSH32(esp, 0x00369F1Au); RECOMP_ABI_CALL(0x003613A0u, sub_003613A0); /* call 0x003613A0 */

loc_00369F1A: ;
    eax = esi + 0x1FF;
    eax = eax & 0xFFFFFE00u;
    PUSH32(esp, 0xAE800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00369F30u); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_00369F30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + 0x8DC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00369F4C; /* jne: not equal / not zero */

loc_00369F3A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x8D4) = 0x25000003;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x70;
    esp += 4; return; /* ret */

loc_00369F4C: ;
    edi = eax;
    SET_LO8(eax, MEM8(0x36F2D4));
    ecx = 0xA;
    esi = esp + 0x58;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    esi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_0036A046; /* jns: not sign (positive) */

loc_00369F68: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x36BA14);
    MEM32(0x36F2CC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00369F83u); RECOMP_ABI_CALL(0x0019CB9Eu, sub_0019CB9E); /* call 0x0019CB9E */

loc_00369F83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00369F9A; /* jne: not equal / not zero */

loc_00369F87: ;
    PUSH32(esp, 0x00369F8Cu); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_00369F8C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x36B9EC);
    PUSH32(esp, 0x00369F97u); RECOMP_ABI_CALL(0x003659B0u, sub_003659B0); /* call 0x003659B0 */

loc_00369F97: ;
    esp = esp + 8;

loc_00369F9A: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00369FB5; /* jl: less (signed <) */

loc_00369FA0: ;
    eax = 0x40000000;
    if (CMP_G(_fas, _fbs)) goto loc_00369FAD; /* jg: greater (signed >) */

loc_00369FA7: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00369FB5; /* jbe: below or equal (unsigned <=) */

loc_00369FAD: ;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = esi;

loc_00369FB5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x48);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x36F2B8);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x40100100);
    PUSH32(esp, 0x36F2CC);
    MEM32(esp + 0x4C) = esi;
    MEM32(esp + 0x54) = 0x40;
    MEM32(esp + 0x50) = 0x47B060;
    { uint32_t _icall_target = MEM32(0x3C6BDC); PUSH32(esp, 0x00369FEDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00369FED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00369FFC; /* jge: greater or equal (signed >=) */

loc_00369FF1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x36B9D0);
    goto loc_0036A19C;

loc_00369FFC: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(0x36F2CC);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(0x36F2C0) = esi;
    MEM32(0x36F2C4) = esi;
    PUSH32(esp, 0x0036A020u); RECOMP_ABI_CALL(0x0019E10Au, sub_0019E10A); /* call 0x0019E10A */

loc_0036A020: ;
    eax = MEM32(0x36F2CC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036A02Bu); RECOMP_ABI_CALL(0x0019DF8Cu, sub_0019DF8C); /* call 0x0019DF8C */

loc_0036A02B: ;
    ecx = MEM32(0x36F2C4);
    edx = MEM32(0x36F2C0);
    eax = MEM32(0x36F2CC);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036A046u); RECOMP_ABI_CALL(0x0019E10Au, sub_0019E10A); /* call 0x0019E10A */

loc_0036A046: ;
    eax = MEM32(ebp + 0x8D8);
    POP32(esp, edi);
    MEM32(0x36F2C8) = esi;
    eax = eax | 0x10;
    POP32(esp, esi);
    MEM32(ebp + 0x8D8) = eax;
    MEM32(ebp + 0x8D4) = 0x22000000;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x70;
    esp += 4; return; /* ret */

loc_0036A06D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036A082; /* je: equal / zero */

loc_0036A071: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0036A078u); RECOMP_ABI_CALL(0x0019F583u, sub_0019F583); /* call 0x0019F583 */

loc_0036A078: ;
    eax = MEM32(ebp + 0x8D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036A071; /* jne: not equal / not zero */

loc_0036A082: ;
    PUSH32(esp, 0x0036A087u); RECOMP_ABI_CALL(0x003698F0u, sub_003698F0); /* call 0x003698F0 */

loc_0036A087: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x70;
    esp += 4; return; /* ret */

loc_0036A08F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x29000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A0F0; /* je: equal / zero */

loc_0036A096: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036A1CC; /* jne: not equal / not zero */

loc_0036A0A1: ;
    ecx = MEM32(ebp + 0x8DC);
    eax = MEM32(ecx);
    MEM32(0x36F2DC) = eax;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0036A0C3; /* je: equal / zero */

loc_0036A0B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x8D4) = 0x44000004;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x70;
    esp += 4; return; /* ret */

loc_0036A0C3: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x36B9C8);
    PUSH32(esp, 0x36B9BC);
    PUSH32(esp, 0x42BF74);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036A0DBu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0036A0DB: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x8D4) = 0x43000000;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x70;
    esp += 4; return; /* ret */

loc_0036A0F0: ;
    edx = MEM32(ebp + 0x8D8);
    edx = edx & 0xFFFFFFEFu;
    edx = edx | 0x20;
    MEM32(ebp + 0x8D8) = edx;
    eax = MEM32(0x36F2CC);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036A112u); RECOMP_ABI_CALL(0x0019F557u, sub_0019F557); /* call 0x0019F557 */

loc_0036A112: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036A139; /* jne: not equal / not zero */

loc_0036A119: ;
    PUSH32(esp, 0x36B948);
    PUSH32(esp, 0x0036A123u); RECOMP_ABI_CALL(0x003659B0u, sub_003659B0); /* call 0x003659B0 */

loc_0036A123: ;
    eax = MEM32(0x36F2C8);
    esi = 0; /* xor self */
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0036A13B; /* jle: less or equal (signed <=) */

loc_0036A131: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x36F2C8) = eax;
    goto loc_0036A13B;

loc_0036A139: ;
    esi = 0; /* xor self */

loc_0036A13B: ;
    edi = MEM32(0x36F2E4);
    ecx = MEM32(0x36F2CC);
    edi = edi & 0xFFFFFFFEu;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(0x36F2E4) = edi;
    { uint32_t _icall_target = MEM32(0x3C6BA0); PUSH32(esp, 0x0036A157u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036A157: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x36F2B8);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x80110000u);
    PUSH32(esp, 0x36F2CC);
    MEM32(0x36F2CC) = ebx;
    MEM32(esp + 0x58) = esi;
    MEM32(esp + 0x60) = 0x40;
    MEM32(esp + 0x5C) = 0x47B060;
    { uint32_t _icall_target = MEM32(0x3C6BDC); PUSH32(esp, 0x0036A192u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036A192: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0036A1B6; /* jge: greater or equal (signed >=) */

loc_0036A196: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x36B988);

loc_0036A19C: ;
    PUSH32(esp, 0x0036A1A1u); RECOMP_ABI_CALL(0x003659B0u, sub_003659B0); /* call 0x003659B0 */

loc_0036A1A1: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x8D4) = 0x25000004;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x70;
    esp += 4; return; /* ret */

loc_0036A1B6: ;
    MEM32(0x36F2C0) = esi;
    MEM32(0x36F2C4) = esi;
    MEM32(ebp + 0x8D4) = 0x2A000000;

loc_0036A1CC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x70;
    esp += 4; return; /* ret */

}

/**
 * sub_0036A1D8
 * Original: 0x0036A1D8 - 0x0036A1E0 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A1D8(void)
{

loc_0036A1D8: ;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);

}

/**
 * sub_0036F300
 * Original: 0x0036F300 - 0x0036F31F (31 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F300: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F31C; /* je: equal / zero */

loc_0036F30A: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;

loc_0036F31C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036F31F
 * Original: 0x0036F31F - 0x0036F330 (17 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F31F(void)
{

loc_0036F31F: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x626F5344);
    PUSH32(esp, 0x0036F32Fu); RECOMP_ABI_CALL(0x00371C5Cu, sub_00371C5C); /* call 0x00371C5C */

loc_0036F32F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0036F330
 * Original: 0x0036F330 - 0x0036F352 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0036F330: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    SET_LO8(ecx, 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    MEM32(esi + 4) = eax;
    if ((eax == 0)) goto loc_0036F350; /* je: equal / zero */

loc_0036F348: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6D44); PUSH32(esp, 0x0036F34Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036F34E: ;
    MEM8(esi) = LO8(eax);

loc_0036F350: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036F352
 * Original: 0x0036F352 - 0x0036F369 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F352(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F352: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F367; /* je: equal / zero */

loc_0036F35B: ;
    SET_LO8(ecx, MEM8(esi));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x0036F363u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036F363: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;

loc_0036F367: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036F369
 * Original: 0x0036F369 - 0x0036F38E (37 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F369(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F369: ;
    eax = MEM32(XBOX_FS_BASE + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036F38D; /* je: equal / zero */

loc_0036F373: ;
    eax = MEM32(0x37A6C0);
    MEM32(0x37A6C0) = MEM32(0x37A6C0) + 1;
    _fa = (uint32_t)(MEM32(0x37A6C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036F38D; /* jne: not equal / not zero */

loc_0036F382: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37AD84);
    { uint32_t _icall_target = MEM32(0x3C6D48); PUSH32(esp, 0x0036F38Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036F38D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0036F38E
 * Original: 0x0036F38E - 0x0036F3AC (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F38E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F38E: ;
    eax = MEM32(XBOX_FS_BASE + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036F3AB; /* je: equal / zero */

loc_0036F398: ;
    MEM32(0x37A6C0) = MEM32(0x37A6C0) - 1;
    _fa = (uint32_t)(MEM32(0x37A6C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0036F3AB; /* jne: not equal / not zero */

loc_0036F3A0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37AD84);
    { uint32_t _icall_target = MEM32(0x3C6D4C); PUSH32(esp, 0x0036F3ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036F3AB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0036F3AC
 * Original: 0x0036F3AC - 0x0036F3CA (30 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F3AC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F3AC: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(eax + 4);
    esp += 8; return; /* ret 4 */

    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036F3B9
 * Original: 0x0036F3B9 - 0x0036F3CA (17 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F3B9(void)
{

loc_0036F3B9: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx + 4) = MEM32(ecx + 4) & 0;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0036F3C7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036F3C7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036F3CA
 * Original: 0x0036F3CA - 0x0036F3EB (33 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F3CA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F3CA: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0036F3E5; /* jbe: below or equal (unsigned <=) */

loc_0036F3D5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    if ((_fa != 0)) goto loc_0036F3E5; /* jne: not equal / not zero */

loc_0036F3DB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0036F3E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036F3E1: ;
    eax = 0; /* xor self */
    goto loc_0036F3E8;

loc_0036F3E5: ;
    eax = MEM32(ecx + 4);

loc_0036F3E8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036F3EB
 * Original: 0x0036F3EB - 0x0036F434 (73 bytes, 23 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0036F3EB(void)
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

loc_0036F3EB: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0036F403; /* jp: parity */

loc_0036F3FC: ;
    eax = 0xFFFFD8F0u;
    goto loc_0036F431;

loc_0036F403: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036F418; /* jne: not equal / not zero */

loc_0036F414: ;
    eax = 0; /* xor self */
    goto loc_0036F431;

loc_0036F418: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = fp_top() * MEMF(0x3E09A0); /* fmul dword ptr [0x3e09a0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036F431u); RECOMP_ABI_CALL(0x00376F72u, sub_00376F72); /* call 0x00376F72 */

loc_0036F431: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036F434
 * Original: 0x0036F434 - 0x0036F438 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F434(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F434: ;
    { uint32_t _bs_v = (uint32_t)(ecx); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsf: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 0; _bs_i < 32; _bs_i++)
          if (_bs_v & (1u << _bs_i)) break;
        eax = (uint32_t)_bs_i;;
      } else { (void)(eax); } }
    esp += 4; return; /* ret */

}

/**
 * sub_0036F438
 * Original: 0x0036F438 - 0x0036F461 (41 bytes, 15 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0036F438(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0036F438: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x24));
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x37ADB0); PUSH32(esp, 0x0036F45Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036F45D: ;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036F461
 * Original: 0x0036F461 - 0x0036F498 (55 bytes, 19 insns)
 * CC: cdecl, 8 params, returns float_sse
 * Frame: standard_frame
 */
void sub_0036F461(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0036F461: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x24));
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x14));
    esp = esp - 0xC;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(0x37ADBC); PUSH32(esp, 0x0036F494u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036F494: ;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036F498
 * Original: 0x0036F498 - 0x0036F4B8 (32 bytes, 12 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0036F498(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0036F498: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x37ADC0); PUSH32(esp, 0x0036F4B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036F4B4: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036F4B8
 * Original: 0x0036F4B8 - 0x0036F4EC (52 bytes, 17 insns)
 * CC: cdecl, 7 params, returns float_sse
 * Frame: standard_frame
 */
void sub_0036F4B8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0036F4B8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x20));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    esp = esp - 0x10;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(0x37ADC4); PUSH32(esp, 0x0036F4E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036F4E8: ;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036F4EC
 * Original: 0x0036F4EC - 0x0036F50E (34 bytes, 10 insns)
 * CC: cdecl, 4 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0036F4EC(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0036F4EC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(0x37ADC8); PUSH32(esp, 0x0036F50Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036F50B: ;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036F50E
 * Original: 0x0036F50E - 0x0036F535 (39 bytes, 10 insns)
 * CC: cdecl, 4 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0036F50E(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0036F50E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    fp_push(MEMF(esp + 0x10)); /* fld float */
    esp = esp - 0xC;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(0x37ADCC); PUSH32(esp, 0x0036F532u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036F532: ;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036F535
 * Original: 0x0036F535 - 0x0036F553 (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F535(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F535: ;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036F544; /* je: equal / zero */

loc_0036F541: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0036F544: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C5C); PUSH32(esp, 0x0036F54Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036F54F: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0036F553
 * Original: 0x0036F553 - 0x0036F582 (47 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F553(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F553: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x0036F56Au); RECOMP_ABI_CALL(0x00372A0Fu, sub_00372A0F); /* call 0x00372A0F */

loc_0036F56A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0036F577; /* jl: less (signed <) */

loc_0036F56E: ;
    MEM32(esi + 0x80) = MEM32(esi + 0x80) | 1;
    goto loc_0036F57E;

loc_0036F577: ;
    MEM32(esi + 0x80) = MEM32(esi + 0x80) & 0xFFFFFFFEu;

loc_0036F57E: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036F582
 * Original: 0x0036F582 - 0x0036F5C1 (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F582(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F582: ;
    eax = MEM32(ecx + 0x80);
    edx = ZX8(MEM8(eax + 0xF));
    PUSH32(esp, esi);
    esi = ZX8(MEM8(eax + 0xE));
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    edx = edx >> 3;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x14) (32-bit) */
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_0036F5B5; /* jbe: below or equal (unsigned <=) */

loc_0036F5A0: ;
    ecx = eax;
    eax = ZX8(MEM8(ecx + 0xF));
    ecx = ZX8(MEM8(ecx + 0xE));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax >> 3;
    eax = eax << 5;
    goto loc_0036F5BE;

loc_0036F5B5: ;
    eax = MEM32(ecx + 0x80);
    eax = MEM32(eax + 0x14);

loc_0036F5BE: ;
    eax = eax + eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0036F5D7
 * Original: 0x0036F5D7 - 0x0036F5DC (5 bytes, 2 insns)
 * CC: cdecl, 5 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0036F5D7(void)
{

loc_0036F5D7: ;
    eax = 0; /* xor self */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0036F611
 * Original: 0x0036F611 - 0x0036F65B (74 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0036F611(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0036F611: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036F61Du); RECOMP_ABI_CALL(0x0036F369u, sub_0036F369); /* call 0x0036F369 */

loc_0036F61D: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBB80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBB80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036F62B; /* jne: not equal / not zero */

loc_0036F627: ;
    esi = 0; /* xor self */
    goto loc_0036F64C;

loc_0036F62B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + 8) = eax;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0036F63B; /* jge: greater or equal (signed >=) */

loc_0036F635: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0036F63B: ;
    fp_top() = fp_top() * MEMF(0x3E1ECC); /* fmul dword ptr [0x3e1ecc] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036F64Au); RECOMP_ABI_CALL(0x00374382u, sub_00374382); /* call 0x00374382 */

loc_0036F64A: ;
    esi = eax;

loc_0036F64C: ;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036F654u); RECOMP_ABI_CALL(0x0036F38Eu, sub_0036F38E); /* call 0x0036F38E */

loc_0036F654: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036F65B
 * Original: 0x0036F65B - 0x0036F660 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F65B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036F65B: ;
    g_seh_ebp = ebp; sub_00371CF8(); return; /* tail jmp 0x00371CF8 */

}

/**
 * sub_0036F660
 * Original: 0x0036F660 - 0x0036F665 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F660(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036F660: ;
    g_seh_ebp = ebp; sub_00371D42(); return; /* tail jmp 0x00371D42 */

}

/**
 * sub_0036F665
 * Original: 0x0036F665 - 0x0036F687 (34 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F665(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F665: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036F67A; /* je: equal / zero */

loc_0036F66D: ;
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 0xC) = eax;
    goto loc_0036F684;

loc_0036F67A: ;
    PUSH32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    edi = ecx + 8;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    POP32(esp, edi);

loc_0036F684: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036F687
 * Original: 0x0036F687 - 0x0036F6A4 (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F687(void)
{

loc_0036F687: ;
    eax = ecx;
    ecx = eax + 0x10;
    MEM32(eax + 4) = 2;
    MEM32(eax) = 0x3E1ED8;
    MEM32(0x37AD80) = eax;
    MEM32(eax + 0x14) = ecx;
    MEM32(ecx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0036F6A4
 * Original: 0x0036F6A4 - 0x0036F6DE (58 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F6A4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F6A4: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3E1ED8;
    MEM32(0x37AD80) = MEM32(0x37AD80) & 0;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036F6C5; /* je: equal / zero */

loc_0036F6BB: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x0036F6C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036F6C1: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;

loc_0036F6C5: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036F6D6; /* je: equal / zero */

loc_0036F6CC: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x0036F6D2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036F6D2: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;

loc_0036F6D6: ;
    MEM32(esi) = 0x3E1EBC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036F6DE
 * Original: 0x0036F6DE - 0x0036F742 (100 bytes, 33 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0036F6DE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F6DE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036F6E7u); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_0036F6E7: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    edi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0036F709; /* je: equal / zero */

loc_0036F6F3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036F702; /* je: equal / zero */

loc_0036F6F7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0036F702u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036F702: ;
    eax = 0x80004005u;
    goto loc_0036F73D;

loc_0036F709: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = MEM32(esi + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036F718u); RECOMP_ABI_CALL(0x0036F665u, sub_0036F665); /* call 0x0036F665 */

loc_0036F718: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036F729u); RECOMP_ABI_CALL(0x0036F553u, sub_0036F553); /* call 0x0036F553 */

loc_0036F729: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0036F73A; /* je: equal / zero */

loc_0036F72F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0036F73Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036F73A: ;
    eax = esi;
    POP32(esp, esi);

loc_0036F73D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0036F742
 * Original: 0x0036F742 - 0x0036F751 (15 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0036F742(void)
{

loc_0036F742: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    { uint32_t _icall_target = MEM32(0x3C6BD8); PUSH32(esp, 0x0036F74Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036F74C: ;
    eax = 0; /* xor self */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036F751
 * Original: 0x0036F751 - 0x0036F782 (49 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F751(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F751: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036F757u); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_0036F757: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_NE(_fa, _fb)) goto loc_0036F76F; /* jne: not equal / not zero */

loc_0036F763: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x0036F76Fu); RECOMP_ABI_CALL(0x00372F9Au, sub_00372F9A); /* call 0x00372F9A */

loc_0036F76F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036F77E; /* je: equal / zero */

loc_0036F773: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0036F77Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036F77E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036F782
 * Original: 0x0036F782 - 0x0036F7A7 (37 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F782(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F782: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0036F7A3; /* jbe: below or equal (unsigned <=) */

loc_0036F78D: ;
    PUSH32(esp, edi);

loc_0036F78E: ;
    eax = MEM32(esi + 4);
    eax = eax + edx * 8;
    edi = MEM32(eax);
    eax = MEM32(eax + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + edi * 4 + 0x30) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036F78E; /* jb: below (unsigned <) */

loc_0036F7A2: ;
    POP32(esp, edi);

loc_0036F7A3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036F7A7
 * Original: 0x0036F7A7 - 0x0036F815 (110 bytes, 50 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0036F7A7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F7A7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    ecx = ebp + -8;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036F7BDu); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_0036F7BD: ;
    ecx = MEM32(esi + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0036F7DA; /* jbe: below or equal (unsigned <=) */

loc_0036F7C6: ;
    edx = ecx;
    PUSH32(esp, ebx);

loc_0036F7C9: ;
    ebx = ZX8(MEM8(esi + eax + 0x28));
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036F7D4; /* jne: not equal / not zero */

loc_0036F7D3: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0036F7D4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036F7C9; /* jb: below (unsigned <) */

loc_0036F7D9: ;
    POP32(esp, ebx);

loc_0036F7DA: ;
    eax = ZX8(MEM8(esi + 0xE));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0036F807; /* jae: above or equal (unsigned >=) */

loc_0036F7E2: ;
    eax = eax - edi;
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0036F7F3; /* jbe: below or equal (unsigned <=) */

loc_0036F7EB: ;
    PUSH32(esp, 8);
    POP32(esp, ecx);
    ecx = ecx - eax;
    MEM32(esi + 0x24) = ecx;

loc_0036F7F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036F807; /* je: equal / zero */

loc_0036F7F7: ;
    ecx = MEM32(esi + 0x24);
    SET_LO8(edx, MEM8(ebp + 8));
    MEM8(esi + ecx + 0x28) = LO8(edx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0036F7F7; /* jne: not equal / not zero */

loc_0036F807: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036F80Fu); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_0036F80F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036F815
 * Original: 0x0036F815 - 0x0036F862 (77 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F815(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F815: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x14;
    PUSH32(esp, eax);
    MEM32(esi) = 0x3E1EF8;
    PUSH32(esp, 0x0036F827u); RECOMP_ABI_CALL(0x0036F300u, sub_0036F300); /* call 0x0036F300 */

loc_0036F827: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036F838; /* je: equal / zero */

loc_0036F82E: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x0036F834u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036F834: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;

loc_0036F838: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036F849; /* je: equal / zero */

loc_0036F83F: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x0036F845u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036F845: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;

loc_0036F849: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036F85A; /* je: equal / zero */

loc_0036F850: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x0036F856u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036F856: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;

loc_0036F85A: ;
    MEM32(esi) = 0x3E1EBC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036F862
 * Original: 0x0036F862 - 0x0036F87B (25 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F862(void)
{

loc_0036F862: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x18) = edx;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x0036F878u); RECOMP_ABI_CALL(0x00375C7Au, sub_00375C7A); /* call 0x00375C7A */

loc_0036F878: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036F87B
 * Original: 0x0036F87B - 0x0036F897 (28 bytes, 8 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F87B(void)
{

loc_0036F87B: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(esp + 8);
    edx = edx - MEM32(eax + 0x20);
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x0036F894u); RECOMP_ABI_CALL(0x00375BE2u, sub_00375BE2); /* call 0x00375BE2 */

loc_0036F894: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036F897
 * Original: 0x0036F897 - 0x0036F8AA (19 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F897(void)
{

loc_0036F897: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x0036F8A7u); RECOMP_ABI_CALL(0x003755F6u, sub_003755F6); /* call 0x003755F6 */

loc_0036F8A7: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036F8AA
 * Original: 0x0036F8AA - 0x0036F8CD (35 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F8AA(void)
{

loc_0036F8AA: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = ecx - esi;
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) + ecx;
    MEM32(eax + 0x20) = esi;
    ecx = MEM32(edx + 0xC);
    PUSH32(esp, 0x0036F8C9u); RECOMP_ABI_CALL(0x00375BE2u, sub_00375BE2); /* call 0x00375BE2 */

loc_0036F8C9: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036F8CD
 * Original: 0x0036F8CD - 0x0036F8EA (29 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F8CD(void)
{

loc_0036F8CD: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x0036F8DEu); RECOMP_ABI_CALL(0x0036F782u, sub_0036F782); /* call 0x0036F782 */

loc_0036F8DE: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x0036F8E6u); RECOMP_ABI_CALL(0x00375BE2u, sub_00375BE2); /* call 0x00375BE2 */

loc_0036F8E6: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036F8EA
 * Original: 0x0036F8EA - 0x0036F9BF (213 bytes, 75 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0036F8EA(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0036F8EA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0xD8);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0036F911; /* je: equal / zero */

loc_0036F905: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036F90Bu); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_0036F90B: ;
    MEM32(ebx + 0xD8) = edi;

loc_0036F911: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebx + 0xDC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0036F9B6; /* je: equal / zero */

loc_0036F922: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    if (3) _cf = (int)(((esi) >> (32 - (3))) & 1);
    esi = esi << 3;
    PUSH32(esp, esi);
    PUSH32(esp, 0x61645344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036F934u); RECOMP_ABI_CALL(0x00371C5Cu, sub_00371C5C); /* call 0x00371C5C */

loc_0036F934: ;
    ecx = eax;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x7FF8FFF2;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    ecx = ecx + 0x8007000Eu;
    MEM32(ebx + 0xD8) = eax;
    MEM32(ebp + -8) = ecx;
    if (((int32_t)ecx < 0)) goto loc_0036F9B5; /* js: sign (negative) */

loc_0036F951: ;
    ecx = esi;
    esi = MEM32(ebp + 0xC);
    edi = eax;
    eax = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    eax = MEM32(ebx + 0xDC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0036F9B5; /* je: equal / zero */

loc_0036F96F: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebx + 0xD8);
    if (3) _cf = (int)(((ecx) >> (32 - (3))) & 1);
    ecx = ecx << 3;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0036F9A6; /* jbe: below or equal (unsigned <=) */

loc_0036F984: ;
    edi = MEM32(eax + 8);
    esi = MEM32(eax + 4);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(eax) = edi;
    edi = MEM32(eax + 0xC);
    MEM32(eax + 4) = edi;
    eax = MEM32(ebx + 0xD8);
    MEM32(ecx + eax + 8) = edx;
    MEM32(ecx + eax + 0xC) = esi;
    goto loc_0036F9A9;

loc_0036F9A6: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0036F9A9: ;
    eax = MEM32(ebx + 0xDC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0036F96F; /* jb: below (unsigned <) */

loc_0036F9B5: ;
    POP32(esp, esi);

loc_0036F9B6: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036F9BF
 * Original: 0x0036F9BF - 0x0036F9F2 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F9BF(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036F9BF: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi) = 0x3E1F08;
    if (TEST_Z(_fa, _fb)) goto loc_0036F9D9; /* je: equal / zero */

loc_0036F9CF: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x0036F9D5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036F9D5: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;

loc_0036F9D9: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036F9EA; /* je: equal / zero */

loc_0036F9E0: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x0036F9E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036F9E6: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;

loc_0036F9EA: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0036F815(); return; /* tail jmp 0x0036F815 */

}

/**
 * sub_0036F9F2
 * Original: 0x0036F9F2 - 0x0036FA39 (71 bytes, 21 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F9F2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F9F2: ;
    PUSH32(esp, 0x0036F9F7u); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_0036F9F7: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    ecx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0036FA19; /* je: equal / zero */

loc_0036FA03: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036FA12; /* je: equal / zero */

loc_0036FA07: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0036FA12u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036FA12: ;
    eax = 0x80004005u;
    goto loc_0036FA36;

loc_0036FA19: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0036FA33; /* je: equal / zero */

loc_0036FA28: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0036FA33u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036FA33: ;
    eax = esi;
    POP32(esp, esi);

loc_0036FA36: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036FA39
 * Original: 0x0036FA39 - 0x0036FA83 (74 bytes, 23 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FA39(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036FA39: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036FA3Fu); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_0036FA3F: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0036FA61; /* je: equal / zero */

loc_0036FA4B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036FA5A; /* je: equal / zero */

loc_0036FA4F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0036FA5Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036FA5A: ;
    eax = 0x80004005u;
    goto loc_0036FA7F;

loc_0036FA61: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x0036FA6Bu); RECOMP_ABI_CALL(0x0036F3CAu, sub_0036F3CA); /* call 0x0036F3CA */

loc_0036FA6B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0036FA7C; /* je: equal / zero */

loc_0036FA71: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0036FA7Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036FA7C: ;
    eax = edi;
    POP32(esp, edi);

loc_0036FA7F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036FA83
 * Original: 0x0036FA83 - 0x0036FAD4 (81 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FA83(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036FA83: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036FA89u); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_0036FA89: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0036FAAB; /* je: equal / zero */

loc_0036FA95: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036FAA4; /* je: equal / zero */

loc_0036FA99: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0036FAA4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036FAA4: ;
    eax = 0x80004005u;
    goto loc_0036FAD0;

loc_0036FAAB: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x0036FABCu); RECOMP_ABI_CALL(0x00376B0Fu, sub_00376B0F); /* call 0x00376B0F */

loc_0036FABC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0036FACD; /* je: equal / zero */

loc_0036FAC2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0036FACDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036FACD: ;
    eax = edi;
    POP32(esp, edi);

loc_0036FAD0: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0036FAD4
 * Original: 0x0036FAD4 - 0x0036FB23 (79 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FAD4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036FAD4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036FADAu); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_0036FADA: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0036FAFC; /* je: equal / zero */

loc_0036FAE6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036FAF5; /* je: equal / zero */

loc_0036FAEA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0036FAF5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036FAF5: ;
    eax = 0x80004005u;
    goto loc_0036FB1F;

loc_0036FAFC: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0036FB0Bu); RECOMP_ABI_CALL(0x00376BDDu, sub_00376BDD); /* call 0x00376BDD */

loc_0036FB0B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0036FB1C; /* je: equal / zero */

loc_0036FB11: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0036FB1Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036FB1C: ;
    eax = edi;
    POP32(esp, edi);

loc_0036FB1F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036FB23
 * Original: 0x0036FB23 - 0x0036FB7C (89 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FB23(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036FB23: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036FB29u); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_0036FB29: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0036FB4B; /* je: equal / zero */

loc_0036FB35: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036FB44; /* je: equal / zero */

loc_0036FB39: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0036FB44u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036FB44: ;
    eax = 0x80004005u;
    goto loc_0036FB78;

loc_0036FB4B: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x0036FB64u); RECOMP_ABI_CALL(0x00376E46u, sub_00376E46); /* call 0x00376E46 */

loc_0036FB64: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0036FB75; /* je: equal / zero */

loc_0036FB6A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0036FB75u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036FB75: ;
    eax = edi;
    POP32(esp, edi);

loc_0036FB78: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0036FB7C
 * Original: 0x0036FB7C - 0x0036FBCD (81 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FB7C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036FB7C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036FB82u); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_0036FB82: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0036FBA4; /* je: equal / zero */

loc_0036FB8E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036FB9D; /* je: equal / zero */

loc_0036FB92: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0036FB9Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036FB9D: ;
    eax = 0x80004005u;
    goto loc_0036FBC9;

loc_0036FBA4: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x0036FBB5u); RECOMP_ABI_CALL(0x003766C3u, sub_003766C3); /* call 0x003766C3 */

loc_0036FBB5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0036FBC6; /* je: equal / zero */

loc_0036FBBB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0036FBC6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036FBC6: ;
    eax = edi;
    POP32(esp, edi);

loc_0036FBC9: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036FBCD
 * Original: 0x0036FBCD - 0x0036FC52 (133 bytes, 43 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0036FBCD(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036FBCD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036FBD6u); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_0036FBD6: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    edi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0036FBF8; /* je: equal / zero */

loc_0036FBE2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036FBF1; /* je: equal / zero */

loc_0036FBE6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0036FBF1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036FBF1: ;
    eax = 0x80004005u;
    goto loc_0036FC4D;

loc_0036FBF8: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_0036FC1D; /* je: equal / zero */

loc_0036FC09: ;
    PUSH32(esp, ebx);
    ebx = esi + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0xC8) (32-bit) */
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_0036FC25; /* jbe: below or equal (unsigned <=) */

loc_0036FC16: ;
    esi = 0x88780032u;
    goto loc_0036FC3B;

loc_0036FC1D: ;
    ecx = MEM32(eax + 0xC8);
    ecx = ecx - esi;

loc_0036FC25: ;
    MEM32(eax + 0xCC) = esi;
    MEM32(eax + 0xD0) = ecx;
    ecx = MEM32(edx + 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036FC39u); RECOMP_ABI_CALL(0x00376BBFu, sub_00376BBF); /* call 0x00376BBF */

loc_0036FC39: ;
    esi = eax;

loc_0036FC3B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036FC4A; /* je: equal / zero */

loc_0036FC3F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0036FC4Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036FC4A: ;
    eax = esi;
    POP32(esp, esi);

loc_0036FC4D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036FC52
 * Original: 0x0036FC52 - 0x0036FCA7 (85 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FC52(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036FC52: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036FC58u); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_0036FC58: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0036FC7A; /* je: equal / zero */

loc_0036FC64: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036FC73; /* je: equal / zero */

loc_0036FC68: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0036FC73u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036FC73: ;
    eax = 0x80004005u;
    goto loc_0036FCA3;

loc_0036FC7A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x0036FC8Fu); RECOMP_ABI_CALL(0x00376705u, sub_00376705); /* call 0x00376705 */

loc_0036FC8F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0036FCA0; /* je: equal / zero */

loc_0036FC95: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0036FCA0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036FCA0: ;
    eax = edi;
    POP32(esp, edi);

loc_0036FCA3: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036FCA7
 * Original: 0x0036FCA7 - 0x0036FD89 (226 bytes, 80 insns)
 * Category: game_audio
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0036FCA7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036FCA7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036FCB7u); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_0036FCB7: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), edi (32-bit) */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0036FCDE; /* je: equal / zero */

loc_0036FCC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036FCD4; /* je: equal / zero */

loc_0036FCC9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0036FCD4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036FCD4: ;
    eax = 0x80004005u;
    goto loc_0036FD84;

loc_0036FCDE: ;
    _fa = (uint32_t)(MEM8(ebp + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x24), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    if (TEST_Z(_fa, _fb)) goto loc_0036FCFA; /* je: equal / zero */

loc_0036FCE8: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036FCF3u); RECOMP_ABI_CALL(0x0036FC52u, sub_0036FC52); /* call 0x0036FC52 */

loc_0036FCF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0036FD6F; /* jl: less (signed <) */

loc_0036FCFA: ;
    _fa = (uint32_t)(MEM8(ebp + 0x24)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x24), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036FD0B; /* je: equal / zero */

loc_0036FD00: ;
    eax = MEM32(esi + 0x1C);
    eax = MEM32(eax + 0xC0);
    goto loc_0036FD0E;

loc_0036FD0B: ;
    eax = MEM32(ebp + 0x10);

loc_0036FD0E: ;
    ecx = MEM32(esi + 0x1C);
    ecx = MEM32(ecx + 0xBC);
    ecx = ecx + MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x14);
    MEM32(edx) = ecx;
    ecx = MEM32(esi + 0x1C);
    ecx = MEM32(ecx + 0xC0);
    ecx = ecx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0036FD33; /* jae: above or equal (unsigned >=) */

loc_0036FD2F: ;
    ecx = eax;
    goto loc_0036FD3F;

loc_0036FD33: ;
    ecx = MEM32(esi + 0x1C);
    ecx = MEM32(ecx + 0xC0);
    ecx = ecx - MEM32(ebp + 0xC);

loc_0036FD3F: ;
    edi = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x18);
    MEM32(ebx) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0036FD6E; /* je: equal / zero */

loc_0036FD4C: ;
    edx = MEM32(ebp + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036FD6E; /* je: equal / zero */

loc_0036FD53: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0036FD68; /* jae: above or equal (unsigned >=) */

loc_0036FD57: ;
    ecx = MEM32(esi + 0x1C);
    ecx = MEM32(ecx + 0xBC);
    MEM32(edi) = ecx;
    eax = eax - MEM32(ebx);
    MEM32(edx) = eax;
    goto loc_0036FD6E;

loc_0036FD68: ;
    MEM32(edi) = MEM32(edi) & 0;
    MEM32(edx) = MEM32(edx) & 0;

loc_0036FD6E: ;
    POP32(esp, ebx);

loc_0036FD6F: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0036FD81; /* je: equal / zero */

loc_0036FD76: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0036FD81u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036FD81: ;
    eax = MEM32(ebp + -4);

loc_0036FD84: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_0036FD89
 * Original: 0x0036FD89 - 0x0036FDDA (81 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FD89(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036FD89: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036FD8Fu); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_0036FD8F: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0036FDB1; /* je: equal / zero */

loc_0036FD9B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036FDAA; /* je: equal / zero */

loc_0036FD9F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0036FDAAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036FDAA: ;
    eax = 0x80004005u;
    goto loc_0036FDD6;

loc_0036FDB1: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x0036FDC2u); RECOMP_ABI_CALL(0x00376C6Du, sub_00376C6D); /* call 0x00376C6D */

loc_0036FDC2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0036FDD3; /* je: equal / zero */

loc_0036FDC8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0036FDD3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036FDD3: ;
    eax = edi;
    POP32(esp, edi);

loc_0036FDD6: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036FDDA
 * Original: 0x0036FDDA - 0x0036FE18 (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FDDA(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036FDDA: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 4;
    MEM32(esi) = 0x3E1F28;
    MEM32(edi) = 0x3E1F18;
    if (TEST_Z(_fa, _fb)) goto loc_0036FDFE; /* je: equal / zero */

loc_0036FDF4: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x0036FDFAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036FDFA: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;

loc_0036FDFE: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036FE0F; /* je: equal / zero */

loc_0036FE05: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x0036FE0Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0036FE0B: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;

loc_0036FE0F: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0036F815(); return; /* tail jmp 0x0036F815 */

}

/**
 * sub_00370027
 * Original: 0x00370027 - 0x00370074 (77 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370027(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00370027: ;
    goto loc_0037006F;

    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037003Au); RECOMP_ABI_CALL(0x00373734u, sub_00373734); /* call 0x00373734 */

loc_0037003A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0037005C; /* jl: less (signed <) */

loc_00370040: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0037004B; /* jne: not equal / not zero */

loc_00370046: ;
    edi = 0x88780032u;

loc_0037004B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0037005C; /* jl: less (signed <) */

loc_0037004F: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x0037005Au); RECOMP_ABI_CALL(0x00374149u, sub_00374149); /* call 0x00374149 */

loc_0037005A: ;
    edi = eax;

loc_0037005C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037006B; /* je: equal / zero */

loc_00370060: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0037006Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0037006B: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0037006F: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00370035
 * Original: 0x00370035 - 0x00370074 (63 bytes, 23 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370035(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00370035: ;
    PUSH32(esp, 0x0037003Au); RECOMP_ABI_CALL(0x00373734u, sub_00373734); /* call 0x00373734 */

loc_0037003A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0037005C; /* jl: less (signed <) */

loc_00370040: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0037004B; /* jne: not equal / not zero */

loc_00370046: ;
    edi = 0x88780032u;

loc_0037004B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0037005C; /* jl: less (signed <) */

loc_0037004F: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x0037005Au); RECOMP_ABI_CALL(0x00374149u, sub_00374149); /* call 0x00374149 */

loc_0037005A: ;
    edi = eax;

loc_0037005C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037006B; /* je: equal / zero */

loc_00370060: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0037006Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0037006B: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00370074
 * Original: 0x00370074 - 0x003700C5 (81 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370074(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370074: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037007Au); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_0037007A: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0037009C; /* je: equal / zero */

loc_00370086: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370095; /* je: equal / zero */

loc_0037008A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00370095u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00370095: ;
    eax = 0x80004005u;
    goto loc_003700C1;

loc_0037009C: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x003700ADu); RECOMP_ABI_CALL(0x00374217u, sub_00374217); /* call 0x00374217 */

loc_003700AD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003700BE; /* je: equal / zero */

loc_003700B3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x003700BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003700BE: ;
    eax = edi;
    POP32(esp, edi);

loc_003700C1: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003700C5
 * Original: 0x003700C5 - 0x0037012F (106 bytes, 36 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003700C5(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003700C5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003700CEu); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_003700CE: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_003700F0; /* je: equal / zero */

loc_003700DA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003700E9; /* je: equal / zero */

loc_003700DE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x003700E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003700E9: ;
    eax = 0x80004005u;
    goto loc_0037012A;

loc_003700F0: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0037010F; /* je: equal / zero */

loc_003700FD: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037010Bu); RECOMP_ABI_CALL(0x00373B73u, sub_00373B73); /* call 0x00373B73 */

loc_0037010B: ;
    edi = eax;
    goto loc_00370118;

loc_0037010F: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00370116u); RECOMP_ABI_CALL(0x00373DA1u, sub_00373DA1); /* call 0x00373DA1 */

loc_00370116: ;
    edi = 0; /* xor self */

loc_00370118: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370127; /* je: equal / zero */

loc_0037011C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00370127u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00370127: ;
    eax = edi;
    POP32(esp, edi);

loc_0037012A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0037012F
 * Original: 0x0037012F - 0x00370410 (737 bytes, 261 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0037012F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0037012F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00370140u); RECOMP_ABI_CALL(0x0036F369u, sub_0036F369); /* call 0x0036F369 */

loc_00370140: ;
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx);
    esi = MEM32(ebp + 0xC);
    eax = eax | MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0037015C; /* je: equal / zero */

loc_00370154: ;
    eax = eax | 0xFFFF0000u;
    MEM32(ebp + 8) = eax;

loc_0037015C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x15200010 (32-bit) */
    edi = MEM32(ebp + 0x18);
    if (TEST_Z(_fa, _fb)) goto loc_003701BB; /* je: equal / zero */

loc_00370166: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003701AB; /* je: equal / zero */

loc_0037016C: ;
    fp_push(MEMF(esi + 0x68)); /* fld float */
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x58);
    eax = eax >> 2;
    eax = eax & 1;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esi + 0x54));
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    PUSH32(esp, MEM32(esi + 0x50));
    esp = esp - 0xC;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x38)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x3C)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x48); /* fmul dword ptr [esi + 0x48] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003701A6u); RECOMP_ABI_CALL(0x0036F461u, sub_0036F461); /* call 0x0036F461 */

loc_003701A6: ;
    eax = MEM32(ebp + -52);
    goto loc_003701B0;

loc_003701AB: ;
    eax = 0; /* xor self */
    MEM32(ebp + -52) = eax;

loc_003701B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003701BB; /* je: equal / zero */

loc_003701B5: ;
    MEM32(edi) = MEM32(edi) | 1;
    MEM32(edi + 4) = eax;

loc_003701BB: ;
    _fa = (uint32_t)(MEM16(ebp + 0xA)) & 0xFFFFu; _fb = (uint32_t)(0x4014) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + 0xA), 0x4014 (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003701F7; /* je: equal / zero */

loc_003701C3: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003701E7; /* je: equal / zero */

loc_003701C9: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esi + 0x34));
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, MEM32(esi + 0x20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003701E2u); RECOMP_ABI_CALL(0x0036F498u, sub_0036F498); /* call 0x0036F498 */

loc_003701E2: ;
    eax = MEM32(ebp + -48);
    goto loc_003701EC;

loc_003701E7: ;
    eax = 0; /* xor self */
    MEM32(ebp + -48) = eax;

loc_003701EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003701F7; /* je: equal / zero */

loc_003701F1: ;
    MEM32(edi) = MEM32(edi) | 2;
    MEM32(edi + 8) = eax;

loc_003701F7: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34800008) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 8), 0x34800008 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370260; /* je: equal / zero */

loc_00370200: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370243; /* je: equal / zero */

loc_00370206: ;
    fp_push(MEMF(esi + 0x78)); /* fld float */
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x58);
    eax = eax & 1;
    PUSH32(esp, eax);
    esp = esp - 0x10;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x74)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x38)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x44); /* fmul dword ptr [esi + 0x44] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037023Bu); RECOMP_ABI_CALL(0x0036F4B8u, sub_0036F4B8); /* call 0x0036F4B8 */

loc_0037023B: ;
    ecx = MEM32(ebp + -40);
    eax = MEM32(ebp + -44);
    goto loc_0037024D;

loc_00370243: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(ebp + -44) = eax;
    MEM32(ebp + -40) = ecx;

loc_0037024D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00370257; /* jne: not equal / not zero */

loc_00370252: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370260; /* je: equal / zero */

loc_00370257: ;
    MEM32(edi) = MEM32(edi) | 4;
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 0x10) = ecx;

loc_00370260: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(0x24) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xB), 0x24 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003702B3; /* je: equal / zero */

loc_00370266: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370296; /* je: equal / zero */

loc_0037026C: ;
    _fa = (uint32_t)(MEM8(esi + 0x58)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x58), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370296; /* je: equal / zero */

loc_00370272: ;
    fp_push(MEMF(esi + 0x78)); /* fld float */
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x74)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037028Eu); RECOMP_ABI_CALL(0x0036F4ECu, sub_0036F4EC); /* call 0x0036F4EC */

loc_0037028E: ;
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + -36);
    goto loc_003702A0;

loc_00370296: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -32) = ecx;

loc_003702A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003702AA; /* jne: not equal / not zero */

loc_003702A5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003702B3; /* je: equal / zero */

loc_003702AA: ;
    MEM32(edi) = MEM32(edi) | 8;
    MEM32(edi + 0x14) = eax;
    MEM32(edi + 0x18) = ecx;

loc_003702B3: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82800028u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 8), 0x82800028u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003702FD; /* je: equal / zero */

loc_003702BC: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003702ED; /* je: equal / zero */

loc_003702C2: ;
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    eax = ebp + -20;
    PUSH32(esp, eax);
    esp = esp - 0xC;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x40)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x4C); /* fmul dword ptr [esi + 0x4c] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x38)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x44); /* fmul dword ptr [esi + 0x44] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003702E8u); RECOMP_ABI_CALL(0x0036F50Eu, sub_0036F50E); /* call 0x0036F50E */

loc_003702E8: ;
    eax = MEM32(ebp + -20);
    goto loc_003702F2;

loc_003702ED: ;
    eax = 0; /* xor self */
    MEM32(ebp + -20) = eax;

loc_003702F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003702FD; /* je: equal / zero */

loc_003702F7: ;
    MEM32(edi) = MEM32(edi) | 0x20;
    MEM32(edi + 0x24) = eax;

loc_003702FD: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xB), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037034E; /* je: equal / zero */

loc_00370303: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370317; /* je: equal / zero */

loc_00370309: ;
    fp_push(MEMF(esi + 0x74)); /* fld float */
    eax = MEM32(esi + 0x78);
    MEMF(ebp + -16) = (float)fp_top(); /* fst */
    MEM32(ebp + -12) = eax;
    goto loc_00370321;

loc_00370317: ;
    fp_push(0.0); /* fldz */
    MEMF(ebp + -16) = (float)fp_top(); /* fst */
    fp_push(0.0); /* fldz */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */

loc_00370321: ;
    fp_push(MEMF(edi + 0x28)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0037033E; /* jp: parity */

loc_0037032F: ;
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    fp_push(MEMF(ebp + -12)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0037034C; /* jnp: not parity */

loc_0037033E: ;
    eax = MEM32(ebp + -12);
    MEMF(edi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi) = MEM32(edi) | 0x40;
    MEM32(edi + 0x2C) = eax;
    goto loc_0037034E;

loc_0037034C: ;
    fp_pop(); /* fstp st(0) */

loc_0037034E: ;
    eax = MEM32(ebp + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370401; /* je: equal / zero */

loc_0037035B: ;
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370401; /* je: equal / zero */

loc_00370366: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xB), 0x14 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0037037C; /* jne: not equal / not zero */

loc_0037036C: ;
    ebx = MEM32(eax);
    ebx = ebx | MEM32(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F0804) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x7F0804 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370401; /* je: equal / zero */

loc_0037037C: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003703BD; /* je: equal / zero */

loc_00370382: ;
    fp_push(MEMF(eax + 0x30)); /* fld float */
    edx = ebp + -4;
    PUSH32(esp, edx);
    edx = ebp + -8;
    PUSH32(esp, edx);
    edx = ebp + -24;
    PUSH32(esp, edx);
    edx = ebp + -28;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    esp = esp - 0xC;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003703AFu); RECOMP_ABI_CALL(0x00377055u, sub_00377055); /* call 0x00377055 */

loc_003703AF: ;
    _fa = (uint32_t)(MEM8(esi + 0x58)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x58), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003703C9; /* je: equal / zero */

loc_003703B5: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;
    goto loc_003703C9;

loc_003703BD: ;
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -24) = edx;
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -4) = edx;

loc_003703C9: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x1C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003703D9; /* jne: not equal / not zero */

loc_003703D1: ;
    ecx = MEM32(ebp + -24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003703E5; /* je: equal / zero */

loc_003703D9: ;
    MEM32(edi) = MEM32(edi) | 0x10;
    MEM32(edi + 0x1C) = eax;
    eax = MEM32(ebp + -24);
    MEM32(edi + 0x20) = eax;

loc_003703E5: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x30) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003703F5; /* jne: not equal / not zero */

loc_003703ED: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x34) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370401; /* je: equal / zero */

loc_003703F5: ;
    MEM8(edi) = MEM8(edi) | 0x80;
    MEM32(edi + 0x30) = eax;
    eax = MEM32(ebp + -4);
    MEM32(edi + 0x34) = eax;

loc_00370401: ;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00370409u); RECOMP_ABI_CALL(0x0036F38Eu, sub_0036F38E); /* call 0x0036F38E */

loc_00370409: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00370410
 * Original: 0x00370410 - 0x00370424 (20 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370410: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037041E; /* je: equal / zero */

loc_00370419: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0037041Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0037041E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00370424
 * Original: 0x00370424 - 0x00370438 (20 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370424(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00370424: ;
    MEM32(esp + 4) = MEM32(esp + 4) - 4;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x0036FE18u); return; /* manual tail jmp 0x0036FE18 */

    MEM32(esp + 4) = MEM32(esp + 4) - 4;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x0036FE5Fu); return; /* manual tail jmp 0x0036FE5F */

}

/**
 * sub_0037042E
 * Original: 0x0037042E - 0x00370438 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037042E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037042E: ;
    MEM32(esp + 4) = MEM32(esp + 4) - 4;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x0036FE5Fu); return; /* manual tail jmp 0x0036FE5F */

}

/**
 * sub_00370438
 * Original: 0x00370438 - 0x00370486 (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370438(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370438: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037043Eu); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_0037043E: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_00370460; /* je: equal / zero */

loc_0037044A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370459; /* je: equal / zero */

loc_0037044E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00370459u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00370459: ;
    eax = 0x80004005u;
    goto loc_00370482;

loc_00370460: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x0037046Eu); RECOMP_ABI_CALL(0x0036F87Bu, sub_0036F87B); /* call 0x0036F87B */

loc_0037046E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0037047F; /* je: equal / zero */

loc_00370474: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0037047Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0037047F: ;
    eax = edi;
    POP32(esp, edi);

loc_00370482: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00370486
 * Original: 0x00370486 - 0x003704D4 (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370486(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370486: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037048Cu); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_0037048C: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_003704AE; /* je: equal / zero */

loc_00370498: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003704A7; /* je: equal / zero */

loc_0037049C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x003704A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003704A7: ;
    eax = 0x80004005u;
    goto loc_003704D0;

loc_003704AE: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x003704BCu); RECOMP_ABI_CALL(0x0036F897u, sub_0036F897); /* call 0x0036F897 */

loc_003704BC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003704CD; /* je: equal / zero */

loc_003704C2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x003704CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003704CD: ;
    eax = edi;
    POP32(esp, edi);

loc_003704D0: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003704D4
 * Original: 0x003704D4 - 0x00370522 (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003704D4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003704D4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003704DAu); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_003704DA: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_003704FC; /* je: equal / zero */

loc_003704E6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003704F5; /* je: equal / zero */

loc_003704EA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x003704F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003704F5: ;
    eax = 0x80004005u;
    goto loc_0037051E;

loc_003704FC: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x0037050Au); RECOMP_ABI_CALL(0x0036F8AAu, sub_0036F8AA); /* call 0x0036F8AA */

loc_0037050A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0037051B; /* je: equal / zero */

loc_00370510: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0037051Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0037051B: ;
    eax = edi;
    POP32(esp, edi);

loc_0037051E: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00370522
 * Original: 0x00370522 - 0x00370570 (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370522(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370522: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00370528u); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_00370528: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0037054A; /* je: equal / zero */

loc_00370534: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370543; /* je: equal / zero */

loc_00370538: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00370543u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00370543: ;
    eax = 0x80004005u;
    goto loc_0037056C;

loc_0037054A: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x00370558u); RECOMP_ABI_CALL(0x0036F8CDu, sub_0036F8CD); /* call 0x0036F8CD */

loc_00370558: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00370569; /* je: equal / zero */

loc_0037055E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00370569u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00370569: ;
    eax = edi;
    POP32(esp, edi);

loc_0037056C: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00370570
 * Original: 0x00370570 - 0x003705C2 (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370570: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00370576u); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_00370576: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_00370598; /* je: equal / zero */

loc_00370582: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370591; /* je: equal / zero */

loc_00370586: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00370591u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00370591: ;
    eax = 0x80004005u;
    goto loc_003705BE;

loc_00370598: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    eax = eax + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003705AAu); RECOMP_ABI_CALL(0x0036F87Bu, sub_0036F87B); /* call 0x0036F87B */

loc_003705AA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003705BB; /* je: equal / zero */

loc_003705B0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x003705BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003705BB: ;
    eax = edi;
    POP32(esp, edi);

loc_003705BE: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003705C2
 * Original: 0x003705C2 - 0x00370614 (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003705C2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003705C2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003705C8u); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_003705C8: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_003705EA; /* je: equal / zero */

loc_003705D4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003705E3; /* je: equal / zero */

loc_003705D8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x003705E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003705E3: ;
    eax = 0x80004005u;
    goto loc_00370610;

loc_003705EA: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    eax = eax + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003705FCu); RECOMP_ABI_CALL(0x0036F8AAu, sub_0036F8AA); /* call 0x0036F8AA */

loc_003705FC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0037060D; /* je: equal / zero */

loc_00370602: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0037060Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0037060D: ;
    eax = edi;
    POP32(esp, edi);

loc_00370610: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00370614
 * Original: 0x00370614 - 0x00370666 (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370614(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370614: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037061Au); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_0037061A: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0037063C; /* je: equal / zero */

loc_00370626: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370635; /* je: equal / zero */

loc_0037062A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00370635u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00370635: ;
    eax = 0x80004005u;
    goto loc_00370662;

loc_0037063C: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    eax = eax + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037064Eu); RECOMP_ABI_CALL(0x0036F8CDu, sub_0036F8CD); /* call 0x0036F8CD */

loc_0037064E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0037065F; /* je: equal / zero */

loc_00370654: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0037065Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0037065F: ;
    eax = edi;
    POP32(esp, edi);

loc_00370662: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00370876
 * Original: 0x00370876 - 0x003708D6 (96 bytes, 38 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370876(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00370876: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x0037087Fu); RECOMP_ABI_CALL(0x0036F31Fu, sub_0036F31F); /* call 0x0036F31F */

loc_0037087F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_0037088F; /* je: equal / zero */

loc_00370884: ;
    ecx = eax;
    PUSH32(esp, 0x0037088Bu); RECOMP_ABI_CALL(0x00377407u, sub_00377407); /* call 0x00377407 */

loc_0037088B: ;
    edi = eax;
    goto loc_00370891;

loc_0037088F: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */

loc_00370891: ;
    esi = edi;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    esi = esi + 0x8007000Eu;
    if (((int32_t)esi < 0)) goto loc_003708C5; /* js: sign (negative) */

loc_003708A5: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, 0x003708B3u); RECOMP_ABI_CALL(0x00377184u, sub_00377184); /* call 0x00377184 */

loc_003708B3: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_003708C5; /* jl: less (signed <) */

loc_003708B9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003708BFu); RECOMP_ABI_CALL(0x00370410u, sub_00370410); /* call 0x00370410 */

loc_003708BF: ;
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = eax;

loc_003708C5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003708CF; /* je: equal / zero */

loc_003708C9: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003708CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003708CF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003708D6
 * Original: 0x003708D6 - 0x003708F1 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003708D6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003708D6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003708DEu); RECOMP_ABI_CALL(0x0036F6A4u, sub_0036F6A4); /* call 0x0036F6A4 */

loc_003708DE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003708EB; /* je: equal / zero */

loc_003708E5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003708EBu); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_003708EB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003708F1
 * Original: 0x003708F1 - 0x003709BC (203 bytes, 67 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003708F1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003708F1: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037092A; /* jne: not equal / not zero */

loc_003708FE: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 8), 0x200010 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037090E; /* je: equal / zero */

loc_00370907: ;
    eax = 0x37A49C;
    goto loc_0037092A;

loc_0037090E: ;
    _fa = (uint32_t)(MEM32(esi + 0xB0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xB0), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037091D; /* je: equal / zero */

loc_00370916: ;
    eax = 0x3791E4;
    goto loc_0037092A;

loc_0037091D: ;
    eax = ZX8(MEM8(esi + 0xE));
    eax = eax >> 1;
    eax = MEM32(eax * 4 + 0x3791D4);

loc_0037092A: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0037094D; /* jbe: below or equal (unsigned <=) */

loc_0037092E: ;
    PUSH32(esp, edi);

loc_0037092F: ;
    edx = MEM32(eax + 4);
    SET_LO8(edx, MEM8(edx + ecx * 8));
    MEM8(esi + ecx + 0x28) = LO8(edx);
    edi = MEM32(eax + 4);
    edi = MEM32(edi + ecx * 8 + 4);
    edx = ZX8(LO8(edx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + edx * 4 + 0x30) = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0037092F; /* jb: below (unsigned <) */

loc_0037094C: ;
    POP32(esp, edi);

loc_0037094D: ;
    eax = MEM32(eax);
    MEM32(esi + 0x24) = eax;
    eax = MEM32(esi + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370975; /* je: equal / zero */

loc_0037095C: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x82000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370975; /* je: equal / zero */

loc_00370968: ;
    PUSH32(esp, MEM32(eax + 0xD4));
    ecx = esi;
    PUSH32(esp, 0x00370975u); RECOMP_ABI_CALL(0x0036F7A7u, sub_0036F7A7); /* call 0x0036F7A7 */

loc_00370975: ;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003709B8; /* je: equal / zero */

loc_0037097B: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 5 (32-bit) */
    PUSH32(esp, 2);
    POP32(esp, edx);
    if (CMP_B(_fa, _fb)) goto loc_003709A1; /* jb: below (unsigned <) */

loc_00370984: ;
    _fa = (uint32_t)(MEM8(esi + 0x2C)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2C), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003709A1; /* jne: not equal / not zero */

loc_00370989: ;
    ecx = esi + 0xB4;
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM8(eax + 0x58)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x58), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003709B8; /* jne: not equal / not zero */

loc_00370996: ;
    MEM32(eax + 0x58) = MEM32(eax + 0x58) | edx;
    eax = MEM32(ecx);
    MEM8(eax + 3) = MEM8(eax + 3) | 4;
    goto loc_003709B8;

loc_003709A1: ;
    ecx = esi + 0xB4;
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM8(eax + 0x58)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x58), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003709B8; /* je: equal / zero */

loc_003709AE: ;
    MEM32(eax + 0x58) = MEM32(eax + 0x58) & 0xFFFFFFFDu;
    ecx = MEM32(ecx);
    MEM8(ecx + 3) = MEM8(ecx + 3) | 4;

loc_003709B8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003709BC
 * Original: 0x003709BC - 0x00370A8F (211 bytes, 70 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003709BC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_003709BC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003709D2u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_003709D2: ;
    ecx = MEM32(esi + 0xB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370A34; /* je: equal / zero */

loc_003709DC: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x82000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370A27; /* je: equal / zero */

loc_003709E8: ;
    eax = MEM32(eax + 0xD4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), edi (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00370A18; /* jbe: below or equal (unsigned <=) */

loc_003709F8: ;
    eax = MEM32(esi + 0x24);
    edx = esi + 0x28;
    MEM32(ebp + -4) = eax;
    PUSH32(esp, ebx);

loc_00370A02: ;
    SET_LO8(eax, MEM8(edx));
    ebx = ZX8(LO8(eax));
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370A11; /* je: equal / zero */

loc_00370A0C: ;
    MEM8(ebp + edi + -16) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00370A11: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00370A02; /* jne: not equal / not zero */

loc_00370A17: ;
    POP32(esp, ebx);

loc_00370A18: ;
    eax = MEM32(ebp + -16);
    MEM32(esi + 0x28) = eax;
    eax = MEM32(ebp + -12);
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x24) = edi;

loc_00370A27: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00370A2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00370A2D: ;
    MEM32(esi + 0xB0) = MEM32(esi + 0xB0) & 0;

loc_00370A34: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00370A3Cu); RECOMP_ABI_CALL(0x0037595Du, sub_0037595D); /* call 0x0037595D */

loc_00370A3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0xB0) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00370A81; /* je: equal / zero */

loc_00370A46: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x82000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370A81; /* je: equal / zero */

loc_00370A52: ;
    edi = MEM32(eax + 0xD4);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00370A64u); RECOMP_ABI_CALL(0x0036F7A7u, sub_0036F7A7); /* call 0x0036F7A7 */

loc_00370A64: ;
    eax = ZX8(MEM8(esi + 0xE));
    MEM32(ebp + 8) = eax;
    PUSH32(esp, ecx);
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00370A7Du); RECOMP_ABI_CALL(0x0036F3EBu, sub_0036F3EB); /* call 0x0036F3EB */

loc_00370A7D: ;
    MEM32(esi + edi * 4 + 0x30) = eax;

loc_00370A81: ;
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00370A89u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00370A89: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00370A8F
 * Original: 0x00370A8F - 0x00370AB9 (42 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370A8F(void)
{

loc_00370A8F: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    eax = esi + 0x14;
    MEM32(esi + 4) = 1;
    MEM32(esi) = 0x3E1EF8;
    MEM32(esi + 0x18) = eax;
    MEM32(eax) = eax;
    PUSH32(esp, 0x00370AB0u); RECOMP_ABI_CALL(0x0037595Du, sub_0037595D); /* call 0x0037595D */

loc_00370AB0: ;
    MEM32(esi + 8) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00370AB9
 * Original: 0x00370AB9 - 0x00370AD4 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370AB9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370AB9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00370AC1u); RECOMP_ABI_CALL(0x0036F815u, sub_0036F815); /* call 0x0036F815 */

loc_00370AC1: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370ACE; /* je: equal / zero */

loc_00370AC8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00370ACEu); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_00370ACE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00370AD4
 * Original: 0x00370AD4 - 0x00370B6B (151 bytes, 45 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370AD4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370AD4: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00370ADEu); RECOMP_ABI_CALL(0x0037595Du, sub_0037595D); /* call 0x0037595D */

loc_00370ADE: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x00370AEEu); RECOMP_ABI_CALL(0x0037595Du, sub_0037595D); /* call 0x0037595D */

loc_00370AEE: ;
    MEM32(esi + 0x10) = eax;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370B67; /* je: equal / zero */

loc_00370AF7: ;
    ecx = MEM32(esi + 8);
    eax = esi + 0x14;
    ecx = ecx + 0x10;
    MEM32(eax) = ecx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;
    eax = MEM32(0x37A6F8);
    edx = eax;
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    ecx = 0x4000000;
    if (CMP_EQ(_fa, _fb)) goto loc_00370B2D; /* je: equal / zero */

loc_00370B26: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370B49; /* je: equal / zero */

loc_00370B2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00370B49; /* js: sign (negative) */

loc_00370B31: ;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0xB4);
    MEM32(eax + 0x58) = MEM32(eax + 0x58) | 1;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0xB4);
    MEM32(eax) = MEM32(eax) | ecx;

loc_00370B49: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370B67; /* je: equal / zero */

loc_00370B52: ;
    eax = MEM32(eax + 0xB4);
    MEM32(eax + 0x58) = MEM32(eax + 0x58) | 4;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0xB4);
    MEM32(eax) = MEM32(eax) | ecx;

loc_00370B67: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00370B6B
 * Original: 0x00370B6B - 0x00370B8F (36 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370B6B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370B6B: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_NZ(_fa, _fb)) goto loc_00370B7E; /* jne: not equal / not zero */

loc_00370B78: ;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0x10);

loc_00370B7E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00370B84u); RECOMP_ABI_CALL(0x0036F611u, sub_0036F611); /* call 0x0036F611 */

loc_00370B84: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00370B8Bu); RECOMP_ABI_CALL(0x0036F862u, sub_0036F862); /* call 0x0036F862 */

loc_00370B8B: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00370B8F
 * Original: 0x00370B8F - 0x00370BAC (29 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370B8F(void)
{

loc_00370B8F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x00370BA0u); RECOMP_ABI_CALL(0x003708F1u, sub_003708F1); /* call 0x003708F1 */

loc_00370BA0: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x00370BA8u); RECOMP_ABI_CALL(0x00375B21u, sub_00375B21); /* call 0x00375B21 */

loc_00370BA8: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00370BAC
 * Original: 0x00370BAC - 0x00370BD0 (36 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370BAC(void)
{

loc_00370BAC: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xCC) = MEM32(ecx + 0xCC) & 0;
    MEM32(ecx + 0xC4) = eax;
    eax = MEM32(esp + 8);
    MEM32(ecx + 0xC8) = eax;
    MEM32(ecx + 0xD0) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00370BD0
 * Original: 0x00370BD0 - 0x00370BE8 (24 bytes, 8 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370BD0(void)
{

loc_00370BD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x00370BDCu); RECOMP_ABI_CALL(0x00370A8Fu, sub_00370A8F); /* call 0x00370A8F */

loc_00370BDC: ;
    MEM32(esi) = 0x3E1F08;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00370BE8
 * Original: 0x00370BE8 - 0x00370C03 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370BE8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370BE8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00370BF0u); RECOMP_ABI_CALL(0x0036F9BFu, sub_0036F9BF); /* call 0x0036F9BF */

loc_00370BF0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370BFD; /* je: equal / zero */

loc_00370BF7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00370BFDu); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_00370BFD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00370C03
 * Original: 0x00370C03 - 0x00370C1E (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370C03(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370C03: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00370C0Bu); RECOMP_ABI_CALL(0x0036FDDAu, sub_0036FDDA); /* call 0x0036FDDA */

loc_00370C0B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370C18; /* je: equal / zero */

loc_00370C12: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00370C18u); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_00370C18: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00370C1E
 * Original: 0x00370C1E - 0x00370C6C (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370C1E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370C1E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00370C24u); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_00370C24: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_00370C46; /* je: equal / zero */

loc_00370C30: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370C3F; /* je: equal / zero */

loc_00370C34: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00370C3Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00370C3F: ;
    eax = 0x80004005u;
    goto loc_00370C68;

loc_00370C46: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x00370C54u); RECOMP_ABI_CALL(0x00370B6Bu, sub_00370B6B); /* call 0x00370B6B */

loc_00370C54: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00370C65; /* je: equal / zero */

loc_00370C5A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00370C65u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00370C65: ;
    eax = edi;
    POP32(esp, edi);

loc_00370C68: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00370C6C
 * Original: 0x00370C6C - 0x00370CBA (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370C6C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370C6C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00370C72u); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_00370C72: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_00370C94; /* je: equal / zero */

loc_00370C7E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370C8D; /* je: equal / zero */

loc_00370C82: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00370C8Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00370C8D: ;
    eax = 0x80004005u;
    goto loc_00370CB6;

loc_00370C94: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x00370CA2u); RECOMP_ABI_CALL(0x00370B8Fu, sub_00370B8F); /* call 0x00370B8F */

loc_00370CA2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00370CB3; /* je: equal / zero */

loc_00370CA8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00370CB3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00370CB3: ;
    eax = edi;
    POP32(esp, edi);

loc_00370CB6: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00370CBA
 * Original: 0x00370CBA - 0x00370D0C (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370CBA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370CBA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00370CC0u); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_00370CC0: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_00370CE2; /* je: equal / zero */

loc_00370CCC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370CDB; /* je: equal / zero */

loc_00370CD0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00370CDBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00370CDB: ;
    eax = 0x80004005u;
    goto loc_00370D08;

loc_00370CE2: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    eax = eax + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00370CF4u); RECOMP_ABI_CALL(0x00370B8Fu, sub_00370B8F); /* call 0x00370B8F */

loc_00370CF4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00370D05; /* je: equal / zero */

loc_00370CFA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00370D05u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00370D05: ;
    eax = edi;
    POP32(esp, edi);

loc_00370D08: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00370D49
 * Original: 0x00370D49 - 0x00370E12 (201 bytes, 73 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00370D49(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370D49: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00370D53u); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_00370D53: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00370D7B; /* je: equal / zero */

loc_00370D62: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370D71; /* je: equal / zero */

loc_00370D66: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00370D71u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00370D71: ;
    eax = 0x80004005u;
    goto loc_00370E0E;

loc_00370D7B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00370D86u); RECOMP_ABI_CALL(0x0036F3CAu, sub_0036F3CA); /* call 0x0036F3CA */

loc_00370D86: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00370DF9; /* jne: not equal / not zero */

loc_00370D8D: ;
    esi = edi + 0x18;
    PUSH32(esp, ebx);
    ebx = esi;
    MEM32(ebp + 8) = 4;

loc_00370D9A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00370DA1u); RECOMP_ICALL_SAFE(0x0037073Du, _icall_esp); /* manual call 0x0037073D */
    }

loc_00370DA1: ;
    ebx = ebx + 4;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00370D9A; /* jne: not equal / not zero */

loc_00370DA9: ;
    ebx = 0; /* xor self */

loc_00370DAB: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00370DB1u); RECOMP_ABI_CALL(0x0036F751u, sub_0036F751); /* call 0x0036F751 */

loc_00370DB1: ;
    eax = MEM32(esi);
    ecx = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00370DBDu); RECOMP_ICALL_SAFE(0x00370799u, _icall_esp); /* manual call 0x00370799 */
    }

loc_00370DBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00370DC7; /* jl: less (signed <) */

loc_00370DC1: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00370DAB; /* jne: not equal / not zero */

loc_00370DC7: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370DD6; /* je: equal / zero */

loc_00370DCD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00370DD3u); RECOMP_ICALL_SAFE(0x0036F5DCu, _icall_esp); /* manual call 0x0036F5DC */
    }

loc_00370DD3: ;
    MEM32(esi) = MEM32(esi) & 0;

loc_00370DD6: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00370DAB; /* jb: below (unsigned <) */

loc_00370DDF: ;
    eax = MEM32(edi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00370DF1; /* je: equal / zero */

loc_00370DE7: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00370DEDu); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_00370DED: ;
    MEM32(edi + 0x28) = MEM32(edi + 0x28) & 0;

loc_00370DF1: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00370DF7u); RECOMP_ABI_CALL(0x0036F3CAu, sub_0036F3CA); /* call 0x0036F3CA */

loc_00370DF7: ;
    esi = eax;

loc_00370DF9: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370E0A; /* je: equal / zero */

loc_00370DFF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00370E0Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00370E0A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);

loc_00370E0E: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00370E12
 * Original: 0x00370E12 - 0x00370E5F (77 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370E12(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370E12: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0xB0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xB0), 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi) = 0x3E1EE8;
    if (CMP_EQ(_fa, _fb)) goto loc_00370E2C; /* je: equal / zero */

loc_00370E25: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00370E2Cu); RECOMP_ABI_CALL(0x003709BCu, sub_003709BC); /* call 0x003709BC */

loc_00370E2C: ;
    edi = esi + 0xB4;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370E41; /* je: equal / zero */

loc_00370E38: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00370E3Eu); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_00370E3E: ;
    MEM32(edi) = MEM32(edi) & 0;

loc_00370E41: ;
    edi = esi + 0xB8;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370E56; /* je: equal / zero */

loc_00370E4D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00370E53u); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_00370E53: ;
    MEM32(edi) = MEM32(edi) & 0;

loc_00370E56: ;
    POP32(esp, edi);
    MEM32(esi) = 0x3E1EBC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00370E5F
 * Original: 0x00370E5F - 0x00370EE5 (134 bytes, 55 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00370E5F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370E5F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00370E78u); RECOMP_ABI_CALL(0x00372032u, sub_00372032); /* call 0x00372032 */

loc_00370E78: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370ED1; /* je: equal / zero */

loc_00370E7E: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 8), 0x200010 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00370ED1; /* jne: not equal / not zero */

loc_00370E87: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370ED1; /* je: equal / zero */

loc_00370E8C: ;
    eax = ebp + -72;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = eax;

loc_00370E95: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00370EC3; /* jae: above or equal (unsigned >=) */

loc_00370E9D: ;
    ecx = edi;
    edx = ebp + eax * 8 + -72;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00370EA8u); RECOMP_ABI_CALL(0x0036F434u, sub_0036F434); /* call 0x0036F434 */

loc_00370EA8: ;
    MEM32(edx) = eax;
    eax = MEM32(ebp + -8);
    MEM32(ebp + eax * 8 + -68) = ebx;
    ecx = MEM32(edx);
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    eax = ~eax;
    edi = edi & eax;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00370E95; /* jne: not equal / not zero */

loc_00370EC3: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00370ECEu); RECOMP_ABI_CALL(0x003708F1u, sub_003708F1); /* call 0x003708F1 */

loc_00370ECE: ;
    ebx = 0; /* xor self */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00370ED1: ;
    PUSH32(esp, MEM32(esi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00370ED9u); RECOMP_ABI_CALL(0x0036F611u, sub_0036F611); /* call 0x0036F611 */

loc_00370ED9: ;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00370EE5
 * Original: 0x00370EE5 - 0x00370F29 (68 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370EE5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370EE5: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x00370EF8u); RECOMP_ABI_CALL(0x00370E5Fu, sub_00370E5F); /* call 0x00370E5F */

loc_00370EF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00370F05; /* jne: not equal / not zero */

loc_00370EFC: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00370F05u); RECOMP_ABI_CALL(0x003708F1u, sub_003708F1); /* call 0x003708F1 */

loc_00370F05: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00370F0Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00370F0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00370F25; /* jl: less (signed <) */

loc_00370F11: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x00370F19u); RECOMP_ABI_CALL(0x00375B21u, sub_00375B21); /* call 0x00375B21 */

loc_00370F19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00370F25; /* jl: less (signed <) */

loc_00370F1D: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x00370F25u); RECOMP_ABI_CALL(0x00375C7Au, sub_00375C7A); /* call 0x00375C7A */

loc_00370F25: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00370F29
 * Original: 0x00370F29 - 0x00370FB5 (140 bytes, 49 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00370F29(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00370F29: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    edi = 0x80000000u;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 8), edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + -4) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_00370F51; /* jne: not equal / not zero */

loc_00370F41: ;
    eax = MEM32(esi + 0xBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00370F57; /* je: equal / zero */

loc_00370F4B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00370F51u); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_00370F51: ;
    MEM32(esi + 0xBC) = ebx;

loc_00370F57: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0xC0) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00370F9D; /* je: equal / zero */

loc_00370F64: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00370F76; /* je: equal / zero */

loc_00370F6B: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 8) = MEM32(esi + 8) | edi;
    MEM32(esi + 0xBC) = ecx;
    goto loc_00370F9D;

loc_00370F76: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0x7F;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x61645344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00370F86u); RECOMP_ABI_CALL(0x00371C5Cu, sub_00371C5C); /* call 0x00371C5C */

loc_00370F86: ;
    MEM32(esi + 0xBC) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8FFF2;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    eax = eax + 0x8007000Eu;
    MEM32(ebp + -4) = eax;

loc_00370F9D: ;
    PUSH32(esp, MEM32(esi + 0xC0));
    ecx = esi;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00370FABu); RECOMP_ABI_CALL(0x00370BACu, sub_00370BAC); /* call 0x00370BAC */

loc_00370FAB: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00370FB5
 * Original: 0x00370FB5 - 0x00371063 (174 bytes, 60 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00370FB5(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370FB5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00370FCC; /* jne: not equal / not zero */

loc_00370FC4: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edi (32-bit) */
    MEM32(ebp + 0xC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00370FD3; /* je: equal / zero */

loc_00370FCC: ;
    MEM32(ebp + 0xC) = 1;

loc_00370FD3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00370FD8u); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_00370FD8: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), edi (32-bit) */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00370FFC; /* je: equal / zero */

loc_00370FE6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370FF5; /* je: equal / zero */

loc_00370FEA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00370FF5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00370FF5: ;
    eax = 0x80004005u;
    goto loc_0037105D;

loc_00370FFC: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xBC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0xBC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00371016; /* jne: not equal / not zero */

loc_0037100B: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xC0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371049; /* je: equal / zero */

loc_00371016: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(esi + 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00371021u); RECOMP_ABI_CALL(0x00376ED7u, sub_00376ED7); /* call 0x00376ED7 */

loc_00371021: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00371049; /* jl: less (signed <) */

loc_00371027: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00371033u); RECOMP_ABI_CALL(0x00370F29u, sub_00370F29); /* call 0x00370F29 */

loc_00371033: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00371049; /* jl: less (signed <) */

loc_00371039: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371049; /* je: equal / zero */

loc_0037103F: ;
    ecx = MEM32(esi + 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00371047u); RECOMP_ABI_CALL(0x00376D87u, sub_00376D87); /* call 0x00376D87 */

loc_00371047: ;
    edi = eax;

loc_00371049: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0037105B; /* je: equal / zero */

loc_00371050: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0037105Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0037105B: ;
    eax = edi;

loc_0037105D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00371063
 * Original: 0x00371063 - 0x00371088 (37 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371063(void)
{

loc_00371063: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    edi = esi + 4;
    ecx = edi;
    PUSH32(esp, 0x00371075u); RECOMP_ABI_CALL(0x00370A8Fu, sub_00370A8F); /* call 0x00370A8F */

loc_00371075: ;
    MEM32(edi) = 0x3E1F18;
    POP32(esp, edi);
    MEM32(esi) = 0x3E1F28;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00371088
 * Original: 0x00371088 - 0x003712C8 (576 bytes, 216 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00371088(void)
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

loc_00371088: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    esp = esp - 0xD4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp + 0x78;
    PUSH32(esp, 0x0037109Du); RECOMP_ABI_CALL(0x0036F369u, sub_0036F369); /* call 0x0036F369 */

loc_0037109D: ;
    esi = MEM32(ebp + 0x78);
    ebx = MEM32(ebp + 0x7C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(ebp + 0x6C) = eax;
    MEM32(ebp + 0x68) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003710BD; /* je: equal / zero */

loc_003710B2: ;
    eax = eax | MEM32(ebx);
    ecx = ecx | MEM32(ebx + 4);
    MEM32(ebp + 0x6C) = eax;
    MEM32(ebp + 0x68) = ecx;

loc_003710BD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_003710C7; /* jne: not equal / not zero */

loc_003710C2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003710FC; /* jne: not equal / not zero */

loc_003710C7: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003710D8u); RECOMP_ABI_CALL(0x00372137u, sub_00372137); /* call 0x00372137 */

loc_003710D8: ;
    eax = esi + 0x44;
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = eax;
    esi = ebp + -32;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((edx == 0)) goto loc_003710F5; /* je: equal / zero */

loc_003710E9: ;
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) | 0x40;
    esi = ebp + -32;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_003710F5: ;
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) | 0x40;
    esi = MEM32(ebp + 0x78);

loc_003710FC: ;
    eax = MEM32(ebp + 0x6C);
    eax = eax & 0x400000;
    if ((eax == 0)) goto loc_00371117; /* je: equal / zero */

loc_00371106: ;
    _fa = (uint32_t)(MEM32(ebx + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371114; /* je: equal / zero */

loc_0037110C: ;
    MEM16(ebp + 0x6E) = MEM16(ebp + 0x6E) | 0x7FF;
    goto loc_00371117;

loc_00371114: ;
    MEM32(ebp + 0x6C) = eax;

loc_00371117: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037128A; /* je: equal / zero */

loc_0037111F: ;
    ecx = MEM32(ebx + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037128A; /* je: equal / zero */

loc_0037112B: ;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x410001) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x6C), 0x410001 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00371142; /* jne: not equal / not zero */

loc_00371134: ;
    edx = MEM32(ebp + 0x68);
    eax = 0x18000000;
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371196; /* je: equal / zero */

loc_00371142: ;
    eax = ebp + 0x54;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + 0x48;
    PUSH32(esp, eax);
    eax = ebx + 8;
    PUSH32(esp, eax);
    esi = esi + 8;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x37ADAC); PUSH32(esp, 0x00371159u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00371159: ;
    eax = ebx + 0x5C;
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = eax;
    esi = ebp + 0x48;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((edx == 0)) goto loc_00371176; /* je: equal / zero */

loc_0037116A: ;
    MEM8(ebp + 0x6F) = MEM8(ebp + 0x6F) | 8;
    esi = ebp + 0x48;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_00371176: ;
    fp_push(MEMF(ebx + 0x68)); /* fld float */
    fp_push(MEMF(ebp + 0x54)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0037118F; /* jnp: not parity */

loc_00371185: ;
    eax = MEM32(ebp + 0x54);
    MEM8(ebp + 0x6F) = MEM8(ebp + 0x6F) | 0x10;
    MEM32(ebx + 0x68) = eax;

loc_0037118F: ;
    MEM8(ebp + 0x6B) = MEM8(ebp + 0x6B) | 0x18;
    esi = MEM32(ebp + 0x78);

loc_00371196: ;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18400044) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x6C), 0x18400044 (32-bit) */
    edi = 0x20000000;
    if (TEST_NZ(_fa, _fb)) goto loc_003711A9; /* jne: not equal / not zero */

loc_003711A4: ;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x68), edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00371200; /* jne: not equal / not zero */

loc_003711A9: ;
    fp_push(MEMF(ebx + 0x68)); /* fld float */
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    eax = ebp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebx + 0x5C;
    PUSH32(esp, eax);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x40));
    PUSH32(esp, 0x003711D0u); RECOMP_ABI_CALL(0x0036F438u, sub_0036F438); /* call 0x0036F438 */

loc_003711D0: ;
    fp_push(MEMF(ebx + 0x74)); /* fld float */
    fp_push(MEMF(ebp + 0x60)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003711EE; /* jp: parity */

loc_003711DF: ;
    fp_push(MEMF(ebx + 0x78)); /* fld float */
    fp_push(MEMF(ebp + 0x64)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003711FD; /* jnp: not parity */

loc_003711EE: ;
    eax = MEM32(ebp + 0x60);
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) | edi;
    MEM32(ebx + 0x74) = eax;
    eax = MEM32(ebp + 0x64);
    MEM32(ebx + 0x78) = eax;

loc_003711FD: ;
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) | edi;

loc_00371200: ;
    _fa = (uint32_t)(MEM16(ebp + 0x6E)) & 0xFFFFu; _fb = (uint32_t)(0x808) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + 0x6E), 0x808 (16-bit) */
    edi = 0x40000000;
    if (TEST_NZ(_fa, _fb)) goto loc_00371212; /* jne: not equal / not zero */

loc_0037120D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x68), edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0037123F; /* jne: not equal / not zero */

loc_00371212: ;
    eax = ebp + 0x5C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebx + 0x5C;
    PUSH32(esp, eax);
    eax = ebx + 0x28;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x37ADB4); PUSH32(esp, 0x00371224u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00371224: ;
    fp_push(MEMF(ebx + 0x70)); /* fld float */
    fp_push(MEMF(ebp + 0x5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0037123C; /* jnp: not parity */

loc_00371233: ;
    eax = MEM32(ebp + 0x5C);
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) | edi;
    MEM32(ebx + 0x70) = eax;

loc_0037123C: ;
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) | edi;

loc_0037123F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8420002) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x6C), 0x8420002 (32-bit) */
    edi = 0x80000000u;
    if (TEST_NZ(_fa, _fb)) goto loc_00371256; /* jne: not equal / not zero */

loc_0037124D: ;
    eax = MEM32(ebp + 0x68);
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037128A; /* je: equal / zero */

loc_00371256: ;
    eax = ebp + 0x58;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebx + 0x5C;
    PUSH32(esp, eax);
    eax = ebx + 0x14;
    PUSH32(esp, eax);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x40));
    { uint32_t _icall_target = MEM32(0x37ADB8); PUSH32(esp, 0x0037126Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0037126F: ;
    fp_push(MEMF(ebx + 0x6C)); /* fld float */
    fp_push(MEMF(ebp + 0x58)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00371287; /* jnp: not parity */

loc_0037127E: ;
    eax = MEM32(ebp + 0x58);
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) | edi;
    MEM32(ebx + 0x6C) = eax;

loc_00371287: ;
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) | edi;

loc_0037128A: ;
    ecx = MEM32(ebp + 0x6C);
    eax = ecx;
    eax = eax & 0x7F;
    POP32(esp, edi);
    if ((eax == 0)) goto loc_00371297; /* je: equal / zero */

loc_00371295: ;
    MEM32(esi) = eax;

loc_00371297: ;
    eax = MEM32(ebp + 0x68);
    eax = eax & 0x7F;
    if ((eax == 0)) goto loc_003712A2; /* je: equal / zero */

loc_0037129F: ;
    MEM32(esi + 4) = eax;

loc_003712A2: ;
    eax = 0xFFFF0000u;
    ecx = ecx & eax;
    if ((ecx == 0)) goto loc_003712AD; /* je: equal / zero */

loc_003712AB: ;
    MEM32(ebx) = ecx;

loc_003712AD: ;
    ecx = MEM32(ebp + 0x68);
    ecx = ecx & eax;
    if ((ecx == 0)) goto loc_003712B7; /* je: equal / zero */

loc_003712B4: ;
    MEM32(ebx + 4) = ecx;

loc_003712B7: ;
    ecx = ebp + 0x78;
    PUSH32(esp, 0x003712BFu); RECOMP_ABI_CALL(0x0036F38Eu, sub_0036F38E); /* call 0x0036F38E */

loc_003712BF: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    ebp = ebp + 0x70;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003712C8
 * Original: 0x003712C8 - 0x00371316 (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003712C8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003712C8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003712CEu); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_003712CE: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_003712F0; /* je: equal / zero */

loc_003712DA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003712E9; /* je: equal / zero */

loc_003712DE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x003712E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003712E9: ;
    eax = 0x80004005u;
    goto loc_00371312;

loc_003712F0: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x003712FEu); RECOMP_ABI_CALL(0x00370EE5u, sub_00370EE5); /* call 0x00370EE5 */

loc_003712FE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0037130F; /* je: equal / zero */

loc_00371304: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0037130Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0037130F: ;
    eax = edi;
    POP32(esp, edi);

loc_00371312: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00371316
 * Original: 0x00371316 - 0x00371368 (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371316(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371316: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037131Cu); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_0037131C: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0037133E; /* je: equal / zero */

loc_00371328: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00371337; /* je: equal / zero */

loc_0037132C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00371337u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00371337: ;
    eax = 0x80004005u;
    goto loc_00371364;

loc_0037133E: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    eax = eax + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00371350u); RECOMP_ABI_CALL(0x00370EE5u, sub_00370EE5); /* call 0x00370EE5 */

loc_00371350: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00371361; /* je: equal / zero */

loc_00371356: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00371361u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00371361: ;
    eax = edi;
    POP32(esp, edi);

loc_00371364: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003713A9
 * Original: 0x003713A9 - 0x00371438 (143 bytes, 51 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003713A9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003713A9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0xF);
    POP32(esp, ecx);
    PUSH32(esp, 0x3F);
    POP32(esp, ebp);
    MEM32(ebx + 4) = 1;
    MEM32(ebx) = 0x3E1F64;
    edi = ebx + 0x38;
    esi = 0x37A3EC;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    eax = ebx + 0x80;
    edx = 0xFFF;
    PUSH32(esp, 0xC);
    MEM32(ebx + 0x30) = ebp;
    MEM32(eax) = edx;
    edi = ebx + 0x84;
    POP32(esp, ecx);
    esi = 0x37A3B8;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM32(ebx + 0x30) = ebp;
    MEM32(eax) = edx;
    eax = MEM32(0x37A6FC);
    ecx = eax;
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0037140A; /* ja: above (unsigned >) */

loc_00371403: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFC0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFC0000u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037140F; /* je: equal / zero */

loc_0037140A: ;
    PUSH32(esp, 0x0037140Fu); RECOMP_ABI_CALL(0x0019ECD3u, sub_0019ECD3); /* call 0x0019ECD3 */

loc_0037140F: ;
    MEM32(0x37A6F8) = eax;
    PUSH32(esp, 7);
    POP32(esp, ecx);
    edi = ebx + 0x10;
    eax = 0x1010101;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    PUSH32(esp, 0);
    ecx = ebx;
    MEM8(ebx + 0x2F) = 0;
    PUSH32(esp, 0x00371431u); RECOMP_ABI_CALL(0x0036F665u, sub_0036F665); /* call 0x0036F665 */

loc_00371431: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00371438
 * Original: 0x00371438 - 0x00371454 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371438(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371438: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3E1EBC;
    if (TEST_Z(_fa, _fb)) goto loc_0037144E; /* je: equal / zero */

loc_00371448: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037144Eu); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_0037144E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00371454
 * Original: 0x00371454 - 0x0037146F (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371454(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371454: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0037145Cu); RECOMP_ABI_CALL(0x00370E12u, sub_00370E12); /* call 0x00370E12 */

loc_0037145C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00371469; /* je: equal / zero */

loc_00371463: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00371469u); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_00371469: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037146F
 * Original: 0x0037146F - 0x00371571 (258 bytes, 79 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037146F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037146F: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x182000 (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebx + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00371488; /* je: equal / zero */

loc_00371483: ;
    MEM32(ebx + 0x20) = ebp;
    goto loc_00371496;

loc_00371488: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x200010 (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00371483; /* jne: not equal / not zero */

loc_0037148F: ;
    MEM32(ebx + 0x20) = 0x258;

loc_00371496: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00371509; /* je: equal / zero */

loc_0037149A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA4);
    PUSH32(esp, 0x61645344);
    PUSH32(esp, 0x003714ABu); RECOMP_ABI_CALL(0x00371C5Cu, sub_00371C5C); /* call 0x00371C5C */

loc_003714AB: ;
    ebp = eax;
    _cf = (int)((ebp) != 0);
    ebp = (uint32_t)(-(int32_t)ebp);
    ebp = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    ebp = ebp & 0x7FF8FFF2;
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    ebp = ebp + 0x8007000Eu;
    MEM32(ebx + 0xB4) = eax;
    if (((int32_t)ebp < 0)) goto loc_0037156A; /* js: sign (negative) */

loc_003714C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x12);
    POP32(esp, ecx);
    edi = eax + 8;
    esi = 0x37A454;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    edi = MEM32(ebx + 0xB4);
    PUSH32(esp, 9);
    POP32(esp, ecx);
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x80)) >> 32) & 1);
    edi = edi + 0x80;
    esi = 0x37A428;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    eax = MEM32(ebx + 0xB4);
    MEM32(eax) = 0x7FF0000;
    eax = MEM32(ebx + 0xB4);
    POP32(esp, edi);
    MEM32(eax + 0x7C) = 0x7F0000;
    POP32(esp, esi);

loc_00371509: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 8), 0x400010 (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0037153A; /* je: equal / zero */

loc_00371512: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x61645344);
    PUSH32(esp, 0x00371520u); RECOMP_ABI_CALL(0x00371C5Cu, sub_00371C5C); /* call 0x00371C5C */

loc_00371520: ;
    MEM32(ebx + 0xB8) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8FFF2;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    eax = eax + 0x8007000Eu;
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0xB) = MEM8(ebx + 0xB) | 1;
    ebp = eax;

loc_0037153A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_0037156A; /* jl: less (signed <) */

loc_0037153E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = ebx;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x00371553u); RECOMP_ABI_CALL(0x00370E5Fu, sub_00370E5F); /* call 0x00370E5F */

loc_00371553: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00371562; /* jne: not equal / not zero */

loc_00371557: ;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = ebx;
    PUSH32(esp, 0x00371562u); RECOMP_ABI_CALL(0x003708F1u, sub_003708F1); /* call 0x003708F1 */

loc_00371562: ;
    eax = MEM32(ebx + 0x20);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    MEM32(ebx + 0x1C) = eax;

loc_0037156A: ;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00371571
 * Original: 0x00371571 - 0x00371596 (37 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371571(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00371571: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0);
    MEM32(esi) = 0x3E1F44;
    PUSH32(esp, 0x00371583u); RECOMP_ABI_CALL(0x00370F29u, sub_00370F29); /* call 0x00370F29 */

loc_00371583: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0037158Eu); RECOMP_ABI_CALL(0x0036F8EAu, sub_0036F8EA); /* call 0x0036F8EA */

loc_0037158E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00370E12(); return; /* tail jmp 0x00370E12 */

}

/**
 * sub_00371596
 * Original: 0x00371596 - 0x003715FB (101 bytes, 35 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371596(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371596: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x182000 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0x3791C0;
    if (TEST_NZ(_fa, _fb)) goto loc_003715B0; /* jne: not equal / not zero */

loc_003715AD: ;
    ecx = MEM32(esi + 0xC);

loc_003715B0: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003715BCu); RECOMP_ABI_CALL(0x0037146Fu, sub_0037146F); /* call 0x0037146F */

loc_003715BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003715F6; /* jl: less (signed <) */

loc_003715C0: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x180000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x180000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003715D6; /* je: equal / zero */

loc_003715CB: ;
    ecx = MEM32(esi + 0x14);
    MEM32(edi + 0xD4) = ecx;
    goto loc_003715E5;

loc_003715D6: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003715E5; /* je: equal / zero */

loc_003715DB: ;
    MEM32(edi + 0xD4) = 0x1F;

loc_003715E5: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003715F6; /* je: equal / zero */

loc_003715EC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x003715F6u); RECOMP_ABI_CALL(0x00370F29u, sub_00370F29); /* call 0x00370F29 */

loc_003715F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003715FB
 * Original: 0x003715FB - 0x003716E2 (231 bytes, 80 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003715FB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003715FB: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00371601u); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_00371601: ;
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = ZX8(LO8(eax));
    MEM32(esp) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00371629; /* je: equal / zero */

loc_00371610: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0037161F; /* je: equal / zero */

loc_00371614: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0037161Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0037161F: ;
    eax = 0x80004005u;
    goto loc_003716DE;

loc_00371629: ;
    PUSH32(esp, 0xE0);
    PUSH32(esp, 0x00371633u); RECOMP_ABI_CALL(0x0036F31Fu, sub_0036F31F); /* call 0x0036F31F */

loc_00371633: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_00371649; /* je: equal / zero */

loc_00371638: ;
    MEM32(eax + 4) = 1;
    MEM32(eax) = 0x3E1F44;
    ecx = eax;
    goto loc_0037164B;

loc_00371649: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */

loc_0037164B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebp = 0x7FF8FFF2;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _cf = 0; /* logical op clears CF */
    esi = esi & ebp;
    ebx = 0x8007000Eu;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    MEM32(edi + 0x1C) = ecx;
    if (((int32_t)esi < 0)) goto loc_003716C6; /* js: sign (negative) */

loc_0037166C: ;
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, 0x00371675u); RECOMP_ABI_CALL(0x00371596u, sub_00371596); /* call 0x00371596 */

loc_00371675: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_003716C6; /* jl: less (signed <) */

loc_0037167B: ;
    PUSH32(esp, 0x158);
    PUSH32(esp, 0x00371685u); RECOMP_ABI_CALL(0x0036F31Fu, sub_0036F31F); /* call 0x0036F31F */

loc_00371685: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_0037169C; /* je: equal / zero */

loc_0037168A: ;
    PUSH32(esp, MEM32(edi + 0x1C));
    ecx = MEM32(edi + 8);
    PUSH32(esp, MEM32(ecx + 0xC));
    ecx = eax;
    PUSH32(esp, 0x0037169Au); RECOMP_ABI_CALL(0x0037690Fu, sub_0037690F); /* call 0x0037690F */

loc_0037169A: ;
    goto loc_0037169E;

loc_0037169C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_0037169E: ;
    esi = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    esi = esi & ebp;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    MEM32(edi + 0x20) = eax;
    if (((int32_t)esi < 0)) goto loc_003716C6; /* js: sign (negative) */

loc_003716AD: ;
    ecx = eax;
    PUSH32(esp, 0x003716B4u); RECOMP_ABI_CALL(0x00376D63u, sub_00376D63); /* call 0x00376D63 */

loc_003716B4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_003716C6; /* jl: less (signed <) */

loc_003716BA: ;
    PUSH32(esp, MEM32(edi + 0x1C));
    PUSH32(esp, MEM32(edi + 0x20));
    PUSH32(esp, edi);
    PUSH32(esp, 0x003716C6u); RECOMP_ABI_CALL(0x00370AD4u, sub_00370AD4); /* call 0x00370AD4 */

loc_003716C6: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003716D8; /* je: equal / zero */

loc_003716CD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x003716D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003716D8: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003716DE: ;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003716E2
 * Original: 0x003716E2 - 0x00371703 (33 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003716E2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003716E2: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3E1F54;
    PUSH32(esp, 0x003716F0u); RECOMP_ABI_CALL(0x00370E12u, sub_00370E12); /* call 0x00370E12 */

loc_003716F0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003716FD; /* je: equal / zero */

loc_003716F7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003716FDu); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_003716FD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00371703
 * Original: 0x00371703 - 0x0037173C (57 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371703(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371703: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x14));
    edi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x00371718u); RECOMP_ABI_CALL(0x0037146Fu, sub_0037146F); /* call 0x0037146F */

loc_00371718: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00371737; /* jl: less (signed <) */

loc_0037171C: ;
    ecx = MEM32(esi + 4);
    MEM32(edi + 0xBC) = ecx;
    ecx = MEM32(esi + 0xC);
    MEM32(edi + 0xC0) = ecx;
    ecx = MEM32(esi + 0x10);
    MEM32(edi + 0xC4) = ecx;

loc_00371737: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037173C
 * Original: 0x0037173C - 0x003717E6 (170 bytes, 61 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037173C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0037173C: ;
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0x00371746u); RECOMP_ABI_CALL(0x0036F31Fu, sub_0036F31F); /* call 0x0036F31F */

loc_00371746: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_0037175C; /* je: equal / zero */

loc_0037174B: ;
    MEM32(eax + 4) = 1;
    MEM32(eax) = 0x3E1F54;
    ecx = eax;
    goto loc_0037175E;

loc_0037175C: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */

loc_0037175E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    ebx = 0x8007000Eu;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    MEM32(edi + 0x20) = ecx;
    if (((int32_t)esi < 0)) goto loc_003717DE; /* js: sign (negative) */

loc_0037177D: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x00371786u); RECOMP_ABI_CALL(0x00371703u, sub_00371703); /* call 0x00371703 */

loc_00371786: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_003717DE; /* jl: less (signed <) */

loc_0037178C: ;
    PUSH32(esp, 0x198);
    PUSH32(esp, 0x00371796u); RECOMP_ABI_CALL(0x0036F31Fu, sub_0036F31F); /* call 0x0036F31F */

loc_00371796: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_003717AD; /* je: equal / zero */

loc_0037179B: ;
    PUSH32(esp, MEM32(edi + 0x20));
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, MEM32(ecx + 0xC));
    ecx = eax;
    PUSH32(esp, 0x003717ABu); RECOMP_ABI_CALL(0x00373AC8u, sub_00373AC8); /* call 0x00373AC8 */

loc_003717AB: ;
    goto loc_003717AF;

loc_003717AD: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_003717AF: ;
    esi = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    MEM32(edi + 0x24) = eax;
    if (((int32_t)esi < 0)) goto loc_003717DE; /* js: sign (negative) */

loc_003717C2: ;
    ecx = eax;
    PUSH32(esp, 0x003717C9u); RECOMP_ABI_CALL(0x0037361Bu, sub_0037361B); /* call 0x0037361B */

loc_003717C9: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_003717DE; /* jl: less (signed <) */

loc_003717CF: ;
    PUSH32(esp, MEM32(edi + 0x20));
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    PUSH32(esp, MEM32(edi + 0x20));
    PUSH32(esp, edi);
    PUSH32(esp, 0x003717DEu); RECOMP_ABI_CALL(0x00370AD4u, sub_00370AD4); /* call 0x00370AD4 */

loc_003717DE: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003717E6
 * Original: 0x003717E6 - 0x00371882 (156 bytes, 57 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003717E6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003717E6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003717EDu); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_003717ED: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_00371810; /* je: equal / zero */

loc_003717FA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00371809; /* je: equal / zero */

loc_003717FE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00371809u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00371809: ;
    eax = 0x80004005u;
    goto loc_0037187D;

loc_00371810: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x00371817u); RECOMP_ABI_CALL(0x0036F31Fu, sub_0036F31F); /* call 0x0036F31F */

loc_00371817: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00371829; /* je: equal / zero */

loc_0037181C: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, 0x00371827u); RECOMP_ABI_CALL(0x00370BD0u, sub_00370BD0); /* call 0x00370BD0 */

loc_00371827: ;
    edi = eax;

loc_00371829: ;
    PUSH32(esp, esi);
    esi = edi;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    esi = esi + 0x8007000Eu;
    if (((int32_t)esi < 0)) goto loc_00371861; /* js: sign (negative) */

loc_0037183E: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00371848u); RECOMP_ABI_CALL(0x003715FBu, sub_003715FB); /* call 0x003715FB */

loc_00371848: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_00371861; /* jl: less (signed <) */

loc_0037184E: ;
    ecx = MEM32(esp + 0x18);
    eax = edi;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x1C)) >> 32) & 1);
    edi = edi + 0x1C;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    MEM32(ecx) = eax;
    goto loc_0037186B;

loc_00371861: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0037186B; /* je: equal / zero */

loc_00371865: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0037186Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0037186B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0037187A; /* je: equal / zero */

loc_0037186F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0037187Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0037187A: ;
    eax = esi;
    POP32(esp, esi);

loc_0037187D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00371882
 * Original: 0x00371882 - 0x00371913 (145 bytes, 52 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371882(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00371882: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00371889u); RECOMP_ABI_CALL(0x0036F535u, sub_0036F535); /* call 0x0036F535 */

loc_00371889: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(MEM32(0x37A700)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A700), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_003718AC; /* je: equal / zero */

loc_00371896: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003718A5; /* je: equal / zero */

loc_0037189A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x003718A5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003718A5: ;
    eax = 0x80004005u;
    goto loc_0037190E;

loc_003718AC: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x003718B3u); RECOMP_ABI_CALL(0x0036F31Fu, sub_0036F31F); /* call 0x0036F31F */

loc_003718B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_003718C5; /* je: equal / zero */

loc_003718B8: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, 0x003718C3u); RECOMP_ABI_CALL(0x00371063u, sub_00371063); /* call 0x00371063 */

loc_003718C3: ;
    edi = eax;

loc_003718C5: ;
    PUSH32(esp, esi);
    esi = edi;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    esi = esi + 0x8007000Eu;
    if (((int32_t)esi < 0)) goto loc_003718F2; /* js: sign (negative) */

loc_003718DA: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, 0x003718E4u); RECOMP_ABI_CALL(0x0037173Cu, sub_0037173C); /* call 0x0037173C */

loc_003718E4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_003718F2; /* jl: less (signed <) */

loc_003718EA: ;
    eax = MEM32(esp + 0x18);
    MEM32(eax) = edi;
    goto loc_003718FC;

loc_003718F2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003718FC; /* je: equal / zero */

loc_003718F6: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003718FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003718FC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0037190B; /* je: equal / zero */

loc_00371900: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37A70C);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0037190Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0037190B: ;
    eax = esi;
    POP32(esp, esi);

loc_0037190E: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00371913
 * Original: 0x00371913 - 0x0037192E (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371913(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371913: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0037191Bu); RECOMP_ABI_CALL(0x00371571u, sub_00371571); /* call 0x00371571 */

loc_0037191B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00371928; /* je: equal / zero */

loc_00371922: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00371928u); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_00371928: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00371952
 * Original: 0x00371952 - 0x00371A8B (313 bytes, 117 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00371952(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00371952: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x60));
    esp = esp - 0x60;
    PUSH32(esp, 0xB4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00371962u); RECOMP_ABI_CALL(0x0036F31Fu, sub_0036F31F); /* call 0x0036F31F */

loc_00371962: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_00371970; /* je: equal / zero */

loc_00371967: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037196Eu); RECOMP_ABI_CALL(0x003713A9u, sub_003713A9); /* call 0x003713A9 */

loc_0037196E: ;
    goto loc_00371972;

loc_00371970: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_00371972: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(esi + 8) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    PUSH32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edi = 0x7FF8FFF2;
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    ebx = 0x8007000Eu;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    if (((int32_t)eax < 0)) goto loc_00371A84; /* js: sign (negative) */

loc_00371993: ;
    PUSH32(esp, 0x540);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037199Du); RECOMP_ABI_CALL(0x0036F31Fu, sub_0036F31F); /* call 0x0036F31F */

loc_0037199D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_003719B0; /* je: equal / zero */

loc_003719A2: ;
    PUSH32(esp, MEM32(esi + 8));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003719ACu); RECOMP_ABI_CALL(0x00372AD2u, sub_00372AD2); /* call 0x00372AD2 */

loc_003719AC: ;
    ecx = eax;
    goto loc_003719B2;

loc_003719B0: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */

loc_003719B2: ;
    eax = ecx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    MEM32(esi + 0xC) = ecx;
    if (((int32_t)eax < 0)) goto loc_00371A84; /* js: sign (negative) */

loc_003719C5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003719CAu); RECOMP_ABI_CALL(0x0037343Bu, sub_0037343B); /* call 0x0037343B */

loc_003719CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_00371A84; /* jl: less (signed <) */

loc_003719D2: ;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    PUSH32(esp, 0x10);
    edi = ebp + -32;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, ecx);
    edi = ebp + -96;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 1);
    eax = ebp + -8;
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 0x40);
    eax = ebp + -96;
    PUSH32(esp, 0x626F5344);
    MEM32(ebp + -32) = 0x18;
    MEM32(ebp + -20) = 0x3791EC;
    MEM32(ebp + -8) = 8;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00371A13u); RECOMP_ABI_CALL(0x00371C5Cu, sub_00371C5C); /* call 0x00371C5C */

loc_00371A13: ;
    MEM32(esi + 0x28) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8FFF2;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    if (((int32_t)eax < 0)) goto loc_00371A84; /* js: sign (negative) */

loc_00371A23: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    MEM32(ebp + 8) = edi;
    ebx = esi + 0x18;

loc_00371A2B: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00371A84; /* jae: above or equal (unsigned >=) */

loc_00371A33: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_00371A35: ;
    edx = ecx + eax;
    MEM32(ebp + eax * 8 + -96) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00371A35; /* jb: below (unsigned <) */

loc_00371A42: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0x1F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00371A4B; /* jne: not equal / not zero */

loc_00371A48: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00371A4B: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00371A57u); RECOMP_ABI_CALL(0x003717E6u, sub_003717E6); /* call 0x003717E6 */

loc_00371A57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00371A79; /* jl: less (signed <) */

loc_00371A5B: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00371A69u); RECOMP_ICALL_SAFE(0x00371384u, _icall_esp); /* manual call 0x00371384 */
    }

loc_00371A69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00371A79; /* jl: less (signed <) */

loc_00371A6D: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00371A79u); RECOMP_ICALL_SAFE(0x00370719u, _icall_esp); /* manual call 0x00370719 */
    }

loc_00371A79: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(8)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 8;
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00371A2B; /* jge: greater or equal (signed >=) */

loc_00371A84: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}
