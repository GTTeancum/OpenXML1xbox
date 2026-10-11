/**
 * X-Men Legends - Recompiled code chunk 66
 * Functions: 250 (0x00296720 - 0x0029A770)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00296720
 * Original: 0x00296720 - 0x00296726 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296720(void)
{

loc_00296720: ;
    eax = MEM32(0x5BE5C8);
    esp += 4; return; /* ret */

}

/**
 * sub_00296730
 * Original: 0x00296730 - 0x0029674E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296730(void)
{

loc_00296730: ;
    PUSH32(esp, 0x29EED0);
    PUSH32(esp, 0x0029673Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029673A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE5CC);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029674Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0029674D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296750
 * Original: 0x00296750 - 0x00296777 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00296750: ;
    eax = MEM32(0x5BE5CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00296764; /* je: equal / zero */

loc_00296759: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00296776; /* jne: not equal / not zero */

loc_00296764: ;
    PUSH32(esp, 0x29EED0);
    PUSH32(esp, 0x0029676Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029676E: ;
    eax = MEM32(0x5BE5CC);
    esp = esp + 4;

loc_00296776: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296780
 * Original: 0x00296780 - 0x00296786 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296780(void)
{

loc_00296780: ;
    eax = MEM32(0x5BE5CC);
    esp += 4; return; /* ret */

}

/**
 * sub_00296790
 * Original: 0x00296790 - 0x002968AB (283 bytes, 69 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296790(void)
{

loc_00296790: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE5CC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002967A2u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002967A2: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x47292C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002967B2u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002967B2: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002967BDu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002967BD: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x3F800000;
    PUSH32(esp, 0x002967E9u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_002967E9: ;
    edx = edi + 2;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002967F4u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002967F4: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x3F800000;
    PUSH32(esp, 0x00296820u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00296820: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0029682Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029682B: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x3F800000;
    PUSH32(esp, 0x00296857u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00296857: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00296862u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296862: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x3F800000;
    PUSH32(esp, 0x0029688Eu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0029688E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472914);
    PUSH32(esp, 0x4728FC);
    PUSH32(esp, 0x4728E4);
    ecx = esi;
    PUSH32(esp, 0x002968A5u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002968A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_002968B0
 * Original: 0x002968B0 - 0x002968B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002968B0(void)
{

loc_002968B0: ;
    eax = MEM32(0x5BE5D0);
    esp += 4; return; /* ret */

}

/**
 * sub_002968C0
 * Original: 0x002968C0 - 0x002968C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002968C0(void)
{

loc_002968C0: ;
    eax = MEM32(0x5BE5D4);
    esp += 4; return; /* ret */

}

/**
 * sub_002968D0
 * Original: 0x002968D0 - 0x002968EE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002968D0(void)
{

loc_002968D0: ;
    PUSH32(esp, 0x29EFC0);
    PUSH32(esp, 0x002968DAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002968DA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE5D8);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002968EDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002968ED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002968F0
 * Original: 0x002968F0 - 0x00296917 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002968F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002968F0: ;
    eax = MEM32(0x5BE5D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00296904; /* je: equal / zero */

loc_002968F9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00296916; /* jne: not equal / not zero */

