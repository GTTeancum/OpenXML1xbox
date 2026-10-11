/**
 * X-Men Legends - Recompiled code chunk 59
 * Functions: 250 (0x00256620 - 0x0025F620)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00256620
 * Original: 0x00256620 - 0x0025664A (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256620: ;
    ecx = MEM32(0x5BDBF4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025663F; /* je: equal / zero */

loc_0025662A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025663F; /* jne: not equal / not zero */

loc_0025663A: ;
    PUSH32(esp, 0x0025663Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025663F: ;
    MEM32(0x5BDBF4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00256650
 * Original: 0x00256650 - 0x00256656 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256650(void)
{

loc_00256650: ;
    eax = MEM32(0x5BDB48);
    esp += 4; return; /* ret */

}

/**
 * sub_00256660
 * Original: 0x00256660 - 0x0025670C (172 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256660: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025667F; /* je: equal / zero */

loc_0025666A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025667F; /* jne: not equal / not zero */

loc_0025667A: ;
    PUSH32(esp, 0x0025667Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025667F: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025669B; /* je: equal / zero */

loc_00256686: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025669B; /* jne: not equal / not zero */

loc_00256696: ;
    PUSH32(esp, 0x0025669Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025669B: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002566B7; /* je: equal / zero */

loc_002566A2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002566B7; /* jne: not equal / not zero */

loc_002566B2: ;
    PUSH32(esp, 0x002566B7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002566B7: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002566D3; /* je: equal / zero */

loc_002566BE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002566D3; /* jne: not equal / not zero */

loc_002566CE: ;
    PUSH32(esp, 0x002566D3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002566D3: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002566EF; /* je: equal / zero */

loc_002566DA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002566EF; /* jne: not equal / not zero */

loc_002566EA: ;
    PUSH32(esp, 0x002566EFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002566EF: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025670A; /* je: equal / zero */

loc_002566F6: ;
    ecx = MEM32(esi + -4);
    eax = esi + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0025670A; /* jne: not equal / not zero */

loc_00256702: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025670Au); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0025670A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00256710
 * Original: 0x00256710 - 0x0025677A (106 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256710: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDB4C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00256720u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00256720: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x470390);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00256730u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00256730: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00256738u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256738: ;
    ebx = eax;
    eax = MEM32(0x5BDB80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025675C; /* jne: not equal / not zero */

loc_00256743: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025674Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0025674E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256754u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00256754: ;
    esp = esp + 8;
    MEM32(0x5BDB80) = eax;

loc_0025675C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x47038C);
    PUSH32(esp, 0x470388);
    PUSH32(esp, 0x470384);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00256776u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00256776: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00256780
 * Original: 0x00256780 - 0x00256786 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256780(void)
{

loc_00256780: ;
    eax = MEM32(0x5BDB64);
    esp += 4; return; /* ret */

}

/**
 * sub_00256790
 * Original: 0x00256790 - 0x002567D8 (72 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256790(void)
{

loc_00256790: ;
    esp = esp - 0xA0;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x002567A0u); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_002567A0: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x7C) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x400748;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x002567CEu); RECOMP_ABI_CALL(0x00255690u, sub_00255690); /* call 0x00255690 */

loc_002567CE: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0xA0;
    esp += 4; return; /* ret */

}

/**
 * sub_002567E0
 * Original: 0x002567E0 - 0x00256983 (419 bytes, 138 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002567E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002567E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDB64);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002567F2u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002567F2: ;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x4704D0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00256802u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00256802: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0025680Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025680A: ;
    ebp = eax;
    eax = MEM32(0x5BDBC0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00256830; /* jne: not equal / not zero */

loc_00256817: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256822u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00256822: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256828u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00256828: ;
    esp = esp + 8;
    MEM32(0x5BDBC0) = eax;

loc_00256830: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x24) = 2;
    PUSH32(esp, 0x00256842u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256842: ;
    ebp = eax;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = ebp;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x00256854u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00256854: ;
    eax = edi + 2;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(ebp + 0x34) = 0x24B2E0;
    PUSH32(esp, 0x00256866u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256866: ;
    ecx = esp + 0x10;
    ebp = eax;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x00256878u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00256878: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x34) = 0x24B2B0;
    PUSH32(esp, 0x0025688Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025688A: ;
    ebp = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x0025689Cu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0025689C: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x34) = 0x24B280;
    PUSH32(esp, 0x002568AEu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002568AE: ;
    ebp = eax;
    eax = MEM32(0x5BDB64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002568D3; /* jne: not equal / not zero */

loc_002568B9: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002568C5u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002568C5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002568CBu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002568CB: ;
    esp = esp + 8;
    MEM32(0x5BDB64) = eax;

loc_002568D3: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 5;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x24) = 2;
    PUSH32(esp, 0x002568E5u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002568E5: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x002568EEu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002568EE: ;
    ecx = edi + 9;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002568F9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002568F9: ;
    PUSH32(esp, 0x3F800000);
    ecx = eax;
    PUSH32(esp, 0x00256905u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00256905: ;
    edx = edi + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00256910u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256910: ;
    MEM8(eax + 0x26) = LO8(ebx);
    eax = edi + 0x11;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025691Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025691E: ;
    ecx = edi + 0x12;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0025692Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025692C: ;
    ebp = eax;
    eax = MEM32(0x5BDB64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00256951; /* jne: not equal / not zero */

loc_00256937: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00256943u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00256943: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256949u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00256949: ;
    esp = esp + 8;
    MEM32(0x5BDB64) = eax;

loc_00256951: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0x19;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x24) = 2;
    PUSH32(esp, 0x00256963u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256963: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x470468);
    PUSH32(esp, 0x470400);
    PUSH32(esp, 0x470398);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0025697Du); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0025697D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00256990
 * Original: 0x00256990 - 0x00256996 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256990(void)
{

loc_00256990: ;
    eax = MEM32(0x5BDB74);
    esp += 4; return; /* ret */

}

/**
 * sub_002569A0
 * Original: 0x002569A0 - 0x00256A0E (110 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002569A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002569A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDB74);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002569B0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002569B0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x470544);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002569C0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002569C0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002569C8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002569C8: ;
    ebx = eax;
    eax = MEM32(0x5BDB78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002569EC; /* jne: not equal / not zero */

loc_002569D3: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002569DEu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002569DE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002569E4u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002569E4: ;
    esp = esp + 8;
    MEM32(0x5BDB78) = eax;

loc_002569EC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x470540);
    PUSH32(esp, 0x47053C);
    PUSH32(esp, 0x470538);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x00256A0Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00256A0A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00256A10
 * Original: 0x00256A10 - 0x00256A16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256A10(void)
{

loc_00256A10: ;
    eax = MEM32(0x5BDB7C);
    esp += 4; return; /* ret */

}

/**
 * sub_00256A20
 * Original: 0x00256A20 - 0x00256A61 (65 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256A20: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00256A30; /* jne: not equal / not zero */

loc_00256A29: ;
    MEM8(0x5BDF6C) = 1;

loc_00256A30: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24B390);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x4011A4);
    PUSH32(esp, 0x250480);
    PUSH32(esp, 0x1A4460);
    PUSH32(esp, 0x226510);
    PUSH32(esp, 0x5BDB80);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00256A5Du); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00256A5D: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00256A70
 * Original: 0x00256A70 - 0x00256A76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256A70(void)
{

loc_00256A70: ;
    eax = MEM32(0x5BDB8C);
    esp += 4; return; /* ret */

}

/**
 * sub_00256A80
 * Original: 0x00256A80 - 0x00256A86 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256A80(void)
{

loc_00256A80: ;
    eax = MEM32(0x5BDB94);
    esp += 4; return; /* ret */

}

/**
 * sub_00256A90
 * Original: 0x00256A90 - 0x00256B3C (172 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256A90: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00256AAF; /* je: equal / zero */

loc_00256A9A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00256AAF; /* jne: not equal / not zero */

loc_00256AAA: ;
    PUSH32(esp, 0x00256AAFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00256AAF: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00256ACB; /* je: equal / zero */

loc_00256AB6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00256ACB; /* jne: not equal / not zero */

loc_00256AC6: ;
    PUSH32(esp, 0x00256ACBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00256ACB: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00256AE7; /* je: equal / zero */

loc_00256AD2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00256AE7; /* jne: not equal / not zero */

loc_00256AE2: ;
    PUSH32(esp, 0x00256AE7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00256AE7: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00256B03; /* je: equal / zero */

loc_00256AEE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00256B03; /* jne: not equal / not zero */

loc_00256AFE: ;
    PUSH32(esp, 0x00256B03u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00256B03: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00256B1F; /* je: equal / zero */

loc_00256B0A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00256B1F; /* jne: not equal / not zero */

loc_00256B1A: ;
    PUSH32(esp, 0x00256B1Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00256B1F: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00256B3A; /* je: equal / zero */

loc_00256B26: ;
    ecx = MEM32(esi + -4);
    eax = esi + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00256B3A; /* jne: not equal / not zero */

loc_00256B32: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256B3Au); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00256B3A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00256B40
 * Original: 0x00256B40 - 0x00256C88 (328 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256B40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00256B40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDB94);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00256B51u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00256B51: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x470584);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00256B61u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00256B61: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00256B69u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256B69: ;
    ebp = eax;
    eax = MEM32(0x5BD914);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00256B8D; /* jne: not equal / not zero */

loc_00256B74: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256B7Fu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00256B7F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256B85u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00256B85: ;
    esp = esp + 8;
    MEM32(0x5BD914) = eax;

loc_00256B8D: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    SET_LO8(ebx, 1);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00256BA0u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256BA0: ;
    ebp = eax;
    eax = MEM32(0x5BDBBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00256BC5; /* jne: not equal / not zero */

loc_00256BAB: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00256BB7u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00256BB7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256BBDu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00256BBD: ;
    esp = esp + 8;
    MEM32(0x5BDBBC) = eax;

loc_00256BC5: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 2;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00256BD6u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256BD6: ;
    ebp = eax;
    eax = MEM32(0x5BD90C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00256BFB; /* jne: not equal / not zero */

loc_00256BE1: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00256BEDu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00256BED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256BF3u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00256BF3: ;
    esp = esp + 8;
    MEM32(0x5BD90C) = eax;

loc_00256BFB: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00256C0Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256C0C: ;
    ebp = eax;
    eax = MEM32(0x5BDB44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00256C30; /* jne: not equal / not zero */

loc_00256C17: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256C22u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00256C22: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256C28u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00256C28: ;
    esp = esp + 8;
    MEM32(0x5BDB44) = eax;

loc_00256C30: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00256C41u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256C41: ;
    ebp = eax;
    eax = MEM32(0x5BDBA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00256C66; /* jne: not equal / not zero */

loc_00256C4C: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00256C58u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00256C58: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256C5Eu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00256C5E: ;
    esp = esp + 8;
    MEM32(0x5BDBA8) = eax;

loc_00256C66: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x470570);
    PUSH32(esp, 0x47055C);
    PUSH32(esp, 0x470548);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00256C83u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00256C83: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00256C90
 * Original: 0x00256C90 - 0x00256C96 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256C90(void)
{

loc_00256C90: ;
    eax = MEM32(0x5BDBA4);
    esp += 4; return; /* ret */

}

/**
 * sub_00256CA0
 * Original: 0x00256CA0 - 0x00256CA6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256CA0(void)
{

loc_00256CA0: ;
    eax = MEM32(0x5BDBB8);
    esp += 4; return; /* ret */

}

/**
 * sub_00256CB0
 * Original: 0x00256CB0 - 0x00256D09 (89 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256CB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00256CB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00256CCF; /* je: equal / zero */

loc_00256CBA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00256CCF; /* jne: not equal / not zero */

loc_00256CCA: ;
    PUSH32(esp, 0x00256CCFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00256CCF: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00256CEB; /* je: equal / zero */

loc_00256CD6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00256CEB; /* jne: not equal / not zero */

loc_00256CE6: ;
    PUSH32(esp, 0x00256CEBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00256CEB: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00256D08; /* je: equal / zero */

loc_00256CF3: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00256D08; /* jne: not equal / not zero */

loc_00256D03: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00256D08: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00256D10
 * Original: 0x00256D10 - 0x00256D16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256D10(void)
{

loc_00256D10: ;
    eax = MEM32(0x5BDBC0);
    esp += 4; return; /* ret */

}

/**
 * sub_00256D20
 * Original: 0x00256D20 - 0x00256D6A (74 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256D20(void)
{

loc_00256D20: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00256D2Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00256D2D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x400380;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x00256D63u); RECOMP_ABI_CALL(0x00254C10u, sub_00254C10); /* call 0x00254C10 */

loc_00256D63: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_00256D70
 * Original: 0x00256D70 - 0x00256E83 (275 bytes, 91 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256D70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00256D70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDBC0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00256D81u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00256D81: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x4705F8);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00256D91u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00256D91: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00256D9Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256D9C: ;
    ebp = eax;
    eax = MEM32(0x5BDBB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00256DC1; /* jne: not equal / not zero */

loc_00256DA7: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00256DB3u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00256DB3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256DB9u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00256DB9: ;
    esp = esp + 8;
    MEM32(0x5BDBB0) = eax;

loc_00256DC1: ;
    edx = edi + 2;
    SET_LO8(ebx, 1);
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00256DD4u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256DD4: ;
    ebp = eax;
    eax = MEM32(0x5BDBD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00256DF8; /* jne: not equal / not zero */

loc_00256DDF: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256DEAu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00256DEA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256DF0u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00256DF0: ;
    esp = esp + 8;
    MEM32(0x5BDBD8) = eax;

loc_00256DF8: ;
    ecx = edi + 3;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00256E09u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256E09: ;
    ebp = eax;
    eax = MEM32(0x5BDBC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00256E2E; /* jne: not equal / not zero */

loc_00256E14: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00256E20u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00256E20: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256E26u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00256E26: ;
    esp = esp + 8;
    MEM32(0x5BDBC4) = eax;

loc_00256E2E: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 7;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00256E3Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256E3F: ;
    ebx = eax;
    eax = MEM32(0x5BDB18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00256E64; /* jne: not equal / not zero */

loc_00256E4A: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00256E56u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00256E56: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256E5Cu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00256E5C: ;
    esp = esp + 8;
    MEM32(0x5BDB18) = eax;

loc_00256E64: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4705D8);
    PUSH32(esp, 0x4705B8);
    PUSH32(esp, 0x470598);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00256E7Eu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00256E7E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00256E90
 * Original: 0x00256E90 - 0x00256E96 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256E90(void)
{

loc_00256E90: ;
    eax = MEM32(0x5BDBC8);
    esp += 4; return; /* ret */

}

/**
 * sub_00256EA0
 * Original: 0x00256EA0 - 0x00256F78 (216 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256EA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDBC8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00256EB0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00256EB0: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x47063C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00256EC0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00256EC0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00256EC8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256EC8: ;
    ebx = eax;
    eax = MEM32(0x5BDBC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00256EEC; /* jne: not equal / not zero */

loc_00256ED3: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256EDEu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00256EDE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256EE4u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00256EE4: ;
    esp = esp + 8;
    MEM32(0x5BDBC0) = eax;

loc_00256EEC: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x3C) = 0;
    PUSH32(esp, 0x00256EFEu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256EFE: ;
    ebx = eax;
    eax = MEM32(0x5BDBCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00256F23; /* jne: not equal / not zero */

loc_00256F09: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00256F15u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00256F15: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256F1Bu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00256F1B: ;
    esp = esp + 8;
    MEM32(0x5BDBCC) = eax;

loc_00256F23: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 2;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x00256F35u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256F35: ;
    ebx = eax;
    eax = MEM32(0x5BDBD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00256F5A; /* jne: not equal / not zero */

loc_00256F40: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00256F4Cu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00256F4C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256F52u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00256F52: ;
    esp = esp + 8;
    MEM32(0x5BDBD4) = eax;

loc_00256F5A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x470630);
    PUSH32(esp, 0x470624);
    PUSH32(esp, 0x470618);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00256F74u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00256F74: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00256F80
 * Original: 0x00256F80 - 0x00256F86 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256F80(void)
{

loc_00256F80: ;
    eax = MEM32(0x5BDBD0);
    esp += 4; return; /* ret */

}

/**
 * sub_00256F90
 * Original: 0x00256F90 - 0x00256FFE (110 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256F90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDBD0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00256FA0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00256FA0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x470660);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00256FB0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00256FB0: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00256FBBu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256FBB: ;
    ebx = eax;
    eax = MEM32(0x5BDBD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00256FE0; /* jne: not equal / not zero */

loc_00256FC6: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00256FD2u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00256FD2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256FD8u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00256FD8: ;
    esp = esp + 8;
    MEM32(0x5BDBD4) = eax;

loc_00256FE0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x470658);
    PUSH32(esp, 0x470650);
    PUSH32(esp, 0x470648);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00256FFAu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00256FFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00257000
 * Original: 0x00257000 - 0x00257024 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257000(void)
{

loc_00257000: ;
    esp = esp - 0x20;
    ecx = esp;
    PUSH32(esp, 0x0025700Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0025700B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3FED10;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00257030
 * Original: 0x00257030 - 0x00257074 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257030: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00257040; /* jne: not equal / not zero */

loc_00257039: ;
    MEM8(0x5BDF6C) = 1;

loc_00257040: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24B6B0);
    PUSH32(esp, 0x257000);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x4014B8);
    PUSH32(esp, 0x250E40);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BDBD4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00257070u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00257070: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00257080
 * Original: 0x00257080 - 0x00257086 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257080(void)
{

loc_00257080: ;
    eax = MEM32(0x5BDBDC);
    esp += 4; return; /* ret */

}

/**
 * sub_00257090
 * Original: 0x00257090 - 0x00257096 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257090(void)
{

loc_00257090: ;
    eax = MEM32(0x5BDBE4);
    esp += 4; return; /* ret */

}

/**
 * sub_002570A0
 * Original: 0x002570A0 - 0x002571E2 (322 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002570A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002570A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDBE4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002570B1u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002570B1: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x4706A4);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002570C1u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002570C1: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002570C9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002570C9: ;
    ebx = eax;
    eax = MEM32(0x5BDBEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002570ED; /* jne: not equal / not zero */

loc_002570D4: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002570DFu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002570DF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002570E5u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002570E5: ;
    esp = esp + 8;
    MEM32(0x5BDBEC) = eax;

loc_002570ED: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x002570FBu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002570FB: ;
    ebp = eax;
    eax = MEM32(0x5BDBE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00257120; /* jne: not equal / not zero */

loc_00257106: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00257112u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00257112: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00257118u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00257118: ;
    esp = esp + 8;
    MEM32(0x5BDBE8) = eax;

loc_00257120: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 2;
    SET_LO8(ebx, 1);
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00257133u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00257133: ;
    ebp = eax;
    eax = MEM32(0x5BDB94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00257158; /* jne: not equal / not zero */

loc_0025713E: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025714Au); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0025714A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00257150u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00257150: ;
    esp = esp + 8;
    MEM32(0x5BDB94) = eax;

loc_00257158: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    PUSH32(esp, 0x00257166u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00257166: ;
    ebp = eax;
    eax = MEM32(0x5BDBA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025718A; /* jne: not equal / not zero */

loc_00257171: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025717Cu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0025717C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00257182u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00257182: ;
    esp = esp + 8;
    MEM32(0x5BDBA8) = eax;

loc_0025718A: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x0025719Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025719B: ;
    ebp = eax;
    eax = MEM32(0x5BDB44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002571C0; /* jne: not equal / not zero */

loc_002571A6: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002571B2u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002571B2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002571B8u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002571B8: ;
    esp = esp + 8;
    MEM32(0x5BDB44) = eax;

loc_002571C0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x470690);
    PUSH32(esp, 0x47067C);
    PUSH32(esp, 0x470668);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x002571DDu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002571DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002571F0
 * Original: 0x002571F0 - 0x002572E9 (249 bytes, 84 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002571F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002571F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDBF0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00257201u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00257201: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x470718);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00257211u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00257211: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00257219u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00257219: ;
    SET_LO8(ebx, 0); /* xor self */
    MEM8(eax + 0x26) = LO8(ebx);
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00257229u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00257229: ;
    ebp = eax;
    PUSH32(esp, 0x00257230u); RECOMP_ABI_CALL(0x00292880u, sub_00292880); /* call 0x00292880 */

loc_00257230: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00257241u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00257241: ;
    ebp = eax;
    PUSH32(esp, 0x00257248u); RECOMP_ABI_CALL(0x00290AF0u, sub_00290AF0); /* call 0x00290AF0 */

loc_00257248: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00257259u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00257259: ;
    ebp = eax;
    PUSH32(esp, 0xFF);
    ecx = ebp;
    PUSH32(esp, 0x00257267u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00257267: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00257275u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00257275: ;
    ebp = eax;
    PUSH32(esp, 0x0025727Cu); RECOMP_ABI_CALL(0x00290CD0u, sub_00290CD0); /* call 0x00290CD0 */

loc_0025727C: ;
    ecx = edi + 5;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0025728Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025728D: ;
    ebp = eax;
    PUSH32(esp, 0x00257294u); RECOMP_ABI_CALL(0x00290CA0u, sub_00290CA0); /* call 0x00290CA0 */

loc_00257294: ;
    edx = edi + 6;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002572A5u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002572A5: ;
    ebp = eax;
    PUSH32(esp, 0x002572ACu); RECOMP_ABI_CALL(0x00290B30u, sub_00290B30); /* call 0x00290B30 */

loc_002572AC: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 7;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002572BDu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002572BD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4706F8);
    PUSH32(esp, 0x4706D8);
    PUSH32(esp, 0x4706B8);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002572D7u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002572D7: ;
    ecx = MEM32(0x5BDBF0);
    POP32(esp, edi);
    MEM32(ecx + 0x40) = 0x251290;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002572F0
 * Original: 0x002572F0 - 0x0025735E (110 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002572F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002572F0: ;
    ecx = MEM32(ecx + 0x14);
    eax = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0025734B; /* jle: less or equal (signed <=) */

loc_00257300: ;
    ebp = MEM32(ecx + 0x10);

loc_00257303: ;
    ecx = MEM32(ebp);
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00257312; /* jne: not equal / not zero */

loc_0025730D: ;
    ecx = 0x3C806C;

loc_00257312: ;
    esi = MEM32(esp + 0x14);

loc_00257316: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0025733A; /* jne: not equal / not zero */

loc_0025731E: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00257336; /* je: equal / zero */

loc_00257322: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0025733A; /* jne: not equal / not zero */

loc_0025732C: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00257316; /* jne: not equal / not zero */

loc_00257336: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    goto loc_0025733F;

loc_0025733A: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */

loc_0025733F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00257355; /* je: equal / zero */

loc_00257343: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(4)) >> 32) & 1);
    ebp = ebp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00257303; /* jl: less (signed <) */

loc_0025734B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00257355: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00257360
 * Original: 0x00257360 - 0x002573AB (75 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257360: ;
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0025738C; /* jle: less or equal (signed <=) */

loc_0025736F: ;
    edx = MEM32(ecx + 0x10);
    edi = MEM32(esp + 0x10);

loc_00257376: ;
    ecx = MEM32(edx);
    ebx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00257384; /* jne: not equal / not zero */

loc_0025737F: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025739F; /* je: equal / zero */

loc_00257384: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00257376; /* jl: less (signed <) */

loc_0025738C: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = 0;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0025739F: ;
    edx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002573B0
 * Original: 0x002573B0 - 0x002573FD (77 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002573B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002573B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 8);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002573F7; /* jle: less or equal (signed <=) */

loc_002573C1: ;
    PUSH32(esp, edi);

loc_002573C2: ;
    eax = MEM32(ebx + 0x10);
    edi = MEM32(eax + esi * 4);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002573D4; /* jne: not equal / not zero */

loc_002573CF: ;
    eax = 0x3C806C;

loc_002573D4: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002573DFu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_002573DF: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002573F4; /* je: equal / zero */

loc_002573E6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002573C2; /* jl: less (signed <) */

loc_002573EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_002573F4: ;
    eax = edi;
    POP32(esp, edi);

loc_002573F7: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00257400
 * Original: 0x00257400 - 0x00257502 (258 bytes, 105 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257400(void)
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

loc_00257400: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0025740Cu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0025740C: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00257414u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00257414: ;
    ecx = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00257476; /* jle: less or equal (signed <=) */

loc_00257420: ;
    eax = 0; /* xor self */

loc_00257422: ;
    edx = MEM32(esi + 0x30);
    edx = MEM32(edx + 0x10);
    edi = MEM32(edx + ebp * 4);
    edx = MEM32(edi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0025746E; /* jle: less or equal (signed <=) */

loc_00257434: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(ecx + ebx * 4);
    ecx = MEM32(edx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00257462; /* je: equal / zero */

loc_00257441: ;
    SET_LO8(ecx, MEM8(edx + 0x34));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00257462; /* jne: not equal / not zero */

loc_00257448: ;
    ecx = MEM32(esi + 0xC);
    ecx = MEM32(ecx + 0xC);
    fp_push(MEMF(ecx + eax + 8)); /* fld float */
    ecx = ecx + eax;
    fp_push(MEMF(ecx + 4)); /* fld float */
    ecx = MEM32(ecx);
    MEM32(edx + 0x24) = ecx;
    MEMF(edx + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(edx + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */

loc_00257462: ;
    ecx = MEM32(edi + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00257434; /* jl: less (signed <) */

loc_0025746A: ;
    ecx = MEM32(esp + 0x10);

loc_0025746E: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00257422; /* jl: less (signed <) */

loc_00257476: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002574FC; /* je: equal / zero */

loc_0025747D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00257482u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00257482: ;
    ecx = MEM32(esi + 0xC);
    edi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0025748Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025748C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002574FC; /* je: equal / zero */

loc_00257492: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002574C5; /* jne: not equal / not zero */

loc_00257499: ;
    ecx = esi;
    PUSH32(esp, 0x002574A0u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_002574A0: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BCCAC);
    PUSH32(esp, 0x002574B3u); RECOMP_ABI_CALL(0x001F7560u, sub_001F7560); /* call 0x001F7560 */

loc_002574B3: ;
    ecx = MEM32(0x5BCCAC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002574C5u); RECOMP_ABI_CALL(0x001E9D80u, sub_001E9D80); /* call 0x001E9D80 */

loc_002574C5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002574FC; /* je: equal / zero */

loc_002574C9: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002574FC; /* jne: not equal / not zero */

loc_002574D0: ;
    ecx = esi;
    PUSH32(esp, 0x002574D7u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_002574D7: ;
    ecx = MEM32(0x5BD460);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002574EAu); RECOMP_ABI_CALL(0x001F7560u, sub_001F7560); /* call 0x001F7560 */

loc_002574EA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BD460);
    PUSH32(esp, 0x002574FCu); RECOMP_ABI_CALL(0x001E9D80u, sub_001E9D80); /* call 0x001E9D80 */

loc_002574FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00257510
 * Original: 0x00257510 - 0x00257556 (70 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257510: ;
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(edx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00257535; /* jbe: below or equal (unsigned <=) */

loc_0025751F: ;
    esi = MEM32(edx + 0x10);
    ebx = MEM32(esp + 0x14);

loc_00257526: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025753D; /* je: equal / zero */

loc_0025752D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00257526; /* jb: below (unsigned <) */

loc_00257535: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0025753D: ;
    edx = MEM32(edx + 8);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025754Du); RECOMP_ABI_CALL(0x0022EB70u, sub_0022EB70); /* call 0x0022EB70 */

loc_0025754D: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00257560
 * Original: 0x00257560 - 0x00257568 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257560(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00257560: ;
    ecx = MEM32(ecx + 0x10);
    g_seh_ebp = ebp; sub_002068B0(); return; /* tail jmp 0x002068B0 */

}

/**
 * sub_00257570
 * Original: 0x00257570 - 0x0025758B (27 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257570: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025757Fu); RECOMP_ABI_CALL(0x002099A0u, sub_002099A0); /* call 0x002099A0 */

loc_0025757F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    SET_LO8(eax, LO8(ecx));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00257590
 * Original: 0x00257590 - 0x00257598 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257590(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00257590: ;
    ecx = MEM32(ecx + 0x14);
    g_seh_ebp = ebp; sub_002068B0(); return; /* tail jmp 0x002068B0 */

}

/**
 * sub_002575A0
 * Original: 0x002575A0 - 0x002578D0 (816 bytes, 232 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002575A0(void)
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

loc_002575A0: ;
    esp = esp - 0x30;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    eax = MEM32(esi + 8);
    fp_push(MEMF(esi)); /* fld float */
    fp_push(MEMF(esi + 4)); /* fld float */
    MEM32(esp + 0x24) = eax;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    eax = MEM32(esp + 0x40);
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    ecx = MEM32(eax + 8);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(esp + 0x30) = ecx;
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    ecx = 0x7FFFFFFF;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    MEMF(esp + 0x3C) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x3C); /* fmul dword ptr [esp + 0x3c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x3C); /* fmul dword ptr [esp + 0x3c] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    MEMF(esp + 0x3C) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x3C); /* fmul dword ptr [esp + 0x3c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x3C); /* fmul dword ptr [esp + 0x3c] */
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x3C) = MEM32(esp + 0x3C) & ecx;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3C6E40); /* fsub dword ptr [0x3c6e40] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x3C) = MEM32(esp + 0x3C) & ecx;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x401650)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x401650] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002577CE; /* jp: parity */

loc_00257688: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEM32(esp + 4) = 0x3F800000;
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    fp_top() = fp_top() * MEMF(0x3C6DE4); /* fmul dword ptr [0x3c6de4] */
    fp_top() = fp_top() + MEMF(esp + 0x1C); /* fadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x3C) = MEM32(esp + 0x3C) & ecx;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3C6E40); /* fsub dword ptr [0x3c6e40] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x3C) = MEM32(esp + 0x3C) & ecx;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x401650)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x401650] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = esp + 0x1C;
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00257717; /* jp: parity */

loc_002576E1: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0x3F800000;
    PUSH32(esp, 0x00257708u); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_00257708: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    goto loc_002577E7;

loc_00257717: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00257726u); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_00257726: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    edx = esp + 0x10;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ecx = esp + 0xC;
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0025777Du); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_0025777D: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    goto loc_00257874;

loc_002577CE: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x002577E1u); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_002577E1: ;
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);

loc_002577E7: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    ecx = esp + 0x18;
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00257834u); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_00257834: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    MEMF(esp + 0x3C) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x3C); /* fmul dword ptr [esp + 0x3c] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x3C); /* fmul dword ptr [esp + 0x3c] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_00257874: ;
    eax = MEM32(esp + 0x38);
    fp_push(MEMF(esp + 4)); /* fld float */
    edx = MEM32(esp + 0xC);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 8);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(eax + 8) = edx;
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0x10) = edx;
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x20);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 4) = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x3C) = 0x3F800000;
    POP32(esp, esi);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002578D0
 * Original: 0x002578D0 - 0x00257A57 (391 bytes, 111 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002578D0(void)
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

loc_002578D0: ;
    esp = esp - 0x54;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x64);
    eax = esp + 0x14;
    esi = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002578E7u); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_002578E7: ;
    PUSH32(esp, edi);
    ecx = esi + 0x30;
    PUSH32(esp, ecx);
    ecx = esp + 0x40;
    PUSH32(esp, 0x002578F5u); RECOMP_ABI_CALL(0x0023FC90u, sub_0023FC90); /* call 0x0023FC90 */

loc_002578F5: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    eax = MEM32(esp + 0x68);
    edx = MEM32(eax + 0x38);
    ecx = MEM32(esi + 0x20);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    MEM32(esp + 0x4C) = edx;
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x40); /* fadd dword ptr [esp + 0x40] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x30)); /* fld float */
    fp_push(MEMF(eax + 0x34)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - MEMF(esp + 0x14); /* fsub dword ptr [esp + 0x14] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(esp + 0x18); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x1C); /* fsub dword ptr [esp + 0x1c] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa == 0)) goto loc_00257A1E; /* je: equal / zero */

loc_00257952: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002579DE; /* je: equal / zero */

loc_00257959: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00257979; /* je: equal / zero */

loc_0025795C: ;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0x3F800000;
    MEM32(esp + 0x10) = 0;
    goto loc_00257A2C;

loc_00257979: ;
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x38) = 0x3F800000;
    MEM32(esp + 0x3C) = 0;
    PUSH32(esp, 0x002579A0u); RECOMP_ABI_CALL(0x0023FC90u, sub_0023FC90); /* call 0x0023FC90 */

loc_002579A0: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x002579B3u); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_002579B3: ;
    ecx = esp + 0x44;
    PUSH32(esp, 0x002579BCu); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_002579BC: ;
    fp_pop(); /* fstp st(0) */
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x002579D1u); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_002579D1: ;
    ecx = esp + 8;
    PUSH32(esp, 0x002579DAu); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_002579DA: ;
    fp_pop(); /* fstp st(0) */
    goto loc_00257A2C;

loc_002579DE: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x00257A09u); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_00257A09: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00257A1Cu); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_00257A1C: ;
    goto loc_00257A2C;

loc_00257A1E: ;
    PUSH32(esp, edi);
    esi = esi + 0x24;
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00257A2Cu); RECOMP_ABI_CALL(0x0023FC90u, sub_0023FC90); /* call 0x0023FC90 */

loc_00257A2C: ;
    esi = MEM32(esp + 0x60);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00257A40u); RECOMP_ABI_CALL(0x002575A0u, sub_002575A0); /* call 0x002575A0 */

loc_00257A40: ;
    esp = esp + 0xC;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00257A4Fu); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_00257A4F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x54;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00257A60
 * Original: 0x00257A60 - 0x00257EE7 (1159 bytes, 324 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257A60(void)
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

loc_00257A60: ;
    esp = esp - 0x60;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x70);
    eax = esp + 0x38;
    esi = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00257A77u); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_00257A77: ;
    PUSH32(esp, edi);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x58;
    PUSH32(esp, 0x00257A85u); RECOMP_ABI_CALL(0x0023FC90u, sub_0023FC90); /* call 0x0023FC90 */

