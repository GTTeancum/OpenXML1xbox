/**
 * X-Men Legends - Recompiled code chunk 78
 * Functions: 250 (0x00316340 - 0x0031BDB0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00316340
 * Original: 0x00316340 - 0x00316347 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316340(void)
{

loc_00316340: ;
    ecx = MEM32(eax + 0x30);
    MEM32(edx + 0x4C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00316350
 * Original: 0x00316350 - 0x0031635D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316350(void)
{

loc_00316350: ;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00316360
 * Original: 0x00316360 - 0x00316393 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316360(void)
{

loc_00316360: ;
    esp = esp - 8;
    eax = esp + 4;
    PUSH32(esp, eax);
    eax = MEM32(edx + 0xA8);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00316379u); RECOMP_ABI_CALL(0x00321E60u, sub_00321E60); /* call 0x00321E60 */

loc_00316379: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    MEM32(esi + 0x50) = ecx;
    MEM32(esi + 0x54) = edx;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x5C) = eax;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003163A0
 * Original: 0x003163A0 - 0x003163DB (59 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003163A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003163A0: ;
    eax = MEM32(eax + 0x88);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = 3;
    if ((_fa == 0)) goto loc_003163D4; /* je: equal / zero */

loc_003163AF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003163CD; /* je: equal / zero */

loc_003163B2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003163C6; /* je: equal / zero */

loc_003163B5: ;
    PUSH32(esp, 0x42F0D4);
    PUSH32(esp, 0x003163BFu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_003163BF: ;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003163C6: ;
    eax = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003163CD: ;
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003163D4: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003163E0
 * Original: 0x003163E0 - 0x0031641B (59 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003163E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003163E0: ;
    eax = MEM32(eax + 0x8C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = 1;
    if ((_fa == 0)) goto loc_00316414; /* je: equal / zero */

loc_003163EF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0031640D; /* je: equal / zero */

loc_003163F2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00316406; /* je: equal / zero */

loc_003163F5: ;
    PUSH32(esp, 0x42F0FC);
    PUSH32(esp, 0x003163FFu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_003163FF: ;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00316406: ;
    eax = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031640D: ;
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00316414: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00316420
 * Original: 0x00316420 - 0x0031644A (42 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316420: ;
    eax = eax - 0;
    PUSH32(esp, esi);
    esi = 1;
    if ((eax == 0)) goto loc_00316446; /* je: equal / zero */

loc_0031642B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0031643F; /* je: equal / zero */

loc_0031642E: ;
    PUSH32(esp, 0x42F120);
    PUSH32(esp, 0x00316438u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00316438: ;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031643F: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00316446: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00316450
 * Original: 0x00316450 - 0x0031646C (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316450(void)
{

loc_00316450: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031645Fu); RECOMP_ABI_CALL(0x00316300u, sub_00316300); /* call 0x00316300 */

loc_0031645F: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00316468u); RECOMP_ABI_CALL(0x00321D90u, sub_00321D90); /* call 0x00321D90 */

loc_00316468: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00316470
 * Original: 0x00316470 - 0x00316483 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316470(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00316470: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0xA8);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0030C850(); return; /* tail jmp 0x0030C850 */

}

/**
 * sub_00316490
 * Original: 0x00316490 - 0x00316495 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316490(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00316490: ;
    g_seh_ebp = ebp; sub_00316470(); return; /* tail jmp 0x00316470 */

}

/**
 * sub_003164A0
 * Original: 0x003164A0 - 0x003164E7 (71 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003164A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003164A0: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003164A9u); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_003164A9: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003164BF; /* jne: not equal / not zero */

loc_003164B0: ;
    PUSH32(esp, 0x42F140);
    PUSH32(esp, 0x003164BAu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_003164BA: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003164BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003164C5u); RECOMP_ABI_CALL(0x00316300u, sub_00316300); /* call 0x00316300 */

loc_003164C5: ;
    ecx = MEM32(esp + 0xC);
    esi = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003164D7u); RECOMP_ABI_CALL(0x00321DA0u, sub_00321DA0); /* call 0x00321DA0 */

loc_003164D7: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003164E2u); RECOMP_ABI_CALL(0x00321DE0u, sub_00321DE0); /* call 0x00321DE0 */

loc_003164E2: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003164F0
 * Original: 0x003164F0 - 0x003164FC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003164F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003164F0: ;
    edx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00316500
 * Original: 0x00316500 - 0x0031651B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316500: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316515; /* je: equal / zero */

loc_0031650B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x101 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00316515; /* je: equal / zero */

loc_00316512: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00316515: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00316520
 * Original: 0x00316520 - 0x00316568 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316520: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031652Eu); RECOMP_ABI_CALL(0x00316500u, sub_00316500); /* call 0x00316500 */

loc_0031652E: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316564; /* je: equal / zero */

loc_00316535: ;
    ecx = MEM32(esi + 0xF0);
    edx = MEM32(esi + 0xEC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031654Au); RECOMP_ABI_CALL(0x0030F470u, sub_0030F470); /* call 0x0030F470 */

loc_0031654A: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00316566; /* jne: not equal / not zero */

loc_00316551: ;
    PUSH32(esp, 0x42F174);
    PUSH32(esp, 0x0031655Bu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_0031655B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00316561u); RECOMP_ABI_CALL(0x00314AF0u, sub_00314AF0); /* call 0x00314AF0 */

loc_00316561: ;
    esp = esp + 8;

loc_00316564: ;
    eax = 0; /* xor self */

loc_00316566: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00316570
 * Original: 0x00316570 - 0x0031658A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316570(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00316570: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xE8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316589; /* je: equal / zero */

loc_0031657E: ;
    eax = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx + 0xC)); return; /* indirect tail jmp */

loc_00316589: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00316590
 * Original: 0x00316590 - 0x003165C1 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00316590: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00316599u); RECOMP_ABI_CALL(0x003164F0u, sub_003164F0); /* call 0x003164F0 */

loc_00316599: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003165A1; /* jne: not equal / not zero */

loc_0031659E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_003165A1: ;
    eax = MEM32(ecx + 0xE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0031659E; /* je: equal / zero */

loc_003165AB: ;
    ecx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003165B9u); RECOMP_ABI_CALL(0x00317130u, sub_00317130); /* call 0x00317130 */

loc_003165B9: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esp += 4; return; /* ret */

}

/**
 * sub_003165D0
 * Original: 0x003165D0 - 0x003165F3 (35 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003165D0(void)
{

loc_003165D0: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    MEM32(eax + 0x100) = ecx;
    MEM32(eax + 0x104) = ecx;
    MEM32(eax + 0x108) = ecx;
    MEM32(eax + 0xFC) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_00316600
 * Original: 0x00316600 - 0x00316618 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316600(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00316600: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316617; /* je: equal / zero */

loc_0031660E: ;
    ecx = MEM32(eax);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx + 0x14)); return; /* indirect tail jmp */

loc_00316617: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00316620
 * Original: 0x00316620 - 0x0031668C (108 bytes, 37 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316620: ;
    ecx = MEM32(eax + 0x104);
    esp = esp - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xA8);
    if (TEST_Z(_fa, _fb)) goto loc_00316662; /* je: equal / zero */

loc_00316634: ;
    eax = MEM32(eax + 0x108);
    MEM32(esp + 4) = ecx;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x42F1A8);
    edx = esp + 0xC;
    PUSH32(esp, 0x42F1A0);
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0031665Bu); RECOMP_ABI_CALL(0x0030EE90u, sub_0030EE90); /* call 0x0030EE90 */

loc_0031665B: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00316674; /* jne: not equal / not zero */

loc_00316662: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031666Cu); RECOMP_ABI_CALL(0x00321DF0u, sub_00321DF0); /* call 0x00321DF0 */

loc_0031666C: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00316674: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00316684u); RECOMP_ABI_CALL(0x00321DF0u, sub_00321DF0); /* call 0x00321DF0 */

loc_00316684: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00316690
 * Original: 0x00316690 - 0x003166C2 (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00316690: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00316699u); RECOMP_ABI_CALL(0x003164F0u, sub_003164F0); /* call 0x003164F0 */

loc_00316699: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003166A1; /* jne: not equal / not zero */

loc_0031669E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_003166A1: ;
    eax = MEM32(ecx + 0xE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0031669E; /* je: equal / zero */

loc_003166AB: ;
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003166BAu); RECOMP_ABI_CALL(0x00317130u, sub_00317130); /* call 0x00317130 */

loc_003166BA: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esp += 4; return; /* ret */

}

/**
 * sub_003166D0
 * Original: 0x003166D0 - 0x003166E3 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003166D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003166D0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0xA8);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00321F60(); return; /* tail jmp 0x00321F60 */

}

/**
 * sub_003166F0
 * Original: 0x003166F0 - 0x00316703 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003166F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003166F0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xA8);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00321FB0(); return; /* tail jmp 0x00321FB0 */

}

/**
 * sub_00316710
 * Original: 0x00316710 - 0x00316723 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316710(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00316710: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xA8);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00321F90(); return; /* tail jmp 0x00321F90 */

}

/**
 * sub_00316730
 * Original: 0x00316730 - 0x00316745 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316730(void)
{

loc_00316730: ;
    PUSH32(esp, 0x00316735u); RECOMP_ABI_CALL(0x00321D50u, sub_00321D50); /* call 0x00321D50 */

loc_00316735: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3135A0);
    PUSH32(esp, 0x00316741u); RECOMP_ABI_CALL(0x00321B00u, sub_00321B00); /* call 0x00321B00 */

loc_00316741: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00316750
 * Original: 0x00316750 - 0x003167C1 (113 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316750: ;
    edx = MEM32(ecx + 8);
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    MEM32(edi + 0x44) = edx;
    MEM32(edi + 0x48) = esi;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 3 (32-bit) */
    ecx = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00316779; /* je: equal / zero */

loc_00316768: ;
    PUSH32(esp, esi);
    eax = edi + 4;
    PUSH32(esp, 0x00316771u); RECOMP_ABI_CALL(0x00316350u, sub_00316350); /* call 0x00316350 */

loc_00316771: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_00316779: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00316786u); RECOMP_ABI_CALL(0x003160B0u, sub_003160B0); /* call 0x003160B0 */

loc_00316786: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    eax = edi + 4;
    PUSH32(esp, 0x00316797u); RECOMP_ABI_CALL(0x00316350u, sub_00316350); /* call 0x00316350 */

loc_00316797: ;
    edx = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    eax = edi + 0x14;
    PUSH32(esp, 0x003167A8u); RECOMP_ABI_CALL(0x00316350u, sub_00316350); /* call 0x00316350 */

loc_003167A8: ;
    edx = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    eax = edi + 0x24;
    PUSH32(esp, 0x003167B9u); RECOMP_ABI_CALL(0x00316350u, sub_00316350); /* call 0x00316350 */

loc_003167B9: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_003167D0
 * Original: 0x003167D0 - 0x0031681C (76 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003167D0(void)
{

loc_003167D0: ;
    eax = edi;
    PUSH32(esp, 0x003167D7u); RECOMP_ABI_CALL(0x003163A0u, sub_003163A0); /* call 0x003163A0 */

loc_003167D7: ;
    MEM32(esi + 0x60) = eax;
    eax = edi;
    PUSH32(esp, 0x003167E1u); RECOMP_ABI_CALL(0x003163E0u, sub_003163E0); /* call 0x003163E0 */

loc_003167E1: ;
    MEM32(esi + 0x64) = eax;
    eax = MEM32(edi + 0x90);
    MEM32(esi + 0x68) = eax;
    ecx = MEM32(edi + 0x94);
    MEM32(esi + 0x6C) = ecx;
    edx = MEM32(edi + 0x98);
    MEM32(esi + 0x70) = edx;
    eax = MEM32(edi + 0x9C);
    PUSH32(esp, 0x0031680Au); RECOMP_ABI_CALL(0x00316420u, sub_00316420); /* call 0x00316420 */

loc_0031680A: ;
    MEM32(esi + 0x74) = eax;
    eax = MEM32(edi + 0xA0);
    PUSH32(esp, 0x00316818u); RECOMP_ABI_CALL(0x00316420u, sub_00316420); /* call 0x00316420 */

loc_00316818: ;
    MEM32(esi + 0x78) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00316820
 * Original: 0x00316820 - 0x00316839 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316820(void)
{

loc_00316820: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00316835u); RECOMP_ABI_CALL(0x003164A0u, sub_003164A0); /* call 0x003164A0 */

loc_00316835: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00316840
 * Original: 0x00316840 - 0x00316949 (265 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316840(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00316840: ;
    esp = esp - 0x18;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0xE8);
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 1;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00316859u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00316859: ;
    esi = 0; /* xor self */
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031687B; /* jne: not equal / not zero */

loc_00316862: ;
    MEM32(ebx + 0x100) = edi;
    POP32(esp, edi);
    MEM32(ebx + 0x104) = esi;
    MEM32(ebx + 0x108) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_0031687B: ;
    ecx = MEM32(ebx + 0xEC);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x42F1B8);
    MEM32(esp + 0x20) = eax;
    eax = esp + 0x1C;
    PUSH32(esp, 0x42F1B0);
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, 0x003168A2u); RECOMP_ABI_CALL(0x0030EE90u, sub_0030EE90); /* call 0x0030EE90 */

loc_003168A2: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316862; /* je: equal / zero */

loc_003168A9: ;
    edi = MEM32(ebx + 0xF4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031691B; /* je: equal / zero */

loc_003168B3: ;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0xC);
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
    eax = MEM32(ebx + 0xF4);
    ecx = MEM32(esp + 0x10);
    MEM32(ebx + 0x104) = eax;
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FFFFFFF);
    MEM32(ebx + 0x108) = ecx;
    MEM32(ebx + 0x100) = 1;
    edx = MEM32(ebp);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x003168FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003168FC: ;
    ecx = MEM32(ebp);
    edx = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x0031690Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031690A: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00316911u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00316911: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_0031691B: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    MEM32(ebx + 0x104) = ecx;
    MEM32(ebx + 0x108) = edx;
    MEM32(ebx + 0x100) = 1;
    PUSH32(esp, 0x0031693Fu); RECOMP_ABI_CALL(0x00316690u, sub_00316690); /* call 0x00316690 */

loc_0031693F: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00316950
 * Original: 0x00316950 - 0x00316987 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00316950(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */

loc_00316950: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebx + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00316961u); RECOMP_ABI_CALL(0x00316310u, sub_00316310); /* call 0x00316310 */

loc_00316961: ;
    edi = esi;
    ecx = ebx;
    MEM32(esi) = eax;
    PUSH32(esp, 0x0031696Cu); RECOMP_ABI_CALL(0x00316750u, sub_00316750); /* call 0x00316750 */

loc_0031696C: ;
    edx = esi;
    eax = ebx;
    PUSH32(esp, 0x00316975u); RECOMP_ABI_CALL(0x00316340u, sub_00316340); /* call 0x00316340 */

loc_00316975: ;
    edx = ebp;
    PUSH32(esp, 0x0031697Cu); RECOMP_ABI_CALL(0x00316360u, sub_00316360); /* call 0x00316360 */

loc_0031697C: ;
    edi = ebp;
    PUSH32(esp, 0x00316983u); RECOMP_ABI_CALL(0x003167D0u, sub_003167D0); /* call 0x003167D0 */

loc_00316983: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00316990
 * Original: 0x00316990 - 0x00316A16 (134 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316990: ;
    esp = esp - 0x88;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003169A4u); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_003169A4: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003169C0; /* jne: not equal / not zero */

loc_003169AB: ;
    PUSH32(esp, 0x42F1F4);
    PUSH32(esp, 0x003169B5u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_003169B5: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp = esp + 0x88;
    esp += 4; return; /* ret */

loc_003169C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x98);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003169E3; /* jne: not equal / not zero */

loc_003169CD: ;
    PUSH32(esp, 0x42F1C0);
    PUSH32(esp, 0x003169D7u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_003169D7: ;
    esp = esp + 4;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp = esp + 0x88;
    esp += 4; return; /* ret */

loc_003169E3: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003169EAu); RECOMP_ABI_CALL(0x00316300u, sub_00316300); /* call 0x00316300 */

loc_003169EA: ;
    edi = eax;
    PUSH32(esp, esi);
    eax = esp + 0x14;
    PUSH32(esp, 0x003169F6u); RECOMP_ABI_CALL(0x00316950u, sub_00316950); /* call 0x00316950 */

loc_003169F6: ;
    eax = MEM32(esp + 0xA8);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00316A09u); RECOMP_ABI_CALL(0x003229C0u, sub_003229C0); /* call 0x003229C0 */

loc_00316A09: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp = esp + 0x88;
    esp += 4; return; /* ret */

}

/**
 * sub_00316A20
 * Original: 0x00316A20 - 0x00316A3E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316A20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00316A20: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0xE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316A3C; /* je: equal / zero */

loc_00316A2F: ;
    PUSH32(esp, 0x00316A34u); RECOMP_ABI_CALL(0x00316840u, sub_00316840); /* call 0x00316840 */

loc_00316A34: ;
    eax = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00316620(); return; /* tail jmp 0x00316620 */

loc_00316A3C: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00316A40
 * Original: 0x00316A40 - 0x00316AAD (109 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316A40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00316A4Bu); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_00316A4B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00316A61; /* jne: not equal / not zero */

loc_00316A52: ;
    PUSH32(esp, 0x42F284);
    PUSH32(esp, 0x00316A5Cu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00316A5C: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00316A61: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00316A7A; /* jne: not equal / not zero */

loc_00316A6A: ;
    PUSH32(esp, 0x42F258);
    PUSH32(esp, 0x00316A74u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00316A74: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00316A7A: ;
    eax = MEM32(esi + 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00316A84u); RECOMP_ABI_CALL(0x0030DC60u, sub_0030DC60); /* call 0x0030DC60 */

loc_00316A84: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00316AA3; /* jge: greater or equal (signed >=) */

loc_00316A8B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x42F228);
    MEM32(esi + 8) = 4;
    PUSH32(esp, 0x00316A9Du); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00316A9D: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00316AA3: ;
    eax = MEM32(esi + 0x74);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x74) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00316AB0
 * Original: 0x00316AB0 - 0x00316AE4 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316AB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00316ABBu); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_00316ABB: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00316AD1; /* jne: not equal / not zero */

loc_00316AC2: ;
    PUSH32(esp, 0x42F2B4);
    PUSH32(esp, 0x00316ACCu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00316ACC: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00316AD1: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00316ADFu); RECOMP_ABI_CALL(0x0030DC20u, sub_0030DC20); /* call 0x0030DC20 */

loc_00316ADF: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00316AF0
 * Original: 0x00316AF0 - 0x00316B06 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00316AF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00316AFAu); RECOMP_ABI_CALL(0x0030DB80u, sub_0030DB80); /* call 0x0030DB80 */

loc_00316AFA: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00316B10
 * Original: 0x00316B10 - 0x00316B25 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316B10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00316B10: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316B24; /* je: equal / zero */

loc_00316B1B: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0030DBC0(); return; /* tail jmp 0x0030DBC0 */

loc_00316B24: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00316B30
 * Original: 0x00316B30 - 0x00316B91 (97 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316B30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00316B3Bu); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_00316B3B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00316B51; /* jne: not equal / not zero */

loc_00316B42: ;
    PUSH32(esp, 0x42F30C);
    PUSH32(esp, 0x00316B4Cu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00316B4C: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00316B51: ;
    SET_LO8(eax, MEM8(esi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_00316B68; /* jne: not equal / not zero */

loc_00316B60: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00316B68; /* jne: not equal / not zero */

loc_00316B64: ;
    MEM8(esi + 0x71) = 1;

loc_00316B68: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00316B8B; /* jne: not equal / not zero */

loc_00316B6C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00316B8B; /* jne: not equal / not zero */

loc_00316B71: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00316B77u); RECOMP_ABI_CALL(0x00322A10u, sub_00322A10); /* call 0x00322A10 */

loc_00316B77: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316B8B; /* je: equal / zero */

loc_00316B7E: ;
    PUSH32(esp, 0x42F2E0);
    PUSH32(esp, 0x00316B88u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00316B88: ;
    esp = esp + 4;

loc_00316B8B: ;
    MEM8(esi + 0x70) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00316BA0
 * Original: 0x00316BA0 - 0x00316C05 (101 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316BA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00316BA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00316BABu); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_00316BAB: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00316BC0; /* jne: not equal / not zero */

loc_00316BB2: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0x42F338;
    g_seh_ebp = ebp; sub_0031CE70(); return; /* tail jmp 0x0031CE70 */

loc_00316BC0: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00316BC8u); RECOMP_ABI_CALL(0x00316B30u, sub_00316B30); /* call 0x00316B30 */

loc_00316BC8: ;
    eax = MEM32(esi + 0x12C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00316BD5u); RECOMP_ABI_CALL(0x00315580u, sub_00315580); /* call 0x00315580 */

loc_00316BD5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00316BDBu); RECOMP_ABI_CALL(0x00315340u, sub_00315340); /* call 0x00315340 */

loc_00316BDB: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00316BE4u); RECOMP_ABI_CALL(0x0030DC80u, sub_0030DC80); /* call 0x0030DC80 */

loc_00316BE4: ;
    eax = MEM32(esi + 0x128);
    esp = esp + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316BFA; /* je: equal / zero */

loc_00316BF1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00316BF7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00316BF7: ;
    esp = esp + 4;

loc_00316BFA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00316C00u); RECOMP_ABI_CALL(0x00313B60u, sub_00313B60); /* call 0x00313B60 */

loc_00316C00: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00316C10
 * Original: 0x00316C10 - 0x00316C78 (104 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316C10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00316C1Bu); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_00316C1B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00316C31; /* jne: not equal / not zero */

loc_00316C22: ;
    PUSH32(esp, 0x42F398);
    PUSH32(esp, 0x00316C2Cu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00316C2C: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00316C31: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00316C48; /* jne: not equal / not zero */

loc_00316C39: ;
    PUSH32(esp, 0x42F36C);
    PUSH32(esp, 0x00316C43u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00316C43: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00316C48: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00316C4Fu); RECOMP_ABI_CALL(0x00315370u, sub_00315370); /* call 0x00315370 */

loc_00316C4F: ;
    eax = MEM32(esi + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00316C58u); RECOMP_ABI_CALL(0x0030DB00u, sub_0030DB00); /* call 0x0030DB00 */

loc_00316C58: ;
    ecx = MEM32(esi + 0x110);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00316C65u); RECOMP_ABI_CALL(0x00316A40u, sub_00316A40); /* call 0x00316A40 */

loc_00316C65: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00316C6Du); RECOMP_ABI_CALL(0x00316AB0u, sub_00316AB0); /* call 0x00316AB0 */

loc_00316C6D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00316C73u); RECOMP_ABI_CALL(0x00316BA0u, sub_00316BA0); /* call 0x00316BA0 */

loc_00316C73: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00316C65
 * Original: 0x00316C65 - 0x00316C78 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316C65(void)
{

loc_00316C65: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00316C6Du); RECOMP_ABI_CALL(0x00316AB0u, sub_00316AB0); /* call 0x00316AB0 */

loc_00316C6D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00316C73u); RECOMP_ABI_CALL(0x00316BA0u, sub_00316BA0); /* call 0x00316BA0 */

loc_00316C73: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00316C80
 * Original: 0x00316C80 - 0x00316CCB (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316C80(void)
{

loc_00316C80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x1FC);
    ebx = MEM32(esi + 0x1F8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 0xC0;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00316CA8u); RECOMP_ABI_CALL(0x0031BAF0u, sub_0031BAF0); /* call 0x0031BAF0 */

loc_00316CA8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x34);
    ecx = ebx + 0xC0;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00316CBEu); RECOMP_ABI_CALL(0x0031BAF0u, sub_0031BAF0); /* call 0x0031BAF0 */

loc_00316CBE: ;
    esp = esp + 0x28;
    POP32(esp, edi);
    MEM32(esi + 0x1FC) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00316CD0
 * Original: 0x00316CD0 - 0x00316CDB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316CD0(void)
{

loc_00316CD0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x200);
    esp += 4; return; /* ret */

}

/**
 * sub_00316CE0
 * Original: 0x00316CE0 - 0x00316CE6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316CE0(void)
{

loc_00316CE0: ;
    eax = 0x5BFBFC;
    esp += 4; return; /* ret */

}

/**
 * sub_00316CF0
 * Original: 0x00316CF0 - 0x00316CF6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316CF0(void)
{

loc_00316CF0: ;
    eax = MEM32(0x5BFBFC);
    esp += 4; return; /* ret */

}

/**
 * sub_00316D00
 * Original: 0x00316D00 - 0x00316D0A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316D00(void)
{

loc_00316D00: ;
    eax = MEM32(esp + 4);
    MEM32(0x5BFBFC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00316D10
 * Original: 0x00316D10 - 0x00316D32 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316D10: ;
    PUSH32(esp, 0x00316D15u); RECOMP_ABI_CALL(0x00316CF0u, sub_00316CF0); /* call 0x00316CF0 */

loc_00316D15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00316D1C; /* jne: not equal / not zero */

loc_00316D19: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00316D1C: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00316D19; /* jne: not equal / not zero */

loc_00316D25: ;
    edx = MEM32(eax + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00316D40
 * Original: 0x00316D40 - 0x00316D5A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316D40(void)
{

loc_00316D40: ;
    esp = esp - 0xC;
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00316D56u); RECOMP_ABI_CALL(0x00314EE0u, sub_00314EE0); /* call 0x00314EE0 */

loc_00316D56: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00316D60
 * Original: 0x00316D60 - 0x00316D65 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316D60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00316D60: ;
    g_seh_ebp = ebp; sub_00316C80(); return; /* tail jmp 0x00316C80 */

}

/**
 * sub_00316D70
 * Original: 0x00316D70 - 0x00316D95 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316D70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00316D76u); RECOMP_ABI_CALL(0x00316CE0u, sub_00316CE0); /* call 0x00316CE0 */

loc_00316D76: ;
    esi = eax;
    PUSH32(esp, 0x00316D7Du); RECOMP_ABI_CALL(0x00316CF0u, sub_00316CF0); /* call 0x00316CF0 */

loc_00316D7D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316D93; /* je: equal / zero */

loc_00316D81: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00316D93; /* jne: not equal / not zero */

loc_00316D88: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316D90; /* je: equal / zero */

loc_00316D8E: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00316D90u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00316D90: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00316D93: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00316DA0
 * Original: 0x00316DA0 - 0x00316DC7 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316DA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00316DA0: ;
    PUSH32(esp, 0x00316DA5u); RECOMP_ABI_CALL(0x00316CE0u, sub_00316CE0); /* call 0x00316CE0 */

loc_00316DA5: ;
    edx = eax;
    PUSH32(esp, 0x00316DACu); RECOMP_ABI_CALL(0x00316CF0u, sub_00316CF0); /* call 0x00316CF0 */

loc_00316DAC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316DC6; /* je: equal / zero */

loc_00316DB0: ;
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316DC6; /* je: equal / zero */

loc_00316DB7: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edx + 4) = ecx;
    if ((_fa != 0)) goto loc_00316DC6; /* jne: not equal / not zero */

loc_00316DBD: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316DC6; /* je: equal / zero */

loc_00316DC4: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_00316DC6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00316DD0
 * Original: 0x00316DD0 - 0x00316DE7 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316DD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00316DD0: ;
    PUSH32(esp, 0x00316DD5u); RECOMP_ABI_CALL(0x00316CF0u, sub_00316CF0); /* call 0x00316CF0 */

loc_00316DD5: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316DE6; /* je: equal / zero */

loc_00316DDD: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316DE6; /* je: equal / zero */

loc_00316DE4: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(ecx); return; /* indirect tail jmp */

loc_00316DE6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00316DF0
 * Original: 0x00316DF0 - 0x00316E07 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316DF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00316DF0: ;
    PUSH32(esp, 0x00316DF5u); RECOMP_ABI_CALL(0x00316CF0u, sub_00316CF0); /* call 0x00316CF0 */

loc_00316DF5: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316E06; /* je: equal / zero */

loc_00316DFD: ;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316E06; /* je: equal / zero */

loc_00316E04: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(ecx); return; /* indirect tail jmp */

loc_00316E06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00316E10
 * Original: 0x00316E10 - 0x00316E2F (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316E10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00316E10: ;
    PUSH32(esp, 0x00316E15u); RECOMP_ABI_CALL(0x00316CF0u, sub_00316CF0); /* call 0x00316CF0 */

loc_00316E15: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316E2E; /* je: equal / zero */

loc_00316E1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316E2E; /* je: equal / zero */

loc_00316E21: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316E2E; /* je: equal / zero */

loc_00316E28: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_00316E2E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00316E30
 * Original: 0x00316E30 - 0x00316E62 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316E30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00316E3Bu); RECOMP_ABI_CALL(0x00316D10u, sub_00316D10); /* call 0x00316D10 */

loc_00316E3B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00316E60; /* jne: not equal / not zero */

loc_00316E43: ;
    PUSH32(esp, 0x00316E48u); RECOMP_ABI_CALL(0x00316CF0u, sub_00316CF0); /* call 0x00316CF0 */

loc_00316E48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316E60; /* je: equal / zero */

loc_00316E4C: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316E60; /* je: equal / zero */

loc_00316E53: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00316E5Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00316E5D: ;
    esp = esp + 8;

loc_00316E60: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00316E70
 * Original: 0x00316E70 - 0x00316E9F (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316E70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00316E70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00316E7Bu); RECOMP_ABI_CALL(0x00316D10u, sub_00316D10); /* call 0x00316D10 */

loc_00316E7B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00316E9D; /* jne: not equal / not zero */

