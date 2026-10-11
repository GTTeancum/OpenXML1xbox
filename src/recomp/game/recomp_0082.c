/**
 * X-Men Legends - Recompiled code chunk 82
 * Functions: 250 (0x0033BFA0 - 0x003428C6)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0033BFA0
 * Original: 0x0033BFA0 - 0x0033C0FA (346 bytes, 117 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BFA0(void)
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

loc_0033BFA0: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0xA9));
    PUSH32(esp, ebp);
    SET_LO8(ebx, LO8(ebx) ^ 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(ecx + 0xA9) = LO8(ebx);
    SET_LO8(eax, LO8(ebx));
    if (TEST_Z(_fa, _fb)) goto loc_0033BFCB; /* je: equal / zero */

loc_0033BFBD: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    edi = ZX8(LO8(eax));
    esi = edx;
    goto loc_0033BFD7;

loc_0033BFCB: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    esi = ZX8(LO8(eax));
    edi = edx;

loc_0033BFD7: ;
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033C0F3; /* jle: less or equal (signed <=) */

loc_0033BFE3: ;
    edi = edi << 5;
    ebx = edi;
    esi = esi << 5;
    edx = 0x44;
    edi = ebx + 0xC;
    esi = esi + 0xC;
    goto loc_0033C000;

    /* nop */
    /* nop */

loc_0033C000: ;
    eax = MEM32(ecx + 0x10);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + edx + -4); /* fmul dword ptr [eax + edx - 4] */
    fp_top() = fp_top() + MEMF(eax + esi + -12); /* fadd dword ptr [eax + esi - 0xc] */
    MEMF(eax + edi + -12) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx + 0x10);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + edx); /* fmul dword ptr [eax + edx] */
    fp_top() = fp_top() + MEMF(eax + esi + -8); /* fadd dword ptr [eax + esi - 8] */
    MEMF(eax + edi + -8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx + 0x10);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + edx + 4); /* fmul dword ptr [eax + edx + 4] */
    fp_top() = fp_top() + MEMF(esi + eax + -4); /* fadd dword ptr [esi + eax - 4] */
    MEMF(edi + eax + -4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx + 0x10);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + edx + 8); /* fmul dword ptr [eax + edx + 8] */
    fp_top() = fp_top() + MEMF(esi + eax); /* fadd dword ptr [esi + eax] */
    MEMF(edi + eax) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx + 0x10);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + edx + 0xC); /* fmul dword ptr [eax + edx + 0xc] */
    fp_top() = fp_top() + MEMF(esi + eax + 4); /* fadd dword ptr [esi + eax + 4] */
    MEMF(edi + eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx + 0x10);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + edx + 0x10); /* fmul dword ptr [eax + edx + 0x10] */
    fp_top() = fp_top() + MEMF(esi + eax + 8); /* fadd dword ptr [esi + eax + 8] */
    MEMF(edi + eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx + 0x10);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + edx + 0x14); /* fmul dword ptr [eax + edx + 0x14] */
    fp_top() = fp_top() + MEMF(esi + eax + 0xC); /* fadd dword ptr [esi + eax + 0xc] */
    MEMF(edi + eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx + 0x10);
    fp_push(MEMF(eax + ebx + 0xC)); /* fld float */
    eax = eax + ebx;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 5) & 7]; /* fmul st(5) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_stack[(g_fp_top + 4) & 7] = fp_top(); fp_pop(); /* fstp st(4) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(eax + 0xC); /* fmul dword ptr [eax + 0xc] */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx + 0x10);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEMF(ebx + eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = edx + 0x60;
    esi = esi + 0x60;
    edi = edi + 0x60;
    ebx = ebx + 0x60;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033C000; /* jne: not equal / not zero */

loc_0033C0F3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0033C100
 * Original: 0x0033C100 - 0x0033C268 (360 bytes, 118 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C100(void)
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

loc_0033C100: ;
    esp = esp - 8;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edx = ecx;
    MEM32(esp + 4) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0033C25B; /* jle: less or equal (signed <=) */

loc_0033C118: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    eax = 0xC;

loc_0033C122: ;
    ecx = MEM32(edx + 0x10);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + eax + 0x34); /* fmul dword ptr [ecx + eax + 0x34] */
    MEMF(ecx + eax + -12) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edx + 0x10);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + eax + 0x38); /* fmul dword ptr [ecx + eax + 0x38] */
    MEMF(ecx + eax + -8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edx + 0x10);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + eax + 0x3C); /* fmul dword ptr [ecx + eax + 0x3c] */
    MEMF(ecx + eax + -4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edx + 0x10);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + eax + 0x40); /* fmul dword ptr [ecx + eax + 0x40] */
    MEMF(ecx + eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edx + 0x10);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + eax + 0x44); /* fmul dword ptr [ecx + eax + 0x44] */
    MEMF(ecx + eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edx + 0x10);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + eax + 0x48); /* fmul dword ptr [ecx + eax + 0x48] */
    MEMF(ecx + eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edx + 0x10);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + eax + 0x4C); /* fmul dword ptr [ecx + eax + 0x4c] */
    MEMF(ecx + eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edx + 0x10);
    fp_push(MEMF(ecx + ebp + 0xC)); /* fld float */
    ecx = ecx + ebp;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 5) & 7]; /* fmul st(5) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_stack[(g_fp_top + 4) & 7] = fp_top(); fp_pop(); /* fstp st(4) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx + 4); /* fmul dword ptr [ecx + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(ecx + 0xC); /* fmul dword ptr [ecx + 0xc] */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edx + 0x10);
    MEM32(ecx + ebp + 0x1C) = ebx;
    ecx = MEM32(edx + 0x10);
    esi = ecx + ebp;
    edi = esi + 0x20;
    ecx = 8;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(edx + 0x10);
    MEM32(eax + ecx + 0x34) = ebx;
    ecx = MEM32(edx + 0x10);
    esi = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x24);
    MEM32(eax + ecx + 0x38) = ebx;
    ecx = MEM32(edx + 0x10);
    MEM32(eax + ecx + 0x3C) = ebx;
    ecx = MEM32(edx + 0x10);
    MEM32(eax + ecx + 0x40) = ebx;
    ecx = MEM32(edx + 0x10);
    MEM32(eax + ecx + 0x44) = ebx;
    ecx = MEM32(edx + 0x10);
    MEM32(eax + ecx + 0x48) = ebx;
    ecx = MEM32(edx + 0x10);
    MEM32(eax + ecx + 0x4C) = ebx;
    ecx = MEM32(edx + 0x10);
    MEM32(esp + 0x14) = edx;
    SET_LO8(edx, MEM8(esi + edi));
    MEM8(ecx + ebp + 0x5C) = LO8(edx);
    edx = MEM32(esp + 0x1C);
    ecx = esi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 0x60;
    ebp = ebp + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0033C122; /* jl: less (signed <) */

loc_0033C258: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0033C25B: ;
    MEM8(edx + 0xA9) = LO8(ebx);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0033C270
 * Original: 0x0033C270 - 0x0033C34B (219 bytes, 78 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C270(void)
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

loc_0033C270: ;
    PUSH32(esp, ecx);
    MEM32(esp) = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033C347; /* jle: less or equal (signed <=) */

loc_0033C280: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0x40;
    MEM32(esp + 0x1C) = ecx;

loc_0033C291: ;
    esi = ebp;
    edi = 7;

loc_0033C298: ;
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x10), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033C2A7; /* jne: not equal / not zero */

loc_0033C29E: ;
    ecx = MEM32(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + 0x10) = 0;
    MEM32(eax) = ecx;

loc_0033C2A7: ;
    SET_LO8(ebx, MEM8(eax + 0x10));
    edx = MEM32(eax);
    SET_LO8(edx, MEM8(edx));
    ecx = SX8(LO8(ebx));
    SET_LO8(ecx, MEM8(ecx * 4 + 0x479F98));
    SET_LO8(edx, (uint32_t)(((int32_t)(int8_t)(LO8(edx))) >> ((LO8(ecx)) & 31u)));
    SET_LO8(edx, LO8(edx) & 3);
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    MEM8(eax + 0x10) = LO8(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0033C2D0; /* jne: not equal / not zero */

loc_0033C2C6: ;
    MEM32(esp + 0x18) = 0;
    goto loc_0033C318;

loc_0033C2D0: ;
    ecx = SX8(LO8(edx));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033C308; /* je: equal / zero */

loc_0033C2D6: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033C2F3; /* je: equal / zero */

loc_0033C2D9: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033C2E6; /* je: equal / zero */

loc_0033C2DC: ;
    MEM32(esp + 0x18) = 0;
    goto loc_0033C318;

loc_0033C2E6: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    ecx = ecx + 4;
    MEM32(eax + 0xC) = ecx;
    goto loc_0033C314;

loc_0033C2F3: ;
    ecx = MEM32(eax + 8);
    SET_LO16(edx, MEM16(ecx));
    ecx = ecx + 2;
    MEM32(eax + 8) = ecx;
    ecx = SX16(LO16(edx));
    MEM32(esp + 0x18) = ecx;
    goto loc_0033C318;

loc_0033C308: ;
    ecx = MEM32(eax + 4);
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    edx = SX8(LO8(edx));

loc_0033C314: ;
    MEM32(esp + 0x18) = edx;

loc_0033C318: ;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + 0x10);
    esi = esi + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(esi + edx + -4) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_0033C298; /* jne: not equal / not zero */

loc_0033C331: ;
    ecx = MEM32(esp + 0x1C);
    ebp = ebp + 0x60;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = ecx;
    if ((_fa != 0)) goto loc_0033C291; /* jne: not equal / not zero */

loc_0033C343: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0033C347: ;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0033C350
 * Original: 0x0033C350 - 0x0033C3CF (127 bytes, 49 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C350(void)
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

loc_0033C350: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033C3CA; /* jle: less or equal (signed <=) */

loc_0033C35C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    ebp = 0x10;
    MEM32(esp + 0x18) = eax;
    /* nop */

loc_0033C370: ;
    eax = MEM32(edi + 0x10);
    SET_LO8(ecx, MEM8(eax + ebx + 0x5C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033C3B6; /* je: equal / zero */

loc_0033C37B: ;
    esi = 0; /* xor self */
    /* nop */

loc_0033C380: ;
    edx = MEM32(edi + 0x10);
    ecx = esi;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + ebx + 0x5C)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + ebx + 0x5C), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033C3B0; /* je: equal / zero */

loc_0033C392: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x0033C39Bu); RECOMP_ABI_CALL(0x0033BB70u, sub_0033BB70); /* call 0x0033BB70 */

loc_0033C39B: ;
    edx = MEM32(edi + 0x10);
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    ecx = esi + ebp;
    eax = edx + ecx * 4;
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */

loc_0033C3B0: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033C380; /* jl: less (signed <) */

loc_0033C3B6: ;
    eax = MEM32(esp + 0x18);
    ebx = ebx + 0x60;
    ebp = ebp + 0x18;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_0033C370; /* jne: not equal / not zero */

loc_0033C3C7: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0033C3CA: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0033C3D0
 * Original: 0x0033C3D0 - 0x0033C450 (128 bytes, 49 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C3D0(void)
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

loc_0033C3D0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033C44B; /* jle: less or equal (signed <=) */

loc_0033C3DD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = eax + eax * 2;
    ebp = eax + eax * 2;
    PUSH32(esp, esi);
    ebx = ebx << 5;
    ebp = ebp * 8 + 0x10;
    MEM32(esp + 0x18) = eax;

loc_0033C3F4: ;
    eax = MEM32(edi + 0x10);
    SET_LO8(ecx, MEM8(eax + ebx + 0x5C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033C437; /* je: equal / zero */

loc_0033C3FF: ;
    esi = 6;

loc_0033C404: ;
    edx = MEM32(edi + 0x10);
    ecx = esi;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + ebx + 0x5C)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + ebx + 0x5C), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033C434; /* je: equal / zero */

loc_0033C416: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x0033C41Fu); RECOMP_ABI_CALL(0x0033BC40u, sub_0033BC40); /* call 0x0033BC40 */

loc_0033C41F: ;
    edx = MEM32(edi + 0x10);
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    ecx = esi + ebp;
    eax = edx + ecx * 4;
    fp_top() = MEMF(eax) - fp_top(); /* fsubr dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */

loc_0033C434: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0033C404; /* jns: not sign (positive) */

loc_0033C437: ;
    eax = MEM32(esp + 0x18);
    ebx = ebx - 0x60;
    ebp = ebp - 0x18;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_0033C3F4; /* jne: not equal / not zero */

loc_0033C448: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0033C44B: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0033C450
 * Original: 0x0033C450 - 0x0033C4C3 (115 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C450: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C498; /* je: equal / zero */

loc_0033C45A: ;
    edx = edx | 0xFFFFFFFFu;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = edx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM8(eax + 0x44) = LO8(ecx);
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM8(eax + 0x5C) = LO8(ecx);
    MEM8(eax + 0x5D) = LO8(ecx);
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x68) = ecx;
    MEM8(eax + 0x70) = LO8(ecx);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    goto loc_0033C49A;

loc_0033C498: ;
    eax = 0; /* xor self */

loc_0033C49A: ;
    MEM8(eax + 0xA9) = LO8(ecx);
    MEM8(eax + 0xAA) = LO8(ecx);
    MEM8(eax + 0xAB) = LO8(ecx);
    ecx = MEM32(esp + 8);
    ecx = ecx + ecx * 2;
    edx = eax + 0xB0;
    ecx = ecx << 5;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x1C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0033C4D0
 * Original: 0x0033C4D0 - 0x0033C729 (601 bytes, 206 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C4D0(void)
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

loc_0033C4D0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBF800000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0xBF800000u (32-bit) */
    ebx = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_0033C530; /* je: equal / zero */

loc_0033C4F2: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C89C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c89c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0033C530; /* jnp: not parity */

loc_0033C503: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x20); /* fsub dword ptr [esp + 0x20] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033C530; /* je: equal / zero */

loc_0033C515: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033C56D; /* jne: not equal / not zero */

loc_0033C522: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0033C56D; /* jp: parity */

loc_0033C530: ;
    eax = 0; /* xor self */
    ecx = esi;
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0033C541u); RECOMP_ABI_CALL(0x0033BD20u, sub_0033BD20); /* call 0x0033BD20 */

loc_0033C541: ;
    ecx = esi + 0x60;
    PUSH32(esp, ecx);
    ecx = esi + 0x28;
    MEM8(esi + 0xA8) = 0;
    PUSH32(esp, 0x0033C554u); RECOMP_ABI_CALL(0x0033C8C0u, sub_0033C8C0); /* call 0x0033C8C0 */

loc_0033C554: ;
    edx = esi + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0033C560u); RECOMP_ABI_CALL(0x0033C270u, sub_0033C270); /* call 0x0033C270 */

loc_0033C560: ;
    eax = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0033C56Du); RECOMP_ABI_CALL(0x0033C100u, sub_0033C100); /* call 0x0033C100 */

loc_0033C56D: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C89C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c89c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033C719; /* jne: not equal / not zero */

loc_0033C582: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    ecx = MEM32(esi + 0xC);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 4] */
    edx = MEM32(ecx + 0xC);
    MEM32(esp + 0xC) = edx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033C657; /* jne: not equal / not zero */

loc_0033C59E: ;
    edi = edi;

loc_0033C5A0: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 4); /* fsub dword ptr [esi + 4] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3E2070)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3e2070] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033C657; /* jne: not equal / not zero */

loc_0033C5B8: ;
    _fa = (uint32_t)(MEM8(esi + 0xA8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xA8), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033C5CB; /* jne: not equal / not zero */

loc_0033C5C1: ;
    ecx = esi + 0x60;
    PUSH32(esp, 0x0033C5C9u); RECOMP_ABI_CALL(0x0033BA90u, sub_0033BA90); /* call 0x0033BA90 */

loc_0033C5C9: ;
    goto loc_0033C5E1;

loc_0033C5CB: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033C5E8; /* jle: less or equal (signed <=) */

loc_0033C5D0: ;
    ecx = MEM32(esi + 0x10);
    eax = esi + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi + 0x28;
    PUSH32(esp, 0x0033C5E1u); RECOMP_ABI_CALL(0x0033C8E0u, sub_0033C8E0); /* call 0x0033C8E0 */

loc_0033C5E1: ;
    MEM8(esi + 0xA8) = 1;

loc_0033C5E8: ;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0033C5F6u); RECOMP_ABI_CALL(0x0033C350u, sub_0033C350); /* call 0x0033C350 */

loc_0033C5F6: ;
    fp_push((double)SMEM32(esi)); /* fild */
    fp_top() = fp_top() * MEMF(esi + 0x24); /* fmul dword ptr [esi + 0x24] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0033C60C; /* jp: parity */

loc_0033C606: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0033C616;

loc_0033C60C: ;
    eax = MEM32(esp + 0xC);
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x10) = eax;

loc_0033C616: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0033C626u); RECOMP_ABI_CALL(0x0033BFA0u, sub_0033BFA0); /* call 0x0033BFA0 */

loc_0033C626: ;
    eax = MEM32(esi);
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    fp_top() = fp_top() * MEMF(esi + 0x24); /* fmul dword ptr [esi + 0x24] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMF(esi + 0x24); /* fmul dword ptr [esi + 0x24] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033C5A0; /* je: equal / zero */

loc_0033C657: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0033C709; /* jp: parity */

loc_0033C669: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, ebp);
    fp_top() = -fp_top(); /* fchs */
    ebp = esi + 0x60;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = esi + 0x48;
    /* nop */

loc_0033C680: ;
    _fa = (uint32_t)(MEM8(esi + 0xA8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xA8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033C699; /* jne: not equal / not zero */

loc_0033C689: ;
    ecx = ebp;
    PUSH32(esp, 0x0033C690u); RECOMP_ABI_CALL(0x0033BB00u, sub_0033BB00); /* call 0x0033BB00 */

loc_0033C690: ;
    MEM8(esi + 0xA8) = 2;
    goto loc_0033C6A7;

loc_0033C699: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = esi + 0x28;
    PUSH32(esp, 0x0033C6A7u); RECOMP_ABI_CALL(0x0033CA00u, sub_0033CA00); /* call 0x0033CA00 */

loc_0033C6A7: ;
    ecx = MEM32(esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    MEM32(esi) = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0033C6B5u); RECOMP_ABI_CALL(0x0033C3D0u, sub_0033C3D0); /* call 0x0033C3D0 */

loc_0033C6B5: ;
    eax = MEM32(esi);
    edx = MEM32(esp + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    PUSH32(esp, 0);
    fp_top() = fp_top() * MEMF(esi + 0x24); /* fmul dword ptr [esi + 0x24] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0033C6DBu); RECOMP_ABI_CALL(0x0033BFA0u, sub_0033BFA0); /* call 0x0033BFA0 */

loc_0033C6DB: ;
    fp_push((double)SMEM32(esi)); /* fild */
    eax = MEM32(esp + 0x18);
    MEM32(esi + 8) = eax;
    fp_top() = fp_top() * MEMF(esi + 0x24); /* fmul dword ptr [esi + 0x24] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0033C680; /* jnp: not parity */

loc_0033C6F8: ;
    ecx = MEM32(esp + 0x24);
    POP32(esp, ebp);
    POP32(esp, edi);
    MEM32(esi + 0x20) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_0033C709: ;
    edx = MEM32(esp + 0x20);
    POP32(esp, edi);
    MEM32(esi + 0x20) = edx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_0033C719: ;
    eax = MEM32(esp + 0x20);
    POP32(esp, edi);
    MEM32(esi + 0x20) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0033C730
 * Original: 0x0033C730 - 0x0033C806 (214 bytes, 66 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C730(void)
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

loc_0033C730: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, esi);
    esi = ecx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0033C758; /* jp: parity */

loc_0033C742: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(esp + 4) = 1;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033C760; /* je: equal / zero */

loc_0033C758: ;
    MEM32(esp + 4) = 0;

loc_0033C760: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0033C77F; /* jp: parity */

loc_0033C773: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0033C77Fu); RECOMP_ABI_CALL(0x0033C4D0u, sub_0033C4D0); /* call 0x0033C4D0 */

loc_0033C77F: ;
    SET_LO8(eax, MEM8(esi + 0xAB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(esp + 0xC);
    ecx = eax + eax * 2;
    if (TEST_Z(_fa, _fb)) goto loc_0033C7A3; /* je: equal / zero */

loc_0033C790: ;
    eax = ZX8(MEM8(esi + 0xA9));
    edx = MEM32(esi + 0x10);
    eax = eax + ecx;
    eax = eax << 5;
    eax = eax + edx;
    goto loc_0033C7B6;

loc_0033C7A3: ;
    edx = ZX8(MEM8(esi + 0xA9));
    edx = edx + ecx;
    edx = edx << 5;
    eax = edx + esi + 0xB0;

loc_0033C7B6: ;
    edx = MEM32(esp + 0x18);
    MEM32(edx) = eax;
    SET_LO8(eax, MEM8(esi + 0xAB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033C7E5; /* je: equal / zero */

loc_0033C7C6: ;
    eax = ZX8(MEM8(esi + 0xA9));
    eax = eax ^ 1;
    eax = eax + ecx;
    ecx = MEM32(esi + 0x10);
    eax = eax << 5;
    eax = eax + ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_0033C7E5: ;
    edx = ZX8(MEM8(esi + 0xA9));
    edx = edx ^ 1;
    edx = edx + ecx;
    ecx = MEM32(esp + 0x14);
    edx = edx << 5;
    eax = edx + esi + 0xB0;
    MEM32(ecx) = eax;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0033C810
 * Original: 0x0033C810 - 0x0033C82F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C810: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4303A8;
    if (TEST_Z(_fa, _fb)) goto loc_0033C829; /* je: equal / zero */

loc_0033C820: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033C826u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0033C826: ;
    esp = esp + 4;

loc_0033C829: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033C830
 * Original: 0x0033C830 - 0x0033C863 (51 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C830(void)
{

loc_0033C830: ;
    edx = MEM32(ecx + 0x44);
    eax = MEM32(ecx + 0x48);
    eax = eax + edx;
    eax = eax + MEM32(ecx + 0x40);
    eax = eax + MEM32(ecx + 0x3C);
    eax = eax + MEM32(ecx + 0x38);
    eax = eax + MEM32(ecx + 0x34);
    eax = eax + MEM32(ecx + 0x30);
    eax = eax + MEM32(ecx + 0x2C);
    eax = eax + MEM32(ecx + 0x28);
    eax = eax + MEM32(ecx + 0x24);
    eax = eax + MEM32(ecx + 0x20);
    eax = eax + MEM32(ecx + 0x1C);
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    eax = eax + edx;
    eax = eax + ecx + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_0033C870
 * Original: 0x0033C870 - 0x0033C876 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C870(void)
{

loc_0033C870: ;
    eax = 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_0033C880
 * Original: 0x0033C880 - 0x0033C884 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C880(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0033C880: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0033C890
 * Original: 0x0033C890 - 0x0033C89B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C890(void)
{

loc_0033C890: ;
    eax = ecx;
    MEM32(eax) = 0x4303A8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033C8A0
 * Original: 0x0033C8A0 - 0x0033C8B8 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0033C8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C8A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033C8B5; /* je: equal / zero */

loc_0033C8A8: ;
    ecx = eax + 0x50;
    MEM32(eax) = 0x4303C0;
    MEM32(eax + 0x4C) = ecx;
    esp += 4; return; /* ret */

loc_0033C8B5: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0033C8C0
 * Original: 0x0033C8C0 - 0x0033C8D9 (25 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C8C0(void)
{

loc_0033C8C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x0033C8CCu); RECOMP_ABI_CALL(0x0033BA90u, sub_0033BA90); /* call 0x0033BA90 */

loc_0033C8CC: ;
    MEM32(esi) = eax;
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033C8E0
 * Original: 0x0033C8E0 - 0x0033C9E1 (257 bytes, 89 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C8E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033C8E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)7);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    ebx = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033C9DB; /* jle: less or equal (signed <=) */

loc_0033C8F6: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    goto loc_0033C900;

    /* nop */

loc_0033C900: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033C9BA; /* jne: not equal / not zero */

loc_0033C90A: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 7;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0033C9A5; /* ja: above (unsigned >) */

loc_0033C91D: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x33C9E4); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0033C924u) goto loc_0033C924;
    if (_jt == 0x0033C937u) goto loc_0033C937;
    if (_jt == 0x0033C94Au) goto loc_0033C94A;
    if (_jt == 0x0033C95Bu) goto loc_0033C95B;
    if (_jt == 0x0033C96Eu) goto loc_0033C96E;
    if (_jt == 0x0033C981u) goto loc_0033C981;
    if (_jt == 0x0033C992u) goto loc_0033C992;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0033C924: ;
    edx = eax + eax * 2;
    edx = edx << 5;
    SET_LO8(ecx, MEM8(edx + esi + 0x5C));
    eax = edx + esi + 0x5C;
    SET_LO8(ecx, LO8(ecx) ^ 1);
    goto loc_0033C9A3;

loc_0033C937: ;
    eax = eax + eax * 2;
    eax = eax << 5;
    SET_LO8(ecx, MEM8(eax + esi + 0x5C));
    eax = eax + esi + 0x5C;
    SET_LO8(ecx, LO8(ecx) ^ 2);
    goto loc_0033C9A3;

loc_0033C94A: ;
    ecx = eax + eax * 2;
    ecx = ecx << 5;
    eax = ecx + esi + 0x5C;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ecx, LO8(ecx) ^ 4);
    goto loc_0033C9A3;

loc_0033C95B: ;
    edx = eax + eax * 2;
    edx = edx << 5;
    SET_LO8(ecx, MEM8(edx + esi + 0x5C));
    eax = edx + esi + 0x5C;
    SET_LO8(ecx, LO8(ecx) ^ 8);
    goto loc_0033C9A3;

loc_0033C96E: ;
    eax = eax + eax * 2;
    eax = eax << 5;
    SET_LO8(ecx, MEM8(eax + esi + 0x5C));
    eax = eax + esi + 0x5C;
    SET_LO8(ecx, LO8(ecx) ^ 0x10);
    goto loc_0033C9A3;

loc_0033C981: ;
    ecx = eax + eax * 2;
    ecx = ecx << 5;
    eax = ecx + esi + 0x5C;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ecx, LO8(ecx) ^ 0x20);
    goto loc_0033C9A3;

loc_0033C992: ;
    edx = eax + eax * 2;
    edx = edx << 5;
    SET_LO8(ecx, MEM8(edx + esi + 0x5C));
    eax = edx + esi + 0x5C;
    SET_LO8(ecx, LO8(ecx) ^ 0x40);

loc_0033C9A3: ;
    MEM8(eax) = LO8(ecx);

loc_0033C9A5: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x0033C9AEu); RECOMP_ABI_CALL(0x0033BA90u, sub_0033BA90); /* call 0x0033BA90 */

loc_0033C9AE: ;
    MEM32(ebx) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 4) = 0;
    goto loc_0033C9D2;

loc_0033C9BA: ;
    ecx = ebp;
    ecx = ecx - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033C9C4; /* jge: greater or equal (signed >=) */

loc_0033C9C2: ;
    ecx = eax;

loc_0033C9C4: ;
    eax = eax - ecx;
    MEM32(ebx) = eax;
    eax = MEM32(ebx + 4);
    edi = edi + ecx;
    eax = eax + ecx;
    MEM32(ebx + 4) = eax;

loc_0033C9D2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033C900; /* jl: less (signed <) */

loc_0033C9DA: ;
    POP32(esp, esi);

loc_0033C9DB: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033CA00
 * Original: 0x0033CA00 - 0x0033CAFB (251 bytes, 86 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CA00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033CA00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edi = (uint32_t)((int32_t)edi * (int32_t)7);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ecx;
    if ((_fas < 0)) goto loc_0033CAF6; /* js: sign (negative) */

loc_0033CA12: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    /* nop */

loc_0033CA20: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033CAD6; /* jne: not equal / not zero */

loc_0033CA2B: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 7;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0033CAC6; /* ja: above (unsigned >) */

loc_0033CA3E: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x33CAFC); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0033CA45u) goto loc_0033CA45;
    if (_jt == 0x0033CA58u) goto loc_0033CA58;
    if (_jt == 0x0033CA6Bu) goto loc_0033CA6B;
    if (_jt == 0x0033CA7Cu) goto loc_0033CA7C;
    if (_jt == 0x0033CA8Fu) goto loc_0033CA8F;
    if (_jt == 0x0033CAA2u) goto loc_0033CAA2;
    if (_jt == 0x0033CAB3u) goto loc_0033CAB3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0033CA45: ;
    edx = eax + eax * 2;
    edx = edx << 5;
    SET_LO8(ecx, MEM8(edx + esi + 0x5C));
    eax = edx + esi + 0x5C;
    SET_LO8(ecx, LO8(ecx) ^ 1);
    goto loc_0033CAC4;

loc_0033CA58: ;
    eax = eax + eax * 2;
    eax = eax << 5;
    SET_LO8(ecx, MEM8(eax + esi + 0x5C));
    eax = eax + esi + 0x5C;
    SET_LO8(ecx, LO8(ecx) ^ 2);
    goto loc_0033CAC4;

loc_0033CA6B: ;
    ecx = eax + eax * 2;
    ecx = ecx << 5;
    eax = ecx + esi + 0x5C;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ecx, LO8(ecx) ^ 4);
    goto loc_0033CAC4;

loc_0033CA7C: ;
    edx = eax + eax * 2;
    edx = edx << 5;
    SET_LO8(ecx, MEM8(edx + esi + 0x5C));
    eax = edx + esi + 0x5C;
    SET_LO8(ecx, LO8(ecx) ^ 8);
    goto loc_0033CAC4;

loc_0033CA8F: ;
    eax = eax + eax * 2;
    eax = eax << 5;
    SET_LO8(ecx, MEM8(eax + esi + 0x5C));
    eax = eax + esi + 0x5C;
    SET_LO8(ecx, LO8(ecx) ^ 0x10);
    goto loc_0033CAC4;

loc_0033CAA2: ;
    ecx = eax + eax * 2;
    ecx = ecx << 5;
    eax = ecx + esi + 0x5C;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ecx, LO8(ecx) ^ 0x20);
    goto loc_0033CAC4;

loc_0033CAB3: ;
    edx = eax + eax * 2;
    edx = edx << 5;
    SET_LO8(ecx, MEM8(edx + esi + 0x5C));
    eax = edx + esi + 0x5C;
    SET_LO8(ecx, LO8(ecx) ^ 0x40);

loc_0033CAC4: ;
    MEM8(eax) = LO8(ecx);

loc_0033CAC6: ;
    ecx = ebp;
    PUSH32(esp, 0x0033CACDu); RECOMP_ABI_CALL(0x0033BB00u, sub_0033BB00); /* call 0x0033BB00 */

loc_0033CACD: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx) = 0;
    goto loc_0033CAE9;

loc_0033CAD6: ;
    ecx = edi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033CADF; /* jge: greater or equal (signed >=) */

loc_0033CADD: ;
    ecx = eax;

loc_0033CADF: ;
    edx = MEM32(ebx);
    edx = edx + ecx;
    edi = edi - ecx;
    MEM32(ebx) = edx;
    eax = eax - ecx;

loc_0033CAE9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(ebx + 4) = eax;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0033CA20; /* jge: greater or equal (signed >=) */

loc_0033CAF4: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0033CAF6: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033CB20
 * Original: 0x0033CB20 - 0x0033CB26 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CB20(void)
{

loc_0033CB20: ;
    eax = MEM32(0x5D98A8);
    esp += 4; return; /* ret */

}

/**
 * sub_0033CB30
 * Original: 0x0033CB30 - 0x0033CB3C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CB30(void)
{

loc_0033CB30: ;
    PUSH32(esp, 0x33D900);
    PUSH32(esp, 0x0033CB3Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0033CB3A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033CB40
 * Original: 0x0033CB40 - 0x0033CB6A (42 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033CB40: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (TEST_NZ(_fa, _fb)) goto loc_0033CB5C; /* jne: not equal / not zero */

loc_0033CB4F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033CB5F; /* jne: not equal / not zero */

loc_0033CB54: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xB0); PUSH32(esp, 0x0033CB5Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033CB5C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */

loc_0033CB5F: ;
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    MEM8(esi + 8) = LO8(ecx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033CB70
 * Original: 0x0033CB70 - 0x0033CB88 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CB70(void)
{

loc_0033CB70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0033CB78u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0033CB78: ;
    MEM8(0x37A704) = 1;
    MEM32(esi + 0x10) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033CB90
 * Original: 0x0033CB90 - 0x0033CBA0 (16 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CB90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033CB90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0033CB98u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033CB98: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

}

/**
 * sub_0033CBA0
 * Original: 0x0033CBA0 - 0x0033CC1F (127 bytes, 42 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033CBA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    ecx = MEM32(ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    SET_LO16(eax, MEM16(esi + 0x14));
    MEM16(ecx) = LO16(eax);
    SET_LO16(edx, MEM16(esi + 0x16));
    MEM16(ecx + 2) = LO16(edx);
    eax = MEM32(esi + 0x18);
    MEM32(ecx + 4) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 8) = edx;
    SET_LO16(eax, MEM16(esi + 0x22));
    MEM16(ecx + 0xE) = LO16(eax);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(ecx + 2));
    eax = ZX16(LO16(eax));
    edx = ZX16(LO16(edi));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x69) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), 0x69 (16-bit) */
    MEM16(ecx + 0xC) = LO16(eax);
    MEM16(ecx + 0x10) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0033CC06; /* jne: not equal / not zero */

loc_0033CBF6: ;
    eax = edi + edi * 8;
    eax = eax << 2;
    MEM16(ecx + 0xC) = LO16(eax);
    MEM16(ecx + 0x10) = 2;

loc_0033CC06: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + esi + 0x18);
    eax = ecx + esi + 0x14;
    POP32(esp, edi);
    eax = eax - esi;
    POP32(esp, esi);
    MEM32(ebx + 0xC) = edx;
    eax = eax + 8;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033CC20
 * Original: 0x0033CC20 - 0x0033CC95 (117 bytes, 50 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CC20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033CC20: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ebp = ecx;
    PUSH32(esp, 0x28);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0033CC3Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033CC3D: ;
    ebx = MEM32(esp + 0x20);
    ebx = ebx + 0x23;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0033CC4Au); RECOMP_ABI_CALL(0x002033C0u, sub_002033C0); /* call 0x002033C0 */

loc_0033CC4A: ;
    edx = MEM32(esi);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0033CC5Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033CC5D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0033CC68u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033CC68: ;
    ecx = MEM32(esp + 0x3C);
    ebx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0033CC79u); RECOMP_ABI_CALL(0x0033CBA0u, sub_0033CBA0); /* call 0x0033CBA0 */

loc_0033CC79: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x90); PUSH32(esp, 0x0033CC82u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033CC82: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033CC88u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_0033CC88: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033CCA0
 * Original: 0x0033CCA0 - 0x0033CD17 (119 bytes, 35 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CCA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033CCA0: ;
    esp = esp - 0x28;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1C);
    eax = 0; /* xor self */
    edx = 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x14) = 1;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x24) = 5;
    POP32(esp, esi);
    if (CMP_G(_fas, _fbs)) goto loc_0033CCE4; /* jg: greater (signed >) */

loc_0033CCCF: ;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx + 0x1C);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x24) = eax;
    goto loc_0033CCF9;

loc_0033CCE4: ;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ecx + 0x1C);
    eax = (uint32_t)(-(int32_t)eax);
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x1C) = eax;

loc_0033CCF9: ;
    MEM32(esp) = edx;
    eax = esp + 8;
    edx = esp;
    MEM32(esp + 4) = eax;
    eax = MEM32(ecx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033CD11u); RECOMP_ICALL_SAFE(0x003706FDu, _icall_esp); /* manual call 0x003706FD */
    }