loc_00257A85: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x38); /* fadd dword ptr [esp + 0x38] */
    eax = MEM32(esp + 0x74);
    edx = MEM32(eax + 0x38);
    ecx = MEM32(esi + 8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    MEM32(esp + 0x64) = edx;
    fp_top() = fp_top() + MEMF(esp + 0x3C); /* fadd dword ptr [esp + 0x3c] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x40); /* fadd dword ptr [esp + 0x40] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x30)); /* fld float */
    fp_push(MEMF(eax + 0x34)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - MEMF(esp + 0x38); /* fsub dword ptr [esp + 0x38] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(esp + 0x3C); /* fsub dword ptr [esp + 0x3c] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x40); /* fsub dword ptr [esp + 0x40] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa == 0)) goto loc_00257BAE; /* je: equal / zero */

loc_00257AE2: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00257B6E; /* je: equal / zero */

loc_00257AE9: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00257B09; /* je: equal / zero */

loc_00257AEC: ;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x28) = 0;
    goto loc_00257BBC;

loc_00257B09: ;
    PUSH32(esp, eax);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x50) = 0x3F800000;
    MEM32(esp + 0x54) = 0;
    PUSH32(esp, 0x00257B30u); RECOMP_ABI_CALL(0x0023FC90u, sub_0023FC90); /* call 0x0023FC90 */

loc_00257B30: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    ecx = esp + 0x64;
    PUSH32(esp, 0x00257B43u); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_00257B43: ;
    ecx = esp + 0x5C;
    PUSH32(esp, 0x00257B4Cu); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_00257B4C: ;
    fp_pop(); /* fstp st(0) */
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00257B61u); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_00257B61: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x00257B6Au); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_00257B6A: ;
    fp_pop(); /* fstp st(0) */
    goto loc_00257BBC;

loc_00257B6E: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = 0x3F800000;
    MEM32(esp + 0x30) = 0;
    PUSH32(esp, 0x00257B99u); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_00257B99: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00257BACu); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_00257BAC: ;
    goto loc_00257BBC;

loc_00257BAE: ;
    PUSH32(esp, edi);
    esi = esi + 0xC;
    PUSH32(esp, esi);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00257BBCu); RECOMP_ABI_CALL(0x0023FC90u, sub_0023FC90); /* call 0x0023FC90 */

loc_00257BBC: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    ecx = 0x7FFFFFFF;
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    POP32(esp, edi);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    POP32(esp, esi);
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x2C); /* fmul dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x2C); /* fmul dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x68) = MEM32(esp + 0x68) & ecx;
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3C6E40); /* fsub dword ptr [0x3c6e40] */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x68) = MEM32(esp + 0x68) & ecx;
    fp_push(MEMF(esp + 0x68)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x401650)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x401650] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00257DCD; /* jp: parity */

loc_00257C96: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEM32(esp) = 0x3F800000;
    fp_top() = fp_top() + MEMF(esp + 0x1C); /* fadd dword ptr [esp + 0x1c] */
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    fp_top() = fp_top() * MEMF(0x3C6DE4); /* fmul dword ptr [0x3c6de4] */
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x68) = MEM32(esp + 0x68) & ecx;
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3C6E40); /* fsub dword ptr [0x3c6e40] */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x68) = MEM32(esp + 0x68) & ecx;
    fp_push(MEMF(esp + 0x68)); /* fld float */
    ecx = esp + 0x18;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x401650)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x401650] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00257D24; /* jp: parity */

loc_00257CEE: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 8;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0x3F800000;
    PUSH32(esp, 0x00257D15u); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_00257D15: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 4;
    PUSH32(esp, eax);
    goto loc_00257DEA;

loc_00257D24: ;
    PUSH32(esp, ecx);
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00257D33u); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_00257D33: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    eax = esp + 0xC;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    ecx = esp + 8;
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00257D8Au); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_00257D8A: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = fp_top() * MEMF(esp); /* fmul dword ptr [esp] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00257E79;

loc_00257DCD: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x00257DE0u); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_00257DE0: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 4;
    PUSH32(esp, edx);

loc_00257DEA: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = esp + 0x14;
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00257E37u); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_00257E37: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_00257E79: ;
    ecx = MEM32(esp + 0x64);
    fp_pop(); /* fstp st(0) */
    edx = MEM32(esp + 8);
    fp_push(MEMF(esp)); /* fld float */
    eax = MEM32(esp + 4);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 4) = eax;
    eax = 0; /* xor self */
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x2C) = eax;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    MEM32(ecx + 0x38) = eax;
    MEM32(ecx + 0x24) = edx;
    edx = MEM32(esp + 0x14);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    MEM32(ecx + 0x28) = edx;
    MEM32(ecx + 0x3C) = 0x3F800000;
    PUSH32(esp, 0x00257EE1u); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_00257EE1: ;
    esp = esp + 0x60;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00257EF0
 * Original: 0x00257EF0 - 0x00258037 (327 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257EF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00257EF0: ;
    eax = MEM32(0x5BD8AC);
    esp = esp - 0x48;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00257F05u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00257F05: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00258030; /* je: equal / zero */

loc_00257F0D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00257F16u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00257F16: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00257F1Cu); RECOMP_ABI_CALL(0x00246D40u, sub_00246D40); /* call 0x00246D40 */

loc_00257F1C: ;
    esp = esp + 4;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00257F2Bu); RECOMP_ABI_CALL(0x002444C0u, sub_002444C0); /* call 0x002444C0 */

loc_00257F2B: ;
    ecx = esi;
    PUSH32(esp, 0x00257F32u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00257F32: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00257F38u); RECOMP_ABI_CALL(0x00246D40u, sub_00246D40); /* call 0x00246D40 */

loc_00257F38: ;
    edi = eax;
    eax = 0x7F7FFFFF;
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 8) = eax;
    eax = 0xFF7FFFFFu;
    MEM32(edi + 0x1C) = eax;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0x14) = eax;
    edx = MEM32(ebp);
    esp = esp + 4;
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00257F64u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00257F64: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(_fa & _fb, 0)) goto loc_00257FCF; /* jbe: below or equal (unsigned <=) */

loc_00257F6E: ;
    edi = edi;

loc_00257F70: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00257F79u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00257F79: ;
    eax = MEM32(ebp);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00257F8Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00257F8A: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00257F96u); RECOMP_ABI_CALL(0x00240E70u, sub_00240E70); /* call 0x00240E70 */

loc_00257F96: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00257F9Eu); RECOMP_ABI_CALL(0x002444C0u, sub_002444C0); /* call 0x002444C0 */

loc_00257F9E: ;
    eax = 0x7F7FFFFF;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = eax;
    eax = 0xFF7FFFFFu;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x14) = eax;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00257FC6u); RECOMP_ABI_CALL(0x002444C0u, sub_002444C0); /* call 0x002444C0 */

loc_00257FC6: ;
    eax = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00257F70; /* jb: below (unsigned <) */

loc_00257FCF: ;
    eax = 0x7F7FFFFF;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = eax;
    eax = 0xFF7FFFFFu;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x00257FF3u); RECOMP_ABI_CALL(0x002444C0u, sub_002444C0); /* call 0x002444C0 */

loc_00257FF3: ;
    edx = MEM32(edi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025800A; /* jne: not equal / not zero */

loc_00258003: ;
    ecx = edi;
    PUSH32(esp, 0x0025800Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025800A: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00258029; /* je: equal / zero */

loc_00258014: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00258029; /* jne: not equal / not zero */

loc_00258024: ;
    PUSH32(esp, 0x00258029u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00258029: ;
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

loc_00258030: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_00258040
 * Original: 0x00258040 - 0x0025851A (1242 bytes, 351 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258040(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00258040: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0025804Eu); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_0025804E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00258069; /* jne: not equal / not zero */

loc_00258052: ;
    ebx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x70); PUSH32(esp, 0x0025805Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025805B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x6C); PUSH32(esp, 0x00258061u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00258061: ;
    ecx = esi + 0x50;
    PUSH32(esp, 0x00258069u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00258069: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00258072u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00258072: ;
    ecx = eax;
    PUSH32(esp, 0x00258079u); RECOMP_ABI_CALL(0x001EA440u, sub_001EA440); /* call 0x001EA440 */

loc_00258079: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00258515; /* jne: not equal / not zero */

loc_00258081: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025808Du); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0025808D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00258093u); RECOMP_ABI_CALL(0x00297800u, sub_00297800); /* call 0x00297800 */

loc_00258093: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDBFC) = eax;
    PUSH32(esp, 0x002580A4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002580A4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002580AAu); RECOMP_ABI_CALL(0x00297800u, sub_00297800); /* call 0x00297800 */

loc_002580AA: ;
    MEM32(0x5BDC00) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002580BAu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002580BA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002580C0u); RECOMP_ABI_CALL(0x00297800u, sub_00297800); /* call 0x00297800 */

loc_002580C0: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDC04) = eax;
    PUSH32(esp, 0x002580D1u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002580D1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002580D7u); RECOMP_ABI_CALL(0x00297800u, sub_00297800); /* call 0x00297800 */

loc_002580D7: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDC08) = eax;
    PUSH32(esp, 0x002580E8u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002580E8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002580EEu); RECOMP_ABI_CALL(0x00297800u, sub_00297800); /* call 0x00297800 */

loc_002580EE: ;
    MEM32(0x5BDC0C) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002580FEu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002580FE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00258104u); RECOMP_ABI_CALL(0x00297800u, sub_00297800); /* call 0x00297800 */

loc_00258104: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDC10) = eax;
    PUSH32(esp, 0x00258115u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00258115: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025811Bu); RECOMP_ABI_CALL(0x00297800u, sub_00297800); /* call 0x00297800 */

loc_0025811B: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDC14) = eax;
    PUSH32(esp, 0x0025812Cu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0025812C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00258132u); RECOMP_ABI_CALL(0x00297800u, sub_00297800); /* call 0x00297800 */

loc_00258132: ;
    MEM32(0x5BDC18) = eax;
    eax = MEM32(0x46A680);
    esp = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00258145u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00258145: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025814Bu); RECOMP_ABI_CALL(0x00297800u, sub_00297800); /* call 0x00297800 */

loc_0025814B: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDC1C) = eax;
    PUSH32(esp, 0x0025815Cu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0025815C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00258162u); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_00258162: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDC20) = eax;
    PUSH32(esp, 0x00258173u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00258173: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00258179u); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_00258179: ;
    MEM32(0x5BDC30) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00258189u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00258189: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025818Fu); RECOMP_ABI_CALL(0x00297730u, sub_00297730); /* call 0x00297730 */

loc_0025818F: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDC34) = eax;
    PUSH32(esp, 0x002581A0u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002581A0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002581A6u); RECOMP_ABI_CALL(0x00297730u, sub_00297730); /* call 0x00297730 */

loc_002581A6: ;
    edx = MEM32(0x46A680);
    MEM32(0x5BDC38) = eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002581B7u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002581B7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002581BDu); RECOMP_ABI_CALL(0x002958A0u, sub_002958A0); /* call 0x002958A0 */

loc_002581BD: ;
    MEM32(0x5BDC3C) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002581CDu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002581CD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002581D3u); RECOMP_ABI_CALL(0x002958A0u, sub_002958A0); /* call 0x002958A0 */

loc_002581D3: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDC40) = eax;
    PUSH32(esp, 0x002581E4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002581E4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002581EAu); RECOMP_ABI_CALL(0x002958A0u, sub_002958A0); /* call 0x002958A0 */

loc_002581EA: ;
    edx = MEM32(0x46A680);
    esp = esp + 0x40;
    PUSH32(esp, edx);
    MEM32(0x5BDC44) = eax;
    PUSH32(esp, 0x002581FEu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002581FE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00258204u); RECOMP_ABI_CALL(0x002958A0u, sub_002958A0); /* call 0x002958A0 */

loc_00258204: ;
    MEM32(0x5BDC48) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00258214u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00258214: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025821Au); RECOMP_ABI_CALL(0x002958A0u, sub_002958A0); /* call 0x002958A0 */

loc_0025821A: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDC4C) = eax;
    PUSH32(esp, 0x0025822Bu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0025822B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00258231u); RECOMP_ABI_CALL(0x002958A0u, sub_002958A0); /* call 0x002958A0 */

loc_00258231: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDC50) = eax;
    PUSH32(esp, 0x00258242u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00258242: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00258248u); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_00258248: ;
    MEM32(0x5BDC24) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00258258u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00258258: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025825Eu); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_0025825E: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDC28) = eax;
    PUSH32(esp, 0x0025826Fu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0025826F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00258275u); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_00258275: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDC2C) = eax;
    PUSH32(esp, 0x00258286u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00258286: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025828Cu); RECOMP_ABI_CALL(0x00295A60u, sub_00295A60); /* call 0x00295A60 */

loc_0025828C: ;
    MEM32(0x5BDC54) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025829Cu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0025829C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002582A2u); RECOMP_ABI_CALL(0x00295A60u, sub_00295A60); /* call 0x00295A60 */

loc_002582A2: ;
    ecx = MEM32(0x46A680);
    esp = esp + 0x40;
    PUSH32(esp, ecx);
    MEM32(0x5BDC58) = eax;
    PUSH32(esp, 0x002582B6u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002582B6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002582BCu); RECOMP_ABI_CALL(0x002968D0u, sub_002968D0); /* call 0x002968D0 */

loc_002582BC: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDC5C) = eax;
    PUSH32(esp, 0x002582CDu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002582CD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002582D3u); RECOMP_ABI_CALL(0x00297AC0u, sub_00297AC0); /* call 0x00297AC0 */

loc_002582D3: ;
    ecx = MEM32(0x5BDC5C);
    MEM32(0x5BDC60) = eax;
    eax = MEM32(ecx);
    esp = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x002582E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002582E8: ;
    ecx = MEM32(0x5BDC60);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x002582F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002582F5: ;
    ecx = MEM32(0x5BDC24);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00258302u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00258302: ;
    ecx = MEM32(0x5BDC24);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0025830Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025830F: ;
    ecx = MEM32(0x5BDC28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0025831Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025831C: ;
    ecx = MEM32(0x5BDC28);
    edx = MEM32(ecx);
    esi = 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0025832Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025832D: ;
    ecx = MEM32(0x5BDC2C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0025833Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025833A: ;
    ecx = MEM32(0x5BDC2C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00258347u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00258347: ;
    eax = MEM32(0x5BDC3C);
    MEM32(eax + 0xC) = esi;
    ecx = MEM32(0x5BDC40);
    MEM32(ecx + 0xC) = 0;
    edx = MEM32(0x5BDC44);
    MEM32(edx + 0xC) = 1;
    ecx = MEM32(0x5BDC48);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00258375u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00258375: ;
    ecx = MEM32(0x5BDC48);
    PUSH32(esp, 0);
    MEM32(ecx + 0xC) = 1;
    ecx = MEM32(0x5BDC50);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00258391u); RECOMP_ABI_CALL(0x002946D0u, sub_002946D0); /* call 0x002946D0 */

loc_00258391: ;
    ecx = MEM32(0x5BDC50);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 0x002583A0u); RECOMP_ABI_CALL(0x002946D0u, sub_002946D0); /* call 0x002946D0 */

loc_002583A0: ;
    ecx = MEM32(0x5BDC50);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x002583ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002583AD: ;
    eax = MEM32(0x5BDC50);
    MEM32(eax + 0xC) = 3;
    ecx = MEM32(0x5BDC4C);
    MEM32(ecx + 0xC) = 0x16;
    ecx = MEM32(0x5BDC54);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x002583D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002583D3: ;
    ecx = MEM32(0x5BDC58);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x002583DFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002583DF: ;
    ecx = MEM32(0x5BDBFC);
    MEM32(ecx + 0x14) = esi;
    ecx = MEM32(0x5BDBFC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x002583F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002583F5: ;
    ecx = MEM32(0x5BDBFC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00258402u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00258402: ;
    ecx = MEM32(0x5BDC00);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0025840Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025840F: ;
    ecx = MEM32(0x5BDC00);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0025841Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025841B: ;
    ecx = MEM32(0x5BDC04);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00258428u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00258428: ;
    ecx = MEM32(0x5BDC04);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00258434u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00258434: ;
    ecx = MEM32(0x5BDC08);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00258441u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00258441: ;
    ecx = MEM32(0x5BDC08);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0025844Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025844E: ;
    ecx = MEM32(0x5BDC0C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0025845Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025845B: ;
    ecx = MEM32(0x5BDC0C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00258468u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00258468: ;
    ecx = MEM32(0x5BDC10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00258475u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00258475: ;
    ecx = MEM32(0x5BDC10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00258482u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00258482: ;
    ecx = MEM32(0x5BDC14);
    MEM32(ecx + 0x14) = esi;
    ecx = MEM32(0x5BDC14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00258498u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00258498: ;
    ecx = MEM32(0x5BDC14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x002584A5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002584A5: ;
    ecx = MEM32(0x5BDC18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x002584B2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002584B2: ;
    ecx = MEM32(0x5BDC18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x002584BFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002584BF: ;
    ecx = MEM32(0x5BDC1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x002584CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002584CC: ;
    ecx = MEM32(0x5BDC1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x002584D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002584D9: ;
    ecx = MEM32(0x5BDC20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x002584E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002584E6: ;
    ecx = MEM32(0x5BDC30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x002584F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002584F3: ;
    ecx = MEM32(0x5BDC34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00258500u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00258500: ;
    ecx = MEM32(0x5BDC38);
    eax = MEM32(ecx);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x78)); return; /* indirect tail jmp */

loc_00258515: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00258520
 * Original: 0x00258520 - 0x00258541 (33 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258520(void)
{

loc_00258520: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00258530u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00258530: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, 0x0025853Du); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025853D: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00258550
 * Original: 0x00258550 - 0x002585F2 (162 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258550(void)
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

loc_00258550: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    fp_top() = fp_top() * MEMF(0x3FED9C); /* fmul dword ptr [0x3fed9c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8360)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c8360] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025857A; /* jne: not equal / not zero */

loc_00258571: ;
    fp_pop(); /* fstp st(0) */
    MEM8(esp + 0x10) = 0xFF;
    goto loc_00258583;

loc_0025857A: ;
    PUSH32(esp, 0x0025857Fu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0025857F: ;
    MEM8(esp + 0x10) = LO8(eax);

loc_00258583: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    fp_top() = fp_top() * MEMF(0x3FED9C); /* fmul dword ptr [0x3fed9c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8360)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c8360] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002585A6; /* jne: not equal / not zero */

loc_0025859F: ;
    fp_pop(); /* fstp st(0) */
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    goto loc_002585AD;

loc_002585A6: ;
    PUSH32(esp, 0x002585ABu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_002585AB: ;
    SET_LO8(ebx, LO8(eax));

loc_002585AD: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    fp_top() = fp_top() * MEMF(0x3FED9C); /* fmul dword ptr [0x3fed9c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8360)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c8360] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002585D2; /* jne: not equal / not zero */

loc_002585C9: ;
    fp_pop(); /* fstp st(0) */
    MEM8(esp + 0x12) = 0xFF;
    goto loc_002585DB;

loc_002585D2: ;
    PUSH32(esp, 0x002585D7u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_002585D7: ;
    MEM8(esp + 0x12) = LO8(eax);

loc_002585DB: ;
    eax = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(esp + 0x10));
    SET_LO8(edx, MEM8(esp + 0x12));
    POP32(esp, esi);
    MEM8(eax + 1) = LO8(ebx);
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 2) = LO8(edx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00258600
 * Original: 0x00258600 - 0x002588B1 (689 bytes, 214 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258600(void)
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

loc_00258600: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x54);
    fp_push(MEMF(ebp)); /* fld float */
    PUSH32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    PUSH32(esp, edi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00258641; /* jnp: not parity */

loc_0025861D: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ebp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00258641; /* jnp: not parity */

loc_0025862F: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ebp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0025867D; /* jp: parity */

loc_00258641: ;
    fp_push((double)SMEM32(esp + 0x50)); /* fild */
    fp_top() = fp_top() / (double)SMEM32(esp + 0x54); /* fidiv dword ptr [esp + 0x54] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0025866C; /* jp: parity */

loc_00258656: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    MEM32(ebp) = 0x3F800000;
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    MEMF(ebp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    goto loc_00258676;

loc_0025866C: ;
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebp + 4) = 0x3F800000;

loc_00258676: ;
    MEM32(ebp + 8) = 0x3F800000;

loc_0025867D: ;
    ebx = MEM32(esp + 0x50);
    ecx = MEM32(esp + 0x58);
    edi = MEM32(esp + 0x54);
    edx = ebx + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002587F7; /* jle: less or equal (signed <=) */

loc_00258695: ;
    eax = MEM32(esp + 0x4C);
    esi = eax + ebx + 2;
    eax = ebx + ebx * 2;
    eax = eax + ecx + 5;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = edx;

loc_002586B1: ;
    edx = edi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002587D4; /* jle: less or equal (signed <=) */

loc_002586BD: ;
    edi = eax;
    eax = eax | 0xFFFFFFFFu;
    eax = eax - ebx;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x5C) = edx;
    goto loc_002586D3;

loc_002586CF: ;
    eax = MEM32(esp + 0x1C);

loc_002586D3: ;
    ecx = ZX8(MEM8(esi + -2));
    edx = ZX8(MEM8(esi));
    eax = ZX8(MEM8(eax + esi));
    edx = edx - ecx;
    ecx = ZX8(MEM8(esi + ebx + -1));
    MEM32(esp + 0x20) = edx;
    ecx = ecx - eax;
    edx = esp + 0x30;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    MEM32(esp + 0x34) = 0;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    MEM32(esp + 0x38) = 0x40000000;
    MEM32(esp + 0x28) = 0x40000000;
    MEM32(esp + 0x2C) = 0;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00258739u); RECOMP_ABI_CALL(0x0023FB90u, sub_0023FB90); /* call 0x0023FB90 */

loc_00258739: ;
    fp_push(MEMF(ebp)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(ebp + 4)); /* fld float */
    MEM32(esp + 0x44) = eax;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    ecx = esp + 0x24;
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x34); /* fmul dword ptr [esp + 0x34] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x2C); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x002587A3u); RECOMP_ABI_CALL(0x00258550u, sub_00258550); /* call 0x00258550 */

loc_002587A3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edi + -2) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 1));
    MEM8(edi + -1) = LO8(edx);
    SET_LO8(eax, MEM8(eax + 2));
    MEM8(edi) = LO8(eax);
    eax = ebx + ebx * 2;
    edi = edi + eax;
    eax = MEM32(esp + 0x64);
    esp = esp + 8;
    esi = esi + ebx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x5C) = eax;
    if ((_fa != 0)) goto loc_002586CF; /* jne: not equal / not zero */

loc_002587CC: ;
    ecx = MEM32(esp + 0x58);
    edi = MEM32(esp + 0x54);

loc_002587D4: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    eax = eax + 3;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edx;
    if ((_fa != 0)) goto loc_002586B1; /* jne: not equal / not zero */

loc_002587F7: ;
    edx = ebx + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025886C; /* jle: less or equal (signed <=) */

loc_002587FF: ;
    eax = edi + -1;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    ebp = ecx + eax * 2;
    ebp = eax + ebp + 5;
    eax = edi + -2;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    edi = ecx + eax * 2;
    edi = eax + edi + 5;
    eax = ecx + ebx * 2;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = ecx + 5;
    eax = ebx + eax + 5;
    MEM32(esp + 0x58) = edx;
    goto loc_00258830;

    /* nop */

loc_00258830: ;
    SET_LO8(edx, MEM8(eax + -2));
    MEM8(esi + -2) = LO8(edx);
    SET_LO8(edx, MEM8(eax + -1));
    MEM8(esi + -1) = LO8(edx);
    SET_LO8(edx, MEM8(eax));
    MEM8(esi) = LO8(edx);
    SET_LO8(edx, MEM8(edi + -2));
    MEM8(ebp + -2) = LO8(edx);
    SET_LO8(edx, MEM8(edi + -1));
    MEM8(ebp + -1) = LO8(edx);
    SET_LO8(edx, MEM8(edi));
    MEM8(ebp) = LO8(edx);
    edx = MEM32(esp + 0x58);
    eax = eax + 3;
    esi = esi + 3;
    edi = edi + 3;
    ebp = ebp + 3;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x58) = edx;
    if ((_fa != 0)) goto loc_00258830; /* jne: not equal / not zero */

loc_00258868: ;
    edi = MEM32(esp + 0x54);

loc_0025886C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002588A9; /* jle: less or equal (signed <=) */

loc_00258870: ;
    esi = ebx + ebx * 2;
    eax = ecx + 5;
    ecx = esi + ecx + -2;
    /* nop */

loc_00258880: ;
    SET_LO8(edx, MEM8(eax + -2));
    MEM8(eax + -5) = LO8(edx);
    SET_LO8(edx, MEM8(eax + -1));
    MEM8(eax + -4) = LO8(edx);
    SET_LO8(edx, MEM8(eax));
    MEM8(eax + -3) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + -4));
    MEM8(ecx + -1) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + -3));
    MEM8(ecx) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + -2));
    MEM8(ecx + 1) = LO8(edx);
    eax = eax + esi;
    ecx = ecx + esi;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00258880; /* jne: not equal / not zero */

loc_002588A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002588C0
 * Original: 0x002588C0 - 0x00258929 (105 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002588C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002588C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x28);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x002588D4u); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_002588D4: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002588EF; /* jle: less or equal (signed <=) */

loc_002588DD: ;
    /* nop */

loc_002588E0: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002588E0; /* jl: less (signed <) */

loc_002588EF: ;
    MEM32(esi + 8) = 0;
    esi = MEM32(edi + 0x2C);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00258906u); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_00258906: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0025891F; /* jle: less or equal (signed <=) */

loc_0025890F: ;
    /* nop */

loc_00258910: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00258910; /* jl: less (signed <) */

loc_0025891F: ;
    POP32(esp, edi);
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00258930
 * Original: 0x00258930 - 0x0025897D (77 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00258930: ;
    eax = MEM32(ecx + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025897C; /* je: equal / zero */

loc_0025893A: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025895A; /* jne: not equal / not zero */

loc_00258940: ;
    edx = MEM32(eax + 0x74);
    MEM32(ecx + 0x38) = edx;
    edx = MEM32(eax + 0x78);
    MEM32(ecx + 0x3C) = edx;
    eax = MEM32(eax + 0x7C);
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x44) = 0x3F800000;
    esp += 4; return; /* ret */

loc_0025895A: ;
    edx = MEM32(eax + 0x80);
    MEM32(ecx + 0x38) = edx;
    edx = MEM32(eax + 0x84);
    MEM32(ecx + 0x3C) = edx;
    eax = MEM32(eax + 0x88);
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x44) = 0;

loc_0025897C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00258980
 * Original: 0x00258980 - 0x0025898F (15 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258980(void)
{

loc_00258980: ;
    eax = ecx;
    ecx = MEM32(eax + 0x44);
    eax = MEM32(eax + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0025898Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025898E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00258990
 * Original: 0x00258990 - 0x00258A31 (161 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258990(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00258990: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ecx = MEM32(ebx + 0x104);
    PUSH32(esp, 0x343612);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002589A9u); RECOMP_ABI_CALL(0x001EB800u, sub_001EB800); /* call 0x001EB800 */

loc_002589A9: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_002589B6; /* jge: greater or equal (signed >=) */

loc_002589AF: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_002589B6: ;
    ecx = MEM32(ebx + 0x108);
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(edx + ebp * 4);
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + eax * 4 + -4);
    ecx = MEM32(ecx + eax * 4 + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    edi = eax + -1;
    MEM32(esp + 0x14) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_002589F2; /* je: equal / zero */

loc_002589DD: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002589F2; /* jne: not equal / not zero */

loc_002589ED: ;
    PUSH32(esp, 0x002589F2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002589F2: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002589FAu); RECOMP_ABI_CALL(0x001E7BB0u, sub_001E7BB0); /* call 0x001E7BB0 */

loc_002589FA: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + eax * 4) = 0;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_00258A28; /* jne: not equal / not zero */

loc_00258A10: ;
    ecx = MEM32(ebx + 0x104);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00258A1Cu); RECOMP_ABI_CALL(0x00117E70u, sub_00117E70); /* call 0x00117E70 */

loc_00258A1C: ;
    ecx = MEM32(ebx + 0x108);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00258A28u); RECOMP_ABI_CALL(0x00117E70u, sub_00117E70); /* call 0x00117E70 */

loc_00258A28: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00258A40
 * Original: 0x00258A40 - 0x00258A96 (86 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00258A40: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00258A90; /* je: equal / zero */

loc_00258A4B: ;
    eax = edx;
    PUSH32(esp, edi);
    edi = eax + 1;

loc_00258A51: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00258A51; /* jne: not equal / not zero */

loc_00258A58: ;
    eax = eax - edi;
    MEM32(esp + 0xC) = eax;
    POP32(esp, edi);
    if ((eax == 0)) goto loc_00258A90; /* je: equal / zero */

loc_00258A61: ;
    ecx = MEM32(esi + 0x104);
    PUSH32(esp, 0x343612);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00258A72u); RECOMP_ABI_CALL(0x001EB800u, sub_001EB800); /* call 0x001EB800 */

loc_00258A72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00258A90; /* jl: less (signed <) */

loc_00258A76: ;
    ecx = MEM32(esi + 0x108);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + eax * 4);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 4 + -4);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00258A90: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00258AA0
 * Original: 0x00258AA0 - 0x00258B40 (160 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00258AA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x1D8);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00258AB9u); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_00258AB9: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258ACD; /* jle: less or equal (signed <=) */

loc_00258AC2: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00258AC2; /* jl: less (signed <) */

loc_00258ACD: ;
    MEM32(esi + 8) = ebx;
    esi = MEM32(edi + 0x1DC);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00258AE2u); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_00258AE2: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258AFB; /* jle: less or equal (signed <=) */

loc_00258AEB: ;
    goto loc_00258AF0;

    /* nop */

loc_00258AF0: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00258AF0; /* jl: less (signed <) */

loc_00258AFB: ;
    MEM32(esi + 8) = ebx;
    eax = MEM32(edi + 0x1EC);
    MEM32(eax + 8) = ebx;
    esi = MEM32(edi + 0x1F8);
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00258B19u); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_00258B19: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258B2D; /* jle: less or equal (signed <=) */

loc_00258B22: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00258B22; /* jl: less (signed <) */

loc_00258B2D: ;
    MEM32(esi + 8) = ebx;
    MEM8(edi + 0x1E4) = LO8(ebx);
    MEM8(edi + 0x1F0) = LO8(ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00258B40
 * Original: 0x00258B40 - 0x00258B66 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258B40(void)
{

loc_00258B40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = MEM32(edi + 0x1F4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00258B56u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00258B56: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x00258B61u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00258B61: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00258B70
 * Original: 0x00258B70 - 0x00258C22 (178 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00258B70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x44);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00258B86u); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_00258B86: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258B9B; /* jle: less or equal (signed <=) */

loc_00258B8F: ;
    /* nop */

loc_00258B90: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00258B90; /* jl: less (signed <) */

loc_00258B9B: ;
    MEM32(esi + 8) = ebx;
    esi = MEM32(edi + 0x48);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00258BADu); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_00258BAD: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258BC1; /* jle: less or equal (signed <=) */

loc_00258BB6: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00258BB6; /* jl: less (signed <) */

loc_00258BC1: ;
    MEM32(esi + 8) = ebx;
    esi = MEM32(edi + 0x30);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00258BD3u); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_00258BD3: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258BEB; /* jle: less or equal (signed <=) */

loc_00258BDC: ;
    /* nop */

loc_00258BE0: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00258BE0; /* jl: less (signed <) */

loc_00258BEB: ;
    MEM32(esi + 8) = ebx;
    eax = MEM32(edi + 0x38);
    MEM32(eax + 8) = ebx;
    esi = MEM32(edi + 0x40);
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00258C03u); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_00258C03: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00258C1B; /* jle: less or equal (signed <=) */

loc_00258C0C: ;
    /* nop */

loc_00258C10: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00258C10; /* jl: less (signed <) */