loc_00316E83: ;
    PUSH32(esp, 0x00316E88u); RECOMP_ABI_CALL(0x00316CF0u, sub_00316CF0); /* call 0x00316CF0 */

loc_00316E88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316E9D; /* je: equal / zero */

loc_00316E8C: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316E9D; /* je: equal / zero */

loc_00316E93: ;
    ecx = MEM32(esi + 0x14);
    POP32(esp, esi);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_00316E9D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00316E75
 * Original: 0x00316E75 - 0x00316E9F (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316E75(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00316E75: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00316E7Bu); RECOMP_ABI_CALL(0x00316D10u, sub_00316D10); /* call 0x00316D10 */

loc_00316E7B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00316E9D; /* jne: not equal / not zero */

loc_00316E83: ;
    PUSH32(esp, 0x00316E88u); RECOMP_ABI_CALL(0x00316CF0u, sub_00316CF0); /* call 0x00316CF0 */

loc_00316E88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316E9D; /* je: equal / zero */

loc_00316E8C: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316E9D; /* je: equal / zero */

loc_00316E93: ;
    ecx = MEM32(esi + 0x14);
    POP32(esp, esi);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_00316E9D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00316EA0
 * Original: 0x00316EA0 - 0x00316EDB (59 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316EA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = 0; /* xor self */
    PUSH32(esp, 0x00316EAEu); RECOMP_ABI_CALL(0x00316D10u, sub_00316D10); /* call 0x00316D10 */

loc_00316EAE: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00316EBB; /* je: equal / zero */

loc_00316EB6: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00316EBB: ;
    PUSH32(esp, 0x00316EC0u); RECOMP_ABI_CALL(0x00316CF0u, sub_00316CF0); /* call 0x00316CF0 */

loc_00316EC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = MEM32(esi + 0x14);
    if (TEST_Z(_fa, _fb)) goto loc_00316ED6; /* je: equal / zero */

loc_00316EC7: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316ED6; /* je: equal / zero */

loc_00316ECE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00316ED1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00316ED1: ;
    esp = esp + 4;
    edi = eax;

loc_00316ED6: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00316EE0
 * Original: 0x00316EE0 - 0x00316F13 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316EE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00316EEBu); RECOMP_ABI_CALL(0x00316D10u, sub_00316D10); /* call 0x00316D10 */

loc_00316EEB: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00316F11; /* jne: not equal / not zero */

loc_00316EF3: ;
    PUSH32(esp, 0x00316EF8u); RECOMP_ABI_CALL(0x00316CF0u, sub_00316CF0); /* call 0x00316CF0 */

loc_00316EF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316F11; /* je: equal / zero */

loc_00316EFC: ;
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316F11; /* je: equal / zero */

loc_00316F03: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esi + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00316F0Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00316F0E: ;
    esp = esp + 8;

loc_00316F11: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00316F20
 * Original: 0x00316F20 - 0x0031702A (266 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316F20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00316F20: ;
    esp = esp - 0xC;
    PUSH32(esp, 0x00316F28u); RECOMP_ABI_CALL(0x00316CF0u, sub_00316CF0); /* call 0x00316CF0 */

loc_00316F28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00316F30; /* jne: not equal / not zero */

loc_00316F2C: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00316F30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00316F39u); RECOMP_ABI_CALL(0x00316D70u, sub_00316D70); /* call 0x00316D70 */

loc_00316F39: ;
    esi = MEM32(esp + 0x20);
    ebp = MEM32(esi + 0x40);
    eax = MEM32(esp + 0x2C);
    edi = MEM32(esp + 0x24);
    ebx = MEM32(esp + 0x28);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    MEM32(esi + 0x1FC) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esi + 0x1F0) = edi;
    MEM32(esi + 0x1F4) = ebx;
    PUSH32(esp, 0x00316F72u); RECOMP_ABI_CALL(0x00316DD0u, sub_00316DD0); /* call 0x00316DD0 */

loc_00316F72: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00316F90; /* jle: less or equal (signed <=) */

loc_00316F79: ;
    PUSH32(esp, 0x42F41C);
    PUSH32(esp, 0x00316F83u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00316F83: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00316F90: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = ecx + edi;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00316FA7u); RECOMP_ABI_CALL(0x0030F470u, sub_0030F470); /* call 0x0030F470 */

loc_00316FA7: ;
    ebx = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00316FC7; /* jne: not equal / not zero */

loc_00316FB0: ;
    PUSH32(esp, 0x42F3F4);
    PUSH32(esp, 0x00316FBAu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00316FBA: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00316FC7: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(esi + 0x1F8) = ebx;
    PUSH32(esp, 0x00316FD8u); RECOMP_ABI_CALL(0x00316DF0u, sub_00316DF0); /* call 0x00316DF0 */

loc_00316FD8: ;
    edi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00316FF8; /* jne: not equal / not zero */

loc_00316FE1: ;
    PUSH32(esp, 0x42F3C8);
    PUSH32(esp, 0x00316FEBu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00316FEB: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00316FF8: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    eax = eax + 0xC0;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    MEM32(esi + 0x200) = edi;
    MEM32(esi + 0x1EC) = 1;
    PUSH32(esp, 0x0031701Du); RECOMP_ABI_CALL(0x0031BAF0u, sub_0031BAF0); /* call 0x0031BAF0 */

loc_0031701D: ;
    esp = esp + 0x14;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00317030
 * Original: 0x00317030 - 0x0031708A (90 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317030(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00317030: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x40);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x1FC);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1F8);
    eax = eax + 0x1EC;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00317055u); RECOMP_ABI_CALL(0x00316D10u, sub_00316D10); /* call 0x00316D10 */

loc_00317055: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317085; /* jne: not equal / not zero */

loc_0031705D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031706A; /* je: equal / zero */

loc_00317061: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00317067u); RECOMP_ABI_CALL(0x00316E70u, sub_00316E70); /* call 0x00316E70 */

loc_00317067: ;
    esp = esp + 4;

loc_0031706A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00317070u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00317070: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ebp = ebp + 0xC0;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00317082u); RECOMP_ABI_CALL(0x0031BAF0u, sub_0031BAF0); /* call 0x0031BAF0 */

loc_00317082: ;
    esp = esp + 0x18;

loc_00317085: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031706D
 * Original: 0x0031706D - 0x0031708A (29 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031706D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031706D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00317070u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00317070: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ebp = ebp + 0xC0;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00317082u); RECOMP_ABI_CALL(0x0031BAF0u, sub_0031BAF0); /* call 0x0031BAF0 */

loc_00317082: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00317090
 * Original: 0x00317090 - 0x003170E2 (82 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317090(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00317090: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031709Bu); RECOMP_ABI_CALL(0x00316D10u, sub_00316D10); /* call 0x00316D10 */

loc_0031709B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003170E0; /* jne: not equal / not zero */

loc_003170A3: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003170DE; /* je: equal / zero */

loc_003170AF: ;
    PUSH32(esp, 0x003170B4u); RECOMP_ABI_CALL(0x0031CE50u, sub_0031CE50); /* call 0x0031CE50 */

loc_003170B4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003170BAu); RECOMP_ABI_CALL(0x00316E70u, sub_00316E70); /* call 0x00316E70 */

loc_003170BA: ;
    PUSH32(esp, edi);
    MEM32(esi) = 0;
    PUSH32(esp, 0x003170C6u); RECOMP_ABI_CALL(0x00316E10u, sub_00316E10); /* call 0x00316E10 */

loc_003170C6: ;
    eax = MEM32(ebx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x003170CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003170CC: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(esi + 0x14) = 0;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00316DA0(); return; /* tail jmp 0x00316DA0 */

loc_003170DE: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_003170E0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003170F0
 * Original: 0x003170F0 - 0x00317104 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003170F0(void)
{

loc_003170F0: ;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00317110
 * Original: 0x00317110 - 0x00317123 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317110(void)
{

loc_00317110: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF000601u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031711Fu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031711F: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00317130
 * Original: 0x00317130 - 0x003171A7 (119 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317130: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031713Bu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031713B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00317153; /* je: equal / zero */

loc_00317142: ;
    PUSH32(esp, 0xFF000191u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0031714Eu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031714E: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00317153: ;
    eax = MEM32(esi + 0x1E00);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x1E08);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317176; /* jne: not equal / not zero */

loc_00317165: ;
    PUSH32(esp, 0xFF000602u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00317170u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_00317170: ;
    esp = esp + 8;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00317176: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = edi;
    ecx = ecx << 4;
    eax = ecx + eax + 4;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00317195u); RECOMP_ABI_CALL(0x003170F0u, sub_003170F0); /* call 0x003170F0 */

loc_00317195: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031719Eu); RECOMP_ABI_CALL(0x00322D90u, sub_00322D90); /* call 0x00322D90 */

loc_0031719E: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003171B0
 * Original: 0x003171B0 - 0x003171EC (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003171B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003171B0: ;
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003171B8u); RECOMP_ABI_CALL(0x00323900u, sub_00323900); /* call 0x00323900 */

loc_003171B8: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003171EB; /* je: equal / zero */

loc_003171C0: ;
    eax = MEM32(esi + 0x1E08);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003171CDu); RECOMP_ABI_CALL(0x00323120u, sub_00323120); /* call 0x00323120 */

loc_003171CD: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003171EB; /* jne: not equal / not zero */

loc_003171D5: ;
    PUSH32(esp, 0x003171DAu); RECOMP_ABI_CALL(0x001AF4E0u, sub_001AF4E0); /* call 0x001AF4E0 */

loc_003171DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003171EB; /* je: equal / zero */

loc_003171DE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003171E8u); RECOMP_ABI_CALL(0x003238E0u, sub_003238E0); /* call 0x003238E0 */

loc_003171E8: ;
    esp = esp + 0xC;

loc_003171EB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003171F0
 * Original: 0x003171F0 - 0x0031722C (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003171F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003171F0: ;
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003171F8u); RECOMP_ABI_CALL(0x003238C0u, sub_003238C0); /* call 0x003238C0 */

loc_003171F8: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031722B; /* je: equal / zero */

loc_00317200: ;
    eax = MEM32(esi + 0x1E08);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031720Du); RECOMP_ABI_CALL(0x003230E0u, sub_003230E0); /* call 0x003230E0 */

loc_0031720D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031722B; /* jne: not equal / not zero */

loc_00317215: ;
    PUSH32(esp, 0x0031721Au); RECOMP_ABI_CALL(0x001AF4E0u, sub_001AF4E0); /* call 0x001AF4E0 */

loc_0031721A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031722B; /* je: equal / zero */

loc_0031721E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00317228u); RECOMP_ABI_CALL(0x003238A0u, sub_003238A0); /* call 0x003238A0 */

loc_00317228: ;
    esp = esp + 0xC;

loc_0031722B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00317230
 * Original: 0x00317230 - 0x00317241 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317230(void)
{

loc_00317230: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    PUSH32(esp, 0x0031723Du); RECOMP_ABI_CALL(0x003170F0u, sub_003170F0); /* call 0x003170F0 */

loc_0031723D: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00317250
 * Original: 0x00317250 - 0x00317265 (21 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317250(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00317250: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x0031725Au); RECOMP_ABI_CALL(0x003171B0u, sub_003171B0); /* call 0x003171B0 */

loc_0031725A: ;
    PUSH32(esp, 0x0031725Fu); RECOMP_ABI_CALL(0x003171F0u, sub_003171F0); /* call 0x003171F0 */

loc_0031725F: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002123A0(); return; /* tail jmp 0x002123A0 */

}

/**
 * sub_00317270
 * Original: 0x00317270 - 0x003172A2 (50 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00317270(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317270: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(eax) = 0;
    esi = 0; /* xor self */
    edi = eax + 4;

loc_00317282: ;
    eax = edi;
    PUSH32(esp, 0x00317289u); RECOMP_ABI_CALL(0x00317230u, sub_00317230); /* call 0x00317230 */

loc_00317289: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00317292u); RECOMP_ABI_CALL(0x00322D90u, sub_00322D90); /* call 0x00322D90 */

loc_00317292: ;
    esp = esp + 0x10;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00317282; /* jl: less (signed <) */

loc_0031729E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003172B0
 * Original: 0x003172B0 - 0x003172D4 (36 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003172B0(void)
{

loc_003172B0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x1E08);
    eax = ecx + 0x2E60;
    PUSH32(esp, ecx);
    MEM32(ecx + 0x1E00) = eax;
    PUSH32(esp, 0x003172CDu); RECOMP_ABI_CALL(0x00317270u, sub_00317270); /* call 0x00317270 */

loc_003172CD: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003172E0
 * Original: 0x003172E0 - 0x0031732B (75 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003172E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003172E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003172EBu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_003172EB: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00317303; /* je: equal / zero */

loc_003172F2: ;
    PUSH32(esp, 0xFF0001A1u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003172FEu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_003172FE: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00317303: ;
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031730Bu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031730B: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00317329; /* je: equal / zero */

loc_00317312: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x1DBC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00317326u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00317326: ;
    esp = esp + 0xC;

loc_00317329: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00317330
 * Original: 0x00317330 - 0x0031737A (74 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317330: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031733Bu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031733B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00317355; /* je: equal / zero */

loc_00317342: ;
    PUSH32(esp, 0xFF0001A2u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0031734Eu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031734E: ;
    esp = esp + 8;

loc_00317351: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00317355: ;
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031735Du); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031735D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00317351; /* je: equal / zero */

loc_00317364: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x1DBC);
    eax = MEM32(eax + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00317375u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00317375: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00317380
 * Original: 0x00317380 - 0x003173CB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317380(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00317380: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031738Bu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031738B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003173A8; /* je: equal / zero */

loc_00317392: ;
    POP32(esp, esi);
    MEM32(esp + 8) = 0xFF0001A3u;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_0031D640(); return; /* tail jmp 0x0031D640 */

loc_003173A8: ;
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003173B0u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_003173B0: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003173C9; /* je: equal / zero */

loc_003173B7: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x1DBC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x003173C6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003173C6: ;
    esp = esp + 8;

loc_003173C9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003173D0
 * Original: 0x003173D0 - 0x00317415 (69 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003173D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003173D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003173DBu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_003173DB: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003173F5; /* je: equal / zero */

loc_003173E2: ;
    PUSH32(esp, 0xFF0001A4u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003173EEu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_003173EE: ;
    esp = esp + 8;

loc_003173F1: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003173F5: ;
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003173FDu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_003173FD: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003173F1; /* je: equal / zero */

loc_00317404: ;
    eax = MEM32(esi + 0x1DBC);
    eax = MEM32(eax + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00317410u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00317410: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00317420
 * Original: 0x00317420 - 0x00317452 (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317420: ;
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00317428u); RECOMP_ABI_CALL(0x003238C0u, sub_003238C0); /* call 0x003238C0 */

loc_00317428: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317451; /* je: equal / zero */

loc_00317430: ;
    eax = MEM32(esi + 0x1DC4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031743Du); RECOMP_ABI_CALL(0x003230E0u, sub_003230E0); /* call 0x003230E0 */

loc_0031743D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317451; /* jne: not equal / not zero */

loc_00317445: ;
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031744Eu); RECOMP_ABI_CALL(0x003238A0u, sub_003238A0); /* call 0x003238A0 */

loc_0031744E: ;
    esp = esp + 0xC;

loc_00317451: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00317460
 * Original: 0x00317460 - 0x00317492 (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317460: ;
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00317468u); RECOMP_ABI_CALL(0x00323900u, sub_00323900); /* call 0x00323900 */

loc_00317468: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317491; /* je: equal / zero */

loc_00317470: ;
    eax = MEM32(esi + 0x1DC4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031747Du); RECOMP_ABI_CALL(0x00323120u, sub_00323120); /* call 0x00323120 */

loc_0031747D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317491; /* jne: not equal / not zero */

loc_00317485: ;
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031748Eu); RECOMP_ABI_CALL(0x003238E0u, sub_003238E0); /* call 0x003238E0 */

loc_0031748E: ;
    esp = esp + 0xC;

loc_00317491: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003174A0
 * Original: 0x003174A0 - 0x003174C9 (41 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003174A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003174A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003174ADu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_003174AD: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003174B6; /* jne: not equal / not zero */

loc_003174B4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003174B6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003174C4u); RECOMP_ABI_CALL(0x00323870u, sub_00323870); /* call 0x00323870 */

loc_003174C4: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003174D0
 * Original: 0x003174D0 - 0x003174F9 (41 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003174D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003174D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003174DDu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_003174DD: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003174E6; /* jne: not equal / not zero */

loc_003174E4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003174E6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003174F4u); RECOMP_ABI_CALL(0x00323870u, sub_00323870); /* call 0x00323870 */

loc_003174F4: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00317500
 * Original: 0x00317500 - 0x00317529 (41 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317500: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031750Du); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031750D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00317516; /* jne: not equal / not zero */

loc_00317514: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00317516: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00317524u); RECOMP_ABI_CALL(0x00323870u, sub_00323870); /* call 0x00323870 */

loc_00317524: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00317530
 * Original: 0x00317530 - 0x0031755C (44 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317530: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031753Du); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031753D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00317546; /* jne: not equal / not zero */

loc_00317544: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00317546: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00317557u); RECOMP_ABI_CALL(0x00323870u, sub_00323870); /* call 0x00323870 */

loc_00317557: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00317560
 * Original: 0x00317560 - 0x00317573 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317560(void)
{

loc_00317560: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF000A01u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031756Fu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031756F: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00317580
 * Original: 0x00317580 - 0x00317591 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317580(void)
{

loc_00317580: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x00317588u); RECOMP_ABI_CALL(0x00317420u, sub_00317420); /* call 0x00317420 */

loc_00317588: ;
    PUSH32(esp, 0x0031758Du); RECOMP_ABI_CALL(0x00317460u, sub_00317460); /* call 0x00317460 */

loc_0031758D: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003175A0
 * Original: 0x003175A0 - 0x003175C4 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003175A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003175A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003175ADu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_003175AD: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003175C0; /* je: equal / zero */

loc_003175B4: ;
    eax = esi + 0x2E44;
    MEM32(esi + 0x1DBC) = eax;

loc_003175C0: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003175D0
 * Original: 0x003175D0 - 0x003175EE (30 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003175D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003175D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003175DDu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_003175DD: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003175E6; /* jne: not equal / not zero */

loc_003175E4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003175E6: ;
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00317580(); return; /* tail jmp 0x00317580 */

}

/**
 * sub_003175F0
 * Original: 0x003175F0 - 0x00317632 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003175F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003175F0: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = 0x120;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x120) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0x120 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00317607; /* jge: greater or equal (signed >=) */

loc_00317604: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00317607: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x80 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00317604; /* jne: not equal / not zero */

loc_00317610: ;
    SET_LO8(ecx, MEM8(eax + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00317604; /* jne: not equal / not zero */

loc_00317617: ;
    PUSH32(esp, 6);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x11A)) >> 32) & 1);
    eax = eax + 0x11A;
    PUSH32(esp, 0x42D14C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00317629u); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_00317629: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00317640
 * Original: 0x00317640 - 0x00317655 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317640(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00317640: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x1CAC);
    ecx = MEM32(eax);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00305E20(); return; /* tail jmp 0x00305E20 */

}

/**
 * sub_00317660
 * Original: 0x00317660 - 0x00317675 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317660(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00317660: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x1CAC);
    eax = MEM32(edx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00305E90(); return; /* tail jmp 0x00305E90 */

}

/**
 * sub_00317680
 * Original: 0x00317680 - 0x00317695 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317680(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00317680: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x1CAC);
    eax = MEM32(edx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00305EC0(); return; /* tail jmp 0x00305EC0 */

}

/**
 * sub_003176A0
 * Original: 0x003176A0 - 0x003176B5 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003176A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003176A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1CAC);
    edx = MEM32(ecx);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00305F10(); return; /* tail jmp 0x00305F10 */

}

/**
 * sub_003176C0
 * Original: 0x003176C0 - 0x0031770D (77 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003176C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003176C0: ;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    PUSH32(esp, esi);
    fp_push(0.69314718055994530942); /* fldln2 */
    PUSH32(esp, edi);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = fp_top() - MEMF(0x42F508); /* fsub dword ptr [0x42f508] */
    fp_top() = fp_top() * MEMF(0x42F504); /* fmul dword ptr [0x42f504] */
    fp_push(MEMF(0x3C93C0)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    PUSH32(esp, 0x003176E5u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_003176E5: ;
    esi = eax;
    edi = esi;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x64);
    PUSH32(esp, 0x003176F1u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_003176F1: ;
    eax = eax - edi;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x1CAC);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00317707u); RECOMP_ABI_CALL(0x003060F0u, sub_003060F0); /* call 0x003060F0 */

loc_00317707: ;
    esp = esp + 0xC;
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
 * sub_00317710
 * Original: 0x00317710 - 0x0031775E (78 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317710(void)
{

loc_00317710: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    MEM32(0x5BFC04) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x5BFC08) = edx;
    ecx = MEM32(eax + 8);
    ecx = ecx + 0x1F;
    ecx = ecx & 0xFFFFFFE0u;
    MEM32(0x5BFC0C) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(0x5BFC10) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(0x5BFC14) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(0x5BFC18) = edx;
    eax = MEM32(eax + 0x18);
    eax = eax + 0x1F;
    eax = eax & 0xFFFFFFE0u;
    MEM32(0x5BFC1C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00317760
 * Original: 0x00317760 - 0x0031777E (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00317760(void)
{

loc_00317760: ;
    PUSH32(esp, 0x00317765u); RECOMP_ABI_CALL(0x0030C190u, sub_0030C190); /* call 0x0030C190 */

loc_00317765: ;
    PUSH32(esp, 0x0031776Au); RECOMP_ABI_CALL(0x0033E8B0u, sub_0033E8B0); /* call 0x0033E8B0 */

loc_0031776A: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5BFC04);
    PUSH32(esp, 0x00317778u); RECOMP_ABI_CALL(0x00323C40u, sub_00323C40); /* call 0x00323C40 */

loc_00317778: ;
    esp = esp + 0xC;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00317780
 * Original: 0x00317780 - 0x0031778D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00317780(void)
{

loc_00317780: ;
    PUSH32(esp, 0x00317785u); RECOMP_ABI_CALL(0x0033E8C0u, sub_0033E8C0); /* call 0x0033E8C0 */

loc_00317785: ;
    PUSH32(esp, 0x0031778Au); RECOMP_ABI_CALL(0x0030C100u, sub_0030C100); /* call 0x0030C100 */

loc_0031778A: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00317790
 * Original: 0x00317790 - 0x003177CF (63 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317790: ;
    eax = MEM32(ebx + 0x1CAC);
    ecx = MEM32(ebx + 0xEA8);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xEAC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0xEAC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003177CD; /* jne: not equal / not zero */

loc_003177A7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003177AEu); RECOMP_ABI_CALL(0x00305D90u, sub_00305D90); /* call 0x00305D90 */

loc_003177AE: ;
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x003177B6u); RECOMP_ABI_CALL(0x00305DC0u, sub_00305DC0); /* call 0x00305DC0 */

loc_003177B6: ;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003177CC; /* jle: less or equal (signed <=) */

loc_003177BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003177CC; /* jle: less or equal (signed <=) */

loc_003177C1: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003177C9u); RECOMP_ABI_CALL(0x00322B30u, sub_00322B30); /* call 0x00322B30 */

loc_003177C9: ;
    esp = esp + 0xC;

loc_003177CC: ;
    POP32(esp, esi);

loc_003177CD: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003177D0
 * Original: 0x003177D0 - 0x003177E2 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003177D0(void)
{

loc_003177D0: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x003177DEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003177DE: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003177F0
 * Original: 0x003177F0 - 0x00317830 (64 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003177F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003177F0: ;
    esp = esp - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00317807; /* jne: not equal / not zero */

loc_003177F7: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00317800u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00317800: ;
    esp = esp + 0xC;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00317807: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00317813u); RECOMP_ABI_CALL(0x0030EDA0u, sub_0030EDA0); /* call 0x0030EDA0 */

loc_00317813: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0031781Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031781C: ;
    eax = MEM32(esi);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00317829u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00317829: ;
    esp = esp + 0x28;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00317830
 * Original: 0x00317830 - 0x003178A5 (117 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317830(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00317830: ;
    eax = MEM32(esp + 4);
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x1CAC);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    eax = esi;
    PUSH32(esp, 0x00317853u); RECOMP_ABI_CALL(0x003177D0u, sub_003177D0); /* call 0x003177D0 */

loc_00317853: ;
    eax = MEM32(esp + 0x28);
    ebx = MEM32(esp + 0x18);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00317864; /* jge: greater or equal (signed >=) */

loc_00317862: ;
    ebx = eax;

loc_00317864: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x19000 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00317871; /* jl: less (signed <) */

loc_0031786C: ;
    ebx = 0x19000;

loc_00317871: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00317881u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_00317881: ;
    esp = esp + 0xC;
    edi = esp + 0x10;
    eax = ebx;
    PUSH32(esp, 0x0031788Fu); RECOMP_ABI_CALL(0x003177F0u, sub_003177F0); /* call 0x003177F0 */

loc_0031788F: ;
    eax = MEM32(ebp + 0x48);
    ecx = MEM32(esp + 0x28);
    POP32(esp, edi);
    eax = eax + ebx;
    POP32(esp, esi);
    MEM32(ebp + 0x48) = eax;
    POP32(esp, ebp);
    MEM32(ecx) = ebx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003178B0
 * Original: 0x003178B0 - 0x003178F7 (71 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003178B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003178B0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    MEM32(ebp) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003178F1; /* jle: less or equal (signed <=) */

loc_003178C6: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x12);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003178D3u); RECOMP_ABI_CALL(0x003062C0u, sub_003062C0); /* call 0x003062C0 */

loc_003178D3: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003178EA; /* jne: not equal / not zero */

loc_003178DA: ;
    esi = esi + 0x12;
    edi = edi + 0x12;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003178C6; /* jl: less (signed <) */

loc_003178E4: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003178EA: ;
    MEM32(ebp) = 1;

loc_003178F1: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00317900
 * Original: 0x00317900 - 0x00317918 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317900(void)
{

loc_00317900: ;
    ecx = MEM32(eax + 0x1CAC);
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00317914u); RECOMP_ABI_CALL(0x003062F0u, sub_003062F0); /* call 0x003062F0 */

loc_00317914: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00317920
 * Original: 0x00317920 - 0x003179AA (138 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317920(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00317920: ;
    esp = esp - 8;
    eax = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = ebx + eax;
    PUSH32(esp, esi);
    eax = ebx + 0x24;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, edi);
    edi = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_00317952; /* jae: above or equal (unsigned >=) */

loc_0031793F: ;
    /* nop */

loc_00317940: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    esi = edi;
    if (CMP_AE(_fa, _fb)) goto loc_00317952; /* jae: above or equal (unsigned >=) */

loc_00317946: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031795B; /* jl: less (signed <) */

loc_0031794B: ;
    esi = esi + 0x12;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00317946; /* jb: below (unsigned <) */

loc_00317952: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0031795B: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x12);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00317968u); RECOMP_ABI_CALL(0x003062C0u, sub_003062C0); /* call 0x003062C0 */

loc_00317968: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031797D; /* je: equal / zero */

loc_0031796F: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0031797D; /* jae: above or equal (unsigned >=) */

loc_00317975: ;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = edi;

loc_0031797D: ;
    edi = edi + 2;
    eax = ebx + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00317940; /* jb: below (unsigned <) */

loc_00317987: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00317952; /* jne: not equal / not zero */

loc_0031798F: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0xFF000C0Au);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031799Eu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031799E: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031795F
 * Original: 0x0031795F - 0x003179AA (75 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031795F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031795F: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x12);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00317968u); RECOMP_ABI_CALL(0x003062C0u, sub_003062C0); /* call 0x003062C0 */

loc_00317968: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031797D; /* je: equal / zero */

loc_0031796F: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0031797D; /* jae: above or equal (unsigned >=) */

loc_00317975: ;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = edi;

loc_0031797D: ;
    edi = edi + 2;
    eax = ebx + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00317940(); return; } /* jb: below (unsigned <) */

loc_00317987: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_00317952(); return; } /* jne: not equal / not zero */

loc_0031798F: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0xFF000C0Au);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031799Eu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031799E: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003179B0
 * Original: 0x003179B0 - 0x003179CA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003179B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003179B0: ;
    ecx = MEM32(eax + 0x1CAC);
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003179BEu); RECOMP_ABI_CALL(0x00305B10u, sub_00305B10); /* call 0x00305B10 */

loc_003179BE: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_003179D0
 * Original: 0x003179D0 - 0x003179FC (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003179D0(void)
{

loc_003179D0: ;
    ecx = MEM32(eax + 0x1CB4);
    esp = esp - 0x1C;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003179E4u); RECOMP_ABI_CALL(0x003234A0u, sub_003234A0); /* call 0x003234A0 */

loc_003179E4: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x2C);
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x30);
    MEM32(edx) = ecx;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_00317A00
 * Original: 0x00317A00 - 0x00317A12 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317A00(void)
{

loc_00317A00: ;
    ecx = MEM32(eax + 0x1CB4);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00317A0Eu); RECOMP_ABI_CALL(0x00323780u, sub_00323780); /* call 0x00323780 */