loc_0033CD11: ;
    esp = esp + 0x28;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033CD20
 * Original: 0x0033CD20 - 0x0033CD4D (45 bytes, 16 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CD20(void)
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

loc_0033CD20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    fp_push((double)SMEM32(eax + 4)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0033CD37; /* jge: greater or equal (signed >=) */

loc_0033CD31: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0033CD37: ;
    fp_top() = fp_top() * MEMF(esi + 0x14); /* fmul dword ptr [esi + 0x14] */
    PUSH32(esp, 0x0033CD3Fu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0033CD3F: ;
    edx = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033CD49u); RECOMP_ICALL_SAFE(0x00370D0Cu, _icall_esp); /* manual call 0x00370D0C */
    }

loc_0033CD49: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0033CD50
 * Original: 0x0033CD50 - 0x0033CEA7 (343 bytes, 110 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CD50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033CD50: ;
    esp = esp - 0x60;
    eax = 0; /* xor self */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x68);
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, ebp);
    MEM32(esp + 0x44) = eax;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x34) = 0x18;
    MEM32(esp + 0x38) = 0xA0;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x69) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0x69 (16-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0033CDC2; /* jne: not equal / not zero */

loc_0033CD8D: ;
    edx = MEM32(eax);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x30) = edx;
    SET_LO16(eax, MEM16(eax + 0x10));
    edx = esp + 0x24;
    MEM16(esp + 0x34) = LO16(eax);
    MEM16(esp + 0x36) = 0x40;
    MEM32(esp + 0x44) = edx;
    goto loc_0033CDC6;

loc_0033CDC2: ;
    MEM32(esp + 0x44) = eax;

loc_0033CDC6: ;
    eax = MEM32(ebx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ebp = ebx + 4;
    PUSH32(esp, ebp);
    edx = esp + 0x40;
    MEM32(esp + 0x48) = eax;
    eax = MEM32(ecx + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033CDE1u); RECOMP_ICALL_SAFE(0x0037192Eu, _icall_esp); /* manual call 0x0037192E */
    }

loc_0033CDE1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0xC);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    eax = MEM32(ebp);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033CE09u); RECOMP_ICALL_SAFE(0x003707F1u, _icall_esp); /* manual call 0x003707F1 */
    }

loc_0033CE09: ;
    ecx = MEM32(ebx + 0xC);
    esi = MEM32(ebx + 8);
    edi = MEM32(esp + 0x74);
    edx = ecx;
    ecx = ecx >> 2;
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
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x78);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033CE3Eu); RECOMP_ABI_CALL(0x0036F5D7u, sub_0036F5D7); /* call 0x0036F5D7 */

loc_0033CE3E: ;
    edx = MEM32(esp + 0x44);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033CE4Cu); RECOMP_ICALL_SAFE(0x00371368u, _icall_esp); /* manual call 0x00371368 */
    }

loc_0033CE4C: ;
    eax = 0; /* xor self */
    ecx = 4;
    edx = esp + 0x1C;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0x6C) = eax;
    eax = MEM32(ebp);
    MEM32(esp + 0x60) = ecx;
    MEM32(esp + 0x1C) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esp + 0x54;
    PUSH32(esp, eax);
    MEM32(esp + 0x60) = 1;
    MEM32(esp + 0x70) = 5;
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0x0033CE95u); RECOMP_ICALL_SAFE(0x00370D28u, _icall_esp); /* manual call 0x00370D28 */
    }

loc_0033CE95: ;
    SET_LO8(eax, MEM8(ebx + 0x10));
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(eax) & 0xDF);
    POP32(esp, ebp);
    MEM8(ebx + 0x10) = LO8(eax);
    POP32(esp, ebx);
    esp = esp + 0x60;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033CEB0
 * Original: 0x0033CEB0 - 0x0033CEB6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CEB0(void)
{

loc_0033CEB0: ;
    eax = MEM32(0x5D98B4);
    esp += 4; return; /* ret */

}

/**
 * sub_0033CEC0
 * Original: 0x0033CEC0 - 0x0033CEC6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CEC0(void)
{

loc_0033CEC0: ;
    eax = 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0033CED0
 * Original: 0x0033CED0 - 0x0033CF70 (160 bytes, 61 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033CED0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    eax = MEM32(ecx + 8);
    edi = 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0033CEF4; /* jg: greater (signed >) */

loc_0033CEEC: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033CEF4u); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_0033CEF4: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033CF01; /* jl: less (signed <) */

loc_0033CEFC: ;
    MEM32(ecx + 8) = edi;
    goto loc_0033CF09;

loc_0033CF01: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033CF09u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0033CF09: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033CF2C; /* je: equal / zero */

loc_0033CF13: ;
    edi = MEM32(edx + 0x10);
    ecx = eax + eax * 8;
    ecx = ecx << 2;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_0033CF2C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0033CF3Au); RECOMP_ICALL_SAFE(0x00371AF8u, _icall_esp); /* manual call 0x00371AF8 */
    }

loc_0033CF3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0033CF57; /* jge: greater or equal (signed >=) */

loc_0033CF3E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0033CF45u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033CF45: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0033CF57: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x18) = edx;
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033CF70
 * Original: 0x0033CF70 - 0x0033CFE8 (120 bytes, 46 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CF70(void)
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

loc_0033CF70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 0x20 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0033CF84; /* je: equal / zero */

loc_0033CF7E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033CF84u); RECOMP_ABI_CALL(0x0033CD50u, sub_0033CD50); /* call 0x0033CD50 */

loc_0033CF84: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033CF91u); RECOMP_ICALL_SAFE(0x003706A9u, _icall_esp); /* manual call 0x003706A9 */
    }

loc_0033CF91: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0033CF99u); RECOMP_ABI_CALL(0x0033CCA0u, sub_0033CCA0); /* call 0x0033CCA0 */

loc_0033CF99: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 4);
    fp_push((double)SMEM32(edx + 4)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0033CFAB; /* jge: greater or equal (signed >=) */

loc_0033CFA5: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0033CFAB: ;
    fp_top() = fp_top() * MEMF(esi + 0x14); /* fmul dword ptr [esi + 0x14] */
    PUSH32(esp, 0x0033CFB3u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0033CFB3: ;
    ecx = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033CFBDu); RECOMP_ICALL_SAFE(0x00370D0Cu, _icall_esp); /* manual call 0x00370D0C */
    }

loc_0033CFBD: ;
    edx = MEM32(esi + 0x20);
    eax = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033CFCAu); RECOMP_ICALL_SAFE(0x003707D5u, _icall_esp); /* manual call 0x003707D5 */
    }

loc_0033CFCA: ;
    edx = MEM32(esi + 4);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x10));
    ecx = ecx >> 2;
    ecx = ecx & 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033CFE3u); RECOMP_ICALL_SAFE(0x00370719u, _icall_esp); /* manual call 0x00370719 */
    }

loc_0033CFE3: ;
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
 * sub_0033CFF0
 * Original: 0x0033CFF0 - 0x0033D001 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033CFF0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033D000; /* jle: less or equal (signed <=) */

loc_0033CFF8: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033D000u); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_0033D000: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0033D010
 * Original: 0x0033D010 - 0x0033D037 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D010: ;
    eax = MEM32(0x5D98B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D024; /* je: equal / zero */

loc_0033D019: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033D036; /* jne: not equal / not zero */

loc_0033D024: ;
    PUSH32(esp, 0x33D900);
    PUSH32(esp, 0x0033D02Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0033D02E: ;
    eax = MEM32(0x5D98B8);
    esp = esp + 4;

loc_0033D036: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0033D040
 * Original: 0x0033D040 - 0x0033D06E (46 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D040(void)
{

loc_0033D040: ;
    esp = esp - 0x1C;
    ecx = esp;
    PUSH32(esp, 0x0033D04Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0033D04B: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x430430;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_0033D070
 * Original: 0x0033D070 - 0x0033D0B7 (71 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D070: ;
    SET_LO8(eax, MEM8(0x5D98BC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033D080; /* jne: not equal / not zero */

loc_0033D079: ;
    MEM8(0x5D98BC) = 1;

loc_0033D080: ;
    PUSH32(esp, 0x479FD4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x33DA80);
    PUSH32(esp, 0x33D040);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x4304E4);
    PUSH32(esp, 0x33D950);
    PUSH32(esp, 0x33CB20);
    PUSH32(esp, 0x33D9E0);
    PUSH32(esp, 0x5D98B4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0033D0B3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0033D0B3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0033D0C0
 * Original: 0x0033D0C0 - 0x0033D0C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D0C0(void)
{

loc_0033D0C0: ;
    eax = MEM32(0x5D98B8);
    esp += 4; return; /* ret */

}

/**
 * sub_0033D0D0
 * Original: 0x0033D0D0 - 0x0033D13D (109 bytes, 47 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D0D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033D0D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    ebx = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033D108; /* jle: less or equal (signed <=) */

loc_0033D0E2: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */

loc_0033D0E5: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(MEM8(edx + ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + ebp + 0x10), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D0FF; /* je: equal / zero */

loc_0033D0F2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x0033D0FFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033D0FF: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033D0E5; /* jl: less (signed <) */

loc_0033D107: ;
    POP32(esp, ebp);

loc_0033D108: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0033D11B; /* jl: less (signed <) */

loc_0033D112: ;
    MEM32(ecx + 8) = 0;
    goto loc_0033D124;

loc_0033D11B: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0033D124u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0033D124: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D138; /* je: equal / zero */

loc_0033D12B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033D131u); RECOMP_ICALL_SAFE(0x0036F5C1u, _icall_esp); /* manual call 0x0036F5C1 */
    }

loc_0033D131: ;
    MEM32(esi + 0x18) = 0;

loc_0033D138: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033D140
 * Original: 0x0033D140 - 0x0033D1E0 (160 bytes, 64 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D140(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033D140: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033D164; /* jle: less or equal (signed <=) */

loc_0033D151: ;
    eax = MEM32(ecx + 0x10);
    eax = eax + 0x10;

loc_0033D157: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D164; /* je: equal / zero */

loc_0033D15C: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 0x24;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033D157; /* jl: less (signed <) */

loc_0033D164: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D1AA; /* jne: not equal / not zero */

loc_0033D168: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = esi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033D17B; /* jl: less (signed <) */

loc_0033D173: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033D17Bu); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_0033D17B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ecx = MEM32(ebp + 0x14);
    if (TEST_S(_fas, _fbs)) goto loc_0033D194; /* jl: less (signed <) */

loc_0033D182: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0033D18C; /* jg: greater (signed >) */

loc_0033D187: ;
    MEM32(ecx + 8) = edi;
    goto loc_0033D194;

loc_0033D18C: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033D194u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0033D194: ;
    edx = esi + esi * 8;
    esi = MEM32(ebp + 0x14);
    esi = MEM32(esi + 0x10);
    ecx = 0x24;
    eax = 0; /* xor self */
    edi = esi + edx * 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_0033D1AA: ;
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ecx + 0x10);
    eax = ebx + ebx * 8;
    esi = edx + eax * 4;
    SET_LO8(eax, MEM8(esi + 0x10));
    SET_LO8(eax, LO8(eax) | 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12);
    MEM8(esi + 0x10) = LO8(eax);
    MEM32(esi + 0x18) = 0;
    MEM32(esi + 0x14) = 0x3F800000;
    PUSH32(esp, 0x0033D1D5u); RECOMP_ABI_CALL(0x00203400u, sub_00203400); /* call 0x00203400 */

loc_0033D1D5: ;
    esp = esp + 8;
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033D1E0
 * Original: 0x0033D1E0 - 0x0033D260 (128 bytes, 55 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D1E0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x14);
    edx = eax + eax * 8;
    eax = MEM32(ecx + 0x10);
    esi = eax + edx * 4;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D20A; /* je: equal / zero */

loc_0033D1FB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033D201u); RECOMP_ICALL_SAFE(0x0037073Du, _icall_esp); /* manual call 0x0037073D */
    }

loc_0033D201: ;
    ecx = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033D20Au); RECOMP_ICALL_SAFE(0x0036F5DCu, _icall_esp); /* manual call 0x0036F5DC */
    }

loc_0033D20A: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033D212u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_0033D212: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D227; /* je: equal / zero */

loc_0033D21C: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0033D227u); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_0033D227: ;
    eax = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ecx;
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033D260
 * Original: 0x0033D260 - 0x0033D327 (199 bytes, 77 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D260(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033D260: ;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033D325; /* jne: not equal / not zero */

loc_0033D26E: ;
    eax = MEM32(edi + 0x14);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033D325; /* jle: less or equal (signed <=) */

loc_0033D27C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    ebx = eax;

loc_0033D283: ;
    ecx = MEM32(edi + 0x14);
    esi = MEM32(ecx + 0x10);
    SET_LO8(eax, MEM8(esi + ebp + 0x10));
    esi = esi + ebp;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D318; /* je: equal / zero */

loc_0033D297: ;
    SET_LO8(ecx, MEM8(esi + 0x11));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D318; /* je: equal / zero */

loc_0033D29E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D2BC; /* je: equal / zero */

loc_0033D2A3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D2B1; /* je: equal / zero */

loc_0033D2A7: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0033D2AFu); RECOMP_ABI_CALL(0x0033CF70u, sub_0033CF70); /* call 0x0033CF70 */

loc_0033D2AF: ;
    goto loc_0033D314;

loc_0033D2B1: ;
    edx = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033D2BAu); RECOMP_ICALL_SAFE(0x0037073Du, _icall_esp); /* manual call 0x0037073D */
    }

loc_0033D2BA: ;
    goto loc_0033D314;

loc_0033D2BC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033D2D3; /* jne: not equal / not zero */

loc_0033D2C0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D318; /* je: equal / zero */

loc_0033D2C5: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0033D2CDu); RECOMP_ABI_CALL(0x0033CD50u, sub_0033CD50); /* call 0x0033CD50 */

loc_0033D2CD: ;
    MEM8(esi + 0x11) = MEM8(esi + 0x11) & 0xDF;
    goto loc_0033D318;

loc_0033D2D3: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D2E0; /* je: equal / zero */

loc_0033D2D8: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0033D2E0u); RECOMP_ABI_CALL(0x0033CD20u, sub_0033CD20); /* call 0x0033CD20 */

loc_0033D2E0: ;
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x11), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D2F3; /* je: equal / zero */

loc_0033D2E6: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033D2F3u); RECOMP_ICALL_SAFE(0x003706A9u, _icall_esp); /* manual call 0x003706A9 */
    }

loc_0033D2F3: ;
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x11), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D301; /* je: equal / zero */

loc_0033D2F9: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0033D301u); RECOMP_ABI_CALL(0x0033CCA0u, sub_0033CCA0); /* call 0x0033CCA0 */

loc_0033D301: ;
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x11), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D314; /* je: equal / zero */

loc_0033D307: ;
    edx = MEM32(esi + 0x20);
    eax = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033D314u); RECOMP_ICALL_SAFE(0x003707D5u, _icall_esp); /* manual call 0x003707D5 */
    }

loc_0033D314: ;
    MEM8(esi + 0x11) = 0;

loc_0033D318: ;
    ebp = ebp + 0x24;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033D283; /* jne: not equal / not zero */

loc_0033D322: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0033D325: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033D330
 * Original: 0x0033D330 - 0x0033D40E (222 bytes, 71 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D330(void)
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

loc_0033D330: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ebx = eax + eax * 8;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    SET_LO16(edx, MEM16(edi + 0xC));
    ebx = ebx << 2;
    esi = MEM32(ebx + ecx);
    MEM16(esi + 2) = LO16(edx);
    fp_push(MEMF(edi + 8)); /* fld float */
    PUSH32(esp, 0x0033D35Du); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0033D35D: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(edi + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * (double)SMEM32(edi + 0xC); /* fimul dword ptr [edi + 0xc] */
    fp_top() = fp_top() * MEMF(edi + 8); /* fmul dword ptr [edi + 8] */
    PUSH32(esp, 0x0033D37Fu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0033D37F: ;
    MEM32(esi + 8) = eax;
    SET_LO16(eax, MEM16(edi + 0x10));
    MEM16(esi + 0xE) = LO16(eax);
    eax = MEM32(edi + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0x10));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    MEM16(esi + 0xC) = LO16(eax);
    MEM16(esi + 0x10) = 0;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D3D6; /* jne: not equal / not zero */

loc_0033D3AA: ;
    MEM16(esi) = 0x69;
    SET_LO16(eax, MEM16(edi + 0xC));
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)0x24));
    ecx = ZX16(LO16(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 4));
    ecx = ecx >> 6;
    MEM16(esi + 0xC) = LO16(eax);
    MEM32(esi + 8) = ecx;
    MEM16(esi + 0xE) = 4;
    MEM16(esi + 0x10) = 0x10;
    goto loc_0033D3DB;

loc_0033D3D6: ;
    MEM16(esi) = 1;

loc_0033D3DB: ;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D3F4; /* jne: not equal / not zero */

loc_0033D3E1: ;
    edx = MEM32(ebp + 0x14);
    eax = MEM32(edx + 0x10);
    SET_LO8(ecx, MEM8(eax + ebx + 0x10));
    eax = eax + ebx + 0x10;
    SET_LO8(ecx, LO8(ecx) | 0x10);
    MEM8(eax) = LO8(ecx);

loc_0033D3F4: ;
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ecx + 0x10);
    SET_LO8(ecx, MEM8(edx + ebx + 0x10));
    eax = edx + ebx + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(ecx, LO8(ecx) | 0x20);
    POP32(esp, ebp);
    MEM8(eax) = LO8(ecx);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0033D410
 * Original: 0x0033D410 - 0x0033D45A (74 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D410: ;
    edx = MEM32(ecx + 0x14);
    eax = MEM32(esp + 8);
    edx = MEM32(edx + 0x10);
    eax = eax + eax * 8;
    PUSH32(esp, esi);
    esi = edx + eax * 4;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D434; /* je: equal / zero */

loc_0033D427: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0xC) = ecx;
    goto loc_0033D443;

loc_0033D434: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033D440u); RECOMP_ABI_CALL(0x0033CBA0u, sub_0033CBA0); /* call 0x0033CBA0 */

loc_0033D440: ;
    eax = eax + edi;
    POP32(esp, edi);

loc_0033D443: ;
    MEM32(esi + 8) = eax;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 0x20;
    eax = MEM32(esp + 8);
    edx = MEM32(0x5BC5D8);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0033D460
 * Original: 0x0033D460 - 0x0033D54A (234 bytes, 90 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D460(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033D460: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x14);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ecx = ebp + ebp * 8;
    PUSH32(esp, edi);
    edi = edx + ecx * 4;
    ecx = ebx;
    PUSH32(esp, 0x0033D47Eu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0033D47E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033D484u); RECOMP_ABI_CALL(0x00231770u, sub_00231770); /* call 0x00231770 */

loc_0033D484: ;
    ecx = MEM32(esp + 0x20);
    esp = esp + 4;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DB1FC);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0033D49Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033D49A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033D4AC; /* jne: not equal / not zero */

loc_0033D49E: ;
    edi = MEM32(esp + 0x14);
    edx = MEM32(0x46A728);
    MEM32(edi) = edx;
    goto loc_0033D52A;

loc_0033D4AC: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_0033D4BF; /* jne: not equal / not zero */

loc_0033D4B6: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033D4BDu); RECOMP_ABI_CALL(0x0033CC20u, sub_0033CC20); /* call 0x0033CC20 */

loc_0033D4BD: ;
    goto loc_0033D4EF;

loc_0033D4BF: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0033D4C6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033D4C6: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x0033D4D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033D4D4: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0033D4DEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033D4DE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(edi + 0xC) = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x0033D4EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033D4EF: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0033D4FAu); RECOMP_ABI_CALL(0x001F7ED0u, sub_001F7ED0); /* call 0x001F7ED0 */

loc_0033D4FA: ;
    SET_LO8(edx, MEM8(edi + 0x10));
    ecx = MEM32(edi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    SET_LO8(edx, LO8(edx) | 1);
    PUSH32(esp, ecx);
    MEM32(edi + 8) = eax;
    MEM8(edi + 0x10) = LO8(edx);
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0033D514u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033D514: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0033D51Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033D51B: ;
    MEM8(edi + 0x10) = MEM8(edi + 0x10) | 0x20;
    edi = MEM32(esp + 0x14);
    eax = MEM32(0x5BC5D8);
    MEM32(edi) = eax;

loc_0033D52A: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0033D541; /* jne: not equal / not zero */

loc_0033D53A: ;
    ecx = esi;
    PUSH32(esp, 0x0033D541u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0033D541: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0033D550
 * Original: 0x0033D550 - 0x0033D5A8 (88 bytes, 29 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D550: ;
    edx = MEM32(ecx + 0x14);
    eax = MEM32(esp + 8);
    edx = MEM32(edx + 0x10);
    eax = eax + eax * 8;
    eax = edx + eax * 4;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    MEM32(eax + 0x20) = edx;
    SET_LO8(ebx, MEM8(ecx + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0033D595; /* je: equal / zero */

loc_0033D570: ;
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x10), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D595; /* je: equal / zero */

loc_0033D576: ;
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x11), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033D595; /* jne: not equal / not zero */

loc_0033D57C: ;
    eax = MEM32(eax + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033D586u); RECOMP_ICALL_SAFE(0x003707D5u, _icall_esp); /* manual call 0x003707D5 */
    }

loc_0033D586: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    esp += 16; return; /* ret 12 */

loc_0033D595: ;
    MEM8(eax + 0x11) = MEM8(eax + 0x11) | 8;
    eax = MEM32(esp + 4);
    edx = MEM32(0x5BC5D8);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033D5B0
 * Original: 0x0033D5B0 - 0x0033D5E1 (49 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D5B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x14);
    edx = eax + eax * 8;
    eax = MEM32(ecx + 0x10);
    ecx = eax + edx * 4;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D5DB; /* je: equal / zero */

loc_0033D5C7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033D5D4u); RECOMP_ICALL_SAFE(0x003707B5u, _icall_esp); /* manual call 0x003707B5 */
    }

loc_0033D5D4: ;
    eax = MEM32(esp + 4);
    esp += 8; return; /* ret 4 */

loc_0033D5DB: ;
    eax = MEM32(ecx + 0x20);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033D5F0
 * Original: 0x0033D5F0 - 0x0033D621 (49 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D5F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x14);
    edx = eax + eax * 8;
    eax = MEM32(ecx + 0x10);
    eax = eax + edx * 4;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D61C; /* je: equal / zero */

loc_0033D607: ;
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033D612u); RECOMP_ICALL_SAFE(0x00370799u, _icall_esp); /* manual call 0x00370799 */
    }

loc_0033D612: ;
    eax = MEM32(esp + 4);
    eax = eax & 1;
    esp += 8; return; /* ret 4 */

loc_0033D61C: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033D630
 * Original: 0x0033D630 - 0x0033D6BF (143 bytes, 49 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D630(void)
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

loc_0033D630: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    edi = ecx;
    ecx = MEM32(edi + 0x14);
    edx = eax + eax * 8;
    eax = MEM32(ecx + 0x10);
    esi = eax + edx * 4;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0033D65E; /* jp: parity */

loc_0033D657: ;
    eax = 0xFFFFD8F0u;
    goto loc_0033D679;

loc_0033D65E: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = fp_top() * MEMF(0x3CC238); /* fmul dword ptr [0x3cc238] */
    fp_top() = fp_top() * MEMF(0x3CD358); /* fmul dword ptr [0x3cd358] */
    PUSH32(esp, 0x0033D679u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0033D679: ;
    MEM32(esi + 0x18) = eax;
    SET_LO8(edx, MEM8(edi + 8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    SET_LO8(ecx, 2);
    if (TEST_Z(_fa, _fb)) goto loc_0033D6AB; /* je: equal / zero */

loc_0033D685: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D6AB; /* je: equal / zero */

loc_0033D68A: ;
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x11), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033D6AB; /* jne: not equal / not zero */

loc_0033D690: ;
    ecx = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033D69Au); RECOMP_ICALL_SAFE(0x003706A9u, _icall_esp); /* manual call 0x003706A9 */
    }

loc_0033D69A: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0033D6AB: ;
    MEM8(esi + 0x11) = MEM8(esi + 0x11) | LO8(ecx);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0033D6C0
 * Original: 0x0033D6C0 - 0x0033D7A3 (227 bytes, 73 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D6C0(void)
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

loc_0033D6C0: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x14);
    edx = eax + eax * 8;
    eax = MEM32(ecx + 0x10);
    esi = eax + edx * 4;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0033D722; /* jp: parity */

loc_0033D6E5: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0033D709; /* jp: parity */

loc_0033D700: ;
    fp_pop(); /* fstp st(0) */
    eax = 0xFFFFD8F0u;
    goto loc_0033D75F;

loc_0033D709: ;
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = fp_top() * MEMF(0x3CC238); /* fmul dword ptr [0x3cc238] */
    fp_top() = fp_top() * MEMF(0x3CD358); /* fmul dword ptr [0x3cd358] */
    PUSH32(esp, 0x0033D720u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0033D720: ;
    goto loc_0033D75F;

loc_0033D722: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x14); /* fsub dword ptr [esp + 0x14] */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0033D746; /* jp: parity */

loc_0033D73D: ;
    fp_pop(); /* fstp st(0) */
    eax = 0xFFFFD8F0u;
    goto loc_0033D75D;

loc_0033D746: ;
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = fp_top() * MEMF(0x3CC238); /* fmul dword ptr [0x3cc238] */
    fp_top() = fp_top() * MEMF(0x3CD358); /* fmul dword ptr [0x3cd358] */
    PUSH32(esp, 0x0033D75Du); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0033D75D: ;
    eax = (uint32_t)(-(int32_t)eax);

loc_0033D75F: ;
    MEM32(esi + 0x1C) = eax;
    SET_LO8(eax, MEM8(edi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D78E; /* je: equal / zero */

loc_0033D769: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D78E; /* je: equal / zero */

loc_0033D76F: ;
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x11), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033D78E; /* jne: not equal / not zero */

loc_0033D775: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0033D77Du); RECOMP_ABI_CALL(0x0033CCA0u, sub_0033CCA0); /* call 0x0033CCA0 */

loc_0033D77D: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0033D78E: ;
    MEM8(esi + 0x11) = MEM8(esi + 0x11) | 4;
    eax = MEM32(esp + 0xC);
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0033D7B0
 * Original: 0x0033D7B0 - 0x0033D802 (82 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D7B0: ;
    edx = MEM32(ecx + 0x14);
    edx = MEM32(edx + 0x10);
    eax = MEM32(esp + 8);
    eax = eax + eax * 8;
    eax = edx + eax * 4;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x14) = edx;
    SET_LO8(edx, MEM8(ecx + 8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D7EF; /* je: equal / zero */

loc_0033D7CE: ;
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x10), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D7EF; /* je: equal / zero */

loc_0033D7D4: ;
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x11), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033D7EF; /* jne: not equal / not zero */

loc_0033D7DA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033D7E0u); RECOMP_ABI_CALL(0x0033CD20u, sub_0033CD20); /* call 0x0033CD20 */

loc_0033D7E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    esp += 16; return; /* ret 12 */

loc_0033D7EF: ;
    MEM8(eax + 0x11) = MEM8(eax + 0x11) | 1;
    eax = MEM32(esp + 4);
    edx = MEM32(0x5BC5D8);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033D810
 * Original: 0x0033D810 - 0x0033D83B (43 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D810: ;
    ecx = MEM32(ecx + 0x14);
    eax = MEM32(esp + 4);
    edx = eax + eax * 8;
    eax = MEM32(ecx + 0x10);
    SET_LO8(ecx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    eax = eax + edx * 4 + 0x10;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(ecx) << 2);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 4);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(eax) = LO8(edx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033D840
 * Original: 0x0033D840 - 0x0033D86B (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D840(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033D840: ;
    edx = MEM32(ecx + 0x14);
    edx = MEM32(edx + 0x10);
    eax = MEM32(esp + 4);
    eax = eax + eax * 8;
    eax = edx + eax * 4;
    MEM8(eax + 0x10) = MEM8(eax + 0x10) | 2;
    SET_LO8(edx, MEM8(ecx + 8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D864; /* je: equal / zero */

loc_0033D85B: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0033CF70(); return; /* tail jmp 0x0033CF70 */

loc_0033D864: ;
    MEM8(eax + 0x11) = MEM8(eax + 0x11) | 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033D870
 * Original: 0x0033D870 - 0x0033D897 (39 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D870(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033D870: ;
    edx = MEM32(ecx + 0x14);
    eax = MEM32(esp + 4);
    edx = MEM32(edx + 0x10);
    eax = eax + eax * 8;
    eax = edx + eax * 4;
    SET_LO8(edx, MEM8(ecx + 8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D890; /* je: equal / zero */

loc_0033D887: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0033CD50(); return; /* tail jmp 0x0033CD50 */

loc_0033D890: ;
    MEM8(eax + 0x11) = MEM8(eax + 0x11) | 0x20;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033D8A0
 * Original: 0x0033D8A0 - 0x0033D8CE (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D8A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033D8A0: ;
    edx = MEM32(ecx + 0x14);
    edx = MEM32(edx + 0x10);
    eax = MEM32(esp + 4);
    eax = eax + eax * 8;
    eax = edx + eax * 4;
    MEM8(eax + 0x10) = MEM8(eax + 0x10) & 0xFD;
    SET_LO8(edx, MEM8(ecx + 8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D8C7; /* je: equal / zero */

loc_0033D8BB: ;
    eax = MEM32(eax + 4);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x0037073Du); return; /* manual tail jmp 0x0037073D */

loc_0033D8C7: ;
    MEM8(eax + 0x11) = MEM8(eax + 0x11) | 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033D8D0
 * Original: 0x0033D8D0 - 0x0033D8F4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D8D0(void)
{

loc_0033D8D0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0033D8DBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0033D8DB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4304F8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0033D900
 * Original: 0x0033D900 - 0x0033D941 (65 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D900: ;
    SET_LO8(eax, MEM8(0x5D98BC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033D910; /* jne: not equal / not zero */

loc_0033D909: ;
    MEM8(0x5D98BC) = 1;

loc_0033D910: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x33D8D0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x430550);
    PUSH32(esp, 0x33D010);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5D98B8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0033D93Du); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0033D93D: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0033D950
 * Original: 0x0033D950 - 0x0033D977 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D950: ;
    eax = MEM32(0x5D98B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D964; /* je: equal / zero */

loc_0033D959: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033D976; /* jne: not equal / not zero */

loc_0033D964: ;
    PUSH32(esp, 0x33D070);
    PUSH32(esp, 0x0033D96Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0033D96E: ;
    eax = MEM32(0x5D98B4);
    esp = esp + 4;

loc_0033D976: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0033D980
 * Original: 0x0033D980 - 0x0033D9D6 (86 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D980(void)
{

loc_0033D980: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5D98A8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0033D98Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0033D98F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x479FEC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0033D99Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0033D99F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0033D9A7u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0033D9A7: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0033D9B0u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0033D9B0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x479FE8);
    PUSH32(esp, 0x479FE4);
    PUSH32(esp, 0x479FE0);
    ecx = esi;
    PUSH32(esp, 0x0033D9C7u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0033D9C7: ;
    eax = MEM32(0x5D98A8);
    POP32(esp, edi);
    MEM32(eax + 0x3C) = 0x33D950;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033D9E0
 * Original: 0x0033D9E0 - 0x0033DA21 (65 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D9E0: ;
    SET_LO8(eax, MEM8(0x5D98BC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033D9F0; /* jne: not equal / not zero */

loc_0033D9E9: ;
    MEM8(0x5D98BC) = 1;

loc_0033D9F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x33D980);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x430578);
    PUSH32(esp, 0x33DA50);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5D98A8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0033DA1Du); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0033DA1D: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0033DA30
 * Original: 0x0033DA30 - 0x0033DA4E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033DA30(void)
{

loc_0033DA30: ;
    PUSH32(esp, 0x33D9E0);
    PUSH32(esp, 0x0033DA3Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0033DA3A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5D98A8);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033DA4Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0033DA4D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0033DA50
 * Original: 0x0033DA50 - 0x0033DA77 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033DA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033DA50: ;
    eax = MEM32(0x5D98A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033DA64; /* je: equal / zero */

loc_0033DA59: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033DA76; /* jne: not equal / not zero */

loc_0033DA64: ;
    PUSH32(esp, 0x33D9E0);
    PUSH32(esp, 0x0033DA6Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0033DA6E: ;
    eax = MEM32(0x5D98A8);
    esp = esp + 4;

loc_0033DA76: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0033DA80
 * Original: 0x0033DA80 - 0x0033DB21 (161 bytes, 51 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033DA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033DA80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5D98B4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0033DA90u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0033DA90: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x47A020);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0033DAA0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0033DAA0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0033DAA8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0033DAA8: ;
    MEM16(eax + 0x14) = 4;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0033DAB9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0033DAB9: ;
    ebx = eax;
    eax = MEM32(0x5D98B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033DADE; /* jne: not equal / not zero */

loc_0033DAC4: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033DAD0u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0033DAD0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033DAD6u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0033DAD6: ;
    esp = esp + 8;
    MEM32(0x5D98B8) = eax;

loc_0033DADE: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x0033DAF0u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0033DAF0: ;
    ebx = eax;
    PUSH32(esp, 0x0033DAF7u); RECOMP_ABI_CALL(0x002476C0u, sub_002476C0); /* call 0x002476C0 */

loc_0033DAF7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x47A010);
    PUSH32(esp, 0x47A000);
    PUSH32(esp, 0x479FF0);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0033DB11u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0033DB11: ;
    eax = MEM32(0x5D98B4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x40) = 0x33DA50;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033DB30
 * Original: 0x0033DB30 - 0x0033DB4E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033DB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033DB30: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033DB49; /* jne: not equal / not zero */

loc_0033DB38: ;
    PUSH32(esp, 0x4305DC);
    PUSH32(esp, 0x0033DB42u); RECOMP_ABI_CALL(0x0033EA00u, sub_0033EA00); /* call 0x0033EA00 */

loc_0033DB42: ;
    esp = esp + 4;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_0033DB49: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0033DB50
 * Original: 0x0033DB50 - 0x0033DB86 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033DB50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033DB50: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033DB68; /* jne: not equal / not zero */

loc_0033DB58: ;
    PUSH32(esp, 0x43063C);
    PUSH32(esp, 0x0033DB62u); RECOMP_ABI_CALL(0x0033EA00u, sub_0033EA00); /* call 0x0033EA00 */

loc_0033DB62: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0033DB68: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033DB81; /* jle: less or equal (signed <=) */

loc_0033DB71: ;
    PUSH32(esp, 0x430608);
    PUSH32(esp, 0x0033DB7Bu); RECOMP_ABI_CALL(0x0033EA00u, sub_0033EA00); /* call 0x0033EA00 */

loc_0033DB7B: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0033DB81: ;
    eax = MEM32(ecx + eax * 4 + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0033DB90
 * Original: 0x0033DB90 - 0x0033DBF0 (96 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033DB90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033DB90: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_NZ(_fa, _fb)) goto loc_0033DBA7; /* jne: not equal / not zero */

loc_0033DB99: ;
    POP32(esp, ebp);
    MEM32(esp + 4) = 0x430668;
    g_seh_ebp = ebp; sub_0033EA00(); return; /* tail jmp 0x0033EA00 */

loc_0033DBA7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033DBADu); RECOMP_ABI_CALL(0x0033DB30u, sub_0033DB30); /* call 0x0033DB30 */

loc_0033DBAD: ;
    SET_LO8(eax, MEM8(esi + 1));
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM32(esi + 0x1A8) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0033DBEE; /* je: equal / zero */

loc_0033DBBD: ;
    SET_LO8(eax, MEM8(esi + 3));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033DBED; /* jle: less or equal (signed <=) */

loc_0033DBC7: ;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    goto loc_0033DBD0;

    /* nop */

loc_0033DBD0: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033DBE0; /* je: equal / zero */

loc_0033DBD6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033DBDDu); RECOMP_ABI_CALL(0x00306000u, sub_00306000); /* call 0x00306000 */

loc_0033DBDD: ;
    esp = esp + 8;

loc_0033DBE0: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 3);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033DBD0; /* jl: less (signed <) */

loc_0033DBEC: ;
    POP32(esp, edi);

loc_0033DBED: ;
    POP32(esp, ebx);

loc_0033DBEE: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0033DBF0
 * Original: 0x0033DBF0 - 0x0033DD15 (293 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033DBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033DBF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x1AC);
    ecx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033DC0F; /* je: equal / zero */

loc_0033DC05: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033DD12; /* jne: not equal / not zero */

loc_0033DC0F: ;
    SET_LO8(edx, MEM8(esi + 0x1B0));
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1BC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    MEM32(esi + 0x1BC) = edi;
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0033DC3D; /* jne: not equal / not zero */

loc_0033DC29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1C8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033DC3D; /* jl: less (signed <) */

loc_0033DC31: ;
    eax = MEM32(esi + 0x1C4);
    MEM32(esi + 0x1BC) = eax;

loc_0033DC3D: ;
    _fa = (uint32_t)(MEM8(esi + 0x1B1)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1B1), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033DD11; /* jne: not equal / not zero */

loc_0033DC49: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033DC52u); RECOMP_ABI_CALL(0x0033EBA0u, sub_0033EBA0); /* call 0x0033EBA0 */

loc_0033DC52: ;
    ecx = MEM32(esi + 0x1BC);
    esp = esp + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033DD11; /* jge: greater or equal (signed >=) */

loc_0033DC63: ;
    PUSH32(esp, 0x0033DC68u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0033DC68: ;
    edx = MEM32(esi + 4);
    edi = MEM32(esi + 0x1BC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033DC77u); RECOMP_ABI_CALL(0x0033EBF0u, sub_0033EBF0); /* call 0x0033EBF0 */

loc_0033DC77: ;
    esp = esp + 4;
    eax = eax - 0;
    if ((eax == 0)) goto loc_0033DCB1; /* je: equal / zero */

loc_0033DC7F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033DD0C; /* jne: not equal / not zero */

loc_0033DC86: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033DC91u); RECOMP_ABI_CALL(0x0030D090u, sub_0030D090); /* call 0x0030D090 */

loc_0033DC91: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033DC9Cu); RECOMP_ABI_CALL(0x0030D1E0u, sub_0030D1E0); /* call 0x0030D1E0 */

loc_0033DC9C: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033DCA5u); RECOMP_ABI_CALL(0x0030D100u, sub_0030D100); /* call 0x0030D100 */

loc_0033DCA5: ;
    esp = esp + 0x14;
    PUSH32(esp, 0x0033DCADu); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0033DCAD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0033DCB1: ;
    edx = MEM32(esi + 4);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033DCC5u); RECOMP_ABI_CALL(0x0033EBB0u, sub_0033EBB0); /* call 0x0033EBB0 */

loc_0033DCC5: ;
    eax = MEM32(esp + 0x20);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033DCDFu); RECOMP_ABI_CALL(0x0030D090u, sub_0030D090); /* call 0x0030D090 */

loc_0033DCDF: ;
    edx = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x20);
    eax = edx + ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033DD00u); RECOMP_ABI_CALL(0x0030D1E0u, sub_0030D1E0); /* call 0x0030D1E0 */

loc_0033DD00: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033DD09u); RECOMP_ABI_CALL(0x0030D100u, sub_0030D100); /* call 0x0030D100 */

loc_0033DD09: ;
    esp = esp + 0x24;

loc_0033DD0C: ;
    PUSH32(esp, 0x0033DD11u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0033DD11: ;
    POP32(esp, edi);

loc_0033DD12: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033DD20
 * Original: 0x0033DD20 - 0x0033DDE2 (194 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033DD20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033DD20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033DD2Fu); RECOMP_ABI_CALL(0x0030D6D0u, sub_0030D6D0); /* call 0x0030D6D0 */

loc_0033DD2F: ;
    eax = MEM32(esi + 0x90);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x14); PUSH32(esp, 0x0033DD3Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033DD3B: ;
    SET_LO8(eax, MEM8(esi + 3));
    esp = esp + 8;
    edi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033DD68; /* jle: less or equal (signed <=) */

loc_0033DD47: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x94;
    edi = edi;

loc_0033DD50: ;
    eax = MEM32(ebx);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0033DD58u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033DD58: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 3);
    esp = esp + 4;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033DD50; /* jl: less (signed <) */

loc_0033DD67: ;
    POP32(esp, ebx);

loc_0033DD68: ;
    ecx = MEM32(esi + 0x1D8);
    edx = MEM32(esi + 0x1D4);
    eax = MEM32(esi + 0x1D0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1CC);
    PUSH32(esp, edx);
    edx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033DD8Du); RECOMP_ABI_CALL(0x0030D020u, sub_0030D020); /* call 0x0030D020 */

loc_0033DD8D: ;
    eax = MEM32(esi + 0x118);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033DDA7u); RECOMP_ABI_CALL(0x0030D620u, sub_0030D620); /* call 0x0030D620 */

loc_0033DDA7: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033DDB2u); RECOMP_ABI_CALL(0x0030D090u, sub_0030D090); /* call 0x0030D090 */

loc_0033DDB2: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033DDBDu); RECOMP_ABI_CALL(0x0030D1E0u, sub_0030D1E0); /* call 0x0030D1E0 */

loc_0033DDBD: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033DDC6u); RECOMP_ABI_CALL(0x0030D100u, sub_0030D100); /* call 0x0030D100 */

loc_0033DDC6: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033DDD1u); RECOMP_ABI_CALL(0x0033EB70u, sub_0033EB70); /* call 0x0033EB70 */

loc_0033DDD1: ;
    edx = MEM32(esi + 4);
    esp = esp + 0x3C;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0033EB30(); return; /* tail jmp 0x0033EB30 */

}

/**
 * sub_0033DDF0
 * Original: 0x0033DDF0 - 0x0033E1DA (1002 bytes, 331 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033DDF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033DDF0: ;
    esp = esp - 0xC;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 1 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 4);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ebp;
    ebx = esi + 0xC;
    if (CMP_NE(_fa, _fb)) goto loc_0033E12A; /* jne: not equal / not zero */

loc_0033DE0A: ;
    SET_LO8(eax, MEM8(esi + 3));
    edi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033DE2A; /* jle: less or equal (signed <=) */

loc_0033DE13: ;
    eax = MEM32(ebx + edi * 4);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033DE1Eu); RECOMP_ABI_CALL(0x00306000u, sub_00306000); /* call 0x00306000 */

loc_0033DE1E: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    esp = esp + 8;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033DE13; /* jl: less (signed <) */

loc_0033DE2A: ;
    eax = MEM32(esi + 0x1AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033E0AC; /* jne: not equal / not zero */

loc_0033DE38: ;
    eax = MEM32(esi + 0x1DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033DEEF; /* je: equal / zero */

loc_0033DE46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033DEEF; /* je: equal / zero */

loc_0033DE4F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0033DE55u); RECOMP_ABI_CALL(0x0033EB20u, sub_0033EB20); /* call 0x0033EB20 */

loc_0033DE55: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033DE9A; /* jne: not equal / not zero */

loc_0033DE5C: ;
    SET_LO8(eax, MEM8(esi + 3));
    edi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033DE8C; /* jle: less or equal (signed <=) */

loc_0033DE65: ;
    ebp = esi + 0x94;
    goto loc_0033DE70;

    /* nop */

loc_0033DE70: ;
    eax = MEM32(ebp);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0033DE79u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033DE79: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 3);
    esp = esp + 4;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033DE70; /* jl: less (signed <) */

loc_0033DE88: ;
    ebp = MEM32(esp + 0xC);

loc_0033DE8C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0033DE92u); RECOMP_ABI_CALL(0x0033EB30u, sub_0033EB30); /* call 0x0033EB30 */

loc_0033DE92: ;
    esp = esp + 4;
    goto loc_0033E12A;

loc_0033DE9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033E12A; /* jne: not equal / not zero */

loc_0033DEA3: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0033DEA9u); RECOMP_ABI_CALL(0x0033EB90u, sub_0033EB90); /* call 0x0033EB90 */

