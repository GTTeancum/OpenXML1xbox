/**
 * X-Men Legends - Recompiled code chunk 39
 * Functions: 250 (0x001AD430 - 0x001B3830)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001AD430
 * Original: 0x001AD430 - 0x001AD435 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001AD430(void)
{

loc_001AD430: ;
    eax = 0; /* xor self */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AD440
 * Original: 0x001AD440 - 0x001AD4AE (110 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD440(void)
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

loc_001AD440: ;
    ecx = MEM32(esp + 4);
    eax = ecx;
    eax = eax >> 0x17;
    PUSH32(esp, esi);
    eax = eax & 0xFF;
    ecx = ecx & 0x7FFFFF;
    PUSH32(esp, edi);
    edi = ecx;
    if ((ecx != 0)) goto loc_001AD45E; /* jne: not equal / not zero */

loc_001AD45A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AD464; /* je: equal / zero */

loc_001AD45E: ;
    edi = edi | 0x800000;

loc_001AD464: ;
    eax = eax + 0xFFFFFF81u;
    if ((eax == 0)) goto loc_001AD472; /* je: equal / zero */

loc_001AD469: ;
    esi = 0x17;
    esi = esi - eax;
    goto loc_001AD475;

loc_001AD472: ;
    esi = eax + 0x17;

loc_001AD475: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, 0x001AD47Eu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001AD47E: ;
    edx = 1;
    ecx = esi;
    edx = edx << LO8(ecx);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & edi;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001AD49F; /* jbe: below or equal (unsigned <=) */

loc_001AD492: ;
    ecx = ecx - edi;
    edx = edx >> LO8(ecx);
    ecx = edi;
    eax = eax << LO8(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | edx;
    esp += 4; return; /* ret */

loc_001AD49F: ;
    ecx = edi;
    ecx = ecx - esi;
    edx = edx << LO8(ecx);
    ecx = edi;
    eax = eax << LO8(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | edx;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AD4B0
 * Original: 0x001AD4B0 - 0x001AD4F3 (67 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AD4B0: ;
    SET_LO8(ecx, MEM8(0x5BB4B0));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AD4ED; /* jne: not equal / not zero */

loc_001AD4BF: ;
    ecx = MEM32(0x5BB4B0);
    ecx = ecx | eax;
    eax = MEM32(0x5BC944);
    MEM32(0x5BB4B0) = ecx;
    ecx = MEM32(0x5BC938);
    MEM32(0x5BB4A4) = eax;
    MEM32(0x5BB4A8) = ecx;
    MEM32(0x5BB4AC) = 0;

loc_001AD4ED: ;
    eax = 0x5BB4A4;
    esp += 4; return; /* ret */

}

/**
 * sub_001AD500
 * Original: 0x001AD500 - 0x001AD543 (67 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AD500: ;
    SET_LO8(ecx, MEM8(0x5BB4C0));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AD53D; /* jne: not equal / not zero */

loc_001AD50F: ;
    ecx = MEM32(0x5BB4C0);
    ecx = ecx | eax;
    eax = MEM32(0x5BC410);
    MEM32(0x5BB4C0) = ecx;
    ecx = MEM32(0x5BC930);
    MEM32(0x5BB4B4) = eax;
    MEM32(0x5BB4B8) = ecx;
    MEM32(0x5BB4BC) = 0;

loc_001AD53D: ;
    eax = 0x5BB4B4;
    esp += 4; return; /* ret */

}

/**
 * sub_001AD550
 * Original: 0x001AD550 - 0x001AD587 (55 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AD550: ;
    SET_LO8(ecx, MEM8(0x5BB4CC));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AD581; /* jne: not equal / not zero */

loc_001AD55F: ;
    ecx = MEM32(0x5BB4CC);
    ecx = ecx | eax;
    eax = MEM32(0x5BC944);
    MEM32(0x5BB4CC) = ecx;
    MEM32(0x5BB4C4) = eax;
    MEM32(0x5BB4C8) = 0;

loc_001AD581: ;
    eax = 0x5BB4C4;
    esp += 4; return; /* ret */

}

/**
 * sub_001AD590
 * Original: 0x001AD590 - 0x001AD5C7 (55 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AD590: ;
    SET_LO8(ecx, MEM8(0x5BB4D8));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AD5C1; /* jne: not equal / not zero */

loc_001AD59F: ;
    ecx = MEM32(0x5BB4D8);
    ecx = ecx | eax;
    eax = MEM32(0x5BC94C);
    MEM32(0x5BB4D8) = ecx;
    MEM32(0x5BB4D0) = eax;
    MEM32(0x5BB4D4) = 0;

loc_001AD5C1: ;
    eax = 0x5BB4D0;
    esp += 4; return; /* ret */

}

/**
 * sub_001AD5D0
 * Original: 0x001AD5D0 - 0x001AD629 (89 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AD5D0: ;
    SET_LO8(ecx, MEM8(0x5BB4F0));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AD623; /* jne: not equal / not zero */

loc_001AD5DF: ;
    ecx = MEM32(0x5BB4F0);
    edx = MEM32(0x5BC944);
    ecx = ecx | eax;
    eax = MEM32(0x5BC3F4);
    MEM32(0x5BB4F0) = ecx;
    ecx = MEM32(0x5BC94C);
    MEM32(0x5BB4DC) = eax;
    eax = MEM32(0x5BC938);
    MEM32(0x5BB4E0) = ecx;
    MEM32(0x5BB4E4) = edx;
    MEM32(0x5BB4E8) = eax;
    MEM32(0x5BB4EC) = 0;

loc_001AD623: ;
    eax = 0x5BB4DC;
    esp += 4; return; /* ret */

}

/**
 * sub_001AD630
 * Original: 0x001AD630 - 0x001AD67F (79 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AD630: ;
    SET_LO8(ecx, MEM8(0x5BB504));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AD679; /* jne: not equal / not zero */

loc_001AD63F: ;
    ecx = MEM32(0x5BB504);
    edx = MEM32(0x5BC930);
    ecx = ecx | eax;
    eax = MEM32(0x5BC3F8);
    MEM32(0x5BB504) = ecx;
    ecx = MEM32(0x5BC940);
    MEM32(0x5BB4F4) = eax;
    MEM32(0x5BB4F8) = ecx;
    MEM32(0x5BB4FC) = edx;
    MEM32(0x5BB500) = 0;

loc_001AD679: ;
    eax = 0x5BB4F4;
    esp += 4; return; /* ret */

}

/**
 * sub_001AD680
 * Original: 0x001AD680 - 0x001AD6B7 (55 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AD680: ;
    SET_LO8(ecx, MEM8(0x5BB510));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AD6B1; /* jne: not equal / not zero */

loc_001AD68F: ;
    ecx = MEM32(0x5BB510);
    ecx = ecx | eax;
    eax = MEM32(0x5BC944);
    MEM32(0x5BB510) = ecx;
    MEM32(0x5BB508) = eax;
    MEM32(0x5BB50C) = 0;

loc_001AD6B1: ;
    eax = 0x5BB508;
    esp += 4; return; /* ret */

}

/**
 * sub_001AD6C0
 * Original: 0x001AD6C0 - 0x001AD6F7 (55 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AD6C0: ;
    SET_LO8(ecx, MEM8(0x5BB51C));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AD6F1; /* jne: not equal / not zero */

loc_001AD6CF: ;
    ecx = MEM32(0x5BB51C);
    ecx = ecx | eax;
    eax = MEM32(0x5BC944);
    MEM32(0x5BB51C) = ecx;
    MEM32(0x5BB514) = eax;
    MEM32(0x5BB518) = 0;

loc_001AD6F1: ;
    eax = 0x5BB514;
    esp += 4; return; /* ret */

}

/**
 * sub_001AD700
 * Original: 0x001AD700 - 0x001AD743 (67 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AD700: ;
    SET_LO8(ecx, MEM8(0x5BB52C));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AD73D; /* jne: not equal / not zero */

loc_001AD70F: ;
    ecx = MEM32(0x5BB52C);
    ecx = ecx | eax;
    eax = MEM32(0x5BC3F4);
    MEM32(0x5BB52C) = ecx;
    ecx = MEM32(0x5BC94C);
    MEM32(0x5BB520) = eax;
    MEM32(0x5BB524) = ecx;
    MEM32(0x5BB528) = 0;

loc_001AD73D: ;
    eax = 0x5BB520;
    esp += 4; return; /* ret */

}

/**
 * sub_001AD750
 * Original: 0x001AD750 - 0x001AD7A9 (89 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AD750: ;
    SET_LO8(ecx, MEM8(0x5BB544));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AD7A3; /* jne: not equal / not zero */

loc_001AD75F: ;
    ecx = MEM32(0x5BB544);
    edx = MEM32(0x5BC944);
    ecx = ecx | eax;
    eax = MEM32(0x5BC3F4);
    MEM32(0x5BB544) = ecx;
    ecx = MEM32(0x5BC94C);
    MEM32(0x5BB530) = eax;
    eax = MEM32(0x5BC938);
    MEM32(0x5BB534) = ecx;
    MEM32(0x5BB538) = edx;
    MEM32(0x5BB53C) = eax;
    MEM32(0x5BB540) = 0;

loc_001AD7A3: ;
    eax = 0x5BB530;
    esp += 4; return; /* ret */

}

/**
 * sub_001AD7B0
 * Original: 0x001AD7B0 - 0x001AD82B (123 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AD7B0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = esi;
    ecx = ebx;
    PUSH32(esp, edi);
    eax = eax >> 0x10;
    ecx = ecx >> 0x10;
    edi = ebx;
    SET_LO8(eax, LO8(eax) & 0xF);
    SET_LO8(ecx, LO8(ecx) & 0xF);
    edi = edi | esi;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001AD7D4; /* ja: above (unsigned >) */

loc_001AD7D2: ;
    SET_LO8(ecx, LO8(eax));

loc_001AD7D4: ;
    eax = esi;
    edx = ebx;
    eax = eax >> 4;
    edx = edx >> 4;
    SET_LO8(eax, LO8(eax) & 0xF);
    SET_LO8(edx, LO8(edx) & 0xF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001AD7E9; /* jbe: below or equal (unsigned <=) */

loc_001AD7E7: ;
    SET_LO8(eax, LO8(edx));

loc_001AD7E9: ;
    edx = esi;
    edx = edx >> 8;
    ebx = ebx >> 8;
    SET_LO8(edx, LO8(edx) & 0xF);
    SET_LO8(ebx, LO8(ebx) & 0xF);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(edx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001AD7FD; /* jbe: below or equal (unsigned <=) */

loc_001AD7FB: ;
    SET_LO8(edx, LO8(ebx));

loc_001AD7FD: ;
    ecx = ZX8(LO8(ecx));
    ecx = ecx << 0xC;
    eax = ZX8(LO8(eax));
    ecx = ecx | eax;
    eax = 0; /* xor self */
    SET_HI8(eax, LO8(edx));
    ecx = ecx << 4;
    edi = edi & 0xFFF0FF0Fu;
    ecx = ecx | edi;
    ecx = ecx & 0xFFFFF0FFu;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ecx | eax;
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AD830
 * Original: 0x001AD830 - 0x001AD8AB (123 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AD830: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = esi;
    ecx = ebx;
    PUSH32(esp, edi);
    eax = eax >> 0x10;
    ecx = ecx >> 0x10;
    edi = ebx;
    SET_LO8(eax, LO8(eax) & 0xF);
    SET_LO8(ecx, LO8(ecx) & 0xF);
    edi = edi & esi;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001AD854; /* jb: below (unsigned <) */

loc_001AD852: ;
    SET_LO8(ecx, LO8(eax));

loc_001AD854: ;
    eax = esi;
    edx = ebx;
    eax = eax >> 4;
    edx = edx >> 4;
    SET_LO8(eax, LO8(eax) & 0xF);
    SET_LO8(edx, LO8(edx) & 0xF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001AD869; /* jae: above or equal (unsigned >=) */

loc_001AD867: ;
    SET_LO8(eax, LO8(edx));

loc_001AD869: ;
    edx = esi;
    edx = edx >> 8;
    ebx = ebx >> 8;
    SET_LO8(edx, LO8(edx) & 0xF);
    SET_LO8(ebx, LO8(ebx) & 0xF);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(edx) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001AD87D; /* jae: above or equal (unsigned >=) */

loc_001AD87B: ;
    SET_LO8(edx, LO8(ebx));

loc_001AD87D: ;
    ecx = ZX8(LO8(ecx));
    ecx = ecx << 0xC;
    eax = ZX8(LO8(eax));
    ecx = ecx | eax;
    eax = 0; /* xor self */
    SET_HI8(eax, LO8(edx));
    ecx = ecx << 4;
    edi = edi & 0xFFF0FF0Fu;
    ecx = ecx | edi;
    ecx = ecx & 0xFFFFF0FFu;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ecx | eax;
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AD8B0
 * Original: 0x001AD8B0 - 0x001AD8B4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD8B0(void)
{

loc_001AD8B0: ;
    eax = MEM32(ecx + 0x48);
    esp += 4; return; /* ret */

}

/**
 * sub_001AD8C0
 * Original: 0x001AD8C0 - 0x001ADA13 (339 bytes, 78 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD8C0(void)
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

loc_001AD8C0: ;
    fp_push(MEMF(0x5BB5C0)); /* fld float */
    eax = MEM32(0x5BB5BC);
    fp_top() = fp_top() + MEMF(esp + 4); /* fadd dword ptr [esp + 4] */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x5BB5BC) = eax;
    PUSH32(esp, esi);
    MEMF(0x5BB5C0) = (float)fp_top(); fp_pop(); /* fstp */
    esi = ecx;
    fp_push(MEMF(0x5BB5B8)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    MEMF(0x5BB5B8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4687C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4687c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001AD908; /* jp: parity */

loc_001AD8FF: ;
    eax = MEM32(esp + 8);
    MEM32(0x4687C0) = eax;

loc_001AD908: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x5BB5B4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x5bb5b4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AD923; /* jne: not equal / not zero */

loc_001AD919: ;
    ecx = MEM32(esp + 8);
    MEM32(0x5BB5B4) = ecx;

loc_001AD923: ;
    fp_push(MEMF(0x5BB5C0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CA844)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3ca844] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AD9D4; /* jne: not equal / not zero */

loc_001AD93A: ;
    fp_push((double)SMEM32(0x5BB5BC)); /* fild */
    esp = esp - 0x18;
    fp_push(MEMF(0x5BB5C0)); /* fld float */
    fp_top() = fp_st1() / fp_top(); /* fdivr st(1) */
    MEMF(0x5BB5B0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x5BB5B8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CEA68); /* fmul dword ptr [0x3cea68] */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    MEMF(0x5BB5AC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x5BB5B0)); /* fld float */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(0x4687C0); /* fdiv dword ptr [0x4687c0] */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(0x5BB5B4); /* fdiv dword ptr [0x5bb5b4] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3E76E0);
    PUSH32(esp, 0x5BB548);
    PUSH32(esp, 0x001AD99Fu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_001AD99F: ;
    esp = esp + 0x20;
    MEM32(0x5BB5C0) = 0;
    MEM32(0x5BB5B8) = 0;
    MEM32(0x5BB5BC) = 0;
    MEM32(0x4687C0) = 0x49742400;
    MEM32(0x5BB5B4) = 0;

loc_001AD9D4: ;
    SET_LO8(eax, MEM8(esi + 0x3D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AD9FF; /* je: equal / zero */

loc_001AD9DB: ;
    eax = MEM32(0x5BB5BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001ADA0F; /* jne: not equal / not zero */

loc_001AD9E4: ;
    PUSH32(esp, 0x5BB548);
    PUSH32(esp, 0x3E76C8);
    PUSH32(esp, 0x001AD9F3u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_001AD9F3: ;
    esp = esp + 8;
    PUSH32(esp, 0x001AD9FBu); RECOMP_ABI_CALL(0x001EB1B0u, sub_001EB1B0); /* call 0x001EB1B0 */

loc_001AD9FB: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001AD9FF: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5BB548);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001ADA0Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ADA0F: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001ADA20
 * Original: 0x001ADA20 - 0x001ADA6B (75 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ADA20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0xF8); PUSH32(esp, 0x001ADA2Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ADA2C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ADA3E; /* je: equal / zero */

loc_001ADA32: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x001ADA3Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ADA3E: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x11C); PUSH32(esp, 0x001ADA57u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ADA57: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ADA66; /* je: equal / zero */

loc_001ADA5B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x001ADA66u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ADA66: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001ADA70
 * Original: 0x001ADA70 - 0x001ADA8F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADA70(void)
{

loc_001ADA70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esi + 0x6C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001ADA81u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_001ADA81: ;
    esp = esp + 8;
    MEM8(esi + 0xEC) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ADA90
 * Original: 0x001ADA90 - 0x001ADAA4 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADA90(void)
{

loc_001ADA90: ;
    eax = MEM32(esp + 4);
    ecx = ecx + 0x6C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ADA9Eu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_001ADA9E: ;
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ADAB0
 * Original: 0x001ADAB0 - 0x001ADAF2 (66 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADAB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ADAB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xEC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ADAD9; /* je: equal / zero */

loc_001ADABE: ;
    eax = esi + 0x6C;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi + 0xAC;
    PUSH32(esp, 0x001ADAD2u); RECOMP_ABI_CALL(0x00242F50u, sub_00242F50); /* call 0x00242F50 */

loc_001ADAD2: ;
    MEM8(esi + 0xEC) = 0;

loc_001ADAD9: ;
    edx = MEM32(esp + 0xC);
    esi = esi + 0xAC;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001ADAEAu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_001ADAEA: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ADB00
 * Original: 0x001ADB00 - 0x001ADB1B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ADB00: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ADB0E; /* jl: less (signed <) */

loc_001ADB09: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

loc_001ADB0E: ;
    eax = eax + eax * 2;
    eax = MEM32(eax * 4 + 0x4678A0);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ADB20
 * Original: 0x001ADB20 - 0x001ADB70 (80 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ADB20: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = eax * 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001ADB53; /* je: equal / zero */

loc_001ADB3D: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001ADB49u); RECOMP_ABI_CALL(0x001F7F60u, sub_001F7F60); /* call 0x001F7F60 */

loc_001ADB49: ;
    MEM32(esi + 8) = eax;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001ADB53: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ADB62; /* je: equal / zero */

loc_001ADB5A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001ADB62u); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_001ADB62: ;
    eax = edi;
    POP32(esp, edi);
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001ADB70
 * Original: 0x001ADB70 - 0x001ADB90 (32 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADB70(void)
{

loc_001ADB70: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(eax + edx * 4) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ADB90
 * Original: 0x001ADB90 - 0x001ADB9D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADB90(void)
{

loc_001ADB90: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ADBA0
 * Original: 0x001ADBA0 - 0x001ADBAD (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADBA0(void)
{

loc_001ADBA0: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 8);
    eax = eax + ecx * 4;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001ADBB0
 * Original: 0x001ADBB0 - 0x001ADC00 (80 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001ADBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ADBB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ADBFB; /* je: equal / zero */

loc_001ADBB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ADBC3; /* jne: not equal / not zero */

loc_001ADBBD: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;

loc_001ADBC3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ADBCE; /* jne: not equal / not zero */

loc_001ADBC8: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0xC) = edx;

loc_001ADBCE: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001ADBDC; /* je: equal / zero */

loc_001ADBD6: ;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;

loc_001ADBDC: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ADBE9; /* je: equal / zero */

loc_001ADBE3: ;
    esi = MEM32(eax + 8);
    MEM32(edx + 8) = esi;

loc_001ADBE9: ;
    edx = 0xABADCAFEu;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001ADBFB: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ADC00
 * Original: 0x001ADC00 - 0x001ADC6E (110 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ADC00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ADC11; /* je: equal / zero */

loc_001ADC0B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001ADC11u); RECOMP_ABI_CALL(0x001ADBB0u, sub_001ADBB0); /* call 0x001ADBB0 */

loc_001ADC11: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ecx = edi;
    if (TEST_Z(_fa, _fb)) goto loc_001ADC6B; /* je: equal / zero */

loc_001ADC17: ;
    edi = 0xABADCAFEu;
    /* nop */

loc_001ADC20: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ADC2A; /* je: equal / zero */

loc_001ADC24: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001ADC2Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ADC2A: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ADC65; /* je: equal / zero */

loc_001ADC31: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 8) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ADC42; /* jne: not equal / not zero */

loc_001ADC3C: ;
    edx = MEM32(eax + 8);
    MEM32(esi + 0xC) = edx;

loc_001ADC42: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ADC4F; /* je: equal / zero */

loc_001ADC49: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;

loc_001ADC4F: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ADC5C; /* je: equal / zero */

loc_001ADC56: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;

loc_001ADC5C: ;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001ADC65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_001ADC20; /* jne: not equal / not zero */

loc_001ADC6B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001ADC70
 * Original: 0x001ADC70 - 0x001ADC8F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ADC70: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3E7704;
    if (TEST_Z(_fa, _fb)) goto loc_001ADC89; /* je: equal / zero */

loc_001ADC80: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ADC86u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_001ADC86: ;
    esp = esp + 4;

loc_001ADC89: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ADC90
 * Original: 0x001ADC90 - 0x001ADCD1 (65 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADC90(void)
{

loc_001ADC90: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    MEM32(esp + 4) = ecx;
    eax = MEM32(esp + 4);
    ebx = MEM32(esp + 0x10);
    mm2 = MMX_PXOR(mm2, mm2); /* pxor */
    mm0 = MMX_FROM32(MEM32(eax)); /* movd */
    mm1 = MMX_FROM32(MEM32(ebx)); /* movd */
    mm0 = MMX_PUNPCKLBW(mm0, mm2); /* punpcklbw */
    mm1 = MMX_PUNPCKLBW(mm1, mm2); /* punpcklbw */
    mm0 = MMX_PSUBSW(mm0, mm1); /* psubsw */
    mm0 = MMX_PMADDWD(mm0, mm0); /* pmaddwd */
    mm2 = mm0; /* movq */
    mm2 = MMX_PSRLQ(mm2, 32u); /* psrlq */
    mm0 = MMX_PADDD(mm0, mm2); /* paddd */
    MEM32(esp + 8) = mm0.ud[0]; /* movd */
    (void)0; /* emms - empty MMX state */
    eax = MEM32(esp + 8);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ADCE0
 * Original: 0x001ADCE0 - 0x001ADDC8 (232 bytes, 79 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADCE0(void)
{

loc_001ADCE0: ;
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi);
    MEM32(eax) = edx;
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = MEM32(edi);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(ecx + 0x14);
    SET_LO8(edx, MEM8(esi));
    MEM8(eax + 4) = LO8(edx);
    eax = ZX8(MEM8(esi + 1));
    edx = ZX8(MEM8(edi + 1));
    edx = edx + eax * 2;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = MEM32(ecx + 0x14);
    MEM8(edx + 5) = LO8(eax);
    eax = ZX8(MEM8(esi + 2));
    edx = ZX8(MEM8(edi + 2));
    edx = edx + eax * 2;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = MEM32(ecx + 0x14);
    MEM8(edx + 6) = LO8(eax);
    eax = ZX8(MEM8(esi + 3));
    edx = ZX8(MEM8(edi + 3));
    edx = edx + eax * 2;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = MEM32(ecx + 0x14);
    MEM8(edx + 7) = LO8(eax);
    eax = MEM32(ecx + 0x14);
    SET_LO8(edx, MEM8(esi));
    MEM8(eax + 8) = LO8(edx);
    eax = ZX8(MEM8(edi + 1));
    edx = ZX8(MEM8(esi + 1));
    edx = edx + eax * 2;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = MEM32(ecx + 0x14);
    MEM8(edx + 9) = LO8(eax);
    eax = ZX8(MEM8(edi + 2));
    edx = ZX8(MEM8(esi + 2));
    edx = edx + eax * 2;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = MEM32(ecx + 0x14);
    MEM8(edx + 0xA) = LO8(eax);
    eax = ZX8(MEM8(edi + 3));
    edx = ZX8(MEM8(esi + 3));
    ecx = MEM32(ecx + 0x14);
    edx = edx + eax * 2;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    POP32(esp, edi);
    MEM8(ecx + 0xB) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ADDD0
 * Original: 0x001ADDD0 - 0x001ADE39 (105 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADDD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ADDD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ADDE4; /* je: equal / zero */

loc_001ADDDB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ADDE1u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_001ADDE1: ;
    esp = esp + 4;

loc_001ADDE4: ;
    esi = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    MEM32(edi + 4) = esi;
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi + 0xC) = 0;
    MEM32(edi + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001ADE34; /* je: equal / zero */

loc_001ADE00: ;
    eax = esi * 4;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ADE0Eu); RECOMP_ABI_CALL(0x00343299u, sub_00343299); /* call 0x00343299 */

loc_001ADE0E: ;
    ebx = eax;
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ADE2E; /* je: equal / zero */

loc_001ADE17: ;
    PUSH32(esp, 0x2E6B0);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001ADE25u); RECOMP_ABI_CALL(0x00011100u, sub_00011100); /* call 0x00011100 */

loc_001ADE25: ;
    MEM32(edi + 0xC) = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001ADE2E: ;
    ebx = 0; /* xor self */
    MEM32(edi + 0xC) = ebx;
    POP32(esp, ebx);

loc_001ADE34: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ADE40
 * Original: 0x001ADE40 - 0x001AE512 (1746 bytes, 552 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADE40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADE40: ;
    esp = esp - 0x40;
    edx = MEM32(esp + 0x48);
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x4C);
    PUSH32(esp, esi);
    ecx = 0xC;
    ecx = ecx - edx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x5C);
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = 0xC;
    ecx = ecx - edi;
    edi = MEM32(esp + 0x60);
    eax = 1;
    eax = eax << LO8(ecx);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = 0xC;
    ecx = ecx - edi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = 0xC;
    ecx = ecx - ebp;
    MEM32(esp + 0x10) = esi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    eax = 1;
    eax = eax << LO8(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ebx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebx + 8));
    eax = eax << 3;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ADEB5u); RECOMP_ABI_CALL(0x00343299u, sub_00343299); /* call 0x00343299 */

loc_001ADEB5: ;
    edx = MEM32(ebx + 8);
    ecx = eax;
    eax = MEM32(ebx + 0xC);
    esp = esp + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x54) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001ADF79; /* jle: less or equal (signed <=) */

loc_001ADEDC: ;
    edx = MEM32(ebx + 4);
    /* nop */

loc_001ADEE0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 0x58) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001ADF50; /* jle: less or equal (signed <=) */

loc_001ADEEC: ;
    ecx = ecx + 4;
    eax = eax + 3;
    goto loc_001ADF00;

    /* nop */
    goto loc_001ADF00;

    /* nop */

loc_001ADF00: ;
    SET_LO16(esi, ZX8(MEM8(eax + -1)));
    SET_LO16(edx, ZX8(MEM8(eax + -2)));
    SET_LO16(edi, ZX8(MEM8(eax + -3)));
    SET_LO16(ebp, ZX8(MEM8(eax)));
    esi = esi << 4;
    MEM16(ecx + -4) = LO16(esi);
    esi = MEM32(esp + 0x58);
    edx = edx << 4;
    edi = edi << 4;
    MEM16(ecx + -2) = LO16(edx);
    ebp = ebp << 4;
    MEM16(ecx) = LO16(edi);
    MEM16(ecx + 2) = LO16(ebp);
    edx = MEM32(ebx + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 4;
    ecx = ecx + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(esp + 0x58) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_001ADF00; /* jl: less (signed <) */

loc_001ADF44: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);

loc_001ADF50: ;
    edi = MEM32(ebx + 4);
    ebp = MEM32(ebx + 8);
    eax = eax + edi * 4;
    ecx = ecx + edi * 8;
    edi = MEM32(esp + 0x54);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x54) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_001ADEE0; /* jl: less (signed <) */

loc_001ADF75: ;
    ecx = MEM32(esp + 0x34);

loc_001ADF79: ;
    edi = ecx;
    ecx = MEM32(ebx + 8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x54) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001AE2E4; /* jle: less or equal (signed <=) */

loc_001ADF8F: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    ebp = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(esp + 0x14);
    eax = ~eax;
    MEM32(esp + 0x5C) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM32(esp + 0x60) = eax;
    eax = MEM32(esp + 0x18);
    eax = ~eax;
    MEM32(esp + 0x24) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x1C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x1C);
    esi = ~esi;
    eax = ~eax;
    MEM32(esp + 0x44) = ebp;
    MEM32(esp + 0x48) = esi;
    MEM32(esp + 0x28) = eax;
    /* nop */

loc_001ADFF0: ;
    edx = MEM32(ebx + 4);
    esi = 0; /* xor self */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001AE25D; /* jle: less or equal (signed <=) */

loc_001ADFFE: ;
    ecx = edi + 4;

loc_001AE001: ;
    SET_LO16(edx, MEM16(ecx + -2));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ecx + -4));
    MEM16(esp + 0x58) = LO16(edx);
    SET_LO16(edx, MEM16(ecx));
    MEM16(esp + 0x2C) = LO16(edx);
    SET_LO16(edx, MEM16(ecx + 2));
    MEM16(esp + 0x30) = LO16(edx);
    edx = MEM32(esp + 0x48);
    ebp = ebp + eax;
    ebp = ebp & edx;
    edx = eax;
    edx = edx - ebp;
    ebp = MEM32(esp + 0x58);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(esp + 0x4C);
    ebp = ebp + edx;
    ebp = ebp & MEM32(esp + 0x5C);
    edx = MEM32(esp + 0x58);
    edx = edx - ebp;
    ebp = MEM32(esp + 0x2C);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(esp + 0x60);
    ebp = ebp + edx;
    ebp = ebp & MEM32(esp + 0x24);
    edx = MEM32(esp + 0x2C);
    edx = edx - ebp;
    ebp = MEM32(esp + 0x30);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esp + 0x20);
    edx = edx + ebp;
    edx = edx & MEM32(esp + 0x28);
    ebp = MEM32(esp + 0x30);
    ebp = ebp - edx;
    eax = eax - MEM32(esp + 0x38);
    edx = MEM32(esp + 0x3C);
    MEM16(ecx + -4) = LO16(eax);
    eax = MEM32(esp + 0x58);
    eax = eax - edx;
    edx = MEM32(esp + 0x40);
    MEM16(ecx + -2) = LO16(eax);
    eax = MEM32(esp + 0x2C);
    eax = eax - edx;
    MEM16(ecx) = LO16(eax);
    eax = MEM32(esp + 0x30);
    eax = eax - ebp;
    MEM16(ecx + 2) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x38);
    MEM32(esp + 0x58) = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM16(ecx + 4) = MEM16(ecx + 4) + LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x3C);
    MEM32(esp + 0x3C) = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM16(ecx + 6) = MEM16(ecx + 6) + LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x40);
    MEM32(esp + 0x40) = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM16(ecx + 8) = MEM16(ecx + 8) + LO16(eax);
    ebp = LO16(ebp);
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM16(ecx + 0xA) = MEM16(ecx + 0xA) + LO16(eax);
    eax = MEM32(ebx + 4);
    eax = eax + esi;
    edx = edi + eax * 8;
    eax = MEM32(esp + 0x58);
    MEM32(esp + 0x38) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    edx = edx + eax;
    eax = MEM32(esp + 0x38);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    MEM16(eax) = MEM16(eax) + LO16(edx);
    eax = MEM32(ebx + 4);
    eax = eax + esi;
    edx = edi + eax * 8 + 2;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x38) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    edx = edx + eax;
    eax = MEM32(esp + 0x38);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    MEM16(eax) = MEM16(eax) + LO16(edx);
    eax = MEM32(ebx + 4);
    eax = eax + esi;
    edx = edi + eax * 8 + 4;
    eax = MEM32(esp + 0x40);
    MEM32(esp + 0x38) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    edx = edx + eax;
    eax = MEM32(esp + 0x38);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    MEM16(eax) = MEM16(eax) + LO16(edx);
    eax = MEM32(ebx + 4);
    eax = eax + esi;
    edx = edi + eax * 8 + 6;
    MEM32(esp + 0x38) = edx;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    edx = edx + eax;
    eax = MEM32(esp + 0x38);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    MEM16(eax) = MEM16(eax) + LO16(edx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AE249; /* je: equal / zero */

loc_001AE16F: ;
    eax = MEM32(ebx + 4);
    eax = eax + esi;
    edx = edi + eax * 8 + -8;
    eax = MEM32(esp + 0x58);
    MEM32(esp + 0x38) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    edx = MEM32(esp + 0x38);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    MEM16(edx) = MEM16(edx) + LO16(eax);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(ebx + 4);
    eax = eax + esi;
    edx = edi + eax * 8 + -6;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x58) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    edx = MEM32(esp + 0x58);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    MEM16(edx) = MEM16(edx) + LO16(eax);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(ebx + 4);
    eax = eax + esi;
    edx = edi + eax * 8 + -4;
    eax = MEM32(esp + 0x40);
    MEM32(esp + 0x58) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    edx = MEM32(esp + 0x58);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    MEM16(edx) = MEM16(edx) + LO16(eax);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(ebx + 4);
    eax = eax + esi;
    edx = edi + eax * 8 + -2;
    MEM32(esp + 0x58) = edx;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    edx = MEM32(esp + 0x58);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    MEM16(edx) = MEM16(edx) + LO16(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001AE249; /* jle: less or equal (signed <=) */

loc_001AE202: ;
    edx = MEM32(ebx + 4);
    SET_LO16(ebp, MEM16(esp + 0x30));
    edx = edx + esi;
    MEM16(edi + edx * 8 + -24) = MEM16(edi + edx * 8 + -24) + LO16(ebp);
    SET_LO16(ebp, MEM16(esp + 0x3C));
    edx = edi + edx * 8 + -24;
    edx = MEM32(ebx + 4);
    edx = edx + esi;
    MEM16(edi + edx * 8 + -22) = MEM16(edi + edx * 8 + -22) + LO16(ebp);
    SET_LO16(ebp, MEM16(esp + 0x40));
    edx = edi + edx * 8 + -22;
    edx = MEM32(ebx + 4);
    edx = edx + esi;
    MEM16(edi + edx * 8 + -20) = MEM16(edi + edx * 8 + -20) + LO16(ebp);
    edx = edi + edx * 8 + -20;
    edx = MEM32(ebx + 4);
    edx = edx + esi;
    MEM16(edi + edx * 8 + -18) = MEM16(edi + edx * 8 + -18) + LO16(eax);
    edx = edi + edx * 8 + -18;

loc_001AE249: ;
    eax = MEM32(ebx + 4);
    ebp = MEM32(esp + 0x44);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AE001; /* jl: less (signed <) */

loc_001AE25D: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + esi * 8));
    ecx = edi + esi * 8 + 4;
    MEM32(esp + 0x58) = ecx;
    ecx = edi + esi * 8 + 6;
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esp + 0x48);
    edx = edi + esi * 8 + 2;
    eax = eax + ebp;
    eax = eax & ecx;
    ecx = MEM32(esp + 0x4C);
    MEM16(edi + esi * 8) = LO16(eax);
    esi = MEM32(esp + 0x5C);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edx));
    ecx = ecx + eax;
    eax = MEM32(esp + 0x58);
    ecx = ecx & esi;
    MEM16(edx) = LO16(ecx);
    edx = MEM32(esp + 0x60);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax));
    esi = MEM32(esp + 0x28);
    edx = edx + ecx;
    edx = edx & MEM32(esp + 0x24);
    MEM16(eax) = LO16(edx);
    eax = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x20);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax));
    edx = edx + ecx;
    edx = edx & esi;
    MEM16(eax) = LO16(edx);
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebx + 8);
    edi = edi + eax * 8;
    eax = MEM32(esp + 0x54);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x54) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001ADFF0; /* jl: less (signed <) */