loc_00317A0E: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00317A20
 * Original: 0x00317A20 - 0x00317A31 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317A20(void)
{

loc_00317A20: ;
    ecx = MEM32(eax + 0x1CB4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00317A2Du); RECOMP_ABI_CALL(0x00323120u, sub_00323120); /* call 0x00323120 */

loc_00317A2D: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00317A40
 * Original: 0x00317A40 - 0x00317A51 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317A40(void)
{

loc_00317A40: ;
    ecx = MEM32(eax + 0x1CB8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00317A4Du); RECOMP_ABI_CALL(0x00323120u, sub_00323120); /* call 0x00323120 */

loc_00317A4D: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00317A60
 * Original: 0x00317A60 - 0x00317A72 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317A60(void)
{

loc_00317A60: ;
    edx = MEM32(eax + 0x1CB8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00317A6Eu); RECOMP_ABI_CALL(0x00323100u, sub_00323100); /* call 0x00323100 */

loc_00317A6E: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00317A80
 * Original: 0x00317A80 - 0x00317A9B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00317A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317A80: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00317A86u); RECOMP_ABI_CALL(0x00305B10u, sub_00305B10); /* call 0x00305B10 */

loc_00317A86: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00317A98; /* je: equal / zero */

loc_00317A8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317A98; /* je: equal / zero */

loc_00317A92: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00317A98: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00317AA0
 * Original: 0x00317AA0 - 0x00317ACC (44 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317AA0: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1CAC);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    PUSH32(esp, 0x1B);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00317AB2u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_00317AB2: ;
    ecx = MEM32(esi + 0x44);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317AC9; /* je: equal / zero */

loc_00317ABC: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esi + 0x44) = eax;
    PUSH32(esp, 0x00317AC6u); RECOMP_ABI_CALL(0x00305F40u, sub_00305F40); /* call 0x00305F40 */

loc_00317AC6: ;
    esp = esp + 8;

loc_00317AC9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00317AD0
 * Original: 0x00317AD0 - 0x00317C1E (334 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317AD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00317AD0: ;
    ecx = MEM32(0x5BFC0C);
    esp = esp - 0x40;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317C0B; /* je: equal / zero */

loc_00317AE4: ;
    _fa = (uint32_t)(MEM32(0x5BFC1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5BFC1C), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317C0B; /* je: equal / zero */

loc_00317AF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + 8;
    ecx = 7;
    esi = 0x5BFC04;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = ecx | 0xFFFFFFFFu;
    PUSH32(esp, 0x3F);
    PUSH32(esp, ebx);
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = 1;
    MEM32(eax + 0x2C) = ebp;
    MEM32(eax + 0x30) = ebp;
    MEM32(eax + 0x34) = ebp;
    MEM32(eax + 0x38) = ebp;
    MEM32(eax + 0x3C) = 0x317830;
    MEM32(eax + 0x40) = ebp;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ebp;
    esi = ebx + 0xF98;
    PUSH32(esp, 0x00317B3Du); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_00317B3D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0x40);
    edi = 0xF4240;
    PUSH32(esp, ebx);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = ebp;
    PUSH32(esp, 0x00317B5Bu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_00317B5B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0x41);
    PUSH32(esp, ebx);
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = edi;
    MEM32(esp + 0x40) = ebp;
    PUSH32(esp, 0x00317B74u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_00317B74: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0x42);
    PUSH32(esp, ebx);
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x58) = ebp;
    PUSH32(esp, 0x00317B8Du); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_00317B8D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, esi);
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x64) = edx;
    MEM32(esp + 0x68) = edi;
    MEM32(esp + 0x6C) = ebp;
    PUSH32(esp, 0x00317BA4u); RECOMP_ABI_CALL(0x003241C0u, sub_003241C0); /* call 0x003241C0 */

loc_00317BA4: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00317BACu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_00317BAC: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00317BB3u); RECOMP_ABI_CALL(0x00323E00u, sub_00323E00); /* call 0x00323E00 */

loc_00317BB3: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00317BBEu); RECOMP_ABI_CALL(0x00323E10u, sub_00323E10); /* call 0x00323E10 */

loc_00317BBE: ;
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00317BC9u); RECOMP_ABI_CALL(0x00323E40u, sub_00323E40); /* call 0x00323E40 */

loc_00317BC9: ;
    esp = esp + 0x44;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00317BD7u); RECOMP_ABI_CALL(0x00323E70u, sub_00323E70); /* call 0x00323E70 */

loc_00317BD7: ;
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00317BE2u); RECOMP_ABI_CALL(0x00323EA0u, sub_00323EA0); /* call 0x00323EA0 */

loc_00317BE2: ;
    PUSH32(esp, 0x3E);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00317BEAu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_00317BEA: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00317BF1u); RECOMP_ABI_CALL(0x00323ED0u, sub_00323ED0); /* call 0x00323ED0 */

loc_00317BF1: ;
    PUSH32(esp, 0x3D);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00317BF9u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_00317BF9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00317BFFu); RECOMP_ABI_CALL(0x00323CD0u, sub_00323CD0); /* call 0x00323CD0 */

loc_00317BFF: ;
    esp = esp + 0x2C;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

loc_00317C0B: ;
    PUSH32(esp, 0xFF000C06u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00317C16u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_00317C16: ;
    esp = esp + 8;
    POP32(esp, ebp);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_00317C20
 * Original: 0x00317C20 - 0x00317C26 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317C20(void)
{

loc_00317C20: ;
    eax = MEM32(0x6E6A00);
    esp += 4; return; /* ret */

}

/**
 * sub_00317C30
 * Original: 0x00317C30 - 0x00317CB3 (131 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317C30(void)
{

loc_00317C30: ;
    esp = esp - 0x38;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00317C39u); RECOMP_ABI_CALL(0x00305B10u, sub_00305B10); /* call 0x00305B10 */

loc_00317C39: ;
    MEM32(0x6E6A3C) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00317C4Eu); RECOMP_ABI_CALL(0x00305BE0u, sub_00305BE0); /* call 0x00305BE0 */

loc_00317C4E: ;
    eax = MEM32(esp + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x2C) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0x00317C6Du); RECOMP_ABI_CALL(0x00323D60u, sub_00323D60); /* call 0x00323D60 */

loc_00317C6D: ;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x00317C7Au); RECOMP_ABI_CALL(0x00323DD0u, sub_00323DD0); /* call 0x00323DD0 */

loc_00317C7A: ;
    MEM32(esp + 0x24) = edx;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x50);
    MEM32(esp + 0x24) = eax;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00317C9Bu); RECOMP_ABI_CALL(0x00324380u, sub_00324380); /* call 0x00324380 */

loc_00317C9B: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x60);
    edx = MEM32(esp + 0x50);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x64);
    MEM32(eax) = edx;
    esp = esp + 0x58;
    esp += 4; return; /* ret */

}

/**
 * sub_00317CC0
 * Original: 0x00317CC0 - 0x00317CCC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00317CC0(void)
{

loc_00317CC0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00317CC6u); RECOMP_ABI_CALL(0x00306410u, sub_00306410); /* call 0x00306410 */

loc_00317CC6: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00317CD0
 * Original: 0x00317CD0 - 0x00317CD8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00317CD0(void)
{

loc_00317CD0: ;
    MEM32(0x6E6A00) = eax;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00317CE0
 * Original: 0x00317CE0 - 0x00317CF8 (24 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00317CE0(void)
{

loc_00317CE0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1CAC);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00317CF2u); RECOMP_ABI_CALL(0x00305A90u, sub_00305A90); /* call 0x00305A90 */

loc_00317CF2: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00317D00
 * Original: 0x00317D00 - 0x00317D16 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317D00(void)
{

loc_00317D00: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00317D07u); RECOMP_ABI_CALL(0x00306000u, sub_00306000); /* call 0x00306000 */

loc_00317D07: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00317D12u); RECOMP_ABI_CALL(0x00321D90u, sub_00321D90); /* call 0x00321D90 */

loc_00317D12: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00317D20
 * Original: 0x00317D20 - 0x00317D50 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317D20(void)
{

loc_00317D20: ;
    esp = esp - 8;
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00317D32u); RECOMP_ABI_CALL(0x0031FD60u, sub_0031FD60); /* call 0x0031FD60 */

loc_00317D32: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00317D46u); RECOMP_ABI_CALL(0x003208D0u, sub_003208D0); /* call 0x003208D0 */

loc_00317D46: ;
    ecx = MEM32(esp + 0x24);
    MEM32(ecx) = eax;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00317D50
 * Original: 0x00317D50 - 0x00317D70 (32 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317D50(void)
{

loc_00317D50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF000C03u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00317D5Fu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_00317D5F: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00317D70
 * Original: 0x00317D70 - 0x00317D90 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317D70: ;
    eax = MEM32(ecx + 0x2E94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00317D87; /* je: equal / zero */

loc_00317D7A: ;
    ecx = MEM32(ecx + 0x1CAC);
    edx = MEM32(ecx + 0x40);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00317D8A; /* jle: less or equal (signed <=) */

loc_00317D87: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00317D8A: ;
    eax = eax + 0xD00;
    esp += 4; return; /* ret */

}

/**
 * sub_00317D90
 * Original: 0x00317D90 - 0x00317DE0 (80 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317D90: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    MEM32(edi) = 0;
    ebx = MEM32(esi + 0x1CAC);
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0x00317DB1u); RECOMP_ABI_CALL(0x003179D0u, sub_003179D0); /* call 0x003179D0 */

loc_00317DB1: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00317DDB; /* jne: not equal / not zero */

loc_00317DB8: ;
    eax = MEM32(esp + 4);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebx + 0x3C); PUSH32(esp, 0x00317DCDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00317DCD: ;
    edx = MEM32(esp + 0x1C);
    esp = esp + 0x10;
    eax = esi;
    PUSH32(esp, 0x00317DDBu); RECOMP_ABI_CALL(0x00317A00u, sub_00317A00); /* call 0x00317A00 */

loc_00317DDB: ;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00317DE0
 * Original: 0x00317DE0 - 0x00317E02 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00317DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317DE0: ;
    PUSH32(esp, 0x00317DE5u); RECOMP_ABI_CALL(0x00317D70u, sub_00317D70); /* call 0x00317D70 */

loc_00317DE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00317DED; /* jne: not equal / not zero */

loc_00317DE9: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_00317DED: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00317E10
 * Original: 0x00317E10 - 0x00317E56 (70 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317E10: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x1CB4);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1CB8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00317E25u); RECOMP_ABI_CALL(0x003230E0u, sub_003230E0); /* call 0x003230E0 */

loc_00317E25: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317E53; /* je: equal / zero */

loc_00317E2D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00317E34u); RECOMP_ABI_CALL(0x003230E0u, sub_003230E0); /* call 0x003230E0 */

loc_00317E34: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317E53; /* jne: not equal / not zero */

loc_00317E3C: ;
    eax = esi;
    PUSH32(esp, 0x00317E43u); RECOMP_ABI_CALL(0x003179B0u, sub_003179B0); /* call 0x003179B0 */

loc_00317E43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00317E53; /* je: equal / zero */

loc_00317E47: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00317E50u); RECOMP_ABI_CALL(0x003230C0u, sub_003230C0); /* call 0x003230C0 */

loc_00317E50: ;
    esp = esp + 0xC;

loc_00317E53: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00317E60
 * Original: 0x00317E60 - 0x00317F24 (196 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317E60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00317E60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 0x1CAC);
    PUSH32(esp, esi);
    esi = MEM32(ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00317E72u); RECOMP_ABI_CALL(0x00305B10u, sub_00305B10); /* call 0x00305B10 */

loc_00317E72: ;
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x00317E7Au); RECOMP_ABI_CALL(0x00305FE0u, sub_00305FE0); /* call 0x00305FE0 */

loc_00317E7A: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00317E89; /* je: equal / zero */

loc_00317E83: ;
    MEM32(0x5BFC20) = esi;

loc_00317E89: ;
    PUSH32(esp, 0x1A);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00317E91u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_00317E91: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00317E9C; /* jne: not equal / not zero */

loc_00317E98: ;
    esi = 0; /* xor self */
    goto loc_00317EC6;

loc_00317E9C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317EB8; /* je: equal / zero */

loc_00317EA1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317EB1; /* je: equal / zero */

loc_00317EA6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00317EC6; /* je: equal / zero */

loc_00317EAA: ;
    PUSH32(esp, 0xFF000C07u);
    goto loc_00317EBD;

loc_00317EB1: ;
    PUSH32(esp, 0xFF000C08u);
    goto loc_00317EBD;

loc_00317EB8: ;
    PUSH32(esp, 0xFF000C09u);

loc_00317EBD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00317EC3u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_00317EC3: ;
    esp = esp + 8;

loc_00317EC6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317ED0; /* je: equal / zero */

loc_00317ECB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317EE6; /* jne: not equal / not zero */

loc_00317ED0: ;
    eax = edi + 0xF98;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00317EDEu); RECOMP_ABI_CALL(0x0030FEC0u, sub_0030FEC0); /* call 0x0030FEC0 */

loc_00317EDE: ;
    esp = esp + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317EEA; /* je: equal / zero */

loc_00317EE6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00317EF6; /* je: equal / zero */

loc_00317EEA: ;
    ecx = 1;
    eax = edi;
    PUSH32(esp, 0x00317EF6u); RECOMP_ABI_CALL(0x00317A60u, sub_00317A60); /* call 0x00317A60 */

loc_00317EF6: ;
    eax = edi;
    PUSH32(esp, 0x00317EFDu); RECOMP_ABI_CALL(0x00317A20u, sub_00317A20); /* call 0x00317A20 */

loc_00317EFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317F20; /* jne: not equal / not zero */

loc_00317F02: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00317F20; /* jne: not equal / not zero */

loc_00317F0A: ;
    eax = MEM32(ebp + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00317F20; /* jne: not equal / not zero */

loc_00317F11: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    ecx = 1;
    eax = edi;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00317A60(); return; /* tail jmp 0x00317A60 */

loc_00317F20: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00317F30
 * Original: 0x00317F30 - 0x00317F9C (108 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317F30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ecx = edi;
    PUSH32(esp, 0x00317F3Bu); RECOMP_ABI_CALL(0x00317D70u, sub_00317D70); /* call 0x00317D70 */

loc_00317F3B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00317F99; /* je: equal / zero */

loc_00317F41: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317F99; /* jne: not equal / not zero */

loc_00317F46: ;
    eax = MEM32(edi + 0x1CAC);
    edi = MEM32(eax);
    eax = edi;
    PUSH32(esp, 0x00317F55u); RECOMP_ABI_CALL(0x00317A80u, sub_00317A80); /* call 0x00317A80 */

loc_00317F55: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00317F99; /* je: equal / zero */

loc_00317F59: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00317F5Fu); RECOMP_ABI_CALL(0x00305DC0u, sub_00305DC0); /* call 0x00305DC0 */

loc_00317F5F: ;
    PUSH32(esp, edi);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x00317F68u); RECOMP_ABI_CALL(0x00305D90u, sub_00305D90); /* call 0x00305D90 */

loc_00317F68: ;
    PUSH32(esp, edi);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x00317F71u); RECOMP_ABI_CALL(0x00305DF0u, sub_00305DF0); /* call 0x00305DF0 */

loc_00317F71: ;
    ecx = MEM32(esi + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    MEM32(esi + 0xC) = eax;
    eax = ecx + ecx * 8;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    eax = eax + edx;
    esp = esp + 0xC;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 1;

loc_00317F99: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00317FA0
 * Original: 0x00317FA0 - 0x00317FDF (63 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317FA0: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x00317FA8u); RECOMP_ABI_CALL(0x0031DFD0u, sub_0031DFD0); /* call 0x0031DFD0 */

loc_00317FA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317FC3; /* je: equal / zero */

loc_00317FAD: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x18);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00317FBEu); RECOMP_ABI_CALL(0x00306590u, sub_00306590); /* call 0x00306590 */

loc_00317FBE: ;
    esp = esp + 0xC;
    goto loc_00317FC8;

loc_00317FC3: ;
    PUSH32(esp, 0x00317FC8u); RECOMP_ABI_CALL(0x00317C20u, sub_00317C20); /* call 0x00317C20 */

loc_00317FC8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00317FD0; /* jne: not equal / not zero */

loc_00317FCE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00317FD0: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00317FD8u); RECOMP_ABI_CALL(0x00305F60u, sub_00305F60); /* call 0x00305F60 */

loc_00317FD8: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00317FE0
 * Original: 0x00317FE0 - 0x00318053 (115 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317FE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00317FE0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x1CAC);
    esi = MEM32(edi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00318001u); RECOMP_ABI_CALL(0x0031FA30u, sub_0031FA30); /* call 0x0031FA30 */

loc_00318001: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031804B; /* je: equal / zero */

loc_00318008: ;
    _fa = (uint32_t)(MEM32(ebx + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x48), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031803C; /* jne: not equal / not zero */

loc_0031800E: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ebx = ebx + 0xF98;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00318024u); RECOMP_ABI_CALL(0x00317C30u, sub_00317C30); /* call 0x00317C30 */

loc_00318024: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(edi + 0x24);
    esp = esp + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031803C; /* jge: greater or equal (signed >=) */

loc_00318032: ;
    MEM32(edi + 0x24) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(edi + 0x28) = eax;

loc_0031803C: ;
    ecx = MEM32(edi + 0x24);
    edx = MEM32(esp + 0x1C);
    MEM32(edx) = ecx;
    eax = MEM32(edi + 0x28);
    MEM32(ebp) = eax;

loc_0031804B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00318060
 * Original: 0x00318060 - 0x003180CD (109 bytes, 43 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318060(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00318060: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0x1CAC);
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    ecx = MEM32(eax + 4);
    MEM32(esp + 0xC) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0031807E; /* jne: not equal / not zero */

loc_00318079: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031807E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + 8;
    ecx = 7;
    edi = 0x5BFC04;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    PUSH32(esp, 0x00318094u); RECOMP_ABI_CALL(0x0031DFD0u, sub_0031DFD0); /* call 0x0031DFD0 */

loc_00318094: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003180A2; /* je: equal / zero */

loc_00318099: ;
    eax = ebx;
    PUSH32(esp, 0x003180A0u); RECOMP_ABI_CALL(0x00317CC0u, sub_00317CC0); /* call 0x00317CC0 */

loc_003180A0: ;
    goto loc_003180B2;

loc_003180A2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003180A8u); RECOMP_ABI_CALL(0x00317CE0u, sub_00317CE0); /* call 0x00317CE0 */

loc_003180A8: ;
    esp = esp + 4;
    eax = ebx;
    PUSH32(esp, 0x003180B2u); RECOMP_ABI_CALL(0x00317CD0u, sub_00317CD0); /* call 0x00317CD0 */

loc_003180B2: ;
    esi = eax;
    eax = MEM32(esp + 0x14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003180BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003180BE: ;
    esp = esp + 4;
    PUSH32(esp, 0x003180C6u); RECOMP_ABI_CALL(0x00323D40u, sub_00323D40); /* call 0x00323D40 */

loc_003180C6: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003180D0
 * Original: 0x003180D0 - 0x003180FB (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003180D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003180D0: ;
    ecx = MEM32(edx + 0x1CAC);
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = edx + 0xF98;
    MEM32(ecx + 0x2C) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_003180EF; /* jne: not equal / not zero */

loc_003180E9: ;
    _fa = (uint32_t)(MEM32(edx + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x50), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003180F8; /* je: equal / zero */

loc_003180EF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003180F5u); RECOMP_ABI_CALL(0x00317D00u, sub_00317D00); /* call 0x00317D00 */

loc_003180F5: ;
    esp = esp + 4;

loc_003180F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00318100
 * Original: 0x00318100 - 0x00318126 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318100: ;
    ecx = MEM32(edx + 0x1CAC);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ecx);
    edx = edx + 0xF98;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031811B; /* jne: not equal / not zero */

loc_00318115: ;
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2C), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318124; /* je: equal / zero */

loc_0031811B: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00318121u); RECOMP_ABI_CALL(0x00317D00u, sub_00317D00); /* call 0x00317D00 */

loc_00318121: ;
    esp = esp + 4;

loc_00318124: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00318130
 * Original: 0x00318130 - 0x00318193 (99 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318130(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00318130: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031813Cu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031813C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031814F; /* je: equal / zero */

loc_00318143: ;
    eax = esi;
    PUSH32(esp, 0x0031814Au); RECOMP_ABI_CALL(0x00317A40u, sub_00317A40); /* call 0x00317A40 */

loc_0031814A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318154; /* jne: not equal / not zero */

loc_0031814F: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00318154: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = esp + 0x10;
    PUSH32(esp, 0x00318160u); RECOMP_ABI_CALL(0x00317D90u, sub_00317D90); /* call 0x00317D90 */

loc_00318160: ;
    ebp = eax;
    PUSH32(esp, 0x00318167u); RECOMP_ABI_CALL(0x00317E10u, sub_00317E10); /* call 0x00317E10 */

loc_00318167: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    edi = esi;
    PUSH32(esp, 0x00318173u); RECOMP_ABI_CALL(0x00317E60u, sub_00317E60); /* call 0x00317E60 */

loc_00318173: ;
    esp = esp + 4;
    eax = esi;
    PUSH32(esp, 0x0031817Du); RECOMP_ABI_CALL(0x00317F30u, sub_00317F30); /* call 0x00317F30 */

loc_0031817D: ;
    eax = esi;
    PUSH32(esp, 0x00318184u); RECOMP_ABI_CALL(0x00317AA0u, sub_00317AA0); /* call 0x00317AA0 */

loc_00318184: ;
    ebx = esi;
    PUSH32(esp, 0x0031818Bu); RECOMP_ABI_CALL(0x00317790u, sub_00317790); /* call 0x00317790 */

loc_0031818B: ;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003181A0
 * Original: 0x003181A0 - 0x00318377 (471 bytes, 176 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003181A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003181A0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 4);
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(eax) = 0;
    edi = MEM32(ecx + 0x1CAC);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ebx = ecx + 0xCC0;
    PUSH32(esp, 0x003181CEu); RECOMP_ABI_CALL(0x00317DE0u, sub_00317DE0); /* call 0x00317DE0 */

loc_003181CE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003181E2; /* je: equal / zero */

loc_003181D5: ;
    MEM32(edi + 0x3C) = 0x317830;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_003181E2: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003181EFu); RECOMP_ABI_CALL(0x0031F970u, sub_0031F970); /* call 0x0031F970 */

loc_003181EF: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (TEST_S(_fas, _fbs)) goto loc_0031836F; /* jl: less (signed <) */

loc_00318200: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 5);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031820Cu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031820C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031822D; /* jne: not equal / not zero */

loc_00318213: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031821Bu); RECOMP_ABI_CALL(0x0031FA10u, sub_0031FA10); /* call 0x0031FA10 */

loc_0031821B: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi + 0x3C) = 0x317830;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0031822D: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00318239u); RECOMP_ABI_CALL(0x0031F9B0u, sub_0031F9B0); /* call 0x0031F9B0 */

loc_00318239: ;
    esi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0031836F; /* jl: less (signed <) */

loc_00318246: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031824Eu); RECOMP_ABI_CALL(0x0031FA10u, sub_0031FA10); /* call 0x0031FA10 */

loc_0031824E: ;
    ecx = MEM32(edi + 0x38);
    eax = MEM32(esp + 0x1C);
    ebx = 0; /* xor self */
    esi = esi - ecx;
    esp = esp + 0xC;
    esi = esi - eax;
    MEM32(esp + 0x1C) = ebx;
    if (((int32_t)esi < 0)) goto loc_00318321; /* js: sign (negative) */

loc_00318268: ;
    ecx = MEM32(esp + 0x18);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    esi = eax + eax * 8;
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_003182CC; /* jle: less or equal (signed <=) */

loc_00318287: ;
    eax = MEM32(esp + 0x30);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebp = ecx + ecx * 8;
    ebp = ebp << 1;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax + eax * 8;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    ebx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003182A3; /* jl: less (signed <) */

loc_003182A1: ;
    ebx = esi;

loc_003182A3: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, 0x003182B1u); RECOMP_ABI_CALL(0x003178B0u, sub_003178B0); /* call 0x003178B0 */

loc_003182B1: ;
    MEM32(esp + 0x20) = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    edx = MEM32(edi + 0x38);
    esi = esi - ebx;
    esp = esp + 4;
    eax = eax << 5;
    edx = edx + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi + 0x38) = edx;
    if (CMP_G(_fas & _fbs, 0)) goto loc_003182F6; /* jg: greater (signed >) */

loc_003182CC: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003182F6; /* je: equal / zero */

loc_003182D4: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x2C);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(edi + 0x3C) = 0x317830;
    PUSH32(esp, 0x003182EFu); RECOMP_ABI_CALL(0x003062C0u, sub_003062C0); /* call 0x003062C0 */

loc_003182EF: ;
    esp = esp + 0xC;
    MEM32(esp + 0x10) = eax;

loc_003182F6: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00318365; /* je: equal / zero */

loc_003182FE: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031830Cu); RECOMP_ABI_CALL(0x0031ECA0u, sub_0031ECA0); /* call 0x0031ECA0 */

loc_0031830C: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x28);
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00318321: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318365; /* je: equal / zero */

loc_00318327: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    esi = eax;
    esi = (uint32_t)(-(int32_t)esi);
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031835E; /* jle: less or equal (signed <=) */

loc_0031833D: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = esi;
    PUSH32(esp, 0x0031834Du); RECOMP_ABI_CALL(0x00317900u, sub_00317900); /* call 0x00317900 */

loc_0031834D: ;
    edx = MEM32(edi + 0x38);
    edx = edx - eax;
    esi = esi - eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(edi + 0x38) = edx;
    if (CMP_G(_fas, _fbs)) goto loc_00318365; /* jg: greater (signed >) */

loc_0031835E: ;
    MEM32(edi + 0x3C) = 0x317830;

loc_00318365: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x1C);
    MEM32(eax) = ecx;

loc_0031836F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00318380
 * Original: 0x00318380 - 0x00318419 (153 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00318380(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318380: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x120) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x120 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(ebp) = 0;
    eax = MEM32(edi + 0x1CAC);
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00318415; /* jl: less (signed <) */

loc_003183A8: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003183B9u); RECOMP_ABI_CALL(0x00306250u, sub_00306250); /* call 0x00306250 */

loc_003183B9: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003183D7; /* je: equal / zero */

loc_003183C0: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x14);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(edx + 0x3C) = 0x3181A0;
    POP32(esp, esi);
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003183D7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003183DDu); RECOMP_ABI_CALL(0x00324B30u, sub_00324B30); /* call 0x00324B30 */

loc_003183DD: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003183FA; /* jl: less (signed <) */

loc_003183E5: ;
    edx = MEM32(esp + 0x14);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    MEM32(edx + 0x3C) = 0x3181A0;
    POP32(esp, esi);
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003183FA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00318401u); RECOMP_ABI_CALL(0x00317920u, sub_00317920); /* call 0x00317920 */

loc_00318401: ;
    edx = MEM32(esp + 0x1C);
    esp = esp + 8;
    eax = eax - ebx;
    MEM32(edx + 0x3C) = 0x3181A0;
    MEM32(ebp) = eax;
    POP32(esp, ebx);

loc_00318415: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00318420
 * Original: 0x00318420 - 0x003184DB (187 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318420(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00318420: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x14);
    MEM32(eax) = 0;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1CAC);
    PUSH32(esp, eax);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x00318440u); RECOMP_ABI_CALL(0x00324B30u, sub_00324B30); /* call 0x00324B30 */

loc_00318440: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00318452; /* jl: less (signed <) */

loc_00318448: ;
    MEM32(esi + 0x3C) = 0x318380;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00318452: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    eax = eax + 0xFFFFFFEEu;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0031849E; /* jle: less or equal (signed <=) */

loc_00318460: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    goto loc_00318470;

    /* nop */
    /* nop */

loc_00318470: ;
    ecx = 9;
    edi = 0x42F4F0;
    esi = ebx + edx;
    ebp = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((ebp != 0)) goto loc_00318491; /* jne: not equal / not zero */

loc_00318484: ;
    ebx = ebx + 0x12;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00318470; /* jl: less (signed <) */

loc_0031848B: ;
    esi = MEM32(esp + 0x10);
    goto loc_0031849C;

loc_00318491: ;
    esi = MEM32(esp + 0x10);
    MEM32(esi + 0x3C) = 0x318380;

loc_0031849C: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0031849E: ;
    ecx = MEM32(esp + 0x1C);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    MEM32(ecx) = ebx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003184B7u); RECOMP_ABI_CALL(0x00317DE0u, sub_00317DE0); /* call 0x00317DE0 */

loc_003184B7: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003184D7; /* jne: not equal / not zero */

loc_003184BE: ;
    eax = MEM32(esp + 0x1C);
    ecx = eax + eax * 8;
    eax = ebx;
    ecx = ecx << 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esi + 0x38);
    eax = eax << 5;
    ecx = ecx + eax;
    MEM32(esi + 0x38) = ecx;

loc_003184D7: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003184E0
 * Original: 0x003184E0 - 0x003184FB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003184E0(void)
{

loc_003184E0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x317FE0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003184EDu); RECOMP_ABI_CALL(0x0031FA80u, sub_0031FA80); /* call 0x0031FA80 */

loc_003184ED: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003184F7u); RECOMP_ABI_CALL(0x0031ECA0u, sub_0031ECA0); /* call 0x0031ECA0 */

