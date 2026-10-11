/**
 * X-Men Legends - Recompiled code chunk 57
 * Functions: 250 (0x002493E0 - 0x002504B0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002493E0
 * Original: 0x002493E0 - 0x00249449 (105 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002493E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002493E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BD8DC);
    PUSH32(esp, 0x3E226C);
    ecx = edi;
    PUSH32(esp, 0x002493F5u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_002493F5: ;
    ecx = MEM32(edi + 0x28);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00249400u); RECOMP_ABI_CALL(0x001E8890u, sub_001E8890); /* call 0x001E8890 */

loc_00249400: ;
    ebx = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0024940Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024940B: ;
    esi = eax;
    PUSH32(esp, 0x00249412u); RECOMP_ABI_CALL(0x00229D80u, sub_00229D80); /* call 0x00229D80 */

loc_00249412: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x1C) = 0x5BCDB4;
    PUSH32(esp, 0x0024942Cu); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_0024942C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_00249446; /* jne: not equal / not zero */

loc_0024943D: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00249446: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00249450
 * Original: 0x00249450 - 0x00249456 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249450(void)
{

loc_00249450: ;
    eax = MEM32(0x5BD92C);
    esp += 4; return; /* ret */

}

/**
 * sub_00249460
 * Original: 0x00249460 - 0x002494C1 (97 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249460(void)
{

loc_00249460: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BD8E4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024946Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024946F: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x46DF20);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024947Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024947F: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024948Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024948A: ;
    PUSH32(esp, 0x32);
    ecx = eax;
    PUSH32(esp, 0x00249493u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00249493: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0024949Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024949E: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x002494A7u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002494A7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46DF14);
    PUSH32(esp, 0x46DF08);
    PUSH32(esp, 0x46DEFC);
    ecx = esi;
    PUSH32(esp, 0x002494BEu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002494BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002494D0
 * Original: 0x002494D0 - 0x00249509 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002494D0(void)
{

loc_002494D0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BD8EC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002494DFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002494DF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x46DF38);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002494EFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002494EF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46DF34);
    PUSH32(esp, 0x46DF30);
    PUSH32(esp, 0x46DF2C);
    ecx = esi;
    PUSH32(esp, 0x00249506u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00249506: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00249510
 * Original: 0x00249510 - 0x00249549 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249510(void)
{

loc_00249510: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BD8F0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024951Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024951F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x46DF48);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024952Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024952F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46DF44);
    PUSH32(esp, 0x46DF40);
    PUSH32(esp, 0x46DF3C);
    ecx = esi;
    PUSH32(esp, 0x00249546u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00249546: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00249550
 * Original: 0x00249550 - 0x00249555 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249550(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00249550: ;
    g_seh_ebp = ebp; sub_00297350(); return; /* tail jmp 0x00297350 */

}

/**
 * sub_00249560
 * Original: 0x00249560 - 0x00249583 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00249560: ;
    eax = MEM32(0x5BD8FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00249582; /* jne: not equal / not zero */

loc_00249569: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00249574u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00249574: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024957Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024957A: ;
    esp = esp + 8;
    MEM32(0x5BD8FC) = eax;

loc_00249582: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00249590
 * Original: 0x00249590 - 0x00249649 (185 bytes, 61 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00249590(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00249590: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD908);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002495A0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002495A0: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x46DF94);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002495B0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002495B0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002495B8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002495B8: ;
    ebp = eax;
    PUSH32(esp, 0x002495BFu); RECOMP_ABI_CALL(0x00292980u, sub_00292980); /* call 0x00292980 */