loc_0033DEA9: ;
    ebx = eax;
    esp = esp + 4;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033DEE0; /* jle: less or equal (signed <=) */

loc_0033DEB4: ;
    ebp = esi + 0x94;
    /* nop */

loc_0033DEC0: ;
    ecx = MEM32(ebp);
    edx = MEM32(esi + edi * 4 + 0xC);
    eax = esi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033DED1u); RECOMP_ABI_CALL(0x00306540u, sub_00306540); /* call 0x00306540 */

loc_0033DED1: ;
    esp = esp + 8;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033DEC0; /* jl: less (signed <) */

loc_0033DEDC: ;
    ebp = MEM32(esp + 0xC);

loc_0033DEE0: ;
    MEM32(esi + 0x1AC) = 1;
    goto loc_0033E12A;

loc_0033DEEF: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033DEF8u); RECOMP_ABI_CALL(0x0033EB20u, sub_0033EB20); /* call 0x0033EB20 */

loc_0033DEF8: ;
    esp = esp + 4;
    edi = eax;
    PUSH32(esp, 0x0033DF02u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0033DF02: ;
    _fa = (uint32_t)(MEM8(esi + 0x1B2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1B2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033DF27; /* jne: not equal / not zero */

loc_0033DF0B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033DF27; /* je: equal / zero */

loc_0033DF10: ;
    MEM8(esi + 0x1B2) = 0;
    PUSH32(esp, 0x0033DF1Cu); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0033DF1C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033DF22u); RECOMP_ABI_CALL(0x0033DD20u, sub_0033DD20); /* call 0x0033DD20 */

loc_0033DF22: ;
    esp = esp + 4;
    goto loc_0033DF2C;

loc_0033DF27: ;
    PUSH32(esp, 0x0033DF2Cu); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0033DF2C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0033DF32u); RECOMP_ABI_CALL(0x0033EB20u, sub_0033EB20); /* call 0x0033EB20 */

loc_0033DF32: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033E12A; /* jne: not equal / not zero */

loc_0033DF3E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0033DF44u); RECOMP_ABI_CALL(0x0033EB90u, sub_0033EB90); /* call 0x0033EB90 */

loc_0033DF44: ;
    PUSH32(esp, ebp);
    ebx = eax;
    PUSH32(esp, 0x0033DF4Cu); RECOMP_ABI_CALL(0x0033EBF0u, sub_0033EBF0); /* call 0x0033EBF0 */

loc_0033DF4C: ;
    esp = esp + 8;
    eax = eax - 0;
    if ((eax == 0)) goto loc_0033DFB8; /* je: equal / zero */

loc_0033DF54: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033DEE0; /* jne: not equal / not zero */

loc_0033DF57: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033DF62u); RECOMP_ABI_CALL(0x0030D1E0u, sub_0030D1E0); /* call 0x0030D1E0 */

loc_0033DF62: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0033DF6Au); RECOMP_ABI_CALL(0x0033EB70u, sub_0033EB70); /* call 0x0033EB70 */

loc_0033DF6A: ;
    SET_LO8(eax, MEM8(esi + 0x1B0));
    esp = esp + 0x10;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033DF80; /* je: equal / zero */

loc_0033DF77: ;
    _fa = (uint32_t)(MEM8(esi + 0x1B1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1B1), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033DF8B; /* jne: not equal / not zero */

loc_0033DF80: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0033DF88u); RECOMP_ABI_CALL(0x0033EB80u, sub_0033EB80); /* call 0x0033EB80 */

loc_0033DF88: ;
    esp = esp + 8;

loc_0033DF8B: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033DF96u); RECOMP_ABI_CALL(0x00306220u, sub_00306220); /* call 0x00306220 */

loc_0033DF96: ;
    eax = MEM32(esi + 0x94);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033DFA6u); RECOMP_ABI_CALL(0x00306540u, sub_00306540); /* call 0x00306540 */

loc_0033DFA6: ;
    esp = esp + 0x10;
    MEM32(esi + 0x1AC) = 1;
    goto loc_0033E12A;

loc_0033DFB8: ;
    edi = MEM32(esi + 0x1C0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 0x1BC) = edi;
    if (TEST_S(_fas, _fbs)) goto loc_0033E0A1; /* jl: less (signed <) */

loc_0033DFCC: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033DFD5u); RECOMP_ABI_CALL(0x0033EBA0u, sub_0033EBA0); /* call 0x0033EBA0 */

loc_0033DFD5: ;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033E0A1; /* jge: greater or equal (signed >=) */

loc_0033DFE0: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0033DFF1u); RECOMP_ABI_CALL(0x0033EBB0u, sub_0033EBB0); /* call 0x0033EBB0 */

loc_0033DFF1: ;
    eax = MEM32(esp + 0x20);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    eax = eax + edx;
    edx = MEM32(esi + 8);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033E00Bu); RECOMP_ABI_CALL(0x0030D090u, sub_0030D090); /* call 0x0030D090 */

loc_0033E00B: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    eax = eax + ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    eax = eax + edx;
    edx = MEM32(esi + 8);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033E02Bu); RECOMP_ABI_CALL(0x0030D1E0u, sub_0030D1E0); /* call 0x0030D1E0 */

loc_0033E02B: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0033E033u); RECOMP_ABI_CALL(0x0033EB70u, sub_0033EB70); /* call 0x0033EB70 */

loc_0033E033: ;
    SET_LO8(eax, MEM8(esi + 0x1B0));
    esp = esp + 0x28;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033E049; /* je: equal / zero */

loc_0033E040: ;
    _fa = (uint32_t)(MEM8(esi + 0x1B1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1B1), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033E054; /* jne: not equal / not zero */

loc_0033E049: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0033E051u); RECOMP_ABI_CALL(0x0033EB80u, sub_0033EB80); /* call 0x0033EB80 */

loc_0033E051: ;
    esp = esp + 8;

loc_0033E054: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033DEE0; /* jle: less or equal (signed <=) */

loc_0033E05E: ;
    ebp = esi + 0x94;

loc_0033E064: ;
    eax = MEM32(ebp + -136);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033E072u); RECOMP_ABI_CALL(0x00306220u, sub_00306220); /* call 0x00306220 */

loc_0033E072: ;
    ecx = MEM32(ebp);
    edx = MEM32(esi + edi * 4 + 0xC);
    eax = esi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033E083u); RECOMP_ABI_CALL(0x00306540u, sub_00306540); /* call 0x00306540 */

loc_0033E083: ;
    esp = esp + 0x10;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033E064; /* jl: less (signed <) */

loc_0033E08E: ;
    ebp = MEM32(esp + 0xC);
    MEM32(esi + 0x1AC) = 1;
    goto loc_0033E12A;

loc_0033E0A1: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM8(esi + 1) = 3;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0033E0AC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0033E0B2u); RECOMP_ABI_CALL(0x0033EB90u, sub_0033EB90); /* call 0x0033EB90 */

loc_0033E0B2: ;
    ebx = eax;
    esp = esp + 4;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033E0E4; /* jle: less or equal (signed <=) */

loc_0033E0BD: ;
    /* nop */

loc_0033E0C0: ;
    eax = esi + 0xC;
    eax = MEM32(eax + edi * 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033E0CCu); RECOMP_ABI_CALL(0x00305B10u, sub_00305B10); /* call 0x00305B10 */

loc_0033E0CC: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033E0E0; /* je: equal / zero */

loc_0033E0D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033E0E4; /* jne: not equal / not zero */

loc_0033E0D9: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033E0C0; /* jl: less (signed <) */

loc_0033E0DE: ;
    goto loc_0033E0E4;

loc_0033E0E0: ;
    MEM8(esi + 1) = 4;

loc_0033E0E4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033E12A; /* jne: not equal / not zero */

loc_0033E0E8: ;
    PUSH32(esp, 0x0033E0EDu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0033E0ED: ;
    eax = MEM32(esi + 0x1A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033E117; /* jne: not equal / not zero */

loc_0033E0F7: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033E117; /* jle: less or equal (signed <=) */

loc_0033E0FD: ;
    /* nop */

loc_0033E100: ;
    ecx = MEM32(esi + edi * 4 + 0xC);
    eax = esi + 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033E10Fu); RECOMP_ABI_CALL(0x00306000u, sub_00306000); /* call 0x00306000 */

loc_0033E10F: ;
    esp = esp + 8;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033E100; /* jl: less (signed <) */

loc_0033E117: ;
    MEM8(esi + 1) = 2;
    MEM32(esi + 0x1AC) = 0;
    PUSH32(esp, 0x0033E12Au); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0033E12A: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033E1B1; /* jne: not equal / not zero */

loc_0033E134: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0033E13Au); RECOMP_ABI_CALL(0x0033EBF0u, sub_0033EBF0); /* call 0x0033EBF0 */

loc_0033E13A: ;
    esp = esp + 4;
    eax = eax - 0;
    if ((eax == 0)) goto loc_0033E16B; /* je: equal / zero */

loc_0033E142: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033E1B1; /* jne: not equal / not zero */

loc_0033E145: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033E14Eu); RECOMP_ABI_CALL(0x0033EB20u, sub_0033EB20); /* call 0x0033EB20 */

loc_0033E14E: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033E1B1; /* je: equal / zero */

loc_0033E156: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033E15Fu); RECOMP_ABI_CALL(0x00305B10u, sub_00305B10); /* call 0x00305B10 */

loc_0033E15F: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033E1AD; /* je: equal / zero */

loc_0033E167: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    goto loc_0033E1AB;

loc_0033E16B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0033E171u); RECOMP_ABI_CALL(0x0033EB20u, sub_0033EB20); /* call 0x0033EB20 */

loc_0033E171: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033E1B1; /* jne: not equal / not zero */

loc_0033E179: ;
    SET_LO8(eax, MEM8(esi + 3));
    edi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033E1A5; /* jle: less or equal (signed <=) */

loc_0033E182: ;
    ebx = esi + 0xC;

loc_0033E185: ;
    ecx = MEM32(ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033E18Du); RECOMP_ABI_CALL(0x00305B10u, sub_00305B10); /* call 0x00305B10 */

loc_0033E18D: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033E199; /* je: equal / zero */

loc_0033E195: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033E1A5; /* jne: not equal / not zero */

loc_0033E199: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 3);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033E185; /* jl: less (signed <) */

loc_0033E1A5: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 3);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */

loc_0033E1AB: ;
    if (_flags /* jne: not equal / not zero */) goto loc_0033E1B1;

loc_0033E1AD: ;
    MEM8(esi + 1) = 3;

loc_0033E1B1: ;
    PUSH32(esp, 0x0033E1B6u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0033E1B6: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033E1CE; /* je: equal / zero */

loc_0033E1BD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033E1C3u); RECOMP_ABI_CALL(0x0033EB20u, sub_0033EB20); /* call 0x0033EB20 */

loc_0033E1C3: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033E1CE; /* jne: not equal / not zero */

loc_0033E1CB: ;
    MEM8(esi + 1) = LO8(eax);

loc_0033E1CE: ;
    PUSH32(esp, 0x0033E1D3u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0033E1D3: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0033E1E0
 * Original: 0x0033E1E0 - 0x0033E27C (156 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E1E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033E1E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033E1FB; /* jne: not equal / not zero */

loc_0033E1EC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(esp + 4) = 0x430694;
    g_seh_ebp = ebp; sub_0033EA00(); return; /* tail jmp 0x0033EA00 */

loc_0033E1FB: ;
    SET_LO8(eax, MEM8(esi + 3));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033E21E; /* jle: less or equal (signed <=) */

loc_0033E205: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033E20Cu); RECOMP_ABI_CALL(0x0033DB50u, sub_0033DB50); /* call 0x0033DB50 */

loc_0033E20C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033E212u); RECOMP_ABI_CALL(0x00305A90u, sub_00305A90); /* call 0x00305A90 */

loc_0033E212: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 3);
    esp = esp + 0xC;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033E205; /* jl: less (signed <) */

loc_0033E21E: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0033E22F; /* je: equal / zero */

loc_0033E226: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033E22Cu); RECOMP_ABI_CALL(0x0030D160u, sub_0030D160); /* call 0x0030D160 */

loc_0033E22C: ;
    esp = esp + 4;

loc_0033E22F: ;
    PUSH32(esp, 0x0033E234u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0033E234: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033E244; /* je: equal / zero */

loc_0033E23B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033E241u); RECOMP_ABI_CALL(0x0033EB50u, sub_0033EB50); /* call 0x0033EB50 */

loc_0033E241: ;
    esp = esp + 4;

loc_0033E244: ;
    _fa = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1DC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033E266; /* jne: not equal / not zero */

loc_0033E24D: ;
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x90) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0033E266; /* je: equal / zero */

loc_0033E25D: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x0033E263u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033E263: ;
    esp = esp + 4;

loc_0033E266: ;
    MEM32(esi + 0x90) = ebx;
    MEM8(esi + 1) = LO8(ebx);
    MEM32(esi + 0x1AC) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

}

/**
 * sub_0033E280
 * Original: 0x0033E280 - 0x0033E29D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E280(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033E280: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033E286u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0033E286: ;
    eax = MEM32(esp + 0xC);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033E294u); RECOMP_ABI_CALL(0x0033DB90u, sub_0033DB90); /* call 0x0033DB90 */

loc_0033E294: ;
    esp = esp + 4;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

}

/**
 * sub_0033E2A0
 * Original: 0x0033E2A0 - 0x0033E2C7 (39 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E2A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E2A0: ;
    PUSH32(esp, 0x5D99C8);
    PUSH32(esp, 0x0033E2AAu); RECOMP_ABI_CALL(0x0030BF30u, sub_0030BF30); /* call 0x0030BF30 */

loc_0033E2AA: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033E2C6; /* je: equal / zero */

loc_0033E2B1: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x0033E2BBu); RECOMP_ABI_CALL(0x0033DDF0u, sub_0033DDF0); /* call 0x0033DDF0 */

loc_0033E2BB: ;
    MEM32(0x5D99C8) = 0;
    POP32(esp, esi);

loc_0033E2C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0033E2D0
 * Original: 0x0033E2D0 - 0x0033E2F4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E2D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E2D0: ;
    PUSH32(esp, esi);
    esi = 0x6F0700;

loc_0033E2D6: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033E2E4; /* jne: not equal / not zero */

loc_0033E2DB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033E2E1u); RECOMP_ABI_CALL(0x0033E2A0u, sub_0033E2A0); /* call 0x0033E2A0 */

loc_0033E2E1: ;
    esp = esp + 4;

loc_0033E2E4: ;
    esi = esi + 0x21C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F0F70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6F0F70 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033E2D6; /* jl: less (signed <) */

loc_0033E2F2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033E300
 * Original: 0x0033E300 - 0x0033E30D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0033E300(void)
{

loc_0033E300: ;
    PUSH32(esp, 0x0033E305u); RECOMP_ABI_CALL(0x0033E2D0u, sub_0033E2D0); /* call 0x0033E2D0 */

loc_0033E305: ;
    PUSH32(esp, 0x0033E30Au); RECOMP_ABI_CALL(0x0033F450u, sub_0033F450); /* call 0x0033F450 */

loc_0033E30A: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0033E310
 * Original: 0x0033E310 - 0x0033E31D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0033E310(void)
{

loc_0033E310: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0033E317u); RECOMP_ABI_CALL(0x0033E300u, sub_0033E300); /* call 0x0033E300 */

loc_0033E317: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0033E320
 * Original: 0x0033E320 - 0x0033E39A (122 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E320: ;
    eax = MEM32(0x4305A8);
    eax = MEM32(0x5D99C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033E393; /* jne: not equal / not zero */

loc_0033E32E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033E334u); RECOMP_ABI_CALL(0x0033EA30u, sub_0033EA30); /* call 0x0033EA30 */

loc_0033E334: ;
    eax = 0; /* xor self */
    ecx = 0x21C;
    edi = 0x6F0700;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x0033E347u); RECOMP_ABI_CALL(0x003052E0u, sub_003052E0); /* call 0x003052E0 */

loc_0033E347: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    POP32(esp, edi);
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_0033E37F; /* jne: not equal / not zero */

loc_0033E34F: ;
    PUSH32(esp, 0x33E300);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0033E35Du); RECOMP_ABI_CALL(0x0030BE80u, sub_0030BE80); /* call 0x0030BE80 */

loc_0033E35D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2123A0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0033E36Bu); RECOMP_ABI_CALL(0x0030BDD0u, sub_0030BDD0); /* call 0x0030BDD0 */

loc_0033E36B: ;
    MEM32(0x5D99C4) = eax;
    eax = MEM32(0x5D99C0);
    esp = esp + 0x1C;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x5D99C0) = eax;
    esp += 4; return; /* ret */

loc_0033E37F: ;
    PUSH32(esp, 0x33E310);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0033E38Bu); RECOMP_ABI_CALL(0x0030BDD0u, sub_0030BDD0); /* call 0x0030BDD0 */

loc_0033E38B: ;
    esp = esp + 0xC;
    MEM32(0x5D99C4) = eax;

loc_0033E393: ;
    MEM32(0x5D99C0) = MEM32(0x5D99C0) + 1;
    _fa = (uint32_t)(MEM32(0x5D99C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0033E3A0
 * Original: 0x0033E3A0 - 0x0033E48F (239 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E3A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033E3A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033E3B7; /* jne: not equal / not zero */

loc_0033E3A9: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0x4306C0;
    g_seh_ebp = ebp; sub_0033EA00(); return; /* tail jmp 0x0033EA00 */

loc_0033E3B7: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033E3BEu); RECOMP_ABI_CALL(0x0033E1E0u, sub_0033E1E0); /* call 0x0033E1E0 */

loc_0033E3BE: ;
    edi = MEM32(esi + 8);
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033E3E2; /* je: equal / zero */

loc_0033E3C8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(esi + 8) = 0;
    PUSH32(esp, 0x0033E3D9u); RECOMP_ABI_CALL(0x0030D1C0u, sub_0030D1C0); /* call 0x0030D1C0 */

loc_0033E3D9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033E3DFu); RECOMP_ABI_CALL(0x0030D730u, sub_0030D730); /* call 0x0030D730 */

loc_0033E3DF: ;
    esp = esp + 0x10;

loc_0033E3E2: ;
    SET_LO8(eax, MEM8(esi + 3));
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033E411; /* jle: less or equal (signed <=) */

loc_0033E3EC: ;
    edi = esi + 0xC;
    /* nop */

loc_0033E3F0: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033E405; /* je: equal / zero */

loc_0033E3F6: ;
    PUSH32(esp, eax);
    MEM32(edi) = 0;
    PUSH32(esp, 0x0033E402u); RECOMP_ABI_CALL(0x00306410u, sub_00306410); /* call 0x00306410 */

loc_0033E402: ;
    esp = esp + 4;

loc_0033E405: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 3);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033E3F0; /* jl: less (signed <) */

loc_0033E411: ;
    PUSH32(esp, 0x0033E416u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0033E416: ;
    SET_LO8(eax, MEM8(esi + 3));
    ebp = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033E446; /* jle: less or equal (signed <=) */

loc_0033E41F: ;
    edi = esi + 0x94;

loc_0033E425: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033E43A; /* je: equal / zero */

loc_0033E42B: ;
    MEM32(edi) = 0;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x0033E437u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033E437: ;
    esp = esp + 4;

loc_0033E43A: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 3);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033E425; /* jl: less (signed <) */

loc_0033E446: ;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ebp);
    if (TEST_Z(_fa, _fb)) goto loc_0033E464; /* je: equal / zero */

loc_0033E451: ;
    MEM32(esi + 0x8C) = 0;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x0033E461u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033E461: ;
    esp = esp + 4;

loc_0033E464: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033E47B; /* je: equal / zero */

loc_0033E46B: ;
    PUSH32(esp, eax);
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x0033E478u); RECOMP_ABI_CALL(0x0033EB00u, sub_0033EB00); /* call 0x0033EB00 */

loc_0033E478: ;
    esp = esp + 4;

loc_0033E47B: ;
    eax = 0; /* xor self */
    edi = esi;
    ecx = 0x87;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM8(esi) = LO8(eax);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

}

/**
 * sub_0033E490
 * Original: 0x0033E490 - 0x0033E4E5 (85 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E490(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033E490: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0033E4D5; /* je: equal / zero */

loc_0033E49A: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033E4D5; /* je: equal / zero */

loc_0033E4A2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033E4A8u); RECOMP_ABI_CALL(0x0033E1E0u, sub_0033E1E0); /* call 0x0033E1E0 */

loc_0033E4A8: ;
    PUSH32(esp, 0x0033E4ADu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0033E4AD: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi + 0x90) = edi;
    PUSH32(esp, 0x0033E4BDu); RECOMP_ABI_CALL(0x0033EB60u, sub_0033EB60); /* call 0x0033EB60 */

loc_0033E4BD: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    MEM32(esi + 0x1DC) = 3;
    MEM8(esi + 1) = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_0033E4D5: ;
    PUSH32(esp, 0x4306EC);
    PUSH32(esp, 0x0033E4DFu); RECOMP_ABI_CALL(0x0033EA00u, sub_0033EA00); /* call 0x0033EA00 */

loc_0033E4DF: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033E4F0
 * Original: 0x0033E4F0 - 0x0033E54A (90 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E4F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033E4F0: ;
    MEM32(0x5D99C0) = MEM32(0x5D99C0) - 1;
    _fa = (uint32_t)(MEM32(0x5D99C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033E549; /* jne: not equal / not zero */

loc_0033E4F8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x6F0700;
    /* nop */

loc_0033E500: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033E50E; /* jne: not equal / not zero */

loc_0033E505: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033E50Bu); RECOMP_ABI_CALL(0x0033E3A0u, sub_0033E3A0); /* call 0x0033E3A0 */

loc_0033E50B: ;
    esp = esp + 4;

loc_0033E50E: ;
    esi = esi + 0x21C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F0F70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6F0F70 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033E500; /* jl: less (signed <) */

loc_0033E51C: ;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = 0x21C;
    edi = 0x6F0700;
    PUSH32(esp, 2);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x0033E532u); RECOMP_ABI_CALL(0x0030BE30u, sub_0030BE30); /* call 0x0030BE30 */

loc_0033E532: ;
    eax = MEM32(0x5D99C4);
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0033E53Fu); RECOMP_ABI_CALL(0x0030BE30u, sub_0030BE30); /* call 0x0030BE30 */

loc_0033E53F: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033EA60(); return; /* tail jmp 0x0033EA60 */

loc_0033E549: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0033E550
 * Original: 0x0033E550 - 0x0033E770 (544 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E550(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033E550: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = eax + 0x3F;
    ebp = ebp & 0xFFFFFFC0u;
    edx = eax;
    edx = edx - ebp;
    edx = edx + ecx;
    ebx = MEM32(esp + 0x18);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x40C0);
    ebx = ebx + 0x7F;
    ebx = ebx & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 8) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0033E58E; /* jne: not equal / not zero */

loc_0033E579: ;
    PUSH32(esp, 0x430718);
    PUSH32(esp, 0x0033E583u); RECOMP_ABI_CALL(0x0033EA00u, sub_0033EA00); /* call 0x0033EA00 */

loc_0033E583: ;
    esp = esp + 4;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0033E58E: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    eax = 0x6F0700;

loc_0033E596: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033E5A8; /* je: equal / zero */

loc_0033E59B: ;
    eax = eax + 0x21C;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F0F70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6F0F70 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033E596; /* jl: less (signed <) */

loc_0033E5A8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033E769; /* je: equal / zero */

loc_0033E5B3: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x21C);
    esi = esi + 0x6F0700;
    PUSH32(esp, edi);
    ecx = 0x87;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    SET_LO8(eax, MEM8(esp + 0x20));
    MEM8(esi + 2) = LO8(eax);
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x1A0) = 0x2000;
    MEM32(esi + 0x1A4) = 0x40;
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033E67D; /* jle: less or equal (signed <=) */

loc_0033E5F8: ;
    edi = esi + 0x120;
    edi = edi;

loc_0033E600: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033E60Cu); RECOMP_ABI_CALL(0x00306590u, sub_00306590); /* call 0x00306590 */

loc_0033E60C: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edi + -276) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0033E702; /* je: equal / zero */

loc_0033E61D: ;
    eax = MEM32(esp + 0x10);
    ebp = ebp + ebx;
    edx = 0xFFFFDFC0u;
    MEM32(edi) = ebp;
    edx = edx - ebx;
    ebp = ebp + 0x2040;
    eax = eax + edx;
    MEM32(esp + 0x10) = eax;
    if (((int32_t)eax < 0)) goto loc_0033E702; /* js: sign (negative) */

loc_0033E63E: ;
    eax = MEM32(esi + 0x1A4);
    ecx = MEM32(esi + 0x1A0);
    edx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033E654u); RECOMP_ABI_CALL(0x0030F470u, sub_0030F470); /* call 0x0030F470 */

loc_0033E654: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edi + -140) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0033E702; /* je: equal / zero */

loc_0033E665: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0033E600; /* jl: less (signed <) */

loc_0033E679: ;
    edx = MEM32(esp + 0x10);

loc_0033E67D: ;
    eax = edx + -8192;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    eax = eax << 0xB;
    PUSH32(esp, 0x2000);
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    PUSH32(esp, ebp);
    MEM32(esi + 0x118) = eax;
    MEM32(esi + 0x11C) = 0x2000;
    MEM32(esi + 0x114) = ebp;
    MEM32(esi + 0x90) = edi;
    PUSH32(esp, 0x0033E6BCu); RECOMP_ABI_CALL(0x0030F470u, sub_0030F470); /* call 0x0030F470 */

loc_0033E6BC: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x8C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0033E702; /* je: equal / zero */

loc_0033E6C9: ;
    ecx = MEM32(esi + 0x90);
    ebx = MEM32(esp + 0x1C);
    eax = esi + 0x94;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0033E6E1u); RECOMP_ABI_CALL(0x0033F090u, sub_0033F090); /* call 0x0033F090 */

loc_0033E6E1: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0033E702; /* je: equal / zero */

loc_0033E6EB: ;
    edx = MEM32(esi + 0x8C);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033E6F8u); RECOMP_ABI_CALL(0x0030CFE0u, sub_0030CFE0); /* call 0x0030CFE0 */

loc_0033E6F8: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0033E715; /* jne: not equal / not zero */

loc_0033E702: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033E708u); RECOMP_ABI_CALL(0x0033E3A0u, sub_0033E3A0); /* call 0x0033E3A0 */

loc_0033E708: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0033E715: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x33DBF0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033E721u); RECOMP_ABI_CALL(0x0030D1C0u, sub_0030D1C0); /* call 0x0030D1C0 */

loc_0033E721: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    MEM8(esi + 2) = LO8(eax);
    eax = 1;
    esp = esp + 0xC;
    MEM32(esi + 0x1A8) = edi;
    MEM8(esi + 0x1B1) = LO8(eax);
    MEM32(esi + 0x1B8) = edi;
    MEM32(esi + 0x1C0) = edi;
    MEM32(esi + 0x1BC) = edi;
    MEM32(esi + 0x1C4) = edi;
    MEM32(esi + 0x1C8) = eax;
    MEM8(esi) = LO8(eax);
    MEM8(esi + 3) = LO8(ebx);
    MEM8(esi + 0x1B0) = 0;
    eax = esi;
    POP32(esp, edi);