loc_003184F7: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00318500
 * Original: 0x00318500 - 0x0031850E (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00318500(void)
{

loc_00318500: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    PUSH32(esp, 0x0031850Bu); RECOMP_ABI_CALL(0x003180D0u, sub_003180D0); /* call 0x003180D0 */

loc_0031850B: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00318510
 * Original: 0x00318510 - 0x003185DF (207 bytes, 77 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318510(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00318510: ;
    esp = esp - 0x14;
    eax = MEM32(esp + 0x1C);
    eax = eax - 0;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x1CAC);
    esi = MEM32(edi);
    MEM32(esp + 0xC) = esi;
    if ((eax == 0)) goto loc_003185C6; /* je: equal / zero */

loc_00318533: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003185B1; /* je: equal / zero */

loc_00318536: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003185D6; /* jne: not equal / not zero */

loc_0031853D: ;
    eax = esi;
    PUSH32(esp, 0x00318544u); RECOMP_ABI_CALL(0x00317A80u, sub_00317A80); /* call 0x00317A80 */

loc_00318544: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003185D6; /* je: equal / zero */

loc_0031854C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318553u); RECOMP_ABI_CALL(0x00305DC0u, sub_00305DC0); /* call 0x00305DC0 */

loc_00318553: ;
    ebp = eax;
    eax = esp + 0x2C;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    edx = ebx;
    PUSH32(esp, 0x00318562u); RECOMP_ABI_CALL(0x00317D20u, sub_00317D20); /* call 0x00317D20 */

loc_00318562: ;
    esi = MEM32(edi + 0x30);
    edx = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x1C);
    esi = esi + edx;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00318576u); RECOMP_ABI_CALL(0x00306190u, sub_00306190); /* call 0x00306190 */

loc_00318576: ;
    esi = esi - eax;
    eax = MEM32(esp + 0x3C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(edi + 0x30) = esi;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = edx;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(esp + 0x34) = edx;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ebx = ebx + 0xF98;
    PUSH32(esp, ebx);
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 0x003185A4u); RECOMP_ABI_CALL(0x00323EE0u, sub_00323EE0); /* call 0x00323EE0 */

loc_003185A4: ;
    esp = esp + 0x1C;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_003185B1: ;
    eax = 1;
    edx = ebx;
    PUSH32(esp, 0x003185BDu); RECOMP_ABI_CALL(0x00318100u, sub_00318100); /* call 0x00318100 */

loc_003185BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_003185C6: ;
    eax = 0; /* xor self */
    edx = ebx;
    MEM32(edi + 0x30) = 0;
    PUSH32(esp, 0x003185D6u); RECOMP_ABI_CALL(0x00318100u, sub_00318100); /* call 0x00318100 */

loc_003185D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003185E0
 * Original: 0x003185E0 - 0x00318635 (85 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003185E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003185E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    PUSH32(esp, 0x003185ECu); RECOMP_ABI_CALL(0x00317D70u, sub_00317D70); /* call 0x00317D70 */

loc_003185EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00318631; /* je: equal / zero */

loc_003185F0: ;
    esi = MEM32(esi + 0x1CAC);
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi);
    if (TEST_NZ(_fa, _fb)) goto loc_00318630; /* jne: not equal / not zero */

loc_00318600: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318630; /* je: equal / zero */

loc_00318605: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(eax + 0x10);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00318617u); RECOMP_ABI_CALL(0x0033E8D0u, sub_0033E8D0); /* call 0x0033E8D0 */

loc_00318617: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031861Fu); RECOMP_ABI_CALL(0x00306210u, sub_00306210); /* call 0x00306210 */

loc_0031861F: ;
    esp = esp + 0x18;
    MEM32(esi + 0x34) = 1;
    MEM32(esi + 0x3C) = 0x318420;

loc_00318630: ;
    POP32(esp, edi);

loc_00318631: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00318640
 * Original: 0x00318640 - 0x00318649 (9 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318640(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00318640: ;
    eax = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_00318130(); return; /* tail jmp 0x00318130 */

}

/**
 * sub_00318650
 * Original: 0x00318650 - 0x0031872F (223 bytes, 79 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318650(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00318650: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031865Du); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031865D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00318666; /* jne: not equal / not zero */

loc_00318664: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00318666: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = esi + 0x2D98;
    eax = edi;
    ebx = esi;
    MEM32(esi + 0x1CAC) = edi;
    ebp = edi + 8;
    PUSH32(esp, 0x00318681u); RECOMP_ABI_CALL(0x00317AD0u, sub_00317AD0); /* call 0x00317AD0 */

loc_00318681: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031872A; /* jne: not equal / not zero */

loc_00318689: ;
    eax = ebp;
    PUSH32(esp, 0x00318690u); RECOMP_ABI_CALL(0x00317FA0u, sub_00317FA0); /* call 0x00317FA0 */

loc_00318690: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003186A9; /* jne: not equal / not zero */

loc_00318696: ;
    PUSH32(esp, 0xFF000C04u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003186A1u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_003186A1: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003186A9: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(ebp);
    edx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003186BAu); RECOMP_ABI_CALL(0x0030F470u, sub_0030F470); /* call 0x0030F470 */

loc_003186BA: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003186D4; /* jne: not equal / not zero */

loc_003186C1: ;
    PUSH32(esp, 0xFF000C05u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003186CCu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_003186CC: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003186D4: ;
    MEM32(edi) = ebx;
    MEM32(edi + 4) = eax;
    ecx = esi + 0x2E44;
    MEM32(esi + 0x1DBC) = ecx;
    edx = MEM32(ebx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = 0x317640;
    MEM32(ecx + 8) = 0x317660;
    MEM32(ecx + 0xC) = 0x317680;
    MEM32(ecx + 0x10) = 0x3176A0;
    MEM32(ecx + 0x14) = 0x3176C0;
    PUSH32(esp, 0x00318714u); RECOMP_ABI_CALL(0x00306540u, sub_00306540); /* call 0x00306540 */

loc_00318714: ;
    esp = esp + 8;
    eax = 1;
    edx = esi;
    PUSH32(esp, 0x00318723u); RECOMP_ABI_CALL(0x003180D0u, sub_003180D0); /* call 0x003180D0 */

loc_00318723: ;
    PUSH32(esp, 0x00318728u); RECOMP_ABI_CALL(0x003184E0u, sub_003184E0); /* call 0x003184E0 */

loc_00318728: ;
    eax = 0; /* xor self */

loc_0031872A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00318730
 * Original: 0x00318730 - 0x00318755 (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00318730: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318738u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_00318738: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00318745; /* jne: not equal / not zero */

loc_0031873F: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00318745: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031874Bu); RECOMP_ABI_CALL(0x003206C0u, sub_003206C0); /* call 0x003206C0 */

loc_0031874B: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00318760
 * Original: 0x00318760 - 0x0031876D (13 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318760(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00318760: ;
    MEM32(esp + 8) = 0xFF000701u;
    g_seh_ebp = ebp; sub_0031D640(); return; /* tail jmp 0x0031D640 */

}

/**
 * sub_00318770
 * Original: 0x00318770 - 0x003187C1 (81 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318770: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318790; /* je: equal / zero */

loc_0031877D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318790; /* je: equal / zero */

loc_00318782: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = 0;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00318790: ;
    eax = MEM32(esi + 0x1D80);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003187A3u); RECOMP_ABI_CALL(0x00323040u, sub_00323040); /* call 0x00323040 */

loc_003187A3: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003187BE; /* jne: not equal / not zero */

loc_003187AA: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003187B3u); RECOMP_ABI_CALL(0x00320830u, sub_00320830); /* call 0x00320830 */

loc_003187B3: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003187BC; /* jne: not equal / not zero */

loc_003187BA: ;
    MEM32(edi) = eax;

loc_003187BC: ;
    eax = 0; /* xor self */

loc_003187BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003187D0
 * Original: 0x003187D0 - 0x003187EA (26 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003187D0(void)
{

loc_003187D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    ecx = MEM32(eax + 0x1D80);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003187E6u); RECOMP_ABI_CALL(0x00323080u, sub_00323080); /* call 0x00323080 */

loc_003187E6: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003187F0
 * Original: 0x003187F0 - 0x00318830 (64 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003187F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003187F0: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003187FBu); RECOMP_ABI_CALL(0x00323900u, sub_00323900); /* call 0x00323900 */

loc_003187FB: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031882E; /* je: equal / zero */

loc_00318803: ;
    eax = MEM32(esi + 0x1D80);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318810u); RECOMP_ABI_CALL(0x00323120u, sub_00323120); /* call 0x00323120 */

loc_00318810: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031882E; /* jne: not equal / not zero */

loc_00318818: ;
    PUSH32(esp, 0x0031881Du); RECOMP_ABI_CALL(0x00318730u, sub_00318730); /* call 0x00318730 */

loc_0031881D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031882E; /* je: equal / zero */

loc_00318821: ;
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031882Bu); RECOMP_ABI_CALL(0x003238E0u, sub_003238E0); /* call 0x003238E0 */

loc_0031882B: ;
    esp = esp + 0xC;

loc_0031882E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00318830
 * Original: 0x00318830 - 0x0031886C (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318830: ;
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318838u); RECOMP_ABI_CALL(0x003238C0u, sub_003238C0); /* call 0x003238C0 */

loc_00318838: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031886B; /* je: equal / zero */

loc_00318840: ;
    eax = MEM32(esi + 0x1D80);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031884Du); RECOMP_ABI_CALL(0x003230E0u, sub_003230E0); /* call 0x003230E0 */

loc_0031884D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031886B; /* jne: not equal / not zero */

loc_00318855: ;
    PUSH32(esp, 0x0031885Au); RECOMP_ABI_CALL(0x001AF4E0u, sub_001AF4E0); /* call 0x001AF4E0 */

loc_0031885A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031886B; /* je: equal / zero */

loc_0031885E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318868u); RECOMP_ABI_CALL(0x003238A0u, sub_003238A0); /* call 0x003238A0 */

loc_00318868: ;
    esp = esp + 0xC;

loc_0031886B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00318870
 * Original: 0x00318870 - 0x00318898 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318870(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00318870: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031887Du); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031887D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00318886; /* jne: not equal / not zero */

loc_00318884: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00318886: ;
    eax = esi;
    PUSH32(esp, 0x0031888Du); RECOMP_ABI_CALL(0x003187F0u, sub_003187F0); /* call 0x003187F0 */

loc_0031888D: ;
    PUSH32(esp, 0x00318892u); RECOMP_ABI_CALL(0x00318830u, sub_00318830); /* call 0x00318830 */

loc_00318892: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002123A0(); return; /* tail jmp 0x002123A0 */

}

/**
 * sub_003188A0
 * Original: 0x003188A0 - 0x0031891B (123 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003188A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003188A0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 9;
    esi = edx;
    edi = 0x5D1C90;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    esi = 0; /* xor self */
    MEM32(0x5D1CA0) = esi;
    MEM32(0x5D1CB0) = esi;
    ecx = MEM32(eax);
    ecx = ecx + 0x1F;
    ecx = ecx & 0xFFFFFFE0u;
    MEM32(0x5D1C88) = ecx;
    eax = MEM32(eax + 4);
    ecx = MEM32(esp + 0x14);
    eax = eax + 0x1F;
    eax = eax & 0xFFFFFFE0u;
    MEM32(0x5D1C8C) = eax;
    eax = 0; /* xor self */
    ecx = ecx - 0x5BFC28;
    edi = edi;

loc_003188F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x1C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031890B; /* jge: greater or equal (signed >=) */

loc_003188F5: ;
    edi = MEM32(ecx + eax * 4 + 0x5BFC28);
    edi = edi + 0x1F;
    edi = edi & 0xFFFFFFE0u;
    MEM32(eax * 4 + 0x5BFC28) = edi;
    goto loc_00318912;

loc_0031890B: ;
    MEM32(eax * 4 + 0x5BFC28) = esi;

loc_00318912: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003188F0; /* jl: less (signed <) */

loc_00318918: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00318920
 * Original: 0x00318920 - 0x003189AC (140 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318920(void)
{

loc_00318920: ;
    eax = MEM32(esp + 8);
    eax = eax + 0xF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    eax = eax + edx;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    ecx = ecx << 4;
    eax = ecx + 0x1F;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    eax = eax + edx;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = eax;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((5) & 31u));
    eax = edi;
    eax = eax << 5;
    MEM16(esi + 0xE) = LO16(eax);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + 0x1F;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    eax = eax + edx;
    ecx = eax;
    eax = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x10);
    eax = eax + 0xF;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = ecx;
    edx = edx << 5;
    MEM16(esi + 0xC) = LO16(edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    eax = eax << 4;
    edx = edx << 9;
    edi = edx + ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax << 5;
    MEM32(esi) = edi;
    eax = eax + edi;
    POP32(esp, edi);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003189B0
 * Original: 0x003189B0 - 0x00318A17 (103 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003189B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003189B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003189BD; /* jne: not equal / not zero */

loc_003189B9: ;
    ecx = 0; /* xor self */
    goto loc_003189E3;

loc_003189BD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003189C3u); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_003189C3: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003189DB; /* je: equal / zero */

loc_003189CA: ;
    PUSH32(esp, 0xFF000181u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003189D6u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_003189D6: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003189DB: ;
    eax = MEM32(esi + 0x1C68);
    ecx = MEM32(eax);

loc_003189E3: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003189F0; /* jne: not equal / not zero */

loc_003189EC: ;
    eax = 0; /* xor self */
    goto loc_003189F4;

loc_003189F0: ;
    eax = MEM32(esp + 0x10);

loc_003189F4: ;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003189FCu); RECOMP_ABI_CALL(0x003254E0u, sub_003254E0); /* call 0x003254E0 */

loc_003189FC: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00318A13; /* je: equal / zero */

loc_00318A03: ;
    PUSH32(esp, 0xFF000F12u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318A0Eu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_00318A0E: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00318A13: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00318A20
 * Original: 0x00318A20 - 0x00318A50 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318A20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318A2Bu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_00318A2B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00318A45; /* je: equal / zero */

loc_00318A32: ;
    PUSH32(esp, 0xFF000183u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00318A3Eu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_00318A3E: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00318A45: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318A4Bu); RECOMP_ABI_CALL(0x00321AB0u, sub_00321AB0); /* call 0x00321AB0 */

loc_00318A4B: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00318A50
 * Original: 0x00318A50 - 0x00318A60 (16 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318A50(void)
{

loc_00318A50: ;
    PUSH32(esp, 0x00318A55u); RECOMP_ABI_CALL(0x003253B0u, sub_003253B0); /* call 0x003253B0 */

loc_00318A55: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00318A60
 * Original: 0x00318A60 - 0x00318A93 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318A60: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318A68u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_00318A68: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00318A92; /* je: equal / zero */

loc_00318A6F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318A75u); RECOMP_ABI_CALL(0x00324B50u, sub_00324B50); /* call 0x00324B50 */

loc_00318A75: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318A92; /* je: equal / zero */

loc_00318A7D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318A8Fu); RECOMP_ABI_CALL(0x003189B0u, sub_003189B0); /* call 0x003189B0 */

loc_00318A8F: ;
    esp = esp + 0xC;

loc_00318A92: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00318AA0
 * Original: 0x00318AA0 - 0x00318AB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318AA0(void)
{

loc_00318AA0: ;
    ecx = MEM32(eax + 0x1C74);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00318AADu); RECOMP_ABI_CALL(0x00323120u, sub_00323120); /* call 0x00323120 */

loc_00318AAD: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00318AC0
 * Original: 0x00318AC0 - 0x00318AE9 (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318AC0: ;
    eax = MEM32(ecx + 0x2C);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x9FC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318AD3; /* je: equal / zero */

loc_00318ACF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00318AD5; /* jge: greater or equal (signed >=) */

loc_00318AD3: ;
    esi = eax;

loc_00318AD5: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00318ADBu); RECOMP_ABI_CALL(0x00321740u, sub_00321740); /* call 0x00321740 */

loc_00318ADB: ;
    ecx = 0; /* xor self */
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    POP32(esp, esi);
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00318AF0
 * Original: 0x00318AF0 - 0x00318B07 (23 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318AF0: ;
    _fa = (uint32_t)(MEM32(eax + 0xDFC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xDFC), 0x7FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318B06; /* je: equal / zero */

loc_00318AFC: ;
    MEM32(eax + 0xDD8) = 1;

loc_00318B06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00318B10
 * Original: 0x00318B10 - 0x00318B22 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318B10(void)
{

loc_00318B10: ;
    edx = MEM32(eax + 0x1C74);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00318B1Eu); RECOMP_ABI_CALL(0x00323100u, sub_00323100); /* call 0x00323100 */

loc_00318B1E: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00318B30
 * Original: 0x00318B30 - 0x00318B63 (51 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318B30: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_A(_fa, _fb)) goto loc_00318B46; /* ja: above (unsigned >) */

loc_00318B37: ;
    esi = MEM32(eax + 4);
    esi = esi + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00318B46; /* jae: above or equal (unsigned >=) */

loc_00318B40: ;
    ecx = ecx - edx;
    eax = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00318B46: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00318B5F; /* ja: above (unsigned >) */

loc_00318B4D: ;
    esi = MEM32(eax + 0xC);
    esi = esi + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00318B5F; /* jae: above or equal (unsigned >=) */

loc_00318B56: ;
    eax = MEM32(eax + 4);
    eax = eax - edx;
    eax = eax + ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00318B5F: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00318B70
 * Original: 0x00318B70 - 0x00318BA8 (56 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00318B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318B70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1C70);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318B7Fu); RECOMP_ABI_CALL(0x003235B0u, sub_003235B0); /* call 0x003235B0 */

loc_00318B7F: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x00318B88u); RECOMP_ABI_CALL(0x00322F30u, sub_00322F30); /* call 0x00322F30 */

loc_00318B88: ;
    ecx = MEM32(esi + 0x28);
    esp = esp + 0x10;
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_00318BA5; /* jge: greater or equal (signed >=) */

loc_00318B96: ;
    PUSH32(esp, 0xFF000F1Cu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318BA1u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_00318BA1: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00318BA5: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00318BB0
 * Original: 0x00318BB0 - 0x00318CBE (270 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318BB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00318BB0: ;
    eax = MEM32(esp + 4);
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    MEM32(edi) = 0;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00318BD0u); RECOMP_ABI_CALL(0x00327510u, sub_00327510); /* call 0x00327510 */

loc_00318BD0: ;
    esi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00318BEC; /* je: equal / zero */

loc_00318BD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318BDFu); RECOMP_ABI_CALL(0x003273D0u, sub_003273D0); /* call 0x003273D0 */

loc_00318BDF: ;
    esp = esp + 4;
    MEM32(edi) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00318BEC: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00318BF9; /* jne: not equal / not zero */

loc_00318BF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00318BF9: ;
    edx = MEM32(ebx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    PUSH32(esp, ebp);
    ebp = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00318C09; /* jl: less (signed <) */

loc_00318C04: ;
    ebp = 3;

loc_00318C09: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00318C13; /* jl: less (signed <) */

loc_00318C0E: ;
    eax = 3;

loc_00318C13: ;
    esi = MEM32(ebx);
    esi = esi - ebp;
    esi = esi + edx;
    ecx = ebp;
    edx = ecx;
    ecx = ecx >> 2;
    edi = esp + 0xC;
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
    esi = MEM32(ebx + 8);
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    edi = esp + ebp + 0xC;
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
    edi = eax + ebp + -3;
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00318C6A; /* jle: less or equal (signed <=) */

loc_00318C4E: ;
    edi = edi;

loc_00318C50: ;
    eax = esp + esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00318C5Au); RECOMP_ABI_CALL(0x003273D0u, sub_003273D0); /* call 0x003273D0 */

loc_00318C5A: ;
    ecx = MEM32(esp + 0x1C);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00318C9D; /* jne: not equal / not zero */

loc_00318C65: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00318C50; /* jl: less (signed <) */

loc_00318C6A: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(ebx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00318C7Cu); RECOMP_ABI_CALL(0x00327510u, sub_00327510); /* call 0x00327510 */

loc_00318C7C: ;
    esi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00318CB5; /* je: equal / zero */

loc_00318C85: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318C8Bu); RECOMP_ABI_CALL(0x003273D0u, sub_003273D0); /* call 0x003273D0 */

loc_00318C8B: ;
    edx = MEM32(esp + 0x20);
    esp = esp + 4;
    POP32(esp, ebp);
    MEM32(edx) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00318C9D: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;
    eax = MEM32(ebx);
    edx = MEM32(ebx + 4);
    eax = eax - ebp;
    POP32(esp, ebp);
    eax = eax + edx;
    POP32(esp, edi);
    eax = eax + esi;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00318CB5: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00318CC0
 * Original: 0x00318CC0 - 0x00318DCF (271 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318CC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00318CC0: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    MEM32(edi) = 0;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00318D7A; /* je: equal / zero */

loc_00318CDB: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ebx + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = edx + eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00318CECu); RECOMP_ABI_CALL(0x00327470u, sub_00327470); /* call 0x00327470 */

loc_00318CEC: ;
    esi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00318D09; /* je: equal / zero */

loc_00318CF5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318CFBu); RECOMP_ABI_CALL(0x003273D0u, sub_003273D0); /* call 0x003273D0 */

loc_00318CFB: ;
    esp = esp + 4;
    MEM32(edi) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00318D09: ;
    edx = MEM32(ebx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    ebp = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00318D18; /* jl: less (signed <) */

loc_00318D13: ;
    ebp = 3;

loc_00318D18: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00318D25; /* jl: less (signed <) */

loc_00318D20: ;
    eax = 3;

loc_00318D25: ;
    esi = MEM32(ebx);
    esi = esi - ebp;
    esi = esi + edx;
    ecx = ebp;
    edx = ecx;
    ecx = ecx >> 2;
    edi = esp + 0xC;
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
    esi = MEM32(ebx + 8);
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    edi = esp + ebp + 0xC;
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
    edi = eax + ebp + -3;
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00318D7A; /* jle: less or equal (signed <=) */

loc_00318D60: ;
    eax = esp + esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00318D6Au); RECOMP_ABI_CALL(0x003273D0u, sub_003273D0); /* call 0x003273D0 */

loc_00318D6A: ;
    ecx = MEM32(esp + 0x1C);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00318DAE; /* jne: not equal / not zero */

loc_00318D75: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00318D60; /* jl: less (signed <) */

loc_00318D7A: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00318D8Du); RECOMP_ABI_CALL(0x00327470u, sub_00327470); /* call 0x00327470 */

loc_00318D8D: ;
    esi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00318DC6; /* je: equal / zero */

loc_00318D96: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318D9Cu); RECOMP_ABI_CALL(0x003273D0u, sub_003273D0); /* call 0x003273D0 */

loc_00318D9C: ;
    edx = MEM32(esp + 0x20);
    esp = esp + 4;
    POP32(esp, edi);
    MEM32(edx) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00318DAE: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;
    eax = MEM32(ebx);
    ecx = MEM32(ebx + 4);
    eax = eax - ebp;
    POP32(esp, edi);
    eax = eax + esi;
    POP32(esp, esi);
    eax = eax + ecx;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00318DC6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00318DD0
 * Original: 0x00318DD0 - 0x00318E0C (60 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318DD0: ;
    ecx = MEM32(eax + 0x1C70);
    esp = esp - 0x1C;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00318DE4u); RECOMP_ABI_CALL(0x003234A0u, sub_003234A0); /* call 0x003234A0 */

loc_00318DE4: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00318DFC; /* je: equal / zero */

loc_00318DEB: ;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_00318DFC: ;
    eax = MEM32(esp);
    ecx = MEM32(esp + 4);
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00318E10
 * Original: 0x00318E10 - 0x00318E54 (68 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318E10: ;
    PUSH32(esp, esi);
    esi = eax;
    ecx = MEM32(esi + 0x1C80);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = MEM32(esi + 0x1C70);
    PUSH32(esp, edi);
    edi = esi + 0xD54;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00318E3D; /* jge: greater or equal (signed >=) */

loc_00318E2A: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318E31u); RECOMP_ABI_CALL(0x00322F50u, sub_00322F50); /* call 0x00322F50 */

loc_00318E31: ;
    esp = esp + 8;
    eax = eax + 4;
    MEM32(esi + 0x1C80) = eax;

loc_00318E3D: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00318E51; /* jge: greater or equal (signed >=) */

loc_00318E44: ;
    esi = esi + 0xD28;
    ecx = 0xB;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */

loc_00318E51: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00318E60
 * Original: 0x00318E60 - 0x00318ED5 (117 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318E60: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0xC);
    esp = esp - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x42F4B8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x42F4B8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318EB7; /* je: equal / zero */

loc_00318E70: ;
    MEM32(esp) = 0;
    MEM32(esp + 4) = 0xAC44;

loc_00318E7F: ;
    ecx = MEM32(esp);
    edx = MEM32(esi + 0xEA4);
    eax = MEM32(esi + 0xD24);
    edx = edx + ecx;
    ecx = edx;
    MEM32(esi + 0xEA4) = edx;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00318EA4u); RECOMP_ABI_CALL(0x003208D0u, sub_003208D0); /* call 0x003208D0 */

loc_00318EA4: ;
    ecx = MEM32(esi + 0xE18);
    esp = esp + 0xC;
    eax = eax - ecx;
    if (((int32_t)eax >= 0)) goto loc_00318EB3; /* jns: not sign (positive) */

loc_00318EB1: ;
    eax = 0; /* xor self */

loc_00318EB3: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00318EB7: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318EC7u); RECOMP_ABI_CALL(0x00322BC0u, sub_00322BC0); /* call 0x00322BC0 */

loc_00318EC7: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00318E7F; /* jne: not equal / not zero */

loc_00318ECE: ;
    eax = eax | 0xFFFFFFFFu;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00318EE0
 * Original: 0x00318EE0 - 0x00318EF2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318EE0(void)
{

loc_00318EE0: ;
    edx = MEM32(eax + 0x1C70);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00318EEEu); RECOMP_ABI_CALL(0x00323010u, sub_00323010); /* call 0x00323010 */

loc_00318EEE: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00318F00
 * Original: 0x00318F00 - 0x00318F11 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318F00(void)
{

loc_00318F00: ;
    ecx = MEM32(eax + 0x1C70);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00318F0Du); RECOMP_ABI_CALL(0x00323120u, sub_00323120); /* call 0x00323120 */

loc_00318F0D: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00318F20
 * Original: 0x00318F20 - 0x00318F60 (64 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318F20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFDu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318F50; /* je: equal / zero */

loc_00318F25: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318F40; /* je: equal / zero */

loc_00318F2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00318F3D; /* je: equal / zero */

loc_00318F2E: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00318F39u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_00318F39: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00318F3D: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00318F40: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00318F3D; /* jg: greater (signed >) */

loc_00318F44: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00318F4Cu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_00318F4C: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00318F50: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00318F3D; /* jg: greater (signed >) */

loc_00318F54: ;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00318F5Cu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_00318F5C: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00318F60
 * Original: 0x00318F60 - 0x00318F77 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318F60(void)
{

loc_00318F60: ;
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    edx = edx | 0xFFFFFFFFu;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00318F80
 * Original: 0x00318F80 - 0x00318F90 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318F80(void)
{

loc_00318F80: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x15752A0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00318F8Cu); RECOMP_ABI_CALL(0x003208D0u, sub_003208D0); /* call 0x003208D0 */

loc_00318F8C: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00318F90
 * Original: 0x00318F90 - 0x00318FE9 (89 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318F90: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = edi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00318FAAu); RECOMP_ABI_CALL(0x0031FAA0u, sub_0031FAA0); /* call 0x0031FAA0 */

loc_00318FAA: ;
    ecx = MEM32(ebx + 0xD20);
    eax = MEM32(esp + 0x14);
    eax = eax - ecx;
    ecx = MEM32(esp + 0x18);
    esi = edi + 0xC;
    MEM32(edi + 0x30) = eax;
    MEM32(edi + 0x34) = ecx;
    MEM32(esi) = 1;
    edx = MEM32(ebx + 0xD4C);
    esp = esp + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00318FE3; /* jg: greater (signed >) */

loc_00318FD6: ;
    edi = ebx + 0xD28;
    ecx = 0xB;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */

loc_00318FE3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00318FF0
 * Original: 0x00318FF0 - 0x00319076 (134 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318FF0: ;
    eax = MEM32(ebx + 0xD28);
    esp = esp - 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00319003; /* jne: not equal / not zero */

loc_00318FFD: ;
    eax = 0; /* xor self */
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_00319003: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx + 0xCDC;
    ecx = 8;
    edi = esp + 0x14;
    eax = esp + 8;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031902Au); RECOMP_ABI_CALL(0x0031FAA0u, sub_0031FAA0); /* call 0x0031FAA0 */

loc_0031902A: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = ebx + 0xD2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00319040u); RECOMP_ABI_CALL(0x0031FAA0u, sub_0031FAA0); /* call 0x0031FAA0 */

loc_00319040: ;
    PUSH32(esp, 0x35);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00319048u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_00319048: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x28));
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x30);
    esp = esp + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_G(_fas, _fbs)) goto loc_00319067; /* jg: greater (signed >) */

loc_0031905E: ;
    eax = 1;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_00319067: ;
    eax = eax + edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    SET_LO8(edx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    eax = edx;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00319080
 * Original: 0x00319080 - 0x003191CF (335 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319080(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00319080: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi * 4 + 0x42FA50);
    PUSH32(esp, 0x15752A0);
    ecx = edi + edi;
    ebx = eax;
    eax = MEM32(esi * 4 + 0x42F57C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x003190ADu); RECOMP_ABI_CALL(0x003275A0u, sub_003275A0); /* call 0x003275A0 */

loc_003190AD: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(eax));
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    edx = 0; /* xor self */
    esp = esp + 0xC;
    MEM32(ebp) = esi;
    MEM32(ebp + 4) = ebx;
    ecx = ecx & 1;
    MEM16(ebp + 0x1E) = LO16(ecx);
    eax = eax - MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003191A8; /* je: equal / zero */

loc_003190D9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7512) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x7512 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031913B; /* je: equal / zero */