loc_00296904: ;
    PUSH32(esp, 0x29EFC0);
    PUSH32(esp, 0x0029690Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029690E: ;
    eax = MEM32(0x5BE5D8);
    esp = esp + 4;

loc_00296916: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296920
 * Original: 0x00296920 - 0x00296926 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296920(void)
{

loc_00296920: ;
    eax = MEM32(0x5BE5D8);
    esp += 4; return; /* ret */

}

/**
 * sub_00296930
 * Original: 0x00296930 - 0x0029694E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296930(void)
{

loc_00296930: ;
    PUSH32(esp, 0x2A05E0);
    PUSH32(esp, 0x0029693Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029693A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE5DC);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029694Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0029694D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296950
 * Original: 0x00296950 - 0x0029695A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296950(void)
{

loc_00296950: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x14) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00296960
 * Original: 0x00296960 - 0x002969F6 (150 bytes, 50 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00296960: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE5E0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00296970u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00296970: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x472968);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00296980u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00296980: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00296988u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296988: ;
    ebx = eax;
    eax = MEM32(0x5BE5E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002969AC; /* jne: not equal / not zero */

loc_00296993: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029699Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0029699E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002969A4u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002969A4: ;
    esp = esp + 8;
    MEM32(0x5BE5E8) = eax;

loc_002969AC: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x002969BAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002969BA: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x002969C3u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002969C3: ;
    edx = edi + 2;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002969CEu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002969CE: ;
    ecx = MEM32(0x5BC554);
    PUSH32(esp, edi);
    PUSH32(esp, 0x47295C);
    PUSH32(esp, 0x472950);
    MEM32(eax + 0x38) = ecx;
    PUSH32(esp, 0x472944);
    ecx = esi;
    MEM8(eax + 0x26) = 0;
    PUSH32(esp, 0x002969F2u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002969F2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296A00
 * Original: 0x00296A00 - 0x00296A1E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296A00(void)
{

loc_00296A00: ;
    PUSH32(esp, 0x2A0050);
    PUSH32(esp, 0x00296A0Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00296A0A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE5E4);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00296A1Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00296A1D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296A20
 * Original: 0x00296A20 - 0x00296CF5 (725 bytes, 201 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296A20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296A20: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE5E8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00296A34u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00296A34: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x472A38);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00296A44u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00296A44: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00296A4Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296A4C: ;
    ebp = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x14) = 1;
    PUSH32(esp, 0x00296A62u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00296A62: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ebx = 0x293920;
    ecx = esi;
    MEM32(ebp + 0x30) = ebx;
    MEM32(ebp + 0x34) = 0x1AA3E0;
    PUSH32(esp, 0x00296A7Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296A7C: ;
    ebp = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebp;
    PUSH32(esp, 0x00296A87u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00296A87: ;
    SET_LO8(eax, 4);
    edx = edi + 2;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(ebp + 0x26) = 0;
    MEM8(ebp + 0x28) = LO8(eax);
    MEM8(ebp + 0x27) = LO8(eax);
    MEM8(ebp + 0x2C) = 3;
    PUSH32(esp, 0x00296AA2u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296AA2: ;
    ebp = eax;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x00296AC8u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00296AC8: ;
    ecx = edi + 3;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x30) = ebx;
    PUSH32(esp, 0x00296AD6u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296AD6: ;
    ebp = eax;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = ebp;
    MEM32(esp + 0x18) = 0x3F19999A;
    MEM32(esp + 0x1C) = 0x3F19999A;
    MEM32(esp + 0x20) = 0x3F19999A;
    MEM32(esp + 0x24) = 0x3F800000;
    PUSH32(esp, 0x00296B04u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00296B04: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(ebp + 0x30) = ebx;
    PUSH32(esp, 0x00296B12u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296B12: ;
    ecx = esp + 0x14;
    ebp = eax;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0x3F800000;
    MEM32(esp + 0x20) = 0x3F800000;
    MEM32(esp + 0x24) = 0x3F800000;
    PUSH32(esp, 0x00296B40u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00296B40: ;
    edx = edi + 5;
    MEM32(ebp + 0x30) = ebx;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00296B4Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296B4E: ;
    ebp = eax;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0x3F800000;
    PUSH32(esp, 0x00296B7Cu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00296B7C: ;
    ecx = edi + 6;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x30) = ebx;
    PUSH32(esp, 0x00296B8Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296B8A: ;
    ebp = eax;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = ebp;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0x3F800000;
    PUSH32(esp, 0x00296BB0u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00296BB0: ;
    eax = edi + 7;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(ebp + 0x30) = ebx;
    PUSH32(esp, 0x00296BBEu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296BBE: ;
    ecx = edi + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(eax + 0x30) = ebx;
    PUSH32(esp, 0x00296BCCu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296BCC: ;
    ebp = eax;
    PUSH32(esp, 0x43340000);
    ecx = ebp;
    PUSH32(esp, 0x00296BDAu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00296BDA: ;
    edx = edi + 9;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x30) = ebx;
    PUSH32(esp, 0x00296BE8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296BE8: ;
    ebp = eax;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x00296C0Eu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00296C0E: ;
    ecx = edi + 0xA;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x30) = ebx;
    PUSH32(esp, 0x00296C1Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296C1C: ;
    edx = edi + 0xB;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(eax + 0x30) = ebx;
    PUSH32(esp, 0x00296C2Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296C2A: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x00296C4Eu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00296C4E: ;
    edx = edi + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00296C59u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296C59: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0xBF800000u;
    PUSH32(esp, 0x00296C7Du); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00296C7D: ;
    edx = edi + 0xD;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00296C88u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296C88: ;
    ebp = eax;
    PUSH32(esp, 0x00296C8Fu); RECOMP_ABI_CALL(0x001AA8A0u, sub_001AA8A0); /* call 0x001AA8A0 */

loc_00296C8F: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0xE;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = 0;
    MEM8(ebp + 0x28) = 1;
    MEM8(ebp + 0x27) = 1;
    MEM8(ebp + 0x2C) = 3;
    PUSH32(esp, 0x00296CADu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296CAD: ;
    ebx = eax;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0x00296CB8u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00296CB8: ;
    ecx = edi + 0xF;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(ebx + 0x26) = 0;
    PUSH32(esp, 0x00296CC7u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296CC7: ;
    ebx = eax;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0x00296CD2u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00296CD2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4729F8);
    PUSH32(esp, 0x4729B8);
    PUSH32(esp, 0x472978);
    ecx = esi;
    MEM8(ebx + 0x26) = 0;
    PUSH32(esp, 0x00296CEDu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00296CED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00296D00
 * Original: 0x00296D00 - 0x00296D27 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00296D00: ;
    eax = MEM32(0x5BE5F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00296D14; /* je: equal / zero */

loc_00296D09: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00296D26; /* jne: not equal / not zero */

loc_00296D14: ;
    PUSH32(esp, 0x29F060);
    PUSH32(esp, 0x00296D1Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00296D1E: ;
    eax = MEM32(0x5BE5F0);
    esp = esp + 4;

loc_00296D26: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296D30
 * Original: 0x00296D30 - 0x00296D36 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296D30(void)
{

loc_00296D30: ;
    eax = MEM32(0x5BE5F0);
    esp += 4; return; /* ret */

}

/**
 * sub_00296D40
 * Original: 0x00296D40 - 0x00296E35 (245 bytes, 84 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296D40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296D40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE5F0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00296D52u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00296D52: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x472AB4);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00296D62u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00296D62: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00296D6Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296D6A: ;
    ebp = eax;
    PUSH32(esp, 0x00296D71u); RECOMP_ABI_CALL(0x001AA8A0u, sub_001AA8A0); /* call 0x001AA8A0 */

loc_00296D71: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 1;
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    MEM8(ebp + 0x28) = 1;
    MEM8(ebp + 0x27) = 1;
    MEM8(ebp + 0x2C) = 3;
    PUSH32(esp, 0x00296D90u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296D90: ;
    ebp = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebp;
    PUSH32(esp, 0x00296D9Bu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00296D9B: ;
    ecx = edi + 2;
    SET_LO8(eax, 4);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    MEM8(ebp + 0x28) = LO8(eax);
    MEM8(ebp + 0x27) = LO8(eax);
    MEM8(ebp + 0x2C) = 3;
    PUSH32(esp, 0x00296DB5u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296DB5: ;
    ebp = eax;
    eax = MEM32(0x5BE688);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00296DDA; /* jne: not equal / not zero */

loc_00296DC0: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00296DCCu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00296DCC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00296DD2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00296DD2: ;
    esp = esp + 8;
    MEM32(0x5BE688) = eax;

loc_00296DDA: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 3;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00296DE8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296DE8: ;
    ecx = esp + 0x10;
    ebp = eax;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x00296DFAu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00296DFA: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    MEM32(ebp + 0x34) = 0x291D30;
    PUSH32(esp, 0x00296E0Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296E0F: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00296E18u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00296E18: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472AA0);
    PUSH32(esp, 0x472A8C);
    PUSH32(esp, 0x472A78);
    ecx = esi;
    PUSH32(esp, 0x00296E2Fu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00296E2F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296E40
 * Original: 0x00296E40 - 0x00296E46 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296E40(void)
{

loc_00296E40: ;
    eax = MEM32(0x5BE5F4);
    esp += 4; return; /* ret */

}

/**
 * sub_00296E50
 * Original: 0x00296E50 - 0x00296E56 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296E50(void)
{

loc_00296E50: ;
    eax = MEM32(0x5BE5F8);
    esp += 4; return; /* ret */

}

/**
 * sub_00296E60
 * Original: 0x00296E60 - 0x00296F27 (199 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296E60(void)
{

loc_00296E60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE5F8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00296E71u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00296E71: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x472B28);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00296E81u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00296E81: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00296E89u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296E89: ;
    ebx = eax;
    PUSH32(esp, 0x00296E90u); RECOMP_ABI_CALL(0x001AA950u, sub_001AA950); /* call 0x001AA950 */

loc_00296E90: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00296E9Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296E9E: ;
    ebx = eax;
    PUSH32(esp, 0x00296EA5u); RECOMP_ABI_CALL(0x001AB050u, sub_001AB050); /* call 0x001AB050 */

loc_00296EA5: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00296EB3u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296EB3: ;
    ebx = eax;
    PUSH32(esp, 0x00296EBAu); RECOMP_ABI_CALL(0x001AACB0u, sub_001AACB0); /* call 0x001AACB0 */

loc_00296EBA: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00296EC8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296EC8: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00296EDEu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00296EDE: ;
    ecx = edi + 6;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x1AA410;
    PUSH32(esp, 0x00296EF0u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296EF0: ;
    edx = edi + 7;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(eax + 0x30) = 0x293700;
    PUSH32(esp, 0x00296F02u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296F02: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00296F0Bu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00296F0B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472B08);
    PUSH32(esp, 0x472AE8);
    PUSH32(esp, 0x472AC8);
    ecx = esi;
    PUSH32(esp, 0x00296F22u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00296F22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296F30
 * Original: 0x00296F30 - 0x00296FC1 (145 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296F30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296F30: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00296F4F; /* je: equal / zero */

loc_00296F3A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00296F4F; /* jne: not equal / not zero */

loc_00296F4A: ;
    PUSH32(esp, 0x00296F4Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00296F4F: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00296F6B; /* je: equal / zero */

loc_00296F56: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00296F6B; /* jne: not equal / not zero */

loc_00296F66: ;
    PUSH32(esp, 0x00296F6Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00296F6B: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00296F87; /* je: equal / zero */

loc_00296F72: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00296F87; /* jne: not equal / not zero */

loc_00296F82: ;
    PUSH32(esp, 0x00296F87u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00296F87: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00296FA3; /* je: equal / zero */

loc_00296F8E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00296FA3; /* jne: not equal / not zero */

loc_00296F9E: ;
    PUSH32(esp, 0x00296FA3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00296FA3: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00296FC0; /* je: equal / zero */

loc_00296FAB: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00296FC0; /* jne: not equal / not zero */

loc_00296FBB: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00296FC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296F66
 * Original: 0x00296F66 - 0x00296FC1 (91 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296F66(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296F66: ;
    PUSH32(esp, 0x00296F6Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00296F6B: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00296F87; /* je: equal / zero */

loc_00296F72: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00296F87; /* jne: not equal / not zero */

loc_00296F82: ;
    PUSH32(esp, 0x00296F87u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00296F87: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00296FA3; /* je: equal / zero */

loc_00296F8E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00296FA3; /* jne: not equal / not zero */

loc_00296F9E: ;
    PUSH32(esp, 0x00296FA3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00296FA3: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00296FC0; /* je: equal / zero */

loc_00296FAB: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00296FC0; /* jne: not equal / not zero */

loc_00296FBB: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00296FC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296FD0
 * Original: 0x00296FD0 - 0x00296FEE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296FD0(void)
{

loc_00296FD0: ;
    PUSH32(esp, 0x29D9B0);
    PUSH32(esp, 0x00296FDAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00296FDA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE604);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00296FEDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00296FED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296FF0
 * Original: 0x00296FF0 - 0x00297014 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296FF0(void)
{

loc_00296FF0: ;
    esp = esp - 8;
    ecx = esp;
    PUSH32(esp, 0x00296FFBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00296FFB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x406660;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00297020
 * Original: 0x00297020 - 0x00297026 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297020(void)
{

loc_00297020: ;
    eax = MEM32(0x5BE608);
    esp += 4; return; /* ret */

}

/**
 * sub_00297030
 * Original: 0x00297030 - 0x00297036 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297030(void)
{

loc_00297030: ;
    eax = MEM32(0x5BE60C);
    esp += 4; return; /* ret */

}

/**
 * sub_00297040
 * Original: 0x00297040 - 0x002970F4 (180 bytes, 52 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297040(void)
{

loc_00297040: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE60C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00297053u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00297053: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x472B84);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00297063u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00297063: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029706Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029706B: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 2;
    PUSH32(esp, 0x00297081u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00297081: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x1AA0B0;
    PUSH32(esp, 0x00297093u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00297093: ;
    PUSH32(esp, 0x447A0000);
    ecx = eax;
    PUSH32(esp, 0x0029709Fu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0029709F: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002970AAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002970AA: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0x3F800000;
    PUSH32(esp, 0x002970D6u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_002970D6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472B70);
    PUSH32(esp, 0x472B5C);
    PUSH32(esp, 0x472B48);
    ecx = esi;
    PUSH32(esp, 0x002970EDu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002970ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00297100
 * Original: 0x00297100 - 0x00297106 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297100(void)
{

loc_00297100: ;
    eax = MEM32(0x5BE610);
    esp += 4; return; /* ret */

}

/**
 * sub_00297110
 * Original: 0x00297110 - 0x00297116 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297110(void)
{

loc_00297110: ;
    eax = 0x408A74;
    esp += 4; return; /* ret */

}

/**
 * sub_00297120
 * Original: 0x00297120 - 0x00297126 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297120(void)
{

loc_00297120: ;
    eax = MEM32(0x471A2C);
    esp += 4; return; /* ret */

}

/**
 * sub_00297130
 * Original: 0x00297130 - 0x0029713C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297130(void)
{

loc_00297130: ;
    eax = MEM32(esp + 4);
    MEM32(0x471A2C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00297140
 * Original: 0x00297140 - 0x00297146 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297140(void)
{

loc_00297140: ;
    eax = MEM32(0x5BE6D4);
    esp += 4; return; /* ret */

}

/**
 * sub_00297150
 * Original: 0x00297150 - 0x0029715C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297150(void)
{

loc_00297150: ;
    eax = MEM32(esp + 4);
    MEM32(0x5BE6D4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00297160
 * Original: 0x00297160 - 0x002971AB (75 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297160(void)
{

loc_00297160: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE610);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029716Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0029716F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x472BB0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0029717Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0029717F: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0029718Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029718A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472BA8);
    PUSH32(esp, 0x472BA0);
    PUSH32(esp, 0x472B98);
    ecx = esi;
    MEM32(eax + 0x30) = 0x293530;
    PUSH32(esp, 0x002971A8u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002971A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002971B0
 * Original: 0x002971B0 - 0x002971D4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002971B0(void)
{

loc_002971B0: ;
    esp = esp - 8;
    ecx = esp;
    PUSH32(esp, 0x002971BBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_002971BB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4066C0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002971E0
 * Original: 0x002971E0 - 0x002971E6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002971E0(void)
{

loc_002971E0: ;
    eax = MEM32(0x5BE618);
    esp += 4; return; /* ret */

}

/**
 * sub_002971F0
 * Original: 0x002971F0 - 0x002971F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002971F0(void)
{

loc_002971F0: ;
    eax = MEM32(0x5BE61C);
    esp += 4; return; /* ret */

}

/**
 * sub_00297200
 * Original: 0x00297200 - 0x0029720B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297200(void)
{

loc_00297200: ;
    eax = MEM32(ecx + 0xC);
    MEM32(eax + 8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00297210
 * Original: 0x00297210 - 0x0029727E (110 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00297210: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE61C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00297220u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00297220: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x472BC4);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00297230u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00297230: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00297238u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00297238: ;
    ebx = eax;
    eax = MEM32(0x5BE698);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029725C; /* jne: not equal / not zero */

loc_00297243: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029724Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0029724E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00297254u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00297254: ;
    esp = esp + 8;
    MEM32(0x5BE698) = eax;

loc_0029725C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472BC0);
    PUSH32(esp, 0x472BBC);
    PUSH32(esp, 0x472BB8);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x0029727Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0029727A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00297280
 * Original: 0x00297280 - 0x00297286 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297280(void)
{

loc_00297280: ;
    eax = MEM32(0x5BE620);
    esp += 4; return; /* ret */

}

/**
 * sub_00297290
 * Original: 0x00297290 - 0x00297296 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297290(void)
{

loc_00297290: ;
    eax = MEM32(0x5BE624);
    esp += 4; return; /* ret */

}

/**
 * sub_002972A0
 * Original: 0x002972A0 - 0x002972A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002972A0(void)
{

loc_002972A0: ;
    eax = MEM32(0x5BE628);
    esp += 4; return; /* ret */

}

/**
 * sub_002972B0
 * Original: 0x002972B0 - 0x002972B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002972B0(void)
{

loc_002972B0: ;
    eax = MEM32(0x5BE62C);
    esp += 4; return; /* ret */

}

/**
 * sub_002972C0
 * Original: 0x002972C0 - 0x002972DE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002972C0(void)
{

loc_002972C0: ;
    PUSH32(esp, 0x29F3D0);
    PUSH32(esp, 0x002972CAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002972CA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE630);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002972DDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002972DD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002972E0
 * Original: 0x002972E0 - 0x002972E6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002972E0(void)
{

loc_002972E0: ;
    eax = MEM32(0x5BE630);
    esp += 4; return; /* ret */

}

/**
 * sub_002972F0
 * Original: 0x002972F0 - 0x0029730E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002972F0(void)
{

loc_002972F0: ;
    PUSH32(esp, 0x29F420);
    PUSH32(esp, 0x002972FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002972FA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE634);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029730Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0029730D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297310
 * Original: 0x00297310 - 0x00297316 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297310(void)
{

loc_00297310: ;
    eax = MEM32(0x5BE634);
    esp += 4; return; /* ret */

}

/**
 * sub_00297320
 * Original: 0x00297320 - 0x00297326 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297320(void)
{

loc_00297320: ;
    eax = MEM32(0x5BE638);
    esp += 4; return; /* ret */

}

/**
 * sub_00297330
 * Original: 0x00297330 - 0x0029734E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297330(void)
{

loc_00297330: ;
    PUSH32(esp, 0x29F500);
    PUSH32(esp, 0x0029733Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029733A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE640);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029734Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0029734D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297350
 * Original: 0x00297350 - 0x00297377 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00297350: ;
    eax = MEM32(0x5BE640);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00297364; /* je: equal / zero */

loc_00297359: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00297376; /* jne: not equal / not zero */

loc_00297364: ;
    PUSH32(esp, 0x29F500);
    PUSH32(esp, 0x0029736Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029736E: ;
    eax = MEM32(0x5BE640);
    esp = esp + 4;

loc_00297376: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297380
 * Original: 0x00297380 - 0x00297386 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297380(void)
{

loc_00297380: ;
    eax = MEM32(0x5BE640);
    esp += 4; return; /* ret */

}

/**
 * sub_00297390
 * Original: 0x00297390 - 0x00297396 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297390(void)
{

loc_00297390: ;
    eax = MEM32(0x5BE648);
    esp += 4; return; /* ret */

}

/**
 * sub_002973A0
 * Original: 0x002973A0 - 0x002973F9 (89 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002973A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002973A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002973BF; /* je: equal / zero */

loc_002973AA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002973BF; /* jne: not equal / not zero */

loc_002973BA: ;
    PUSH32(esp, 0x002973BFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002973BF: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002973DB; /* je: equal / zero */

loc_002973C6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002973DB; /* jne: not equal / not zero */

loc_002973D6: ;
    PUSH32(esp, 0x002973DBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002973DB: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_002973F8; /* je: equal / zero */

loc_002973E3: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002973F8; /* jne: not equal / not zero */

loc_002973F3: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_002973F8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297400
 * Original: 0x00297400 - 0x00297406 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297400(void)
{

loc_00297400: ;
    eax = MEM32(0x5BE64C);
    esp += 4; return; /* ret */

}

/**
 * sub_00297410
 * Original: 0x00297410 - 0x0029742E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297410(void)
{

loc_00297410: ;
    PUSH32(esp, 0x29F5A0);
    PUSH32(esp, 0x0029741Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029741A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE650);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029742Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0029742D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297430
 * Original: 0x00297430 - 0x00297436 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297430(void)
{

loc_00297430: ;
    eax = MEM32(0x5BE650);
    esp += 4; return; /* ret */

}

/**
 * sub_00297440
 * Original: 0x00297440 - 0x0029745E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297440(void)
{

loc_00297440: ;
    PUSH32(esp, 0x29F5F0);
    PUSH32(esp, 0x0029744Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029744A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE654);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029745Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0029745D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297460
 * Original: 0x00297460 - 0x00297487 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00297460: ;
    eax = MEM32(0x5BE654);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00297474; /* je: equal / zero */

loc_00297469: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00297486; /* jne: not equal / not zero */

loc_00297474: ;
    PUSH32(esp, 0x29F5F0);
    PUSH32(esp, 0x0029747Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029747E: ;
    eax = MEM32(0x5BE654);
    esp = esp + 4;

loc_00297486: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297490
 * Original: 0x00297490 - 0x00297496 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297490(void)
{

loc_00297490: ;
    eax = MEM32(0x5BE654);
    esp += 4; return; /* ret */

}

/**
 * sub_002974A0
 * Original: 0x002974A0 - 0x002974CE (46 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002974A0(void)
{

loc_002974A0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, 0x002974C7u); RECOMP_ABI_CALL(0x00243650u, sub_00243650); /* call 0x00243650 */

loc_002974C7: ;
    MEM32(esi + 0x1C) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002974D0
 * Original: 0x002974D0 - 0x00297568 (152 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002974D0(void)
{

loc_002974D0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE654);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002974E3u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002974E3: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x472BE0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002974F3u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002974F3: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002974FBu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002974FB: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0x3F800000;
    PUSH32(esp, 0x00297529u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00297529: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x30) = 0x293180;
    PUSH32(esp, 0x0029753Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029753B: ;
    ebx = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebx;
    PUSH32(esp, 0x00297546u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00297546: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472BD8);
    PUSH32(esp, 0x472BD0);
    PUSH32(esp, 0x472BC8);
    ecx = esi;
    MEM8(ebx + 0x26) = 0;
    PUSH32(esp, 0x00297561u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00297561: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00297570
 * Original: 0x00297570 - 0x0029758E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297570(void)
{

loc_00297570: ;
    PUSH32(esp, 0x29F640);
    PUSH32(esp, 0x0029757Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029757A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE658);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029758Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0029758D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297590
 * Original: 0x00297590 - 0x00297596 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297590(void)
{

loc_00297590: ;
    eax = MEM32(0x5BE658);
    esp += 4; return; /* ret */

}

/**
 * sub_002975A0
 * Original: 0x002975A0 - 0x002975BE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002975A0(void)
{

loc_002975A0: ;
    PUSH32(esp, 0x29F690);
    PUSH32(esp, 0x002975AAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002975AA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE65C);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002975BDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002975BD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002975C0
 * Original: 0x002975C0 - 0x002975E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002975C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002975C0: ;
    eax = MEM32(0x5BE65C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002975D4; /* je: equal / zero */

loc_002975C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002975E6; /* jne: not equal / not zero */

loc_002975D4: ;
    PUSH32(esp, 0x29F690);
    PUSH32(esp, 0x002975DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002975DE: ;
    eax = MEM32(0x5BE65C);
    esp = esp + 4;

loc_002975E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002975F0
 * Original: 0x002975F0 - 0x002975F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002975F0(void)
{

loc_002975F0: ;
    eax = MEM32(0x5BE65C);
    esp += 4; return; /* ret */

}

/**
 * sub_00297600
 * Original: 0x00297600 - 0x00297704 (260 bytes, 74 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297600(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297600: ;
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE65C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00297613u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00297613: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x472C3C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00297623u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00297623: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0029762Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029762E: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0x3F800000;
    PUSH32(esp, 0x0029765Au); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0029765A: ;
    edx = edi + 2;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00297665u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00297665: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x00297691u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00297691: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0029769Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029769C: ;
    fp_push(MEMD(0x3D45C8)); /* fld double */
    esp = esp - 8;
    ecx = eax;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x002976AFu); RECOMP_ABI_CALL(0x001E7D60u, sub_001E7D60); /* call 0x001E7D60 */

loc_002976AF: ;
    eax = edi + 5;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002976BAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002976BA: ;
    ebp = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebp;
    PUSH32(esp, 0x002976C5u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002976C5: ;
    ecx = edi + 6;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x002976D4u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002976D4: ;
    ebp = eax;
    PUSH32(esp, 0x3F800000);
    ecx = ebp;
    PUSH32(esp, 0x002976E2u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002976E2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472C20);
    PUSH32(esp, 0x472C04);
    PUSH32(esp, 0x472BE8);
    ecx = esi;
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x002976FDu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002976FD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00297710
 * Original: 0x00297710 - 0x00297716 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297710(void)
{

loc_00297710: ;
    eax = MEM32(0x5BE660);
    esp += 4; return; /* ret */

}

/**
 * sub_00297720
 * Original: 0x00297720 - 0x00297726 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297720(void)
{

loc_00297720: ;
    eax = MEM32(0x5BE664);
    esp += 4; return; /* ret */

}

/**
 * sub_00297730
 * Original: 0x00297730 - 0x0029774E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297730(void)
{

loc_00297730: ;
    PUSH32(esp, 0x29F780);
    PUSH32(esp, 0x0029773Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029773A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE668);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029774Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0029774D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297750
 * Original: 0x00297750 - 0x00297777 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00297750: ;
    eax = MEM32(0x5BE668);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00297764; /* je: equal / zero */

loc_00297759: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00297776; /* jne: not equal / not zero */

loc_00297764: ;
    PUSH32(esp, 0x29F780);
    PUSH32(esp, 0x0029776Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029776E: ;
    eax = MEM32(0x5BE668);
    esp = esp + 4;

loc_00297776: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297780
 * Original: 0x00297780 - 0x00297786 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297780(void)
{

loc_00297780: ;
    eax = MEM32(0x5BE668);
    esp += 4; return; /* ret */

}

/**
 * sub_00297790
 * Original: 0x00297790 - 0x002977AE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297790(void)
{

loc_00297790: ;
    PUSH32(esp, 0x29F7E0);
    PUSH32(esp, 0x0029779Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029779A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE670);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002977ADu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002977AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002977B0
 * Original: 0x002977B0 - 0x002977BE (14 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002977B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002977B0: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002977BD; /* jne: not equal / not zero */

loc_002977B7: ;
    eax = MEM32(ecx + 0x14);
    MEM32(ecx + 0x18) = eax;

loc_002977BD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002977C0
 * Original: 0x002977C0 - 0x002977DE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002977C0(void)
{

loc_002977C0: ;
    PUSH32(esp, 0x29F830);
    PUSH32(esp, 0x002977CAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002977CA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE674);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002977DDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002977DD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002977E0
 * Original: 0x002977E0 - 0x002977E6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002977E0(void)
{

loc_002977E0: ;
    eax = MEM32(0x5BE674);
    esp += 4; return; /* ret */

}

/**
 * sub_002977F0
 * Original: 0x002977F0 - 0x002977FE (14 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002977F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002977F0: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002977FD; /* jne: not equal / not zero */

loc_002977F7: ;
    eax = MEM32(ecx + 0x10);
    MEM32(ecx + 0x14) = eax;

loc_002977FD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297800
 * Original: 0x00297800 - 0x0029781E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297800(void)
{

loc_00297800: ;
    PUSH32(esp, 0x29F880);
    PUSH32(esp, 0x0029780Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029780A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE680);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029781Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0029781D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297820
 * Original: 0x00297820 - 0x00297826 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297820(void)
{

loc_00297820: ;
    eax = MEM32(0x5BE680);
    esp += 4; return; /* ret */

}

/**
 * sub_00297825
 * Original: 0x00297825 - 0x00297826 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297825(void)
{

loc_00297825: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297830
 * Original: 0x00297830 - 0x002979D9 (425 bytes, 136 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297830(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297830: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE680);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00297842u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00297842: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x472CDC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00297852u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00297852: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029785Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029785A: ;
    ebx = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x14) = 4;
    PUSH32(esp, 0x00297870u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00297870: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ebp = 0x1AA1D0;
    ecx = esi;
    MEM32(ebx + 0x34) = ebp;
    PUSH32(esp, 0x00297883u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00297883: ;
    ebx = eax;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(esp + 0x14) = 5;
    PUSH32(esp, 0x00297899u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00297899: ;
    eax = edi + 2;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(ebx + 0x34) = ebp;
    PUSH32(esp, 0x002978A7u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002978A7: ;
    ecx = esp + 0x10;
    ebp = eax;
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    ecx = ebp;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x002978BBu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_002978BB: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x34) = 0x221530;
    PUSH32(esp, 0x002978CDu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002978CD: ;
    ebp = eax;
    PUSH32(esp, 0x002978D4u); RECOMP_ABI_CALL(0x001AB550u, sub_001AB550); /* call 0x001AB550 */

loc_002978D4: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x28) = 1;
    MEM8(ebp + 0x27) = 1;
    MEM8(ebp + 0x2C) = 3;
    PUSH32(esp, 0x002978EEu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002978EE: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x002978F6u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002978F6: ;
    ecx = edi + 5;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00297901u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00297901: ;
    edx = edi + 6;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(eax + 0x30) = 0x292EF0;
    PUSH32(esp, 0x00297913u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00297913: ;
    ebp = eax;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0029791Du); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0029791D: ;
    eax = edi + 7;
    MEM8(ebp + 0x26) = LO8(ebx);
    MEM32(ebp + 0x30) = 0x292F40;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00297932u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00297932: ;
    ecx = esp + 0x10;
    ebp = eax;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x00297944u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00297944: ;
    edx = edi + 8;
    ebx = 0x292850;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x34) = ebx;
    PUSH32(esp, 0x00297957u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00297957: ;
    ebp = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x14) = 2;
    PUSH32(esp, 0x0029796Du); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0029796D: ;
    ecx = edi + 9;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x34) = ebx;
    PUSH32(esp, 0x0029797Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029797B: ;
    ebp = eax;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = ebp;
    MEM32(esp + 0x14) = 2;
    PUSH32(esp, 0x00297991u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00297991: ;
    eax = edi + 0xA;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(ebp + 0x34) = 0x292820;
    PUSH32(esp, 0x002979A3u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002979A3: ;
    ecx = esp + 0x10;
    ebp = eax;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x14) = 1;
    PUSH32(esp, 0x002979B9u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_002979B9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472CB0);
    PUSH32(esp, 0x472C84);
    PUSH32(esp, 0x472C58);
    ecx = esi;
    MEM32(ebp + 0x34) = ebx;
    PUSH32(esp, 0x002979D3u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002979D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002979E0
 * Original: 0x002979E0 - 0x002979FE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002979E0(void)
{

loc_002979E0: ;
    PUSH32(esp, 0x2A06A0);
    PUSH32(esp, 0x002979EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002979EA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE684);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002979FDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002979FD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297A00
 * Original: 0x00297A00 - 0x00297A1E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297A00(void)
{

loc_00297A00: ;
    PUSH32(esp, 0x2A03D0);
    PUSH32(esp, 0x00297A0Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00297A0A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE688);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00297A1Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00297A1D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297A20
 * Original: 0x00297A20 - 0x00297A26 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297A20(void)
{

loc_00297A20: ;
    eax = MEM32(0x5BE68C);
    esp += 4; return; /* ret */

}

/**
 * sub_00297A30
 * Original: 0x00297A30 - 0x00297A89 (89 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297A30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297A30: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00297A4F; /* je: equal / zero */

loc_00297A3A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00297A4F; /* jne: not equal / not zero */

loc_00297A4A: ;
    PUSH32(esp, 0x00297A4Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00297A4F: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00297A6B; /* je: equal / zero */

loc_00297A56: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00297A6B; /* jne: not equal / not zero */

loc_00297A66: ;
    PUSH32(esp, 0x00297A6Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00297A6B: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00297A88; /* je: equal / zero */

loc_00297A73: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00297A88; /* jne: not equal / not zero */

loc_00297A83: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00297A88: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297A90
 * Original: 0x00297A90 - 0x00297AB7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00297A90: ;
    eax = MEM32(0x5BE6A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00297AA4; /* je: equal / zero */

loc_00297A99: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00297AB6; /* jne: not equal / not zero */

loc_00297AA4: ;
    PUSH32(esp, 0x29E140);
    PUSH32(esp, 0x00297AAEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00297AAE: ;
    eax = MEM32(0x5BE6A0);
    esp = esp + 4;

loc_00297AB6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297AC0
 * Original: 0x00297AC0 - 0x00297ADE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297AC0(void)
{

loc_00297AC0: ;
    PUSH32(esp, 0x29F8E0);
    PUSH32(esp, 0x00297ACAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00297ACA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE6A4);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00297ADDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00297ADD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297AE0
 * Original: 0x00297AE0 - 0x00297AE6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297AE0(void)
{

loc_00297AE0: ;
    eax = MEM32(0x5BE6A4);
    esp += 4; return; /* ret */

}

/**
 * sub_00297AF0
 * Original: 0x00297AF0 - 0x00297B0E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297AF0(void)
{

loc_00297AF0: ;
    PUSH32(esp, 0x29F930);
    PUSH32(esp, 0x00297AFAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00297AFA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE6A8);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00297B0Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00297B0D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297B10
 * Original: 0x00297B10 - 0x00297B16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297B10(void)
{

loc_00297B10: ;
    eax = MEM32(0x5BE6A8);
    esp += 4; return; /* ret */

}

/**
 * sub_00297B20
 * Original: 0x00297B20 - 0x00297B26 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297B20(void)
{

loc_00297B20: ;
    eax = MEM32(0x5BE6AC);
    esp += 4; return; /* ret */

}

/**
 * sub_00297B30
 * Original: 0x00297B30 - 0x00297B3A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297B30(void)
{

loc_00297B30: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0xC) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00297B40
 * Original: 0x00297B40 - 0x00297B46 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297B40(void)
{

loc_00297B40: ;
    eax = MEM32(0x5BE6B0);
    esp += 4; return; /* ret */

}

/**
 * sub_00297B50
 * Original: 0x00297B50 - 0x00297BAA (90 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297B50(void)
{

loc_00297B50: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE6B0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00297B5Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00297B5F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x472D20);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00297B6Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00297B6F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00297B77u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00297B77: ;
    MEM32(eax + 0x34) = 4;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00297B89u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00297B89: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472D18);
    PUSH32(esp, 0x472D10);
    PUSH32(esp, 0x472D08);
    ecx = esi;
    MEM32(eax + 0x30) = 0x295040;
    PUSH32(esp, 0x00297BA7u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00297BA7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00297BB0
 * Original: 0x00297BB0 - 0x00297BCE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297BB0(void)
{

loc_00297BB0: ;
    PUSH32(esp, 0x29FA20);
    PUSH32(esp, 0x00297BBAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00297BBA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE6B4);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00297BCDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00297BCD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297BD0
 * Original: 0x00297BD0 - 0x00297BD6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297BD0(void)
{

loc_00297BD0: ;
    eax = MEM32(0x5BE6B4);
    esp += 4; return; /* ret */

}

/**
 * sub_00297BE0
 * Original: 0x00297BE0 - 0x00297BFE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297BE0(void)
{

loc_00297BE0: ;
    PUSH32(esp, 0x29FA70);
    PUSH32(esp, 0x00297BEAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00297BEA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE6B8);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00297BFDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00297BFD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297C00
 * Original: 0x00297C00 - 0x00297C06 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297C00(void)
{

loc_00297C00: ;
    eax = MEM32(0x5BE6B8);
    esp += 4; return; /* ret */

}

/**
 * sub_00297C10
 * Original: 0x00297C10 - 0x00297C2E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297C10(void)
{

loc_00297C10: ;
    PUSH32(esp, 0x29FAC0);
    PUSH32(esp, 0x00297C1Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00297C1A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE6C0);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00297C2Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00297C2D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297C30
 * Original: 0x00297C30 - 0x00297C36 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297C30(void)
{

loc_00297C30: ;
    eax = MEM32(0x5BE6C0);
    esp += 4; return; /* ret */

}

/**
 * sub_00297C40
 * Original: 0x00297C40 - 0x00297C46 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297C40(void)
{

loc_00297C40: ;
    eax = MEM32(0x5BE6C4);
    esp += 4; return; /* ret */

}

/**
 * sub_00297C50
 * Original: 0x00297C50 - 0x00297CD9 (137 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00297C50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_00297C65; /* je: equal / zero */

loc_00297C60: ;
    ebx = MEM32(eax + 0x14);
    goto loc_00297C71;

loc_00297C65: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x00297C6Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00297C6F: ;
    ebx = eax;

loc_00297C71: ;
    eax = MEM32(esi + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00297C9C; /* je: equal / zero */

loc_00297C77: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00297CD3; /* jne: not equal / not zero */

loc_00297C7A: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(esi + 0x2C);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00297C96u); RECOMP_ABI_CALL(0x001DA030u, sub_001DA030); /* call 0x001DA030 */

loc_00297C96: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00297C9C: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00297CAC; /* jge: greater or equal (signed >=) */

loc_00297CA6: ;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00297CACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00297CAC: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(esi + 0x24);
    eax = MEM32(esi + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00297CD3u); RECOMP_ABI_CALL(0x001D9EB0u, sub_001D9EB0); /* call 0x001D9EB0 */

loc_00297CD3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00297CE0
 * Original: 0x00297CE0 - 0x00297D0C (44 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00297CE0: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    eax = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = esi + eax * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00297D07; /* jae: above or equal (unsigned >=) */

loc_00297CF2: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);

loc_00297CF7: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00297CFFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00297CFF: ;
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00297CF7; /* jb: below (unsigned <) */

loc_00297D06: ;
    POP32(esp, ebx);

loc_00297D07: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00297D10
 * Original: 0x00297D10 - 0x00297D3C (44 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00297D10: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    eax = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = esi + eax * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00297D37; /* jae: above or equal (unsigned >=) */

loc_00297D22: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);

loc_00297D27: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x00297D2Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00297D2F: ;
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00297D27; /* jb: below (unsigned <) */

loc_00297D36: ;
    POP32(esp, ebx);

loc_00297D37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00297D40
 * Original: 0x00297D40 - 0x00297D49 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297D40(void)
{

loc_00297D40: ;
    eax = MEM32(0x5BE6F8);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00297D50
 * Original: 0x00297D50 - 0x00297D99 (73 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00297D50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x00297D5Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00297D5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00297D80; /* jne: not equal / not zero */

loc_00297D60: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00297D6Cu); RECOMP_ABI_CALL(0x002932E0u, sub_002932E0); /* call 0x002932E0 */

loc_00297D6C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00297D76u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00297D76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00297D95; /* je: equal / zero */

loc_00297D80: ;
    ecx = MEM32(0x5BE6F8);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(esi + 0x10);
    eax = MEM32(edx + eax * 4);
    ecx = MEM32(eax + 0xC);
    MEM32(esi + 0xC) = ecx;

loc_00297D95: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00297DA0
 * Original: 0x00297DA0 - 0x00297E14 (116 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297DA0(void)
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

loc_00297DA0: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x00297DAEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00297DAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00297DD3; /* jne: not equal / not zero */

loc_00297DB3: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00297DBFu); RECOMP_ABI_CALL(0x002932E0u, sub_002932E0); /* call 0x002932E0 */

loc_00297DBF: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00297DC9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00297DC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00297E0D; /* je: equal / zero */

loc_00297DD3: ;
    eax = MEM32(esi + 0xC);
    fp_push(MEMF(esi + 0xC)); /* fld float */
    edx = MEM32(esi + 0x10);
    fp_push(MEMF(esi + 0xC)); /* fld float */
    ecx = eax;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0xC) = eax;
    eax = MEM32(0x5BE6F8);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = eax + 0xC;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;

loc_00297E0D: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00297E20
 * Original: 0x00297E20 - 0x00297EE0 (192 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00297E20: ;
    eax = MEM32(0x5BE6F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00297EDE; /* jne: not equal / not zero */

loc_00297E30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00297E37u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00297E37: ;
    SET_LO8(ecx, MEM8(0x5BC548));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00297E4F; /* jne: not equal / not zero */

loc_00297E41: ;
    eax = MEM32(0x46A6E0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00297E4Cu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00297E4C: ;
    esp = esp + 4;

loc_00297E4F: ;
    esi = eax;
    eax = MEM32(0x5BE6F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00297E74; /* je: equal / zero */

loc_00297E5C: ;
    ebx = MEM32(eax + 4);
    eax = eax + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_00297E74; /* jne: not equal / not zero */

loc_00297E6F: ;
    PUSH32(esp, 0x00297E74u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00297E74: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00297E7Au); RECOMP_ABI_CALL(0x001E19C0u, sub_001E19C0); /* call 0x001E19C0 */

loc_00297E7A: ;
    esp = esp + 4;
    MEM32(0x5BE6F8) = eax;
    ebx = 0x80;

loc_00297E87: ;
    ecx = edi;
    PUSH32(esp, 0x00297E8Eu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00297E8E: ;
    SET_LO8(ecx, MEM8(0x5BC548));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00297EA7; /* jne: not equal / not zero */

loc_00297E98: ;
    ecx = MEM32(0x46A6E0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00297EA4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00297EA4: ;
    esp = esp + 4;

loc_00297EA7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00297EADu); RECOMP_ABI_CALL(0x001DFD00u, sub_001DFD00); /* call 0x001DFD00 */

loc_00297EAD: ;
    ecx = MEM32(0x5BE6F8);
    esp = esp + 4;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00297EBEu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00297EBE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00297ED9; /* je: equal / zero */

loc_00297EC2: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00297ED9; /* jne: not equal / not zero */

loc_00297ED2: ;
    ecx = esi;
    PUSH32(esp, 0x00297ED9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00297ED9: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00297E87; /* jne: not equal / not zero */

loc_00297EDC: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00297EDE: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00297EE0
 * Original: 0x00297EE0 - 0x00297F03 (35 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297EE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297EE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00297EF2; /* je: equal / zero */

loc_00297EEA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xE4); PUSH32(esp, 0x00297EF2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00297EF2: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00297F02; /* je: equal / zero */

loc_00297EFA: ;
    edx = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x84)); return; /* indirect tail jmp */

loc_00297F02: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297F10
 * Original: 0x00297F10 - 0x00297FEB (219 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297F10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297F10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00297F27; /* je: equal / zero */

loc_00297F1F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00297F27u); RECOMP_ABI_CALL(0x001CC410u, sub_001CC410); /* call 0x001CC410 */

loc_00297F27: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00297FC4; /* je: equal / zero */

loc_00297F2F: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00297F41; /* jne: not equal / not zero */

loc_00297F38: ;
    edi = 0; /* xor self */
    ebx = 1;
    goto loc_00297F60;

loc_00297F41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00297F4D; /* jne: not equal / not zero */

loc_00297F46: ;
    edi = 1;
    goto loc_00297F5B;

loc_00297F4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00297FE7; /* jne: not equal / not zero */

loc_00297F56: ;
    edi = 2;

loc_00297F5B: ;
    ebx = 2;

loc_00297F60: ;
    eax = MEM32(esp + 0x1C);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00297FB5; /* je: equal / zero */

loc_00297F69: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00297F97; /* je: equal / zero */

loc_00297F6C: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00297F74u); RECOMP_ABI_CALL(0x001CC480u, sub_001CC480); /* call 0x001CC480 */

loc_00297F74: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00297F88u); RECOMP_ABI_CALL(0x001BDD60u, sub_001BDD60); /* call 0x001BDD60 */

loc_00297F88: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00297F91u); RECOMP_ABI_CALL(0x001CC480u, sub_001CC480); /* call 0x001CC480 */

loc_00297F91: ;
    edi = MEM32(esp + 0x10);
    goto loc_00297FDA;

loc_00297F97: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00297FA6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00297FA6: ;
    ecx = MEM32(esp + 0x1C);
    eax = eax - ebx;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00297FB5u); RECOMP_ABI_CALL(0x001C3980u, sub_001C3980); /* call 0x001C3980 */

loc_00297FB5: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00297FBEu); RECOMP_ABI_CALL(0x001CC480u, sub_001CC480); /* call 0x001CC480 */

loc_00297FBE: ;
    edi = MEM32(esp + 0x10);
    goto loc_00297FDA;

loc_00297FC4: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00297FDAu); RECOMP_ABI_CALL(0x001C3980u, sub_001C3980); /* call 0x001C3980 */

loc_00297FDA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00297FE7; /* je: equal / zero */

loc_00297FDE: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00297FE7u); RECOMP_ABI_CALL(0x001CC410u, sub_001CC410); /* call 0x001CC410 */

loc_00297FE7: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00297FF0
 * Original: 0x00297FF0 - 0x00298029 (57 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297FF0(void)
{

loc_00297FF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x45C); PUSH32(esp, 0x00298008u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298008: ;
    edx = MEM32(edi + 0x1C);
    eax = MEM32(edi + 0x18);
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00298021u); RECOMP_ABI_CALL(0x00297F10u, sub_00297F10); /* call 0x00297F10 */

loc_00298021: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00298030
 * Original: 0x00298030 - 0x0029847E (1102 bytes, 370 insns)
 * Category: game_vtable
 * CC: thiscall, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298030(void)
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

loc_00298030: ;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    ecx = esp + 0x24;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x0029804Cu); RECOMP_ABI_CALL(0x001ACE60u, sub_001ACE60); /* call 0x001ACE60 */

loc_0029804C: ;
    SET_LO8(eax, MEM8(esp + 0x5C));
    esi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x13) = LO8(ebx);
    MEM32(esp + 0x20) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00298070; /* je: equal / zero */

loc_0029805E: ;
    eax = MEM32(esp + 0x50);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00298070; /* je: equal / zero */

loc_00298067: ;
    ecx = MEM32(esp + 0x54);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00298084; /* jne: not equal / not zero */

loc_00298070: ;
    edx = MEM32(esp + 0x50);
    eax = MEM32(esp + 0x54);
    MEM32(edx) = 0xFFFFFFFFu;
    MEM32(eax) = 0xFFFFFFFFu;

loc_00298084: ;
    ecx = MEM32(edi + 0x1C);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(edi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x34) = ebx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x002980A5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002980A5: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002981E0; /* jne: not equal / not zero */

loc_002980B1: ;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00298157; /* je: equal / zero */

loc_002980BC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x002980C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002980C5: ;
    esi = eax;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x30), ebx (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_0029843A; /* jbe: below or equal (unsigned <=) */

loc_002980D5: ;
    edi = MEM32(esp + 0x58);
    ebp = esi + 2;
    /* nop */

loc_002980E0: ;
    eax = MEM32(esp + 0x4C);
    edx = ZX16(MEM16(ebp + 2));
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    edx = edx + ecx;
    PUSH32(esp, edx);
    edx = ZX16(MEM16(ebp));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edx = edx + ecx;
    PUSH32(esp, edx);
    edx = ZX16(MEM16(ebp + -2));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = MEM32(esp + 0x58);
    edx = edx + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029811Bu); RECOMP_ABI_CALL(0x00243D30u, sub_00243D30); /* call 0x00243D30 */

loc_0029811B: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    esp = esp + 0x1C;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029813B; /* jne: not equal / not zero */

loc_0029812B: ;
    ecx = MEM32(esp + 0x50);
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00298435; /* jg: greater (signed >) */

loc_0029813B: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x30);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 3;
    ebp = ebp + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_002980E0; /* jb: below (unsigned <) */

loc_00298152: ;
    goto loc_0029843A;

loc_00298157: ;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x30), ebx (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_0029843A; /* jbe: below or equal (unsigned <=) */

loc_00298165: ;
    edi = MEM32(esp + 0x58);
    ebp = 1;
    edi = edi;

loc_00298170: ;
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    edx = ebp + 1;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    edx = edx + ecx;
    PUSH32(esp, edx);
    edx = ebp;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    edx = edx + ecx;
    PUSH32(esp, edx);
    eax = eax + ecx;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002981A4u); RECOMP_ABI_CALL(0x00243D30u, sub_00243D30); /* call 0x00243D30 */

loc_002981A4: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    esp = esp + 0x1C;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002981C4; /* jne: not equal / not zero */

loc_002981B4: ;
    ecx = MEM32(esp + 0x50);
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00298435; /* jg: greater (signed >) */

loc_002981C4: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x30);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 3;
    ebp = ebp + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00298170; /* jb: below (unsigned <) */

loc_002981DB: ;
    goto loc_0029843A;

loc_002981E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029843A; /* jne: not equal / not zero */

loc_002981E9: ;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029831F; /* je: equal / zero */

loc_002981F4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x002981FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002981FD: ;
    esi = eax;
    eax = MEM32(esp + 0x30);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x14) = edi;
    if (CMP_BE(_fa & _fb, 0)) goto loc_0029843A; /* jbe: below or equal (unsigned <=) */

loc_00298215: ;
    ecx = MEM32(esp + 0x18);
    ecx = MEM32(ecx + 0x30);
    eax = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00298226u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298226: ;
    ebx = 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_002982FF; /* jbe: below or equal (unsigned <=) */

loc_00298237: ;
    ecx = edi + edi;
    ebp = edi + edi + 2;
    MEM32(esp + 0x5C) = ecx;
    edi = edi + edi + 4;

loc_00298246: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00298272; /* je: equal / zero */

loc_0029824B: ;
    edx = MEM32(esp + 0x58);
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, edx);
    edx = ZX16(MEM16(esi + ebp));
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    edx = edx + ecx;
    PUSH32(esp, edx);
    edx = ZX16(MEM16(edi + esi));
    goto loc_00298297;

loc_00298272: ;
    ecx = MEM32(esp + 0x58);
    edx = MEM32(esp + 0x4C);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    edx = ZX16(MEM16(edi + esi));
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x44);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edx = edx + ecx;
    PUSH32(esp, edx);
    edx = ZX16(MEM16(esi + ebp));

loc_00298297: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edx = edx + ecx;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x70);
    edx = ZX16(MEM16(edx + esi));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = MEM32(esp + 0x58);
    edx = edx + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002982B5u); RECOMP_ABI_CALL(0x00243D30u, sub_00243D30); /* call 0x00243D30 */

loc_002982B5: ;
    esp = esp + 0x1C;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002982E5; /* jne: not equal / not zero */

loc_002982C5: ;
    ecx = MEM32(esp + 0x50);
    eax = MEM32(ecx);
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00298435; /* jg: greater (signed >) */

loc_002982D7: ;
    if (CMP_NE(_fa, _fb)) goto loc_002982E5; /* jne: not equal / not zero */

loc_002982D9: ;
    edx = MEM32(esp + 0x54);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00298435; /* jg: greater (signed >) */

loc_002982E5: ;
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0x5C) = ebp;
    ebp = edi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00298246; /* jb: below (unsigned <) */

loc_002982FB: ;
    edi = MEM32(esp + 0x20);

loc_002982FF: ;
    ecx = MEM32(esp + 0x30);
    edi = edi + eax;
    eax = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00298215; /* jb: below (unsigned <) */

loc_0029831A: ;
    goto loc_0029843A;

loc_0029831F: ;
    eax = MEM32(esp + 0x30);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x5C) = ebp;
    MEM32(esp + 0x14) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_0029843A; /* jbe: below or equal (unsigned <=) */

loc_00298335: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 0x30);
    eax = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00298346u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298346: ;
    ebx = 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    edx = ebp;
    edi = ebp + 1;
    if (CMP_BE(_fa, _fb)) goto loc_00298414; /* jbe: below or equal (unsigned <=) */

loc_0029835C: ;
    /* nop */

loc_00298360: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    esi = ebx + ebp;
    if (TEST_Z(_fa, _fb)) goto loc_0029839C; /* je: equal / zero */

loc_00298368: ;
    ecx = MEM32(esp + 0x58);
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    ebp = eax;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    ebp = ebp + ecx;
    PUSH32(esp, ebp);
    ebp = esi;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = MEM32(esp + 0x54);
    ebp = ebp + ecx;
    PUSH32(esp, ebp);
    eax = eax + ecx;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    goto loc_002983CE;

loc_0029839C: ;
    eax = MEM32(esp + 0x58);
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x44);
    ebp = esi;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)eax);
    ebp = ebp + ecx;
    PUSH32(esp, ebp);
    ebp = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)edi);
    ebp = ebp + ecx;
    PUSH32(esp, ebp);
    eax = eax + ecx;
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);

loc_002983CE: ;
    PUSH32(esp, 0x002983D3u); RECOMP_ABI_CALL(0x00243D30u, sub_00243D30); /* call 0x00243D30 */

loc_002983D3: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    esp = esp + 0x1C;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002983FB; /* jne: not equal / not zero */

loc_002983E3: ;
    edx = MEM32(esp + 0x50);
    eax = MEM32(edx);
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00298431; /* jg: greater (signed >) */

loc_002983F1: ;
    if (CMP_NE(_fa, _fb)) goto loc_002983FB; /* jne: not equal / not zero */

loc_002983F3: ;
    eax = MEM32(esp + 0x54);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00298431; /* jg: greater (signed >) */

loc_002983FB: ;
    eax = MEM32(esp + 0x1C);
    ebp = MEM32(esp + 0x5C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    edx = edi;
    edi = esi;
    if (CMP_B(_fa, _fb)) goto loc_00298360; /* jb: below (unsigned <) */

loc_00298410: ;
    esi = MEM32(esp + 0x20);

loc_00298414: ;
    ecx = MEM32(esp + 0x30);
    ebp = ebp + eax;
    eax = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x5C) = ebp;
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00298335; /* jb: below (unsigned <) */

loc_0029842F: ;
    goto loc_0029843A;

loc_00298431: ;
    esi = MEM32(esp + 0x20);

loc_00298435: ;
    MEM8(esp + 0x13) = 1;

loc_0029843A: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x50);
    eax = MEM32(esp + 0x54);
    edi = MEM32(esp + 0x18);
    MEM32(edx) = ecx;
    MEM32(eax) = ebx;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0029845Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029845D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00298470; /* je: equal / zero */

loc_00298461: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00298470u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298470: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00298480
 * Original: 0x00298480 - 0x0029853B (187 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298480(void)
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

loc_00298480: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0029848Fu); RECOMP_ABI_CALL(0x001ACE60u, sub_001ACE60); /* call 0x001ACE60 */

loc_0029848F: ;
    eax = MEM32(esp + 0x2C);
    ebx = MEM32(esp + 0x30);
    edx = MEM32(ebx);
    edi = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x14) = edi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x002984AEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002984AE: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), edi (32-bit) */
    esi = MEM32(esp + 0x1C);
    if (CMP_BE(_fa, _fb)) goto loc_00298526; /* jbe: below or equal (unsigned <=) */

loc_002984B8: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    /* nop */

loc_002984C0: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x002984CBu); RECOMP_ABI_CALL(0x0023EF60u, sub_0023EF60); /* call 0x0023EF60 */

loc_002984CB: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_push(MEMF(esi)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CD304)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3cd304] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00298514; /* jne: not equal / not zero */

loc_002984F8: ;
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(esi); /* fmul dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(esi + 4); /* fmul dword ptr [esi + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esi + 8); /* fmul dword ptr [esi + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00298516;

loc_00298514: ;
    fp_pop(); /* fstp st(0) */

loc_00298516: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x1C);
    esi = esi + edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002984C0; /* jb: below (unsigned <) */

loc_00298525: ;
    POP32(esp, ebp);

loc_00298526: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00298534u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298534: ;
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
 * sub_00298540
 * Original: 0x00298540 - 0x0029865D (285 bytes, 105 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298540(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00298540: ;
    esp = esp - 0x5C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0029854Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029854F: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002985DE; /* je: equal / zero */

loc_0029855A: ;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00298564u); RECOMP_ABI_CALL(0x001ACE60u, sub_001ACE60); /* call 0x001ACE60 */

loc_00298564: ;
    ecx = MEM32(ebp + 0x1C);
    edi = 0; /* xor self */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(ebp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = esp + 0x10;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x1C) = edi;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00298587u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298587: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002985A4; /* jne: not equal / not zero */

loc_0029858E: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x70);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002985A2u); RECOMP_ABI_CALL(0x0023F140u, sub_0023F140); /* call 0x0023F140 */

loc_002985A2: ;
    goto loc_002985CE;

loc_002985A4: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    if (CMP_BE(_fa & _fb, 0)) goto loc_002985CD; /* jbe: below or equal (unsigned <=) */

loc_002985B1: ;
    ecx = MEM32(esp + 0x70);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002985BEu); RECOMP_ABI_CALL(0x0023F140u, sub_0023F140); /* call 0x0023F140 */

loc_002985BE: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x1C);
    esi = esi + edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002985B1; /* jb: below (unsigned <) */

loc_002985CD: ;
    POP32(esp, esi);

loc_002985CE: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x002985DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002985DD: ;
    POP32(esp, edi);

loc_002985DE: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x002985E7u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_002985E7: ;
    ecx = MEM32(esp + 0x68);
    PUSH32(esp, ecx);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x002985FAu); RECOMP_ABI_CALL(0x00242F50u, sub_00242F50); /* call 0x00242F50 */

loc_002985FA: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x00298603u); RECOMP_ABI_CALL(0x002423F0u, sub_002423F0); /* call 0x002423F0 */

loc_00298603: ;
    eax = ebx;
    eax = eax >> 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029861E; /* je: equal / zero */

loc_0029860B: ;
    edx = MEM32(ebp + 0xC);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0029861Bu); RECOMP_ABI_CALL(0x00298480u, sub_00298480); /* call 0x00298480 */