loc_0033E769: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0033E770
 * Original: 0x0033E770 - 0x0033E79B (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E770(void)
{

loc_0033E770: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033E776u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0033E776: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x0033E78Du); RECOMP_ABI_CALL(0x0033E550u, sub_0033E550); /* call 0x0033E550 */

loc_0033E78D: ;
    esp = esp + 8;
    esi = eax;
    PUSH32(esp, 0x0033E797u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0033E797: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033E7A0
 * Original: 0x0033E7A0 - 0x0033E850 (176 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E7A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033E7A0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    eax = 1;
    if (CMP_A(_fa, _fb)) goto loc_0033E84F; /* ja: above (unsigned >) */

loc_0033E7AE: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x33E850); /* switch: 9 entries, 9 targets */
    if (_jt == 0x0033E7B5u) goto loc_0033E7B5;
    if (_jt == 0x0033E7BDu) goto loc_0033E7BD;
    if (_jt == 0x0033E7CBu) goto loc_0033E7CB;
    if (_jt == 0x0033E7D9u) goto loc_0033E7D9;
    if (_jt == 0x0033E7E7u) goto loc_0033E7E7;
    if (_jt == 0x0033E7F5u) goto loc_0033E7F5;
    if (_jt == 0x0033E803u) goto loc_0033E803;
    if (_jt == 0x0033E81Au) goto loc_0033E81A;
    if (_jt == 0x0033E835u) goto loc_0033E835;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0033E7B5: ;
    edx = 0; /* xor self */
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    esp += 4; return; /* ret */

loc_0033E7BD: ;
    MEM32(ecx) = 1;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

loc_0033E7CB: ;
    MEM32(ecx) = 4;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

loc_0033E7D9: ;
    MEM32(ecx) = 5;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

loc_0033E7E7: ;
    MEM32(ecx) = 2;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

loc_0033E7F5: ;
    MEM32(ecx) = 3;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

loc_0033E803: ;
    edx = 0; /* xor self */
    MEM32(ecx) = edx;
    MEM32(ecx + 8) = 1;
    eax = 2;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 4) = edx;
    esp += 4; return; /* ret */

loc_0033E81A: ;
    edx = 0; /* xor self */
    MEM32(ecx) = 4;
    MEM32(ecx + 8) = 5;
    eax = 2;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 4) = edx;
    esp += 4; return; /* ret */

loc_0033E835: ;
    edx = 0; /* xor self */
    MEM32(ecx) = 2;
    MEM32(ecx + 8) = 3;
    eax = 2;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 4) = edx;

loc_0033E84F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0033E880
 * Original: 0x0033E880 - 0x0033E8AB (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E880(void)
{

loc_0033E880: ;
    esp = esp - 0x48;
    edx = MEM32(esp + 0x50);
    ecx = esp + 8;
    PUSH32(esp, 0x0033E890u); RECOMP_ABI_CALL(0x0033E7A0u, sub_0033E7A0); /* call 0x0033E7A0 */

loc_0033E890: ;
    edx = MEM32(esp + 0x4C);
    MEM32(esp) = eax;
    eax = ecx;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0033E8A7u); RECOMP_ABI_CALL(0x00309670u, sub_00309670); /* call 0x00309670 */

loc_0033E8A7: ;
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_0033E8B0
 * Original: 0x0033E8B0 - 0x0033E8B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E8B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E8B0: ;
    MEM32(0x5D99D0) = MEM32(0x5D99D0) + 1;
    _fa = (uint32_t)(MEM32(0x5D99D0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0033E8C0
 * Original: 0x0033E8C0 - 0x0033E8C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E8C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E8C0: ;
    MEM32(0x5D99D0) = MEM32(0x5D99D0) - 1;
    _fa = (uint32_t)(MEM32(0x5D99D0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0033E8D0
 * Original: 0x0033E8D0 - 0x0033E9F1 (289 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E8D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033E8D0: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033E8DBu); RECOMP_ABI_CALL(0x00340760u, sub_00340760); /* call 0x00340760 */

loc_0033E8DB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x6F0300);
    PUSH32(esp, 0x0033E8ECu); RECOMP_ABI_CALL(0x0030F470u, sub_0030F470); /* call 0x0030F470 */

loc_0033E8EC: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x6F02C0);
    ebx = eax;
    PUSH32(esp, 0x0033E8FAu); RECOMP_ABI_CALL(0x0030F810u, sub_0030F810); /* call 0x0030F810 */

loc_0033E8FA: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x6F02E0);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x0033E90Au); RECOMP_ABI_CALL(0x0030F810u, sub_0030F810); /* call 0x0030F810 */

loc_0033E90A: ;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esp + 0x44);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, ebx);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    MEM32(esp + 0x50) = esi;
    PUSH32(esp, 0x0033E926u); RECOMP_ABI_CALL(0x003407A0u, sub_003407A0); /* call 0x003407A0 */

loc_0033E926: ;
    edx = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x54);
    ebp = eax;
    eax = MEM32(esp + 0x58);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0033E93Du); RECOMP_ABI_CALL(0x00340A60u, sub_00340A60); /* call 0x00340A60 */

loc_0033E93D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0033E943u); RECOMP_ABI_CALL(0x00340940u, sub_00340940); /* call 0x00340940 */

loc_0033E943: ;
    PUSH32(esp, 0x0033E948u); RECOMP_ABI_CALL(0x00340C20u, sub_00340C20); /* call 0x00340C20 */

loc_0033E948: ;
    edx = MEM32(ebx);
    eax = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x400);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0033E95Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033E95A: ;
    eax = MEM32(esp + 0x5C);
    esp = esp + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033E967; /* jne: not equal / not zero */

loc_0033E965: ;
    goto loc_0033E965;

loc_0033E967: ;
    ecx = MEM32(esi);
    edx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x0033E975u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033E975: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x30);
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033E986; /* jge: greater or equal (signed >=) */

loc_0033E984: ;
    goto loc_0033E984;

loc_0033E986: ;
    esi = MEM32(esp + 0xC);
    eax = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    edx = esp + 0x10;
    ecx = eax;
    PUSH32(esp, edx);
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    ecx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x0033E9AAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033E9AA: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(eax);
    edx = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x0033E9BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033E9BB: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0033E9C1u); RECOMP_ABI_CALL(0x00340A10u, sub_00340A10); /* call 0x00340A10 */

loc_0033E9C1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0033E9C7u); RECOMP_ABI_CALL(0x003408F0u, sub_003408F0); /* call 0x003408F0 */

loc_0033E9C7: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0033E9CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033E9CD: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x0033E9D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033E9D7: ;
    eax = MEM32(esp + 0x40);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0033E9E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033E9E1: ;
    esp = esp + 0x2C;
    PUSH32(esp, 0x0033E9E9u); RECOMP_ABI_CALL(0x00340780u, sub_00340780); /* call 0x00340780 */

loc_0033E9E9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0033EA00
 * Original: 0x0033EA00 - 0x0033EA05 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EA00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033EA00: ;
    g_seh_ebp = ebp; sub_00307410(); return; /* tail jmp 0x00307410 */

}

/**
 * sub_0033EA10
 * Original: 0x0033EA10 - 0x0033EA15 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EA10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033EA10: ;
    g_seh_ebp = ebp; sub_0030BAA0(); return; /* tail jmp 0x0030BAA0 */

}

/**
 * sub_0033EA20
 * Original: 0x0033EA20 - 0x0033EA25 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EA20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033EA20: ;
    g_seh_ebp = ebp; sub_0030BDA0(); return; /* tail jmp 0x0030BDA0 */

}

/**
 * sub_0033EA30
 * Original: 0x0033EA30 - 0x0033EA59 (41 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EA30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033EA30: ;
    PUSH32(esp, 0x0033EA35u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0033EA35: ;
    eax = MEM32(0x5D99D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033EA4E; /* jne: not equal / not zero */

loc_0033EA3E: ;
    PUSH32(esp, edi);
    ecx = 0x195C;
    eax = 0; /* xor self */
    edi = 0x6E9D40;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_0033EA4E: ;
    MEM32(0x5D99D4) = MEM32(0x5D99D4) + 1;
    _fa = (uint32_t)(MEM32(0x5D99D4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

}

/**
 * sub_0033EA60
 * Original: 0x0033EA60 - 0x0033EA82 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EA60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033EA60: ;
    PUSH32(esp, 0x0033EA65u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0033EA65: ;
    MEM32(0x5D99D4) = MEM32(0x5D99D4) - 1;
    _fa = (uint32_t)(MEM32(0x5D99D4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033EA7D; /* jne: not equal / not zero */

loc_0033EA6D: ;
    PUSH32(esp, edi);
    ecx = 0x195C;
    eax = 0; /* xor self */
    edi = 0x6E9D40;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_0033EA7D: ;
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

}

/**
 * sub_0033EA90
 * Original: 0x0033EA90 - 0x0033EAF2 (98 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EA90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033EA90: ;
    eax = 0; /* xor self */
    ecx = 0x6E9D40;

loc_0033EA97: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EAAB; /* je: equal / zero */

loc_0033EA9C: ;
    ecx = ecx + 0x195C;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F02B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6F02B0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033EA97; /* jl: less (signed <) */

loc_0033EAAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033EAB3; /* jne: not equal / not zero */

loc_0033EAB0: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0033EAB3: ;
    ecx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x195C);
    eax = eax + 0x6E9D40;
    MEM32(eax + 0x1C) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM8(eax + 1) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033EAE3; /* jle: less or equal (signed <=) */

loc_0033EACF: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax + 0x20;

loc_0033EAD4: ;
    ebp = MEM32(edi + ecx * 4);
    MEM32(esi) = ebp;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033EAD4; /* jl: less (signed <) */

loc_0033EAE1: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0033EAE3: ;
    MEM8(eax + 2) = LO8(edx);
    MEM8(eax + 3) = 0;
    MEM8(eax + 4) = 0;
    MEM8(eax) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0033EB00
 * Original: 0x0033EB00 - 0x0033EB18 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EB00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033EB00: ;
    PUSH32(esp, 0x0033EB05u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0033EB05: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033EB13; /* je: equal / zero */

loc_0033EB0D: ;
    MEM32(eax) = 0;

loc_0033EB13: ;
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

}

/**
 * sub_0033EB20
 * Original: 0x0033EB20 - 0x0033EB29 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EB20(void)
{

loc_0033EB20: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0033EB30
 * Original: 0x0033EB30 - 0x0033EB4D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EB30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033EB30: ;
    PUSH32(esp, 0x0033EB35u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0033EB35: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM8(eax + 1) = 1;
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

}

/**
 * sub_0033EB50
 * Original: 0x0033EB50 - 0x0033EB59 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EB50(void)
{

loc_0033EB50: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 1) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0033EB60
 * Original: 0x0033EB60 - 0x0033EB6C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EB60(void)
{

loc_0033EB60: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x1C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0033EB70
 * Original: 0x0033EB70 - 0x0033EB7C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EB70(void)
{

loc_0033EB70: ;
    SET_LO8(eax, MEM8(esp + 8));
    ecx = MEM32(esp + 4);
    MEM8(ecx + 3) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0033EB80
 * Original: 0x0033EB80 - 0x0033EB8C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EB80(void)
{

loc_0033EB80: ;
    SET_LO8(eax, MEM8(esp + 8));
    ecx = MEM32(esp + 4);
    MEM8(ecx + 4) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0033EB90
 * Original: 0x0033EB90 - 0x0033EB9C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EB90(void)
{

loc_0033EB90: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0xAC);
    esp += 4; return; /* ret */

}

/**
 * sub_0033EBA0
 * Original: 0x0033EBA0 - 0x0033EBAB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EBA0(void)
{

loc_0033EBA0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x2B0);
    esp += 4; return; /* ret */

}

/**
 * sub_0033EBB0
 * Original: 0x0033EBB0 - 0x0033EBE5 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033EBB0: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    if (TEST_Z(_fa, _fb)) goto loc_0033EBD0; /* je: equal / zero */

loc_0033EBC0: ;
    PUSH32(esp, esi);
    esi = eax;
    esi = esi << 4;
    esi = MEM32(esi + edx + 0x2B4);
    MEM32(ecx) = esi;
    POP32(esp, esi);

loc_0033EBD0: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033EBE4; /* je: equal / zero */

loc_0033EBD8: ;
    eax = eax << 4;
    eax = MEM32(eax + edx + 0x2B8);
    MEM32(ecx) = eax;

loc_0033EBE4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0033EBF0
 * Original: 0x0033EBF0 - 0x0033EBFB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EBF0(void)
{

loc_0033EBF0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x1958);
    esp += 4; return; /* ret */

}

/**
 * sub_0033EC00
 * Original: 0x0033EC00 - 0x0033EC40 (64 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EC00(void)
{

loc_0033EC00: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x62E;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 1;
    ecx = 0; /* xor self */
    MEM32(edx + 0x210) = eax;
    MEM32(edx + 0x1894) = eax;
    MEM16(edx + 0x1898) = LO16(ecx);
    MEM16(edx + 0x189A) = LO16(eax);
    MEM16(edx + 0x189C) = LO16(ecx);
    MEM16(edx + 0x189E) = LO16(ecx);
    MEM8(edx + 0xC) = LO8(eax);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033EC40
 * Original: 0x0033EC40 - 0x0033ECE1 (161 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033EC40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0033EC48; /* jae: above or equal (unsigned >=) */

loc_0033EC45: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0033EC48: ;
    edx = ZX8(MEM8(esi + 2));
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(esi));
    PUSH32(esp, edi);
    SET_LO8(eax, MEM8(esi + 1));
    eax = eax << 8;
    eax = eax | edx;
    edx = ZX8(MEM8(esi + 3));
    eax = eax << 8;
    eax = eax | edx;
    edx = 0; /* xor self */
    MEM32(ecx) = eax;
    SET_HI8(edx, MEM8(esi + 4));
    edi = ZX8(MEM8(esi + 6));
    eax = esi + 4;
    eax = eax + 4;
    SET_LO8(edx, MEM8(eax + -3));
    edx = edx << 8;
    edx = edx | edi;
    edi = ZX8(MEM8(eax + -1));
    edx = edx << 8;
    edx = edx | edi;
    MEM32(ecx + 4) = edx;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + 8) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 1));
    MEM8(ecx + 9) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 2;
    SET_LO8(edx, MEM8(eax + -1));
    MEM16(ecx + 0xA) = LO16(edx);
    edi = ZX8(MEM8(eax + 2));
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(eax));
    SET_LO8(edx, MEM8(eax + 1));
    edx = edx << 8;
    edx = edx | edi;
    edi = ZX8(MEM8(eax + 3));
    eax = eax - esi;
    edx = edx << 8;
    edx = edx | edi;
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(ecx + 0xC) = edx;
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0033ECDB; /* je: equal / zero */

loc_0033ECCA: ;
    PUSH32(esp, 0x43074C);
    PUSH32(esp, 0x0033ECD4u); RECOMP_ABI_CALL(0x0033EA00u, sub_0033EA00); /* call 0x0033EA00 */

loc_0033ECD4: ;
    esp = esp + 4;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_0033ECDB: ;
    eax = 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0033ECF0
 * Original: 0x0033ECF0 - 0x0033EFD5 (741 bytes, 282 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033ECF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033ECF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x3C;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x1C);
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0xC) = 0xFFFFFFFDu;
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033EEDB; /* jle: less or equal (signed <=) */

loc_0033ED29: ;
    goto loc_0033ED30;

loc_0033ED2B: ;
    ebx = MEM32(ebp + 8);
    edi = edi;

loc_0033ED30: ;
    eax = MEM32(edi);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0033ED42u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033ED42: ;
    eax = MEM32(esp + 0x34);
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033EECB; /* jb: below (unsigned <) */

loc_0033ED52: ;
    esi = MEM32(esp + 0x20);
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033ED5Fu); RECOMP_ABI_CALL(0x0033EC40u, sub_0033EC40); /* call 0x0033EC40 */

loc_0033ED5F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033EEE6; /* je: equal / zero */

loc_0033ED67: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x24);
    eax = ecx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0033EF83; /* jl: less (signed <) */

loc_0033ED7E: ;
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41495845) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x38), 0x41495845 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EF01; /* je: equal / zero */

loc_0033ED8C: ;
    eax = ZX8(MEM8(esp + 0x40));
    edx = (uint32_t)(int32_t)SMEM8(ebx + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033EF5A; /* jge: greater or equal (signed >=) */

loc_0033ED9D: ;
    eax = MEM32(ebx + eax * 4 + 0x20);
    ecx = MEM32(eax);
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x42);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x0033EDAEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033EDAE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033EF83; /* jl: less (signed <) */

loc_0033EDB9: ;
    ecx = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x44);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033EDD8u); RECOMP_ABI_CALL(0x0030EDA0u, sub_0030EDA0); /* call 0x0030EDA0 */

loc_0033EDD8: ;
    eax = MEM32(edi);
    ecx = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033EDE5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033EDE5: ;
    edx = esp + 0x44;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033EDF9u); RECOMP_ABI_CALL(0x0030EDA0u, sub_0030EDA0); /* call 0x0030EDA0 */

loc_0033EDF9: ;
    edx = MEM32(edi);
    eax = esp + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0033EE06u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033EE06: ;
    eax = MEM32(esp + 0x64);
    esp = esp + 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033EF9E; /* jl: less (signed <) */

loc_0033EE15: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033EE89; /* jle: less or equal (signed <=) */

loc_0033EE1B: ;
    goto loc_0033EE21;

loc_0033EE1D: ;
    eax = MEM32(esp + 0x2C);

loc_0033EE21: ;
    ecx = ZX8(MEM8(esp + 0x40));
    edx = MEM32(ebp + 8);
    ecx = MEM32(edx + ecx * 4 + 0x20);
    edx = MEM32(ecx);
    esi = esp + 0x30;
    PUSH32(esp, esi);
    eax = eax - ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0033EE3Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033EE3D: ;
    ecx = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x38);
    edi = MEM32(esp + 0x40);
    edx = ecx;
    ecx = ecx >> 2;
    esi = eax + ebx;
    eax = ZX8(MEM8(esp + 0x50));
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
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + eax * 4 + 0x20);
    edx = MEM32(eax);
    ecx = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0033EE73u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033EE73: ;
    edx = MEM32(esp + 0x50);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x5E);
    ebx = ebx + edx;
    esp = esp + 0x1C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033EE1D; /* jl: less (signed <) */

loc_0033EE85: ;
    edi = MEM32(esp + 0x18);

loc_0033EE89: ;
    edx = MEM32(edi);
    eax = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0033EE96u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033EE96: ;
    eax = MEM32(ebp + 8);
    esi = MEM32(eax + 8);
    ecx = MEM32(esp + 0x38);
    ecx = ecx + 0x10;
    esi = esi + ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 8) = esi;
    eax = MEM32(esp + 0x1C);
    esp = esp + 0xC;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0033ED2B; /* jl: less (signed <) */

loc_0033EEC0: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0033EECB: ;
    edx = MEM32(edi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0033EED8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033EED8: ;
    esp = esp + 0xC;

loc_0033EEDB: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0033EEE6: ;
    ecx = MEM32(edi);
    edx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x0033EEF3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033EEF3: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0033EF01: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = ecx + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033EF17u); RECOMP_ABI_CALL(0x0030EDA0u, sub_0030EDA0); /* call 0x0030EDA0 */

loc_0033EF17: ;
    edx = MEM32(edi);
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0033EF24u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033EF24: ;
    ecx = MEM32(edi);
    edx = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x0033EF31u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033EF31: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0033EF39u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033EF39: ;
    esp = esp + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_0033EF44; /* jg: greater (signed >) */

loc_0033EF40: ;
    MEM8(ebx + 4) = 0;

loc_0033EF44: ;
    SET_LO8(eax, MEM8(ebx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033EEDB; /* jne: not equal / not zero */

loc_0033EF4B: ;
    MEM8(ebx + 1) = 3;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0033EF5A: ;
    PUSH32(esp, 0x43079C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033EF64u); RECOMP_ABI_CALL(0x0033EA00u, sub_0033EA00); /* call 0x0033EA00 */

loc_0033EF64: ;
    ecx = MEM32(edi);
    edx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x0033EF71u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033EF71: ;
    eax = MEM32(esp + 0x1C);
    esp = esp + 0x10;
    MEM8(ebx + 1) = 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0033EF83: ;
    eax = MEM32(edi);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033EF90u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033EF90: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0033EF9E: ;
    PUSH32(esp, 0x430778);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033EFA8u); RECOMP_ABI_CALL(0x0033EA00u, sub_0033EA00); /* call 0x0033EA00 */

loc_0033EFA8: ;
    edx = MEM32(edi);
    eax = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0033EFB5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033EFB5: ;
    ecx = MEM32(edi);
    edx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x0033EFC2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033EFC2: ;
    eax = MEM32(ebp + 8);
    esp = esp + 0x1C;
    POP32(esp, edi);
    MEM8(eax + 1) = 4;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0033EFE0
 * Original: 0x0033EFE0 - 0x0033F08A (170 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EFE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033EFE0: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    ebx = MEM32(ebp + 0x1C);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0033F000u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033F000: ;
    eax = MEM32(ebp + 0x20);
    edx = MEM32(eax);
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0033F015u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033F015: ;
    ecx = MEM32(esp + 0x3C);
    esi = MEM32(esp + 0x30);
    edi = MEM32(esp + 0x38);
    edx = ecx;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x0033F03Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033F03F: ;
    edx = MEM32(esp + 0x48);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033F056u); RECOMP_ABI_CALL(0x0030EDA0u, sub_0030EDA0); /* call 0x0030EDA0 */

loc_0033F056: ;
    ecx = MEM32(ebx);
    edx = esp + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x0033F063u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033F063: ;
    eax = MEM32(ebx);
    esp = esp + 0x48;
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033F073u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033F073: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(esp + 0x28);
    esp = esp + 0xC;
    POP32(esp, edi);
    eax = eax + edx;
    POP32(esp, esi);
    MEM32(ebp + 8) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0033F090
 * Original: 0x0033F090 - 0x0033F0B8 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F090(void)
{

loc_0033F090: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033F097u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0033F097: ;
    eax = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033F0A9u); RECOMP_ABI_CALL(0x0033EA90u, sub_0033EA90); /* call 0x0033EA90 */

loc_0033F0A9: ;
    esp = esp + 4;
    esi = eax;
    PUSH32(esp, 0x0033F0B3u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0033F0B3: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033F0C0
 * Original: 0x0033F0C0 - 0x0033F2E5 (549 bytes, 201 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F0C0(void)
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

loc_0033F0C0: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1800 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_0033F0D1; /* jge: greater or equal (signed >=) */

loc_0033F0CB: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0033F0D1: ;
    ecx = ZX8(MEM8(esi + 2));
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(esi));
    SET_LO8(eax, MEM8(esi + 1));
    eax = eax << 8;
    eax = eax | ecx;
    ecx = ZX8(MEM8(esi + 3));
    eax = eax << 8;
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41495846) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41495846 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F0FB; /* je: equal / zero */

loc_0033F0F1: ;
    PUSH32(esp, 0x0033F0F6u); RECOMP_ABI_CALL(0x0033EC00u, sub_0033EC00); /* call 0x0033EC00 */

loc_0033F0F6: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0033F0FB: ;
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(esi + 4));
    eax = esi + 4;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(eax + 2));
    SET_LO8(ecx, MEM8(eax + 1));
    eax = eax + 4;
    ecx = ecx << 8;
    ecx = ecx | edi;
    edi = ZX8(MEM8(eax + -1));
    ecx = ecx << 8;
    ecx = ecx | edi;
    ebp = ecx;
    ecx = 3;
    edi = 0x430744;
    esi = esi + ebp + 2;
    ebx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((ebx == 0)) goto loc_0033F13E; /* je: equal / zero */

loc_0033F135: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0033F13E: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 1));
    MEM8(edx + 1) = LO8(ecx);
    ecx = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_HI8(ecx, MEM8(eax + 1));
    esi = ZX8(MEM8(eax + 2));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 2;
    eax = eax + 0xC;
    ecx = ecx | esi;
    MEM32(esp + 0x10) = ecx;
    ecx = 0; /* xor self */
    eax = eax + 8;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    edi = 0; /* xor self */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    SET_HI8(ecx, MEM8(eax + -20));
    esi = ZX8(MEM8(eax + -18));
    SET_LO8(ecx, MEM8(eax + -19));
    ecx = ecx << 8;
    ecx = ecx | esi;
    esi = ZX8(MEM8(eax + -17));
    ecx = ecx << 8;
    ecx = ecx | esi;
    MEM32(edx + 4) = ecx;
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(eax + -8));
    SET_LO8(ecx, MEM8(eax + -7));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(edx + 0x210) = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033F235; /* jle: less or equal (signed <=) */

loc_0033F19E: ;
    esi = edx + 0x218;

loc_0033F1A4: ;
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(eax));
    ebx = ZX8(MEM8(eax + 2));
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    SET_LO8(ecx, MEM8(eax + -11));
    eax = eax + 4;
    esi = esi + 0x10;
    ecx = ecx << 8;
    ecx = ecx | ebx;
    ebx = ZX8(MEM8(eax + -13));
    ecx = ecx << 8;
    ecx = ecx | ebx;
    MEM32(esi + -20) = ecx;
    ebx = ZX8(MEM8(eax + -10));
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(eax + -12));
    SET_LO8(ecx, MEM8(eax + -11));
    ecx = ecx << 8;
    ecx = ecx | ebx;
    ebx = ZX8(MEM8(eax + -9));
    ecx = ecx << 8;
    ecx = ecx | ebx;
    MEM32(esi + -16) = ecx;
    ebx = ZX8(MEM8(eax + -6));
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(eax + -8));
    SET_LO8(ecx, MEM8(eax + -7));
    ecx = ecx << 8;
    ecx = ecx | ebx;
    ebx = ZX8(MEM8(eax + -5));
    ecx = ecx << 8;
    ecx = ecx | ebx;
    MEM32(esi + -12) = ecx;
    ebx = ZX8(MEM8(eax + -2));
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(eax + -4));
    SET_LO8(ecx, MEM8(eax + -3));
    ecx = ecx << 8;
    ecx = ecx | ebx;
    ebx = ZX8(MEM8(eax + -1));
    ecx = ecx << 8;
    ecx = ecx | ebx;
    MEM32(esi + -8) = ecx;
    ecx = MEM32(edx + 0x210);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033F1A4; /* jl: less (signed <) */

loc_0033F235: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    eax = eax + 8;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(edx + 0x1894) = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033F297; /* jle: less or equal (signed <=) */

loc_0033F247: ;
    esi = edx + 0x189A;
    /* nop */

loc_0033F250: ;
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(eax));
    eax = eax + 2;
    eax = eax + 2;
    eax = eax + 2;
    eax = eax + 2;
    esi = esi + 8;
    SET_LO8(ecx, MEM8(eax + -7));
    MEM16(esi + -10) = LO16(ecx);
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(eax + -6));
    SET_LO8(ecx, MEM8(eax + -5));
    MEM16(esi + -8) = LO16(ecx);
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(eax + -4));
    SET_LO8(ecx, MEM8(eax + -3));
    MEM16(esi + -6) = LO16(ecx);
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(eax + -2));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ecx, MEM8(eax + -1));
    MEM16(esi + -4) = LO16(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x1894)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx + 0x1894) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033F250; /* jl: less (signed <) */

loc_0033F297: ;
    SET_LO8(ecx, MEM8(eax));
    eax = eax + 8;
    edi = 0; /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    MEM8(edx + 0xC) = LO8(ecx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033F2DC; /* jle: less or equal (signed <=) */

loc_0033F2A5: ;
    esi = edx + 0x10;

loc_0033F2A8: ;
    ebx = ZX8(MEM8(eax + 2));
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(eax));
    eax = eax + 4;
    eax = eax + 4;
    esi = esi + 0x10;
    SET_LO8(ecx, MEM8(eax + -7));
    ecx = ecx << 8;
    ecx = ecx | ebx;
    ebx = ZX8(MEM8(eax + -5));
    ecx = ecx << 8;
    ecx = ecx | ebx;
    MEM32(esi + -12) = ecx;
    SET_LO8(ecx, MEM8(eax + -4));
    MEM8(esi + -16) = LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033F2A8; /* jl: less (signed <) */

loc_0033F2DC: ;
    POP32(esp, edi);
    eax = ebp + 8;
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_0033F2F0
 * Original: 0x0033F2F0 - 0x0033F3C3 (211 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F2F0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x1C);
    eax = MEM32(esi);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1800);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0033F30Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033F30A: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    esp = esp + 0x10;
    edx = edi + 0xA0;
    PUSH32(esp, 0x0033F320u); RECOMP_ABI_CALL(0x0033F0C0u, sub_0033F0C0); /* call 0x0033F0C0 */

loc_0033F320: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033F33D; /* jne: not equal / not zero */

loc_0033F327: ;
    edx = MEM32(esi);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0033F334u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033F334: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0033F33D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033F34D; /* jne: not equal / not zero */

loc_0033F341: ;
    MEM32(edi + 0x1958) = 1;
    goto loc_0033F381;

loc_0033F34D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F377; /* je: equal / zero */

loc_0033F353: ;
    PUSH32(esp, 0x4307C0);
    PUSH32(esp, 0x0033F35Du); RECOMP_ABI_CALL(0x0033EA00u, sub_0033EA00); /* call 0x0033EA00 */

loc_0033F35D: ;
    ecx = MEM32(esi);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x0033F36Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033F36A: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    MEM8(edi + 1) = 4;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0033F377: ;
    MEM32(edi + 0x1958) = 0;

loc_0033F381: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033F394u); RECOMP_ABI_CALL(0x0030EDA0u, sub_0030EDA0); /* call 0x0030EDA0 */

loc_0033F394: ;
    eax = MEM32(esi);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0033F3A1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033F3A1: ;
    edx = MEM32(esi);
    eax = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0033F3AEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033F3AE: ;
    eax = MEM32(edi + 8);
    esp = esp + 0x28;
    eax = eax + ebx;
    POP32(esp, esi);
    MEM32(edi + 8) = eax;
    MEM8(edi + 1) = 2;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0033F3D0
 * Original: 0x0033F3D0 - 0x0033F423 (83 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F3D0: ;
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033F421; /* jne: not equal / not zero */

loc_0033F3D8: ;
    SET_LO8(eax, MEM8(edi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033F3E6; /* jne: not equal / not zero */

loc_0033F3DF: ;
    PUSH32(esp, 0x0033F3E4u); RECOMP_ABI_CALL(0x0033F2F0u, sub_0033F2F0); /* call 0x0033F2F0 */

loc_0033F3E4: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0033F3E6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033F421; /* jne: not equal / not zero */

loc_0033F3EA: ;
    SET_LO8(eax, MEM8(edi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033F421; /* jne: not equal / not zero */

loc_0033F3F1: ;
    eax = MEM32(edi + 0x1958);
    eax = eax - 0;
    if ((eax == 0)) goto loc_0033F40A; /* je: equal / zero */

loc_0033F3FC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033F421; /* jne: not equal / not zero */

loc_0033F3FF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033F405u); RECOMP_ABI_CALL(0x0033EFE0u, sub_0033EFE0); /* call 0x0033EFE0 */

loc_0033F405: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0033F40A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033F410u); RECOMP_ABI_CALL(0x0033ECF0u, sub_0033ECF0); /* call 0x0033ECF0 */

loc_0033F410: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033F421; /* jne: not equal / not zero */

loc_0033F418: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033F41Eu); RECOMP_ABI_CALL(0x0033ECF0u, sub_0033ECF0); /* call 0x0033ECF0 */

loc_0033F41E: ;
    esp = esp + 4;

loc_0033F421: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033F430
 * Original: 0x0033F430 - 0x0033F443 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F430(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033F430: ;
    PUSH32(esp, 0x0033F435u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0033F435: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x0033F43Eu); RECOMP_ABI_CALL(0x0033F3D0u, sub_0033F3D0); /* call 0x0033F3D0 */

loc_0033F43E: ;
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

}

/**
 * sub_0033F450
 * Original: 0x0033F450 - 0x0033F46F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F450: ;
    PUSH32(esp, esi);
    esi = 0x6E9D40;

loc_0033F456: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033F45Cu); RECOMP_ABI_CALL(0x0033F430u, sub_0033F430); /* call 0x0033F430 */

loc_0033F45C: ;
    esi = esi + 0x195C;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F02B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6F02B0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033F456; /* jl: less (signed <) */

loc_0033F46D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033F470
 * Original: 0x0033F470 - 0x0033F572 (258 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F470(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033F470: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)ebp);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0033F496u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033F496: ;
    eax = MEM32(esp + 0x24);
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033F4BB; /* jge: greater or equal (signed >=) */

loc_0033F4A1: ;
    edx = MEM32(ebx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0033F4AEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033F4AE: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0033F4BB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033F506; /* jne: not equal / not zero */

loc_0033F4C0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x10);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033F556; /* jle: less or equal (signed <=) */

loc_0033F4D0: ;
    esi = ebp;

loc_0033F4D2: ;
    eax = MEM32(edx);
    edi = eax;
    MEM32(esp + 0x20) = eax;
    eax = eax & 0xFF00;
    edi = edi << 0x10;
    edi = edi | eax;
    eax = MEM32(esp + 0x20);
    eax = eax >> 0x18;
    edi = edi << 8;
    edi = edi | eax;
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(esp + 0x22));
    ecx = ecx + 4;
    edx = edx + 4;
    edi = edi | eax;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + -4) = edi;
    if ((_fa != 0)) goto loc_0033F4D2; /* jne: not equal / not zero */

loc_0033F504: ;
    goto loc_0033F556;

loc_0033F506: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033F538; /* jne: not equal / not zero */

loc_0033F50B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    esi = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x10);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033F556; /* jle: less or equal (signed <=) */

loc_0033F517: ;
    edi = ebp;
    /* nop */

loc_0033F520: ;
    SET_LO16(eax, MEM16(esi));
    SET_LO16(edx, ZX8(HI8(eax)));
    SET_HI8(edx, LO8(eax));
    ecx = ecx + 2;
    esi = esi + 2;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(ecx + -2) = LO16(edx);
    if ((_fa != 0)) goto loc_0033F520; /* jne: not equal / not zero */

loc_0033F536: ;
    goto loc_0033F556;

loc_0033F538: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033F570; /* jne: not equal / not zero */

loc_0033F53D: ;
    edi = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x1C);
    ecx = ZX16(LO16(ebp));
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

loc_0033F556: ;
    ecx = MEM32(ebx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x0033F563u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033F563: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0033F570: ;
    goto loc_0033F570;

}

/**
 * sub_0033F580
 * Original: 0x0033F580 - 0x0033F589 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0033F580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F580: ;
    MEM32(0x5D99D8) = MEM32(0x5D99D8) + 1;
    _fa = (uint32_t)(MEM32(0x5D99D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0033F590
 * Original: 0x0033F590 - 0x0033F599 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0033F590(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F590: ;
    MEM32(0x5D99D8) = MEM32(0x5D99D8) - 1;
    _fa = (uint32_t)(MEM32(0x5D99D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0033F5A0
 * Original: 0x0033F5A0 - 0x0033F5F3 (83 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F5A0: ;
    edx = 0; /* xor self */
    ecx = 0x6E9C8C;
    PUSH32(esp, ebx);

loc_0033F5A8: ;
    SET_LO8(ebx, MEM8(ecx + -12));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = ecx + -12;
    if (TEST_Z(_fa, _fb)) goto loc_0033F5EA; /* je: equal / zero */

loc_0033F5B2: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    eax = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0033F5DF; /* je: equal / zero */