loc_003190E1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEA24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xEA24 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003191A8; /* jne: not equal / not zero */

loc_003190ED: ;
    ecx = 0x42F5C0;

loc_003190F2: ;
    esi = MEM32(ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    esi = MEM32(ecx + 4);
    MEM32(esp + 0x14) = eax;
    eax = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM32(esp + 0x18) = eax;
    eax = edx;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00319142; /* jge: greater or equal (signed >=) */

loc_00319110: ;
    esi = MEM32(ecx + 0x14);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ebx = 0; /* xor self */
    edi = eax;
    eax = MEM32(ecx + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x18));
    esi = edx;
    ebx = eax;
    eax = MEM32(esp + 0x14);
    MEM32(ebp + 0x10) = edi;
    POP32(esp, edi);
    MEM32(ebp + 0x14) = esi;
    POP32(esp, esi);
    MEM32(ebp + 0xC) = ebx;
    MEM32(ebp + 8) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031913B: ;
    ecx = 0x42F5A0;
    goto loc_003190F2;

loc_00319142: ;
    esi = MEM32(ecx + 0xC);
    eax = eax - edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ebx = eax + 1;
    eax = edx;
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031917C; /* jge: greater or equal (signed >=) */

loc_00319156: ;
    esi = MEM32(ecx + 0x1C);
    esi = esi + eax;
    eax = MEM32(ecx + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x18));
    edi = 0; /* xor self */
    ebx = ebx + eax;
    eax = MEM32(esp + 0x14);
    MEM32(ebp + 0x10) = edi;
    POP32(esp, edi);
    MEM32(ebp + 0x14) = esi;
    POP32(esp, esi);
    MEM32(ebp + 0xC) = ebx;
    MEM32(ebp + 8) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031917C: ;
    esi = MEM32(ecx + 0x14);
    eax = eax - edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edi = eax + 1;
    eax = MEM32(ecx + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x18));
    esi = edx;
    ebx = ebx + eax;
    eax = MEM32(esp + 0x14);
    MEM32(ebp + 0x10) = edi;
    POP32(esp, edi);
    MEM32(ebp + 0x14) = esi;
    POP32(esp, esi);
    MEM32(ebp + 0xC) = ebx;
    MEM32(ebp + 8) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003191A8: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x18)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x18))); }
    ecx = 0x3C;
    esi = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + 0x14) = esi;
    edi = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    ebx = edx;
    MEM32(ebp + 0xC) = ebx;
    MEM32(ebp + 8) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003191D0
 * Original: 0x003191D0 - 0x00319297 (199 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003191D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003191D0: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x1C);
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    ebp = MEM32(ecx);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(ecx + 0x1E);
    esi = esi + eax;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(ecx + 0x18);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + edx;
    esi = esi & 0x80000001u;
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(ebp * 4 + 0x42F57C);
    eax = eax + edx + 1;
    if (((int32_t)esi >= 0)) goto loc_00319209; /* jns: not sign (positive) */

loc_00319204: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 0xFFFFFFFEu;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00319209: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    MEM32(esp + 0x18) = esi;
    edi = 0x3C;
    esi = eax;
    eax = MEM32(ecx + 0x10);
    eax = eax + esi;
    esi = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = edx;
    edx = eax;
    eax = MEM32(ecx + 0xC);
    eax = eax + edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    edi = MEM32(ecx + 8);
    edi = edi + eax;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0031926B; /* je: equal / zero */

loc_00319243: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031926B; /* jne: not equal / not zero */

loc_0031924B: ;
    eax = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031926B; /* je: equal / zero */

loc_0031925D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319266; /* je: equal / zero */

loc_00319261: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031926B; /* jne: not equal / not zero */

loc_00319266: ;
    esi = 2;

loc_0031926B: ;
    edx = MEM32(esp + 0x10);
    MEM32(ebx) = ebp;
    eax = MEM32(ecx + 4);
    ecx = MEM32(esp + 0x14);
    MEM32(ebx + 8) = edi;
    POP32(esp, edi);
    MEM32(ebx + 4) = eax;
    SET_LO16(eax, MEM16(esp + 0x14));
    MEM32(ebx + 0x14) = esi;
    POP32(esp, esi);
    MEM32(ebx + 0xC) = ecx;
    MEM32(ebx + 0x10) = edx;
    MEM16(ebx + 0x1E) = LO16(eax);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003192A0
 * Original: 0x003192A0 - 0x00319314 (116 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003192A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003192A0: ;
    eax = MEM32(ebx + 0xCFC);
    esp = esp - 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00319310; /* jne: not equal / not zero */

loc_003192AD: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx + 0xCDC;
    ecx = 8;
    edi = esp + 0x10;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = 0;
    PUSH32(esp, 0x003192DCu); RECOMP_ABI_CALL(0x0031FAA0u, sub_0031FAA0); /* call 0x0031FAA0 */

loc_003192DC: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 0xC;
    edi = ebx + 0xD00;
    ecx = 8;
    esi = esp + 0x10;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(ebx + 0xD20) = eax;
    MEM32(ebx + 0xD24) = ecx;
    MEM32(ebx + 0xCFC) = 1;
    POP32(esp, esi);

loc_00319310: ;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_00319320
 * Original: 0x00319320 - 0x003193A9 (137 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319320(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00319320: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebp + 0xCDC;
    ecx = 8;
    edi = esp + 0x18;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = esp + 0x10;
    eax = ebp + 0xD28;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ebx = ebp + 0xD80;
    PUSH32(esp, 0x00319360u); RECOMP_ABI_CALL(0x0031FAA0u, sub_0031FAA0); /* call 0x0031FAA0 */

loc_00319360: ;
    edi = ebx + 4;
    ecx = 8;
    esi = esp + 0x24;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    edx = MEM32(ebp + 0xD20);
    ecx = MEM32(esp + 0x48);
    edi = MEM32(esp + 0x20);
    ecx = ecx - edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ebx + 0x24) = ecx;
    MEM32(ebx + 0x28) = edx;
    MEM32(ebx) = 1;
    eax = MEM32(edi + 0x24);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003193A1; /* jg: greater (signed >) */

loc_00319398: ;
    ecx = 0xB;
    esi = ebx;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */

loc_003193A1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_003193B0
 * Original: 0x003193B0 - 0x003193E8 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003193B0(void)
{

loc_003193B0: ;
    edx = MEM32(ecx + 0x10);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x18) = edx;
    SET_LO16(ecx, MEM16(ecx + 0x58));
    MEM16(eax + 0x1C) = LO16(ecx);
    MEM16(eax + 0x1E) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003193F0
 * Original: 0x003193F0 - 0x0031941B (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003193F0(void)
{

loc_003193F0: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(ecx + 0x10);
    edx = MEM32(esp + 4);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x20) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00319420
 * Original: 0x00319420 - 0x0031942E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319420: ;
    edx = MEM32(ecx + 0xE18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas & _fbs, 0)) ? 1 : 0); /* setge */
    esp += 4; return; /* ret */

}

/**
 * sub_00319430
 * Original: 0x00319430 - 0x00319455 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319430: ;
    ecx = MEM32(ecx + 0x1C68);
    ecx = MEM32(ecx + 0x74);
    eax = 0; /* xor self */
    ecx = ecx - 2;
    if ((ecx == 0)) goto loc_00319445; /* je: equal / zero */

loc_00319440: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00319454; /* jne: not equal / not zero */

loc_00319443: ;
    goto loc_0031944A;

loc_00319445: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031944F; /* je: equal / zero */

loc_0031944A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00319454; /* jne: not equal / not zero */

loc_0031944F: ;
    eax = 1;

loc_00319454: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00319460
 * Original: 0x00319460 - 0x00319518 (184 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319460: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x1C68);
    eax = MEM32(esi + 0xF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x74);
    if (TEST_Z(_fa, _fb)) goto loc_003194C3; /* je: equal / zero */

loc_00319478: ;
    edx = MEM32(esi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031948Au); RECOMP_ABI_CALL(0x003276F0u, sub_003276F0); /* call 0x003276F0 */

loc_0031948A: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031949D; /* jne: not equal / not zero */

loc_00319496: ;
    edi = 5;
    goto loc_003194C3;

loc_0031949D: ;
    eax = MEM32(ebx + 0xDD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003194B7; /* jne: not equal / not zero */

loc_003194A7: ;
    PUSH32(esp, 0x49);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003194AFu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_003194AF: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003194BE; /* je: equal / zero */

loc_003194B7: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003194C3; /* jne: not equal / not zero */

loc_003194BE: ;
    edi = 2;

loc_003194C3: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003194E9; /* jne: not equal / not zero */

loc_003194CA: ;
    eax = MEM32(esp + 0x14);
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003194DB; /* je: equal / zero */

loc_003194D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031950F; /* jne: not equal / not zero */

loc_003194DB: ;
    eax = 2;
    POP32(esp, edi);
    MEM32(esi + 0x74) = eax;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_003194E9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003194FC; /* jne: not equal / not zero */

loc_003194EE: ;
    eax = 3;
    POP32(esp, edi);
    MEM32(esi + 0x74) = eax;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_003194FC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031950F; /* jne: not equal / not zero */

loc_00319501: ;
    eax = 5;
    POP32(esp, edi);
    MEM32(esi + 0x74) = eax;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0031950F: ;
    MEM32(esi + 0x74) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00319520
 * Original: 0x00319520 - 0x0031955B (59 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00319520: ;
    ecx = MEM32(eax + 0x2E9C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0031952D; /* jge: greater or equal (signed >=) */

loc_0031952A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0031952D: ;
    edx = MEM32(eax + 0xDD8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0031952A; /* jne: not equal / not zero */

loc_00319537: ;
    edx = MEM32(eax + 0xDA8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xDA4);
    eax = MEM32(eax + 0x2EA0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00319552u); RECOMP_ABI_CALL(0x00327730u, sub_00327730); /* call 0x00327730 */

loc_00319552: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00319560
 * Original: 0x00319560 - 0x0031959F (63 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319560: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0031958F; /* je: equal / zero */

loc_00319563: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0031957F; /* je: equal / zero */

loc_00319566: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0031956F; /* je: equal / zero */

loc_00319569: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0031956F: ;
    eax = MEM32(ecx + 0x9B0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

loc_0031957F: ;
    eax = MEM32(ecx + 0x9AC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

loc_0031958F: ;
    eax = MEM32(ecx + 0x9A8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003195A0
 * Original: 0x003195A0 - 0x0031960C (108 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003195A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003195A0: ;
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003195A8u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_003195A8: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00319609; /* jne: not equal / not zero */

loc_003195AF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003195DC; /* jne: not equal / not zero */

loc_003195B4: ;
    eax = MEM32(esi + 0x918);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x914));
    ecx = MEM32(edi + 4);
    edx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003195CEu); RECOMP_ABI_CALL(0x00327760u, sub_00327760); /* call 0x00327760 */

loc_003195CE: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031960B; /* je: equal / zero */

loc_003195D5: ;
    MEM32(esi + 0x95C) = MEM32(esi + 0x95C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x95C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_003195DC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00319609; /* jne: not equal / not zero */

loc_003195E1: ;
    eax = MEM32(esi + 0x918);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x914));
    ecx = MEM32(edi + 4);
    edx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003195FBu); RECOMP_ABI_CALL(0x00327AA0u, sub_00327AA0); /* call 0x00327AA0 */

loc_003195FB: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031960B; /* je: equal / zero */

loc_00319602: ;
    MEM32(esi + 0x960) = MEM32(esi + 0x960) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x960)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00319609: ;
    eax = 0; /* xor self */

loc_0031960B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00319610
 * Original: 0x00319610 - 0x00319625 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319610(void)
{

loc_00319610: ;
    ecx = MEM32(eax + 0xA4C);
    MEM32(edx) = ecx;
    eax = MEM32(eax + 0xA48);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00319630
 * Original: 0x00319630 - 0x00319656 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319630: ;
    ecx = MEM32(eax + 0xDA4);
    PUSH32(esp, esi);
    esi = eax + 0xD80;
    PUSH32(esp, edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xDFC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xDFC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00319653; /* jge: greater or equal (signed >=) */

loc_00319646: ;
    edi = eax + 0xDAC;
    ecx = 0xB;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */

loc_00319653: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00319660
 * Original: 0x00319660 - 0x00319882 (546 bytes, 177 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319660(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00319660: ;
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    ebp = MEM32(esi + 0x1C68);
    eax = MEM32(ebp + 0x140);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319681; /* je: equal / zero */

loc_00319679: ;
    edx = MEM32(esp + 0x24);
    MEM32(edx) = eax;
    goto loc_003196AB;

loc_00319681: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00319687u); RECOMP_ABI_CALL(0x003217B0u, sub_003217B0); /* call 0x003217B0 */

loc_00319687: ;
    ecx = MEM32(esp + 0x28);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ecx) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_003196A7; /* jne: not equal / not zero */

loc_00319694: ;
    MEM32(esi + 0x974) = 1;
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_003196A7: ;
    edx = MEM32(esp + 0x24);

loc_003196AB: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(edx);
    edi = edi + 0x58;
    ecx = 0x18;
    esi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(MEM32(ecx + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x38), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003197D7; /* jne: not equal / not zero */

loc_003196CC: ;
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003196D9; /* je: equal / zero */

loc_003196D4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031970E; /* jne: not equal / not zero */

loc_003196D9: ;
    ecx = MEM32(ebp + 0x140);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031970E; /* jne: not equal / not zero */

loc_003196E3: ;
    edx = MEM32(ebp + 0x138);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003196EFu); RECOMP_ABI_CALL(0x00321870u, sub_00321870); /* call 0x00321870 */

loc_003196EF: ;
    eax = MEM32(ebp + 0x13C);
    ecx = MEM32(esp + 0x2C);
    MEM32(ebp + 0x138) = eax;
    edx = MEM32(ecx);
    eax = MEM32(esp + 0x28);
    esp = esp + 4;
    MEM32(ebp + 0x13C) = edx;

loc_0031970E: ;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(esp + 0xC) = eax;
    eax = ecx + 0xF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    eax = eax + edx;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    ecx = ecx << 4;
    eax = ecx + 0x1F;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    MEM32(esp + 0x10) = eax;
    esi = eax;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + 0x1F;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    edi = eax;
    MEM32(esp + 0x18) = eax;
    esi = esi << 5;
    edi = edi << 5;
    MEM16(ebx + 0xE) = LO16(esi);
    MEM16(ebx + 0xC) = LO16(edi);
    ecx = MEM32(ebp + 0x138);
    eax = MEM32(ecx + 8);
    MEM32(esp + 0x14) = eax;
    MEM32(ebx + 8) = eax;
    eax = MEM32(esp + 0xC);
    eax = eax + 0xF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    eax = eax + edx;
    edx = MEM32(esp + 0x14);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x10));
    ecx = ecx << 9;
    edx = edx + ecx;
    eax = eax << 4;
    MEM32(esp + 0x14) = edx;
    MEM32(ebx) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(esp + 0x14);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x18));
    eax = eax << 5;
    edx = edx + eax;
    MEM32(ebx + 4) = edx;
    MEM16(ebx + 0x1E) = LO16(esi);
    MEM16(ebx + 0x1C) = LO16(edi);
    edx = MEM32(ebp + 0x13C);
    edx = MEM32(edx + 8);
    ecx = ecx + edx;
    MEM32(ebx + 0x10) = ecx;
    ecx = ecx + eax;
    MEM32(ebx + 0x18) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(ebx + 0x14) = ecx;
    goto loc_00319859;

loc_003197D7: ;
    eax = MEM32(eax + 0x18);
    ecx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003197E8; /* je: equal / zero */

loc_003197E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031980C; /* jne: not equal / not zero */

loc_003197E8: ;
    esi = MEM32(ebp + 0x110);
    eax = MEM32(ebp + 0x114);
    esi = esi ^ ecx;
    eax = eax ^ ecx;
    MEM32(ebp + 0x110) = esi;
    MEM32(ebp + 0x114) = eax;
    eax = MEM32(edx);
    MEM32(ebp + 0x13C) = eax;

loc_0031980C: ;
    ecx = MEM32(ebp + 0x110);
    ecx = ecx << 4;
    eax = ebp + 0x118;
    ecx = ecx + eax;
    edi = MEM32(ecx);
    esi = ebx;
    MEM32(esi) = edi;
    edi = MEM32(ecx + 4);
    MEM32(esi + 4) = edi;
    edi = MEM32(ecx + 8);
    MEM32(esi + 8) = edi;
    ecx = MEM32(ecx + 0xC);
    MEM32(esi + 0xC) = ecx;
    ecx = MEM32(ebp + 0x114);
    ecx = ecx << 4;
    ecx = ecx + eax;
    esi = MEM32(ecx);
    eax = ebx + 0x10;
    MEM32(eax) = esi;
    esi = MEM32(ecx + 4);
    MEM32(eax + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(eax + 8) = esi;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;

loc_00319859: ;
    eax = MEM32(edx);
    ecx = MEM32(eax + 8);
    MEM32(ebx + 0x20) = ecx;
    edx = MEM32(edx);
    ecx = MEM32(esp + 0x20);
    edx = edx + 0x58;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x24) = edx;
    MEM32(ebx + 0x28) = eax;
    MEM32(ebx + 0x2C) = eax;
    MEM32(ecx + 0x974) = eax;
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00319890
 * Original: 0x00319890 - 0x00319929 (153 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319890: ;
    eax = MEM32(ebx + 0xDD8);
    esp = esp - 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00319925; /* jne: not equal / not zero */

loc_003198A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx + 0xD84;
    ecx = 8;
    edi = esp + 0x10;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    edx = 3;
    ecx = ebx;
    PUSH32(esp, 0x003198C0u); RECOMP_ABI_CALL(0x00319430u, sub_00319430); /* call 0x00319430 */

loc_003198C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003198D5; /* jne: not equal / not zero */

loc_003198C4: ;
    eax = edx;
    ecx = ebx;
    PUSH32(esp, 0x003198CDu); RECOMP_ABI_CALL(0x00319560u, sub_00319560); /* call 0x00319560 */

loc_003198CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003198D5; /* jne: not equal / not zero */

loc_003198D1: ;
    MEM32(esp + 0x28) = eax;

loc_003198D5: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003198E9u); RECOMP_ABI_CALL(0x0031FAA0u, sub_0031FAA0); /* call 0x0031FAA0 */

loc_003198E9: ;
    eax = MEM32(esp + 0x14);
    edi = ebx + 0xDDC;
    ecx = 8;
    esi = esp + 0x1C;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 0xD20);
    esp = esp + 0xC;
    eax = eax - ecx;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(ebx + 0xDFC) = eax;
    MEM32(ebx + 0xE00) = ecx;
    MEM32(ebx + 0xDD8) = 1;
    POP32(esp, esi);

loc_00319925: ;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_00319930
 * Original: 0x00319930 - 0x0031997B (75 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319930: ;
    edx = MEM32(eax + 0x34);
    MEM32(eax + 0x3C) = edx;
    edx = MEM32(ecx + 0xE18);
    PUSH32(esp, esi);
    edx = edx - MEM32(ecx + 0xDFC);
    edx = edx + MEM32(eax + 0x30);
    MEM32(eax + 0x38) = edx;
    edx = MEM32(eax + 0x30);
    MEM32(eax + 0x4C) = edx;
    esi = MEM32(eax + 0x30);
    edx = MEM32(ecx + 0xE18);
    edx = edx + esi;
    MEM32(eax + 0x50) = edx;
    esi = MEM32(ecx + 0xF38);
    edx = MEM32(eax + 0x38);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_0031997A; /* jge: greater or equal (signed >=) */

loc_0031996B: ;
    MEM32(ecx + 0xF38) = edx;
    eax = MEM32(eax + 0x3C);
    MEM32(ecx + 0xF3C) = eax;

loc_0031997A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00319980
 * Original: 0x00319980 - 0x003199A2 (34 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319980(void)
{

loc_00319980: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(edx);
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = ebx;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    eax = MEM32(eax + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + 4) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003199B0
 * Original: 0x003199B0 - 0x003199C2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003199B0(void)
{

loc_003199B0: ;
    ecx = MEM32(eax + 0x1C70);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003199BEu); RECOMP_ABI_CALL(0x00323780u, sub_00323780); /* call 0x00323780 */

loc_003199BE: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003199D0
 * Original: 0x003199D0 - 0x00319A27 (87 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003199D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003199D0: ;
    ecx = MEM32(0x5D1CAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00319A23; /* jle: less or equal (signed <=) */

loc_003199DA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00319A23; /* jg: greater (signed >) */

loc_003199DF: ;
    eax = MEM32(0x5D1CA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003199F1; /* je: equal / zero */

loc_003199E8: ;
    eax = MEM32(0x5D1CB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00319A20; /* jne: not equal / not zero */

loc_003199F1: ;
    eax = 0x5D1C88;

loc_003199F6: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00319A23; /* je: equal / zero */

loc_003199FB: ;
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D1C90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D1C90 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003199F6; /* jl: less (signed <) */

loc_00319A05: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00319A20; /* jle: less or equal (signed <=) */

loc_00319A0B: ;
    goto loc_00319A10;

    /* nop */

loc_00319A10: ;
    edx = MEM32(eax * 4 + 0x5BFC28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319A23; /* je: equal / zero */

loc_00319A1B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00319A10; /* jl: less (signed <) */

loc_00319A20: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00319A23: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_00319A30
 * Original: 0x00319A30 - 0x00319A3E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319A30(void)
{

loc_00319A30: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00319A3Au); RECOMP_ABI_CALL(0x00323C40u, sub_00323C40); /* call 0x00323C40 */

loc_00319A3A: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00319A40
 * Original: 0x00319A40 - 0x00319A64 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319A40: ;
    edx = 0; /* xor self */
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = edx;
    eax = eax + 0x18;
    ecx = 0x10;

loc_00319A58: ;
    MEM32(eax + -4) = edx;
    MEM32(eax) = edx;
    eax = eax + 8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00319A58; /* jne: not equal / not zero */

loc_00319A63: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00319A70
 * Original: 0x00319A70 - 0x00319A8C (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319A70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00319A70: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFDu (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00319A82; /* jl: less (signed <) */

loc_00319A79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00319A8B; /* jle: less or equal (signed <=) */

loc_00319A7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319A8B; /* je: equal / zero */

loc_00319A82: ;
    MEM32(esp + 8) = eax;
    g_seh_ebp = ebp; sub_0031D640(); return; /* tail jmp 0x0031D640 */

loc_00319A8B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00319A90
 * Original: 0x00319A90 - 0x00319A9A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319A90(void)
{

loc_00319A90: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00319A96u); RECOMP_ABI_CALL(0x003254A0u, sub_003254A0); /* call 0x003254A0 */

loc_00319A96: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00319AA0
 * Original: 0x00319AA0 - 0x00319AB3 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319AA0(void)
{

loc_00319AA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF000F0Du);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00319AAFu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_00319AAF: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00319AC0
 * Original: 0x00319AC0 - 0x00319BA5 (229 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00319AC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */

loc_00319AC0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x1C68);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00319ACEu); RECOMP_ABI_CALL(0x003216A0u, sub_003216A0); /* call 0x003216A0 */

loc_00319ACE: ;
    ecx = eax + 4;
    MEM32(esi) = ecx;
    MEM32(eax) = 1;
    MEM32(ebp + 0x70) = edi;
    edx = MEM32(esi);
    eax = MEM32(edi + 0x58);
    MEM32(edx) = eax;
    ecx = MEM32(esi);
    edx = MEM32(edi + 0x5C);
    MEM32(ecx + 4) = edx;
    eax = MEM32(esi);
    ecx = MEM32(edi + 0x60);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi);
    eax = MEM32(edi + 0x64);
    MEM32(edx + 0xC) = eax;
    ecx = MEM32(esi);
    edx = MEM32(edi + 0x70);
    MEM32(ecx + 0x10) = edx;
    eax = MEM32(esi);
    ecx = MEM32(edi + 0x38);
    MEM32(eax + 0x14) = ecx;
    edx = MEM32(esi);
    eax = MEM32(edi + 0x3C);
    MEM32(edx + 0x18) = eax;
    ecx = MEM32(esi);
    edx = MEM32(ebx + 0x38);
    MEM32(ecx + 0x1C) = edx;
    eax = MEM32(esi);
    ecx = MEM32(edi + 8);
    MEM32(eax + 0x20) = ecx;
    edx = MEM32(esi);
    eax = MEM32(edi + 0x40);
    MEM32(edx + 0x24) = eax;
    ecx = MEM32(esi);
    edx = MEM32(edi + 0x44);
    MEM32(ecx + 0x28) = edx;
    eax = MEM32(esi);
    ecx = MEM32(edi + 0x48);
    MEM32(eax + 0x2C) = ecx;
    edx = MEM32(esi);
    eax = MEM32(edi + 0x4C);
    MEM32(edx + 0x30) = eax;
    ecx = MEM32(esi);
    edx = MEM32(edi + 0x50);
    MEM32(ecx + 0x34) = edx;
    eax = MEM32(esi);
    ecx = MEM32(edi + 0x54);
    MEM32(eax + 0x38) = ecx;
    edx = MEM32(esi);
    eax = MEM32(edi + 0x90);
    MEM32(edx + 0x3C) = eax;
    ecx = MEM32(esi);
    edx = MEM32(edi + 0x94);
    MEM32(ecx + 0x40) = edx;
    eax = MEM32(esi);
    ecx = MEM32(edi + 0x98);
    MEM32(eax + 0x44) = ecx;
    edx = MEM32(esi);
    eax = MEM32(edi + 0x9C);
    MEM32(edx + 0x48) = eax;
    ecx = MEM32(esi);
    edx = MEM32(edi + 0xA0);
    MEM32(ecx + 0x4C) = edx;
    eax = MEM32(esi);
    ecx = MEM32(edi + 0xA4);
    MEM32(eax + 0x50) = ecx;
    edx = MEM32(esi);
    eax = MEM32(edi + 0xA8);
    esp = esp + 8;
    MEM32(edx + 0x54) = eax;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00319BB0
 * Original: 0x00319BB0 - 0x00319BB4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319BB0(void)
{

loc_00319BB0: ;
    eax = eax + 0xFFFFFFFCu;
    esp += 4; return; /* ret */

}

/**
 * sub_00319BC0
 * Original: 0x00319BC0 - 0x00319BE3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319BC0: ;
    eax = MEM32(ecx + 0x2E94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319BDA; /* je: equal / zero */

loc_00319BCA: ;
    ecx = MEM32(ecx + 0x1C68);
    edx = MEM32(ecx + 0x88);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00319BDD; /* jle: less or equal (signed <=) */

loc_00319BDA: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00319BDD: ;
    eax = eax + 0xAC4;
    esp += 4; return; /* ret */

}

/**
 * sub_00319BF0
 * Original: 0x00319BF0 - 0x00319CA1 (177 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319BF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00319BFBu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_00319BFB: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319C13; /* je: equal / zero */

loc_00319C02: ;
    PUSH32(esp, 0xFF000185u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00319C0Eu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_00319C0E: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00319C13: ;
    eax = MEM32(esi + 0x1C68);
    ecx = MEM32(esp + 0xC);
    eax = eax + 0xCCC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00319C97; /* je: equal / zero */

loc_00319C27: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319C97; /* je: equal / zero */

loc_00319C2F: ;
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319C97; /* je: equal / zero */

loc_00319C37: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x2C);
    ebx = ebx + 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00319C54; /* jge: greater or equal (signed >=) */

loc_00319C42: ;
    PUSH32(esp, 0xFF000F1Du);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00319C4Du); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_00319C4D: ;
    esp = esp + 8;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00319C54: ;
    MEM32(eax) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 4) = edi;
    ecx = ecx + edx;
    MEM32(eax + 8) = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0x10) = 0;
    esi = 0; /* xor self */
    eax = eax + 0x18;
    edi = edi;

loc_00319C70: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x10 (32-bit) */
    ebx = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00319C7C; /* jl: less (signed <) */

loc_00319C77: ;
    ebx = 0x10;

loc_00319C7C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00319C91; /* jge: greater or equal (signed >=) */

loc_00319C80: ;
    MEM32(eax + -4) = ecx;
    ecx = ecx + edx;
    MEM32(eax) = 0;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 8;
    goto loc_00319C70;

loc_00319C91: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00319C97: ;
    PUSH32(esp, 0x00319C9Cu); RECOMP_ABI_CALL(0x00319A40u, sub_00319A40); /* call 0x00319A40 */

loc_00319C9C: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00319CB0
 * Original: 0x00319CB0 - 0x00319D4F (159 bytes, 43 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319CB0: ;
    PUSH32(esp, 0x00319CB5u); RECOMP_ABI_CALL(0x002123A0u, sub_002123A0); /* call 0x002123A0 */

loc_00319CB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319CC2; /* je: equal / zero */

loc_00319CB9: ;
    /* nop */

loc_00319CC0: ;
    goto loc_00319CC0;

loc_00319CC2: ;
    PUSH32(esp, 0x5BFC68);
    PUSH32(esp, 8);
    PUSH32(esp, 0x00319CCEu); RECOMP_ABI_CALL(0x00325550u, sub_00325550); /* call 0x00325550 */

loc_00319CCE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319CF7; /* je: equal / zero */

loc_00319CD5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF03FF05u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF03FF05u (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x12;
    ecx = ecx + 0xFF000F01u;
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00319CF3u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_00319CF3: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00319CF7: ;
    edx = 0; /* xor self */
    MEM32(0x5D1C90) = edx;
    MEM32(0x5D1C94) = edx;
    MEM32(0x5D1C98) = edx;
    MEM32(0x5D1C9C) = edx;
    MEM32(0x5D1CA0) = edx;
    MEM32(0x5D1CA4) = edx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    MEM32(0x5D1C88) = eax;
    MEM32(0x5D1CA8) = edx;
    ecx = 0x10;
    edi = 0x5BFC28;
    MEM32(0x5D1CAC) = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x5D1CB0) = edx;
    MEM32(0x5D1C8C) = eax;
    MEM32(0x6E6A38) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00319D50
 * Original: 0x00319D50 - 0x00319DDE (142 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00319D50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x1C68);
    ebx = MEM32(esi);
    eax = edi;
    PUSH32(esp, 0x00319D62u); RECOMP_ABI_CALL(0x00318F00u, sub_00318F00); /* call 0x00318F00 */

loc_00319D62: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00319D70; /* jne: not equal / not zero */

loc_00319D67: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00319D70: ;
    eax = MEM32(edi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00319D81; /* je: equal / zero */

loc_00319D77: ;
    eax = MEM32(edi + 0xF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00319D67; /* je: equal / zero */

loc_00319D81: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00319D8Cu); RECOMP_ABI_CALL(0x00327630u, sub_00327630); /* call 0x00327630 */

loc_00319D8C: ;
    eax = MEM32(esp + 0x10);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00319D67; /* je: equal / zero */

loc_00319D9A: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00319DA2u); RECOMP_ABI_CALL(0x00322F70u, sub_00322F70); /* call 0x00322F70 */

loc_00319DA2: ;
    ecx = MEM32(esi + 0xF4);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00319D67; /* jge: greater or equal (signed >=) */

loc_00319DAF: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00319DB7u); RECOMP_ABI_CALL(0x00323920u, sub_00323920); /* call 0x00323920 */

loc_00319DB7: ;
    esi = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00319DC5u); RECOMP_ABI_CALL(0x00322F70u, sub_00322F70); /* call 0x00322F70 */

loc_00319DC5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x00319DCEu); RECOMP_ABI_CALL(0x00322F30u, sub_00322F30); /* call 0x00322F30 */

loc_00319DCE: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = ecx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00319DE0
 * Original: 0x00319DE0 - 0x00319E32 (82 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319DE0: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00319DE7u); RECOMP_ABI_CALL(0x00321740u, sub_00321740); /* call 0x00321740 */

loc_00319DE7: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00319E0D; /* je: equal / zero */

loc_00319DF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00319DF7u); RECOMP_ABI_CALL(0x00321710u, sub_00321710); /* call 0x00321710 */

loc_00319DF7: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319E30; /* je: equal / zero */

loc_00319DFE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00319E30; /* jne: not equal / not zero */

loc_00319E03: ;
    eax = MEM32(esi + 0x964);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319E30; /* je: equal / zero */

loc_00319E0D: ;
    ecx = 1;
    eax = esi;
    PUSH32(esp, 0x00319E19u); RECOMP_ABI_CALL(0x00318B10u, sub_00318B10); /* call 0x00318B10 */

loc_00319E19: ;
    eax = MEM32(esi + 0x94C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00319E30; /* jne: not equal / not zero */

loc_00319E23: ;
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00319E2Du); RECOMP_ABI_CALL(0x0031ECA0u, sub_0031ECA0); /* call 0x0031ECA0 */

loc_00319E2D: ;
    esp = esp + 0xC;

loc_00319E30: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00319E40
 * Original: 0x00319E40 - 0x00319F4E (270 bytes, 103 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319E40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00319E40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    ebx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00319F23; /* je: equal / zero */

loc_00319E50: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00319F23; /* je: equal / zero */

loc_00319E5A: ;
    if (CMP_B(_fa, _fb)) goto loc_00319EBD; /* jb: below (unsigned <) */

loc_00319E5C: ;
    edx = MEM32(ebx + 4);
    eax = edx + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00319EBD; /* jae: above or equal (unsigned >=) */

loc_00319E66: ;
    eax = ebp;
    eax = eax - edx;
    eax = eax - ecx;
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00319EB4; /* jle: less or equal (signed <=) */

loc_00319E73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00319F23; /* jg: greater (signed >) */

loc_00319E7C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 4;
    ecx = ecx - eax;
    edx = ecx;
    ecx = ecx >> 2;
    esi = ebp;
    edi = esp + 0x18;
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
    esi = MEM32(ebx + 8);
    ecx = eax;
    ecx = ecx >> 2;
    edi = esp + 0x1C;
    edi = edi - eax;
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
    goto loc_00319EE2;

loc_00319EB4: ;
    ecx = MEM32(ebp);
    MEM32(esp + 0x10) = ecx;
    goto loc_00319EE2;

loc_00319EBD: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00319F23; /* jb: below (unsigned <) */

loc_00319EC4: ;
    ecx = MEM32(ebx + 0xC);
    edx = eax + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00319F23; /* jae: above or equal (unsigned >=) */

loc_00319ECE: ;
    edx = ebp;
    edx = edx - eax;
    edx = edx - ecx;
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00319F23; /* jg: greater (signed >) */

loc_00319EDB: ;
    eax = MEM32(ebp);
    MEM32(esp + 0x10) = eax;

loc_00319EE2: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00319EECu); RECOMP_ABI_CALL(0x003273D0u, sub_003273D0); /* call 0x003273D0 */

loc_00319EEC: ;
    eax = eax + 0xFFFFFFFCu;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7C (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00319F23; /* ja: above (unsigned >) */

loc_00319EF7: ;
    edx = ZX8(MEM8(eax + 0x319F60));
    { uint32_t _jt = MEM32(edx * 4 + 0x319F50); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00319F05u) goto loc_00319F05;
    if (_jt == 0x00319F23u) goto loc_00319F23;
    if (_jt == 0x00319F2Bu) goto loc_00319F2B;
    if (_jt == 0x00319F49u) goto loc_00319F49;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00319F05: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319F49; /* je: equal / zero */

loc_00319F0C: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 0x00319F18u); RECOMP_ABI_CALL(0x00318BB0u, sub_00318BB0); /* call 0x00318BB0 */

loc_00319F18: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319F23; /* je: equal / zero */

loc_00319F1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00319F49; /* jne: not equal / not zero */

loc_00319F23: ;
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00319F2B: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(0x48) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 0x48 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319F49; /* je: equal / zero */

loc_00319F32: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00319F3Eu); RECOMP_ABI_CALL(0x00318BB0u, sub_00318BB0); /* call 0x00318BB0 */