loc_00258C1B: ;
    POP32(esp, edi);
    MEM32(esi + 8) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00258C30
 * Original: 0x00258C30 - 0x00258C60 (48 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258C30(void)
{

loc_00258C30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00258C38u); RECOMP_ABI_CALL(0x00258B70u, sub_00258B70); /* call 0x00258B70 */

loc_00258C38: ;
    ecx = MEM32(esi + 0x3C);
    eax = 0; /* xor self */
    MEM32(ecx + 8) = eax;
    edx = MEM32(esi + 0x24);
    MEM32(edx + 8) = eax;
    ecx = MEM32(esi + 0x28);
    MEM32(ecx + 8) = eax;
    edx = MEM32(esi + 0x2C);
    MEM32(edx + 8) = eax;
    ecx = MEM32(esi + 0x20);
    MEM32(ecx + 8) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00258C60
 * Original: 0x00258C60 - 0x00258CE0 (128 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258C60(void)
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

loc_00258C60: ;
    SET_LO8(edx, MEM8(0x5BDFBC));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00258C75; /* jne: not equal / not zero */

loc_00258C6F: ;
    MEM32(0x5BDFBC) = MEM32(0x5BDFBC) | eax;

loc_00258C75: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(esp + 4);
    edx = MEM32(edx + 0x10);
    eax = eax + eax * 2;
    eax = edx + eax * 2;
    edx = ZX16(MEM16(eax));
    MEM32(esp + 4) = edx;
    eax = eax + 2;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = fp_top() * MEMF(ecx + 0x18); /* fmul dword ptr [ecx + 0x18] */
    fp_top() = fp_top() + MEMF(ecx + 0x14); /* fadd dword ptr [ecx + 0x14] */
    MEMF(0x5BDFB0) = (float)fp_top(); fp_pop(); /* fstp */
    edx = ZX16(MEM16(eax));
    MEM32(esp + 4) = edx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = fp_top() * MEMF(ecx + 0x18); /* fmul dword ptr [ecx + 0x18] */
    fp_top() = fp_top() + MEMF(ecx + 0x14); /* fadd dword ptr [ecx + 0x14] */
    MEMF(0x5BDFB4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ZX16(MEM16(eax + 2));
    MEM32(esp + 4) = eax;
    eax = 0x5BDFB0;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = fp_top() * MEMF(ecx + 0x18); /* fmul dword ptr [ecx + 0x18] */
    fp_top() = fp_top() + MEMF(ecx + 0x14); /* fadd dword ptr [ecx + 0x14] */
    MEMF(0x5BDFB8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00258CE0
 * Original: 0x00258CE0 - 0x00258D53 (115 bytes, 36 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00258CE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00258CE0: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(eax + 0x10);
    eax = MEM32(esp + 4);
    eax = edx + eax * 8;
    edx = ZX16(MEM16(eax));
    MEM32(esp + 4) = edx;
    edx = MEM32(esp + 8);
    eax = eax + 2;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    PUSH32(esp, esi);
    edx = edx + 4;
    fp_top() = fp_top() * MEMF(ecx + 0x20); /* fmul dword ptr [ecx + 0x20] */
    eax = eax + 2;
    edx = edx + 4;
    fp_top() = fp_top() + MEMF(ecx + 0x1C); /* fadd dword ptr [ecx + 0x1c] */
    MEMF(edx + -8) = (float)fp_top(); fp_pop(); /* fstp */
    esi = ZX16(MEM16(eax + -2));
    MEM32(esp + 8) = esi;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = fp_top() * MEMF(ecx + 0x20); /* fmul dword ptr [ecx + 0x20] */
    fp_top() = fp_top() + MEMF(ecx + 0x1C); /* fadd dword ptr [ecx + 0x1c] */
    MEMF(edx + -4) = (float)fp_top(); fp_pop(); /* fstp */
    esi = ZX16(MEM16(eax));
    MEM32(esp + 8) = esi;
    POP32(esp, esi);
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = fp_top() * MEMF(ecx + 0x20); /* fmul dword ptr [ecx + 0x20] */
    fp_top() = fp_top() + MEMF(ecx + 0x1C); /* fadd dword ptr [ecx + 0x1c] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ZX16(MEM16(eax + 2));
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = fp_top() * MEMF(ecx + 0x20); /* fmul dword ptr [ecx + 0x20] */
    fp_top() = fp_top() + MEMF(ecx + 0x1C); /* fadd dword ptr [ecx + 0x1c] */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00258D60
 * Original: 0x00258D60 - 0x00258DB8 (88 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00258D60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00258D60: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(esp + 4);
    edx = MEM32(edx + 0x10);
    eax = eax + eax * 2;
    eax = edx + eax * 2;
    edx = ZX16(MEM16(eax));
    MEM32(esp + 4) = edx;
    edx = MEM32(esp + 8);
    eax = eax + 2;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    PUSH32(esp, esi);
    fp_top() = fp_top() * MEMF(ecx + 0x18); /* fmul dword ptr [ecx + 0x18] */
    fp_top() = fp_top() + MEMF(ecx + 0x14); /* fadd dword ptr [ecx + 0x14] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    esi = ZX16(MEM16(eax));
    MEM32(esp + 8) = esi;
    POP32(esp, esi);
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = fp_top() * MEMF(ecx + 0x18); /* fmul dword ptr [ecx + 0x18] */
    fp_top() = fp_top() + MEMF(ecx + 0x14); /* fadd dword ptr [ecx + 0x14] */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ZX16(MEM16(eax + 2));
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = fp_top() * MEMF(ecx + 0x18); /* fmul dword ptr [ecx + 0x18] */
    fp_top() = fp_top() + MEMF(ecx + 0x14); /* fadd dword ptr [ecx + 0x14] */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00258DC0
 * Original: 0x00258DC0 - 0x00258DF9 (57 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00258DC0: ;
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(esp + 4);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ecx + edx * 2));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), HI8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_00258DEB; /* jns: not sign (positive) */

loc_00258DD4: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = (edx << 0x17) | (eax >> (32 - 0x17)); /* shld */
    if (0x17) _cf = (int)(((eax) >> (32 - (0x17))) & 1);
    eax = eax << 0x17;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    esp += 8; return; /* ret 4 */

loc_00258DEB: ;
    eax = ZX16(LO16(eax));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = (edx << 0x17) | (eax >> (32 - 0x17)); /* shld */
    if (0x17) _cf = (int)(((eax) >> (32 - (0x17))) & 1);
    eax = eax << 0x17;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00258E00
 * Original: 0x00258E00 - 0x00258E90 (144 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00258E00: ;
    SET_LO8(eax, MEM8(ecx + 0x3A));
    edx = MEM32(esp + 8);
    esp = esp - 0x20;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00258E1F; /* jne: not equal / not zero */

loc_00258E0E: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00258E19u); RECOMP_ABI_CALL(0x00258CE0u, sub_00258CE0); /* call 0x00258CE0 */

loc_00258E19: ;
    esp = esp + 0x20;
    esp += 20; return; /* ret 16 */

loc_00258E1F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00258E59; /* jne: not equal / not zero */

loc_00258E23: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00258E2Eu); RECOMP_ABI_CALL(0x00258CE0u, sub_00258CE0); /* call 0x00258CE0 */

loc_00258E2E: ;
    edx = MEM32(esp + 0x2C);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00258E3Cu); RECOMP_ABI_CALL(0x00258CE0u, sub_00258CE0); /* call 0x00258CE0 */

loc_00258E3C: ;
    edx = MEM32(esp + 0x30);
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00258E53u); RECOMP_ABI_CALL(0x0023F650u, sub_0023F650); /* call 0x0023F650 */

loc_00258E53: ;
    esp = esp + 0x20;
    esp += 20; return; /* ret 16 */

loc_00258E59: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00258E63u); RECOMP_ABI_CALL(0x00258CE0u, sub_00258CE0); /* call 0x00258CE0 */

loc_00258E63: ;
    edx = MEM32(esp + 0x2C);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00258E72u); RECOMP_ABI_CALL(0x00258CE0u, sub_00258CE0); /* call 0x00258CE0 */

loc_00258E72: ;
    edx = MEM32(esp + 0x30);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00258E8Au); RECOMP_ABI_CALL(0x0023F910u, sub_0023F910); /* call 0x0023F910 */

loc_00258E8A: ;
    esp = esp + 0x20;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00258E90
 * Original: 0x00258E90 - 0x00258EE8 (88 bytes, 28 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00258E90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00258E90: ;
    edx = MEM32(ecx + 0x40);
    eax = MEM32(esp + 4);
    edx = MEM32(edx + 0x10);
    eax = eax + eax * 2;
    eax = edx + eax * 2;
    edx = ZX16(MEM16(eax));
    MEM32(esp + 4) = edx;
    edx = MEM32(esp + 8);
    eax = eax + 2;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    PUSH32(esp, esi);
    fp_top() = fp_top() * MEMF(ecx + 0x48); /* fmul dword ptr [ecx + 0x48] */
    fp_top() = fp_top() + MEMF(ecx + 0x44); /* fadd dword ptr [ecx + 0x44] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    esi = ZX16(MEM16(eax));
    MEM32(esp + 8) = esi;
    POP32(esp, esi);
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = fp_top() * MEMF(ecx + 0x48); /* fmul dword ptr [ecx + 0x48] */
    fp_top() = fp_top() + MEMF(ecx + 0x44); /* fadd dword ptr [ecx + 0x44] */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ZX16(MEM16(eax + 2));
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = fp_top() * MEMF(ecx + 0x48); /* fmul dword ptr [ecx + 0x48] */
    fp_top() = fp_top() + MEMF(ecx + 0x44); /* fadd dword ptr [ecx + 0x44] */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00258EF0
 * Original: 0x00258EF0 - 0x00259246 (854 bytes, 205 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00258EF0: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0x10005;
    PUSH32(esp, 0x00258F01u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00258F01: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00258F07u); RECOMP_ABI_CALL(0x002A0680u, sub_002A0680); /* call 0x002A0680 */

loc_00258F07: ;
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 6);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00258F1Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00258F1E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00258F2Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00258F2E: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x00258F55u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00258F55: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x3F800000;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x00258F7Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00258F7C: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x00258FA3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00258FA3: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x3F800000;
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x00258FCAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00258FCA: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x00258FF1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00258FF1: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x3F800000;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x00259018u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259018: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 8;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x0025903Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025903C: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x00259060u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259060: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0x3F800000;
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x00259084u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259084: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0x3F800000;
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x002590A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002590A8: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0x3F800000;
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x002590CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002590CC: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x002590F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002590F0: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x3F800000;
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = 0x3F800000;
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x00259122u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259122: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x3F800000;
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = 0x3F800000;
    eax = MEM32(ecx);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x00259154u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259154: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x3F800000;
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = 0x3F800000;
    eax = MEM32(ecx);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x00259186u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259186: ;
    MEM32(esp + 8) = 0x3F800000;
    MEM32(esp + 0xC) = 0x3F800000;
    MEM32(esp + 0x10) = 0x3F800000;
    ecx = MEM32(esi + 0xC);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = 0x3F800000;
    eax = MEM32(ecx);
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x002591B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002591B8: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x3F800000;
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = 0x3F800000;
    eax = MEM32(ecx);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x002591EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002591EA: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x3F800000;
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = 0x3F800000;
    eax = MEM32(ecx);
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x0025921Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025921C: ;
    eax = MEM32(0x5BDCC4);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025922Au); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025922A: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00259241; /* jne: not equal / not zero */

loc_0025923A: ;
    ecx = esi;
    PUSH32(esp, 0x00259241u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00259241: ;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00259250
 * Original: 0x00259250 - 0x0025964F (1023 bytes, 264 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00259250(void)
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

loc_00259250: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x70;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = 0x40005;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259268u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00259268: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025926Eu); RECOMP_ABI_CALL(0x002A0680u, sub_002A0680); /* call 0x002A0680 */

loc_0025926E: ;
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 6);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00259285u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259285: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00259295u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259295: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x002592BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002592BC: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x4C) = 0x3F800000;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x002592E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002592E3: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x50) = 0x3F800000;
    MEM32(esp + 0x54) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x0025930Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025930A: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x4C) = 0x3F800000;
    MEM32(esp + 0x50) = 0x3F800000;
    MEM32(esp + 0x54) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x00259331u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259331: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x50) = 0x3F800000;
    MEM32(esp + 0x54) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x00259358u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259358: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x4C) = 0x3F800000;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x0025937Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025937F: ;
    eax = MEM32(0x5BDCB4);
    ecx = MEM32(eax + 0x28);
    edx = MEM32(eax + 0x2C);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    edi = 0; /* xor self */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(0x3CA9DC)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x5C) = (float)fp_top(); /* fst */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(0x3C83B0); /* fmul dword ptr [0x3c83b0] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA844); /* fmul dword ptr [0x3ca844] */
    MEMF(esp + 0x64) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(0x3D06E0); /* fmul dword ptr [0x3d06e0] */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(0x401658); /* fmul dword ptr [0x401658] */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    edi = edi;

loc_00259400: ;
    fp_push(MEMF(esp + edi * 8 + 0x58)); /* fld float */
    ecx = MEM32(esi + 0xC);
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    edx = esp + 0x20;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    fp_push(MEMF(esp + edi * 8 + 0x60)); /* fld float */
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    PUSH32(esp, edi);
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x0025942Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025942B: ;
    fp_push(MEMF(esp + edi * 8 + 0x58)); /* fld float */
    eax = MEM32(esp + 0x14);
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    ecx = MEM32(esi + 0xC);
    MEM32(esp + 0x2C) = eax;
    eax = esp + 0x28;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x00259458u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259458: ;
    fp_push(MEMF(esp + edi * 8 + 0x5C)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    ecx = MEM32(esp + 8);
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = ecx;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    ecx = MEM32(esi + 0xC);
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x00259485u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259485: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x3C) = edx;
    edx = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x002594A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002594A8: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(esp + 0x40) = eax;
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x002594CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002594CB: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x4C) = edx;
    edx = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    PUSH32(esp, 5);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x002594EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002594EE: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00259400; /* jl: less (signed <) */

loc_002594F8: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x4C) = 0x3F800000;
    MEM32(esp + 0x50) = 0x3F800000;
    MEM32(esp + 0x54) = 0x3F800000;
    MEM32(esp + 0x58) = 0x3F800000;
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x0025952Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025952A: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x4C) = 0x3F800000;
    MEM32(esp + 0x50) = 0x3F800000;
    MEM32(esp + 0x54) = 0x3F800000;
    MEM32(esp + 0x58) = 0x3F800000;
    eax = MEM32(ecx);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x0025955Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025955C: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x4C) = 0x3F800000;
    MEM32(esp + 0x50) = 0x3F800000;
    MEM32(esp + 0x54) = 0x3F800000;
    MEM32(esp + 0x58) = 0x3F800000;
    eax = MEM32(ecx);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x0025958Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025958E: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x4C) = 0x3F800000;
    MEM32(esp + 0x50) = 0x3F800000;
    MEM32(esp + 0x54) = 0x3F800000;
    MEM32(esp + 0x58) = 0x3F800000;
    eax = MEM32(ecx);
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x002595C0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002595C0: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x4C) = 0x3F800000;
    MEM32(esp + 0x50) = 0x3F800000;
    MEM32(esp + 0x54) = 0x3F800000;
    MEM32(esp + 0x58) = 0x3F800000;
    eax = MEM32(ecx);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x002595F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002595F2: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x4C) = 0x3F800000;
    MEM32(esp + 0x50) = 0x3F800000;
    MEM32(esp + 0x54) = 0x3F800000;
    MEM32(esp + 0x58) = 0x3F800000;
    eax = MEM32(ecx);
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x00259624u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259624: ;
    eax = MEM32(0x5BDCC8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259632u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00259632: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00259649; /* jne: not equal / not zero */

loc_00259642: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259649u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00259649: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00259650
 * Original: 0x00259650 - 0x00259672 (34 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259650(void)
{

loc_00259650: ;
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0025966Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025966D: ;
    SET_LO8(eax, 1);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00259680
 * Original: 0x00259680 - 0x002596AC (44 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259680(void)
{

loc_00259680: ;
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x002596A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002596A7: ;
    SET_LO8(eax, 1);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002596B0
 * Original: 0x002596B0 - 0x002596D0 (32 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002596B0(void)
{

loc_002596B0: ;
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x002596CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002596CD: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002596D0
 * Original: 0x002596D0 - 0x00259700 (48 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002596D0(void)
{

loc_002596D0: ;
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x002596F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002596F7: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00259700
 * Original: 0x00259700 - 0x00259725 (37 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259700(void)
{

loc_00259700: ;
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00259722u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259722: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00259730
 * Original: 0x00259730 - 0x0025975F (47 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259730(void)
{

loc_00259730: ;
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0025975Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025975C: ;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00259760
 * Original: 0x00259760 - 0x00259776 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259760(void)
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

loc_00259760: ;
    ecx = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0025976Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025976B: ;
    fp_top() = fp_top() * MEMD(0x3DA5F0); /* fmul qword ptr [0x3da5f0] */
    g_seh_ebp = ebp; sub_001A41F0(); return; /* tail jmp 0x001A41F0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00259780
 * Original: 0x00259780 - 0x0025986B (235 bytes, 76 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259780(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259780: ;
    eax = MEM32(0x5BDD60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002597B8; /* jne: not equal / not zero */

loc_00259789: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00259794u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00259794: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025979Au); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_0025979A: ;
    esp = esp + 8;
    MEM32(0x5BDD60) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x002597ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002597AB: ;
    ecx = MEM32(0x5BDD60);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x002597B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002597B8: ;
    eax = MEM32(0x5BDD64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002597E4; /* jne: not equal / not zero */

loc_002597C1: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002597CDu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002597CD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002597D3u); RECOMP_ABI_CALL(0x00297730u, sub_00297730); /* call 0x00297730 */

loc_002597D3: ;
    esp = esp + 8;
    MEM32(0x5BDD64) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x002597E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002597E4: ;
    eax = MEM32(0x5BDD68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025980F; /* jne: not equal / not zero */

loc_002597ED: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002597F8u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002597F8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002597FEu); RECOMP_ABI_CALL(0x00297730u, sub_00297730); /* call 0x00297730 */

loc_002597FE: ;
    esp = esp + 8;
    MEM32(0x5BDD68) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0025980Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025980F: ;
    eax = MEM32(0x5BDED8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00259868; /* jne: not equal / not zero */

loc_00259818: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00259824u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00259824: ;
    esi = eax;
    eax = MEM32(0x5BDED8);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0025984A; /* je: equal / zero */

loc_00259834: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025984A; /* jne: not equal / not zero */

loc_00259845: ;
    PUSH32(esp, 0x0025984Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025984A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00259850u); RECOMP_ABI_CALL(0x00297AC0u, sub_00297AC0); /* call 0x00297AC0 */

loc_00259850: ;
    esp = esp + 4;
    MEM32(0x5BDED8) = eax;
    edx = MEM32(eax);
    POP32(esp, esi);
    MEM32(esp + 4) = 0;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x78)); return; /* indirect tail jmp */

loc_00259868: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00259870
 * Original: 0x00259870 - 0x002599C4 (340 bytes, 120 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00259870(void)
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

loc_00259870: ;
    esp = esp - 0xC;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx + 8)); /* fld float */
    MEM32(esp) = eax;
    fp_push(MEMF(esp)); /* fld float */
    edx = edx | 0xFFFFFFFFu;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002598A1; /* jp: parity */

loc_00259895: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */

loc_002598A1: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002598BA; /* jp: parity */

loc_002598B0: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */

loc_002598BA: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002598CD; /* jp: parity */

loc_002598C7: ;
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */

loc_002598CD: ;
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), g_fp_stack[(g_fp_top + 2) & 7]); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(2) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025991E; /* jne: not equal / not zero */

loc_002598D9: ;
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025991E; /* jne: not equal / not zero */

loc_002598E5: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00259900; /* jp: parity */

loc_002598F8: ;
    edx = 0; /* xor self */
    eax = edx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00259900: ;
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002599BE; /* jne: not equal / not zero */

loc_00259913: ;
    edx = 1;
    eax = edx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0025991E: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025996F; /* jne: not equal / not zero */

loc_0025992A: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025996F; /* jne: not equal / not zero */

loc_00259935: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00259954; /* jp: parity */

loc_00259949: ;
    edx = 2;
    eax = edx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00259954: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002599BE; /* jne: not equal / not zero */

loc_00259964: ;
    edx = 3;
    eax = edx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0025996F: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002599BA; /* jne: not equal / not zero */

loc_00259979: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002599BE; /* jne: not equal / not zero */

loc_00259984: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0025999F; /* jp: parity */

loc_00259994: ;
    edx = 4;
    eax = edx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0025999F: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002599BE; /* jne: not equal / not zero */

loc_002599AF: ;
    edx = 5;
    eax = edx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_002599BA: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */

loc_002599BE: ;
    eax = edx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002599D0
 * Original: 0x002599D0 - 0x00259A3F (111 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002599D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002599D0: ;
    eax = MEM32(0x5BDD70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_00259A3D; /* jne: not equal / not zero */

loc_002599DA: ;
    eax = MEM32(0x46A67C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002599E5u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002599E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002599EBu); RECOMP_ABI_CALL(0x0021C680u, sub_0021C680); /* call 0x0021C680 */

loc_002599EB: ;
    esp = esp + 4;
    esi = eax;
    ecx = esp;
    PUSH32(esp, 0x40165C);
    MEM32(0x5BDD70) = esi;
    PUSH32(esp, 0x00259A02u); RECOMP_ABI_CALL(0x001A42F0u, sub_001A42F0); /* call 0x001A42F0 */

loc_00259A02: ;
    ecx = esi;
    PUSH32(esp, 0x00259A09u); RECOMP_ABI_CALL(0x00216A70u, sub_00216A70); /* call 0x00216A70 */

loc_00259A09: ;
    MEM8(esi + 0x34) = 1;
    MEM8(esi + 0x26) = 0;
    PUSH32(esp, 0x00259A16u); RECOMP_ABI_CALL(0x00296D00u, sub_00296D00); /* call 0x00296D00 */

loc_00259A16: ;
    MEM32(esi + 0x38) = eax;
    ecx = MEM32(0x5BDA90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00259A25u); RECOMP_ABI_CALL(0x00209610u, sub_00209610); /* call 0x00209610 */

loc_00259A25: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00259A3D; /* jne: not equal / not zero */

loc_00259A35: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00259A3D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00259A40
 * Original: 0x00259A40 - 0x00259A95 (85 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259A40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259A40: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00259A8F; /* jbe: below or equal (unsigned <=) */

loc_00259A4F: ;
    PUSH32(esp, esi);

loc_00259A50: ;
    eax = MEM32(ebx + 0x10);
    esi = MEM32(eax + edi * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259A89; /* je: equal / zero */

loc_00259A5A: ;
    ecx = MEM32(0x5BE600);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00259A68u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00259A68: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259A89; /* je: equal / zero */

loc_00259A6C: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00259A74u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259A74: ;
    eax = MEM32(eax);
    eax = eax >> 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00259A89; /* jne: not equal / not zero */

loc_00259A7D: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00259A89u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259A89: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00259A50; /* jb: below (unsigned <) */

loc_00259A8E: ;
    POP32(esp, esi);

loc_00259A8F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00259AA0
 * Original: 0x00259AA0 - 0x00259ADF (63 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259AA0: ;
    ecx = MEM32(ecx + 0x20);
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00259ADE; /* jbe: below or equal (unsigned <=) */

loc_00259AAC: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    PUSH32(esp, edi);
    edi = edx;

loc_00259AB3: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259AC2; /* jne: not equal / not zero */

loc_00259ABD: ;
    eax = eax + MEM32(ecx + 0x18);
    goto loc_00259AD6;

loc_00259AC2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259AD6; /* jne: not equal / not zero */

loc_00259AC7: ;
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 0xC);
    edx = edx << 1;
    ecx = ecx - edx;
    eax = eax + ecx;

loc_00259AD6: ;
    esi = esi + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00259AB3; /* jne: not equal / not zero */

loc_00259ADC: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00259ADE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00259AE0
 * Original: 0x00259AE0 - 0x00259B1D (61 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259AE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259AE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x20);
    ebx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00259B04; /* jbe: below or equal (unsigned <=) */

loc_00259AF1: ;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + esi * 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x00259AFFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259AFF: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00259AF1; /* jb: below (unsigned <) */

loc_00259B04: ;
    ecx = MEM32(0x5BDD70);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edi + edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00259B1C; /* je: equal / zero */

loc_00259B17: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x68)); return; /* indirect tail jmp */

loc_00259B1C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00259B20
 * Original: 0x00259B20 - 0x00259B77 (87 bytes, 42 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259B20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259B20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x20);
    ebx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00259B71; /* jbe: below or equal (unsigned <=) */

loc_00259B31: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);

loc_00259B36: ;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259B6B; /* je: equal / zero */

loc_00259B43: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259B6B; /* je: equal / zero */

loc_00259B4A: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    edx = MEM32(ecx + 0x14);
    if (TEST_Z(_fa, _fb)) goto loc_00259B5B; /* je: equal / zero */

loc_00259B55: ;
    edx = edx | ebp;
    eax = edx;
    goto loc_00259B65;

loc_00259B5B: ;
    eax = ebp;
    eax = ~eax;
    eax = eax & edx;
    eax = ~eax;
    eax = eax & edx;

loc_00259B65: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00259B6Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259B6B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00259B36; /* jb: below (unsigned <) */

loc_00259B70: ;
    POP32(esp, ebp);

loc_00259B71: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00259B80
 * Original: 0x00259B80 - 0x00259BC8 (72 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259B80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 8);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00259B94u); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_00259B94: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00259BAF; /* jle: less or equal (signed <=) */

loc_00259B9D: ;
    /* nop */

loc_00259BA0: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00259BA0; /* jl: less (signed <) */

loc_00259BAF: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 8) = 0;
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00259BC3u); RECOMP_ABI_CALL(0x002098A0u, sub_002098A0); /* call 0x002098A0 */

loc_00259BC3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00259BD0
 * Original: 0x00259BD0 - 0x00259BDE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259BD0(void)
{

loc_00259BD0: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 4 + -4);
    esp += 4; return; /* ret */

}

/**
 * sub_00259BE0
 * Original: 0x00259BE0 - 0x00259C91 (177 bytes, 68 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259BE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259BE0: ;
    PUSH32(esp, ecx);
    MEM32(esp) = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00259BEEu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00259BEE: ;
    eax = MEM32(esp + 0xC);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00259C8C; /* jle: less or equal (signed <=) */

loc_00259BFC: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    goto loc_00259C10;

    /* nop */

loc_00259C10: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx + 0x10);
    esi = MEM32(edx + ebp * 4);
    eax = MEM32(0x5BD8C8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00259C2Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259C2A: ;
    ecx = eax;
    PUSH32(esp, 0x00259C31u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_00259C31: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259C57; /* je: equal / zero */

loc_00259C35: ;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00259C80; /* jne: not equal / not zero */

loc_00259C3C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x00259C48u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259C48: ;
    ecx = MEM32(esp + 0x1C);
    esi = esi + 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00259C55u); RECOMP_ABI_CALL(0x00242660u, sub_00242660); /* call 0x00242660 */

loc_00259C55: ;
    goto loc_00259C80;

loc_00259C57: ;
    ecx = MEM32(0x5BD8D0);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00259C65u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259C65: ;
    ecx = eax;
    PUSH32(esp, 0x00259C6Cu); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_00259C6C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259C80; /* je: equal / zero */

loc_00259C70: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x00259C7Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259C7C: ;
    edi = eax;
    ebx = edx;

loc_00259C80: ;
    eax = MEM32(esp + 0x18);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00259C10; /* jl: less (signed <) */

loc_00259C89: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00259C8C: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00259CA0
 * Original: 0x00259CA0 - 0x00259CBE (30 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259CA0(void)
{

loc_00259CA0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 8);
    PUSH32(esp, eax);
    eax = MEM32(edx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00259CBBu); RECOMP_ABI_CALL(0x00259BE0u, sub_00259BE0); /* call 0x00259BE0 */

loc_00259CBB: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00259CC0
 * Original: 0x00259CC0 - 0x00259CEF (47 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259CC0: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00259CCD; /* je: equal / zero */

loc_00259CC8: ;
    esi = MEM32(eax + 8);
    goto loc_00259CCF;

loc_00259CCD: ;
    esi = 0; /* xor self */

loc_00259CCF: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00259CDDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259CDD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259CE8; /* je: equal / zero */

loc_00259CE1: ;
    eax = esi + 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00259CE8: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00259CF0
 * Original: 0x00259CF0 - 0x00259D31 (65 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259CF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259CF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259D01; /* je: equal / zero */

loc_00259CFC: ;
    ebx = MEM32(eax + 8);
    goto loc_00259D03;

loc_00259D01: ;
    ebx = 0; /* xor self */

loc_00259D03: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00259D27; /* jbe: below or equal (unsigned <=) */

loc_00259D09: ;
    /* nop */

loc_00259D10: ;
    eax = MEM32(edi + 0x1C);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00259D22u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259D22: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00259D10; /* jb: below (unsigned <) */

loc_00259D27: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

}

/**
 * sub_00259D40
 * Original: 0x00259D40 - 0x00259DD5 (149 bytes, 67 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00259D40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259D40: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x00259D49u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259D49: ;
    ebp = MEM32(0x46D9C4);
    edx = MEM32(esp + 0xC);
    eax = ~eax;
    ecx = eax;
    ecx = ecx & ebp;
    edx = edx & ecx;
    MEM32(esp + 0xC) = edx;
    if ((edx == 0)) goto loc_00259DD0; /* je: equal / zero */

loc_00259D61: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1C);
    ecx = 0; /* xor self */
    edx = 0; /* xor self */
    PUSH32(esp, ebx);
    /* nop */

loc_00259D70: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259D79; /* je: equal / zero */

loc_00259D74: ;
    ebx = MEM32(edi + 8);
    goto loc_00259D7B;

loc_00259D79: ;
    ebx = 0; /* xor self */

loc_00259D7B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00259D8B; /* jge: greater or equal (signed >=) */

loc_00259D7F: ;
    ebx = MEM32(edi + 0x10);
    ebx = MEM32(ebx + edx * 4);
    ecx = ecx | MEM32(ebx + 0x14);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00259D70;

loc_00259D8B: ;
    ecx = ~ecx;
    ecx = ecx & eax;
    eax = MEM32(esp + 0x14);
    ecx = ecx & ebp;
    ecx = ecx & eax;
    ebx = ecx;
    if ((ecx == 0)) goto loc_00259DCE; /* je: equal / zero */

loc_00259D9B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00259DA5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259DA5: ;
    eax = MEM32(esi);
    ecx = esi;
    edi = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00259DAEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259DAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00259DCE; /* jle: less or equal (signed <=) */

loc_00259DB2: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00259DBAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259DBA: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x00259DC2u); RECOMP_ABI_CALL(0x00259D40u, sub_00259D40); /* call 0x00259D40 */

loc_00259DC2: ;
    eax = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00259DCAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259DCA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00259DB2; /* jl: less (signed <) */

loc_00259DCE: ;
    POP32(esp, ebx);
    POP32(esp, edi);

loc_00259DD0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00259DE0
 * Original: 0x00259DE0 - 0x00259E2A (74 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259DE0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00259DE8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259DE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00259DF1; /* jle: less or equal (signed <=) */

loc_00259DED: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00259DF1: ;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00259DFE; /* je: equal / zero */

loc_00259DF9: ;
    ebx = MEM32(eax + 8);
    goto loc_00259E00;

loc_00259DFE: ;
    ebx = 0; /* xor self */

loc_00259E00: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00259E1E; /* jbe: below or equal (unsigned <=) */

loc_00259E07: ;
    ecx = MEM32(edi + 0x1C);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + esi * 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00259E15u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259E15: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259E24; /* je: equal / zero */

loc_00259E19: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00259E07; /* jb: below (unsigned <) */

loc_00259E1E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00259E24: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00259E30
 * Original: 0x00259E30 - 0x00259E6B (59 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259E30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259E30: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00259E41; /* je: equal / zero */

loc_00259E3C: ;
    edi = MEM32(eax + 8);
    goto loc_00259E43;

loc_00259E41: ;
    edi = 0; /* xor self */

loc_00259E43: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00259E65; /* jbe: below or equal (unsigned <=) */

loc_00259E49: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    edi = edi;

loc_00259E50: ;
    eax = MEM32(ebx + 0x1C);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00259E5Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259E5F: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00259E50; /* jb: below (unsigned <) */

loc_00259E64: ;
    POP32(esp, ebp);

loc_00259E65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00259E70
 * Original: 0x00259E70 - 0x00259E89 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259E70(void)
{

loc_00259E70: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(esp + 8);
    eax = MEM32(edx);
    ecx = MEM32(ecx + 8);
    eax = MEM32(eax + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00259E88u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259E88: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00259E90
 * Original: 0x00259E90 - 0x00259FC1 (305 bytes, 118 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259E90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259E90: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00259FB2; /* jle: less or equal (signed <=) */

loc_00259EAA: ;
    /* nop */

loc_00259EB0: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax + 0x10);
    ebx = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    ebp = MEM32(edx + edi * 4);
    if (TEST_Z(_fa, _fb)) goto loc_00259ED5; /* je: equal / zero */

loc_00259EC8: ;
    ecx = MEM32(ebx + -4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + -4) = ecx;
    MEM32(ebx + -4) = eax;

loc_00259ED5: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00259EF5; /* jle: less or equal (signed <=) */

loc_00259EE2: ;
    ecx = MEM32(ecx + 0x10);

loc_00259EE5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259FBA; /* je: equal / zero */

loc_00259EED: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00259EE5; /* jl: less (signed <) */

loc_00259EF5: ;
    esi = esi | 0xFFFFFFFFu;

loc_00259EF8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259F10; /* je: equal / zero */

loc_00259EFC: ;
    ecx = MEM32(ebx + -4);
    eax = ebx + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00259F10; /* jne: not equal / not zero */

loc_00259F08: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00259F10u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00259F10: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259F86; /* je: equal / zero */

loc_00259F15: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(edx + 0x10);
    edi = MEM32(eax + esi * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259F26; /* je: equal / zero */

loc_00259F23: ;
    MEM32(edi + -4) = MEM32(edi + -4) + 1;
    _fa = (uint32_t)(MEM32(edi + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00259F26: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00259F30u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00259F30: ;
    ecx = eax;
    PUSH32(esp, 0x00259F37u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_00259F37: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259F6A; /* je: equal / zero */

loc_00259F3D: ;
    eax = MEM32(0x5BC248);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00259F4Au); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00259F4A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259F6A; /* je: equal / zero */

loc_00259F4E: ;
    eax = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00259F59u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00259F59: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259F6A; /* je: equal / zero */

loc_00259F5D: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00259F6Au); RECOMP_ABI_CALL(0x00209EC0u, sub_00209EC0); /* call 0x00209EC0 */

loc_00259F6A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259F82; /* je: equal / zero */

loc_00259F6E: ;
    ecx = MEM32(edi + -4);
    eax = edi + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00259F82; /* jne: not equal / not zero */

loc_00259F7A: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00259F82u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00259F82: ;
    edi = MEM32(esp + 0x10);

loc_00259F86: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259F9E; /* je: equal / zero */

loc_00259F8A: ;
    ecx = MEM32(ebx + -4);
    eax = ebx + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00259F9E; /* jne: not equal / not zero */

loc_00259F96: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00259F9Eu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00259F9E: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00259EB0; /* jl: less (signed <) */

loc_00259FB2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

loc_00259FBA: ;
    esi = eax;
    goto loc_00259EF8;

}

/**
 * sub_00259FD0
 * Original: 0x00259FD0 - 0x0025A0F3 (291 bytes, 108 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259FD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259FD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00259FD8u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00259FD8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00259FDEu); RECOMP_ABI_CALL(0x0022A440u, sub_0022A440); /* call 0x0022A440 */

loc_00259FDE: ;
    ebp = MEM32(esp + 0x18);
    esp = esp + 4;
    ecx = ebp;
    edi = eax;
    ebx = 0; /* xor self */
    PUSH32(esp, 0x00259FF0u); RECOMP_ABI_CALL(0x001F8310u, sub_001F8310); /* call 0x001F8310 */

loc_00259FF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0025A0D2; /* jle: less or equal (signed <=) */

loc_00259FF8: ;
    PUSH32(esp, esi);
    /* nop */

loc_0025A000: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0025A008u); RECOMP_ABI_CALL(0x001F81E0u, sub_001F81E0); /* call 0x001F81E0 */

loc_0025A008: ;
    esi = eax;
    PUSH32(esp, 0x0025A00Fu); RECOMP_ABI_CALL(0x001A6C40u, sub_001A6C40); /* call 0x001A6C40 */

loc_0025A00F: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025A017u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0025A017: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025A045; /* je: equal / zero */

loc_0025A01B: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0x3CB224);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0025A02Bu); RECOMP_ABI_CALL(0x0020A320u, sub_0020A320); /* call 0x0020A320 */

loc_0025A02B: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025A037; /* jne: not equal / not zero */

loc_0025A032: ;
    eax = MEM32(0x46A3C8);

loc_0025A037: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0025A040u); RECOMP_ABI_CALL(0x001F81F0u, sub_001F81F0); /* call 0x001F81F0 */

loc_0025A040: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    goto loc_0025A0B8;

loc_0025A045: ;
    PUSH32(esp, 0x0025A04Au); RECOMP_ABI_CALL(0x001A6CD0u, sub_001A6CD0); /* call 0x001A6CD0 */

loc_0025A04A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025A052u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0025A052: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025A080; /* je: equal / zero */

loc_0025A056: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x3C8448);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0025A066u); RECOMP_ABI_CALL(0x0020A340u, sub_0020A340); /* call 0x0020A340 */

loc_0025A066: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025A072; /* jne: not equal / not zero */

loc_0025A06D: ;
    eax = MEM32(0x46A3C8);

loc_0025A072: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0025A07Bu); RECOMP_ABI_CALL(0x001F81F0u, sub_001F81F0); /* call 0x001F81F0 */

loc_0025A07B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xB);
    goto loc_0025A0B8;

loc_0025A080: ;
    PUSH32(esp, 0x0025A085u); RECOMP_ABI_CALL(0x001A6F40u, sub_001A6F40); /* call 0x001A6F40 */

loc_0025A085: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025A08Du); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0025A08D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025A0C1; /* je: equal / zero */

loc_0025A091: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 8));
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025A0A0u); RECOMP_ABI_CALL(0x00204680u, sub_00204680); /* call 0x00204680 */