loc_0033F5B9: ;
    SET_LO8(ebx, MEM8(ecx + 0xC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = ecx + 0xC;
    if (TEST_Z(_fa, _fb)) goto loc_0033F5E2; /* je: equal / zero */

loc_0033F5C3: ;
    SET_LO8(ebx, MEM8(ecx + 0x18));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = ecx + 0x18;
    if (TEST_Z(_fa, _fb)) goto loc_0033F5E7; /* je: equal / zero */

loc_0033F5CD: ;
    ecx = ecx + 0x30;
    edx = edx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E9D4C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6E9D4C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033F5A8; /* jl: less (signed <) */

loc_0033F5DB: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0033F5DF: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0033F5EA;

loc_0033F5E2: ;
    edx = edx + 2;
    goto loc_0033F5EA;

loc_0033F5E7: ;
    edx = edx + 3;

loc_0033F5EA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033F5F1; /* jl: less (signed <) */

loc_0033F5EF: ;
    eax = 0; /* xor self */

loc_0033F5F1: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033F600
 * Original: 0x0033F600 - 0x0033F61B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F600(void)
{

loc_0033F600: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(eax + 8));
    edx = MEM32(esp + 8);
    MEM16(edx) = LO16(ecx);
    SET_LO16(eax, MEM16(eax + 0xA));
    ecx = MEM32(esp + 0xC);
    MEM16(ecx) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0033F620
 * Original: 0x0033F620 - 0x0033F681 (97 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F620: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033F67B; /* je: equal / zero */

loc_0033F628: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 6);
    SET_LO16(edx, MEM16(ecx + 8));
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(ecx + 0xA);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    esi = (uint32_t)(int32_t)SMEM16(ecx + 4);
    PUSH32(esp, edi);
    edi = SX16(LO16(edx));
    esi = (uint32_t)((int32_t)esi * (int32_t)edi);
    eax = eax + esi;
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xC) & 31u));
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_0033F66D; /* jle: less or equal (signed <=) */

loc_0033F658: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033F664; /* jl: less (signed <) */

loc_0033F65F: ;
    eax = 0x7FFF;

loc_0033F664: ;
    MEM16(ecx + 0xA) = LO16(edx);
    MEM16(ecx + 8) = LO16(eax);
    esp += 4; return; /* ret */

loc_0033F66D: ;
    eax = 0xFFFF8000u;
    MEM16(ecx + 0xA) = LO16(edx);
    MEM16(ecx + 8) = LO16(eax);
    esp += 4; return; /* ret */

loc_0033F67B: ;
    SET_LO16(eax, MEM16(esp + 8));
    esp += 4; return; /* ret */

}

/**
 * sub_0033F690
 * Original: 0x0033F690 - 0x0033F721 (145 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F690: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033F696u); RECOMP_ABI_CALL(0x0033F5A0u, sub_0033F5A0); /* call 0x0033F5A0 */

loc_0033F696: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033F71D; /* je: equal / zero */

loc_0033F6A0: ;
    edx = 0; /* xor self */
    ecx = 0x6E7C50;
    PUSH32(esp, ebx);
    goto loc_0033F6B0;

    /* nop */

loc_0033F6B0: ;
    SET_LO8(ebx, MEM8(ecx + -144));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = ecx + -144;
    if (TEST_Z(_fa, _fb)) goto loc_0033F705; /* je: equal / zero */

loc_0033F6C0: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    eax = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0033F6FA; /* je: equal / zero */

loc_0033F6C7: ;
    SET_LO8(ebx, MEM8(ecx + 0x90));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = ecx + 0x90;
    if (TEST_Z(_fa, _fb)) goto loc_0033F6FD; /* je: equal / zero */

loc_0033F6D7: ;
    SET_LO8(ebx, MEM8(ecx + 0x120));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = ecx + 0x120;
    if (TEST_Z(_fa, _fb)) goto loc_0033F702; /* je: equal / zero */

loc_0033F6E7: ;
    ecx = ecx + 0x240;
    edx = edx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E8550) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6E8550 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033F6B0; /* jl: less (signed <) */

loc_0033F6F8: ;
    goto loc_0033F705;

loc_0033F6FA: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0033F705;

loc_0033F6FD: ;
    edx = edx + 2;
    goto loc_0033F705;

loc_0033F702: ;
    edx = edx + 3;

loc_0033F705: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x88) = esi;
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_0033F71D; /* jge: greater or equal (signed >=) */

loc_0033F718: ;
    MEM8(eax) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0033F71D: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033F730
 * Original: 0x0033F730 - 0x0033F747 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F730: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033F745; /* je: equal / zero */

loc_0033F739: ;
    ecx = 0x24;
    eax = 0; /* xor self */
    MEM8(edi) = 0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_0033F745: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033F750
 * Original: 0x0033F750 - 0x0033F767 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F750(void)
{

loc_0033F750: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(esp + 8));
    SET_LO16(edx, MEM16(esp + 0xC));
    MEM16(eax + 4) = LO16(ecx);
    MEM16(eax + 6) = LO16(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033F770
 * Original: 0x0033F770 - 0x0033F7B8 (72 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F770(void)
{

loc_0033F770: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x1C);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033F78Eu); RECOMP_ABI_CALL(0x0030E700u, sub_0030E700); /* call 0x0030E700 */

loc_0033F78E: ;
    esi = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0033F7A2u); RECOMP_ABI_CALL(0x0033F750u, sub_0033F750); /* call 0x0033F750 */

loc_0033F7A2: ;
    ecx = MEM32(ebx + 0x88);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033F7B0u); RECOMP_ABI_CALL(0x0033F750u, sub_0033F750); /* call 0x0033F750 */

loc_0033F7B0: ;
    esp = esp + 0x28;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033F7C0
 * Original: 0x0033F7C0 - 0x0033F7D7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F7C0(void)
{

loc_0033F7C0: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(esp + 8));
    SET_LO16(edx, MEM16(esp + 0xC));
    MEM16(eax + 8) = LO16(ecx);
    MEM16(eax + 0xA) = LO16(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033F7E0
 * Original: 0x0033F7E0 - 0x0033F883 (163 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F7E0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033F817; /* jne: not equal / not zero */

loc_0033F7EE: ;
    edx = MEM32(ecx + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033F810; /* jle: less or equal (signed <=) */

loc_0033F7F7: ;
    edx = ecx + 0x18;
    /* nop */

loc_0033F800: ;
    MEM16(edx) = 0;
    esi = MEM32(ecx + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033F800; /* jl: less (signed <) */

loc_0033F810: ;
    MEM32(ecx + 0x78) = 0;

loc_0033F817: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033F880; /* je: equal / zero */

loc_0033F81B: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0xA);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 6);
    SET_LO16(esi, MEM16(esp + 0x14));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xC) & 31u));
    eax = SX16(LO16(esi));
    eax = eax - edx;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    PUSH32(esp, ebx);
    ebx = (uint32_t)(int32_t)SMEM16(ecx + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xC) & 31u));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    POP32(esp, ebx);
    if (CMP_L(_fas, _fbs)) goto loc_0033F85A; /* jl: less (signed <) */

loc_0033F84C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033F85F; /* jle: less or equal (signed <=) */

loc_0033F853: ;
    eax = 0x7FFF;
    goto loc_0033F85F;

loc_0033F85A: ;
    eax = 0xFFFF8000u;

loc_0033F85F: ;
    MEM16(ecx + edi * 2 + 0x18) = LO16(eax);
    eax = SX16(LO16(eax));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x78) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033F874; /* jle: less or equal (signed <=) */

loc_0033F871: ;
    MEM32(ecx + 0x78) = eax;

loc_0033F874: ;
    SET_LO16(eax, MEM16(ecx + 8));
    MEM16(ecx + 0xA) = LO16(eax);
    MEM16(ecx + 8) = LO16(esi);

loc_0033F880: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033F890
 * Original: 0x0033F890 - 0x0033F8FF (111 bytes, 39 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0033F890(void)
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

loc_0033F890: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x78);
    ecx = esi + -1;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    ecx = MEM32(0x47A034);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = edx + eax + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0xC) = esi;
    edx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0033F8C3; /* jl: less (signed <) */

loc_0033F8C1: ;
    edx = ecx;

loc_0033F8C3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033F8D0; /* jle: less or equal (signed <=) */

loc_0033F8C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033F8D5; /* jl: less (signed <) */

loc_0033F8CC: ;
    eax = ecx;
    goto loc_0033F8D5;

loc_0033F8D0: ;
    eax = 1;

loc_0033F8D5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM16(edi + 0x7C) = LO16(eax);
    if (TEST_NZ(_fa, _fb)) goto loc_0033F8EC; /* jne: not equal / not zero */

loc_0033F8DD: ;
    fp_push(MEMD(0x430818)); /* fld double */
    MEMD(edi + 0x80) = fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0033F8EC: ;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = MEMD(0x430818) / fp_top(); /* fdivr qword ptr [0x430818] */
    MEMD(edi + 0x80) = fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0033F900
 * Original: 0x0033F900 - 0x0033F916 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F900: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033F90C; /* jne: not equal / not zero */

loc_0033F908: ;
    SET_LO16(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_0033F90C: ;
    ecx = MEM32(esp + 8);
    SET_LO16(eax, MEM16(eax + ecx * 2 + 0x18));
    esp += 4; return; /* ret */

}

/**
 * sub_0033F920
 * Original: 0x0033F920 - 0x0033F931 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F920(void)
{

loc_0033F920: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM8(edx + ecx + 0x58) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0033F940
 * Original: 0x0033F940 - 0x0033FA51 (273 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033F940(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F940: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x14;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x58);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    esi = eax + 4;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033F98A; /* jle: less or equal (signed <=) */

loc_0033F95D: ;
    /* nop */

loc_0033F960: ;
    eax = MEM32(esi + edi * 4);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x0033F96Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033F96B: ;
    ebx = eax;
    eax = MEM32(ebp + 0x10);
    ebx = ebx >> 1;
    esp = esp + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033FA48; /* jl: less (signed <) */

loc_0033F97D: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0x58);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033F960; /* jl: less (signed <) */

loc_0033F988: ;
    eax = edx;

loc_0033F98A: ;
    ecx = MEM32(eax + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033FA3F; /* jle: less or equal (signed <=) */

loc_0033F99D: ;
    ecx = MEM32(ebp + 0x14);
    edi = esi;
    ecx = ecx - esi;
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x14) = ecx;
    /* nop */

loc_0033F9B0: ;
    ecx = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033FA24; /* jle: less or equal (signed <=) */

loc_0033F9B9: ;
    /* nop */

loc_0033F9C0: ;
    eax = MEM32(edi);
    edx = MEM32(eax);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + ecx;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0033F9D5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033F9D5: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x24);
    eax = MEM32(edx + edi);
    esi = MEM32(esp + 0x28);
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax + ebx * 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    edx = MEM32(esp + 0x1C);
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    eax = MEM32(esp + 0x2C);
    eax = eax >> 1;
    ecx = SX16(LO16(eax));
    eax = MEM32(edx);
    edx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ebx = ebx + ecx;
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x0033FA13u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0033FA13: ;
    eax = MEM32(ebp + 0x10);
    edi = MEM32(esp + 0x28);
    esp = esp + 0x1C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033F9C0; /* jl: less (signed <) */

loc_0033FA21: ;
    eax = MEM32(ebp + 8);

loc_0033FA24: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax + 0x58);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0033F9B0; /* jl: less (signed <) */

loc_0033FA3F: ;
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0033FA48: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0033FA60
 * Original: 0x0033FA60 - 0x0033FC24 (452 bytes, 146 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033FA60(void)
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

loc_0033FA60: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(ebp + esi * 2 + 0x8C));
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ebp + esi * 2 + 0x88));
    PUSH32(esp, edi);
    edi = MEM32(ebp + esi * 4 + 0x80);
    eax = MEM32(edi + 0x88);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033FA9Cu); RECOMP_ABI_CALL(0x0033F7C0u, sub_0033F7C0); /* call 0x0033F7C0 */

loc_0033FA9C: ;
    eax = MEM32(ebp + 0x44);
    esp = esp + 0xC;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033FAD6; /* jle: less or equal (signed <=) */

loc_0033FAA8: ;
    eax = esi;
    eax = eax << 6;
    ebp = eax + ebp + 0x90;

loc_0033FAB4: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(ebp));
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033FAC2u); RECOMP_ABI_CALL(0x0033F7E0u, sub_0033F7E0); /* call 0x0033F7E0 */

loc_0033FAC2: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(edx + 0x44);
    esp = esp + 0xC;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033FAB4; /* jl: less (signed <) */

loc_0033FAD4: ;
    ebp = edx;

loc_0033FAD6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033FADCu); RECOMP_ABI_CALL(0x0033F890u, sub_0033F890); /* call 0x0033F890 */

loc_0033FADC: ;
    edx = MEM32(edi + 0x88);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebp + esi * 2 + 0x8C));
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(ebp + esi * 2 + 0x88));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033FAFEu); RECOMP_ABI_CALL(0x0033F7C0u, sub_0033F7C0); /* call 0x0033F7C0 */

loc_0033FAFE: ;
    eax = MEM32(ebp + 0x44);
    esp = esp + 0x10;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033FC1A; /* jle: less or equal (signed <=) */

loc_0033FB0E: ;
    esi = esi << 6;
    eax = esi + ebp + 0x90;
    MEM32(esp + 0x20) = eax;
    /* nop */

loc_0033FB20: ;
    ecx = MEM32(esp + 0x20);
    SET_LO16(esi, MEM16(ecx));
    ecx = MEM32(esp + 0x24);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033FB3Bu); RECOMP_ABI_CALL(0x0033F600u, sub_0033F600); /* call 0x0033F600 */

loc_0033FB3B: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033FB4Bu); RECOMP_ABI_CALL(0x0033F7C0u, sub_0033F7C0); /* call 0x0033F7C0 */

loc_0033FB4B: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033FB53u); RECOMP_ABI_CALL(0x0033F7E0u, sub_0033F7E0); /* call 0x0033F7E0 */

loc_0033FB53: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033FB5Au); RECOMP_ABI_CALL(0x0033F900u, sub_0033F900); /* call 0x0033F900 */

loc_0033FB5A: ;
    ecx = SX16(LO16(eax));
    MEM32(esp + 0x44) = ecx;
    esp = esp + 0x2C;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMD(edi + 0x80); /* fmul qword ptr [edi + 0x80] */
    PUSH32(esp, 0x0033FB73u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0033FB73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033FB88; /* jl: less (signed <) */

loc_0033FB7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033FB8D; /* jle: less or equal (signed <=) */

loc_0033FB81: ;
    eax = 0x7FFF;
    goto loc_0033FB8D;

loc_0033FB88: ;
    eax = 0xFFFF8000u;

loc_0033FB8D: ;
    eax = SX16(LO16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax + -2340;
    if (TEST_S(_fas, _fbs)) goto loc_0033FBA0; /* jl: less (signed <) */

loc_0033FB9A: ;
    ecx = eax + 0x924;

loc_0033FBA0: ;
    eax = 0x38007001;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xA) & 31u));
    esi = edx;
    esi = esi >> 0x1F;
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFF8u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033FBE7; /* jl: less (signed <) */

loc_0033FBB6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033FBC0; /* jl: less (signed <) */

loc_0033FBBB: ;
    esi = 7;

loc_0033FBC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033FBC8u); RECOMP_ABI_CALL(0x0033F920u, sub_0033F920); /* call 0x0033F920 */

loc_0033FBC8: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x7C);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033FBEE; /* jl: less (signed <) */

loc_0033FBD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033FBF3; /* jle: less or equal (signed <=) */

loc_0033FBE0: ;
    eax = 0x7FFF;
    goto loc_0033FBF3;

loc_0033FBE7: ;
    esi = 0xFFFFFFF8u;
    goto loc_0033FBC0;

loc_0033FBEE: ;
    eax = 0xFFFF8000u;

loc_0033FBF3: ;
    edx = MEM32(edi + 0x88);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033FC00u); RECOMP_ABI_CALL(0x0033F620u, sub_0033F620); /* call 0x0033F620 */

loc_0033FC00: ;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(ebp + 0x44);
    esp = esp + 8;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x20) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0033FB20; /* jl: less (signed <) */

loc_0033FC1A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
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
 * sub_0033FC30
 * Original: 0x0033FC30 - 0x0033FDE1 (433 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033FC30(void)
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

loc_0033FC30: ;
    esp = esp - 0x18;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    eax = ecx;
    eax = eax << 6;
    eax = eax + esi;
    ebx = eax + 0x110;
    PUSH32(esp, edi);
    edi = eax + 0x190;
    eax = eax + 0x210;
    MEM32(esp + 0x18) = eax;
    edx = ecx;
    edx = edx << 4;
    eax = edx + esi + 0x2A8;
    MEM32(esp + 0x30) = eax;
    eax = 8;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0x54)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0x54))); }
    edx = MEM32(esi + ecx * 4 + 0x80);
    ebp = 0; /* xor self */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x24) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x44), ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033FDD9; /* jle: less or equal (signed <=) */

loc_0033FC92: ;
    ecx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x18);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx - edi;
    eax = eax - edi;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = eax;
    goto loc_0033FCC0;

loc_0033FCB1: ;
    ebx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x14);
    /* nop */

loc_0033FCC0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033FCC7u); RECOMP_ABI_CALL(0x0033F900u, sub_0033F900); /* call 0x0033F900 */

loc_0033FCC7: ;
    edi = MEM32(esp + 0x34);
    MEM16(ebx + edi) = LO16(eax);
    eax = SX16(LO16(eax));
    MEM32(esp + 0x20) = eax;
    esp = esp + 8;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMD(edx + 0x80); /* fmul qword ptr [edx + 0x80] */
    PUSH32(esp, 0x0033FCE8u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0033FCE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033FCFD; /* jl: less (signed <) */

loc_0033FCEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033FD02; /* jle: less or equal (signed <=) */

loc_0033FCF6: ;
    eax = 0x7FFF;
    goto loc_0033FD02;

loc_0033FCFD: ;
    eax = 0xFFFF8000u;

loc_0033FD02: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    MEM16(edi) = LO16(eax);
    ecx = eax + -2340;
    if (TEST_S(_fas, _fbs)) goto loc_0033FD16; /* jl: less (signed <) */

loc_0033FD10: ;
    ecx = eax + 0x924;

loc_0033FD16: ;
    eax = 0x38007001;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xA) & 31u));
    ebx = edx;
    ebx = ebx >> 0x1F;
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFF8u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033FD69; /* jl: less (signed <) */

loc_0033FD2C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033FD36; /* jl: less (signed <) */

loc_0033FD31: ;
    ebx = 7;

loc_0033FD36: ;
    eax = MEM32(esp + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x7C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    MEM32(esp + 0x18) = ecx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMD(eax + 0x80); /* fmul qword ptr [eax + 0x80] */
    PUSH32(esp, 0x0033FD54u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0033FD54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033FD70; /* jl: less (signed <) */

loc_0033FD5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033FD75; /* jle: less or equal (signed <=) */

loc_0033FD62: ;
    eax = 0x7FFF;
    goto loc_0033FD75;

loc_0033FD69: ;
    ebx = 0xFFFFFFF8u;
    goto loc_0033FD36;

loc_0033FD70: ;
    eax = 0xFFFF8000u;

loc_0033FD75: ;
    edx = MEM32(esp + 0x20);
    MEM16(edx + edi) = LO16(eax);
    edi = MEM32(esp + 0x24);
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    edx = MEM32(esp + 0x30);
    if (TEST_NZ(_fa, _fb)) goto loc_0033FD9E; /* jne: not equal / not zero */

loc_0033FD8E: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x30) = edx;
    MEM8(edx) = 0;
    MEM32(esp + 0x10) = 1;

loc_0033FD9E: ;
    eax = MEM32(esi + 0x54);
    ecx = 8;
    ecx = ecx - eax;
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    SET_LO8(ecx, 8);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    SET_LO8(ebx, LO8(ebx) >> LO8(ecx));
    ecx = edi;
    edi = MEM32(esp + 0x10);
    ecx = ecx - edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    SET_LO8(eax, MEM8(edx));
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) + 2;
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(eax);
    eax = MEM32(esi + 0x44);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0033FCB1; /* jl: less (signed <) */

loc_0033FDD9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_0033FDF0
 * Original: 0x0033FDF0 - 0x0033FF16 (294 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033FDF0(void)
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

loc_0033FDF0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    ebx = MEM32(esi + 0x44);
    eax = esi + 0x90;
    ecx = esi + 0xD0;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esi + 0x3C);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esi + 0x30);
    eax = eax - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033FE1E; /* jl: less (signed <) */

loc_0033FE1C: ;
    ebx = eax;

loc_0033FE1E: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033FE2Bu); RECOMP_ABI_CALL(0x0033F940u, sub_0033F940); /* call 0x0033F940 */

loc_0033FE2B: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033FE38; /* jne: not equal / not zero */

loc_0033FE32: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0033FE38: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x44) (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0033FE72; /* jge: greater or equal (signed >=) */

loc_0033FE3F: ;
    eax = MEM32(esi + 0x58);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033FE72; /* jle: less or equal (signed <=) */

loc_0033FE48: ;
    edx = MEM32(esp + ebp * 4 + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033FE6A; /* je: equal / zero */

loc_0033FE50: ;
    ecx = MEM32(esi + 0x44);
    ecx = ecx - ebx;
    ecx = ecx << 1;
    edi = edx + ebx * 2;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_0033FE6A: ;
    eax = MEM32(esi + 0x58);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033FE48; /* jl: less (signed <) */

loc_0033FE72: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(esi + 0x30);
    ecx = ecx + eax;
    eax = MEM32(esi + 0x58);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x30) = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0033FF0B; /* jle: less or equal (signed <=) */

loc_0033FE8A: ;
    ecx = esi + 0x298;
    edi = esi + 0x88;
    MEM32(esp + 0x14) = ecx;
    ebp = esi + 0x80;

loc_0033FEA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033FEA7u); RECOMP_ABI_CALL(0x0033FA60u, sub_0033FA60); /* call 0x0033FA60 */

loc_0033FEA7: ;
    eax = MEM32(ebp);
    SET_LO16(edx, MEM16(eax + 0x7C));
    ecx = MEM32(eax + 0x88);
    MEM16(edi + 0x208) = LO16(edx);
    fp_push(MEMD(eax + 0x80)); /* fld double */
    eax = MEM32(esp + 0x1C);
    edx = esp + 0x18;
    MEMD(eax) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033FED7u); RECOMP_ABI_CALL(0x0033F600u, sub_0033F600); /* call 0x0033F600 */

loc_0033FED7: ;
    SET_LO16(ecx, MEM16(esp + 0x34));
    SET_LO16(edx, MEM16(esp + 0x24));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM16(edi) = LO16(ecx);
    MEM16(edi + 4) = LO16(edx);
    PUSH32(esp, 0x0033FEEFu); RECOMP_ABI_CALL(0x0033FC30u, sub_0033FC30); /* call 0x0033FC30 */

loc_0033FEEF: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(esi + 0x58);
    esp = esp + 0x1C;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 8;
    ebp = ebp + 4;
    edi = edi + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0033FEA0; /* jl: less (signed <) */

loc_0033FF0B: ;
    eax = MEM32(esi + 0x44);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
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
 * sub_0033FF20
 * Original: 0x0033FF20 - 0x0034001A (250 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033FF20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033FF20: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x58);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00340014; /* jle: less or equal (signed <=) */

loc_0033FF41: ;
    PUSH32(esp, ebx);
    eax = esi + 0x290;
    PUSH32(esp, ebp);
    MEM32(esp + 0x10) = eax;
    ebp = esi + 0x2B0;

loc_0033FF53: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x2D0));
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esi + 0x2D2));
    SET_LO16(edx, (uint32_t)((int32_t)LO16(edx) * (int32_t)LO16(eax)));
    SET_LO16(edx, LO16(edx) + MEM16(esi + 0x2D4));
    ebx = 0; /* xor self */
    SET_LO16(ebx, MEM16(ecx));
    SET_LO16(ebx, LO16(ebx) - 1);
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0x7FFF;
    MEM16(esi + 0x2D0) = LO16(edx);
    ebx = ebx ^ eax;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033FFA7; /* jne: not equal / not zero */

loc_0033FF91: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033FFA7; /* jne: not equal / not zero */

loc_0033FF98: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033FFA7; /* jne: not equal / not zero */

loc_0033FF9E: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033FFA7; /* jne: not equal / not zero */

loc_0033FFA5: ;
    ebx = 0; /* xor self */

loc_0033FFA7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    eax = ebx;
    ecx = esp + 0x28;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM8(esp + 0x30) = LO8(eax);
    PUSH32(esp, 0x0033FFBFu); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_0033FFBF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    edx = esp + 0x38;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEM8(esp + 0x40) = LO8(ebx);
    PUSH32(esp, 0x0033FFD2u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_0033FFD2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    eax = ebp + -8;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033FFE0u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_0033FFE0: ;
    edx = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x48);
    ebx = MEM32(esp + 0x40);
    ecx = MEM32(esi + 0x58);
    edx = edx + 0x12;
    esp = esp + 0x30;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 2;
    ebp = ebp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x10) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0033FF53; /* jl: less (signed <) */

loc_00340010: ;
    POP32(esp, ebp);
    eax = edx;
    POP32(esp, ebx);

loc_00340014: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00340006
 * Original: 0x00340006 - 0x0034001A (20 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340006(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00340006: ;
    MEM32(esp + 0x10) = ebx;
    if (_flags /* jl: less (signed <) */) { g_seh_ebp = ebp; sub_0033FF53(); return; }

loc_00340010: ;
    POP32(esp, ebp);
    eax = edx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00340020
 * Original: 0x00340020 - 0x0034009F (127 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00340020: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = MEM32(edi + 0xC);
    eax = MEM32(esi);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00340033u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00340033: ;
    ecx = eax;
    eax = 0x38E38E39;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(edi + 0x58)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(edi + 0x58))); }
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00340099; /* jle: less or equal (signed <=) */

loc_00340051: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340057u); RECOMP_ABI_CALL(0x0033FDF0u, sub_0033FDF0); /* call 0x0033FDF0 */

loc_00340057: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00340099; /* je: equal / zero */

loc_0034005E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340064u); RECOMP_ABI_CALL(0x0033FF20u, sub_0033FF20); /* call 0x0033FF20 */

loc_00340064: ;
    ecx = MEM32(edi + 0x30);
    ebx = ebx + eax;
    eax = MEM32(edi + 0x3C);
    esp = esp + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00340099; /* jge: greater or equal (signed >=) */

loc_00340073: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0034007Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034007B: ;
    ecx = eax;
    eax = 0x38E38E39;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(edi + 0x58)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(edi + 0x58))); }
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00340051; /* jg: greater (signed >) */

loc_00340099: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00340033
 * Original: 0x00340033 - 0x0034009F (108 bytes, 46 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340033(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00340033: ;
    ecx = eax;
    eax = 0x38E38E39;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(edi + 0x58)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(edi + 0x58))); }
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00340099; /* jle: less or equal (signed <=) */

loc_00340051: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340057u); RECOMP_ABI_CALL(0x0033FDF0u, sub_0033FDF0); /* call 0x0033FDF0 */

loc_00340057: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00340099; /* je: equal / zero */

loc_0034005E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340064u); RECOMP_ABI_CALL(0x0033FF20u, sub_0033FF20); /* call 0x0033FF20 */

loc_00340064: ;
    ecx = MEM32(edi + 0x30);
    ebx = ebx + eax;
    eax = MEM32(edi + 0x3C);
    esp = esp + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00340099; /* jge: greater or equal (signed >=) */

loc_00340073: ;
    edx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0034007Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034007B: ;
    ecx = eax;
    eax = 0x38E38E39;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(edi + 0x58)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(edi + 0x58))); }
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00340051; /* jg: greater (signed >) */

loc_00340099: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003400A0
 * Original: 0x003400A0 - 0x0034013F (159 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003400A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003400A0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x6C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    if (CMP_G(_fas & _fbs, 0)) goto loc_003400B9; /* jg: greater (signed >) */

loc_003400B4: ;
    ebx = MEM32(eax + 0x50);
    goto loc_003400D6;

loc_003400B9: ;
    eax = MEM32(eax + 0x50);
    eax = eax + ecx + 0x7FF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    eax = eax << 0xB;
    ebx = eax;
    ebx = ebx - ecx;

loc_003400D6: ;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    edi = ebx + -4;
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x003400E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003400E1: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003400EE; /* jge: greater or equal (signed >=) */

loc_003400E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003400EE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    edx = esp + 0x18;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = 0x8001;
    PUSH32(esp, 0x00340105u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_00340105: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 0x28;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = edi;
    PUSH32(esp, 0x00340118u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_00340118: ;
    esp = esp + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM8(esp + 0x10) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00340139; /* jle: less or equal (signed <=) */

loc_00340124: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esp + 0x18;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00340133u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_00340133: ;
    esp = esp + 0x10;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00340124; /* jne: not equal / not zero */

loc_00340139: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00340140
 * Original: 0x00340140 - 0x00340759 (1561 bytes, 514 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340140(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00340140: ;
    eax = MEM32(0x47A038);
    esp = esp - 0xC;
    edx = eax + 1;
    goto loc_00340150;

    /* nop */

loc_00340150: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00340150; /* jne: not equal / not zero */

loc_00340157: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = eax - edx;
    PUSH32(esp, 0x7FFFFFFF);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00340176u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00340176: ;
    edx = MEM32(esi);
    ebp = MEM32(esp + 0x24);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00340187u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00340187: ;
    edi = MEM32(esp + 0x38);
    ecx = MEM32(edi + 0x48);
    ecx = ecx + 4;
    esp = esp + 0x1C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003401A1; /* jge: greater or equal (signed >=) */

loc_00340198: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_003401A1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    edx = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = 0x8000;
    PUSH32(esp, 0x003401B9u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_003401B9: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_003401C5: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + 0x48));
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x003401DEu); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_003401DE: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_003401EA: ;
    SET_LO8(edx, MEM8(edi + 0x4C));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    MEM8(esp + 0x34) = LO8(edx);
    PUSH32(esp, 0x003401FEu); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_003401FE: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_0034020A: ;
    SET_LO8(ecx, MEM8(edi + 0x50));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    MEM8(esp + 0x34) = LO8(ecx);
    PUSH32(esp, 0x0034021Eu); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_0034021E: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_0034022A: ;
    SET_LO8(eax, MEM8(edi + 0x54));
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM8(esp + 0x34) = LO8(eax);
    PUSH32(esp, 0x00340240u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_00340240: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_0034024C: ;
    SET_LO8(edx, MEM8(edi + 0x58));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    MEM8(esp + 0x34) = LO8(edx);
    PUSH32(esp, 0x00340260u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_00340260: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_0034026C: ;
    ecx = MEM32(edi + 0x5C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edx = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0x00340281u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_00340281: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_0034028D: ;
    eax = MEM32(edi + 0x60);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x003402A3u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_003402A3: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_003402AF: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(edi + 0x64));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0x003402C7u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_003402C7: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_003402D3: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    MEM8(esp + 0x34) = 4;
    PUSH32(esp, 0x003402E5u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_003402E5: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_003402F1: ;
    _fa = (uint32_t)(MEM16(edi + 0x2D0)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x2D0), 0 (16-bit) */
    PUSH32(esp, esi);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    edx = edx & 8;
    MEM8(esp + 0x34) = LO8(edx);
    PUSH32(esp, 0x00340312u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_00340312: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_0034031E: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = 0;
    PUSH32(esp, 0x00340334u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_00340334: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_00340340: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(edi + 0x2C8));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0x0034035Bu); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_0034035B: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_00340367: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi + 0x2CC));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edx = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0x00340382u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_00340382: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_0034038E: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + 0x2CA));
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x003403AAu); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_003403AA: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_003403B6: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(edi + 0x2CE));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0x003403D1u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_003403D1: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_003403DD: ;
    eax = MEM32(edi + 0x6C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    ebx = 0x1C;
    if (CMP_LE(_fas, _fbs)) goto loc_00340523; /* jle: less or equal (signed <=) */

loc_003403EF: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi + 0x68));
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    edx = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0x00340408u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_00340408: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_00340414: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + 0x6C));
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x0034042Du); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_0034042D: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_00340439: ;
    eax = MEM32(edi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = 0x20;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00340521; /* jle: less or equal (signed <=) */

loc_00340449: ;
    /* nop */

loc_00340450: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    edx = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ebp;
    PUSH32(esp, 0x00340463u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_00340463: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_0034046F: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = eax;
    eax = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00340481u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_00340481: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_0034048D: ;
    ecx = MEM32(edi + 0x70);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edx = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0x003404A2u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_003404A2: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_003404AE: ;
    eax = MEM32(edi + 0x74);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x003404C4u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_003404C4: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_003404D0: ;
    edx = MEM32(edi + 0x78);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0x003404E5u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_003404E5: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_003404F1: ;
    ecx = MEM32(edi + 0x7C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edx = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0x00340506u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_00340506: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_00340512: ;
    eax = MEM32(edi + 0x6C);
    ebx = ebx + 0x14;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00340450; /* jl: less (signed <) */

loc_00340521: ;
    ebp = 0; /* xor self */

loc_00340523: ;
    _fa = (uint32_t)(MEM8(edi + 0x2D6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x2D6), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340650; /* jne: not equal / not zero */

loc_00340530: ;
    _fa = (uint32_t)(MEM32(edi + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x6C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340557; /* jne: not equal / not zero */

loc_00340535: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = ebp;
    PUSH32(esp, 0x00340548u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_00340548: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_00340554: ;
    ebx = ebx + 4;

loc_00340557: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = 0x41494E46;
    PUSH32(esp, 0x0034056Eu); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_0034056E: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_0034057A: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edx = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = 0x18;
    PUSH32(esp, 0x00340590u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_00340590: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_0034059C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    eax = edi + 0x2D7;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003405ACu); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_003405AC: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_003405B8: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi + 0x2E8));
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    edx = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0x003405D4u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_003405D4: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_003405E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = ebp;
    PUSH32(esp, 0x003405F2u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_003405F2: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_003405FE: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi + 0x2EA));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edx = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0x00340619u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_00340619: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_00340625: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + 0x2EC));
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x00340641u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_00340641: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_0034064D: ;
    ebx = ebx + 0x20;

loc_00340650: ;
    _fa = (uint32_t)(MEM8(edi + 0x2EE)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x2EE), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003406F7; /* jne: not equal / not zero */

loc_0034065D: ;
    _fa = (uint32_t)(MEM32(edi + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x6C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340684; /* jne: not equal / not zero */

loc_00340662: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    edx = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ebp;
    PUSH32(esp, 0x00340675u); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_00340675: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_00340681: ;
    ebx = ebx + 4;

loc_00340684: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = 0x43494E46;
    PUSH32(esp, 0x0034069Bu); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_0034069B: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_003406A7: ;
    ecx = MEM32(edi + 0x2F4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edx = esp + 0x2C;
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0x003406BFu); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_003406BF: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_003406C7: ;
    eax = MEM32(edi + 0x2F4);
    ebx = ebx + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003406F7; /* je: equal / zero */

loc_003406D4: ;
    eax = MEM32(edi + 0x2F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003406F7; /* je: equal / zero */

loc_003406DE: ;
    ebp = MEM32(edi + 0x2F4);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003406EEu); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_003406EE: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_003406F5: ;
    ebx = ebx + ebp;

loc_003406F7: ;
    edi = MEM32(edi + 0x48);
    ebp = MEM32(esp + 0x10);
    edi = edi - ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM8(esp + 0x24) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_0034072C; /* jge: greater or equal (signed >=) */

loc_00340709: ;
    /* nop */

loc_00340710: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 0x2C;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0034071Fu); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_0034071F: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340743; /* jne: not equal / not zero */

loc_00340727: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00340710; /* jl: less (signed <) */

loc_0034072C: ;
    ecx = MEM32(0x47A038);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034073Cu); RECOMP_ABI_CALL(0x0033F470u, sub_0033F470); /* call 0x0033F470 */

loc_0034073C: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034074D; /* je: equal / zero */

loc_00340743: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0034074D: ;
    eax = ebx + ebp + 4;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00340760
 * Original: 0x00340760 - 0x00340776 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340760(void)
{

loc_00340760: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340766u); RECOMP_ABI_CALL(0x0033F580u, sub_0033F580); /* call 0x0033F580 */

loc_00340766: ;
    ecx = 0x5F0;
    eax = 0; /* xor self */
    edi = 0x6E84C0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00340780
 * Original: 0x00340780 - 0x00340796 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340780(void)
{

loc_00340780: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340786u); RECOMP_ABI_CALL(0x0033F590u, sub_0033F590); /* call 0x0033F590 */

loc_00340786: ;
    ecx = 0x5F0;
    eax = 0; /* xor self */
    edi = 0x6E84C0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003407A0
 * Original: 0x003407A0 - 0x003408ED (333 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003407A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003407A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    esi = 0; /* xor self */
    eax = 0x6E84C0;
    goto loc_003407B0;

    /* nop */

loc_003407B0: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003407C1; /* je: equal / zero */

loc_003407B4: ;
    eax = eax + 0x2F8;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E9C80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6E9C80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003407B0; /* jl: less (signed <) */

loc_003407C1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003408EA; /* je: equal / zero */

loc_003407CC: ;
    ecx = MEM32(esp + 0xC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2F8);
    esi = esi + 0x6E84C0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, edi);
    MEM8(esi + 2) = LO8(ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_003407FE; /* jle: less or equal (signed <=) */

loc_003407E4: ;
    edi = MEM32(esp + 0x14);
    edx = esi + 4;
    PUSH32(esp, ebp);
    /* nop */

loc_003407F0: ;
    ebp = MEM32(edi + eax * 4);
    MEM32(edx) = ebp;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003407F0; /* jl: less (signed <) */

loc_003407FD: ;
    POP32(esp, ebp);

loc_003407FE: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    edi = 0x7FFF0000;
    PUSH32(esp, ebx);
    MEM32(esi + 0xC) = eax;
    MEM8(esi + 1) = LO8(ebx);
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = edi;
    PUSH32(esp, 0x00340824u); RECOMP_ABI_CALL(0x0030ED60u, sub_0030ED60); /* call 0x0030ED60 */

loc_00340824: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x20);
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = 3;
    MEM32(esi + 0x58) = ecx;
    MEM32(esi + 0x5C) = 0xAC44;
    MEM32(esi + 0x54) = 4;
    MEM32(esi + 0x50) = 0x12;
    MEM32(esi + 0x44) = 0x20;
    MEM32(esi + 0x60) = edi;
    MEM32(esi + 0x64) = 0x1F4;
    MEM32(esi + 0x68) = ebx;
    MEM32(esi + 0x6C) = ebx;
    MEM32(esi + 0x70) = ebx;
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x40) = edi;
    PUSH32(esp, 0x0034087Du); RECOMP_ABI_CALL(0x0033F690u, sub_0033F690); /* call 0x0033F690 */

loc_0034087D: ;
    edx = MEM32(esi + 0x44);
    PUSH32(esp, edx);
    MEM32(esi + 0x80) = eax;
    PUSH32(esp, 0x0034088Cu); RECOMP_ABI_CALL(0x0033F690u, sub_0033F690); /* call 0x0033F690 */

loc_0034088C: ;
    MEM32(esi + 0x84) = eax;
    eax = 0xFFFFFF80u;
    MEM16(esi + 0x2EA) = LO16(eax);
    MEM16(esi + 0x2EC) = LO16(eax);
    esp = esp + 0x18;
    eax = 0; /* xor self */
    MEM16(esi + 0x2CC) = LO16(ebx);
    MEM16(esi + 0x2C8) = LO16(ebx);
    MEM16(esi + 0x2CE) = LO16(ebx);
    MEM16(esi + 0x2CA) = LO16(ebx);
    MEM8(esi + 0x2D6) = LO8(ebx);
    MEM16(esi + 0x2E8) = LO16(ebx);
    ecx = esi + 0x2D7;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM8(esi) = 1;
    eax = esi;
    POP32(esp, edi);

loc_003408EA: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003408F0
 * Original: 0x003408F0 - 0x00340932 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003408F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003408F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00340930; /* je: equal / zero */

loc_003408F9: ;
    PUSH32(esp, 0x003408FEu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_003408FE: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00340911; /* je: equal / zero */

loc_00340908: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0034090Eu); RECOMP_ABI_CALL(0x0033F730u, sub_0033F730); /* call 0x0033F730 */

loc_0034090E: ;
    esp = esp + 4;

loc_00340911: ;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00340924; /* je: equal / zero */

loc_0034091B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00340921u); RECOMP_ABI_CALL(0x0033F730u, sub_0033F730); /* call 0x0033F730 */