loc_00319F3E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319F23; /* je: equal / zero */

loc_00319F45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00319F23; /* je: equal / zero */

loc_00319F49: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00319F4E
 * Original: 0x00319F4E - 0x00319FE0 (146 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319F4E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319F4E: ;
    edi = edi;
    ebx = ebx - MEM32(edi + -1627062223);
    MEM32(eax) = MEM32(eax) ^ eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    MEM32(eax) = MEM32(eax) ^ eax;
    ebx = ebx & MEM32(edi + 0x3000031);
    eax = eax + MEM32(ebx);
    MEM32(ebx) = MEM32(ebx) + eax;
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    SET_LO8(eax, LO8(eax) + MEM8(ebx));
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(ebx);
    SET_LO8(ecx, LO8(ecx) + HI8(eax));
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00319FE0
 * Original: 0x00319FE0 - 0x0031A031 (81 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319FE0: ;
    eax = MEM32(esi + 0xD28);
    esp = esp - 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00319FF3; /* jne: not equal / not zero */

loc_00319FED: ;
    eax = 0; /* xor self */
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_00319FF3: ;
    PUSH32(esp, ebx);
    ecx = esi + 0xD2C;
    ebx = esp + 0xC;
    PUSH32(esp, 0x0031A003u); RECOMP_ABI_CALL(0x003191D0u, sub_003191D0); /* call 0x003191D0 */

loc_0031A003: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = ebx;
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = 0;
    PUSH32(esp, 0x0031A01Du); RECOMP_ABI_CALL(0x0031FAA0u, sub_0031FAA0); /* call 0x0031FAA0 */

loc_0031A01D: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0xD20);
    esp = esp + 0xC;
    eax = eax - ecx;
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_0031A040
 * Original: 0x0031A040 - 0x0031A0BC (124 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031A040(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A040: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 8;
    eax = MEM32(esi);
    ecx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0031A057u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031A057: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A0A9; /* jne: not equal / not zero */

loc_0031A063: ;
    edx = MEM32(esp);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031A06Cu); RECOMP_ABI_CALL(0x003273D0u, sub_003273D0); /* call 0x003273D0 */

loc_0031A06C: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A0A9; /* jne: not equal / not zero */

loc_0031A076: ;
    eax = MEM32(esi);
    ecx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0031A082u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031A082: ;
    ecx = 4;
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031A08Eu); RECOMP_ABI_CALL(0x00318EE0u, sub_00318EE0); /* call 0x00318EE0 */

loc_0031A08E: ;
    edx = MEM32(esi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0031A09Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031A09D: ;
    eax = MEM32(esp + 0x20);
    esp = esp + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A063; /* je: equal / zero */

loc_0031A0A9: ;
    ecx = MEM32(esi);
    edx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x0031A0B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031A0B5: ;
    esp = esp + 0xC;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A0C0
 * Original: 0x0031A0C0 - 0x0031A0E5 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0031A0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A0C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A0DC; /* je: equal / zero */

loc_0031A0C7: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0031A0E2; /* jg: greater (signed >) */

loc_0031A0CE: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x0031A0D7u); RECOMP_ABI_CALL(0x00318F00u, sub_00318F00); /* call 0x00318F00 */

loc_0031A0D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A0E2; /* jne: not equal / not zero */

loc_0031A0DC: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0031A0E2: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0031A0F0
 * Original: 0x0031A0F0 - 0x0031A1CB (219 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A0F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A0F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(ebx + 0x14C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x14);
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax * 4 + 0x42FA50);
    MEM32(esp + 8) = eax;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0031A12F; /* jge: greater or equal (signed >=) */

loc_0031A114: ;
    ecx = ebp;
    PUSH32(esp, 0x0031A11Bu); RECOMP_ABI_CALL(0x00318F80u, sub_00318F80); /* call 0x00318F80 */

loc_0031A11B: ;
    ecx = MEM32(edi);
    ecx = ecx - eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & ecx;
    MEM32(ebx + 0x14C) = edx;

loc_0031A12F: ;
    ecx = MEM32(ebx + 0x14C);
    eax = MEM32(edi);
    eax = eax - ecx;
    ecx = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ebx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx & eax;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A17C; /* je: equal / zero */

loc_0031A14C: ;
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(edi + 4);
    MEM32(esi + 0x10) = edx;
    eax = MEM32(edi + 8);
    edx = MEM32(esp + 0x10);
    MEM32(esi + 0x14) = eax;
    MEM32(esi) = ebp;
    MEM32(esi + 4) = 0;
    eax = MEM32(edx + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    MEM32(esi + 8) = ecx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0031A17C: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A19D; /* je: equal / zero */

loc_0031A184: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + eax;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = 0;
    MEM32(esi) = 0;

loc_0031A19D: ;
    edx = MEM32(esi);
    eax = MEM32(esi + 8);
    ebp = ebp - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0031A1AA; /* jg: greater (signed >) */

loc_0031A1A8: ;
    eax = ebp;

loc_0031A1AA: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 8);
    ecx = ecx + ebp;
    PUSH32(esp, 0x0031A1BBu); RECOMP_ABI_CALL(0x00318F80u, sub_00318F80); /* call 0x00318F80 */

loc_0031A1BB: ;
    ebx = ebx + eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    POP32(esp, ebp);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A1D0
 * Original: 0x0031A1D0 - 0x0031A364 (404 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A1D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A1D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebx = eax;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x1C68);
    eax = ebx + 0xCDC;
    ecx = esi;
    PUSH32(esp, 0x0031A1EDu); RECOMP_ABI_CALL(0x003193B0u, sub_003193B0); /* call 0x003193B0 */

loc_0031A1ED: ;
    eax = MEM32(esp + 0x18);
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A217; /* je: equal / zero */

loc_0031A1F8: ;
    eax = 0; /* xor self */
    /* nop */

loc_0031A200: ;
    MEM16(ebx + eax * 4 + 0x1158) = LO16(ebp);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031A200; /* jl: less (signed <) */

loc_0031A20E: ;
    MEM16(ebx + 0x115A) = LO16(ebp);
    goto loc_0031A25C;

loc_0031A217: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A224; /* je: equal / zero */

loc_0031A21F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A25C; /* jne: not equal / not zero */

loc_0031A224: ;
    eax = MEM32(edi + 0x13C);
    eax = MEM32(eax + 0x6C);
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031A23A; /* jge: greater or equal (signed >=) */

loc_0031A234: ;
    ecx = ecx + 0x400;

loc_0031A23A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031A25C; /* jge: greater or equal (signed >=) */

loc_0031A23F: ;
    /* nop */

loc_0031A240: ;
    edx = eax;
    edx = edx & 0x8000003Fu;
    if (((int32_t)edx >= 0)) goto loc_0031A24F; /* jns: not sign (positive) */

loc_0031A24A: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFFC0u;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0031A24F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM16(ebx + edx * 4 + 0x1158) = LO16(ebp);
    if (CMP_L(_fas, _fbs)) goto loc_0031A240; /* jl: less (signed <) */

loc_0031A25C: ;
    ecx = MEM32(esi + 0x14);
    ecx = ecx & 0x8000003Fu;
    if (((int32_t)ecx >= 0)) goto loc_0031A26C; /* jns: not sign (positive) */

loc_0031A267: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFC0u;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0031A26C: ;
    SET_LO16(eax, MEM16(ebx + 0xCF8));
    edx = MEM32(esp + 0x18);
    MEM16(ebx + ecx * 4 + 0x1158) = LO16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A28F; /* je: equal / zero */

loc_0031A285: ;
    MEM16(ebx + ecx * 4 + 0x115A) = LO16(eax);
    goto loc_0031A2ED;

loc_0031A28F: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A2A6; /* jne: not equal / not zero */

loc_0031A294: ;
    _fa = (uint32_t)(MEM16(ebx + 0x115A)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x115A), LO16(ebp) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A2A6; /* jne: not equal / not zero */

loc_0031A29D: ;
    MEM16(ebx + 0x115A) = LO16(eax);
    goto loc_0031A2ED;

loc_0031A2A6: ;
    esi = 0; /* xor self */
    edx = ecx + 0x3F;
    goto loc_0031A2B0;

    /* nop */

loc_0031A2B0: ;
    eax = edx;
    eax = eax & 0x8000003Fu;
    if (((int32_t)eax >= 0)) goto loc_0031A2BE; /* jns: not sign (positive) */

loc_0031A2B9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFC0u;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0031A2BE: ;
    _fa = (uint32_t)(MEM16(ebx + eax * 4 + 0x1158)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + eax * 4 + 0x1158), LO16(ebp) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A2D1; /* jne: not equal / not zero */

loc_0031A2C8: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031A2B0; /* jl: less (signed <) */

loc_0031A2CF: ;
    goto loc_0031A2E9;

loc_0031A2D1: ;
    SET_LO16(edx, MEM16(ebx + eax * 4 + 0x115A));
    SET_LO16(edx, LO16(edx) + MEM16(ebx + eax * 4 + 0x1158));
    MEM16(ebx + ecx * 4 + 0x115A) = LO16(edx);

loc_0031A2E9: ;
    esi = MEM32(esp + 0x14);

loc_0031A2ED: ;
    SET_LO16(eax, MEM16(ebx + ecx * 4 + 0x115A));
    edx = ebx + ecx * 4 + 0x115A;
    MEM16(ebx + 0xCFA) = LO16(eax);
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A35F; /* jne: not equal / not zero */

loc_0031A309: ;
    SET_LO16(ecx, MEM16(ebx + ecx * 4 + 0x1158));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(ecx), LO16(ecx) (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A35F; /* je: equal / zero */

loc_0031A316: ;
    eax = MEM32(edi + 0x13C);
    eax = MEM32(eax + 0x6C);
    eax = eax & 0x8000003Fu;
    if (((int32_t)eax >= 0)) goto loc_0031A32B; /* jns: not sign (positive) */

loc_0031A326: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFC0u;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0031A32B: ;
    SET_LO16(edx, MEM16(edx));
    SET_LO16(edx, LO16(edx) + LO16(ecx));
    MEM16(ebx + eax * 4 + 0x115A) = LO16(edx);
    ecx = MEM32(edi + 0x13C);
    MEM16(ecx + 0x2E) = LO16(edx);
    eax = MEM32(edi + 0x13C);
    PUSH32(esp, 0x0031A34Eu); RECOMP_ABI_CALL(0x00318F90u, sub_00318F90); /* call 0x00318F90 */

loc_0031A34E: ;
    eax = MEM32(edi + 0x13C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    ecx = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00319930(); return; /* tail jmp 0x00319930 */

loc_0031A35F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A370
 * Original: 0x0031A370 - 0x0031A45C (236 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A370(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A370: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x14);
    esi = ecx;
    ecx = MEM32(eax + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0031A3A2; /* je: equal / zero */

loc_0031A386: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031A3A2; /* jl: less (signed <) */

loc_0031A38A: ;
    eax = MEM32(eax + 0x1C);
    esi = esi + 0xCDC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031A39Au); RECOMP_ABI_CALL(0x00319080u, sub_00319080); /* call 0x00319080 */

loc_0031A39A: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031A3A2: ;
    _fa = (uint32_t)(MEM32(esi + 0xD28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD28), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A3DF; /* jne: not equal / not zero */

loc_0031A3AA: ;
    _fa = (uint32_t)(MEM32(esi + 0x2E94)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2E94), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A457; /* jne: not equal / not zero */

loc_0031A3B6: ;
    POP32(esp, edi);
    MEM32(esi + 0xCE0) = ebx;
    MEM32(esi + 0xCE4) = ebx;
    MEM32(esi + 0xCE8) = ebx;
    MEM32(esi + 0xCEC) = ebx;
    MEM32(esi + 0xCF0) = ebx;
    MEM32(esi + 0xCDC) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031A3DF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A40F; /* je: equal / zero */

loc_0031A3E3: ;
    ebx = esi + 0xCDC;
    ecx = esi + 0xD2C;
    PUSH32(esp, 0x0031A3F4u); RECOMP_ABI_CALL(0x003191D0u, sub_003191D0); /* call 0x003191D0 */

loc_0031A3F4: ;
    SET_LO16(eax, MEM16(esi + 0xCFA));
    MEM16(esi + 0x115A) = LO16(eax);
    MEM16(esi + edi * 4 + 0x115A) = LO16(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031A40F: ;
    eax = MEM32(esi + 0xD2C);
    ecx = MEM32(esi + 0xD30);
    edx = MEM32(esi + 0xD34);
    MEM32(esi + 0xCDC) = eax;
    eax = MEM32(esi + 0xD38);
    MEM32(esi + 0xCE0) = ecx;
    ecx = MEM32(esi + 0xD3C);
    MEM32(esi + 0xCE4) = edx;
    edx = MEM32(esi + 0xD40);
    MEM32(esi + 0xCE8) = eax;
    MEM32(esi + 0xCEC) = ecx;
    MEM32(esi + 0xCF0) = edx;

loc_0031A457: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A460
 * Original: 0x0031A460 - 0x0031A4DD (125 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A460(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A460: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp;
    edi = eax;
    PUSH32(esp, 0x0031A473u); RECOMP_ABI_CALL(0x00319BC0u, sub_00319BC0); /* call 0x00319BC0 */

loc_0031A473: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A4D8; /* je: equal / zero */

loc_0031A479: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A4D8; /* jne: not equal / not zero */

loc_0031A47E: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    ecx = ebx + 0x38;
    if (CMP_L(_fas, _fbs)) goto loc_0031A490; /* jl: less (signed <) */

loc_0031A48B: ;
    eax = 0x200;

loc_0031A490: ;
    PUSH32(esp, eax);
    MEM32(ecx + 0x200) = eax;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031A4A0u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_0031A4A0: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3FFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A4B5; /* jne: not equal / not zero */

loc_0031A4AB: ;
    eax = 0; /* xor self */
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = eax;
    goto loc_0031A4C2;

loc_0031A4B5: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x32);
    MEM32(ebx + 4) = esi;
    MEM32(ebx + 8) = 1;

loc_0031A4C2: ;
    esi = ebp + 0xCFC;
    edi = ebx + 0xC;
    ecx = 0xB;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM32(ebx) = 1;

loc_0031A4D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A4E0
 * Original: 0x0031A4E0 - 0x0031A5EE (270 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A4E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A4E0: ;
    esp = esp - 0x14;
    eax = MEM32(ebx + 0x1C68);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx + 0xCC0;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(edi + 0x118);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031A504; /* jne: not equal / not zero */

loc_0031A500: ;
    esi = 0; /* xor self */
    goto loc_0031A51A;

loc_0031A504: ;
    esi = MEM32(edi + 0x158);
    edx = MEM32(edi + 0x13C);
    eax = MEM32(edi + 0xE4);
    esi = esi - edx;
    esi = esi + eax;

loc_0031A51A: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebp = MEM32(edi + 0xE8);
    if (TEST_Z(_fa, _fb)) goto loc_0031A537; /* je: equal / zero */

loc_0031A527: ;
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0031A52Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031A52D: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0031A537: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A548; /* jne: not equal / not zero */

loc_0031A53C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031A543u); RECOMP_ABI_CALL(0x0031F790u, sub_0031F790); /* call 0x0031F790 */

loc_0031A543: ;
    esp = esp + 8;
    goto loc_0031A54D;

loc_0031A548: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A559; /* jne: not equal / not zero */

loc_0031A54D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031A554u); RECOMP_ABI_CALL(0x0031F820u, sub_0031F820); /* call 0x0031F820 */

loc_0031A554: ;
    esp = esp + 8;
    esi = eax;

loc_0031A559: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031A55Fu); RECOMP_ABI_CALL(0x0031FF30u, sub_0031FF30); /* call 0x0031FF30 */

loc_0031A55F: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0031A57B; /* jg: greater (signed >) */

loc_0031A569: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx + 0x84);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xA38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + 0xA38) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031A5C8; /* jge: greater or equal (signed >=) */

loc_0031A57B: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031A58Bu); RECOMP_ABI_CALL(0x003205A0u, sub_003205A0); /* call 0x003205A0 */

loc_0031A58B: ;
    edi = MEM32(esp + 0x1C);
    esp = esp + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0031A5C8; /* jl: less (signed <) */

loc_0031A596: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = esp + 0x1C;
    eax = ebx;
    PUSH32(esp, 0x0031A5A6u); RECOMP_ABI_CALL(0x00319610u, sub_00319610); /* call 0x00319610 */

loc_0031A5A6: ;
    eax = MEM32(esp + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x1C)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x1C))); }
    PUSH32(esp, ebp);
    esi = esi - eax;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031A5C1u); RECOMP_ABI_CALL(0x00327730u, sub_00327730); /* call 0x00327730 */

loc_0031A5C1: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A5D1; /* je: equal / zero */

loc_0031A5C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0031A5D1: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 0x84);
    POP32(esp, edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(eax + 0x84) = ecx;
    eax = 1;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0031A5F0
 * Original: 0x0031A5F0 - 0x0031A682 (146 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A5F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A5F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x1C68);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = edi;
    PUSH32(esp, 0x0031A605u); RECOMP_ABI_CALL(0x00319630u, sub_00319630); /* call 0x00319630 */

loc_0031A605: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031A60Fu); RECOMP_ABI_CALL(0x0030F450u, sub_0030F450); /* call 0x0030F450 */

loc_0031A60F: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x0031A61Au); RECOMP_ABI_CALL(0x00327F40u, sub_00327F40); /* call 0x00327F40 */

loc_0031A61A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ebp = eax;
    PUSH32(esp, 0x0031A626u); RECOMP_ABI_CALL(0x0030F450u, sub_0030F450); /* call 0x0030F450 */

loc_0031A626: ;
    esi = eax;
    esi = esi - MEM32(esp + 0x2C);
    PUSH32(esp, 0xFF000F07u);
    edx = esi;
    eax = ebp;
    ecx = edi;
    PUSH32(esp, 0x0031A63Cu); RECOMP_ABI_CALL(0x00318F20u, sub_00318F20); /* call 0x00318F20 */

loc_0031A63C: ;
    ebp = eax;
    esp = esp + 0x24;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0x0031A64Au); RECOMP_ABI_CALL(0x00318EE0u, sub_00318EE0); /* call 0x00318EE0 */

loc_0031A64A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A655; /* je: equal / zero */

loc_0031A64E: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0031A655: ;
    eax = MEM32(ebx + 0xE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031A669; /* jne: not equal / not zero */

loc_0031A65F: ;
    MEM32(ebx + 0x144) = 1;

loc_0031A669: ;
    eax = MEM32(ebx + 0xA4);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031A678u); RECOMP_ABI_CALL(0x0031DF20u, sub_0031DF20); /* call 0x0031DF20 */

loc_0031A678: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A690
 * Original: 0x0031A690 - 0x0031A6AB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A690(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A690: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx + 0xD80;
    edi = eax + 0xC;
    ecx = 0xB;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    ecx = edx;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00319930(); return; /* tail jmp 0x00319930 */

}

/**
 * sub_0031A6B0
 * Original: 0x0031A6B0 - 0x0031A773 (195 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A6B0: ;
    eax = MEM32(esi + 0x1C70);
    esp = esp - 0x20;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031A6C5u); RECOMP_ABI_CALL(0x003234A0u, sub_003234A0); /* call 0x003234A0 */

loc_0031A6C5: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031A76F; /* jne: not equal / not zero */

loc_0031A6D0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A76F; /* je: equal / zero */

loc_0031A6DC: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ebx = esp + 0x10;
    PUSH32(esp, 0x0031A6F0u); RECOMP_ABI_CALL(0x00318BB0u, sub_00318BB0); /* call 0x00318BB0 */

loc_0031A6F0: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0031A71B; /* jne: not equal / not zero */

loc_0031A6F8: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0x10);
    eax = edx + ecx + -3;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    edx = eax;
    eax = esi;
    PUSH32(esp, 0x0031A717u); RECOMP_ABI_CALL(0x003199B0u, sub_003199B0); /* call 0x003199B0 */

loc_0031A717: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_0031A71B: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    edx = MEM32(esp + 8);
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_0031A73F; /* ja: above (unsigned >) */

loc_0031A728: ;
    edi = ecx + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0031A73F; /* jae: above or equal (unsigned >=) */

loc_0031A72F: ;
    eax = eax - ecx;
    edx = eax;
    POP32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x0031A73Bu); RECOMP_ABI_CALL(0x003199B0u, sub_003199B0); /* call 0x003199B0 */

loc_0031A73B: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_0031A73F: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0031A763; /* ja: above (unsigned >) */

loc_0031A747: ;
    edi = MEM32(esp + 0x14);
    edi = edi + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0031A763; /* jae: above or equal (unsigned >=) */

loc_0031A751: ;
    eax = eax - ecx;
    eax = eax + edx;
    edx = eax;
    POP32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x0031A75Fu); RECOMP_ABI_CALL(0x003199B0u, sub_003199B0); /* call 0x003199B0 */

loc_0031A75F: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_0031A763: ;
    eax = 0; /* xor self */
    edx = eax;
    POP32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x0031A76Fu); RECOMP_ABI_CALL(0x003199B0u, sub_003199B0); /* call 0x003199B0 */

loc_0031A76F: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0031A780
 * Original: 0x0031A780 - 0x0031A7DF (95 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A780(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A780: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    esi = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0031A7DA; /* jle: less or equal (signed <=) */

loc_0031A792: ;
    eax = esi + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi) = edi;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0x0031A7A1u); RECOMP_ABI_CALL(0x0031FF40u, sub_0031FF40); /* call 0x0031FF40 */

loc_0031A7A1: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + ebx * 4);
    esp = esp + 8;
    eax = esi + 0x58;
    MEM32(esi + 8) = edx;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x3C) = 1;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x44) = edi;
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 0x4C) = edi;
    MEM32(esi + 0x50) = edi;
    PUSH32(esp, 0x0031A7CFu); RECOMP_ABI_CALL(0x00319A30u, sub_00319A30); /* call 0x00319A30 */

loc_0031A7CF: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 0xB8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031A792; /* jl: less (signed <) */

loc_0031A7DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A7E0
 * Original: 0x0031A7E0 - 0x0031A84B (107 bytes, 38 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A7E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A7E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = MEM32(ebp + 0x1C68);
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A846; /* je: equal / zero */

loc_0031A7F2: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx + 4;
    ecx = 9;
    edi = 0x5D1C90;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 0x28);
    MEM32(0x5D1C88) = ecx;
    edx = MEM32(ebx + 0x2C);
    MEM32(0x5D1C8C) = edx;
    esi = ebx + 0x30;
    ecx = 0x10;
    edi = 0x5BFC28;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    PUSH32(esp, 0x0031A829u); RECOMP_ABI_CALL(0x00319A90u, sub_00319A90); /* call 0x00319A90 */

loc_0031A829: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0031A840; /* je: equal / zero */

loc_0031A82F: ;
    PUSH32(esp, 0xFF000F0Cu);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0031A83Au); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031A83A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031A840: ;
    MEM32(ebx) = 0;

loc_0031A846: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A850
 * Original: 0x0031A850 - 0x0031A8B4 (100 bytes, 39 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A850: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031A85Bu); RECOMP_ABI_CALL(0x00321740u, sub_00321740); /* call 0x00321740 */

loc_0031A85B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A871; /* jne: not equal / not zero */

loc_0031A863: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = 0;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031A871: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031A87Cu); RECOMP_ABI_CALL(0x00321900u, sub_00321900); /* call 0x00321900 */