loc_0025A0A0: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025A0AC; /* jne: not equal / not zero */

loc_0025A0A7: ;
    eax = MEM32(0x46A3C8);

loc_0025A0AC: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0025A0B5u); RECOMP_ABI_CALL(0x001F81F0u, sub_001F81F0); /* call 0x001F81F0 */

loc_0025A0B5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);

loc_0025A0B8: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x0025A0C1u); RECOMP_ABI_CALL(0x00220A00u, sub_00220A00); /* call 0x00220A00 */

loc_0025A0C1: ;
    ecx = ebp;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0025A0C9u); RECOMP_ABI_CALL(0x001F8310u, sub_001F8310); /* call 0x001F8310 */

loc_0025A0C9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025A000; /* jl: less (signed <) */

loc_0025A0D1: ;
    POP32(esp, esi);

loc_0025A0D2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025A0ED; /* je: equal / zero */

loc_0025A0D6: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025A0ED; /* jne: not equal / not zero */

loc_0025A0E6: ;
    ecx = edi;
    PUSH32(esp, 0x0025A0EDu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025A0ED: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025A100
 * Original: 0x0025A100 - 0x0025A108 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A100(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025A100: ;
    ecx = MEM32(ecx + 0x38);
    g_seh_ebp = ebp; sub_0020EA00(); return; /* tail jmp 0x0020EA00 */

}

/**
 * sub_0025A110
 * Original: 0x0025A110 - 0x0025A144 (52 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A110: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x20);
    esi = ecx;
    ecx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0025A128u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025A128: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A134; /* jne: not equal / not zero */

loc_0025A12D: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0025A134: ;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0025A13Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025A13D: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025A150
 * Original: 0x0025A150 - 0x0025A4AA (858 bytes, 247 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A150(void)
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

loc_0025A150: ;
    esp = esp - 0x1EC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0x98);
    SET_LO8(eax, MEM8(ebx + 0x79));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0025A16D; /* je: equal / zero */

loc_0025A168: ;
    edi = MEM32(ebx + 0x24);
    goto loc_0025A177;

loc_0025A16D: ;
    ecx = MEM32(ebx + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0025A175u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025A175: ;
    edi = eax;

loc_0025A177: ;
    edx = MEM32(esi + 0x90);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    ecx = ecx << 6;
    ecx = ecx + edi;
    PUSH32(esp, 0x0025A18Eu); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_0025A18E: ;
    ecx = MEM32(esi + 0x90);
    ecx = MEM32(ecx + 4);
    eax = esp + 0x40;
    ecx = ecx << 6;
    PUSH32(esp, eax);
    ecx = ecx + edi;
    PUSH32(esp, 0x0025A1A6u); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_0025A1A6: ;
    eax = MEM32(esi + 0x90);
    ecx = MEM32(eax + 8);
    edx = esp + 0x28;
    ecx = ecx << 6;
    PUSH32(esp, edx);
    ecx = ecx + edi;
    PUSH32(esp, 0x0025A1BEu); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_0025A1BE: ;
    eax = MEM32(esi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025A225; /* je: equal / zero */

loc_0025A1C8: ;
    edx = MEM32(0x5BCF20);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 8);
    ecx = ecx + eax;
    PUSH32(esp, 0x0025A1DDu); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_0025A1DD: ;
    eax = ebx + 0xBC;
    PUSH32(esp, eax);
    ebx = ebx + 0x7C;
    PUSH32(esp, ebx);
    ecx = esp + 0x140;
    PUSH32(esp, 0x0025A1F4u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0025A1F4: ;
    ecx = esp + 0x138;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0xC0;
    PUSH32(esp, 0x0025A20Du); RECOMP_ABI_CALL(0x00244690u, sub_00244690); /* call 0x00244690 */

loc_0025A20D: ;
    PUSH32(esp, 1);
    eax = esp + 0x20;
    ecx = eax;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0xC4;
    PUSH32(esp, 0x0025A223u); RECOMP_ABI_CALL(0x0023EF60u, sub_0023EF60); /* call 0x0023EF60 */

loc_0025A223: ;
    goto loc_0025A249;

loc_0025A225: ;
    ecx = MEM32(esi + 0xA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A23C; /* je: equal / zero */

loc_0025A230: ;
    edx = esp + 0x1C;
    ecx = ecx << 6;
    PUSH32(esp, edx);
    ecx = ecx + edi;
    goto loc_0025A244;

loc_0025A23C: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi + 0x40;

loc_0025A244: ;
    PUSH32(esp, 0x0025A249u); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_0025A249: ;
    ecx = MEM32(esi + 0x94);
    edx = MEM32(ecx);
    edx = edx << 6;
    edx = edx + edi;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x100;
    PUSH32(esp, 0x0025A268u); RECOMP_ABI_CALL(0x00242F50u, sub_00242F50); /* call 0x00242F50 */

loc_0025A268: ;
    ecx = esp + 0xF8;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x0025A27Eu); RECOMP_ABI_CALL(0x0023FCF0u, sub_0023FCF0); /* call 0x0023FCF0 */

loc_0025A27E: ;
    eax = esp + 0xF8;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = esp + 0x48;
    PUSH32(esp, 0x0025A294u); RECOMP_ABI_CALL(0x0023FCF0u, sub_0023FCF0); /* call 0x0023FCF0 */

loc_0025A294: ;
    edx = esp + 0xF8;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, 0x0025A2AAu); RECOMP_ABI_CALL(0x0023FCF0u, sub_0023FCF0); /* call 0x0023FCF0 */

loc_0025A2AA: ;
    ecx = esp + 0xF8;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0025A2C0u); RECOMP_ABI_CALL(0x0023FCF0u, sub_0023FCF0); /* call 0x0023FCF0 */

loc_0025A2C0: ;
    eax = MEM32(esi);
    ecx = esp + 0xA8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x80);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esi + 0xA4;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0025A2F6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025A2F6: ;
    eax = MEM32(esi + 0x8C);
    PUSH32(esp, eax);
    ecx = esp + 0x17C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025A30Au); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0025A30A: ;
    esp = esp + 8;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esp + 0x17C;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0025A336u); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_0025A336: ;
    eax = esp + 0x178;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C0;
    PUSH32(esp, 0x0025A34Fu); RECOMP_ABI_CALL(0x00244690u, sub_00244690); /* call 0x00244690 */

loc_0025A34F: ;
    edi = MEM32(esi + 0x88);
    ecx = esp + 0x68;
    PUSH32(esp, 0x0025A35Eu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0025A35E: ;
    edx = esp + 0x68;
    PUSH32(esp, edx);
    ecx = esp + 0x5C;
    PUSH32(esp, 0x0025A36Cu); RECOMP_ABI_CALL(0x0023F4A0u, sub_0023F4A0); /* call 0x0023F4A0 */

loc_0025A36C: ;
    eax = esp + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = edi;
    PUSH32(esp, 0x0025A379u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0025A379: ;
    edi = MEM32(esi + 0x88);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    ecx = esp + 0xAC;
    edi = edi + 0x40;
    PUSH32(esp, 0x0025A393u); RECOMP_ABI_CALL(0x0023F4A0u, sub_0023F4A0); /* call 0x0023F4A0 */

loc_0025A393: ;
    edx = esp + 0x178;
    PUSH32(esp, edx);
    ecx = esp + 0x6C;
    PUSH32(esp, 0x0025A3A4u); RECOMP_ABI_CALL(0x00242660u, sub_00242660); /* call 0x00242660 */

loc_0025A3A4: ;
    eax = esp + 0x1B8;
    PUSH32(esp, eax);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025A3B6u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0025A3B6: ;
    edx = esp + 0x68;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = edi;
    PUSH32(esp, 0x0025A3C3u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0025A3C3: ;
    eax = MEM32(esi);
    ecx = esi;
    ebx = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0025A3CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025A3CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0025A4A0; /* jbe: below or equal (unsigned <=) */

loc_0025A3D4: ;
    edi = 0; /* xor self */
    goto loc_0025A3E0;

    /* nop */
    /* nop */

loc_0025A3E0: ;
    ecx = esp + 0xB8;
    PUSH32(esp, 0x0025A3ECu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0025A3EC: ;
    ecx = MEM32(esi + 0x84);
    ecx = ecx + edi;
    PUSH32(esp, ecx);
    edx = esp + 0x13C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025A402u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0025A402: ;
    ecx = MEM32(esi + 0x84);
    esp = esp + 8;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ecx + edi;
    PUSH32(esp, 0x0025A417u); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_0025A417: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    ecx = esp + 0x4C;
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    ecx = esp + 0x13C;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0025A446u); RECOMP_ABI_CALL(0x0023E4A0u, sub_0023E4A0); /* call 0x0023E4A0 */

loc_0025A446: ;
    edx = MEM32(esi + 0x88);
    edx = edx + edi;
    PUSH32(esp, edx);
    eax = esp + 0x13C;
    PUSH32(esp, eax);
    ecx = esp + 0xC0;
    PUSH32(esp, 0x0025A463u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0025A463: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esp + 0xBC;
    PUSH32(esp, 0x0025A474u); RECOMP_ABI_CALL(0x0023E4A0u, sub_0023E4A0); /* call 0x0023E4A0 */

loc_0025A474: ;
    eax = MEM32(esi + 0x8C);
    edx = esp + 0xB8;
    PUSH32(esp, edx);
    eax = eax + edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025A48Au); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0025A48A: ;
    edx = MEM32(esi);
    esp = esp + 8;
    ecx = esi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0x40;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0025A498u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025A498: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025A3E0; /* jb: below (unsigned <) */

loc_0025A4A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x1EC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0025A4B0
 * Original: 0x0025A4B0 - 0x0025A54C (156 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A4B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0025A4B0: ;
    esp = esp - 0x98;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0025A4C3u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0025A4C3: ;
    edi = esi + 0xB0;
    eax = esp + 0x60;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025A4D4u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0025A4D4: ;
    esp = esp + 8;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0025A4E3u); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_0025A4E3: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    edx = esp + 0x14;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = esp + 0x64;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0025A50Fu); RECOMP_ABI_CALL(0x0023E4A0u, sub_0023E4A0); /* call 0x0023E4A0 */

loc_0025A50F: ;
    eax = esi + 0xF0;
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0025A524u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0025A524: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0025A532u); RECOMP_ABI_CALL(0x0023E4A0u, sub_0023E4A0); /* call 0x0023E4A0 */

loc_0025A532: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    esi = esi + 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025A540u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0025A540: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x98;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0025A550
 * Original: 0x0025A550 - 0x0025A60B (187 bytes, 64 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0025A550(void)
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

loc_0025A550: ;
    ecx = MEM32(esp + 8);
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
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3E2070)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3e2070] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0025A59D; /* jp: parity */

loc_0025A587: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = 0x3F800000;
    esp += 4; return; /* ret */

loc_0025A59D: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = sin(fp_top()); /* fsin */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025A5CA; /* jne: not equal / not zero */

loc_0025A5BE: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3C6E40); /* fsub dword ptr [0x3c6e40] */
    goto loc_0025A5D4;

loc_0025A5CA: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 8); /* fsub dword ptr [esp + 8] */

loc_0025A5D4: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3E2070)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3e2070] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0025A5E9; /* jnp: not parity */

loc_0025A5E1: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */

loc_0025A5E9: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 4)); /* fld float */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0025A610
 * Original: 0x0025A610 - 0x0025A7B1 (417 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A610(void)
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

loc_0025A610: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    fp_push(MEMF(edi + 8)); /* fld float */
    esi = MEM32(esp + 0x20);
    fp_push(MEMF(edi + 4)); /* fld float */
    edx = MEM32(esi);
    fp_push(MEMF(edi)); /* fld float */
    ecx = MEM32(esi + 4);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = MEM32(esi + 8);
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEM32(esp + 0x24) = edx;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEM32(esp + 0x20) = ecx;
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    MEM32(esp + 8) = eax;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3E2070)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3e2070] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025A794; /* jne: not equal / not zero */

loc_0025A68A: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(edi + 8); /* fmul dword ptr [edi + 8] */
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = fp_top() * MEMF(edi); /* fmul dword ptr [edi] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 4); /* fmul dword ptr [esi + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C7B8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c7b8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0025A6C1; /* jp: parity */

loc_0025A6B7: ;
    MEM32(esp + 0x20) = 0xBF800000u;
    goto loc_0025A6E4;

loc_0025A6C1: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025A6DC; /* jne: not equal / not zero */

loc_0025A6D2: ;
    MEM32(esp + 0x20) = 0x3F800000;
    goto loc_0025A6E4;

loc_0025A6DC: ;
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x20) = eax;

loc_0025A6E4: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025A6EEu); RECOMP_ABI_CALL(0x001AA4B0u, sub_001AA4B0); /* call 0x001AA4B0 */

loc_0025A6EE: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0025A700u); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_0025A700: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0025A775; /* jp: parity */

loc_0025A711: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3E2070)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3e2070] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0025A775; /* jp: parity */

loc_0025A73C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025A742u); RECOMP_ABI_CALL(0x0024DE60u, sub_0024DE60); /* call 0x0024DE60 */

loc_0025A742: ;
    ecx = eax;
    eax = ecx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    esp = esp + 4;
    edx = edx << 2;
    fp_push(MEMF(edx + esi)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + ecx * 4 + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + ecx * 4);
    MEM32(esp + edx + 0xC) = eax;
    eax = ecx + 2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = edi;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esp + edx * 4 + 0xC) = 0;

loc_0025A775: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025A789u); RECOMP_ABI_CALL(0x0025A550u, sub_0025A550); /* call 0x0025A550 */

loc_0025A789: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    eax = edx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0025A794: ;
    eax = MEM32(esp + 0x1C);
    fp_pop(); /* fstp st(0) */
    ecx = 0; /* xor self */
    POP32(esp, edi);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = 0x3F800000;
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
 * sub_0025A7C0
 * Original: 0x0025A7C0 - 0x0025A87F (191 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0025A7C0(void)
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

loc_0025A7C0: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_stack[(g_fp_top + 4) & 7] = fp_top(); fp_pop(); /* fstp st(4) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6e40] */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025A865; /* jne: not equal / not zero */

loc_0025A861: ;
    fp_top() = fp_st1() - fp_top(); /* fsubr st(1) */
    goto loc_0025A867;

loc_0025A865: ;
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */

loc_0025A867: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3E2070)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3e2070] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0025A87C; /* jp: parity */

loc_0025A876: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0025A87C: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0025A880
 * Original: 0x0025A880 - 0x0025A8FA (122 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A880: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x20);
    PUSH32(esp, esi);
    MEM32(eax + 8) = 0;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x20);
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025A8A2; /* jge: greater or equal (signed >=) */

loc_0025A89A: ;
    ecx = esi + 1;
    MEM32(edi + 8) = ecx;
    goto loc_0025A8AF;

loc_0025A8A2: ;
    PUSH32(esp, 0x40);
    edx = esi + 1;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0025A8AFu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0025A8AF: ;
    edx = MEM32(edi + 0x10);
    esi = esi << 6;
    esi = esi + edx;
    PUSH32(esp, 0x46D0A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025A8C2u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0025A8C2: ;
    esi = MEM32(ebx + 0x24);
    eax = MEM32(esi + 8);
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0025A8D5u); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_0025A8D5: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0025A8EF; /* jle: less or equal (signed <=) */

loc_0025A8DE: ;
    edi = edi;

loc_0025A8E0: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025A8E0; /* jl: less (signed <) */

loc_0025A8EF: ;
    POP32(esp, edi);
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025A900
 * Original: 0x0025A900 - 0x0025A933 (51 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A900: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0025A90Eu); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_0025A90E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025A92E; /* jne: not equal / not zero */

loc_0025A912: ;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x70); PUSH32(esp, 0x0025A91Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025A91C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x6C); PUSH32(esp, 0x0025A922u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025A922: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x0025A92Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025A92D: ;
    POP32(esp, edi);

loc_0025A92E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025A940
 * Original: 0x0025A940 - 0x0025A968 (40 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A940: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x1C);
    ebx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0025A964; /* jbe: below or equal (unsigned <=) */

loc_0025A951: ;
    ecx = MEM32(edi + 0x1C);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + esi * 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0025A95Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025A95F: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025A951; /* jb: below (unsigned <) */

loc_0025A964: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025A970
 * Original: 0x0025A970 - 0x0025A9F5 (133 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A970(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025A970: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_BE(_fa & _fb, 0)) goto loc_0025A9ED; /* jbe: below or equal (unsigned <=) */

loc_0025A987: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    /* nop */

loc_0025A990: ;
    ecx = MEM32(ebp + 0x1C);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(0x5BE27C);
    esi = MEM32(edx + edi * 4);
    ecx = MEM32(eax + 8);
    ecx = ecx + esi;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0025A9AEu); RECOMP_ABI_CALL(0x0023FCF0u, sub_0023FCF0); /* call 0x0023FCF0 */

loc_0025A9AE: ;
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0025A9BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025A9BD: ;
    ecx = MEM32(0x5BE4C8);
    edx = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    edx = edx + esi;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0025A9D3u); RECOMP_ABI_CALL(0x0023FC90u, sub_0023FC90); /* call 0x0023FC90 */

loc_0025A9D3: ;
    eax = MEM32(esi);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0025A9E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025A9E2: ;
    eax = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025A990; /* jb: below (unsigned <) */

loc_0025A9EB: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0025A9ED: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025AA00
 * Original: 0x0025AA00 - 0x0025AA28 (40 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025AA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025AA00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x20);
    ebx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0025AA24; /* jbe: below or equal (unsigned <=) */

loc_0025AA11: ;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + esi * 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0025AA1Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025AA1F: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025AA11; /* jb: below (unsigned <) */

loc_0025AA24: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025AA30
 * Original: 0x0025AA30 - 0x0025AA9E (110 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025AA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025AA30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);

loc_0025AA37: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025AA78; /* je: equal / zero */

loc_0025AA3B: ;
    eax = MEM32(0x5BDA28);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0025AA48u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0025AA48: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025AA78; /* je: equal / zero */

loc_0025AA4C: ;
    eax = MEM32(edi + 0x20);
    esi = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0025AA78; /* jle: less or equal (signed <=) */

loc_0025AA58: ;
    edx = MEM32(eax + 0x10);
    goto loc_0025AA60;

    /* nop */

loc_0025AA60: ;
    eax = MEM32(edx);
    SET_LO8(ebx, MEM8(eax + 0x14));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025AA70; /* je: equal / zero */

loc_0025AA69: ;
    ebx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025AA91; /* jne: not equal / not zero */

loc_0025AA70: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025AA60; /* jl: less (signed <) */

loc_0025AA78: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0025AA7Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025AA7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025AA98; /* jl: less (signed <) */

loc_0025AA84: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0025AA8Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025AA8D: ;
    edi = eax;
    goto loc_0025AA37;