loc_00340921: ;
    esp = esp + 4;

loc_00340924: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_00340930: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00340940
 * Original: 0x00340940 - 0x00340A02 (194 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00340940(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00340940: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x58);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003409D0; /* jle: less or equal (signed <=) */

loc_0034095C: ;
    eax = ebx + 4;
    MEM32(esp + 0x10) = eax;

loc_00340963: ;
    esi = MEM32(ebx + 0x68);
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003409B9; /* jle: less or equal (signed <=) */

loc_0034096C: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    edx = MEM32(eax);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00340980u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00340980: ;
    ecx = MEM32(esp + 0x2C);
    esp = esp + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003409E9; /* jne: not equal / not zero */

loc_0034098B: ;
    edi = MEM32(esp + 0x18);
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax);
    ecx = MEM32(eax);
    edx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x003409B2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003409B2: ;
    edi = MEM32(esp + 0x20);
    esp = esp + 0xC;

loc_003409B9: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebx + 0x58);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00340963; /* jl: less (signed <) */

loc_003409D0: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x28) = eax;
    MEM32(ebx + 0x2C) = eax;
    MEM32(ebx + 0x30) = eax;
    MEM8(ebx + 3) = LO8(eax);
    MEM8(ebx + 1) = 1;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003409E9: ;
    ebx = MEM32(ebx + edi * 4 + 4);
    eax = MEM32(ebx);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003409FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003409FA: ;
    esp = esp + 0xC;
    /* nop */

loc_00340A00: ;
    goto loc_00340A00;

}

/**
 * sub_00340A10
 * Original: 0x00340A10 - 0x00340A19 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340A10(void)
{

loc_00340A10: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 3) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00340A20
 * Original: 0x00340A20 - 0x00340A2C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340A20(void)
{

loc_00340A20: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x5C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00340A30
 * Original: 0x00340A30 - 0x00340A3C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340A30(void)
{

loc_00340A30: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x48) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00340A40
 * Original: 0x00340A40 - 0x00340A4C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340A40(void)
{

loc_00340A40: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x58) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00340A50
 * Original: 0x00340A50 - 0x00340A5F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340A50(void)
{

loc_00340A50: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x3C) = eax;
    MEM32(ecx + 0x60) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00340A60
 * Original: 0x00340A60 - 0x00340A94 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340A60(void)
{

loc_00340A60: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00340A6Fu); RECOMP_ABI_CALL(0x00340A40u, sub_00340A40); /* call 0x00340A40 */

loc_00340A6F: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00340A7Au); RECOMP_ABI_CALL(0x00340A20u, sub_00340A20); /* call 0x00340A20 */

loc_00340A7A: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00340A85u); RECOMP_ABI_CALL(0x00340A50u, sub_00340A50); /* call 0x00340A50 */

loc_00340A85: ;
    PUSH32(esp, 0x11C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00340A90u); RECOMP_ABI_CALL(0x00340A30u, sub_00340A30); /* call 0x00340A30 */

loc_00340A90: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00340AA0
 * Original: 0x00340AA0 - 0x00340B9A (250 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340AA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00340AA0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = MEM32(esi + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi + 0x58);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00340B0E; /* jle: less or equal (signed <=) */

loc_00340ABB: ;
    ebx = esi + 4;
    edi = esi + 0x2C8;

loc_00340AC4: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x00340AD5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00340AD5: ;
    eax = MEM32(esp + 0x24);
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00340B0E; /* je: equal / zero */

loc_00340AE0: ;
    eax = MEM32(esp + 0x10);
    SET_LO16(eax, MEM16(eax));
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM16(edi + 4) = LO16(eax);
    MEM16(edi) = LO16(eax);
    eax = MEM32(ebx);
    ecx = MEM32(eax);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x00340AFDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00340AFD: ;
    eax = MEM32(esi + 0x58);
    esp = esp + 0xC;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 2;
    ebx = ebx + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00340AC4; /* jl: less (signed <) */

loc_00340B0E: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00340B92; /* jl: less (signed <) */

loc_00340B15: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00340B41; /* jle: less or equal (signed <=) */

loc_00340B1B: ;
    eax = esi + 0x88;

loc_00340B21: ;
    SET_LO16(edx, MEM16(eax + 0x240));
    MEM16(eax) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 0x244));
    MEM16(eax + 4) = LO16(edx);
    edx = MEM32(esi + 0x58);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00340B21; /* jl: less (signed <) */

loc_00340B41: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00340B4Cu); RECOMP_ABI_CALL(0x00340140u, sub_00340140); /* call 0x00340140 */

loc_00340B4C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00340B92; /* je: equal / zero */

loc_00340B53: ;
    ecx = MEM32(esi + 0x2C);
    ecx = ecx + eax;
    eax = MEM32(esi + 0x58);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x2C) = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00340B8E; /* jle: less or equal (signed <=) */

loc_00340B64: ;
    ebx = esi + 0x80;
    /* nop */

loc_00340B70: ;
    ecx = MEM32(esi + 0x5C);
    edx = MEM32(esi + 0x64);
    eax = MEM32(ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00340B80u); RECOMP_ABI_CALL(0x0033F770u, sub_0033F770); /* call 0x0033F770 */

loc_00340B80: ;
    eax = MEM32(esi + 0x58);
    esp = esp + 0xC;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00340B70; /* jl: less (signed <) */

loc_00340B8E: ;
    MEM8(esi + 1) = 2;

loc_00340B92: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00340BA0
 * Original: 0x00340BA0 - 0x00340BED (77 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00340BA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00340BDA; /* jne: not equal / not zero */

loc_00340BAC: ;
    /* nop */

loc_00340BB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00340BB6u); RECOMP_ABI_CALL(0x00340020u, sub_00340020); /* call 0x00340020 */

loc_00340BB6: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00340BEB; /* je: equal / zero */

loc_00340BBD: ;
    edx = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x3C);
    edx = edx + eax;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x2C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00340BB0; /* jl: less (signed <) */

loc_00340BCF: ;
    MEM8(esi + 3) = 1;
    SET_LO8(eax, MEM8(esi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00340BB0; /* je: equal / zero */

loc_00340BDA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00340BE0u); RECOMP_ABI_CALL(0x003400A0u, sub_003400A0); /* call 0x003400A0 */

loc_00340BE0: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00340BEB; /* jle: less or equal (signed <=) */

loc_00340BE7: ;
    MEM8(esi + 1) = 3;

loc_00340BEB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00340BF0
 * Original: 0x00340BF0 - 0x00340C12 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340BF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00340BF0: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340C04; /* jne: not equal / not zero */

loc_00340BFB: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00340AA0(); return; /* tail jmp 0x00340AA0 */

loc_00340C04: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340C11; /* jne: not equal / not zero */

loc_00340C08: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00340BA0(); return; /* tail jmp 0x00340BA0 */

loc_00340C11: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00340C20
 * Original: 0x00340C20 - 0x00340C44 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00340C20: ;
    PUSH32(esp, esi);
    esi = 0x6E84C0;

loc_00340C26: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340C34; /* jne: not equal / not zero */

loc_00340C2B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00340C31u); RECOMP_ABI_CALL(0x00340BF0u, sub_00340BF0); /* call 0x00340BF0 */

loc_00340C31: ;
    esp = esp + 4;

loc_00340C34: ;
    esi = esi + 0x2F8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E9C80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6E9C80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00340C26; /* jl: less (signed <) */

loc_00340C42: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00340C44
 * Original: 0x00340C44 - 0x00340C81 (61 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340C44(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00340C44: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x430828);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00340C50u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00340C50: ;
    esi = ecx;
    MEM32(esi) = 0x430820;
    PUSH32(esp, 0xE);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00340C5Fu); RECOMP_ABI_CALL(0x00345674u, sub_00345674); /* call 0x00345674 */

loc_00340C5F: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00340C72; /* je: equal / zero */

loc_00340C6B: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00340C71u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00340C71: ;
    POP32(esp, ecx);

loc_00340C72: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00340C7Bu); RECOMP_ABI_CALL(0x00340C81u, sub_00340C81); /* call 0x00340C81 */

loc_00340C7B: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00340C80u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00340C80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00340C81
 * Original: 0x00340C81 - 0x00340C8A (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340C81(void)
{

loc_00340C81: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x00340C88u); RECOMP_ABI_CALL(0x003455C2u, sub_003455C2); /* call 0x003455C2 */

loc_00340C88: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00340C8A
 * Original: 0x00340C8A - 0x00340CA6 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340C8A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00340C8A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00340C92u); RECOMP_ABI_CALL(0x00340C44u, sub_00340C44); /* call 0x00340C44 */

loc_00340C92: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00340CA0; /* je: equal / zero */

loc_00340C99: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00340C9Fu); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00340C9F: ;
    POP32(esp, ecx);

loc_00340CA0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00340CA6
 * Original: 0x00340CA6 - 0x00340CDE (56 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340CA6(void)
{

loc_00340CA6: ;
    eax = 0x345A4D;
    MEM32(0x47A670) = eax;
    MEM32(0x47A674) = 0x3456FA;
    MEM32(0x47A678) = 0x34575F;
    MEM32(0x47A67C) = 0x3456A2;
    MEM32(0x47A680) = 0x345745;
    MEM32(0x47A684) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00340CDE
 * Original: 0x00340CDE - 0x00340D06 (40 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340CDE(void)
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

loc_00340CDE: ;
    PUSH32(esp, 0x00340CE3u); RECOMP_ABI_CALL(0x00340CA6u, sub_00340CA6); /* call 0x00340CA6 */

loc_00340CE3: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00340CEF; /* je: equal / zero */

loc_00340CEA: ;
    PUSH32(esp, 0x00340CEFu); RECOMP_ABI_CALL(0x00345A9Eu, sub_00345A9E); /* call 0x00345A9E */

loc_00340CEF: ;
    /* FPU: fnclex  */
    esp += 4; return; /* ret */

    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00340CFDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00340CFD: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x00340D04u); RECOMP_ABI_CALL(0x00345AB0u, sub_00345AB0); /* call 0x00345AB0 */

loc_00340D04: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00340CF2
 * Original: 0x00340CF2 - 0x00340D06 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340CF2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00340CF2: ;
    eax = MEM32(0x5D99EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00340CFD; /* je: equal / zero */

loc_00340CFB: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00340CFDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00340CFD: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x00340D04u); RECOMP_ABI_CALL(0x00345AB0u, sub_00345AB0); /* call 0x00345AB0 */

loc_00340D04: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00340D06
 * Original: 0x00340D06 - 0x00340D86 (128 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340D06(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00340D06: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x6F12F4));
    PUSH32(esp, 0x00340D12u); RECOMP_ABI_CALL(0x00345ACCu, sub_00345ACC); /* call 0x00345ACC */

loc_00340D12: ;
    POP32(esp, ecx);
    ecx = MEM32(0x6F12F0);
    esi = eax;
    eax = MEM32(0x6F12F4);
    edx = ecx;
    edx = edx - eax;
    edx = edx + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00340D79; /* jae: above or equal (unsigned >=) */

loc_00340D2B: ;
    ecx = 0x800;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00340D36; /* jae: above or equal (unsigned >=) */

loc_00340D34: ;
    ecx = esi;

loc_00340D36: ;
    ecx = ecx + esi;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00340D3Fu); RECOMP_ABI_CALL(0x003439EBu, sub_003439EB); /* call 0x003439EB */

loc_00340D3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_00340D5C; /* jne: not equal / not zero */

loc_00340D45: ;
    esi = esi + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x6F12F4));
    PUSH32(esp, 0x00340D54u); RECOMP_ABI_CALL(0x003439EBu, sub_003439EB); /* call 0x003439EB */

loc_00340D54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_00340D5C; /* jne: not equal / not zero */

loc_00340D5A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00340D5C: ;
    ecx = MEM32(0x6F12F0);
    ecx = ecx - MEM32(0x6F12F4);
    MEM32(0x6F12F4) = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    ecx = eax + ecx * 4;
    MEM32(0x6F12F0) = ecx;

loc_00340D79: ;
    MEM32(ecx) = edi;
    MEM32(0x6F12F0) = MEM32(0x6F12F0) + 4;
    eax = edi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00340D86
 * Original: 0x00340D86 - 0x00340DAE (40 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00340D86(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00340D86: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x00340D90u); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_00340D90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    MEM32(0x6F12F4) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00340D9E; /* jne: not equal / not zero */

loc_00340D9A: ;
    PUSH32(esp, 0x18);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_00340D9E: ;
    MEM32(eax) = MEM32(eax) & 0;
    eax = MEM32(0x6F12F4);
    MEM32(0x6F12F0) = eax;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00340DAE
 * Original: 0x00340DAE - 0x00340DE0 (50 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340DAE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00340DAE: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x430838);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00340DBAu); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00340DBA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00340DBFu); RECOMP_ABI_CALL(0x003427E4u, sub_003427E4); /* call 0x003427E4 */

loc_00340DBF: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    edi = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00340DCBu); RECOMP_ABI_CALL(0x00340D06u, sub_00340D06); /* call 0x00340D06 */

loc_00340DCB: ;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00340DD7u); RECOMP_ABI_CALL(0x00340DE0u, sub_00340DE0); /* call 0x00340DE0 */

loc_00340DD7: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00340DDFu); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00340DDF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00340DE0
 * Original: 0x00340DE0 - 0x00340DE6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340DE0(void)
{

loc_00340DE0: ;
    PUSH32(esp, 0x00340DE5u); RECOMP_ABI_CALL(0x003427EDu, sub_003427ED); /* call 0x003427ED */

loc_00340DE5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00340DE6
 * Original: 0x00340DE6 - 0x00340DF8 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340DE6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00340DE6: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x00340DEFu); RECOMP_ABI_CALL(0x00340DAEu, sub_00340DAE); /* call 0x00340DAE */

loc_00340DEF: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00340E00
 * Original: 0x00340E00 - 0x00340F24 (292 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00340E00: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00340E9F; /* je: equal / zero */

loc_00340E0D: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ebx = ecx;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 3 (32-bit) */
    edi = MEM32(esp + 0x10);
    if (TEST_NZ(_fa, _fb)) goto loc_00340E2C; /* jne: not equal / not zero */

loc_00340E21: ;
    ecx = ecx >> 2;
    if ((ecx != 0)) goto loc_00340EAF; /* jne: not equal / not zero */

loc_00340E2A: ;
    goto loc_00340E53;

loc_00340E2C: ;
    SET_LO8(eax, MEM8(esi));
    esi = esi + 1;
    MEM8(edi) = LO8(eax);
    edi = edi + 1;
    ecx = ecx - 1;
    if ((ecx == 0)) goto loc_00340E66; /* je: equal / zero */

loc_00340E3B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00340E6E; /* je: equal / zero */

loc_00340E3F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 3 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00340E2C; /* jne: not equal / not zero */

loc_00340E47: ;
    ebx = ecx;
    ecx = ecx >> 2;
    if ((ecx != 0)) goto loc_00340EAF; /* jne: not equal / not zero */

loc_00340E4E: ;
    ebx = ebx & 3;
    if ((ebx == 0)) goto loc_00340E66; /* je: equal / zero */

loc_00340E53: ;
    SET_LO8(eax, MEM8(esi));
    esi = esi + 1;
    MEM8(edi) = LO8(eax);
    edi = edi + 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00340E98; /* je: equal / zero */

loc_00340E61: ;
    ebx = ebx - 1;
    if ((ebx != 0)) goto loc_00340E53; /* jne: not equal / not zero */

loc_00340E66: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00340E6E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 3 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00340E8C; /* je: equal / zero */

loc_00340E76: ;
    MEM8(edi) = LO8(eax);
    edi = edi + 1;
    ecx = ecx - 1;
    if ((ecx == 0)) goto loc_00340F1C; /* je: equal / zero */

loc_00340E84: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 3 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00340E76; /* jne: not equal / not zero */

loc_00340E8C: ;
    ebx = ecx;
    ecx = ecx >> 2;
    if ((ecx != 0)) goto loc_00340F07; /* jne: not equal / not zero */

loc_00340E93: ;
    MEM8(edi) = LO8(eax);
    edi = edi + 1;

loc_00340E98: ;
    ebx = ebx - 1;
    if ((ebx != 0)) goto loc_00340E93; /* jne: not equal / not zero */

loc_00340E9D: ;
    POP32(esp, ebx);
    POP32(esp, esi);

loc_00340E9F: ;
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00340EA5: ;
    MEM32(edi) = edx;
    edi = edi + 4;
    ecx = ecx - 1;
    if ((ecx == 0)) goto loc_00340E4E; /* je: equal / zero */

loc_00340EAF: ;
    edx = 0x7EFEFEFF;
    eax = MEM32(esi);
    edx = edx + eax;
    eax = eax ^ 0xFFFFFFFFu;
    eax = eax ^ edx;
    edx = MEM32(esi);
    esi = esi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81010100u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x81010100u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00340EA5; /* je: equal / zero */

loc_00340EC9: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00340EF9; /* je: equal / zero */

loc_00340ECD: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(HI8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), HI8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00340EEF; /* je: equal / zero */

loc_00340ED1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFF0000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00340EE5; /* je: equal / zero */

loc_00340ED9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFF000000u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00340EA5; /* jne: not equal / not zero */

loc_00340EE1: ;
    MEM32(edi) = edx;
    goto loc_00340EFD;

loc_00340EE5: ;
    edx = edx & 0xFFFF;
    MEM32(edi) = edx;
    goto loc_00340EFD;

loc_00340EEF: ;
    edx = edx & 0xFF;
    MEM32(edi) = edx;
    goto loc_00340EFD;

loc_00340EF9: ;
    edx = 0; /* xor self */
    MEM32(edi) = edx;

loc_00340EFD: ;
    edi = edi + 4;
    eax = 0; /* xor self */
    ecx = ecx - 1;
    if ((ecx == 0)) goto loc_00340F13; /* je: equal / zero */

loc_00340F07: ;
    eax = 0; /* xor self */

loc_00340F09: ;
    MEM32(edi) = eax;
    edi = edi + 4;
    ecx = ecx - 1;
    if ((ecx != 0)) goto loc_00340F09; /* jne: not equal / not zero */

loc_00340F13: ;
    ebx = ebx & 3;
    if ((ebx != 0)) goto loc_00340E93; /* jne: not equal / not zero */

loc_00340F1C: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00340F24
 * Original: 0x00340F24 - 0x00340F54 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340F24(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00340F24: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x430848);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00340F30u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00340F30: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00340F3Du); RECOMP_ABI_CALL(0x00345B7Fu, sub_00345B7F); /* call 0x00345B7F */

loc_00340F3D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00340F48;

    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00340F48: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00340F53u); RECOMP_ABI_CALL(0x003428C6u, sub_003428C6); /* call 0x003428C6 */

loc_00340F53: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00340F41
 * Original: 0x00340F41 - 0x00340F54 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340F41(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00340F41: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00340F45
 * Original: 0x00340F45 - 0x00340F54 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340F45(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00340F45: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00340F53u); RECOMP_ABI_CALL(0x003428C6u, sub_003428C6); /* call 0x003428C6 */

loc_00340F53: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00340F54
 * Original: 0x00340F54 - 0x00340F62 (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340F54(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00340F54: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x47A050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x47A050) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340F5D; /* jne: not equal / not zero */

loc_00340F5C: ;
    esp += 4; return; /* ret */

loc_00340F5D: ;
    g_seh_ebp = ebp; sub_00340F24(); return; /* tail jmp 0x00340F24 */

}

/**
 * sub_00340F62
 * Original: 0x00340F62 - 0x00340F8D (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00340F62(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00340F62: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = MEM32(ebp + 0xC);
    eax = eax + 0xC;
    MEM32(ebp + -4) = eax;
    ebx = MEM32(XBOX_FS_BASE);
    eax = MEM32(ebx);
    MEM32(XBOX_FS_BASE) = eax;
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebp + 0xC);
    esp = MEM32(ebx + -4);
    ebp = MEM32(ebp + -4);
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

}

/**
 * sub_00340F92
 * Original: 0x00340F92 - 0x00340F99 (7 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340F92(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00340F92: ;
    POP32(esp, eax);
    POP32(esp, ecx);
    { uint32_t _tmp = MEM32(esp);
    MEM32(esp) = eax;
    eax = _tmp; }
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

}

/**
 * sub_00340F99
 * Original: 0x00340F99 - 0x00340FEB (82 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00340F99(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00340F99: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(XBOX_FS_BASE);
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -8) = 0x340FC2;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00340FC2u); RECOMP_ABI_CALL(0x0034DCA0u, sub_0034DCA0); /* call 0x0034DCA0 */

loc_00340FC2: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 4);
    eax = eax & 0xFFFFFFFDu;
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx + 4) = eax;
    edi = MEM32(XBOX_FS_BASE);
    ebx = MEM32(ebp + -4);
    MEM32(ebx) = edi;
    MEM32(XBOX_FS_BASE) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00340FEB
 * Original: 0x00340FEB - 0x00341021 (54 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00340FEB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00340FEB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_df = 0; /* cld */
    MEM32(ebp + -4) = eax;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00341011u); RECOMP_ABI_CALL(0x003464F1u, sub_003464F1); /* call 0x003464F1 */

loc_00341011: ;
    esp = esp + 0x20;
    MEM32(ebp + -4) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00341021
 * Original: 0x00341021 - 0x0034103B (26 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341021(void)
{

loc_00341021: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(eax + 0x1C));
    PUSH32(esp, MEM32(eax + 0x28));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + 0x18));
    PUSH32(esp, 0x00341035u); RECOMP_ABI_CALL(0x00345D98u, sub_00345D98); /* call 0x00345D98 */

loc_00341035: ;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0034103B
 * Original: 0x0034103B - 0x00341076 (59 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034103B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034103B: ;
    g_df = 0; /* cld */
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x47A050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x47A050) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00341057; /* je: equal / zero */

loc_0034104B: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = MEM32(eax + 4) | 8;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00341057: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, MEM32(eax + 0xC));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x20));
    PUSH32(esp, MEM32(eax + 0x10));
    PUSH32(esp, MEM32(esp + 0x20));
    PUSH32(esp, 0x00341072u); RECOMP_ABI_CALL(0x003464F1u, sub_003464F1); /* call 0x003464F1 */

loc_00341072: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00341076
 * Original: 0x00341076 - 0x0034113D (199 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00341076(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00341076: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x123) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x123 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00341098; /* jne: not equal / not zero */

loc_00341086: ;
    eax = 0x341111;
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034113A;

loc_00341098: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) & 0;
    MEM32(ebp + -36) = 0x34113D;
    eax = MEM32(0x47A050);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0x20);
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + -12) = esp;
    MEM32(ebp + -8) = ebp;
    eax = MEM32(XBOX_FS_BASE);
    MEM32(ebp + -40) = eax;
    eax = ebp + -40;
    MEM32(XBOX_FS_BASE) = eax;
    MEM32(ebp + -52) = 1;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -44) = eax;
    eax = ebp + -48;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00341108u); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_00341108: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x0034110Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034110B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -52) = MEM32(ebp + -52) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034112E; /* je: equal / zero */

loc_00341117: ;
    ebx = MEM32(XBOX_FS_BASE);
    eax = MEM32(ebx);
    ebx = MEM32(ebp + -40);
    MEM32(ebx) = eax;
    MEM32(XBOX_FS_BASE) = ebx;
    goto loc_00341137;

loc_0034112E: ;
    eax = MEM32(ebp + -40);
    MEM32(XBOX_FS_BASE) = eax;

loc_00341137: ;
    eax = MEM32(ebp + -52);

loc_0034113A: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0034113D
 * Original: 0x0034113D - 0x003411EF (178 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034113D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034113D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    g_df = 0; /* cld */
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x47A050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x47A050) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00341168; /* je: equal / zero */

loc_00341151: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    eax = eax | 8;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 4) = eax;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003411EC;

loc_00341168: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    eax = eax & 0x66;
    if ((eax == 0)) goto loc_00341182; /* je: equal / zero */

loc_00341173: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x24) = 1;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003411EC;

loc_00341182: ;
    PUSH32(esp, 1);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(eax + 0x18));
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(eax + 0x14));
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(eax + 0xC));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(eax + 0x10));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003411A9u); RECOMP_ABI_CALL(0x003464F1u, sub_003464F1); /* call 0x003464F1 */

loc_003411A9: ;
    esp = esp + 0x20;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003411C0; /* jne: not equal / not zero */

loc_003411B5: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003411C0u); RECOMP_ABI_CALL(0x00340F99u, sub_00340F99); /* call 0x00340F99 */

loc_003411C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x123);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003411D8u); RECOMP_ABI_CALL(0x00341076u, sub_00341076); /* call 0x00341076 */

loc_003411D8: ;
    esp = esp + 0x1C;
    eax = MEM32(ebp + -4);
    ebx = MEM32(ebp + 0xC);
    esp = MEM32(ebx + 0x1C);
    ebp = MEM32(ebx + 0x20);
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003411EC: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003411EF
 * Original: 0x003411EF - 0x00341269 (122 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003411EF(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003411EF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0xC);
    ebx = MEM32(edi + 0x10);
    eax = esi;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + 8) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00341245; /* jl: less (signed <) */

loc_0034120D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00341217; /* jne: not equal / not zero */

loc_00341212: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00341217u); RECOMP_ABI_CALL(0x003467F2u, sub_003467F2); /* call 0x003467F2 */

loc_00341217: ;
    ecx = MEM32(ebp + 0x10);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = esi + esi * 4;
    eax = ebx + eax * 4;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0034122B; /* jge: greater or equal (signed >=) */

loc_00341226: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 8) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00341230; /* jle: less or equal (signed <=) */

loc_0034122B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034123C; /* jne: not equal / not zero */

loc_00341230: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = eax;
    MEM32(ebp + 8) = esi;

loc_0034123C: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0034120D; /* jge: greater or equal (signed >=) */

loc_00341242: ;
    eax = MEM32(ebp + -4);

loc_00341245: ;
    ecx = MEM32(ebp + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = esi;
    ecx = MEM32(ebp + 0x18);
    MEM32(ecx) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0xC) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00341259; /* ja: above (unsigned >) */

loc_00341255: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0034125E; /* jbe: below or equal (unsigned <=) */

loc_00341259: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034125Eu); RECOMP_ABI_CALL(0x003467F2u, sub_003467F2); /* call 0x003467F2 */

loc_0034125E: ;
    POP32(esp, edi);
    eax = esi + esi * 4;
    POP32(esp, esi);
    eax = ebx + eax * 4;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00341269
 * Original: 0x00341269 - 0x00341291 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341269(void)
{

loc_00341269: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi) = eax;
    PUSH32(esp, 0x00341279u); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_00341279: ;
    eax = MEM32(eax + 0x84);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x00341287u); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_00341287: ;
    MEM32(eax + 0x84) = esi;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00341291
 * Original: 0x00341291 - 0x003412B2 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00341291(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00341291: ;
    PUSH32(esp, 0x00341296u); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_00341296: ;
    eax = MEM32(eax + 0x84);
    goto loc_003412A9;

loc_0034129E: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003412AF; /* je: equal / zero */

loc_003412A6: ;
    eax = MEM32(eax + 4);

loc_003412A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034129E; /* jne: not equal / not zero */

loc_003412AD: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_003412AF: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003412B2
 * Original: 0x003412B2 - 0x003412FE (76 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003412B2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003412B2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003412B8u); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_003412B8: ;
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x84)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x84) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003412D4; /* jne: not equal / not zero */

loc_003412C4: ;
    PUSH32(esp, 0x003412C9u); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_003412C9: ;
    ecx = MEM32(esi + 4);
    MEM32(eax + 0x84) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003412D4: ;
    PUSH32(esp, 0x003412D9u); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_003412D9: ;
    eax = MEM32(eax + 0x84);
    goto loc_003412EA;

loc_003412E1: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003412F6; /* je: equal / zero */

loc_003412E8: ;
    eax = ecx;

loc_003412EA: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003412E1; /* jne: not equal / not zero */

loc_003412F0: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_003467F2(); return; /* tail jmp 0x003467F2 */

loc_003412F6: ;
    ecx = MEM32(esi + 4);
    MEM32(eax + 4) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003412FE
 * Original: 0x003412FE - 0x00341357 (89 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003412FE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003412FE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(0x47A050);
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -20) = 0x34103B;
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = eax;
    eax = MEM32(XBOX_FS_BASE);
    MEM32(ebp + -24) = eax;
    eax = ebp + -24;
    MEM32(XBOX_FS_BASE) = eax;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00341348u); RECOMP_ABI_CALL(0x00346820u, sub_00346820); /* call 0x00346820 */

loc_00341348: ;
    ecx = eax;
    eax = MEM32(ebp + -24);
    MEM32(XBOX_FS_BASE) = eax;
    eax = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00341358
 * Original: 0x00341358 - 0x00341378 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00341358(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00341358: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x341370);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00341370u); RECOMP_ABI_CALL(0x0034DCA0u, sub_0034DCA0); /* call 0x0034DCA0 */

loc_00341370: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00341378
 * Original: 0x00341378 - 0x0034139A (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341378(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00341378: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 4), 6 (32-bit) */
    eax = 1;
    if (TEST_Z(_fa, _fb)) goto loc_00341399; /* je: equal / zero */

loc_0034138A: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0x10);
    MEM32(edx) = eax;
    eax = 3;

loc_00341399: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034139A
 * Original: 0x0034139A - 0x00341402 (104 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034139A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034139A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, 0x341378);
    PUSH32(esp, MEM32(XBOX_FS_BASE));
    MEM32(XBOX_FS_BASE) = esp;