loc_0031A87C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031A88B; /* jne: not equal / not zero */

loc_0031A883: ;
    edx = MEM32(esp + 0xC);
    MEM32(edx) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031A88B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0x0031A898u); RECOMP_ABI_CALL(0x00319AC0u, sub_00319AC0); /* call 0x00319AC0 */

loc_0031A898: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x14);
    MEM32(ebx + 0xF30) = ecx;
    edx = MEM32(esi);
    eax = MEM32(edx + 0x18);
    POP32(esp, edi);
    MEM32(ebx + 0xF34) = eax;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A8C0
 * Original: 0x0031A8C0 - 0x0031A920 (96 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A8C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1C68);
    eax = ecx;
    PUSH32(esp, 0x0031A8CFu); RECOMP_ABI_CALL(0x00319BB0u, sub_00319BB0); /* call 0x00319BB0 */

loc_0031A8CF: ;
    ebx = eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A8E7; /* je: equal / zero */

loc_0031A8D6: ;
    PUSH32(esp, 0xFF000F0Eu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031A8E1u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031A8E1: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031A8E7: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031A8EEu); RECOMP_ABI_CALL(0x00321660u, sub_00321660); /* call 0x00321660 */

loc_0031A8EE: ;
    ecx = MEM32(edi + 0x70);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A909; /* je: equal / zero */

loc_0031A8F8: ;
    PUSH32(esp, 0xFF000F0Fu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031A903u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031A903: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031A909: ;
    MEM32(ebx) = 0;
    eax = MEM32(edi + 0x70);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031A918u); RECOMP_ABI_CALL(0x00321850u, sub_00321850); /* call 0x00321850 */

loc_0031A918: ;
    esp = esp + 4;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A920
 * Original: 0x0031A920 - 0x0031A9AA (138 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A920(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A920: ;
    eax = MEM32(esp + 0xC);
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    ecx = ebp;
    MEM32(eax) = 0;
    PUSH32(esp, 0x0031A939u); RECOMP_ABI_CALL(0x00319BC0u, sub_00319BC0); /* call 0x00319BC0 */

loc_0031A939: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A9A3; /* je: equal / zero */

loc_0031A93D: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A9A3; /* je: equal / zero */

loc_0031A942: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = eax + 0x38;
    esi = eax + 0xC;
    edi = ebp + 0xCFC;
    ecx = 0xB;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    MEM32(esp + 0x18) = edx;
    edx = MEM32(edx + 0x200);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0x0031A97Cu); RECOMP_ABI_CALL(0x00327370u, sub_00327370); /* call 0x00327370 */

loc_0031A97C: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0031A999; /* je: equal / zero */

loc_0031A986: ;
    PUSH32(esp, 0xFF000F1Bu);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0031A991u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031A991: ;
    esp = esp + 8;
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0031A999: ;
    edx = MEM32(esp + 0x1C);
    MEM32(edx) = 1;

loc_0031A9A3: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0031A9B0
 * Original: 0x0031A9B0 - 0x0031A9DF (47 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A9B0: ;
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031A9B9u); RECOMP_ABI_CALL(0x00321710u, sub_00321710); /* call 0x00321710 */

loc_0031A9B9: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031A9D4; /* jne: not equal / not zero */

loc_0031A9C0: ;
    ecx = edi;
    PUSH32(esp, 0x0031A9C7u); RECOMP_ABI_CALL(0x00318AC0u, sub_00318AC0); /* call 0x00318AC0 */

loc_0031A9C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A9DB; /* je: equal / zero */

loc_0031A9CB: ;
    PUSH32(esp, 0x0031A9D0u); RECOMP_ABI_CALL(0x00319D50u, sub_00319D50); /* call 0x00319D50 */

loc_0031A9D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A9DB; /* je: equal / zero */

loc_0031A9D4: ;
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0031A9DB: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A9E0
 * Original: 0x0031A9E0 - 0x0031AB96 (438 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A9E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A9E0: ;
    esp = esp - 0x24;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = MEM32(esi + 0x1C70);
    eax = MEM32(esp + 0x34);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM32(eax) = 0;
    PUSH32(esp, esi);
    MEM32(ebp) = 0;
    PUSH32(esp, 0x0031AA0Fu); RECOMP_ABI_CALL(0x003234A0u, sub_003234A0); /* call 0x003234A0 */

loc_0031AA0F: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031AB8F; /* jne: not equal / not zero */

loc_0031AA1A: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031AA2B; /* jne: not equal / not zero */

loc_0031AA22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0031AA2B: ;
    PUSH32(esp, ebx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0xCE);
    ebx = esp + 0x20;
    PUSH32(esp, 0x0031AA3Fu); RECOMP_ABI_CALL(0x00318BB0u, sub_00318BB0); /* call 0x00318BB0 */

loc_0031AA3F: ;
    ecx = MEM32(esp + 0x20);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AA8D; /* je: equal / zero */

loc_0031AA4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031AA67; /* je: equal / zero */

loc_0031AA4E: ;
    ecx = eax;
    eax = ebx;
    PUSH32(esp, 0x0031AA57u); RECOMP_ABI_CALL(0x00318B30u, sub_00318B30); /* call 0x00318B30 */

loc_0031AA57: ;
    ecx = MEM32(esp + 0x38);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0031AA67: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x24);
    eax = eax + edx + -3;
    edx = MEM32(esp + 0x38);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_S(_fas, _fbs)) ? 1 : 0); /* setl */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    MEM32(edx) = eax;
    eax = 0; /* xor self */
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0031AA8D: ;
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    MEM32(ebp) = ebx;
    ebp = MEM32(esp + 0x38);
    MEM32(ebp) = 4;
    if (TEST_S(_fas, _fbs)) goto loc_0031AB8C; /* js: sign (negative) */

loc_0031AAA7: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031AAB8u); RECOMP_ABI_CALL(0x00322EB0u, sub_00322EB0); /* call 0x00322EB0 */

loc_0031AAB8: ;
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esp + 0x30;
    PUSH32(esp, 0x0031AAC7u); RECOMP_ABI_CALL(0x00319E40u, sub_00319E40); /* call 0x00319E40 */

loc_0031AAC7: ;
    esp = esp + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031AB25; /* je: equal / zero */

loc_0031AACE: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x3C) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_0031AAEA; /* jne: not equal / not zero */

loc_0031AADE: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    eax = eax + ecx;
    goto loc_0031AAF0;

loc_0031AAEA: ;
    edx = MEM32(esp + 0x20);
    eax = eax + edx;

loc_0031AAF0: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AB61; /* je: equal / zero */

loc_0031AAF6: ;
    MEM32(esp + 0x14) = eax;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0xCC);
    ebx = esp + 0x20;
    PUSH32(esp, 0x0031AB0Du); RECOMP_ABI_CALL(0x00318CC0u, sub_00318CC0); /* call 0x00318CC0 */

loc_0031AB0D: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esp + 0x54) = eax;
    PUSH32(esp, 0x0031AB1Eu); RECOMP_ABI_CALL(0x00322EF0u, sub_00322EF0); /* call 0x00322EF0 */

loc_0031AB1E: ;
    ebx = MEM32(esp + 0x28);
    esp = esp + 0x18;

loc_0031AB25: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031AB61; /* je: equal / zero */

loc_0031AB2D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031AB33u); RECOMP_ABI_CALL(0x003273D0u, sub_003273D0); /* call 0x003273D0 */

loc_0031AB33: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AB6E; /* je: equal / zero */

loc_0031AB3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031AB7C; /* jne: not equal / not zero */

loc_0031AB40: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031AB7C; /* je: equal / zero */

loc_0031AB45: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);

loc_0031AB4B: ;
    ebx = esp + 0x20;
    PUSH32(esp, 0x0031AB54u); RECOMP_ABI_CALL(0x00318BB0u, sub_00318BB0); /* call 0x00318BB0 */

loc_0031AB54: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031AB61; /* je: equal / zero */

loc_0031AB5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x3C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031AB7C; /* jne: not equal / not zero */

loc_0031AB61: ;
    PUSH32(esp, 0x0031AB66u); RECOMP_ABI_CALL(0x00318B70u, sub_00318B70); /* call 0x00318B70 */

loc_0031AB66: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0031AB6E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x48) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x48 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031AB7C; /* je: equal / zero */

loc_0031AB73: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    goto loc_0031AB4B;

loc_0031AB7C: ;
    ecx = MEM32(esp + 0x3C);
    eax = esp + 0x18;
    PUSH32(esp, 0x0031AB89u); RECOMP_ABI_CALL(0x00318B30u, sub_00318B30); /* call 0x00318B30 */

loc_0031AB89: ;
    MEM32(ebp) = eax;

loc_0031AB8C: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);

loc_0031AB8F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0031ABA0
 * Original: 0x0031ABA0 - 0x0031AC16 (118 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031ABA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031ABA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = MEM32(esi + 0x1C68);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031ABB2u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031ABB2: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031AC07; /* jne: not equal / not zero */

loc_0031ABB9: ;
    PUSH32(esp, 0x0031ABBEu); RECOMP_ABI_CALL(0x00319FE0u, sub_00319FE0); /* call 0x00319FE0 */

loc_0031ABBE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_0031ABC0: ;
    if (_flags /* jle: less or equal (signed <=) */) goto loc_0031ABD9;

loc_0031ABC2: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031ABC9u); RECOMP_ABI_CALL(0x00322AD0u, sub_00322AD0); /* call 0x00322AD0 */

loc_0031ABC9: ;
    eax = MEM32(edi + 0x88);
    esp = esp + 8;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x88) = eax;

loc_0031ABD9: ;
    eax = esi + 0xCFC;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031ABEAu); RECOMP_ABI_CALL(0x0031FF40u, sub_0031FF40); /* call 0x0031FF40 */

loc_0031ABEA: ;
    PUSH32(esp, 0xFFFFFFFFu);
    esi = esi + 0xD28;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031ABF8u); RECOMP_ABI_CALL(0x0031FF40u, sub_0031FF40); /* call 0x0031FF40 */

loc_0031ABF8: ;
    esp = esp + 0x10;
    MEM32(edi + 0x78) = 0xC0;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031AC07: ;
    PUSH32(esp, 0x0031AC0Cu); RECOMP_ABI_CALL(0x00318E60u, sub_00318E60); /* call 0x00318E60 */

loc_0031AC0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0031ABC0; /* jge: greater or equal (signed >=) */

loc_0031AC10: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031AC20
 * Original: 0x0031AC20 - 0x0031AC92 (114 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031AC20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031AC20: ;
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebp = MEM32(edi + 0x1C68);
    esi = MEM32(edi + 0x1C70);
    MEM32(ebx) = 0xFFFFFFFFu;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031AC48u); RECOMP_ABI_CALL(0x00327510u, sub_00327510); /* call 0x00327510 */

loc_0031AC48: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031AC8B; /* je: equal / zero */

loc_0031AC4F: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031AC5Cu); RECOMP_ABI_CALL(0x003281F0u, sub_003281F0); /* call 0x003281F0 */

loc_0031AC5C: ;
    eax = MEM32(esp + 0x1C);
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0031AC8B; /* jl: less (signed <) */

loc_0031AC67: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = edi + 0xCC0;
    esi = ebp + 0xF8;
    edi = esp + 0x14;
    PUSH32(esp, 0x0031AC86u); RECOMP_ABI_CALL(0x0031A0F0u, sub_0031A0F0); /* call 0x0031A0F0 */

loc_0031AC86: ;
    esp = esp + 8;
    MEM32(ebx) = eax;

loc_0031AC8B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0031ACA0
 * Original: 0x0031ACA0 - 0x0031AD0C (108 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031ACA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031ACA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = eax;
    PUSH32(esp, 0x34);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031ACB0u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031ACB0: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031ACF5; /* jne: not equal / not zero */

loc_0031ACB7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0031ACD6; /* jge: greater or equal (signed >=) */

loc_0031ACBB: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031ACD6; /* je: equal / zero */

loc_0031ACC2: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031ACD6; /* jne: not equal / not zero */

loc_0031ACC9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031AD09; /* je: equal / zero */

loc_0031ACCD: ;
    PUSH32(esp, 0x0031ACD2u); RECOMP_ABI_CALL(0x00318FF0u, sub_00318FF0); /* call 0x00318FF0 */

loc_0031ACD2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031AD09; /* je: equal / zero */

loc_0031ACD6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x34);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031ACE0u); RECOMP_ABI_CALL(0x0031ECA0u, sub_0031ECA0); /* call 0x0031ECA0 */

loc_0031ACE0: ;
    esp = esp + 0xC;
    PUSH32(esp, edi);
    edx = ebp;
    eax = esi;
    ecx = ebx;
    PUSH32(esp, 0x0031ACEFu); RECOMP_ABI_CALL(0x0031A370u, sub_0031A370); /* call 0x0031A370 */

loc_0031ACEF: ;
    esp = esp + 4;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031ACF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031AD09; /* jne: not equal / not zero */

loc_0031ACFA: ;
    PUSH32(esp, edi);
    edx = ebp;
    eax = esi;
    ecx = ebx;
    PUSH32(esp, 0x0031AD06u); RECOMP_ABI_CALL(0x0031A370u, sub_0031A370); /* call 0x0031A370 */

loc_0031AD06: ;
    esp = esp + 4;

loc_0031AD09: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031AD10
 * Original: 0x0031AD10 - 0x0031B016 (774 bytes, 277 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031AD10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031AD10: ;
    esp = esp - 0x20;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1C68);
    ecx = MEM32(eax);
    eax = MEM32(esi + 0xC);
    eax = eax + 0xF;
    edx = esi + 0x14C;
    MEM32(esp + 0x18) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    eax = eax + edx;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esi + 0x10);
    eax = eax + 0xF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    MEM32(esp + 0x10) = eax;
    eax = ecx + 0xF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    eax = eax + edx;
    ebx = eax;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    ebx = ebx << 4;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + 0x1F;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    MEM32(esp + 0x18) = eax;
    eax = ebp + 0xF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    eax = eax + edx;
    ebp = eax;
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((4) & 31u));
    eax = ebp;
    eax = eax << 4;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    ecx = eax;
    eax = ebx + 0x1F;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ebx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ebp);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x18));
    MEM32(esp + 0x2C) = eax;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((4) & 31u));
    eax = ecx + ebx * 8;
    MEM32(esp + 0x14) = eax;
    edi = edi << 4;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + 0x1F;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    eax = eax + edx;
    ebp = eax;
    eax = MEM32(esp + 0x10);
    eax = eax << 4;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((5) & 31u));
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)eax);
    eax = edi + 0x1F;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x10));
    edx = ebp + eax * 8;
    eax = MEM32(esp + 0x14);
    edx = edx << 7;
    eax = eax << 7;
    edx = edx + 0x40;
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031AE21; /* jle: less or equal (signed <=) */

loc_0031AE07: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, 0xFF000F17u);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031AE16u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031AE16: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_0031AE21: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x28) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0031AE34; /* jne: not equal / not zero */

loc_0031AE2C: ;
    ebp = MEM32(esi + 0x20);
    goto loc_0031AF26;

loc_0031AE34: ;
    eax = MEM32(esi + 0xC);
    eax = eax + 0xF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    eax = eax + edx;
    edi = eax;
    eax = MEM32(esi + 0x10);
    eax = eax + 0xF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    eax = eax + edx;
    ebp = eax;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((4) & 31u));
    edi = edi << 4;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + 0x1F;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    MEM32(esp + 0x10) = eax;
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((4) & 31u));
    eax = ebp;
    eax = eax << 4;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    MEM32(esp + 0x10) = edx;
    eax = edi + 0x1F;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    eax = eax + edx;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    eax = edx + eax * 8;
    edx = MEM32(esp + 0x14);
    eax = eax << 6;
    eax = eax + 0x20;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x20));
    edx = edx << 6;
    MEM32(esp + 0x24) = 1;
    edx = edx + 0x20;
    MEM32(esp + 0x20) = ebp;
    ebp = MEM32(esp + 0x24);
    edi = edx;

loc_0031AEC1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0031AECF; /* jg: greater (signed >) */

loc_0031AEC5: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x10 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031AEC1; /* jle: less or equal (signed <=) */

loc_0031AECD: ;
    goto loc_0031AED0;

loc_0031AECF: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0031AED0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x20) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031AEEF; /* jge: greater or equal (signed >=) */

loc_0031AED5: ;
    edx = MEM32(esp + 0x34);
    PUSH32(esp, 0xFF000F17u);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031AEE4u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031AEE4: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_0031AEEF: ;
    eax = MEM32(esi + 0x14);
    MEM32(esi + 0x28) = eax;
    eax = eax + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esi + 0x2C) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0031AF26; /* jle: less or equal (signed <=) */

loc_0031AEFE: ;
    edi = MEM32(esp + 0x28);
    eax = esi + 0x30;
    MEM32(esp + 0x14) = ebp;
    goto loc_0031AF10;

loc_0031AF0B: ;
    edi = MEM32(esp + 0x28);
    /* nop */

loc_0031AF10: ;
    MEM32(eax) = edi;
    edi = edi + edx;
    MEM32(esp + 0x28) = edi;
    edi = MEM32(esp + 0x14);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = edi;
    if ((_fa != 0)) goto loc_0031AF0B; /* jne: not equal / not zero */

loc_0031AF26: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x18);
    eax = eax << 5;
    MEM16(esi + 0x126) = LO16(eax);
    edx = edx << 5;
    MEM16(esi + 0x124) = LO16(edx);
    edi = MEM32(esi + 0x28);
    MEM32(esi + 0x120) = edi;
    ebx = ebx << 9;
    edi = edi + ebx;
    MEM32(esi + 0x118) = edi;
    ecx = ecx << 5;
    edi = edi + ecx;
    MEM16(esi + 0x136) = LO16(eax);
    MEM32(esi + 0x11C) = edi;
    edi = MEM32(esp + 0x34);
    MEM16(esi + 0x134) = LO16(edx);
    eax = MEM32(esi + 0x2C);
    MEM32(esi + 0x130) = eax;
    eax = eax + ebx;
    MEM32(esi + 0x128) = eax;
    eax = eax + ecx;
    MEM32(esi + 0x12C) = eax;
    _fa = (uint32_t)(MEM32(edi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x38), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031AFEB; /* jne: not equal / not zero */

loc_0031AF92: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xE (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031AF9C; /* jl: less (signed <) */

loc_0031AF97: ;
    ebp = 0xE;

loc_0031AF9C: ;
    ebx = MEM32(esp + 0x1C);
    eax = esi + 0x28;
    PUSH32(esp, 2);
    ecx = ebp + 2;
    PUSH32(esp, eax);
    eax = ebx;
    MEM32(esi + 0x148) = ecx;
    PUSH32(esp, 0x0031AFB6u); RECOMP_ABI_CALL(0x0031A780u, sub_0031A780); /* call 0x0031A780 */

loc_0031AFB6: ;
    edx = esi + 0x30;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    eax = ebx + 0x170;
    PUSH32(esp, 0x0031AFC6u); RECOMP_ABI_CALL(0x0031A780u, sub_0031A780); /* call 0x0031A780 */

loc_0031AFC6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031AFCCu); RECOMP_ABI_CALL(0x003217B0u, sub_003217B0); /* call 0x003217B0 */

loc_0031AFCC: ;
    PUSH32(esp, edi);
    MEM32(esi + 0x138) = eax;
    PUSH32(esp, 0x0031AFD8u); RECOMP_ABI_CALL(0x003217B0u, sub_003217B0); /* call 0x003217B0 */

loc_0031AFD8: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    MEM32(esi + 0x13C) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_0031AFEB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031AFF5; /* jl: less (signed <) */

loc_0031AFF0: ;
    ebp = 0x10;

loc_0031AFF5: ;
    eax = MEM32(esp + 0x1C);
    MEM32(esi + 0x148) = ebp;
    PUSH32(esp, ebp);
    esi = esi + 0x30;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B009u); RECOMP_ABI_CALL(0x0031A780u, sub_0031A780); /* call 0x0031A780 */

loc_0031B009: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0031B020
 * Original: 0x0031B020 - 0x0031B0DC (188 bytes, 84 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031B020(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0031B020: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = MEM32(esi + 0x1C68);
    PUSH32(esp, 0x2F);
    PUSH32(esp, esi);
    ebp = edi + 0x8C;
    PUSH32(esp, 0x0031B039u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031B039: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0031B045; /* jne: not equal / not zero */

loc_0031B041: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0031B045: ;
    PUSH32(esp, 0x27);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B04Du); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031B04D: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0031B05B; /* jne: not equal / not zero */

loc_0031B055: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0031B05B: ;
    eax = MEM32(ebp + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0031B06C; /* je: equal / zero */

loc_0031B062: ;
    eax = MEM32(edi + 0x144);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0031B06C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x18);
    eax = esi;
    PUSH32(esp, 0x0031B077u); RECOMP_ABI_CALL(0x00319520u, sub_00319520); /* call 0x00319520 */

loc_0031B077: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0031B0A2; /* jne: not equal / not zero */

loc_0031B07B: ;
    eax = ebx;
    ecx = esi;
    PUSH32(esp, 0x0031B084u); RECOMP_ABI_CALL(0x00319560u, sub_00319560); /* call 0x00319560 */

loc_0031B084: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0031B0A2; /* jne: not equal / not zero */

loc_0031B088: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0x0031B091u); RECOMP_ABI_CALL(0x003195A0u, sub_003195A0); /* call 0x003195A0 */

loc_0031B091: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0031B0A2; /* jne: not equal / not zero */

loc_0031B095: ;
    edx = ebx;
    ecx = esi;
    PUSH32(esp, 0x0031B09Eu); RECOMP_ABI_CALL(0x00319430u, sub_00319430); /* call 0x00319430 */

loc_0031B09E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0031B0BA; /* je: equal / zero */

loc_0031B0A2: ;
    edi = 1;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ebx = esi;
    PUSH32(esp, 0x0031B0B0u); RECOMP_ABI_CALL(0x00319460u, sub_00319460); /* call 0x00319460 */

loc_0031B0B0: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    POP32(esp, ebx);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0031B0BA: ;
    ecx = ebx;
    ebx = esi;
    PUSH32(esp, 0x0031B0C3u); RECOMP_ABI_CALL(0x0031A4E0u, sub_0031A4E0); /* call 0x0031A4E0 */

loc_0031B0C3: ;
    edi = eax;
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(-(int32_t)edi);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(-(int32_t)edi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0031B0D2u); RECOMP_ABI_CALL(0x00319460u, sub_00319460); /* call 0x00319460 */

loc_0031B0D2: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    POP32(esp, ebx);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0031B0E0
 * Original: 0x0031B0E0 - 0x0031B2F0 (528 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B0E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031B0E0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x48));
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x1C68);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ebp);
    ecx = esp + 0xC;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = ebp + 0x8C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ebx = esp + 0x30;
    PUSH32(esp, 0x0031B10Bu); RECOMP_ABI_CALL(0x00319660u, sub_00319660); /* call 0x00319660 */

loc_0031B10B: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0031B2E7; /* jne: not equal / not zero */

loc_0031B116: ;
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx + 0x54);
    eax = ebp + 0xCD8;
    PUSH32(esp, 0x0031B128u); RECOMP_ABI_CALL(0x00319980u, sub_00319980); /* call 0x00319980 */

loc_0031B128: ;
    ebx = esi;
    PUSH32(esp, 0x0031B12Fu); RECOMP_ABI_CALL(0x00319890u, sub_00319890); /* call 0x00319890 */

loc_0031B12F: ;
    PUSH32(esp, 0x0031B134u); RECOMP_ABI_CALL(0x00323D60u, sub_00323D60); /* call 0x00323D60 */

loc_0031B134: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ebx = eax;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0x0031B144u); RECOMP_ABI_CALL(0x0030F450u, sub_0030F450); /* call 0x0030F450 */

loc_0031B144: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x20) = eax;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031B158u); RECOMP_ABI_CALL(0x00327E60u, sub_00327E60); /* call 0x00327E60 */

loc_0031B158: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x0031B166u); RECOMP_ABI_CALL(0x0030F450u, sub_0030F450); /* call 0x0030F450 */

loc_0031B166: ;
    edx = MEM32(esp + 0x38);
    edi = eax;
    _cf = (int)((uint32_t)(edi) < (uint32_t)(edx));
    edi = edi - edx;
    PUSH32(esp, 0x0031B173u); RECOMP_ABI_CALL(0x00323D60u, sub_00323D60); /* call 0x00323D60 */

loc_0031B173: ;
    ecx = MEM32(esp + 0x44);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xA4);
    PUSH32(esp, eax);
    if (5) _cf = (int)(((edx) >> (32 - (5))) & 1);
    edx = edx << 5;
    eax = edx + esi + 0x2EA8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031B193u); RECOMP_ABI_CALL(0x00328270u, sub_00328270); /* call 0x00328270 */

loc_0031B193: ;
    ecx = MEM32(esp + 0x7C);
    eax = MEM32(esi + 0x998);
    edx = MEM32(esp + 0x80);
    ebx = MEM32(esi + 0x99C);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edx)) >> 32) & 1);
    ebx = ebx + edx;
    MEM32(esi + 0x998) = eax;
    eax = MEM32(esp + 0x48);
    PUSH32(esp, 0xFF000F06u);
    edx = edi;
    ecx = esi;
    MEM32(esi + 0x99C) = ebx;
    PUSH32(esp, 0x0031B1CCu); RECOMP_ABI_CALL(0x00318F20u, sub_00318F20); /* call 0x00318F20 */

loc_0031B1CC: ;
    ebx = eax;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x34)) >> 32) & 1);
    esp = esp + 0x34;
    ecx = edi;
    eax = esi;
    PUSH32(esp, 0x0031B1DAu); RECOMP_ABI_CALL(0x00318EE0u, sub_00318EE0); /* call 0x00318EE0 */

loc_0031B1DA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0031B1F4; /* je: equal / zero */

loc_0031B1DE: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031B1E8u); RECOMP_ABI_CALL(0x00321820u, sub_00321820); /* call 0x00321820 */

loc_0031B1E8: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x48)) >> 32) & 1);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

loc_0031B1F4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0031B2D0; /* jle: less or equal (signed <=) */

loc_0031B1FC: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B204u); RECOMP_ABI_CALL(0x00321720u, sub_00321720); /* call 0x00321720 */

loc_0031B204: ;
    edi = MEM32(esp + 0x14);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    eax = edi;
    edx = esi;
    PUSH32(esp, 0x0031B214u); RECOMP_ABI_CALL(0x0031A690u, sub_0031A690); /* call 0x0031A690 */

loc_0031B214: ;
    ecx = MEM32(ebp + 0x88);
    MEM32(edi + 0x48) = ecx;
    edx = MEM32(esp + 0x4C);
    MEM32(edi + 0x40) = edx;
    eax = MEM32(esp + 0x50);
    MEM32(edi + 0x44) = eax;
    ecx = MEM32(ebp + 0xC4);
    ebx = ebp + 0x8C;
    eax = 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0031B252; /* je: equal / zero */

loc_0031B240: ;
    ecx = MEM32(ebp + 0x140);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0031B252; /* jne: not equal / not zero */

loc_0031B24A: ;
    MEM32(ebp + 0x140) = edi;
    goto loc_0031B25C;

loc_0031B252: ;
    MEM32(ebp + 0x140) = 0;

loc_0031B25C: ;
    ecx = MEM32(ebp + 0x140);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + 0x144) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_0031B2B8; /* jne: not equal / not zero */

loc_0031B270: ;
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x38), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0031B28A; /* jne: not equal / not zero */

loc_0031B275: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0031B282; /* je: equal / zero */

loc_0031B27D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0031B28A; /* jne: not equal / not zero */

loc_0031B282: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031B288u); RECOMP_ABI_CALL(0x00321840u, sub_00321840); /* call 0x00321840 */

loc_0031B288: ;
    goto loc_0031B290;

loc_0031B28A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031B290u); RECOMP_ABI_CALL(0x00321830u, sub_00321830); /* call 0x00321830 */

loc_0031B290: ;
    eax = MEM32(esp + 0x14);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    ecx = esi + 0x958;
    PUSH32(esp, ecx);
    edx = esi + 0x954;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031B2ABu); RECOMP_ABI_CALL(0x003252A0u, sub_003252A0); /* call 0x003252A0 */

loc_0031B2AB: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    MEM32(ebp + 0x84) = 0;

loc_0031B2B8: ;
    ecx = MEM32(ebx + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B2C4u); RECOMP_ABI_CALL(0x0031DEE0u, sub_0031DEE0); /* call 0x0031DEE0 */

loc_0031B2C4: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x48)) >> 32) & 1);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

loc_0031B2D0: ;
    eax = MEM32(ebp + 0x140);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0031B2E7; /* jne: not equal / not zero */

loc_0031B2DA: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031B2E4u); RECOMP_ABI_CALL(0x00321820u, sub_00321820); /* call 0x00321820 */

loc_0031B2E4: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;