loc_001AE2E0: ;
    esi = MEM32(esp + 0x10);

loc_001AE2E4: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x58) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001AE3AB; /* jle: less or equal (signed <=) */

loc_001AE2F7: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    ecx = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    ebp = esi;
    esi = eax;
    eax = MEM32(esp + 0x14);
    eax = ~eax;
    MEM32(esp + 0x5C) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM32(esp + 0x60) = eax;
    eax = MEM32(esp + 0x18);
    eax = ~eax;
    MEM32(esp + 0x24) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x1C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x1C);
    eax = ~eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    ebp = ~ebp;
    MEM32(esp + 0x28) = eax;
    edi = edi + 4;

loc_001AE350: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + -4));
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(edi + -2));
    edi = edi + 8;
    eax = eax + ecx;
    eax = eax & ebp;
    MEM16(edi + -12) = LO16(eax);
    eax = MEM32(esp + 0x5C);
    edx = edx + esi;
    edx = edx & eax;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + -8));
    MEM16(edi + -10) = LO16(edx);
    edx = MEM32(esp + 0x60);
    edx = edx + eax;
    edx = edx & MEM32(esp + 0x24);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + -6));
    MEM16(edi + -8) = LO16(edx);
    edx = MEM32(esp + 0x20);
    edx = edx + eax;
    edx = edx & MEM32(esp + 0x28);
    eax = MEM32(esp + 0x58);
    MEM16(edi + -6) = LO16(edx);
    edx = MEM32(ebx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x58) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001AE350; /* jl: less (signed <) */

loc_001AE3AB: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(ebx + 0xC);
    MEM16(esp + 0x10) = (uint32_t)(((int32_t)(int16_t)(MEM16(esp + 0x10))) >> ((4) & 31u));
    MEM16(esp + 0x14) = (uint32_t)(((int32_t)(int16_t)(MEM16(esp + 0x14))) >> ((4) & 31u));
    MEM16(esp + 0x18) = (uint32_t)(((int32_t)(int16_t)(MEM16(esp + 0x18))) >> ((4) & 31u));
    MEM16(esp + 0x1C) = (uint32_t)(((int32_t)(int16_t)(MEM16(esp + 0x1C))) >> ((4) & 31u));
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x54) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001AE4FB; /* jle: less or equal (signed <=) */

loc_001AE3E5: ;
    eax = MEM32(ebx + 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001AE4CE; /* jle: less or equal (signed <=) */

loc_001AE3F2: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    SET_LO8(edx, MEM8(esp + 0x10));
    edi = MEM32(esp + 0x24);
    SET_LO8(ecx, MEM8(esp + 0x1C));
    esi = MEM32(esp + 0x20);
    SET_LO8(eax, ~LO8(eax));
    MEM8(esp + 0x5C) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x18));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(eax, ~LO8(eax));
    edi = edi + 4;
    MEM8(esp + 0x58) = LO8(edx);
    MEM8(esp + 0x60) = LO8(eax);
    SET_LO8(ecx, ~LO8(ecx));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001AE430;

loc_001AE424: ;
    SET_LO8(edx, MEM8(esp + 0x58));
    goto loc_001AE430;

    /* nop */

loc_001AE430: ;
    SET_LO16(eax, MEM16(edi + -4));
    SET_LO16(eax, (uint32_t)(((int32_t)(int16_t)(LO16(eax))) >> ((4) & 31u)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001AE445; /* jle: less or equal (signed <=) */

loc_001AE43E: ;
    eax = 0xFF;
    goto loc_001AE44C;

loc_001AE445: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001AE44C; /* jge: greater or equal (signed >=) */

loc_001AE44A: ;
    eax = 0; /* xor self */

loc_001AE44C: ;
    SET_LO8(edx, LO8(edx) & LO8(eax));
    MEM8(esi + 1) = LO8(edx);
    SET_LO16(eax, MEM16(edi + -2));
    SET_LO16(eax, (uint32_t)(((int32_t)(int16_t)(LO16(eax))) >> ((4) & 31u)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001AE466; /* jle: less or equal (signed <=) */

loc_001AE45F: ;
    eax = 0xFF;
    goto loc_001AE46D;

loc_001AE466: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001AE46D; /* jge: greater or equal (signed >=) */

loc_001AE46B: ;
    eax = 0; /* xor self */

loc_001AE46D: ;
    SET_LO8(edx, MEM8(esp + 0x5C));
    SET_LO8(edx, LO8(edx) & LO8(eax));
    MEM8(esi) = LO8(edx);
    SET_LO16(eax, MEM16(edi));
    SET_LO16(eax, (uint32_t)(((int32_t)(int16_t)(LO16(eax))) >> ((4) & 31u)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001AE489; /* jle: less or equal (signed <=) */

loc_001AE482: ;
    eax = 0xFF;
    goto loc_001AE490;

loc_001AE489: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001AE490; /* jge: greater or equal (signed >=) */

loc_001AE48E: ;
    eax = 0; /* xor self */

loc_001AE490: ;
    SET_LO8(edx, MEM8(esp + 0x60));
    SET_LO8(edx, LO8(edx) & LO8(eax));
    MEM8(esi + -1) = LO8(edx);
    SET_LO16(eax, MEM16(edi + 2));
    SET_LO16(eax, (uint32_t)(((int32_t)(int16_t)(LO16(eax))) >> ((4) & 31u)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001AE4AE; /* jle: less or equal (signed <=) */

loc_001AE4A7: ;
    eax = 0xFF;
    goto loc_001AE4B5;

loc_001AE4AE: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001AE4B5; /* jge: greater or equal (signed >=) */

loc_001AE4B3: ;
    eax = 0; /* xor self */

loc_001AE4B5: ;
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & LO8(eax));
    MEM8(esi + 2) = LO8(edx);
    eax = MEM32(ebx + 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 8;
    esi = esi + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AE424; /* jl: less (signed <) */

loc_001AE4CE: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(esp + 0x20);
    edx = ecx + eax * 4;
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0x20) = edx;
    edx = ecx + eax * 8;
    eax = MEM32(esp + 0x54);
    ecx = MEM32(ebx + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x54) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001AE3E5; /* jl: less (signed <) */

loc_001AE4FB: ;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AE505u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_001AE505: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AE520
 * Original: 0x001AE520 - 0x001AE60C (236 bytes, 82 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE520(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE520: ;
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AE602; /* jl: less (signed <) */

loc_001AE539: ;
    ebp = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AE602; /* jl: less (signed <) */

loc_001AE549: ;
    PUSH32(esp, ebx);
    ebp = ebp - eax;
    PUSH32(esp, esi);
    edi = edi - ecx;
    esi = ebp + 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = esi;
    esi = (uint32_t)((int32_t)esi * (int32_t)edi);
    eax = esi * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AE567u); RECOMP_ABI_CALL(0x00343299u, sub_00343299); /* call 0x00343299 */

loc_001AE567: ;
    ebx = eax;
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AE584; /* je: equal / zero */

loc_001AE570: ;
    PUSH32(esp, 0x2E6B0);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001AE57Eu); RECOMP_ABI_CALL(0x00011100u, sub_00011100); /* call 0x00011100 */

loc_001AE57E: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001AE58C;

loc_001AE584: ;
    MEM32(esp + 0x10) = 0;

loc_001AE58C: ;
    ebx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x24);
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x2C) (32-bit) */
    edx = edx + ecx * 4;
    ecx = MEM32(esp + 0x10);
    if (CMP_GE(_fas, _fbs)) goto loc_001AE5D9; /* jge: greater or equal (signed >=) */

loc_001AE5AA: ;
    MEM32(esp + 0x24) = ebp;
    edi = edi;

loc_001AE5B0: ;
    eax = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001AE5CD; /* jge: greater or equal (signed >=) */

loc_001AE5BC: ;
    /* nop */

loc_001AE5C0: ;
    ebp = MEM32(edx + eax * 4);
    MEM32(ecx) = ebp;
    ecx = ecx + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AE5C0; /* jl: less (signed <) */

loc_001AE5CD: ;
    eax = MEM32(ebx + 4);
    edx = edx + eax * 4;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001AE5B0; /* jne: not equal / not zero */

loc_001AE5D9: ;
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001AE5E2u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_001AE5E2: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x14);
    esp = esp + 4;
    POP32(esp, esi);
    MEM32(ebx + 4) = edi;
    MEM32(ebx + 8) = eax;
    MEM32(ebx + 0xC) = edx;
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 20; return; /* ret 16 */

loc_001AE602: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AE610
 * Original: 0x001AE610 - 0x001AE6D4 (196 bytes, 73 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE610(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE610: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = ebp;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x20));
    eax = esi * 4;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebx = ecx;
    PUSH32(esp, 0x001AE631u); RECOMP_ABI_CALL(0x00343299u, sub_00343299); /* call 0x00343299 */

loc_001AE631: ;
    edx = eax;
    eax = 0; /* xor self */
    ecx = esi;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebx + 4);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001AE651; /* jl: less (signed <) */

loc_001AE64D: ;
    MEM32(esp + 0x10) = ebp;

loc_001AE651: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AE65E; /* jl: less (signed <) */

loc_001AE65C: ;
    eax = ecx;

loc_001AE65E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = MEM32(ebx + 0xC);
    esi = edx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001AE6AB; /* jle: less or equal (signed <=) */

loc_001AE667: ;
    MEM32(esp + 0x14) = eax;
    goto loc_001AE670;

    /* nop */

loc_001AE670: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001AE691; /* jle: less or equal (signed <=) */

loc_001AE678: ;
    edx = MEM32(esp + 0x10);
    ecx = edi;
    eax = esi;
    ecx = ecx - esi;

loc_001AE682: ;
    ebp = MEM32(ecx + eax);
    MEM32(eax) = ebp;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001AE682; /* jne: not equal / not zero */

loc_001AE68D: ;
    ebp = MEM32(esp + 0x20);

loc_001AE691: ;
    ecx = MEM32(ebx + 4);
    eax = ebp * 4;
    esi = esi + eax;
    eax = MEM32(esp + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi + ecx * 4;
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_001AE670; /* jne: not equal / not zero */

loc_001AE6AB: ;
    edx = MEM32(ebx + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001AE6B4u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_001AE6B4: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x28);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 4) = ebp;
    MEM32(ebx + 0xC) = eax;
    POP32(esp, ebp);
    MEM32(ebx + 8) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AE6E0
 * Original: 0x001AE6E0 - 0x001AE76A (138 bytes, 48 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AE6E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AE6F3; /* je: equal / zero */

loc_001AE6EA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AE6F0u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_001AE6F0: ;
    esp = esp + 4;

loc_001AE6F3: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    eax = MEM32(esp + 0xC);
    MEM32(esi + 8) = 0;
    MEM32(esi) = ecx;
    MEM32(esi + 4) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001AE711; /* jge: greater or equal (signed >=) */

loc_001AE70C: ;
    ecx = 4;

loc_001AE711: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001AE71B; /* jge: greater or equal (signed >=) */

loc_001AE716: ;
    eax = 4;

loc_001AE71B: ;
    edx = MEM32(esi + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AE750; /* je: equal / zero */

loc_001AE723: ;
    if (CMP_LE(_fas, _fbs)) goto loc_001AE73F; /* jle: less or equal (signed <=) */

loc_001AE725: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001AE73F; /* jg: greater (signed >) */

loc_001AE72A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax << 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AE735u); RECOMP_ABI_CALL(0x00343299u, sub_00343299); /* call 0x00343299 */

loc_001AE735: ;
    esp = esp + 4;
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001AE73F: ;
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001AE750: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax << 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AE760u); RECOMP_ABI_CALL(0x00343299u, sub_00343299); /* call 0x00343299 */

loc_001AE760: ;
    esp = esp + 4;
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AE770
 * Original: 0x001AE770 - 0x001AE854 (228 bytes, 82 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE770(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE770: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    ecx = ecx >> 0x10;
    SET_LO8(ecx, LO8(ecx) >> 3);
    ebx = 0; /* xor self */
    SET_LO16(edx, ZX8(LO8(ecx)));
    ecx = MEM32(esp + 0x14);
    MEM16(eax) = LO16(ebx);
    MEM32(esp + 0x14) = ebx;
    SET_LO8(ebx, HI8(ecx));
    SET_LO8(ebx, LO8(ebx) >> 2);
    PUSH32(esp, edi);
    SET_LO16(edi, ZX8(LO8(ebx)));
    ebx = MEM32(esp + 0x18);
    SET_LO8(ecx, LO8(ecx) >> 3);
    edx = edx << 6;
    SET_LO16(ecx, ZX8(LO8(ecx)));
    edx = edx | edi;
    edx = edx << 5;
    MEM16(eax + 4) = LO16(ebx);
    MEM16(eax + 6) = LO16(ebx);
    edi = 4;
    MEM32(esp + 0xC) = esi;
    edx = edx | ecx;
    MEM16(eax + 2) = LO16(edx);
    edx = eax + 4;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001AE7D7; /* jge: greater or equal (signed >=) */

loc_001AE7D1: ;
    MEM32(esp + 0x18) = eax;
    goto loc_001AE7DD;

loc_001AE7D7: ;
    MEM32(esp + 0x18) = edi;
    eax = edi;

loc_001AE7DD: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001AE7EC; /* jl: less (signed <) */

loc_001AE7E8: ;
    MEM32(esp + 0x14) = edi;

loc_001AE7EC: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001AE84D; /* jle: less or equal (signed <=) */

loc_001AE7F2: ;
    PUSH32(esp, ebp);

loc_001AE7F3: ;
    ebp = ebx;
    ebp = ebp & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = ebp * 8;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001AE833; /* jle: less or equal (signed <=) */

loc_001AE803: ;
    esi = MEM32(esp + 0x20);
    esi = esi + 3;
    edi = eax;
    /* nop */

loc_001AE810: ;
    SET_LO8(eax, MEM8(esi));
    SET_LO8(eax, ~LO8(eax));
    eax = ZX8(LO8(eax));
    eax = eax | 0x40;
    eax = eax >> 6;
    eax = eax << LO8(ecx);
    ecx = ecx + 2;
    esi = esi + 4;
    MEM16(edx) = MEM16(edx) | LO16(eax);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001AE810; /* jne: not equal / not zero */

loc_001AE82B: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x1C);

loc_001AE833: ;
    edi = MEM32(esp + 0x20);
    ecx = MEM32(esi);
    ecx = edi + ecx * 4;
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    edx = edx + ebp * 2;
    if (CMP_L(_fas, _fbs)) goto loc_001AE7F3; /* jl: less (signed <) */

loc_001AE84C: ;
    POP32(esp, ebp);

loc_001AE84D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AE860
 * Original: 0x001AE860 - 0x001AE96D (269 bytes, 93 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE860(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE860: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    eax = eax >> 0x10;
    SET_LO8(eax, LO8(eax) >> 3);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO16(ecx, ZX8(LO8(eax)));
    eax = MEM32(esp + 0x18);
    SET_LO8(edx, HI8(eax));
    SET_LO8(edx, LO8(edx) >> 2);
    SET_LO16(edx, ZX8(LO8(edx)));
    ecx = ecx << 6;
    SET_LO8(eax, LO8(eax) >> 3);
    SET_LO16(eax, ZX8(LO8(eax)));
    MEM32(esp + 0xC) = edi;
    ecx = ecx | edx;
    edx = MEM32(esp + 0x1C);
    ecx = ecx << 5;
    SET_LO8(ebx, HI8(edx));
    SET_LO8(ebx, LO8(ebx) >> 2);
    ecx = ecx | eax;
    eax = MEM32(esp + 0x14);
    MEM16(eax) = LO16(ecx);
    ecx = MEM32(esp + 0x1C);
    ecx = ecx >> 0x10;
    SET_LO8(ecx, LO8(ecx) >> 3);
    SET_LO16(ecx, ZX8(LO8(ecx)));
    SET_LO16(esi, ZX8(LO8(ebx)));
    SET_LO8(edx, LO8(edx) >> 3);
    SET_LO16(edx, ZX8(LO8(edx)));
    ecx = ecx << 6;
    ecx = ecx | esi;
    ecx = ecx << 5;
    esi = eax + 4;
    ecx = ecx | edx;
    MEM16(eax + 2) = LO16(ecx);
    ecx = 0; /* xor self */
    MEM16(esi) = LO16(ecx);
    MEM16(eax + 6) = LO16(ecx);
    ebx = MEM32(edi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AE8E5; /* jl: less (signed <) */

loc_001AE8E0: ;
    ebx = 4;

loc_001AE8E5: ;
    edi = MEM32(edi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    MEM32(esp + 0x1C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_001AE8F9; /* jl: less (signed <) */

loc_001AE8F1: ;
    MEM32(esp + 0x1C) = 4;

loc_001AE8F9: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), ecx (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_001AE966; /* jle: less or equal (signed <=) */

loc_001AE903: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);

loc_001AE908: ;
    eax = ecx;
    eax = eax & 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esp + 0x24) = eax;
    edi = eax * 8;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001AE94B; /* jle: less or equal (signed <=) */

loc_001AE91E: ;
    edi = edi;

loc_001AE920: ;
    eax = MEM32(ebp + edx * 4);
    eax = eax & 0xF8FCF8;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x1C) (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    ecx = edi;
    eax = eax << LO8(ecx);
    edi = edi + 2;
    MEM16(esi) = MEM16(esi) | LO16(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AE920; /* jl: less (signed <) */

loc_001AE943: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x24);

loc_001AE94B: ;
    edx = MEM32(esp + 0x10);
    edx = MEM32(edx);
    esi = esi + eax * 2;
    eax = MEM32(esp + 0x20);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    ebp = ebp + edx * 4;
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001AE908; /* jl: less (signed <) */

loc_001AE965: ;
    POP32(esp, ebp);

loc_001AE966: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AE970
 * Original: 0x001AE970 - 0x001AEAAE (318 bytes, 108 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE970(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE970: ;
    esp = esp - 8;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    eax = eax >> 0x10;
    PUSH32(esp, esi);
    SET_LO8(eax, LO8(eax) >> 3);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x1C);
    SET_LO8(edx, HI8(ecx));
    SET_LO8(edx, LO8(edx) >> 2);
    SET_LO16(edx, ZX8(LO8(edx)));
    SET_LO16(eax, ZX8(LO8(eax)));
    SET_LO8(ecx, LO8(ecx) >> 3);
    SET_LO16(ecx, ZX8(LO8(ecx)));
    MEM32(esp + 0x10) = edi;
    eax = eax << 6;
    eax = eax | edx;
    edx = MEM32(esp + 0x20);
    edx = edx >> 0x10;
    SET_LO8(edx, LO8(edx) >> 3);
    eax = eax << 5;
    eax = eax | ecx;
    SET_LO16(ecx, ZX8(LO8(edx)));
    SET_LO8(edx, HI8(ebx));
    SET_LO8(edx, LO8(edx) >> 2);
    SET_LO16(edx, ZX8(LO8(edx)));
    ecx = ecx << 6;
    ecx = ecx | edx;
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) >> 3);
    SET_LO16(edx, ZX8(LO8(edx)));
    ecx = ecx << 5;
    ecx = ecx | edx;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    edx = MEM32(esp + 0x18);
    if (CMP_BE(_fa, _fb)) goto loc_001AE9EC; /* jbe: below or equal (unsigned <=) */

loc_001AE9DF: ;
    MEM16(edx) = LO16(ecx);
    MEM16(edx + 2) = LO16(eax);
    MEM32(esp + 0x1C) = ebx;
    goto loc_001AE9F3;

loc_001AE9EC: ;
    MEM16(edx) = LO16(eax);
    MEM16(edx + 2) = LO16(ecx);

loc_001AE9F3: ;
    esi = edx + 4;
    MEM16(esi) = 0;
    MEM16(edx + 6) = 0;
    eax = MEM32(edi);
    ecx = 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001AEA14; /* jl: less (signed <) */

loc_001AEA10: ;
    MEM32(esp + 0x20) = ecx;

loc_001AEA14: ;
    edi = MEM32(edi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_001AEA23; /* jl: less (signed <) */

loc_001AEA1F: ;
    MEM32(esp + 0x18) = ecx;

loc_001AEA23: ;
    ecx = MEM32(esp + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001AEAA5; /* jle: less or equal (signed <=) */

loc_001AEA31: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);

loc_001AEA36: ;
    ecx = MEM32(esp + 0x24);
    ebx = eax;
    ebx = ebx & 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edi = ebx * 8;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001AEA8A; /* jle: less or equal (signed <=) */

loc_001AEA4C: ;
    /* nop */

loc_001AEA50: ;
    SET_LO8(eax, MEM8(ebp + edx * 4 + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001AEA5F; /* js: sign (negative) */

loc_001AEA58: ;
    eax = 3;
    goto loc_001AEA73;

loc_001AEA5F: ;
    eax = MEM32(ebp + edx * 4);
    eax = eax & 0xF8FCF8;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x20) (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;

loc_001AEA73: ;
    ecx = edi;
    eax = eax << LO8(ecx);
    edi = edi + 2;
    MEM16(esi) = MEM16(esi) | LO16(eax);
    eax = MEM32(esp + 0x24);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001AEA50; /* jl: less (signed <) */

loc_001AEA86: ;
    eax = MEM32(esp + 0x10);

loc_001AEA8A: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(edx);
    ebp = ebp + ecx * 4;
    ecx = MEM32(esp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    esi = esi + ebx * 2;
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001AEA36; /* jl: less (signed <) */

loc_001AEAA4: ;
    POP32(esp, ebp);

loc_001AEAA5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AEAB0
 * Original: 0x001AEAB0 - 0x001AEB4D (157 bytes, 61 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEAB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AEAB0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001AEAC5; /* jl: less (signed <) */

loc_001AEAC0: ;
    edi = 4;

loc_001AEAC5: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 8) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_001AEAD6; /* jl: less (signed <) */

loc_001AEAD1: ;
    eax = 4;

loc_001AEAD6: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001AEB2C; /* jle: less or equal (signed <=) */

loc_001AEAE0: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);

loc_001AEAE6: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001AEB13; /* jle: less or equal (signed <=) */

loc_001AEAEC: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    eax = edx + 3;

loc_001AEAF1: ;
    SET_LO8(ebx, MEM8(eax));
    if (4) _cf = (int)(((LO8(ebx)) >> ((4) - 1)) & 1);
    SET_LO8(ebx, LO8(ebx) >> 4);
    SET_LO16(ebx, ZX8(LO8(ebx)));
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    if (LO8(ecx)) _cf = (int)(((ebx) >> (32 - (LO8(ecx)))) & 1);
    ebx = ebx << LO8(ecx);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _cf = 0; /* logical op clears CF */
    esi = esi | ebx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001AEAF1; /* jne: not equal / not zero */

loc_001AEB07: ;
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);

loc_001AEB13: ;
    ebx = MEM32(esp + 0x20);
    MEM16(ebx + ebp * 2) = LO16(esi);
    esi = MEM32(ecx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = edx + esi * 4;
    if (CMP_L(_fas, _fbs)) goto loc_001AEAE6; /* jl: less (signed <) */

loc_001AEB25: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_001AEB45; /* jge: greater or equal (signed >=) */

loc_001AEB2C: ;
    eax = MEM32(esp + 0x18);
    ecx = 4;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(ebp));
    ecx = ecx - ebp;
    edi = eax + ebp * 2;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    if (1) _cf = (int)(((ecx) >> ((1) - 1)) & 1);
    ecx = ecx >> 1;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(2); for (_i = 0; _i < ecx; _i++) MEM16(edi + _i*_st) = LO16(eax); edi += ecx * _st; }
    ecx = 0; /* rep stosw */

loc_001AEB45: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AEB50
 * Original: 0x001AEB50 - 0x001AEC35 (229 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEB50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AEB50: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    if (TEST_NZ(_fa, _fb)) goto loc_001AEB7E; /* jne: not equal / not zero */

loc_001AEB61: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AEB71; /* je: equal / zero */

loc_001AEB68: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AEB6Eu); RECOMP_ABI_CALL(0x00343CD4u, sub_00343CD4); /* call 0x00343CD4 */

loc_001AEB6E: ;
    esp = esp + 4;

loc_001AEB71: ;
    MEM32(ebp) = 0;
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001AEB7E: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001AEBBF; /* jne: not equal / not zero */

loc_001AEB86: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    ebx = ebx + 8;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001AEB92u); RECOMP_ABI_CALL(0x00343CCFu, sub_00343CCF); /* call 0x00343CCF */

loc_001AEB92: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001AEBDA; /* je: equal / zero */

loc_001AEB9C: ;
    MEM32(eax) = 0;
    edi = MEM32(ebp);
    ecx = ebx;
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
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001AEBBF: ;
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    esi = ecx + 8;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AEBCDu); RECOMP_ABI_CALL(0x00343CCFu, sub_00343CCF); /* call 0x00343CCF */

loc_001AEBCD: ;
    edx = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001AEBE2; /* jne: not equal / not zero */

loc_001AEBDA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001AEBE2: ;
    ecx = esi;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    esi = MEM32(ebp);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001AEC00; /* jge: greater or equal (signed >=) */

loc_001AEBFE: ;
    ebx = eax;

loc_001AEC00: ;
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x1C));
    ecx = ecx + 8;
    edi = edx;
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
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AEC23u); RECOMP_ABI_CALL(0x00343CD4u, sub_00343CD4); /* call 0x00343CD4 */

loc_001AEC23: ;
    ecx = MEM32(esp + 0x14);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = ecx;
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001AEC40
 * Original: 0x001AEC40 - 0x001AED0A (202 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEC40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AEC40: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp);
    if (TEST_NZ(_fa, _fb)) goto loc_001AEC58; /* jne: not equal / not zero */

loc_001AEC51: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001AEC58: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001AEC81; /* jne: not equal / not zero */

loc_001AEC62: ;
    ecx = MEM32(esp + 0x28);
    ecx = ecx + eax;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edi = 0; /* xor self */
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, 0x001AEC75u); RECOMP_ABI_CALL(0x001AEB50u, sub_001AEB50); /* call 0x001AEB50 */

loc_001AEC75: ;
    esi = MEM32(ebp);
    edx = MEM32(esp + 0x1C);
    MEM32(esi + 4) = edx;
    goto loc_001AECA8;

loc_001AEC81: ;
    edi = MEM32(esi);
    edx = MEM32(esi + 4);
    ecx = edi + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001AECAF; /* jle: less or equal (signed <=) */

loc_001AEC8D: ;
    eax = MEM32(esp + 0x28);
    ecx = ecx + eax;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, 0x001AEC9Eu); RECOMP_ABI_CALL(0x001AEB50u, sub_001AEB50); /* call 0x001AEB50 */

loc_001AEC9E: ;
    esi = MEM32(ebp);
    ecx = MEM32(esp + 0x1C);
    MEM32(esi + 4) = ecx;

loc_001AECA8: ;
    eax = MEM32(esp + 0x24);
    esp = esp + 8;

loc_001AECAF: ;
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001AECDE; /* jge: greater or equal (signed >=) */

loc_001AECB7: ;
    edx = ebp;
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    ecx = edx + esi + 8;
    edi = edi - ebp;
    edx = eax + ebp;
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = edx + esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AECD7u); RECOMP_ICALL_SAFE(0x00342AA0u, _icall_esp); /* manual call 0x00342AA0 */
    }

loc_001AECD7: ;
    eax = MEM32(esp + 0x28);
    esp = esp + 0xC;

loc_001AECDE: ;
    ecx = MEM32(esp + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    edx = ebp;
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = edx + esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AECF6u); RECOMP_ICALL_SAFE(0x00342AA0u, _icall_esp); /* manual call 0x00342AA0 */
    }

loc_001AECF6: ;
    eax = MEM32(esi);
    ecx = MEM32(esp + 0x28);
    esp = esp + 0xC;
    POP32(esp, edi);
    eax = eax + ecx;
    POP32(esp, ebx);
    MEM32(esi) = eax;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001AED10
 * Original: 0x001AED10 - 0x001AED21 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AED10(void)
{

loc_001AED10: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BB394);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AED20u); RECOMP_ABI_CALL(0x001F7ED0u, sub_001F7ED0); /* call 0x001F7ED0 */

loc_001AED20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AED30
 * Original: 0x001AED30 - 0x001AED41 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AED30(void)
{

loc_001AED30: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BB394);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AED40u); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_001AED40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AED50
 * Original: 0x001AED50 - 0x001AED71 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AED50(void)
{

loc_001AED50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AED5Au); RECOMP_ABI_CALL(0x002A1560u, sub_002A1560); /* call 0x002A1560 */

loc_001AED5A: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001AED70u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AED70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AED80
 * Original: 0x001AED80 - 0x001AEDB0 (48 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AED80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AED80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AED90; /* je: equal / zero */

loc_001AED8A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AED90u); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_001AED90: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AEDAE; /* je: equal / zero */