loc_003413B7: ;
    eax = MEM32(esp + 0x20);
    ebx = MEM32(eax + 8);
    esi = MEM32(eax + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003413F4; /* je: equal / zero */

loc_003413C6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003413F4; /* je: equal / zero */

loc_003413CC: ;
    esi = esi + esi * 2;
    ecx = MEM32(ebx + esi * 4);
    MEM32(esp + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    _fa = (uint32_t)(MEM32(ebx + esi * 4 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + esi * 4 + 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003413F2; /* jne: not equal / not zero */

loc_003413E0: ;
    PUSH32(esp, 0x101);
    eax = MEM32(ebx + esi * 4 + 8);
    PUSH32(esp, 0x003413EEu); RECOMP_ABI_CALL(0x0034142Eu, sub_0034142E); /* call 0x0034142E */

loc_003413EE: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ebx + esi * 4 + 8); PUSH32(esp, 0x003413F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003413F2: ;
    goto loc_003413B7;

loc_003413F4: ;
    { uint32_t _tmp; POP32(esp, _tmp); MEM32(XBOX_FS_BASE) = _tmp; }
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00341402
 * Original: 0x00341402 - 0x00341425 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341402(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00341402: ;
    eax = 0; /* xor self */
    ecx = MEM32(XBOX_FS_BASE);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x341378) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0x341378 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00341424; /* jne: not equal / not zero */

loc_00341414: ;
    edx = MEM32(ecx + 0xC);
    edx = MEM32(edx + 0xC);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00341424; /* jne: not equal / not zero */

loc_0034141F: ;
    eax = 1;

loc_00341424: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00341425
 * Original: 0x00341425 - 0x0034142E (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341425(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00341425: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ebx = 0x47A054;
    g_seh_ebp = ebp; sub_00341438(); return; /* tail jmp 0x00341438 */

}

/**
 * sub_0034142E
 * Original: 0x0034142E - 0x00341446 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034142E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034142E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ebx = 0x47A054;
    ecx = MEM32(ebp + 8);
    MEM32(ebx + 8) = ecx;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 0xC) = ebp;
    POP32(esp, ecx);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00341438
 * Original: 0x00341438 - 0x00341446 (14 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341438(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00341438: ;
    MEM32(ebx + 8) = ecx;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 0xC) = ebp;
    POP32(esp, ecx);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00341446
 * Original: 0x00341446 - 0x0034145B (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341446(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00341446: ;
    SET_LO16(eax, MEM16(esp + 0xA));
    SET_LO16(eax, LO16(eax) & 0x7FF0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7FF0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7FF0 (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0034145B
 * Original: 0x0034145B - 0x003414F7 (156 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034145B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0034145B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xE);
    ecx = 0x7FF0;
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(ecx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034149C; /* jne: not equal / not zero */

loc_0034146F: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034147Cu); RECOMP_ABI_CALL(0x00346896u, sub_00346896); /* call 0x00346896 */

loc_0034147C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if ((_fa == 0)) goto loc_00341495; /* je: equal / zero */

loc_00341481: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00341491; /* je: equal / zero */

loc_00341484: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0034148C; /* je: equal / zero */

loc_00341487: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0034148C: ;
    PUSH32(esp, 2);

loc_0034148E: ;
    POP32(esp, eax);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00341491: ;
    PUSH32(esp, 4);
    goto loc_0034148E;

loc_00341495: ;
    eax = 0x200;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0034149C: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x8000;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(edx), LO16(edx) (16-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ecx = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_003414C7; /* jne: not equal / not zero */

loc_003414A8: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0xC), 0xFFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003414B7; /* jne: not equal / not zero */

loc_003414B1: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003414C7; /* je: equal / zero */

loc_003414B7: ;
    eax = ecx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFF90u;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80)) >> 32) & 1);
    eax = eax + 0x80;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003414C7: ;
    fp_push(MEMD(0x3DCF30)); /* fld double */
    fp_push(MEMD(ebp + 8)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = ecx;
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003414E7; /* jp: parity */

loc_003414DB: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFE0u;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003414E7: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFF08u;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x100)) >> 32) & 1);
    eax = eax + 0x100;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003414F7
 * Original: 0x003414F7 - 0x003414FC (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003414F7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003414F7: ;
    g_seh_ebp = ebp; sub_00343748(); return; /* tail jmp 0x00343748 */

}

/**
 * sub_003414FC
 * Original: 0x003414FC - 0x003415CF (211 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003414FC(void)
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

loc_003414FC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0xFFFF;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x47A064));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00341514u); RECOMP_ABI_CALL(0x00347033u, sub_00347033); /* call 0x00347033 */

loc_00341514: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    POP32(esp, ecx);
    POP32(esp, ecx);
    ebx = eax;
    eax = MEM32(ebp + 0xE);
    PUSH32(esp, ecx);
    SET_LO16(eax, LO16(eax) & 0x7FF0);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7FF0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7FF0 (16-bit) */
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_00341582; /* jne: not equal / not zero */

loc_0034152D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00341532u); RECOMP_ABI_CALL(0x00346896u, sub_00346896); /* call 0x00346896 */

loc_00341532: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00341565; /* jle: less or equal (signed <=) */

loc_00341538: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00341557; /* jle: less or equal (signed <=) */

loc_0034153D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00341565; /* jne: not equal / not zero */

loc_00341542: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xB);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00341552u); RECOMP_ABI_CALL(0x00346F29u, sub_00346F29); /* call 0x00346F29 */

loc_00341552: ;
    esp = esp + 0x10;
    goto loc_003415CB;

loc_00341557: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034155Eu); RECOMP_ABI_CALL(0x00347033u, sub_00347033); /* call 0x00347033 */

loc_0034155E: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_003415CB;

loc_00341565: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ebx);
    fp_top() = fp_top() + MEMD(0x3D45C8); /* fadd qword ptr [0x3d45c8] */
    esp = esp - 0x10;
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(ebp + 8)); /* fld double */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xB);
    PUSH32(esp, 8);
    goto loc_003415C3;

loc_00341582: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00341587u); RECOMP_ABI_CALL(0x003470ADu, sub_003470AD); /* call 0x003470AD */

loc_00341587: ;
    MEMD(ebp + -8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(ebp + 8)); /* fld double */
    POP32(esp, ecx);
    fp_push(MEMD(ebp + -8)); /* fld double */
    POP32(esp, ecx);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003415A9; /* jp: parity */

loc_0034159B: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003415A2u); RECOMP_ABI_CALL(0x00347033u, sub_00347033); /* call 0x00347033 */

loc_003415A2: ;
    fp_push(MEMD(ebp + -8)); /* fld double */
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_003415CB;

loc_003415A9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034159B; /* jne: not equal / not zero */

loc_003415AE: ;
    fp_push(MEMD(ebp + -8)); /* fld double */
    PUSH32(esp, ebx);
    esp = esp - 0x10;
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(ebp + 8)); /* fld double */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x10);

loc_003415C3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003415C8u); RECOMP_ABI_CALL(0x00346F7Cu, sub_00346F7C); /* call 0x00346F7C */

loc_003415C8: ;
    esp = esp + 0x1C;

loc_003415CB: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003415CF
 * Original: 0x003415CF - 0x00341609 (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003415CF(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003415CF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x20;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -20) = 0x49;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -32) = eax;
    ecx = eax + 1;

loc_003415E8: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003415E8; /* jne: not equal / not zero */

loc_003415EF: ;
    eax = eax - ecx;
    MEM32(ebp + -28) = eax;
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -32;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00341604u); RECOMP_ABI_CALL(0x00347106u, sub_00347106); /* call 0x00347106 */

loc_00341604: ;
    esp = esp + 0xC;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00341609
 * Original: 0x00341609 - 0x003416AE (165 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00341609(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00341609: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x20));
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034161Au); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_0034161A: ;
    PUSH32(esp, 8);
    POP32(esp, ecx);
    MEM32(ebp + 0xC) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    edi = ebp + -32;
    PUSH32(esp, 7);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_0034162A: ;
    SET_LO8(edx, MEM8(esi));
    ecx = ZX8(LO8(edx));
    eax = ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    SET_LO8(ebx, 1);
    if (LO8(ecx)) _cf = (int)(((LO8(ebx)) >> (8 - (LO8(ecx)))) & 1);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    eax = ebp + eax + -32;
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0034162A; /* jne: not equal / not zero */

loc_00341645: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00341659; /* jne: not equal / not zero */

loc_0034164C: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(eax + 0x18);
    goto loc_00341659;

loc_00341654: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00341672; /* je: equal / zero */

loc_00341658: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00341659: ;
    SET_LO8(eax, MEM8(edx));
    esi = ZX8(LO8(eax));
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    ecx = esi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (LO8(ecx)) _cf = (int)(((ebx) >> (32 - (LO8(ecx)))) & 1);
    ebx = ebx << LO8(ecx);
    if (3) _cf = (int)(((esi) >> ((3) - 1)) & 1);
    esi = esi >> 3;
    SET_LO8(ecx, MEM8(ebp + esi + -32));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00341654; /* jne: not equal / not zero */

loc_00341672: ;
    ebx = edx;
    goto loc_0034168E;

loc_00341676: ;
    esi = ZX8(MEM8(edx));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    ecx = esi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    if (3) _cf = (int)(((esi) >> ((3) - 1)) & 1);
    esi = esi >> 3;
    SET_LO8(ecx, MEM8(ebp + esi + -32));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00341695; /* jne: not equal / not zero */

loc_0034168D: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034168E: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00341676; /* jne: not equal / not zero */

loc_00341693: ;
    goto loc_00341699;

loc_00341695: ;
    MEM8(edx) = 0;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00341699: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x18) = edx;
    eax = ebx;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003416B0
 * Original: 0x003416B0 - 0x00341736 (134 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003416B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003416B0: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(edx, MEM8(ecx));
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00341730; /* je: equal / zero */

loc_003416C1: ;
    SET_HI8(edx, MEM8(ecx + 1));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(HI8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), HI8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034171D; /* je: equal / zero */

loc_003416C8: ;
    esi = edi;
    ecx = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(edi));
    esi = esi + 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003416EE; /* je: equal / zero */

loc_003416D7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003416E8; /* je: equal / zero */

loc_003416DB: ;
    SET_LO8(eax, MEM8(esi));
    esi = esi + 1;

loc_003416E0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003416EE; /* je: equal / zero */

loc_003416E4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003416DB; /* jne: not equal / not zero */

loc_003416E8: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_003416EE: ;
    SET_LO8(eax, MEM8(esi));
    esi = esi + 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), HI8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003416E0; /* jne: not equal / not zero */

loc_003416F7: ;
    edi = esi + -1;

loc_003416FA: ;
    SET_HI8(eax, MEM8(ecx + 2));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), HI8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00341729; /* je: equal / zero */

loc_00341701: ;
    SET_LO8(eax, MEM8(esi));
    esi = esi + 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), HI8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003416C8; /* jne: not equal / not zero */

loc_0034170A: ;
    SET_LO8(eax, MEM8(ecx + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00341729; /* je: equal / zero */

loc_00341711: ;
    SET_HI8(eax, MEM8(esi + -1));
    ecx = ecx + 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), HI8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003416FA; /* je: equal / zero */

loc_0034171B: ;
    goto loc_003416C8;

loc_0034171D: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, LO8(edx));
    g_seh_ebp = ebp; sub_003426D6(); return; /* tail jmp 0x003426D6 */

loc_00341729: ;
    eax = edi + -1;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00341730: ;
    eax = edi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00341736
 * Original: 0x00341736 - 0x00341792 (92 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00341736(void)
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

loc_00341736: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);

loc_00341740: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    eax = ZX8(MEM8(esi));
    if (CMP_LE(_fas, _fbs)) goto loc_00341758; /* jle: less or equal (signed <=) */

loc_0034174C: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00341754u); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_00341754: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00341765;

loc_00341758: ;
    ecx = MEM32(0x47A7C8);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 8;

loc_00341765: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034176C; /* je: equal / zero */

loc_00341769: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00341740;

loc_0034176C: ;
    eax = esi;
    edx = eax + 1;

loc_00341771: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00341771; /* jne: not equal / not zero */

loc_00341778: ;
    PUSH32(esp, 0);
    eax = eax - edx;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00341789u); RECOMP_ABI_CALL(0x00347C83u, sub_00347C83); /* call 0x00347C83 */

loc_00341789: ;
    fp_push(MEMD(eax + 0x10)); /* fld double */
    esp = esp + 0x14;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00341792
 * Original: 0x00341792 - 0x003417EA (88 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00341792(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00341792: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -32;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = 0x7FFFFFFF;
    MEM32(ebp + -20) = 0x42;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -32) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003417C1u); RECOMP_ABI_CALL(0x00347ED0u, sub_00347ED0); /* call 0x00347ED0 */

loc_003417C1: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003417E4; /* je: equal / zero */

loc_003417CA: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_003417D7; /* js: sign (negative) */

loc_003417CF: ;
    eax = MEM32(ebp + -32);
    MEM8(eax) = 0;
    goto loc_003417E4;

loc_003417D7: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003417E2u); RECOMP_ABI_CALL(0x00347D29u, sub_00347D29); /* call 0x00347D29 */

loc_003417E2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_003417E4: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003417EA
 * Original: 0x003417EA - 0x00341819 (47 bytes, 14 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003417EA(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003417EA: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x430858);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003417F6u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003417F6: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;

loc_003417FA: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0034180D; /* js: sign (negative) */

loc_003417FF: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx - MEM32(ebp + 0xC);
    MEM32(ebp + 8) = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ebp + 0x14); PUSH32(esp, 0x0034180Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034180B: ;
    goto loc_003417FA;

loc_0034180D: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00341816u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00341816: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00341819
 * Original: 0x00341819 - 0x00341848 (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341819(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00341819: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    eax = MEM32(eax);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -32);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE06D7363u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xE06D7363u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00341842; /* je: equal / zero */

loc_00341832: ;
    MEM32(ebp + -36) = 0;
    eax = MEM32(ebp + -36);
    esp += 4; return; /* ret */

loc_00341842: ;
    PUSH32(esp, 0x00341847u); RECOMP_ABI_CALL(0x003467B6u, sub_003467B6); /* call 0x003467B6 */

loc_00341847: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034183D
 * Original: 0x0034183D - 0x00341848 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034183D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034183D: ;
    esp = MEM32(ebp + -24);
    g_seh_ebp = ebp; sub_0034180D(); return; /* tail jmp 0x0034180D */

    PUSH32(esp, 0x00341847u); RECOMP_ABI_CALL(0x003467B6u, sub_003467B6); /* call 0x003467B6 */

loc_00341847: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00341848
 * Original: 0x00341848 - 0x00341890 (72 bytes, 20 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341848(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00341848: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x430868);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00341854u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00341854: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    esi = MEM32(ebp + 0xC);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;

loc_00341868: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00341878; /* js: sign (negative) */

loc_0034186D: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - esi;
    ecx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ebp + 0x14); PUSH32(esp, 0x00341876u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00341876: ;
    goto loc_00341868;

loc_00341878: ;
    MEM32(ebp + -28) = 1;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00341888u); RECOMP_ABI_CALL(0x00341890u, sub_00341890); /* call 0x00341890 */

loc_00341888: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034188Du); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034188D: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00341890
 * Original: 0x00341890 - 0x003418A8 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341890(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00341890: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003418A7; /* jne: not equal / not zero */

loc_00341896: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x003418A7u); RECOMP_ABI_CALL(0x003417EAu, sub_003417EA); /* call 0x003417EA */

loc_003418A7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003418A8
 * Original: 0x003418A8 - 0x003418F2 (74 bytes, 22 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003418A8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003418A8: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x430878);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003418B4u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003418B4: ;
    eax = 0; /* xor self */
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -28) = eax;

loc_003418BF: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003418DA; /* jge: greater or equal (signed >=) */

loc_003418C7: ;
    esi = MEM32(ebp + 8);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ebp + 0x14); PUSH32(esp, 0x003418CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003418CF: ;
    esi = esi + MEM32(ebp + 0xC);
    MEM32(ebp + 8) = esi;
    MEM32(ebp + -28) = MEM32(ebp + -28) + 1;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003418BF;

loc_003418DA: ;
    MEM32(ebp + -32) = 1;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003418EAu); RECOMP_ABI_CALL(0x003418F2u, sub_003418F2); /* call 0x003418F2 */

loc_003418EA: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003418EFu); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003418EF: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003418F2
 * Original: 0x003418F2 - 0x0034190A (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003418F2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003418F2: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00341909; /* jne: not equal / not zero */

loc_003418F8: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x00341909u); RECOMP_ABI_CALL(0x003417EAu, sub_003417EA); /* call 0x003417EA */

loc_00341909: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034190C
 * Original: 0x0034190C - 0x00341916 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034190C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034190C: ;
    edx = 0x47A070;
    g_seh_ebp = ebp; sub_003486D3(); return; /* tail jmp 0x003486D3 */

}

/**
 * sub_00341916
 * Original: 0x00341916 - 0x00341920 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341916(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00341916: ;
    edx = 0x47A070;
    g_seh_ebp = ebp; sub_00348658(); return; /* tail jmp 0x00348658 */

}

/**
 * sub_00341920
 * Original: 0x00341920 - 0x0034192E (14 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00341920(void)
{
    int _flags = 0; /* fallback flag var */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00341920: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */

loc_00341922: ;
    fp_top() = fmod(fp_top(), fp_st1()); /* fprem */
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    /* wait - FPU sync */
    /* sahf - store AH to flags */
    if (0 /* fpu: unordered/NaN */) goto loc_00341922; /* jp: parity */

loc_0034192B: ;
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0034192E
 * Original: 0x0034192E - 0x00341986 (88 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034192E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034192E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    goto loc_00341936;

loc_00341935: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00341936: ;
    eax = ZX8(MEM8(esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0034193Fu); RECOMP_ABI_CALL(0x00348AA2u, sub_00348AA2); /* call 0x00348AA2 */

loc_0034193F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_00341935; /* jne: not equal / not zero */

loc_00341944: ;
    ecx = ZX8(MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2D (32-bit) */
    edx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00341954; /* je: equal / zero */

loc_0034194F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00341958; /* jne: not equal / not zero */

loc_00341954: ;
    ecx = ZX8(MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00341958: ;
    eax = 0; /* xor self */

loc_0034195A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00341969; /* jl: less (signed <) */

loc_0034195F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x39 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00341969; /* jg: greater (signed >) */

loc_00341964: ;
    ecx = ecx - 0x30;
    goto loc_0034196C;

loc_00341969: ;
    ecx = ecx | 0xFFFFFFFFu;

loc_0034196C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034197D; /* je: equal / zero */

loc_00341971: ;
    eax = eax + eax * 4;
    eax = ecx + eax * 2;
    ecx = ZX8(MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034195A;

loc_0034197D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2D (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00341985; /* jne: not equal / not zero */

loc_00341983: ;
    eax = (uint32_t)(-(int32_t)eax);

loc_00341985: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00341986
 * Original: 0x00341986 - 0x0034198B (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341986(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00341986: ;
    g_seh_ebp = ebp; sub_0034192E(); return; /* tail jmp 0x0034192E */

}

/**
 * sub_0034198C
 * Original: 0x0034198C - 0x0034198E (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034198C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034198C: ;
    g_seh_ebp = ebp; sub_003419AB(); return; /* tail jmp 0x003419AB */

}

/**
 * sub_00341990
 * Original: 0x00341990 - 0x003419AB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341990(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00341990: ;
    goto loc_00341992;

loc_00341992: ;
    esp = esp - 0x14;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    MEMD(esp + 8) = fp_top(); /* fst */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x003419A7u); RECOMP_ABI_CALL(0x003419B4u, sub_003419B4); /* call 0x003419B4 */

loc_003419A7: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003419AB
 * Original: 0x003419AB - 0x003419B4 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003419AB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003419AB: ;
    edx = esp + 0xC;
    PUSH32(esp, 0x003419B4u); RECOMP_ABI_CALL(0x00348D65u, sub_00348D65); /* call 0x00348D65 */

    g_seh_ebp = ebp; sub_003419B4(); return; /* fallthrough 0x003419B4 */

}

/**
 * sub_003419B4
 * Original: 0x003419B4 - 0x00341B79 (453 bytes, 123 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003419B4(void)
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

loc_003419B4: ;
    ecx = eax;
    PUSH32(esp, eax);
    /* wait - FPU sync */
    MEM16(esp) = g_fp_control_word; /* fnstcw word ptr [esp] */
    _fa = (uint32_t)(MEM16(esp)) & 0xFFFFu; _fb = (uint32_t)(0x27F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp), 0x27F (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003419C8; /* je: equal / zero */

loc_003419C3: ;
    PUSH32(esp, 0x003419C8u); RECOMP_ABI_CALL(0x00348D35u, sub_00348D35); /* call 0x00348D35 */

loc_003419C8: ;
    ecx = ecx & 0x7FF00000;
    edx = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7FF00000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00341A7B; /* je: equal / zero */

loc_003419DE: ;
    PUSH32(esp, 0x003419E3u); RECOMP_ABI_CALL(0x00348D65u, sub_00348D65); /* call 0x00348D65 */

loc_003419E3: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00341A77; /* je: equal / zero */

loc_003419E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FF00000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00341AEA; /* je: equal / zero */

loc_003419F4: ;
    SET_LO8(ecx, MEM8(esp + 0xF));
    SET_LO8(ecx, LO8(ecx) & 0x80);
    if ((LO8(ecx) != 0)) goto loc_00341B54; /* jne: not equal / not zero */

loc_00341A01: ;
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    PUSH32(esp, 0x00341A08u); RECOMP_ABI_CALL(0x00348D20u, sub_00348D20); /* call 0x00348D20 */

loc_00341A08: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00341A0F; /* jne: not equal / not zero */

loc_00341A0D: ;
    fp_top() = -fp_top(); /* fchs */

loc_00341A0F: ;
    _fa = (uint32_t)(MEM32(0x5D99E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5D99E4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00348DBE(); return; } /* jne: not equal / not zero */

loc_00341A1C: ;
    ecx = 0x47A0C8;
    edx = 0x1D;
    g_seh_ebp = ebp; sub_00348E09(); return; /* tail jmp 0x00348E09 */

loc_00341A2C: ;
    _fa = (uint32_t)(MEM32(0x5D99E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5D99E4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00348DBE(); return; } /* jne: not equal / not zero */

loc_00341A39: ;
    ecx = 0x47A0C8;
    edx = 0x1D;
    PUSH32(esp, 0x00341A49u); RECOMP_ABI_CALL(0x00348CCCu, sub_00348CCC); /* call 0x00348CCC */

loc_00341A49: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

loc_00341A4B: ;
    edx = esp + 8;
    PUSH32(esp, 0x00341A54u); RECOMP_ABI_CALL(0x00348D65u, sub_00348D65); /* call 0x00348D65 */

loc_00341A54: ;
    _fa = (uint32_t)(MEM8(esp + 0x16)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x16), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00341A5E; /* jne: not equal / not zero */

loc_00341A5B: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00341A91;

loc_00341A5E: ;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    eax = 1;
    goto loc_00341A2C;

loc_00341A67: ;
    _fa = (uint32_t)(MEM8(esp + 0xE)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xE), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00341A5E; /* jne: not equal / not zero */

loc_00341A6E: ;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    eax = 7;
    goto loc_00341A2C;

loc_00341A77: ;
    ecx = 0; /* xor self */
    goto loc_00341A91;

loc_00341A7B: ;
    ecx = 0; /* xor self */
    eax = eax & 0xFFFFF;
    eax = eax | MEM32(esp + 0x10);
    if ((eax != 0)) goto loc_00341A4B; /* jne: not equal / not zero */

loc_00341A88: ;
    edx = esp + 8;
    PUSH32(esp, 0x00341A91u); RECOMP_ABI_CALL(0x00348D65u, sub_00348D65); /* call 0x00348D65 */

loc_00341A91: ;
    eax = MEM32(esp + 0xC);
    edx = eax;
    eax = eax & 0x7FF00000;
    edx = edx & 0xFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FF00000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00341AAF; /* jne: not equal / not zero */

loc_00341AA9: ;
    edx = edx | MEM32(esp + 8);
    if ((edx != 0)) goto loc_00341A67; /* jne: not equal / not zero */

loc_00341AAF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00341A6E; /* jne: not equal / not zero */

loc_00341AB3: ;
    esp = esp - 0x74;
    ecx = esp;
    PUSH32(esp, ecx);
    esp = esp - 0x10;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    /* wait - FPU sync */
    /* FPU: fnsave dword ptr [ecx + 8] */
    PUSH32(esp, 0x00341ACCu); RECOMP_ABI_CALL(0x00348F11u, sub_00348F11); /* call 0x00348F11 */

loc_00341ACC: ;
    esp = esp + 0x10;
    POP32(esp, ecx);
    /* FPU: frstor dword ptr [ecx + 8] */
    fp_push(MEMD(ecx)); /* fld double */
    esp = esp + 0x74;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00348DBE(); return; } /* je: equal / zero */

loc_00341AE0: ;
    eax = 1;
    goto loc_00341A2C;

loc_00341AEA: ;
    eax = MEM32(esp + 0xC);
    eax = eax & 0xFFFFF;
    eax = eax | MEM32(esp + 8);
    if ((eax != 0)) goto loc_003419F4; /* jne: not equal / not zero */

loc_00341AFD: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(esp + 0x14);
    eax = eax & 0x7FFFFFFF;
    eax = eax | MEM32(esp + 0x10);
    if ((eax == 0)) goto loc_00341B4B; /* je: equal / zero */

loc_00341B0E: ;
    PUSH32(esp, 0x00341B13u); RECOMP_ABI_CALL(0x00341B79u, sub_00341B79); /* call 0x00341B79 */

loc_00341B13: ;
    SET_HI8(ecx, MEM8(esp + 0xF));
    SET_HI8(ecx, HI8(ecx) >> 7);
    _fa = (uint32_t)(MEM32(esp + 0x17)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x17), 0x80 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00341B3A; /* je: equal / zero */

loc_00341B24: ;
    fp_push(MEMF(0x47A808)); /* fld */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00341B30; /* je: equal / zero */

loc_00341B2E: ;
    fp_top() = -fp_top(); /* fchs */

loc_00341B30: ;
    eax = 2;
    goto loc_00341A2C;

loc_00341B3A: ;
    fp_push(0.0); /* fldz */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00348DBE(); return; } /* je: equal / zero */

loc_00341B44: ;
    fp_top() = -fp_top(); /* fchs */
    g_seh_ebp = ebp; sub_00348DBE(); return; /* tail jmp 0x00348DBE */

loc_00341B4B: ;
    fp_pop(); /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    g_seh_ebp = ebp; sub_00348DBE(); return; /* tail jmp 0x00348DBE */

loc_00341B54: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    PUSH32(esp, 0x00341B5Bu); RECOMP_ABI_CALL(0x00341B79u, sub_00341B79); /* call 0x00341B79 */

loc_00341B5B: ;
    fp_top() = -fp_top(); /* fchs */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00341A01; /* jne: not equal / not zero */

loc_00341B65: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x47A7DC)); /* fld */
    eax = 1;
    goto loc_00341A2C;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00341B79
 * Original: 0x00341B79 - 0x00341BA1 (40 bytes, 21 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00341B79(void)
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

loc_00341B79: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = rint(fp_top()); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    SET_LO8(ecx, 0);
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    /* sahf - store AH to flags */
    if ((g_fp_cmp != 0) /* sahf */) goto loc_00341B9E; /* jne: not equal / not zero */

loc_00341B87: ;
    fp_top() = fp_top() * MEMD(0x47A0C0); /* fmul qword ptr [0x47a0c0] */
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = rint(fp_top()); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    /* sahf - store AH to flags */
    if ((g_fp_cmp != 0) /* sahf */) goto loc_00341B9D; /* jne: not equal / not zero */

loc_00341B9B: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00341B9D: ;
    esp += 4; return; /* ret */

loc_00341B9E: ;
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00341BA1
 * Original: 0x00341BA1 - 0x00341C74 (211 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00341BA1(void)
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

loc_00341BA1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0xFFFF;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x47A0CC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00341BB9u); RECOMP_ABI_CALL(0x00347033u, sub_00347033); /* call 0x00347033 */

loc_00341BB9: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    POP32(esp, ecx);
    POP32(esp, ecx);
    ebx = eax;
    eax = MEM32(ebp + 0xE);
    PUSH32(esp, ecx);
    SET_LO16(eax, LO16(eax) & 0x7FF0);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7FF0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7FF0 (16-bit) */
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_00341C27; /* jne: not equal / not zero */

loc_00341BD2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00341BD7u); RECOMP_ABI_CALL(0x00346896u, sub_00346896); /* call 0x00346896 */

loc_00341BD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00341C0A; /* jle: less or equal (signed <=) */

loc_00341BDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00341BFC; /* jle: less or equal (signed <=) */

loc_00341BE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00341C0A; /* jne: not equal / not zero */

loc_00341BE7: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00341BF7u); RECOMP_ABI_CALL(0x00346F29u, sub_00346F29); /* call 0x00346F29 */

loc_00341BF7: ;
    esp = esp + 0x10;
    goto loc_00341C70;

loc_00341BFC: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00341C03u); RECOMP_ABI_CALL(0x00347033u, sub_00347033); /* call 0x00347033 */

loc_00341C03: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00341C70;

loc_00341C0A: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ebx);
    fp_top() = fp_top() + MEMD(0x3D45C8); /* fadd qword ptr [0x3d45c8] */
    esp = esp - 0x10;
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(ebp + 8)); /* fld double */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xC);
    PUSH32(esp, 8);
    goto loc_00341C68;

loc_00341C27: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00341C2Cu); RECOMP_ABI_CALL(0x003470ADu, sub_003470AD); /* call 0x003470AD */

loc_00341C2C: ;
    MEMD(ebp + -8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(ebp + 8)); /* fld double */
    POP32(esp, ecx);
    fp_push(MEMD(ebp + -8)); /* fld double */
    POP32(esp, ecx);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00341C4E; /* jp: parity */

loc_00341C40: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00341C47u); RECOMP_ABI_CALL(0x00347033u, sub_00347033); /* call 0x00347033 */

loc_00341C47: ;
    fp_push(MEMD(ebp + -8)); /* fld double */
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00341C70;

loc_00341C4E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00341C40; /* jne: not equal / not zero */

loc_00341C53: ;
    fp_push(MEMD(ebp + -8)); /* fld double */
    PUSH32(esp, ebx);
    esp = esp - 0x10;
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(ebp + 8)); /* fld double */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x10);

loc_00341C68: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00341C6Du); RECOMP_ABI_CALL(0x00346F7Cu, sub_00346F7C); /* call 0x00346F7C */

loc_00341C6D: ;
    esp = esp + 0x1C;

loc_00341C70: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00341C74
 * Original: 0x00341C74 - 0x00341C88 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341C74(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00341C74: ;
    esp = esp - 0xC;
    MEMD(esp) = fp_top(); /* fst */
    PUSH32(esp, 0x00341C7Fu); RECOMP_ABI_CALL(0x00348DA8u, sub_00348DA8); /* call 0x00348DA8 */

loc_00341C7F: ;
    PUSH32(esp, 0x00341C84u); RECOMP_ABI_CALL(0x00341C91u, sub_00341C91); /* call 0x00341C91 */

loc_00341C84: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00341C91
 * Original: 0x00341C91 - 0x00341D3F (174 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341C91(void)
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

loc_00341C91: ;
    PUSH32(esp, edx);
    /* wait - FPU sync */
    MEM16(esp) = g_fp_control_word; /* fnstcw word ptr [esp] */
    if (_flags /* je: equal / zero */) goto loc_00341D05;

loc_00341C98: ;
    _fa = (uint32_t)(MEM16(esp)) & 0xFFFFu; _fb = (uint32_t)(0x27F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp), 0x27F (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00341CA5; /* je: equal / zero */

loc_00341CA0: ;
    PUSH32(esp, 0x00341CA5u); RECOMP_ABI_CALL(0x00348D35u, sub_00348D35); /* call 0x00348D35 */

loc_00341CA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FF00000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00341CD9; /* jae: above or equal (unsigned >=) */

loc_00341CAC: ;
    fp_push(1.0); /* fld1 */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    fp_push(1.0); /* fld1 */
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */

loc_00341CBC: ;
    _fa = (uint32_t)(MEM32(0x5D99E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5D99E4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00348DBE(); return; } /* jne: not equal / not zero */

loc_00341CC9: ;
    edx = 0xD;
    ecx = 0x47A0D0;
    g_seh_ebp = ebp; sub_00348DCB(); return; /* tail jmp 0x00348DCB */

loc_00341CD9: ;
    if (CMP_A(_fa, _fb)) goto loc_00341D13; /* ja: above (unsigned >) */

loc_00341CDB: ;
    eax = MEM32(esp + 0xC);
    ecx = eax;
    eax = eax & 0xFFFFF;
    eax = eax | MEM32(esp + 8);
    if ((eax != 0)) goto loc_00341D13; /* jne: not equal / not zero */

loc_00341CEC: ;
    ecx = ecx & 0x80000000u;
    fp_pop(); /* fstp st(0) */
    if ((ecx == 0)) goto loc_00341CFA; /* je: equal / zero */

loc_00341CF6: ;
    fp_push(3.14159265358979323846); /* fldpi */
    goto loc_00341CBC;

loc_00341CFA: ;
    fp_push(0.0); /* fldz */
    goto loc_00341CBC;

loc_00341CFE: ;
    PUSH32(esp, 0x00341D03u); RECOMP_ABI_CALL(0x00348D4Cu, sub_00348D4C); /* call 0x00348D4C */

loc_00341D03: ;
    goto loc_00341D20;

loc_00341D05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00341CFE; /* jne: not equal / not zero */

loc_00341D0C: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00341CFE; /* jne: not equal / not zero */

loc_00341D13: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x47A7DC)); /* fld */
    eax = 1;

loc_00341D20: ;
    _fa = (uint32_t)(MEM32(0x5D99E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5D99E4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00348DBE(); return; } /* jne: not equal / not zero */

loc_00341D2D: ;
    edx = 0xD;
    ecx = 0x47A0D0;
    PUSH32(esp, 0x00341D3Du); RECOMP_ABI_CALL(0x00348CE3u, sub_00348CE3); /* call 0x00348CE3 */

loc_00341D3D: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00341D40
 * Original: 0x00341D40 - 0x00341D81 (65 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00341D40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00341D58; /* je: equal / zero */

loc_00341D44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00341D59; /* jae: above or equal (unsigned >=) */

loc_00341D4B: ;
    eax = (uint32_t)(-(int32_t)eax);
    eax = eax + esp;
    eax = eax + 4;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), eax (32-bit) */
    { uint32_t _tmp = esp;
    esp = eax;
    eax = _tmp; }
    eax = MEM32(eax);
    PUSH32(esp, eax);

loc_00341D58: ;
    esp += 4; return; /* ret */

loc_00341D59: ;
    PUSH32(esp, ecx);
    ecx = esp + 8;

loc_00341D5E: ;
    ecx = ecx - 0x1000;
    eax = eax - 0x1000;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx), eax (32-bit) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00341D5E; /* jae: above or equal (unsigned >=) */

loc_00341D72: ;
    ecx = ecx - eax;
    eax = esp;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx), eax (32-bit) */
    esp = ecx;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00341D90
 * Original: 0x00341D90 - 0x00341DBD (45 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00341D90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00341D90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    ecx = ecx | 0xFFFFFFFFu;
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (LO8(eax) == MEM8(edi));
        edi += _st; ecx--;
        if (_flags) break;
    } } /* repne scasb */
    ecx = ecx + 1;
    ecx = (uint32_t)(-(int32_t)ecx);
    edi = edi - 1;
    SET_LO8(eax, MEM8(ebp + 0xC));
    g_df = 1; /* std */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (LO8(eax) == MEM8(edi));
        edi += _st; ecx--;
        if (_flags) break;
    } } /* repne scasb */
    edi = edi + 1;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00341DB7; /* je: equal / zero */

loc_00341DB3: ;
    eax = 0; /* xor self */
    goto loc_00341DB9;

loc_00341DB7: ;
    eax = edi;