loc_0029861B: ;
    esp = esp + 0xC;

loc_0029861E: ;
    eax = ebx;
    eax = eax >> 0x16;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029863A; /* je: equal / zero */

loc_00298627: ;
    edx = MEM32(ebp + 0xC);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 7);
    PUSH32(esp, 0x00298637u); RECOMP_ABI_CALL(0x00298480u, sub_00298480); /* call 0x00298480 */

loc_00298637: ;
    esp = esp + 0xC;

loc_0029863A: ;
    ebx = ebx >> 0x17;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00298655; /* je: equal / zero */

loc_00298642: ;
    ecx = MEM32(ebp + 0xC);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 8);
    PUSH32(esp, 0x00298652u); RECOMP_ABI_CALL(0x00298480u, sub_00298480); /* call 0x00298480 */

loc_00298652: ;
    esp = esp + 0xC;

loc_00298655: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x5C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00298660
 * Original: 0x00298660 - 0x00298684 (36 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298660(void)
{

loc_00298660: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x30);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0029867Eu); RECOMP_ABI_CALL(0x002936A0u, sub_002936A0); /* call 0x002936A0 */

loc_0029867E: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00298690
 * Original: 0x00298690 - 0x002987DC (332 bytes, 100 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298690(void)
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

loc_00298690: ;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 0x1C;
    MEM32(esp + 0xC) = 0x60AD78EC;
    MEM32(esp + 8) = 0x60AD78EC;
    MEM32(esp + 4) = 0x60AD78EC;
    MEM32(esp + 0x18) = 0xE0AD78ECu;
    MEM32(esp + 0x14) = 0xE0AD78ECu;
    MEM32(esp + 0x10) = 0xE0AD78ECu;
    PUSH32(esp, 0x002986CFu); RECOMP_ABI_CALL(0x001ACE60u, sub_001ACE60); /* call 0x001ACE60 */

loc_002986CF: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0xC);
    MEM32(esp + 0x24) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0x20;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x2C) = 0;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x002986FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002986FD: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0029879A; /* jbe: below or equal (unsigned <=) */