loc_001AED97: ;
    SET_LO8(ecx, MEM8(esi + 0x3C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AEDAE; /* je: equal / zero */

loc_001AED9E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AEDA4u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_001AEDA4: ;
    esp = esp + 4;
    MEM32(esi + 0x34) = 0;

loc_001AEDAE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001AEDB0
 * Original: 0x001AEDB0 - 0x001AEFD5 (549 bytes, 182 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEDB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AEDB0: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 6 (32-bit) */
    MEM32(ecx) = 0xFFFFFFFFu;
    if (CMP_A(_fa, _fb)) goto loc_001AEFCF; /* ja: above (unsigned >) */

loc_001AEDCB: ;
    PUSH32(esp, ebx);
    { uint32_t _jt = MEM32(edx * 4 + 0x1AEFD8); /* switch: 9 entries, 7 targets */
    if (_jt == 0x001AEDD3u) goto loc_001AEDD3;
    if (_jt == 0x001AEDEFu) goto loc_001AEDEF;
    if (_jt == 0x001AEDFEu) goto loc_001AEDFE;
    if (_jt == 0x001AEE85u) goto loc_001AEE85;
    if (_jt == 0x001AEEC5u) goto loc_001AEEC5;
    if (_jt == 0x001AEF29u) goto loc_001AEF29;
    if (_jt == 0x001AEFCEu) goto loc_001AEFCE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001AEDD3: ;
    edx = MEM32(esp + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001AEFCE; /* ja: above (unsigned >) */

loc_001AEDE1: ;
    eax = ZX8(MEM8(edx + 0x1AEFFC));
    { uint32_t _jt = MEM32(eax * 4 + 0x1AEFF4); /* switch: 2 entries, 2 targets */
    if (_jt == 0x001AEDEFu) goto loc_001AEDEF;
    if (_jt == 0x001AEFCEu) goto loc_001AEFCE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001AEDEF: ;
    esi = 0; /* xor self */
    POP32(esp, ebx);
    eax = esi;
    MEM32(ecx) = 0;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_001AEDFE: ;
    edx = MEM32(esp + 0xC);
    eax = 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AEE14; /* je: equal / zero */

loc_001AEE0B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEFCE; /* jne: not equal / not zero */

loc_001AEE14: ;
    ebx = 5;
    MEM32(ecx) = ebx;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    esi = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_001AEFCE; /* je: equal / zero */

loc_001AEE29: ;
    SET_LO8(edx, MEM8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEE47; /* jne: not equal / not zero */

loc_001AEE30: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 1), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEE47; /* jne: not equal / not zero */

loc_001AEE35: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 2), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEE47; /* jne: not equal / not zero */

loc_001AEE3B: ;
    esi = 4;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_001AEE47: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEE62; /* jne: not equal / not zero */

loc_001AEE4B: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 1), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEE62; /* jne: not equal / not zero */

loc_001AEE51: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 2), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEE62; /* jne: not equal / not zero */

loc_001AEE56: ;
    esi = 0xA;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_001AEE62: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEFCE; /* jne: not equal / not zero */

loc_001AEE6A: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 1), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEFCE; /* jne: not equal / not zero */

loc_001AEE73: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 2), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEFCE; /* jne: not equal / not zero */

loc_001AEE7C: ;
    esi = ebx;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_001AEE85: ;
    edx = MEM32(esp + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001AEFCE; /* ja: above (unsigned >) */

loc_001AEE93: ;
    edx = ZX8(MEM8(edx + 0x1AF018));
    { uint32_t _jt = MEM32(edx * 4 + 0x1AF00C); /* switch: 3 entries, 3 targets */
    if (_jt == 0x001AEEA1u) goto loc_001AEEA1;
    if (_jt == 0x001AEEB3u) goto loc_001AEEB3;
    if (_jt == 0x001AEFCEu) goto loc_001AEFCE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001AEEA1: ;
    esi = 0x10000;
    POP32(esp, ebx);
    eax = esi;
    MEM32(ecx) = 0x10000;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_001AEEB3: ;
    esi = 0x10001;
    POP32(esp, ebx);
    eax = esi;
    MEM32(ecx) = 0x10000;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_001AEEC5: ;
    edx = MEM32(esp + 0xC);
    eax = 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AEEDB; /* je: equal / zero */

loc_001AEED2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEFCE; /* jne: not equal / not zero */

loc_001AEEDB: ;
    MEM32(ecx) = 3;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    esi = 3;
    if (TEST_Z(_fa, _fb)) goto loc_001AEFCE; /* je: equal / zero */

loc_001AEEF2: ;
    SET_LO8(edx, MEM8(ecx + 3));
    SET_LO8(ebx, 4);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEF0C; /* jne: not equal / not zero */

loc_001AEEFB: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 4), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEF0C; /* jne: not equal / not zero */

loc_001AEF00: ;
    esi = 2;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_001AEF0C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEFCE; /* jne: not equal / not zero */

loc_001AEF14: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 4), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEFCE; /* jne: not equal / not zero */

loc_001AEF1D: ;
    esi = 3;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_001AEF29: ;
    edx = MEM32(esp + 0xC);
    eax = 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AEF3F; /* je: equal / zero */

loc_001AEF36: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEFCE; /* jne: not equal / not zero */

loc_001AEF3F: ;
    MEM32(ecx) = 7;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    esi = 7;
    if (TEST_Z(_fa, _fb)) goto loc_001AEFCE; /* je: equal / zero */

loc_001AEF52: ;
    SET_LO8(edx, MEM8(ecx));
    ebx = 5;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEF74; /* jne: not equal / not zero */

loc_001AEF5D: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEF74; /* jne: not equal / not zero */

loc_001AEF62: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 2), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEF74; /* jne: not equal / not zero */

loc_001AEF67: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 4), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEF74; /* jne: not equal / not zero */

loc_001AEF6D: ;
    POP32(esp, ebx);
    esi = eax;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_001AEF74: ;
    SET_LO8(ebx, 2);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEF95; /* jne: not equal / not zero */

loc_001AEF7A: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEF95; /* jne: not equal / not zero */

loc_001AEF7F: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 2), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEF95; /* jne: not equal / not zero */

loc_001AEF84: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 4), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEF95; /* jne: not equal / not zero */

loc_001AEF89: ;
    esi = 6;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_001AEF95: ;
    SET_LO8(ebx, 4);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEFB6; /* jne: not equal / not zero */

loc_001AEF9B: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEFB6; /* jne: not equal / not zero */

loc_001AEFA0: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 2), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEFB6; /* jne: not equal / not zero */

loc_001AEFA5: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 4), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEFB6; /* jne: not equal / not zero */

loc_001AEFAA: ;
    esi = 9;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_001AEFB6: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEFCE; /* jne: not equal / not zero */

loc_001AEFBA: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 1), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEFCE; /* jne: not equal / not zero */

loc_001AEFBF: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 2), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEFCE; /* jne: not equal / not zero */

loc_001AEFC4: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 4), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AEFCE; /* jne: not equal / not zero */

loc_001AEFC9: ;
    esi = 7;

loc_001AEFCE: ;
    POP32(esp, ebx);

loc_001AEFCF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AF020
 * Original: 0x001AF020 - 0x001AF0CF (175 bytes, 64 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AF020: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AF057u); RECOMP_ABI_CALL(0x002A5D70u, sub_002A5D70); /* call 0x002A5D70 */

loc_001AF057: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AF05Du); RECOMP_ABI_CALL(0x002A16D0u, sub_002A16D0); /* call 0x002A16D0 */

loc_001AF05D: ;
    eax = MEM32(esp + 0x48);
    esp = esp + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001AF091; /* jge: greater or equal (signed >=) */

loc_001AF069: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AF079; /* jne: not equal / not zero */

loc_001AF070: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AF076u); RECOMP_ABI_CALL(0x002A5910u, sub_002A5910); /* call 0x002A5910 */

loc_001AF076: ;
    esp = esp + 4;

loc_001AF079: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001AF091; /* jge: greater or equal (signed >=) */

loc_001AF080: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AF091; /* jne: not equal / not zero */

loc_001AF088: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AF08Eu); RECOMP_ABI_CALL(0x002A1720u, sub_002A1720); /* call 0x002A1720 */

loc_001AF08E: ;
    esp = esp + 4;

loc_001AF091: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AF09Au); RECOMP_ABI_CALL(0x002A5CD0u, sub_002A5CD0); /* call 0x002A5CD0 */

loc_001AF09A: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AF0B1; /* je: equal / zero */

loc_001AF0A1: ;
    _fa = (uint32_t)(MEM8(esp + 0x24)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x24), 5 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AF0B1; /* jne: not equal / not zero */

loc_001AF0A8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AF0AEu); RECOMP_ABI_CALL(0x002A1720u, sub_002A1720); /* call 0x002A1720 */

loc_001AF0AE: ;
    esp = esp + 4;

loc_001AF0B1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AF0B7u); RECOMP_ABI_CALL(0x002A5900u, sub_002A5900); /* call 0x002A5900 */

loc_001AF0B7: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AF0C2u); RECOMP_ABI_CALL(0x002A1730u, sub_002A1730); /* call 0x002A1730 */

loc_001AF0C2: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AF0D0
 * Original: 0x001AF0D0 - 0x001AF208 (312 bytes, 91 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF0D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF0D0: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xB (32-bit) */
    MEM8(edx) = 0;
    MEM32(esi) = 0x64;
    if (CMP_A(_fa, _fb)) goto loc_001AF1EC; /* ja: above (unsigned >) */

loc_001AF0FA: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x1AF208); /* switch: 12 entries, 11 targets */
    if (_jt == 0x001AF101u) goto loc_001AF101;
    if (_jt == 0x001AF111u) goto loc_001AF111;
    if (_jt == 0x001AF121u) goto loc_001AF121;
    if (_jt == 0x001AF133u) goto loc_001AF133;
    if (_jt == 0x001AF145u) goto loc_001AF145;
    if (_jt == 0x001AF15Cu) goto loc_001AF15C;
    if (_jt == 0x001AF16Fu) goto loc_001AF16F;
    if (_jt == 0x001AF188u) goto loc_001AF188;
    if (_jt == 0x001AF1A1u) goto loc_001AF1A1;
    if (_jt == 0x001AF1BAu) goto loc_001AF1BA;
    if (_jt == 0x001AF1D3u) goto loc_001AF1D3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001AF101: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = 0x10000;
    eax = MEM32(ecx);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_001AF111: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = 0;
    eax = MEM32(ecx);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_001AF121: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = 0x10000;
    MEM32(eax) = MEM32(eax) << 1;
    eax = MEM32(ecx);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_001AF133: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = 8;
    MEM32(eax) = MEM32(eax) << 1;
    eax = MEM32(ecx);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_001AF145: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = 5;
    edx = MEM32(eax);
    edx = edx + edx * 2;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_001AF15C: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = 7;
    MEM32(eax) = MEM32(eax) << 2;
    eax = MEM32(ecx);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_001AF16F: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = 0x10000;
    MEM8(edx) = 1;
    MEM32(eax) = 0x400;
    eax = MEM32(ecx);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_001AF188: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = 0;
    MEM8(edx) = 1;
    MEM32(eax) = 0x400;
    eax = MEM32(ecx);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_001AF1A1: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = 8;
    MEM8(edx) = 1;
    MEM32(eax) = 0x400;
    eax = MEM32(ecx);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_001AF1BA: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = 5;
    MEM8(edx) = 1;
    MEM32(eax) = 0x400;
    eax = MEM32(ecx);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_001AF1D3: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = 7;
    MEM8(edx) = 1;
    MEM32(eax) = 0x400;
    eax = MEM32(ecx);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_001AF1EC: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = 0xFFFFFFFFu;
    MEM32(eax) = 0xFFFFFFFFu;
    MEM32(esi) = 0xFFFFFFFFu;
    eax = MEM32(ecx);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001AF240
 * Original: 0x001AF240 - 0x001AF2B6 (118 bytes, 49 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF240(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF240: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = 1;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = ebx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = edi;
    MEM32(ecx + 0x14) = edi;
    MEM32(ecx + 0x18) = edi;
    MEM32(ecx + 0x1C) = edi;
    MEM32(ecx + 0x20) = edi;
    eax = esi;

loc_001AF273: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001AF285; /* jae: above or equal (unsigned >=) */

loc_001AF279: ;
    edx = MEM32(ecx + 0xC);
    edx = edx | eax;
    eax = eax << 1;
    MEM32(ecx + 0xC) = edx;
    edx = eax;

loc_001AF285: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x18) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001AF297; /* jae: above or equal (unsigned >=) */

loc_001AF28B: ;
    ebp = MEM32(ecx + 0x10);
    ebp = ebp | eax;
    eax = eax << 1;
    MEM32(ecx + 0x10) = ebp;
    edx = eax;

loc_001AF297: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001AF2A9; /* jae: above or equal (unsigned >=) */

loc_001AF29D: ;
    ebp = MEM32(ecx + 0x14);
    ebp = ebp | eax;
    eax = eax << 1;
    MEM32(ecx + 0x14) = ebp;
    edx = eax;

loc_001AF2A9: ;
    esi = esi << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AF273; /* jne: not equal / not zero */

loc_001AF2AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AF2C0
 * Original: 0x001AF2C0 - 0x001AF2ED (45 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AF2C0: ;
    ecx = MEM32(ecx + 0xC);
    edx = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001AF2EA; /* jb: below (unsigned <) */

loc_001AF2CE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);

loc_001AF2D4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AF2E0; /* je: equal / zero */

loc_001AF2D8: ;
    edi = edx;
    edi = edi & esi;
    eax = eax | edi;
    goto loc_001AF2E2;

loc_001AF2E0: ;
    esi = esi << 1;

loc_001AF2E2: ;
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001AF2D4; /* jbe: below or equal (unsigned <=) */

loc_001AF2E8: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001AF2EA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AF2F0
 * Original: 0x001AF2F0 - 0x001AF31D (45 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AF2F0: ;
    ecx = MEM32(ecx + 0x10);
    edx = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001AF31A; /* jb: below (unsigned <) */

loc_001AF2FE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);

loc_001AF304: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AF310; /* je: equal / zero */

loc_001AF308: ;
    edi = edx;
    edi = edi & esi;
    eax = eax | edi;
    goto loc_001AF312;

loc_001AF310: ;
    esi = esi << 1;

loc_001AF312: ;
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001AF304; /* jbe: below or equal (unsigned <=) */

loc_001AF318: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001AF31A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AF320
 * Original: 0x001AF320 - 0x001AF337 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF320(void)
{

loc_001AF320: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(esp + 8);
    eax = MEM32(edx);
    edx = MEM32(eax + 4);
    ecx = MEM32(ecx + 4);
    ecx = ecx - edx;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001AF340
 * Original: 0x001AF340 - 0x001AF34C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF340(void)
{

loc_001AF340: ;
    eax = MEM32(ecx + 0x17C);
    eax = eax | 0x20000;
    esp += 4; return; /* ret */

}

/**
 * sub_001AF350
 * Original: 0x001AF350 - 0x001AF38A (58 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF350(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF350: ;
    eax = MEM32(esp + 4);
    ecx = eax + -3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1B (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001AF387; /* ja: above (unsigned >) */

loc_001AF35C: ;
    ecx = ZX8(MEM8(ecx + 0x1AF3A0));
    { uint32_t _jt = MEM32(ecx * 4 + 0x1AF38C); /* switch: 5 entries, 5 targets */
    if (_jt == 0x001AF36Au) goto loc_001AF36A;
    if (_jt == 0x001AF372u) goto loc_001AF372;
    if (_jt == 0x001AF37Au) goto loc_001AF37A;
    if (_jt == 0x001AF382u) goto loc_001AF382;
    if (_jt == 0x001AF387u) goto loc_001AF387;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001AF36A: ;
    eax = 6;
    esp += 8; return; /* ret 4 */

loc_001AF372: ;
    eax = 2;
    esp += 8; return; /* ret 4 */

loc_001AF37A: ;
    eax = 0x10;
    esp += 8; return; /* ret 4 */

loc_001AF382: ;
    eax = 0x12;

loc_001AF387: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AF38A
 * Original: 0x001AF38A - 0x001AF3C0 (54 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF38A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF38A: ;
    edi = edi;
    if (_cf /* jb: below (unsigned <) */) { g_seh_ebp = ebp; sub_001AF381(); return; }

loc_001AF38E: ;
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(MEM8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    PUSH32(esp, 0xFFFFFFF3u);
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(MEM8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    if (_flags /* jp: parity */) { g_seh_ebp = ebp; sub_001AF389(); return; }

loc_001AF396: ;
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(MEM8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ebx, LO8(ebx) ^ 0x1A);
    _cf = (int)((((uint64_t)(MEM8(edi + 0x1AF3)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edi + 0x1AF3) = MEM8(edi + 0x1AF3) + LO8(eax);
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(4)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 4);
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(1)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 1);
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(4)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 4);
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(4)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 4);
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(4)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 4);
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(4)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 4);
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(4)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 4);
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(4)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 4);
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(4)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 4);
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(4)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 4);
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(4)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 4);
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(4)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 4);
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(MEM8(ebx + eax))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + MEM8(ebx + eax));
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_001AF3C0
 * Original: 0x001AF3C0 - 0x001AF3FA (58 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF3C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF3C0: ;
    eax = MEM32(esp + 4);
    ecx = eax + -2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001AF3F7; /* ja: above (unsigned >) */

loc_001AF3CC: ;
    ecx = ZX8(MEM8(ecx + 0x1AF410));
    { uint32_t _jt = MEM32(ecx * 4 + 0x1AF3FC); /* switch: 5 entries, 5 targets */
    if (_jt == 0x001AF3DAu) goto loc_001AF3DA;
    if (_jt == 0x001AF3E2u) goto loc_001AF3E2;
    if (_jt == 0x001AF3EAu) goto loc_001AF3EA;
    if (_jt == 0x001AF3F2u) goto loc_001AF3F2;
    if (_jt == 0x001AF3F7u) goto loc_001AF3F7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001AF3DA: ;
    eax = 7;
    esp += 8; return; /* ret 4 */

loc_001AF3E2: ;
    eax = 3;
    esp += 8; return; /* ret 4 */

loc_001AF3EA: ;
    eax = 0x1C;
    esp += 8; return; /* ret 4 */

loc_001AF3F2: ;
    eax = 0x1E;

loc_001AF3F7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AF3FA
 * Original: 0x001AF3FA - 0x001AF430 (54 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF3FA(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF3FA: ;
    edi = edi;
    if (_flags /* loop: loop */) { g_seh_ebp = ebp; sub_001AF3F1(); return; }

loc_001AF3FE: ;
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(MEM8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */

    g_seh_ebp = ebp; sub_001AF430(); return; /* fallthrough 0x001AF430 */

}

/**
 * sub_001AF430
 * Original: 0x001AF430 - 0x001AF497 (103 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF430(void)
{

loc_001AF430: ;
    eax = MEM32(ecx + 0x154);
    MEM32(eax + 0x10) = 0x11;
    eax = MEM32(ecx + 0x154);
    edx = 1;
    MEM32(eax + 0xC) = edx;
    eax = MEM32(ecx + 0x154);
    MEM32(eax + 8) = 6;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x154);
    eax = 0; /* xor self */
    MEM32(esi + 0x2C) = eax;
    esi = MEM32(ecx + 0x154);
    MEM32(esi + 0x28) = eax;
    esi = MEM32(ecx + 0x154);
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(ecx + 0x154);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(ecx + 0x154);
    MEM32(eax + 0x24) = 0x2A;
    ecx = MEM32(ecx + 0x154);
    MEM32(ecx + 0x20) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001AF4A0
 * Original: 0x001AF4A0 - 0x001AF4A7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF4A0(void)
{

loc_001AF4A0: ;
    eax = MEM32(ecx + 0x170);
    esp += 4; return; /* ret */

}

/**
 * sub_001AF4B0
 * Original: 0x001AF4B0 - 0x001AF4CF (31 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AF4B0: ;
    eax = MEM32(ecx + 0x144);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    eax = MEM32(esp + 4);
    if (TEST_Z(_fa, _fb)) goto loc_001AF4C6; /* je: equal / zero */

loc_001AF4BE: ;
    _fa = (uint32_t)(MEM32(ecx + 0x174)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x174), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AF4CC; /* jne: not equal / not zero */

loc_001AF4C6: ;
    MEM32(ecx + 0x174) = eax;

loc_001AF4CC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AF4D0
 * Original: 0x001AF4D0 - 0x001AF4D7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF4D0(void)
{

loc_001AF4D0: ;
    eax = MEM32(ecx + 0x174);
    esp += 4; return; /* ret */

}

/**
 * sub_001AF4E0
 * Original: 0x001AF4E0 - 0x001AF4E6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF4E0(void)
{

loc_001AF4E0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001AF4F0
 * Original: 0x001AF4F0 - 0x001AF4FD (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF4F0(void)
{

loc_001AF4F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x14C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AF500
 * Original: 0x001AF500 - 0x001AF507 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF500(void)
{

loc_001AF500: ;
    eax = MEM32(ecx + 0x14C);
    esp += 4; return; /* ret */

}

/**
 * sub_001AF510
 * Original: 0x001AF510 - 0x001AF591 (129 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF510(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF510: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x5BC508);
    eax = MEM32(eax + 0x38);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E772C);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = 0;
    esi = 0x80000000u;
    PUSH32(esp, 0x001AF53Du); RECOMP_ABI_CALL(0x001A5950u, sub_001A5950); /* call 0x001A5950 */

loc_001AF53D: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x24);
    esp = esp + 0x18;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001AF555; /* ja: above (unsigned >) */

loc_001AF54E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1AF594); /* switch: 4 entries, 4 targets */
    if (_jt == 0x001AF55Au) goto loc_001AF55A;
    if (_jt == 0x001AF566u) goto loc_001AF566;
    if (_jt == 0x001AF572u) goto loc_001AF572;
    if (_jt == 0x001AF580u) goto loc_001AF580;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001AF555: ;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 0x14), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AF58C; /* jne: not equal / not zero */

loc_001AF55A: ;
    SET_LO8(edx, MEM8(ecx + 0x14));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AF58E; /* jne: not equal / not zero */

loc_001AF566: ;
    SET_LO8(edx, MEM8(ecx + 0x14));
    eax = 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AF58E; /* jne: not equal / not zero */

loc_001AF572: ;
    _fa = (uint32_t)(MEM8(ecx + 0x14)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x14), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AF580; /* je: equal / zero */

loc_001AF578: ;
    eax = 4;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001AF580: ;
    SET_LO8(edx, MEM8(ecx + 0x14));
    eax = 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001AF58E; /* jne: not equal / not zero */

loc_001AF58C: ;
    eax = esi;

loc_001AF58E: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001AF5B0
 * Original: 0x001AF5B0 - 0x001AF5F5 (69 bytes, 22 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AF5B0: ;
    esp = esp - 0x14;
    eax = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x140);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AF5F0; /* je: equal / zero */

loc_001AF5D5: ;
    edx = MEM32(esi + 0x14C);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001AF5E6u); RECOMP_ABI_CALL(0x00367F30u, sub_00367F30); /* call 0x00367F30 */

loc_001AF5E6: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x18C) = eax;

loc_001AF5F0: ;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001AF600
 * Original: 0x001AF600 - 0x001AF645 (69 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AF600: ;
    esp = esp - 0x300;
    PUSH32(esp, esi);
    MEM32(ecx + 0x540) = 0xBF800000u;
    ecx = MEM32(esp + 0x308);
    eax = esp + 4;
    esi = 0x300;

loc_001AF621: ;
    SET_LO8(edx, MEM8(ecx + 1));
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 2;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001AF621; /* jne: not equal / not zero */

loc_001AF62D: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001AF639u); RECOMP_ABI_CALL(0x0035ADD0u, sub_0035ADD0); /* call 0x0035ADD0 */

loc_001AF639: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x300;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AF650
 * Original: 0x001AF650 - 0x001AF68C (60 bytes, 19 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AF650: ;
    esp = esp - 0x300;
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AF661u); RECOMP_ABI_CALL(0x0035AE60u, sub_0035AE60); /* call 0x0035AE60 */

loc_001AF661: ;
    ecx = MEM32(esp + 0x308);
    eax = esp + 4;
    esi = 0x300;

loc_001AF671: ;
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(eax));
    ecx = ecx + 2;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(ecx + -2) = LO16(edx);
    if ((_fa != 0)) goto loc_001AF671; /* jne: not equal / not zero */