loc_00341DB9: ;
    g_df = 0; /* cld */
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00341DC0
 * Original: 0x00341DC0 - 0x00341EF5 (309 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00341DC0: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00341E84; /* je: equal / zero */

loc_00341DCD: ;
    edi = MEM32(esp + 8);
    PUSH32(esp, esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 3 (32-bit) */
    PUSH32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00341DEC; /* je: equal / zero */

loc_00341DDB: ;
    SET_LO8(eax, MEM8(edi));
    edi = edi + 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00341E1D; /* je: equal / zero */

loc_00341DE4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 3 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00341DDB; /* jne: not equal / not zero */

loc_00341DEC: ;
    eax = MEM32(edi);
    edx = 0x7EFEFEFF;
    edx = edx + eax;
    eax = eax ^ 0xFFFFFFFFu;
    eax = eax ^ edx;
    edi = edi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81010100u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x81010100u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00341DEC; /* je: equal / zero */

loc_00341E04: ;
    eax = MEM32(edi + -4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00341E2C; /* je: equal / zero */

loc_00341E0B: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), HI8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00341E27; /* je: equal / zero */

loc_00341E0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFF0000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00341E22; /* je: equal / zero */

loc_00341E16: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFF000000u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00341DEC; /* jne: not equal / not zero */

loc_00341E1D: ;
    edi = edi - 1;
    goto loc_00341E2F;

loc_00341E22: ;
    edi = edi - 2;
    goto loc_00341E2F;

loc_00341E27: ;
    edi = edi - 3;
    goto loc_00341E2F;

loc_00341E2C: ;
    edi = edi - 4;

loc_00341E2F: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 3 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00341E44; /* jne: not equal / not zero */

loc_00341E3B: ;
    ebx = ecx;
    ecx = ecx >> 2;
    if ((ecx != 0)) goto loc_00341E9E; /* jne: not equal / not zero */

loc_00341E42: ;
    goto loc_00341E66;

loc_00341E44: ;
    SET_LO8(edx, MEM8(esi));
    esi = esi + 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00341E8A; /* je: equal / zero */

loc_00341E4D: ;
    MEM8(edi) = LO8(edx);
    edi = edi + 1;
    ecx = ecx - 1;
    if ((ecx == 0)) goto loc_00341E80; /* je: equal / zero */

loc_00341E57: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 3 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00341E44; /* jne: not equal / not zero */

loc_00341E5F: ;
    ebx = ecx;
    ecx = ecx >> 2;
    if ((ecx != 0)) goto loc_00341E9E; /* jne: not equal / not zero */

loc_00341E66: ;
    ecx = ebx;
    ecx = ecx & 3;
    if ((ecx == 0)) goto loc_00341E80; /* je: equal / zero */

loc_00341E6D: ;
    SET_LO8(edx, MEM8(esi));
    esi = esi + 1;
    MEM8(edi) = LO8(edx);
    edi = edi + 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00341E82; /* je: equal / zero */

loc_00341E7B: ;
    ecx = ecx - 1;
    if ((ecx != 0)) goto loc_00341E6D; /* jne: not equal / not zero */

loc_00341E80: ;
    MEM8(edi) = LO8(ecx);

loc_00341E82: ;
    POP32(esp, ebx);
    POP32(esp, esi);

loc_00341E84: ;
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00341E8A: ;
    MEM8(edi) = LO8(edx);
    eax = MEM32(esp + 0x10);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00341E94: ;
    MEM32(edi) = edx;
    edi = edi + 4;
    ecx = ecx - 1;
    if ((ecx == 0)) goto loc_00341E66; /* je: equal / zero */

loc_00341E9E: ;
    edx = 0x7EFEFEFF;
    eax = MEM32(esi);
    edx = edx + eax;
    eax = eax ^ 0xFFFFFFFFu;
    eax = eax ^ edx;
    edx = MEM32(esi);
    esi = esi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81010100u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x81010100u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00341E94; /* je: equal / zero */

loc_00341EB8: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00341E8A; /* je: equal / zero */

loc_00341EBC: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(HI8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), HI8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00341EEA; /* je: equal / zero */

loc_00341EC0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFF0000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00341EDA; /* je: equal / zero */

loc_00341EC8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFF000000u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00341E94; /* jne: not equal / not zero */

loc_00341ED0: ;
    MEM32(edi) = edx;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00341EDA: ;
    MEM16(edi) = LO16(edx);
    edx = 0; /* xor self */
    eax = MEM32(esp + 0x10);
    MEM8(edi + 2) = LO8(edx);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00341EEA: ;
    MEM16(edi) = LO16(edx);
    eax = MEM32(esp + 0x10);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00341EF5
 * Original: 0x00341EF5 - 0x00341F23 (46 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341EF5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00341EF5: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00341F0F; /* jle: less or equal (signed <=) */

loc_00341EFE: ;
    PUSH32(esp, 0x103);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00341F0Cu); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_00341F0C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00341F0F: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x47A7C8);
    eax = ZX16(MEM16(ecx + eax * 2));
    eax = eax & 0x103;
    esp += 4; return; /* ret */

}

/**
 * sub_00341F23
 * Original: 0x00341F23 - 0x00341F4C (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341F23(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00341F23: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00341F3A; /* jle: less or equal (signed <=) */

loc_00341F2C: ;
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00341F37u); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_00341F37: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00341F3A: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x47A7C8);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00341F4C
 * Original: 0x00341F4C - 0x00341F75 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341F4C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00341F4C: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00341F63; /* jle: less or equal (signed <=) */

loc_00341F55: ;
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00341F60u); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_00341F60: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00341F63: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x47A7C8);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00341F75
 * Original: 0x00341F75 - 0x00341F9E (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341F75(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00341F75: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00341F8C; /* jle: less or equal (signed <=) */

loc_00341F7E: ;
    PUSH32(esp, 8);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00341F89u); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_00341F89: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00341F8C: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x47A7C8);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00341F9E
 * Original: 0x00341F9E - 0x00341FC7 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341F9E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00341F9E: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00341FB5; /* jle: less or equal (signed <=) */

loc_00341FA7: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00341FB2u); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_00341FB2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00341FB5: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x47A7C8);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00341FC7
 * Original: 0x00341FC7 - 0x00341FF5 (46 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341FC7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00341FC7: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00341FE1; /* jle: less or equal (signed <=) */

loc_00341FD0: ;
    PUSH32(esp, 0x107);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00341FDEu); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_00341FDE: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00341FE1: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x47A7C8);
    eax = ZX16(MEM16(ecx + eax * 2));
    eax = eax & 0x107;
    esp += 4; return; /* ret */

}

/**
 * sub_00341FF5
 * Original: 0x00341FF5 - 0x0034200B (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00341FF5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00341FF5: ;
    eax = MEM32(ecx);
    edx = MEM32(eax + -4);
    eax = ecx;
    eax = eax - MEM32(edx + 4);
    edx = MEM32(edx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034200A; /* je: equal / zero */

loc_00342006: ;
    ecx = ecx - edx;
    eax = eax + MEM32(ecx);

loc_0034200A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034200B
 * Original: 0x0034200B - 0x0034207E (115 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034200B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0034200B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(eax + 0x10);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + -8) = eax;
    if (CMP_BE(_fa & _fb, 0)) goto loc_00342077; /* jbe: below or equal (unsigned <=) */

loc_00342027: ;
    eax = MEM32(edi);
    ecx = MEM32(eax);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00342063; /* je: equal / zero */

loc_00342032: ;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;

loc_00342038: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034205A; /* jne: not equal / not zero */

loc_00342040: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00342056; /* je: equal / zero */

loc_00342044: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034205A; /* jne: not equal / not zero */

loc_0034204E: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00342038; /* jne: not equal / not zero */

loc_00342056: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    goto loc_0034205F;

loc_0034205A: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */

loc_0034205F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00342069; /* jne: not equal / not zero */

loc_00342063: ;
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x14), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00342079; /* je: equal / zero */

loc_00342069: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00342027; /* jb: below (unsigned <) */

loc_00342077: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_00342079: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0034207E
 * Original: 0x0034207E - 0x0034209D (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034207E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034207E: ;
    edx = MEM32(eax + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00342098; /* jl: less (signed <) */

loc_00342087: ;
    ecx = edx;
    edx = MEM32(esp + 4);
    edx = MEM32(ecx + edx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    ecx = ecx + MEM32(edx + esi);
    POP32(esp, esi);

loc_00342098: ;
    eax = MEM32(eax);
    eax = eax + ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0034209D
 * Original: 0x0034209D - 0x003421F1 (340 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034209D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0034209D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    eax = MEM32(eax + 0x10);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -12) = ebx;
    MEM32(ebp + -20) = eax;
    if (CMP_BE(_fa & _fb, 0)) goto loc_00342186; /* jbe: below or equal (unsigned <=) */

loc_003420C4: ;
    edi = MEM32(ebx);
    eax = MEM32(edi);
    esi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -16) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00342103; /* je: equal / zero */

loc_003420D2: ;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;

loc_003420D8: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003420FA; /* jne: not equal / not zero */

loc_003420E0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003420F6; /* je: equal / zero */

loc_003420E4: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003420FA; /* jne: not equal / not zero */

loc_003420EE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003420D8; /* jne: not equal / not zero */

loc_003420F6: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_003420FF;

loc_003420FA: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_003420FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0034216E; /* jne: not equal / not zero */

loc_00342103: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0034216E; /* jbe: below or equal (unsigned <=) */

loc_00342110: ;
    edi = MEM32(ebx);
    eax = MEM32(edi);
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034214C; /* je: equal / zero */

loc_0034211B: ;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;

loc_00342121: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00342143; /* jne: not equal / not zero */

loc_00342129: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0034213F; /* je: equal / zero */

loc_0034212D: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00342143; /* jne: not equal / not zero */

loc_00342137: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00342121; /* jne: not equal / not zero */

loc_0034213F: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_00342148;

loc_00342143: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_00342148: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0034215D; /* jne: not equal / not zero */

loc_0034214C: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = edi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342157u); RECOMP_ABI_CALL(0x0034207Eu, sub_0034207E); /* call 0x0034207E */

loc_00342157: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_003421C4; /* je: equal / zero */

loc_0034215D: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00342110; /* jb: below (unsigned <) */

loc_0034216E: ;
    ebx = MEM32(ebp + -12);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -20);
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -12) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_003420C4; /* jb: below (unsigned <) */

loc_00342186: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ebx = MEM32(ebp + -24);
    if (CMP_BE(_fa & _fb, 0)) goto loc_003421E6; /* jbe: below or equal (unsigned <=) */

loc_00342191: ;
    edi = MEM32(ebx);
    ecx = MEM32(edi);
    esi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003421D2; /* je: equal / zero */

loc_0034219C: ;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;

loc_003421A2: ;
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003421C9; /* jne: not equal / not zero */

loc_003421AA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003421C0; /* je: equal / zero */

loc_003421AE: ;
    SET_LO8(eax, MEM8(ecx + 1));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003421C9; /* jne: not equal / not zero */

loc_003421B8: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003421A2; /* jne: not equal / not zero */

loc_003421C0: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    goto loc_003421CE;

loc_003421C4: ;
    eax = MEM32(ebp + -16);
    goto loc_003421E8;

loc_003421C9: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */

loc_003421CE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003421D8; /* jne: not equal / not zero */

loc_003421D2: ;
    _fa = (uint32_t)(MEM8(edi + 0x14)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x14), 3 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003421ED; /* je: equal / zero */

loc_003421D8: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00342191; /* jb: below (unsigned <) */

loc_003421E6: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_003421E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_003421ED: ;
    eax = edi;
    goto loc_003421E8;

}

/**
 * sub_003421F1
 * Original: 0x003421F1 - 0x0034238D (412 bytes, 169 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003421F1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003421F1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 8);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    MEM32(ebp + -28) = edi;
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -20) = ecx;
    if (CMP_BE(_fa & _fb, 0)) goto loc_00342327; /* jbe: below or equal (unsigned <=) */

loc_0034221C: ;
    eax = MEM32(edi);
    eax = MEM32(eax);
    esi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034225C; /* je: equal / zero */

loc_00342227: ;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;

loc_0034222D: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034224F; /* jne: not equal / not zero */

loc_00342235: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0034224B; /* je: equal / zero */

loc_00342239: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034224F; /* jne: not equal / not zero */

loc_00342243: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0034222D; /* jne: not equal / not zero */

loc_0034224B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_00342254;

loc_0034224F: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_00342254: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0034230B; /* jne: not equal / not zero */

loc_0034225C: ;
    eax = MEM32(edi);
    eax = MEM32(eax + 4);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ebx = edi + 4;
    MEM32(ebp + -24) = eax;
    if (CMP_BE(_fa & _fb, 0)) goto loc_0034230B; /* jbe: below or equal (unsigned <=) */

loc_00342273: ;
    edi = MEM32(ebx);
    eax = MEM32(edi);
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003422AF; /* je: equal / zero */

loc_0034227E: ;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;

loc_00342284: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003422A6; /* jne: not equal / not zero */

loc_0034228C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003422A2; /* je: equal / zero */

loc_00342290: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003422A6; /* jne: not equal / not zero */

loc_0034229A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00342284; /* jne: not equal / not zero */

loc_003422A2: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_003422AB;

loc_003422A6: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_003422AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003422F6; /* jne: not equal / not zero */

loc_003422AF: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = edi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003422BAu); RECOMP_ABI_CALL(0x0034207Eu, sub_0034207E); /* call 0x0034207E */

loc_003422BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_003422F6; /* jne: not equal / not zero */

loc_003422C0: ;
    esi = MEM32(ebp + -16);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003422EE; /* je: equal / zero */

loc_003422C7: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax);
    PUSH32(esp, MEM32(ebp + 8));
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003422D7u); RECOMP_ABI_CALL(0x0034207Eu, sub_0034207E); /* call 0x0034207E */

loc_003422D7: ;
    PUSH32(esp, MEM32(ebp + 8));
    edi = eax;
    eax = esi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003422E4u); RECOMP_ABI_CALL(0x0034207Eu, sub_0034207E); /* call 0x0034207E */

loc_003422E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00342382; /* jne: not equal / not zero */

loc_003422EE: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax);
    MEM32(ebp + -16) = eax;

loc_003422F6: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -12);
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -24) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00342273; /* jb: below (unsigned <) */

loc_00342308: ;
    edi = MEM32(ebp + -8);

loc_0034230B: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + -20);
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -8) = edi;
    if (CMP_B(_fa, _fb)) goto loc_0034221C; /* jb: below (unsigned <) */

loc_00342320: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00342384; /* jne: not equal / not zero */

loc_00342327: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ebx = MEM32(ebp + -28);
    if (CMP_BE(_fa & _fb, 0)) goto loc_00342382; /* jbe: below or equal (unsigned <=) */

loc_00342332: ;
    edi = MEM32(ebx);
    ecx = MEM32(edi);
    esi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034236E; /* je: equal / zero */

loc_0034233D: ;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;

loc_00342343: ;
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00342365; /* jne: not equal / not zero */

loc_0034234B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00342361; /* je: equal / zero */

loc_0034234F: ;
    SET_LO8(eax, MEM8(ecx + 1));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00342365; /* jne: not equal / not zero */

loc_00342359: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00342343; /* jne: not equal / not zero */

loc_00342361: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    goto loc_0034236A;

loc_00342365: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */

loc_0034236A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00342374; /* jne: not equal / not zero */

loc_0034236E: ;
    _fa = (uint32_t)(MEM8(edi + 0x14)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x14), 3 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00342389; /* je: equal / zero */

loc_00342374: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00342332; /* jb: below (unsigned <) */

loc_00342382: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_00342384: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00342389: ;
    eax = edi;
    goto loc_00342384;

}

/**
 * sub_0034238D
 * Original: 0x0034238D - 0x0034246A (221 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034238D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034238D: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x4308C0);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342399u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00342399: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003423A8; /* jne: not equal / not zero */

loc_003423A0: ;
    eax = 0; /* xor self */

loc_003423A2: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003423A7u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003423A7: ;
    esp += 4; return; /* ret */

loc_003423A8: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003423B3u); RECOMP_ABI_CALL(0x00341FF5u, sub_00341FF5); /* call 0x00341FF5 */

loc_003423B3: ;
    edi = eax;
    MEM32(ebp + -36) = edi;
    eax = MEM32(esi);
    eax = MEM32(eax + -4);
    MEM32(ebp + -40) = eax;
    esi = esi - MEM32(ebp + 0xC);
    MEM32(ebp + 8) = esi;
    esi = esi - edi;
    MEM32(ebp + -44) = esi;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, MEM32(ebp + 0x14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003423E1; /* jne: not equal / not zero */

loc_003423D9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003423DEu); RECOMP_ABI_CALL(0x0034200Bu, sub_0034200B); /* call 0x0034200B */

loc_003423DE: ;
    POP32(esp, ecx);
    goto loc_003423FA;

loc_003423E1: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, edi);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003423F2; /* jne: not equal / not zero */

loc_003423EB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003423F0u); RECOMP_ABI_CALL(0x0034209Du, sub_0034209D); /* call 0x0034209D */

loc_003423F0: ;
    goto loc_003423F7;

loc_003423F2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003423F7u); RECOMP_ABI_CALL(0x003421F1u, sub_003421F1); /* call 0x003421F1 */

loc_003423F7: ;
    esp = esp + 0x10;

loc_003423FA: ;
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00342416; /* je: equal / zero */

loc_00342401: ;
    eax = eax + 8;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034240Au); RECOMP_ABI_CALL(0x0034207Eu, sub_0034207E); /* call 0x0034207E */

loc_0034240A: ;
    POP32(esp, ecx);
    eax = eax + edi;
    MEM32(ebp + -32) = eax;

loc_00342410: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    goto loc_003423A2;

loc_00342416: ;
    eax = 0; /* xor self */
    MEM32(ebp + -32) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342410; /* je: equal / zero */

loc_00342420: ;
    PUSH32(esp, 0x4308A8);
    ecx = ebp + -56;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034242Du); RECOMP_ABI_CALL(0x00344A1Bu, sub_00344A1B); /* call 0x00344A1B */

loc_0034242D: ;
    PUSH32(esp, 0x4498D0);
    eax = ebp + -56;
    goto loc_00342463;

    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000005u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000005u (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

    PUSH32(esp, 0x449898);
    eax = ebp + -68;

loc_00342463: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342469u); RECOMP_ABI_CALL(0x0034491Au, sub_0034491A); /* call 0x0034491A */

loc_00342469: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00342437
 * Original: 0x00342437 - 0x0034246A (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342437(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00342437: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000005u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000005u (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

    PUSH32(esp, 0x449898);
    eax = ebp + -68;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00342469u); RECOMP_ABI_CALL(0x0034491Au, sub_0034491A); /* call 0x0034491A */

loc_00342469: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034244B
 * Original: 0x0034244B - 0x0034246A (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034244B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034244B: ;
    esp = MEM32(ebp + -24);
    PUSH32(esp, 0x430884);
    ecx = ebp + -68;
    PUSH32(esp, 0x0034245Bu); RECOMP_ABI_CALL(0x00344A93u, sub_00344A93); /* call 0x00344A93 */

loc_0034245B: ;
    PUSH32(esp, 0x449898);
    eax = ebp + -68;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00342469u); RECOMP_ABI_CALL(0x0034491Au, sub_0034491A); /* call 0x0034491A */

loc_00342469: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034246A
 * Original: 0x0034246A - 0x003424A8 (62 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034246A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034246A: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342477; /* je: equal / zero */

loc_00342471: ;
    MEM8(ecx) = 0x2D;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = (uint32_t)(-(int32_t)eax);

loc_00342477: ;
    PUSH32(esp, esi);
    esi = ecx;

loc_0034247A: ;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 8));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 8)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 9 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0034248A; /* jbe: below or equal (unsigned <=) */

loc_00342485: ;
    SET_LO8(edx, LO8(edx) + 0x57);
    goto loc_0034248D;

loc_0034248A: ;
    SET_LO8(edx, LO8(edx) + 0x30);

loc_0034248D: ;
    MEM8(ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_A(_fa & _fb, 0)) goto loc_0034247A; /* ja: above (unsigned >) */

loc_00342494: ;
    MEM8(ecx) = 0;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00342498: ;
    SET_LO8(edx, MEM8(esi));
    SET_LO8(eax, MEM8(ecx));
    MEM8(ecx) = LO8(edx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(esi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00342498; /* jb: below (unsigned <) */

loc_003424A6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003424A8
 * Original: 0x003424A8 - 0x003424D2 (42 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003424A8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003424A8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0xA (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_003424BE; /* jne: not equal / not zero */

loc_003424B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003424BE; /* jge: greater or equal (signed >=) */

loc_003424B8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA);
    goto loc_003424C3;

loc_003424BE: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));

loc_003424C3: ;
    ecx = MEM32(ebp + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003424CBu); RECOMP_ABI_CALL(0x0034246Au, sub_0034246A); /* call 0x0034246A */

loc_003424CB: ;
    eax = MEM32(ebp + 0xC);
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003424D2
 * Original: 0x003424D2 - 0x0034267B (425 bytes, 163 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003424D2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003424D2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    SET_LO8(ebx, MEM8(esi));
    PUSH32(esp, edi);
    edi = esi + 1;

loc_003424E5: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = ZX8(LO8(ebx));
    if (CMP_LE(_fas, _fbs)) goto loc_003424FD; /* jle: less or equal (signed <=) */

loc_003424F1: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003424F9u); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_003424F9: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0034250A;

loc_003424FD: ;
    ecx = MEM32(0x47A7C8);
    eax = ZX8(MEM8(ecx + eax * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 8;

loc_0034250A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00342513; /* je: equal / zero */

loc_0034250E: ;
    SET_LO8(ebx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003424E5;

loc_00342513: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x2D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034251E; /* jne: not equal / not zero */

loc_00342518: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) | 2;
    goto loc_00342523;

loc_0034251E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x2B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x2B (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00342526; /* jne: not equal / not zero */

loc_00342523: ;
    SET_LO8(ebx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00342526: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_0034266B; /* jl: less (signed <) */

loc_00342531: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034266B; /* je: equal / zero */

loc_0034253A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0034266B; /* jg: greater (signed >) */

loc_00342543: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_0034256E; /* jne: not equal / not zero */

loc_0034254A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x30 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00342558; /* je: equal / zero */

loc_0034254F: ;
    MEM32(ebp + 0x10) = 0xA;
    goto loc_00342586;

loc_00342558: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x78) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x78 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034256B; /* je: equal / zero */

loc_0034255E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x58) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x58 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034256B; /* je: equal / zero */

loc_00342562: ;
    MEM32(ebp + 0x10) = 8;
    goto loc_00342586;

loc_0034256B: ;
    MEM32(ebp + 0x10) = ecx;

loc_0034256E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00342586; /* jne: not equal / not zero */

loc_00342573: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x30 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00342586; /* jne: not equal / not zero */

loc_00342578: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x78) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x78 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00342582; /* je: equal / zero */

loc_0034257E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x58) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x58 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00342586; /* jne: not equal / not zero */

loc_00342582: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ebx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00342586: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + 0x10));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + 0x10)); }

loc_0034258E: ;
    esi = MEM32(0x47A7C8);
    ecx = ZX8(LO8(ebx));
    SET_LO16(ecx, MEM16(esi + ecx * 2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003425A8; /* je: equal / zero */

loc_003425A0: ;
    ecx = SX8(LO8(ebx));
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x30));
    ecx = ecx - 0x30;
    goto loc_003425C7;

loc_003425A8: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(ecx), 0x103 (16-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003425F2; /* je: equal / zero */

loc_003425AF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x61 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003425C1; /* jl: less (signed <) */

loc_003425B4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x7A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x7A (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_003425C1; /* jg: greater (signed >) */

loc_003425B9: ;
    ecx = SX8(LO8(ebx));
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x20));
    ecx = ecx - 0x20;
    goto loc_003425C4;

loc_003425C1: ;
    ecx = SX8(LO8(ebx));

loc_003425C4: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFFFFFFC9u)) >> 32) & 1);
    ecx = ecx + 0xFFFFFFC9u;

loc_003425C7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_003425F2; /* jae: above or equal (unsigned >=) */

loc_003425CC: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) | 8;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003425E1; /* jb: below (unsigned <) */

loc_003425D5: ;
    if (CMP_NE(_fa, _fb)) goto loc_003425DB; /* jne: not equal / not zero */

loc_003425D7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003425E1; /* jbe: below or equal (unsigned <=) */

loc_003425DB: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) | 4;
    goto loc_003425ED;

loc_003425E1: ;
    esi = MEM32(ebp + -4);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + 0x10));
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ecx)) >> 32) & 1);
    esi = esi + ecx;
    MEM32(ebp + -4) = esi;

loc_003425ED: ;
    SET_LO8(ebx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034258E;

loc_003425F2: ;
    eax = MEM32(ebp + 0x14);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00342609; /* jne: not equal / not zero */

loc_003425FA: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00342603; /* je: equal / zero */

loc_00342600: ;
    edi = MEM32(ebp + 8);

loc_00342603: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    goto loc_00342654;

loc_00342609: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    esi = 0x7FFFFFFF;
    if (TEST_NZ(_fa, _fb)) goto loc_0034262D; /* jne: not equal / not zero */

loc_00342612: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00342654; /* jne: not equal / not zero */

loc_00342616: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    if ((eax == 0)) goto loc_00342624; /* je: equal / zero */

loc_0034261B: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x80000000u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0034262D; /* ja: above (unsigned >) */

loc_00342624: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00342654; /* jne: not equal / not zero */

loc_00342628: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00342654; /* jbe: below or equal (unsigned <=) */

loc_0034262D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342632u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_00342632: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(eax) = 0x22;
    if (TEST_Z(_fa, _fb)) goto loc_00342644; /* je: equal / zero */

loc_0034263E: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    goto loc_00342654;

loc_00342644: ;
    SET_LO8(eax, MEM8(ebp + 0x14));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 2);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    MEM32(ebp + -4) = eax;

loc_00342654: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0034265D; /* je: equal / zero */

loc_0034265B: ;
    MEM32(eax) = edi;

loc_0034265D: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00342666; /* je: equal / zero */

loc_00342663: ;
    _cf = (int)((MEM32(ebp + -4)) != 0);
    MEM32(ebp + -4) = (uint32_t)(-(int32_t)MEM32(ebp + -4));

loc_00342666: ;
    eax = MEM32(ebp + -4);
    goto loc_00342676;

loc_0034266B: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00342674; /* je: equal / zero */

loc_00342672: ;
    MEM32(eax) = esi;

loc_00342674: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_00342676: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0034267B
 * Original: 0x0034267B - 0x00342692 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034267B(void)
{

loc_0034267B: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x0034268Eu); RECOMP_ABI_CALL(0x003424D2u, sub_003424D2); /* call 0x003424D2 */

loc_0034268E: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00342692
 * Original: 0x00342692 - 0x003426A9 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342692(void)
{

loc_00342692: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x003426A5u); RECOMP_ABI_CALL(0x003424D2u, sub_003424D2); /* call 0x003424D2 */

loc_003426A5: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003426A9
 * Original: 0x003426A9 - 0x003426BF (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003426A9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003426A9: ;
    eax = MEM32(esp + 4);

loc_003426AD: ;
    SET_LO16(ecx, MEM16(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(ecx), LO16(ecx) (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003426AD; /* jne: not equal / not zero */

loc_003426B7: ;
    eax = eax - MEM32(esp + 4);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_003426C0
 * Original: 0x003426C0 - 0x003426C5 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003426C0(void)
{

loc_003426C0: ;
    eax = edx + -1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003426D0
 * Original: 0x003426D0 - 0x0034278E (190 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003426D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003426D0: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esp + 8));
    PUSH32(esp, ebx);
    ebx = eax;
    eax = eax << 8;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 3 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003426FD; /* je: equal / zero */

loc_003426E8: ;
    SET_LO8(ecx, MEM8(edx));
    edx = edx + 1;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_003426C0(); return; } /* je: equal / zero */

loc_003426F1: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00342746; /* je: equal / zero */

loc_003426F5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 3 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003426E8; /* jne: not equal / not zero */

loc_003426FD: ;
    ebx = ebx | eax;
    PUSH32(esp, edi);
    eax = ebx;
    ebx = ebx << 0x10;
    PUSH32(esp, esi);
    ebx = ebx | eax;

loc_00342708: ;
    ecx = MEM32(edx);
    edi = 0x7EFEFEFF;
    eax = ecx;
    esi = edi;
    ecx = ecx ^ ebx;
    esi = esi + eax;
    edi = edi + ecx;
    ecx = ecx ^ 0xFFFFFFFFu;
    eax = eax ^ 0xFFFFFFFFu;
    ecx = ecx ^ edi;
    eax = eax ^ esi;
    edx = edx + 4;
    ecx = ecx & 0x81010100u;
    if ((ecx != 0)) goto loc_0034274A; /* jne: not equal / not zero */

loc_0034272E: ;
    eax = eax & 0x81010100u;
    if ((eax == 0)) goto loc_00342708; /* je: equal / zero */

loc_00342735: ;
    eax = eax & 0x1010100;
    if ((eax != 0)) goto loc_00342744; /* jne: not equal / not zero */

loc_0034273C: ;
    esi = esi & 0x80000000u;
    if ((esi != 0)) goto loc_00342708; /* jne: not equal / not zero */

loc_00342744: ;
    POP32(esp, esi);
    POP32(esp, edi);

loc_00342746: ;
    POP32(esp, ebx);
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0034274A: ;
    eax = MEM32(edx + -4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342787; /* je: equal / zero */

loc_00342751: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00342744; /* je: equal / zero */

loc_00342755: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342780; /* je: equal / zero */

loc_00342759: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), HI8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00342744; /* je: equal / zero */

loc_0034275D: ;
    eax = eax >> 0x10;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342779; /* je: equal / zero */

loc_00342764: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00342744; /* je: equal / zero */

loc_00342768: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342772; /* je: equal / zero */

loc_0034276C: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), HI8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00342744; /* je: equal / zero */

loc_00342770: ;
    goto loc_00342708;

loc_00342772: ;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = edx + -1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00342779: ;
    eax = edx + -2;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00342780: ;
    eax = edx + -3;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00342787: ;
    eax = edx + -4;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003426D6
 * Original: 0x003426D6 - 0x0034278E (184 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003426D6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003426D6: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = eax << 8;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 3 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003426FD; /* je: equal / zero */

loc_003426E8: ;
    SET_LO8(ecx, MEM8(edx));
    edx = edx + 1;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_003426C0(); return; } /* je: equal / zero */

loc_003426F1: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00342746; /* je: equal / zero */

loc_003426F5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 3 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003426E8; /* jne: not equal / not zero */

loc_003426FD: ;
    ebx = ebx | eax;
    PUSH32(esp, edi);
    eax = ebx;
    ebx = ebx << 0x10;
    PUSH32(esp, esi);
    ebx = ebx | eax;

loc_00342708: ;
    ecx = MEM32(edx);
    edi = 0x7EFEFEFF;
    eax = ecx;
    esi = edi;
    ecx = ecx ^ ebx;
    esi = esi + eax;
    edi = edi + ecx;
    ecx = ecx ^ 0xFFFFFFFFu;
    eax = eax ^ 0xFFFFFFFFu;
    ecx = ecx ^ edi;
    eax = eax ^ esi;
    edx = edx + 4;
    ecx = ecx & 0x81010100u;
    if ((ecx != 0)) goto loc_0034274A; /* jne: not equal / not zero */

loc_0034272E: ;
    eax = eax & 0x81010100u;
    if ((eax == 0)) goto loc_00342708; /* je: equal / zero */

loc_00342735: ;
    eax = eax & 0x1010100;
    if ((eax != 0)) goto loc_00342744; /* jne: not equal / not zero */

loc_0034273C: ;
    esi = esi & 0x80000000u;
    if ((esi != 0)) goto loc_00342708; /* jne: not equal / not zero */

loc_00342744: ;
    POP32(esp, esi);
    POP32(esp, edi);

loc_00342746: ;
    POP32(esp, ebx);
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0034274A: ;
    eax = MEM32(edx + -4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342787; /* je: equal / zero */

loc_00342751: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00342744; /* je: equal / zero */

loc_00342755: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342780; /* je: equal / zero */

loc_00342759: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), HI8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00342744; /* je: equal / zero */

loc_0034275D: ;
    eax = eax >> 0x10;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342779; /* je: equal / zero */

loc_00342764: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00342744; /* je: equal / zero */

loc_00342768: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342772; /* je: equal / zero */

loc_0034276C: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), HI8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00342744; /* je: equal / zero */

loc_00342770: ;
    goto loc_00342708;

loc_00342772: ;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = edx + -1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00342779: ;
    eax = edx + -2;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00342780: ;
    eax = edx + -3;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00342787: ;
    eax = edx + -4;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034278E
 * Original: 0x0034278E - 0x003427E4 (86 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034278E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034278E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x20;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM32(ebp + -28) = eax;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -32;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0x42;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -32) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003427BBu); RECOMP_ABI_CALL(0x00347ED0u, sub_00347ED0); /* call 0x00347ED0 */

loc_003427BB: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003427DE; /* je: equal / zero */

loc_003427C4: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_003427D1; /* js: sign (negative) */

loc_003427C9: ;
    eax = MEM32(ebp + -32);
    MEM8(eax) = 0;
    goto loc_003427DE;

loc_003427D1: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003427DCu); RECOMP_ABI_CALL(0x00347D29u, sub_00347D29); /* call 0x00347D29 */

loc_003427DC: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_003427DE: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003427E4
 * Original: 0x003427E4 - 0x003427ED (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003427E4(void)
{

loc_003427E4: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x003427EBu); RECOMP_ABI_CALL(0x00345674u, sub_00345674); /* call 0x00345674 */

loc_003427EB: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003427ED
 * Original: 0x003427ED - 0x003427F6 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003427ED(void)
{

loc_003427ED: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x003427F4u); RECOMP_ABI_CALL(0x003455C2u, sub_003455C2); /* call 0x003455C2 */

loc_003427F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003427F6
 * Original: 0x003427F6 - 0x003428AA (180 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003427F6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003427F6: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x4308D0);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342802u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00342802: ;
    PUSH32(esp, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342809u); RECOMP_ABI_CALL(0x00345674u, sub_00345674); /* call 0x00345674 */

loc_00342809: ;
    POP32(esp, ecx);
    esi = 0; /* xor self */
    MEM32(ebp + -4) = esi;
    MEM32(0x5D99F8) = 1;
    SET_LO8(eax, MEM8(ebp + 0xC));
    MEM8(0x5D99F4) = LO8(eax);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034286E; /* jne: not equal / not zero */

loc_00342826: ;
    _fa = (uint32_t)(MEM32(0x6F12F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6F12F4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034284D; /* je: equal / zero */

loc_0034282E: ;
    eax = MEM32(0x6F12F0);
    eax = eax - 4;
    MEM32(0x6F12F0) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6F12F4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x6F12F4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0034284D; /* jb: below (unsigned <) */

loc_00342843: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034282E; /* je: equal / zero */

loc_00342849: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0034284Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034284B: ;
    goto loc_0034282E;

loc_0034284D: ;
    MEM32(ebp + -28) = 0x44B0C0;

loc_00342854: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x44B0C8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0x44B0C8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0034286E; /* jae: above or equal (unsigned >=) */

loc_0034285D: ;
    eax = MEM32(ebp + -28);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342868; /* je: equal / zero */

loc_00342866: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00342868u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00342868: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) + 4;
    goto loc_00342854;

loc_0034286E: ;
    MEM32(ebp + -32) = 0x44B0CC;

loc_00342875: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x44B0D4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0x44B0D4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0034288F; /* jae: above or equal (unsigned >=) */

loc_0034287E: ;
    eax = MEM32(ebp + -32);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00342889; /* je: equal / zero */

loc_00342887: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00342889u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00342889: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 4;
    goto loc_00342875;

loc_0034288F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342898u); RECOMP_ABI_CALL(0x003428ACu, sub_003428AC); /* call 0x003428AC */

loc_00342898: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003428A4; /* jne: not equal / not zero */

loc_0034289D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x3C6D74); PUSH32(esp, 0x003428A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003428A4: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003428A9u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003428A9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003428AA
 * Original: 0x003428AA - 0x003428AC (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003428AA(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003428AA: ;
    esi = 0; /* xor self */

    g_seh_ebp = ebp; sub_003428AC(); return; /* fallthrough 0x003428AC */

}

/**
 * sub_003428AC
 * Original: 0x003428AC - 0x003428BA (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003428AC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003428AC: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003428B9; /* je: equal / zero */

loc_003428B1: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x003428B8u); RECOMP_ABI_CALL(0x003455C2u, sub_003455C2); /* call 0x003455C2 */

loc_003428B8: ;
    POP32(esp, ecx);

loc_003428B9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003428BA
 * Original: 0x003428BA - 0x003428C6 (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003428BA(void)
{

loc_003428BA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003428C3u); RECOMP_ABI_CALL(0x003427F6u, sub_003427F6); /* call 0x003427F6 */

loc_003428C3: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003428C6
 * Original: 0x003428C6 - 0x003428D2 (12 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003428C6(void)
{

loc_003428C6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x003428CFu); RECOMP_ABI_CALL(0x003427F6u, sub_003427F6); /* call 0x003427F6 */

loc_003428CF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