loc_0031B2E7: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x48)) >> 32) & 1);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_0031B2F0
 * Original: 0x0031B2F0 - 0x0031B402 (274 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0031B2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B2F0: ;
    PUSH32(esp, 0x0031B2F5u); RECOMP_ABI_CALL(0x003199D0u, sub_003199D0); /* call 0x003199D0 */

loc_0031B2F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031B30C; /* je: equal / zero */

loc_0031B2F9: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF000F15u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031B308u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031B308: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0031B30C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx + 4;
    ecx = 9;
    esi = 0x5D1C90;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(0x5D1C88);
    MEM32(ebx + 0x28) = ecx;
    edx = MEM32(0x5D1C8C);
    eax = ebx + 0x30;
    edi = eax;
    MEM32(ebx + 0x2C) = edx;
    ecx = 0x10;
    esi = 0x5BFC28;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    esi = 0; /* xor self */
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    eax = ebx + 0x14C;
    MEM32(ebx) = esi;
    MEM32(ebx + 0x70) = esi;
    MEM32(ebx + 0x74) = 5;
    MEM32(ebx + 0x78) = 0xC0;
    MEM32(ebx + 0x110) = esi;
    MEM32(ebx + 0x114) = 1;
    MEM32(ebx + 0x7C) = esi;
    MEM32(ebx + 0x80) = esi;
    MEM32(ebx + 0x138) = esi;
    MEM32(ebx + 0x13C) = esi;
    MEM32(ebx + 0x140) = esi;
    MEM32(ebx + 0x144) = esi;
    PUSH32(esp, 0x0031B394u); RECOMP_ABI_CALL(0x0031A780u, sub_0031A780); /* call 0x0031A780 */

loc_0031B394: ;
    esp = esp + 8;
    eax = ebx + 0x8C;
    MEM32(ebx + 0x84) = esi;
    MEM32(ebx + 0x88) = esi;
    PUSH32(esp, 0x0031B3AEu); RECOMP_ABI_CALL(0x00319A30u, sub_00319A30); /* call 0x00319A30 */

loc_0031B3AE: ;
    eax = ebx + 0xF8;
    MEM32(ebx + 0xEC) = 0xFFFFFFFFu;
    MEM32(ebx + 0xF0) = esi;
    MEM32(ebx + 0xF4) = 0x7FFFFFFF;
    PUSH32(esp, 0x0031B3D3u); RECOMP_ABI_CALL(0x00318F60u, sub_00318F60); /* call 0x00318F60 */

loc_0031B3D3: ;
    eax = ebx + 0xCCC;
    PUSH32(esp, 0x0031B3DEu); RECOMP_ABI_CALL(0x00319A40u, sub_00319A40); /* call 0x00319A40 */

loc_0031B3DE: ;
    POP32(esp, edi);
    ecx = ebx + 0x1A0;
    eax = ebx + 0xCE0;
    edx = 0x10;
    POP32(esp, esi);

loc_0031B3F1: ;
    MEM32(ecx) = eax;
    eax = eax + 8;
    ecx = ecx + 0xB8;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031B3F1; /* jne: not equal / not zero */

loc_0031B3FF: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0031B410
 * Original: 0x0031B410 - 0x0031B43C (44 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B410(void)
{

loc_0031B410: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031B41Bu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0031B41B: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0x0031B428u); RECOMP_ABI_CALL(0x0031A8C0u, sub_0031A8C0); /* call 0x0031A8C0 */

loc_0031B428: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x0031B434u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0031B434: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031B440
 * Original: 0x0031B440 - 0x0031B495 (85 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B440: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x1C68);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031B458u); RECOMP_ABI_CALL(0x0031A920u, sub_0031A920); /* call 0x0031A920 */

loc_0031B458: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031B492; /* jne: not equal / not zero */

loc_0031B45F: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x74) = 2;
    if (TEST_Z(_fa, _fb)) goto loc_0031B489; /* je: equal / zero */

loc_0031B46E: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031B476u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031B476: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031B489; /* je: equal / zero */

loc_0031B47D: ;
    POP32(esp, edi);
    MEM32(esi + 0x78) = 0xC8;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031B489: ;
    MEM32(esi + 0x78) = 0xC0;
    eax = 0; /* xor self */

loc_0031B492: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031B4A0
 * Original: 0x0031B4A0 - 0x0031B4EF (79 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B4A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031B4A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x1C70);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1C74);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B4B5u); RECOMP_ABI_CALL(0x003230E0u, sub_003230E0); /* call 0x003230E0 */

loc_0031B4B5: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B4EC; /* je: equal / zero */

loc_0031B4BD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B4C4u); RECOMP_ABI_CALL(0x003230E0u, sub_003230E0); /* call 0x003230E0 */

loc_0031B4C4: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031B4EC; /* jne: not equal / not zero */

loc_0031B4CC: ;
    eax = esi;
    PUSH32(esp, 0x0031B4D3u); RECOMP_ABI_CALL(0x0031A9B0u, sub_0031A9B0); /* call 0x0031A9B0 */

loc_0031B4D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031B4EC; /* je: equal / zero */

loc_0031B4D7: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B4E0u); RECOMP_ABI_CALL(0x003230C0u, sub_003230C0); /* call 0x003230C0 */

loc_0031B4E0: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00318AF0(); return; /* tail jmp 0x00318AF0 */

loc_0031B4EC: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031B4F0
 * Original: 0x0031B4F0 - 0x0031B50A (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B4F0: ;
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0x0031B4F8u); RECOMP_ABI_CALL(0x0031ABA0u, sub_0031ABA0); /* call 0x0031ABA0 */

loc_0031B4F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031B501; /* jne: not equal / not zero */

loc_0031B4FD: ;
    eax = eax | eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0031B501: ;
    PUSH32(esp, 0x0031B506u); RECOMP_ABI_CALL(0x0031A040u, sub_0031A040); /* call 0x0031A040 */

loc_0031B506: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031B510
 * Original: 0x0031B510 - 0x0031B5E7 (215 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B510(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031B510: ;
    eax = MEM32(esi + 0x91C);
    esp = esp - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x1C68);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = esi + 0x90C;
    if (TEST_Z(_fa, _fb)) goto loc_0031B539; /* je: equal / zero */

loc_0031B530: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0031B539: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0031B544u); RECOMP_ABI_CALL(0x00327630u, sub_00327630); /* call 0x00327630 */

loc_0031B544: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031B560; /* je: equal / zero */

loc_0031B54B: ;
    PUSH32(esp, 0xFF000F16u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B556u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031B556: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0031B560: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0031B575u); RECOMP_ABI_CALL(0x00327670u, sub_00327670); /* call 0x00327670 */

loc_0031B575: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B57Du); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031B57D: ;
    esp = esp + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031B58C; /* jne: not equal / not zero */

loc_0031B584: ;
    MEM32(ebx + 0xF4) = eax;
    goto loc_0031B5B4;

loc_0031B58C: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B594u); RECOMP_ABI_CALL(0x00322F30u, sub_00322F30); /* call 0x00322F30 */

loc_0031B594: ;
    ecx = MEM32(esp + 0x14);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031B5A8; /* jne: not equal / not zero */

loc_0031B5A0: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0xC) = ecx;

loc_0031B5A8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031B5AE; /* jge: greater or equal (signed >=) */

loc_0031B5AC: ;
    eax = ecx;

loc_0031B5AE: ;
    MEM32(ebx + 0xF4) = eax;

loc_0031B5B4: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B5C2u); RECOMP_ABI_CALL(0x0031A460u, sub_0031A460); /* call 0x0031A460 */

loc_0031B5C2: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0x0031B5D7u); RECOMP_ABI_CALL(0x003193F0u, sub_003193F0); /* call 0x003193F0 */

loc_0031B5D7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B5DDu); RECOMP_ABI_CALL(0x0031AD10u, sub_0031AD10); /* call 0x0031AD10 */

loc_0031B5DD: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0031B5F0
 * Original: 0x0031B5F0 - 0x0031B6E9 (249 bytes, 99 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B5F0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 5);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031B5FDu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031B5FD: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031B606; /* jne: not equal / not zero */

loc_0031B604: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0031B606: ;
    PUSH32(esp, ebx);
    ebx = edi + 0x2038;
    PUSH32(esp, edi);
    MEM32(edi + 0x1C68) = ebx;
    PUSH32(esp, 0x0031B619u); RECOMP_ABI_CALL(0x0031B2F0u, sub_0031B2F0); /* call 0x0031B2F0 */

loc_0031B619: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031B6E6; /* jne: not equal / not zero */

loc_0031B624: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B62Au); RECOMP_ABI_CALL(0x003255E0u, sub_003255E0); /* call 0x003255E0 */

loc_0031B62A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031B642; /* jne: not equal / not zero */

loc_0031B630: ;
    PUSH32(esp, 0xFF000F0Au);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031B63Bu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031B63B: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0031B642: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x319A70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B64Eu); RECOMP_ABI_CALL(0x00328340u, sub_00328340); /* call 0x00328340 */

loc_0031B64E: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031B66E; /* je: equal / zero */

loc_0031B655: ;
    eax = esi;
    PUSH32(esp, 0x0031B65Cu); RECOMP_ABI_CALL(0x00319A90u, sub_00319A90); /* call 0x00319A90 */

loc_0031B65C: ;
    PUSH32(esp, 0xFF000F0Bu);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031B667u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031B667: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0031B66E: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031B676u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031B676: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B67Fu); RECOMP_ABI_CALL(0x003254E0u, sub_003254E0); /* call 0x003254E0 */

loc_0031B67F: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031B687u); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031B687: ;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B690u); RECOMP_ABI_CALL(0x003254E0u, sub_003254E0); /* call 0x003254E0 */

loc_0031B690: ;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B69Au); RECOMP_ABI_CALL(0x003254E0u, sub_003254E0); /* call 0x003254E0 */

loc_0031B69A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B6A4u); RECOMP_ABI_CALL(0x003254E0u, sub_003254E0); /* call 0x003254E0 */

loc_0031B6A4: ;
    esp = esp + 0x40;
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B6B1u); RECOMP_ABI_CALL(0x003254E0u, sub_003254E0); /* call 0x003254E0 */

loc_0031B6B1: ;
    eax = MEM32(edi + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B6BDu); RECOMP_ABI_CALL(0x003254E0u, sub_003254E0); /* call 0x003254E0 */

loc_0031B6BD: ;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B6CAu); RECOMP_ABI_CALL(0x003254E0u, sub_003254E0); /* call 0x003254E0 */

loc_0031B6CA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B6D4u); RECOMP_ABI_CALL(0x003254E0u, sub_003254E0); /* call 0x003254E0 */

loc_0031B6D4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 9);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B6DEu); RECOMP_ABI_CALL(0x003254E0u, sub_003254E0); /* call 0x003254E0 */

loc_0031B6DE: ;
    esp = esp + 0x3C;
    MEM32(ebx) = esi;
    eax = 0; /* xor self */
    POP32(esp, esi);

loc_0031B6E6: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031B6F0
 * Original: 0x0031B6F0 - 0x0031B85B (363 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B6F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031B6F0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x1C68);
    ecx = MEM32(edi + 0xCD4);
    edx = MEM32(edi + 0xCD8);
    esi = MEM32(edi);
    PUSH32(esp, ecx);
    ebx = eax;
    PUSH32(esp, edx);
    eax = edi + 0x8C;
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x0031B727u); RECOMP_ABI_CALL(0x003257A0u, sub_003257A0); /* call 0x003257A0 */

loc_0031B727: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031B731u); RECOMP_ABI_CALL(0x0030F450u, sub_0030F450); /* call 0x0030F450 */

loc_0031B731: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x0031B73Cu); RECOMP_ABI_CALL(0x003271B0u, sub_003271B0); /* call 0x003271B0 */

loc_0031B73C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x0031B74Au); RECOMP_ABI_CALL(0x0030F450u, sub_0030F450); /* call 0x0030F450 */

loc_0031B74A: ;
    ecx = MEM32(esp + 0x3C);
    ebx = eax;
    eax = MEM32(esp + 0x40);
    ebx = ebx - ecx;
    PUSH32(esp, 0xFF000F04u);
    edx = ebx;
    ecx = ebp;
    PUSH32(esp, 0x0031B764u); RECOMP_ABI_CALL(0x00318F20u, sub_00318F20); /* call 0x00318F20 */

loc_0031B764: ;
    MEM32(esp + 0x44) = eax;
    esp = esp + 0x30;
    ecx = ebx;
    eax = ebp;
    PUSH32(esp, 0x0031B774u); RECOMP_ABI_CALL(0x00318EE0u, sub_00318EE0); /* call 0x00318EE0 */

loc_0031B774: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031B853; /* jne: not equal / not zero */

loc_0031B780: ;
    eax = edi + 0xCDC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B78Fu); RECOMP_ABI_CALL(0x003257D0u, sub_003257D0); /* call 0x003257D0 */

loc_0031B78F: ;
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031B79Au); RECOMP_ABI_CALL(0x003275F0u, sub_003275F0); /* call 0x003275F0 */

loc_0031B79A: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031B7B7; /* je: equal / zero */

loc_0031B7A1: ;
    PUSH32(esp, 0xFF000F05u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0031B7ACu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031B7AC: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0031B7B7: ;
    eax = MEM32(ebx + 0x30);
    _fa = (uint32_t)(MEM32(edi + 0xEC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xEC), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B7D4; /* je: equal / zero */

loc_0031B7C2: ;
    MEM32(edi + 0xEC) = eax;
    MEM32(edi + 0xF0) = 1;
    goto loc_0031B7DE;

loc_0031B7D4: ;
    MEM32(edi + 0xF0) = 0;

loc_0031B7DE: ;
    ecx = MEM32(edi + 0xF0);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = esp + 0x1C;
    ecx = ebp;
    PUSH32(esp, 0x0031B7F5u); RECOMP_ABI_CALL(0x0031AC20u, sub_0031AC20); /* call 0x0031AC20 */

loc_0031B7F5: ;
    eax = MEM32(esp + 0x30);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031B80A; /* jne: not equal / not zero */

loc_0031B800: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0031B80A: ;
    edx = MEM32(edi + 0xF0);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = ebp;
    PUSH32(esp, 0x0031B81Du); RECOMP_ABI_CALL(0x0031A1D0u, sub_0031A1D0); /* call 0x0031A1D0 */

loc_0031B81D: ;
    eax = MEM32(esp + 0x1C);
    edi = MEM32(edi + 0xF0);
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0x0031B82Fu); RECOMP_ABI_CALL(0x0031ACA0u, sub_0031ACA0); /* call 0x0031ACA0 */

loc_0031B82F: ;
    ebx = ebp;
    PUSH32(esp, 0x0031B836u); RECOMP_ABI_CALL(0x003192A0u, sub_003192A0); /* call 0x003192A0 */

loc_0031B836: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0031B83Cu); RECOMP_ABI_CALL(0x00319320u, sub_00319320); /* call 0x00319320 */

loc_0031B83C: ;
    ecx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    edx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    esi = ebp;
    PUSH32(esp, 0x0031B850u); RECOMP_ABI_CALL(0x0031B510u, sub_0031B510); /* call 0x0031B510 */

loc_0031B850: ;
    esp = esp + 0x1C;

loc_0031B853: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0031B860
 * Original: 0x0031B860 - 0x0031BA5A (506 bytes, 180 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B860(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031B860: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(eax) = 0;
    PUSH32(esp, edi);
    edi = edx;
    ebp = MEM32(edi + 0x1C68);
    eax = MEM32(edi + 0x1C70);
    esi = ecx;
    MEM32(edi + 0x970) = 0;
    _fa = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x78), 0xCC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0031B89C; /* je: equal / zero */

loc_0031B896: ;
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0xCC;

loc_0031B89C: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031B8A8u); RECOMP_ABI_CALL(0x00322FD0u, sub_00322FD0); /* call 0x00322FD0 */

loc_0031B8A8: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x14) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0031B9CD; /* jne: not equal / not zero */

loc_0031B8B7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xC8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0xC8 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0031B8C7; /* je: equal / zero */

loc_0031B8BC: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031B8C4u); RECOMP_ABI_CALL(0x00321720u, sub_00321720); /* call 0x00321720 */

loc_0031B8C4: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;

loc_0031B8C7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x80 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0031B91F; /* jne: not equal / not zero */

loc_0031B8CF: ;
    eax = edi;
    PUSH32(esp, 0x0031B8D6u); RECOMP_ABI_CALL(0x00318E10u, sub_00318E10); /* call 0x00318E10 */

loc_0031B8D6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031B8DCu); RECOMP_ABI_CALL(0x00322A50u, sub_00322A50); /* call 0x00322A50 */

loc_0031B8DC: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0031B8F3; /* je: equal / zero */

loc_0031B8E3: ;
    esi = MEM32(esp + 0x10);
    eax = edi;
    PUSH32(esp, 0x0031B8EEu); RECOMP_ABI_CALL(0x0031B4F0u, sub_0031B4F0); /* call 0x0031B4F0 */

loc_0031B8EE: ;
    goto loc_0031BA00;

loc_0031B8F3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031B8F9u); RECOMP_ABI_CALL(0x00322AA0u, sub_00322AA0); /* call 0x00322AA0 */

loc_0031B8F9: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0031B91F; /* je: equal / zero */

loc_0031B900: ;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0x0031B909u); RECOMP_ABI_CALL(0x0031A040u, sub_0031A040); /* call 0x0031A040 */

loc_0031B909: ;
    eax = MEM32(esp + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = 1;
    eax = MEM32(esp + 8);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0031B91F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0x0031B928u); RECOMP_ABI_CALL(0x0031A0C0u, sub_0031A0C0); /* call 0x0031A0C0 */

loc_0031B928: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0031B944; /* je: equal / zero */

loc_0031B92F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031B935u); RECOMP_ABI_CALL(0x003216F0u, sub_003216F0); /* call 0x003216F0 */

loc_0031B935: ;
    eax = MEM32(esp + 0x18);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0031B944: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0031B95F; /* jg: greater (signed >) */

loc_0031B949: ;
    eax = MEM32(esp + 0x14);
    MEM32(edi + 0x970) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0031B95F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x4C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x4C (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0031B9BD; /* je: equal / zero */

loc_0031B964: ;
    esi = esp + 0x14;
    eax = edi;
    PUSH32(esp, 0x0031B96Fu); RECOMP_ABI_CALL(0x00318DD0u, sub_00318DD0); /* call 0x00318DD0 */

loc_0031B96F: ;
    ecx = MEM32(ebp + 0x78);
    eax = MEM32(esp + 0x10);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & ebx;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    PUSH32(esp, ecx);
    edx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031B988u); RECOMP_ABI_CALL(0x0031B6F0u, sub_0031B6F0); /* call 0x0031B6F0 */

loc_0031B988: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x14) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0031BA52; /* jne: not equal / not zero */

loc_0031B997: ;
    _fa = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x78), ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0031BA44; /* je: equal / zero */

loc_0031B9A0: ;
    eax = MEM32(esp + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x78) = 0xCC;
    POP32(esp, ebp);
    MEM32(eax) = 1;
    eax = MEM32(esp + 8);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0031B9BD: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0031BA2D; /* je: equal / zero */

loc_0031B9C2: ;
    ecx = edi;
    PUSH32(esp, 0x0031B9C9u); RECOMP_ABI_CALL(0x00319420u, sub_00319420); /* call 0x00319420 */

loc_0031B9C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0031B9D7; /* jne: not equal / not zero */

loc_0031B9CD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0031B9D7: ;
    esi = esp + 0x14;
    eax = edi;
    PUSH32(esp, 0x0031B9E2u); RECOMP_ABI_CALL(0x00318DD0u, sub_00318DD0); /* call 0x00318DD0 */

loc_0031B9E2: ;
    ecx = esi;
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0x0031B9ECu); RECOMP_ABI_CALL(0x0031B020u, sub_0031B020); /* call 0x0031B020 */

loc_0031B9EC: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_0031BA1A; /* je: equal / zero */

loc_0031B9F7: ;
    PUSH32(esp, 0x0031B9FCu); RECOMP_ABI_CALL(0x0031A5F0u, sub_0031A5F0); /* call 0x0031A5F0 */

loc_0031B9FC: ;
    MEM32(esp + 0x14) = eax;

loc_0031BA00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0031BA4E; /* jne: not equal / not zero */

loc_0031BA04: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx) = 1;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0031BA1A: ;
    esi = edi;
    PUSH32(esp, 0x0031BA21u); RECOMP_ABI_CALL(0x0031B0E0u, sub_0031B0E0); /* call 0x0031B0E0 */

loc_0031BA21: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(esp + 8) = eax;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0031BA2D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x80 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0031BA4E; /* je: equal / zero */

loc_0031BA35: ;
    PUSH32(esp, 0xCC);
    esi = edi;
    PUSH32(esp, 0x0031BA41u); RECOMP_ABI_CALL(0x0031A6B0u, sub_0031A6B0); /* call 0x0031A6B0 */

loc_0031BA41: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;

loc_0031BA44: ;
    eax = MEM32(esp + 0x20);
    MEM32(eax) = 1;

loc_0031BA4E: ;
    eax = MEM32(esp + 0x14);

loc_0031BA52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0031BA60
 * Original: 0x0031BA60 - 0x0031BAA0 (64 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BA60: ;
    esp = esp - 0xC;

loc_0031BA63: ;
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0x0031BA73u); RECOMP_ABI_CALL(0x0031A9E0u, sub_0031A9E0); /* call 0x0031A9E0 */

loc_0031BA73: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031BA9C; /* jne: not equal / not zero */

loc_0031BA7A: ;
    eax = MEM32(esp);
    ecx = MEM32(esp + 4);
    edx = esp + 8;
    PUSH32(esp, edx);
    edx = esi;
    PUSH32(esp, 0x0031BA8Du); RECOMP_ABI_CALL(0x0031B860u, sub_0031B860); /* call 0x0031B860 */

loc_0031BA8D: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031BA9C; /* jne: not equal / not zero */

loc_0031BA94: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031BA63; /* jne: not equal / not zero */

loc_0031BA9C: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0031BAA0
 * Original: 0x0031BAA0 - 0x0031BADE (62 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BAA0: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031BAABu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_0031BAAB: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031BABE; /* je: equal / zero */

loc_0031BAB2: ;
    eax = esi;
    PUSH32(esp, 0x0031BAB9u); RECOMP_ABI_CALL(0x00318AA0u, sub_00318AA0); /* call 0x00318AA0 */

loc_0031BAB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031BAC2; /* jne: not equal / not zero */

loc_0031BABE: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031BAC2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031BAC8u); RECOMP_ABI_CALL(0x00318A60u, sub_00318A60); /* call 0x00318A60 */

loc_0031BAC8: ;
    PUSH32(esp, 0x0031BACDu); RECOMP_ABI_CALL(0x0031BA60u, sub_0031BA60); /* call 0x0031BA60 */

loc_0031BACD: ;
    edi = eax;
    PUSH32(esp, 0x0031BAD4u); RECOMP_ABI_CALL(0x0031B4A0u, sub_0031B4A0); /* call 0x0031B4A0 */

loc_0031BAD4: ;
    PUSH32(esp, 0x0031BAD9u); RECOMP_ABI_CALL(0x00319DE0u, sub_00319DE0); /* call 0x00319DE0 */

loc_0031BAD9: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031BAE0
 * Original: 0x0031BAE0 - 0x0031BAE9 (9 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BAE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031BAE0: ;
    eax = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_0031BAA0(); return; /* tail jmp 0x0031BAA0 */

}

/**
 * sub_0031BAF0
 * Original: 0x0031BAF0 - 0x0031BB50 (96 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BAF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031BAFBu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0031BAFB: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031BB13; /* je: equal / zero */

loc_0031BB02: ;
    PUSH32(esp, 0xFF000171u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0031BB0Eu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0031BB0E: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031BB13: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xBC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031BB4C; /* jl: less (signed <) */

loc_0031BB1F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0031BB4C; /* jg: greater (signed >) */

loc_0031BB27: ;
    eax = MEM32(esi + 0x1C24);
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x144) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x148) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + ecx * 4 + -700) = edx;

loc_0031BB4C: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031BB50
 * Original: 0x0031BB50 - 0x0031BB60 (16 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BB50(void)
{

loc_0031BB50: ;
    PUSH32(esp, 0x0031BB55u); RECOMP_ABI_CALL(0x003285D0u, sub_003285D0); /* call 0x003285D0 */

loc_0031BB55: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0031BB60
 * Original: 0x0031BB60 - 0x0031BBA0 (64 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BB60: ;
    ecx = MEM32(eax + 0x1C2C);
    esp = esp - 0x1C;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031BB74u); RECOMP_ABI_CALL(0x003234A0u, sub_003234A0); /* call 0x003234A0 */

loc_0031BB74: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031BB9C; /* jne: not equal / not zero */

loc_0031BB7B: ;
    eax = MEM32(esp);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    MEM32(edx) = eax;
    edx = MEM32(esp + 0x28);
    ecx = ecx + eax;
    MEM32(edx) = ecx;
    eax = 0; /* xor self */

loc_0031BB9C: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_0031BBA0
 * Original: 0x0031BBA0 - 0x0031BBB2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BBA0(void)
{

loc_0031BBA0: ;
    ecx = MEM32(eax + 0x1C2C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031BBAEu); RECOMP_ABI_CALL(0x00323780u, sub_00323780); /* call 0x00323780 */

loc_0031BBAE: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0031BBC0
 * Original: 0x0031BBC0 - 0x0031BBE7 (39 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BBC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BBC0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0031BBDC; /* jle: less or equal (signed <=) */

loc_0031BBC9: ;
    /* nop */

loc_0031BBD0: ;
    SET_LO8(edx, MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031BBE3; /* jne: not equal / not zero */

loc_0031BBD7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031BBD0; /* jl: less (signed <) */

loc_0031BBDC: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031BBE3: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031BBF0
 * Original: 0x0031BBF0 - 0x0031BC01 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BBF0(void)
{

loc_0031BBF0: ;
    ecx = MEM32(eax + 0x1C2C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x74);
    eax = ecx + eax + 0x1288;
    esp += 4; return; /* ret */

}

/**
 * sub_0031BC10
 * Original: 0x0031BC10 - 0x0031BC49 (57 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BC10(void)
{

loc_0031BC10: ;
    eax = MEM32(esi);
    esp = esp - 8;
    ecx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0031BC20u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031BC20: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031BC34u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_0031BC34: ;
    eax = MEM32(esi);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0031BC41u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031BC41: ;
    eax = MEM32(esp + 0x2C);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_0031BC50
 * Original: 0x0031BC50 - 0x0031BD3C (236 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BC50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031BC50: ;
    ecx = MEM32(esp + 4);
    esp = esp - 0x34;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x40);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031BC68u); RECOMP_ABI_CALL(0x00323480u, sub_00323480); /* call 0x00323480 */

loc_0031BC68: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031BD37; /* jne: not equal / not zero */

loc_0031BC73: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    ecx = ecx + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_0031BCA9; /* jg: greater (signed >) */

loc_0031BC97: ;
    edx = MEM32(esp + 0x44);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031BCA2u); RECOMP_ABI_CALL(0x00328100u, sub_00328100); /* call 0x00328100 */

loc_0031BCA2: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031BCB2; /* je: equal / zero */

loc_0031BCA9: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

loc_0031BCB2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0031BCC7; /* jg: greater (signed >) */

loc_0031BCB6: ;
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031BCC2u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_0031BCC2: ;
    esp = esp + 0xC;
    goto loc_0031BCEC;

loc_0031BCC7: ;
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031BCD3u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_0031BCD3: ;
    eax = MEM32(esp + 0x58);
    ecx = MEM32(esp + 0x18);
    edx = esi;
    edx = edx - edi;
    PUSH32(esp, edx);
    edi = edi + eax;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031BCE9u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_0031BCE9: ;
    esp = esp + 0x18;

loc_0031BCEC: ;
    edx = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031BCFDu); RECOMP_ABI_CALL(0x00323760u, sub_00323760); /* call 0x00323760 */

loc_0031BCFD: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031BD35; /* jne: not equal / not zero */

loc_0031BD04: ;
    eax = MEM32(esp + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0031BD30; /* jl: less (signed <) */

loc_0031BD0C: ;
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, 0x0031BD29u); RECOMP_ABI_CALL(0x00328130u, sub_00328130); /* call 0x00328130 */

loc_0031BD29: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031BD35; /* jne: not equal / not zero */

loc_0031BD30: ;
    eax = 1;

loc_0031BD35: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0031BD37: ;
    POP32(esp, ebp);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_0031BD40
 * Original: 0x0031BD40 - 0x0031BD6E (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BD40(void)
{

loc_0031BD40: ;
    eax = MEM32(esi + 0x1C34);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031BD4Eu); RECOMP_ABI_CALL(0x00323100u, sub_00323100); /* call 0x00323100 */

loc_0031BD4E: ;
    ecx = MEM32(esi + 0x1C30);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031BD5Cu); RECOMP_ABI_CALL(0x00323100u, sub_00323100); /* call 0x00323100 */

loc_0031BD5C: ;
    edx = MEM32(esi + 0x1C38);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031BD6Au); RECOMP_ABI_CALL(0x00323100u, sub_00323100); /* call 0x00323100 */

loc_0031BD6A: ;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0031BD70
 * Original: 0x0031BD70 - 0x0031BDA7 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BD70(void)
{

loc_0031BD70: ;
    eax = MEM32(esi + 0x1C34);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031BD7Fu); RECOMP_ABI_CALL(0x00323120u, sub_00323120); /* call 0x00323120 */

loc_0031BD7F: ;
    ecx = MEM32(esi + 0x1C30);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0031BD8Eu); RECOMP_ABI_CALL(0x00323120u, sub_00323120); /* call 0x00323120 */

loc_0031BD8E: ;
    edx = MEM32(esi + 0x1C38);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x0031BD9Du); RECOMP_ABI_CALL(0x00323120u, sub_00323120); /* call 0x00323120 */

loc_0031BD9D: ;
    eax = eax & ebx;
    esp = esp + 0x18;
    eax = eax & edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031BDB0
 * Original: 0x0031BDB0 - 0x0031BDBA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BDB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BDB0: ;
    eax = MEM32(eax + 0x1C24);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}