loc_001AF680: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x300;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AF690
 * Original: 0x001AF690 - 0x001AF74B (187 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF690(void)
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

loc_001AF690: ;
    esp = esp - 0x608;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    eax = MEM32(esp + 0x60C);
    fp_top() = fp_top() / MEMF(esp + 0x60C); /* fdiv dword ptr [esp + 0x60c] */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(ebx + 0x540) = eax;
    esi = esp + 0x14;
    MEM32(esp + 0xC) = 1;
    edi = 0x100;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    /* nop */

loc_001AF6D0: ;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = fp_top() * MEMF(0x3E7744); /* fmul dword ptr [0x3e7744] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, 0x001AF6E3u); RECOMP_ABI_CALL(0x00341990u, sub_00341990); /* call 0x00341990 */

loc_001AF6E3: ;
    fp_top() = fp_top() * MEMF(0x3CCC88); /* fmul dword ptr [0x3ccc88] */
    fp_top() = fp_top() + MEMD(0x3DA0A0); /* fadd qword ptr [0x3da0a0] */
    PUSH32(esp, 0x001AF6F4u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001AF6F4: ;
    eax = ZX16(LO16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001AF703; /* jle: less or equal (signed <=) */

loc_001AF6FE: ;
    eax = 0xFFFF;

loc_001AF703: ;
    ecx = MEM32(esp + 0xC);
    MEM16(esi + 0x400) = LO16(eax);
    MEM16(esi + 0x200) = LO16(eax);
    MEM16(esi) = LO16(eax);
    esi = esi + 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = ecx;
    if ((_fa != 0)) goto loc_001AF6D0; /* jne: not equal / not zero */

loc_001AF723: ;
    edx = MEM32(ebx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x4B8); PUSH32(esp, 0x001AF732u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AF732: ;
    ecx = MEM32(esp + 0x618);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x540) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x608;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AF750
 * Original: 0x001AF750 - 0x001AF772 (34 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AF750: ;
    _fa = (uint32_t)(MEM32(ecx + 0x540)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBF800000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x540), 0xBF800000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001AF761; /* jne: not equal / not zero */

loc_001AF75C: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

loc_001AF761: ;
    eax = MEM32(ecx + 0x540);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AF780
 * Original: 0x001AF780 - 0x001AF7F7 (119 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF780(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF780: ;
    ecx = MEM32(esp + 4);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001AF7F4; /* ja: above (unsigned >) */

loc_001AF78C: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x1AF7F8); /* switch: 10 entries, 10 targets */
    if (_jt == 0x001AF793u) goto loc_001AF793;
    if (_jt == 0x001AF79Du) goto loc_001AF79D;
    if (_jt == 0x001AF7A7u) goto loc_001AF7A7;
    if (_jt == 0x001AF7B1u) goto loc_001AF7B1;
    if (_jt == 0x001AF7BBu) goto loc_001AF7BB;
    if (_jt == 0x001AF7C5u) goto loc_001AF7C5;
    if (_jt == 0x001AF7CFu) goto loc_001AF7CF;
    if (_jt == 0x001AF7D9u) goto loc_001AF7D9;
    if (_jt == 0x001AF7E3u) goto loc_001AF7E3;
    if (_jt == 0x001AF7EDu) goto loc_001AF7ED;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001AF793: ;
    eax = ZX8(MEM8(0x5BB490));
    esp += 8; return; /* ret 4 */

loc_001AF79D: ;
    eax = ZX8(MEM8(0x5BB3E0));
    esp += 8; return; /* ret 4 */

loc_001AF7A7: ;
    eax = ZX8(MEM8(0x5BB3F0));
    esp += 8; return; /* ret 4 */

loc_001AF7B1: ;
    eax = ZX8(MEM8(0x5BB3A8));
    esp += 8; return; /* ret 4 */

loc_001AF7BB: ;
    eax = ZX8(MEM8(0x5BB3F3));
    esp += 8; return; /* ret 4 */

loc_001AF7C5: ;
    eax = ZX8(MEM8(0x5BB3E2));
    esp += 8; return; /* ret 4 */

loc_001AF7CF: ;
    eax = ZX8(MEM8(0x5BB3F1));
    esp += 8; return; /* ret 4 */

loc_001AF7D9: ;
    eax = ZX8(MEM8(0x5BB3F2));
    esp += 8; return; /* ret 4 */

loc_001AF7E3: ;
    eax = ZX8(MEM8(0x5BB3F4));
    esp += 8; return; /* ret 4 */

loc_001AF7ED: ;
    eax = ZX8(MEM8(0x5BB3E1));

loc_001AF7F4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AF820
 * Original: 0x001AF820 - 0x001AF8B2 (146 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF820(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF820: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001AF8AF; /* ja: above (unsigned >) */

loc_001AF82D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1AF8B4); /* switch: 10 entries, 10 targets */
    if (_jt == 0x001AF834u) goto loc_001AF834;
    if (_jt == 0x001AF840u) goto loc_001AF840;
    if (_jt == 0x001AF84Du) goto loc_001AF84D;
    if (_jt == 0x001AF85Au) goto loc_001AF85A;
    if (_jt == 0x001AF866u) goto loc_001AF866;
    if (_jt == 0x001AF873u) goto loc_001AF873;
    if (_jt == 0x001AF880u) goto loc_001AF880;
    if (_jt == 0x001AF88Cu) goto loc_001AF88C;
    if (_jt == 0x001AF899u) goto loc_001AF899;
    if (_jt == 0x001AF8A6u) goto loc_001AF8A6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001AF834: ;
    SET_LO8(eax, MEM8(esp + 8));
    MEM8(0x5BB490) = LO8(eax);
    esp += 12; return; /* ret 8 */

loc_001AF840: ;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(0x5BB3E0) = LO8(ecx);
    esp += 12; return; /* ret 8 */

loc_001AF84D: ;
    SET_LO8(edx, MEM8(esp + 8));
    MEM8(0x5BB3F0) = LO8(edx);
    esp += 12; return; /* ret 8 */

loc_001AF85A: ;
    SET_LO8(eax, MEM8(esp + 8));
    MEM8(0x5BB3A8) = LO8(eax);
    esp += 12; return; /* ret 8 */

loc_001AF866: ;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(0x5BB3F3) = LO8(ecx);
    esp += 12; return; /* ret 8 */

loc_001AF873: ;
    SET_LO8(edx, MEM8(esp + 8));
    MEM8(0x5BB3E2) = LO8(edx);
    esp += 12; return; /* ret 8 */

loc_001AF880: ;
    SET_LO8(eax, MEM8(esp + 8));
    MEM8(0x5BB3F1) = LO8(eax);
    esp += 12; return; /* ret 8 */

loc_001AF88C: ;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(0x5BB3F2) = LO8(ecx);
    esp += 12; return; /* ret 8 */

loc_001AF899: ;
    SET_LO8(edx, MEM8(esp + 8));
    MEM8(0x5BB3F4) = LO8(edx);
    esp += 12; return; /* ret 8 */

loc_001AF8A6: ;
    SET_LO8(eax, MEM8(esp + 8));
    MEM8(0x5BB3E1) = LO8(eax);

loc_001AF8AF: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AF8B2
 * Original: 0x001AF8B2 - 0x001AF8E0 (46 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF8B2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF8B2: ;
    edi = edi;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0xF8);
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(MEM8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* clc */
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(MEM8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* clc */
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(MEM8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    /* TODO: cmpsb byte ptr [esi], byte ptr es:[edi] */
    _cf = 0; /* clc */
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(MEM8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    POP32(esp, edx);
    _cf = 0; /* clc */

loc_001AF8C6: ;
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(MEM8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    _cf = 0; /* clc */
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(MEM8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    if (!_cf) goto loc_001AF8C6; /* jae: above or equal (unsigned >=) */

loc_001AF8CE: ;
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(MEM8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x1A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x1A (8-bit) */
    _cf = (int)(_fa < _fb);
    _cf = (int)((((uint64_t)(MEM8(eax + edi * 8 + -124190694)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax + edi * 8 + -124190694) = MEM8(eax + edi * 8 + -124190694) + LO8(ecx);
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(MEM8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_001AF8E0
 * Original: 0x001AF8E0 - 0x001AF905 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF8E0(void)
{

loc_001AF8E0: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0x38));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0xC));
    edx = MEM32(eax + 8);
    eax = ZX8(MEM8(eax + 0x3C));
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x50);
    edx = MEM32(esp + 0xC);
    ecx = ecx + esi;
    ecx = ecx + eax;
    eax = ecx + edx * 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001AF910
 * Original: 0x001AF910 - 0x001AF934 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF910(void)
{

loc_001AF910: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0x38));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0xC));
    edx = MEM32(eax + 8);
    eax = ZX8(MEM8(eax + 0x3D));
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x50);
    edx = MEM32(esp + 0xC);
    ecx = ecx + esi;
    ecx = ecx + edx;
    eax = eax + ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001AF940
 * Original: 0x001AF940 - 0x001AF965 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF940(void)
{

loc_001AF940: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0x38));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0xC));
    edx = MEM32(eax + 8);
    eax = ZX8(MEM8(eax + 0x3E));
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x50);
    edx = MEM32(esp + 0xC);
    ecx = ecx + esi;
    ecx = ecx + eax;
    eax = ecx + edx * 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001AF970
 * Original: 0x001AF970 - 0x001AF9C4 (84 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AF970: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x17C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x184)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x184) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AF98E; /* je: equal / zero */

loc_001AF981: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x001AF98Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AF98E: ;
    ecx = MEM32(esi + 0x1BC);
    edx = MEM32(esi + 0x1B8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1B4);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x1B0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1AC);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x1A8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2E8); PUSH32(esp, 0x001AF9C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AF9C2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001AF9D0
 * Original: 0x001AF9D0 - 0x001AFA03 (51 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF9D0(void)
{

loc_001AF9D0: ;
    eax = MEM32(ecx + 0x1A8);
    edx = MEM32(esp + 4);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 0x1AC);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 0x1B0);
    edx = MEM32(esp + 0xC);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 0x1B4);
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001AFA10
 * Original: 0x001AFA10 - 0x001AFA5B (75 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFA10(void)
{

loc_001AFA10: ;
    eax = MEM32(ecx + 0x1A8);
    edx = MEM32(esp + 4);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 0x1AC);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 0x1B0);
    edx = MEM32(esp + 0xC);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 0x1B4);
    edx = MEM32(esp + 0x10);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 0x1B8);
    edx = MEM32(esp + 0x14);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 0x1BC);
    ecx = MEM32(esp + 0x18);
    MEM32(ecx) = eax;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001AFA60
 * Original: 0x001AFA60 - 0x001AFA8A (42 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFA60(void)
{

loc_001AFA60: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x190) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x194) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x198) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x19C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AFA90
 * Original: 0x001AFA90 - 0x001AFAA5 (21 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFA90(void)
{

loc_001AFA90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = ecx + 0x190;
    PUSH32(esp, 0x001AFAA2u); RECOMP_ABI_CALL(0x0023FFC0u, sub_0023FFC0); /* call 0x0023FFC0 */

loc_001AFAA2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AFAB0
 * Original: 0x001AFAB0 - 0x001AFADA (42 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFAB0(void)
{

loc_001AFAB0: ;
    edx = MEM32(ecx + 0x190);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x194);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x198);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0x19C);
    MEM32(eax + 0xC) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AFAE0
 * Original: 0x001AFAE0 - 0x001AFAEE (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFAE0(void)
{

loc_001AFAE0: ;
    PUSH32(esp, 1);
    ecx = ecx + 0x190;
    PUSH32(esp, 0x001AFAEDu); RECOMP_ABI_CALL(0x00243650u, sub_00243650); /* call 0x00243650 */

loc_001AFAED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001AFAF0
 * Original: 0x001AFAF0 - 0x001AFAFD (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFAF0(void)
{

loc_001AFAF0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x1A0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AFB00
 * Original: 0x001AFB00 - 0x001AFB07 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFB00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AFB00: ;
    fp_push(MEMF(ecx + 0x1A0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AFB10
 * Original: 0x001AFB10 - 0x001AFB1D (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFB10(void)
{

loc_001AFB10: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x1A4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AFB20
 * Original: 0x001AFB20 - 0x001AFB27 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFB20(void)
{

loc_001AFB20: ;
    eax = MEM32(ecx + 0x1A4);
    esp += 4; return; /* ret */

}

/**
 * sub_001AFB30
 * Original: 0x001AFB30 - 0x001AFB73 (67 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AFB30: ;
    eax = MEM32(esp + 8);
    SET_LO8(edx, MEM8(eax));
    _fa = (uint32_t)(MEM8(ecx + 0x180)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x180), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001AFB64; /* je: equal / zero */

loc_001AFB3E: ;
    MEM8(ecx + 0x180) = LO8(edx);
    edx = MEM32(eax + 0x14);
    edx = edx >> 3;
    SET_LO8(edx, LO8(edx) & 1);
    MEM8(ecx + 0x181) = LO8(edx);
    eax = MEM32(eax + 0x14);
    eax = eax & 7;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ecx + 0x182) = LO8(edx);

loc_001AFB64: ;
    ecx = MEM32(0x5BC5D8);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001AFB80
 * Original: 0x001AFB80 - 0x001AFB9A (26 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFB80(void)
{

loc_001AFB80: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    MEM8(eax + 1) = LO8(edx);
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = edx;
    SET_LO8(ecx, MEM8(ecx + 0x180));
    MEM8(eax) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AFBA0
 * Original: 0x001AFBA0 - 0x001AFBAD (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFBA0(void)
{

loc_001AFBA0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001AFBAAu); RECOMP_ABI_CALL(0x0034D390u, sub_0034D390); /* call 0x0034D390 */

loc_001AFBAA: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001AFBB0
 * Original: 0x001AFBB0 - 0x001AFBB5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 6 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001AFBB0(void)
{

loc_001AFBB0: ;
    eax = 0; /* xor self */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001AFBC0
 * Original: 0x001AFBC0 - 0x001AFBE8 (40 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFBC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AFBC0: ;
    edx = MEM32(esp + 4);
    eax = edx;
    eax = eax - 0;
    if ((eax == 0)) goto loc_001AFBCE; /* je: equal / zero */

loc_001AFBCB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001AFBE5; /* jne: not equal / not zero */

loc_001AFBCE: ;
    eax = MEM32(ecx + 0x160);
    eax = eax | 0x4000;
    MEM32(ecx + 0x520) = edx;
    MEM32(ecx + 0x160) = eax;

loc_001AFBE5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AFBF0
 * Original: 0x001AFBF0 - 0x001AFBF7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFBF0(void)
{

loc_001AFBF0: ;
    eax = MEM32(ecx + 0x520);
    esp += 4; return; /* ret */

}

/**
 * sub_001AFC00
 * Original: 0x001AFC00 - 0x001AFC28 (40 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFC00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AFC00: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AFC18; /* je: equal / zero */

loc_001AFC08: ;
    eax = MEM32(ecx);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x240)); return; /* indirect tail jmp */

loc_001AFC18: ;
    edx = MEM32(ecx);
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x240)); return; /* indirect tail jmp */

}

/**
 * sub_001AFC30
 * Original: 0x001AFC30 - 0x001AFC3F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AFC30: ;
    edx = MEM32(ecx + 0x520);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_001AFC40
 * Original: 0x001AFC40 - 0x001AFC57 (23 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFC40(void)
{

loc_001AFC40: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x508) = eax;
    MEM32(ecx + 0x160) = MEM32(ecx + 0x160) | 0x4000;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AFC60
 * Original: 0x001AFC60 - 0x001AFC67 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFC60(void)
{

loc_001AFC60: ;
    eax = MEM32(ecx + 0x508);
    esp += 4; return; /* ret */

}

/**
 * sub_001AFC70
 * Original: 0x001AFC70 - 0x001AFCDD (109 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFC70(void)
{

loc_001AFC70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x4CD));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3C8); PUSH32(esp, 0x001AFC86u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AFC86: ;
    eax = MEM32(esi + 0x4D4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3D8); PUSH32(esp, 0x001AFC97u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AFC97: ;
    eax = MEM32(esi + 0x4D0);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3D0); PUSH32(esp, 0x001AFCA8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AFCA8: ;
    edx = MEM32(esi);
    eax = esi + 0x4D8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3E0); PUSH32(esp, 0x001AFCB9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AFCB9: ;
    eax = MEM32(esi + 0x4E8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3E8); PUSH32(esp, 0x001AFCCAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AFCCA: ;
    eax = MEM32(esi + 0x4EC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3F0); PUSH32(esp, 0x001AFCDBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001AFCDB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001AFCE0
 * Original: 0x001AFCE0 - 0x001AFD33 (83 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFCE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AFCE0: ;
    SET_LO8(eax, MEM8(0x5BB3A8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001AFCED; /* je: equal / zero */

loc_001AFCE9: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_001AFCF1;

loc_001AFCED: ;
    SET_LO8(eax, MEM8(esp + 4));

loc_001AFCF1: ;
    MEM8(ecx + 0x4CD) = LO8(eax);
    eax = ZX8(LO8(eax));
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x2D4);
    edx = eax;
    edx = edx << 0x18;
    edx = edx ^ esi;
    edx = edx & 0x1000000;
    esi = esi ^ edx;
    MEM32(ecx + 0x2D4) = esi;
    MEM32(ecx + 0x160) = MEM32(ecx + 0x160) | 0x800;
    MEM32(0x36C658) = MEM32(0x36C658) | 0x2000;
    MEM32(0x36C9D0) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AFD40
 * Original: 0x001AFD40 - 0x001AFD47 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFD40(void)
{

loc_001AFD40: ;
    SET_LO8(eax, MEM8(ecx + 0x4CD));
    esp += 4; return; /* ret */

}

/**
 * sub_001AFD50
 * Original: 0x001AFD50 - 0x001AFD76 (38 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFD50(void)
{

loc_001AFD50: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x4D0) = eax;
    eax = MEM32(0x36C658);
    ecx = MEM32(esp + 4);
    eax = eax | 0x2000;
    MEM32(0x36C658) = eax;
    MEM32(0x36C9E0) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AFD80
 * Original: 0x001AFD80 - 0x001AFD87 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFD80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AFD80: ;
    fp_push(MEMF(ecx + 0x4D0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AFD90
 * Original: 0x001AFD90 - 0x001AFDE2 (82 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFD90(void)
{

loc_001AFD90: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x4D4) = eax;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x2D4);
    edx = eax;
    edx = edx << 0x19;
    edx = edx ^ esi;
    edx = edx & 0x6000000;
    esi = esi ^ edx;
    MEM32(ecx + 0x2D4) = esi;
    MEM32(ecx + 0x160) = MEM32(ecx + 0x160) | 0x800;
    ecx = MEM32(0x36C658);
    eax = MEM32(eax * 4 + 0x3E3C3C);
    ecx = ecx | 0x2000;
    MEM32(0x36C658) = ecx;
    MEM32(0x36C9D4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AFDF0
 * Original: 0x001AFDF0 - 0x001AFDF7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFDF0(void)
{

loc_001AFDF0: ;
    eax = MEM32(ecx + 0x4D4);
    esp += 4; return; /* ret */

}

/**
 * sub_001AFE00
 * Original: 0x001AFE00 - 0x001AFE7C (124 bytes, 35 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFE00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AFE00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    MEM32(ecx + 0x4D8) = eax;
    edx = MEM32(esi + 4);
    MEM32(ecx + 0x4DC) = edx;
    eax = MEM32(esi + 8);
    MEM32(ecx + 0x4E0) = eax;
    edx = MEM32(esi + 0xC);
    MEM32(ecx + 0x4E4) = edx;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8360); /* fmul dword ptr [0x3c8360] */
    PUSH32(esp, edi);
    PUSH32(esp, 0x001AFE37u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001AFE37: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8360); /* fmul dword ptr [0x3c8360] */
    edi = eax;
    edi = edi << 8;
    PUSH32(esp, 0x001AFE49u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001AFE49: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8360); /* fmul dword ptr [0x3c8360] */
    edi = edi | eax;
    edi = edi << 8;
    PUSH32(esp, 0x001AFE5Cu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001AFE5C: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8360); /* fmul dword ptr [0x3c8360] */
    edi = edi | eax;
    edi = edi << 8;
    PUSH32(esp, 0x001AFE6Fu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001AFE6F: ;
    edi = edi | eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001AFE77u); RECOMP_ABI_CALL(0x0035DC80u, sub_0035DC80); /* call 0x0035DC80 */

loc_001AFE77: ;
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
 * sub_001AFE80
 * Original: 0x001AFE80 - 0x001AFEAA (42 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFE80(void)
{

loc_001AFE80: ;
    edx = MEM32(ecx + 0x4D8);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x4DC);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x4E0);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0x4E4);
    MEM32(eax + 0xC) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AFEB0
 * Original: 0x001AFEB0 - 0x001AFED6 (38 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFEB0(void)
{

loc_001AFEB0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x4E8) = eax;
    eax = MEM32(0x36C658);
    ecx = MEM32(esp + 4);
    eax = eax | 0x2000;
    MEM32(0x36C658) = eax;
    MEM32(0x36C9D8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AFEE0
 * Original: 0x001AFEE0 - 0x001AFEE7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFEE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AFEE0: ;
    fp_push(MEMF(ecx + 0x4E8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AFEF0
 * Original: 0x001AFEF0 - 0x001AFF16 (38 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFEF0(void)
{

loc_001AFEF0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x4EC) = eax;
    eax = MEM32(0x36C658);
    ecx = MEM32(esp + 4);
    eax = eax | 0x2000;
    MEM32(0x36C658) = eax;
    MEM32(0x36C9DC) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AFF20
 * Original: 0x001AFF20 - 0x001AFF27 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFF20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001AFF20: ;
    fp_push(MEMF(ecx + 0x4EC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001AFF30
 * Original: 0x001AFF30 - 0x001AFF36 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFF30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AFF30: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x5BC960)); return; /* indirect tail jmp */

}

/**
 * sub_001AFF40
 * Original: 0x001AFF40 - 0x001AFF46 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFF40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AFF40: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x5BC964)); return; /* indirect tail jmp */

}

/**
 * sub_001AFF50
 * Original: 0x001AFF50 - 0x001B0118 (456 bytes, 143 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001AFF50: ;
    esp = esp - 0x10;
    eax = MEM32(0x5BC508);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edi = ecx;
    ecx = esp + 0x13;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E7824);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    MEM8(esp + 0x23) = 1;
    MEM8(esp + 0x24) = 0;
    MEM8(esp + 0x28) = 0;
    MEM8(esp + 0x2C) = 0;
    PUSH32(esp, 0x001AFF89u); RECOMP_ABI_CALL(0x001A59B0u, sub_001A59B0); /* call 0x001A59B0 */

loc_001AFF89: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(0x5BB3D8));
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5BB3D8);
    PUSH32(esp, 0x3E7810);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AFFA6u); RECOMP_ABI_CALL(0x001A59B0u, sub_001A59B0); /* call 0x001A59B0 */

loc_001AFFA6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x462154);
    PUSH32(esp, 0x3E77F4);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AFFBCu); RECOMP_ABI_CALL(0x001A59B0u, sub_001A59B0); /* call 0x001A59B0 */

loc_001AFFBC: ;
    eax = MEM32(esp + 0x54);
    esp = esp + 0x48;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E77D8);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AFFD8u); RECOMP_ABI_CALL(0x001A59B0u, sub_001A59B0); /* call 0x001A59B0 */

loc_001AFFD8: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(0x5BB3D9));
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5BB3D9);
    PUSH32(esp, 0x3E77C4);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001AFFF5u); RECOMP_ABI_CALL(0x001A59B0u, sub_001A59B0); /* call 0x001A59B0 */

loc_001AFFF5: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(0x462156));
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x462156);
    PUSH32(esp, 0x3E77A0);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B0011u); RECOMP_ABI_CALL(0x001A59B0u, sub_001A59B0); /* call 0x001A59B0 */

loc_001B0011: ;
    esp = esp + 0x48;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x462155);
    PUSH32(esp, 0x3E7784);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B002Au); RECOMP_ABI_CALL(0x001A59B0u, sub_001A59B0); /* call 0x001A59B0 */

loc_001B002A: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3E7768);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B0043u); RECOMP_ABI_CALL(0x001A59B0u, sub_001A59B0); /* call 0x001A59B0 */

loc_001B0043: ;
    eax = MEM32(esp + 0x44);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E7748);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B005Cu); RECOMP_ABI_CALL(0x001A59B0u, sub_001A59B0); /* call 0x001A59B0 */

loc_001B005C: ;
    SET_LO8(eax, MEM8(esp + 0x53));
    esp = esp + 0x48;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B006E; /* je: equal / zero */

loc_001B0067: ;
    MEM8(0x5BB3D8) = 1;

loc_001B006E: ;
    SET_LO8(eax, MEM8(0x462154));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B0085; /* je: equal / zero */

loc_001B0077: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x001B0083u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B0083: ;
    goto loc_001B00AD;

loc_001B0085: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B0096; /* je: equal / zero */

loc_001B008D: ;
    _fa = (uint32_t)(MEM8(edi + 0x158)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x158), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B00AD; /* jne: not equal / not zero */

loc_001B0096: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x001B00A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B00A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B00AD; /* jne: not equal / not zero */

loc_001B00A6: ;
    MEM8(0x462154) = 1;

loc_001B00AD: ;
    SET_LO8(eax, MEM8(0x462155));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B00C4; /* je: equal / zero */

loc_001B00B6: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x001B00C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B00C2: ;
    goto loc_001B00EC;

loc_001B00C4: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B00D5; /* je: equal / zero */

loc_001B00CC: ;
    _fa = (uint32_t)(MEM8(edi + 0x158)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x158), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B00EC; /* jne: not equal / not zero */

loc_001B00D5: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x001B00E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B00E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B00EC; /* jne: not equal / not zero */

loc_001B00E5: ;
    MEM8(0x462155) = 1;

loc_001B00EC: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(0x5BB3DC) = 0x1AFF30;
    if (TEST_NZ(_fa, _fb)) goto loc_001B0108; /* jne: not equal / not zero */

loc_001B00FE: ;
    MEM32(0x5BB3DC) = 0x1AFF40;

loc_001B0108: ;
    MEM32(edi + 0x160) = MEM32(edi + 0x160) | 0x3000;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001B0024
 * Original: 0x001B0024 - 0x001B0118 (244 bytes, 75 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0024(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B0024: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B002Au); RECOMP_ABI_CALL(0x001A59B0u, sub_001A59B0); /* call 0x001A59B0 */

loc_001B002A: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3E7768);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B0043u); RECOMP_ABI_CALL(0x001A59B0u, sub_001A59B0); /* call 0x001A59B0 */

loc_001B0043: ;
    eax = MEM32(esp + 0x44);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E7748);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B005Cu); RECOMP_ABI_CALL(0x001A59B0u, sub_001A59B0); /* call 0x001A59B0 */

loc_001B005C: ;
    SET_LO8(eax, MEM8(esp + 0x53));
    esp = esp + 0x48;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B006E; /* je: equal / zero */

loc_001B0067: ;
    MEM8(0x5BB3D8) = 1;

loc_001B006E: ;
    SET_LO8(eax, MEM8(0x462154));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B0085; /* je: equal / zero */

loc_001B0077: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x001B0083u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B0083: ;
    goto loc_001B00AD;

loc_001B0085: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B0096; /* je: equal / zero */

loc_001B008D: ;
    _fa = (uint32_t)(MEM8(edi + 0x158)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x158), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B00AD; /* jne: not equal / not zero */

loc_001B0096: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x001B00A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B00A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B00AD; /* jne: not equal / not zero */

loc_001B00A6: ;
    MEM8(0x462154) = 1;

loc_001B00AD: ;
    SET_LO8(eax, MEM8(0x462155));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B00C4; /* je: equal / zero */

loc_001B00B6: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x001B00C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B00C2: ;
    goto loc_001B00EC;

loc_001B00C4: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B00D5; /* je: equal / zero */

loc_001B00CC: ;
    _fa = (uint32_t)(MEM8(edi + 0x158)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x158), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B00EC; /* jne: not equal / not zero */

loc_001B00D5: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x001B00E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B00E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B00EC; /* jne: not equal / not zero */

loc_001B00E5: ;
    MEM8(0x462155) = 1;

loc_001B00EC: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(0x5BB3DC) = 0x1AFF30;
    if (TEST_NZ(_fa, _fb)) goto loc_001B0108; /* jne: not equal / not zero */

loc_001B00FE: ;
    MEM32(0x5BB3DC) = 0x1AFF40;

loc_001B0108: ;
    MEM32(edi + 0x160) = MEM32(edi + 0x160) | 0x3000;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001B0120
 * Original: 0x001B0120 - 0x001B01AB (139 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0120(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B0120: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    MEM32(ebp) = 0xFFFFFFFFu;
    MEM32(eax) = 0x7FFFFFFF;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B01A9; /* jle: less or equal (signed <=) */

loc_001B013E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    MEM32(esp + 0x24) = eax;
    /* nop */

loc_001B0150: ;
    edx = MEM32(esi);
    ebx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x001B015Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B015B: ;
    eax = ZX16(LO16(eax));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001B0166; /* jle: less or equal (signed <=) */

loc_001B0162: ;
    eax = ebx;
    goto loc_001B0171;

loc_001B0166: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x001B016Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B016E: ;
    eax = ZX16(LO16(eax));

loc_001B0171: ;
    MEM32(ebp) = eax;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esi);
    ebx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x001B0182u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B0182: ;
    eax = ZX16(LO16(eax));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B0194; /* jl: less (signed <) */

loc_001B0189: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x001B0191u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B0191: ;
    ebx = ZX16(LO16(eax));

loc_001B0194: ;
    eax = MEM32(esp + 0x20);
    MEM32(eax) = ebx;
    eax = MEM32(esp + 0x24);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = eax;
    if ((_fa != 0)) goto loc_001B0150; /* jne: not equal / not zero */

loc_001B01A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001B01A9: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001B01B0
 * Original: 0x001B01B0 - 0x001B01D8 (40 bytes, 17 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B01B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B01B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B01CD; /* je: equal / zero */

loc_001B01BA: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001B01C5u); RECOMP_ABI_CALL(0x0035DF10u, sub_0035DF10); /* call 0x0035DF10 */

loc_001B01C5: ;
    MEM32(esi + 0x14) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001B01CD: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B01E0
 * Original: 0x001B01E0 - 0x001B01E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B01E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B01E0: ;
    g_seh_ebp = ebp; sub_00343DD1(); return; /* tail jmp 0x00343DD1 */

}

/**
 * sub_001B01F0
 * Original: 0x001B01F0 - 0x001B01F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B01F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B01F0: ;
    g_seh_ebp = ebp; sub_00343F34(); return; /* tail jmp 0x00343F34 */

}

/**
 * sub_001B0200
 * Original: 0x001B0200 - 0x001B0205 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0200(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B0200: ;
    g_seh_ebp = ebp; sub_0034400F(); return; /* tail jmp 0x0034400F */

}

/**
 * sub_001B0210
 * Original: 0x001B0210 - 0x001B0215 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0210(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B0210: ;
    g_seh_ebp = ebp; sub_003441BA(); return; /* tail jmp 0x003441BA */

}

/**
 * sub_001B0220
 * Original: 0x001B0220 - 0x001B023C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B0220: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B0236; /* je: equal / zero */

loc_001B0229: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B0236; /* je: equal / zero */

loc_001B022E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B0236; /* je: equal / zero */

loc_001B0233: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_001B0236: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001B0240
 * Original: 0x001B0240 - 0x001B0255 (21 bytes, 7 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0240(void)
{

loc_001B0240: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x3E7838);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B0251u); RECOMP_ABI_CALL(0x00343655u, sub_00343655); /* call 0x00343655 */