loc_0029870D: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x34);
    ecx = ecx + 8;
    edx = eax;
    goto loc_00298720;

    /* nop */

loc_00298720: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + -8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx - 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00298735; /* jne: not equal / not zero */

loc_0029872E: ;
    eax = MEM32(ecx + -8);
    MEM32(esp + 8) = eax;

loc_00298735: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + -4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx - 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029874A; /* jne: not equal / not zero */

loc_00298743: ;
    eax = MEM32(ecx + -4);
    MEM32(esp + 0xC) = eax;

loc_0029874A: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029875D; /* jne: not equal / not zero */

loc_00298757: ;
    eax = MEM32(ecx);
    MEM32(esp + 0x10) = eax;

loc_0029875D: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + -8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx - 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00298772; /* jp: parity */

loc_0029876B: ;
    eax = MEM32(ecx + -8);
    MEM32(esp + 0x14) = eax;

loc_00298772: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + -4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx - 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00298787; /* jp: parity */

loc_00298780: ;
    eax = MEM32(ecx + -4);
    MEM32(esp + 0x18) = eax;

loc_00298787: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00298794; /* jp: parity */

loc_00298790: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx)); /* fld float */

loc_00298794: ;
    ecx = ecx + edi;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00298720; /* jne: not equal / not zero */

loc_00298799: ;
    POP32(esp, edi);