loc_0025AA91: ;
    eax = MEM32(eax + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0025AA98: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025AAA0
 * Original: 0x0025AAA0 - 0x0025AABD (29 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025AAA0(void)
{

loc_0025AAA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0025AAAEu); RECOMP_ABI_CALL(0x00259E30u, sub_00259E30); /* call 0x00259E30 */

loc_0025AAAE: ;
    ecx = esi + 0x34;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025AAB8u); RECOMP_ABI_CALL(0x0023FCF0u, sub_0023FCF0); /* call 0x0023FCF0 */

loc_0025AAB8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025AAC0
 * Original: 0x0025AAC0 - 0x0025AACE (14 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0025AAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025AAC0: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025AACB; /* je: equal / zero */

loc_0025AAC7: ;
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

loc_0025AACB: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0025AAD0
 * Original: 0x0025AAD0 - 0x0025AB88 (184 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025AAD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025AAD0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0025AAE3u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0025AAE3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ebx = MEM32(esp + 0x14);
    if (TEST_Z(_fa, _fb)) goto loc_0025AB33; /* je: equal / zero */

loc_0025AAEB: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0025AAF7; /* jne: not equal / not zero */

loc_0025AAF2: ;
    eax = 0x3C806C;

loc_0025AAF7: ;
    esi = ebx;
    /* nop */

loc_0025AB00: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0025AB24; /* jne: not equal / not zero */

loc_0025AB08: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0025AB20; /* je: equal / zero */

loc_0025AB0C: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0025AB24; /* jne: not equal / not zero */

loc_0025AB16: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0025AB00; /* jne: not equal / not zero */

loc_0025AB20: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_0025AB29;

loc_0025AB24: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_0025AB29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0025AB33; /* jne: not equal / not zero */

loc_0025AB2D: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0025AB33: ;
    eax = MEM32(0x5BDA80);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0025AB41u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0025AB41: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0025AB81; /* je: equal / zero */

loc_0025AB45: ;
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0025AB51; /* je: equal / zero */

loc_0025AB4C: ;
    edi = MEM32(eax + 8);
    goto loc_0025AB53;

loc_0025AB51: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */

loc_0025AB53: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0025AB81; /* jbe: below or equal (unsigned <=) */

loc_0025AB59: ;
    /* nop */

loc_0025AB60: ;
    ecx = MEM32(ebp + 0x1C);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(edx + esi * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025AB75u); RECOMP_ABI_CALL(0x0025AAD0u, sub_0025AAD0); /* call 0x0025AAD0 */

loc_0025AB75: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0025AB83; /* jne: not equal / not zero */

loc_0025AB7C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0025AB60; /* jb: below (unsigned <) */

loc_0025AB81: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_0025AB83: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025AB90
 * Original: 0x0025AB90 - 0x0025AC87 (247 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025AB90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025AB90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0025ABC1; /* je: equal / zero */

loc_0025ABA0: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ecx = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_0025ABB7; /* je: equal / zero */

loc_0025ABAA: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0025ABB0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025ABB0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    goto loc_0025ABBD;

loc_0025ABB7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025ABBDu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0025ABBD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0025AC27; /* je: equal / zero */

loc_0025ABC1: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0025AC11; /* je: equal / zero */

loc_0025ABC9: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0025ABD5; /* jne: not equal / not zero */

loc_0025ABD0: ;
    eax = 0x3C806C;

loc_0025ABD5: ;
    esi = eax;
    eax = ecx;
    /* nop */

loc_0025ABE0: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0025AC08; /* jne: not equal / not zero */

loc_0025ABEA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0025AC04; /* je: equal / zero */

loc_0025ABEE: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0025AC08; /* jne: not equal / not zero */

loc_0025ABFA: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0025ABE0; /* jne: not equal / not zero */

loc_0025AC04: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_0025AC0D;

loc_0025AC08: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_0025AC0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0025AC27; /* je: equal / zero */

loc_0025AC11: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0025AC27; /* je: equal / zero */

loc_0025AC15: ;
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0025AC24; /* jne: not equal / not zero */

loc_0025AC1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0025AC24: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0025AC2B;

loc_0025AC27: ;
    edi = MEM32(esp + 0x20);

loc_0025AC2B: ;
    eax = MEM32(0x5BDA80);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0025AC38u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0025AC38: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0025AC80; /* je: equal / zero */

loc_0025AC3C: ;
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0025AC48; /* je: equal / zero */

loc_0025AC43: ;
    ebx = MEM32(eax + 8);
    goto loc_0025AC4A;

loc_0025AC48: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */

loc_0025AC4A: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0025AC80; /* jle: less or equal (signed <=) */

loc_0025AC50: ;
    ecx = MEM32(ebp + 0x1C);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(edx + esi * 4);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025AC6Fu); RECOMP_ABI_CALL(0x0025AB90u, sub_0025AB90); /* call 0x0025AB90 */

loc_0025AC6F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0025AC7B; /* je: equal / zero */

loc_0025AC76: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0025AC82; /* je: equal / zero */

loc_0025AC7A: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0025AC7B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0025AC50; /* jl: less (signed <) */

loc_0025AC80: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_0025AC82: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025AC90
 * Original: 0x0025AC90 - 0x0025ADB9 (297 bytes, 100 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025AC90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025AC90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0025AC9Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025AC9A: ;
    ecx = eax;
    PUSH32(esp, 0x0025ACA1u); RECOMP_ABI_CALL(0x001EA440u, sub_001EA440); /* call 0x001EA440 */

loc_0025ACA1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025ADB1; /* jne: not equal / not zero */

loc_0025ACA9: ;
    eax = MEM32(0x5BDD78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0025ACCA; /* je: equal / zero */

loc_0025ACB4: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025ACCA; /* jne: not equal / not zero */

loc_0025ACC5: ;
    PUSH32(esp, 0x0025ACCAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025ACCA: ;
    eax = MEM32(0x5BDD7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0025ACEB; /* je: equal / zero */

loc_0025ACD5: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025ACEB; /* jne: not equal / not zero */

loc_0025ACE6: ;
    PUSH32(esp, 0x0025ACEBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025ACEB: ;
    eax = MEM32(0x5BDD80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0025AD0C; /* je: equal / zero */

loc_0025ACF6: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025AD0C; /* jne: not equal / not zero */

loc_0025AD07: ;
    PUSH32(esp, 0x0025AD0Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025AD0C: ;
    eax = MEM32(0x5BDD84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0025AD2D; /* je: equal / zero */

loc_0025AD17: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025AD2D; /* jne: not equal / not zero */

loc_0025AD28: ;
    PUSH32(esp, 0x0025AD2Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025AD2D: ;
    eax = MEM32(0x5BDD88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0025AD4E; /* je: equal / zero */

loc_0025AD38: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025AD4E; /* jne: not equal / not zero */

loc_0025AD49: ;
    PUSH32(esp, 0x0025AD4Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025AD4E: ;
    eax = MEM32(0x5BDD90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0025AD6F; /* je: equal / zero */

loc_0025AD59: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025AD6F; /* jne: not equal / not zero */

loc_0025AD6A: ;
    PUSH32(esp, 0x0025AD6Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025AD6F: ;
    eax = MEM32(0x5BDD94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0025AD90; /* je: equal / zero */

loc_0025AD7A: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025AD90; /* jne: not equal / not zero */

loc_0025AD8B: ;
    PUSH32(esp, 0x0025AD90u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025AD90: ;
    eax = MEM32(0x5BDD98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0025ADB1; /* je: equal / zero */

loc_0025AD9B: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025ADB1; /* jne: not equal / not zero */

loc_0025ADAC: ;
    PUSH32(esp, 0x0025ADB1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025ADB1: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00259CF0(); return; /* tail jmp 0x00259CF0 */

}

/**
 * sub_0025ADC0
 * Original: 0x0025ADC0 - 0x0025ADEE (46 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025ADC0(void)
{

loc_0025ADC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025ADD0u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025ADD0: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, 0x0025ADDDu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025ADDD: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x58);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025ADEAu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025ADEA: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0025ADF0
 * Original: 0x0025ADF0 - 0x0025B071 (641 bytes, 169 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025ADF0(void)
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

loc_0025ADF0: ;
    esp = esp - 0xD4;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0025B066; /* jle: less or equal (signed <=) */

loc_0025AE0A: ;
    /* nop */

loc_0025AE10: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + edi * 4);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025AE33; /* jne: not equal / not zero */

loc_0025AE1C: ;
    ecx = MEM32(eax + 0x7C);
    fp_push(MEMF(eax + 0x74)); /* fld float */
    fp_push(MEMF(eax + 0x78)); /* fld float */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = 0x3F800000;
    goto loc_0025AE57;

loc_0025AE33: ;
    fp_push(MEMF(eax + 0x80)); /* fld float */
    MEM32(esp + 0x18) = 0;
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(eax + 0x84)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(eax + 0x88)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_0025AE57: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(esi + 0x34); /* fmul dword ptr [esi + 0x34] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(esi + 0x30); /* fmul dword ptr [esi + 0x30] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x3C); /* fmul dword ptr [esi + 0x3c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(esi + 0x30); /* fmul dword ptr [esi + 0x30] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(esi + 0x34); /* fmul dword ptr [esi + 0x34] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(esi + 0x3C); /* fmul dword ptr [esi + 0x3c] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(esi + 0x30); /* fmul dword ptr [esi + 0x30] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(esi + 0x34); /* fmul dword ptr [esi + 0x34] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esi + 0x3C); /* fmul dword ptr [esi + 0x3c] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x30); /* fmul dword ptr [esi + 0x30] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x34); /* fmul dword ptr [esi + 0x34] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x3C); /* fmul dword ptr [esi + 0x3c] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x30); /* fmul dword ptr [esi + 0x30] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x34); /* fmul dword ptr [esi + 0x34] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x3C); /* fmul dword ptr [esi + 0x3c] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x1C); /* fsub dword ptr [esp + 0x1c] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xC4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0xC4);
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    MEM32(esp + 0x64) = edx;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xC8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0xC8);
    MEM32(esp + 0x68) = eax;
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x30); /* fsub dword ptr [esp + 0x30] */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xD4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    ecx = MEM32(esp + 0xD4);
    fp_top() = -fp_top(); /* fchs */
    MEM32(esp + 0x74) = ecx;
    MEMF(esp + 0xD8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0xD8);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x78) = edx;
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x54); /* fsub dword ptr [esp + 0x54] */
    MEMF(esp + 0xA4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0xA4);
    fp_push(MEMF(esp + 0x44)); /* fld float */
    MEM32(esp + 0x84) = eax;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xA8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0xA8);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x88) = ecx;
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x2C);
    MEMF(esp + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0xB4);
    fp_push(MEMF(esp + 8)); /* fld float */
    MEM32(esp + 0x94) = edx;
    fp_top() = fp_top() - MEMF(esp + 0x48); /* fsub dword ptr [esp + 0x48] */
    MEMF(esp + 0xB8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0xB8);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x98) = eax;
    MEMF(esp + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x90) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 0x5C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0025B057u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B057: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025AE10; /* jl: less (signed <) */

loc_0025B066: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xD4;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0025B080
 * Original: 0x0025B080 - 0x0025B397 (791 bytes, 247 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025B080: ;
    ecx = MEM32(0x5BDDF8);
    eax = MEM32(ecx);
    esp = esp - 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0025B093u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B093: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025B09Fu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0025B09F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025B0A5u); RECOMP_ABI_CALL(0x002A0740u, sub_002A0740); /* call 0x002A0740 */

loc_0025B0A5: ;
    ecx = MEM32(0x5BDDF8);
    edx = MEM32(ecx);
    esp = esp + 8;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0025B0B6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B0B6: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025B0C1u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0025B0C1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025B0C7u); RECOMP_ABI_CALL(0x001E1C50u, sub_001E1C50); /* call 0x001E1C50 */

loc_0025B0C7: ;
    esp = esp + 8;
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0025B0D6u); RECOMP_ABI_CALL(0x0029D060u, sub_0029D060); /* call 0x0029D060 */

loc_0025B0D6: ;
    edx = MEM32(esi);
    ebx = 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0025B0E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B0E3: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x0025B0EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B0EB: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0025B0F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B0F4: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x0025B0FBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B0FB: ;
    eax = MEM32(esi + 0x34);
    SET_LO8(ecx, 0xFF);
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 2) = LO8(ecx);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0025B111u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B111: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0025B11Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B11A: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0025B126u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B126: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0025B132u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B132: ;
    edx = MEM32(esi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025B149; /* jne: not equal / not zero */

loc_0025B142: ;
    ecx = esi;
    PUSH32(esp, 0x0025B149u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025B149: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025B160; /* jne: not equal / not zero */

loc_0025B159: ;
    ecx = edi;
    PUSH32(esp, 0x0025B160u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025B160: ;
    ecx = MEM32(0x5BDDA0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0025B16Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B16D: ;
    ecx = MEM32(0x5BDDA0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0025B179u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B179: ;
    ecx = MEM32(0x5BDDA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0025B185u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B185: ;
    ecx = MEM32(0x5BDDA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0025B191u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B191: ;
    ecx = MEM32(0x5BDDA8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0025B19Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B19E: ;
    ecx = MEM32(0x5BDDA8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0025B1ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B1AB: ;
    ecx = MEM32(0x5BDDBC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0025B1B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B1B8: ;
    ecx = MEM32(0x5BDDD8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0025B1C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B1C5: ;
    ecx = MEM32(0x5BDDAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0025B1D2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B1D2: ;
    ecx = MEM32(0x5BDDAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0025B1DFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B1DF: ;
    ecx = MEM32(0x5BDDB0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0025B1EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B1EB: ;
    ecx = MEM32(0x5BDDB0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0025B1F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B1F7: ;
    ecx = MEM32(0x5BDDB4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0025B203u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B203: ;
    ecx = MEM32(0x5BDDB8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0025B210u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B210: ;
    ecx = MEM32(0x5BDDCC);
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(ecx + 0xC) = ebx;
    edx = MEM32(0x5BDDD4);
    MEM32(edx + 0xC) = ebx;
    eax = MEM32(0x5BDDCC);
    MEM32(esp + 0x20) = 0x3F800000;
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x28) = 0x3F800000;
    MEM32(esp + 0x1C) = 0x3F800000;
    esi = eax;
    eax = eax + 0x10;
    MEM32(eax) = 0x3F800000;
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 8) = edx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 0xC) = ecx;
    PUSH32(esp, ebx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0025B291u); RECOMP_ABI_CALL(0x00243650u, sub_00243650); /* call 0x00243650 */

loc_0025B291: ;
    MEM32(esi + 0x3C) = eax;
    eax = MEM32(0x5BDDD0);
    edx = MEM32(esp + 0xC);
    esi = eax;
    eax = eax + 0x10;
    MEM32(eax) = edx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 8) = edx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0xC) = ecx;
    PUSH32(esp, ebx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0025B2C3u); RECOMP_ABI_CALL(0x00243650u, sub_00243650); /* call 0x00243650 */

loc_0025B2C3: ;
    MEM32(esi + 0x3C) = eax;
    edx = MEM32(0x5BDDD0);
    MEM32(edx + 0xC) = ebx;
    ecx = MEM32(0x5BDDDC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0025B2DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B2DB: ;
    ecx = MEM32(0x5BDDDC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0025B2E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B2E8: ;
    ecx = MEM32(0x5BDDE0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0025B2F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B2F4: ;
    ecx = MEM32(0x5BDDE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0025B300u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B300: ;
    eax = MEM32(0x5BDDE4);
    MEM32(eax + 0xC) = ebx;
    ecx = MEM32(0x5BDDE4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0025B315u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B315: ;
    eax = MEM32(0x5BDDE8);
    MEM32(eax + 0xC) = ebx;
    ecx = MEM32(0x5BDDE8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0025B329u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B329: ;
    ecx = MEM32(0x5BDDEC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0025B335u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B335: ;
    ecx = MEM32(0x5BDDEC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0025B342u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B342: ;
    ecx = MEM32(0x5BDDF0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0025B34Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B34E: ;
    ecx = MEM32(0x5BDDF0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0025B35Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B35A: ;
    ecx = MEM32(0x5BDDC0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0025B367u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B367: ;
    ecx = MEM32(0x5BDDC0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C23D70A);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0025B377u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B377: ;
    ecx = MEM32(0x5BDDC4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0025B383u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B383: ;
    ecx = MEM32(0x5BDDF4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0025B390u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B390: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0025B3A0
 * Original: 0x0025B3A0 - 0x0025B726 (902 bytes, 280 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B3A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025B3A0: ;
    eax = MEM32(0x5BDDF8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B3CA; /* je: equal / zero */

loc_0025B3AC: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025B3C4; /* jne: not equal / not zero */

loc_0025B3BF: ;
    PUSH32(esp, 0x0025B3C4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025B3C4: ;
    MEM32(0x5BDDF8) = esi;

loc_0025B3CA: ;
    eax = MEM32(0x5BDDA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B3F1; /* je: equal / zero */

loc_0025B3D3: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025B3EB; /* jne: not equal / not zero */

loc_0025B3E6: ;
    PUSH32(esp, 0x0025B3EBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025B3EB: ;
    MEM32(0x5BDDA0) = esi;

loc_0025B3F1: ;
    eax = MEM32(0x5BDDA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B418; /* je: equal / zero */

loc_0025B3FA: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025B412; /* jne: not equal / not zero */

loc_0025B40D: ;
    PUSH32(esp, 0x0025B412u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025B412: ;
    MEM32(0x5BDDA4) = esi;

loc_0025B418: ;
    eax = MEM32(0x5BDDA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B43F; /* je: equal / zero */

loc_0025B421: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025B439; /* jne: not equal / not zero */

loc_0025B434: ;
    PUSH32(esp, 0x0025B439u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025B439: ;
    MEM32(0x5BDDA8) = esi;

loc_0025B43F: ;
    eax = MEM32(0x5BDDAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B466; /* je: equal / zero */

loc_0025B448: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025B460; /* jne: not equal / not zero */

loc_0025B45B: ;
    PUSH32(esp, 0x0025B460u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025B460: ;
    MEM32(0x5BDDAC) = esi;

loc_0025B466: ;
    eax = MEM32(0x5BDDB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B48D; /* je: equal / zero */

loc_0025B46F: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025B487; /* jne: not equal / not zero */

loc_0025B482: ;
    PUSH32(esp, 0x0025B487u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025B487: ;
    MEM32(0x5BDDB0) = esi;

loc_0025B48D: ;
    eax = MEM32(0x5BDDB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B4B4; /* je: equal / zero */

loc_0025B496: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025B4AE; /* jne: not equal / not zero */

loc_0025B4A9: ;
    PUSH32(esp, 0x0025B4AEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025B4AE: ;
    MEM32(0x5BDDB4) = esi;

loc_0025B4B4: ;
    eax = MEM32(0x5BDDB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B4DB; /* je: equal / zero */

loc_0025B4BD: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025B4D5; /* jne: not equal / not zero */

loc_0025B4D0: ;
    PUSH32(esp, 0x0025B4D5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025B4D5: ;
    MEM32(0x5BDDB8) = esi;

loc_0025B4DB: ;
    eax = MEM32(0x5BDDBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B502; /* je: equal / zero */

loc_0025B4E4: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025B4FC; /* jne: not equal / not zero */

loc_0025B4F7: ;
    PUSH32(esp, 0x0025B4FCu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025B4FC: ;
    MEM32(0x5BDDBC) = esi;

loc_0025B502: ;
    eax = MEM32(0x5BDDCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B529; /* je: equal / zero */

loc_0025B50B: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025B523; /* jne: not equal / not zero */

loc_0025B51E: ;
    PUSH32(esp, 0x0025B523u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025B523: ;
    MEM32(0x5BDDCC) = esi;

loc_0025B529: ;
    eax = MEM32(0x5BDDD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B550; /* je: equal / zero */

loc_0025B532: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025B54A; /* jne: not equal / not zero */

loc_0025B545: ;
    PUSH32(esp, 0x0025B54Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025B54A: ;
    MEM32(0x5BDDD0) = esi;

loc_0025B550: ;
    eax = MEM32(0x5BDDD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B577; /* je: equal / zero */

loc_0025B559: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025B571; /* jne: not equal / not zero */

loc_0025B56C: ;
    PUSH32(esp, 0x0025B571u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025B571: ;
    MEM32(0x5BDDD8) = esi;

loc_0025B577: ;
    eax = MEM32(0x5BDDDC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B59E; /* je: equal / zero */

loc_0025B580: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025B598; /* jne: not equal / not zero */

loc_0025B593: ;
    PUSH32(esp, 0x0025B598u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025B598: ;
    MEM32(0x5BDDDC) = esi;

loc_0025B59E: ;
    eax = MEM32(0x5BDDE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B5C5; /* je: equal / zero */

loc_0025B5A7: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025B5BF; /* jne: not equal / not zero */

loc_0025B5BA: ;
    PUSH32(esp, 0x0025B5BFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025B5BF: ;
    MEM32(0x5BDDE0) = esi;

loc_0025B5C5: ;
    eax = MEM32(0x5BDDE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B5EC; /* je: equal / zero */

loc_0025B5CE: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025B5E6; /* jne: not equal / not zero */

loc_0025B5E1: ;
    PUSH32(esp, 0x0025B5E6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025B5E6: ;
    MEM32(0x5BDDE4) = esi;

loc_0025B5EC: ;
    eax = MEM32(0x5BDDE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B613; /* je: equal / zero */

loc_0025B5F5: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025B60D; /* jne: not equal / not zero */

loc_0025B608: ;
    PUSH32(esp, 0x0025B60Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025B60D: ;
    MEM32(0x5BDDE8) = esi;

loc_0025B613: ;
    eax = MEM32(0x5BDDEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B63A; /* je: equal / zero */

loc_0025B61C: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025B634; /* jne: not equal / not zero */

loc_0025B62F: ;
    PUSH32(esp, 0x0025B634u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025B634: ;
    MEM32(0x5BDDEC) = esi;

loc_0025B63A: ;
    eax = MEM32(0x5BDDF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B661; /* je: equal / zero */

loc_0025B643: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025B65B; /* jne: not equal / not zero */

loc_0025B656: ;
    PUSH32(esp, 0x0025B65Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025B65B: ;
    MEM32(0x5BDDF0) = esi;

loc_0025B661: ;
    eax = MEM32(0x5BDDC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B688; /* je: equal / zero */

loc_0025B66A: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025B682; /* jne: not equal / not zero */

loc_0025B67D: ;
    PUSH32(esp, 0x0025B682u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025B682: ;
    MEM32(0x5BDDC0) = esi;

loc_0025B688: ;
    eax = MEM32(0x5BDDC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B6AF; /* je: equal / zero */

loc_0025B691: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025B6A9; /* jne: not equal / not zero */

loc_0025B6A4: ;
    PUSH32(esp, 0x0025B6A9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025B6A9: ;
    MEM32(0x5BDDC4) = esi;

loc_0025B6AF: ;
    eax = MEM32(0x5BDDF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B6D6; /* je: equal / zero */

loc_0025B6B8: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025B6D0; /* jne: not equal / not zero */

loc_0025B6CB: ;
    PUSH32(esp, 0x0025B6D0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025B6D0: ;
    MEM32(0x5BDDF4) = esi;

loc_0025B6D6: ;
    eax = MEM32(0x5BDD9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B6FD; /* je: equal / zero */

loc_0025B6DF: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025B6F7; /* jne: not equal / not zero */

loc_0025B6F2: ;
    PUSH32(esp, 0x0025B6F7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025B6F7: ;
    MEM32(0x5BDD9C) = esi;

loc_0025B6FD: ;
    eax = MEM32(0x5BDDD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025B724; /* je: equal / zero */

loc_0025B706: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025B71E; /* jne: not equal / not zero */

loc_0025B719: ;
    PUSH32(esp, 0x0025B71Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025B71E: ;
    MEM32(0x5BDDD4) = esi;

loc_0025B724: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025B730
 * Original: 0x0025B730 - 0x0025B752 (34 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B730(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025B730: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0025B73Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B73A: ;
    ecx = eax;
    PUSH32(esp, 0x0025B741u); RECOMP_ABI_CALL(0x001EA440u, sub_001EA440); /* call 0x001EA440 */

loc_0025B741: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025B74A; /* jne: not equal / not zero */

loc_0025B745: ;
    PUSH32(esp, 0x0025B74Au); RECOMP_ABI_CALL(0x0025B3A0u, sub_0025B3A0); /* call 0x0025B3A0 */

loc_0025B74A: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00259CF0(); return; /* tail jmp 0x00259CF0 */

}

/**
 * sub_0025B760
 * Original: 0x0025B760 - 0x0025B841 (225 bytes, 57 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025B760: ;
    esp = esp - 0x8C;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esp + 0x54;
    PUSH32(esp, 0x0025B773u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0025B773: ;
    eax = MEM32(esp + 0x98);
    esi = MEM32(esp + 0xA4);
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x84) = 0xBF800000u;
    PUSH32(esp, 0x0025B799u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0025B799: ;
    edx = MEM32(esp + 0x9C);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = esi;
    PUSH32(esp, 0x0025B7A9u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0025B7A9: ;
    eax = MEM32(esp + 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esi;
    PUSH32(esp, 0x0025B7B9u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0025B7B9: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0025B7C2u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0025B7C2: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    MEM32(esp + 0xC) = 0x3F000000;
    MEM32(esp + 0x10) = 0xBF000000u;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x0025B7E8u); RECOMP_ABI_CALL(0x0023E540u, sub_0023E540); /* call 0x0023E540 */

loc_0025B7E8: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    MEM32(esp + 0xC) = 0x3F000000;
    MEM32(esp + 0x10) = 0x3F000000;
    MEM32(esp + 0x14) = 0x3F800000;
    PUSH32(esp, 0x0025B80Eu); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_0025B80E: ;
    SET_LO8(eax, MEM8(edi + 0xD0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025B829; /* je: equal / zero */

loc_0025B818: ;
    eax = esp + 0x14;
    PUSH32(esp, 0x5BDEE0);
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, 0x0025B829u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0025B829: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = esi;
    PUSH32(esp, 0x0025B836u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0025B836: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x8C;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0025B850
 * Original: 0x0025B850 - 0x0025B947 (247 bytes, 76 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B850(void)
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

loc_0025B850: ;
    esp = esp - 0xD0;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    eax = esi + 0x20;
    fp_top() = fp_top() + MEMF(esi + 0x2C); /* fadd dword ptr [esi + 0x2c] */
    ecx = esi + 0x84;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    fp_push(MEMF(eax + 4)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = fp_top() + MEMF(esi + 0x30); /* fadd dword ptr [esi + 0x30] */
    ecx = esp + 0x60;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x34); /* fadd dword ptr [esi + 0x34] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0025B890u); RECOMP_ABI_CALL(0x00242B60u, sub_00242B60); /* call 0x00242B60 */

loc_0025B890: ;
    SET_LO8(eax, MEM8(esi + 0xD0));
    ecx = MEM32(esi + 0x7C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(esi + 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_0025B8CC; /* je: equal / zero */

loc_0025B8A5: ;
    edx = MEM32(esi + 0xD4);
    eax = MEM32(esi + 0xD8);
    ecx = MEM32(esi + 0xDC);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xE0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x0025B8CAu); RECOMP_ABI_CALL(0x0023E890u, sub_0023E890); /* call 0x0023E890 */

loc_0025B8CA: ;
    goto loc_0025B8EF;

loc_0025B8CC: ;
    fp_push(MEMF(esi + 0x38)); /* fld float */
    PUSH32(esp, 0x3F800000);
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    ecx = esp + 0x20;
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025B8EFu); RECOMP_ABI_CALL(0x0023E9E0u, sub_0023E9E0); /* call 0x0023E9E0 */

loc_0025B8EF: ;
    ecx = MEM32(esi + 0x58);
    edx = MEM32(ecx);
    eax = esp + 0x54;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0025B8FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B8FC: ;
    ecx = MEM32(esi + 0x5C);
    edx = MEM32(ecx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0025B909u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B909: ;
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xDC);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0025B92Au); RECOMP_ABI_CALL(0x0025B760u, sub_0025B760); /* call 0x0025B760 */

loc_0025B92A: ;
    ecx = MEM32(esi + 0x90);
    edx = MEM32(ecx);
    eax = esp + 0x94;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0025B93Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B93D: ;
    POP32(esp, esi);
    esp = esp + 0xD0;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0025B950
 * Original: 0x0025B950 - 0x0025B96A (26 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B950(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025B950: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x98);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0025B95Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025B95E: ;
    ecx = MEM32(esi + 0xA8);
    edx = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x68)); return; /* indirect tail jmp */

}

/**
 * sub_0025B970
 * Original: 0x0025B970 - 0x0025BADB (363 bytes, 96 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025B970(void)
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

loc_0025B970: ;
    esp = esp - 0x150;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025B9BC; /* je: equal / zero */

loc_0025B980: ;
    ecx = MEM32(eax + 0x80);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(eax + 0x84);
    MEM32(esi + 0x1C) = edx;
    eax = MEM32(eax + 0x88);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(eax + 0x74);
    eax = eax + 0x74;
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x10) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ecx + 0x60);
    MEM32(esi + 0x24) = edx;

loc_0025B9BC: ;
    eax = esi + 0x30;
    PUSH32(esp, eax);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    edx = esi + 0xC;
    PUSH32(esp, edx);
    ecx = esp + 0xE0;
    PUSH32(esp, 0x0025B9D4u); RECOMP_ABI_CALL(0x00242D60u, sub_00242D60); /* call 0x00242D60 */

loc_0025B9D4: ;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    eax = MEM32(esi + 0x2C);
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x120;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025BA02u); RECOMP_ABI_CALL(0x0023E9E0u, sub_0023E9E0); /* call 0x0023E9E0 */

loc_0025BA02: ;
    ecx = esp + 0x94;
    PUSH32(esp, 0x0025BA0Eu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0025BA0E: ;
    edx = MEM32(esp + 0x15C);
    edx = edx + 0xA4;
    PUSH32(esp, edx);
    eax = esp + 0x98;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    MEM32(esp + 0xC4) = 0xBF800000u;
    PUSH32(esp, 0x0025BA38u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0025BA38: ;
    ecx = esp + 0xD4;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = edx;
    PUSH32(esp, 0x0025BA4Cu); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0025BA4C: ;
    eax = esp + 0x114;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025BA5Eu); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0025BA5E: ;
    ecx = esp + 0x54;
    PUSH32(esp, 0x0025BA67u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0025BA67: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = esp + 0x58;
    MEM32(esp + 8) = 0x3F000000;
    MEM32(esp + 0xC) = 0xBF000000u;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0025BA8Du); RECOMP_ABI_CALL(0x0023E540u, sub_0023E540); /* call 0x0023E540 */

loc_0025BA8D: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    MEM32(esp + 8) = 0x3F000000;
    MEM32(esp + 0xC) = 0x3F000000;
    MEM32(esp + 0x10) = 0x3F800000;
    PUSH32(esp, 0x0025BAB3u); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_0025BAB3: ;
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = edx;
    PUSH32(esp, 0x0025BAC4u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0025BAC4: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0025BAD1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025BAD1: ;
    POP32(esp, esi);
    esp = esp + 0x150;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0025BAE0
 * Original: 0x0025BAE0 - 0x0025BB39 (89 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0025BAE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0025BAE0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 8);
    eax = ebp;
    PUSH32(esp, ebx);
    /* nop */

loc_0025BAF0: ;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0025BB18; /* jne: not equal / not zero */

loc_0025BAFA: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0025BB14; /* je: equal / zero */

loc_0025BAFE: ;
    SET_LO8(ecx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0025BB18; /* jne: not equal / not zero */

loc_0025BB0A: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0025BAF0; /* jne: not equal / not zero */

loc_0025BB14: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_0025BB1D;

loc_0025BB18: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_0025BB1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0025BB2B; /* jne: not equal / not zero */

loc_0025BB22: ;
    eax = MEM32(edi + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0025BB2B: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0025BB33u); RECOMP_ABI_CALL(0x001F4DD0u, sub_001F4DD0); /* call 0x001F4DD0 */

loc_0025BB33: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025BB40
 * Original: 0x0025BB40 - 0x0025BB8B (75 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025BB40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025BB40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0025BB49u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0025BB49: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025BB4Fu); RECOMP_ABI_CALL(0x00237250u, sub_00237250); /* call 0x00237250 */

loc_0025BB4F: ;
    esp = esp + 4;
    PUSH32(esp, 0);
    esi = eax;
    eax = MEM32(edi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025BB63u); RECOMP_ABI_CALL(0x0022F6C0u, sub_0022F6C0); /* call 0x0022F6C0 */

loc_0025BB63: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0025BB6Bu); RECOMP_ABI_CALL(0x0024E720u, sub_0024E720); /* call 0x0024E720 */

loc_0025BB6B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025BB88; /* je: equal / zero */

loc_0025BB6F: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BB88; /* jne: not equal / not zero */

loc_0025BB7F: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_0025BB88: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025BB90
 * Original: 0x0025BB90 - 0x0025C2E5 (1877 bytes, 580 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025BB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025BB90: ;
    eax = MEM32(0x5BDE90);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BBBA; /* je: equal / zero */

loc_0025BB9C: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BBB4; /* jne: not equal / not zero */

loc_0025BBAF: ;
    PUSH32(esp, 0x0025BBB4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BBB4: ;
    MEM32(0x5BDE90) = esi;

loc_0025BBBA: ;
    eax = MEM32(0x5BDE94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BBE1; /* je: equal / zero */

loc_0025BBC3: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BBDB; /* jne: not equal / not zero */

loc_0025BBD6: ;
    PUSH32(esp, 0x0025BBDBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BBDB: ;
    MEM32(0x5BDE94) = esi;

loc_0025BBE1: ;
    eax = MEM32(0x5BDEAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BC08; /* je: equal / zero */

loc_0025BBEA: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BC02; /* jne: not equal / not zero */

loc_0025BBFD: ;
    PUSH32(esp, 0x0025BC02u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BC02: ;
    MEM32(0x5BDEAC) = esi;

loc_0025BC08: ;
    eax = MEM32(0x5BDEB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BC2F; /* je: equal / zero */

loc_0025BC11: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BC29; /* jne: not equal / not zero */

loc_0025BC24: ;
    PUSH32(esp, 0x0025BC29u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BC29: ;
    MEM32(0x5BDEB0) = esi;

loc_0025BC2F: ;
    eax = MEM32(0x5BDDFC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BC56; /* je: equal / zero */

loc_0025BC38: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BC50; /* jne: not equal / not zero */

loc_0025BC4B: ;
    PUSH32(esp, 0x0025BC50u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BC50: ;
    MEM32(0x5BDDFC) = esi;

loc_0025BC56: ;
    eax = MEM32(0x5BDE00);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BC7D; /* je: equal / zero */

loc_0025BC5F: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BC77; /* jne: not equal / not zero */

loc_0025BC72: ;
    PUSH32(esp, 0x0025BC77u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BC77: ;
    MEM32(0x5BDE00) = esi;

loc_0025BC7D: ;
    eax = MEM32(0x5BDE28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BCA4; /* je: equal / zero */

loc_0025BC86: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BC9E; /* jne: not equal / not zero */

loc_0025BC99: ;
    PUSH32(esp, 0x0025BC9Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BC9E: ;
    MEM32(0x5BDE28) = esi;

loc_0025BCA4: ;
    eax = MEM32(0x5BDE2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BCCB; /* je: equal / zero */

loc_0025BCAD: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BCC5; /* jne: not equal / not zero */

loc_0025BCC0: ;
    PUSH32(esp, 0x0025BCC5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BCC5: ;
    MEM32(0x5BDE2C) = esi;

loc_0025BCCB: ;
    eax = MEM32(0x5BDE30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BCF2; /* je: equal / zero */

loc_0025BCD4: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BCEC; /* jne: not equal / not zero */

loc_0025BCE7: ;
    PUSH32(esp, 0x0025BCECu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BCEC: ;
    MEM32(0x5BDE30) = esi;

loc_0025BCF2: ;
    eax = MEM32(0x5BDE38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BD19; /* je: equal / zero */

loc_0025BCFB: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BD13; /* jne: not equal / not zero */

loc_0025BD0E: ;
    PUSH32(esp, 0x0025BD13u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BD13: ;
    MEM32(0x5BDE38) = esi;

loc_0025BD19: ;
    eax = MEM32(0x5BDE34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BD40; /* je: equal / zero */

loc_0025BD22: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BD3A; /* jne: not equal / not zero */

loc_0025BD35: ;
    PUSH32(esp, 0x0025BD3Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BD3A: ;
    MEM32(0x5BDE34) = esi;

loc_0025BD40: ;
    eax = MEM32(0x5BDE3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BD67; /* je: equal / zero */

loc_0025BD49: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BD61; /* jne: not equal / not zero */

loc_0025BD5C: ;
    PUSH32(esp, 0x0025BD61u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BD61: ;
    MEM32(0x5BDE3C) = esi;

loc_0025BD67: ;
    eax = MEM32(0x5BDE40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BD8E; /* je: equal / zero */

loc_0025BD70: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BD88; /* jne: not equal / not zero */

loc_0025BD83: ;
    PUSH32(esp, 0x0025BD88u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BD88: ;
    MEM32(0x5BDE40) = esi;

loc_0025BD8E: ;
    eax = MEM32(0x5BDE64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BDB5; /* je: equal / zero */

loc_0025BD97: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BDAF; /* jne: not equal / not zero */

loc_0025BDAA: ;
    PUSH32(esp, 0x0025BDAFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BDAF: ;
    MEM32(0x5BDE64) = esi;

loc_0025BDB5: ;
    eax = MEM32(0x5BDE68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BDDC; /* je: equal / zero */

loc_0025BDBE: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BDD6; /* jne: not equal / not zero */

loc_0025BDD1: ;
    PUSH32(esp, 0x0025BDD6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BDD6: ;
    MEM32(0x5BDE68) = esi;

loc_0025BDDC: ;
    eax = MEM32(0x5BDE6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BE03; /* je: equal / zero */

loc_0025BDE5: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BDFD; /* jne: not equal / not zero */

loc_0025BDF8: ;
    PUSH32(esp, 0x0025BDFDu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BDFD: ;
    MEM32(0x5BDE6C) = esi;

loc_0025BE03: ;
    eax = MEM32(0x5BDE70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BE2A; /* je: equal / zero */

loc_0025BE0C: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BE24; /* jne: not equal / not zero */

loc_0025BE1F: ;
    PUSH32(esp, 0x0025BE24u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BE24: ;
    MEM32(0x5BDE70) = esi;

loc_0025BE2A: ;
    eax = MEM32(0x5BDE10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BE51; /* je: equal / zero */

loc_0025BE33: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BE4B; /* jne: not equal / not zero */

loc_0025BE46: ;
    PUSH32(esp, 0x0025BE4Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BE4B: ;
    MEM32(0x5BDE10) = esi;

loc_0025BE51: ;
    eax = MEM32(0x5BDE18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BE78; /* je: equal / zero */

loc_0025BE5A: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BE72; /* jne: not equal / not zero */

loc_0025BE6D: ;
    PUSH32(esp, 0x0025BE72u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BE72: ;
    MEM32(0x5BDE18) = esi;

loc_0025BE78: ;
    eax = MEM32(0x5BDE1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BE9F; /* je: equal / zero */

loc_0025BE81: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BE99; /* jne: not equal / not zero */

loc_0025BE94: ;
    PUSH32(esp, 0x0025BE99u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BE99: ;
    MEM32(0x5BDE1C) = esi;

loc_0025BE9F: ;
    eax = MEM32(0x5BDE20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BEC6; /* je: equal / zero */

loc_0025BEA8: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BEC0; /* jne: not equal / not zero */

loc_0025BEBB: ;
    PUSH32(esp, 0x0025BEC0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BEC0: ;
    MEM32(0x5BDE20) = esi;

loc_0025BEC6: ;
    eax = MEM32(0x5BDE24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BEED; /* je: equal / zero */

loc_0025BECF: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BEE7; /* jne: not equal / not zero */

loc_0025BEE2: ;
    PUSH32(esp, 0x0025BEE7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BEE7: ;
    MEM32(0x5BDE24) = esi;

loc_0025BEED: ;
    eax = MEM32(0x5BDE14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BF14; /* je: equal / zero */

loc_0025BEF6: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BF0E; /* jne: not equal / not zero */

loc_0025BF09: ;
    PUSH32(esp, 0x0025BF0Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BF0E: ;
    MEM32(0x5BDE14) = esi;

loc_0025BF14: ;
    eax = MEM32(0x5BDE08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BF3B; /* je: equal / zero */

loc_0025BF1D: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BF35; /* jne: not equal / not zero */

loc_0025BF30: ;
    PUSH32(esp, 0x0025BF35u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BF35: ;
    MEM32(0x5BDE08) = esi;

loc_0025BF3B: ;
    eax = MEM32(0x5BDE0C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BF62; /* je: equal / zero */

loc_0025BF44: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BF5C; /* jne: not equal / not zero */

loc_0025BF57: ;
    PUSH32(esp, 0x0025BF5Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BF5C: ;
    MEM32(0x5BDE0C) = esi;

loc_0025BF62: ;
    eax = MEM32(0x5BDE44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BF89; /* je: equal / zero */

loc_0025BF6B: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BF83; /* jne: not equal / not zero */

loc_0025BF7E: ;
    PUSH32(esp, 0x0025BF83u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BF83: ;
    MEM32(0x5BDE44) = esi;

loc_0025BF89: ;
    eax = MEM32(0x5BDE48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BFB0; /* je: equal / zero */

loc_0025BF92: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BFAA; /* jne: not equal / not zero */

loc_0025BFA5: ;
    PUSH32(esp, 0x0025BFAAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BFAA: ;
    MEM32(0x5BDE48) = esi;

loc_0025BFB0: ;
    eax = MEM32(0x5BDE4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BFD7; /* je: equal / zero */

loc_0025BFB9: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BFD1; /* jne: not equal / not zero */

loc_0025BFCC: ;
    PUSH32(esp, 0x0025BFD1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BFD1: ;
    MEM32(0x5BDE4C) = esi;

loc_0025BFD7: ;
    eax = MEM32(0x5BDE50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025BFFE; /* je: equal / zero */

loc_0025BFE0: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025BFF8; /* jne: not equal / not zero */

loc_0025BFF3: ;
    PUSH32(esp, 0x0025BFF8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025BFF8: ;
    MEM32(0x5BDE50) = esi;

loc_0025BFFE: ;
    eax = MEM32(0x5BDE54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C025; /* je: equal / zero */

loc_0025C007: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025C01F; /* jne: not equal / not zero */

loc_0025C01A: ;
    PUSH32(esp, 0x0025C01Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025C01F: ;
    MEM32(0x5BDE54) = esi;

loc_0025C025: ;
    eax = MEM32(0x5BDE58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C04C; /* je: equal / zero */

loc_0025C02E: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025C046; /* jne: not equal / not zero */

loc_0025C041: ;
    PUSH32(esp, 0x0025C046u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025C046: ;
    MEM32(0x5BDE58) = esi;

loc_0025C04C: ;
    eax = MEM32(0x5BDE5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C073; /* je: equal / zero */

loc_0025C055: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025C06D; /* jne: not equal / not zero */

loc_0025C068: ;
    PUSH32(esp, 0x0025C06Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025C06D: ;
    MEM32(0x5BDE5C) = esi;

loc_0025C073: ;
    eax = MEM32(0x5BDE60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C09A; /* je: equal / zero */

loc_0025C07C: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025C094; /* jne: not equal / not zero */

loc_0025C08F: ;
    PUSH32(esp, 0x0025C094u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025C094: ;
    MEM32(0x5BDE60) = esi;

loc_0025C09A: ;
    eax = MEM32(0x5BDE04);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C0C1; /* je: equal / zero */

loc_0025C0A3: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025C0BB; /* jne: not equal / not zero */

loc_0025C0B6: ;
    PUSH32(esp, 0x0025C0BBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025C0BB: ;
    MEM32(0x5BDE04) = esi;

loc_0025C0C1: ;
    eax = MEM32(0x5BDEA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C0E8; /* je: equal / zero */

loc_0025C0CA: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025C0E2; /* jne: not equal / not zero */

loc_0025C0DD: ;
    PUSH32(esp, 0x0025C0E2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025C0E2: ;
    MEM32(0x5BDEA0) = esi;

loc_0025C0E8: ;
    eax = MEM32(0x5BDEA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C10F; /* je: equal / zero */

loc_0025C0F1: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025C109; /* jne: not equal / not zero */

loc_0025C104: ;
    PUSH32(esp, 0x0025C109u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025C109: ;
    MEM32(0x5BDEA4) = esi;

loc_0025C10F: ;
    eax = MEM32(0x5BDEA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C136; /* je: equal / zero */

loc_0025C118: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025C130; /* jne: not equal / not zero */

loc_0025C12B: ;
    PUSH32(esp, 0x0025C130u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025C130: ;
    MEM32(0x5BDEA8) = esi;

loc_0025C136: ;
    eax = MEM32(0x5BDE8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C15D; /* je: equal / zero */

loc_0025C13F: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025C157; /* jne: not equal / not zero */

loc_0025C152: ;
    PUSH32(esp, 0x0025C157u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025C157: ;
    MEM32(0x5BDE8C) = esi;

loc_0025C15D: ;
    eax = MEM32(0x5BDEB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C184; /* je: equal / zero */

loc_0025C166: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025C17E; /* jne: not equal / not zero */

loc_0025C179: ;
    PUSH32(esp, 0x0025C17Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025C17E: ;
    MEM32(0x5BDEB4) = esi;

loc_0025C184: ;
    eax = MEM32(0x5BDEB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C1AB; /* je: equal / zero */

loc_0025C18D: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025C1A5; /* jne: not equal / not zero */

loc_0025C1A0: ;
    PUSH32(esp, 0x0025C1A5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025C1A5: ;
    MEM32(0x5BDEB8) = esi;

loc_0025C1AB: ;
    eax = MEM32(0x5BDEBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C1D2; /* je: equal / zero */

loc_0025C1B4: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025C1CC; /* jne: not equal / not zero */

loc_0025C1C7: ;
    PUSH32(esp, 0x0025C1CCu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025C1CC: ;
    MEM32(0x5BDEBC) = esi;

loc_0025C1D2: ;
    eax = MEM32(0x5BDEC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C1F9; /* je: equal / zero */

loc_0025C1DB: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025C1F3; /* jne: not equal / not zero */

loc_0025C1EE: ;
    PUSH32(esp, 0x0025C1F3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025C1F3: ;
    MEM32(0x5BDEC0) = esi;

loc_0025C1F9: ;
    eax = MEM32(0x5BDE74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C220; /* je: equal / zero */

loc_0025C202: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025C21A; /* jne: not equal / not zero */

loc_0025C215: ;
    PUSH32(esp, 0x0025C21Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025C21A: ;
    MEM32(0x5BDE74) = esi;

loc_0025C220: ;
    eax = MEM32(0x5BDE78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C247; /* je: equal / zero */

loc_0025C229: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025C241; /* jne: not equal / not zero */

loc_0025C23C: ;
    PUSH32(esp, 0x0025C241u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025C241: ;
    MEM32(0x5BDE78) = esi;

loc_0025C247: ;
    eax = MEM32(0x5BDE7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C26E; /* je: equal / zero */

loc_0025C250: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025C268; /* jne: not equal / not zero */

loc_0025C263: ;
    PUSH32(esp, 0x0025C268u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025C268: ;
    MEM32(0x5BDE7C) = esi;

loc_0025C26E: ;
    eax = MEM32(0x5BDE80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C295; /* je: equal / zero */

loc_0025C277: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025C28F; /* jne: not equal / not zero */

loc_0025C28A: ;
    PUSH32(esp, 0x0025C28Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025C28F: ;
    MEM32(0x5BDE80) = esi;

loc_0025C295: ;
    eax = MEM32(0x5BDE84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C2BC; /* je: equal / zero */

loc_0025C29E: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025C2B6; /* jne: not equal / not zero */

loc_0025C2B1: ;
    PUSH32(esp, 0x0025C2B6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025C2B6: ;
    MEM32(0x5BDE84) = esi;

loc_0025C2BC: ;
    eax = MEM32(0x5BDE88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C2E3; /* je: equal / zero */

loc_0025C2C5: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025C2DD; /* jne: not equal / not zero */

loc_0025C2D8: ;
    PUSH32(esp, 0x0025C2DDu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025C2DD: ;
    MEM32(0x5BDE88) = esi;

loc_0025C2E3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025C2F0
 * Original: 0x0025C2F0 - 0x0025C368 (120 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C2F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025C2F0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0025C2FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025C2FA: ;
    ecx = eax;
    PUSH32(esp, 0x0025C301u); RECOMP_ABI_CALL(0x001EA440u, sub_001EA440); /* call 0x001EA440 */

loc_0025C301: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025C360; /* jne: not equal / not zero */

loc_0025C305: ;
    PUSH32(esp, 0x0025C30Au); RECOMP_ABI_CALL(0x0025BB90u, sub_0025BB90); /* call 0x0025BB90 */

loc_0025C30A: ;
    eax = MEM32(0x5BDE98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025C335; /* je: equal / zero */

loc_0025C313: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025C32B; /* jne: not equal / not zero */

loc_0025C326: ;
    PUSH32(esp, 0x0025C32Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025C32B: ;
    MEM32(0x5BDE98) = 0;

loc_0025C335: ;
    eax = MEM32(0x5BDE9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025C360; /* je: equal / zero */

loc_0025C33E: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025C356; /* jne: not equal / not zero */

loc_0025C351: ;
    PUSH32(esp, 0x0025C356u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025C356: ;
    MEM32(0x5BDE9C) = 0;

loc_0025C360: ;
    ecx = edi;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_00259CF0(); return; /* tail jmp 0x00259CF0 */

}

/**
 * sub_0025C370
 * Original: 0x0025C370 - 0x0025C4E2 (370 bytes, 102 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C370(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0025C370: ;
    esp = esp - 0xDC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xEC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0xA8;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0x0025C390u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0025C390: ;
    esp = esp + 8;
    MEM32(esp + 0x10) = 0x3F800000;
    PUSH32(esp, 0x0025C3A0u); RECOMP_ABI_CALL(0x001C83A0u, sub_001C83A0); /* call 0x001C83A0 */

loc_0025C3A0: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    esi = eax;
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    ecx = esp + 0xB0;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0025C3C1u); RECOMP_ABI_CALL(0x001CD570u, sub_001CD570); /* call 0x001CD570 */

loc_0025C3C1: ;
    ebx = MEM32(esp + 0xF0);
    ecx = esp + 0x68;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025C3D3u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0025C3D3: ;
    esp = esp + 8;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x74;
    PUSH32(esp, 0xE);
    ecx = esi;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x0025C3F2u); RECOMP_ABI_CALL(0x001CD570u, sub_001CD570); /* call 0x001CD570 */

loc_0025C3F2: ;
    edx = MEM32(esp + 0xEC);
    esi = MEM32(esp + 0xF8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025C407u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0025C407: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 8;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x20) = 0x3F800000;
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x0025C42Eu); RECOMP_ABI_CALL(0x0023E5B0u, sub_0023E5B0); /* call 0x0023E5B0 */

loc_0025C42E: ;
    edx = esp + 0x68;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = esi;
    PUSH32(esp, 0x0025C43Bu); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0025C43B: ;
    eax = esp + 0xA8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esi;
    PUSH32(esp, 0x0025C44Bu); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0025C44B: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x0025C454u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0025C454: ;
    fp_push((double)SMEM32(edi + 0x80)); /* fild */
    eax = MEM32(edi + 0x84);
    MEM32(esp + 0x14) = eax;
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    eax = (uint32_t)(-(int32_t)eax);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(edi + 0x88);
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax * 4 + 0x3FDB94)); /* fld float */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x6C)); /* fld float */
    fp_top() = fp_top() * MEMF(eax * 4 + 0x3FDB94); /* fmul dword ptr [eax*4 + 0x3fdb94] */
    fp_push(MEMF(edi + 0x44)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 0x40); /* fsub dword ptr [edi + 0x40] */
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    ecx = esi;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0025C4D6u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0025C4D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xDC;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0025C4F0
 * Original: 0x0025C4F0 - 0x0025C61B (299 bytes, 93 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C4F0(void)
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

loc_0025C4F0: ;
    esp = esp - 0x90;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025C541; /* je: equal / zero */

loc_0025C503: ;
    ecx = MEM32(eax + 0x74);
    MEM32(esi + 0x24) = ecx;
    edx = MEM32(eax + 0x78);
    MEM32(esi + 0x28) = edx;
    eax = MEM32(eax + 0x7C);
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(esi + 0xC0);
    ecx = MEM32(eax + 0x80);
    eax = eax + 0x80;
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x34) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x38) = eax;
    ecx = MEM32(esi + 0xC0);
    edx = MEM32(ecx + 0x60);
    MEM32(esi + 0x3C) = edx;

loc_0025C541: ;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    eax = esi + 0x24;
    fp_top() = fp_top() + MEMF(esi + 0x30); /* fadd dword ptr [esi + 0x30] */
    ecx = esi + 0x48;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    fp_push(MEMF(eax + 4)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = fp_top() + MEMF(esi + 0x34); /* fadd dword ptr [esi + 0x34] */
    ecx = esp + 0x60;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x38); /* fadd dword ptr [esi + 0x38] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0025C575u); RECOMP_ABI_CALL(0x00242B60u, sub_00242B60); /* call 0x00242B60 */

loc_0025C575: ;
    SET_LO8(eax, MEM8(esi + 0xD0));
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_0025C5AE; /* je: equal / zero */

loc_0025C587: ;
    edx = MEM32(esi + 0xD4);
    eax = MEM32(esi + 0xD8);
    ecx = MEM32(esi + 0xDC);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xE0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x0025C5ACu); RECOMP_ABI_CALL(0x0023E890u, sub_0023E890); /* call 0x0023E890 */

loc_0025C5AC: ;
    goto loc_0025C5D1;

loc_0025C5AE: ;
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    PUSH32(esp, 0x3F800000);
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    ecx = esp + 0x20;
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025C5D1u); RECOMP_ABI_CALL(0x0023E9E0u, sub_0023E9E0); /* call 0x0023E9E0 */

loc_0025C5D1: ;
    ecx = MEM32(esi + 0x5C);
    edx = MEM32(ecx);
    eax = esp + 0x54;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0025C5DEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025C5DE: ;
    ecx = MEM32(esi + 0x60);
    edx = MEM32(ecx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0025C5EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025C5EB: ;
    ecx = MEM32(0x5BE338);
    edx = MEM32(ecx + 8);
    edx = edx + MEM32(esi + 0x64);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x9C);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0025C611u); RECOMP_ABI_CALL(0x0025C370u, sub_0025C370); /* call 0x0025C370 */

loc_0025C611: ;
    POP32(esp, esi);
    esp = esp + 0x90;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0025C620
 * Original: 0x0025C620 - 0x0025C62B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C620(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025C620: ;
    ecx = MEM32(ecx + 0x90);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x68)); return; /* indirect tail jmp */

}

/**
 * sub_0025C630
 * Original: 0x0025C630 - 0x0025C660 (48 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C630: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0025C63Eu); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_0025C63E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025C65B; /* jne: not equal / not zero */

loc_0025C642: ;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x70); PUSH32(esp, 0x0025C64Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025C64C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x6C); PUSH32(esp, 0x0025C652u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025C652: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, 0x0025C65Au); RECOMP_ABI_CALL(0x0024B860u, sub_0024B860); /* call 0x0024B860 */

loc_0025C65A: ;
    POP32(esp, edi);

loc_0025C65B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025C660
 * Original: 0x0025C660 - 0x0025C690 (48 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C660(void)
{

loc_0025C660: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025C670u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025C670: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x0025C67Du); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025C67D: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025C68Au); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025C68A: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0025C690
 * Original: 0x0025C690 - 0x0025C6B7 (39 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C690(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025C690: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0025C698u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0025C698: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(esi + 8);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C6B5; /* je: equal / zero */

loc_0025C6A6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025C6ACu); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_0025C6AC: ;
    ecx = MEM32(esi + 0x14);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00209880(); return; /* tail jmp 0x00209880 */

loc_0025C6B5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025C6C0
 * Original: 0x0025C6C0 - 0x0025C716 (86 bytes, 37 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C6C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x24);
    PUSH32(esp, 0x0025C6CFu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0025C6CF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025C6D5u); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_0025C6D5: ;
    esi = eax;
    eax = MEM32(edi);
    esp = esp + 4;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0025C6E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025C6E1: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0025C6ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025C6EC: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x0025C6F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025C6F3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025C70E; /* je: equal / zero */

loc_0025C6F7: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025C70E; /* jne: not equal / not zero */

loc_0025C707: ;
    ecx = esi;
    PUSH32(esp, 0x0025C70Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025C70E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0025C720
 * Original: 0x0025C720 - 0x0025C752 (50 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C720: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x5BB964);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025C737u); RECOMP_ABI_CALL(0x001EAC30u, sub_001EAC30); /* call 0x001EAC30 */

loc_0025C737: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025C74E; /* jne: not equal / not zero */

loc_0025C73B: ;
    eax = MEM32(0x5BB964);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x3FDAC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025C74Eu); RECOMP_ABI_CALL(0x001EAC30u, sub_001EAC30); /* call 0x001EAC30 */

loc_0025C74E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025C760
 * Original: 0x0025C760 - 0x0025C777 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C760: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    SET_LO8(eax, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025C780
 * Original: 0x0025C780 - 0x0025C7B0 (48 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C780: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025C7A0; /* je: equal / zero */

loc_0025C790: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0025C797u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025C797: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0025C7A0u); RECOMP_ABI_CALL(0x001A85B0u, sub_001A85B0); /* call 0x001A85B0 */

loc_0025C7A0: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0025C7AAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025C7AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025C7B0
 * Original: 0x0025C7B0 - 0x0025C7C5 (21 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C7B0(void)
{

loc_0025C7B0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(eax + 0x28);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0025C7C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025C7C1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025C7D0
 * Original: 0x0025C7D0 - 0x0025C7EC (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C7D0(void)
{

loc_0025C7D0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025C7DDu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025C7DD: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025C7F0
 * Original: 0x0025C7F0 - 0x0025CA68 (632 bytes, 204 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C7F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025C7F0: ;
    esp = esp - 0x68;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = esi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0025C802u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025C802: ;
    ecx = MEM32(esi + 0x14);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0025C9C1; /* je: equal / zero */

loc_0025C81C: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0025C9C1; /* je: equal / zero */

loc_0025C82B: ;
    ebp = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x14) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_0025CA5E; /* jle: less or equal (signed <=) */

loc_0025C83C: ;
    ecx = MEM32(esp + 0x88);
    eax = MEM32(esp + 0x84);
    edi = ecx + 0x40;
    eax = eax - ecx;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x84) = eax;
    goto loc_0025C867;

loc_0025C85C: ;
    eax = MEM32(esp + 0x84);
    esi = MEM32(esp + 0x20);

loc_0025C867: ;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(edx + 0x10);
    esi = MEM32(ecx + ebp * 4);
    eax = eax + edi;
    PUSH32(esp, eax);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, 0x0025C881u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0025C881: ;
    eax = MEM32(esp + 0x20);
    esp = esp + 8;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0025C949; /* jle: less or equal (signed <=) */

loc_0025C892: ;
    eax = MEM32(esp + 0x90);
    ecx = MEM32(eax + 0x10);
    esi = MEM32(ecx + ebx * 4);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C930; /* jne: not equal / not zero */

loc_0025C8A8: ;
    ecx = MEM32(esp + 0x7C);
    edi = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0025C8B6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025C8B6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x94); PUSH32(esp, 0x0025C8C0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025C8C0: ;
    edi = MEM32(esi + 0xC);
    eax = MEM32(esi + 0x10);
    edi = edi + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C8DC; /* jne: not equal / not zero */

loc_0025C8CE: ;
    eax = esp + 0x38;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025C8D9u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0025C8D9: ;
    esp = esp + 8;

loc_0025C8DC: ;
    esi = MEM32(esi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C910; /* jne: not equal / not zero */

loc_0025C8E4: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x0025C8F2u); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_0025C8F2: ;
    edx = esp + 0x38;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025C8FDu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0025C8FD: ;
    esp = esp + 8;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x0025C90Eu); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_0025C90E: ;
    goto loc_0025C930;

loc_0025C910: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025C920; /* jne: not equal / not zero */

loc_0025C914: ;
    PUSH32(esp, edi);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x0025C91Eu); RECOMP_ABI_CALL(0x00242660u, sub_00242660); /* call 0x00242660 */

loc_0025C91E: ;
    goto loc_0025C930;

loc_0025C920: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C930; /* jne: not equal / not zero */

loc_0025C925: ;
    PUSH32(esp, edi);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025C930u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0025C930: ;
    eax = MEM32(esp + 0x18);
    ebp = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025C892; /* jl: less (signed <) */

loc_0025C941: ;
    edi = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x28);

loc_0025C949: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025C96B; /* je: equal / zero */

loc_0025C950: ;
    edx = MEM32(esp + 0x88);
    eax = eax << 6;
    eax = eax + edx;
    PUSH32(esp, eax);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0025C969u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0025C969: ;
    goto loc_0025C979;

loc_0025C96B: ;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025C976u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0025C976: ;
    esp = esp + 8;

loc_0025C979: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C99F; /* je: equal / zero */

loc_0025C981: ;
    edx = MEM32(esp + 0x8C);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ecx = ecx << 6;
    PUSH32(esp, esi);
    ecx = ecx + edx;
    PUSH32(esp, 0x0025C998u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0025C998: ;
    esi = esi + 0x40;
    MEM32(esp + 0x10) = esi;

loc_0025C99F: ;
    eax = MEM32(esp + 0x24);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0x40;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x1C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0025C85C; /* jl: less (signed <) */

loc_0025C9B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x68;
    esp += 28; return; /* ret 24 */

loc_0025C9C1: ;
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025CA5E; /* jle: less or equal (signed <=) */

loc_0025C9CE: ;
    ecx = MEM32(esp + 0x88);
    ebp = MEM32(esp + 0x84);
    esi = ecx + 0x40;
    ebp = ebp - ecx;
    goto loc_0025C9F0;

loc_0025C9E3: ;
    ecx = MEM32(esp + 0x88);
    /* nop */

loc_0025C9F0: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(edx + 0x10);
    edx = MEM32(eax + 0x10);
    edi = MEM32(edx + ebx * 4);
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025CA13; /* jne: not equal / not zero */

loc_0025CA04: ;
    eax = esi + ebp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025CA0Eu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0025CA0E: ;
    esp = esp + 8;
    goto loc_0025CA27;

loc_0025CA13: ;
    eax = eax << 6;
    eax = eax + ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi + ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x5BC7A8); PUSH32(esp, 0x0025CA24u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025CA24: ;
    esp = esp + 0xC;

loc_0025CA27: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025CA52; /* je: equal / zero */

loc_0025CA2F: ;
    ecx = MEM32(esp + 0x8C);
    edi = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = eax << 6;
    eax = eax + ecx;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x5BC7A8); PUSH32(esp, 0x0025CA48u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025CA48: ;
    esp = esp + 0xC;
    edi = edi + 0x40;
    MEM32(esp + 0x10) = edi;

loc_0025CA52: ;
    eax = MEM32(esp + 0x24);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025C9E3; /* jl: less (signed <) */

loc_0025CA5E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x68;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0025CA70
 * Original: 0x0025CA70 - 0x0025CAC1 (81 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025CA70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0025CAB0; /* jle: less or equal (signed <=) */

loc_0025CA81: ;
    ebx = MEM32(esp + 0x10);

loc_0025CA85: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + esi * 4);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025CA97; /* jne: not equal / not zero */

loc_0025CA92: ;
    eax = 0x3C806C;

loc_0025CA97: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025CA9Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0025CA9E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025CAB9; /* je: equal / zero */

loc_0025CAA5: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025CA85; /* jl: less (signed <) */

loc_0025CAB0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0025CAB9: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025CAD0
 * Original: 0x0025CAD0 - 0x0025CB14 (68 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025CAD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0025CADAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025CADA: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025CB04; /* jge: greater or equal (signed >=) */

loc_0025CAE2: ;
    ebx = MEM32(esp + 0x10);

loc_0025CAE6: ;
    ecx = MEM32(edi + 0x10);
    eax = MEM32(esi);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + eax * 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025CB0D; /* je: equal / zero */

loc_0025CAF9: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0025CB00u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025CB00: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025CAE6; /* jl: less (signed <) */

loc_0025CB04: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0025CB0D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025CB20
 * Original: 0x0025CB20 - 0x0025CBB2 (146 bytes, 61 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CB20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025CB20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    ebp = MEM32(edi + 0x18);
    ebp = ebp + MEM32(edi + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0025CB32u); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_0025CB32: ;
    ecx = edi;
    PUSH32(esp, 0x0025CB39u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0025CB39: ;
    ebx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0025CBAB; /* jge: greater or equal (signed >=) */

loc_0025CB44: ;
    PUSH32(esp, esi);

loc_0025CB45: ;
    eax = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esp + 0x1C); PUSH32(esp, 0x0025CB4Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025CB4E: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025CB5A; /* je: equal / zero */

loc_0025CB57: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0025CB5A: ;
    ecx = MEM32(edi + 0x10);
    ecx = MEM32(ecx + ebx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025CB79; /* je: equal / zero */

loc_0025CB64: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025CB79; /* jne: not equal / not zero */

loc_0025CB74: ;
    PUSH32(esp, 0x0025CB79u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025CB79: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025CB8E; /* je: equal / zero */

loc_0025CB80: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0025CB8E; /* jl: less (signed <) */

loc_0025CB84: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025CB8E; /* jge: greater or equal (signed >=) */

loc_0025CB88: ;
    edx = MEM32(edi + 0x10);
    MEM32(edx + ebx * 4) = esi;

loc_0025CB8E: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025CBA5; /* jne: not equal / not zero */

loc_0025CB9E: ;
    ecx = esi;
    PUSH32(esp, 0x0025CBA5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025CBA5: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025CB45; /* jl: less (signed <) */

loc_0025CBAA: ;
    POP32(esp, esi);

loc_0025CBAB: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025CBC0
 * Original: 0x0025CBC0 - 0x0025CC27 (103 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CBC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025CBC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    edx = MEM32(edi + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0025CC22; /* jle: less or equal (signed <=) */

loc_0025CBCD: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(esp + 0xC);

loc_0025CBD4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025CBE5; /* je: equal / zero */

loc_0025CBD8: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025CBD4; /* jl: less (signed <) */

loc_0025CBE0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0025CBE5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0025CC22; /* jl: less (signed <) */

loc_0025CBE9: ;
    SET_LO8(eax, MEM8(edi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025CBF5; /* je: equal / zero */

loc_0025CBF0: ;
    PUSH32(esp, 0x0025CBF5u); RECOMP_ABI_CALL(0x001EA640u, sub_001EA640); /* call 0x001EA640 */

loc_0025CBF5: ;
    ecx = MEM32(edi + 0x14);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(edi + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0025CC22; /* je: equal / zero */

loc_0025CC00: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025CC22; /* je: equal / zero */

loc_0025CC07: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0025CC22; /* jl: less (signed <) */

loc_0025CC0B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025CC22; /* jge: greater or equal (signed >=) */

loc_0025CC0F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025CC22; /* jge: greater or equal (signed >=) */

loc_0025CC13: ;
    eax = MEM32(edi + 0x10);
    edi = MEM32(eax + esi * 4);
    edx = MEM32(eax + ecx * 4);
    MEM32(eax + ecx * 4) = edi;
    MEM32(eax + esi * 4) = edx;

loc_0025CC22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025CC30
 * Original: 0x0025CC30 - 0x0025CCF6 (198 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CC30(void)
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

loc_0025CC30: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 8)); /* fld float */
    PUSH32(esp, edi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    edi = 0; /* xor self */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0025CC53; /* jp: parity */

loc_0025CC4B: ;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x2C) = edi;
    goto loc_0025CC69;

loc_0025CC53: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(esi + 8); /* fdiv dword ptr [esi + 8] */
    MEMF(esi + 0x28) = (float)fp_top(); /* fst */
    fp_push((double)SMEM32(esi + 0x14)); /* fild */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_0025CC69: ;
    fp_push((double)SMEM32(esi + 0xC)); /* fild */
    edx = MEM32(esi + 0x18);
    MEM32(esp + 0x10) = 0x3F800000;
    eax = esp + 8;
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    PUSH32(esp, eax);
    MEMF(esi + 0x30) = (float)fp_top(); /* fst */
    fp_push((double)SMEM32(esi + 0x10)); /* fild */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    MEMF(esi + 0x34) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    ecx = MEM32(0x5BE338);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ecx + 8);
    ecx = ecx + edx;
    PUSH32(esp, 0x0025CCABu); RECOMP_ABI_CALL(0x0023E540u, sub_0023E540); /* call 0x0023E540 */

loc_0025CCAB: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025CCDD; /* je: equal / zero */

loc_0025CCB2: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(esi + 0x30);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(0x5BE338);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0x10) = 0x3F800000;
    ecx = MEM32(ecx + 8);
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = ecx + eax;
    PUSH32(esp, 0x0025CCDDu); RECOMP_ABI_CALL(0x0023E540u, sub_0023E540); /* call 0x0023E540 */

loc_0025CCDD: ;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x44) = edi;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 0x4C) = edi;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0025CD00
 * Original: 0x0025CD00 - 0x0025CD4F (79 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CD00(void)
{
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

loc_0025CD00: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x14) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    edx = MEM32(ecx + 0x10);
    edx = edx - eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = fp_top() * MEMF(ecx + 0x30); /* fmul dword ptr [ecx + 0x30] */
    MEM32(esp + 0x14) = edx;
    eax = esp + 4;
    PUSH32(esp, eax);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMF(ecx + 0x34); /* fmul dword ptr [ecx + 0x34] */
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0025CD48u); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_0025CD48: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0025CD50
 * Original: 0x0025CD50 - 0x0025CD72 (34 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CD50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025CD50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0025CD58u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025CD58: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025CD61; /* jle: less or equal (signed <=) */

loc_0025CD5D: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0025CD61: ;
    ecx = MEM32(esi + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025CD6C; /* jne: not equal / not zero */

loc_0025CD68: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0025CD6C: ;
    edx = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x6C)); return; /* indirect tail jmp */

}

/**
 * sub_0025CD80
 * Original: 0x0025CD80 - 0x0025CD9F (31 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CD80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025CD80: ;
    eax = ecx;
    ecx = MEM32(eax + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025CD9A; /* jne: not equal / not zero */

loc_0025CD89: ;
    ecx = eax + 0x20;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025CD97u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0025CD97: ;
    esp += 8; return; /* ret 4 */

loc_0025CD9A: ;
    edx = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x70)); return; /* indirect tail jmp */

}

/**
 * sub_0025CDA0
 * Original: 0x0025CDA0 - 0x0025CDBA (26 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CDA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025CDA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025CDB8; /* je: equal / zero */

loc_0025CDAA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0025CDAFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025CDAF: ;
    ecx = esi + 0x20;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0023DC50(); return; /* tail jmp 0x0023DC50 */

loc_0025CDB8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025CDC0
 * Original: 0x0025CDC0 - 0x0025CE11 (81 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CDC0(void)
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

loc_0025CDC0: ;
    fp_push(MEMF(0x5BC9D0)); /* fld float */
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0025CE0E; /* jp: parity */

loc_0025CDD2: ;
    fp_push(MEMF(0x5BC9D4)); /* fld float */
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0025CE0E; /* jp: parity */

loc_0025CDE4: ;
    fp_push(MEMF(0x5BC9D8)); /* fld float */
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0025CE0E; /* jp: parity */

loc_0025CDF6: ;
    eax = MEM32(ecx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025CE0E; /* jne: not equal / not zero */

loc_0025CDFD: ;
    eax = MEM32(ecx + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025CE0E; /* jne: not equal / not zero */

loc_0025CE04: ;
    eax = MEM32(ecx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025CE0E; /* jne: not equal / not zero */

loc_0025CE0B: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0025CE0E: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0025CE20
 * Original: 0x0025CE20 - 0x0025D100 (736 bytes, 263 insns)
 * Category: game_vtable
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0025CE20(void)
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

loc_0025CE20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x2C;
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_0025CE81; /* je: equal / zero */

loc_0025CE3D: ;
    edx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0025CE4Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025CE4A: ;
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(esi);
    eax = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0025CE5Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025CE5A: ;
    ecx = MEM32(ebp + 0x1C);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CE71u); RECOMP_ABI_CALL(0x0023FC50u, sub_0023FC50); /* call 0x0023FC50 */

loc_0025CE71: ;
    ecx = MEM32(ebp + 0x18);
    edx = MEM32(ebx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0025CE81u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025CE81: ;
    edx = MEM32(ebp + 0x20);
    eax = MEM32(edx);
    eax = eax >> 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025CF61; /* je: equal / zero */

loc_0025CE90: ;
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0025CEA0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025CEA0: ;
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0025CEB3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025CEB3: ;
    ecx = MEM32(ebp + 0x1C);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CECAu); RECOMP_ABI_CALL(0x0023FC50u, sub_0023FC50); /* call 0x0023FC50 */

loc_0025CECA: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x34); /* fmul dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x2C); /* fmul dword ptr [esp + 0x2c] */
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
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x34); /* fmul dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x2C); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C94AC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c94ac] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0025CF51; /* jp: parity */

loc_0025CF39: ;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0x3DCCCCCD;

loc_0025CF51: ;
    ecx = MEM32(ebp + 0x18);
    edx = MEM32(ebx);
    eax = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0025CF61u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025CF61: ;
    edx = MEM32(ebp + 0x20);
    eax = MEM32(edx);
    eax = eax >> 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025CFC7; /* je: equal / zero */

loc_0025CF6D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x0025CF78u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025CF78: ;
    ecx = MEM32(ebp + 0x14);
    edi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x0025CF88u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025CF88: ;
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0025CF9C; /* jge: greater or equal (signed >=) */

loc_0025CF96: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0025CF9C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    fp_top() = fp_top() * MEMF(ebp + 0x1C); /* fmul dword ptr [ebp + 0x1c] */
    MEM32(esp + 0xC) = edi;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0025CFB1; /* jge: greater or equal (signed >=) */

loc_0025CFAB: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0025CFB1: ;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CFB8u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0025CFB8: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0025CFC7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025CFC7: ;
    ecx = MEM32(ebp + 0x20);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ecx + 2));
    edi = 0;
    edx = edx & 0xF;
    MEM32(esp + 0xC) = edx;
    if (0) goto loc_0025D03C; /* jbe: below or equal (unsigned <=) */

loc_0025CFDD: ;
    /* nop */

loc_0025CFE0: ;
    edx = MEM32(ebp + 0x10);
    eax = MEM32(esi);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x0025CFF4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025CFF4: ;
    edx = MEM32(ebp + 0x14);
    eax = MEM32(esi);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x0025D008u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025D008: ;
    edx = MEM32(ebp + 0x1C);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D01Fu); RECOMP_ABI_CALL(0x0023FB20u, sub_0023FB20); /* call 0x0023FB20 */

loc_0025D01F: ;
    edx = MEM32(ebp + 0x18);
    eax = MEM32(ebx);
    ecx = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x0025D033u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025D033: ;
    eax = MEM32(esp + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025CFE0; /* jb: below (unsigned <) */

loc_0025D03C: ;
    eax = MEM32(ebp + 0x20);
    eax = MEM32(eax);
    eax = eax >> 0x14;
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D095; /* jne: not equal / not zero */

loc_0025D04A: ;
    eax = MEM32(ebp + 0x10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x0025D058u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025D058: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x0025D06Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025D06A: ;
    ecx = MEM32(ebp + 0x18);
    edx = MEM32(ebx);
    fp_top() = fp_top() - MEMF(esp + 0xC); /* fsub dword ptr [esp + 0xc] */
    fp_top() = fp_top() * MEMF(ebp + 0x1C); /* fmul dword ptr [ebp + 0x1c] */
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x0025D08Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025D08C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

loc_0025D095: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D0F7; /* jne: not equal / not zero */

loc_0025D099: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(esi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x0025D0ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025D0AC: ;
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x0025D0BFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025D0BF: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0xC); /* fsub dword ptr [esp + 0xc] */
    esp = esp - 8;
    eax = esp;
    ecx = ebx;
    fp_top() = fp_top() * MEMF(ebp + 0x1C); /* fmul dword ptr [ebp + 0x1c] */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x18); /* fsub dword ptr [esp + 0x18] */
    fp_top() = fp_top() * MEMF(ebp + 0x1C); /* fmul dword ptr [ebp + 0x1c] */
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + 0x18);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x0025D0F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025D0F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0025D100
 * Original: 0x0025D100 - 0x0025D160 (96 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D100(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025D100: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_BE(_fa & _fb, 0)) goto loc_0025D14E; /* jbe: below or equal (unsigned <=) */

loc_0025D118: ;
    PUSH32(esp, esi);
    /* nop */

loc_0025D120: ;
    ecx = MEM32(ebx + 0x20);
    edx = MEM32(ecx + 0x10);
    esi = MEM32(edx + edi * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025D148; /* je: equal / zero */

loc_0025D12D: ;
    eax = MEM32(0x5BE600);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025D13Au); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0025D13A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025D148; /* je: equal / zero */

loc_0025D13E: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0025D148u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025D148: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025D120; /* jb: below (unsigned <) */

loc_0025D14D: ;
    POP32(esp, esi);

loc_0025D14E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025D160
 * Original: 0x0025D160 - 0x0025D1D6 (118 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D160(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025D160: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0025D16Bu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0025D16B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025D171u); RECOMP_ABI_CALL(0x002A0680u, sub_002A0680); /* call 0x002A0680 */

loc_0025D171: ;
    ebx = MEM32(esp + 0x1C);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x0025D189u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025D189: ;
    ebp = MEM32(esp + 0x14);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = ebx + ebx * 2;
    PUSH32(esp, edx);
    edx = MEM32(ecx);
    MEM32(esp + 0x24) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0025D1A3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025D1A3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0025D1ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025D1AD: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x0025D1B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025D1B8: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025D1CF; /* jne: not equal / not zero */

loc_0025D1C8: ;
    ecx = esi;
    PUSH32(esp, 0x0025D1CFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025D1CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025D1E0
 * Original: 0x0025D1E0 - 0x0025D39F (447 bytes, 144 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0025D1E0(void)
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

loc_0025D1E0: ;
    esp = esp - 0x24;
    eax = MEM32(esp + 0x34);
    fp_push(MEMF(eax)); /* fld float */
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x44);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x48);
    ebp = MEM32(esp + 0x50);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x40);
    fp_top() = fp_top() - MEMF(edi); /* fsub dword ptr [edi] */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = fp_top() - MEMF(esi); /* fsub dword ptr [esi] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 4); /* fsub dword ptr [esi + 4] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    ecx = esp + 0x18;
    fp_top() = fp_top() - MEMF(edi); /* fsub dword ptr [edi] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp)); /* fld float */
    fp_top() = fp_top() - MEMF(esi); /* fsub dword ptr [esi] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 4); /* fsub dword ptr [esi + 4] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0025D247u); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_0025D247: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x401650)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x401650] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025D27E; /* jne: not equal / not zero */

loc_0025D25A: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    ecx = MEM32(esp + 0x38);
    fp_top() = fp_top() / MEMF(esp + 0x10); /* fdiv dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x3C);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */

loc_0025D27E: ;
    eax = MEM32(esp + 0x44);
    fp_push(MEMF(eax + 4)); /* fld float */
    ecx = MEM32(esp + 0x48);
    fp_top() = fp_top() - MEMF(edi + 4); /* fsub dword ptr [edi + 4] */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = fp_top() - MEMF(esi); /* fsub dword ptr [esi] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 4); /* fsub dword ptr [esi + 4] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    ecx = esp + 0x18;
    fp_top() = fp_top() - MEMF(edi + 4); /* fsub dword ptr [edi + 4] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp)); /* fld float */
    fp_top() = fp_top() - MEMF(esi); /* fsub dword ptr [esi] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 4); /* fsub dword ptr [esi + 4] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0025D2D2u); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_0025D2D2: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x401650)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x401650] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025D30B; /* jne: not equal / not zero */

loc_0025D2E5: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    ecx = MEM32(esp + 0x38);
    fp_top() = fp_top() / MEMF(esp + 0x10); /* fdiv dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x3C);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0025D30B: ;
    eax = MEM32(esp + 0x44);
    fp_push(MEMF(eax + 8)); /* fld float */
    ecx = MEM32(esp + 0x48);
    fp_top() = fp_top() - MEMF(edi + 8); /* fsub dword ptr [edi + 8] */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = fp_top() - MEMF(esi); /* fsub dword ptr [esi] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 4); /* fsub dword ptr [esi + 4] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    ecx = esp + 0x18;
    fp_top() = fp_top() - MEMF(edi + 8); /* fsub dword ptr [edi + 8] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp)); /* fld float */
    fp_top() = fp_top() - MEMF(esi); /* fsub dword ptr [esi] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 4); /* fsub dword ptr [esi + 4] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0025D35Fu); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_0025D35F: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    POP32(esp, edi);
    fp_top() = fabs(fp_top()); /* fabs */
    POP32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x401650)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x401650] */
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025D39B; /* jne: not equal / not zero */

loc_0025D376: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    ecx = MEM32(esp + 0x28);
    fp_top() = fp_top() / MEMF(esp); /* fdiv dword ptr [esp] */
    edx = MEM32(esp + 0x2C);
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0025D39B: ;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0025D3A0
 * Original: 0x0025D3A0 - 0x0025D3FC (92 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D3A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025D3A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0x20);
    ebx = ecx;
    ecx = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0025D3F6; /* jle: less or equal (signed <=) */

loc_0025D3B5: ;
    PUSH32(esp, esi);

loc_0025D3B6: ;
    eax = MEM32(eax + 0x10);
    esi = MEM32(eax + edi * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025D3EA; /* je: equal / zero */

loc_0025D3C0: ;
    ecx = MEM32(0x5BE600);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0025D3CEu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0025D3CE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025D3EA; /* je: equal / zero */

loc_0025D3D2: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D3EA; /* jne: not equal / not zero */

loc_0025D3D8: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025D3EA; /* je: equal / zero */

loc_0025D3DF: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x0025D3EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025D3EA: ;
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(eax + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025D3B6; /* jl: less (signed <) */

loc_0025D3F5: ;
    POP32(esp, esi);

loc_0025D3F6: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025D400
 * Original: 0x0025D400 - 0x0025D4D0 (208 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D400(void)
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

loc_0025D400: ;
    esp = esp - 0x4C;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(0x5BDFD0));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025D443; /* jne: not equal / not zero */

loc_0025D415: ;
    MEM32(0x5BDFD0) = MEM32(0x5BDFD0) | eax;
    MEM32(0x5BDFC0) = 0;
    MEM32(0x5BDFC4) = 0;
    MEM32(0x5BDFC8) = 0;
    MEM32(0x5BDFCC) = 0x3F800000;

loc_0025D443: ;
    SET_LO8(eax, MEM8(esi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025D4C9; /* je: equal / zero */

loc_0025D44A: ;
    eax = MEM32(esp + 0x54);
    eax = eax + 0xA4;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025D45Eu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0025D45E: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    eax = MEM32(0x5BDFC4);
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    edx = MEM32(0x5BDFC0);
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    ecx = MEM32(0x5BDFC8);
    fp_push(MEMF(esp + 0x40)); /* fld float */
    MEM32(esp + 0x4C) = eax;
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEM32(esp + 0x48) = edx;
    edx = MEM32(0x5BDFCC);
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(esi + 0x78);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x40) = eax;
    esp = esp + 8;
    eax = esp + 0x10;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0025D4C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025D4C9: ;
    POP32(esp, esi);
    esp = esp + 0x4C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0025D4D0
 * Original: 0x0025D4D0 - 0x0025D602 (306 bytes, 105 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D4D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025D4D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0025D4D9u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0025D4D9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025D4DFu); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_0025D4DF: ;
    esi = eax;
    SET_LO8(eax, MEM8(edi + 0x30));
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025D575; /* je: equal / zero */

loc_0025D4EF: ;
    ecx = MEM32(edi + 0x40);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM8(edi + 0x48) = 1;
    PUSH32(esp, 0x0025D4FDu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D4FD: ;
    ecx = MEM32(edi + 0x44);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025D506u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D506: ;
    eax = MEM32(0x5BDF68);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025D513u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D513: ;
    ecx = edi;
    PUSH32(esp, 0x0025D51Au); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0025D51A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebp = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0025D537; /* je: equal / zero */

loc_0025D520: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025D537; /* jne: not equal / not zero */

loc_0025D530: ;
    ecx = esi;
    PUSH32(esp, 0x0025D537u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025D537: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0025D53Du); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_0025D53D: ;
    ecx = MEM32(edi + 0x74);
    esp = esp + 4;
    esi = eax;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0025D54Du); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D54D: ;
    edx = MEM32(0x5BDD64);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0025D55Bu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D55B: ;
    eax = MEM32(0x5BDF3C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025D568u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D568: ;
    ecx = MEM32(edi + 0x54);
    MEM32(ecx + 0xC) = 0;
    POP32(esp, ebp);
    goto loc_0025D583;

loc_0025D575: ;
    edx = MEM32(edi + 0x54);
    MEM8(edi + 0x48) = 0;
    MEM32(edx + 0xC) = 2;

loc_0025D583: ;
    ecx = MEM32(edi + 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025D58Cu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D58C: ;
    ecx = MEM32(edi + 0x44);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025D595u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D595: ;
    SET_LO8(eax, MEM8(edi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025D5B4; /* je: equal / zero */

loc_0025D59C: ;
    eax = MEM32(0x5BDF28);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025D5A9u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D5A9: ;
    ecx = MEM32(edi + 0x78);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0025D5B4u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D5B4: ;
    edx = MEM32(edi + 0x50);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0025D5BFu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D5BF: ;
    eax = MEM32(0x5BDD60);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025D5CCu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D5CC: ;
    ecx = MEM32(edi + 0x4C);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0025D5D7u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D5D7: ;
    edx = MEM32(edi + 0x54);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0025D5E2u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D5E2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025D5FD; /* je: equal / zero */

loc_0025D5E6: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025D5FD; /* jne: not equal / not zero */

loc_0025D5F6: ;
    ecx = esi;
    PUSH32(esp, 0x0025D5FDu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025D5FD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025D610
 * Original: 0x0025D610 - 0x0025D7BA (426 bytes, 153 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025D610: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0025D61Au); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0025D61A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025D620u); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_0025D620: ;
    esp = esp + 4;
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x0025D62Cu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0025D62C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025D632u); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_0025D632: ;
    ecx = MEM32(esi + 0x40);
    esp = esp + 4;
    PUSH32(esp, ebx);
    edi = eax;
    PUSH32(esp, 0x0025D640u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D640: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025D649u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D649: ;
    MEM8(esi + 0x48) = 0;
    eax = MEM32(0x5BDD60);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0025D65Au); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D65A: ;
    ecx = MEM32(0x5BDD60);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0025D668u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D668: ;
    edx = MEM32(esi + 0x24);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0025D673u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D673: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0025D67Eu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D67E: ;
    ecx = MEM32(esi + 0x5C);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0025D689u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D689: ;
    edx = MEM32(esi + 0x5C);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0025D694u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D694: ;
    eax = MEM32(esi + 0x60);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0025D69Fu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D69F: ;
    ecx = MEM32(esi + 0x60);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0025D6AAu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D6AA: ;
    edx = MEM32(esi + 0x58);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0025D6B5u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D6B5: ;
    eax = MEM32(esi + 0x58);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0025D6C0u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D6C0: ;
    SET_LO8(eax, MEM8(esi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025D703; /* je: equal / zero */

loc_0025D6C7: ;
    ecx = MEM32(0x5BDF54);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0025D6D5u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D6D5: ;
    edx = MEM32(0x5BDF54);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0025D6E3u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D6E3: ;
    ecx = MEM32(esi + 0x78);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0025D6EDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025D6ED: ;
    ecx = MEM32(esi + 0x78);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0025D6F8u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D6F8: ;
    edx = MEM32(esi + 0x78);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0025D703u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D703: ;
    eax = MEM32(0x5BDF60);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0025D710u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D710: ;
    ecx = MEM32(0x5BDF60);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0025D71Eu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D71E: ;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0025D728u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025D728: ;
    eax = MEM32(esi + 0x4C);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0025D733u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D733: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0025D73Eu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D73E: ;
    ecx = MEM32(esi + 0x54);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0025D748u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025D748: ;
    eax = MEM32(esi + 0x54);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0025D753u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D753: ;
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0025D75Eu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D75E: ;
    ecx = MEM32(esi + 0x50);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0025D768u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025D768: ;
    eax = MEM32(esi + 0x50);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0025D773u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D773: ;
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0025D77Eu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D77E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025D799; /* je: equal / zero */

loc_0025D782: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025D799; /* jne: not equal / not zero */

loc_0025D792: ;
    ecx = edi;
    PUSH32(esp, 0x0025D799u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025D799: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025D7B4; /* je: equal / zero */

loc_0025D79D: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025D7B4; /* jne: not equal / not zero */

loc_0025D7AD: ;
    ecx = ebx;
    PUSH32(esp, 0x0025D7B4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025D7B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025D7C0
 * Original: 0x0025D7C0 - 0x0025D83F (127 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025D7C0: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0025D7CEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025D7CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025D7E1; /* jle: less or equal (signed <=) */

loc_0025D7D3: ;
    SET_LO8(eax, MEM8(edi + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025D7E1; /* jne: not equal / not zero */

loc_0025D7DA: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025D7E7; /* jne: not equal / not zero */

loc_0025D7E1: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0025D7E7: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025D838; /* je: equal / zero */

loc_0025D7EF: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0025D7F8u); RECOMP_ABI_CALL(0x00298FD0u, sub_00298FD0); /* call 0x00298FD0 */

loc_0025D7F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025D838; /* je: equal / zero */

loc_0025D7FC: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0025D805u); RECOMP_ABI_CALL(0x00298FD0u, sub_00298FD0); /* call 0x00298FD0 */

loc_0025D805: ;
    ecx = MEM32(edi + 0x4C);
    esi = MEM32(eax + 0x44);
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025D814u); RECOMP_ABI_CALL(0x0024A780u, sub_0024A780); /* call 0x0024A780 */

loc_0025D814: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025D838; /* je: equal / zero */

loc_0025D81B: ;
    eax = MEM32(eax + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025D838; /* je: equal / zero */

loc_0025D822: ;
    eax = MEM32(eax + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D831; /* je: equal / zero */

loc_0025D829: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025D831; /* je: equal / zero */

loc_0025D82D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025D838; /* jne: not equal / not zero */

loc_0025D831: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0025D838: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025D840
 * Original: 0x0025D840 - 0x0025DA84 (580 bytes, 208 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025D840(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025D840: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025D858; /* jne: not equal / not zero */

loc_0025D84A: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025D854u); RECOMP_ABI_CALL(0x0025D4D0u, sub_0025D4D0); /* call 0x0025D4D0 */

loc_0025D854: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0025D858: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025D863u); RECOMP_ABI_CALL(0x0025D7C0u, sub_0025D7C0); /* call 0x0025D7C0 */

loc_0025D863: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0025D874; /* je: equal / zero */

loc_0025D869: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025D86Fu); RECOMP_ABI_CALL(0x0025D610u, sub_0025D610); /* call 0x0025D610 */

loc_0025D86F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0025D874: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0025D87Bu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0025D87B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025D881u); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_0025D881: ;
    esp = esp + 4;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0025D88Du); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0025D88D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025D893u); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_0025D893: ;
    MEM8(esi + 0x48) = 1;
    ecx = MEM32(0x5BDD60);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x0025D8AAu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D8AA: ;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025D8B3u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D8B3: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0025D8BCu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D8BC: ;
    edx = MEM32(esi + 0x24);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0025D8C7u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D8C7: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0025D8D2u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D8D2: ;
    ecx = MEM32(esi + 0x5C);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0025D8DDu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D8DD: ;
    edx = MEM32(esi + 0x5C);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0025D8E8u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D8E8: ;
    eax = MEM32(esi + 0x60);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0025D8F3u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D8F3: ;
    ecx = MEM32(esi + 0x60);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0025D8FEu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D8FE: ;
    edx = MEM32(esi + 0x58);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0025D909u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D909: ;
    eax = MEM32(esi + 0x58);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0025D914u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D914: ;
    ecx = esi;
    PUSH32(esp, 0x0025D91Bu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0025D91B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebp = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0025D938; /* je: equal / zero */

loc_0025D921: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025D938; /* jne: not equal / not zero */

loc_0025D931: ;
    ecx = edi;
    PUSH32(esp, 0x0025D938u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025D938: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0025D93Eu); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_0025D93E: ;
    esp = esp + 4;
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x0025D94Au); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0025D94A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0025D967; /* je: equal / zero */

loc_0025D950: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025D967; /* jne: not equal / not zero */

loc_0025D960: ;
    ecx = ebx;
    PUSH32(esp, 0x0025D967u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025D967: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025D96Du); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_0025D96D: ;
    ecx = MEM32(esi + 0x40);
    esp = esp + 4;
    PUSH32(esp, ebp);
    edi = eax;
    PUSH32(esp, 0x0025D97Bu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D97B: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025D984u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D984: ;
    ecx = MEM32(0x5BDD60);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0025D992u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D992: ;
    SET_LO8(eax, MEM8(esi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025D9CA; /* je: equal / zero */

loc_0025D999: ;
    edx = MEM32(0x5BDF28);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0025D9A7u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D9A7: ;
    eax = MEM32(0x5BDF28);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0025D9B4u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D9B4: ;
    ecx = MEM32(esi + 0x78);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0025D9BFu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D9BF: ;
    edx = MEM32(esi + 0x78);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0025D9CAu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D9CA: ;
    eax = MEM32(esi + 0x74);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0025D9D5u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D9D5: ;
    ecx = MEM32(esi + 0x74);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0025D9E0u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D9E0: ;
    edx = MEM32(0x5BDD64);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0025D9EEu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D9EE: ;
    eax = MEM32(0x5BDD64);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0025D9FBu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025D9FB: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0025DA06u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DA06: ;
    edx = MEM32(esi + 0x4C);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0025DA11u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DA11: ;
    eax = MEM32(esi + 0x54);
    MEM32(eax + 0xC) = 0;
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0025DA26u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DA26: ;
    edx = MEM32(esi + 0x54);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0025DA31u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DA31: ;
    eax = MEM32(esi + 0x50);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0025DA3Cu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DA3C: ;
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0025DA47u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DA47: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025DA62; /* je: equal / zero */

loc_0025DA4B: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025DA62; /* jne: not equal / not zero */

loc_0025DA5B: ;
    ecx = edi;
    PUSH32(esp, 0x0025DA62u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025DA62: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025DA7D; /* je: equal / zero */

loc_0025DA66: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025DA7D; /* jne: not equal / not zero */

loc_0025DA76: ;
    ecx = ebp;
    PUSH32(esp, 0x0025DA7Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025DA7D: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025DA90
 * Original: 0x0025DA90 - 0x0025DD7C (748 bytes, 263 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025DA90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025DA90: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    esi = ecx;
    PUSH32(esp, 8);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0025DAA1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025DAA1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    ecx = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_0025DAB3; /* jge: greater or equal (signed >=) */

loc_0025DAA8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025DAAEu); RECOMP_ABI_CALL(0x0025D840u, sub_0025D840); /* call 0x0025D840 */

loc_0025DAAE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0025DAB3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM8(esi + 0x48) = 1;
    PUSH32(esp, 0x0025DABEu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0025DABE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025DAC4u); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_0025DAC4: ;
    esp = esp + 4;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0025DAD0u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0025DAD0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025DAD6u); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_0025DAD6: ;
    ecx = MEM32(esi + 0x40);
    esp = esp + 4;
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x0025DAE4u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DAE4: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0025DAEDu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DAED: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025DB4F; /* je: equal / zero */

loc_0025DAF4: ;
    ecx = MEM32(0x5BDD60);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0025DB02u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DB02: ;
    edx = MEM32(esi + 0x58);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0025DB0Du); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DB0D: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0025DB18u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DB18: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0025DB23u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DB23: ;
    edx = MEM32(esi + 0x5C);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0025DB2Eu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DB2E: ;
    eax = MEM32(esi + 0x5C);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0025DB39u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DB39: ;
    ecx = MEM32(esi + 0x60);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0025DB44u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DB44: ;
    edx = MEM32(esi + 0x60);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0025DB4Fu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DB4F: ;
    ecx = esi;
    PUSH32(esp, 0x0025DB56u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0025DB56: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebp = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0025DB73; /* je: equal / zero */

loc_0025DB5C: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025DB73; /* jne: not equal / not zero */

loc_0025DB6C: ;
    ecx = edi;
    PUSH32(esp, 0x0025DB73u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025DB73: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0025DB79u); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_0025DB79: ;
    esp = esp + 4;
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x0025DB85u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0025DB85: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0025DBA2; /* je: equal / zero */

loc_0025DB8B: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025DBA2; /* jne: not equal / not zero */

loc_0025DB9B: ;
    ecx = ebx;
    PUSH32(esp, 0x0025DBA2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025DBA2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025DBA8u); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_0025DBA8: ;
    ecx = MEM32(esi + 0x40);
    esp = esp + 4;
    PUSH32(esp, ebp);
    edi = eax;
    PUSH32(esp, 0x0025DBB6u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DBB6: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025DBBFu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DBBF: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025DBD9; /* je: equal / zero */

loc_0025DBC6: ;
    eax = MEM32(0x5BDD60);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0025DBD3u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DBD3: ;
    ecx = MEM32(esi + 0x58);
    PUSH32(esp, ecx);
    goto loc_0025DBED;

loc_0025DBD9: ;
    edx = MEM32(0x5BDD60);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0025DBE7u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DBE7: ;
    eax = MEM32(0x5BDD60);
    PUSH32(esp, eax);

loc_0025DBED: ;
    ecx = edi;
    PUSH32(esp, 0x0025DBF4u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DBF4: ;
    ecx = MEM32(esi + 0x74);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0025DBFFu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DBFF: ;
    edx = MEM32(esi + 0x74);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0025DC0Au); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DC0A: ;
    eax = MEM32(0x5BDD64);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0025DC17u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DC17: ;
    ecx = MEM32(0x5BDD64);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0025DC25u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DC25: ;
    edx = MEM32(0x5BDF3C);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0025DC33u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DC33: ;
    eax = MEM32(0x5BDF3C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0025DC40u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DC40: ;
    ecx = MEM32(esi + 0x84);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0025DC4Eu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DC4E: ;
    edx = MEM32(esi + 0x84);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0025DC5Cu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DC5C: ;
    eax = MEM32(esi + 0x88);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0025DC6Au); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DC6A: ;
    ecx = MEM32(esi + 0x88);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0025DC78u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DC78: ;
    SET_LO8(eax, MEM8(esi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025DCBA; /* je: equal / zero */

loc_0025DC7F: ;
    edx = MEM32(0x5BDF54);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0025DC8Du); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DC8D: ;
    eax = MEM32(0x5BDF54);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0025DC9Au); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DC9A: ;
    ecx = MEM32(esi + 0x78);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0025DCA4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025DCA4: ;
    eax = MEM32(esi + 0x78);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0025DCAFu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DCAF: ;
    ecx = MEM32(esi + 0x78);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0025DCBAu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DCBA: ;
    edx = MEM32(0x5BDF60);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0025DCC8u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DCC8: ;
    eax = MEM32(0x5BDF60);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0025DCD5u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DCD5: ;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0025DCDFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025DCDF: ;
    eax = MEM32(esi + 0x4C);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0025DCEAu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DCEA: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0025DCF5u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DCF5: ;
    ecx = MEM32(esi + 0x54);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0025DCFFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025DCFF: ;
    eax = MEM32(esi + 0x54);
    MEM32(eax + 0xC) = 1;
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0025DD14u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DD14: ;
    edx = MEM32(esi + 0x54);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0025DD1Fu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DD1F: ;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0025DD29u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025DD29: ;
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0025DD34u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DD34: ;
    edx = MEM32(esi + 0x50);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0025DD3Fu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DD3F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025DD5A; /* je: equal / zero */

loc_0025DD43: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025DD5A; /* jne: not equal / not zero */

loc_0025DD53: ;
    ecx = edi;
    PUSH32(esp, 0x0025DD5Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025DD5A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025DD75; /* je: equal / zero */

loc_0025DD5E: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025DD75; /* jne: not equal / not zero */

loc_0025DD6E: ;
    ecx = ebp;
    PUSH32(esp, 0x0025DD75u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025DD75: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025DD80
 * Original: 0x0025DD80 - 0x0025E0E5 (869 bytes, 289 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025DD80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025DD80: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0025DD8Eu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0025DD8E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025DD94u); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_0025DD94: ;
    edi = eax;
    esp = esp + 4;
    ecx = esi;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0x0025DDA4u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0025DDA4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025DDAAu); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_0025DDAA: ;
    ecx = MEM32(esi + 0x40);
    esp = esp + 4;
    ebx = eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x0025DDBCu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DDBC: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0025DDC5u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DDC5: ;
    ecx = esi;
    PUSH32(esp, 0x0025DDCCu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0025DDCC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025DDD2u); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_0025DDD2: ;
    esp = esp + 4;
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x0025DDDEu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0025DDDE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025DDE4u); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_0025DDE4: ;
    ecx = MEM32(esi + 0x40);
    esp = esp + 4;
    edi = eax;
    PUSH32(esp, ebp);
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0x0025DDF6u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DDF6: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025DDFFu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DDFF: ;
    ecx = esi;
    PUSH32(esp, 0x0025DE06u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0025DE06: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025DE0Cu); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_0025DE0C: ;
    esp = esp + 4;
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x0025DE18u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0025DE18: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025DE1Eu); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_0025DE1E: ;
    ecx = MEM32(esi + 0x40);
    esp = esp + 4;
    PUSH32(esp, ebx);
    edi = eax;
    PUSH32(esp, 0x0025DE2Cu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DE2C: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025DE35u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DE35: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esi + 0x48) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0025DEC6; /* je: equal / zero */

loc_0025DE44: ;
    eax = MEM32(0x5BDD60);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025DE53u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DE53: ;
    ecx = MEM32(0x5BDD60);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0025DE61u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DE61: ;
    edx = MEM32(esi + 0x24);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025DE6Eu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DE6E: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025DE7Bu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DE7B: ;
    ecx = MEM32(esi + 0x5C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x0025DE88u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DE88: ;
    edx = MEM32(esi + 0x5C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025DE95u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DE95: ;
    eax = MEM32(esi + 0x60);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025DEA2u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DEA2: ;
    ecx = MEM32(esi + 0x60);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x0025DEAFu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DEAF: ;
    edx = MEM32(esi + 0x58);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025DEBCu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DEBC: ;
    eax = MEM32(esi + 0x58);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    goto loc_0025DEDD;

loc_0025DEC6: ;
    ecx = MEM32(0x5BDD60);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0025DED4u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DED4: ;
    edx = MEM32(0x5BDD60);
    PUSH32(esp, edx);
    ecx = edi;

loc_0025DEDD: ;
    PUSH32(esp, 0x0025DEE2u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DEE2: ;
    eax = MEM32(esi + 0x54);
    MEM32(eax + 0xC) = 0;
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0025DEF7u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DEF7: ;
    edx = MEM32(esi + 0x54);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0025DF02u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DF02: ;
    eax = MEM32(0x5BDD68);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0025DF0Fu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DF0F: ;
    ecx = MEM32(0x5BDD68);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x0025DF1Fu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DF1F: ;
    edx = MEM32(esi + 0x68);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0025DF2Au); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DF2A: ;
    eax = MEM32(esi + 0x68);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025DF37u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DF37: ;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0025DF42u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DF42: ;
    edx = MEM32(esi + 0x64);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025DF4Fu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DF4F: ;
    eax = MEM32(0x5BDF2C);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0025DF5Cu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DF5C: ;
    ecx = MEM32(0x5BDF2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x0025DF6Cu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DF6C: ;
    edx = MEM32(0x5BDED8);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0025DF7Au); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DF7A: ;
    eax = MEM32(0x5BDED8);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025DF89u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DF89: ;
    SET_LO8(eax, MEM8(esi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025DFCC; /* je: equal / zero */

loc_0025DF90: ;
    ecx = MEM32(0x5BDF28);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0025DF9Eu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DF9E: ;
    edx = MEM32(0x5BDF28);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0025DFACu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DFAC: ;
    ecx = MEM32(esi + 0x78);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0025DFB6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025DFB6: ;
    ecx = MEM32(esi + 0x78);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0025DFC1u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DFC1: ;
    edx = MEM32(esi + 0x78);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0025DFCCu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DFCC: ;
    eax = MEM32(0x5BDD64);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0025DFD9u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DFD9: ;
    ecx = MEM32(0x5BDD64);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0025DFE7u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DFE7: ;
    ecx = MEM32(esi + 0x74);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0025DFF1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025DFF1: ;
    eax = MEM32(esi + 0x74);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0025DFFCu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025DFFC: ;
    ecx = MEM32(esi + 0x74);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0025E007u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025E007: ;
    edx = MEM32(esi + 0x50);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0025E012u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025E012: ;
    eax = MEM32(esi + 0x50);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0025E01Du); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025E01D: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0025E028u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025E028: ;
    edx = MEM32(esi + 0x4C);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0025E033u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0025E033: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E04E; /* je: equal / zero */

loc_0025E037: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025E04E; /* jne: not equal / not zero */

loc_0025E047: ;
    ecx = edi;
    PUSH32(esp, 0x0025E04Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025E04E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E069; /* je: equal / zero */

loc_0025E052: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025E069; /* jne: not equal / not zero */

loc_0025E062: ;
    ecx = ebx;
    PUSH32(esp, 0x0025E069u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025E069: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E086; /* je: equal / zero */

loc_0025E071: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025E086; /* jne: not equal / not zero */

loc_0025E081: ;
    PUSH32(esp, 0x0025E086u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025E086: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E0A1; /* je: equal / zero */

loc_0025E08A: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025E0A1; /* jne: not equal / not zero */

loc_0025E09A: ;
    ecx = ebp;
    PUSH32(esp, 0x0025E0A1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025E0A1: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0025E0C2; /* je: equal / zero */

loc_0025E0AD: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025E0C2; /* jne: not equal / not zero */

loc_0025E0BD: ;
    PUSH32(esp, 0x0025E0C2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025E0C2: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E0DF; /* je: equal / zero */

loc_0025E0CA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025E0DF; /* jne: not equal / not zero */

loc_0025E0DA: ;
    PUSH32(esp, 0x0025E0DFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025E0DF: ;
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025E0F0
 * Original: 0x0025E0F0 - 0x0025E128 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E0F0(void)
{

loc_0025E0F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0025E101u); RECOMP_ABI_CALL(0x00298FD0u, sub_00298FD0); /* call 0x00298FD0 */

loc_0025E101: ;
    SET_LO8(ecx, MEM8(esi + 0x7C));
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    edx = esp + 0x13;
    MEM8(esp + 0x13) = LO8(ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0025E11Au); RECOMP_ABI_CALL(0x001C4AC0u, sub_001C4AC0); /* call 0x001C4AC0 */

loc_0025E11A: ;
    ecx = MEM32(esi + 0x80);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0025E125u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025E125: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025E130
 * Original: 0x0025E130 - 0x0025E1CC (156 bytes, 62 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E130(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025E130: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025E1A0; /* jl: less (signed <) */

loc_0025E144: ;
    edx = esi + -4;
    edx = edx >> 2;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebx + 0x14;
    edi = edx * 4;
    PUSH32(esp, ebp);

loc_0025E156: ;
    ebp = MEM32(eax);
    MEM32(ecx + -20) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ecx + -16) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(ecx + -12) = ebp;
    ebp = MEM32(eax);
    MEM32(ecx + -8) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ecx + -4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(ecx) = ebp;
    ebp = MEM32(eax);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ecx + 8) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(ecx + 0xC) = ebp;
    ebp = MEM32(eax);
    MEM32(ecx + 0x10) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ecx + 0x14) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(ecx + 0x18) = ebp;
    ecx = ecx + 0x30;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0025E156; /* jne: not equal / not zero */

loc_0025E19F: ;
    POP32(esp, ebp);

loc_0025E1A0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025E1C6; /* jge: greater or equal (signed >=) */

loc_0025E1A4: ;
    ecx = edi + edi * 2;
    ecx = ebx + ecx * 4 + 8;
    esi = esi - edi;
    /* nop */

loc_0025E1B0: ;
    edx = MEM32(eax);
    MEM32(ecx + -8) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + -4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx) = edx;
    ecx = ecx + 0xC;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0025E1B0; /* jne: not equal / not zero */

loc_0025E1C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025E1D0
 * Original: 0x0025E1D0 - 0x0025E20C (60 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E1D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    eax = edi + 1;
    if (CMP_GE(_fas, _fbs)) goto loc_0025E1F3; /* jge: greater or equal (signed >=) */

loc_0025E1E1: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esp + 0xC);
    MEM32(esi + 8) = eax;
    MEM32(ecx + edi * 4) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0025E1F3: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025E1FDu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0025E1FD: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + edi * 4) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025E210
 * Original: 0x0025E210 - 0x0025E238 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E210: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025E227; /* jl: less (signed <) */

loc_0025E21B: ;
    PUSH32(esp, 0x29FFE0);
    ecx = esi;
    PUSH32(esp, 0x0025E227u); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_0025E227: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x10);
    ecx = eax + 1;
    MEM32(esi + 0x14) = ecx;
    eax = MEM32(edx + eax * 4);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025E240
 * Original: 0x0025E240 - 0x0025E268 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E240: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025E257; /* jl: less (signed <) */

loc_0025E24B: ;
    PUSH32(esp, 0x295540);
    ecx = esi;
    PUSH32(esp, 0x0025E257u); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_0025E257: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x10);
    ecx = eax + 1;
    MEM32(esi + 0x14) = ecx;
    eax = MEM32(edx + eax * 4);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025E270
 * Original: 0x0025E270 - 0x0025E298 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E270: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025E287; /* jl: less (signed <) */

loc_0025E27B: ;
    PUSH32(esp, 0x2957F0);
    ecx = esi;
    PUSH32(esp, 0x0025E287u); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_0025E287: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x10);
    ecx = eax + 1;
    MEM32(esi + 0x14) = ecx;
    eax = MEM32(edx + eax * 4);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025E2A0
 * Original: 0x0025E2A0 - 0x0025E2E7 (71 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E2A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E2A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0025E2BF; /* je: equal / zero */

loc_0025E2AA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025E2BF; /* jne: not equal / not zero */

loc_0025E2BA: ;
    PUSH32(esp, 0x0025E2BFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025E2BF: ;
    eax = MEM32(esp + 0xC);
    edi = MEM32(eax);
    PUSH32(esp, 0x25F4B0);
    PUSH32(esp, 0x0025E2CFu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025E2CF: ;
    ecx = MEM32(0x5BD92C);
    esp = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025E2DEu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0025E2DE: ;
    MEM32(esi) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025E2F0
 * Original: 0x0025E2F0 - 0x0025E317 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E2F0: ;
    eax = MEM32(0x5BD9C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E304; /* je: equal / zero */

loc_0025E2F9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025E316; /* jne: not equal / not zero */

loc_0025E304: ;
    PUSH32(esp, 0x281490);
    PUSH32(esp, 0x0025E30Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025E30E: ;
    eax = MEM32(0x5BD9C8);
    esp = esp + 4;

loc_0025E316: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025E320
 * Original: 0x0025E320 - 0x0025E347 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E320: ;
    eax = MEM32(0x5BDA80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E334; /* je: equal / zero */

loc_0025E329: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025E346; /* jne: not equal / not zero */

loc_0025E334: ;
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x0025E33Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025E33E: ;
    eax = MEM32(0x5BDA80);
    esp = esp + 4;

loc_0025E346: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025E350
 * Original: 0x0025E350 - 0x0025E377 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E350: ;
    eax = MEM32(0x5BD8E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E364; /* je: equal / zero */

loc_0025E359: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025E376; /* jne: not equal / not zero */

loc_0025E364: ;
    PUSH32(esp, 0x25F0F0);
    PUSH32(esp, 0x0025E36Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025E36E: ;
    eax = MEM32(0x5BD8E4);
    esp = esp + 4;

loc_0025E376: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025E380
 * Original: 0x0025E380 - 0x0025E3CF (79 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E380: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x18);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0025E391; /* je: equal / zero */

loc_0025E38E: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0025E391: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E3B4; /* je: equal / zero */

loc_0025E39F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025E3B4; /* jne: not equal / not zero */

loc_0025E3AF: ;
    PUSH32(esp, 0x0025E3B4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025E3B4: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E3C9; /* je: equal / zero */

loc_0025E3BB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0025E3C9; /* jl: less (signed <) */

loc_0025E3BF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025E3C9; /* jge: greater or equal (signed >=) */

loc_0025E3C3: ;
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + edi * 4) = ebx;

loc_0025E3C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025E3D0
 * Original: 0x0025E3D0 - 0x0025E3F7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E3D0: ;
    eax = MEM32(0x5BD88C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E3E4; /* je: equal / zero */

loc_0025E3D9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025E3F6; /* jne: not equal / not zero */

loc_0025E3E4: ;
    PUSH32(esp, 0x288000);
    PUSH32(esp, 0x0025E3EEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025E3EE: ;
    eax = MEM32(0x5BD88C);
    esp = esp + 4;

loc_0025E3F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025E400
 * Original: 0x0025E400 - 0x0025E433 (51 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E400: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0025E40F; /* je: equal / zero */

loc_0025E40C: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0025E40F: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E42B; /* je: equal / zero */

loc_0025E416: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025E42B; /* jne: not equal / not zero */

loc_0025E426: ;
    PUSH32(esp, 0x0025E42Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025E42B: ;
    MEM32(esi + 0x1C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025E440
 * Original: 0x0025E440 - 0x0025E467 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E440: ;
    eax = MEM32(0x5BD944);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E454; /* je: equal / zero */

loc_0025E449: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025E466; /* jne: not equal / not zero */

loc_0025E454: ;
    PUSH32(esp, 0x287540);
    PUSH32(esp, 0x0025E45Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025E45E: ;
    eax = MEM32(0x5BD944);
    esp = esp + 4;

loc_0025E466: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025E470
 * Original: 0x0025E470 - 0x0025E497 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E470: ;
    eax = MEM32(0x5BD890);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E484; /* je: equal / zero */

loc_0025E479: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025E496; /* jne: not equal / not zero */

loc_0025E484: ;
    PUSH32(esp, 0x288050);
    PUSH32(esp, 0x0025E48Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025E48E: ;
    eax = MEM32(0x5BD890);
    esp = esp + 4;

loc_0025E496: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025E4A0
 * Original: 0x0025E4A0 - 0x0025E4C7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E4A0: ;
    eax = MEM32(0x5BD92C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E4B4; /* je: equal / zero */

loc_0025E4A9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025E4C6; /* jne: not equal / not zero */

loc_0025E4B4: ;
    PUSH32(esp, 0x25F4B0);
    PUSH32(esp, 0x0025E4BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025E4BE: ;
    eax = MEM32(0x5BD92C);
    esp = esp + 4;

loc_0025E4C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025E4D0
 * Original: 0x0025E4D0 - 0x0025E519 (73 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E4D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    ebx = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025E4FA; /* jge: greater or equal (signed >=) */

loc_0025E4E2: ;
    edx = MEM32(esi + 0x10);
    eax = edi + 1;
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(edx + edi * 4) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0025E4FA: ;
    PUSH32(esp, 4);
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0025E507u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0025E507: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esp + 0x10);
    MEM32(edx + edi * 4) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025E520
 * Original: 0x0025E520 - 0x0025E588 (104 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E520: ;
    SET_LO8(eax, MEM8(esp + 8));
    edx = ecx;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(edx + 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0025E55D; /* je: equal / zero */

loc_0025E534: ;
    eax = eax >> 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E584; /* je: equal / zero */

loc_0025E53B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0025E584; /* jl: less (signed <) */

loc_0025E53F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025E584; /* jge: greater or equal (signed >=) */

loc_0025E543: ;
    edx = MEM32(edx + 0x10);
    eax = edx + eax * 4;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    POP32(esp, esi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

loc_0025E55D: ;
    eax = eax >> 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E584; /* je: equal / zero */

loc_0025E564: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0025E584; /* jl: less (signed <) */

loc_0025E568: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025E584; /* jge: greater or equal (signed >=) */

loc_0025E56C: ;
    edx = MEM32(edx + 0x10);
    eax = edx + eax * 4;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;

loc_0025E584: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025E590
 * Original: 0x0025E590 - 0x0025E5EF (95 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E590: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x5BE5E0);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0025E5A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025E5A6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025E5D9; /* jne: not equal / not zero */

loc_0025E5AA: ;
    ecx = MEM32(esi + 0x10);
    edx = esp + 0x10;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(edi + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025E5BEu); RECOMP_ABI_CALL(0x001F1920u, sub_001F1920); /* call 0x001F1920 */

loc_0025E5BE: ;
    ecx = MEM32(edi + 0x28);
    edx = MEM32(ecx + 0x10);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    esi = MEM32(edi + 0x44);
    eax = MEM32(edx + eax * 4);
    edx = MEM32(esi + ecx * 4);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax + edx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0025E5D9: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 8);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    ecx = MEM32(edi + 0x44);
    esi = MEM32(ecx + edx * 4);
    POP32(esp, edi);
    eax = eax + esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025E5F0
 * Original: 0x0025E5F0 - 0x0025E6C0 (208 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E5F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025E5F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x20);
    eax = MEM32(eax + 8);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0025E6B8; /* jle: less or equal (signed <=) */

loc_0025E60B: ;
    goto loc_0025E610;

    /* nop */

loc_0025E610: ;
    ecx = MEM32(ebp + 0x20);
    edx = MEM32(ecx + 0x10);
    esi = MEM32(edx + ebx * 4);
    eax = MEM32(0x5BE600);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025E626u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0025E626: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E643; /* je: equal / zero */

loc_0025E62A: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0025E632u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025E632: ;
    eax = MEM32(eax);
    eax = eax >> 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0025E6AB; /* jbe: below or equal (unsigned <=) */

loc_0025E63B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0025E643: ;
    edx = MEM32(esi);
    edi = MEM32(0x5BE5F8);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0025E650u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025E650: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025E68C; /* jne: not equal / not zero */

loc_0025E654: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E65E; /* je: equal / zero */

loc_0025E65B: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0025E65E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x0025E669u); RECOMP_ABI_CALL(0x001BB3D0u, sub_001BB3D0); /* call 0x001BB3D0 */

loc_0025E669: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0025E686; /* je: equal / zero */

loc_0025E66F: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025E686; /* jne: not equal / not zero */

loc_0025E67F: ;
    ecx = esi;
    PUSH32(esp, 0x0025E686u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025E686: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025E63B; /* jne: not equal / not zero */

loc_0025E68A: ;
    goto loc_0025E6AB;

loc_0025E68C: ;
    eax = MEM32(0x5BE594);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025E699u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0025E699: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025E6AB; /* jne: not equal / not zero */

loc_0025E69D: ;
    ecx = MEM32(0x5BE54C);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0025E6ABu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0025E6AB: ;
    eax = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025E610; /* jl: less (signed <) */

loc_0025E6B8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025E6C0
 * Original: 0x0025E6C0 - 0x0025E6E3 (35 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E6C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0025E6CF; /* je: equal / zero */

loc_0025E6CC: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0025E6CF: ;
    eax = MEM32(edi + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025E6D8u); RECOMP_ABI_CALL(0x00011A40u, sub_00011A40); /* call 0x00011A40 */

loc_0025E6D8: ;
    esp = esp + 4;
    MEM32(edi + 0x44) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025E6F0
 * Original: 0x0025E6F0 - 0x0025E717 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E6F0: ;
    eax = MEM32(0x5BDBC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E704; /* je: equal / zero */

loc_0025E6F9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025E716; /* jne: not equal / not zero */

loc_0025E704: ;
    PUSH32(esp, 0x28DCE0);
    PUSH32(esp, 0x0025E70Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025E70E: ;
    eax = MEM32(0x5BDBC0);
    esp = esp + 4;

loc_0025E716: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025E720
 * Original: 0x0025E720 - 0x0025E747 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E720: ;
    eax = MEM32(0x5BDB70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E734; /* je: equal / zero */

loc_0025E729: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025E746; /* jne: not equal / not zero */

loc_0025E734: ;
    PUSH32(esp, 0x261980);
    PUSH32(esp, 0x0025E73Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025E73E: ;
    eax = MEM32(0x5BDB70);
    esp = esp + 4;

loc_0025E746: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025E750
 * Original: 0x0025E750 - 0x0025E7BB (107 bytes, 40 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E750: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0025E75F; /* je: equal / zero */

loc_0025E75C: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0025E75F: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E77B; /* je: equal / zero */

loc_0025E766: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025E77B; /* jne: not equal / not zero */

loc_0025E776: ;
    PUSH32(esp, 0x0025E77Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025E77B: ;
    MEM32(esi + 0xC) = edi;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E789; /* je: equal / zero */

loc_0025E786: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0025E789: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E7A5; /* je: equal / zero */

loc_0025E790: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025E7A5; /* jne: not equal / not zero */

loc_0025E7A0: ;
    PUSH32(esp, 0x0025E7A5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025E7A5: ;
    eax = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(esp + 0x18));
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x30) = eax;
    MEM8(esi + 0x34) = LO8(ecx);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0025E7C0
 * Original: 0x0025E7C0 - 0x0025E82A (106 bytes, 39 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E7C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0025E7CF; /* je: equal / zero */

loc_0025E7CC: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0025E7CF: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E7EB; /* je: equal / zero */

loc_0025E7D6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025E7EB; /* jne: not equal / not zero */

loc_0025E7E6: ;
    PUSH32(esp, 0x0025E7EBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025E7EB: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0xC) = edi;
    ecx = MEM32(eax);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x18) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esi + 0x1C) = ecx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x20) = edx;
    ecx = MEM32(eax);
    MEM32(esi + 0x24) = ecx;
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 0x28) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x2C) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x30) = ecx;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0025E830
 * Original: 0x0025E830 - 0x0025E85C (44 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E830: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esi + 0x38) = MEM8(esi + 0x38) & 0xFE;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025E853; /* je: equal / zero */

loc_0025E83E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025E853; /* jne: not equal / not zero */

loc_0025E84E: ;
    PUSH32(esp, 0x0025E853u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025E853: ;
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025E860
 * Original: 0x0025E860 - 0x0025E8B6 (86 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E860(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025E860: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    eax = MEM32(ebp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0025E8AF; /* jbe: below or equal (unsigned <=) */

loc_0025E879: ;
    /* nop */

loc_0025E880: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx + 0x10);
    eax = MEM32(eax + ecx * 4);
    ecx = MEM32(0x5BA824);
    edx = MEM32(ecx + 8);
    edx = edx + eax;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    esi = esi + 4;
    PUSH32(esp, 0x0025E8A1u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0025E8A1: ;
    eax = MEM32(ebp + 0x14);
    esp = esp + 8;
    edi = edi + 0x40;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025E880; /* jb: below (unsigned <) */

loc_0025E8AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025E8C0
 * Original: 0x0025E8C0 - 0x0025E8F3 (51 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E8C0: ;
    eax = MEM32(ecx + 0x34);
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025E8EC; /* je: equal / zero */

loc_0025E8CD: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025E8E4; /* jl: less (signed <) */

loc_0025E8D6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025E8E4; /* jge: greater or equal (signed >=) */

loc_0025E8DA: ;
    eax = MEM32(eax + 0x10);
    edx = MEM32(esp + 0x10);
    MEM32(eax + esi * 4) = edx;

loc_0025E8E4: ;
    POP32(esp, esi);
    MEM8(ecx + 0x50) = LO8(ebx);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0025E8EC: ;
    MEM8(ecx + 0x50) = LO8(ebx);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025E900
 * Original: 0x0025E900 - 0x0025E92C (44 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E900(void)
{

loc_0025E900: ;
    esp = esp - 0x20;
    ecx = esp;
    PUSH32(esp, 0x0025E90Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0025E90B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3FEE18;
    MEM32(esp + 0x1C) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0025E930
 * Original: 0x0025E930 - 0x0025E9C1 (145 bytes, 48 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025E930: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD88C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0025E940u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0025E940: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x470774);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0025E950u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0025E950: ;
    eax = edi + 2;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025E95Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025E95B: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x0025E966u); RECOMP_ABI_CALL(0x001E7D60u, sub_001E7D60); /* call 0x001E7D60 */

loc_0025E966: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0025E971u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025E971: ;
    ebx = eax;
    eax = MEM32(0x5BD97C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025E996; /* jne: not equal / not zero */

loc_0025E97C: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025E988u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0025E988: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025E98Eu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0025E98E: ;
    esp = esp + 8;
    MEM32(0x5BD97C) = eax;

loc_0025E996: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x470760);
    PUSH32(esp, 0x47074C);
    PUSH32(esp, 0x470738);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0025E9B0u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0025E9B0: ;
    PUSH32(esp, 0x251B60);
    PUSH32(esp, 0x0025E9BAu); RECOMP_ABI_CALL(0x00204190u, sub_00204190); /* call 0x00204190 */

loc_0025E9BA: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025E9D0
 * Original: 0x0025E9D0 - 0x0025E9D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E9D0(void)
{

loc_0025E9D0: ;
    eax = MEM32(0x5BD890);
    esp += 4; return; /* ret */

}

/**
 * sub_0025E9E0
 * Original: 0x0025E9E0 - 0x0025E9EC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E9E0(void)
{

loc_0025E9E0: ;
    PUSH32(esp, 0x251D80);
    PUSH32(esp, 0x0025E9EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025E9EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025E9F0
 * Original: 0x0025E9F0 - 0x0025E9F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025E9F0(void)
{

loc_0025E9F0: ;
    eax = MEM32(0x5BD89C);
    esp += 4; return; /* ret */

}

/**
 * sub_0025EA00
 * Original: 0x0025EA00 - 0x0025EA17 (23 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EA00(void)
{

loc_0025EA00: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0025EA14u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025EA14: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0025EA20
 * Original: 0x0025EA20 - 0x0025EA3C (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EA20(void)
{

loc_0025EA20: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0025EA39u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025EA39: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0025EA40
 * Original: 0x0025EA40 - 0x0025EA44 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EA40(void)
{

loc_0025EA40: ;
    SET_LO8(eax, MEM8(ecx + 0x48));
    esp += 4; return; /* ret */

}

/**
 * sub_0025EA50
 * Original: 0x0025EA50 - 0x0025EA61 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EA50(void)
{

loc_0025EA50: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0x54) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025EA70
 * Original: 0x0025EA70 - 0x0025EA77 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EA70(void)
{

loc_0025EA70: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(ecx + 0x54);
    esp += 4; return; /* ret */

}

/**
 * sub_0025EA80
 * Original: 0x0025EA80 - 0x0025EA91 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EA80(void)
{

loc_0025EA80: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x58) = eax;
    MEM32(ecx + 0x5C) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025EAA0
 * Original: 0x0025EAA0 - 0x0025EAA7 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EAA0(void)
{

loc_0025EAA0: ;
    eax = MEM32(ecx + 0x58);
    edx = MEM32(ecx + 0x5C);
    esp += 4; return; /* ret */

}

/**
 * sub_0025EAB0
 * Original: 0x0025EAB0 - 0x0025EAFB (75 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EAB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025EAB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025EAC3u); RECOMP_ABI_CALL(0x001E7A30u, sub_001E7A30); /* call 0x001E7A30 */

loc_0025EAC3: ;
    _fa = (uint32_t)(MEM8(esi + 0x48)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x48), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025EAD4; /* je: equal / zero */

loc_0025EAC9: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025EAD4u); RECOMP_ABI_CALL(0x001E7A30u, sub_001E7A30); /* call 0x001E7A30 */

loc_0025EAD4: ;
    _fa = (uint32_t)(MEM8(esi + 0x48)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x48), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025EAE5; /* je: equal / zero */

loc_0025EADA: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025EAE5u); RECOMP_ABI_CALL(0x001E7A30u, sub_001E7A30); /* call 0x001E7A30 */

loc_0025EAE5: ;
    _fa = (uint32_t)(MEM8(esi + 0x48)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x48), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025EAF6; /* je: equal / zero */

loc_0025EAEB: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0025EAF6u); RECOMP_ABI_CALL(0x001E7A30u, sub_001E7A30); /* call 0x001E7A30 */

loc_0025EAF6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025EB00
 * Original: 0x0025EB00 - 0x0025EB86 (134 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025EB00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x38);
    if (TEST_S(_fas, _fbs)) goto loc_0025EB21; /* jl: less (signed <) */

loc_0025EB0F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0025EB19; /* jg: greater (signed >) */

loc_0025EB14: ;
    MEM32(ecx + 8) = esi;
    goto loc_0025EB21;

loc_0025EB19: ;
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025EB21u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0025EB21: ;
    _fa = (uint32_t)(MEM8(edi + 0x48)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x48), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025EB40; /* je: equal / zero */

loc_0025EB27: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ecx = MEM32(edi + 8);
    if (TEST_S(_fas, _fbs)) goto loc_0025EB40; /* jl: less (signed <) */

loc_0025EB2E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0025EB38; /* jg: greater (signed >) */

loc_0025EB33: ;
    MEM32(ecx + 8) = esi;
    goto loc_0025EB40;

loc_0025EB38: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025EB40u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0025EB40: ;
    _fa = (uint32_t)(MEM8(edi + 0x48)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x48), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025EB5F; /* je: equal / zero */

loc_0025EB46: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ecx = MEM32(edi + 0xC);
    if (TEST_S(_fas, _fbs)) goto loc_0025EB5F; /* jl: less (signed <) */

loc_0025EB4D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0025EB57; /* jg: greater (signed >) */

loc_0025EB52: ;
    MEM32(ecx + 8) = esi;
    goto loc_0025EB5F;

loc_0025EB57: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025EB5Fu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0025EB5F: ;
    _fa = (uint32_t)(MEM8(edi + 0x48)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x48), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025EB81; /* je: equal / zero */

loc_0025EB65: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ecx = MEM32(edi + 0x10);
    if (TEST_S(_fas, _fbs)) goto loc_0025EB81; /* jl: less (signed <) */

loc_0025EB6C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0025EB79; /* jg: greater (signed >) */

loc_0025EB71: ;
    POP32(esp, edi);
    MEM32(ecx + 8) = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0025EB79: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025EB81u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0025EB81: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025EB90
 * Original: 0x0025EB90 - 0x0025EB97 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EB90(void)
{

loc_0025EB90: ;
    eax = MEM32(ecx + 0x38);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0025EBA0
 * Original: 0x0025EBA0 - 0x0025EBB0 (16 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025EBA0: ;
    _fa = (uint32_t)(MEM8(ecx + 0x48)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x48), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025EBA9; /* jne: not equal / not zero */

loc_0025EBA6: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0025EBA9: ;
    eax = MEM32(ecx + 8);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0025EBB0
 * Original: 0x0025EBB0 - 0x0025EBC0 (16 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EBB0(void)
{

loc_0025EBB0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0025EBC0
 * Original: 0x0025EBC0 - 0x0025EBD0 (16 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EBC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025EBC0: ;
    _fa = (uint32_t)(MEM8(ecx + 0x48)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x48), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025EBC9; /* jne: not equal / not zero */

loc_0025EBC6: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0025EBC9: ;
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0025EBD0
 * Original: 0x0025EBD0 - 0x0025EBFC (44 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025EBD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esi + 0x48) = MEM8(esi + 0x48) & 0xFE;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025EBF3; /* je: equal / zero */

loc_0025EBDE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025EBF3; /* jne: not equal / not zero */

loc_0025EBEE: ;
    PUSH32(esp, 0x0025EBF3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025EBF3: ;
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025EC00
 * Original: 0x0025EC00 - 0x0025EC2C (44 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025EC00: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esi + 0x48) = MEM8(esi + 0x48) & 0xF7;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025EC23; /* je: equal / zero */

loc_0025EC0E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025EC23; /* jne: not equal / not zero */

loc_0025EC1E: ;
    PUSH32(esp, 0x0025EC23u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025EC23: ;
    MEM32(esi + 0x10) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025EC30
 * Original: 0x0025EC30 - 0x0025EC5B (43 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025EC30: ;
    edx = MEM32(ecx + 0x38);
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025EC58; /* je: equal / zero */

loc_0025EC3A: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0025EC58; /* jl: less (signed <) */

loc_0025EC42: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025EC58; /* jge: greater or equal (signed >=) */

loc_0025EC46: ;
    eax = MEM32(edx + 0x10);
    edx = MEM32(esp + 8);
    MEM32(eax + ecx * 8) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + ecx * 8 + 4) = edx;

loc_0025EC58: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0025EC60
 * Original: 0x0025EC60 - 0x0025EC74 (20 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EC60(void)
{

loc_0025EC60: ;
    eax = MEM32(ecx + 0x38);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 8);
    edx = MEM32(edx + ecx * 8 + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025EC80
 * Original: 0x0025EC80 - 0x0025ECBC (60 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025EC80: ;
    _fa = (uint32_t)(MEM8(ecx + 0x48)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x48), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025ECB9; /* je: equal / zero */

loc_0025EC86: ;
    ecx = MEM32(ecx + 8);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025ECB9; /* je: equal / zero */

loc_0025EC90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0025ECB9; /* jl: less (signed <) */

loc_0025EC98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025ECB9; /* jge: greater or equal (signed >=) */

loc_0025EC9C: ;
    ecx = MEM32(ecx + 0x10);
    eax = eax + eax * 2;
    eax = ecx + eax * 4;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;

loc_0025ECB9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025ECC0
 * Original: 0x0025ECC0 - 0x0025ECDE (30 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025ECC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025ECC0: ;
    _fa = (uint32_t)(MEM8(ecx + 0x48)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x48), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025ECCB; /* jne: not equal / not zero */

loc_0025ECC6: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

loc_0025ECCB: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 8);
    edx = eax + eax * 2;
    eax = MEM32(ecx + 0x10);
    eax = eax + edx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025ECE0
 * Original: 0x0025ECE0 - 0x0025ED11 (49 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025ECE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025ECE0: ;
    _fa = (uint32_t)(MEM8(ecx + 0x48)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x48), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025ED0E; /* je: equal / zero */

loc_0025ECE6: ;
    edx = MEM32(ecx + 0xC);
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025ED0E; /* je: equal / zero */

loc_0025ECF0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0025ED0E; /* jl: less (signed <) */

loc_0025ECF8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025ED0E; /* jge: greater or equal (signed >=) */

loc_0025ECFC: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x10);
    ecx = ecx << 4;
    ecx = ecx + eax;
    PUSH32(esp, 0x0025ED0Eu); RECOMP_ABI_CALL(0x0023B160u, sub_0023B160); /* call 0x0023B160 */

loc_0025ED0E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025ED20
 * Original: 0x0025ED20 - 0x0025ED3D (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025ED20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025ED20: ;
    _fa = (uint32_t)(MEM8(ecx + 0x48)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x48), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025ED2B; /* jne: not equal / not zero */

loc_0025ED26: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

loc_0025ED2B: ;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x10);
    eax = eax << 4;
    eax = eax + edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025ED40
 * Original: 0x0025ED40 - 0x0025ED73 (51 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0025ED40(void)
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

loc_0025ED40: ;
    _fa = (uint32_t)(MEM8(ecx + 0x48)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x48), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025ED70; /* je: equal / zero */

loc_0025ED46: ;
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(esp + 8);
    fp_push(MEMF(ecx + 8)); /* fld float */
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 4)); /* fld float */
    eax = eax << 4;
    eax = eax + edx;
    edx = MEM32(ecx);
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax) = edx;
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0xC) = 0;

loc_0025ED70: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0025ED80
 * Original: 0x0025ED80 - 0x0025ED9D (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025ED80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025ED80: ;
    _fa = (uint32_t)(MEM8(ecx + 0x48)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x48), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025ED8B; /* jne: not equal / not zero */

loc_0025ED86: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

loc_0025ED8B: ;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x10);
    eax = eax << 4;
    eax = eax + edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025EDA0
 * Original: 0x0025EDA0 - 0x0025EDDC (60 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EDA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025EDA0: ;
    _fa = (uint32_t)(MEM8(ecx + 0x48)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x48), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025EDD9; /* je: equal / zero */

loc_0025EDA6: ;
    ecx = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025EDD9; /* je: equal / zero */

loc_0025EDB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0025EDD9; /* jl: less (signed <) */

loc_0025EDB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025EDD9; /* jge: greater or equal (signed >=) */

loc_0025EDBC: ;
    ecx = MEM32(ecx + 0x10);
    eax = eax + eax * 2;
    eax = ecx + eax * 4;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;

loc_0025EDD9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0025EDE0
 * Original: 0x0025EDE0 - 0x0025EDFE (30 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025EDE0: ;
    _fa = (uint32_t)(MEM8(ecx + 0x48)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x48), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025EDEB; /* jne: not equal / not zero */

loc_0025EDE6: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

loc_0025EDEB: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x10);
    edx = eax + eax * 2;
    eax = MEM32(ecx + 0x10);
    eax = eax + edx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025EE00
 * Original: 0x0025EE00 - 0x0025EE44 (68 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0025EE00: ;
    eax = MEM32(ecx + 0x58);
    PUSH32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(ecx + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0025EE42; /* jne: not equal / not zero */

loc_0025EE0C: ;
    eax = MEM32(ecx + 0x38);
    esi = MEM32(eax + 8);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0025EE3C; /* je: equal / zero */

loc_0025EE18: ;
    edx = esi;
    esi = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    eax = esi;
    ebx = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(esi + edx * 8 + -8);
    edx = MEM32(esi + edx * 8 + -4);
    _cf = (int)((uint32_t)(edi) < (uint32_t)(ebx));
    edi = edi - ebx;
    esi = MEM32(eax + 4);
    MEM32(ecx + 0x58) = edi;
    POP32(esp, edi);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    POP32(esp, ebx);
    MEM32(ecx + 0x5C) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0025EE3C: ;
    MEM32(ecx + 0x58) = edx;
    MEM32(ecx + 0x5C) = edx;

loc_0025EE42: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025EE50
 * Original: 0x0025EE50 - 0x0025EEE7 (151 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EE50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025EE50: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025EE6F; /* je: equal / zero */

loc_0025EE5A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025EE6F; /* jne: not equal / not zero */

loc_0025EE6A: ;
    PUSH32(esp, 0x0025EE6Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025EE6F: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025EE8B; /* je: equal / zero */

loc_0025EE76: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025EE8B; /* jne: not equal / not zero */

loc_0025EE86: ;
    PUSH32(esp, 0x0025EE8Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025EE8B: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025EEA7; /* je: equal / zero */

loc_0025EE92: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025EEA7; /* jne: not equal / not zero */

loc_0025EEA2: ;
    PUSH32(esp, 0x0025EEA7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025EEA7: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025EEC3; /* je: equal / zero */

loc_0025EEAE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025EEC3; /* jne: not equal / not zero */

loc_0025EEBE: ;
    PUSH32(esp, 0x0025EEC3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025EEC3: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025EEDF; /* je: equal / zero */

loc_0025EECA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025EEDF; /* jne: not equal / not zero */

loc_0025EEDA: ;
    PUSH32(esp, 0x0025EEDFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025EEDF: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00254530(); return; /* tail jmp 0x00254530 */

}

/**
 * sub_0025EEF0
 * Original: 0x0025EEF0 - 0x0025EEF6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EEF0(void)
{

loc_0025EEF0: ;
    eax = MEM32(0x5BD8BC);
    esp += 4; return; /* ret */

}

/**
 * sub_0025EF00
 * Original: 0x0025EF00 - 0x0025F05A (346 bytes, 88 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025EF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025EF00: ;
    esp = esp - 0x80;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD8C8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0025EF16u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0025EF16: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x4707B8);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0025EF26u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0025EF26: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0025EF2Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025EF2E: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0x3F800000;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0x3F800000;
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x40) = 0x3F800000;
    MEM32(esp + 0x44) = 0;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x4C) = 0x3F800000;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x58) = 0;
    PUSH32(esp, 0x0025EFCDu); RECOMP_ABI_CALL(0x001B7D30u, sub_001B7D30); /* call 0x001B7D30 */

loc_0025EFCD: ;
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0025EFD9u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0025EFD9: ;
    edx = edi + 1;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0025EFE4u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025EFE4: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x0025EFEDu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0025EFED: ;
    eax = edi + 2;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025EFF8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025EFF8: ;
    ebx = eax;
    PUSH32(esp, 0x0025EFFFu); RECOMP_ABI_CALL(0x002905B0u, sub_002905B0); /* call 0x002905B0 */

loc_0025EFFF: ;
    ecx = edi + 3;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x26) = 0;
    PUSH32(esp, 0x0025F011u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025F011: ;
    ebx = eax;
    eax = MEM32(0x5BD898);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025F036; /* jne: not equal / not zero */

loc_0025F01C: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025F028u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0025F028: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025F02Eu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0025F02E: ;
    esp = esp + 8;
    MEM32(0x5BD898) = eax;

loc_0025F036: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4707A8);
    PUSH32(esp, 0x470798);
    PUSH32(esp, 0x470788);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0025F050u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0025F050: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_0025F060
 * Original: 0x0025F060 - 0x0025F066 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F060(void)
{

loc_0025F060: ;
    eax = MEM32(0x5BD8DC);
    esp += 4; return; /* ret */

}

/**
 * sub_0025F070
 * Original: 0x0025F070 - 0x0025F0B2 (66 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F070(void)
{

loc_0025F070: ;
    esp = esp - 0x50;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0025F07Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0025F07D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x28) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x3FEFE8;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0025F0ABu); RECOMP_ABI_CALL(0x00252070u, sub_00252070); /* call 0x00252070 */

loc_0025F0AB: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_0025F0C0
 * Original: 0x0025F0C0 - 0x0025F0E4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F0C0(void)
{

loc_0025F0C0: ;
    esp = esp - 0x20;
    ecx = esp;
    PUSH32(esp, 0x0025F0CBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0025F0CB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E13D4;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0025F0F0
 * Original: 0x0025F0F0 - 0x0025F134 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F0F0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025F100; /* jne: not equal / not zero */

loc_0025F0F9: ;
    MEM8(0x5BDF6C) = 1;

loc_0025F100: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x249460);
    PUSH32(esp, 0x25F0C0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x401900);
    PUSH32(esp, 0x25E350);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BD8E4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0025F130u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0025F130: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0025F140
 * Original: 0x0025F140 - 0x0025F16C (44 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F140(void)
{

loc_0025F140: ;
    esp = esp - 0xC;
    ecx = esp;
    PUSH32(esp, 0x0025F14Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0025F14B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3FF170;
    MEM32(esp + 8) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0025F170
 * Original: 0x0025F170 - 0x0025F1B4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F170: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025F180; /* jne: not equal / not zero */

loc_0025F179: ;
    MEM8(0x5BDF6C) = 1;

loc_0025F180: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2494D0);
    PUSH32(esp, 0x25F140);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x401910);
    PUSH32(esp, 0x24FFA0);
    PUSH32(esp, 0x2491C0);
    PUSH32(esp, 0x2535A0);
    PUSH32(esp, 0x5BD8EC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0025F1B0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0025F1B0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0025F1C0
 * Original: 0x0025F1C0 - 0x0025F1EC (44 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F1C0(void)
{

loc_0025F1C0: ;
    esp = esp - 0xC;
    ecx = esp;
    PUSH32(esp, 0x0025F1CBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0025F1CB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3FF1C8;
    MEM32(esp + 8) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0025F1F0
 * Original: 0x0025F1F0 - 0x0025F234 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F1F0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025F200; /* jne: not equal / not zero */

loc_0025F1F9: ;
    MEM8(0x5BDF6C) = 1;

loc_0025F200: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x249510);
    PUSH32(esp, 0x25F1C0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x401920);
    PUSH32(esp, 0x250000);
    PUSH32(esp, 0x2491D0);
    PUSH32(esp, 0x2535E0);
    PUSH32(esp, 0x5BD8F0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0025F230u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0025F230: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0025F240
 * Original: 0x0025F240 - 0x0025F272 (50 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F240(void)
{

loc_0025F240: ;
    esp = esp - 0x84;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0025F250u); RECOMP_ABI_CALL(0x002522A0u, sub_002522A0); /* call 0x002522A0 */

loc_0025F250: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0025F268u); RECOMP_ABI_CALL(0x00252310u, sub_00252310); /* call 0x00252310 */

loc_0025F268: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x84;
    esp += 4; return; /* ret */

}

/**
 * sub_0025F280
 * Original: 0x0025F280 - 0x0025F286 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F280(void)
{

loc_0025F280: ;
    eax = MEM32(0x5BD908);
    esp += 4; return; /* ret */

}

/**
 * sub_0025F290
 * Original: 0x0025F290 - 0x0025F296 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F290(void)
{

loc_0025F290: ;
    eax = MEM32(0x5BD904);
    esp += 4; return; /* ret */

}

/**
 * sub_0025F2A0
 * Original: 0x0025F2A0 - 0x0025F2E2 (66 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F2A0(void)
{

loc_0025F2A0: ;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0025F2ADu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0025F2AD: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x3FF538;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0025F2DBu); RECOMP_ABI_CALL(0x002529B0u, sub_002529B0); /* call 0x002529B0 */

loc_0025F2DB: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0025F2F0
 * Original: 0x0025F2F0 - 0x0025F2F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F2F0(void)
{

loc_0025F2F0: ;
    eax = MEM32(0x5BD90C);
    esp += 4; return; /* ret */

}

/**
 * sub_0025F300
 * Original: 0x0025F300 - 0x0025F342 (66 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F300(void)
{

loc_0025F300: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0025F30Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0025F30D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x3FF590;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0025F33Bu); RECOMP_ABI_CALL(0x00252C90u, sub_00252C90); /* call 0x00252C90 */

loc_0025F33B: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0025F350
 * Original: 0x0025F350 - 0x0025F397 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F350: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025F360; /* jne: not equal / not zero */

loc_0025F359: ;
    MEM8(0x5BDF6C) = 1;

loc_0025F360: ;
    PUSH32(esp, 0x4707C8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x252A20);
    PUSH32(esp, 0x25F300);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x4019EC);
    PUSH32(esp, 0x2503C0);
    PUSH32(esp, 0x1A4460);
    PUSH32(esp, 0x226510);
    PUSH32(esp, 0x5BD910);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0025F393u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0025F393: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0025F3A0
 * Original: 0x0025F3A0 - 0x0025F3A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F3A0(void)
{

loc_0025F3A0: ;
    eax = MEM32(0x5BD914);
    esp += 4; return; /* ret */

}

/**
 * sub_0025F3B0
 * Original: 0x0025F3B0 - 0x0025F3B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F3B0(void)
{

loc_0025F3B0: ;
    eax = MEM32(0x5BD918);
    esp += 4; return; /* ret */

}

/**
 * sub_0025F3C0
 * Original: 0x0025F3C0 - 0x0025F3C4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F3C0(void)
{

loc_0025F3C0: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_0025F3D0
 * Original: 0x0025F3D0 - 0x0025F3D7 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F3D0(void)
{

loc_0025F3D0: ;
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0025F3E0
 * Original: 0x0025F3E0 - 0x0025F3FC (28 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F3E0: ;
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + edx * 4);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025F3F9; /* jne: not equal / not zero */

loc_0025F3F4: ;
    eax = 0x3C806C;

loc_0025F3F9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025F400
 * Original: 0x0025F400 - 0x0025F413 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F400(void)
{

loc_0025F400: ;
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + edx * 4);
    eax = MEM32(eax + 0xC);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025F420
 * Original: 0x0025F420 - 0x0025F426 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F420(void)
{

loc_0025F420: ;
    eax = MEM32(0x5BD91C);
    esp += 4; return; /* ret */

}

/**
 * sub_0025F430
 * Original: 0x0025F430 - 0x0025F45C (44 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F430(void)
{

loc_0025F430: ;
    esp = esp - 0x18;
    ecx = esp;
    PUSH32(esp, 0x0025F43Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0025F43B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp + 8) = 0;
    MEM32(esp) = 0x3FF620;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0025F460
 * Original: 0x0025F460 - 0x0025F4A4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F460: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025F470; /* jne: not equal / not zero */

loc_0025F469: ;
    MEM8(0x5BDF6C) = 1;

loc_0025F470: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x249650);
    PUSH32(esp, 0x25F430);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x401B2C);
    PUSH32(esp, 0x2504B0);
    PUSH32(esp, 0x1A4460);
    PUSH32(esp, 0x226510);
    PUSH32(esp, 0x5BD920);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0025F4A0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0025F4A0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0025F4B0
 * Original: 0x0025F4B0 - 0x0025F4F1 (65 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F4B0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025F4C0; /* jne: not equal / not zero */

loc_0025F4B9: ;
    MEM8(0x5BDF6C) = 1;

loc_0025F4C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2496A0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x401B40);
    PUSH32(esp, 0x25E4A0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BD92C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0025F4EDu); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0025F4ED: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0025F500
 * Original: 0x0025F500 - 0x0025F506 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F500(void)
{

loc_0025F500: ;
    eax = MEM32(0x5BD930);
    esp += 4; return; /* ret */

}

/**
 * sub_0025F510
 * Original: 0x0025F510 - 0x0025F553 (67 bytes, 22 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F510: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BC50C);
    PUSH32(esp, 0x3ED140);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025F526u); RECOMP_ABI_CALL(0x00237F20u, sub_00237F20); /* call 0x00237F20 */

loc_0025F526: ;
    ecx = MEM32(eax);
    PUSH32(esp, 0x401664);
    PUSH32(esp, 0x0025F532u); RECOMP_ABI_CALL(0x0020C2D0u, sub_0020C2D0); /* call 0x0020C2D0 */

loc_0025F532: ;
    eax = MEM32(esp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0025F551; /* je: equal / zero */

loc_0025F53B: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025F551; /* jne: not equal / not zero */

loc_0025F54C: ;
    PUSH32(esp, 0x0025F551u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025F551: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025F560
 * Original: 0x0025F560 - 0x0025F566 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F560(void)
{

loc_0025F560: ;
    eax = MEM32(0x5BD938);
    esp += 4; return; /* ret */

}

/**
 * sub_0025F570
 * Original: 0x0025F570 - 0x0025F5B2 (66 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F570(void)
{

loc_0025F570: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0025F57Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0025F57D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x3FF6B8;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0025F5ABu); RECOMP_ABI_CALL(0x00252C90u, sub_00252C90); /* call 0x00252C90 */

loc_0025F5AB: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0025F5C0
 * Original: 0x0025F5C0 - 0x0025F607 (71 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F5C0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025F5D0; /* jne: not equal / not zero */

loc_0025F5C9: ;
    MEM8(0x5BDF6C) = 1;

loc_0025F5D0: ;
    PUSH32(esp, 0x4707D4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x249710);
    PUSH32(esp, 0x25F570);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x401C14);
    PUSH32(esp, 0x250690);
    PUSH32(esp, 0x1A4460);
    PUSH32(esp, 0x226510);
    PUSH32(esp, 0x5BD940);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0025F603u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0025F603: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0025F610
 * Original: 0x0025F610 - 0x0025F616 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F610(void)
{

loc_0025F610: ;
    eax = MEM32(0x5BD954);
    esp += 4; return; /* ret */

}

/**
 * sub_0025F620
 * Original: 0x0025F620 - 0x0025F626 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025F620(void)
{

loc_0025F620: ;
    eax = MEM32(0x5BD958);
    esp += 4; return; /* ret */

}