loc_001B0251: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001B0260
 * Original: 0x001B0260 - 0x001B0324 (196 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B0260: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001B0268u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_001B0268: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B0322; /* jl: less (signed <) */

loc_001B0274: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001B0322; /* jg: greater (signed >) */

loc_001B027D: ;
    edx = esi + 0x5C;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = edx;
    ecx = 0x1F;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    MEM32(edx) = 0x7C;
    edx = MEM32(esi + 0x2C);
    MEM32(esi + 0x68) = ecx;
    MEM32(esi + 0x64) = eax;
    ecx = ecx >> 2;
    eax = eax >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xD (32-bit) */
    MEM32(esi + 0x60) = 0x81007;
    MEM32(esi + 0x74) = 1;
    MEM32(esi + 0x70) = 0;
    MEM32(esi + 0xA4) = 0x20;
    MEM32(esi + 0xA8) = 4;
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001B030F; /* je: equal / zero */

loc_001B02D6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B030F; /* je: equal / zero */

loc_001B02DB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B02F5; /* jne: not equal / not zero */

loc_001B02E0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax << 4;
    MEM32(esi + 0xAC) = 0x33545844;
    MEM32(esi + 0x6C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001B02F5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B0322; /* jne: not equal / not zero */

loc_001B02FA: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax << 4;
    MEM32(esi + 0xAC) = 0x35545844;
    MEM32(esi + 0x6C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001B030F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax << 3;
    MEM32(esi + 0xAC) = 0x31545844;
    MEM32(esi + 0x6C) = eax;

loc_001B0322: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B0330
 * Original: 0x001B0330 - 0x001B0348 (24 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0330(void)
{

loc_001B0330: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001B0339u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_001B0339: ;
    edi = esi + 0x5C;
    ecx = 0x1F;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B0350
 * Original: 0x001B0350 - 0x001B0442 (242 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0350(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B0350: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x4C);
    PUSH32(esp, esi);
    esi = eax + 3;
    esi = esi & 0xFFFFFFFCu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0xC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001B043C; /* je: equal / zero */

loc_001B036C: ;
    SET_LO8(eax, MEM8(ebx + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B043C; /* jne: not equal / not zero */

loc_001B0377: ;
    PUSH32(esp, 0x001B037Cu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_001B037C: ;
    SET_LO8(ecx, MEM8(0x5BC548));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B0394; /* jne: not equal / not zero */

loc_001B0386: ;
    eax = MEM32(0x46A6D8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B0391u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001B0391: ;
    esp = esp + 4;

loc_001B0394: ;
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(eax);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x001B03ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B03AC: ;
    edi = MEM32(ebx + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    edx = MEM32(ebx + 0x34);
    ebp = eax;
    MEM32(esp + 0x18) = ebp;
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B03EF; /* jbe: below or equal (unsigned <=) */

loc_001B03BC: ;
    ecx = MEM32(ebx + 0x4C);
    MEM32(esp + 0x10) = edi;

loc_001B03C3: ;
    ebp = ecx;
    ecx = ecx >> 2;
    esi = edx;
    edi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = ebp;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    esi = MEM32(esp + 0x14);
    ecx = MEM32(ebx + 0x4C);
    edi = MEM32(esp + 0x10);
    eax = eax + esi;
    edx = edx + ecx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edi;
    if ((_fa != 0)) goto loc_001B03C3; /* jne: not equal / not zero */

loc_001B03EB: ;
    ebp = MEM32(esp + 0x18);

loc_001B03EF: ;
    edx = MEM32(ebx + 0xC);
    eax = MEM32(ebx + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    PUSH32(esp, eax);
    MEM32(ebx + 0x4C) = esi;
    MEM32(ebx + 0x30) = edx;
    PUSH32(esp, 0x001B0404u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_001B0404: ;
    ecx = MEM32(ebx + 0x30);
    edx = MEM32(ebx + 0x4C);
    esp = esp + 4;
    MEM32(esp + 0x14) = ecx;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0xC);
    MEM32(esp + 0x1C) = edx;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 8);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(ebx + 0x34) = ebp;
    PUSH32(esp, 0x001B043Au); RECOMP_ABI_CALL(0x001AC1E0u, sub_001AC1E0); /* call 0x001AC1E0 */

loc_001B043A: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001B043C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001B0450
 * Original: 0x001B0450 - 0x001B0546 (246 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0450(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B0450: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B0541; /* je: equal / zero */

loc_001B0461: ;
    eax = MEM32(ebx + 0x54);
    edx = MEM32(ebx + 0x24);
    ecx = MEM32(ebx + 0x20);
    PUSH32(esp, ebp);
    eax = eax + MEM32(ebx + 0x48);
    ebp = MEM32(ebx + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x28);
    PUSH32(esp, edi);
    eax = eax + MEM32(ebx + 0x40);
    eax = eax + esi;
    eax = eax + edx;
    eax = eax + ecx;
    eax = eax + ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebx + 8));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    ebp = eax;
    eax = MEM32(ebx + 0x4C);
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((3) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B053E; /* je: equal / zero */

loc_001B049B: ;
    SET_LO8(eax, MEM8(ebx + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B053E; /* jne: not equal / not zero */

loc_001B04A6: ;
    ecx = ebx;
    PUSH32(esp, 0x001B04ADu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_001B04AD: ;
    SET_LO8(ecx, MEM8(0x5BC548));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B04C5; /* jne: not equal / not zero */

loc_001B04B7: ;
    eax = MEM32(0x46A6D8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B04C2u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001B04C2: ;
    esp = esp + 4;

loc_001B04C5: ;
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(eax);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x001B04DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B04DB: ;
    ecx = MEM32(ebx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edi = eax;
    eax = MEM32(ebx + 0x34);
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x10) = edi;
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B0523; /* jbe: below or equal (unsigned <=) */

loc_001B04EF: ;
    MEM32(esp + 0x14) = ecx;

loc_001B04F3: ;
    ecx = ebp;
    edx = ecx;
    ecx = ecx >> 2;
    esi = eax;
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
    edi = MEM32(esp + 0x10);
    edx = MEM32(ebx + 0x4C);
    ecx = MEM32(esp + 0x14);
    edi = edi + ebp;
    eax = eax + edx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ecx;
    if ((_fa != 0)) goto loc_001B04F3; /* jne: not equal / not zero */

loc_001B051F: ;
    edi = MEM32(esp + 0x18);

loc_001B0523: ;
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(ebx + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    PUSH32(esp, ecx);
    MEM32(ebx + 0x4C) = ebp;
    MEM32(ebx + 0x30) = eax;
    PUSH32(esp, 0x001B0538u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_001B0538: ;
    esp = esp + 4;
    MEM32(ebx + 0x34) = edi;

loc_001B053E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_001B0541: ;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001B0550
 * Original: 0x001B0550 - 0x001B0578 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B0550: ;
    ecx = MEM32(esp + 8);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001B0561; /* jg: greater (signed >) */

loc_001B055C: ;
    ecx = 1;

loc_001B0561: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = eax * 8 + 8;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B0580
 * Original: 0x001B0580 - 0x001B0663 (227 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0580(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B0580: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), 7 (32-bit) */
    edx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001B065D; /* jne: not equal / not zero */

loc_001B0591: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xD (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B065C; /* jl: less (signed <) */

loc_001B059F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x10 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001B065C; /* jg: greater (signed >) */

loc_001B05A8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = edx + 0x5C;
    eax = 0; /* xor self */
    edi = ebx;
    ecx = 0x1F;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(ebx) = 0x7C;
    MEM32(edx + 0x60) = 0x81007;
    eax = MEM32(esi + 8);
    MEM32(edx + 0x68) = eax;
    ecx = MEM32(esi + 0xC);
    MEM32(edx + 0x64) = ecx;
    MEM32(edx + 0x74) = 1;
    MEM32(edx + 0x70) = 0;
    MEM32(edx + 0xA4) = 0x20;
    MEM32(edx + 0xA8) = 4;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xD (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001B0649; /* je: equal / zero */

loc_001B0606: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B0649; /* je: equal / zero */

loc_001B060B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B062A; /* jne: not equal / not zero */

loc_001B0610: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax << 4;
    POP32(esp, ebp);
    MEM32(edx + 0x6C) = eax;
    MEM32(edx + 0xAC) = 0x33545844;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001B062A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B065C; /* jne: not equal / not zero */

loc_001B062F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax << 4;
    POP32(esp, ebp);
    MEM32(edx + 0x6C) = eax;
    MEM32(edx + 0xAC) = 0x35545844;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001B0649: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax << 3;
    MEM32(edx + 0xAC) = 0x31545844;
    MEM32(edx + 0x6C) = eax;

loc_001B065C: ;
    POP32(esp, ebp);

loc_001B065D: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B0670
 * Original: 0x001B0670 - 0x001B06E8 (120 bytes, 39 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0670(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B0670: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3A (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001B06E4; /* ja: above (unsigned >) */

loc_001B0679: ;
    eax = ZX8(MEM8(eax + 0x1B072C));
    { uint32_t _jt = MEM32(eax * 4 + 0x1B06E8); /* switch: 17 entries, 17 targets */
    if (_jt == 0x001B0687u) goto loc_001B0687;
    if (_jt == 0x001B068Du) goto loc_001B068D;
    if (_jt == 0x001B0693u) goto loc_001B0693;
    if (_jt == 0x001B0699u) goto loc_001B0699;
    if (_jt == 0x001B069Cu) goto loc_001B069C;
    if (_jt == 0x001B06A2u) goto loc_001B06A2;
    if (_jt == 0x001B06A8u) goto loc_001B06A8;
    if (_jt == 0x001B06AEu) goto loc_001B06AE;
    if (_jt == 0x001B06B4u) goto loc_001B06B4;
    if (_jt == 0x001B06BAu) goto loc_001B06BA;
    if (_jt == 0x001B06C0u) goto loc_001B06C0;
    if (_jt == 0x001B06C6u) goto loc_001B06C6;
    if (_jt == 0x001B06CCu) goto loc_001B06CC;
    if (_jt == 0x001B06D2u) goto loc_001B06D2;
    if (_jt == 0x001B06D8u) goto loc_001B06D8;
    if (_jt == 0x001B06DEu) goto loc_001B06DE;
    if (_jt == 0x001B06E4u) goto loc_001B06E4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001B0687: ;
    eax = 7;
    esp += 4; return; /* ret */

loc_001B068D: ;
    eax = 5;
    esp += 4; return; /* ret */

loc_001B0693: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_001B0699: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_001B069C: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_001B06A2: ;
    eax = 0xE;
    esp += 4; return; /* ret */

loc_001B06A8: ;
    eax = 0xF;
    esp += 4; return; /* ret */

loc_001B06AE: ;
    eax = 0x10;
    esp += 4; return; /* ret */

loc_001B06B4: ;
    eax = 8;
    esp += 4; return; /* ret */

loc_001B06BA: ;
    eax = 0xA;
    esp += 4; return; /* ret */

loc_001B06C0: ;
    eax = 9;
    esp += 4; return; /* ret */

loc_001B06C6: ;
    eax = 0x10000;
    esp += 4; return; /* ret */

loc_001B06CC: ;
    eax = 0x1D;
    esp += 4; return; /* ret */

loc_001B06D2: ;
    eax = 0x1E;
    esp += 4; return; /* ret */

loc_001B06D8: ;
    eax = 0x1F;
    esp += 4; return; /* ret */

loc_001B06DE: ;
    eax = 0x20;
    esp += 4; return; /* ret */

loc_001B06E4: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_001B0770
 * Original: 0x001B0770 - 0x001B0832 (194 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B0770: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x800000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B0783; /* je: equal / zero */

loc_001B0780: ;
    edx = MEM32(ecx + 0x14);

loc_001B0783: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_A(_fa & _fb, 0)) goto loc_001B07C7; /* ja: above (unsigned >) */

loc_001B078A: ;
    edx = MEM32(ecx + 0x50);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31545844) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x31545844 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B079B; /* jne: not equal / not zero */

loc_001B0795: ;
    eax = 0xC;
    esp += 4; return; /* ret */

loc_001B079B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32545844) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x32545844 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B07A9; /* jne: not equal / not zero */

loc_001B07A3: ;
    eax = 0xE;
    esp += 4; return; /* ret */

loc_001B07A9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x33545844) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x33545844 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B07A3; /* je: equal / zero */

loc_001B07B1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34545844) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x34545844 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B07BF; /* jne: not equal / not zero */

loc_001B07B9: ;
    eax = 0xF;
    esp += 4; return; /* ret */

loc_001B07BF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x35545844) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x35545844 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B07B9; /* je: equal / zero */

loc_001B07C7: ;
    edx = MEM32(ecx + 0x4C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x41 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B07E4; /* jne: not equal / not zero */

loc_001B07CF: ;
    _fa = (uint32_t)(MEM32(ecx + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x54), 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B07E4; /* jne: not equal / not zero */

loc_001B07D5: ;
    _fa = (uint32_t)(MEM32(ecx + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x64), 0xFF000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B07E4; /* jne: not equal / not zero */

loc_001B07DE: ;
    eax = 6;
    esp += 4; return; /* ret */

loc_001B07E4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B07FE; /* jne: not equal / not zero */

loc_001B07E9: ;
    _fa = (uint32_t)(MEM32(ecx + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x54), 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B07FE; /* jne: not equal / not zero */

loc_001B07EF: ;
    _fa = (uint32_t)(MEM32(ecx + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7E0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x5C), 0x7E0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B07FE; /* jne: not equal / not zero */

loc_001B07F8: ;
    eax = 5;
    esp += 4; return; /* ret */

loc_001B07FE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x41 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B0831; /* jne: not equal / not zero */

loc_001B0803: ;
    _fa = (uint32_t)(MEM32(ecx + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x54), 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B0818; /* jne: not equal / not zero */

loc_001B0809: ;
    _fa = (uint32_t)(MEM32(ecx + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x64), 0x8000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B0818; /* jne: not equal / not zero */

loc_001B0812: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_001B0818: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x41 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B0831; /* jne: not equal / not zero */

loc_001B081D: ;
    _fa = (uint32_t)(MEM32(ecx + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x54), 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B0831; /* jne: not equal / not zero */

loc_001B0823: ;
    _fa = (uint32_t)(MEM32(ecx + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x64), 0xF000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B0831; /* jne: not equal / not zero */

loc_001B082C: ;
    eax = 4;

loc_001B0831: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B0840
 * Original: 0x001B0840 - 0x001B08EE (174 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0840(void)
{

loc_001B0840: ;
    esp = esp - 8;
    ecx = MEM32(esp + 0xC);
    SET_LO16(edx, MEM16(ecx));
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = LO16(edx);
    SET_LO16(edx, MEM16(ecx + 6));
    esi = MEM32(esp + 4);
    esi = esi >> 0x10;
    SET_LO16(eax, LO16(edx));
    SET_LO16(eax, LO16(eax) >> 4);
    SET_LO16(esi, LO16(esi) | LO16(eax));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ecx + 4));
    PUSH32(esp, edi);
    edx = edx & 0xF;
    edx = edx << 4;
    edi = eax;
    edi = edi & 0xFF00;
    edi = edi << 4;
    SET_LO16(esi, LO16(esi) | LO16(edi));
    MEM16(esp + 0xA) = LO16(esi);
    SET_LO16(esi, MEM16(esp + 0xC));
    SET_LO16(edi, LO16(eax));
    SET_LO16(edi, LO16(edi) >> 0xC);
    SET_LO16(esi, LO16(esi) | LO16(edi));
    SET_LO16(esi, LO16(esi) | LO16(edx));
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 2));
    edi = edx;
    edi = edi >> 4;
    edi = edi & 0xF00;
    SET_LO16(esi, LO16(esi) | LO16(edi));
    edi = eax;
    SET_LO8(eax, LO8(eax) >> 4);
    edi = edi << 0xC;
    SET_LO16(esi, LO16(esi) | LO16(edi));
    MEM16(esp + 0xC) = LO16(esi);
    SET_LO16(esi, MEM16(esp + 0xE));
    edx = edx << 4;
    POP32(esp, edi);
    eax = eax & 0xF;
    SET_LO16(esi, LO16(esi) | LO16(eax));
    SET_LO16(esi, LO16(esi) | LO16(edx));
    edx = MEM32(esp + 4);
    MEM16(esp + 0xA) = LO16(esi);
    eax = MEM32(esp + 8);
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = eax;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001B08F0
 * Original: 0x001B08F0 - 0x001B0AFD (525 bytes, 172 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B08F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B08F0: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001B097A; /* je: equal / zero */

loc_001B0902: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B097A; /* je: equal / zero */

loc_001B0907: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B097A; /* je: equal / zero */

loc_001B090C: ;
    eax = MEM32(ebp + 8);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ebp + 0xC);
    MEM8(esp + 0x13) = 0;

loc_001B091B: ;
    ebx = MEM32(ebp + 0x4C);
    esi = MEM32(ebp + 0x34);
    edi = eax + -1;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    ecx = ebp;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = edi;
    ebx = ebx + esi;
    PUSH32(esp, 0x001B0940u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_001B0940: ;
    SET_LO8(ecx, MEM8(0x5BC548));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B0959; /* jne: not equal / not zero */

loc_001B094A: ;
    ecx = MEM32(0x46A6D8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001B0956u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001B0956: ;
    esp = esp + 4;

loc_001B0959: ;
    ecx = MEM32(ebp + 0x4C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x001B096Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B096C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B0AE6; /* jle: less or equal (signed <=) */

loc_001B0978: ;
    goto loc_001B0995;

loc_001B097A: ;
    eax = MEM32(ebp + 8);
    eax = eax >> 2;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ebp + 0xC);
    MEM8(esp + 0x13) = 1;
    eax = eax >> 2;
    goto loc_001B091B;

loc_001B0991: ;
    esi = MEM32(esp + 0x14);

loc_001B0995: ;
    ecx = MEM32(ebp + 0x4C);
    edi = MEM32(esp + 0x18);
    edx = ecx;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    eax = MEM32(esp + 0x14);
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    ecx = MEM32(ebp + 0x4C);
    edx = ecx;
    ecx = ecx >> 2;
    esi = ebx;
    edi = eax;
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
    ecx = MEM32(ebp + 0x4C);
    esi = MEM32(esp + 0x18);
    edx = ecx;
    ecx = ecx >> 2;
    edi = ebx;
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
    SET_LO8(ecx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B0ABD; /* je: equal / zero */

loc_001B09E6: ;
    edi = eax;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = ebx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B0ABD; /* jle: less or equal (signed <=) */

loc_001B09F6: ;
    MEM32(esp + 0x20) = eax;
    /* nop */

loc_001B0A00: ;
    ecx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B0A40; /* je: equal / zero */

loc_001B0A09: ;
    eax = edi;
    edi = edi + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B0A1E; /* je: equal / zero */

loc_001B0A13: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B0A19u); RECOMP_ABI_CALL(0x001B0840u, sub_001B0840); /* call 0x001B0840 */

loc_001B0A19: ;
    esp = esp + 4;
    goto loc_001B0A3C;

loc_001B0A1E: ;
    SET_LO16(ecx, MEM16(eax));
    SET_LO16(edx, MEM16(eax + 6));
    MEM16(eax) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 4));
    MEM16(eax + 6) = LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 2));
    MEM16(eax + 2) = LO16(edx);
    MEM16(eax + 4) = LO16(ecx);

loc_001B0A3C: ;
    ecx = MEM32(esp + 0x30);

loc_001B0A40: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    SET_LO8(eax, MEM8(edi + 4));
    SET_LO8(edx, MEM8(edi + 7));
    MEM8(edi + 4) = LO8(edx);
    SET_LO8(edx, MEM8(edi + 6));
    MEM8(edi + 7) = LO8(eax);
    SET_LO8(eax, MEM8(edi + 5));
    MEM8(edi + 5) = LO8(edx);
    MEM8(edi + 6) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_001B0A90; /* je: equal / zero */

loc_001B0A5D: ;
    eax = esi;
    esi = esi + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B0A72; /* je: equal / zero */

loc_001B0A67: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B0A6Du); RECOMP_ABI_CALL(0x001B0840u, sub_001B0840); /* call 0x001B0840 */

loc_001B0A6D: ;
    esp = esp + 4;
    goto loc_001B0A90;

loc_001B0A72: ;
    SET_LO16(ecx, MEM16(eax));
    SET_LO16(edx, MEM16(eax + 6));
    MEM16(eax) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 4));
    MEM16(eax + 6) = LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 2));
    MEM16(eax + 2) = LO16(edx);
    MEM16(eax + 4) = LO16(ecx);

loc_001B0A90: ;
    SET_LO8(eax, MEM8(esi + 4));
    SET_LO8(ecx, MEM8(esi + 7));
    SET_LO8(edx, MEM8(esi + 6));
    MEM8(esi + 7) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 5));
    MEM8(esi + 6) = LO8(eax);
    eax = MEM32(esp + 0x20);
    MEM8(esi + 4) = LO8(ecx);
    MEM8(esi + 5) = LO8(edx);
    edi = edi + 8;
    esi = esi + 8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = eax;
    if ((_fa != 0)) goto loc_001B0A00; /* jne: not equal / not zero */

loc_001B0ABD: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    eax = MEM32(ebp + 0x4C);
    edi = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi + eax;
    ebx = ebx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x14) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_001B0991; /* jl: less (signed <) */

loc_001B0AE6: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B0AF0u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_001B0AF0: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B0B00
 * Original: 0x001B0B00 - 0x001B0B15 (21 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B0B00: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B0B12; /* je: equal / zero */

loc_001B0B0A: ;
    eax = eax + 3;
    eax = eax & 0xFFFFFFFCu;
    MEM32(ecx) = eax;

loc_001B0B12: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B0B20
 * Original: 0x001B0B20 - 0x001B0BB2 (146 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0B20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B0B20: ;
    edx = MEM32(ecx + 0x2C);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1D (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001B0B6C; /* jg: greater (signed >) */

loc_001B0B2B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001B0B65; /* je: equal / zero */

loc_001B0B2D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001B0BA8; /* ja: above (unsigned >) */

loc_001B0B32: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x1B0BB4); /* switch: 11 entries, 8 targets */
    if (_jt == 0x001B0B39u) goto loc_001B0B39;
    if (_jt == 0x001B0B3Cu) goto loc_001B0B3C;
    if (_jt == 0x001B0B42u) goto loc_001B0B42;
    if (_jt == 0x001B0B49u) goto loc_001B0B49;
    if (_jt == 0x001B0B50u) goto loc_001B0B50;
    if (_jt == 0x001B0B57u) goto loc_001B0B57;
    if (_jt == 0x001B0B5Eu) goto loc_001B0B5E;
    if (_jt == 0x001B0BA8u) goto loc_001B0BA8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001B0B39: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_001B0B3C: ;
    eax = 0x19;
    esp += 4; return; /* ret */

loc_001B0B42: ;
    eax = 0x1A;
    goto loc_001B0BA8;

loc_001B0B49: ;
    eax = 6;
    goto loc_001B0BA8;

loc_001B0B50: ;
    eax = 2;
    goto loc_001B0BA8;

loc_001B0B57: ;
    eax = 4;
    goto loc_001B0BA8;

loc_001B0B5E: ;
    eax = 5;
    goto loc_001B0BA8;

loc_001B0B65: ;
    eax = 0x28;
    goto loc_001B0BA8;

loc_001B0B6C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001B0B90; /* jg: greater (signed >) */

loc_001B0B71: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001B0B89; /* je: equal / zero */

loc_001B0B73: ;
    edx = edx - 0x1E;
    if ((edx == 0)) goto loc_001B0B82; /* je: equal / zero */

loc_001B0B78: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B0BA8; /* jne: not equal / not zero */

loc_001B0B7B: ;
    eax = 0x27;
    goto loc_001B0BA8;

loc_001B0B82: ;
    eax = 0x33;
    goto loc_001B0BA8;

loc_001B0B89: ;
    eax = 0x3A;
    goto loc_001B0BA8;

loc_001B0B90: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x21 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B0BA3; /* je: equal / zero */

loc_001B0B95: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B0BA8; /* jne: not equal / not zero */

loc_001B0B9D: ;
    eax = 0xB;
    esp += 4; return; /* ret */

loc_001B0BA3: ;
    eax = 7;

loc_001B0BA8: ;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x18), 0x65 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B0BB1; /* je: equal / zero */

loc_001B0BAE: ;
    eax = eax | 0xFFFFFFFFu;

loc_001B0BB1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B0BB2
 * Original: 0x001B0BB2 - 0x001B0C04 (82 bytes, 34 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0BB2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001B0BB2: ;
    edi = edi;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    _cf = (int)(_fa < _fb);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xB (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ebx = ebx | MEM32(ebx);
    _cf = (int)((((uint64_t)(MEM8(eax + -1476388085)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(eax + -1476388085) = MEM8(eax + -1476388085) + HI8(ecx);
    _cf = 0; /* logical op clears CF */
    ebx = ebx | MEM32(ebx);
    _cf = (int)((((uint64_t)(MEM8(eax + 0x49001B0B)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(eax + 0x49001B0B) = MEM8(eax + 0x49001B0B) + HI8(ecx);
    _cf = 0; /* logical op clears CF */
    ebx = ebx | MEM32(ebx);
    _cf = (int)((((uint64_t)(MEM8(eax + 0xB)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(eax + 0xB) = MEM8(eax + 0xB) + LO8(edx);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    PUSH32(esp, edi);
    _cf = 0; /* logical op clears CF */
    ebx = ebx | MEM32(ebx);
    _cf = (int)((((uint64_t)(MEM8(esi + 0xB)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(esi + 0xB) = MEM8(esi + 0xB) + LO8(ebx);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B0C00; /* jle: less or equal (signed <=) */

loc_001B0BED: ;
    /* nop */

loc_001B0BF0: ;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(edx, MEM8(eax + 2));
    MEM8(eax) = LO8(edx);
    MEM8(eax + 2) = LO8(ecx);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B0BF0; /* jne: not equal / not zero */

loc_001B0C00: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B0BE0
 * Original: 0x001B0BE0 - 0x001B0C04 (36 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B0BE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B0C00; /* jle: less or equal (signed <=) */

loc_001B0BED: ;
    /* nop */

loc_001B0BF0: ;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(edx, MEM8(eax + 2));
    MEM8(eax) = LO8(edx);
    MEM8(eax + 2) = LO8(ecx);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B0BF0; /* jne: not equal / not zero */

loc_001B0C00: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B0C10
 * Original: 0x001B0C10 - 0x001B0C34 (36 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B0C10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B0C30; /* jle: less or equal (signed <=) */

loc_001B0C1D: ;
    /* nop */

loc_001B0C20: ;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(edx, MEM8(eax + 2));
    MEM8(eax) = LO8(edx);
    MEM8(eax + 2) = LO8(ecx);
    eax = eax + 3;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B0C20; /* jne: not equal / not zero */

loc_001B0C30: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B0C40
 * Original: 0x001B0C40 - 0x001B0CAC (108 bytes, 43 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B0C40: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x64 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_001B0C7D; /* jne: not equal / not zero */

loc_001B0C4E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edx = MEM32(esp + 8);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B0CA8; /* jle: less or equal (signed <=) */

loc_001B0C56: ;
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(edx + 1));
    edx = edx + 2;
    SET_LO8(ecx, MEM8(edx + -2));
    eax = ecx;
    eax = eax & 1;
    eax = eax << 0xF;
    ecx = ecx >> 1;
    eax = eax | ecx;
    MEM8(edx + -2) = LO8(eax);
    eax = eax >> 8;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(edx + -1) = LO8(eax);
    if ((_fa != 0)) goto loc_001B0C56; /* jne: not equal / not zero */

loc_001B0C79: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001B0C7D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ecx = MEM32(esp + 8);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B0CA8; /* jle: less or equal (signed <=) */

loc_001B0C85: ;
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(ecx + 1));
    ecx = ecx + 2;
    SET_LO8(edx, MEM8(ecx + -2));
    eax = edx;
    eax = eax >> 0xF;
    eax = eax & 1;
    edx = edx + edx;
    eax = eax | edx;
    MEM8(ecx + -2) = LO8(eax);
    eax = eax >> 8;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(ecx + -1) = LO8(eax);
    if ((_fa != 0)) goto loc_001B0C85; /* jne: not equal / not zero */

loc_001B0CA8: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B0CB0
 * Original: 0x001B0CB0 - 0x001B0D1A (106 bytes, 42 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B0CB0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x64 (32-bit) */
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_001B0CEE; /* jne: not equal / not zero */

loc_001B0CC2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B0D16; /* jle: less or equal (signed <=) */

loc_001B0CC6: ;
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(edx + 1));
    edx = edx + 2;
    SET_LO8(ecx, MEM8(edx + -2));
    eax = ecx;
    eax = eax & 0xF;
    eax = eax << 0xC;
    ecx = ecx >> 4;
    eax = eax | ecx;
    MEM8(edx + -2) = LO8(eax);
    eax = eax >> 8;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(edx + -1) = LO8(eax);
    if ((_fa != 0)) goto loc_001B0CC6; /* jne: not equal / not zero */

loc_001B0CEA: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001B0CEE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B0D16; /* jle: less or equal (signed <=) */

loc_001B0CF2: ;
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(edx + 1));
    edx = edx + 2;
    SET_LO8(ecx, MEM8(edx + -2));
    eax = ecx;
    eax = eax >> 0xC;
    eax = eax & 0xF;
    ecx = ecx << 4;
    eax = eax | ecx;
    MEM8(edx + -2) = LO8(eax);
    eax = eax >> 8;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(edx + -1) = LO8(eax);
    if ((_fa != 0)) goto loc_001B0CF2; /* jne: not equal / not zero */

loc_001B0D16: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B0D20
 * Original: 0x001B0D20 - 0x001B0D46 (38 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B0D20: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B0D42; /* jle: less or equal (signed <=) */

loc_001B0D2D: ;
    /* nop */

loc_001B0D30: ;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) >> 4);
    SET_LO8(eax, LO8(eax) << 4);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEM8(ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B0D30; /* jne: not equal / not zero */

loc_001B0D42: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B0D50
 * Original: 0x001B0D50 - 0x001B0D72 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B0D50: ;
    edx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x64 (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_NE(_fa, _fb)) goto loc_001B0D62; /* jne: not equal / not zero */

loc_001B0D5A: ;
    MEM32(ecx + 0x18) = 0x65;
    esp += 4; return; /* ret */

loc_001B0D62: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x65 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B0D6F; /* jne: not equal / not zero */

loc_001B0D67: ;
    MEM32(ecx + 0x18) = 0x64;
    esp += 4; return; /* ret */

loc_001B0D6F: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001B0D80
 * Original: 0x001B0D80 - 0x001B0DF0 (112 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0D80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B0D80: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    MEM8(eax + 0x1C) = 1;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = ebx;
    ecx = ecx + eax * 4 + -4;
    edx = edx + eax + -1;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B0DED; /* jle: less or equal (signed <=) */

loc_001B0DAC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax;
    goto loc_001B0DB6;

loc_001B0DB2: ;
    ebx = MEM32(esp + 0x20);

loc_001B0DB6: ;
    eax = ZX8(MEM8(edx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B0DBF; /* jl: less (signed <) */

loc_001B0DBD: ;
    eax = ebx;

loc_001B0DBF: ;
    eax = MEM32(esi + eax * 4);
    ebx = eax;
    ebx = ebx >> 0x10;
    ebp = eax;
    ebp = ebp & 0xFF;
    ebx = ZX8(LO8(ebx));
    ebp = ebp << 0x10;
    ebx = ebx | ebp;
    MEM32(esp + 0x1C) = eax;
    eax = eax & 0xFF00FF00u;
    ebx = ebx | eax;
    MEM32(ecx) = ebx;
    ecx = ecx - 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B0DB2; /* jne: not equal / not zero */

loc_001B0DEB: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001B0DED: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B0DF0
 * Original: 0x001B0DF0 - 0x001B0EAD (189 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0DF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B0DF0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx + eax * 4 + -4;
    ecx = edx + eax * 2 + -2;
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B0EAB; /* jle: less or equal (signed <=) */

loc_001B0E11: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, esi);
    goto loc_001B0E20;

    /* nop */

loc_001B0E20: ;
    edx = MEM32(esp + 0x1C);
    eax = ZX16(MEM16(edx));
    ecx = eax;
    edx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x3E0;
    esi = eax;
    if (6) _cf = (int)(((ecx) >> (32 - (6))) & 1);
    ecx = ecx << 6;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x1F;
    if (3) _cf = (int)(((edx) >> (32 - (3))) & 1);
    edx = edx << 3;
    ebx = ecx;
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0x1FE000;
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7C00;
    ebp = edx;
    _cf = 0; /* logical op clears CF */
    ebp = ebp & 0x1FE0;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | ebp;
    if (9) _cf = (int)(((esi) >> (32 - (9))) & 1);
    esi = esi << 9;
    ebp = esi;
    if (5) _cf = (int)(((ebp) >> ((5) - 1)) & 1);
    ebp = ebp >> 5;
    if (5) _cf = (int)(((ebx) >> ((5) - 1)) & 1);
    ebx = ebx >> 5;
    _cf = 0; /* logical op clears CF */
    ebp = ebp | esi;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x8000;
    _cf = 0; /* logical op clears CF */
    ebp = ebp & 0xFF0000;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | ebp;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFF000000u;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | eax;
    eax = MEM32(esp + 0x14);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFF00;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | ecx;
    ecx = MEM32(esp + 0x1C);
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFF;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | edx;
    MEM32(edi) = ebx;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(2));
    ecx = ecx - 2;
    _cf = (int)((uint32_t)(edi) < (uint32_t)(4));
    edi = edi - 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_001B0E20; /* jne: not equal / not zero */

loc_001B0EA8: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001B0EAB: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B0EB0
 * Original: 0x001B0EB0 - 0x001B0F19 (105 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0EB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B0EB0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, esi);
    ecx = eax + ebp * 2;
    PUSH32(esp, edi);
    esi = ecx + ebp + -3;
    edi = edx + ebp * 2 + -2;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B0F15; /* jle: less or equal (signed <=) */

loc_001B0ECE: ;
    PUSH32(esp, ebx);
    /* nop */

loc_001B0ED0: ;
    eax = ZX16(MEM16(edi));
    ecx = eax;
    ecx = ecx & 0x1F;
    ecx = ecx << 3;
    edx = eax;
    edx = edx >> 3;
    ebx = ecx;
    edx = edx & 0xFC;
    ebx = ebx >> 5;
    SET_LO8(ebx, LO8(ebx) | LO8(ecx));
    ecx = edx;
    eax = eax >> 8;
    eax = eax & 0xF8;
    ecx = ecx >> 6;
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    edx = eax;
    edx = edx >> 5;
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEM8(esi) = LO8(ebx);
    MEM8(esi + 1) = LO8(ecx);
    MEM8(esi + 2) = LO8(edx);
    esi = esi - 3;
    edi = edi - 2;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B0ED0; /* jne: not equal / not zero */

loc_001B0F14: ;
    POP32(esp, ebx);

loc_001B0F15: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001B0F20
 * Original: 0x001B0F20 - 0x001B0F95 (117 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0F20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B0F20: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx + eax * 4 + -4;
    ebx = edx + eax * 2 + -2;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B0F92; /* jle: less or equal (signed <=) */

loc_001B0F3A: ;
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, esi);

loc_001B0F40: ;
    eax = ZX16(MEM16(ebx));
    ecx = eax;
    edx = eax;
    esi = eax;
    eax = eax & 0xF;
    eax = eax << 4;
    esi = esi & 0xF0;
    esi = esi << 8;
    ebp = eax;
    ebp = ebp | esi;
    edx = edx & 0xF00;
    edx = edx << 0xC;
    ebp = ebp | edx;
    ecx = ecx & 0xFFFFF000u;
    ecx = ecx << 0x10;
    ebp = ebp | ecx;
    ebp = ebp >> 4;
    ebp = ebp | eax;
    eax = MEM32(esp + 0x1C);
    ebp = ebp | esi;
    ebp = ebp | edx;
    ebp = ebp | ecx;
    MEM32(edi) = ebp;
    edi = edi - 4;
    ebx = ebx - 2;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = eax;
    if ((_fa != 0)) goto loc_001B0F40; /* jne: not equal / not zero */

loc_001B0F90: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_001B0F92: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B0FA0
 * Original: 0x001B0FA0 - 0x001B0FF5 (85 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B0FA0: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    ecx = eax + edx * 4 + -4;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    eax = eax + edx * 2;
    eax = edx + eax + -3;
    esi = 0xFF000000u;
    if (TEST_Z(_fa, _fb)) goto loc_001B0FCC; /* je: equal / zero */

loc_001B0FC6: ;
    esi = ZX8(MEM8(edi));
    esi = esi << 0x18;

loc_001B0FCC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B0FF2; /* jle: less or equal (signed <=) */

loc_001B0FD0: ;
    edi = edx;
    PUSH32(esp, ebx);

loc_001B0FD3: ;
    ebx = ZX8(MEM8(eax));
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(eax + 2));
    eax = eax - 3;
    ecx = ecx - 4;
    SET_LO8(edx, MEM8(eax + 4));
    edx = edx << 8;
    edx = edx | ebx;
    edx = edx | esi;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    if ((_fa != 0)) goto loc_001B0FD3; /* jne: not equal / not zero */

loc_001B0FF1: ;
    POP32(esp, ebx);

loc_001B0FF2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B1000
 * Original: 0x001B1000 - 0x001B105D (93 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B1000: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x8000;
    if (TEST_Z(_fa, _fb)) goto loc_001B1015; /* je: equal / zero */

loc_001B1013: ;
    edi = 0; /* xor self */

loc_001B1015: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B105A; /* jle: less or equal (signed <=) */

loc_001B101D: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);

loc_001B1023: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(edx, LO8(edx) & 0xF8);
    SET_LO8(ebx, LO8(ebx) & 0xF8);
    SET_LO16(edx, ZX8(LO8(edx)));
    SET_LO16(ebx, ZX8(LO8(ebx)));
    ecx = ecx + 2;
    eax = eax + 3;
    edx = edx << 5;
    edx = edx | ebx;
    SET_LO8(ebx, MEM8(eax + -4));
    SET_LO8(ebx, LO8(ebx) >> 3);
    SET_LO16(ebx, ZX8(LO8(ebx)));
    edx = edx << 2;
    edx = edx | ebx;
    edx = edx | edi;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(ecx + -2) = LO16(edx);
    if ((_fa != 0)) goto loc_001B1023; /* jne: not equal / not zero */

loc_001B1059: ;
    POP32(esp, ebx);

loc_001B105A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B1060
 * Original: 0x001B1060 - 0x001B10AD (77 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B1060: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B10AB; /* jle: less or equal (signed <=) */

loc_001B106D: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);

loc_001B1074: ;
    SET_LO16(edx, ZX8(MEM8(eax + 1)));
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ebx, LO8(ebx) & 0xFC);
    SET_LO16(edi, ZX8(LO8(ebx)));
    SET_LO8(ebx, MEM8(eax + -1));
    edx = edx & 0xFFF8;
    edx = edx << 5;
    SET_LO8(ebx, LO8(ebx) >> 3);
    ecx = ecx + 2;
    eax = eax + 3;
    edx = edx | edi;
    SET_LO16(edi, ZX8(LO8(ebx)));
    edx = edx << 3;
    edx = edx | edi;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(ecx + -2) = LO16(edx);
    if ((_fa != 0)) goto loc_001B1074; /* jne: not equal / not zero */

loc_001B10A9: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001B10AB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B10B0
 * Original: 0x001B10B0 - 0x001B10E3 (51 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B10B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B10B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B10E0; /* jle: less or equal (signed <=) */

loc_001B10BE: ;
    ecx = MEM32(esp + 0xC);
    ecx = ecx + 2;

loc_001B10C5: ;
    eax = MEM32(esi);
    edx = eax;
    MEM8(ecx + -2) = LO8(eax);
    edx = edx >> 8;
    eax = eax >> 0x10;
    MEM8(ecx + -1) = LO8(edx);
    MEM8(ecx) = LO8(eax);
    esi = esi + 4;
    ecx = ecx + 3;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B10C5; /* jne: not equal / not zero */

loc_001B10E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B10F0
 * Original: 0x001B10F0 - 0x001B137C (652 bytes, 221 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B10F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B10F0: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    eax = edx;
    eax = eax >> 0xB;
    SET_LO8(eax, LO8(eax) & 0x1F);
    ebx = esi;
    ebx = ebx >> 5;
    SET_LO8(ebx, LO8(ebx) & 0x3F);
    MEM8(esp + 0xE) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 0x1C));
    ecx = edx;
    ecx = ecx >> 5;
    SET_LO8(ecx, LO8(ecx) & 0x3F);
    SET_LO8(ebx, LO8(ebx) & 0x1F);
    MEM8(esp + 0xD) = LO8(ebx);
    SET_LO8(ebx, LO8(eax));
    SET_LO8(eax, LO8(eax) << 3);
    SET_LO8(ebx, LO8(ebx) >> 2);
    SET_LO8(edx, LO8(edx) & 0x1F);
    MEM8(esp + 0xC) = LO8(edx);
    SET_LO8(ebx, LO8(ebx) & 7);
    SET_LO8(ebx, LO8(ebx) | LO8(eax));
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) >> 4);
    SET_LO8(ecx, LO8(ecx) << 2);
    SET_LO8(eax, LO8(eax) & 3);
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    SET_LO8(ecx, MEM8(esp + 0xC));
    MEM8(esp + 0xF) = LO8(eax);
    SET_LO8(eax, LO8(ecx));
    SET_LO8(ecx, LO8(ecx) << 3);
    SET_LO8(eax, LO8(eax) >> 2);
    MEM8(esp + 0xC) = LO8(ecx);
    SET_LO8(eax, LO8(eax) & 7);
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    edx = esi;
    edx = edx >> 0xB;
    SET_LO8(edx, LO8(edx) & 0x1F);
    MEM8(esp + 0xC) = LO8(eax);
    SET_LO8(eax, LO8(edx));
    SET_LO8(edx, LO8(edx) << 3);
    SET_LO8(eax, LO8(eax) >> 2);
    SET_LO8(eax, LO8(eax) & 7);
    SET_LO8(eax, LO8(eax) | LO8(edx));
    SET_LO8(edx, MEM8(esp + 0xE));
    SET_LO8(ecx, LO8(edx));
    SET_LO8(ecx, LO8(ecx) >> 4);
    SET_LO8(ecx, LO8(ecx) & 3);
    SET_LO8(edx, LO8(edx) << 2);
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    MEM8(esp + 0xE) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0xD));
    MEM8(esp + 0xE) = LO8(ecx);
    SET_LO8(ecx, LO8(edx));
    SET_LO8(ecx, LO8(ecx) >> 2);
    SET_LO8(ecx, LO8(ecx) & 7);
    SET_LO8(edx, LO8(edx) << 3);
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    MEM8(esp + 0xD) = LO8(edx);
    MEM8(esp + 0xD) = LO8(ecx);
    SET_LO16(ecx, LO16(esi));
    _fa = (uint32_t)(MEM16(esp + 0x18)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x18), LO16(ecx) (16-bit) */
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_001B1205; /* ja: above (unsigned >) */

loc_001B11AF: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B1205; /* je: equal / zero */

loc_001B11B7: ;
    ebp = ZX8(MEM8(esp + 0x12));
    edi = ZX8(MEM8(esp + 0x13));
    esi = ZX8(LO8(eax));
    ecx = ZX8(LO8(ebx));
    eax = ecx + esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    ebx = eax;
    eax = edi + ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = ZX8(MEM8(esp + 0x11));
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM8(esp + 0x20) = LO8(eax);
    eax = ZX8(MEM8(esp + 0x10));
    eax = eax + edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM8(esp + 0x1C) = LO8(eax);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((1) & 31u));
    SET_LO8(eax, 0); /* xor self */
    MEM8(esp + 0x12) = 0;
    MEM8(esp + 0x13) = 0;
    SET_LO8(edx, 0); /* xor self */
    goto loc_001B12A8;

loc_001B1205: ;
    esi = ZX8(LO8(eax));
    edi = ZX8(MEM8(esp + 0x13));
    ebp = ZX8(MEM8(esp + 0x12));
    ecx = ZX8(LO8(ebx));
    edx = esi + ecx * 2 + 1;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebx = edx;
    ebx = ebx >> 0x1F;
    ebx = ebx + edx;
    edx = ebp + edi * 2 + 1;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = ZX8(MEM8(esp + 0x11));
    MEM8(esp + 0x20) = LO8(eax);
    eax = ZX8(MEM8(esp + 0x10));
    edx = edx + eax * 2 + 1;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM8(esp + 0x1C) = LO8(eax);
    edx = ecx + esi * 2 + 1;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM8(esp + 0x12) = LO8(eax);
    edx = edi + ebp * 2 + 1;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = ZX8(MEM8(esp + 0x11));
    MEM8(esp + 0x13) = LO8(eax);
    eax = ZX8(MEM8(esp + 0x10));
    edx = eax + edx * 2 + 1;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    SET_LO8(edx, LO8(edx) | 0xFF);

loc_001B12A8: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x18), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B1325; /* je: equal / zero */

loc_001B12AF: ;
    ecx = ecx | 0xFFFFFF00u;
    ecx = ecx << 8;
    ecx = ecx | edi;
    edi = ZX8(MEM8(esp + 0x10));
    ecx = ecx << 8;
    ecx = ecx | edi;
    edi = MEM32(esp + 0x24);
    MEM32(edi) = ecx;
    ecx = ZX8(MEM8(esp + 0x11));
    esi = esi | 0xFFFFFF00u;
    esi = esi << 8;
    esi = esi | ebp;
    esi = esi << 8;
    esi = esi | ecx;
    ecx = ZX8(LO8(ebx));
    ecx = ecx | 0xFFFFFF00u;
    ecx = ecx << 8;
    MEM32(edi + 4) = esi;
    esi = ZX8(MEM8(esp + 0x20));
    ecx = ecx | esi;
    esi = ZX8(MEM8(esp + 0x1C));
    ecx = ecx << 8;
    ecx = ecx | esi;
    MEM32(edi + 8) = ecx;
    ecx = 0; /* xor self */
    SET_HI8(ecx, LO8(edx));
    edx = ZX8(MEM8(esp + 0x13));
    eax = ZX8(LO8(eax));
    SET_LO8(ecx, MEM8(esp + 0x12));
    ecx = ecx << 8;
    ecx = ecx | edx;
    ecx = ecx << 8;
    ecx = ecx | eax;
    MEM32(edi + 0xC) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001B1325: ;
    edx = ZX8(MEM8(esp + 0x10));
    ecx = ecx << 8;
    ecx = ecx | edi;
    edi = MEM32(esp + 0x24);
    ecx = ecx << 8;
    ecx = ecx | edx;
    MEM32(edi) = ecx;
    ecx = ZX8(MEM8(esp + 0x11));
    edx = ZX8(MEM8(esp + 0x1C));
    esi = esi << 8;
    esi = esi | ebp;
    esi = esi << 8;
    esi = esi | ecx;
    ecx = 0; /* xor self */
    SET_HI8(ecx, LO8(ebx));
    MEM32(edi + 4) = esi;
    SET_LO8(ecx, MEM8(esp + 0x20));
    ecx = ecx << 8;
    ecx = ecx | edx;
    MEM32(edi + 8) = ecx;
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(esp + 0x12));
    edx = ZX8(LO8(eax));
    SET_LO8(ecx, MEM8(esp + 0x13));
    ecx = ecx << 8;
    ecx = ecx | edx;
    MEM32(edi + 0xC) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B1380
 * Original: 0x001B1380 - 0x001B1479 (249 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1380(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B1380: ;
    esp = esp - 0x14;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    ebx = eax;
    ebx = ebx & 0xFFFF;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    eax = eax & 0xFFFF;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    MEM32(esp + 0x24) = ebx;
    if (0) goto loc_001B1473; /* jbe: below or equal (unsigned <=) */

loc_001B13A7: ;
    ecx = ebx;
    ecx = ecx << 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    eax = eax >> 2;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x28) = eax;

loc_001B13C3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B145C; /* jbe: below or equal (unsigned <=) */

loc_001B13CB: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx >> 2;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001B13D0: ;
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(esi + 3));
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(esi + 1));
    eax = esp + 0x14;
    PUSH32(esp, eax);
    SET_LO8(ecx, MEM8(esi + 2));
    SET_LO8(edx, MEM8(esi));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001B13EDu); RECOMP_ABI_CALL(0x001B10F0u, sub_001B10F0); /* call 0x001B10F0 */

loc_001B13ED: ;
    eax = MEM32(esi + 4);
    esp = esp + 0x10;
    ecx = edi;
    edx = 4;
    /* nop */

loc_001B1400: ;
    ebp = eax;
    ebp = ebp & 3;
    ebp = MEM32(esp + ebp * 4 + 0x14);
    MEM32(ecx) = ebp;
    eax = eax >> 2;
    ebp = eax;
    ebp = ebp & 3;
    ebp = MEM32(esp + ebp * 4 + 0x14);
    MEM32(ecx + 4) = ebp;
    eax = eax >> 2;
    ebp = eax;
    ebp = ebp & 3;
    ebp = MEM32(esp + ebp * 4 + 0x14);
    MEM32(ecx + 8) = ebp;
    eax = eax >> 2;
    ebp = eax;
    ebp = ebp & 3;
    ebp = MEM32(esp + ebp * 4 + 0x14);
    MEM32(ecx + 0xC) = ebp;
    ebp = MEM32(esp + 0x2C);
    ebp = ebp << 2;
    eax = eax >> 2;
    ecx = ecx + ebp;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B1400; /* jne: not equal / not zero */

loc_001B1447: ;
    esi = esi + 8;
    edi = edi + 0x10;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B13D0; /* jne: not equal / not zero */

loc_001B1450: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x2C);

loc_001B145C: ;
    edi = MEM32(esp + 0x30);
    edi = edi + ecx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x28) = eax;
    if ((_fa != 0)) goto loc_001B13C3; /* jne: not equal / not zero */

loc_001B1471: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001B1473: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001B1480
 * Original: 0x001B1480 - 0x001B15EA (362 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1480(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B1480: ;
    esp = esp - 0x28;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    ebx = ebx & 0xFFFF;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    eax = eax & 0xFFFF;
    MEM32(esp + 8) = edi;
    MEM32(esp + 0x18) = ebx;
    if (0) goto loc_001B15E4; /* jbe: below or equal (unsigned <=) */

loc_001B14AB: ;
    edx = MEM32(esp + 0x34);
    ecx = ebx;
    ecx = ecx << 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax >> 2;
    PUSH32(esp, ebp);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x1C) = eax;

loc_001B14C7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B15CD; /* jbe: below or equal (unsigned <=) */

loc_001B14CF: ;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x44) = eax;
    eax = ebx + -1;
    eax = eax >> 2;
    esi = edi + 0xA;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = eax;
    /* nop */

loc_001B14F0: ;
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(esi + 1));
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(esi + -1));
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    SET_LO8(edx, MEM8(esi));
    SET_LO8(eax, MEM8(esi + -2));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B150Du); RECOMP_ABI_CALL(0x001B10F0u, sub_001B10F0); /* call 0x001B10F0 */

loc_001B150D: ;
    ebx = MEM32(edi);
    edx = MEM32(esi + 2);
    edi = MEM32(esi + -6);
    ecx = MEM32(esp + 0x54);
    esp = esp + 0x10;
    esi = 0; /* xor self */
    MEM32(esp + 0x40) = ebx;
    eax = 0; /* xor self */
    goto loc_001B1532;

loc_001B1526: ;
    ebx = MEM32(esp + 0x40);
    eax = 0; /* xor self */
    goto loc_001B1532;

loc_001B152E: ;
    ebx = MEM32(esp + 0x40);

loc_001B1532: ;
    ebp = edx;
    ebp = ebp & 3;
    ebp = MEM32(esp + ebp * 4 + 0x28);
    edx = edx >> 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    MEM32(ecx + eax * 4) = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_001B1562; /* jge: greater or equal (signed >=) */

loc_001B1546: ;
    ebp = ebx;
    ebx = ebx << 4;
    ebp = ebp & 0xF;
    ebp = ebp | ebx;
    ebx = MEM32(ecx + eax * 4);
    ebp = ebp << 0x18;
    ebx = ebx | ebp;
    MEM32(ecx + eax * 4) = ebx;
    MEM32(esp + 0x40) = MEM32(esp + 0x40) >> 4;
    goto loc_001B157C;

loc_001B1562: ;
    ebx = edi;
    ebp = edi;
    ebp = ebp << 4;
    ebx = ebx & 0xF;
    ebx = ebx | ebp;
    ebp = MEM32(ecx + eax * 4);
    ebx = ebx << 0x18;
    ebp = ebp | ebx;
    MEM32(ecx + eax * 4) = ebp;
    edi = edi >> 4;

loc_001B157C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B152E; /* jl: less (signed <) */

loc_001B1582: ;
    ebx = MEM32(esp + 0x20);
    eax = ebx * 4;
    ecx = ecx + eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B1526; /* jl: less (signed <) */

loc_001B1595: ;
    edi = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x18);
    edi = edi + 0x10;
    esi = esi + 0x10;
    ecx = ecx + 0x10;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_001B14F0; /* jne: not equal / not zero */

loc_001B15C5: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x24);

loc_001B15CD: ;
    esi = MEM32(esp + 0x3C);
    esi = esi + ecx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x3C) = esi;
    MEM32(esp + 0x1C) = eax;
    if ((_fa != 0)) goto loc_001B14C7; /* jne: not equal / not zero */

loc_001B15E2: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_001B15E4: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_001B15F0
 * Original: 0x001B15F0 - 0x001B19B7 (967 bytes, 324 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B15F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B15F0: ;
    esp = esp - 0x44;
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0x50);
    MEM32(esp + 0x4C) = eax;
    eax = ecx;
    eax = eax & 0xFFFF;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0x10) & 31u));
    ecx = ecx & 0xFFFF;
    MEM32(esp + 8) = eax;
    if (0) goto loc_001B19B3; /* jbe: below or equal (unsigned <=) */

loc_001B1619: ;
    PUSH32(esp, ebx);
    edx = eax;
    edx = edx << 4;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x54);
    ecx = ecx >> 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x1C) = ecx;

loc_001B1637: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B199A; /* jbe: below or equal (unsigned <=) */

loc_001B163F: ;
    ecx = MEM32(esp + 0x5C);
    edx = MEM32(esp + 0x10);
    ecx = ecx + 0xA;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax >> 2;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x60) = ecx;
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x14) = eax;
    goto loc_001B1660;

    /* nop */

loc_001B1660: ;
    eax = MEM32(esp + 0x5C);
    edx = MEM32(esp + 0x60);
    ecx = ZX8(MEM8(eax));
    esi = ZX8(MEM8(edx + -9));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B171D; /* jbe: below or equal (unsigned <=) */

loc_001B1677: ;
    eax = ecx + ecx * 2;
    edi = esi + eax * 2 + 3;
    eax = 0x24924925;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edi = edi - edx;
    edi = edi >> 1;
    edi = edi + edx;
    edi = edi >> 2;
    ebp = edi;
    edx = ecx + ecx * 4;
    ebx = edx + esi * 2 + 3;
    eax = 0x24924925;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ebx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebx = ebx - edx;
    eax = esi + esi * 2 + 3;
    edi = eax + ecx * 4;
    ebx = ebx >> 1;
    ebx = ebx + edx;
    eax = 0x24924925;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edi = edi - edx;
    edi = edi >> 1;
    edi = edi + edx;
    edi = edi >> 2;
    MEM32(esp + 0x44) = edi;
    edx = ecx + ecx * 2 + 3;
    edi = edx + esi * 4;
    eax = 0x24924925;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edi = edi - edx;
    edi = edi >> 1;
    edi = edi + edx;
    edi = edi >> 2;
    MEM32(esp + 0x48) = edi;
    eax = esi + esi * 4;
    edi = eax + ecx * 2 + 3;
    eax = 0x24924925;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edi = edi - edx;
    edi = edi >> 1;
    edi = edi + edx;
    edi = edi >> 2;
    MEM32(esp + 0x4C) = edi;
    edx = esi + esi * 2;
    edi = ecx + edx * 2 + 3;
    eax = 0x24924925;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edi = edi - edx;
    edi = edi >> 1;
    edi = edi + edx;
    edx = MEM32(esp + 0x48);
    ebx = ebx >> 2;
    edi = edi >> 2;
    MEM32(esp + 0x50) = edi;
    edi = MEM32(esp + 0x44);
    goto loc_001B1771;

loc_001B171D: ;
    edx = esi + ecx * 4 + 2;
    eax = 0xCCCCCCCDu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebp = edx;
    eax = ecx + ecx * 2;
    edx = eax + esi * 2 + 2;
    eax = 0xCCCCCCCDu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebx = edx;
    eax = esi + esi * 2;
    edx = eax + ecx * 2 + 2;
    eax = 0xCCCCCCCDu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edi = edx;
    edx = ecx + esi * 4 + 2;
    eax = 0xCCCCCCCDu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebp = ebp >> 2;
    ebx = ebx >> 2;
    edi = edi >> 2;
    edx = edx >> 2;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x50) = 0xFF;

loc_001B1771: ;
    eax = MEM32(esp + 0x50);
    ecx = ecx << 0x18;
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(esp + 0x4C);
    ecx = ecx << 0x18;
    edx = edx << 0x18;
    edi = edi << 0x18;
    MEM32(esp + 0x4C) = ecx;
    ecx = 0; /* xor self */
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x44) = edi;
    edi = MEM32(esp + 0x60);
    SET_HI8(ecx, MEM8(edi + 1));
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(edi + -1));
    eax = eax << 0x18;
    MEM32(esp + 0x50) = eax;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    SET_LO8(ecx, MEM8(edi));
    esi = esi << 0x18;
    SET_LO8(edx, MEM8(edi + -2));
    ebp = ebp << 0x18;
    ebx = ebx << 0x18;
    MEM32(esp + 0x3C) = esi;
    MEM32(esp + 0x40) = ebp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x48) = ebx;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B17D2u); RECOMP_ABI_CALL(0x001B10F0u, sub_001B10F0); /* call 0x001B10F0 */

loc_001B17D2: ;
    esi = MEM32(edi + 2);
    edx = MEM32(edi + -8);
    ecx = MEM32(edi + -4);
    eax = MEM32(esp + 0x68);
    esp = esp + 0x10;
    edi = 2;

loc_001B17E7: ;
    ebx = esi;
    ebx = ebx & 3;
    ebx = MEM32(esp + ebx * 4 + 0x24);
    MEM32(eax) = ebx;
    ebx = edi + -2;
    esi = esi >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001B180F; /* jge: greater or equal (signed >=) */

loc_001B17FD: ;
    ebp = MEM32(eax);
    ebx = edx;
    ebx = ebx & 7;
    ebx = MEM32(esp + ebx * 4 + 0x34);
    ebp = ebp | ebx;
    edx = edx >> 3;
    goto loc_001B183A;

loc_001B180F: ;
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001B182C; /* jne: not equal / not zero */

loc_001B1813: ;
    ebx = ebx & 1;
    ebx = ebx << 2;
    ebp = edx;
    ebp = ebp & 3;
    ebx = ebx | ebp;
    ebx = MEM32(esp + ebx * 4 + 0x34);
    ebp = MEM32(eax);
    ebp = ebp | ebx;
    ecx = ecx >> 1;
    goto loc_001B183A;

loc_001B182C: ;
    ebp = MEM32(eax);
    ebx = ebx & 7;
    ebx = MEM32(esp + ebx * 4 + 0x34);
    ebp = ebp | ebx;
    ecx = ecx >> 3;

loc_001B183A: ;
    ebx = esi;
    ebx = ebx & 3;
    ebx = MEM32(esp + ebx * 4 + 0x24);
    MEM32(eax + 4) = ebx;
    ebx = edi + -1;
    esi = esi >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA (32-bit) */
    MEM32(eax) = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_001B1866; /* jge: greater or equal (signed >=) */

loc_001B1853: ;
    ebp = MEM32(eax + 4);
    ebx = edx;
    ebx = ebx & 7;
    ebx = MEM32(esp + ebx * 4 + 0x34);
    ebp = ebp | ebx;
    edx = edx >> 3;
    goto loc_001B1893;

loc_001B1866: ;
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001B1884; /* jne: not equal / not zero */

loc_001B186A: ;
    ebx = ebx & 1;
    ebx = ebx << 2;
    ebp = edx;
    ebp = ebp & 3;
    ebx = ebx | ebp;
    ebx = MEM32(esp + ebx * 4 + 0x34);
    ebp = MEM32(eax + 4);
    ebp = ebp | ebx;
    ecx = ecx >> 1;
    goto loc_001B1893;

loc_001B1884: ;
    ebp = MEM32(eax + 4);
    ebx = ebx & 7;
    ebx = MEM32(esp + ebx * 4 + 0x34);
    ebp = ebp | ebx;
    ecx = ecx >> 3;

loc_001B1893: ;
    ebx = esi;
    ebx = ebx & 3;
    ebx = MEM32(esp + ebx * 4 + 0x24);
    esi = esi >> 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xA (32-bit) */
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_001B18BD; /* jge: greater or equal (signed >=) */

loc_001B18AA: ;
    ebp = MEM32(eax + 8);
    ebx = edx;
    ebx = ebx & 7;
    ebx = MEM32(esp + ebx * 4 + 0x34);
    ebp = ebp | ebx;
    edx = edx >> 3;
    goto loc_001B18EA;

loc_001B18BD: ;
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001B18DB; /* jne: not equal / not zero */

loc_001B18C1: ;
    ebx = ebx & 1;
    ebx = ebx << 2;
    ebp = edx;
    ebp = ebp & 3;
    ebx = ebx | ebp;
    ebx = MEM32(esp + ebx * 4 + 0x34);
    ebp = MEM32(eax + 8);
    ebp = ebp | ebx;
    ecx = ecx >> 1;
    goto loc_001B18EA;

loc_001B18DB: ;
    ebp = MEM32(eax + 8);
    ebx = ebx & 7;
    ebx = MEM32(esp + ebx * 4 + 0x34);
    ebp = ebp | ebx;
    ecx = ecx >> 3;

loc_001B18EA: ;
    ebx = esi;
    ebx = ebx & 3;
    ebx = MEM32(esp + ebx * 4 + 0x24);
    MEM32(eax + 0xC) = ebx;
    ebx = edi + 1;
    esi = esi >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA (32-bit) */
    MEM32(eax + 8) = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_001B1917; /* jge: greater or equal (signed >=) */

loc_001B1904: ;
    ebp = MEM32(eax + 0xC);
    ebx = edx;
    ebx = ebx & 7;
    ebx = MEM32(esp + ebx * 4 + 0x34);
    ebp = ebp | ebx;
    edx = edx >> 3;
    goto loc_001B1944;

loc_001B1917: ;
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001B1935; /* jne: not equal / not zero */

loc_001B191B: ;
    ebx = ebx & 1;
    ebx = ebx << 2;
    ebp = edx;
    ebp = ebp & 3;
    ebx = ebx | ebp;
    ebx = MEM32(esp + ebx * 4 + 0x34);
    ebp = MEM32(eax + 0xC);
    ebp = ebp | ebx;
    ecx = ecx >> 1;
    goto loc_001B1944;

loc_001B1935: ;
    ebp = MEM32(eax + 0xC);
    ebx = ebx & 7;
    ebx = MEM32(esp + ebx * 4 + 0x34);
    ebp = ebp | ebx;
    ecx = ecx >> 3;

loc_001B1944: ;
    ebx = MEM32(esp + 0x18);
    ebx = ebx << 2;
    MEM32(eax + 0xC) = ebp;
    edi = edi + 4;
    eax = eax + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B17E7; /* jl: less (signed <) */

loc_001B195C: ;
    esi = MEM32(esp + 0x5C);
    edx = MEM32(esp + 0x60);
    ecx = MEM32(esp + 0x58);
    eax = 0x10;
    esi = esi + eax;
    edx = edx + eax;
    ecx = ecx + eax;
    eax = MEM32(esp + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x5C) = esi;
    MEM32(esp + 0x60) = edx;
    MEM32(esp + 0x58) = ecx;
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_001B1660; /* jne: not equal / not zero */

loc_001B198E: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);

loc_001B199A: ;
    edi = MEM32(esp + 0x10);
    edi = edi + edx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x1C) = ecx;
    if ((_fa != 0)) goto loc_001B1637; /* jne: not equal / not zero */

loc_001B19AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001B19B3: ;
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_001B19C0
 * Original: 0x001B19C0 - 0x001B1A11 (81 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B19C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B19C0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B1A0F; /* jle: less or equal (signed <=) */

loc_001B19D1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_001B19D3: ;
    eax = MEM32(edx);
    edi = eax;
    edi = edi >> 9;
    ebx = eax;
    ebx = ebx >> 6;
    ebx = ebx & 0x3E0;
    edi = edi & 0x7C00;
    edi = edi | ebx;
    ebx = eax;
    ebx = ebx >> 3;
    ebx = ebx & 0x1F;
    eax = eax >> 0x10;
    edi = edi | ebx;
    eax = eax & 0x8000;
    edi = edi | eax;
    MEM16(ecx) = LO16(edi);
    ecx = ecx + 2;
    edx = edx + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B19D3; /* jne: not equal / not zero */

loc_001B1A0D: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001B1A0F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B1A20
 * Original: 0x001B1A20 - 0x001B1A72 (82 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B1A20: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B1A70; /* jle: less or equal (signed <=) */

loc_001B1A31: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_001B1A33: ;
    eax = MEM32(edx);
    edi = eax;
    edi = edi >> 0x10;
    ebx = eax;
    ebx = ebx >> 0xC;
    ebx = ebx & 0xF00;
    edi = edi & 0xF000;
    edi = edi | ebx;
    ebx = eax;
    ebx = ebx >> 8;
    ebx = ebx & 0xF0;
    eax = eax >> 4;
    edi = edi | ebx;
    eax = eax & 0xF;
    edi = edi | eax;
    MEM16(ecx) = LO16(edi);
    ecx = ecx + 2;
    edx = edx + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B1A33; /* jne: not equal / not zero */

loc_001B1A6E: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001B1A70: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B1A80
 * Original: 0x001B1A80 - 0x001B1AD3 (83 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1A80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B1A80: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    edx = eax + edi * 2 + -2;
    esi = ecx + edi + -1;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B1AD0; /* jle: less or equal (signed <=) */

loc_001B1A9A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    /* nop */

loc_001B1AA0: ;
    eax = ZX8(MEM8(esi));
    ecx = eax;
    ecx = ecx & 0xF0;
    eax = eax & 0xF;
    ecx = ecx << 8;
    eax = eax << 4;
    ebx = eax;
    ebx = ebx >> 4;
    ebp = ecx;
    ebp = ebp >> 4;
    ebx = ebx | ebp;
    ebx = ebx | ecx;
    ebx = ebx | eax;
    MEM16(edx) = LO16(ebx);
    edx = edx - 2;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B1AA0; /* jne: not equal / not zero */

loc_001B1ACE: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001B1AD0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B1AE0
 * Original: 0x001B1AE0 - 0x001B1B17 (55 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B1AE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B1AE0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B1B13; /* jle: less or equal (signed <=) */

loc_001B1AF3: ;
    eax = ZX16(MEM16(esi));
    ecx = eax;
    ecx = ecx >> 8;
    edx = eax;
    edx = edx >> 4;
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    eax = eax >> 8;
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    esi = esi + 2;
    MEM8(edi) = LO8(ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B1AF3; /* jne: not equal / not zero */

loc_001B1B13: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001B1B20
 * Original: 0x001B1B20 - 0x001B1B55 (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B1B20: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B1B52; /* jle: less or equal (signed <=) */

loc_001B1B32: ;
    eax = ZX16(MEM16(edx));
    ecx = eax;
    eax = eax << 8;
    ecx = ecx & 0xFF;
    eax = eax | ecx;
    eax = eax << 8;
    eax = eax | ecx;
    MEM32(esi) = eax;
    edx = edx + 2;
    esi = esi + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B1B32; /* jne: not equal / not zero */

loc_001B1B52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B1B60
 * Original: 0x001B1B60 - 0x001B1B97 (55 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B1B60: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = eax + edx * 2 + -2;
    ecx = ecx + edx + -1;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B1B96; /* jle: less or equal (signed <=) */

loc_001B1B78: ;
    PUSH32(esp, esi);
    /* nop */

loc_001B1B80: ;
    SET_LO16(esi, ZX8(MEM8(ecx)));
    eax = eax - 2;
    esi = esi | 0xFF00;
    MEM16(eax + 2) = LO16(esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B1B80; /* jne: not equal / not zero */

loc_001B1B95: ;
    POP32(esp, esi);

loc_001B1B96: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B1BA0
 * Original: 0x001B1BA0 - 0x001B1BD1 (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B1BA0: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = eax + edx * 2 + -2;
    ecx = ecx + edx + -1;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B1BD0; /* jle: less or equal (signed <=) */

loc_001B1BB8: ;
    PUSH32(esp, esi);
    esi = edx;
    goto loc_001B1BC0;

    /* nop */

loc_001B1BC0: ;
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(ecx));
    eax = eax - 2;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(eax + 2) = LO16(edx);
    if ((_fa != 0)) goto loc_001B1BC0; /* jne: not equal / not zero */

loc_001B1BCF: ;
    POP32(esp, esi);

loc_001B1BD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B1BE0
 * Original: 0x001B1BE0 - 0x001B1C21 (65 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B1BE0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    ecx = ecx + eax * 4 + -4;
    edx = edx + eax + -1;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B1C20; /* jle: less or equal (signed <=) */

loc_001B1BF8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    /* nop */

loc_001B1C00: ;
    eax = ZX8(MEM8(edx));
    edi = eax;
    edi = edi | 0xFFFFFF00u;
    edi = edi << 8;
    edi = edi | eax;
    edi = edi << 8;
    edi = edi | eax;
    MEM32(ecx) = edi;
    ecx = ecx - 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B1C00; /* jne: not equal / not zero */

loc_001B1C1E: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001B1C20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B1C30
 * Original: 0x001B1C30 - 0x001B1CD2 (162 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1C30(void)
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

loc_001B1C30: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + eax + -1;
    edi = edx + eax * 4 + -4;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B1CCF; /* jle: less or equal (signed <=) */

loc_001B1C4E: ;
    PUSH32(esp, ebx);
    ebx = eax;

loc_001B1C51: ;
    eax = MEM32(edi);
    ecx = eax;
    ecx = ecx >> 0x10;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x18) = ecx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001B1C70; /* jge: greater or equal (signed >=) */

loc_001B1C6A: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_001B1C70: ;
    fp_top() = fp_top() * MEMF(0x3E7850); /* fmul dword ptr [0x3e7850] */
    edx = eax;
    edx = edx >> 8;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 0x18) = edx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001B1C93; /* jge: greater or equal (signed >=) */

loc_001B1C8D: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_001B1C93: ;
    fp_top() = fp_top() * MEMF(0x3E784C); /* fmul dword ptr [0x3e784c] */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = eax;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001B1CB2; /* jge: greater or equal (signed >=) */

loc_001B1CAC: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_001B1CB2: ;
    fp_top() = fp_top() * MEMF(0x3E7848); /* fmul dword ptr [0x3e7848] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() + MEMD(0x3DA0A0); /* fadd qword ptr [0x3da0a0] */
    PUSH32(esp, 0x001B1CC5u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001B1CC5: ;
    MEM8(esi) = LO8(eax);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi - 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B1C51; /* jne: not equal / not zero */

loc_001B1CCE: ;
    POP32(esp, ebx);

loc_001B1CCF: ;
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
 * sub_001B1CE0
 * Original: 0x001B1CE0 - 0x001B1D94 (180 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1CE0(void)
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

loc_001B1CE0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + eax * 2 + -2;
    edi = edx + eax * 4 + -4;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B1D91; /* jle: less or equal (signed <=) */

loc_001B1CFE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = eax;

loc_001B1D02: ;
    eax = MEM32(edi);
    ecx = eax;
    ecx = ecx >> 8;
    ecx = ecx & 0xFF;
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001B1D26; /* jge: greater or equal (signed >=) */

loc_001B1D20: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_001B1D26: ;
    fp_top() = fp_top() * MEMF(0x3E784C); /* fmul dword ptr [0x3e784c] */
    edx = ebx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 0x1C) = edx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001B1D46; /* jge: greater or equal (signed >=) */

loc_001B1D40: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_001B1D46: ;
    fp_top() = fp_top() * MEMF(0x3E7850); /* fmul dword ptr [0x3e7850] */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x1C) = eax;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001B1D65; /* jge: greater or equal (signed >=) */

loc_001B1D5F: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_001B1D65: ;
    fp_top() = fp_top() * MEMF(0x3E7848); /* fmul dword ptr [0x3e7848] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() + MEMD(0x3DA0A0); /* fadd qword ptr [0x3da0a0] */
    PUSH32(esp, 0x001B1D78u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001B1D78: ;
    SET_LO16(eax, ZX8(LO8(eax)));
    SET_HI8(eax, HI8(ebx));
    esi = esi - 2;
    edi = edi - 4;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi + 2) = LO16(eax);
    if ((_fa != 0)) goto loc_001B1D02; /* jne: not equal / not zero */

loc_001B1D8F: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001B1D91: ;
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
 * sub_001B1DA0
 * Original: 0x001B1DA0 - 0x001B1DD7 (55 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B1DA0: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = eax + edx * 4 + -4;
    ecx = ecx + edx + -1;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B1DD6; /* jle: less or equal (signed <=) */

loc_001B1DB8: ;
    PUSH32(esp, esi);
    /* nop */

loc_001B1DC0: ;
    esi = ZX8(MEM8(ecx));
    esi = esi << 0x18;
    esi = esi | 0xFFFFFF;
    MEM32(eax) = esi;
    eax = eax - 4;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B1DC0; /* jne: not equal / not zero */

loc_001B1DD5: ;
    POP32(esp, esi);

loc_001B1DD6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B1DE0
 * Original: 0x001B1DE0 - 0x001B1EBA (218 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1DE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B1DE0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    MEM8(eax + 0x1C) = 1;
    eax = MEM32(esp + 0x18);
    edx = ecx + eax * 2 + -2;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0xC) = ebx;
    edi = ecx + edi + -1;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B1EB5; /* jle: less or equal (signed <=) */

loc_001B1E16: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    MEM32(esp + 0x24) = eax;
    goto loc_001B1E25;

loc_001B1E21: ;
    ebx = MEM32(esp + 0x10);

loc_001B1E25: ;
    ecx = ZX8(MEM8(edi));
    eax = ecx;
    eax = eax >> 4;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B1E36; /* jl: less (signed <) */

loc_001B1E34: ;
    eax = ebx;

loc_001B1E36: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B1E3C; /* jl: less (signed <) */

loc_001B1E3A: ;
    ecx = ebx;

loc_001B1E3C: ;
    eax = MEM32(esi + eax * 4);
    ecx = MEM32(esi + ecx * 4);
    ebx = eax;
    ebp = eax;
    ebx = ebx >> 6;
    ebx = ebx & 0x3E0;
    ebp = ebp >> 0x13;
    ebp = ebp & 0x1F;
    ebx = ebx | ebp;
    ebp = eax;
    eax = eax & 0xF8;
    eax = eax << 7;
    ebp = ebp >> 0x10;
    ebp = ebp & 0x8000;
    ebx = ebx | ebp;
    ebx = ebx | eax;
    MEM16(edx) = LO16(ebx);
    eax = ecx;
    eax = eax >> 6;
    ebx = ecx;
    ebx = ebx >> 0x13;
    eax = eax & 0x3E0;
    ebx = ebx & 0x1F;
    eax = eax | ebx;
    ebx = ecx;
    ebx = ebx >> 0x10;
    ebx = ebx & 0x8000;
    ecx = ecx & 0xF8;
    eax = eax | ebx;
    ecx = ecx << 7;
    eax = eax | ecx;
    MEM16(edx + -2) = LO16(eax);
    eax = MEM32(esp + 0x24);
    edx = edx - 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = eax;
    if ((_fa != 0)) goto loc_001B1E21; /* jne: not equal / not zero */

loc_001B1EB4: ;
    POP32(esp, ebp);

loc_001B1EB5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B1EC0
 * Original: 0x001B1EC0 - 0x001B1F3D (125 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1EC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B1EC0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    MEM8(eax + 0x1C) = 1;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = ebx;
    ecx = ecx + eax * 2 + -2;
    edx = edx + eax + -1;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B1F3A; /* jle: less or equal (signed <=) */

loc_001B1EEC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax;
    goto loc_001B1EF6;

loc_001B1EF2: ;
    ebx = MEM32(esp + 0x20);

loc_001B1EF6: ;
    eax = ZX8(MEM8(edx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B1EFF; /* jl: less (signed <) */

loc_001B1EFD: ;
    eax = ebx;

loc_001B1EFF: ;
    eax = MEM32(esi + eax * 4);
    ebx = eax;
    ebx = ebx >> 6;
    ebp = eax;
    ebp = ebp >> 0x13;
    ebp = ebp & 0x1F;
    ebx = ebx & 0x3E0;
    ebx = ebx | ebp;
    ebp = eax;
    ebp = ebp >> 0x10;
    ebp = ebp & 0x8000;
    eax = eax & 0xF8;
    ebx = ebx | ebp;
    eax = eax << 7;
    ebx = ebx | eax;
    MEM16(ecx) = LO16(ebx);
    ecx = ecx - 2;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B1EF2; /* jne: not equal / not zero */

loc_001B1F38: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001B1F3A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B1F40
 * Original: 0x001B1F40 - 0x001B1FBD (125 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1F40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B1F40: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    MEM8(eax + 0x1C) = 1;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = ebx;
    ecx = ecx + eax * 2 + -2;
    edx = edx + eax + -1;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B1FBA; /* jle: less or equal (signed <=) */

loc_001B1F6C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax;
    goto loc_001B1F76;

loc_001B1F72: ;
    ebx = MEM32(esp + 0x20);

loc_001B1F76: ;
    eax = ZX8(MEM8(edx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B1F7F; /* jl: less (signed <) */

loc_001B1F7D: ;
    eax = ebx;

loc_001B1F7F: ;
    eax = MEM32(esi + eax * 4);
    ebx = eax;
    ebx = ebx >> 0x10;
    ebp = eax;
    ebp = ebp >> 8;
    ebp = ebp & 0xF0;
    ebx = ebx & 0xF000;
    ebx = ebx | ebp;
    ebp = eax;
    ebp = ebp >> 0x14;
    ebp = ebp & 0xF;
    eax = eax & 0xF0;
    ebx = ebx | ebp;
    eax = eax << 4;
    ebx = ebx | eax;
    MEM16(ecx) = LO16(ebx);
    ecx = ecx - 2;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B1F72; /* jne: not equal / not zero */

loc_001B1FB8: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001B1FBA: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B1FC0
 * Original: 0x001B1FC0 - 0x001B2005 (69 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B1FC0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B2003; /* jle: less or equal (signed <=) */

loc_001B1FD1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_001B1FD3: ;
    eax = MEM32(edx);
    edi = eax;
    ebx = eax;
    edi = edi >> 8;
    ebx = ebx >> 5;
    edi = edi & 0xF800;
    ebx = ebx & 0x7C0;
    eax = eax >> 3;
    edi = edi | ebx;
    eax = eax & 0x1F;
    edi = edi | eax;
    MEM16(ecx) = LO16(edi);
    ecx = ecx + 2;
    edx = edx + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B1FD3; /* jne: not equal / not zero */

loc_001B2001: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001B2003: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B2010
 * Original: 0x001B2010 - 0x001B2068 (88 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B2010: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ecx = eax + esi * 4 + -4;
    edx = edx + esi * 2 + -2;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B2066; /* jle: less or equal (signed <=) */

loc_001B2029: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    goto loc_001B2030;

    /* nop */

loc_001B2030: ;
    eax = ZX16(MEM16(edx));
    edi = eax;
    edi = edi & 0xFFFFF800u;
    edi = edi | 0xFFFF0000u;
    edi = edi << 3;
    ebx = eax;
    ebx = ebx & 0x7E0;
    edi = edi | ebx;
    edi = edi << 2;
    eax = eax & 0x1F;
    edi = edi | eax;
    edi = edi << 3;
    MEM32(ecx) = edi;
    ecx = ecx - 4;
    edx = edx - 2;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B2030; /* jne: not equal / not zero */

loc_001B2064: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001B2066: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B2070
 * Original: 0x001B2070 - 0x001B20BD (77 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B2070: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    eax = eax & 0xFFFF;
    ecx = ecx & 0x3FFF;
    if (((int32_t)ecx > 0)) goto loc_001B2092; /* jg: greater (signed >) */

loc_001B208D: ;
    ecx = 1;

loc_001B2092: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_001B209E; /* jg: greater (signed >) */

loc_001B2099: ;
    eax = 1;

loc_001B209E: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B20BC; /* jle: less or equal (signed <=) */

loc_001B20A7: ;
    ecx = MEM32(esp + 8);
    ecx = ecx - edx;
    PUSH32(esp, esi);
    edi = edi;

loc_001B20B0: ;
    esi = MEM32(ecx + edx);
    MEM32(edx) = esi;
    edx = edx + 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B20B0; /* jne: not equal / not zero */

loc_001B20BB: ;
    POP32(esp, esi);

loc_001B20BC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B20C0
 * Original: 0x001B20C0 - 0x001B21A5 (229 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B20C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B20C0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B21A2; /* jle: less or equal (signed <=) */

loc_001B20D6: ;
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edi);
    /* nop */

loc_001B20E0: ;
    ecx = MEM32(ebx);
    edx = ecx;
    eax = ecx;
    MEM32(esp + 0x18) = ecx;
    edx = edx >> 0x18;
    eax = eax >> 0x10;
    esi = ZX8(HI8(ecx));
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xE0 (32-bit) */
    eax = ZX8(LO8(eax));
    edi = ecx;
    if (CMP_B(_fa, _fb)) goto loc_001B213D; /* jb: below (unsigned <) */

loc_001B2106: ;
    ecx = eax;
    eax = eax & 0x80;
    ecx = ecx & 0xFFFFFFF8u;
    eax = eax | 0x1000;
    ecx = ecx << 5;
    eax = eax << 1;
    ecx = ecx | esi;
    ecx = ecx & 0xFFFFFFF8u;
    ecx = ecx | eax;
    eax = edi;
    eax = eax >> 4;
    eax = eax & 8;
    eax = eax | edi;
    eax = eax >> 1;
    esi = esi & 0x80;
    eax = eax | esi;
    ecx = ecx << 2;
    eax = eax >> 2;
    goto loc_001B2185;

loc_001B213D: ;
    ecx = edx;
    edx = edx & 0x80;
    ecx = ecx & 0xE0;
    ecx = ecx << 2;
    ecx = ecx | edx;
    edx = eax;
    edx = edx & 0x80;
    ecx = ecx << 4;
    ecx = ecx | edx;
    edx = edi;
    edx = edx >> 3;
    edx = edx & 0x10;
    edx = edx | edi;
    edx = edx >> 1;
    edi = esi;
    edi = edi & 0x80;
    eax = eax & 0xFFFFFFF0u;
    edx = edx | edi;
    eax = eax << 4;
    ecx = ecx << 1;
    edx = edx >> 3;
    eax = eax | esi;
    ecx = ecx | edx;
    eax = eax & 0xFFFFFFF0u;

loc_001B2185: ;
    ecx = ecx | eax;
    eax = ZX8(HI8(ecx));
    SET_HI8(eax, LO8(ecx));
    ebp = ebp + 2;
    ebx = ebx + 4;
    MEM16(ebp + -2) = LO16(eax);
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B20E0; /* jne: not equal / not zero */

loc_001B21A0: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001B21A2: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B21B0
 * Original: 0x001B21B0 - 0x001B2200 (80 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B21B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B21B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B21FD; /* jle: less or equal (signed <=) */

loc_001B21BE: ;
    ecx = MEM32(esp + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001B21C3: ;
    SET_LO8(edx, MEM8(ecx));
    SET_LO16(eax, ZX8(MEM8(ecx + 1)));
    SET_LO8(edx, LO8(edx) & 0xFC);
    SET_LO16(edx, ZX8(LO8(edx)));
    esi = esi + 2;
    ecx = ecx + 3;
    eax = eax & 0xFFF8;
    eax = eax << 5;
    eax = eax | edx;
    SET_LO8(edx, MEM8(ecx + -4));
    SET_LO8(edx, LO8(edx) >> 3);
    SET_LO16(edx, ZX8(LO8(edx)));
    eax = eax << 3;
    eax = eax | edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO16(edx, ZX8(HI8(eax)));
    SET_HI8(edx, LO8(eax));
    MEM16(esi + -2) = LO16(edx);
    if ((_fa != 0)) goto loc_001B21C3; /* jne: not equal / not zero */

loc_001B21FD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B2200
 * Original: 0x001B2200 - 0x001B2294 (148 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2200(void)
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

loc_001B2200: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B2290; /* jle: less or equal (signed <=) */

loc_001B2213: ;
    eax = MEM32(edi);
    ecx = eax;
    ecx = ecx >> 0x10;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001B2232; /* jge: greater or equal (signed >=) */

loc_001B222C: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_001B2232: ;
    fp_top() = fp_top() * MEMF(0x3E7850); /* fmul dword ptr [0x3e7850] */
    edx = eax;
    edx = edx >> 8;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001B2255; /* jge: greater or equal (signed >=) */

loc_001B224F: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_001B2255: ;
    fp_top() = fp_top() * MEMF(0x3E784C); /* fmul dword ptr [0x3e784c] */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001B2274; /* jge: greater or equal (signed >=) */

loc_001B226E: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_001B2274: ;
    fp_top() = fp_top() * MEMF(0x3E7848); /* fmul dword ptr [0x3e7848] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() + MEMD(0x3DA0A0); /* fadd qword ptr [0x3da0a0] */
    PUSH32(esp, 0x001B2287u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001B2287: ;
    MEM8(esi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B2213; /* jne: not equal / not zero */

loc_001B2290: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B22A0
 * Original: 0x001B22A0 - 0x001B2350 (176 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B22A0(void)
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

loc_001B22A0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B234C; /* jle: less or equal (signed <=) */

loc_001B22B7: ;
    PUSH32(esp, ebx);

loc_001B22B8: ;
    eax = MEM32(edi);
    ecx = eax;
    ecx = ecx >> 8;
    ecx = ecx & 0xFF;
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x14) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001B22DC; /* jge: greater or equal (signed >=) */

loc_001B22D6: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_001B22DC: ;
    fp_top() = fp_top() * MEMF(0x3E784C); /* fmul dword ptr [0x3e784c] */
    edx = ebx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 0x14) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001B22FC; /* jge: greater or equal (signed >=) */

loc_001B22F6: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_001B22FC: ;
    fp_top() = fp_top() * MEMF(0x3E7850); /* fmul dword ptr [0x3e7850] */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001B231B; /* jge: greater or equal (signed >=) */

loc_001B2315: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_001B231B: ;
    fp_top() = fp_top() * MEMF(0x3E7848); /* fmul dword ptr [0x3e7848] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() + MEMD(0x3DA0A0); /* fadd qword ptr [0x3da0a0] */
    PUSH32(esp, 0x001B232Eu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001B232E: ;
    SET_LO16(eax, ZX8(LO8(eax)));
    SET_HI8(eax, HI8(ebx));
    SET_LO16(ecx, ZX8(HI8(eax)));
    SET_HI8(ecx, LO8(eax));
    esi = esi + 2;
    edi = edi + 4;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi + -2) = LO16(ecx);
    if ((_fa != 0)) goto loc_001B22B8; /* jne: not equal / not zero */

loc_001B234B: ;
    POP32(esp, ebx);

loc_001B234C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B2350
 * Original: 0x001B2350 - 0x001B23FD (173 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2350(void)
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

loc_001B2350: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B23F9; /* jle: less or equal (signed <=) */

loc_001B2367: ;
    PUSH32(esp, esi);

loc_001B2368: ;
    esi = MEM32(ebx);
    eax = esi;
    eax = eax >> 0x10;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001B2386; /* jge: greater or equal (signed >=) */

loc_001B2380: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_001B2386: ;
    fp_top() = fp_top() * MEMF(0x3E7850); /* fmul dword ptr [0x3e7850] */
    ecx = esi;
    ecx = ecx >> 8;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x14) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001B23A9; /* jge: greater or equal (signed >=) */

loc_001B23A3: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_001B23A9: ;
    fp_top() = fp_top() * MEMF(0x3E784C); /* fmul dword ptr [0x3e784c] */
    edx = esi;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEM32(esp + 0x14) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001B23CB; /* jge: greater or equal (signed >=) */

loc_001B23C5: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_001B23CB: ;
    fp_top() = fp_top() * MEMF(0x3E7848); /* fmul dword ptr [0x3e7848] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() + MEMD(0x3DA0A0); /* fadd qword ptr [0x3da0a0] */
    PUSH32(esp, 0x001B23DEu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001B23DE: ;
    ecx = esi;
    ecx = ecx >> 0x18;
    SET_LO8(eax, LO8(eax) >> 4);
    SET_LO8(ecx, LO8(ecx) & 0xF0);
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    MEM8(edi) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 4;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B2368; /* jne: not equal / not zero */

loc_001B23F8: ;
    POP32(esp, esi);

loc_001B23F9: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B2400
 * Original: 0x001B2400 - 0x001B240B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2400(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B2400: ;
    ecx = MEM32(ecx + 0x14);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x484)); return; /* indirect tail jmp */

}

/**
 * sub_001B2410
 * Original: 0x001B2410 - 0x001B242A (26 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2410(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B2410: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 0x14);
    edx = MEM32(edx * 4 + 0x3E3C60);
    eax = MEM32(ecx);
    MEM32(esp + 0xC) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x48C)); return; /* indirect tail jmp */

}

/**
 * sub_001B2430
 * Original: 0x001B2430 - 0x001B243B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2430(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B2430: ;
    ecx = MEM32(ecx + 0x14);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x494)); return; /* indirect tail jmp */

}

/**
 * sub_001B2440
 * Original: 0x001B2440 - 0x001B246C (44 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2440(void)
{

loc_001B2440: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x001B2448u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B2448: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x18) = edx;
    edx = MEM32(esi);
    ecx = esi;
    MEM8(esi + 0x10) = 0;
    MEM32(esi + 0x1C) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x001B2468u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B2468: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B2470
 * Original: 0x001B2470 - 0x001B258B (283 bytes, 103 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2470(void)
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

loc_001B2470: ;
    esp = esp - 0x1C;
    eax = MEM32(0x5BC508);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x38);
    PUSH32(esp, edi);
    eax = 8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edi = ecx;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E788C);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    MEM8(esp + 0x2C) = 0;
    PUSH32(esp, 0x001B24ABu); RECOMP_ABI_CALL(0x001A5950u, sub_001A5950); /* call 0x001A5950 */

loc_001B24AB: ;
    esp = esp + 0x18;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B24F6; /* jne: not equal / not zero */

loc_001B24B2: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E7870);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B24CBu); RECOMP_ABI_CALL(0x001A5950u, sub_001A5950); /* call 0x001A5950 */

loc_001B24CB: ;
    esp = esp + 0x18;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B24F6; /* jne: not equal / not zero */

loc_001B24D2: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3E7854);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B24EBu); RECOMP_ABI_CALL(0x001A5950u, sub_001A5950); /* call 0x001A5950 */

loc_001B24EB: ;
    esp = esp + 0x18;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B24F6; /* jne: not equal / not zero */

loc_001B24F2: ;
    SET_LO8(ebx, 0); /* xor self */
    goto loc_001B24F8;

loc_001B24F6: ;
    SET_LO8(ebx, 1);

loc_001B24F8: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E77D8);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B2511u); RECOMP_ABI_CALL(0x001A59B0u, sub_001A59B0); /* call 0x001A59B0 */

loc_001B2511: ;
    esp = esp + 0x18;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B256F; /* jne: not equal / not zero */

loc_001B2518: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B256F; /* jne: not equal / not zero */

loc_001B2520: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x001B252Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B252A: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x001B2538u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B2538: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x001B2546u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B2546: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x001B256Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B256F: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(edi + 0x14) = eax;
    MEM32(edi + 0x18) = ecx;
    MEM32(edi + 0x1C) = edx;
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
 * sub_001B2590
 * Original: 0x001B2590 - 0x001B2657 (199 bytes, 88 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2590(void)
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

loc_001B2590: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */

loc_001B25A0: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x001B25B3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B25B3: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x001B25C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B25C5: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B25D8; /* je: equal / zero */

loc_001B25D0: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001B25A0; /* jle: less or equal (signed <=) */

loc_001B25D6: ;
    goto loc_001B25DF;

loc_001B25D8: ;
    eax = MEM32(esp + 0x14);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = edi;

loc_001B25DF: ;
    edi = 0; /* xor self */

loc_001B25E1: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x001B25F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B25F4: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x001B2606u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B2606: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x28] */
    ecx = MEM32(esp + 0x18);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B261D; /* je: equal / zero */

loc_001B2615: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001B25E1; /* jle: less or equal (signed <=) */

loc_001B261B: ;
    goto loc_001B2620;

loc_001B261D: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx) = edi;

loc_001B2620: ;
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi);
    edx = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001B262E; /* jg: greater (signed >) */

loc_001B262C: ;
    eax = edx;

loc_001B262E: ;
    edx = MEM32(esp + 0x1C);
    MEM32(edx) = eax;
    eax = MEM32(esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_S(_fas, _fbs)) ? 1 : 0); /* setl */
    POP32(esp, edi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    MEM32(esi) = eax;
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_S(_fas, _fbs)) ? 1 : 0); /* setl */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    MEM32(ecx) = eax;
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B2660
 * Original: 0x001B2660 - 0x001B269B (59 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001B2660(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B2660: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 8); /* fdiv dword ptr [esp + 8] */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() * MEMF(0x3C8C98); /* fmul dword ptr [0x3c8c98] */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_top() = fp_top() * MEMF(0x3E78A4); /* fmul dword ptr [0x3e78a4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 4); /* fdiv dword ptr [esp + 4] */
    fp_top() = fp_top() * MEMF(0x3C94A8); /* fmul dword ptr [0x3c94a8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B26A0
 * Original: 0x001B26A0 - 0x001B26CB (43 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B26A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B26A0: ;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = fp_top() * MEMF(0x3C837C); /* fmul dword ptr [0x3c837c] */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = fp_top() * MEMF(0x3D9B4C); /* fmul dword ptr [0x3d9b4c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() + MEMF(0x3E78A8); /* fadd dword ptr [0x3e78a8] */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 4); /* fdiv dword ptr [esp + 4] */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B26D0
 * Original: 0x001B26D0 - 0x001B2730 (96 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B26D0(void)
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

loc_001B26D0: ;
    esp = esp - 8;
    eax = MEM32(0x5BC508);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x38);
    PUSH32(esp, 0x3A);
    MEM32(esp + 8) = 0x3F800000;
    PUSH32(esp, 0x001B26EBu); RECOMP_ABI_CALL(0x001FF070u, sub_001FF070); /* call 0x001FF070 */

loc_001B26EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001B26FD; /* jge: greater or equal (signed >=) */

loc_001B26F7: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_001B26FD: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3E78B0);
    fp_top() = fp_top() * MEMF(0x3E78AC); /* fmul dword ptr [0x3e78ac] */
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001B2720u); RECOMP_ABI_CALL(0x001A5980u, sub_001A5980); /* call 0x001A5980 */

loc_001B2720: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    esp = esp + 0x1C;
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B2730
 * Original: 0x001B2730 - 0x001B2770 (64 bytes, 29 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2730(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B2730: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x5BC508);
    eax = MEM32(eax + 0x38);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E78CC);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 0x3F800000;
    PUSH32(esp, 0x001B275Au); RECOMP_ABI_CALL(0x001A5980u, sub_001A5980); /* call 0x001A5980 */

loc_001B275A: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B2770
 * Original: 0x001B2770 - 0x001B27A2 (50 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2770(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B2770: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x5BC508);
    eax = MEM32(eax + 0x38);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E78E8);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 0x3F800000;
    PUSH32(esp, 0x001B279Au); RECOMP_ABI_CALL(0x001A5980u, sub_001A5980); /* call 0x001A5980 */

loc_001B279A: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B27B0
 * Original: 0x001B27B0 - 0x001B27C7 (23 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B27B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B27B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001B27B8u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_001B27B8: ;
    SET_LO8(eax, MEM8(0x462154));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi + 0x68) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B27D0
 * Original: 0x001B27D0 - 0x001B27E0 (16 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B27D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B27D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x001B27D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B27D8: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

}

/**
 * sub_001B27E0
 * Original: 0x001B27E0 - 0x001B283E (94 bytes, 35 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B27E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B27E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = ZX8(MEM8(esi + 0x28));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x24));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B283A; /* jbe: below or equal (unsigned <=) */

loc_001B27EF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B27F5u); RECOMP_ABI_CALL(0x00361560u, sub_00361560); /* call 0x00361560 */

loc_001B27F5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x8007000Eu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x8007000Eu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B282D; /* je: equal / zero */

loc_001B280B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8876017Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x8876017Cu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B282D; /* je: equal / zero */

loc_001B2813: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B283A; /* jne: not equal / not zero */

loc_001B2817: ;
    SET_LO8(ecx, MEM8(esi + 0x38));
    MEM32(esi + 0x34) = eax;
    SET_LO8(eax, 1);
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    MEM32(esi + 0x3C) = 0x208;
    MEM8(esi + 0x38) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001B282D: ;
    ecx = MEM32(esi + 0x40);
    SET_LO8(eax, 1);
    MEM8(ecx + 0x15D) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001B283A: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B2840
 * Original: 0x001B2840 - 0x001B2850 (16 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2840(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B2840: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001B2848u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B2848: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

}

/**
 * sub_001B2850
 * Original: 0x001B2850 - 0x001B2868 (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B2850: ;
    SET_LO8(eax, MEM8(0x462154));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B2865; /* jne: not equal / not zero */

loc_001B2859: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x68)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x68) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B2865; /* je: equal / zero */

loc_001B2862: ;
    MEM8(ecx + 0x68) = LO8(eax);

loc_001B2865: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B2870
 * Original: 0x001B2870 - 0x001B2889 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2870(void)
{

loc_001B2870: ;
    eax = MEM32(ecx + 0xC);
    SET_LO16(edx, MEM16(esp + 8));
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM16(eax + esi * 2) = LO16(edx);
    MEM8(ecx + 0x20) = MEM8(ecx + 0x20) | 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B2890
 * Original: 0x001B2890 - 0x001B28A7 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2890(void)
{

loc_001B2890: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(eax + esi * 4) = edx;
    MEM8(ecx + 0x20) = MEM8(ecx + 0x20) | 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B28B0
 * Original: 0x001B28B0 - 0x001B28BE (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B28B0(void)
{

loc_001B28B0: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(eax + ecx * 2));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B28C0
 * Original: 0x001B28C0 - 0x001B28CD (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B28C0(void)
{

loc_001B28C0: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B28D0
 * Original: 0x001B28D0 - 0x001B28EB (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B28D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B28D0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B28DB; /* je: equal / zero */

loc_001B28D7: ;
    MEM8(ecx + 0x20) = MEM8(ecx + 0x20) | 2;

loc_001B28DB: ;
    MEM8(ecx + 0x2C) = MEM8(ecx + 0x2C) + 1;
    _fa = (uint32_t)(MEM8(ecx + 0x2C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 8);
    eax = eax + ecx * 2;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B28F0
 * Original: 0x001B28F0 - 0x001B290B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B28F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B28F0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B28FB; /* je: equal / zero */

loc_001B28F7: ;
    MEM8(ecx + 0x20) = MEM8(ecx + 0x20) | 2;

loc_001B28FB: ;
    MEM8(ecx + 0x2C) = MEM8(ecx + 0x2C) + 1;
    _fa = (uint32_t)(MEM8(ecx + 0x2C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 8);
    eax = eax + ecx * 4;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B2910
 * Original: 0x001B2910 - 0x001B2935 (37 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B2910: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B292F; /* jne: not equal / not zero */

loc_001B2918: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    SET_LO8(eax, MEM8(ecx + 0x20));
    if (TEST_Z(_fa, _fb)) goto loc_001B292A; /* je: equal / zero */

loc_001B291F: ;
    SET_LO8(eax, LO8(eax) | 2);
    MEM8(ecx + 0x20) = LO8(eax);
    MEM8(ecx + 0x2C) = MEM8(ecx + 0x2C) - 1;
    _fa = (uint32_t)(MEM8(ecx + 0x2C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    esp += 20; return; /* ret 16 */

loc_001B292A: ;
    SET_LO8(eax, LO8(eax) | 1);
    MEM8(ecx + 0x20) = LO8(eax);

loc_001B292F: ;
    MEM8(ecx + 0x2C) = MEM8(ecx + 0x2C) - 1;
    _fa = (uint32_t)(MEM8(ecx + 0x2C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001B2940
 * Original: 0x001B2940 - 0x001B29DA (154 bytes, 60 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B2940: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B294D; /* jne: not equal / not zero */

loc_001B2949: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001B294D: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, edi);
    edi = 8;
    if (TEST_Z(_fa, _fb)) goto loc_001B295A; /* je: equal / zero */

loc_001B295A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B2963; /* je: equal / zero */

loc_001B295E: ;
    edi = 0x208;

loc_001B2963: ;
    SET_LO8(ecx, MEM8(0x462156));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B2977; /* je: equal / zero */

loc_001B296D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B2977; /* jne: not equal / not zero */

loc_001B2971: ;
    edi = edi | 0x200;

loc_001B2977: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B2981; /* je: equal / zero */

loc_001B297B: ;
    edi = edi | 0x200;

loc_001B2981: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001B298E; /* jae: above or equal (unsigned >=) */

loc_001B2989: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001B298E: ;
    eax = eax + eax;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B2996u); RECOMP_ABI_CALL(0x00361520u, sub_00361520); /* call 0x00361520 */

loc_001B2996: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x8007000Eu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x8007000Eu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B29CB; /* je: equal / zero */

loc_001B29AC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8876017Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x8876017Cu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B29CB; /* je: equal / zero */

loc_001B29B4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B2989; /* jne: not equal / not zero */

loc_001B29B8: ;
    MEM32(esi + 0x1C) = eax;
    SET_LO8(eax, MEM8(esi + 0x20));
    MEM32(esi + 0x24) = edi;
    SET_LO8(eax, LO8(eax) | 1);
    MEM8(esi + 0x20) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001B29CB: ;
    ecx = MEM32(esi + 0x28);
    POP32(esp, edi);
    MEM8(ecx + 0x15D) = 1;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B29E0
 * Original: 0x001B29E0 - 0x001B2A1A (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B29E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B29E0: ;
    SET_LO8(eax, MEM8(0x5BB3E0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B29ED; /* je: equal / zero */

loc_001B29E9: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_001B29F1;

loc_001B29ED: ;
    SET_LO8(eax, MEM8(esp + 4));

loc_001B29F1: ;
    edx = 0; /* xor self */
    SET_LO8(edx, LO8(eax));
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x2D4);
    edx = edx ^ esi;
    edx = edx & 1;
    esi = esi ^ edx;
    MEM32(ecx + 0x2D4) = esi;
    MEM8(ecx + 0x2A4) = LO8(eax);
    MEM32(ecx + 0x160) = MEM32(ecx + 0x160) | 8;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B2A20
 * Original: 0x001B2A20 - 0x001B2A27 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2A20(void)
{

loc_001B2A20: ;
    SET_LO8(eax, MEM8(ecx + 0x2A4));
    esp += 4; return; /* ret */

}

/**
 * sub_001B2A30
 * Original: 0x001B2A30 - 0x001B2ADA (170 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2A30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B2A30: ;
    esp = esp - 8;
    eax = MEM32(esp + 0xC);
    edx = MEM32(eax);
    MEM32(ecx + 0x2C0) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x2C4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x2C8) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x2CC) = edx;
    fp_push(MEMF(eax + 0xC)); /* fld float */
    ecx = MEM32(eax);
    fp_top() = fp_top() * MEMF(0x3C8360); /* fmul dword ptr [0x3c8360] */
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x36C658);
    esi = esi | 0x1000;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = eax;
    MEM32(0x36C658) = esi;
    PUSH32(esp, 0x001B2A8Fu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001B2A8F: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8360); /* fmul dword ptr [0x3c8360] */
    esi = eax;
    esi = esi << 8;
    PUSH32(esp, 0x001B2AA3u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001B2AA3: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8360); /* fmul dword ptr [0x3c8360] */
    esi = esi | eax;
    esi = esi << 8;
    PUSH32(esp, 0x001B2AB7u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001B2AB7: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8360); /* fmul dword ptr [0x3c8360] */
    esi = esi | eax;
    esi = esi << 8;
    PUSH32(esp, 0x001B2ACBu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001B2ACB: ;
    esi = esi | eax;
    MEM32(0x36CA2C) = esi;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B2AE0
 * Original: 0x001B2AE0 - 0x001B2B0A (42 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2AE0(void)
{

loc_001B2AE0: ;
    edx = MEM32(ecx + 0x2C0);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x2C4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x2C8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0x2CC);
    MEM32(eax + 0xC) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B2B10
 * Original: 0x001B2B10 - 0x001B2B99 (137 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2B10(void)
{

loc_001B2B10: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001B2B1Cu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_001B2B1C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8C);
    PUSH32(esp, 0x001B2B27u); RECOMP_ABI_CALL(0x001E8BE0u, sub_001E8BE0); /* call 0x001E8BE0 */

loc_001B2B27: ;
    edx = eax;
    eax = 0; /* xor self */
    MEM32(esi + 0x4C4) = edx;
    edi = edx;
    ecx = 0x11;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = edx + 0x48;
    ecx = 0x11;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    esp = esp + 8;
    MEM32(edx + 0x44) = eax;
    eax = MEM32(esi + 0x4C8);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, 0x001B2B5Cu); RECOMP_ABI_CALL(0x0023FFC0u, sub_0023FFC0); /* call 0x0023FFC0 */

loc_001B2B5C: ;
    ecx = MEM32(esi + 0x4C4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x78) = edx;
    eax = MEM32(esi + 0x4C4);
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x7C) = ecx;
    edx = MEM32(esi + 0x4C4);
    eax = MEM32(esp + 0x10);
    MEM32(edx + 0x80) = eax;
    ecx = MEM32(esi + 0x4C4);
    edx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(ecx + 0x54) = edx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001B2BA0
 * Original: 0x001B2BA0 - 0x001B2BB7 (23 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2BA0(void)
{

loc_001B2BA0: ;
    eax = MEM32(ecx + 0x4C4);
    edx = MEM32(esp + 4);
    MEM32(eax + 0x40) = edx;
    MEM32(ecx + 0x160) = MEM32(ecx + 0x160) | 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B2BC0
 * Original: 0x001B2BC0 - 0x001B2BCA (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2BC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B2BC0: ;
    eax = MEM32(ecx + 0x4C4);
    fp_push(MEMF(eax + 0x40)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B2BD0
 * Original: 0x001B2BD0 - 0x001B2C0E (62 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2BD0(void)
{

loc_001B2BD0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x4C4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    edx = MEM32(ecx + 0x4C4);
    MEM32(edx + 4) = esi;
    esi = MEM32(eax + 8);
    edx = MEM32(ecx + 0x4C4);
    MEM32(edx + 8) = esi;
    eax = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x4C4);
    MEM32(edx + 0xC) = eax;
    MEM32(ecx + 0x160) = MEM32(ecx + 0x160) | 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B2C10
 * Original: 0x001B2C10 - 0x001B2C45 (53 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2C10(void)
{

loc_001B2C10: ;
    eax = MEM32(ecx + 0x4C4);
    edx = MEM32(eax);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x4C4);
    edx = MEM32(edx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x4C4);
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0x4C4);
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B2C50
 * Original: 0x001B2C50 - 0x001B2C8F (63 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2C50(void)
{

loc_001B2C50: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x4C4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(edx + 0x30) = esi;
    esi = MEM32(eax + 4);
    edx = MEM32(ecx + 0x4C4);
    MEM32(edx + 0x34) = esi;
    esi = MEM32(eax + 8);
    edx = MEM32(ecx + 0x4C4);
    MEM32(edx + 0x38) = esi;
    eax = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x4C4);
    MEM32(edx + 0x3C) = eax;
    MEM32(ecx + 0x160) = MEM32(ecx + 0x160) | 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B2C90
 * Original: 0x001B2C90 - 0x001B2CC6 (54 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2C90(void)
{

loc_001B2C90: ;
    eax = MEM32(ecx + 0x4C4);
    edx = MEM32(eax + 0x30);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x4C4);
    edx = MEM32(edx + 0x34);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x4C4);
    edx = MEM32(edx + 0x38);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0x4C4);
    edx = MEM32(ecx + 0x3C);
    MEM32(eax + 0xC) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B2CD0
 * Original: 0x001B2CD0 - 0x001B2D0F (63 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2CD0(void)
{

loc_001B2CD0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x4C4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(edx + 0x10) = esi;
    esi = MEM32(eax + 4);
    edx = MEM32(ecx + 0x4C4);
    MEM32(edx + 0x14) = esi;
    esi = MEM32(eax + 8);
    edx = MEM32(ecx + 0x4C4);
    MEM32(edx + 0x18) = esi;
    eax = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x4C4);
    MEM32(edx + 0x1C) = eax;
    MEM32(ecx + 0x160) = MEM32(ecx + 0x160) | 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B2D10
 * Original: 0x001B2D10 - 0x001B2D46 (54 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2D10(void)
{

loc_001B2D10: ;
    eax = MEM32(ecx + 0x4C4);
    edx = MEM32(eax + 0x10);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x4C4);
    edx = MEM32(edx + 0x14);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x4C4);
    edx = MEM32(edx + 0x18);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0x4C4);
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0xC) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B2D50
 * Original: 0x001B2D50 - 0x001B2D8F (63 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2D50(void)
{

loc_001B2D50: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x4C4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(edx + 0x20) = esi;
    esi = MEM32(eax + 4);
    edx = MEM32(ecx + 0x4C4);
    MEM32(edx + 0x24) = esi;
    esi = MEM32(eax + 8);
    edx = MEM32(ecx + 0x4C4);
    MEM32(edx + 0x28) = esi;
    eax = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x4C4);
    MEM32(edx + 0x2C) = eax;
    MEM32(ecx + 0x160) = MEM32(ecx + 0x160) | 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B2D90
 * Original: 0x001B2D90 - 0x001B2DC6 (54 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2D90(void)
{

loc_001B2D90: ;
    eax = MEM32(ecx + 0x4C4);
    edx = MEM32(eax + 0x20);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x4C4);
    edx = MEM32(edx + 0x24);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x4C4);
    edx = MEM32(edx + 0x28);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0x4C4);
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0xC) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B2DD0
 * Original: 0x001B2DD0 - 0x001B2EB4 (228 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2DD0(void)
{

loc_001B2DD0: ;
    edx = MEM32(ecx + 0x4C4);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(edx + 0x20) = esi;
    esi = MEM32(eax + 4);
    edx = MEM32(ecx + 0x4C4);
    MEM32(edx + 0x24) = esi;
    esi = MEM32(eax + 8);
    edx = MEM32(ecx + 0x4C4);
    MEM32(edx + 0x28) = esi;
    eax = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x4C4);
    MEM32(edx + 0x2C) = eax;
    edx = MEM32(ecx + 0x4C4);
    eax = MEM32(esp + 8);
    esi = MEM32(eax);
    MEM32(edx + 0x10) = esi;
    esi = MEM32(eax + 4);
    edx = MEM32(ecx + 0x4C4);
    MEM32(edx + 0x14) = esi;
    esi = MEM32(eax + 8);
    edx = MEM32(ecx + 0x4C4);
    MEM32(edx + 0x18) = esi;
    eax = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x4C4);
    MEM32(edx + 0x1C) = eax;
    edx = MEM32(ecx + 0x4C4);
    eax = MEM32(esp + 0xC);
    esi = MEM32(eax);
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    edx = MEM32(ecx + 0x4C4);
    MEM32(edx + 4) = esi;
    esi = MEM32(eax + 8);
    edx = MEM32(ecx + 0x4C4);
    MEM32(edx + 8) = esi;
    eax = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x4C4);
    MEM32(edx + 0xC) = eax;
    edx = MEM32(ecx + 0x4C4);
    eax = MEM32(esp + 0x14);
    esi = MEM32(eax);
    MEM32(edx + 0x30) = esi;
    esi = MEM32(eax + 4);
    edx = MEM32(ecx + 0x4C4);
    MEM32(edx + 0x34) = esi;
    esi = MEM32(eax + 8);
    edx = MEM32(ecx + 0x4C4);
    MEM32(edx + 0x38) = esi;
    eax = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x4C4);
    MEM32(edx + 0x3C) = eax;
    eax = MEM32(esp + 0x18);
    edx = MEM32(ecx + 0x4C4);
    MEM32(edx + 0x40) = eax;
    MEM32(ecx + 0x160) = MEM32(ecx + 0x160) | 1;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001B2EC0
 * Original: 0x001B2EC0 - 0x001B2F98 (216 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2EC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B2EC0: ;
    edx = MEM32(ecx + 0x4C4);
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    MEM32(edx + 0x44) = eax;
    esi = MEM32(ecx + 0x160);
    edx = 1;
    esi = esi | edx;
    MEM32(ecx + 0x160) = esi;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x2D4);
    esi = eax;
    esi = esi << 0x1B;
    esi = esi ^ edi;
    esi = esi & 0x38000000;
    edi = edi ^ esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEM32(ecx + 0x2D4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_A(_fa, _fb)) goto loc_001B2F95; /* ja: above (unsigned >) */

loc_001B2F08: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1B2F98); /* switch: 6 entries, 6 targets */
    if (_jt == 0x001B2F0Fu) goto loc_001B2F0F;
    if (_jt == 0x001B2F18u) goto loc_001B2F18;
    if (_jt == 0x001B2F2Cu) goto loc_001B2F2C;
    if (_jt == 0x001B2F3Bu) goto loc_001B2F3B;
    if (_jt == 0x001B2F50u) goto loc_001B2F50;
    if (_jt == 0x001B2F74u) goto loc_001B2F74;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001B2F0F: ;
    eax = 0; /* xor self */
    MEM32(0x36CA18) = eax;
    goto loc_001B2F58;

loc_001B2F18: ;
    eax = 0; /* xor self */
    MEM32(0x36CA1C) = eax;
    MEM32(0x36CA18) = eax;
    MEM32(0x36CA20) = edx;
    goto loc_001B2F62;

loc_001B2F2C: ;
    eax = 0; /* xor self */
    MEM32(0x36CA1C) = edx;
    MEM32(0x36CA18) = eax;
    goto loc_001B2F5D;

loc_001B2F3B: ;
    eax = 0; /* xor self */
    MEM32(0x36CA1C) = edx;
    MEM32(0x36CA18) = eax;
    MEM32(0x36CA20) = edx;
    goto loc_001B2F62;

loc_001B2F50: ;
    eax = 0; /* xor self */
    MEM32(0x36CA18) = edx;

loc_001B2F58: ;
    MEM32(0x36CA1C) = eax;

loc_001B2F5D: ;
    MEM32(0x36CA20) = eax;

loc_001B2F62: ;
    MEM32(0x36C658) = MEM32(0x36C658) | 0x1000;
    MEM32(0x36CA24) = eax;
    esp += 8; return; /* ret 4 */

loc_001B2F74: ;
    eax = 0; /* xor self */
    MEM32(0x36CA1C) = eax;
    MEM32(0x36CA18) = eax;
    MEM32(0x36CA20) = eax;
    MEM32(0x36C658) = MEM32(0x36C658) | 0x1000;
    MEM32(0x36CA24) = edx;

loc_001B2F95: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B2FB0
 * Original: 0x001B2FB0 - 0x001B2FC0 (16 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2FB0(void)
{

loc_001B2FB0: ;
    eax = MEM32(ecx + 0x4C4);
    eax = MEM32(eax + 0x44);
    esp += 4; return; /* ret */

}

/**
 * sub_001B2FC0
 * Original: 0x001B2FC0 - 0x001B2FD4 (20 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2FC0(void)
{

loc_001B2FC0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x4CC) = LO8(eax);
    MEM32(ecx + 0x160) = MEM32(ecx + 0x160) | 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B2FE0
 * Original: 0x001B2FE0 - 0x001B2FE7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2FE0(void)
{

loc_001B2FE0: ;
    SET_LO8(eax, MEM8(ecx + 0x4CC));
    esp += 4; return; /* ret */

}

/**
 * sub_001B2FF0
 * Original: 0x001B2FF0 - 0x001B300F (31 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2FF0(void)
{

loc_001B2FF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    edi = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001B3001u); RECOMP_ABI_CALL(0x00243650u, sub_00243650); /* call 0x00243650 */

loc_001B3001: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x104); PUSH32(esp, 0x001B300Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B300A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B3010
 * Original: 0x001B3010 - 0x001B3064 (84 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B3010: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    edx = edx >> 0x10;
    esi = eax;
    esi = esi & 0xFF;
    edx = ZX8(LO8(edx));
    esi = esi << 0x10;
    eax = eax & 0xFF00FF00u;
    edx = edx | esi;
    edx = edx | eax;
    SET_LO8(eax, MEM8(ecx + 0x530));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(ecx + 0x160);
    MEM32(ecx + 0x4C8) = edx;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001B3056; /* je: equal / zero */

loc_001B304A: ;
    eax = eax | 1;
    MEM32(ecx + 0x160) = eax;
    esp += 8; return; /* ret 4 */

loc_001B3056: ;
    eax = eax | 0x100;
    MEM32(ecx + 0x160) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B3070
 * Original: 0x001B3070 - 0x001B30A0 (48 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3070(void)
{

loc_001B3070: ;
    eax = MEM32(ecx + 0x4C8);
    ecx = ZX8(MEM8(ecx + 0x4CA));
    edx = eax;
    edx = edx & 0xFF;
    edx = edx << 0x10;
    edx = edx | ecx;
    ecx = MEM32(esp + 4);
    eax = eax & 0xFF00FF00u;
    edx = edx | eax;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001B309Du); RECOMP_ABI_CALL(0x0023FFC0u, sub_0023FFC0); /* call 0x0023FFC0 */

loc_001B309D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B30A0
 * Original: 0x001B30A0 - 0x001B30D0 (48 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B30A0(void)
{

loc_001B30A0: ;
    edx = MEM32(ecx + 0x4C8);
    ecx = ZX8(MEM8(ecx + 0x4CA));
    eax = edx;
    eax = eax & 0xFF;
    eax = eax << 0x10;
    eax = eax | ecx;
    edx = edx & 0xFF00FF00u;
    eax = eax | edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001B30D0
 * Original: 0x001B30D0 - 0x001B324C (380 bytes, 112 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B30D0(void)
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

loc_001B30D0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x530));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ebx = MEM32(esi + 0x4C4);
    if (TEST_Z(_fa, _fb)) goto loc_001B318B; /* je: equal / zero */

loc_001B30EB: ;
    SET_LO8(eax, MEM8(esi + 0x2A4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001B320F; /* jne: not equal / not zero */

loc_001B30FA: ;
    SET_LO8(eax, MEM8(esi + 0x230));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B31DB; /* je: equal / zero */

loc_001B3108: ;
    eax = MEM32(esi);
    edi = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x458); PUSH32(esp, 0x001B3113u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B3113: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B3145; /* je: equal / zero */

loc_001B3117: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001B3145; /* jge: greater or equal (signed >=) */

loc_001B311C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x458); PUSH32(esp, 0x001B3128u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B3128: ;
    eax = MEM32(eax + 0x4C);
    eax = eax >> 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B320F; /* jne: not equal / not zero */

loc_001B3135: ;
    edx = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x458); PUSH32(esp, 0x001B3141u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B3141: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B3117; /* jne: not equal / not zero */

loc_001B3145: ;
    ebx = MEM32(esi + 0x4C4);
    edx = MEM32(esi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    ebx = ebx + 0x48;
    { uint32_t _icall_target = MEM32(edx + 0x110); PUSH32(esp, 0x001B315Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B315D: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ebx + 0x30) = ecx;
    edx = MEM32(esp + 0x10);
    MEM32(ebx + 0x34) = edx;
    eax = MEM32(esp + 0x14);
    MEM32(ebx + 0x38) = eax;
    ecx = MEM32(esp + 0x18);
    MEM32(ebx + 0xC) = ecx;
    eax = 0; /* xor self */

loc_001B317B: ;
    MEM32(0x36C658) = MEM32(0x36C658) | 0x1000;
    MEM32(0x36CA24) = eax;
    POP32(esp, edi);

loc_001B318B: ;
    SET_LO8(eax, MEM8(esi + 0x4CC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B3227; /* je: equal / zero */

loc_001B3199: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ebx + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001B31CF; /* jp: parity */

loc_001B31AB: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ebx + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001B31CF; /* jp: parity */

loc_001B31BD: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ebx + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001B3227; /* jnp: not parity */

loc_001B31CF: ;
    MEM32(0x36C9FC) = 1;
    goto loc_001B3231;

loc_001B31DB: ;
    edx = MEM32(esi + 0x25C);
    eax = esi + 0x25C;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B3145; /* jbe: below or equal (unsigned <=) */

loc_001B31F1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001B3145; /* jge: greater or equal (signed >=) */

loc_001B31FA: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B320F; /* je: equal / zero */

loc_001B31FF: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_A(_fa & _fb, 0)) goto loc_001B31F1; /* ja: above (unsigned >) */

loc_001B320A: ;
    goto loc_001B3145;

loc_001B320F: ;
    eax = MEM32(esi + 0x4C4);
    edx = MEM32(eax + 0x44);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    goto loc_001B317B;

loc_001B3227: ;
    MEM32(0x36C9FC) = 0;

loc_001B3231: ;
    eax = MEM32(0x36C658);
    eax = eax | 0x3000;
    PUSH32(esp, ebx);
    MEM32(0x36C658) = eax;
    PUSH32(esp, 0x001B3246u); RECOMP_ABI_CALL(0x0035AFB0u, sub_0035AFB0); /* call 0x0035AFB0 */

loc_001B3246: ;
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
 * sub_001B3250
 * Original: 0x001B3250 - 0x001B32AF (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B3250: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    goto loc_001B3260;

    /* nop */
    /* nop */

loc_001B3260: ;
    eax = MEM32(edi + 0x1C4);
    ecx = MEM32(esi + eax);
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B327E; /* jne: not equal / not zero */

loc_001B3279: ;
    PUSH32(esp, 0x001B327Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B327E: ;
    ecx = MEM32(edi + 0x1C4);
    MEM32(esi + ecx) = 0;
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B3260; /* jl: less (signed <) */

loc_001B3293: ;
    edx = MEM32(edi + 0x1C4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001B329Fu); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_001B329F: ;
    esp = esp + 4;
    MEM32(edi + 0x1C4) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B32B0
 * Original: 0x001B32B0 - 0x001B32CA (26 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B32B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B32B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001B32C7; /* jge: greater or equal (signed >=) */

loc_001B32B9: ;
    ecx = MEM32(ecx + 0x1C4);
    ecx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0x001B32C7u); RECOMP_ABI_CALL(0x001A44A0u, sub_001A44A0); /* call 0x001A44A0 */

loc_001B32C7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B32D0
 * Original: 0x001B32D0 - 0x001B32DE (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B32D0(void)
{

loc_001B32D0: ;
    eax = MEM32(esp + 4);
    SET_LO8(eax, MEM8(eax + ecx + 0x1C8));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B32E0
 * Original: 0x001B32E0 - 0x001B332E (78 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B32E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B32E0: ;
    SET_LO8(edx, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    eax = MEM32(esp + 4);
    MEM8(eax + ecx + 0x1D8) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001B32FC; /* je: equal / zero */

loc_001B32F4: ;
    MEM8(eax + ecx + 0x1D8) = 1;

loc_001B32FC: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B330F; /* jne: not equal / not zero */

loc_001B3305: ;
    MEM8(eax + ecx + 0x1D8) = MEM8(eax + ecx + 0x1D8) | 2;
    goto loc_001B3316;

loc_001B330F: ;
    MEM8(eax + ecx + 0x1D0) = LO8(edx);

loc_001B3316: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    SET_LO8(ebx, MEM8(eax + ecx + 0x1C8));
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x348); PUSH32(esp, 0x001B332Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B332A: ;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B3330
 * Original: 0x001B3330 - 0x001B334F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B3330: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax + ecx + 0x1D8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + ecx + 0x1D8), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B3344; /* je: equal / zero */

loc_001B333E: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

loc_001B3344: ;
    eax = ZX8(MEM8(eax + ecx + 0x1D0));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B3350
 * Original: 0x001B3350 - 0x001B3362 (18 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3350(void)
{

loc_001B3350: ;
    eax = MEM32(esp + 4);
    eax = ZX8(MEM8(eax + ecx + 0x1D8));
    eax = eax & 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B3370
 * Original: 0x001B3370 - 0x001B3394 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B3370: ;
    SET_LO8(eax, MEM8(0x5BB3E2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B337D; /* je: equal / zero */

loc_001B3379: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_001B3381;

loc_001B337D: ;
    SET_LO8(eax, MEM8(esp + 4));

loc_001B3381: ;
    MEM8(ecx + 0x1E0) = LO8(eax);
    MEM32(ecx + 0x160) = MEM32(ecx + 0x160) | 0x5020;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B33A0
 * Original: 0x001B33A0 - 0x001B33A7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B33A0(void)
{

loc_001B33A0: ;
    SET_LO8(eax, MEM8(ecx + 0x1E0));
    esp += 4; return; /* ret */

}

/**
 * sub_001B33B0
 * Original: 0x001B33B0 - 0x001B33B8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B33B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B33B0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x330)); return; /* indirect tail jmp */

}

/**
 * sub_001B33C0
 * Original: 0x001B33C0 - 0x001B35CB (523 bytes, 122 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B33C0(void)
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

loc_001B33C0: ;
    esp = esp - 8;
    eax = MEM32(0x5BC508);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    esi = ecx;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E790C);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = 0x3F800000;
    PUSH32(esp, 0x001B33F0u); RECOMP_ABI_CALL(0x001A5980u, sub_001A5980); /* call 0x001A5980 */

loc_001B33F0: ;
    esp = esp + 0x18;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B3401; /* je: equal / zero */

loc_001B33F7: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001B3401u); RECOMP_ABI_CALL(0x0035DE20u, sub_0035DE20); /* call 0x0035DE20 */

loc_001B3401: ;
    edx = ZX8(MEM8(esi + 0x2F0));
    ecx = 0x40300;
    PUSH32(esp, 0x001B3412u); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B3412: ;
    eax = MEM32(esi + 0x2F4);
    edx = MEM32(eax * 4 + 0x3E3FA8);
    ecx = 0x4033C;
    PUSH32(esp, 0x001B3429u); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B3429: ;
    fp_push(MEMF(esi + 0x2F8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8360); /* fmul dword ptr [0x3c8360] */
    PUSH32(esp, 0x001B343Au); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001B343A: ;
    edx = eax;
    ecx = 0x40340;
    PUSH32(esp, 0x001B3446u); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B3446: ;
    ecx = MEM32(esi + 0x2FC);
    edx = MEM32(ecx * 4 + 0x3E3FC8);
    ecx = 0x4037C;
    PUSH32(esp, 0x001B345Du); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B345D: ;
    SET_LO8(ecx, MEM8(esi + 0x2D8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B3479; /* je: equal / zero */

loc_001B3469: ;
    edx = MEM32(esi + 0x2DC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    eax = eax + 0x900;

loc_001B3479: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B347Fu); RECOMP_ABI_CALL(0x0035DCD0u, sub_0035DCD0); /* call 0x0035DCD0 */

loc_001B347F: ;
    SET_LO8(eax, MEM8(esi + 0x300));
    edx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, edx);
    PUSH32(esp, 0x001B3492u); RECOMP_ABI_CALL(0x0035EB50u, sub_0035EB50); /* call 0x0035EB50 */

loc_001B3492: ;
    eax = MEM32(esi + 0x304);
    edx = MEM32(eax * 4 + 0x3E3FA8);
    ecx = 0x40354;
    PUSH32(esp, 0x001B34A9u); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B34A9: ;
    ecx = MEM32(esi + 0x30C);
    edx = MEM32(ecx * 4 + 0x3E3FD0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001B34BCu); RECOMP_ABI_CALL(0x0035DFF0u, sub_0035DFF0); /* call 0x0035DFF0 */

loc_001B34BC: ;
    edx = ZX8(MEM8(esi + 0x2E4));
    ecx = 0x40304;
    PUSH32(esp, 0x001B34CDu); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B34CD: ;
    eax = MEM32(esi + 0x2E8);
    edx = MEM32(eax * 4 + 0x3E3FDC);
    ecx = 0x40344;
    PUSH32(esp, 0x001B34E4u); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B34E4: ;
    ecx = MEM32(esi + 0x2EC);
    edx = MEM32(ecx * 4 + 0x3E3FDC);
    ecx = 0x40348;
    PUSH32(esp, 0x001B34FBu); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B34FB: ;
    edx = ZX8(MEM8(esi + 0x310));
    PUSH32(esp, edx);
    PUSH32(esp, 0x001B3508u); RECOMP_ABI_CALL(0x0035EBE0u, sub_0035EBE0); /* call 0x0035EBE0 */

loc_001B3508: ;
    eax = MEM32(esi + 0x324);
    ecx = MEM32(eax * 4 + 0x3E4008);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001B351Bu); RECOMP_ABI_CALL(0x0035EC80u, sub_0035EC80); /* call 0x0035EC80 */

loc_001B351B: ;
    edx = MEM32(esi + 0x32C);
    edx = MEM32(edx * 4 + 0x3E4008);
    ecx = 0x40374;
    PUSH32(esp, 0x001B3532u); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B3532: ;
    eax = MEM32(esi + 0x328);
    edx = MEM32(eax * 4 + 0x3E4008);
    ecx = 0x40378;
    PUSH32(esp, 0x001B3549u); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B3549: ;
    ecx = MEM32(esi + 0x320);
    edx = MEM32(ecx * 4 + 0x3E3FA8);
    ecx = 0x40364;
    PUSH32(esp, 0x001B3560u); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B3560: ;
    edx = MEM32(esi + 0x314);
    ecx = 0x40368;
    PUSH32(esp, 0x001B3570u); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B3570: ;
    edx = MEM32(esi + 0x318);
    ecx = 0x4036C;
    PUSH32(esp, 0x001B3580u); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B3580: ;
    edx = MEM32(esi + 0x31C);
    ecx = 0x40360;
    PUSH32(esp, 0x001B3590u); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B3590: ;
    SET_LO8(edx, MEM8(esi + 0x2D0));
    PUSH32(esp, 0);
    MEM8(esp + 0xC) = LO8(edx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E78F8);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001B35B3u); RECOMP_ABI_CALL(0x001A59B0u, sub_001A59B0); /* call 0x001A59B0 */

loc_001B35B3: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esi);
    esp = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C4); PUSH32(esp, 0x001B35C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B35C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B35D0
 * Original: 0x001B35D0 - 0x001B362A (90 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B35D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B35D0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(ecx + 0x2D0) = LO8(eax);
    if (TEST_NZ(_fa, _fb)) goto loc_001B361C; /* jne: not equal / not zero */

loc_001B35DE: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x4C0));
    edx = 0; /* xor self */
    eax = ecx + 0x44C;
    /* nop */

loc_001B35F0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B35F9; /* je: equal / zero */

loc_001B35F4: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B3616; /* je: equal / zero */

loc_001B35F9: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B3616; /* je: equal / zero */

loc_001B35FE: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B35F0; /* jl: less (signed <) */

loc_001B3607: ;
    eax = ZX8(MEM8(esp + 8));
    POP32(esp, ebx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0035DD80(); return; /* tail jmp 0x0035DD80 */

loc_001B3616: ;
    MEM8(esp + 8) = 1;
    POP32(esp, ebx);

loc_001B361C: ;
    eax = ZX8(MEM8(esp + 4));
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0035DD80(); return; /* tail jmp 0x0035DD80 */

}

/**
 * sub_001B3630
 * Original: 0x001B3630 - 0x001B3637 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3630(void)
{

loc_001B3630: ;
    SET_LO8(eax, MEM8(ecx + 0x2D0));
    esp += 4; return; /* ret */

}

/**
 * sub_001B3640
 * Original: 0x001B3640 - 0x001B3667 (39 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B3640: ;
    SET_LO8(eax, MEM8(0x5BB3F1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B364D; /* je: equal / zero */

loc_001B3649: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_001B3651;

loc_001B364D: ;
    SET_LO8(eax, MEM8(esp + 4));

loc_001B3651: ;
    MEM8(ecx + 0x2F0) = LO8(eax);
    edx = ZX8(LO8(eax));
    ecx = 0x40300;
    PUSH32(esp, 0x001B3664u); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B3664: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B3670
 * Original: 0x001B3670 - 0x001B3677 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3670(void)
{

loc_001B3670: ;
    SET_LO8(eax, MEM8(ecx + 0x2F0));
    esp += 4; return; /* ret */

}

/**
 * sub_001B3680
 * Original: 0x001B3680 - 0x001B369E (30 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3680(void)
{

loc_001B3680: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2F4) = eax;
    edx = MEM32(eax * 4 + 0x3E3FA8);
    ecx = 0x4033C;
    PUSH32(esp, 0x001B369Bu); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B369B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B36A0
 * Original: 0x001B36A0 - 0x001B36A7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B36A0(void)
{

loc_001B36A0: ;
    eax = MEM32(ecx + 0x2F4);
    esp += 4; return; /* ret */

}

/**
 * sub_001B36B0
 * Original: 0x001B36B0 - 0x001B36D8 (40 bytes, 9 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B36B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B36B0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = fp_top() * MEMF(0x3C8360); /* fmul dword ptr [0x3c8360] */
    MEM32(ecx + 0x2F8) = eax;
    PUSH32(esp, 0x001B36C9u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001B36C9: ;
    edx = eax;
    ecx = 0x40340;
    PUSH32(esp, 0x001B36D5u); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B36D5: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B36E0
 * Original: 0x001B36E0 - 0x001B36E7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B36E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B36E0: ;
    fp_push(MEMF(ecx + 0x2F8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B36F0
 * Original: 0x001B36F0 - 0x001B36F7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B36F0(void)
{

loc_001B36F0: ;
    SET_LO8(eax, MEM8(ecx + 0x1C0));
    esp += 4; return; /* ret */

}

/**
 * sub_001B3700
 * Original: 0x001B3700 - 0x001B3765 (101 bytes, 30 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B3700: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, MEM8(esp + 8));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    PUSH32(esp, esi);
    MEM8(ecx + 0x2E2) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 0x18));
    esi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(ecx + 0x2E0) = LO8(eax);
    MEM8(ecx + 0x2E1) = LO8(edx);
    MEM8(ecx + 0x2E3) = LO8(ebx);
    if (TEST_Z(_fa, _fb)) goto loc_001B3735; /* je: equal / zero */

loc_001B3730: ;
    esi = 0x10000;

loc_001B3735: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B373F; /* je: equal / zero */

loc_001B3739: ;
    esi = esi | 0x100;

loc_001B373F: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B374A; /* je: equal / zero */

loc_001B3747: ;
    esi = esi | 1;

loc_001B374A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B3754; /* je: equal / zero */

loc_001B374E: ;
    esi = esi | 0x1000000;

loc_001B3754: ;
    edx = esi;
    ecx = 0x40358;
    PUSH32(esp, 0x001B3760u); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B3760: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001B3770
 * Original: 0x001B3770 - 0x001B37A3 (51 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3770(void)
{

loc_001B3770: ;
    SET_LO8(eax, MEM8(ecx + 0x2E0));
    edx = MEM32(esp + 4);
    MEM8(edx) = LO8(eax);
    SET_LO8(eax, MEM8(ecx + 0x2E1));
    edx = MEM32(esp + 8);
    MEM8(edx) = LO8(eax);
    SET_LO8(eax, MEM8(ecx + 0x2E2));
    edx = MEM32(esp + 0xC);
    MEM8(edx) = LO8(eax);
    SET_LO8(eax, MEM8(ecx + 0x2E3));
    ecx = MEM32(esp + 0x10);
    MEM8(ecx) = LO8(eax);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001B37B0
 * Original: 0x001B37B0 - 0x001B37CE (30 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B37B0(void)
{

loc_001B37B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2FC) = eax;
    edx = MEM32(eax * 4 + 0x3E3FC8);
    ecx = 0x4037C;
    PUSH32(esp, 0x001B37CBu); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B37CB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B37D0
 * Original: 0x001B37D0 - 0x001B37D7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B37D0(void)
{

loc_001B37D0: ;
    eax = MEM32(ecx + 0x2FC);
    esp += 4; return; /* ret */

}

/**
 * sub_001B37E0
 * Original: 0x001B37E0 - 0x001B3819 (57 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B37E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B37E0: ;
    SET_LO8(eax, MEM8(0x5BB3F4));
    edx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B37EF; /* je: equal / zero */

loc_001B37EB: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_001B37F3;

loc_001B37EF: ;
    SET_LO8(eax, MEM8(esp + 4));

loc_001B37F3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(ecx + 0x2D8) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_001B3810; /* je: equal / zero */

loc_001B37FD: ;
    eax = MEM32(ecx + 0x2DC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    edx = edx + 0x900;

loc_001B3810: ;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0035DCD0(); return; /* tail jmp 0x0035DCD0 */

}

/**
 * sub_001B3820
 * Original: 0x001B3820 - 0x001B3827 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3820(void)
{

loc_001B3820: ;
    SET_LO8(eax, MEM8(ecx + 0x2D8));
    esp += 4; return; /* ret */

}

/**
 * sub_001B3830
 * Original: 0x001B3830 - 0x001B385D (45 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3830(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3830: ;
    SET_LO8(edx, MEM8(ecx + 0x2D8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2DC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001B385A; /* je: equal / zero */

loc_001B3844: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx + 0x900;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0035DCD0(); return; /* tail jmp 0x0035DCD0 */

loc_001B385A: ;
    esp += 8; return; /* ret 4 */

}