loc_0029879A: ;
    eax = MEM32(esp + 0x3C);
    fp_push(MEMF(esp + 4)); /* fld float */
    ecx = MEM32(esp + 8);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0xC);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x40);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x002987D5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002987D5: ;
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002987E0
 * Original: 0x002987E0 - 0x00298822 (66 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002987E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002987E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x24);
    edx = MEM32(edi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xE4); PUSH32(esp, 0x002987FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002987FA: ;
    SET_LO8(eax, MEM8(edi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029881D; /* je: equal / zero */

loc_00298801: ;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(edi + 0x1C);
    edx = MEM32(edi + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0029881Au); RECOMP_ABI_CALL(0x00297F10u, sub_00297F10); /* call 0x00297F10 */

loc_0029881A: ;
    esp = esp + 0x14;

loc_0029881D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00298830
 * Original: 0x00298830 - 0x0029885E (46 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298830(void)
{

loc_00298830: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    ebx = MEM32(esi + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00298845u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298845: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1C);
    edx = ebx;
    PUSH32(esp, 0x00298857u); RECOMP_ABI_CALL(0x002936A0u, sub_002936A0); /* call 0x002936A0 */

loc_00298857: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00298860
 * Original: 0x00298860 - 0x00298880 (32 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298860(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00298860: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029886F; /* je: equal / zero */

loc_0029886A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0029886Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029886F: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0029887F; /* je: equal / zero */

loc_00298877: ;
    edx = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x84)); return; /* indirect tail jmp */

loc_0029887F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00298880
 * Original: 0x00298880 - 0x002988B4 (52 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00298880: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002988B0; /* je: equal / zero */

loc_0029888A: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_0029889B; /* jne: not equal / not zero */

loc_00298895: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0029889Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029889B: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(edx + 0x10);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x14));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002988AFu); RECOMP_ABI_CALL(0x001CD220u, sub_001CD220); /* call 0x001CD220 */

loc_002988AF: ;
    POP32(esp, edi);

loc_002988B0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002988C0
 * Original: 0x002988C0 - 0x002988E8 (40 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002988C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002988C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002988E4; /* je: equal / zero */

loc_002988CA: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x140); PUSH32(esp, 0x002988DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002988DD: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x78); PUSH32(esp, 0x002988E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002988E3: ;
    POP32(esp, edi);

loc_002988E4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002988F0
 * Original: 0x002988F0 - 0x002988FF (15 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002988F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002988F0: ;
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002988FC; /* je: equal / zero */

loc_002988F7: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x70)); return; /* indirect tail jmp */

loc_002988FC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00298900
 * Original: 0x00298900 - 0x00298909 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298900(void)
{

loc_00298900: ;
    eax = MEM32(0x5BE700);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00298910
 * Original: 0x00298910 - 0x00298963 (83 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00298910: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x0029891Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029891B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00298940; /* jne: not equal / not zero */

loc_00298920: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0029892Cu); RECOMP_ABI_CALL(0x002932E0u, sub_002932E0); /* call 0x002932E0 */

loc_0029892C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00298936u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298936: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029895F; /* je: equal / zero */

loc_00298940: ;
    ecx = MEM32(0x5BE700);
    eax = MEM32(esi + 0x4C);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + eax * 4);
    eax = eax + 0xC;
    PUSH32(esp, eax);
    esi = esi + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0029895Cu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0029895C: ;
    esp = esp + 8;

loc_0029895F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00298970
 * Original: 0x00298970 - 0x002989C3 (83 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00298970: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x0029897Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029897B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002989A0; /* jne: not equal / not zero */

loc_00298980: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0029898Cu); RECOMP_ABI_CALL(0x002932E0u, sub_002932E0); /* call 0x002932E0 */

loc_0029898C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00298996u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298996: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002989BF; /* je: equal / zero */

loc_002989A0: ;
    edx = MEM32(0x5BE700);
    ecx = MEM32(esi + 0x4C);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + ecx * 4);
    ecx = ecx + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002989BCu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_002989BC: ;
    esp = esp + 8;

loc_002989BF: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002989D0
 * Original: 0x002989D0 - 0x00298A90 (192 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002989D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002989D0: ;
    eax = MEM32(0x5BE700);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00298A8E; /* jne: not equal / not zero */

loc_002989E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002989E7u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_002989E7: ;
    SET_LO8(ecx, MEM8(0x5BC548));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002989FF; /* jne: not equal / not zero */

loc_002989F1: ;
    eax = MEM32(0x46A6E0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002989FCu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002989FC: ;
    esp = esp + 4;

loc_002989FF: ;
    esi = eax;
    eax = MEM32(0x5BE700);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00298A24; /* je: equal / zero */

loc_00298A0C: ;
    ebx = MEM32(eax + 4);
    eax = eax + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_00298A24; /* jne: not equal / not zero */

loc_00298A1F: ;
    PUSH32(esp, 0x00298A24u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00298A24: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00298A2Au); RECOMP_ABI_CALL(0x001E19E0u, sub_001E19E0); /* call 0x001E19E0 */

loc_00298A2A: ;
    esp = esp + 4;
    MEM32(0x5BE700) = eax;
    ebx = 0x20;

loc_00298A37: ;
    ecx = edi;
    PUSH32(esp, 0x00298A3Eu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00298A3E: ;
    SET_LO8(ecx, MEM8(0x5BC548));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00298A57; /* jne: not equal / not zero */

loc_00298A48: ;
    ecx = MEM32(0x46A6E0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00298A54u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00298A54: ;
    esp = esp + 4;

loc_00298A57: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00298A5Du); RECOMP_ABI_CALL(0x001DFD60u, sub_001DFD60); /* call 0x001DFD60 */

loc_00298A5D: ;
    ecx = MEM32(0x5BE700);
    esp = esp + 4;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00298A6Eu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00298A6E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00298A89; /* je: equal / zero */

loc_00298A72: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00298A89; /* jne: not equal / not zero */

loc_00298A82: ;
    ecx = esi;
    PUSH32(esp, 0x00298A89u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00298A89: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00298A37; /* jne: not equal / not zero */

loc_00298A8C: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00298A8E: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00298A90
 * Original: 0x00298A90 - 0x00298AE1 (81 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00298A90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00298ADC; /* je: equal / zero */

loc_00298A9D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ecx = MEM32(edi + 0x18);
    MEM8(edi + 0x28) = 1;
    if (TEST_S(_fas, _fbs)) goto loc_00298ABA; /* jl: less (signed <) */

loc_00298AA8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00298AB2; /* jg: greater (signed >) */

loc_00298AAD: ;
    MEM32(ecx + 8) = esi;
    goto loc_00298ABA;

loc_00298AB2: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00298ABAu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00298ABA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ecx = MEM32(edi + 0x1C);
    if (TEST_S(_fas, _fbs)) goto loc_00298AD9; /* jl: less (signed <) */

loc_00298AC1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00298AD1; /* jg: greater (signed >) */

loc_00298AC6: ;
    MEM32(ecx + 8) = esi;
    MEM32(edi + 0x20) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00298AD1: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00298AD9u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00298AD9: ;
    MEM32(edi + 0x20) = esi;

loc_00298ADC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00298AF0
 * Original: 0x00298AF0 - 0x00298BFC (268 bytes, 106 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298AF0(void)
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

loc_00298AF0: ;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00298BF5; /* je: equal / zero */

loc_00298B01: ;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esi + 0x28) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00298BF4; /* je: equal / zero */

loc_00298B13: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00298B1Eu); RECOMP_ABI_CALL(0x001ACE60u, sub_001ACE60); /* call 0x001ACE60 */

loc_00298B1E: ;
    eax = MEM32(esi + 0x24);
    edi = MEM32(esp + 0x30);
    edx = MEM32(edi);
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x18) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00298B42u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298B42: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    edx = MEM32(esi + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ebp = ecx;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, ecx);
    ebx = eax;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x5BC968); PUSH32(esp, 0x00298B73u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298B73: ;
    eax = MEM32(esi + 0x24);
    esp = esp + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00298B88; /* je: equal / zero */

loc_00298B7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00298B88; /* je: equal / zero */

loc_00298B83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00298BE4; /* jne: not equal / not zero */

loc_00298B88: ;
    SET_LO8(eax, MEM8(0x5BE6DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00298BE4; /* je: equal / zero */

loc_00298B91: ;
    eax = MEM32(esi + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00298BE4; /* jle: less or equal (signed <=) */

loc_00298B9A: ;
    eax = ebx + 8;
    /* nop */

loc_00298BA0: ;
    fp_push(MEMF(eax)); /* fld float */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push(MEMF(eax + -4)); /* fld float */
    fp_push(MEMF(eax + -8)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(eax + -8); /* fmul dword ptr [eax - 8] */
    MEMF(eax + -8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(eax + -4); /* fmul dword ptr [eax - 4] */
    MEMF(eax + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0x14);
    eax = eax + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00298BA0; /* jl: less (signed <) */

loc_00298BE4: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x00298BF2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298BF2: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00298BF4: ;
    POP32(esp, ebx);

loc_00298BF5: ;
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
 * sub_00298C00
 * Original: 0x00298C00 - 0x00298C56 (86 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298C00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00298C00: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00298C52; /* je: equal / zero */

loc_00298C0A: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    ecx = MEM32(edi + 0x14);
    eax = MEM32(edi);
    ecx = ecx | 4;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00298C1Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298C1D: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00298C47; /* jle: less or equal (signed <=) */

loc_00298C29: ;
    /* nop */

loc_00298C30: ;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + esi * 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00298C3Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298C3C: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00298C30; /* jl: less (signed <) */

loc_00298C47: ;
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x54)); return; /* indirect tail jmp */

loc_00298C52: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00298C60
 * Original: 0x00298C60 - 0x00298D03 (163 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298C60(void)
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

loc_00298C60: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00298CCD; /* je: equal / zero */

loc_00298C6D: ;
    eax = MEM32(esi + 0x20);
    edx = MEM32(esi + 0x24);
    ecx = MEM32(esp + 0x18);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00298C8A; /* jne: not equal / not zero */

loc_00298C7E: ;
    edx = MEM32(ecx + 0x60);
    MEM32(esi + 0x20) = edx;
    eax = MEM32(ecx + 0x64);
    MEM32(esi + 0x24) = eax;

loc_00298C8A: ;
    eax = MEM32(ecx + 0x60);
    edx = MEM32(esi + 0x20);
    ecx = MEM32(ecx + 0x64);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    PUSH32(esp, 0x3B9ACA00);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00298CA9u); RECOMP_ABI_CALL(0x00343BF0u, sub_00343BF0); /* call 0x00343BF0 */

loc_00298CA9: ;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 8) = ecx;
    fp_push((double)SMEM64(esp + 8)); /* fild */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = edx;
    POP32(esp, ebx);
    fp_top() = fp_top() * MEMF(0x409A50); /* fmul dword ptr [0x409a50] */
    fp_push((double)SMEM64(esp + 0xC)); /* fild */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */

loc_00298CCD: ;
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    ecx = MEM32(esi + 0x10);
    fp_top() = fp_top() + MEMF(esi + 0x28); /* fadd dword ptr [esi + 0x28] */
    edx = MEM32(ecx);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00298CECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298CEC: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00298CFC; /* jne: not equal / not zero */

loc_00298CF4: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00298CFCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298CFC: ;
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00298D10
 * Original: 0x00298D10 - 0x00298D2F (31 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298D10(void)
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

loc_00298D10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x00298D1Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298D1E: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x28] */
    POP32(esp, esi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00298D2C; /* jne: not equal / not zero */

loc_00298D29: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00298D2C: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00298D30
 * Original: 0x00298D30 - 0x00298D9E (110 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298D30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00298D30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00298D9A; /* jge: greater or equal (signed >=) */

loc_00298D3A: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (TEST_NZ(_fa, _fb)) goto loc_00298D74; /* jne: not equal / not zero */

loc_00298D47: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00298D8E; /* je: equal / zero */

loc_00298D4E: ;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x20);
    ebx = MEM32(esi + 0x2C);
    PUSH32(esp, ebp);
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x4CC); PUSH32(esp, 0x00298D71u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298D71: ;
    POP32(esp, ebp);
    goto loc_00298D8B;

loc_00298D74: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(esi + 0x28);
    ebx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x4D0); PUSH32(esp, 0x00298D8Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298D8B: ;
    MEM32(esi + 0xC) = eax;

loc_00298D8E: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00298D98; /* jl: less (signed <) */

loc_00298D95: ;
    MEM32(esi + 0x18) = edi;

loc_00298D98: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00298D9A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00298DA0
 * Original: 0x00298DA0 - 0x00298DE7 (71 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00298DA0: ;
    eax = MEM32(0x5BB2BC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00298DB5u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00298DB5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00298DE2; /* je: equal / zero */

loc_00298DB9: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00298DE2; /* je: equal / zero */

loc_00298DC0: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00298DD7; /* jge: greater or equal (signed >=) */

loc_00298DC7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00298DCDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298DCD: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00298DE2; /* jl: less (signed <) */

loc_00298DD7: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x4E0); PUSH32(esp, 0x00298DE2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298DE2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00298DF0
 * Original: 0x00298DF0 - 0x00298E10 (32 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298DF0(void)
{

loc_00298DF0: ;
    eax = MEM32(0x5BA824);
    edx = MEM32(eax + 8);
    edx = edx + MEM32(ecx + 0xC);
    eax = ZX16(MEM16(ecx + 0x10));
    ecx = MEM32(esp + 4);
    PUSH32(esp, edx);
    eax = eax + 0xA;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00298E0Du); RECOMP_ABI_CALL(0x001D6120u, sub_001D6120); /* call 0x001D6120 */

loc_00298E0D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00298E10
 * Original: 0x00298E10 - 0x00298EC6 (182 bytes, 69 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00298E10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00298EC2; /* je: equal / zero */

loc_00298E1E: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00298E3E; /* jge: greater or equal (signed >=) */

loc_00298E2A: ;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00298E30u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298E30: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00298EC1; /* jl: less (signed <) */

loc_00298E3E: ;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x24), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00298EB7; /* jne: not equal / not zero */

loc_00298E44: ;
    ecx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00298EC1; /* je: equal / zero */

loc_00298E4B: ;
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2C), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00298E63; /* je: equal / zero */

loc_00298E51: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00298E56u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298E56: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x20);
    MEM32(ecx + 0x2C) = 3;

loc_00298E63: ;
    eax = MEM32(esi + 0xC);
    edx = MEM32(eax + 0x20);
    ecx = MEM32(edx + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00298E8C; /* jle: less or equal (signed <=) */

loc_00298E75: ;
    edx = MEM32(eax + 0x14);
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00298E87u); RECOMP_ABI_CALL(0x001D50B0u, sub_001D50B0); /* call 0x001D50B0 */

loc_00298E87: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00298E8C: ;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00298EC1; /* jne: not equal / not zero */

loc_00298E93: ;
    edx = MEM32(eax + 0x14);
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00298EA5u); RECOMP_ABI_CALL(0x001D50B0u, sub_001D50B0); /* call 0x001D50B0 */

loc_00298EA5: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x20);
    edx = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(ecx + 0x24) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00298EB7: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00298EC1u); RECOMP_ABI_CALL(0x001D5030u, sub_001D5030); /* call 0x001D5030 */

loc_00298EC1: ;
    POP32(esp, edi);

loc_00298EC2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00298ED0
 * Original: 0x00298ED0 - 0x00298EDD (13 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298ED0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00298ED0: ;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00298EDC; /* je: equal / zero */

loc_00298ED7: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x68)); return; /* indirect tail jmp */

loc_00298EDC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00298EE0
 * Original: 0x00298EE0 - 0x00298F34 (84 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298EE0(void)
{

loc_00298EE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    edx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x45C); PUSH32(esp, 0x00298EF5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298EF5: ;
    ecx = MEM32(0x5BE6E4);
    edx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x00298F07u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298F07: ;
    ecx = MEM32(0x5BE6E4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x00298F12u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298F12: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(0x5BE6E4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00298F25u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298F25: ;
    ecx = MEM32(0x5BE6E4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x00298F30u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298F30: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00298F40
 * Original: 0x00298F40 - 0x00298F76 (54 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00298F40: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00298F72; /* je: equal / zero */

loc_00298F4A: ;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x24), 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_00298F5B; /* jne: not equal / not zero */

loc_00298F55: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00298F5Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298F5B: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00298F71; /* jl: less (signed <) */

loc_00298F65: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00298F71u); RECOMP_ABI_CALL(0x001C0E30u, sub_001C0E30); /* call 0x001C0E30 */

loc_00298F71: ;
    POP32(esp, edi);

loc_00298F72: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00298F80
 * Original: 0x00298F80 - 0x00298FD0 (80 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00298F80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00298F91; /* jne: not equal / not zero */

loc_00298F8A: ;
    MEM32(esi + 0x3C) = 1;

loc_00298F91: ;
    ecx = esi;
    PUSH32(esp, 0x00298F98u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00298F98: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM16(esi + 0xA) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00298FA5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298FA5: ;
    SET_LO16(ecx, MEM16(eax + 8));
    MEM16(esi + 8) = LO16(ecx);
    SET_LO8(eax, MEM8(0x5BB479));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00298FCE; /* je: equal / zero */

loc_00298FB6: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00298FCE; /* je: equal / zero */

loc_00298FBD: ;
    PUSH32(esp, 0x00298FC2u); RECOMP_ABI_CALL(0x001C83A0u, sub_001C83A0); /* call 0x001C83A0 */

loc_00298FC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00298FCE; /* je: equal / zero */

loc_00298FC6: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x00298FCEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00298FCE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00298FD0
 * Original: 0x00298FD0 - 0x00298FEB (27 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00298FD0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00298FDE; /* jne: not equal / not zero */

loc_00298FD8: ;
    eax = MEM32(ecx + 0x30);
    esp += 8; return; /* ret 4 */

loc_00298FDE: ;
    ecx = MEM32(ecx + 0x40);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + eax * 4 + -4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00298FF0
 * Original: 0x00298FF0 - 0x00298FFF (15 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298FF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00298FF0: ;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00298FFC; /* je: equal / zero */

loc_00298FF7: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x70)); return; /* indirect tail jmp */

loc_00298FFC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00299000
 * Original: 0x00299000 - 0x0029902F (47 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299000: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029901B; /* je: equal / zero */

loc_00299007: ;
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00299018u); RECOMP_ABI_CALL(0x001C0E30u, sub_001C0E30); /* call 0x001C0E30 */

loc_00299018: ;
    esp += 8; return; /* ret 4 */

loc_0029901B: ;
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029902Cu); RECOMP_ABI_CALL(0x001C0E30u, sub_001C0E30); /* call 0x001C0E30 */

loc_0029902C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00299030
 * Original: 0x00299030 - 0x00299060 (48 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299030: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029905C; /* je: equal / zero */

loc_0029903A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00299045u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00299045: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0029905B; /* jl: less (signed <) */

loc_0029904F: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0029905Bu); RECOMP_ABI_CALL(0x001C0E30u, sub_001C0E30); /* call 0x001C0E30 */

loc_0029905B: ;
    POP32(esp, edi);

loc_0029905C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00299060
 * Original: 0x00299060 - 0x00299123 (195 bytes, 86 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299060: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0x471A34;
    PUSH32(esp, edi);
    ebx = ecx;
    edx = eax + 1;
    /* nop */

loc_00299070: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299070; /* jne: not equal / not zero */

loc_00299077: ;
    edi = MEM32(esp + 0x10);
    eax = eax - edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x471A34);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00299089u); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_00299089: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002990E5; /* jne: not equal / not zero */

loc_00299090: ;
    eax = 0x471A34;
    edx = eax + 1;

loc_00299098: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299098; /* jne: not equal / not zero */

loc_0029909F: ;
    eax = eax - edx;
    edi = edi + eax;
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002990CE; /* jle: less or equal (signed <=) */

loc_002990AF: ;
    /* nop */

loc_002990B0: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x002990BFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002990BF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(ebx + 0x14);
    if (TEST_NZ(_fa, _fb)) goto loc_002990D6; /* jne: not equal / not zero */

loc_002990C6: ;
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002990B0; /* jl: less (signed <) */

loc_002990CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_002990D6: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + esi * 4);
    eax = MEM32(edx + 0x30);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_002990E5: ;
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002990CE; /* jle: less or equal (signed <=) */

loc_002990F1: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00299100u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00299100: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(ebx + 0x14);
    if (TEST_NZ(_fa, _fb)) goto loc_00299117; /* jne: not equal / not zero */

loc_00299107: ;
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002990F1; /* jl: less (signed <) */

loc_0029910F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00299117: ;
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + esi * 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00299130
 * Original: 0x00299130 - 0x00299139 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299130(void)
{

loc_00299130: ;
    eax = MEM32(0x5BE704);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00299140
 * Original: 0x00299140 - 0x0029919E (94 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299140: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x0029914Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029914B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00299170; /* jne: not equal / not zero */

loc_00299150: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0029915Cu); RECOMP_ABI_CALL(0x002932E0u, sub_002932E0); /* call 0x002932E0 */

loc_0029915C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00299166u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00299166: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029919A; /* je: equal / zero */

loc_00299170: ;
    ecx = MEM32(0x5BE704);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(esi + 0x1C);
    eax = MEM32(edx + eax * 4);
    ecx = MEM32(eax + 0xC);
    eax = eax + 0xC;
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x10) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esi + 0x18) = edx;

loc_0029919A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002991A0
 * Original: 0x002991A0 - 0x002991FD (93 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002991A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002991A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x002991ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002991AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002991D0; /* jne: not equal / not zero */

loc_002991B0: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002991BCu); RECOMP_ABI_CALL(0x002932E0u, sub_002932E0); /* call 0x002932E0 */

loc_002991BC: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x002991C6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002991C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002991F9; /* je: equal / zero */

loc_002991D0: ;
    ecx = MEM32(0x5BE704);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(esi + 0x1C);
    eax = MEM32(edx + eax * 4);
    ecx = MEM32(esi + 0xC);
    eax = eax + 0xC;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x10);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 0x14);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 0x18);
    MEM32(eax + 0xC) = edx;

loc_002991F9: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00299200
 * Original: 0x00299200 - 0x002992C0 (192 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299200: ;
    eax = MEM32(0x5BE704);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002992BE; /* jne: not equal / not zero */

loc_00299210: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00299217u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00299217: ;
    SET_LO8(ecx, MEM8(0x5BC548));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029922F; /* jne: not equal / not zero */

loc_00299221: ;
    eax = MEM32(0x46A6E0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029922Cu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0029922C: ;
    esp = esp + 4;

loc_0029922F: ;
    esi = eax;
    eax = MEM32(0x5BE704);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00299254; /* je: equal / zero */

loc_0029923C: ;
    ebx = MEM32(eax + 4);
    eax = eax + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_00299254; /* jne: not equal / not zero */

loc_0029924F: ;
    PUSH32(esp, 0x00299254u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00299254: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0029925Au); RECOMP_ABI_CALL(0x001E19C0u, sub_001E19C0); /* call 0x001E19C0 */

loc_0029925A: ;
    esp = esp + 4;
    MEM32(0x5BE704) = eax;
    ebx = 0x80;

loc_00299267: ;
    ecx = edi;
    PUSH32(esp, 0x0029926Eu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0029926E: ;
    SET_LO8(ecx, MEM8(0x5BC548));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299287; /* jne: not equal / not zero */

loc_00299278: ;
    ecx = MEM32(0x46A6E0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00299284u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00299284: ;
    esp = esp + 4;

loc_00299287: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029928Du); RECOMP_ABI_CALL(0x001DFD00u, sub_001DFD00); /* call 0x001DFD00 */

loc_0029928D: ;
    ecx = MEM32(0x5BE704);
    esp = esp + 4;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0029929Eu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0029929E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002992B9; /* je: equal / zero */

loc_002992A2: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002992B9; /* jne: not equal / not zero */

loc_002992B2: ;
    ecx = esi;
    PUSH32(esp, 0x002992B9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002992B9: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00299267; /* jne: not equal / not zero */

loc_002992BC: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_002992BE: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002992C0
 * Original: 0x002992C0 - 0x00299395 (213 bytes, 90 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002992C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002992C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    ebx = MEM32(eax + 8);
    SET_LO8(eax, MEM8(esi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_002992E2; /* jne: not equal / not zero */

loc_002992D3: ;
    ecx = esi + 0x5C;
    PUSH32(esp, ecx);
    edx = esi + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002992E2u); RECOMP_ABI_CALL(0x00294B10u, sub_00294B10); /* call 0x00294B10 */

loc_002992E2: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299302; /* jne: not equal / not zero */

loc_002992E9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00299302; /* jle: less or equal (signed <=) */

loc_002992ED: ;
    eax = ebx;
    PUSH32(esp, 0x10);
    eax = eax << 6;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002992FCu); RECOMP_ABI_CALL(0x001F7F00u, sub_001F7F00); /* call 0x001F7F00 */

loc_002992FC: ;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = ebx;

loc_00299302: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    edi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299351; /* jne: not equal / not zero */

loc_0029930B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00299380; /* jle: less or equal (signed <=) */

loc_0029930F: ;
    ebp = 0; /* xor self */

loc_00299311: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(0x5BA824);
    eax = MEM32(edx + edi * 4);
    edx = MEM32(ecx + 8);
    ecx = MEM32(esi + 0x10);
    eax = eax + edx;
    PUSH32(esp, eax);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    ecx = ecx + ebp;
    PUSH32(esp, 0x00299334u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_00299334: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00299311; /* jl: less (signed <) */

loc_0029933C: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0029934Au); RECOMP_ABI_CALL(0x001B6AE0u, sub_001B6AE0); /* call 0x001B6AE0 */

loc_0029934A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00299351: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00299380; /* jle: less or equal (signed <=) */

loc_00299355: ;
    ebp = 0; /* xor self */

loc_00299357: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + edi * 4);
    edx = MEM32(0x5BA824);
    ecx = ecx + MEM32(edx + 8);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    eax = eax + ebp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00299375u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_00299375: ;
    esp = esp + 8;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00299357; /* jl: less (signed <) */

loc_00299380: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0029938Eu); RECOMP_ABI_CALL(0x001B6AE0u, sub_001B6AE0); /* call 0x001B6AE0 */

loc_0029938E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002993A0
 * Original: 0x002993A0 - 0x002994AA (266 bytes, 106 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002993A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002993A0: ;
    eax = MEM32(0x5BB2BC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002993B5u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_002993B5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002994A5; /* je: equal / zero */

loc_002993BD: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002994A5; /* jne: not equal / not zero */

loc_002993C7: ;
    eax = MEM32(esi + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002993D3; /* je: equal / zero */

loc_002993D0: ;
    ecx = MEM32(eax + 0x10);

loc_002993D3: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    if (TEST_NZ(_fa, _fb)) goto loc_0029942F; /* jne: not equal / not zero */

loc_002993DC: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002994A3; /* je: equal / zero */

loc_002993E7: ;
    edx = MEM32(esi + 0x28);
    ebx = MEM32(edx + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    ebp = MEM32(edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0029940B; /* jle: less or equal (signed <=) */

loc_002993F3: ;
    edx = MEM32(edx + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x500); PUSH32(esp, 0x00299406u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00299406: ;
    goto loc_00299498;

loc_0029940B: ;
    edx = MEM32(esi + 0x34);
    ebx = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x508); PUSH32(esp, 0x0029942Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029942D: ;
    goto loc_00299498;

loc_0029942F: ;
    edx = MEM32(esi + 0x28);
    ebp = MEM32(edx + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0029946A; /* jle: less or equal (signed <=) */

loc_0029943D: ;
    edx = MEM32(edx + 0x10);
    ebx = MEM32(eax + 8);
    eax = MEM32(eax + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x24);
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(edi);
    edx = ebx * 4;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x4FC); PUSH32(esp, 0x00299468u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00299468: ;
    goto loc_00299498;

loc_0029946A: ;
    edx = MEM32(esi + 0x2C);
    ebp = MEM32(eax + 8);
    ebx = MEM32(esi + 0x30);
    eax = MEM32(eax + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = eax;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(edi);
    edx = ebp * 4;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x504); PUSH32(esp, 0x00299498u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00299498: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002994A3; /* je: equal / zero */

loc_002994A0: ;
    MEM32(esi + 0x38) = edi;

loc_002994A3: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_002994A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002994B0
 * Original: 0x002994B0 - 0x002994F6 (70 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002994B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002994B0: ;
    eax = MEM32(0x5BB2BC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002994C5u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_002994C5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002994F1; /* je: equal / zero */

loc_002994C9: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002994F1; /* je: equal / zero */

loc_002994D0: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002994E9; /* jne: not equal / not zero */

loc_002994D8: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x002994DEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002994DE: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002994F1; /* je: equal / zero */

loc_002994E9: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002994F1u); RECOMP_ABI_CALL(0x001AFC40u, sub_001AFC40); /* call 0x001AFC40 */

loc_002994F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00299500
 * Original: 0x00299500 - 0x00299527 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299500: ;
    eax = MEM32(0x5BE698);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299514; /* je: equal / zero */

loc_00299509: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299526; /* jne: not equal / not zero */

loc_00299514: ;
    PUSH32(esp, 0x29E070);
    PUSH32(esp, 0x0029951Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029951E: ;
    eax = MEM32(0x5BE698);
    esp = esp + 4;

loc_00299526: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299530
 * Original: 0x00299530 - 0x00299557 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299530: ;
    eax = MEM32(0x5BE690);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299544; /* je: equal / zero */

loc_00299539: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299556; /* jne: not equal / not zero */

loc_00299544: ;
    PUSH32(esp, 0x29BEF0);
    PUSH32(esp, 0x0029954Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029954E: ;
    eax = MEM32(0x5BE690);
    esp = esp + 4;

loc_00299556: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299560
 * Original: 0x00299560 - 0x00299587 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299560: ;
    eax = MEM32(0x5BE4CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299574; /* je: equal / zero */

loc_00299569: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299586; /* jne: not equal / not zero */

loc_00299574: ;
    PUSH32(esp, 0x29D710);
    PUSH32(esp, 0x0029957Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029957E: ;
    eax = MEM32(0x5BE4CC);
    esp = esp + 4;

loc_00299586: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299590
 * Original: 0x00299590 - 0x002995B7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299590: ;
    eax = MEM32(0x5BE4D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002995A4; /* je: equal / zero */

loc_00299599: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002995B6; /* jne: not equal / not zero */

loc_002995A4: ;
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x002995AEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002995AE: ;
    eax = MEM32(0x5BE4D0);
    esp = esp + 4;

loc_002995B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002995C0
 * Original: 0x002995C0 - 0x002995E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002995C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002995C0: ;
    eax = MEM32(0x5BE4D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002995D4; /* je: equal / zero */

loc_002995C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002995E6; /* jne: not equal / not zero */

loc_002995D4: ;
    PUSH32(esp, 0x29E1D0);
    PUSH32(esp, 0x002995DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002995DE: ;
    eax = MEM32(0x5BE4D4);
    esp = esp + 4;

loc_002995E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002995F0
 * Original: 0x002995F0 - 0x00299617 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002995F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002995F0: ;
    eax = MEM32(0x5BE4D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299604; /* je: equal / zero */

loc_002995F9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299616; /* jne: not equal / not zero */

loc_00299604: ;
    PUSH32(esp, 0x29E220);
    PUSH32(esp, 0x0029960Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029960E: ;
    eax = MEM32(0x5BE4D8);
    esp = esp + 4;

loc_00299616: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299620
 * Original: 0x00299620 - 0x00299647 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299620: ;
    eax = MEM32(0x5BE4DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299634; /* je: equal / zero */

loc_00299629: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299646; /* jne: not equal / not zero */

loc_00299634: ;
    PUSH32(esp, 0x29E270);
    PUSH32(esp, 0x0029963Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029963E: ;
    eax = MEM32(0x5BE4DC);
    esp = esp + 4;

loc_00299646: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299650
 * Original: 0x00299650 - 0x00299677 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299650: ;
    eax = MEM32(0x5BE4E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299664; /* je: equal / zero */

loc_00299659: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299676; /* jne: not equal / not zero */

loc_00299664: ;
    PUSH32(esp, 0x29E2C0);
    PUSH32(esp, 0x0029966Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029966E: ;
    eax = MEM32(0x5BE4E0);
    esp = esp + 4;

loc_00299676: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299680
 * Original: 0x00299680 - 0x002996A7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299680: ;
    eax = MEM32(0x5BE4E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299694; /* je: equal / zero */

loc_00299689: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002996A6; /* jne: not equal / not zero */

loc_00299694: ;
    PUSH32(esp, 0x29E310);
    PUSH32(esp, 0x0029969Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029969E: ;
    eax = MEM32(0x5BE4E4);
    esp = esp + 4;

loc_002996A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002996B0
 * Original: 0x002996B0 - 0x002996D7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002996B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002996B0: ;
    eax = MEM32(0x5BE4F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002996C4; /* je: equal / zero */

loc_002996B9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002996D6; /* jne: not equal / not zero */

loc_002996C4: ;
    PUSH32(esp, 0x29E430);
    PUSH32(esp, 0x002996CEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002996CE: ;
    eax = MEM32(0x5BE4F0);
    esp = esp + 4;

loc_002996D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002996E0
 * Original: 0x002996E0 - 0x00299707 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002996E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002996E0: ;
    eax = MEM32(0x5BE4EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002996F4; /* je: equal / zero */

loc_002996E9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299706; /* jne: not equal / not zero */

loc_002996F4: ;
    PUSH32(esp, 0x29E3E0);
    PUSH32(esp, 0x002996FEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002996FE: ;
    eax = MEM32(0x5BE4EC);
    esp = esp + 4;

loc_00299706: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299710
 * Original: 0x00299710 - 0x00299737 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299710: ;
    eax = MEM32(0x5BE63C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299724; /* je: equal / zero */

loc_00299719: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299736; /* jne: not equal / not zero */

loc_00299724: ;
    PUSH32(esp, 0x29F4C0);
    PUSH32(esp, 0x0029972Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029972E: ;
    eax = MEM32(0x5BE63C);
    esp = esp + 4;

loc_00299736: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299740
 * Original: 0x00299740 - 0x00299767 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299740: ;
    eax = MEM32(0x5BE4F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299754; /* je: equal / zero */

loc_00299749: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299766; /* jne: not equal / not zero */

loc_00299754: ;
    PUSH32(esp, 0x29FB90);
    PUSH32(esp, 0x0029975Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029975E: ;
    eax = MEM32(0x5BE4F4);
    esp = esp + 4;

loc_00299766: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299770
 * Original: 0x00299770 - 0x00299797 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299770: ;
    eax = MEM32(0x5BE4F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299784; /* je: equal / zero */

loc_00299779: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299796; /* jne: not equal / not zero */

loc_00299784: ;
    PUSH32(esp, 0x29E480);
    PUSH32(esp, 0x0029978Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029978E: ;
    eax = MEM32(0x5BE4F8);
    esp = esp + 4;

loc_00299796: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002997A0
 * Original: 0x002997A0 - 0x002997D3 (51 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002997A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002997A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_002997AF; /* je: equal / zero */

loc_002997AC: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002997AF: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002997CB; /* je: equal / zero */

loc_002997B6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002997CB; /* jne: not equal / not zero */

loc_002997C6: ;
    PUSH32(esp, 0x002997CBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002997CB: ;
    MEM32(esi + 0xC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002997E0
 * Original: 0x002997E0 - 0x00299807 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002997E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002997E0: ;
    eax = MEM32(0x5BE500);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002997F4; /* je: equal / zero */

loc_002997E9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299806; /* jne: not equal / not zero */

loc_002997F4: ;
    PUSH32(esp, 0x29E520);
    PUSH32(esp, 0x002997FEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002997FE: ;
    eax = MEM32(0x5BE500);
    esp = esp + 4;

loc_00299806: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299810
 * Original: 0x00299810 - 0x00299837 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299810: ;
    eax = MEM32(0x5BE504);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299824; /* je: equal / zero */

loc_00299819: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299836; /* jne: not equal / not zero */

loc_00299824: ;
    PUSH32(esp, 0x29E570);
    PUSH32(esp, 0x0029982Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029982E: ;
    eax = MEM32(0x5BE504);
    esp = esp + 4;

loc_00299836: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299840
 * Original: 0x00299840 - 0x00299867 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299840: ;
    eax = MEM32(0x5BE50C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299854; /* je: equal / zero */

loc_00299849: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299866; /* jne: not equal / not zero */

loc_00299854: ;
    PUSH32(esp, 0x29E5C0);
    PUSH32(esp, 0x0029985Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029985E: ;
    eax = MEM32(0x5BE50C);
    esp = esp + 4;

loc_00299866: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299870
 * Original: 0x00299870 - 0x00299897 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299870: ;
    eax = MEM32(0x5BE508);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299884; /* je: equal / zero */

loc_00299879: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299896; /* jne: not equal / not zero */

loc_00299884: ;
    PUSH32(esp, 0x29DC00);
    PUSH32(esp, 0x0029988Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029988E: ;
    eax = MEM32(0x5BE508);
    esp = esp + 4;

loc_00299896: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002998A0
 * Original: 0x002998A0 - 0x002998C7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002998A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002998A0: ;
    eax = MEM32(0x5BE688);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002998B4; /* je: equal / zero */

loc_002998A9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002998C6; /* jne: not equal / not zero */

loc_002998B4: ;
    PUSH32(esp, 0x2A03D0);
    PUSH32(esp, 0x002998BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002998BE: ;
    eax = MEM32(0x5BE688);
    esp = esp + 4;

loc_002998C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002998D0
 * Original: 0x002998D0 - 0x002998F7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002998D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002998D0: ;
    eax = MEM32(0x5BE684);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002998E4; /* je: equal / zero */

loc_002998D9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002998F6; /* jne: not equal / not zero */

loc_002998E4: ;
    PUSH32(esp, 0x2A06A0);
    PUSH32(esp, 0x002998EEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002998EE: ;
    eax = MEM32(0x5BE684);
    esp = esp + 4;

loc_002998F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299900
 * Original: 0x00299900 - 0x00299927 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299900: ;
    eax = MEM32(0x5BE510);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299914; /* je: equal / zero */

loc_00299909: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299926; /* jne: not equal / not zero */

loc_00299914: ;
    PUSH32(esp, 0x29DC80);
    PUSH32(esp, 0x0029991Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029991E: ;
    eax = MEM32(0x5BE510);
    esp = esp + 4;

loc_00299926: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299930
 * Original: 0x00299930 - 0x00299957 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299930: ;
    eax = MEM32(0x5BE518);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299944; /* je: equal / zero */

loc_00299939: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299956; /* jne: not equal / not zero */

loc_00299944: ;
    PUSH32(esp, 0x29E610);
    PUSH32(esp, 0x0029994Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029994E: ;
    eax = MEM32(0x5BE518);
    esp = esp + 4;

loc_00299956: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299960
 * Original: 0x00299960 - 0x00299987 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299960: ;
    eax = MEM32(0x5BE524);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299974; /* je: equal / zero */

loc_00299969: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299986; /* jne: not equal / not zero */

loc_00299974: ;
    PUSH32(esp, 0x2A04E0);
    PUSH32(esp, 0x0029997Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029997E: ;
    eax = MEM32(0x5BE524);
    esp = esp + 4;

loc_00299986: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299990
 * Original: 0x00299990 - 0x002999B7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299990: ;
    eax = MEM32(0x5BE528);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002999A4; /* je: equal / zero */

loc_00299999: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002999B6; /* jne: not equal / not zero */

loc_002999A4: ;
    PUSH32(esp, 0x29E660);
    PUSH32(esp, 0x002999AEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002999AE: ;
    eax = MEM32(0x5BE528);
    esp = esp + 4;

loc_002999B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002999C0
 * Original: 0x002999C0 - 0x002999E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002999C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002999C0: ;
    eax = MEM32(0x5BE538);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002999D4; /* je: equal / zero */

loc_002999C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002999E6; /* jne: not equal / not zero */

loc_002999D4: ;
    PUSH32(esp, 0x29E6C0);
    PUSH32(esp, 0x002999DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002999DE: ;
    eax = MEM32(0x5BE538);
    esp = esp + 4;

loc_002999E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002999F0
 * Original: 0x002999F0 - 0x00299A17 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002999F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002999F0: ;
    eax = MEM32(0x5BE53C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299A04; /* je: equal / zero */

loc_002999F9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299A16; /* jne: not equal / not zero */

loc_00299A04: ;
    PUSH32(esp, 0x29E710);
    PUSH32(esp, 0x00299A0Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299A0E: ;
    eax = MEM32(0x5BE53C);
    esp = esp + 4;

loc_00299A16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299A20
 * Original: 0x00299A20 - 0x00299A47 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299A20: ;
    eax = MEM32(0x5BE540);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299A34; /* je: equal / zero */

loc_00299A29: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299A46; /* jne: not equal / not zero */

loc_00299A34: ;
    PUSH32(esp, 0x2A0760);
    PUSH32(esp, 0x00299A3Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299A3E: ;
    eax = MEM32(0x5BE540);
    esp = esp + 4;

loc_00299A46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299A50
 * Original: 0x00299A50 - 0x00299A77 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299A50: ;
    eax = MEM32(0x5BE544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299A64; /* je: equal / zero */

loc_00299A59: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299A76; /* jne: not equal / not zero */

loc_00299A64: ;
    PUSH32(esp, 0x29E760);
    PUSH32(esp, 0x00299A6Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299A6E: ;
    eax = MEM32(0x5BE544);
    esp = esp + 4;

loc_00299A76: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299A80
 * Original: 0x00299A80 - 0x00299AA7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299A80: ;
    eax = MEM32(0x5BE548);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299A94; /* je: equal / zero */

loc_00299A89: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299AA6; /* jne: not equal / not zero */

loc_00299A94: ;
    PUSH32(esp, 0x29E7B0);
    PUSH32(esp, 0x00299A9Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299A9E: ;
    eax = MEM32(0x5BE548);
    esp = esp + 4;

loc_00299AA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299AB0
 * Original: 0x00299AB0 - 0x00299AD7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299AB0: ;
    eax = MEM32(0x5BE54C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299AC4; /* je: equal / zero */

loc_00299AB9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299AD6; /* jne: not equal / not zero */

loc_00299AC4: ;
    PUSH32(esp, 0x29E800);
    PUSH32(esp, 0x00299ACEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299ACE: ;
    eax = MEM32(0x5BE54C);
    esp = esp + 4;

loc_00299AD6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299AE0
 * Original: 0x00299AE0 - 0x00299B07 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299AE0: ;
    eax = MEM32(0x5BE550);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299AF4; /* je: equal / zero */

loc_00299AE9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299B06; /* jne: not equal / not zero */

loc_00299AF4: ;
    PUSH32(esp, 0x29E850);
    PUSH32(esp, 0x00299AFEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299AFE: ;
    eax = MEM32(0x5BE550);
    esp = esp + 4;

loc_00299B06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299B10
 * Original: 0x00299B10 - 0x00299B37 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299B10: ;
    eax = MEM32(0x5BE554);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299B24; /* je: equal / zero */

loc_00299B19: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299B36; /* jne: not equal / not zero */

loc_00299B24: ;
    PUSH32(esp, 0x2A0820);
    PUSH32(esp, 0x00299B2Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299B2E: ;
    eax = MEM32(0x5BE554);
    esp = esp + 4;

loc_00299B36: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299B40
 * Original: 0x00299B40 - 0x00299B67 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299B40: ;
    eax = MEM32(0x5BE558);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299B54; /* je: equal / zero */

loc_00299B49: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299B66; /* jne: not equal / not zero */

loc_00299B54: ;
    PUSH32(esp, 0x29E8A0);
    PUSH32(esp, 0x00299B5Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299B5E: ;
    eax = MEM32(0x5BE558);
    esp = esp + 4;

loc_00299B66: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299B70
 * Original: 0x00299B70 - 0x00299B97 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299B70: ;
    eax = MEM32(0x5BE55C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299B84; /* je: equal / zero */

loc_00299B79: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299B96; /* jne: not equal / not zero */

loc_00299B84: ;
    PUSH32(esp, 0x29E8F0);
    PUSH32(esp, 0x00299B8Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299B8E: ;
    eax = MEM32(0x5BE55C);
    esp = esp + 4;

loc_00299B96: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299BA0
 * Original: 0x00299BA0 - 0x00299BC7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299BA0: ;
    eax = MEM32(0x5BE560);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299BB4; /* je: equal / zero */

loc_00299BA9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299BC6; /* jne: not equal / not zero */

loc_00299BB4: ;
    PUSH32(esp, 0x29E940);
    PUSH32(esp, 0x00299BBEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299BBE: ;
    eax = MEM32(0x5BE560);
    esp = esp + 4;

loc_00299BC6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299BD0
 * Original: 0x00299BD0 - 0x00299BF7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299BD0: ;
    eax = MEM32(0x5BE564);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299BE4; /* je: equal / zero */

loc_00299BD9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299BF6; /* jne: not equal / not zero */

loc_00299BE4: ;
    PUSH32(esp, 0x29E990);
    PUSH32(esp, 0x00299BEEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299BEE: ;
    eax = MEM32(0x5BE564);
    esp = esp + 4;

loc_00299BF6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299C00
 * Original: 0x00299C00 - 0x00299C27 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299C00: ;
    eax = MEM32(0x5BE574);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299C14; /* je: equal / zero */

loc_00299C09: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299C26; /* jne: not equal / not zero */

loc_00299C14: ;
    PUSH32(esp, 0x29E9E0);
    PUSH32(esp, 0x00299C1Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299C1E: ;
    eax = MEM32(0x5BE574);
    esp = esp + 4;

loc_00299C26: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299C30
 * Original: 0x00299C30 - 0x00299C53 (35 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299C30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00299C3F; /* je: equal / zero */

loc_00299C3C: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00299C3F: ;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00299C48u); RECOMP_ABI_CALL(0x00011A40u, sub_00011A40); /* call 0x00011A40 */

loc_00299C48: ;
    esp = esp + 4;
    MEM32(edi + 0xC) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00299C60
 * Original: 0x00299C60 - 0x00299C87 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299C60: ;
    eax = MEM32(0x5BE57C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299C74; /* je: equal / zero */

loc_00299C69: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299C86; /* jne: not equal / not zero */

loc_00299C74: ;
    PUSH32(esp, 0x29EA80);
    PUSH32(esp, 0x00299C7Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299C7E: ;
    eax = MEM32(0x5BE57C);
    esp = esp + 4;

loc_00299C86: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299C90
 * Original: 0x00299C90 - 0x00299CB7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299C90: ;
    eax = MEM32(0x5BE580);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299CA4; /* je: equal / zero */

loc_00299C99: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299CB6; /* jne: not equal / not zero */

loc_00299CA4: ;
    PUSH32(esp, 0x29EAD0);
    PUSH32(esp, 0x00299CAEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299CAE: ;
    eax = MEM32(0x5BE580);
    esp = esp + 4;

loc_00299CB6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299CC0
 * Original: 0x00299CC0 - 0x00299CE7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299CC0: ;
    eax = MEM32(0x5BE584);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299CD4; /* je: equal / zero */

loc_00299CC9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299CE6; /* jne: not equal / not zero */

loc_00299CD4: ;
    PUSH32(esp, 0x29EB20);
    PUSH32(esp, 0x00299CDEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299CDE: ;
    eax = MEM32(0x5BE584);
    esp = esp + 4;

loc_00299CE6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299CF0
 * Original: 0x00299CF0 - 0x00299D17 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299CF0: ;
    eax = MEM32(0x5BE588);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299D04; /* je: equal / zero */

loc_00299CF9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299D16; /* jne: not equal / not zero */

loc_00299D04: ;
    PUSH32(esp, 0x29EB70);
    PUSH32(esp, 0x00299D0Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299D0E: ;
    eax = MEM32(0x5BE588);
    esp = esp + 4;

loc_00299D16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299D20
 * Original: 0x00299D20 - 0x00299D47 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299D20: ;
    eax = MEM32(0x5BE58C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299D34; /* je: equal / zero */

loc_00299D29: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299D46; /* jne: not equal / not zero */

loc_00299D34: ;
    PUSH32(esp, 0x29EBC0);
    PUSH32(esp, 0x00299D3Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299D3E: ;
    eax = MEM32(0x5BE58C);
    esp = esp + 4;

loc_00299D46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299D50
 * Original: 0x00299D50 - 0x00299D77 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299D50: ;
    eax = MEM32(0x5BE594);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299D64; /* je: equal / zero */

loc_00299D59: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299D76; /* jne: not equal / not zero */

loc_00299D64: ;
    PUSH32(esp, 0x29EC20);
    PUSH32(esp, 0x00299D6Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299D6E: ;
    eax = MEM32(0x5BE594);
    esp = esp + 4;

loc_00299D76: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299D80
 * Original: 0x00299D80 - 0x00299DA7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299D80: ;
    eax = MEM32(0x5BE590);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299D94; /* je: equal / zero */

loc_00299D89: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299DA6; /* jne: not equal / not zero */

loc_00299D94: ;
    PUSH32(esp, 0x29FCA0);
    PUSH32(esp, 0x00299D9Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299D9E: ;
    eax = MEM32(0x5BE590);
    esp = esp + 4;

loc_00299DA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299DB0
 * Original: 0x00299DB0 - 0x00299DD7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299DB0: ;
    eax = MEM32(0x5BE598);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299DC4; /* je: equal / zero */

loc_00299DB9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299DD6; /* jne: not equal / not zero */

loc_00299DC4: ;
    PUSH32(esp, 0x29EC70);
    PUSH32(esp, 0x00299DCEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299DCE: ;
    eax = MEM32(0x5BE598);
    esp = esp + 4;

loc_00299DD6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299DE0
 * Original: 0x00299DE0 - 0x00299E07 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299DE0: ;
    eax = MEM32(0x5BE59C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299DF4; /* je: equal / zero */

loc_00299DE9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299E06; /* jne: not equal / not zero */

loc_00299DF4: ;
    PUSH32(esp, 0x29ECC0);
    PUSH32(esp, 0x00299DFEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299DFE: ;
    eax = MEM32(0x5BE59C);
    esp = esp + 4;

loc_00299E06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299E10
 * Original: 0x00299E10 - 0x00299E37 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299E10: ;
    eax = MEM32(0x5BE5B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299E24; /* je: equal / zero */

loc_00299E19: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299E36; /* jne: not equal / not zero */

loc_00299E24: ;
    PUSH32(esp, 0x29B620);
    PUSH32(esp, 0x00299E2Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299E2E: ;
    eax = MEM32(0x5BE5B0);
    esp = esp + 4;

loc_00299E36: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299E40
 * Original: 0x00299E40 - 0x00299E67 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299E40: ;
    eax = MEM32(0x5BE5AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299E54; /* je: equal / zero */

loc_00299E49: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299E66; /* jne: not equal / not zero */

loc_00299E54: ;
    PUSH32(esp, 0x29DD10);
    PUSH32(esp, 0x00299E5Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299E5E: ;
    eax = MEM32(0x5BE5AC);
    esp = esp + 4;

loc_00299E66: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299E70
 * Original: 0x00299E70 - 0x00299E97 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299E70: ;
    eax = MEM32(0x5BE5A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299E84; /* je: equal / zero */

loc_00299E79: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299E96; /* jne: not equal / not zero */

loc_00299E84: ;
    PUSH32(esp, 0x29ED40);
    PUSH32(esp, 0x00299E8Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299E8E: ;
    eax = MEM32(0x5BE5A8);
    esp = esp + 4;

loc_00299E96: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299EA0
 * Original: 0x00299EA0 - 0x00299EC7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299EA0: ;
    eax = MEM32(0x5BE5A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299EB4; /* je: equal / zero */

loc_00299EA9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299EC6; /* jne: not equal / not zero */

loc_00299EB4: ;
    PUSH32(esp, 0x29D850);
    PUSH32(esp, 0x00299EBEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299EBE: ;
    eax = MEM32(0x5BE5A4);
    esp = esp + 4;

loc_00299EC6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299ED0
 * Original: 0x00299ED0 - 0x00299F20 (80 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00299ED0(void)
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

loc_00299ED0: ;
    edx = MEM32(ecx + 0x1C);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    fp_push(MEMF(eax + esi * 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0xC); /* fsub dword ptr [esp + 0xc] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 8) = MEM32(esp + 8) & 0x7FFFFFFF;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CD304)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cd304] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299F1C; /* jne: not equal / not zero */

loc_00299EFF: ;
    MEM8(ecx + 0x28) = 1;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299F1C; /* je: equal / zero */

loc_00299F0A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00299F1C; /* jl: less (signed <) */

loc_00299F0E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00299F1C; /* jge: greater or equal (signed >=) */

loc_00299F12: ;
    ecx = MEM32(edx + 0x10);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEMF(ecx + esi * 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_00299F1C: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00299F20
 * Original: 0x00299F20 - 0x00299F60 (64 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299F20(void)
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

loc_00299F20: ;
    eax = MEM32(ecx + 0x1C);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(esp + 4);
    fp_push(MEMF(ecx + edx * 4)); /* fld float */
    esp += 8; return; /* ret 4 */

    MEM8(ecx + 0x28) = 1;
    ecx = MEM32(edx + 0x10);
    MEM32(ecx + esi * 4) = eax;

loc_00299F5B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00299F30
 * Original: 0x00299F30 - 0x00299F60 (48 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299F30: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(eax + 0x10);
    eax = MEM32(esp + 8);
    edx = MEM32(edx + eax * 4);
    eax = MEM32(edx + 0x10);
    edx = MEM32(ecx + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + esi * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + esi * 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00299F5B; /* je: equal / zero */

loc_00299F51: ;
    MEM8(ecx + 0x28) = 1;
    ecx = MEM32(edx + 0x10);
    MEM32(ecx + esi * 4) = eax;

loc_00299F5B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00299F60
 * Original: 0x00299F60 - 0x00299F87 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299F60: ;
    eax = MEM32(0x5BE5A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299F74; /* je: equal / zero */

loc_00299F69: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299F86; /* jne: not equal / not zero */

loc_00299F74: ;
    PUSH32(esp, 0x2A0590);
    PUSH32(esp, 0x00299F7Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299F7E: ;
    eax = MEM32(0x5BE5A0);
    esp = esp + 4;

loc_00299F86: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299F90
 * Original: 0x00299F90 - 0x00299FB7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299F90: ;
    eax = MEM32(0x5BE5B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299FA4; /* je: equal / zero */

loc_00299F99: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299FB6; /* jne: not equal / not zero */

loc_00299FA4: ;
    PUSH32(esp, 0x29FF90);
    PUSH32(esp, 0x00299FAEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299FAE: ;
    eax = MEM32(0x5BE5B4);
    esp = esp + 4;

loc_00299FB6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299FC0
 * Original: 0x00299FC0 - 0x00299FE7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299FC0: ;
    eax = MEM32(0x5BE5BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299FD4; /* je: equal / zero */

loc_00299FC9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299FE6; /* jne: not equal / not zero */

loc_00299FD4: ;
    PUSH32(esp, 0x29EDE0);
    PUSH32(esp, 0x00299FDEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00299FDE: ;
    eax = MEM32(0x5BE5BC);
    esp = esp + 4;

loc_00299FE6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299FF0
 * Original: 0x00299FF0 - 0x0029A017 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299FF0: ;
    eax = MEM32(0x5BE5C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A004; /* je: equal / zero */

loc_00299FF9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A016; /* jne: not equal / not zero */

loc_0029A004: ;
    PUSH32(esp, 0x29EE30);
    PUSH32(esp, 0x0029A00Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A00E: ;
    eax = MEM32(0x5BE5C0);
    esp = esp + 4;

loc_0029A016: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A020
 * Original: 0x0029A020 - 0x0029A047 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A020: ;
    eax = MEM32(0x5BE5C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A034; /* je: equal / zero */

loc_0029A029: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A046; /* jne: not equal / not zero */

loc_0029A034: ;
    PUSH32(esp, 0x29FD00);
    PUSH32(esp, 0x0029A03Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A03E: ;
    eax = MEM32(0x5BE5C4);
    esp = esp + 4;

loc_0029A046: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A050
 * Original: 0x0029A050 - 0x0029A077 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A050: ;
    eax = MEM32(0x5BE5C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A064; /* je: equal / zero */

loc_0029A059: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A076; /* jne: not equal / not zero */

loc_0029A064: ;
    PUSH32(esp, 0x29EE80);
    PUSH32(esp, 0x0029A06Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A06E: ;
    eax = MEM32(0x5BE5C8);
    esp = esp + 4;

loc_0029A076: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A080
 * Original: 0x0029A080 - 0x0029A0A7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A080: ;
    eax = MEM32(0x5BE5D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A094; /* je: equal / zero */

loc_0029A089: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A0A6; /* jne: not equal / not zero */

loc_0029A094: ;
    PUSH32(esp, 0x29EF20);
    PUSH32(esp, 0x0029A09Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A09E: ;
    eax = MEM32(0x5BE5D0);
    esp = esp + 4;

loc_0029A0A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A0B0
 * Original: 0x0029A0B0 - 0x0029A0D7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A0B0: ;
    eax = MEM32(0x5BE5D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A0C4; /* je: equal / zero */

loc_0029A0B9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A0D6; /* jne: not equal / not zero */

loc_0029A0C4: ;
    PUSH32(esp, 0x29EF70);
    PUSH32(esp, 0x0029A0CEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A0CE: ;
    eax = MEM32(0x5BE5D4);
    esp = esp + 4;

loc_0029A0D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A0E0
 * Original: 0x0029A0E0 - 0x0029A119 (57 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A0E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0029A0EF; /* je: equal / zero */

loc_0029A0EC: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0029A0EF: ;
    ecx = MEM32(esi + 0x8C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A10E; /* je: equal / zero */

loc_0029A0F9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029A10E; /* jne: not equal / not zero */

loc_0029A109: ;
    PUSH32(esp, 0x0029A10Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029A10E: ;
    MEM32(esi + 0x8C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029A120
 * Original: 0x0029A120 - 0x0029A147 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A120: ;
    eax = MEM32(0x5BE5E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A134; /* je: equal / zero */

loc_0029A129: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A146; /* jne: not equal / not zero */

loc_0029A134: ;
    PUSH32(esp, 0x2A0050);
    PUSH32(esp, 0x0029A13Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A13E: ;
    eax = MEM32(0x5BE5E4);
    esp = esp + 4;

loc_0029A146: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A150
 * Original: 0x0029A150 - 0x0029A177 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A150: ;
    eax = MEM32(0x5BE5DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A164; /* je: equal / zero */

loc_0029A159: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A176; /* jne: not equal / not zero */

loc_0029A164: ;
    PUSH32(esp, 0x2A05E0);
    PUSH32(esp, 0x0029A16Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A16E: ;
    eax = MEM32(0x5BE5DC);
    esp = esp + 4;

loc_0029A176: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A180
 * Original: 0x0029A180 - 0x0029A1A7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A180: ;
    eax = MEM32(0x5BE5F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A194; /* je: equal / zero */

loc_0029A189: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A1A6; /* jne: not equal / not zero */

loc_0029A194: ;
    PUSH32(esp, 0x29F0B0);
    PUSH32(esp, 0x0029A19Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A19E: ;
    eax = MEM32(0x5BE5F4);
    esp = esp + 4;

loc_0029A1A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A1B0
 * Original: 0x0029A1B0 - 0x0029A1D7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A1B0: ;
    eax = MEM32(0x5BE5F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A1C4; /* je: equal / zero */

loc_0029A1B9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A1D6; /* jne: not equal / not zero */

loc_0029A1C4: ;
    PUSH32(esp, 0x29F100);
    PUSH32(esp, 0x0029A1CEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A1CE: ;
    eax = MEM32(0x5BE5F8);
    esp = esp + 4;

loc_0029A1D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A1E0
 * Original: 0x0029A1E0 - 0x0029A21E (62 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A1E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0029A1EF; /* je: equal / zero */

loc_0029A1EC: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0029A1EF: ;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029A1F8u); RECOMP_ABI_CALL(0x00011A40u, sub_00011A40); /* call 0x00011A40 */

loc_0029A1F8: ;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi + 0xC) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0029A219; /* je: equal / zero */

loc_0029A202: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029A219; /* jne: not equal / not zero */

loc_0029A212: ;
    ecx = esi;
    PUSH32(esp, 0x0029A219u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029A219: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029A220
 * Original: 0x0029A220 - 0x0029A26E (78 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A220: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0029A22F; /* je: equal / zero */

loc_0029A22C: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0029A22F: ;
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A24B; /* je: equal / zero */

loc_0029A236: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029A24B; /* jne: not equal / not zero */

loc_0029A246: ;
    PUSH32(esp, 0x0029A24Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029A24B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi + 0x14) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0029A269; /* je: equal / zero */

loc_0029A252: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029A269; /* jne: not equal / not zero */

loc_0029A262: ;
    ecx = esi;
    PUSH32(esp, 0x0029A269u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029A269: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029A270
 * Original: 0x0029A270 - 0x0029A283 (19 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A270: ;
    ecx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0029A280; /* je: equal / zero */

loc_0029A27D: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0029A280: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029A290
 * Original: 0x0029A290 - 0x0029A2B7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A290: ;
    eax = MEM32(0x5BE604);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A2A4; /* je: equal / zero */

loc_0029A299: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A2B6; /* jne: not equal / not zero */

loc_0029A2A4: ;
    PUSH32(esp, 0x29D9B0);
    PUSH32(esp, 0x0029A2AEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A2AE: ;
    eax = MEM32(0x5BE604);
    esp = esp + 4;

loc_0029A2B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A2C0
 * Original: 0x0029A2C0 - 0x0029A2E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A2C0: ;
    eax = MEM32(0x5BE608);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A2D4; /* je: equal / zero */

loc_0029A2C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A2E6; /* jne: not equal / not zero */

loc_0029A2D4: ;
    PUSH32(esp, 0x29F150);
    PUSH32(esp, 0x0029A2DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A2DE: ;
    eax = MEM32(0x5BE608);
    esp = esp + 4;

loc_0029A2E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A2F0
 * Original: 0x0029A2F0 - 0x0029A317 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A2F0: ;
    eax = MEM32(0x5BE60C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A304; /* je: equal / zero */

loc_0029A2F9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A316; /* jne: not equal / not zero */

loc_0029A304: ;
    PUSH32(esp, 0x29F1A0);
    PUSH32(esp, 0x0029A30Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A30E: ;
    eax = MEM32(0x5BE60C);
    esp = esp + 4;

loc_0029A316: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A320
 * Original: 0x0029A320 - 0x0029A347 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A320: ;
    eax = MEM32(0x5BE610);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A334; /* je: equal / zero */

loc_0029A329: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A346; /* jne: not equal / not zero */

loc_0029A334: ;
    PUSH32(esp, 0x29FE40);
    PUSH32(esp, 0x0029A33Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A33E: ;
    eax = MEM32(0x5BE610);
    esp = esp + 4;

loc_0029A346: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A350
 * Original: 0x0029A350 - 0x0029A377 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A350: ;
    eax = MEM32(0x5BE614);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A364; /* je: equal / zero */

loc_0029A359: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A376; /* jne: not equal / not zero */

loc_0029A364: ;
    PUSH32(esp, 0x29DA00);
    PUSH32(esp, 0x0029A36Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A36E: ;
    eax = MEM32(0x5BE614);
    esp = esp + 4;

loc_0029A376: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A380
 * Original: 0x0029A380 - 0x0029A3A7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A380: ;
    eax = MEM32(0x5BE618);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A394; /* je: equal / zero */

loc_0029A389: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A3A6; /* jne: not equal / not zero */

loc_0029A394: ;
    PUSH32(esp, 0x29F1F0);
    PUSH32(esp, 0x0029A39Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A39E: ;
    eax = MEM32(0x5BE618);
    esp = esp + 4;

loc_0029A3A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A3B0
 * Original: 0x0029A3B0 - 0x0029A3D7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A3B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A3B0: ;
    eax = MEM32(0x5BE61C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A3C4; /* je: equal / zero */

loc_0029A3B9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A3D6; /* jne: not equal / not zero */

loc_0029A3C4: ;
    PUSH32(esp, 0x29F240);
    PUSH32(esp, 0x0029A3CEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A3CE: ;
    eax = MEM32(0x5BE61C);
    esp = esp + 4;

loc_0029A3D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A3E0
 * Original: 0x0029A3E0 - 0x0029A407 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A3E0: ;
    eax = MEM32(0x5BE620);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A3F4; /* je: equal / zero */

loc_0029A3E9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A406; /* jne: not equal / not zero */

loc_0029A3F4: ;
    PUSH32(esp, 0x29F290);
    PUSH32(esp, 0x0029A3FEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A3FE: ;
    eax = MEM32(0x5BE620);
    esp = esp + 4;

loc_0029A406: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A410
 * Original: 0x0029A410 - 0x0029A437 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A410: ;
    eax = MEM32(0x5BE624);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A424; /* je: equal / zero */

loc_0029A419: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A436; /* jne: not equal / not zero */

loc_0029A424: ;
    PUSH32(esp, 0x29F2E0);
    PUSH32(esp, 0x0029A42Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A42E: ;
    eax = MEM32(0x5BE624);
    esp = esp + 4;

loc_0029A436: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A440
 * Original: 0x0029A440 - 0x0029A467 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A440: ;
    eax = MEM32(0x5BE628);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A454; /* je: equal / zero */

loc_0029A449: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A466; /* jne: not equal / not zero */

loc_0029A454: ;
    PUSH32(esp, 0x29F330);
    PUSH32(esp, 0x0029A45Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A45E: ;
    eax = MEM32(0x5BE628);
    esp = esp + 4;

loc_0029A466: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A470
 * Original: 0x0029A470 - 0x0029A497 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A470: ;
    eax = MEM32(0x5BE62C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A484; /* je: equal / zero */

loc_0029A479: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A496; /* jne: not equal / not zero */

loc_0029A484: ;
    PUSH32(esp, 0x29F380);
    PUSH32(esp, 0x0029A48Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A48E: ;
    eax = MEM32(0x5BE62C);
    esp = esp + 4;

loc_0029A496: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A4A0
 * Original: 0x0029A4A0 - 0x0029A4C7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A4A0: ;
    eax = MEM32(0x5BE630);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A4B4; /* je: equal / zero */

loc_0029A4A9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A4C6; /* jne: not equal / not zero */

loc_0029A4B4: ;
    PUSH32(esp, 0x29F3D0);
    PUSH32(esp, 0x0029A4BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A4BE: ;
    eax = MEM32(0x5BE630);
    esp = esp + 4;

loc_0029A4C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A4D0
 * Original: 0x0029A4D0 - 0x0029A4F7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A4D0: ;
    eax = MEM32(0x5BE634);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A4E4; /* je: equal / zero */

loc_0029A4D9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A4F6; /* jne: not equal / not zero */

loc_0029A4E4: ;
    PUSH32(esp, 0x29F420);
    PUSH32(esp, 0x0029A4EEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A4EE: ;
    eax = MEM32(0x5BE634);
    esp = esp + 4;

loc_0029A4F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A500
 * Original: 0x0029A500 - 0x0029A527 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A500: ;
    eax = MEM32(0x5BE638);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A514; /* je: equal / zero */

loc_0029A509: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A526; /* jne: not equal / not zero */

loc_0029A514: ;
    PUSH32(esp, 0x29F470);
    PUSH32(esp, 0x0029A51Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A51E: ;
    eax = MEM32(0x5BE638);
    esp = esp + 4;

loc_0029A526: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A530
 * Original: 0x0029A530 - 0x0029A557 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A530: ;
    eax = MEM32(0x5BE648);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A544; /* je: equal / zero */

loc_0029A539: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A556; /* jne: not equal / not zero */

loc_0029A544: ;
    PUSH32(esp, 0x2A07C0);
    PUSH32(esp, 0x0029A54Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A54E: ;
    eax = MEM32(0x5BE648);
    esp = esp + 4;

loc_0029A556: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A560
 * Original: 0x0029A560 - 0x0029A587 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A560: ;
    eax = MEM32(0x5BE64C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A574; /* je: equal / zero */

loc_0029A569: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A586; /* jne: not equal / not zero */

loc_0029A574: ;
    PUSH32(esp, 0x29F550);
    PUSH32(esp, 0x0029A57Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A57E: ;
    eax = MEM32(0x5BE64C);
    esp = esp + 4;

loc_0029A586: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A590
 * Original: 0x0029A590 - 0x0029A5B7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A590: ;
    eax = MEM32(0x5BE650);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A5A4; /* je: equal / zero */

loc_0029A599: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A5B6; /* jne: not equal / not zero */

loc_0029A5A4: ;
    PUSH32(esp, 0x29F5A0);
    PUSH32(esp, 0x0029A5AEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A5AE: ;
    eax = MEM32(0x5BE650);
    esp = esp + 4;

loc_0029A5B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A5C0
 * Original: 0x0029A5C0 - 0x0029A5E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A5C0: ;
    eax = MEM32(0x5BE658);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A5D4; /* je: equal / zero */

loc_0029A5C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A5E6; /* jne: not equal / not zero */

loc_0029A5D4: ;
    PUSH32(esp, 0x29F640);
    PUSH32(esp, 0x0029A5DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A5DE: ;
    eax = MEM32(0x5BE658);
    esp = esp + 4;

loc_0029A5E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A5F0
 * Original: 0x0029A5F0 - 0x0029A617 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A5F0: ;
    eax = MEM32(0x5BE660);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A604; /* je: equal / zero */

loc_0029A5F9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A616; /* jne: not equal / not zero */

loc_0029A604: ;
    PUSH32(esp, 0x29F6E0);
    PUSH32(esp, 0x0029A60Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A60E: ;
    eax = MEM32(0x5BE660);
    esp = esp + 4;

loc_0029A616: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A620
 * Original: 0x0029A620 - 0x0029A647 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A620: ;
    eax = MEM32(0x5BE664);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A634; /* je: equal / zero */

loc_0029A629: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A646; /* jne: not equal / not zero */

loc_0029A634: ;
    PUSH32(esp, 0x29F730);
    PUSH32(esp, 0x0029A63Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A63E: ;
    eax = MEM32(0x5BE664);
    esp = esp + 4;

loc_0029A646: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A650
 * Original: 0x0029A650 - 0x0029A677 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A650: ;
    eax = MEM32(0x5BE674);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A664; /* je: equal / zero */

loc_0029A659: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A676; /* jne: not equal / not zero */

loc_0029A664: ;
    PUSH32(esp, 0x29F830);
    PUSH32(esp, 0x0029A66Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A66E: ;
    eax = MEM32(0x5BE674);
    esp = esp + 4;

loc_0029A676: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A680
 * Original: 0x0029A680 - 0x0029A6A7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A680: ;
    eax = MEM32(0x5BE670);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A694; /* je: equal / zero */

loc_0029A689: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A6A6; /* jne: not equal / not zero */

loc_0029A694: ;
    PUSH32(esp, 0x29F7E0);
    PUSH32(esp, 0x0029A69Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A69E: ;
    eax = MEM32(0x5BE670);
    esp = esp + 4;

loc_0029A6A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A6B0
 * Original: 0x0029A6B0 - 0x0029A6D7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A6B0: ;
    eax = MEM32(0x5BE66C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A6C4; /* je: equal / zero */

loc_0029A6B9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A6D6; /* jne: not equal / not zero */

loc_0029A6C4: ;
    PUSH32(esp, 0x29FEC0);
    PUSH32(esp, 0x0029A6CEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A6CE: ;
    eax = MEM32(0x5BE66C);
    esp = esp + 4;

loc_0029A6D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A6E0
 * Original: 0x0029A6E0 - 0x0029A707 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A6E0: ;
    eax = MEM32(0x5BE680);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A6F4; /* je: equal / zero */

loc_0029A6E9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A706; /* jne: not equal / not zero */

loc_0029A6F4: ;
    PUSH32(esp, 0x29F880);
    PUSH32(esp, 0x0029A6FEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A6FE: ;
    eax = MEM32(0x5BE680);
    esp = esp + 4;

loc_0029A706: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A710
 * Original: 0x0029A710 - 0x0029A737 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A710: ;
    eax = MEM32(0x5BE6A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A724; /* je: equal / zero */

loc_0029A719: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A736; /* jne: not equal / not zero */

loc_0029A724: ;
    PUSH32(esp, 0x29F8E0);
    PUSH32(esp, 0x0029A72Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A72E: ;
    eax = MEM32(0x5BE6A4);
    esp = esp + 4;

loc_0029A736: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A740
 * Original: 0x0029A740 - 0x0029A767 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A740: ;
    eax = MEM32(0x5BE6A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A754; /* je: equal / zero */

loc_0029A749: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A766; /* jne: not equal / not zero */

loc_0029A754: ;
    PUSH32(esp, 0x29F930);
    PUSH32(esp, 0x0029A75Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A75E: ;
    eax = MEM32(0x5BE6A8);
    esp = esp + 4;

loc_0029A766: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A770
 * Original: 0x0029A770 - 0x0029A797 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A770: ;
    eax = MEM32(0x5BE6AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A784; /* je: equal / zero */

loc_0029A779: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A796; /* jne: not equal / not zero */

loc_0029A784: ;
    PUSH32(esp, 0x29F980);
    PUSH32(esp, 0x0029A78Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A78E: ;
    eax = MEM32(0x5BE6AC);
    esp = esp + 4;

loc_0029A796: ;
    esp += 4; return; /* ret */

}