loc_002495BF: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    PUSH32(esp, 0x002495D1u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002495D1: ;
    ebp = eax;
    PUSH32(esp, 0x002495D8u); RECOMP_ABI_CALL(0x00292980u, sub_00292980); /* call 0x00292980 */

loc_002495D8: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x3C) = 0;
    PUSH32(esp, 0x002495EAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002495EA: ;
    ebp = eax;
    PUSH32(esp, 0x002495F1u); RECOMP_ABI_CALL(0x00292980u, sub_00292980); /* call 0x00292980 */

loc_002495F1: ;
    edx = edi + 5;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    PUSH32(esp, 0x00249603u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249603: ;
    ebp = eax;
    eax = MEM32(0x5BD900);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00249627; /* jne: not equal / not zero */

loc_0024960E: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00249619u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00249619: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024961Fu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024961F: ;
    esp = esp + 8;
    MEM32(0x5BD900) = eax;

loc_00249627: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46DF7C);
    PUSH32(esp, 0x46DF64);
    PUSH32(esp, 0x46DF4C);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    PUSH32(esp, 0x00249645u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00249645: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00249650
 * Original: 0x00249650 - 0x0024969D (77 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249650(void)
{

loc_00249650: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BD920);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024965Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024965F: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x46DFD0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024966Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024966F: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024967Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024967A: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x00249683u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00249683: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46DFC4);
    PUSH32(esp, 0x46DFB8);
    PUSH32(esp, 0x46DFAC);
    ecx = esi;
    PUSH32(esp, 0x0024969Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024969A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002496A0
 * Original: 0x002496A0 - 0x002496C4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002496A0(void)
{

loc_002496A0: ;
    esp = esp - 8;
    ecx = esp;
    PUSH32(esp, 0x002496ABu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_002496AB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3FDCE8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002496D0
 * Original: 0x002496D0 - 0x002496DC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002496D0(void)
{

loc_002496D0: ;
    PUSH32(esp, 0x25F4B0);
    PUSH32(esp, 0x002496DAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002496DA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002496E0
 * Original: 0x002496E0 - 0x00249708 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002496E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002496E0: ;
    eax = MEM32(0x5BD93C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00249707; /* jne: not equal / not zero */

loc_002496E9: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x46DFEC);
    PUSH32(esp, 0x46DFDC);
    PUSH32(esp, 0x3FDE28);
    PUSH32(esp, 0x002496FFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_002496FF: ;
    esp = esp + 0x10;
    MEM32(0x5BD93C) = eax;

loc_00249707: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00249710
 * Original: 0x00249710 - 0x002497A6 (150 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249710(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00249710: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD940);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00249722u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00249722: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x46E020);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00249732u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00249732: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024973Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024973A: ;
    ebp = eax;
    PUSH32(esp, 0x00249741u); RECOMP_ABI_CALL(0x00223F70u, sub_00223F70); /* call 0x00223F70 */

loc_00249741: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 1;
    SET_LO8(ebx, 1);
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00249754u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249754: ;
    ebp = eax;
    PUSH32(esp, 0x0024975Bu); RECOMP_ABI_CALL(0x00223F70u, sub_00223F70); /* call 0x00223F70 */

loc_0024975B: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x0024976Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024976C: ;
    ebx = eax;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(esp + 0x14) = 3;
    PUSH32(esp, 0x00249782u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00249782: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E014);
    PUSH32(esp, 0x46E008);
    PUSH32(esp, 0x46DFFC);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x2496E0;
    PUSH32(esp, 0x002497A0u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002497A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002497B0
 * Original: 0x002497B0 - 0x002497BC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002497B0(void)
{

loc_002497B0: ;
    PUSH32(esp, 0x287540);
    PUSH32(esp, 0x002497BAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002497BA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002497C0
 * Original: 0x002497C0 - 0x00249817 (87 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002497C0(void)
{

loc_002497C0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BD948);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002497CFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002497CF: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x46E050);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002497DFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002497DF: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002497EAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002497EA: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax + 0x26) = 0;
    PUSH32(esp, 0x002497F9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002497F9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E044);
    PUSH32(esp, 0x46E038);
    PUSH32(esp, 0x46E02C);
    ecx = esi;
    MEM8(eax + 0x26) = 0;
    PUSH32(esp, 0x00249814u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00249814: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00249820
 * Original: 0x00249820 - 0x00249825 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249820(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00249820: ;
    g_seh_ebp = ebp; sub_002A0DD0(); return; /* tail jmp 0x002A0DD0 */

}

/**
 * sub_00249830
 * Original: 0x00249830 - 0x00249853 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00249830: ;
    eax = MEM32(0x5BD988);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00249852; /* jne: not equal / not zero */

loc_00249839: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00249844u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00249844: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024984Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024984A: ;
    esp = esp + 8;
    MEM32(0x5BD988) = eax;

loc_00249852: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00249860
 * Original: 0x00249860 - 0x002498FD (157 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00249860: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD998);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00249870u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00249870: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x46E074);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00249880u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00249880: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00249888u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249888: ;
    ebx = eax;
    eax = MEM32(0x5BD990);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002498AC; /* jne: not equal / not zero */

loc_00249893: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024989Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024989E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002498A4u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002498A4: ;
    esp = esp + 8;
    MEM32(0x5BD990) = eax;

loc_002498AC: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x002498BAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002498BA: ;
    ebx = eax;
    eax = MEM32(0x5BD98C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002498DF; /* jne: not equal / not zero */

loc_002498C5: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002498D1u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002498D1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002498D7u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002498D7: ;
    esp = esp + 8;
    MEM32(0x5BD98C) = eax;

loc_002498DF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E06C);
    PUSH32(esp, 0x46E064);
    PUSH32(esp, 0x46E05C);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x002498F9u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002498F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00249900
 * Original: 0x00249900 - 0x00249964 (100 bytes, 35 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249900(void)
{

loc_00249900: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD9B0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00249910u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00249910: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x46E0B8);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00249920u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00249920: ;
    eax = edi + 2;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024992Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024992B: ;
    ebx = eax;
    PUSH32(esp, 0x00249932u); RECOMP_ABI_CALL(0x001F3210u, sub_001F3210); /* call 0x001F3210 */

loc_00249932: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00249940u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249940: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00249949u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00249949: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E0A4);
    PUSH32(esp, 0x46E090);
    PUSH32(esp, 0x46E07C);
    ecx = esi;
    PUSH32(esp, 0x00249960u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00249960: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00249970
 * Original: 0x00249970 - 0x0024997C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249970(void)
{

loc_00249970: ;
    PUSH32(esp, 0x281490);
    PUSH32(esp, 0x0024997Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024997A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00249980
 * Original: 0x00249980 - 0x00249A32 (178 bytes, 58 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00249980(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00249980: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BD9C8);
    ecx = edi;
    PUSH32(esp, 0x00249990u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00249990: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x46E0FC);
    ecx = edi;
    ebp = eax;
    PUSH32(esp, 0x002499A0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002499A0: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x002499A8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002499A8: ;
    esi = eax;
    PUSH32(esp, 0x002499AFu); RECOMP_ABI_CALL(0x0023B180u, sub_0023B180); /* call 0x0023B180 */

loc_002499AF: ;
    MEM32(esi + 0x38) = eax;
    eax = ebp + 1;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002499BDu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002499BD: ;
    esi = eax;
    eax = MEM32(0x5BD9B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002499E2; /* jne: not equal / not zero */

loc_002499C8: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002499D4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002499D4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002499DAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002499DA: ;
    esp = esp + 8;
    MEM32(0x5BD9B8) = eax;

loc_002499E2: ;
    edx = ebp + 3;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esi + 0x38) = eax;
    MEM8(esi + 0x24) = 3;
    MEM8(esi + 0x34) = 1;
    MEM8(esi + 0x26) = 0;
    MEM8(esi + 0x28) = 4;
    MEM8(esi + 0x27) = 4;
    MEM8(esi + 0x29) = 4;
    PUSH32(esp, 0x00249A08u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249A08: ;
    esi = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    PUSH32(esp, 0x00249A13u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00249A13: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x46E0EC);
    PUSH32(esp, 0x46E0DC);
    PUSH32(esp, 0x46E0CC);
    ecx = edi;
    MEM8(esi + 0x26) = 0;
    PUSH32(esp, 0x00249A2Eu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00249A2E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00249A40
 * Original: 0x00249A40 - 0x00249ACD (141 bytes, 51 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249A40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00249A40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD9CC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00249A51u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00249A51: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x46E13C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00249A61u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00249A61: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00249A69u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249A69: ;
    ebp = eax;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0x00249A74u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00249A74: ;
    eax = edi + 1;
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00249A84u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249A84: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00249A92u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249A92: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00249AA0u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249AA0: ;
    ebp = eax;
    PUSH32(esp, 0x00249AA7u); RECOMP_ABI_CALL(0x00292950u, sub_00292950); /* call 0x00292950 */

loc_00249AA7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E12C);
    PUSH32(esp, 0x46E11C);
    PUSH32(esp, 0x46E10C);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00249AC8u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00249AC8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00249AD0
 * Original: 0x00249AD0 - 0x00249C11 (321 bytes, 107 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249AD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00249AD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD9E4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00249AE1u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00249AE1: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x46E1E8);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00249AF1u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00249AF1: ;
    eax = edi + 3;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00249AFCu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249AFC: ;
    ebp = eax;
    PUSH32(esp, 0x00249B03u); RECOMP_ABI_CALL(0x00222F00u, sub_00222F00); /* call 0x00222F00 */

loc_00249B03: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    SET_LO8(ebx, 1);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00249B16u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249B16: ;
    ebp = eax;
    PUSH32(esp, 0x00249B1Du); RECOMP_ABI_CALL(0x00222F00u, sub_00222F00); /* call 0x00222F00 */

loc_00249B1D: ;
    edx = edi + 5;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00249B2Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249B2E: ;
    ebp = eax;
    PUSH32(esp, 0x00249B35u); RECOMP_ABI_CALL(0x00222F50u, sub_00222F50); /* call 0x00222F50 */

loc_00249B35: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 6;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00249B46u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249B46: ;
    ebp = eax;
    PUSH32(esp, 0x00249B4Du); RECOMP_ABI_CALL(0x00222F00u, sub_00222F00); /* call 0x00222F00 */

loc_00249B4D: ;
    ecx = edi + 7;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00249B5Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249B5E: ;
    ebp = eax;
    eax = MEM32(0x5BD9D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00249B83; /* jne: not equal / not zero */

loc_00249B69: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00249B75u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00249B75: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00249B7Bu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00249B7B: ;
    esp = esp + 8;
    MEM32(0x5BD9D0) = eax;

loc_00249B83: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 8;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00249B94u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249B94: ;
    ebp = eax;
    eax = MEM32(0x5BD9D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00249BB9; /* jne: not equal / not zero */

loc_00249B9F: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00249BABu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00249BAB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00249BB1u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00249BB1: ;
    esp = esp + 8;
    MEM32(0x5BD9D8) = eax;

loc_00249BB9: ;
    edx = edi + 9;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00249BCAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249BCA: ;
    ebx = eax;
    eax = MEM32(0x5BD9E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00249BEE; /* jne: not equal / not zero */

loc_00249BD5: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00249BE0u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00249BE0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00249BE6u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00249BE6: ;
    esp = esp + 8;
    MEM32(0x5BD9E4) = eax;

loc_00249BEE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E1B4);
    PUSH32(esp, 0x46E180);
    PUSH32(esp, 0x46E14C);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x3C) = 0;
    PUSH32(esp, 0x00249C0Cu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00249C0C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00249C20
 * Original: 0x00249C20 - 0x00249D1B (251 bytes, 85 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249C20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00249C20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD9F8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00249C32u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00249C32: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x46E294);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00249C42u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00249C42: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00249C4Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249C4A: ;
    ebx = eax;
    PUSH32(esp, 0x00249C51u); RECOMP_ABI_CALL(0x001AABC0u, sub_001AABC0); /* call 0x001AABC0 */

loc_00249C51: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00249C5Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249C5F: ;
    ebx = eax;
    PUSH32(esp, 0x00249C66u); RECOMP_ABI_CALL(0x001AB050u, sub_001AB050); /* call 0x001AB050 */

loc_00249C66: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00249C74u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249C74: ;
    ebp = eax;
    PUSH32(esp, 0x00249C7Bu); RECOMP_ABI_CALL(0x00222FF0u, sub_00222FF0); /* call 0x00222FF0 */

loc_00249C7B: ;
    edx = edi + 3;
    ebx = 1;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00249C91u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249C91: ;
    ebp = eax;
    PUSH32(esp, 0x00249C98u); RECOMP_ABI_CALL(0x00222FF0u, sub_00222FF0); /* call 0x00222FF0 */

loc_00249C98: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00249CA9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249CA9: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x00249CB1u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00249CB1: ;
    ecx = edi + 6;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00249CBCu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249CBC: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x00249CC4u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00249CC4: ;
    edx = edi + 8;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00249CCFu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249CCF: ;
    ebx = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x00249CE5u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00249CE5: ;
    ecx = edi + 9;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x221530;
    PUSH32(esp, 0x00249CF7u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249CF7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E26C);
    PUSH32(esp, 0x46E244);
    PUSH32(esp, 0x46E21C);
    ecx = esi;
    MEM32(eax + 0x34) = 0xA;
    PUSH32(esp, 0x00249D15u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00249D15: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00249D20
 * Original: 0x00249D20 - 0x00249D48 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00249D20: ;
    eax = MEM32(0x5BD9FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00249D47; /* jne: not equal / not zero */

loc_00249D29: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x46E2C8);
    PUSH32(esp, 0x46E2BC);
    PUSH32(esp, 0x3FDC8C);
    PUSH32(esp, 0x00249D3Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_00249D3F: ;
    esp = esp + 0x10;
    MEM32(0x5BD9FC) = eax;

loc_00249D47: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00249D50
 * Original: 0x00249D50 - 0x00249D78 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00249D50: ;
    eax = MEM32(0x5BDA00);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00249D77; /* jne: not equal / not zero */

loc_00249D59: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x46E2E8);
    PUSH32(esp, 0x46E2D4);
    PUSH32(esp, 0x3FDCBC);
    PUSH32(esp, 0x00249D6Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_00249D6F: ;
    esp = esp + 0x10;
    MEM32(0x5BDA00) = eax;

loc_00249D77: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00249D80
 * Original: 0x00249D80 - 0x00249E1A (154 bytes, 52 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00249D80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */

loc_00249D80: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDA0C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00249D90u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00249D90: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x46E344);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00249DA0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00249DA0: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00249DABu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249DAB: ;
    ebp = eax;
    PUSH32(esp, 0x00249DB2u); RECOMP_ABI_CALL(0x00223090u, sub_00223090); /* call 0x00223090 */

loc_00249DB2: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    PUSH32(esp, 0x00249DC4u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249DC4: ;
    ebp = eax;
    PUSH32(esp, 0x00249DCBu); RECOMP_ABI_CALL(0x00222F00u, sub_00222F00); /* call 0x00222F00 */

loc_00249DCB: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    PUSH32(esp, 0x00249DDDu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249DDD: ;
    ebp = eax;
    PUSH32(esp, 0x00249DE4u); RECOMP_ABI_CALL(0x00222F00u, sub_00222F00); /* call 0x00222F00 */

loc_00249DE4: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    PUSH32(esp, 0x00249DF6u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249DF6: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x00249DFFu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00249DFF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E32C);
    PUSH32(esp, 0x46E314);
    PUSH32(esp, 0x46E2FC);
    ecx = esi;
    PUSH32(esp, 0x00249E16u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00249E16: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00249E20
 * Original: 0x00249E20 - 0x00249ED4 (180 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249E20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00249E20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDA10);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00249E31u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00249E31: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x46E38C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00249E41u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00249E41: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00249E49u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249E49: ;
    ebp = eax;
    PUSH32(esp, 0x00249E50u); RECOMP_ABI_CALL(0x00222F00u, sub_00222F00); /* call 0x00222F00 */

loc_00249E50: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 1;
    SET_LO8(ebx, 1);
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00249E63u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249E63: ;
    ebp = eax;
    PUSH32(esp, 0x00249E6Au); RECOMP_ABI_CALL(0x001F33C0u, sub_001F33C0); /* call 0x001F33C0 */

loc_00249E6A: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00249E7Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249E7B: ;
    ebx = eax;
    eax = MEM32(0x5BDA04);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00249EA0; /* jne: not equal / not zero */

loc_00249E86: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00249E92u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00249E92: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00249E98u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00249E98: ;
    esp = esp + 8;
    MEM32(0x5BDA04) = eax;

loc_00249EA0: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 3;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00249EAEu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249EAE: ;
    ebx = eax;
    PUSH32(esp, 0x00249EB5u); RECOMP_ABI_CALL(0x00291940u, sub_00291940); /* call 0x00291940 */

loc_00249EB5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E37C);
    PUSH32(esp, 0x46E36C);
    PUSH32(esp, 0x46E35C);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00249ECFu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00249ECF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00249EE0
 * Original: 0x00249EE0 - 0x00249FEA (266 bytes, 89 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249EE0(void)
{

loc_00249EE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDA18);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00249EF1u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00249EF1: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x46E438);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00249F01u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00249F01: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00249F09u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249F09: ;
    ebx = eax;
    PUSH32(esp, 0x00249F10u); RECOMP_ABI_CALL(0x001AABC0u, sub_001AABC0); /* call 0x001AABC0 */

loc_00249F10: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00249F1Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249F1E: ;
    ebx = eax;
    PUSH32(esp, 0x00249F25u); RECOMP_ABI_CALL(0x001AB050u, sub_001AB050); /* call 0x001AB050 */

loc_00249F25: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00249F33u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249F33: ;
    ebx = eax;
    PUSH32(esp, 0x00249F3Au); RECOMP_ABI_CALL(0x0023B750u, sub_0023B750); /* call 0x0023B750 */

loc_00249F3A: ;
    edx = edi + 5;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00249F48u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249F48: ;
    ebx = eax;
    PUSH32(esp, 0x00249F4Fu); RECOMP_ABI_CALL(0x00222D20u, sub_00222D20); /* call 0x00222D20 */

loc_00249F4F: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 6;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00249F5Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249F5D: ;
    ebx = eax;
    PUSH32(esp, 0x00249F64u); RECOMP_ABI_CALL(0x0023B750u, sub_0023B750); /* call 0x0023B750 */

loc_00249F64: ;
    ecx = edi + 7;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00249F72u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249F72: ;
    ebx = eax;
    PUSH32(esp, 0x00249F79u); RECOMP_ABI_CALL(0x00222D20u, sub_00222D20); /* call 0x00222D20 */

loc_00249F79: ;
    edx = edi + 8;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00249F87u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249F87: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00249F9Du); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00249F9D: ;
    ecx = edi + 0xB;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x1AA410;
    PUSH32(esp, 0x00249FAFu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249FAF: ;
    ebx = eax;
    PUSH32(esp, 0x00249FB6u); RECOMP_ABI_CALL(0x00223090u, sub_00223090); /* call 0x00223090 */

loc_00249FB6: ;
    edx = edi + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00249FC4u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00249FC4: ;
    ebx = eax;
    PUSH32(esp, 0x00249FCBu); RECOMP_ABI_CALL(0x001AACB0u, sub_001AACB0); /* call 0x001AACB0 */

loc_00249FCB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E404);
    PUSH32(esp, 0x46E3D0);
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x46E39C);
    ecx = esi;
    PUSH32(esp, 0x00249FE5u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00249FE5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00249FF0
 * Original: 0x00249FF0 - 0x0024A03A (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249FF0(void)
{

loc_00249FF0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BDA20);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00249FFFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00249FFF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x46E478);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024A00Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024A00F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024A017u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A017: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x0024A020u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024A020: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E474);
    PUSH32(esp, 0x46E470);
    PUSH32(esp, 0x46E46C);
    ecx = esi;
    PUSH32(esp, 0x0024A037u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024A037: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024A040
 * Original: 0x0024A040 - 0x0024A063 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024A040: ;
    eax = MEM32(0x5BDA28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024A062; /* jne: not equal / not zero */

loc_0024A049: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024A054u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024A054: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024A05Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024A05A: ;
    esp = esp + 8;
    MEM32(0x5BDA28) = eax;

loc_0024A062: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024A070
 * Original: 0x0024A070 - 0x0024A0C9 (89 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A070(void)
{

loc_0024A070: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDA28);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024A080u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024A080: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x46E488);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x0024A090u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024A090: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0024A098u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A098: ;
    edi = eax;
    PUSH32(esp, 0x0024A09Fu); RECOMP_ABI_CALL(0x00291C80u, sub_00291C80); /* call 0x00291C80 */

loc_0024A09F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x46E484);
    PUSH32(esp, 0x46E480);
    PUSH32(esp, 0x46E47C);
    ecx = esi;
    MEM32(edi + 0x38) = eax;
    MEM8(edi + 0x34) = 1;
    MEM8(edi + 0x28) = 0;
    MEM8(edi + 0x27) = 2;
    PUSH32(esp, 0x0024A0C5u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024A0C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024A0D0
 * Original: 0x0024A0D0 - 0x0024A129 (89 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A0D0(void)
{

loc_0024A0D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDA2C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024A0E0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024A0E0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x46E498);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x0024A0F0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024A0F0: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0024A0F8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A0F8: ;
    edi = eax;
    PUSH32(esp, 0x0024A0FFu); RECOMP_ABI_CALL(0x00291CC0u, sub_00291CC0); /* call 0x00291CC0 */

loc_0024A0FF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x46E494);
    PUSH32(esp, 0x46E490);
    PUSH32(esp, 0x46E48C);
    ecx = esi;
    MEM32(edi + 0x38) = eax;
    MEM8(edi + 0x34) = 1;
    MEM8(edi + 0x28) = 0;
    MEM8(edi + 0x27) = 2;
    PUSH32(esp, 0x0024A125u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024A125: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024A130
 * Original: 0x0024A130 - 0x0024A180 (80 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A130(void)
{

loc_0024A130: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDA30);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024A140u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024A140: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x46E4B4);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024A150u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024A150: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024A15Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A15B: ;
    ebx = eax;
    PUSH32(esp, 0x0024A162u); RECOMP_ABI_CALL(0x001A4D90u, sub_001A4D90); /* call 0x001A4D90 */

loc_0024A162: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E4AC);
    PUSH32(esp, 0x46E4A4);
    PUSH32(esp, 0x46E49C);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0024A17Cu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024A17C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024A180
 * Original: 0x0024A180 - 0x0024A254 (212 bytes, 69 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024A180: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDA48);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024A190u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024A190: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x46E4EC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024A1A0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024A1A0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024A1A8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A1A8: ;
    ebx = eax;
    eax = MEM32(0x5BDA40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024A1CC; /* jne: not equal / not zero */

loc_0024A1B3: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024A1BEu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024A1BE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024A1C4u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024A1C4: ;
    esp = esp + 8;
    MEM32(0x5BDA40) = eax;

loc_0024A1CC: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0024A1DAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A1DA: ;
    ebx = eax;
    eax = MEM32(0x5BDA40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024A1FF; /* jne: not equal / not zero */

loc_0024A1E5: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0024A1F1u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024A1F1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024A1F7u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024A1F7: ;
    esp = esp + 8;
    MEM32(0x5BDA40) = eax;

loc_0024A1FF: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 2;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024A20Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A20D: ;
    ebx = eax;
    eax = MEM32(0x5BDA3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024A232; /* jne: not equal / not zero */

loc_0024A218: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024A224u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024A224: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024A22Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024A22A: ;
    esp = esp + 8;
    MEM32(0x5BDA3C) = eax;

loc_0024A232: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E4DC);
    PUSH32(esp, 0x46E4CC);
    PUSH32(esp, 0x46E4BC);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x0024A250u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024A250: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024A260
 * Original: 0x0024A260 - 0x0024A2E1 (129 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A260(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024A260: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDA58);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024A271u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024A271: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x46E520);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024A281u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024A281: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024A289u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A289: ;
    ebx = eax;
    PUSH32(esp, 0x0024A290u); RECOMP_ABI_CALL(0x0023B180u, sub_0023B180); /* call 0x0023B180 */

loc_0024A290: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024A29Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A29E: ;
    ebp = eax;
    PUSH32(esp, 0x0024A2A5u); RECOMP_ABI_CALL(0x0023B570u, sub_0023B570); /* call 0x0023B570 */

loc_0024A2A5: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    SET_LO8(ebx, 1);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x0024A2B8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A2B8: ;
    ebp = eax;
    PUSH32(esp, 0x0024A2BFu); RECOMP_ABI_CALL(0x001F33C0u, sub_001F33C0); /* call 0x001F33C0 */

loc_0024A2BF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E514);
    PUSH32(esp, 0x46E508);
    PUSH32(esp, 0x46E4FC);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x0024A2DCu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024A2DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024A2F0
 * Original: 0x0024A2F0 - 0x0024A2F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A2F0(void)
{

loc_0024A2F0: ;
    eax = MEM32(0x5BDA5C);
    esp += 4; return; /* ret */

}

/**
 * sub_0024A300
 * Original: 0x0024A300 - 0x0024A383 (131 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024A300: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDA60);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024A310u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024A310: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x46E544);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024A320u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024A320: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024A328u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A328: ;
    ebx = eax;
    eax = MEM32(0x5BD940);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024A34C; /* jne: not equal / not zero */

loc_0024A333: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024A33Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024A33E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024A344u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024A344: ;
    esp = esp + 8;
    MEM32(0x5BD940) = eax;

loc_0024A34C: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0024A35Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A35A: ;
    ebx = eax;
    PUSH32(esp, 0x0024A361u); RECOMP_ABI_CALL(0x00223E00u, sub_00223E00); /* call 0x00223E00 */

loc_0024A361: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E53C);
    PUSH32(esp, 0x46E534);
    PUSH32(esp, 0x46E52C);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x0024A37Fu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024A37F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024A390
 * Original: 0x0024A390 - 0x0024A421 (145 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0024A390(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024A390: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BDA64);
    PUSH32(esp, 0x3FE378);
    ecx = edi;
    PUSH32(esp, 0x0024A3A5u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_0024A3A5: ;
    ecx = MEM32(edi + 0x28);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0024A3B0u); RECOMP_ABI_CALL(0x001E8890u, sub_001E8890); /* call 0x001E8890 */

loc_0024A3B0: ;
    ebp = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0024A3BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024A3BB: ;
    esi = eax;
    eax = MEM32(0x5BD92C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024A3E0; /* jne: not equal / not zero */

loc_0024A3C6: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024A3D2u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024A3D2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024A3D8u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024A3D8: ;
    esp = esp + 8;
    MEM32(0x5BD92C) = eax;

loc_0024A3E0: ;
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esi + 0x38) = eax;
    PUSH32(esp, 0x0024A3ECu); RECOMP_ABI_CALL(0x0020E920u, sub_0020E920); /* call 0x0020E920 */

loc_0024A3EC: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = edi;
    MEM8(esi + 0x34) = 0;
    MEM8(esi + 0x26) = 0;
    MEM32(esi + 0x1C) = 0x5BD140;
    PUSH32(esp, 0x0024A404u); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_0024A404: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0024A41E; /* jne: not equal / not zero */

loc_0024A415: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_0024A41E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0024A430
 * Original: 0x0024A430 - 0x0024A436 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A430(void)
{

loc_0024A430: ;
    eax = MEM32(0x5BDA68);
    esp += 4; return; /* ret */

}

/**
 * sub_0024A440
 * Original: 0x0024A440 - 0x0024A563 (291 bytes, 100 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A440(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024A440: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDA6C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024A451u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024A451: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x46E5B8);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024A461u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024A461: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024A46Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A46C: ;
    ebx = eax;
    PUSH32(esp, 0x0024A473u); RECOMP_ABI_CALL(0x00223E00u, sub_00223E00); /* call 0x00223E00 */

loc_0024A473: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x0024A485u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A485: ;
    ebp = eax;
    PUSH32(esp, 0x0024A48Cu); RECOMP_ABI_CALL(0x00223C30u, sub_00223C30); /* call 0x00223C30 */

loc_0024A48C: ;
    edx = edi + 3;
    ebx = 0; /* xor self */
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0024A49Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A49F: ;
    ebp = eax;
    PUSH32(esp, 0x0024A4A6u); RECOMP_ABI_CALL(0x00223C30u, sub_00223C30); /* call 0x00223C30 */

loc_0024A4A6: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0024A4B7u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A4B7: ;
    ebp = eax;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0024A4C1u); RECOMP_ABI_CALL(0x00217FA0u, sub_00217FA0); /* call 0x00217FA0 */

loc_0024A4C1: ;
    ecx = edi + 5;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0024A4CFu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A4CF: ;
    ebp = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebp;
    PUSH32(esp, 0x0024A4DAu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024A4DA: ;
    edx = edi + 6;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0024A4E8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A4E8: ;
    ebp = eax;
    PUSH32(esp, 0x0024A4EFu); RECOMP_ABI_CALL(0x00222910u, sub_00222910); /* call 0x00222910 */

loc_0024A4EF: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 7;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0024A500u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A500: ;
    ebp = eax;
    eax = MEM32(0x5BDA60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A525; /* jne: not equal / not zero */

loc_0024A50B: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024A517u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024A517: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024A51Du); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024A51D: ;
    esp = esp + 8;
    MEM32(0x5BDA60) = eax;

loc_0024A525: ;
    edx = edi + 8;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0024A536u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A536: ;
    ebp = eax;
    PUSH32(esp, 0x0024A53Du); RECOMP_ABI_CALL(0x00223E00u, sub_00223E00); /* call 0x00223E00 */

loc_0024A53D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E594);
    PUSH32(esp, 0x46E570);
    PUSH32(esp, 0x46E54C);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0024A55Eu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024A55E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024A570
 * Original: 0x0024A570 - 0x0024A594 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A570(void)
{

loc_0024A570: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0024A57Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0024A57B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3FDF50;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0024A5A0
 * Original: 0x0024A5A0 - 0x0024A5D9 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A5A0(void)
{

loc_0024A5A0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BDA78);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024A5AFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024A5AF: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x46E5F4);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024A5BFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024A5BF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E5EC);
    PUSH32(esp, 0x46E5E4);
    PUSH32(esp, 0x46E5DC);
    ecx = esi;
    PUSH32(esp, 0x0024A5D6u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024A5D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024A5E0
 * Original: 0x0024A5E0 - 0x0024A64E (110 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024A5E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDA7C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024A5F0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024A5F0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x46E608);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024A600u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024A600: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024A608u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A608: ;
    ebx = eax;
    eax = MEM32(0x5BD998);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024A62C; /* jne: not equal / not zero */

loc_0024A613: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024A61Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024A61E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024A624u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024A624: ;
    esp = esp + 8;
    MEM32(0x5BD998) = eax;

loc_0024A62C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E604);
    PUSH32(esp, 0x46E600);
    PUSH32(esp, 0x46E5FC);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x26) = 0;
    PUSH32(esp, 0x0024A64Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024A64A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024A650
 * Original: 0x0024A650 - 0x0024A6CA (122 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024A650: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BDA80);
    ecx = edi;
    PUSH32(esp, 0x0024A660u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024A660: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x46E618);
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x0024A670u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024A670: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0024A678u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A678: ;
    esi = eax;
    eax = MEM32(0x5BD9C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024A69C; /* jne: not equal / not zero */

loc_0024A683: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024A68Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024A68E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024A694u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024A694: ;
    esp = esp + 8;
    MEM32(0x5BD9C0) = eax;

loc_0024A69C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x46E614);
    PUSH32(esp, 0x46E610);
    PUSH32(esp, 0x46E60C);
    ecx = edi;
    MEM32(esi + 0x38) = eax;
    MEM8(esi + 0x24) = 3;
    MEM8(esi + 0x34) = 1;
    MEM8(esi + 0x28) = 0;
    MEM8(esi + 0x27) = 2;
    PUSH32(esp, 0x0024A6C6u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024A6C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024A6D0
 * Original: 0x0024A6D0 - 0x0024A777 (167 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A6D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024A6D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BDA90);
    ecx = edi;
    PUSH32(esp, 0x0024A6E1u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024A6E1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x46E628);
    ecx = edi;
    ebp = eax;
    PUSH32(esp, 0x0024A6F1u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024A6F1: ;
    PUSH32(esp, 0x3FE498);
    ecx = edi;
    PUSH32(esp, 0x0024A6FDu); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_0024A6FD: ;
    ecx = MEM32(edi + 0x28);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0024A708u); RECOMP_ABI_CALL(0x001E8890u, sub_001E8890); /* call 0x001E8890 */

loc_0024A708: ;
    ebx = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0024A713u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024A713: ;
    esi = eax;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0024A71Eu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024A71E: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x1C) = 0x5BD67C;
    PUSH32(esp, 0x0024A72Eu); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_0024A72E: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0024A745; /* jne: not equal / not zero */

loc_0024A73E: ;
    ecx = esi;
    PUSH32(esp, 0x0024A745u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0024A745: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0024A74Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A74D: ;
    esi = eax;
    PUSH32(esp, 0x0024A754u); RECOMP_ABI_CALL(0x00291210u, sub_00291210); /* call 0x00291210 */

loc_0024A754: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x46E624);
    PUSH32(esp, 0x46E620);
    PUSH32(esp, 0x46E61C);
    ecx = edi;
    MEM32(esi + 0x38) = eax;
    MEM8(esi + 0x26) = 0;
    PUSH32(esp, 0x0024A772u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024A772: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024A780
 * Original: 0x0024A780 - 0x0024A7A2 (34 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024A780: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024A79E; /* je: equal / zero */

loc_0024A789: ;
    eax = MEM32(0x5BE524);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024A796u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0024A796: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024A79E; /* je: equal / zero */

loc_0024A79A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0024A79E: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024A7B0
 * Original: 0x0024A7B0 - 0x0024A7B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A7B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024A7B0: ;
    g_seh_ebp = ebp; sub_00297750(); return; /* tail jmp 0x00297750 */

}

/**
 * sub_0024A7C0
 * Original: 0x0024A7C0 - 0x0024A84F (143 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0024A7C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */

loc_0024A7C0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDAA8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024A7D0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024A7D0: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x46E650);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024A7E0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024A7E0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024A7E8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A7E8: ;
    ebp = eax;
    PUSH32(esp, 0x0024A7EFu); RECOMP_ABI_CALL(0x00222E10u, sub_00222E10); /* call 0x00222E10 */

loc_0024A7EF: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x0024A805u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A805: ;
    ebp = eax;
    PUSH32(esp, 0x0024A80Cu); RECOMP_ABI_CALL(0x00223090u, sub_00223090); /* call 0x00223090 */

loc_0024A80C: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x0024A822u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A822: ;
    ebp = eax;
    PUSH32(esp, 0x0024A829u); RECOMP_ABI_CALL(0x00223090u, sub_00223090); /* call 0x00223090 */

loc_0024A829: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E644);
    PUSH32(esp, 0x46E638);
    PUSH32(esp, 0x46E62C);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x0024A84Bu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024A84B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0024A850
 * Original: 0x0024A850 - 0x0024A878 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024A850: ;
    eax = MEM32(0x5BDAB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024A877; /* jne: not equal / not zero */

loc_0024A859: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x46E66C);
    PUSH32(esp, 0x46E65C);
    PUSH32(esp, 0x3FDCBC);
    PUSH32(esp, 0x0024A86Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_0024A86F: ;
    esp = esp + 0x10;
    MEM32(0x5BDAB8) = eax;

loc_0024A877: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024A880
 * Original: 0x0024A880 - 0x0024A886 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A880(void)
{

loc_0024A880: ;
    eax = MEM32(0x5BDABC);
    esp += 4; return; /* ret */

}

/**
 * sub_0024A890
 * Original: 0x0024A890 - 0x0024A9D1 (321 bytes, 102 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0024A890(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */

loc_0024A890: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDAC0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024A8A0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024A8A0: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x46E70C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024A8B0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024A8B0: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024A8BBu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A8BB: ;
    PUSH32(esp, 0x40000000);
    ecx = eax;
    PUSH32(esp, 0x0024A8C7u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024A8C7: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0024A8D2u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A8D2: ;
    PUSH32(esp, 0x42C80000);
    ecx = eax;
    PUSH32(esp, 0x0024A8DEu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024A8DE: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0024A8E9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A8E9: ;
    PUSH32(esp, 0xBF800000u);
    ecx = eax;
    PUSH32(esp, 0x0024A8F5u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024A8F5: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024A900u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A900: ;
    PUSH32(esp, 0xBF800000u);
    ecx = eax;
    PUSH32(esp, 0x0024A90Cu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024A90C: ;
    ecx = edi + 5;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0024A917u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A917: ;
    PUSH32(esp, 0xBF800000u);
    ecx = eax;
    PUSH32(esp, 0x0024A923u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024A923: ;
    edx = edi + 6;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0024A92Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A92E: ;
    PUSH32(esp, 0xBF800000u);
    ecx = eax;
    PUSH32(esp, 0x0024A93Au); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024A93A: ;
    eax = edi + 7;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024A945u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A945: ;
    PUSH32(esp, 0xBF800000u);
    ecx = eax;
    PUSH32(esp, 0x0024A951u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024A951: ;
    ecx = edi + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0024A95Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A95C: ;
    ebp = eax;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0x0024A967u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024A967: ;
    edx = edi + 9;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x0024A976u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A976: ;
    PUSH32(esp, 0xBF800000u);
    ecx = eax;
    PUSH32(esp, 0x0024A982u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024A982: ;
    eax = edi + 0xA;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024A98Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A98D: ;
    PUSH32(esp, 0xBF800000u);
    ecx = eax;
    PUSH32(esp, 0x0024A999u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024A999: ;
    ecx = edi + 0xB;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0024A9A4u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024A9A4: ;
    ebp = eax;
    PUSH32(esp, 0x0024A9ABu); RECOMP_ABI_CALL(0x00292980u, sub_00292980); /* call 0x00292980 */

loc_0024A9AB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E6DC);
    PUSH32(esp, 0x46E6AC);
    PUSH32(esp, 0x46E67C);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x0024A9CDu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024A9CD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0024A9E0
 * Original: 0x0024A9E0 - 0x0024AA6C (140 bytes, 48 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A9E0(void)
{

loc_0024A9E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDAC4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024A9F0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024A9F0: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x46E7B4);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024AA00u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024AA00: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024AA08u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AA08: ;
    ebx = eax;
    PUSH32(esp, 0x0024AA0Fu); RECOMP_ABI_CALL(0x00222FF0u, sub_00222FF0); /* call 0x00222FF0 */

loc_0024AA0F: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024AA1Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AA1D: ;
    ebx = eax;
    PUSH32(esp, 0x0024AA24u); RECOMP_ABI_CALL(0x00222FF0u, sub_00222FF0); /* call 0x00222FF0 */

loc_0024AA24: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0024AA32u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AA32: ;
    ebx = eax;
    PUSH32(esp, 0x0024AA39u); RECOMP_ABI_CALL(0x00222FF0u, sub_00222FF0); /* call 0x00222FF0 */

loc_0024AA39: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0024AA47u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AA47: ;
    ebx = eax;
    PUSH32(esp, 0x0024AA4Eu); RECOMP_ABI_CALL(0x00222FF0u, sub_00222FF0); /* call 0x00222FF0 */

loc_0024AA4E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E78C);
    PUSH32(esp, 0x46E764);
    PUSH32(esp, 0x46E73C);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0024AA68u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024AA68: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024AA70
 * Original: 0x0024AA70 - 0x0024AABD (77 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024AA70(void)
{

loc_0024AA70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDAC8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024AA80u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024AA80: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x46E800);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024AA90u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024AA90: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024AA98u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AA98: ;
    ebx = eax;
    PUSH32(esp, 0x0024AA9Fu); RECOMP_ABI_CALL(0x00222FF0u, sub_00222FF0); /* call 0x00222FF0 */

loc_0024AA9F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E7F4);
    PUSH32(esp, 0x46E7E8);
    PUSH32(esp, 0x46E7DC);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0024AAB9u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024AAB9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024AAC0
 * Original: 0x0024AAC0 - 0x0024ABB5 (245 bytes, 86 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024AAC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024AAC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDACC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024AAD2u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024AAD2: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x46E89C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024AAE2u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024AAE2: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024AAEAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AAEA: ;
    ebx = eax;
    PUSH32(esp, 0x0024AAF1u); RECOMP_ABI_CALL(0x00222FF0u, sub_00222FF0); /* call 0x00222FF0 */

loc_0024AAF1: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024AAFFu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AAFF: ;
    ebx = eax;
    PUSH32(esp, 0x0024AB06u); RECOMP_ABI_CALL(0x00222FF0u, sub_00222FF0); /* call 0x00222FF0 */

loc_0024AB06: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0024AB14u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AB14: ;
    ebx = eax;
    PUSH32(esp, 0x0024AB1Bu); RECOMP_ABI_CALL(0x00222FF0u, sub_00222FF0); /* call 0x00222FF0 */

loc_0024AB1B: ;
    edx = edi + 7;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0024AB29u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AB29: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x0024AB34u); RECOMP_ABI_CALL(0x001E7D60u, sub_001E7D60); /* call 0x001E7D60 */

loc_0024AB34: ;
    eax = edi + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024AB3Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AB3F: ;
    ecx = esp + 0x10;
    ebp = eax;
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    ecx = ebp;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x0024AB53u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0024AB53: ;
    edx = edi + 9;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x34) = 0x221530;
    PUSH32(esp, 0x0024AB65u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AB65: ;
    ebp = eax;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0x0024AB70u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024AB70: ;
    eax = edi + 0xA;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0024AB7Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AB7E: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0024AB86u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024AB86: ;
    ecx = edi + 0xB;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0024AB91u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AB91: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E86C);
    PUSH32(esp, 0x46E83C);
    PUSH32(esp, 0x46E80C);
    ecx = esi;
    MEM32(eax + 0x34) = 3;
    PUSH32(esp, 0x0024ABAFu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024ABAF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024ABC0
 * Original: 0x0024ABC0 - 0x0024ABE8 (40 bytes, 11 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024ABC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024ABC0: ;
    eax = MEM32(0x5BDAD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024ABE7; /* jne: not equal / not zero */

loc_0024ABC9: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x46E8E4);
    PUSH32(esp, 0x46E8CC);
    PUSH32(esp, 0x3FE808);
    PUSH32(esp, 0x0024ABDFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_0024ABDF: ;
    esp = esp + 0x10;
    MEM32(0x5BDAD0) = eax;

loc_0024ABE7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024ABF0
 * Original: 0x0024ABF0 - 0x0024AC18 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024ABF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024ABF0: ;
    eax = MEM32(0x5BDAD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024AC17; /* jne: not equal / not zero */

loc_0024ABF9: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x46E908);
    PUSH32(esp, 0x46E8FC);
    PUSH32(esp, 0x3FE840);
    PUSH32(esp, 0x0024AC0Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_0024AC0F: ;
    esp = esp + 0x10;
    MEM32(0x5BDAD4) = eax;

loc_0024AC17: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024AC20
 * Original: 0x0024AC20 - 0x0024AC8E (110 bytes, 37 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0024AC20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */

loc_0024AC20: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDAE0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024AC30u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024AC30: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x46E92C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024AC40u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024AC40: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024AC48u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AC48: ;
    ebp = eax;
    PUSH32(esp, 0x0024AC4Fu); RECOMP_ABI_CALL(0x002926F0u, sub_002926F0); /* call 0x002926F0 */

loc_0024AC4F: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x0024AC61u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AC61: ;
    ebp = eax;
    PUSH32(esp, 0x0024AC68u); RECOMP_ABI_CALL(0x002929F0u, sub_002929F0); /* call 0x002929F0 */

loc_0024AC68: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E924);
    PUSH32(esp, 0x46E91C);
    PUSH32(esp, 0x46E914);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x3C) = 0;
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x0024AC8Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024AC8A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0024AC90
 * Original: 0x0024AC90 - 0x0024AD88 (248 bytes, 87 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024AC90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024AC90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDAEC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024ACA1u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024ACA1: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x46E994);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024ACB1u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024ACB1: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024ACB9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024ACB9: ;
    ebx = 0; /* xor self */
    MEM8(eax + 0x26) = LO8(ebx);
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024ACC9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024ACC9: ;
    ebp = eax;
    eax = MEM32(0x5BD898);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024ACEE; /* jne: not equal / not zero */

loc_0024ACD4: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024ACE0u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024ACE0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024ACE6u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024ACE6: ;
    esp = esp + 8;
    MEM32(0x5BD898) = eax;

loc_0024ACEE: ;
    edx = edi + 2;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0024ACFFu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024ACFF: ;
    ebp = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebp;
    PUSH32(esp, 0x0024AD0Au); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024AD0A: ;
    eax = edi + 3;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0024AD18u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AD18: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0024AD26u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AD26: ;
    ebp = eax;
    PUSH32(esp, 0x0024AD2Du); RECOMP_ABI_CALL(0x00223B40u, sub_00223B40); /* call 0x00223B40 */

loc_0024AD2D: ;
    edx = edi + 5;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0024AD42u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AD42: ;
    ebp = eax;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0x0024AD4Du); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024AD4D: ;
    eax = edi + 6;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0024AD5Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AD5B: ;
    ecx = edi + 7;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0024AD69u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AD69: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E974);
    PUSH32(esp, 0x46E954);
    PUSH32(esp, 0x46E934);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0024AD83u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024AD83: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024AD90
 * Original: 0x0024AD90 - 0x0024AE2D (157 bytes, 51 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024AD90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024AD90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDB00);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024ADA0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024ADA0: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x46E9D8);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024ADB0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024ADB0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024ADB8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024ADB8: ;
    PUSH32(esp, 0x40A00000);
    ecx = eax;
    PUSH32(esp, 0x0024ADC4u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024ADC4: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024ADCFu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024ADCF: ;
    PUSH32(esp, 0x40000000);
    ecx = eax;
    PUSH32(esp, 0x0024ADDBu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024ADDB: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0024ADE6u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024ADE6: ;
    ebx = eax;
    eax = MEM32(0x5BDAC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024AE0B; /* jne: not equal / not zero */

loc_0024ADF1: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0024ADFDu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024ADFD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024AE03u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024AE03: ;
    esp = esp + 8;
    MEM32(0x5BDAC0) = eax;

loc_0024AE0B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46E9CC);
    PUSH32(esp, 0x46E9C0);
    PUSH32(esp, 0x46E9B4);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x3C) = 0;
    PUSH32(esp, 0x0024AE29u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024AE29: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024AE30
 * Original: 0x0024AE30 - 0x0024AE58 (40 bytes, 11 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024AE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024AE30: ;
    eax = MEM32(0x5BDB08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024AE57; /* jne: not equal / not zero */

loc_0024AE39: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x46E9EC);
    PUSH32(esp, 0x46E9E4);
    PUSH32(esp, 0x3FE8DC);
    PUSH32(esp, 0x0024AE4Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_0024AE4F: ;
    esp = esp + 0x10;
    MEM32(0x5BDB08) = eax;

loc_0024AE57: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024AE60
 * Original: 0x0024AE60 - 0x0024AF42 (226 bytes, 78 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024AE60(void)
{

loc_0024AE60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDB10);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024AE70u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024AE70: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x46EA54);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024AE80u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024AE80: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024AE88u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AE88: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x0024AE93u); RECOMP_ABI_CALL(0x001E7D60u, sub_001E7D60); /* call 0x001E7D60 */

loc_0024AE93: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024AE9Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AE9E: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0024AEA7u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024AEA7: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0024AEB2u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AEB2: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0024AEBBu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024AEBB: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0024AEC6u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AEC6: ;
    ebx = eax;
    PUSH32(esp, 0x0024AECDu); RECOMP_ABI_CALL(0x0023B7C0u, sub_0023B7C0); /* call 0x0023B7C0 */

loc_0024AECD: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x0024AEDFu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AEDF: ;
    ebx = eax;
    PUSH32(esp, 0x0024AEE6u); RECOMP_ABI_CALL(0x00223E00u, sub_00223E00); /* call 0x00223E00 */

loc_0024AEE6: ;
    ecx = edi + 5;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0024AEF4u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AEF4: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0024AEFDu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024AEFD: ;
    edx = edi + 6;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0024AF08u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AF08: ;
    ebx = eax;
    PUSH32(esp, 0x0024AF0Fu); RECOMP_ABI_CALL(0x00223B40u, sub_00223B40); /* call 0x00223B40 */

loc_0024AF0F: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 7;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024AF1Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AF1D: ;
    ebx = eax;
    PUSH32(esp, 0x0024AF24u); RECOMP_ABI_CALL(0x00222DC0u, sub_00222DC0); /* call 0x00222DC0 */

loc_0024AF24: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46EA34);
    PUSH32(esp, 0x46EA14);
    PUSH32(esp, 0x46E9F4);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0024AF3Eu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024AF3E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024AF50
 * Original: 0x0024AF50 - 0x0024AFA1 (81 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024AF50(void)
{

loc_0024AF50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDB14);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024AF60u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024AF60: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x46EA98);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024AF70u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024AF70: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024AF78u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024AF78: ;
    ebx = eax;
    PUSH32(esp, 0x0024AF7Fu); RECOMP_ABI_CALL(0x001F33C0u, sub_001F33C0); /* call 0x001F33C0 */

loc_0024AF7F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46EA8C);
    PUSH32(esp, 0x46EA80);
    PUSH32(esp, 0x46EA74);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x0024AF9Du); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024AF9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024AFB0
 * Original: 0x0024AFB0 - 0x0024AFE9 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024AFB0(void)
{

loc_0024AFB0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BDB18);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024AFBFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024AFBF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x46EAB0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024AFCFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024AFCF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46EAAC);
    PUSH32(esp, 0x46EAA8);
    PUSH32(esp, 0x46EAA4);
    ecx = esi;
    PUSH32(esp, 0x0024AFE6u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024AFE6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024AFF0
 * Original: 0x0024AFF0 - 0x0024B018 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024AFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024AFF0: ;
    eax = MEM32(0x5BDB1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024B017; /* jne: not equal / not zero */

loc_0024AFF9: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x46EAC4);
    PUSH32(esp, 0x46EAB4);
    PUSH32(esp, 0x3FE9F8);
    PUSH32(esp, 0x0024B00Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_0024B00F: ;
    esp = esp + 0x10;
    MEM32(0x5BDB1C) = eax;

loc_0024B017: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024B020
 * Original: 0x0024B020 - 0x0024B0EB (203 bytes, 70 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B020(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024B020: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDB38);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024B031u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024B031: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x46EB34);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024B041u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024B041: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024B049u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B049: ;
    ebx = eax;
    PUSH32(esp, 0x0024B050u); RECOMP_ABI_CALL(0x002929F0u, sub_002929F0); /* call 0x002929F0 */

loc_0024B050: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024B05Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B05E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x0024B067u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024B067: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0024B072u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B072: ;
    ebp = eax;
    PUSH32(esp, 0x0024B079u); RECOMP_ABI_CALL(0x002929F0u, sub_002929F0); /* call 0x002929F0 */

loc_0024B079: ;
    edx = edi + 6;
    ebx = 0; /* xor self */
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x3C) = LO8(ebx);
    PUSH32(esp, 0x0024B08Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B08C: ;
    ebp = eax;
    PUSH32(esp, 0x0024B093u); RECOMP_ABI_CALL(0x002929F0u, sub_002929F0); /* call 0x002929F0 */

loc_0024B093: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 7;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x3C) = LO8(ebx);
    PUSH32(esp, 0x0024B0A4u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B0A4: ;
    ebp = eax;
    eax = MEM32(0x5BD908);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024B0C9; /* jne: not equal / not zero */

loc_0024B0AF: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024B0BBu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024B0BB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024B0C1u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024B0C1: ;
    esp = esp + 8;
    MEM32(0x5BD908) = eax;

loc_0024B0C9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46EB14);
    PUSH32(esp, 0x46EAF4);
    PUSH32(esp, 0x46EAD4);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x3C) = LO8(ebx);
    PUSH32(esp, 0x0024B0E6u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024B0E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024B0F0
 * Original: 0x0024B0F0 - 0x0024B149 (89 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B0F0(void)
{

loc_0024B0F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDB40);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024B100u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024B100: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x46EB6C);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x0024B110u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024B110: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0024B118u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B118: ;
    edi = eax;
    PUSH32(esp, 0x0024B11Fu); RECOMP_ABI_CALL(0x002929C0u, sub_002929C0); /* call 0x002929C0 */

loc_0024B11F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x46EB64);
    PUSH32(esp, 0x46EB5C);
    PUSH32(esp, 0x46EB54);
    ecx = esi;
    MEM32(edi + 0x38) = eax;
    MEM8(edi + 0x34) = 1;
    MEM8(edi + 0x28) = 0;
    MEM8(edi + 0x27) = 2;
    PUSH32(esp, 0x0024B145u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024B145: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024B150
 * Original: 0x0024B150 - 0x0024B278 (296 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B150(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024B150: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDB48);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024B161u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024B161: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x46EBB0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024B171u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024B171: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024B179u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B179: ;
    ebx = eax;
    eax = MEM32(0x5BD910);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024B19D; /* jne: not equal / not zero */

loc_0024B184: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024B18Fu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024B18F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024B195u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024B195: ;
    esp = esp + 8;
    MEM32(0x5BD910) = eax;

loc_0024B19D: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0024B1ABu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B1AB: ;
    ebp = eax;
    eax = MEM32(0x5BD90C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024B1D0; /* jne: not equal / not zero */

loc_0024B1B6: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0024B1C2u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024B1C2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024B1C8u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024B1C8: ;
    esp = esp + 8;
    MEM32(0x5BD90C) = eax;

loc_0024B1D0: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 2;
    SET_LO8(ebx, 1);
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x0024B1E3u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B1E3: ;
    ebp = eax;
    eax = MEM32(0x5BDA1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024B208; /* jne: not equal / not zero */

loc_0024B1EE: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024B1FAu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024B1FA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024B200u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024B200: ;
    esp = esp + 8;
    MEM32(0x5BDA1C) = eax;

loc_0024B208: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x0024B219u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B219: ;
    ebp = eax;
    PUSH32(esp, 0x0024B220u); RECOMP_ABI_CALL(0x00223AF0u, sub_00223AF0); /* call 0x00223AF0 */

loc_0024B220: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x0024B231u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B231: ;
    ebp = eax;
    eax = MEM32(0x5BD9C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024B256; /* jne: not equal / not zero */

loc_0024B23C: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024B248u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024B248: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024B24Eu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024B24E: ;
    esp = esp + 8;
    MEM32(0x5BD9C0) = eax;

loc_0024B256: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46EB9C);
    PUSH32(esp, 0x46EB88);
    PUSH32(esp, 0x46EB74);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x0024B273u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024B273: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024B280
 * Original: 0x0024B280 - 0x0024B2A8 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024B280: ;
    eax = MEM32(0x5BDB58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024B2A7; /* jne: not equal / not zero */

loc_0024B289: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x46EBD4);
    PUSH32(esp, 0x46EBC4);
    PUSH32(esp, 0x3FEB4C);
    PUSH32(esp, 0x0024B29Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_0024B29F: ;
    esp = esp + 0x10;
    MEM32(0x5BDB58) = eax;

loc_0024B2A7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024B2B0
 * Original: 0x0024B2B0 - 0x0024B2D8 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024B2B0: ;
    eax = MEM32(0x5BDB5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024B2D7; /* jne: not equal / not zero */

loc_0024B2B9: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x46EBFC);
    PUSH32(esp, 0x46EBE4);
    PUSH32(esp, 0x3FEB94);
    PUSH32(esp, 0x0024B2CFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_0024B2CF: ;
    esp = esp + 0x10;
    MEM32(0x5BDB5C) = eax;

loc_0024B2D7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024B2E0
 * Original: 0x0024B2E0 - 0x0024B308 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024B2E0: ;
    eax = MEM32(0x5BDB60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024B307; /* jne: not equal / not zero */

loc_0024B2E9: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x46EC20);
    PUSH32(esp, 0x46EC14);
    PUSH32(esp, 0x3FEBC0);
    PUSH32(esp, 0x0024B2FFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_0024B2FF: ;
    esp = esp + 0x10;
    MEM32(0x5BDB60) = eax;

loc_0024B307: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024B310
 * Original: 0x0024B310 - 0x0024B38F (127 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024B310: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDB7C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024B320u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024B320: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x46EC44);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024B330u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024B330: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024B338u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B338: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x0024B341u); RECOMP_ABI_CALL(0x00217FA0u, sub_00217FA0); /* call 0x00217FA0 */

loc_0024B341: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024B34Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B34C: ;
    ebx = eax;
    eax = MEM32(0x5BD898);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024B371; /* jne: not equal / not zero */

loc_0024B357: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024B363u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024B363: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024B369u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024B369: ;
    esp = esp + 8;
    MEM32(0x5BD898) = eax;

loc_0024B371: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46EC3C);
    PUSH32(esp, 0x46EC34);
    PUSH32(esp, 0x46EC2C);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0024B38Bu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024B38B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024B390
 * Original: 0x0024B390 - 0x0024B3E9 (89 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0024B390(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */

loc_0024B390: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDB80);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024B3A0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024B3A0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x46EC58);
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x0024B3B0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024B3B0: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0024B3B8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B3B8: ;
    edi = eax;
    PUSH32(esp, 0x0024B3BFu); RECOMP_ABI_CALL(0x002459C0u, sub_002459C0); /* call 0x002459C0 */

loc_0024B3BF: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x46EC54);
    PUSH32(esp, 0x46EC50);
    PUSH32(esp, 0x46EC4C);
    ecx = esi;
    MEM32(edi + 0x3C) = eax;
    MEM8(edi + 0x35) = 1;
    MEM8(edi + 0x40) = 1;
    MEM8(edi + 0x41) = 1;
    PUSH32(esp, 0x0024B3E5u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024B3E5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0024B3F0
 * Original: 0x0024B3F0 - 0x0024B418 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024B3F0: ;
    eax = MEM32(0x5BDB88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024B417; /* jne: not equal / not zero */

loc_0024B3F9: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x46EC6C);
    PUSH32(esp, 0x46EC5C);
    PUSH32(esp, 0x3FEC1C);
    PUSH32(esp, 0x0024B40Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_0024B40F: ;
    esp = esp + 0x10;
    MEM32(0x5BDB88) = eax;

loc_0024B417: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024B420
 * Original: 0x0024B420 - 0x0024B4C9 (169 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024B420: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDB8C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024B431u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024B431: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x46ECA0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024B441u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024B441: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024B449u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B449: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x0024B452u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024B452: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024B45Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B45D: ;
    ebx = eax;
    eax = MEM32(0x5BD8C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024B482; /* jne: not equal / not zero */

loc_0024B468: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024B474u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024B474: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024B47Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024B47A: ;
    esp = esp + 8;
    MEM32(0x5BD8C8) = eax;

loc_0024B482: ;
    edx = edi + 2;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0024B490u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B490: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 2;
    PUSH32(esp, 0x0024B4A6u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0024B4A6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46EC94);
    PUSH32(esp, 0x46EC88);
    PUSH32(esp, 0x46EC7C);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x24B3F0;
    PUSH32(esp, 0x0024B4C4u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024B4C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024B4D0
 * Original: 0x0024B4D0 - 0x0024B5A5 (213 bytes, 73 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B4D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024B4D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDBA4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024B4E1u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024B4E1: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x46ED0C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024B4F1u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024B4F1: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024B4F9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B4F9: ;
    ebp = eax;
    eax = MEM32(0x5BDB64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024B51D; /* jne: not equal / not zero */

loc_0024B504: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024B50Fu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024B50F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024B515u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024B515: ;
    esp = esp + 8;
    MEM32(0x5BDB64) = eax;

loc_0024B51D: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    SET_LO8(ebx, 2);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x24) = LO8(ebx);
    PUSH32(esp, 0x0024B530u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B530: ;
    ebp = eax;
    eax = MEM32(0x5BD898);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024B555; /* jne: not equal / not zero */

loc_0024B53B: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0024B547u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024B547: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024B54Du); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024B54D: ;
    esp = esp + 8;
    MEM32(0x5BD898) = eax;

loc_0024B555: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 6;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x24) = LO8(ebx);
    PUSH32(esp, 0x0024B566u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B566: ;
    ebx = eax;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0x0024B571u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024B571: ;
    ecx = edi + 7;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(ebx + 0x26) = 0;
    PUSH32(esp, 0x0024B580u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B580: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x0024B589u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0024B589: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46ECEC);
    PUSH32(esp, 0x46ECCC);
    PUSH32(esp, 0x46ECAC);
    ecx = esi;
    PUSH32(esp, 0x0024B5A0u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024B5A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024B5B0
 * Original: 0x0024B5B0 - 0x0024B682 (210 bytes, 70 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024B5B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDBB8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024B5C0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024B5C0: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x46ED68);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x0024B5D0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024B5D0: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0024B5D8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B5D8: ;
    edi = eax;
    eax = MEM32(0x5BDB80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024B5FC; /* jne: not equal / not zero */

loc_0024B5E3: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024B5EEu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024B5EE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024B5F4u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024B5F4: ;
    esp = esp + 8;
    MEM32(0x5BDB80) = eax;

loc_0024B5FC: ;
    ecx = ebx + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(edi + 0x38) = eax;
    PUSH32(esp, 0x0024B60Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B60A: ;
    edi = eax;
    PUSH32(esp, 0x0024B611u); RECOMP_ABI_CALL(0x0021C7E0u, sub_0021C7E0); /* call 0x0021C7E0 */

loc_0024B611: ;
    MEM32(edi + 0x3C) = eax;
    SET_LO8(eax, 1);
    edx = ebx + 3;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(edi + 0x35) = LO8(eax);
    MEM8(edi + 0x40) = LO8(eax);
    MEM8(edi + 0x41) = LO8(eax);
    PUSH32(esp, 0x0024B62Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B62A: ;
    edi = eax;
    PUSH32(esp, 0x0024B631u); RECOMP_ABI_CALL(0x001F33C0u, sub_001F33C0); /* call 0x001F33C0 */

loc_0024B631: ;
    MEM32(edi + 0x38) = eax;
    eax = ebx + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024B63Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B63F: ;
    edi = eax;
    eax = MEM32(0x5BDB18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024B664; /* jne: not equal / not zero */

loc_0024B64A: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024B656u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024B656: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024B65Cu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024B65C: ;
    esp = esp + 8;
    MEM32(0x5BDB18) = eax;

loc_0024B664: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x46ED54);
    PUSH32(esp, 0x46ED40);
    PUSH32(esp, 0x46ED2C);
    ecx = esi;
    MEM32(edi + 0x38) = eax;
    PUSH32(esp, 0x0024B67Eu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024B67E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024B690
 * Original: 0x0024B690 - 0x0024B69C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B690(void)
{

loc_0024B690: ;
    PUSH32(esp, 0x28DCE0);
    PUSH32(esp, 0x0024B69Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024B69A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024B6A0
 * Original: 0x0024B6A0 - 0x0024B6A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B6A0(void)
{

loc_0024B6A0: ;
    eax = MEM32(0x5BDBD4);
    esp += 4; return; /* ret */

}

/**
 * sub_0024B6B0
 * Original: 0x0024B6B0 - 0x0024B6E9 (57 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B6B0(void)
{

loc_0024B6B0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BDBD4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024B6BFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024B6BF: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x46EDAC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024B6CFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024B6CF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46ED9C);
    PUSH32(esp, 0x46ED8C);
    PUSH32(esp, 0x46ED7C);
    ecx = esi;
    PUSH32(esp, 0x0024B6E6u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024B6E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024B6F0
 * Original: 0x0024B6F0 - 0x0024B75A (106 bytes, 36 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024B6F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDBDC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024B700u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0024B700: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x46EDE0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0024B710u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0024B710: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024B718u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0024B718: ;
    ebx = eax;
    eax = MEM32(0x5BD898);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024B73C; /* jne: not equal / not zero */

loc_0024B723: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024B72Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024B72E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024B734u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0024B734: ;
    esp = esp + 8;
    MEM32(0x5BD898) = eax;

loc_0024B73C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46EDD4);
    PUSH32(esp, 0x46EDC8);
    PUSH32(esp, 0x46EDBC);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0024B756u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0024B756: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024B760
 * Original: 0x0024B760 - 0x0024B7A5 (69 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0024B760: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    eax = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);

loc_0024B774: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024B79D; /* jne: not equal / not zero */

loc_0024B77E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0024B798; /* je: equal / zero */

loc_0024B782: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024B79D; /* jne: not equal / not zero */

loc_0024B78E: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0024B774; /* jne: not equal / not zero */

loc_0024B798: ;
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0024B79D: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, esi);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024B7B0
 * Original: 0x0024B7B0 - 0x0024B856 (166 bytes, 52 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B7B0(void)
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

loc_0024B7B0: ;
    eax = MEM32(0x46EDF0);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0024B7E2; /* jne: not equal / not zero */

loc_0024B7C6: ;
    ecx = MEM32(0x46EDF4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024B7E2; /* jne: not equal / not zero */

loc_0024B7D0: ;
    fp_push(MEMF(esi + 0x38)); /* fld float */
    fp_push(MEMF(0x46EDEC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024B827; /* jnp: not parity */

loc_0024B7E2: ;
    eax = edi;
    edx = ebx;
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x0024B7EDu); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_0024B7ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0024B7FF; /* jge: greater or equal (signed >=) */

loc_0024B7F9: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0024B7FF: ;
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    PUSH32(esp, 0x0024B807u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0024B807: ;
    MEM32(0x5BDF74) = edx;
    edx = MEM32(esi + 0x38);
    MEM32(0x5BDF70) = eax;
    MEM32(0x46EDF0) = edi;
    MEM32(0x46EDF4) = ebx;
    MEM32(0x46EDEC) = edx;

loc_0024B827: ;
    eax = MEM32(0x5BDF74);
    ecx = MEM32(0x5BDF70);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024B840u); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_0024B840: ;
    edi = MEM32(esi + 0x40);
    ecx = MEM32(esi + 0x44);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    POP32(esp, edi);
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = edx;
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
 * sub_0024B860
 * Original: 0x0024B860 - 0x0024B8B0 (80 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B860(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024B860: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x10);
    if (CMP_A(_fa, _fb)) goto loc_0024B8A9; /* ja: above (unsigned >) */

loc_0024B86E: ;
    eax = eax | 0xFFFFFFFFu;
    { uint32_t _jt = MEM32(ecx * 4 + 0x24B8B0); /* switch: 17 entries, 17 targets */
    if (_jt == 0x0024B878u) goto loc_0024B878;
    if (_jt == 0x0024B87Bu) goto loc_0024B87B;
    if (_jt == 0x0024B87Eu) goto loc_0024B87E;
    if (_jt == 0x0024B881u) goto loc_0024B881;
    if (_jt == 0x0024B884u) goto loc_0024B884;
    if (_jt == 0x0024B887u) goto loc_0024B887;
    if (_jt == 0x0024B88Au) goto loc_0024B88A;
    if (_jt == 0x0024B88Du) goto loc_0024B88D;
    if (_jt == 0x0024B890u) goto loc_0024B890;
    if (_jt == 0x0024B893u) goto loc_0024B893;
    if (_jt == 0x0024B896u) goto loc_0024B896;
    if (_jt == 0x0024B899u) goto loc_0024B899;
    if (_jt == 0x0024B89Cu) goto loc_0024B89C;
    if (_jt == 0x0024B89Fu) goto loc_0024B89F;
    if (_jt == 0x0024B8A2u) goto loc_0024B8A2;
    if (_jt == 0x0024B8A5u) goto loc_0024B8A5;
    if (_jt == 0x0024B8AEu) goto loc_0024B8AE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0024B878: ;
    MEM32(edi + 0x3C) = eax;

loc_0024B87B: ;
    MEM32(edi + 0x38) = eax;

loc_0024B87E: ;
    MEM32(edi + 0x34) = eax;

loc_0024B881: ;
    MEM32(edi + 0x30) = eax;

loc_0024B884: ;
    MEM32(edi + 0x2C) = eax;

loc_0024B887: ;
    MEM32(edi + 0x28) = eax;

loc_0024B88A: ;
    MEM32(edi + 0x24) = eax;

loc_0024B88D: ;
    MEM32(edi + 0x20) = eax;

loc_0024B890: ;
    MEM32(edi + 0x1C) = eax;

loc_0024B893: ;
    MEM32(edi + 0x18) = eax;

loc_0024B896: ;
    MEM32(edi + 0x14) = eax;

loc_0024B899: ;
    MEM32(edi + 0x10) = eax;

loc_0024B89C: ;
    MEM32(edi + 0xC) = eax;

loc_0024B89F: ;
    MEM32(edi + 8) = eax;

loc_0024B8A2: ;
    MEM32(edi + 4) = eax;

loc_0024B8A5: ;
    MEM32(edi) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0024B8A9: ;
    eax = eax | 0xFFFFFFFFu;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_0024B8AE: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024B900
 * Original: 0x0024B900 - 0x0024B94E (78 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B900(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024B900: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x10);
    if (CMP_A(_fa, _fb)) goto loc_0024B948; /* ja: above (unsigned >) */

loc_0024B90E: ;
    eax = 0; /* xor self */
    { uint32_t _jt = MEM32(ecx * 4 + 0x24B950); /* switch: 17 entries, 17 targets */
    if (_jt == 0x0024B917u) goto loc_0024B917;
    if (_jt == 0x0024B91Au) goto loc_0024B91A;
    if (_jt == 0x0024B91Du) goto loc_0024B91D;
    if (_jt == 0x0024B920u) goto loc_0024B920;
    if (_jt == 0x0024B923u) goto loc_0024B923;
    if (_jt == 0x0024B926u) goto loc_0024B926;
    if (_jt == 0x0024B929u) goto loc_0024B929;
    if (_jt == 0x0024B92Cu) goto loc_0024B92C;
    if (_jt == 0x0024B92Fu) goto loc_0024B92F;
    if (_jt == 0x0024B932u) goto loc_0024B932;
    if (_jt == 0x0024B935u) goto loc_0024B935;
    if (_jt == 0x0024B938u) goto loc_0024B938;
    if (_jt == 0x0024B93Bu) goto loc_0024B93B;
    if (_jt == 0x0024B93Eu) goto loc_0024B93E;
    if (_jt == 0x0024B941u) goto loc_0024B941;
    if (_jt == 0x0024B944u) goto loc_0024B944;
    if (_jt == 0x0024B94Cu) goto loc_0024B94C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0024B917: ;
    MEM32(edi + 0x3C) = eax;

loc_0024B91A: ;
    MEM32(edi + 0x38) = eax;

loc_0024B91D: ;
    MEM32(edi + 0x34) = eax;

loc_0024B920: ;
    MEM32(edi + 0x30) = eax;

loc_0024B923: ;
    MEM32(edi + 0x2C) = eax;

loc_0024B926: ;
    MEM32(edi + 0x28) = eax;

loc_0024B929: ;
    MEM32(edi + 0x24) = eax;

loc_0024B92C: ;
    MEM32(edi + 0x20) = eax;

loc_0024B92F: ;
    MEM32(edi + 0x1C) = eax;

loc_0024B932: ;
    MEM32(edi + 0x18) = eax;

loc_0024B935: ;
    MEM32(edi + 0x14) = eax;

loc_0024B938: ;
    MEM32(edi + 0x10) = eax;

loc_0024B93B: ;
    MEM32(edi + 0xC) = eax;

loc_0024B93E: ;
    MEM32(edi + 8) = eax;

loc_0024B941: ;
    MEM32(edi + 4) = eax;

loc_0024B944: ;
    MEM32(edi) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0024B948: ;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_0024B94C: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024B94E
 * Original: 0x0024B94E - 0x0024B9A0 (82 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B94E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0024B94E: ;
    edi = edi;
    esp--;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = 0xB9440024u;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0xB93E0024u;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + -1187512284)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + -1187512284) (32-bit) */
    _cf = (int)(_fa < _fb);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0);
    _cf = 0; /* logical op clears CF */
    eax = eax ^ 0x320024B9;
    ecx = 0xB92F0024u;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0);
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0xB9));
    SET_LO8(eax, LO8(eax) - 0xB9);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0);
    _cf = (int)((uint32_t)(MEM32(ecx + -1188691932)) < (uint32_t)(edi));
    MEM32(ecx + -1188691932) = MEM32(ecx + -1188691932) - edi;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0);
    _cf = 0; /* logical op clears CF */
    edi = edi & MEM32(ecx + -1189085148);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x1A0024B9) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    ecx = 0xB9170024u;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0);
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0024B9A0
 * Original: 0x0024B9A0 - 0x0024B9CF (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B9A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024B9A0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024B9CB; /* jne: not equal / not zero */

loc_0024B9AA: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x0024B9BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024B9BE: ;
    ecx = MEM32(esp + 8);
    esi = esi + 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0024B9CBu); RECOMP_ABI_CALL(0x00240E70u, sub_00240E70); /* call 0x00240E70 */

loc_0024B9CB: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024B9D0
 * Original: 0x0024B9D0 - 0x0024B9D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B9D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024B9D0: ;
    g_seh_ebp = ebp; sub_002975C0(); return; /* tail jmp 0x002975C0 */

}

/**
 * sub_0024B9E0
 * Original: 0x0024B9E0 - 0x0024BA0C (44 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B9E0(void)
{

loc_0024B9E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    MEM32(esi + 0x10) = eax;
    edx = MEM32(ecx + 4);
    MEM32(esi + 0x14) = edx;
    eax = MEM32(ecx + 8);
    MEM32(esi + 0x18) = eax;
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, 1);
    MEM32(esi + 0x1C) = edx;
    PUSH32(esp, 0x0024BA05u); RECOMP_ABI_CALL(0x00243650u, sub_00243650); /* call 0x00243650 */

loc_0024BA05: ;
    MEM32(esi + 0x3C) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024BA10
 * Original: 0x0024BA10 - 0x0024BA54 (68 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024BA10(void)
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

loc_0024BA10: ;
    eax = MEM32(ecx + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024BA53; /* je: equal / zero */

loc_0024BA17: ;
    SET_LO8(edx, 1);
    MEM8(eax + 0x20) = LO8(edx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x3C);
    MEM32(eax + 0x24) = esi;
    esi = MEM32(ecx + 0x38);
    MEM8(eax + 0x40) = LO8(edx);
    MEM32(eax + 0x28) = esi;
    esi = MEM32(ecx + 0x2C);
    MEM32(eax + 0x2C) = esi;
    MEM8(eax + 0x40) = LO8(edx);
    MEM32(eax + 0x30) = 0xBF800000u;
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    ecx = MEM32(ecx + 0x30);
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x3C) = 0x3FAAAAAB;
    MEM8(eax + 0x40) = LO8(edx);
    POP32(esp, esi);

loc_0024BA53: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0024BA60
 * Original: 0x0024BA60 - 0x0024BA6C (12 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024BA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024BA60: ;
    eax = MEM32(ecx + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024BA6B; /* je: equal / zero */

loc_0024BA67: ;
    MEM8(eax + 0x20) = 0;

loc_0024BA6B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024BA70
 * Original: 0x0024BA70 - 0x0024BB40 (208 bytes, 67 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024BA70(void)
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

loc_0024BA70: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0024BABD; /* jp: parity */

loc_0024BA99: ;
    fp_push(MEMF(0x3C7084)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { fp_top() = tan(fp_top()); fp_push(1.0); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_top() = fp_top() / MEMF(esp + 0x14); /* fdiv dword ptr [esp + 0x14] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    goto loc_0024BAE1;

loc_0024BABD: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    { fp_top() = tan(fp_top()); fp_push(1.0); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_top() = fp_top() / MEMF(esp + 0x10); /* fdiv dword ptr [esp + 0x10] */
    fp_top() = fp_top() / MEMF(esp + 0x14); /* fdiv dword ptr [esp + 0x14] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    fp_push(MEMF(esp)); /* fld float */

loc_0024BAE1: ;
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    { fp_top() = tan(fp_top()); fp_push(1.0); } /* fptan */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    fp_pop(); /* fstp st(0) */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x1C);
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    { fp_top() = tan(fp_top()); fp_push(1.0); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = MEM32(esp + 0x14);
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = -fp_top(); /* fchs */
    ecx = ecx + 0x110;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0024BB3Cu); RECOMP_ABI_CALL(0x0023E930u, sub_0023E930); /* call 0x0023E930 */

loc_0024BB3C: ;
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0024BB40
 * Original: 0x0024BB40 - 0x0024BB6B (43 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024BB40(void)
{

loc_0024BB40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = esi + 0x64;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024BB52u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0024BB52: ;
    esp = esp + 8;
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi + 0xA4;
    PUSH32(esp, 0x0024BB66u); RECOMP_ABI_CALL(0x00242F50u, sub_00242F50); /* call 0x00242F50 */

loc_0024BB66: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024BB70
 * Original: 0x0024BB70 - 0x0024BBC7 (87 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024BB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0024BB70: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x46A3C8);
    if (TEST_NZ(_fa, _fb)) goto loc_0024BB87; /* jne: not equal / not zero */

loc_0024BB85: ;
    eax = esi;

loc_0024BB87: ;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx);
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0024BB96; /* je: equal / zero */

loc_0024BB94: ;
    esi = ecx;

loc_0024BB96: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024BBBF; /* jne: not equal / not zero */

loc_0024BBA0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0024BBBA; /* je: equal / zero */

loc_0024BBA4: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024BBBF; /* jne: not equal / not zero */

loc_0024BBB0: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BB96; /* jne: not equal / not zero */

loc_0024BBBA: ;
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0024BBBF: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, esi);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024BBD0
 * Original: 0x0024BBD0 - 0x0024BBE2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024BBD0(void)
{

loc_0024BBD0: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x0024BBE1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024BBE1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024BBF0
 * Original: 0x0024BBF0 - 0x0024BC14 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024BBF0(void)
{

loc_0024BBF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xB0); PUSH32(esp, 0x0024BC01u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024BC01: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x0024BC10u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024BC10: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024BC20
 * Original: 0x0024BC20 - 0x0024BC44 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024BC20(void)
{

loc_0024BC20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xB0); PUSH32(esp, 0x0024BC31u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024BC31: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x0024BC40u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024BC40: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024BC50
 * Original: 0x0024BC50 - 0x0024BC60 (16 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024BC50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024BC50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0024BC58u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0024BC58: ;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x74)); return; /* indirect tail jmp */

}

/**
 * sub_0024BC60
 * Original: 0x0024BC60 - 0x0024BCCB (107 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024BC60(void)
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

loc_0024BC60: ;
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0024BC6F; /* jp: parity */

loc_0024BC6B: ;
    eax = MEM32(edx);
    MEM32(ecx) = eax;

loc_0024BC6F: ;
    fp_push(MEMF(edi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BC7E; /* jne: not equal / not zero */

loc_0024BC7A: ;
    eax = MEM32(edi);
    MEM32(esi) = eax;

loc_0024BC7E: ;
    fp_push(MEMF(edx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0024BC91; /* jp: parity */

loc_0024BC8B: ;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;

loc_0024BC91: ;
    fp_push(MEMF(edi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BCA4; /* jne: not equal / not zero */

loc_0024BC9E: ;
    eax = MEM32(edi + 4);
    MEM32(esi + 4) = eax;

loc_0024BCA4: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0024BCB7; /* jp: parity */

loc_0024BCB1: ;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;

loc_0024BCB7: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BCCA; /* jne: not equal / not zero */

loc_0024BCC4: ;
    eax = MEM32(edi + 8);
    MEM32(esi + 8) = eax;

loc_0024BCCA: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0024BCD0
 * Original: 0x0024BCD0 - 0x0024BCE1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024BCD0(void)
{

loc_0024BCD0: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x1E4) = 1;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_0024BCF0
 * Original: 0x0024BCF0 - 0x0024BD2F (63 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024BCF0(void)
{

loc_0024BCF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024BCF6u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0024BCF6: ;
    eax = MEM32(0x5BC508);
    SET_LO8(ecx, MEM8(0x46D8AC));
    eax = MEM32(eax + 0x38);
    PUSH32(esp, 1);
    MEM8(esp + 4) = LO8(ecx);
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3FEDA0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024BD21u); RECOMP_ABI_CALL(0x001A59B0u, sub_001A59B0); /* call 0x001A59B0 */

loc_0024BD21: ;
    SET_LO8(edx, MEM8(esp + 0x18));
    MEM8(0x46D8AC) = LO8(edx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_0024BD30
 * Original: 0x0024BD30 - 0x0024BF09 (473 bytes, 163 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024BD30(void)
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

loc_0024BD30: ;
    esp = esp - 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0024BDE9; /* je: equal / zero */

loc_0024BD3C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024BDE9; /* je: equal / zero */

loc_0024BD44: ;
    edi = esi;
    edx = 0; /* xor self */
    ecx = ebx + 0x20;
    edi = edi - ebx;
    /* nop */

loc_0024BD50: ;
    fp_push(MEMF(ecx + -16)); /* fld float */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    ecx = ecx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    fp_push(MEMF(ecx + -36)); /* fld float */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + -4); /* fmul dword ptr [ecx - 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0xC); /* fmul dword ptr [ecx + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esi + edx * 4 + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + -36)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x10); /* fmul dword ptr [eax + 0x10] */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + -4); /* fmul dword ptr [ecx - 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0xC); /* fmul dword ptr [ecx + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + -20)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x14); /* fmul dword ptr [eax + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(edi + ecx + -20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x2C); /* fmul dword ptr [eax + 0x2c] */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + -36); /* fmul dword ptr [ecx - 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + -4); /* fmul dword ptr [ecx - 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + -20); /* fmul dword ptr [ecx - 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(edi + ecx + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + -36)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x30); /* fmul dword ptr [eax + 0x30] */
    fp_push(MEMF(eax + 0x38)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + -4); /* fmul dword ptr [ecx - 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x3C)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0xC); /* fmul dword ptr [ecx + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + -20)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x34); /* fmul dword ptr [eax + 0x34] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esi + edx * 4 + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_B(_fa, _fb)) goto loc_0024BD50; /* jb: below (unsigned <) */

loc_0024BDE4: ;
    POP32(esp, edi);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

loc_0024BDE9: ;
    PUSH32(esp, ebp);
    edi = esp + 8;
    ebp = esp + 0x18;
    edx = 0; /* xor self */
    edi = edi - ebx;
    ecx = ebx + 0x20;
    ebp = ebp - ebx;
    goto loc_0024BE00;

    /* nop */

loc_0024BE00: ;
    fp_push(MEMF(eax + 0xC)); /* fld float */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_top() = fp_top() * MEMF(ecx + 0x10); /* fmul dword ptr [ecx + 0x10] */
    ecx = ecx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + -20); /* fmul dword ptr [ecx - 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + -36); /* fmul dword ptr [ecx - 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + -4)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + edx * 4 + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0xC); /* fmul dword ptr [ecx + 0xc] */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + -36); /* fmul dword ptr [ecx - 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + -4)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x18); /* fmul dword ptr [eax + 0x18] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + -20)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x14); /* fmul dword ptr [eax + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + edx * 4 + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + -36); /* fmul dword ptr [ecx - 0x24] */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + -20); /* fmul dword ptr [ecx - 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0xC); /* fmul dword ptr [ecx + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + -4)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x28); /* fmul dword ptr [eax + 0x28] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(edi + ecx + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x3C)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0xC); /* fmul dword ptr [ecx + 0xc] */
    fp_push(MEMF(eax + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + -36); /* fmul dword ptr [ecx - 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + -4)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x38); /* fmul dword ptr [eax + 0x38] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + -20)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x34); /* fmul dword ptr [eax + 0x34] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ecx + ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_B(_fa, _fb)) goto loc_0024BE00; /* jb: below (unsigned <) */

loc_0024BE94: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 4) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 8) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(esi + 0x10) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(esi + 0x14) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(esi + 0x18) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(esi + 0x1C) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(esi + 0x20) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(esi + 0x24) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(esi + 0x28) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(esi + 0x2C) = edx;
    edx = MEM32(esp + 0x40);
    MEM32(esi + 0x30) = eax;
    eax = MEM32(esp + 0x44);
    POP32(esp, ebp);
    MEM32(esi + 0x34) = ecx;
    MEM32(esi + 0x38) = edx;
    MEM32(esi + 0x3C) = eax;
    POP32(esp, edi);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0024BF10
 * Original: 0x0024BF10 - 0x0024BF79 (105 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024BF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024BF10: ;
    edx = MEM32(esp + 8);
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x39));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(esi);
    if (TEST_NZ(_fa, _fb)) goto loc_0024BF38; /* jne: not equal / not zero */

loc_0024BF23: ;
    ecx = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x0024BF31u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024BF31: ;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 20; return; /* ret 16 */

loc_0024BF38: ;
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x0024BF46u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024BF46: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esi);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x0024BF5Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024BF5A: ;
    edx = MEM32(esp + 0x2C);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0024BF72u); RECOMP_ABI_CALL(0x0023FC50u, sub_0023FC50); /* call 0x0023FC50 */

loc_0024BF72: ;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0024BF80
 * Original: 0x0024BF80 - 0x0024C19F (543 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024BF80(void)
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

loc_0024BF80: ;
    esp = esp - 0xA8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0024BF8Fu); RECOMP_ABI_CALL(0x001C83A0u, sub_001C83A0); /* call 0x001C83A0 */

loc_0024BF8F: ;
    ecx = MEM32(0x5BDCAC);
    esi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0024BF9Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024BF9D: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x0024BFA7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024BFA7: ;
    edx = MEM32(esi);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x0024BFBCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024BFBC: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(edi + 0x24); /* fdiv dword ptr [edi + 0x24] */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    PUSH32(esp, 0x0024BFD0u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0024BFD0: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(esp + 0x18) = eax;
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    PUSH32(esp, 0x0024BFDFu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0024BFDF: ;
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x1C) = eax;
    ecx = 0; /* xor self */
    esi = 8;
    /* nop */

loc_0024BFF0: ;
    eax = MEM32(esp + ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x800 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0024C006; /* jle: less or equal (signed <=) */

loc_0024BFFF: ;
    eax = 0x1000;
    goto loc_0024C05B;

loc_0024C006: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0024C014; /* jle: less or equal (signed <=) */

loc_0024C00D: ;
    eax = 0x800;
    goto loc_0024C05B;

loc_0024C014: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0024C022; /* jle: less or equal (signed <=) */

loc_0024C01B: ;
    eax = 0x400;
    goto loc_0024C05B;

loc_0024C022: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0024C030; /* jle: less or equal (signed <=) */

loc_0024C029: ;
    eax = 0x200;
    goto loc_0024C05B;

loc_0024C030: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0024C03E; /* jle: less or equal (signed <=) */

loc_0024C037: ;
    eax = 0x100;
    goto loc_0024C05B;

loc_0024C03E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0024C04A; /* jle: less or equal (signed <=) */

loc_0024C043: ;
    eax = 0x80;
    goto loc_0024C05B;

loc_0024C04A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0x20;
    edx = edx + 0x20;
    eax = edx;

loc_0024C05B: ;
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + ecx + 0x20) = eax;
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    fp_top() = fp_top() / (double)SMEM32(esp + 0xC); /* fidiv dword ptr [esp + 0xc] */
    MEMF(esp + ecx + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_0024BFF0; /* jl: less (signed <) */

loc_0024C07A: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    ecx = MEM32(esp + 0x20);
    fp_top() = fp_top() * MEMF(edi + 0x2C); /* fmul dword ptr [edi + 0x2c] */
    edx = MEM32(esp + 0x24);
    MEMF(edi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(edi + 0x30); /* fmul dword ptr [edi + 0x30] */
    MEMF(edi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x5BDCB0);
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = edx;
    eax = MEM32(0x5BDCAC);
    eax = MEM32(eax + 0x30);
    edi = MEM32(0x5BDCB0);
    MEM32(edi + 0x30) = eax;
    eax = MEM32(0x5BDCAC);
    eax = MEM32(eax + 0x34);
    edi = MEM32(0x5BDCB0);
    MEM32(edi + 0x34) = eax;
    eax = MEM32(0x5BDCB4);
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = edx;
    ecx = MEM32(0x5BDCAC);
    edx = MEM32(ecx + 0x30);
    eax = MEM32(0x5BDCB4);
    MEM32(eax + 0x30) = edx;
    ecx = MEM32(0x5BDCAC);
    edx = MEM32(ecx + 0x34);
    eax = MEM32(0x5BDCB4);
    MEM32(eax + 0x34) = edx;
    ecx = MEM32(0x5BDCB0);
    eax = 0x18;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(0x5BDCB0);
    MEM32(edx + 0x3C) = esi;
    ecx = MEM32(0x5BDCB4);
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(0x5BDCB4);
    ecx = esp + 0x30;
    MEM32(edx + 0x3C) = esi;
    PUSH32(esp, 0x0024C122u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0024C122: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xC47A0000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    ecx = esp + 0x48;
    PUSH32(esp, 0x0024C143u); RECOMP_ABI_CALL(0x0023E890u, sub_0023E890); /* call 0x0023E890 */

loc_0024C143: ;
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0xC2C80000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    ecx = esp + 0x48;
    PUSH32(esp, 0x0024C164u); RECOMP_ABI_CALL(0x0023E890u, sub_0023E890); /* call 0x0023E890 */

loc_0024C164: ;
    ecx = MEM32(0x5BDD34);
    eax = MEM32(ecx);
    edx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0024C174u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C174: ;
    ecx = esp + 0x70;
    PUSH32(esp, 0x0024C17Du); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0024C17D: ;
    ecx = esp + 0x70;
    PUSH32(esp, 0x0024C186u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0024C186: ;
    ecx = MEM32(0x5BDD4C);
    eax = MEM32(ecx);
    edx = esp + 0x70;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0024C196u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C196: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xA8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0024C1A0
 * Original: 0x0024C1A0 - 0x0024C468 (712 bytes, 207 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024C1A0(void)
{

loc_0024C1A0: ;
    eax = MEM32(0x5BDD14);
    MEM32(eax + 0x2C) = 3;
    ecx = MEM32(0x5BDD14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0024C1B9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C1B9: ;
    ecx = MEM32(0x5BDD14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x0024C1C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C1C9: ;
    ecx = MEM32(0x5BDD14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0024C1D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C1D9: ;
    ecx = MEM32(0x5BDD1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0024C1E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C1E6: ;
    ecx = MEM32(0x5BDD1C);
    eax = MEM32(0x5BDD14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0024C1F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C1F7: ;
    ecx = MEM32(0x5BDCFC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0024C204u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C204: ;
    eax = MEM32(0x5BDCFC);
    MEM32(eax + 0xC) = 0;
    ecx = MEM32(0x5BDD20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0024C21Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C21D: ;
    ecx = MEM32(0x5BDD20);
    edx = MEM32(0x5BDD14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0024C22Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C22F: ;
    ecx = MEM32(0x5BDD24);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0024C23Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C23C: ;
    ecx = MEM32(0x5BDD24);
    eax = MEM32(0x5BDD14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0024C24Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C24D: ;
    ecx = MEM32(0x5BDD28);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0024C25Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C25A: ;
    ecx = MEM32(0x5BDD28);
    edx = MEM32(0x5BDD14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0024C26Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C26C: ;
    ecx = MEM32(0x5BDD2C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0024C279u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C279: ;
    ecx = MEM32(0x5BDD2C);
    eax = MEM32(0x5BDD14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0024C28Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C28A: ;
    ecx = MEM32(0x5BDD18);
    MEM32(ecx + 0x2C) = 3;
    ecx = MEM32(0x5BDD18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0024C2A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C2A4: ;
    ecx = MEM32(0x5BDD18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x0024C2B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C2B4: ;
    ecx = MEM32(0x5BDD18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0024C2C4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C2C4: ;
    ecx = MEM32(0x5BDD30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0024C2D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C2D1: ;
    ecx = MEM32(0x5BDD30);
    eax = MEM32(0x5BDD18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0024C2E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C2E2: ;
    ecx = MEM32(0x5BDD00);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0024C2EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C2EF: ;
    eax = MEM32(0x5BDD00);
    MEM32(eax + 0xC) = 0;
    ecx = MEM32(0x5BDCCC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0024C308u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C308: ;
    ecx = MEM32(0x5BDCCC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0024C315u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C315: ;
    ecx = MEM32(0x5BDCD0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0024C322u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C322: ;
    ecx = MEM32(0x5BDCD0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0024C32Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C32F: ;
    ecx = MEM32(0x5BDCD4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0024C33Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C33C: ;
    ecx = MEM32(0x5BDCD4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0024C349u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C349: ;
    ecx = MEM32(0x5BDCD8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0024C356u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C356: ;
    ecx = MEM32(0x5BDCD8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0024C363u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C363: ;
    ecx = MEM32(0x5BDCDC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0024C370u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C370: ;
    ecx = MEM32(0x5BDCDC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0024C37Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C37D: ;
    ecx = MEM32(0x5BDCE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0024C38Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C38A: ;
    ecx = MEM32(0x5BDCE0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0024C397u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C397: ;
    ecx = MEM32(0x5BDCE4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0024C3A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C3A4: ;
    ecx = MEM32(0x5BDCE4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0024C3B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C3B1: ;
    ecx = MEM32(0x5BDCE8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0024C3BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C3BE: ;
    ecx = MEM32(0x5BDCE8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0024C3CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C3CB: ;
    ecx = MEM32(0x5BDCEC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0024C3D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C3D8: ;
    ecx = MEM32(0x5BDCEC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0024C3E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C3E5: ;
    ecx = MEM32(0x5BDCEC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0024C3F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C3F2: ;
    ecx = MEM32(0x5BDCF0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0024C3FFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C3FF: ;
    ecx = MEM32(0x5BDCF0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0024C40Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C40C: ;
    ecx = MEM32(0x5BDCF0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0024C419u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C419: ;
    ecx = MEM32(0x5BDCF4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0024C426u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C426: ;
    ecx = MEM32(0x5BDCF4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0024C433u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C433: ;
    ecx = MEM32(0x5BDCF4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0024C440u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C440: ;
    ecx = MEM32(0x5BDCF8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0024C44Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C44D: ;
    ecx = MEM32(0x5BDCF8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0024C45Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C45A: ;
    ecx = MEM32(0x5BDCF8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0024C467u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C467: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024C470
 * Original: 0x0024C470 - 0x0024C558 (232 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024C470(void)
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

loc_0024C470: ;
    esp = esp - 0x80;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x2C);
    eax = 0xBF800000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024C490; /* jne: not equal / not zero */

loc_0024C485: ;
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x30); /* fmul dword ptr [esi + 0x30] */
    MEMF(esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0024C49E;

loc_0024C490: ;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024C49E; /* jne: not equal / not zero */

loc_0024C495: ;
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    fp_top() = fp_top() / MEMF(esi + 0x3C); /* fdiv dword ptr [esi + 0x3c] */
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */

loc_0024C49E: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0024C4A7u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0024C4A7: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x34); /* fsub dword ptr [esi + 0x34] */
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x34);
    ecx = esp + 8;
    fp_top() = fp_top() * MEMF(esi + 0x24); /* fmul dword ptr [esi + 0x24] */
    fp_top() = fp_top() * MEMF(0x3C93C0); /* fmul dword ptr [0x3c93c0] */
    fp_top() = fp_top() + MEMF(esi + 0x28); /* fadd dword ptr [esi + 0x28] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    esp = esp - 0xC;
    fp_top() = fp_top() / MEMF(esi + 0x30); /* fdiv dword ptr [esi + 0x30] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0024C4F0u); RECOMP_ABI_CALL(0x0023E9E0u, sub_0023E9E0); /* call 0x0023E9E0 */

loc_0024C4F0: ;
    ecx = MEM32(0x5BDD38);
    edx = MEM32(ecx);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0024C500u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C500: ;
    ecx = esp + 0x44;
    PUSH32(esp, 0x0024C509u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0024C509: ;
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    fp_top() = fp_top() / MEMF(esi + 0x30); /* fdiv dword ptr [esi + 0x30] */
    ecx = MEM32(esi + 0x38);
    edx = MEM32(esi + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    esp = esp - 0xC;
    ecx = esp + 0x58;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0024C540u); RECOMP_ABI_CALL(0x0023E9E0u, sub_0023E9E0); /* call 0x0023E9E0 */

loc_0024C540: ;
    ecx = MEM32(0x5BDD3C);
    eax = MEM32(ecx);
    edx = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0024C550u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C550: ;
    POP32(esp, esi);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0024C560
 * Original: 0x0024C560 - 0x0024C58E (46 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024C560(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024C560: ;
    ecx = MEM32(0x5BDCAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024C56F; /* je: equal / zero */

loc_0024C56A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0024C56Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C56F: ;
    ecx = MEM32(0x5BDCB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024C57E; /* je: equal / zero */

loc_0024C579: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0024C57Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C57E: ;
    ecx = MEM32(0x5BDCB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024C58D; /* je: equal / zero */

loc_0024C588: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x68)); return; /* indirect tail jmp */

loc_0024C58D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024C590
 * Original: 0x0024C590 - 0x0024C624 (148 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024C590(void)
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

loc_0024C590: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(0x5BDF84)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0024C5C5; /* jp: parity */

loc_0024C5A4: ;
    fp_push(MEMF(0x5BDF80)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0024C5C5; /* jp: parity */

loc_0024C5B7: ;
    eax = MEM32(0x5BDF7C);
    MEM32(esi) = eax;
    eax = MEM32(0x5BDF78);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0024C5C5: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    ecx = MEM32(esp + 8);
    fp_top() = fp_top() / MEMF(esp + 0xC); /* fdiv dword ptr [esp + 0xc] */
    edx = MEM32(esp + 0xC);
    MEM32(0x5BDF84) = ecx;
    MEM32(0x5BDF80) = edx;
    PUSH32(esp, 0x0024C5E6u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0024C5E6: ;
    ecx = eax;
    MEM32(esp) = ecx;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    fp_top() = MEMF(esp + 8) - fp_top(); /* fsubr dword ptr [esp + 8] */
    MEMF(0x5BDF7C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024C613; /* je: equal / zero */

loc_0024C609: ;
    MEM32(0x5BDF7C) = 0;

loc_0024C613: ;
    eax = MEM32(0x5BDF7C);
    MEM32(esi) = eax;
    MEM32(0x5BDF78) = ecx;
    eax = ecx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0024C630
 * Original: 0x0024C630 - 0x0024C6D0 (160 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024C630(void)
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

loc_0024C630: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_A(_fa, _fb)) goto loc_0024C6C7; /* ja: above (unsigned >) */

loc_0024C63B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x24C6D0); /* switch: 4 entries, 3 targets */
    if (_jt == 0x0024C642u) goto loc_0024C642;
    if (_jt == 0x0024C686u) goto loc_0024C686;
    if (_jt == 0x0024C6A3u) goto loc_0024C6A3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0024C642: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024C658; /* jne: not equal / not zero */

loc_0024C651: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0024C658: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024C6C7; /* jnp: not parity */

loc_0024C669: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = esp + 0xC;
    PUSH32(esp, 0x0024C67Cu); RECOMP_ABI_CALL(0x0024C590u, sub_0024C590); /* call 0x0024C590 */

loc_0024C67C: ;
    esp = esp + 8;

loc_0024C67F: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0024C686: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    esi = esp + 0xC;
    PUSH32(esp, 0x0024C699u); RECOMP_ABI_CALL(0x0024C590u, sub_0024C590); /* call 0x0024C590 */

loc_0024C699: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0024C6A3: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    esi = esp + 0xC;
    PUSH32(esp, 0x0024C6B6u); RECOMP_ABI_CALL(0x0024C590u, sub_0024C590); /* call 0x0024C590 */

loc_0024C6B6: ;
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024C67F; /* je: equal / zero */

loc_0024C6BD: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    POP32(esp, esi);
    fp_top() = fp_top() - MEMF(esp); /* fsub dword ptr [esp] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0024C6C7: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
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
 * sub_0024C6E0
 * Original: 0x0024C6E0 - 0x0024C6F0 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024C6E0(void)
{

loc_0024C6E0: ;
    SET_LO8(eax, 1);
    MEM8(ecx + 8) = LO8(eax);
    MEM8(ecx + 9) = 3;
    MEM8(ecx + 0xA) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024C6F0
 * Original: 0x0024C6F0 - 0x0024C739 (73 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024C6F0(void)
{

loc_0024C6F0: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0024C713u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C713: ;
    esi = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x0024C723u); RECOMP_ABI_CALL(0x0023F4A0u, sub_0023F4A0); /* call 0x0023F4A0 */

loc_0024C723: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024C72Fu); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_0024C72F: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0024C740
 * Original: 0x0024C740 - 0x0024C75C (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024C740(void)
{

loc_0024C740: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0024C759u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C759: ;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0024C760
 * Original: 0x0024C760 - 0x0024C87B (283 bytes, 100 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024C760(void)
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

loc_0024C760: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024C787; /* jne: not equal / not zero */

loc_0024C777: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024C787; /* jne: not equal / not zero */

loc_0024C77E: ;
    edx = MEM32(esi + 0x10);
    MEM32(esp + 0xC) = edx;
    goto loc_0024C7CD;

loc_0024C787: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0024C78Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C78F: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    eax = edi;
    edx = ebx;
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x0024C7A3u); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_0024C7A3: ;
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    fp_top() = fp_top() * MEMF(0x3FEDBC); /* fmul dword ptr [0x3fedbc] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0024C7BDu); RECOMP_ABI_CALL(0x0024C630u, sub_0024C630); /* call 0x0024C630 */

loc_0024C7BD: ;
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    esp = esp + 8;
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = ebx;

loc_0024C7CD: ;
    ecx = MEM32(esp + 0xC);
    edi = MEM32(0x5BDD54);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x2C) = ebx;
    PUSH32(esp, 0x0024C7F8u); RECOMP_ABI_CALL(0x0033C730u, sub_0033C730); /* call 0x0033C730 */

loc_0024C7F8: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ecx = MEM32(esp + 0x10);
    fp_top() = fp_top() - MEMF(ecx + 0x1C); /* fsub dword ptr [ecx + 0x1c] */
    eax = ZX8(MEM8(esi + 9));
    eax = eax - ebx;
    fp_top() = fp_top() / MEMF(edi + 0x24); /* fdiv dword ptr [edi + 0x24] */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    if ((eax == 0)) goto loc_0024C855; /* je: equal / zero */

loc_0024C815: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0024C839; /* je: equal / zero */

loc_0024C818: ;
    eax = eax - 2;
    if ((eax != 0)) goto loc_0024C873; /* jne: not equal / not zero */

loc_0024C81D: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x0024C831u); RECOMP_ABI_CALL(0x0023F650u, sub_0023F650); /* call 0x0023F650 */

loc_0024C831: ;
    SET_LO8(eax, 1);
    esp = esp + 8;
    esp += 20; return; /* ret 16 */

loc_0024C839: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024C84Du); RECOMP_ABI_CALL(0x0023F910u, sub_0023F910); /* call 0x0023F910 */

loc_0024C84D: ;
    SET_LO8(eax, 1);
    esp = esp + 8;
    esp += 20; return; /* ret 16 */

loc_0024C855: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;

loc_0024C873: ;
    SET_LO8(eax, 1);
    esp = esp + 8;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0024C880
 * Original: 0x0024C880 - 0x0024C89C (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024C880(void)
{

loc_0024C880: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0024C899u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C899: ;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0024C8A0
 * Original: 0x0024C8A0 - 0x0024C9F8 (344 bytes, 131 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024C8A0(void)
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

loc_0024C8A0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024C8C8; /* jne: not equal / not zero */

loc_0024C8B8: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024C8C8; /* jne: not equal / not zero */

loc_0024C8BF: ;
    edx = MEM32(esi + 0x10);
    MEM32(esp + 0x24) = edx;
    goto loc_0024C90E;

loc_0024C8C8: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0024C8D0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024C8D0: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    eax = edi;
    edx = ebx;
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x0024C8E4u); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_0024C8E4: ;
    MEM32(esp + 0x28) = eax;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    fp_top() = fp_top() * MEMF(0x3FEDBC); /* fmul dword ptr [0x3fedbc] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0024C8FEu); RECOMP_ABI_CALL(0x0024C630u, sub_0024C630); /* call 0x0024C630 */

loc_0024C8FE: ;
    MEMF(esp + 0x2C) = (float)fp_top(); /* fst */
    esp = esp + 8;
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = ebx;

loc_0024C90E: ;
    ecx = MEM32(esp + 0x24);
    edi = MEM32(0x5BDD54);
    eax = 0; /* xor self */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0024C939u); RECOMP_ABI_CALL(0x0033C730u, sub_0033C730); /* call 0x0033C730 */

loc_0024C939: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    eax = MEM32(esp + 0x10);
    fp_top() = fp_top() - MEMF(eax + 0x1C); /* fsub dword ptr [eax + 0x1c] */
    ecx = MEM32(esp + 0x14);
    ebx = ecx;
    edx = ecx + 0x10;
    fp_top() = fp_top() / MEMF(edi + 0x24); /* fdiv dword ptr [edi + 0x24] */
    ecx = ZX8(MEM8(esi + 8));
    ecx = ecx - 0;
    ebp = eax;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0x2C);
    if ((ecx == 0)) goto loc_0024C977; /* je: equal / zero */

loc_0024C963: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0024C991; /* jne: not equal / not zero */

loc_0024C966: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0024C975u); RECOMP_ABI_CALL(0x0023FC50u, sub_0023FC50); /* call 0x0023FC50 */

loc_0024C975: ;
    goto loc_0024C991;

loc_0024C977: ;
    ecx = MEM32(edx);
    eax = MEM32(esp + 0x20);
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = edx;

loc_0024C991: ;
    eax = ZX8(MEM8(esi + 9));
    eax = eax - 0;
    if ((eax == 0)) goto loc_0024C9D2; /* je: equal / zero */

loc_0024C99A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0024C9BA; /* je: equal / zero */

loc_0024C99D: ;
    eax = eax - 2;
    if ((eax != 0)) goto loc_0024C9EC; /* jne: not equal / not zero */

loc_0024C9A2: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0024C9AEu); RECOMP_ABI_CALL(0x0023F650u, sub_0023F650); /* call 0x0023F650 */

loc_0024C9AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 24; return; /* ret 20 */

loc_0024C9BA: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0024C9C6u); RECOMP_ABI_CALL(0x0023F910u, sub_0023F910); /* call 0x0023F910 */

loc_0024C9C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 24; return; /* ret 20 */

loc_0024C9D2: ;
    ecx = MEM32(ebx);
    eax = MEM32(esp + 0x1C);
    MEM32(eax) = ecx;
    edx = MEM32(ebx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ebx + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(ebx + 0xC);
    MEM32(eax + 0xC) = edx;

loc_0024C9EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0024CA00
 * Original: 0x0024CA00 - 0x0024CA21 (33 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024CA00(void)
{

loc_0024CA00: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0024CA1Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024CA1E: ;
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0024CA30
 * Original: 0x0024CA30 - 0x0024CA44 (20 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024CA30(void)
{

loc_0024CA30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024CA3Cu); RECOMP_ABI_CALL(0x0033C8A0u, sub_0033C8A0); /* call 0x0033C8A0 */

loc_0024CA3C: ;
    esp = esp + 4;
    MEM32(esi + 0x20) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024CA50
 * Original: 0x0024CA50 - 0x0024CA5F (15 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024CA50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024CA50: ;
    SET_LO8(eax, MEM8(0x5BDD58));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024CA5E; /* je: equal / zero */

loc_0024CA59: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x54)); return; /* indirect tail jmp */

loc_0024CA5E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024CA60
 * Original: 0x0024CA60 - 0x0024CA6C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024CA60(void)
{

loc_0024CA60: ;
    eax = MEM32(ecx + 0xA0);
    MEM32(0x5BDD54) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0024CA70
 * Original: 0x0024CA70 - 0x0024CA7B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024CA70(void)
{

loc_0024CA70: ;
    MEM32(0x5BDD54) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0024CA80
 * Original: 0x0024CA80 - 0x0024CA8E (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024CA80(void)
{

loc_0024CA80: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x28) = eax;
    MEM8(ecx + 0x3C) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024CA90
 * Original: 0x0024CA90 - 0x0024CA9E (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024CA90(void)
{

loc_0024CA90: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x38) = eax;
    MEM8(ecx + 0x3C) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024CAA0
 * Original: 0x0024CAA0 - 0x0024CAAE (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024CAA0(void)
{

loc_0024CAA0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x30) = LO8(eax);
    MEM8(ecx + 0x3C) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024CAB0
 * Original: 0x0024CAB0 - 0x0024CD42 (658 bytes, 204 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024CAB0(void)
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

loc_0024CAB0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    edx = MEM32(eax + 0xC);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x34);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0024CC83; /* je: equal / zero */

loc_0024CADF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024CC83; /* je: equal / zero */

loc_0024CAE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024CBA5; /* je: equal / zero */

loc_0024CAF1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024CBA5; /* je: equal / zero */

loc_0024CAFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024CB08; /* je: equal / zero */

loc_0024CAFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024CD19; /* jne: not equal / not zero */

loc_0024CB08: ;
    ecx = MEM32(esp + 0x18);
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024CB3B; /* jnp: not parity */

loc_0024CB1E: ;
    fp_push(MEMF(0x3C7B8C)); /* fld float */
    fp_top() = fp_top() / MEMF(ecx + 4); /* fdiv dword ptr [ecx + 4] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx + 4); /* fmul dword ptr [ecx + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0024CB3B: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(ecx) = (float)fp_top(); /* fst */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_top() = MEMF(0x3C7084) - fp_top(); /* fsubr dword ptr [0x3c7084] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024CB82; /* jne: not equal / not zero */

loc_0024CB74: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    fp_top() = fp_top() * (double)SMEM32(esp + 0x1C); /* fimul dword ptr [esp + 0x1c] */
    goto loc_0024CB88;

loc_0024CB82: ;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */

loc_0024CB88: ;
    PUSH32(esp, 0x0024CB8Du); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0024CB8D: ;
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    edi = eax;
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    PUSH32(esp, 0x0024CB9Eu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0024CB9E: ;
    esi = eax;
    goto loc_0024CD19;

loc_0024CBA5: ;
    ecx = MEM32(esp + 0x18);
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024CBD8; /* jnp: not parity */

loc_0024CBBB: ;
    fp_push(MEMF(0x3C7B8C)); /* fld float */
    fp_top() = fp_top() / MEMF(ecx + 8); /* fdiv dword ptr [ecx + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx + 4); /* fmul dword ptr [ecx + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0024CBD8: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C6E40); /* fmul dword ptr [0x3c6e40] */
    fp_top() = MEMF(0x3C6E40) - fp_top(); /* fsubr dword ptr [0x3c6e40] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024CBFF; /* jne: not equal / not zero */

loc_0024CBF5: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_0024CBFF: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(ecx) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(edx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024CC41; /* jne: not equal / not zero */

loc_0024CC33: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    fp_top() = fp_top() * (double)SMEM32(esp + 0x1C); /* fimul dword ptr [esp + 0x1c] */
    goto loc_0024CC47;

loc_0024CC41: ;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */

loc_0024CC47: ;
    PUSH32(esp, 0x0024CC4Cu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0024CC4C: ;
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0024CC6F; /* jne: not equal / not zero */

loc_0024CC55: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x20); /* fsub dword ptr [esp + 0x20] */
    fp_top() = fp_top() * (double)SMEM32(esp + 0x10); /* fimul dword ptr [esp + 0x10] */
    PUSH32(esp, 0x0024CC68u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0024CC68: ;
    esi = eax;
    goto loc_0024CD19;

loc_0024CC6F: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    PUSH32(esp, 0x0024CC7Cu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0024CC7C: ;
    esi = eax;
    goto loc_0024CD19;

loc_0024CC83: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    ecx = MEM32(esp + 0x18);
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024CCB4; /* jnp: not parity */

loc_0024CC98: ;
    fp_push(MEMF(0x3C7B8C)); /* fld float */
    fp_top() = fp_top() / MEMF(ecx); /* fdiv dword ptr [ecx] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx + 4); /* fmul dword ptr [ecx + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0024CCB4: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_top() = MEMF(0x3C7084) - fp_top(); /* fsubr dword ptr [0x3c7084] */
    MEMF(ecx + 4) = (float)fp_top(); /* fst */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024CCFB; /* jne: not equal / not zero */

loc_0024CCED: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    fp_top() = fp_top() * (double)SMEM32(esp + 0x10); /* fimul dword ptr [esp + 0x10] */
    goto loc_0024CD01;

loc_0024CCFB: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */

loc_0024CD01: ;
    PUSH32(esp, 0x0024CD06u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0024CD06: ;
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    esi = eax;
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    PUSH32(esp, 0x0024CD17u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0024CD17: ;
    edi = eax;

loc_0024CD19: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x1C));
    esi = esi + edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx);
    esi = esi + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    ecx = esi;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0024CD3C; /* jle: less or equal (signed <=) */

loc_0024CD2B: ;
    eax = MEM32(esp + 0x24);
    ecx = ecx - eax;
    esi = ebx;

loc_0024CD33: ;
    SET_LO8(edx, MEM8(ecx + eax));
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0024CD33; /* jne: not equal / not zero */

loc_0024CD3C: ;
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
 * sub_0024CD50
 * Original: 0x0024CD50 - 0x0024D08B (827 bytes, 249 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0024CD50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0024CD50: ;
    esp = esp - 0x54;
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(edx); /* fmul dword ptr [edx] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(edx); /* fmul dword ptr [edx] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(edx); /* fmul dword ptr [edx] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(edx + 4); /* fmul dword ptr [edx + 4] */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(edx + 4); /* fmul dword ptr [edx + 4] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(edx + 4); /* fmul dword ptr [edx + 4] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(edx + 4); /* fmul dword ptr [edx + 4] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(edx + 8); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(edx + 8); /* fmul dword ptr [edx + 8] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(edx + 8); /* fmul dword ptr [edx + 8] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(edx + 8); /* fmul dword ptr [edx + 8] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 8); /* fmul dword ptr [esi + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 4); /* fmul dword ptr [esi + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() + MEMF(ecx + 0x30); /* fadd dword ptr [ecx + 0x30] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(esi); /* fmul dword ptr [esi] */
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 8); /* fmul dword ptr [esi + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 4); /* fmul dword ptr [esi + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() + MEMF(ecx + 0x34); /* fadd dword ptr [ecx + 0x34] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(esi); /* fmul dword ptr [esi] */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 8); /* fmul dword ptr [esi + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 4); /* fmul dword ptr [esi + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() + MEMF(ecx + 0x38); /* fadd dword ptr [ecx + 0x38] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    edx = MEM32(esp + 4);
    fp_top() = fp_top() * MEMF(esi); /* fmul dword ptr [esi] */
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 8); /* fmul dword ptr [esi + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 4); /* fmul dword ptr [esi + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() + MEMF(ecx + 0x3C); /* fadd dword ptr [ecx + 0x3c] */
    ecx = MEM32(esp);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 8);
    MEMF(eax) = (float)fp_top(); /* fst */
    MEM32(eax + 0xC) = ecx;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(0x3C6DE4); /* fmul dword ptr [0x3c6de4] */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    fp_top() = fp_top() * MEMF(0x3C6DE4); /* fmul dword ptr [0x3c6de4] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 3) & 7]; /* fadd st(3) */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 4) & 7]; /* fadd st(4) */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C6DE4); /* fmul dword ptr [0x3c6de4] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    fp_top() = fp_top() * MEMF(0x3C6DE4); /* fmul dword ptr [0x3c6de4] */
    MEMF(esp + 0x2C) = (float)fp_top(); /* fst */
    fp_top() = fp_top() + MEMF(esp + 0x38); /* fadd dword ptr [esp + 0x38] */
    fp_top() = fp_top() + MEMF(esp); /* fadd dword ptr [esp] */
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C6DE4); /* fmul dword ptr [0x3c6de4] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C6DE4); /* fmul dword ptr [0x3c6de4] */
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    fp_top() = fp_top() + MEMF(esp + 0x3C); /* fadd dword ptr [esp + 0x3c] */
    fp_top() = fp_top() + MEMF(esp + 4); /* fadd dword ptr [esp + 4] */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C6DE4); /* fmul dword ptr [0x3c6de4] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C6DE4); /* fmul dword ptr [0x3c6de4] */
    MEMF(esp + 0x34) = (float)fp_top(); /* fst */
    fp_top() = fp_top() + MEMF(esp + 0x40); /* fadd dword ptr [esp + 0x40] */
    fp_top() = fp_top() + MEMF(esp + 8); /* fadd dword ptr [esp + 8] */
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * MEMF(0x3C6DE4); /* fmul dword ptr [0x3c6de4] */
    MEMF(esp + 0x44) = (float)fp_top(); /* fst */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 3) & 7]; /* fadd st(3) */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 5) & 7]; /* fadd st(5) */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C6DE4); /* fmul dword ptr [0x3c6de4] */
    MEMF(esp + 0x48) = (float)fp_top(); /* fst */
    fp_top() = fp_top() + MEMF(esp + 0x2C); /* fadd dword ptr [esp + 0x2c] */
    fp_top() = fp_top() + MEMF(esp); /* fadd dword ptr [esp] */
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C6DE4); /* fmul dword ptr [0x3c6de4] */
    MEMF(esp + 0x4C) = (float)fp_top(); /* fst */
    fp_top() = fp_top() + MEMF(esp + 0x30); /* fadd dword ptr [esp + 0x30] */
    fp_top() = fp_top() + MEMF(esp + 4); /* fadd dword ptr [esp + 4] */
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C6DE4); /* fmul dword ptr [0x3c6de4] */
    MEMF(esp + 0x50) = (float)fp_top(); /* fst */
    fp_top() = fp_top() + MEMF(esp + 0x34); /* fadd dword ptr [esp + 0x34] */
    fp_top() = fp_top() + MEMF(esp + 8); /* fadd dword ptr [esp + 8] */
    fp_top() = fp_top() + MEMF(esp + 0x24); /* fadd dword ptr [esp + 0x24] */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 3) & 7]; /* fadd st(3) */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 4) & 7]; /* fadd st(4) */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() + MEMF(esp); /* fadd dword ptr [esp] */
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 4); /* fadd dword ptr [esp + 4] */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 8); /* fadd dword ptr [esp + 8] */
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    fp_top() = fp_top() + MEMF(esp + 0x24); /* fadd dword ptr [esp + 0x24] */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 6) & 7]; /* fadd st(6) */
    MEMF(eax + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x38); /* fadd dword ptr [esp + 0x38] */
    fp_top() = fp_top() + MEMF(esp); /* fadd dword ptr [esp] */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 5) & 7]; /* fadd st(5) */
    MEMF(eax + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x3C); /* fadd dword ptr [esp + 0x3c] */
    fp_top() = fp_top() + MEMF(esp + 4); /* fadd dword ptr [esp + 4] */
    fp_top() = fp_top() + MEMF(esp + 0x1C); /* fadd dword ptr [esp + 0x1c] */
    MEMF(eax + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x40); /* fadd dword ptr [esp + 0x40] */
    fp_top() = fp_top() + MEMF(esp + 8); /* fadd dword ptr [esp + 8] */
    fp_top() = fp_top() + MEMF(esp + 0x28); /* fadd dword ptr [esp + 0x28] */
    MEMF(eax + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 5) & 7]; /* fadd st(5) */
    MEMF(eax + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() + MEMF(esp); /* fadd dword ptr [esp] */
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 4) & 7]; /* fadd st(4) */
    MEMF(eax + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 4); /* fadd dword ptr [esp + 4] */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    fp_top() = fp_top() + MEMF(esp + 0x1C); /* fadd dword ptr [esp + 0x1c] */
    MEMF(eax + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 8); /* fadd dword ptr [esp + 8] */
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    fp_top() = fp_top() + MEMF(esp + 0x28); /* fadd dword ptr [esp + 0x28] */
    MEMF(eax + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 3) & 7]; /* fadd st(3) */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 5) & 7]; /* fadd st(5) */
    MEMF(eax + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() + MEMF(esp); /* fadd dword ptr [esp] */
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 4) & 7]; /* fadd st(4) */
    MEMF(eax + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 4); /* fadd dword ptr [esp + 4] */
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    fp_top() = fp_top() + MEMF(esp + 0x1C); /* fadd dword ptr [esp + 0x1c] */
    MEMF(eax + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 8); /* fadd dword ptr [esp + 8] */
    fp_top() = fp_top() + MEMF(esp + 0x24); /* fadd dword ptr [esp + 0x24] */
    fp_top() = fp_top() + MEMF(esp + 0x28); /* fadd dword ptr [esp + 0x28] */
    MEMF(eax + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 4) & 7]; /* fadd st(4) */
    MEMF(eax + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(eax + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    fp_top() = fp_top() + MEMF(esp + 0x1C); /* fadd dword ptr [esp + 0x1c] */
    MEMF(eax + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    fp_top() = fp_top() + MEMF(esp + 0x24); /* fadd dword ptr [esp + 0x24] */
    fp_top() = fp_top() + MEMF(esp + 0x28); /* fadd dword ptr [esp + 0x28] */
    MEMF(eax + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 0x54;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0024D090
 * Original: 0x0024D090 - 0x0024DC6C (3036 bytes, 941 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D090(void)
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

loc_0024D090: ;
    esp = esp - 0x30;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 0x1C);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 0x3C);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ecx + 0x2C);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ecx + 0x5C);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ecx + 0x4C);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ecx + 0x7C);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ecx + 0x6C);
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x28) = eax;
    eax = edx;
    edx = MEM32(esp + 0x28);
    edx = edx >> 0x1F;
    eax = eax >> 0x1F;
    SET_LO8(eax, LO8(eax) & LO8(edx));
    edx = MEM32(esp + 0x24);
    edx = edx >> 0x1F;
    SET_LO8(eax, LO8(eax) & LO8(edx));
    edx = MEM32(esp + 0x20);
    edx = edx >> 0x1F;
    SET_LO8(eax, LO8(eax) & LO8(edx));
    edx = MEM32(esp + 0x1C);
    edx = edx >> 0x1F;
    SET_LO8(eax, LO8(eax) & LO8(edx));
    edx = MEM32(esp + 0x18);
    edx = edx >> 0x1F;
    SET_LO8(eax, LO8(eax) & LO8(edx));
    edx = MEM32(esp + 0x14);
    edx = edx >> 0x1F;
    SET_LO8(eax, LO8(eax) & LO8(edx));
    edx = MEM32(esp + 0x10);
    edx = edx >> 0x1F;
    SET_LO8(eax, LO8(eax) & LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024D11C; /* je: equal / zero */

loc_0024D113: ;
    eax = 2;
    esp = esp + 0x30;
    esp += 4; return; /* ret */

loc_0024D11C: ;
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(ecx + 8);
    fp_push(MEMF(ecx + 4)); /* fld float */
    MEM32(esp + 0xC) = eax;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0xC) = edx;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax >> 0x1F;
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    SET_LO8(eax, LO8(eax) & 1);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = edx >> 0x1E;
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    SET_LO8(edx, LO8(edx) & 2);
    SET_LO8(eax, LO8(eax) | LO8(edx));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = edx >> 0x1D;
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(eax, LO8(eax) | LO8(edx));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    edx = edx >> 0x1C;
    fp_pop(); /* fstp st(0) */
    SET_LO8(edx, LO8(edx) & 8);
    fp_pop(); /* fstp st(0) */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = edx >> 0x1B;
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    SET_LO8(edx, LO8(edx) & 0x10);
    SET_LO8(eax, LO8(eax) | LO8(edx));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    edx = edx >> 0x1A;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    SET_LO8(edx, LO8(edx) & 0x20);
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    fp_top() = -fp_top(); /* fchs */
    SET_LO8(ebx, LO8(eax));
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, LO8(eax) & 0x3F);
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0xC) = edx;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM8(esp + 7) = LO8(eax);
    eax = MEM32(ecx + 0x18);
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    MEM32(esp + 0x10) = eax;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = edx >> 0x1F;
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    SET_LO8(edx, LO8(edx) & 1);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax >> 0x1E;
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    eax = eax >> 0x1D;
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    eax = eax >> 0x1C;
    fp_pop(); /* fstp st(0) */
    SET_LO8(eax, LO8(eax) & 8);
    fp_pop(); /* fstp st(0) */
    SET_LO8(edx, LO8(edx) | LO8(eax));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax >> 0x1B;
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    SET_LO8(eax, LO8(eax) & 0x10);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    eax = eax >> 0x1A;
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    SET_LO8(eax, LO8(eax) & 0x20);
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    SET_LO8(edx, LO8(edx) | LO8(eax));
    SET_LO8(eax, MEM8(esp + 7));
    fp_top() = -fp_top(); /* fchs */
    SET_LO8(eax, LO8(eax) & LO8(edx));
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(esp + 7) = LO8(eax);
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0xC) = eax;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    edx = MEM32(ecx + 0x28);
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    MEM32(esp + 0x10) = edx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = edx >> 0x1F;
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    SET_LO8(edx, LO8(edx) & 1);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax >> 0x1E;
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax >> 0x1D;
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    eax = eax >> 0x1C;
    fp_pop(); /* fstp st(0) */
    SET_LO8(eax, LO8(eax) & 8);
    fp_pop(); /* fstp st(0) */
    SET_LO8(edx, LO8(edx) | LO8(eax));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax >> 0x1B;
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    SET_LO8(eax, LO8(eax) & 0x10);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    eax = eax >> 0x1A;
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    SET_LO8(eax, LO8(eax) & 0x20);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    SET_LO8(eax, MEM8(esp + 7));
    fp_push(MEMF(ecx + 0x3C)); /* fld float */
    SET_LO8(eax, LO8(eax) & LO8(edx));
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(esp + 7) = LO8(eax);
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0xC) = eax;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    edx = MEM32(ecx + 0x38);
    MEM32(esp + 0x10) = edx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = edx >> 0x1F;
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    SET_LO8(edx, LO8(edx) & 1);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax >> 0x1E;
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax >> 0x1D;
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    eax = eax >> 0x1C;
    fp_pop(); /* fstp st(0) */
    SET_LO8(eax, LO8(eax) & 8);
    fp_pop(); /* fstp st(0) */
    SET_LO8(edx, LO8(edx) | LO8(eax));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax >> 0x1B;
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    SET_LO8(eax, LO8(eax) & 0x10);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(ecx + 0x40)); /* fld float */
    eax = eax >> 0x1A;
    fp_push(MEMF(ecx + 0x44)); /* fld float */
    SET_LO8(eax, LO8(eax) & 0x20);
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    SET_LO8(edx, LO8(edx) | LO8(eax));
    SET_LO8(eax, MEM8(esp + 7));
    fp_top() = -fp_top(); /* fchs */
    SET_LO8(eax, LO8(eax) & LO8(edx));
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(esp + 7) = LO8(eax);
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0xC) = eax;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    edx = MEM32(ecx + 0x48);
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    MEM32(esp + 0x10) = edx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = edx >> 0x1F;
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    SET_LO8(edx, LO8(edx) & 1);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax >> 0x1E;
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax >> 0x1D;
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    eax = eax >> 0x1C;
    fp_pop(); /* fstp st(0) */
    SET_LO8(eax, LO8(eax) & 8);
    fp_pop(); /* fstp st(0) */
    SET_LO8(edx, LO8(edx) | LO8(eax));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax >> 0x1B;
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    SET_LO8(eax, LO8(eax) & 0x10);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(ecx + 0x50)); /* fld float */
    eax = eax >> 0x1A;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    SET_LO8(eax, LO8(eax) & 0x20);
    fp_push(MEMF(ecx + 0x5C)); /* fld float */
    SET_LO8(edx, LO8(edx) | LO8(eax));
    SET_LO8(eax, MEM8(esp + 7));
    fp_top() = -fp_top(); /* fchs */
    SET_LO8(eax, LO8(eax) & LO8(edx));
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(esp + 7) = LO8(eax);
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0xC) = eax;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    edx = MEM32(ecx + 0x58);
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    MEM32(esp + 0x10) = edx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = edx >> 0x1F;
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    SET_LO8(edx, LO8(edx) & 1);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax >> 0x1E;
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax >> 0x1D;
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    eax = eax >> 0x1C;
    fp_pop(); /* fstp st(0) */
    SET_LO8(eax, LO8(eax) & 8);
    fp_pop(); /* fstp st(0) */
    SET_LO8(edx, LO8(edx) | LO8(eax));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    eax = eax >> 0x1B;
    SET_LO8(eax, LO8(eax) & 0x10);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    SET_LO8(edx, LO8(edx) | LO8(eax));
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(ecx + 0x60)); /* fld float */
    eax = eax >> 0x1A;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    SET_LO8(eax, LO8(eax) & 0x20);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    fp_push(MEMF(ecx + 0x6C)); /* fld float */
    SET_LO8(eax, MEM8(esp + 7));
    fp_top() = -fp_top(); /* fchs */
    SET_LO8(eax, LO8(eax) & LO8(edx));
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(esp + 7) = LO8(eax);
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0xC) = eax;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    edx = MEM32(ecx + 0x68);
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    MEM32(esp + 0x10) = edx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = edx >> 0x1F;
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    SET_LO8(edx, LO8(edx) & 1);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax >> 0x1E;
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax >> 0x1D;
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    eax = eax >> 0x1C;
    fp_pop(); /* fstp st(0) */
    SET_LO8(eax, LO8(eax) & 8);
    fp_pop(); /* fstp st(0) */
    SET_LO8(edx, LO8(edx) | LO8(eax));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax >> 0x1B;
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    SET_LO8(eax, LO8(eax) & 0x10);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(ecx + 0x70)); /* fld float */
    eax = eax >> 0x1A;
    fp_push(MEMF(ecx + 0x74)); /* fld float */
    SET_LO8(eax, LO8(eax) & 0x20);
    fp_push(MEMF(ecx + 0x7C)); /* fld float */
    SET_LO8(edx, LO8(edx) | LO8(eax));
    SET_LO8(eax, MEM8(esp + 7));
    fp_top() = -fp_top(); /* fchs */
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, LO8(eax) & LO8(edx));
    edx = MEM32(ecx + 0x78);
    MEM8(esp + 7) = LO8(eax);
    eax = MEM32(esp + 0x30);
    MEM32(esp + 0xC) = eax;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM32(esp + 0x10) = edx;
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = edx >> 0x1F;
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    SET_LO8(edx, LO8(edx) & 1);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax >> 0x1E;
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax >> 0x1D;
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    eax = eax >> 0x1C;
    fp_pop(); /* fstp st(0) */
    SET_LO8(eax, LO8(eax) & 8);
    fp_pop(); /* fstp st(0) */
    SET_LO8(edx, LO8(edx) | LO8(eax));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax >> 0x1B;
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    SET_LO8(eax, LO8(eax) & 0x10);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    eax = eax >> 0x1A;
    SET_LO8(eax, LO8(eax) & 0x20);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024D69A; /* je: equal / zero */

loc_0024D690: ;
    eax = 2;
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

loc_0024D69A: ;
    SET_LO8(edx, LO8(edx) & MEM8(esp + 7));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x3F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x3F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024D6AD; /* jne: not equal / not zero */

loc_0024D6A3: ;
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

loc_0024D6AD: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_push(MEMF(0x46D9C0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024DC62; /* jnp: not parity */

loc_0024D6C6: ;
    fp_push(MEMF(0x46D9C0)); /* fld float */
    edx = MEM32(esp + 0x14);
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    MEM32(esp + 0xC) = edx;
    fp_push(MEMF(0x46D9C0)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 4); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(0x46D9C0)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = edx >> 0x1F;
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    SET_LO8(edx, LO8(edx) & 1);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax >> 0x1E;
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax >> 0x1D;
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    eax = eax >> 0x1C;
    fp_pop(); /* fstp st(0) */
    SET_LO8(eax, LO8(eax) & 8);
    fp_pop(); /* fstp st(0) */
    SET_LO8(edx, LO8(edx) | LO8(eax));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax >> 0x1B;
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    SET_LO8(eax, LO8(eax) & 0x10);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(0x46D9C0)); /* fld float */
    eax = eax >> 0x1A;
    fp_top() = fp_top() * MEMF(ecx + 0x10); /* fmul dword ptr [ecx + 0x10] */
    SET_LO8(eax, LO8(eax) & 0xE0);
    fp_push(MEMF(0x46D9C0)); /* fld float */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    fp_top() = fp_top() * MEMF(ecx + 0x14); /* fmul dword ptr [ecx + 0x14] */
    edx = MEM32(esp + 0x18);
    fp_push(MEMF(0x46D9C0)); /* fld float */
    MEM32(esp + 0xC) = edx;
    fp_top() = fp_top() * MEMF(ecx + 0x18); /* fmul dword ptr [ecx + 0x18] */
    SET_LO8(eax, LO8(eax) & 0x3F);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = edx >> 0x1F;
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    SET_LO8(edx, LO8(edx) & 1);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ebx = ebx >> 0x1E;
    SET_LO8(ebx, LO8(ebx) & 2);
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    ebx = ebx >> 0x1D;
    SET_LO8(ebx, LO8(ebx) & 4);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    ebx = ebx >> 0x1C;
    fp_pop(); /* fstp st(0) */
    SET_LO8(ebx, LO8(ebx) & 8);
    fp_pop(); /* fstp st(0) */
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ebx = ebx >> 0x1B;
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    SET_LO8(ebx, LO8(ebx) & 0x10);
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    fp_push(MEMF(0x46D9C0)); /* fld float */
    ebx = ebx >> 0x1A;
    fp_top() = fp_top() * MEMF(ecx + 0x20); /* fmul dword ptr [ecx + 0x20] */
    SET_LO8(ebx, LO8(ebx) & 0x20);
    fp_push(MEMF(0x46D9C0)); /* fld float */
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    fp_top() = fp_top() * MEMF(ecx + 0x24); /* fmul dword ptr [ecx + 0x24] */
    edx = MEM32(esp + 0x1C);
    fp_push(MEMF(0x46D9C0)); /* fld float */
    MEM32(esp + 0xC) = edx;
    fp_top() = fp_top() * MEMF(ecx + 0x28); /* fmul dword ptr [ecx + 0x28] */
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = edx >> 0x1F;
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    SET_LO8(edx, LO8(edx) & 1);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ebx = ebx >> 0x1E;
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    SET_LO8(ebx, LO8(ebx) & 2);
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ebx = ebx >> 0x1D;
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    SET_LO8(ebx, LO8(ebx) & 4);
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    ebx = ebx >> 0x1C;
    fp_pop(); /* fstp st(0) */
    SET_LO8(ebx, LO8(ebx) & 8);
    fp_pop(); /* fstp st(0) */
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ebx = ebx >> 0x1B;
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    SET_LO8(ebx, LO8(ebx) & 0x10);
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    fp_push(MEMF(0x46D9C0)); /* fld float */
    ebx = ebx >> 0x1A;
    fp_top() = fp_top() * MEMF(ecx + 0x30); /* fmul dword ptr [ecx + 0x30] */
    SET_LO8(ebx, LO8(ebx) & 0x20);
    fp_push(MEMF(0x46D9C0)); /* fld float */
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    fp_top() = fp_top() * MEMF(ecx + 0x34); /* fmul dword ptr [ecx + 0x34] */
    edx = MEM32(esp + 0x20);
    fp_push(MEMF(0x46D9C0)); /* fld float */
    MEM32(esp + 0xC) = edx;
    fp_top() = fp_top() * MEMF(ecx + 0x38); /* fmul dword ptr [ecx + 0x38] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = edx >> 0x1F;
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    SET_LO8(edx, LO8(edx) & 1);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ebx = ebx >> 0x1E;
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    SET_LO8(ebx, LO8(ebx) & 2);
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ebx = ebx >> 0x1D;
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    SET_LO8(ebx, LO8(ebx) & 4);
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    ebx = ebx >> 0x1C;
    fp_pop(); /* fstp st(0) */
    SET_LO8(ebx, LO8(ebx) & 8);
    fp_pop(); /* fstp st(0) */
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ebx = ebx >> 0x1B;
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    SET_LO8(ebx, LO8(ebx) & 0x10);
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    fp_push(MEMF(0x46D9C0)); /* fld float */
    ebx = ebx >> 0x1A;
    fp_top() = fp_top() * MEMF(ecx + 0x40); /* fmul dword ptr [ecx + 0x40] */
    SET_LO8(ebx, LO8(ebx) & 0x20);
    fp_push(MEMF(0x46D9C0)); /* fld float */
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    fp_top() = fp_top() * MEMF(ecx + 0x44); /* fmul dword ptr [ecx + 0x44] */
    edx = MEM32(esp + 0x24);
    fp_push(MEMF(0x46D9C0)); /* fld float */
    MEM32(esp + 0xC) = edx;
    fp_top() = fp_top() * MEMF(ecx + 0x48); /* fmul dword ptr [ecx + 0x48] */
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = edx >> 0x1F;
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    SET_LO8(edx, LO8(edx) & 1);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ebx = ebx >> 0x1E;
    SET_LO8(ebx, LO8(ebx) & 2);
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ebx = ebx >> 0x1D;
    SET_LO8(ebx, LO8(ebx) & 4);
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    ebx = ebx >> 0x1C;
    fp_pop(); /* fstp st(0) */
    SET_LO8(ebx, LO8(ebx) & 8);
    fp_pop(); /* fstp st(0) */
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ebx = ebx >> 0x1B;
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    SET_LO8(ebx, LO8(ebx) & 0x10);
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    fp_push(MEMF(0x46D9C0)); /* fld float */
    ebx = ebx >> 0x1A;
    fp_top() = fp_top() * MEMF(ecx + 0x50); /* fmul dword ptr [ecx + 0x50] */
    SET_LO8(ebx, LO8(ebx) & 0x20);
    fp_push(MEMF(0x46D9C0)); /* fld float */
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    fp_top() = fp_top() * MEMF(ecx + 0x54); /* fmul dword ptr [ecx + 0x54] */
    edx = MEM32(esp + 0x28);
    fp_push(MEMF(0x46D9C0)); /* fld float */
    MEM32(esp + 0xC) = edx;
    fp_top() = fp_top() * MEMF(ecx + 0x58); /* fmul dword ptr [ecx + 0x58] */
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = edx >> 0x1F;
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    SET_LO8(edx, LO8(edx) & 1);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ebx = ebx >> 0x1E;
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    SET_LO8(ebx, LO8(ebx) & 2);
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ebx = ebx >> 0x1D;
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    SET_LO8(ebx, LO8(ebx) & 4);
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    ebx = ebx >> 0x1C;
    fp_pop(); /* fstp st(0) */
    SET_LO8(ebx, LO8(ebx) & 8);
    fp_pop(); /* fstp st(0) */
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ebx = ebx >> 0x1B;
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    SET_LO8(ebx, LO8(ebx) & 0x10);
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    fp_push(MEMF(0x46D9C0)); /* fld float */
    ebx = ebx >> 0x1A;
    fp_top() = fp_top() * MEMF(ecx + 0x60); /* fmul dword ptr [ecx + 0x60] */
    SET_LO8(ebx, LO8(ebx) & 0x20);
    fp_push(MEMF(0x46D9C0)); /* fld float */
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    fp_top() = fp_top() * MEMF(ecx + 0x64); /* fmul dword ptr [ecx + 0x64] */
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    fp_push(MEMF(0x46D9C0)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x68); /* fmul dword ptr [ecx + 0x68] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0xC) = edx;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = edx >> 0x1F;
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    SET_LO8(edx, LO8(edx) & 1);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ebx = ebx >> 0x1E;
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    SET_LO8(ebx, LO8(ebx) & 2);
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ebx = ebx >> 0x1D;
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    SET_LO8(ebx, LO8(ebx) & 4);
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    ebx = ebx >> 0x1C;
    fp_pop(); /* fstp st(0) */
    SET_LO8(ebx, LO8(ebx) & 8);
    fp_pop(); /* fstp st(0) */
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ebx = ebx >> 0x1B;
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    SET_LO8(ebx, LO8(ebx) & 0x10);
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 8);
    fp_push(MEMF(0x46D9C0)); /* fld float */
    ebx = ebx >> 0x1A;
    fp_top() = fp_top() * MEMF(ecx + 0x70); /* fmul dword ptr [ecx + 0x70] */
    SET_LO8(ebx, LO8(ebx) & 0x20);
    fp_push(MEMF(0x46D9C0)); /* fld float */
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    fp_top() = fp_top() * MEMF(ecx + 0x74); /* fmul dword ptr [ecx + 0x74] */
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    fp_push(MEMF(0x46D9C0)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x78); /* fmul dword ptr [ecx + 0x78] */
    ecx = MEM32(esp + 0x30);
    MEM32(esp + 0xC) = ecx;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ecx = ecx >> 0x1F;
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    SET_LO8(ecx, LO8(ecx) & 1);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = edx >> 0x1E;
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    SET_LO8(edx, LO8(edx) & 2);
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = edx >> 0x1D;
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    edx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    edx = edx >> 0x1C;
    SET_LO8(edx, LO8(edx) & 8);
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = edx >> 0x1B;
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    SET_LO8(edx, LO8(edx) & 0x10);
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    edx = edx >> 0x1A;
    SET_LO8(edx, LO8(edx) & 0x20);
    SET_LO8(edx, LO8(edx) | LO8(ecx));
    SET_LO8(edx, LO8(edx) & LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x3F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x3F (8-bit) */
    eax = 5;
    if (CMP_EQ(_fa, _fb)) goto loc_0024DC67; /* je: equal / zero */

loc_0024DC62: ;
    eax = 3;

loc_0024DC67: ;
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0024DC70
 * Original: 0x0024DC70 - 0x0024DCB6 (70 bytes, 19 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0024DC70(void)
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

loc_0024DC70: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x22C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x22c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0024DCB1; /* jp: parity */

loc_0024DC81: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024DCB1; /* jne: not equal / not zero */

loc_0024DC92: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = fp_top() / MEMF(esp + 4); /* fdiv dword ptr [esp + 4] */
    MEM32(ecx + 0x228) = eax;
    SET_LO8(eax, 1);
    MEMF(0x46D9C0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

loc_0024DCB1: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0024DCC0
 * Original: 0x0024DCC0 - 0x0024DD06 (70 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DCC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024DCC0: ;
    SET_LO8(ecx, MEM8(0x5BDF8C));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024DCEA; /* jne: not equal / not zero */

loc_0024DCCF: ;
    MEM32(0x5BDF8C) = MEM32(0x5BDF8C) | eax;
    ecx = MEM32(0x5BC28C);
    PUSH32(esp, 0x3E35B4);
    PUSH32(esp, 0x0024DCE5u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_0024DCE5: ;
    MEM32(0x5BDF88) = eax;

loc_0024DCEA: ;
    eax = MEM32(0x5BDF88);
    ecx = MEM32(eax + 8);
    edx = MEM32(esp + 4);
    eax = MEM32(edx + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024DD05; /* je: equal / zero */

loc_0024DCFD: ;
    ecx = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0024DD04u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024DD04: ;
    POP32(esp, ecx);

loc_0024DD05: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024DD10
 * Original: 0x0024DD10 - 0x0024DD28 (24 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DD10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024DD10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0024DD18u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0024DD18: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024DD26; /* je: equal / zero */

loc_0024DD1E: ;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x60)); return; /* indirect tail jmp */

loc_0024DD26: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024DD30
 * Original: 0x0024DD30 - 0x0024DD3C (12 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DD30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024DD30: ;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024DD3B; /* je: equal / zero */

loc_0024DD36: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x60)); return; /* indirect tail jmp */

loc_0024DD3B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024DD40
 * Original: 0x0024DD40 - 0x0024DD59 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DD40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024DD40: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax);
    ecx = MEM32(ecx);
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00343612(); return; /* tail jmp 0x00343612 */

}

/**
 * sub_0024DD60
 * Original: 0x0024DD60 - 0x0024DE2D (205 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024DD60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x88);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024DD81; /* je: equal / zero */

loc_0024DD72: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024DD78u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_0024DD78: ;
    esp = esp + 4;
    MEM32(esi + 0x88) = edi;

loc_0024DD81: ;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024DD9A; /* je: equal / zero */

loc_0024DD8B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024DD91u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_0024DD91: ;
    esp = esp + 4;
    MEM32(esi + 0x8C) = edi;

loc_0024DD9A: ;
    ecx = esi;
    PUSH32(esp, 0x0024DDA1u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0024DDA1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0024DDA9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024DDA9: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BD724);
    PUSH32(esp, 0x0024DDBBu); RECOMP_ABI_CALL(0x001F7560u, sub_001F7560); /* call 0x001F7560 */

loc_0024DDBB: ;
    ecx = esi;
    PUSH32(esp, 0x0024DDC2u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0024DDC2: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0024DDCAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024DDCA: ;
    ecx = MEM32(0x5BD7DC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024DDDCu); RECOMP_ABI_CALL(0x001F7560u, sub_001F7560); /* call 0x001F7560 */

loc_0024DDDC: ;
    edx = MEM32(esi);
    ecx = esi;
    ebx = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0024DDE5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024DDE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0024DE28; /* jbe: below or equal (unsigned <=) */

loc_0024DDE9: ;
    /* nop */

loc_0024DDF0: ;
    eax = MEM32(esi + 0x88);
    eax = eax + edi;
    PUSH32(esp, 0x46D0A0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024DE03u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0024DE03: ;
    ecx = MEM32(esi + 0x8C);
    ecx = ecx + edi;
    PUSH32(esp, 0x46D0A0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024DE16u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0024DE16: ;
    edx = MEM32(esi);
    esp = esp + 0x10;
    ecx = esi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0x40;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0024DE24u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024DE24: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0024DDF0; /* jb: below (unsigned <) */

loc_0024DE28: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024DE30
 * Original: 0x0024DE30 - 0x0024DE57 (39 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DE30(void)
{

loc_0024DE30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = esi + 0xB0;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024DE45u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0024DE45: ;
    PUSH32(esp, edi);
    esi = esi + 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0024DE4Fu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0024DE4F: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024DE60
 * Original: 0x0024DE60 - 0x0024DEAC (76 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DE60(void)
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

loc_0024DE60: ;
    ecx = MEM32(esp + 4);
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024DE8F; /* jne: not equal / not zero */

loc_0024DE7C: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024DEA6; /* jne: not equal / not zero */

loc_0024DE8C: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0024DE8F: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = 1;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024DEAB; /* jnp: not parity */

loc_0024DEA6: ;
    eax = 2;

loc_0024DEAB: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0024DEB0
 * Original: 0x0024DEB0 - 0x0024DEFD (77 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024DEB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024DED4; /* je: equal / zero */

loc_0024DEBA: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024DEC9; /* jne: not equal / not zero */

loc_0024DEC1: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0024DEC9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024DEC9: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx + 0x8C);
    goto loc_0024DEE1;

loc_0024DED4: ;
    edx = MEM32(esi + 8);
    MEM8(esi + 0x10) = 1;
    eax = MEM32(edx + 0x84);

loc_0024DEE1: ;
    esi = MEM32(esi + 0xC);
    esi = esi << 6;
    esi = esi + eax;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024DEF4u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0024DEF4: ;
    esp = esp + 8;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0024DF00
 * Original: 0x0024DF00 - 0x0024DF38 (56 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024DF00: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    esp = esp - 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    edx = esp + 8;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0024DF17u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024DF17: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024DF30; /* je: equal / zero */

loc_0024DF1B: ;
    ecx = MEM32(esp + 0x44);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024DF28u); RECOMP_ABI_CALL(0x0023F330u, sub_0023F330); /* call 0x0023F330 */

loc_0024DF28: ;
    SET_LO8(eax, 1);
    esp = esp + 0x40;
    esp += 16; return; /* ret 12 */

loc_0024DF30: ;
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 0x40;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0024DF40
 * Original: 0x0024DF40 - 0x0024DF86 (70 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024DF40: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    esp = esp - 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x50);
    PUSH32(esp, edx);
    edx = esp + 8;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0024DF57u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024DF57: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024DF7E; /* je: equal / zero */

loc_0024DF5B: ;
    ecx = MEM32(esp + 0x44);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024DF68u); RECOMP_ABI_CALL(0x0023F330u, sub_0023F330); /* call 0x0023F330 */

loc_0024DF68: ;
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    ecx = esp + 4;
    PUSH32(esp, 0x0024DF76u); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_0024DF76: ;
    SET_LO8(eax, 1);
    esp = esp + 0x40;
    esp += 20; return; /* ret 16 */

loc_0024DF7E: ;
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 0x40;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0024DF90
 * Original: 0x0024DF90 - 0x0024DF93 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DF90(void)
{

loc_0024DF90: ;
    SET_LO8(eax, 3);
    esp += 4; return; /* ret */

}

/**
 * sub_0024DFA0
 * Original: 0x0024DFA0 - 0x0024DFA7 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DFA0(void)
{

loc_0024DFA0: ;
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024DFB0
 * Original: 0x0024DFB0 - 0x0024DFD2 (34 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024DFB0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0024DFBEu); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_0024DFBE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024DFCD; /* jne: not equal / not zero */

loc_0024DFC2: ;
    eax = 0x3F800000;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x44) = eax;

loc_0024DFCD: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024DFE0
 * Original: 0x0024DFE0 - 0x0024E201 (545 bytes, 189 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DFE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024DFE0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0xC);
    eax = MEM32(esp + 8);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(ecx + 0xC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_0024E1D8; /* ja: above (unsigned >) */

loc_0024DFFD: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x24E204); /* switch: 14 entries, 13 targets */
    if (_jt == 0x0024E004u) goto loc_0024E004;
    if (_jt == 0x0024E039u) goto loc_0024E039;
    if (_jt == 0x0024E06Cu) goto loc_0024E06C;
    if (_jt == 0x0024E081u) goto loc_0024E081;
    if (_jt == 0x0024E0B6u) goto loc_0024E0B6;
    if (_jt == 0x0024E0EAu) goto loc_0024E0EA;
    if (_jt == 0x0024E104u) goto loc_0024E104;
    if (_jt == 0x0024E11Eu) goto loc_0024E11E;
    if (_jt == 0x0024E153u) goto loc_0024E153;
    if (_jt == 0x0024E187u) goto loc_0024E187;
    if (_jt == 0x0024E1B8u) goto loc_0024E1B8;
    if (_jt == 0x0024E1C9u) goto loc_0024E1C9;
    if (_jt == 0x0024E1D8u) goto loc_0024E1D8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0024E004: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    esi = 2;
    if (TEST_NZ(_fa, _fb)) goto loc_0024E1FA; /* jne: not equal / not zero */

loc_0024E015: ;
    edi = MEM32(esp + 0x14);
    MEM32(eax + 0xC) = 0;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0024E029u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E029: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0024E032u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E032: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0024E039: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    esi = 1;
    if (TEST_NZ(_fa, _fb)) goto loc_0024E1FA; /* jne: not equal / not zero */

loc_0024E04A: ;
    edi = MEM32(esp + 0x14);
    MEM32(eax + 0xC) = 0;
    eax = MEM32(edi);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0024E05Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E05D: ;
    edx = MEM32(edi);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0024E065u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E065: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0024E06C: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    esi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024E1FA; /* jne: not equal / not zero */

loc_0024E07A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0024E081: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    esi = 3;
    if (TEST_NZ(_fa, _fb)) goto loc_0024E1FA; /* jne: not equal / not zero */

loc_0024E092: ;
    edi = MEM32(esp + 0x14);
    MEM32(eax + 0xC) = 0;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0024E0A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E0A6: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0024E0AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E0AF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0024E0B6: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    esi = 2;
    if (TEST_NZ(_fa, _fb)) goto loc_0024E1FA; /* jne: not equal / not zero */

loc_0024E0C7: ;
    edi = MEM32(esp + 0x14);
    MEM32(eax + 0xC) = 0;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0024E0DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E0DB: ;
    edx = MEM32(edi);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0024E0E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E0E3: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0024E0EA: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    esi = 2;
    if (TEST_NZ(_fa, _fb)) goto loc_0024E1FA; /* jne: not equal / not zero */

loc_0024E0FB: ;
    esi = 0; /* xor self */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0024E104: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    esi = 1;
    if (TEST_NZ(_fa, _fb)) goto loc_0024E1FA; /* jne: not equal / not zero */

loc_0024E115: ;
    esi = 0; /* xor self */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0024E11E: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    esi = 9;
    if (TEST_NZ(_fa, _fb)) goto loc_0024E1FA; /* jne: not equal / not zero */

loc_0024E12F: ;
    edi = MEM32(esp + 0x14);
    MEM32(eax + 0xC) = 0;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0024E143u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E143: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0024E14Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E14C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0024E153: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    esi = 9;
    if (TEST_NZ(_fa, _fb)) goto loc_0024E1FA; /* jne: not equal / not zero */

loc_0024E164: ;
    edi = MEM32(esp + 0x14);
    MEM32(eax + 0xC) = 0;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0024E178u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E178: ;
    edx = MEM32(edi);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0024E180u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E180: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0024E187: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    esi = 9;
    if (TEST_NZ(_fa, _fb)) goto loc_0024E1FA; /* jne: not equal / not zero */

loc_0024E194: ;
    edi = MEM32(esp + 0x14);
    MEM32(eax + 0xC) = 0;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0024E1A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E1A8: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0024E1B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E1B1: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0024E1B8: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    esi = 9;
    if (TEST_NZ(_fa, _fb)) goto loc_0024E1FA; /* jne: not equal / not zero */

loc_0024E1C5: ;
    PUSH32(esp, 1);
    goto loc_0024E1DF;

loc_0024E1C9: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    esi = 9;
    if (TEST_NZ(_fa, _fb)) goto loc_0024E1FA; /* jne: not equal / not zero */

loc_0024E1D6: ;
    goto loc_0024E1DD;

loc_0024E1D8: ;
    esi = 9;

loc_0024E1DD: ;
    PUSH32(esp, 4);

loc_0024E1DF: ;
    edi = MEM32(esp + 0x18);
    MEM32(eax + 0xC) = 0;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0024E1F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E1F1: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0024E1FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E1FA: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0024E240
 * Original: 0x0024E240 - 0x0024E250 (16 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E240(void)
{

loc_0024E240: ;
    MEM16(ecx + 0x3C) = 1;
    MEM8(ecx + 0x40) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0024E250
 * Original: 0x0024E250 - 0x0024E2A4 (84 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024E250: ;
    eax = MEM32(0x46D9C4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    ecx = ecx & eax;
    eax = MEM32(esi + 0x14);
    edx = eax;
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E2A0; /* je: equal / zero */

loc_0024E269: ;
    eax = eax | ecx;
    MEM32(esi + 0x14) = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    edi = 0; /* xor self */
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0024E278u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E278: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0024E29F; /* jle: less or equal (signed <=) */

loc_0024E27C: ;
    /* nop */

loc_0024E280: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0024E288u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E288: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0024E293u); RECOMP_ABI_CALL(0x0024E250u, sub_0024E250); /* call 0x0024E250 */

loc_0024E293: ;
    edx = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0024E29Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E29B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024E280; /* jl: less (signed <) */

loc_0024E29F: ;
    POP32(esp, edi);

loc_0024E2A0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024E2B0
 * Original: 0x0024E2B0 - 0x0024E2B5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E2B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024E2B0: ;
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

}

/**
 * sub_0024E2C0
 * Original: 0x0024E2C0 - 0x0024E2E8 (40 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024E2C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0024E2CEu); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_0024E2CE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024E2E3; /* jne: not equal / not zero */

loc_0024E2D2: ;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x70); PUSH32(esp, 0x0024E2DCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E2DC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x6C); PUSH32(esp, 0x0024E2E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E2E2: ;
    POP32(esp, edi);

loc_0024E2E3: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024E2F0
 * Original: 0x0024E2F0 - 0x0024E30E (30 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E2F0(void)
{

loc_0024E2F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0024E2FDu); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_0024E2FD: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0024E304u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E304: ;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024E310
 * Original: 0x0024E310 - 0x0024E327 (23 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E310(void)
{

loc_0024E310: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0024E318u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0024E318: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0024E31Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E31F: ;
    ecx = MEM32(eax + 8);
    MEM32(esi + 0x18) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024E330
 * Original: 0x0024E330 - 0x0024E4AE (382 bytes, 125 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E330(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024E330: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0024E33Eu); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_0024E33E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024E353; /* jne: not equal / not zero */

loc_0024E342: ;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x70); PUSH32(esp, 0x0024E34Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E34C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x6C); PUSH32(esp, 0x0024E352u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E352: ;
    POP32(esp, edi);

loc_0024E353: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0024E35Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E35C: ;
    ecx = eax;
    PUSH32(esp, 0x0024E363u); RECOMP_ABI_CALL(0x001EA440u, sub_001EA440); /* call 0x001EA440 */

loc_0024E363: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0024E4AB; /* jne: not equal / not zero */

loc_0024E36D: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024E379u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E379: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E37Fu); RECOMP_ABI_CALL(0x00297800u, sub_00297800); /* call 0x00297800 */

loc_0024E37F: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDD78) = eax;
    PUSH32(esp, 0x0024E390u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E390: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E396u); RECOMP_ABI_CALL(0x00297800u, sub_00297800); /* call 0x00297800 */

loc_0024E396: ;
    esp = esp + 0x10;
    MEM32(0x5BDD7C) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0024E3A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E3A7: ;
    ecx = MEM32(0x5BDD7C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0024E3B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E3B4: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024E3C0u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E3C0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E3C6u); RECOMP_ABI_CALL(0x00297730u, sub_00297730); /* call 0x00297730 */

loc_0024E3C6: ;
    esp = esp + 8;
    MEM32(0x5BDD80) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0024E3D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E3D7: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E3E2u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E3E2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E3E8u); RECOMP_ABI_CALL(0x002968D0u, sub_002968D0); /* call 0x002968D0 */

loc_0024E3E8: ;
    esp = esp + 8;
    MEM32(0x5BDD84) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0024E3F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E3F9: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E404u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E404: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E40Au); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_0024E40A: ;
    esp = esp + 8;
    MEM32(0x5BDD88) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0024E41Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E41B: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E426u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E426: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E42Cu); RECOMP_ABI_CALL(0x00297AC0u, sub_00297AC0); /* call 0x00297AC0 */

loc_0024E42C: ;
    esp = esp + 8;
    MEM32(0x5BDD90) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0024E43Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E43D: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E448u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E448: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E44Eu); RECOMP_ABI_CALL(0x00295E60u, sub_00295E60); /* call 0x00295E60 */

loc_0024E44E: ;
    esp = esp + 8;
    MEM32(0x5BDD94) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0024E45Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E45F: ;
    ecx = MEM32(0x5BDD94);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x0024E46Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E46F: ;
    ecx = MEM32(0x5BDD94);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0024E483u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E483: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E48Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E48E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E494u); RECOMP_ABI_CALL(0x00297330u, sub_00297330); /* call 0x00297330 */

loc_0024E494: ;
    MEM32(0x5BDD98) = eax;
    edx = MEM32(eax);
    esp = esp + 8;
    MEM32(esp + 4) = 0;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x7C)); return; /* indirect tail jmp */

loc_0024E4AB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024E4B0
 * Original: 0x0024E4B0 - 0x0024E6C3 (531 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E4B0(void)
{

loc_0024E4B0: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E4BBu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E4BB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E4C1u); RECOMP_ABI_CALL(0x002A0DB0u, sub_002A0DB0); /* call 0x002A0DB0 */

loc_0024E4C1: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDDF8) = eax;
    PUSH32(esp, 0x0024E4D2u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E4D2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E4D8u); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_0024E4D8: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDDA0) = eax;
    PUSH32(esp, 0x0024E4E9u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E4E9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E4EFu); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_0024E4EF: ;
    MEM32(0x5BDDA4) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E4FFu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E4FF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E505u); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_0024E505: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDDA8) = eax;
    PUSH32(esp, 0x0024E516u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E516: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E51Cu); RECOMP_ABI_CALL(0x00297800u, sub_00297800); /* call 0x00297800 */

loc_0024E51C: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDDAC) = eax;
    PUSH32(esp, 0x0024E52Du); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E52D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E533u); RECOMP_ABI_CALL(0x00297800u, sub_00297800); /* call 0x00297800 */

loc_0024E533: ;
    MEM32(0x5BDDB0) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E543u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E543: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E549u); RECOMP_ABI_CALL(0x00297730u, sub_00297730); /* call 0x00297730 */

loc_0024E549: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDDB4) = eax;
    PUSH32(esp, 0x0024E55Au); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E55A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E560u); RECOMP_ABI_CALL(0x00297730u, sub_00297730); /* call 0x00297730 */

loc_0024E560: ;
    edx = MEM32(0x46A680);
    esp = esp + 0x40;
    PUSH32(esp, edx);
    MEM32(0x5BDDB8) = eax;
    PUSH32(esp, 0x0024E574u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E574: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E57Au); RECOMP_ABI_CALL(0x002968D0u, sub_002968D0); /* call 0x002968D0 */

loc_0024E57A: ;
    MEM32(0x5BDDBC) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E58Au); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E58A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E590u); RECOMP_ABI_CALL(0x002975A0u, sub_002975A0); /* call 0x002975A0 */

loc_0024E590: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDDCC) = eax;
    PUSH32(esp, 0x0024E5A1u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E5A1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E5A7u); RECOMP_ABI_CALL(0x002975A0u, sub_002975A0); /* call 0x002975A0 */

loc_0024E5A7: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDDD0) = eax;
    PUSH32(esp, 0x0024E5B8u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E5B8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E5BEu); RECOMP_ABI_CALL(0x002975A0u, sub_002975A0); /* call 0x002975A0 */

loc_0024E5BE: ;
    MEM32(0x5BDDD4) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E5CEu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E5CE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E5D4u); RECOMP_ABI_CALL(0x002972C0u, sub_002972C0); /* call 0x002972C0 */

loc_0024E5D4: ;
    ecx = MEM32(0x46A680);
    MEM32(0x5BDDD8) = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024E5E5u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E5E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E5EBu); RECOMP_ABI_CALL(0x00295A60u, sub_00295A60); /* call 0x00295A60 */

loc_0024E5EB: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDDDC) = eax;
    PUSH32(esp, 0x0024E5FCu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E5FC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E602u); RECOMP_ABI_CALL(0x00295A60u, sub_00295A60); /* call 0x00295A60 */

loc_0024E602: ;
    MEM32(0x5BDDE0) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E612u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E612: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E618u); RECOMP_ABI_CALL(0x002958A0u, sub_002958A0); /* call 0x002958A0 */

loc_0024E618: ;
    ecx = MEM32(0x46A680);
    esp = esp + 0x40;
    PUSH32(esp, ecx);
    MEM32(0x5BDDE4) = eax;
    PUSH32(esp, 0x0024E62Cu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E62C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E632u); RECOMP_ABI_CALL(0x002958A0u, sub_002958A0); /* call 0x002958A0 */

loc_0024E632: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDDE8) = eax;
    PUSH32(esp, 0x0024E643u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E643: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E649u); RECOMP_ABI_CALL(0x00295770u, sub_00295770); /* call 0x00295770 */

loc_0024E649: ;
    MEM32(0x5BDDEC) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E659u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E659: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E65Fu); RECOMP_ABI_CALL(0x00295770u, sub_00295770); /* call 0x00295770 */

loc_0024E65F: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDDF0) = eax;
    PUSH32(esp, 0x0024E670u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E670: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E676u); RECOMP_ABI_CALL(0x00297AF0u, sub_00297AF0); /* call 0x00297AF0 */

loc_0024E676: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    MEM32(0x5BDDC0) = eax;
    PUSH32(esp, 0x0024E687u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E687: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E68Du); RECOMP_ABI_CALL(0x00297AC0u, sub_00297AC0); /* call 0x00297AC0 */

loc_0024E68D: ;
    MEM32(0x5BDDC4) = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E69Du); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E69D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E6A3u); RECOMP_ABI_CALL(0x00297AC0u, sub_00297AC0); /* call 0x00297AC0 */

loc_0024E6A3: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    MEM32(0x5BDDF4) = eax;
    PUSH32(esp, 0x0024E6B4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0024E6B4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024E6BAu); RECOMP_ABI_CALL(0x002A0870u, sub_002A0870); /* call 0x002A0870 */

loc_0024E6BA: ;
    esp = esp + 0x38;
    MEM32(0x5BDD9C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0024E6D0
 * Original: 0x0024E6D0 - 0x0024E711 (65 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024E6D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0024E6DEu); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_0024E6DE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024E6F3; /* jne: not equal / not zero */

loc_0024E6E2: ;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x70); PUSH32(esp, 0x0024E6ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E6EC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x6C); PUSH32(esp, 0x0024E6F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E6F2: ;
    POP32(esp, edi);

loc_0024E6F3: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0024E6FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E6FC: ;
    ecx = eax;
    PUSH32(esp, 0x0024E703u); RECOMP_ABI_CALL(0x001EA440u, sub_001EA440); /* call 0x001EA440 */

loc_0024E703: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0024E70E; /* jne: not equal / not zero */

loc_0024E709: ;
    PUSH32(esp, 0x0024E70Eu); RECOMP_ABI_CALL(0x0024E4B0u, sub_0024E4B0); /* call 0x0024E4B0 */

loc_0024E70E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024E720
 * Original: 0x0024E720 - 0x0024E82B (267 bytes, 94 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E720(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024E720: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(edi + 0x20) = eax;
    MEM32(edi + 0x24) = eax;
    MEM32(edi + 0x28) = eax;
    MEM32(edi + 0x2C) = eax;
    edx = MEM32(ecx + 8);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_0024E824; /* jbe: below or equal (unsigned <=) */

loc_0024E74D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);

loc_0024E750: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, 0x0024E75Au); RECOMP_ABI_CALL(0x00200F40u, sub_00200F40); /* call 0x00200F40 */

loc_0024E75A: ;
    edx = MEM32(0x5BC25C);
    esi = eax;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0024E76Au); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0024E76A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0024E80C; /* je: equal / zero */

loc_0024E772: ;
    esi = MEM32(esi + 0x18);
    eax = MEM32(0x5BD898);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024E782u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0024E782: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0024E80C; /* je: equal / zero */

loc_0024E78A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0024E791u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E791: ;
    ebp = eax;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x24) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0024E79Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E79E: ;
    ecx = MEM32(0x5BD89C);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x1C) = eax;
    ebx = edx;
    PUSH32(esp, 0x0024E7B2u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0024E7B2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0024E7DC; /* je: equal / zero */

loc_0024E7B6: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x0024E7C0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E7C0: ;
    ecx = MEM32(esp + 0x24);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0024E7E0; /* jl: less (signed <) */

loc_0024E7CC: ;
    if (CMP_G(_fas, _fbs)) goto loc_0024E7D4; /* jg: greater (signed >) */

loc_0024E7CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0024E7E0; /* jbe: below or equal (unsigned <=) */

loc_0024E7D4: ;
    MEM32(esp + 0x18) = eax;
    ebx = edx;
    goto loc_0024E7E0;

loc_0024E7DC: ;
    ecx = MEM32(esp + 0x24);

loc_0024E7E0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x24) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0024E7F2; /* jg: greater (signed >) */

loc_0024E7E5: ;
    if (CMP_L(_fas, _fbs)) goto loc_0024E7EC; /* jl: less (signed <) */

loc_0024E7E7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi + 0x20) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0024E7F2; /* jae: above or equal (unsigned >=) */

loc_0024E7EC: ;
    MEM32(edi + 0x20) = ebp;
    MEM32(edi + 0x24) = ecx;

loc_0024E7F2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x2C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0024E80C; /* jl: less (signed <) */

loc_0024E7F7: ;
    if (CMP_G(_fas, _fbs)) goto loc_0024E802; /* jg: greater (signed >) */

loc_0024E7F9: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x28) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0024E80C; /* jbe: below or equal (unsigned <=) */

loc_0024E802: ;
    ecx = MEM32(esp + 0x18);
    MEM32(edi + 0x28) = ecx;
    MEM32(edi + 0x2C) = ebx;

loc_0024E80C: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_0024E750; /* jb: below (unsigned <) */

loc_0024E821: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0024E824: ;
    POP32(esp, edi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024E830
 * Original: 0x0024E830 - 0x0024E87B (75 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024E830: ;
    eax = MEM32(0x46DABC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E87A; /* jne: not equal / not zero */

loc_0024E83A: ;
    eax = MEM32(0x5BC508);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x38);
    PUSH32(esp, 1);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x46DABC);
    PUSH32(esp, 0x3FEDD8);
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x0024E85Du); RECOMP_ABI_CALL(0x00230B50u, sub_00230B50); /* call 0x00230B50 */

loc_0024E85D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5BDEC4);
    PUSH32(esp, 0x3FEDC0);
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x0024E874u); RECOMP_ABI_CALL(0x002311C0u, sub_002311C0); /* call 0x002311C0 */

loc_0024E874: ;
    eax = MEM32(0x46DABC);
    POP32(esp, esi);

loc_0024E87A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024E880
 * Original: 0x0024E880 - 0x0024E8AF (47 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024E880: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0024E88Eu); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_0024E88E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024E8A3; /* jne: not equal / not zero */

loc_0024E892: ;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x70); PUSH32(esp, 0x0024E89Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E89C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x6C); PUSH32(esp, 0x0024E8A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E8A2: ;
    POP32(esp, edi);

loc_0024E8A3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x0024E8AAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E8AA: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024E8B0
 * Original: 0x0024E8B0 - 0x0024E8BA (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E8B0(void)
{

loc_0024E8B0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x22) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024E8C0
 * Original: 0x0024E8C0 - 0x0024E8C4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E8C0(void)
{

loc_0024E8C0: ;
    SET_LO8(eax, MEM8(ecx + 0x22));
    esp += 4; return; /* ret */

}

/**
 * sub_0024E8D0
 * Original: 0x0024E8D0 - 0x0024E8D5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E8D0(void)
{

loc_0024E8D0: ;
    MEM8(ecx + 0x21) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0024E8E0
 * Original: 0x0024E8E0 - 0x0024E8F8 (24 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E8E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024E8E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E8F5; /* je: equal / zero */

loc_0024E8E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ecx + 0x14) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0024E8F5; /* jne: not equal / not zero */

loc_0024E8F0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0024E8F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E8F5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024E900
 * Original: 0x0024E900 - 0x0024E93B (59 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E900(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024E900: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = ecx;
    MEM32(esp + 0x10) = edi;

loc_0024E915: ;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x0024E922u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E922: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E92B; /* je: equal / zero */

loc_0024E927: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E933; /* je: equal / zero */

loc_0024E92B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E915; /* jne: not equal / not zero */

loc_0024E931: ;
    eax = eax | eax;

loc_0024E933: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024E940
 * Original: 0x0024E940 - 0x0024E96E (46 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024E940: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = ecx;
    MEM32(esp + 0xC) = ebx;

loc_0024E950: ;
    eax = MEM32(esi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x0024E95Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E95D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E965; /* je: equal / zero */

loc_0024E962: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0024E950;

loc_0024E965: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024E970
 * Original: 0x0024E970 - 0x0024E99C (44 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024E970: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024E996; /* je: equal / zero */

loc_0024E979: ;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0024E97Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E97F: ;
    edx = MEM32(esi);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0024E988u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024E988: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0024E996; /* jne: not equal / not zero */

loc_0024E98D: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0024E996: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024E9A0
 * Original: 0x0024E9A0 - 0x0024EA07 (103 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E9A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0024E9A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0024E9C2; /* je: equal / zero */

loc_0024E9AD: ;
    eax = MEM32(0x5BD8F0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024E9BAu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0024E9BA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0024E9C2; /* je: equal / zero */

loc_0024E9BE: ;
    eax = esi;
    goto loc_0024E9C4;

loc_0024E9C2: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_0024E9C4: ;
    esi = MEM32(eax + 8);
    eax = MEM32(edi + 8);
    /* nop */

loc_0024E9D0: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024E9FC; /* jne: not equal / not zero */

loc_0024E9DA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0024E9F4; /* je: equal / zero */

loc_0024E9DE: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024E9FC; /* jne: not equal / not zero */

loc_0024E9EA: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0024E9D0; /* jne: not equal / not zero */

loc_0024E9F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0024E9FC: ;
    POP32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, esi);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024EA10
 * Original: 0x0024EA10 - 0x0024EB15 (261 bytes, 95 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EA10(void)
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

loc_0024EA10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(esi + 0x40);
    MEM32(esp + 8) = eax;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    if (TEST_S(_fas, _fbs)) goto loc_0024EA66; /* jl: less (signed <) */

loc_0024EA2B: ;
    if (CMP_G(_fas & _fbs, 0)) goto loc_0024EA31; /* jg: greater (signed >) */

loc_0024EA2D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0024EA66; /* jbe: below or equal (unsigned <=) */

loc_0024EA31: ;
    edx = MEM32(ebx);
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(eax) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0024EA48u); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_0024EA48: ;
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(0x3FEDBC); /* fmul dword ptr [0x3fedbc] */
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    PUSH32(esp, 0x0024EA62u); RECOMP_ABI_CALL(0x00341916u, sub_00341916); /* call 0x00341916 */

loc_0024EA62: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_0024EA66: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0024EA8C; /* jp: parity */

loc_0024EA78: ;
    edx = MEM32(esi + 0x48);
    edi = MEM32(esp + 0x18);
    MEM32(edi) = edx;
    eax = MEM32(esi + 0x4C);
    edx = MEM32(esp + 0x20);
    MEM32(edx) = eax;
    goto loc_0024EAB3;

loc_0024EA8C: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() / MEMF(esi + 0x28); /* fdiv dword ptr [esi + 0x28] */
    PUSH32(esp, 0x0024EA98u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0024EA98: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edi = MEM32(esp + 0x18);
    MEM32(edi) = eax;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    PUSH32(esp, 0x0024EAAAu); RECOMP_ABI_CALL(0x00341916u, sub_00341916); /* call 0x00341916 */

loc_0024EAAA: ;
    fp_top() = fp_top() / MEMF(esi + 0x28); /* fdiv dword ptr [esi + 0x28] */
    edx = MEM32(esp + 0x20);
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */

loc_0024EAB3: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0024EAC0; /* jge: greater or equal (signed >=) */

loc_0024EAB9: ;
    ecx = MEM32(esi + 0x14);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    MEM32(edi) = ecx;

loc_0024EAC0: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ecx = MEM32(esp + 0x1C);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = MEM32(edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0024EAE7; /* jne: not equal / not zero */

loc_0024EAD7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0024EAF2; /* jl: less (signed <) */

loc_0024EADF: ;
    MEM32(ecx) = 0;
    goto loc_0024EAF2;

loc_0024EAE7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    if ((_fas >= 0)) goto loc_0024EAF2; /* jns: not sign (positive) */

loc_0024EAEC: ;
    eax = MEM32(esi + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;

loc_0024EAF2: ;
    ecx = MEM32(ebx);
    MEM32(esi + 0x40) = ecx;
    eax = MEM32(ebx + 4);
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x38) = ecx;
    eax = MEM32(edi);
    MEM32(esi + 0x48) = eax;
    ecx = MEM32(edx);
    POP32(esp, edi);
    MEM32(esi + 0x4C) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0024EB20
 * Original: 0x0024EB20 - 0x0024EB56 (54 bytes, 19 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0024EB20(void)
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

loc_0024EB20: ;
    ecx = MEM32(esp + 4);
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0024EB3F; /* jp: parity */

loc_0024EB36: ;
    eax = 0; /* xor self */
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    esp += 4; return; /* ret */

loc_0024EB3F: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(ecx + 8); /* fdiv dword ptr [ecx + 8] */
    MEMF(ecx + 0x28) = (float)fp_top(); /* fst */
    fp_push((double)SMEM32(ecx + 0x14)); /* fild */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(ecx + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0024EB60
 * Original: 0x0024EB60 - 0x0024EB8C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EB60(void)
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

loc_0024EB60: ;
    eax = MEM32(0x5BD8D0);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EB88; /* jne: not equal / not zero */

loc_0024EB6E: ;
    fp_push(MEMD(esi + 0x20)); /* fld double */
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(esi + 0x28)); /* fld double */
    fp_top() = fp_top() * MEMD(0x3DA5F0); /* fmul qword ptr [0x3da5f0] */
    PUSH32(esp, 0x0024EB82u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0024EB82: ;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = edx;

loc_0024EB88: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0024EB90
 * Original: 0x0024EB90 - 0x0024EBD4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EB90(void)
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

loc_0024EB90: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x0024EBA2u); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_0024EBA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0024EBB4; /* jge: greater or equal (signed >=) */

loc_0024EBAE: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0024EBB4: ;
    fp_top() = fp_top() * MEMF(esi + 0x30); /* fmul dword ptr [esi + 0x30] */
    PUSH32(esp, 0x0024EBBCu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0024EBBC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024EBCAu); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_0024EBCA: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(esi + 0x38))) >> 32) & 1);
    eax = eax + MEM32(esi + 0x38);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(esi + 0x3C)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0024EBE0
 * Original: 0x0024EBE0 - 0x0024EC13 (51 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EBE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024EBE0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0024EBEEu); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_0024EBEE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024EC0E; /* jne: not equal / not zero */

loc_0024EBF2: ;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x70); PUSH32(esp, 0x0024EBFCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024EBFC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x6C); PUSH32(esp, 0x0024EC02u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024EC02: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x0024EC0Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024EC0D: ;
    POP32(esp, edi);

loc_0024EC0E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024EC20
 * Original: 0x0024EC20 - 0x0024EC9D (125 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EC20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024EC20: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x0024EC30u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024EC30: ;
    ebx = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0024EC94; /* jle: less or equal (signed <=) */

loc_0024EC38: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x54);
    /* nop */

loc_0024EC40: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0024EC49u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0024EC49: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0024EC59u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024EC59: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024EC64u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0024EC64: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0024EC74u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024EC74: ;
    ecx = MEM32(0x5BC9D0);
    MEM32(esi + 0x2C) = ecx;
    edx = MEM32(0x5BC9D4);
    MEM32(esi + 0x30) = edx;
    eax = MEM32(0x5BC9D8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0x34) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0024EC40; /* jl: less (signed <) */

loc_0024EC93: ;
    POP32(esp, ebp);

loc_0024EC94: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024ECA0
 * Original: 0x0024ECA0 - 0x0024ED4E (174 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024ECA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024ECA0: ;
    eax = MEM32(0x5BDFA8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_0024ECF4; /* jne: not equal / not zero */

loc_0024ECB8: ;
    ecx = MEM32(0x5BDFAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024ECF4; /* jne: not equal / not zero */

loc_0024ECC2: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BDFA0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x5BDFA0) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024ECF8; /* jne: not equal / not zero */

loc_0024ECCE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BDFA4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(0x5BDFA4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024ECF8; /* jne: not equal / not zero */

loc_0024ECD6: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(0x5BDF98);
    ecx = MEM32(0x5BDF9C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x5BDF90);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0024ECF4: ;
    eax = MEM32(esp + 0x18);

loc_0024ECF8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(0x5BDFA8) = esi;
    MEM32(0x5BDFAC) = edi;
    MEM32(0x5BDFA0) = eax;
    MEM32(0x5BDFA4) = ebp;
    PUSH32(esp, 0x0024ED19u); RECOMP_ABI_CALL(0x003436B0u, sub_003436B0); /* call 0x003436B0 */

loc_0024ED19: ;
    ebx = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0024ED28u); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_0024ED28: ;
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    eax = MEM32(esp + 0x24);
    { uint64_t _t = (uint64_t)(edi) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* sbb */
    MEM32(eax) = esi;
    MEM32(eax + 4) = edi;
    MEM32(0x5BDF90) = ebx;
    eax = ebx;
    POP32(esp, ebx);
    MEM32(0x5BDF9C) = edi;
    POP32(esp, edi);
    MEM32(0x5BDF98) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0024ED50
 * Original: 0x0024ED50 - 0x0024EDE0 (144 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024ED50(void)
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

loc_0024ED50: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xE8); PUSH32(esp, 0x0024ED5Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024ED5B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024EDDE; /* je: equal / zero */

loc_0024ED5F: ;
    edx = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0024ED6Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024ED6B: ;
    ebp = eax + -1;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0024EDDC; /* jle: less or equal (signed <=) */

loc_0024ED74: ;
    PUSH32(esp, esi);

loc_0024ED75: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x0024ED80u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024ED80: ;
    edx = MEM32(edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    esi = eax;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x0024ED8Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024ED8E: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    ecx = eax;
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 4); /* fmul dword ptr [ecx + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0xC); /* fmul dword ptr [ecx + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fp_top() * MEMF(esi); /* fmul dword ptr [esi] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3FEDEC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3fedec] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0024EDD7; /* jp: parity */

loc_0024EDB9: ;
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

loc_0024EDD7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024ED75; /* jl: less (signed <) */

loc_0024EDDB: ;
    POP32(esp, esi);

loc_0024EDDC: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0024EDDE: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0024EDE0
 * Original: 0x0024EDE0 - 0x0024EE80 (160 bytes, 84 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EDE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024EDE0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(ecx + 0x48)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x48), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0024EE0B; /* je: equal / zero */

loc_0024EDE9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0024EE0B; /* ja: above (unsigned >) */

loc_0024EDEF: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x24EE14); /* switch: 8 entries, 4 targets */
    if (_jt == 0x0024EDF6u) goto loc_0024EDF6;
    if (_jt == 0x0024EDFDu) goto loc_0024EDFD;
    if (_jt == 0x0024EE04u) goto loc_0024EE04;
    if (_jt == 0x0024EE0Bu) goto loc_0024EE0B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0024EDF6: ;
    eax = ZX8(MEM8(ecx + 0x49));
    esp += 8; return; /* ret 4 */

loc_0024EDFD: ;
    eax = ZX8(MEM8(ecx + 0x4A));
    esp += 8; return; /* ret 4 */

loc_0024EE04: ;
    eax = ZX8(MEM8(ecx + 0x4B));
    esp += 8; return; /* ret 4 */

loc_0024EE0B: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0024EE64; /* je: equal / zero */

loc_0024EE55: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x0024EE60u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024EE60: ;
    edi = eax;
    ebx = edx;

loc_0024EE64: ;
    eax = MEM32(esi + 0x50);
    edx = MEM32(esi + 0x54);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    POP32(esp, edi);
    POP32(esp, esi);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ebx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024EE40
 * Original: 0x0024EE40 - 0x0024EE80 (64 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0024EE40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x0024EE51u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024EE51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0024EE64; /* je: equal / zero */

loc_0024EE55: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x0024EE60u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024EE60: ;
    edi = eax;
    ebx = edx;

loc_0024EE64: ;
    eax = MEM32(esi + 0x50);
    edx = MEM32(esi + 0x54);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    POP32(esp, edi);
    POP32(esp, esi);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ebx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024EE80
 * Original: 0x0024EE80 - 0x0024EEB8 (56 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0024EE80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x0024EE91u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024EE91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0024EEAA; /* je: equal / zero */

loc_0024EE95: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0024EE9Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024EE9C: ;
    ecx = MEM32(esi + 0x58);
    edi = eax;
    eax = MEM32(esi + 0x5C);
    ebx = edx;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    { uint64_t _t = (uint64_t)(ebx) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* adc */

loc_0024EEAA: ;
    eax = MEM32(esi + 0x50);
    edx = MEM32(esi + 0x54);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    POP32(esp, edi);
    POP32(esp, esi);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ebx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024EEC0
 * Original: 0x0024EEC0 - 0x0024EEE2 (34 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EEC0(void)
{

loc_0024EEC0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = ecx + 0x28;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0024EEDFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024EEDF: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0024EEF0
 * Original: 0x0024EEF0 - 0x0024EF0D (29 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EEF0(void)
{

loc_0024EEF0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = ecx + 0x28;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0024EF0Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024EF0A: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0024EF10
 * Original: 0x0024EF10 - 0x0024EFA4 (148 bytes, 61 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0024EF10: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ecx = MEM32(esp + 8);
    if (TEST_Z(_fa, _fb)) goto loc_0024EF26; /* je: equal / zero */

loc_0024EF1C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0024EF26; /* jne: not equal / not zero */

loc_0024EF21: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

loc_0024EF26: ;
    edx = eax;
    if (1) _cf = (int)(((edx) >> ((1) - 1)) & 1);
    edx = edx >> 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0024EF38; /* je: equal / zero */

loc_0024EF2F: ;
    edx = ecx;
    if (1) _cf = (int)(((edx) >> ((1) - 1)) & 1);
    edx = edx >> 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0024EF21; /* je: equal / zero */

loc_0024EF38: ;
    edx = eax;
    if (2) _cf = (int)(((edx) >> ((2) - 1)) & 1);
    edx = edx >> 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0024EF4C; /* je: equal / zero */

loc_0024EF42: ;
    edx = ecx;
    if (2) _cf = (int)(((edx) >> ((2) - 1)) & 1);
    edx = edx >> 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0024EF21; /* je: equal / zero */

loc_0024EF4C: ;
    PUSH32(esp, ebx);
    edx = eax;
    ebx = ecx;
    if (0x14) _cf = (int)(((edx) >> ((0x14) - 1)) & 1);
    edx = edx >> 0x14;
    if (0x14) _cf = (int)(((ebx) >> ((0x14) - 1)) & 1);
    ebx = ebx >> 0x14;
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 3);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ebx, LO8(ebx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0024EF67; /* jbe: below or equal (unsigned <=) */

loc_0024EF61: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0024EF67: ;
    edx = eax;
    ebx = ecx;
    if (4) _cf = (int)(((edx) >> ((4) - 1)) & 1);
    edx = edx >> 4;
    if (4) _cf = (int)(((ebx) >> ((4) - 1)) & 1);
    ebx = ebx >> 4;
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 0xF);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ebx, LO8(ebx) & 0xF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0024EF61; /* ja: above (unsigned >) */

loc_0024EF7B: ;
    edx = eax;
    ebx = ecx;
    if (8) _cf = (int)(((edx) >> ((8) - 1)) & 1);
    edx = edx >> 8;
    if (8) _cf = (int)(((ebx) >> ((8) - 1)) & 1);
    ebx = ebx >> 8;
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 0xF);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ebx, LO8(ebx) & 0xF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0024EF61; /* ja: above (unsigned >) */

loc_0024EF8F: ;
    if (0x10) _cf = (int)(((eax) >> ((0x10) - 1)) & 1);
    eax = eax >> 0x10;
    if (0x10) _cf = (int)(((ecx) >> ((0x10) - 1)) & 1);
    ecx = ecx >> 0x10;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xF);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0xF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024EFB0
 * Original: 0x0024EFB0 - 0x0024EFD4 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EFB0(void)
{

loc_0024EFB0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024EFCEu); RECOMP_ABI_CALL(0x001BAFE0u, sub_001BAFE0); /* call 0x001BAFE0 */

loc_0024EFCE: ;
    esp = esp + 0x14;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0024EFE0
 * Original: 0x0024EFE0 - 0x0024F50D (1325 bytes, 424 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EFE0(void)
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

loc_0024EFE0: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD3EC);
    edx = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BD3F0);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0024EFFEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024EFFE: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0024F09C; /* je: equal / zero */

loc_0024F00C: ;
    eax = MEM32(esi);
    ecx = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x0024F019u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F019: ;
    edx = MEM32(edi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0024F026u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F026: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024F325; /* jnp: not parity */

loc_0024F039: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F34C; /* je: equal / zero */

loc_0024F04C: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024F325; /* jnp: not parity */

loc_0024F05F: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F34C; /* je: equal / zero */

loc_0024F072: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024F325; /* jnp: not parity */

loc_0024F085: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F34C; /* je: equal / zero */

loc_0024F098: ;
    eax = MEM32(esp + 0x10);

loc_0024F09C: ;
    ecx = eax;
    ecx = ecx >> 1;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F13F; /* je: equal / zero */

loc_0024F0A9: ;
    edx = MEM32(esi);
    eax = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0024F0B9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F0B9: ;
    edx = MEM32(edi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0024F0C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F0C9: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024F325; /* jnp: not parity */

loc_0024F0DC: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F34C; /* je: equal / zero */

loc_0024F0EF: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024F325; /* jnp: not parity */

loc_0024F102: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F34C; /* je: equal / zero */

loc_0024F115: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024F325; /* jnp: not parity */

loc_0024F128: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F34C; /* je: equal / zero */

loc_0024F13B: ;
    eax = MEM32(esp + 0x10);

loc_0024F13F: ;
    ecx = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F177; /* je: equal / zero */

loc_0024F149: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x0024F154u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F154: ;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x0024F163u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F163: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0024F325; /* jb: below (unsigned <) */

loc_0024F16D: ;
    if (CMP_A(_fa, _fb)) goto loc_0024F332; /* ja: above (unsigned >) */

loc_0024F173: ;
    eax = MEM32(esp + 0x10);

loc_0024F177: ;
    ecx = eax;
    ecx = ecx >> 4;
    ecx = ecx & 0xF;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x14) = 0;
    if (0) goto loc_0024F1ED; /* jbe: below or equal (unsigned <=) */

loc_0024F18D: ;
    /* nop */

loc_0024F190: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x0024F1A0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F1A0: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x0024F1B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F1B4: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024F323; /* jnp: not parity */

loc_0024F1C5: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F332; /* je: equal / zero */

loc_0024F1D8: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0024F190; /* jb: below (unsigned <) */

loc_0024F1E9: ;
    eax = MEM32(esp + 0x10);

loc_0024F1ED: ;
    ecx = eax;
    ecx = ecx >> 8;
    ecx = ecx & 0xF;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x14) = 0;
    if (0) goto loc_0024F256; /* jbe: below or equal (unsigned <=) */

loc_0024F203: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0024F213u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F213: ;
    edx = MEM32(edi);
    ecx = ZX8(LO8(eax));
    eax = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0024F22Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F22A: ;
    ecx = MEM32(esp + 0x18);
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0024F325; /* jb: below (unsigned <) */

loc_0024F239: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0024F332; /* ja: above (unsigned >) */

loc_0024F241: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0024F203; /* jb: below (unsigned <) */

loc_0024F252: ;
    eax = MEM32(esp + 0x10);

loc_0024F256: ;
    ecx = eax;
    ecx = ecx >> 0x10;
    ecx = ecx & 0xF;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x14) = 0;
    if (0) goto loc_0024F2EF; /* jbe: below or equal (unsigned <=) */

loc_0024F270: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x0024F285u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F285: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(edi);
    eax = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x0024F29Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F29A: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024F325; /* jnp: not parity */

loc_0024F2AD: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F332; /* je: equal / zero */

loc_0024F2BC: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024F325; /* jnp: not parity */

loc_0024F2CB: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F332; /* je: equal / zero */

loc_0024F2DA: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0024F270; /* jb: below (unsigned <) */

loc_0024F2EB: ;
    eax = MEM32(esp + 0x10);

loc_0024F2EF: ;
    ecx = eax;
    ecx = ecx >> 0x14;
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F359; /* jne: not equal / not zero */

loc_0024F2FC: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x0024F307u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F307: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x0024F316u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F316: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0024F33D; /* jp: parity */

loc_0024F323: ;
    fp_pop(); /* fstp st(0) */

loc_0024F325: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_0024F332: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_0024F33D: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024F3BE; /* jne: not equal / not zero */

loc_0024F34C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_0024F359: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F3C2; /* jne: not equal / not zero */

loc_0024F35E: ;
    edx = MEM32(esi);
    eax = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x0024F36Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F36E: ;
    edx = MEM32(edi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x0024F37Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F37E: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024F325; /* jnp: not parity */

loc_0024F38D: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F34C; /* je: equal / zero */

loc_0024F39C: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024F325; /* jnp: not parity */

loc_0024F3AF: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F34C; /* je: equal / zero */

loc_0024F3BE: ;
    eax = MEM32(esp + 0x10);

loc_0024F3C2: ;
    ecx = eax;
    ecx = ecx >> 0x17;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F466; /* je: equal / zero */

loc_0024F3D0: ;
    edx = MEM32(esi);
    eax = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x98); PUSH32(esp, 0x0024F3E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F3E0: ;
    edx = MEM32(edi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x98); PUSH32(esp, 0x0024F3F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F3F0: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024F325; /* jnp: not parity */

loc_0024F403: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F34C; /* je: equal / zero */

loc_0024F416: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024F325; /* jnp: not parity */

loc_0024F429: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F34C; /* je: equal / zero */

loc_0024F43C: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024F325; /* jnp: not parity */

loc_0024F44F: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F34C; /* je: equal / zero */

loc_0024F462: ;
    eax = MEM32(esp + 0x10);

loc_0024F466: ;
    eax = eax >> 0x16;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F503; /* je: equal / zero */

loc_0024F471: ;
    edx = MEM32(esi);
    eax = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0024F481u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F481: ;
    edx = MEM32(edi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0024F491u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F491: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024F325; /* jnp: not parity */

loc_0024F4A4: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F34C; /* je: equal / zero */

loc_0024F4B7: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024F325; /* jnp: not parity */

loc_0024F4CA: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F34C; /* je: equal / zero */

loc_0024F4DD: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024F325; /* jnp: not parity */

loc_0024F4F0: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F34C; /* je: equal / zero */

loc_0024F503: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
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
 * sub_0024F510
 * Original: 0x0024F510 - 0x0024F560 (80 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F510: ;
    eax = MEM32(0x5BDED4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F555; /* je: equal / zero */

loc_0024F519: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    /* nop */

loc_0024F520: ;
    ecx = MEM32(esi + eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F540; /* je: equal / zero */

loc_0024F527: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0024F540; /* jne: not equal / not zero */

loc_0024F536: ;
    PUSH32(esp, 0x0024F53Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0024F53B: ;
    eax = MEM32(0x5BDED4);

loc_0024F540: ;
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9C1C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024F520; /* jl: less (signed <) */

loc_0024F54B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024F551u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_0024F551: ;
    esp = esp + 4;
    POP32(esp, esi);

loc_0024F555: ;
    MEM32(0x5BDED4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0024F560
 * Original: 0x0024F560 - 0x0024F580 (32 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F560(void)
{

loc_0024F560: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0024F56Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F56F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024F580
 * Original: 0x0024F580 - 0x0024F61B (155 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F580(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0024F580: ;
    esp = esp - 0x3C;
    edx = MEM32(esp + 0x48);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x48);
    eax = MEM32(esi);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x0024F599u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F599: ;
    edx = MEM32(esp + 0x50);
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x0024F5AAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F5AA: ;
    edx = MEM32(esp + 0x54);
    eax = MEM32(esi);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x0024F5BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F5BB: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 4); /* fsub dword ptr [esp + 4] */
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    ecx = MEM32(esp + 0x4C);
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x14); /* fsub dword ptr [esp + 0x14] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0xC); /* fsub dword ptr [esp + 0xc] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x14); /* fsub dword ptr [esp + 0x14] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0024F616u); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_0024F616: ;
    POP32(esp, esi);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0024F620
 * Original: 0x0024F620 - 0x0024F6F5 (213 bytes, 83 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F620(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024F620: ;
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = MEM32(esi + 0x10);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x18) = ebp;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0024F6D7; /* jle: less or equal (signed <=) */

loc_0024F642: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 2;
    goto loc_0024F652;

loc_0024F64E: ;
    ebp = MEM32(esp + 0x20);

loc_0024F652: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x0024F65Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F65D: ;
    edx = MEM32(esi);
    edi = eax;
    ebp = ebp + 2;
    eax = ebp + -1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0024F670u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F670: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    ebx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0024F67Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F67D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    ebp = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024F6B9; /* je: equal / zero */

loc_0024F683: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F6B9; /* je: equal / zero */

loc_0024F687: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F6B9; /* je: equal / zero */

loc_0024F68B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ecx = edi + -2;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x0024F69Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F69B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = edi + -1;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0024F6A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F6A7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0024F6B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F6B0: ;
    edi = edi + 3;
    MEM32(esp + 0x14) = edi;
    goto loc_0024F6BE;

loc_0024F6B9: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 3;

loc_0024F6BE: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x18);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0024F64E; /* jl: less (signed <) */

loc_0024F6D5: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0024F6D7: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x18);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0024F6EDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F6ED: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024F700
 * Original: 0x0024F700 - 0x0024F735 (53 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F700: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F71E; /* je: equal / zero */

loc_0024F709: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0024F71E; /* jne: not equal / not zero */

loc_0024F719: ;
    PUSH32(esp, 0x0024F71Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0024F71E: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024F72Au); RECOMP_ABI_CALL(0x0022AB70u, sub_0022AB70); /* call 0x0022AB70 */

loc_0024F72A: ;
    MEM32(esi) = eax;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024F740
 * Original: 0x0024F740 - 0x0024F775 (53 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F740: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F75E; /* je: equal / zero */

loc_0024F749: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0024F75E; /* jne: not equal / not zero */

loc_0024F759: ;
    PUSH32(esp, 0x0024F75Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0024F75E: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024F76Au); RECOMP_ABI_CALL(0x00234DD0u, sub_00234DD0); /* call 0x00234DD0 */

loc_0024F76A: ;
    MEM32(esi) = eax;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024F780
 * Original: 0x0024F780 - 0x0024F7B5 (53 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F780: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F79E; /* je: equal / zero */

loc_0024F789: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0024F79E; /* jne: not equal / not zero */

loc_0024F799: ;
    PUSH32(esp, 0x0024F79Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0024F79E: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024F7AAu); RECOMP_ABI_CALL(0x00230850u, sub_00230850); /* call 0x00230850 */

loc_0024F7AA: ;
    MEM32(esi) = eax;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024F7C0
 * Original: 0x0024F7C0 - 0x0024F7F5 (53 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F7C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F7DE; /* je: equal / zero */

loc_0024F7C9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0024F7DE; /* jne: not equal / not zero */

loc_0024F7D9: ;
    PUSH32(esp, 0x0024F7DEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0024F7DE: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024F7EAu); RECOMP_ABI_CALL(0x001A5FD0u, sub_001A5FD0); /* call 0x001A5FD0 */

loc_0024F7EA: ;
    MEM32(esi) = eax;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024F800
 * Original: 0x0024F800 - 0x0024F835 (53 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F800: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F81E; /* je: equal / zero */

loc_0024F809: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0024F81E; /* jne: not equal / not zero */

loc_0024F819: ;
    PUSH32(esp, 0x0024F81Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0024F81E: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024F82Au); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_0024F82A: ;
    MEM32(esi) = eax;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024F840
 * Original: 0x0024F840 - 0x0024F896 (86 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F840: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0024F854u); RECOMP_ABI_CALL(0x001E7C80u, sub_001E7C80); /* call 0x001E7C80 */

loc_0024F854: ;
    edi = eax;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F870; /* je: equal / zero */

loc_0024F85B: ;
    eax = MEM32(esi + 0x10);
    ecx = eax + edi * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0024F869u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0024F869: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F88E; /* je: equal / zero */

loc_0024F870: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0024F87F; /* je: equal / zero */

loc_0024F87C: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0024F87F: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024F88Eu); RECOMP_ABI_CALL(0x00200E60u, sub_00200E60); /* call 0x00200E60 */

loc_0024F88E: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024F8A0
 * Original: 0x0024F8A0 - 0x0024F919 (121 bytes, 43 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F8A0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0024F8BDu); RECOMP_ABI_CALL(0x001E7C00u, sub_001E7C00); /* call 0x001E7C00 */

loc_0024F8BD: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0024F908; /* jl: less (signed <) */

loc_0024F8C3: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F8E2; /* je: equal / zero */

loc_0024F8CD: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0024F8E2; /* jne: not equal / not zero */

loc_0024F8DD: ;
    PUSH32(esp, 0x0024F8E2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0024F8E2: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0024F8EAu); RECOMP_ABI_CALL(0x001E7BB0u, sub_001E7BB0); /* call 0x001E7BB0 */

loc_0024F8EA: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0x10);
    eax = MEM32(esp + 0xC);
    MEM32(edx + ecx * 4) = 0;
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0024F908: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(0x46A728);
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0024F920
 * Original: 0x0024F920 - 0x0024F947 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F920: ;
    eax = MEM32(0x5BD884);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F934; /* je: equal / zero */

loc_0024F929: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024F946; /* jne: not equal / not zero */

loc_0024F934: ;
    PUSH32(esp, 0x251A40);
    PUSH32(esp, 0x0024F93Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024F93E: ;
    eax = MEM32(0x5BD884);
    esp = esp + 4;

loc_0024F946: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024F950
 * Original: 0x0024F950 - 0x0024F977 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F950: ;
    eax = MEM32(0x5BD9C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F964; /* je: equal / zero */

loc_0024F959: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024F976; /* jne: not equal / not zero */

loc_0024F964: ;
    PUSH32(esp, 0x275740);
    PUSH32(esp, 0x0024F96Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024F96E: ;
    eax = MEM32(0x5BD9C0);
    esp = esp + 4;

loc_0024F976: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024F980
 * Original: 0x0024F980 - 0x0024F9A7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F980: ;
    eax = MEM32(0x5BD9BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F994; /* je: equal / zero */

loc_0024F989: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024F9A6; /* jne: not equal / not zero */

loc_0024F994: ;
    PUSH32(esp, 0x281420);
    PUSH32(esp, 0x0024F99Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024F99E: ;
    eax = MEM32(0x5BD9BC);
    esp = esp + 4;

loc_0024F9A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024F9B0
 * Original: 0x0024F9B0 - 0x0024F9D7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F9B0: ;
    eax = MEM32(0x5BD9B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F9C4; /* je: equal / zero */

loc_0024F9B9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024F9D6; /* jne: not equal / not zero */

loc_0024F9C4: ;
    PUSH32(esp, 0x27B7C0);
    PUSH32(esp, 0x0024F9CEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024F9CE: ;
    eax = MEM32(0x5BD9B8);
    esp = esp + 4;

loc_0024F9D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024F9E0
 * Original: 0x0024F9E0 - 0x0024FA07 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F9E0: ;
    eax = MEM32(0x5BD9B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024F9F4; /* je: equal / zero */

loc_0024F9E9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FA06; /* jne: not equal / not zero */

loc_0024F9F4: ;
    PUSH32(esp, 0x2813C0);
    PUSH32(esp, 0x0024F9FEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024F9FE: ;
    eax = MEM32(0x5BD9B4);
    esp = esp + 4;

loc_0024FA06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FA10
 * Original: 0x0024FA10 - 0x0024FA37 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FA10: ;
    eax = MEM32(0x5BD888);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FA24; /* je: equal / zero */

loc_0024FA19: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FA36; /* jne: not equal / not zero */

loc_0024FA24: ;
    PUSH32(esp, 0x285B60);
    PUSH32(esp, 0x0024FA2Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FA2E: ;
    eax = MEM32(0x5BD888);
    esp = esp + 4;

loc_0024FA36: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FA40
 * Original: 0x0024FA40 - 0x0024FA88 (72 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FA40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0024FA51u); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_0024FA51: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0024FA64; /* jle: less or equal (signed <=) */

loc_0024FA5C: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024FA64u); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_0024FA64: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0024FA83; /* jge: greater or equal (signed >=) */

loc_0024FA69: ;
    eax = MEM32(esi + 0x10);
    ecx = edi;
    PUSH32(esp, 0x10);
    ecx = ecx << 6;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024FA7Au); RECOMP_ABI_CALL(0x002034C0u, sub_002034C0); /* call 0x002034C0 */

loc_0024FA7A: ;
    esp = esp + 0xC;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = edi;

loc_0024FA83: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024FA90
 * Original: 0x0024FA90 - 0x0024FAB7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FA90: ;
    eax = MEM32(0x5BD97C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FAA4; /* je: equal / zero */

loc_0024FA99: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FAB6; /* jne: not equal / not zero */

loc_0024FAA4: ;
    PUSH32(esp, 0x27B3C0);
    PUSH32(esp, 0x0024FAAEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FAAE: ;
    eax = MEM32(0x5BD97C);
    esp = esp + 4;

loc_0024FAB6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FAC0
 * Original: 0x0024FAC0 - 0x0024FAE7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FAC0: ;
    eax = MEM32(0x5BD978);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FAD4; /* je: equal / zero */

loc_0024FAC9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FAE6; /* jne: not equal / not zero */

loc_0024FAD4: ;
    PUSH32(esp, 0x27B340);
    PUSH32(esp, 0x0024FADEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FADE: ;
    eax = MEM32(0x5BD978);
    esp = esp + 4;

loc_0024FAE6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FAF0
 * Original: 0x0024FAF0 - 0x0024FB17 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FAF0: ;
    eax = MEM32(0x5BD974);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FB04; /* je: equal / zero */

loc_0024FAF9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FB16; /* jne: not equal / not zero */

loc_0024FB04: ;
    PUSH32(esp, 0x274DB0);
    PUSH32(esp, 0x0024FB0Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FB0E: ;
    eax = MEM32(0x5BD974);
    esp = esp + 4;

loc_0024FB16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FB20
 * Original: 0x0024FB20 - 0x0024FB47 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FB20: ;
    eax = MEM32(0x5BD970);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FB34; /* je: equal / zero */

loc_0024FB29: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FB46; /* jne: not equal / not zero */

loc_0024FB34: ;
    PUSH32(esp, 0x274D30);
    PUSH32(esp, 0x0024FB3Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FB3E: ;
    eax = MEM32(0x5BD970);
    esp = esp + 4;

loc_0024FB46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FB50
 * Original: 0x0024FB50 - 0x0024FB77 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FB50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FB50: ;
    eax = MEM32(0x5BD96C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FB64; /* je: equal / zero */

loc_0024FB59: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FB76; /* jne: not equal / not zero */

loc_0024FB64: ;
    PUSH32(esp, 0x274CB0);
    PUSH32(esp, 0x0024FB6Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FB6E: ;
    eax = MEM32(0x5BD96C);
    esp = esp + 4;

loc_0024FB76: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FB80
 * Original: 0x0024FB80 - 0x0024FBA7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FB80: ;
    eax = MEM32(0x5BD968);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FB94; /* je: equal / zero */

loc_0024FB89: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FBA6; /* jne: not equal / not zero */

loc_0024FB94: ;
    PUSH32(esp, 0x274C30);
    PUSH32(esp, 0x0024FB9Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FB9E: ;
    eax = MEM32(0x5BD968);
    esp = esp + 4;

loc_0024FBA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FBB0
 * Original: 0x0024FBB0 - 0x0024FBD7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FBB0: ;
    eax = MEM32(0x5BD964);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FBC4; /* je: equal / zero */

loc_0024FBB9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FBD6; /* jne: not equal / not zero */

loc_0024FBC4: ;
    PUSH32(esp, 0x274BB0);
    PUSH32(esp, 0x0024FBCEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FBCE: ;
    eax = MEM32(0x5BD964);
    esp = esp + 4;

loc_0024FBD6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FBE0
 * Original: 0x0024FBE0 - 0x0024FC07 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FBE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FBE0: ;
    eax = MEM32(0x5BD960);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FBF4; /* je: equal / zero */

loc_0024FBE9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FC06; /* jne: not equal / not zero */

loc_0024FBF4: ;
    PUSH32(esp, 0x274B30);
    PUSH32(esp, 0x0024FBFEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FBFE: ;
    eax = MEM32(0x5BD960);
    esp = esp + 4;

loc_0024FC06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FC10
 * Original: 0x0024FC10 - 0x0024FC37 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FC10: ;
    eax = MEM32(0x5BD95C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FC24; /* je: equal / zero */

loc_0024FC19: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FC36; /* jne: not equal / not zero */

loc_0024FC24: ;
    PUSH32(esp, 0x274AB0);
    PUSH32(esp, 0x0024FC2Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FC2E: ;
    eax = MEM32(0x5BD95C);
    esp = esp + 4;

loc_0024FC36: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FC40
 * Original: 0x0024FC40 - 0x0024FC67 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FC40: ;
    eax = MEM32(0x5BD958);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FC54; /* je: equal / zero */

loc_0024FC49: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FC66; /* jne: not equal / not zero */

loc_0024FC54: ;
    PUSH32(esp, 0x274A30);
    PUSH32(esp, 0x0024FC5Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FC5E: ;
    eax = MEM32(0x5BD958);
    esp = esp + 4;

loc_0024FC66: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FC70
 * Original: 0x0024FC70 - 0x0024FC97 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FC70: ;
    eax = MEM32(0x5BD954);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FC84; /* je: equal / zero */

loc_0024FC79: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FC96; /* jne: not equal / not zero */

loc_0024FC84: ;
    PUSH32(esp, 0x2749B0);
    PUSH32(esp, 0x0024FC8Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FC8E: ;
    eax = MEM32(0x5BD954);
    esp = esp + 4;

loc_0024FC96: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FCA0
 * Original: 0x0024FCA0 - 0x0024FCC7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FCA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FCA0: ;
    eax = MEM32(0x5BD894);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FCB4; /* je: equal / zero */

loc_0024FCA9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FCC6; /* jne: not equal / not zero */

loc_0024FCB4: ;
    PUSH32(esp, 0x251D40);
    PUSH32(esp, 0x0024FCBEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FCBE: ;
    eax = MEM32(0x5BD894);
    esp = esp + 4;

loc_0024FCC6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FCD0
 * Original: 0x0024FCD0 - 0x0024FCF7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FCD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FCD0: ;
    eax = MEM32(0x5BD898);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FCE4; /* je: equal / zero */

loc_0024FCD9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FCF6; /* jne: not equal / not zero */

loc_0024FCE4: ;
    PUSH32(esp, 0x251D80);
    PUSH32(esp, 0x0024FCEEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FCEE: ;
    eax = MEM32(0x5BD898);
    esp = esp + 4;

loc_0024FCF6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FD00
 * Original: 0x0024FD00 - 0x0024FD27 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FD00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FD00: ;
    eax = MEM32(0x5BDAC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FD14; /* je: equal / zero */

loc_0024FD09: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FD26; /* jne: not equal / not zero */

loc_0024FD14: ;
    PUSH32(esp, 0x260840);
    PUSH32(esp, 0x0024FD1Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FD1E: ;
    eax = MEM32(0x5BDAC4);
    esp = esp + 4;

loc_0024FD26: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FD30
 * Original: 0x0024FD30 - 0x0024FD57 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FD30: ;
    eax = MEM32(0x5BD8AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FD44; /* je: equal / zero */

loc_0024FD39: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FD56; /* jne: not equal / not zero */

loc_0024FD44: ;
    PUSH32(esp, 0x2880A0);
    PUSH32(esp, 0x0024FD4Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FD4E: ;
    eax = MEM32(0x5BD8AC);
    esp = esp + 4;

loc_0024FD56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FD60
 * Original: 0x0024FD60 - 0x0024FD87 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FD60: ;
    eax = MEM32(0x5BD8B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FD74; /* je: equal / zero */

loc_0024FD69: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FD86; /* jne: not equal / not zero */

loc_0024FD74: ;
    PUSH32(esp, 0x285BB0);
    PUSH32(esp, 0x0024FD7Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FD7E: ;
    eax = MEM32(0x5BD8B0);
    esp = esp + 4;

loc_0024FD86: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FD90
 * Original: 0x0024FD90 - 0x0024FDB7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FD90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FD90: ;
    eax = MEM32(0x5BD8C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FDA4; /* je: equal / zero */

loc_0024FD99: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FDB6; /* jne: not equal / not zero */

loc_0024FDA4: ;
    PUSH32(esp, 0x285C00);
    PUSH32(esp, 0x0024FDAEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FDAE: ;
    eax = MEM32(0x5BD8C8);
    esp = esp + 4;

loc_0024FDB6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FDC0
 * Original: 0x0024FDC0 - 0x0024FDE7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FDC0: ;
    eax = MEM32(0x5BD8C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FDD4; /* je: equal / zero */

loc_0024FDC9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FDE6; /* jne: not equal / not zero */

loc_0024FDD4: ;
    PUSH32(esp, 0x288190);
    PUSH32(esp, 0x0024FDDEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FDDE: ;
    eax = MEM32(0x5BD8C0);
    esp = esp + 4;

loc_0024FDE6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FDF0
 * Original: 0x0024FDF0 - 0x0024FE17 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FDF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FDF0: ;
    eax = MEM32(0x5BD8BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FE04; /* je: equal / zero */

loc_0024FDF9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FE16; /* jne: not equal / not zero */

loc_0024FE04: ;
    PUSH32(esp, 0x288140);
    PUSH32(esp, 0x0024FE0Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FE0E: ;
    eax = MEM32(0x5BD8BC);
    esp = esp + 4;

loc_0024FE16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FE20
 * Original: 0x0024FE20 - 0x0024FE47 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FE20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FE20: ;
    eax = MEM32(0x5BD8B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FE34; /* je: equal / zero */

loc_0024FE29: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FE46; /* jne: not equal / not zero */

loc_0024FE34: ;
    PUSH32(esp, 0x28C880);
    PUSH32(esp, 0x0024FE3Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FE3E: ;
    eax = MEM32(0x5BD8B8);
    esp = esp + 4;

loc_0024FE46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FE50
 * Original: 0x0024FE50 - 0x0024FE77 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FE50: ;
    eax = MEM32(0x5BD8B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FE64; /* je: equal / zero */

loc_0024FE59: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FE76; /* jne: not equal / not zero */

loc_0024FE64: ;
    PUSH32(esp, 0x2880F0);
    PUSH32(esp, 0x0024FE6Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FE6E: ;
    eax = MEM32(0x5BD8B4);
    esp = esp + 4;

loc_0024FE76: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FE80
 * Original: 0x0024FE80 - 0x0024FEA7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FE80: ;
    eax = MEM32(0x5BD8D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FE94; /* je: equal / zero */

loc_0024FE89: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FEA6; /* jne: not equal / not zero */

loc_0024FE94: ;
    PUSH32(esp, 0x289200);
    PUSH32(esp, 0x0024FE9Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FE9E: ;
    eax = MEM32(0x5BD8D0);
    esp = esp + 4;

loc_0024FEA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FEB0
 * Original: 0x0024FEB0 - 0x0024FED7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FEB0: ;
    eax = MEM32(0x5BD8DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FEC4; /* je: equal / zero */

loc_0024FEB9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FED6; /* jne: not equal / not zero */

loc_0024FEC4: ;
    PUSH32(esp, 0x2746A0);
    PUSH32(esp, 0x0024FECEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FECE: ;
    eax = MEM32(0x5BD8DC);
    esp = esp + 4;

loc_0024FED6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FEE0
 * Original: 0x0024FEE0 - 0x0024FF07 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FEE0: ;
    eax = MEM32(0x5BD8D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FEF4; /* je: equal / zero */

loc_0024FEE9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FF06; /* jne: not equal / not zero */

loc_0024FEF4: ;
    PUSH32(esp, 0x285C50);
    PUSH32(esp, 0x0024FEFEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FEFE: ;
    eax = MEM32(0x5BD8D8);
    esp = esp + 4;

loc_0024FF06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FF10
 * Original: 0x0024FF10 - 0x0024FF37 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FF10: ;
    eax = MEM32(0x5BD8E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FF24; /* je: equal / zero */

loc_0024FF19: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FF36; /* jne: not equal / not zero */

loc_0024FF24: ;
    PUSH32(esp, 0x2746F0);
    PUSH32(esp, 0x0024FF2Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FF2E: ;
    eax = MEM32(0x5BD8E0);
    esp = esp + 4;

loc_0024FF36: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FF40
 * Original: 0x0024FF40 - 0x0024FF67 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FF40: ;
    eax = MEM32(0x5BD8E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FF54; /* je: equal / zero */

loc_0024FF49: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FF66; /* jne: not equal / not zero */

loc_0024FF54: ;
    PUSH32(esp, 0x285CA0);
    PUSH32(esp, 0x0024FF5Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FF5E: ;
    eax = MEM32(0x5BD8E8);
    esp = esp + 4;

loc_0024FF66: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FF70
 * Original: 0x0024FF70 - 0x0024FF97 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FF70: ;
    eax = MEM32(0x5BD98C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FF84; /* je: equal / zero */

loc_0024FF79: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FF96; /* jne: not equal / not zero */

loc_0024FF84: ;
    PUSH32(esp, 0x2535A0);
    PUSH32(esp, 0x0024FF8Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FF8E: ;
    eax = MEM32(0x5BD98C);
    esp = esp + 4;

loc_0024FF96: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FFA0
 * Original: 0x0024FFA0 - 0x0024FFC7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FFA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FFA0: ;
    eax = MEM32(0x5BD8EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FFB4; /* je: equal / zero */

loc_0024FFA9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FFC6; /* jne: not equal / not zero */

loc_0024FFB4: ;
    PUSH32(esp, 0x25F170);
    PUSH32(esp, 0x0024FFBEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FFBE: ;
    eax = MEM32(0x5BD8EC);
    esp = esp + 4;

loc_0024FFC6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FFD0
 * Original: 0x0024FFD0 - 0x0024FFF7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FFD0: ;
    eax = MEM32(0x5BD990);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FFE4; /* je: equal / zero */

loc_0024FFD9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FFF6; /* jne: not equal / not zero */

loc_0024FFE4: ;
    PUSH32(esp, 0x2535E0);
    PUSH32(esp, 0x0024FFEEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0024FFEE: ;
    eax = MEM32(0x5BD990);
    esp = esp + 4;

loc_0024FFF6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250000
 * Original: 0x00250000 - 0x00250027 (39 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250000: ;
    eax = MEM32(0x5BD8F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250014; /* je: equal / zero */

loc_00250009: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250026; /* jne: not equal / not zero */

loc_00250014: ;
    PUSH32(esp, 0x25F1F0);
    PUSH32(esp, 0x0025001Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025001E: ;
    eax = MEM32(0x5BD8F0);
    esp = esp + 4;

loc_00250026: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250030
 * Original: 0x00250030 - 0x00250057 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250030: ;
    eax = MEM32(0x5BDA2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250044; /* je: equal / zero */

loc_00250039: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250056; /* jne: not equal / not zero */

loc_00250044: ;
    PUSH32(esp, 0x281570);
    PUSH32(esp, 0x0025004Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025004E: ;
    eax = MEM32(0x5BDA2C);
    esp = esp + 4;

loc_00250056: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250060
 * Original: 0x00250060 - 0x00250087 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250060: ;
    eax = MEM32(0x5BDB18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250074; /* je: equal / zero */

loc_00250069: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250086; /* jne: not equal / not zero */

loc_00250074: ;
    PUSH32(esp, 0x276970);
    PUSH32(esp, 0x0025007Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025007E: ;
    eax = MEM32(0x5BDB18);
    esp = esp + 4;

loc_00250086: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250090
 * Original: 0x00250090 - 0x002500B7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250090: ;
    eax = MEM32(0x5BDB38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002500A4; /* je: equal / zero */

loc_00250099: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002500B6; /* jne: not equal / not zero */

loc_002500A4: ;
    PUSH32(esp, 0x2863B0);
    PUSH32(esp, 0x002500AEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002500AE: ;
    eax = MEM32(0x5BDB38);
    esp = esp + 4;

loc_002500B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002500C0
 * Original: 0x002500C0 - 0x002500E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002500C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002500C0: ;
    eax = MEM32(0x5BDB34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002500D4; /* je: equal / zero */

loc_002500C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002500E6; /* jne: not equal / not zero */

loc_002500D4: ;
    PUSH32(esp, 0x2887B0);
    PUSH32(esp, 0x002500DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002500DE: ;
    eax = MEM32(0x5BDB34);
    esp = esp + 4;

loc_002500E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002500F0
 * Original: 0x002500F0 - 0x00250117 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002500F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002500F0: ;
    eax = MEM32(0x5BDB30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250104; /* je: equal / zero */

loc_002500F9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250116; /* jne: not equal / not zero */

loc_00250104: ;
    PUSH32(esp, 0x28DF40);
    PUSH32(esp, 0x0025010Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025010E: ;
    eax = MEM32(0x5BDB30);
    esp = esp + 4;

loc_00250116: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250120
 * Original: 0x00250120 - 0x00250147 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250120: ;
    eax = MEM32(0x5BDB2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250134; /* je: equal / zero */

loc_00250129: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250146; /* jne: not equal / not zero */

loc_00250134: ;
    PUSH32(esp, 0x28E5D0);
    PUSH32(esp, 0x0025013Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025013E: ;
    eax = MEM32(0x5BDB2C);
    esp = esp + 4;

loc_00250146: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250150
 * Original: 0x00250150 - 0x00250177 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250150: ;
    eax = MEM32(0x5BDB40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250164; /* je: equal / zero */

loc_00250159: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250176; /* jne: not equal / not zero */

loc_00250164: ;
    PUSH32(esp, 0x281860);
    PUSH32(esp, 0x0025016Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025016E: ;
    eax = MEM32(0x5BDB40);
    esp = esp + 4;

loc_00250176: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250180
 * Original: 0x00250180 - 0x002501A7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250180: ;
    eax = MEM32(0x5BDB3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250194; /* je: equal / zero */

loc_00250189: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002501A6; /* jne: not equal / not zero */

loc_00250194: ;
    PUSH32(esp, 0x287890);
    PUSH32(esp, 0x0025019Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025019E: ;
    eax = MEM32(0x5BDB3C);
    esp = esp + 4;

loc_002501A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002501B0
 * Original: 0x002501B0 - 0x002501D7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002501B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002501B0: ;
    eax = MEM32(0x5BDA90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002501C4; /* je: equal / zero */

loc_002501B9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002501D6; /* jne: not equal / not zero */

loc_002501C4: ;
    PUSH32(esp, 0x286290);
    PUSH32(esp, 0x002501CEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002501CE: ;
    eax = MEM32(0x5BDA90);
    esp = esp + 4;

loc_002501D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002501E0
 * Original: 0x002501E0 - 0x00250207 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002501E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002501E0: ;
    eax = MEM32(0x5BDA8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002501F4; /* je: equal / zero */

loc_002501E9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250206; /* jne: not equal / not zero */

loc_002501F4: ;
    PUSH32(esp, 0x288510);
    PUSH32(esp, 0x002501FEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002501FE: ;
    eax = MEM32(0x5BDA8C);
    esp = esp + 4;

loc_00250206: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250210
 * Original: 0x00250210 - 0x00250237 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250210: ;
    eax = MEM32(0x5BD908);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250224; /* je: equal / zero */

loc_00250219: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250236; /* jne: not equal / not zero */

loc_00250224: ;
    PUSH32(esp, 0x281200);
    PUSH32(esp, 0x0025022Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025022E: ;
    eax = MEM32(0x5BD908);
    esp = esp + 4;

loc_00250236: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250240
 * Original: 0x00250240 - 0x00250267 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250240: ;
    eax = MEM32(0x5BD904);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250254; /* je: equal / zero */

loc_00250249: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250266; /* jne: not equal / not zero */

loc_00250254: ;
    PUSH32(esp, 0x287420);
    PUSH32(esp, 0x0025025Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025025E: ;
    eax = MEM32(0x5BD904);
    esp = esp + 4;

loc_00250266: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250270
 * Original: 0x00250270 - 0x00250297 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250270: ;
    eax = MEM32(0x5BD900);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250284; /* je: equal / zero */

loc_00250279: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250296; /* jne: not equal / not zero */

loc_00250284: ;
    PUSH32(esp, 0x27B000);
    PUSH32(esp, 0x0025028Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025028E: ;
    eax = MEM32(0x5BD900);
    esp = esp + 4;

loc_00250296: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002502A0
 * Original: 0x002502A0 - 0x002502C7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002502A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002502A0: ;
    eax = MEM32(0x5BD8FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002502B4; /* je: equal / zero */

loc_002502A9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002502C6; /* jne: not equal / not zero */

loc_002502B4: ;
    PUSH32(esp, 0x289250);
    PUSH32(esp, 0x002502BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002502BE: ;
    eax = MEM32(0x5BD8FC);
    esp = esp + 4;

loc_002502C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002502D0
 * Original: 0x002502D0 - 0x002502F7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002502D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002502D0: ;
    eax = MEM32(0x5BDAF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002502E4; /* je: equal / zero */

loc_002502D9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002502F6; /* jne: not equal / not zero */

loc_002502E4: ;
    PUSH32(esp, 0x28F910);
    PUSH32(esp, 0x002502EEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002502EE: ;
    eax = MEM32(0x5BDAF4);
    esp = esp + 4;

loc_002502F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250300
 * Original: 0x00250300 - 0x00250327 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250300: ;
    eax = MEM32(0x5BDAEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250314; /* je: equal / zero */

loc_00250309: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250326; /* jne: not equal / not zero */

loc_00250314: ;
    PUSH32(esp, 0x260B90);
    PUSH32(esp, 0x0025031Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025031E: ;
    eax = MEM32(0x5BDAEC);
    esp = esp + 4;

loc_00250326: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250330
 * Original: 0x00250330 - 0x00250357 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250330: ;
    eax = MEM32(0x5BDAE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250344; /* je: equal / zero */

loc_00250339: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250356; /* jne: not equal / not zero */

loc_00250344: ;
    PUSH32(esp, 0x27BFA0);
    PUSH32(esp, 0x0025034Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025034E: ;
    eax = MEM32(0x5BDAE8);
    esp = esp + 4;

loc_00250356: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250360
 * Original: 0x00250360 - 0x00250387 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250360: ;
    eax = MEM32(0x5BDAE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250374; /* je: equal / zero */

loc_00250369: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250386; /* jne: not equal / not zero */

loc_00250374: ;
    PUSH32(esp, 0x28E1E0);
    PUSH32(esp, 0x0025037Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025037E: ;
    eax = MEM32(0x5BDAE4);
    esp = esp + 4;

loc_00250386: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250390
 * Original: 0x00250390 - 0x002503B7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250390: ;
    eax = MEM32(0x5BDB14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002503A4; /* je: equal / zero */

loc_00250399: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002503B6; /* jne: not equal / not zero */

loc_002503A4: ;
    PUSH32(esp, 0x286360);
    PUSH32(esp, 0x002503AEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002503AE: ;
    eax = MEM32(0x5BDB14);
    esp = esp + 4;

loc_002503B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002503C0
 * Original: 0x002503C0 - 0x002503E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002503C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002503C0: ;
    eax = MEM32(0x5BD910);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002503D4; /* je: equal / zero */

loc_002503C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002503E6; /* jne: not equal / not zero */

loc_002503D4: ;
    PUSH32(esp, 0x25F350);
    PUSH32(esp, 0x002503DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002503DE: ;
    eax = MEM32(0x5BD910);
    esp = esp + 4;

loc_002503E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002503F0
 * Original: 0x002503F0 - 0x00250417 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002503F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002503F0: ;
    eax = MEM32(0x5BD90C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250404; /* je: equal / zero */

loc_002503F9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250416; /* jne: not equal / not zero */

loc_00250404: ;
    PUSH32(esp, 0x27B050);
    PUSH32(esp, 0x0025040Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025040E: ;
    eax = MEM32(0x5BD90C);
    esp = esp + 4;

loc_00250416: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250420
 * Original: 0x00250420 - 0x00250447 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250420: ;
    eax = MEM32(0x5BDB8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250434; /* je: equal / zero */

loc_00250429: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250446; /* jne: not equal / not zero */

loc_00250434: ;
    PUSH32(esp, 0x287900);
    PUSH32(esp, 0x0025043Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025043E: ;
    eax = MEM32(0x5BDB8C);
    esp = esp + 4;

loc_00250446: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250450
 * Original: 0x00250450 - 0x00250477 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250450: ;
    eax = MEM32(0x5BDB84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250464; /* je: equal / zero */

loc_00250459: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250476; /* jne: not equal / not zero */

loc_00250464: ;
    PUSH32(esp, 0x289540);
    PUSH32(esp, 0x0025046Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025046E: ;
    eax = MEM32(0x5BDB84);
    esp = esp + 4;

loc_00250476: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250480
 * Original: 0x00250480 - 0x002504A7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250480: ;
    eax = MEM32(0x5BDB80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250494; /* je: equal / zero */

loc_00250489: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002504A6; /* jne: not equal / not zero */

loc_00250494: ;
    PUSH32(esp, 0x256A20);
    PUSH32(esp, 0x0025049Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025049E: ;
    eax = MEM32(0x5BDB80);
    esp = esp + 4;

loc_002504A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002504B0
 * Original: 0x002504B0 - 0x002504D7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002504B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002504B0: ;
    eax = MEM32(0x5BD920);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002504C4; /* je: equal / zero */

loc_002504B9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002504D6; /* jne: not equal / not zero */

loc_002504C4: ;
    PUSH32(esp, 0x25F460);
    PUSH32(esp, 0x002504CEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002504CE: ;
    eax = MEM32(0x5BD920);
    esp = esp + 4;

loc_002504D6: ;
    esp += 4; return; /* ret */

}
