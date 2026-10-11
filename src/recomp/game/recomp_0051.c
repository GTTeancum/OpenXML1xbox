/**
 * X-Men Legends - Recompiled code chunk 51
 * Functions: 250 (0x00215370 - 0x0021BCE0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00215370
 * Original: 0x00215370 - 0x002153C4 (84 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215370: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00215378u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00215378: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002153B4; /* jne: not equal / not zero */

loc_0021537C: ;
    SET_LO8(eax, MEM8(esi + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00215392; /* jne: not equal / not zero */

loc_00215383: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00215392; /* je: equal / zero */

loc_0021538A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00215392u); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_00215392: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 8);
    MEM32(esi + 0x20) = ecx;
    MEM8(esi + 0x2D) = 1;
    MEM32(esi + 0x24) = edx;
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002153B4: ;
    eax = MEM32(esp + 8);
    edx = MEM32(0x46A728);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002153D0
 * Original: 0x002153D0 - 0x00215455 (133 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002153D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002153D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x002153D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002153D8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00215445; /* jne: not equal / not zero */

loc_002153DC: ;
    SET_LO8(eax, MEM8(esi + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x24) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002153F9; /* jne: not equal / not zero */

loc_002153EA: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002153F9; /* je: equal / zero */

loc_002153F1: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002153F9u); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_002153F9: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(esi + 0x2D) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00215408u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00215408: ;
    ecx = ZX8(MEM8(esi + 7));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    edx = MEM32(esi + 0x24);
    edi = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_00215420; /* jne: not equal / not zero */

loc_0021541A: ;
    edi = MEM32(0x5BC538);

loc_00215420: ;
    edi = MEM32(edi);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    ecx = MEM32(edi + ecx * 4);
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0xD0); PUSH32(esp, 0x00215431u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00215431: ;
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00215445: ;
    eax = MEM32(esp + 8);
    edx = MEM32(0x46A728);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00215460
 * Original: 0x00215460 - 0x00215492 (50 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215460(void)
{

loc_00215460: ;
    esp = esp - 0x7DC;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F4178;
    MEM32(esp + 8) = 0;
    eax = MEM32(esp + ecx);
    esp = esp + 0x7DC;
    esp += 4; return; /* ret */

}

/**
 * sub_002154A0
 * Original: 0x002154A0 - 0x002154A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002154A0(void)
{

loc_002154A0: ;
    eax = MEM32(0x5BC4F0);
    esp += 4; return; /* ret */

}

/**
 * sub_002154B0
 * Original: 0x002154B0 - 0x002154DC (44 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002154B0(void)
{

loc_002154B0: ;
    esp = esp - 0xC;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F41D0;
    MEM32(esp + 8) = 0;
    eax = MEM32(esp + ecx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_002154E0
 * Original: 0x002154E0 - 0x002154E6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002154E0(void)
{

loc_002154E0: ;
    eax = MEM32(0x5BC500);
    esp += 4; return; /* ret */

}

/**
 * sub_002154F0
 * Original: 0x002154F0 - 0x002155A6 (182 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002154F0(void)
{

loc_002154F0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x398) = ecx;
    MEM32(eax + 0x39C) = ecx;
    edx = edx | 0xFFFFFFFFu;
    MEM8(eax + 0x14) = LO8(ecx);
    MEM8(eax + 0x15) = LO8(ecx);
    MEM8(eax + 0x16) = LO8(ecx);
    MEM8(eax) = LO8(ecx);
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM8(eax + 0x74) = LO8(ecx);
    MEM8(eax + 0x75) = LO8(ecx);
    MEM8(eax + 0x76) = LO8(ecx);
    MEM8(eax + 0x77) = LO8(ecx);
    MEM8(eax + 0x78) = LO8(ecx);
    MEM8(eax + 0x79) = LO8(ecx);
    MEM8(eax + 0x7A) = LO8(ecx);
    MEM32(eax + 0x7C) = 0x80000;
    MEM32(eax + 0x80) = edx;
    MEM32(eax + 0x84) = edx;
    MEM32(eax + 0x88) = edx;
    MEM32(eax + 0x8C) = edx;
    MEM8(eax + 0x90) = LO8(ecx);
    MEM8(eax + 0x110) = LO8(ecx);
    MEM8(eax + 0x190) = LO8(ecx);
    MEM8(eax + 0x210) = LO8(ecx);
    MEM8(eax + 0x310) = LO8(ecx);
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM8(eax + 0x5C) = LO8(ecx);
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x68) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x394) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x6C) = ecx;
    MEM32(eax + 0x70) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002155B0
 * Original: 0x002155B0 - 0x00215629 (121 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002155B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002155B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x398);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_002155C6; /* je: equal / zero */

loc_002155BE: ;
    ecx = eax + -8;
    PUSH32(esp, 0x002155C6u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_002155C6: ;
    PUSH32(esp, 0x3D2D80);
    MEM32(esi + 0x398) = 0;
    PUSH32(esp, 0x002155DAu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_002155DA: ;
    ecx = eax;
    PUSH32(esp, 0x002155E1u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_002155E1: ;
    edi = eax;
    eax = MEM32(esi + 0x39C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002155F5; /* je: equal / zero */

loc_002155ED: ;
    ecx = eax + -8;
    PUSH32(esp, 0x002155F5u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_002155F5: ;
    PUSH32(esp, 0x3F5BD4);
    MEM32(esi + 0x39C) = edi;
    PUSH32(esp, 0x00215605u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00215605: ;
    ecx = eax;
    PUSH32(esp, 0x0021560Cu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_0021560C: ;
    edi = eax;
    eax = MEM32(esi + 0x39C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00215620; /* je: equal / zero */

loc_00215618: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00215620u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00215620: ;
    MEM32(esi + 0x39C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00215630
 * Original: 0x00215630 - 0x00215682 (82 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215630: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(eax));
    esp = esp - 0x400;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    eax = 0x3CB744;
    if (TEST_NZ(_fa, _fb)) goto loc_0021564A; /* jne: not equal / not zero */

loc_00215645: ;
    eax = 0x3CC6B4;

loc_0021564A: ;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x3D2C44);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0021565Au); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0021565A: ;
    edx = esp + 0xC;
    esp = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00215667u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00215667: ;
    ecx = eax;
    PUSH32(esp, 0x0021566Eu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_0021566E: ;
    ecx = MEM32(esp + 0x404);
    MEM32(ecx) = eax;
    eax = ecx;
    esp = esp + 0x400;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00215690
 * Original: 0x00215690 - 0x002156D5 (69 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215690(void)
{

loc_00215690: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    esp = esp - 0x400;
    PUSH32(esp, ecx);
    edx = esp + 4;
    PUSH32(esp, 0x3CB224);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002156ADu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_002156AD: ;
    eax = esp + 0xC;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002156BAu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_002156BA: ;
    ecx = eax;
    PUSH32(esp, 0x002156C1u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_002156C1: ;
    ecx = MEM32(esp + 0x404);
    MEM32(ecx) = eax;
    eax = ecx;
    esp = esp + 0x400;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002156E0
 * Original: 0x002156E0 - 0x002159E0 (768 bytes, 288 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002156E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002156E0: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x002156F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002156F3: ;
    esi = MEM32(eax + 0x34);
    eax = ZX8(MEM8(ebp + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edi = MEM32(esi + 8);
    ecx = MEM32(0x5BC53C);
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x18) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_00215715; /* jne: not equal / not zero */

loc_0021570F: ;
    ecx = MEM32(0x5BC538);

loc_00215715: ;
    edx = MEM32(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x00215729u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00215729: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = 9;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00215846; /* jle: less or equal (signed <=) */

loc_0021573F: ;
    goto loc_00215745;

loc_00215741: ;
    esi = MEM32(esp + 0x20);

loc_00215745: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + ebx * 4);
    esi = MEM32(esp + 0x34);
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    eax = eax + esi;
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x00215767u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00215767: ;
    ebp = eax;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00215773; /* je: equal / zero */

loc_00215770: ;
    MEM32(eax + -4) = MEM32(eax + -4) + 1;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00215773: ;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(ecx + ebx * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002157C4; /* je: equal / zero */

loc_0021577E: ;
    eax = MEM32(esi + -4);
    esi = esi + 0xFFFFFFF8u;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    if ((_fa != 0)) goto loc_002157C4; /* jne: not equal / not zero */

loc_0021578A: ;
    edi = MEM32(esi);
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00215794u); RECOMP_ABI_CALL(0x001F87A0u, sub_001F87A0); /* call 0x001F87A0 */

loc_00215794: ;
    eax = esi + 8;
    edx = eax + 1;
    /* nop */

loc_002157A0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002157A0; /* jne: not equal / not zero */

loc_002157A7: ;
    eax = eax - edx;
    eax = eax + 9;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x002157B5u); RECOMP_ABI_CALL(0x001EBA30u, sub_001EBA30); /* call 0x001EBA30 */

loc_002157B5: ;
    SET_LO8(eax, MEM8(edi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002157C4; /* je: equal / zero */

loc_002157BC: ;
    ecx = MEM32(edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002157C4u); RECOMP_ABI_CALL(0x0020EEE0u, sub_0020EEE0); /* call 0x0020EEE0 */

loc_002157C4: ;
    esi = MEM32(esp + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edx = MEM32(ebp);
    eax = MEM32(esp + 0x10);
    MEM32(eax + ebx * 4) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_00215816; /* je: equal / zero */

loc_002157D6: ;
    eax = MEM32(esi + -4);
    esi = esi + 0xFFFFFFF8u;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    if ((_fa != 0)) goto loc_00215816; /* jne: not equal / not zero */

loc_002157E2: ;
    edi = MEM32(esi);
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002157ECu); RECOMP_ABI_CALL(0x001F87A0u, sub_001F87A0); /* call 0x001F87A0 */

loc_002157EC: ;
    eax = esi + 8;
    edx = eax + 1;

loc_002157F2: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002157F2; /* jne: not equal / not zero */

loc_002157F9: ;
    eax = eax - edx;
    eax = eax + 9;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00215807u); RECOMP_ABI_CALL(0x001EBA30u, sub_001EBA30); /* call 0x001EBA30 */

loc_00215807: ;
    SET_LO8(eax, MEM8(edi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00215816; /* je: equal / zero */

loc_0021580E: ;
    ecx = MEM32(edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00215816u); RECOMP_ABI_CALL(0x0020EEE0u, sub_0020EEE0); /* call 0x0020EEE0 */

loc_00215816: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + ebx * 4);
    edx = eax + 1;

loc_00215820: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00215820; /* jne: not equal / not zero */

loc_00215827: ;
    eax = eax - edx;
    edx = MEM32(esp + 0x14);
    eax = edx + eax + 1;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00215741; /* jl: less (signed <) */

loc_00215842: ;
    ebp = MEM32(esp + 0x1C);

loc_00215846: ;
    eax = ZX8(MEM8(ebp + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_0021585A; /* jne: not equal / not zero */

loc_00215854: ;
    ecx = MEM32(0x5BC538);

loc_0021585A: ;
    edx = MEM32(ecx);
    ecx = MEM32(esp + 0x14);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00215870u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00215870: ;
    ebx = eax;
    eax = 0x3F5BEC;
    edx = ebx;
    MEM32(esp + 0x34) = ebx;
    edx = edx - eax;
    /* nop */

loc_00215880: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00215880; /* jne: not equal / not zero */

loc_0021588A: ;
    ebp = MEM32(esp + 0x18);
    ecx = ebx + 4;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM8(ecx + -1) = 0x20;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002158D8; /* jle: less or equal (signed <=) */

loc_0021589B: ;
    goto loc_002158A0;

    /* nop */

loc_002158A0: ;
    ebx = MEM32(esp + 0x10);
    edx = MEM32(ebx + edi * 4);
    esi = ecx;
    /* nop */

loc_002158B0: ;
    SET_LO8(eax, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002158B0; /* jne: not equal / not zero */

loc_002158BA: ;
    eax = MEM32(ebx + edi * 4);
    esi = eax + 1;

loc_002158C0: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002158C0; /* jne: not equal / not zero */

loc_002158C7: ;
    eax = eax - esi;
    ecx = ecx + eax;
    MEM8(ecx) = 0x20;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002158A0; /* jl: less (signed <) */

loc_002158D4: ;
    ebx = MEM32(esp + 0x34);

loc_002158D8: ;
    eax = 0x3F5BE8;
    ecx = ecx - eax;
    /* nop */

loc_002158E0: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002158E0; /* jne: not equal / not zero */

loc_002158EA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002158F5; /* jne: not equal / not zero */

loc_002158EE: ;
    esi = 0; /* xor self */
    goto loc_00215984;

loc_002158F5: ;
    eax = MEM32(0x5BC528);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00215950; /* jne: not equal / not zero */

loc_002158FE: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00215917; /* jle: less or equal (signed <=) */

loc_00215907: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00215915; /* jge: greater or equal (signed >=) */

loc_0021590C: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00215925;

loc_00215915: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00215917: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00215923; /* jne: not equal / not zero */

loc_00215919: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00215925; /* jne: not equal / not zero */

loc_00215923: ;
    ecx = 0; /* xor self */

loc_00215925: ;
    eax = MEM32(0x46A688);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00215930u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00215930: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x0021593Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021593C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00215949; /* je: equal / zero */

loc_00215940: ;
    ecx = eax;
    PUSH32(esp, 0x00215947u); RECOMP_ABI_CALL(0x00202CC0u, sub_00202CC0); /* call 0x00202CC0 */

loc_00215947: ;
    goto loc_0021594B;

loc_00215949: ;
    eax = 0; /* xor self */

loc_0021594B: ;
    MEM32(0x5BC528) = eax;

loc_00215950: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x00215958u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00215958: ;
    ecx = MEM32(0x5BC53C);
    esi = eax;
    eax = MEM32(esp + 0x1C);
    eax = ZX8(MEM8(eax + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00215972; /* jne: not equal / not zero */

loc_0021596C: ;
    ecx = MEM32(0x5BC538);

loc_00215972: ;
    edx = MEM32(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00215984u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00215984: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = MEM32(esp + 0x2C);
    MEM32(ebx) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_002159D4; /* je: equal / zero */

loc_0021598E: ;
    ecx = MEM32(esi + -4);
    esi = esi + 0xFFFFFFF8u;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    MEM32(esi + 4) = eax;
    if ((_fa != 0)) goto loc_002159D4; /* jne: not equal / not zero */

loc_002159A0: ;
    edi = MEM32(esi);
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002159AAu); RECOMP_ABI_CALL(0x001F87A0u, sub_001F87A0); /* call 0x001F87A0 */

loc_002159AA: ;
    eax = esi + 8;
    edx = eax + 1;

loc_002159B0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002159B0; /* jne: not equal / not zero */

loc_002159B7: ;
    eax = eax - edx;
    eax = eax + 9;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x002159C5u); RECOMP_ABI_CALL(0x001EBA30u, sub_001EBA30); /* call 0x001EBA30 */

loc_002159C5: ;
    SET_LO8(eax, MEM8(edi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002159D4; /* je: equal / zero */

loc_002159CC: ;
    ecx = MEM32(edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002159D4u); RECOMP_ABI_CALL(0x0020EEE0u, sub_0020EEE0); /* call 0x0020EEE0 */

loc_002159D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002159E0
 * Original: 0x002159E0 - 0x00215A30 (80 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002159E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002159E0: ;
    eax = MEM32(esp + 8);
    fp_push(MEMD(eax)); /* fld double */
    esp = esp - 0x400;
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    ecx = esp + 8;
    PUSH32(esp, 0x3F5BF0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00215A01u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00215A01: ;
    edx = esp + 0x10;
    esp = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00215A0Eu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00215A0E: ;
    ecx = eax;
    PUSH32(esp, 0x00215A15u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00215A15: ;
    ecx = MEM32(esp + 0x404);
    MEM32(ecx) = eax;
    eax = ecx;
    esp = esp + 0x400;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00215A30
 * Original: 0x00215A30 - 0x00215B1D (237 bytes, 92 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215A30: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    esi = MEM32(esi + edx * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00215B15; /* je: equal / zero */

loc_00215A48: ;
    eax = MEM32(eax + 0x10);
    edi = MEM32(eax + edx * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00215A55; /* je: equal / zero */

loc_00215A52: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00215A55: ;
    ecx = MEM32(ecx + 0x10);
    ecx = MEM32(ecx + 0x10);
    esi = MEM32(ecx + edx * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00215A65; /* je: equal / zero */

loc_00215A62: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00215A65: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ebx = esp;
    if (TEST_Z(_fa, _fb)) goto loc_00215A7F; /* je: equal / zero */

loc_00215A72: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00215A78u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00215A78: ;
    ecx = eax;
    PUSH32(esp, 0x00215A7Fu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00215A7F: ;
    ecx = edi;
    MEM32(ebx) = eax;
    PUSH32(esp, 0x00215A88u); RECOMP_ABI_CALL(0x002126D0u, sub_002126D0); /* call 0x002126D0 */

loc_00215A88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00215ADF; /* jl: less (signed <) */

loc_00215A8C: ;
    edx = MEM32(esi + 0x10);
    ebx = MEM32(edx + eax * 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00215AA5; /* je: equal / zero */

loc_00215A96: ;
    eax = MEM32(ebx + -4);
    ecx = ebx + -8;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    PUSH32(esp, 0x00215AA5u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00215AA5: ;
    edx = MEM32(esi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00215ABC; /* jne: not equal / not zero */

loc_00215AB5: ;
    ecx = esi;
    PUSH32(esp, 0x00215ABCu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00215ABC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00215AD7; /* je: equal / zero */

loc_00215AC0: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00215AD7; /* jne: not equal / not zero */

loc_00215AD0: ;
    ecx = edi;
    PUSH32(esp, 0x00215AD7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00215AD7: ;
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00215ADF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00215AFA; /* je: equal / zero */

loc_00215AE3: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00215AFA; /* jne: not equal / not zero */

loc_00215AF3: ;
    ecx = esi;
    PUSH32(esp, 0x00215AFAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00215AFA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00215B15; /* je: equal / zero */

loc_00215AFE: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00215B15; /* jne: not equal / not zero */

loc_00215B0E: ;
    ecx = edi;
    PUSH32(esp, 0x00215B15u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00215B15: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00215B20
 * Original: 0x00215B20 - 0x00215C3C (284 bytes, 120 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215B20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00215B20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = MEM32(esi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215B3E; /* je: equal / zero */

loc_00215B2F: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00215B3Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00215B3E: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x34);
    MEM32(esi + 0x28) = ebx;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00215B52; /* jl: less (signed <) */

loc_00215B4D: ;
    MEM32(ecx + 8) = ebx;
    goto loc_00215B5A;

loc_00215B52: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00215B5Au); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00215B5A: ;
    eax = MEM32(edi + 0xC);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00215B65u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00215B65: ;
    edi = MEM32(esi + 0x38);
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00215B75; /* jl: less (signed <) */

loc_00215B70: ;
    MEM32(ecx + 8) = ebx;
    goto loc_00215B7D;

loc_00215B75: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00215B7Du); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00215B7D: ;
    eax = MEM32(edi + 0xC);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00215B88u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00215B88: ;
    edi = MEM32(esi + 0x44);
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00215B98; /* jl: less (signed <) */

loc_00215B93: ;
    MEM32(ecx + 8) = ebx;
    goto loc_00215BA0;

loc_00215B98: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00215BA0u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00215BA0: ;
    eax = MEM32(edi + 0xC);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00215BABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00215BAB: ;
    edi = MEM32(esi + 0x40);
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00215BBB; /* jl: less (signed <) */

loc_00215BB6: ;
    MEM32(ecx + 8) = ebx;
    goto loc_00215BC3;

loc_00215BBB: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00215BC3u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00215BC3: ;
    eax = MEM32(edi + 0xC);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00215BCEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00215BCE: ;
    edi = MEM32(esi + 0x44);
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00215BDE; /* jl: less (signed <) */

loc_00215BD9: ;
    MEM32(ecx + 8) = ebx;
    goto loc_00215BE6;

loc_00215BDE: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00215BE6u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00215BE6: ;
    eax = MEM32(edi + 0xC);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00215BF1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00215BF1: ;
    ecx = MEM32(esi + 0x48);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00215BFFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00215BFF: ;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), ebx (32-bit) */
    POP32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_00215C0D; /* jl: less (signed <) */

loc_00215C08: ;
    MEM32(ecx + 8) = ebx;
    goto loc_00215C15;

loc_00215C0D: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00215C15u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00215C15: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x00215C26u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00215C26: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215C37; /* je: equal / zero */

loc_00215C2A: ;
    edx = MEM32(ebp);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x00215C37u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00215C37: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00215C40
 * Original: 0x00215C40 - 0x00215CCF (143 bytes, 52 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215C40: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0xCC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00215C55u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00215C55: ;
    ecx = eax;
    PUSH32(esp, 0x00215C5Cu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00215C5C: ;
    edi = eax;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00215C6D; /* je: equal / zero */

loc_00215C65: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00215C6Du); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00215C6D: ;
    MEM32(esi + 0x28) = edi;
    ecx = MEM32(ebx + 0xA0);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA4); PUSH32(esp, 0x00215C81u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00215C81: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00215CBA; /* jne: not equal / not zero */

loc_00215C88: ;
    SET_LO8(eax, MEM8(0x5BC680));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00215CBA; /* jne: not equal / not zero */

loc_00215C91: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F5BF8);
    PUSH32(esp, 0x00215CA3u); RECOMP_ABI_CALL(0x001F83B0u, sub_001F83B0); /* call 0x001F83B0 */

loc_00215CA3: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00215CAE; /* jne: not equal / not zero */

loc_00215CAB: ;
    /* int3: debug-trap slide byte, stepped over */
    goto loc_00215CBA;

loc_00215CAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00215CBA; /* jne: not equal / not zero */

loc_00215CB3: ;
    MEM8(0x5BC680) = 1;

loc_00215CBA: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00215CC9u); RECOMP_ABI_CALL(0x00200ED0u, sub_00200ED0); /* call 0x00200ED0 */

loc_00215CC9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00215CD0
 * Original: 0x00215CD0 - 0x00215CFE (46 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215CD0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00215CDEu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00215CDE: ;
    ecx = eax;
    PUSH32(esp, 0x00215CE5u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00215CE5: ;
    edi = eax;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00215CF6; /* je: equal / zero */

loc_00215CEE: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00215CF6u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00215CF6: ;
    MEM32(esi + 0x1C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00215D00
 * Original: 0x00215D00 - 0x00215D2E (46 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215D00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00215D0Eu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00215D0E: ;
    ecx = eax;
    PUSH32(esp, 0x00215D15u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00215D15: ;
    edi = eax;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00215D26; /* je: equal / zero */

loc_00215D1E: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00215D26u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00215D26: ;
    MEM32(esi + 0xC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00215D30
 * Original: 0x00215D30 - 0x00215D62 (50 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215D30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00215D3Fu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00215D3F: ;
    ecx = eax;
    PUSH32(esp, 0x00215D46u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00215D46: ;
    ebx = eax;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00215D57; /* je: equal / zero */

loc_00215D4F: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00215D57u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00215D57: ;
    eax = edi;
    POP32(esp, edi);
    MEM32(esi + 0x28) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00215D70
 * Original: 0x00215D70 - 0x00215DB9 (73 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215D70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00215D70: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    esp = esp - 0x400;
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    ecx = esp + 8;
    PUSH32(esp, 0x3C8448);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00215D91u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00215D91: ;
    edx = esp + 0x10;
    esp = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00215D9Eu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00215D9E: ;
    ecx = eax;
    PUSH32(esp, 0x00215DA5u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00215DA5: ;
    ecx = MEM32(esp + 0x404);
    MEM32(ecx) = eax;
    eax = ecx;
    esp = esp + 0x400;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00215DC0
 * Original: 0x00215DC0 - 0x00215E2B (107 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215DC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00215DD4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00215DD4: ;
    eax = MEM32(eax);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00215DE2; /* jne: not equal / not zero */

loc_00215DDD: ;
    eax = MEM32(0x46A3C8);

loc_00215DE2: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00215DE9u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00215DE9: ;
    ecx = eax;
    PUSH32(esp, 0x00215DF0u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00215DF0: ;
    edi = eax;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00215E01; /* je: equal / zero */

loc_00215DF9: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00215E01u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00215E01: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 8) = edi;
    ecx = eax;
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00215E27; /* je: equal / zero */

loc_00215E0F: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00215E27; /* jne: not equal / not zero */

loc_00215E22: ;
    PUSH32(esp, 0x00215E27u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00215E27: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00215E30
 * Original: 0x00215E30 - 0x00215E9F (111 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215E30: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00215E4D; /* je: equal / zero */

loc_00215E3B: ;
    PUSH32(esp, edi);
    edi = 0x3C806C;
    ecx = 1;
    eax = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    if ((_flags == 0)) goto loc_00215E9C; /* jne: not equal / not zero */

loc_00215E4D: ;
    ecx = MEM32(ebx + 0x68);
    edx = MEM32(ecx + 0xC);
    eax = edx;
    esi = eax + 1;

loc_00215E58: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00215E58; /* jne: not equal / not zero */

loc_00215E5F: ;
    eax = eax - esi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00215E79; /* jle: less or equal (signed <=) */

loc_00215E66: ;
    SET_LO8(ecx, MEM8(edx + eax + -1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215E79; /* je: equal / zero */

loc_00215E6F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215E79; /* je: equal / zero */

loc_00215E74: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00215E66; /* jg: greater (signed >) */

loc_00215E79: ;
    eax = eax + edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00215E81u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00215E81: ;
    ecx = eax;
    PUSH32(esp, 0x00215E88u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00215E88: ;
    esi = eax;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00215E99; /* je: equal / zero */

loc_00215E91: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00215E99u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00215E99: ;
    MEM32(ebx + 0x14) = esi;

loc_00215E9C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00215EA0
 * Original: 0x00215EA0 - 0x00215EE4 (68 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215EA0(void)
{

loc_00215EA0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    esp = esp - 0x400;
    PUSH32(esp, ecx);
    edx = esp + 4;
    PUSH32(esp, 0x3CB224);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00215EBCu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00215EBC: ;
    eax = esp + 0xC;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00215EC9u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00215EC9: ;
    ecx = eax;
    PUSH32(esp, 0x00215ED0u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00215ED0: ;
    ecx = MEM32(esp + 0x404);
    MEM32(ecx) = eax;
    eax = ecx;
    esp = esp + 0x400;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00215EF0
 * Original: 0x00215EF0 - 0x00215F44 (84 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215EF0: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00215F42; /* je: equal / zero */

loc_00215EF8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    /* nop */

loc_00215F00: ;
    ebx = edi;
    esi = MEM32(ebx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = MEM32(edi + 4);
    if (TEST_Z(_fa, _fb)) goto loc_00215F24; /* je: equal / zero */

loc_00215F0C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00215F12u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_00215F12: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00215F24; /* je: equal / zero */

loc_00215F19: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00215F24u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00215F24: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00215F2Au); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_00215F2A: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00215F3C; /* je: equal / zero */

loc_00215F31: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00215F3Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00215F3C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00215F00; /* jne: not equal / not zero */

loc_00215F40: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00215F42: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00215F50
 * Original: 0x00215F50 - 0x002160DF (399 bytes, 145 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215F50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebx = ecx;
    PUSH32(esp, 0x00215F5Fu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00215F5F: ;
    ecx = eax;
    PUSH32(esp, 0x00215F66u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00215F66: ;
    esi = eax;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00215F77; /* je: equal / zero */

loc_00215F6F: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00215F77u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00215F77: ;
    eax = MEM32(esp + 0x14);
    MEM32(ebx + 0xC) = esi;
    edi = 0x3DB1F8;
    esi = eax;
    ecx = 2;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00215FA2; /* jne: not equal / not zero */

loc_00215F90: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00215F9Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00215F9D: ;
    goto loc_002160C5;

loc_00215FA2: ;
    edi = 0x3DB1FC;
    esi = eax;
    ecx = 3;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00215FC7; /* jne: not equal / not zero */

loc_00215FB4: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00215FC2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00215FC2: ;
    goto loc_002160C5;

loc_00215FC7: ;
    edi = 0x3D576C;
    esi = eax;
    ecx = 2;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00215FEC; /* jne: not equal / not zero */

loc_00215FD9: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00215FE7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00215FE7: ;
    goto loc_002160C5;

loc_00215FEC: ;
    edi = 0x3E89A8;
    esi = eax;
    ecx = 3;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00216011; /* jne: not equal / not zero */

loc_00215FFE: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0021600Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021600C: ;
    goto loc_002160C5;

loc_00216011: ;
    edi = 0x3F5C64;
    esi = eax;
    ecx = 3;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_002160B7; /* je: equal / zero */

loc_00216027: ;
    edi = 0x3EEBA0;
    esi = eax;
    ecx = 3;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_002160B7; /* je: equal / zero */

loc_00216039: ;
    edi = 0x3F5C60;
    esi = eax;
    ecx = 4;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_002160B3; /* je: equal / zero */

loc_0021604B: ;
    edi = 0x3F5C5C;
    esi = eax;
    ecx = 4;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_002160B3; /* je: equal / zero */

loc_0021605D: ;
    edi = 0x3D2428;
    esi = eax;
    ecx = 2;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_002160AF; /* je: equal / zero */

loc_0021606F: ;
    edi = 0x3EEBA4;
    esi = eax;
    ecx = 3;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_002160AF; /* je: equal / zero */

loc_00216081: ;
    edi = 0x3F5C58;
    esi = eax;
    ecx = 3;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_002160AB; /* je: equal / zero */

loc_00216093: ;
    esi = eax;
    edi = 0x3F5C54;
    ecx = 4;
    eax = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_002160AB; /* je: equal / zero */

loc_002160A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002160AB: ;
    PUSH32(esp, 6);
    goto loc_002160B9;

loc_002160AF: ;
    PUSH32(esp, 2);
    goto loc_002160B9;

loc_002160B3: ;
    PUSH32(esp, 7);
    goto loc_002160B9;

loc_002160B7: ;
    PUSH32(esp, 3);

loc_002160B9: ;
    edx = MEM32(ebx);
    eax = esp + 0x14;
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x002160C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002160C5: ;
    eax = MEM32(eax);
    esi = MEM32(0x46A728);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & ebx;
    eax = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002160E0
 * Original: 0x002160E0 - 0x00216183 (163 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002160E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002160E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebx = ecx;
    PUSH32(esp, 0x002160EFu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_002160EF: ;
    ecx = eax;
    PUSH32(esp, 0x002160F6u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_002160F6: ;
    esi = eax;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00216107; /* je: equal / zero */

loc_002160FF: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00216107u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00216107: ;
    eax = MEM32(esp + 0x14);
    MEM32(ebx + 0xC) = esi;
    edi = 0x3DB1F8;
    esi = eax;
    ecx = 2;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00216144; /* jne: not equal / not zero */

loc_00216120: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0021612Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021612D: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BC5D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x5BC5D8) (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    POP32(esp, edi);
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00216144: ;
    esi = eax;
    edi = 0x3DB1FC;
    ecx = 3;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0021617B; /* jne: not equal / not zero */

loc_00216156: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00216164u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00216164: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BC5D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x5BC5D8) (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    POP32(esp, edi);
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0021617B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00216190
 * Original: 0x00216190 - 0x0021620F (127 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216190: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    MEM32(esi) = 0x3F43D8;
    MEM32(esi + 4) = 0;
    ecx = 0x69C;
    edi = esi + 0x14;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    PUSH32(esp, 0x002161B4u); RECOMP_ABI_CALL(0x001E9840u, sub_001E9840); /* call 0x001E9840 */

loc_002161B4: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002161D0; /* je: equal / zero */

loc_002161BB: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002161D0; /* jne: not equal / not zero */

loc_002161CB: ;
    PUSH32(esp, 0x002161D0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002161D0: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00216208; /* je: equal / zero */

loc_002161D7: ;
    eax = MEM32(0x5BC508);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00216200; /* je: equal / zero */

loc_002161E2: ;
    PUSH32(esp, 0x002161E7u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_002161E7: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00216208; /* je: equal / zero */

loc_002161EE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x002161F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002161F9: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00216200: ;
    PUSH32(esp, 0x00216205u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00216205: ;
    esp = esp + 4;

loc_00216208: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00216210
 * Original: 0x00216210 - 0x0021658E (894 bytes, 279 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216210(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00216210: ;
    esp = esp - 0x20;
    eax = MEM32(0x5BC544);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00216244; /* je: equal / zero */

loc_00216226: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00216244; /* jl: less (signed <) */

loc_0021622A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00216244; /* jge: greater or equal (signed >=) */

loc_0021622F: ;
    MEM32(eax * 4 + 0x5BB704) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x5BC544) = eax;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x5BC544);

loc_00216244: ;
    ebp = 0; /* xor self */
    MEM32(esp + 0x10) = ebp;
    goto loc_00216251;

loc_0021624C: ;
    eax = MEM32(0x5BC544);

loc_00216251: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216312; /* je: equal / zero */

loc_00216259: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00216306; /* jle: less or equal (signed <=) */

loc_00216262: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 7 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00216306; /* jg: greater (signed >) */

loc_0021626B: ;
    _fa = (uint32_t)(MEM8(0x5BC548)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5BC548), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021627F; /* je: equal / zero */

loc_00216273: ;
    eax = MEM32(esp + 0x14);
    esi = MEM32(eax + 0x14);
    goto loc_0021644B;

loc_0021627F: ;
    eax = MEM32(0x5BC51C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002162FC; /* je: equal / zero */

loc_00216288: ;
    edi = 0x3F5C7C;
    esi = eax;
    ecx = 0x12;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_002162C2; /* jne: not equal / not zero */

loc_0021629A: ;
    PUSH32(esp, 0x0021629Fu); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_0021629F: ;
    PUSH32(esp, 0xD0);
    PUSH32(esp, 0x002162A9u); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_002162A9: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216449; /* je: equal / zero */

loc_002162B4: ;
    ecx = eax;
    PUSH32(esp, 0x002162BBu); RECOMP_ABI_CALL(0x00211450u, sub_00211450); /* call 0x00211450 */

loc_002162BB: ;
    esi = eax;
    goto loc_0021644B;

loc_002162C2: ;
    esi = eax;
    edi = 0x3F5C68;
    ecx = 0x13;
    eax = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0021629A; /* jne: not equal / not zero */

loc_002162D4: ;
    PUSH32(esp, 0x002162D9u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_002162D9: ;
    PUSH32(esp, 0xA0);
    PUSH32(esp, 0x002162E3u); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_002162E3: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216449; /* je: equal / zero */

loc_002162EE: ;
    ecx = eax;
    PUSH32(esp, 0x002162F5u); RECOMP_ABI_CALL(0x00212350u, sub_00212350); /* call 0x00212350 */

loc_002162F5: ;
    esi = eax;
    goto loc_0021644B;

loc_002162FC: ;
    PUSH32(esp, 0x00216301u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_00216301: ;
    goto loc_00216413;

loc_00216306: ;
    edx = MEM32(esp + 0x14);
    esi = MEM32(edx + 0x14);
    goto loc_0021644B;

loc_00216312: ;
    edx = MEM32(0x5BC51C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002163E9; /* je: equal / zero */

loc_00216320: ;
    edi = 0x3F5C7C;
    esi = edx;
    ecx = 0x12;
    ebp = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_002163AF; /* je: equal / zero */

loc_00216332: ;
    esi = edx;
    edi = 0x3F5C68;
    ecx = 0x13;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_002163AF; /* jne: not equal / not zero */

loc_00216344: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00216358; /* jle: less or equal (signed <=) */

loc_00216348: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00216356; /* jge: greater or equal (signed >=) */

loc_0021634D: ;
    eax = MEM32(eax * 4 + 0x5BB700);
    goto loc_00216365;

loc_00216356: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */

loc_00216358: ;
    if (CMP_NE(_fa, _fb)) goto loc_00216363; /* jne: not equal / not zero */

loc_0021635A: ;
    eax = MEM32(0x5BBAB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00216365; /* jne: not equal / not zero */

loc_00216363: ;
    eax = 0; /* xor self */

loc_00216365: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0021636Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021636E: ;
    PUSH32(esp, 0xA0);
    PUSH32(esp, 0x00216378u); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_00216378: ;
    ebp = MEM32(esp + 0x14);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216449; /* je: equal / zero */

loc_00216387: ;
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFF000001u;
    ecx = ecx | 1;
    MEM32(eax + 4) = ecx;
    MEM8(eax + 7) = LO8(ebx);
    MEM32(eax) = 0x3F4DF8;
    MEM32(eax + 0x74) = ebx;
    MEM32(eax + 0x94) = ebx;
    esi = eax;
    goto loc_0021644B;

loc_002163AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002163C3; /* jle: less or equal (signed <=) */

loc_002163B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002163C1; /* jge: greater or equal (signed >=) */

loc_002163B8: ;
    eax = MEM32(eax * 4 + 0x5BB700);
    goto loc_002163D0;

loc_002163C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */

loc_002163C3: ;
    if (CMP_NE(_fa, _fb)) goto loc_002163CE; /* jne: not equal / not zero */

loc_002163C5: ;
    eax = MEM32(0x5BBAB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002163D0; /* jne: not equal / not zero */

loc_002163CE: ;
    eax = 0; /* xor self */

loc_002163D0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x002163D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002163D9: ;
    PUSH32(esp, 0xD0);
    PUSH32(esp, 0x002163E3u); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_002163E3: ;
    ebp = MEM32(esp + 0x14);
    goto loc_0021641D;

loc_002163E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002163FD; /* jle: less or equal (signed <=) */

loc_002163ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002163FB; /* jge: greater or equal (signed >=) */

loc_002163F2: ;
    eax = MEM32(eax * 4 + 0x5BB700);
    goto loc_0021640A;

loc_002163FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */

loc_002163FD: ;
    if (CMP_NE(_fa, _fb)) goto loc_00216408; /* jne: not equal / not zero */

loc_002163FF: ;
    eax = MEM32(0x5BBAB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021640A; /* jne: not equal / not zero */

loc_00216408: ;
    eax = 0; /* xor self */

loc_0021640A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00216413u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00216413: ;
    PUSH32(esp, 0xD0);
    PUSH32(esp, 0x0021641Du); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_0021641D: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216449; /* je: equal / zero */

loc_00216424: ;
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFF000001u;
    ecx = ecx | 1;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x3F4770;
    MEM8(eax + 7) = LO8(ebx);
    MEM32(eax + 0x78) = ebx;
    MEM32(eax + 0xB0) = ebx;
    esi = eax;
    goto loc_0021644B;

loc_00216449: ;
    esi = 0; /* xor self */

loc_0021644B: ;
    eax = MEM32(esp + 0x14);
    edx = ebp + ebp * 8;
    edx = edx << 4;
    MEM32(edx + eax + 0x14) = esi;
    _fa = (uint32_t)(MEM8(0x5BC548)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5BC548), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002164BD; /* je: equal / zero */

loc_00216462: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021647D; /* je: equal / zero */

loc_00216466: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00216571; /* jne: not equal / not zero */

loc_0021646F: ;
    ecx = MEM32(0x5BC508);
    MEM32(ecx + 0x34) = esi;
    goto loc_00216571;

loc_0021647D: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x178); PUSH32(esp, 0x00216487u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00216487: ;
    eax = MEM32(0x5BB630);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002164A0; /* je: equal / zero */

loc_00216490: ;
    PUSH32(esp, eax);
    eax = esp + 0x1C;

loc_00216495: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x002164A0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002164A0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x002164A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002164A7: ;
    eax = MEM32(0x5BC508);
    PUSH32(esp, esi);
    MEM32(eax + 0x30) = esi;
    PUSH32(esp, 0x002164B5u); RECOMP_ABI_CALL(0x001F6FB0u, sub_001F6FB0); /* call 0x001F6FB0 */

loc_002164B5: ;
    esp = esp + 4;
    goto loc_00216571;

loc_002164BD: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00216571; /* ja: above (unsigned >) */

loc_002164C6: ;
    { uint32_t _jt = MEM32(ebp * 4 + 0x216590); /* switch: 8 entries, 6 targets */
    if (_jt == 0x002164CDu) goto loc_002164CD;
    if (_jt == 0x002164E7u) goto loc_002164E7;
    if (_jt == 0x0021650Au) goto loc_0021650A;
    if (_jt == 0x00216524u) goto loc_00216524;
    if (_jt == 0x0021653Eu) goto loc_0021653E;
    if (_jt == 0x00216571u) goto loc_00216571;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002164CD: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x178); PUSH32(esp, 0x002164D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002164D7: ;
    eax = MEM32(0x5BB630);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002164A0; /* je: equal / zero */

loc_002164E0: ;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    goto loc_00216495;

loc_002164E7: ;
    ecx = MEM32(0x5BC508);
    MEM32(ecx + 0x34) = esi;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x178); PUSH32(esp, 0x002164FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002164FA: ;
    eax = MEM32(0x5BC104);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216561; /* je: equal / zero */

loc_00216503: ;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    goto loc_00216556;

loc_0021650A: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x178); PUSH32(esp, 0x00216514u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00216514: ;
    eax = MEM32(0x5BBD7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216561; /* je: equal / zero */

loc_0021651D: ;
    PUSH32(esp, eax);
    eax = esp + 0x28;
    goto loc_00216556;

loc_00216524: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x178); PUSH32(esp, 0x0021652Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021652E: ;
    eax = MEM32(0x5BBC5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216561; /* je: equal / zero */

loc_00216537: ;
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    goto loc_00216556;

loc_0021653E: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x178); PUSH32(esp, 0x00216548u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00216548: ;
    eax = MEM32(0x5BB888);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216561; /* je: equal / zero */

loc_00216551: ;
    PUSH32(esp, eax);
    eax = esp + 0x30;

loc_00216556: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00216561u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00216561: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00216567u); RECOMP_ABI_CALL(0x001F5D60u, sub_001F5D60); /* call 0x001F5D60 */

loc_00216567: ;
    edx = MEM32(esi);
    ecx = esi;
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00216571u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00216571: ;
    edx = MEM32(esi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x2F (32-bit) */
    MEM32(esi + 4) = edx;
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_0021624C; /* jl: less (signed <) */

loc_00216586: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0021658E
 * Original: 0x0021658E - 0x0021661C (142 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021658E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021658E: ;
    edi = edi;
    /* TODO: int 0x64 */
    MEM32(eax) = MEM32(eax) & eax;
    if (_flags /* jno: not overflow */) goto loc_002165FB;

loc_00216596: ;
    MEM32(eax) = MEM32(eax) & eax;
    if (_flags /* jno: not overflow */) (void)0; /* goto loc_002165FF - dead code, label not in function */

loc_0021659A: ;
    MEM32(eax) = MEM32(eax) & eax;
    if (_flags /* jno: not overflow */) (void)0; /* goto loc_00216603 - dead code, label not in function */

loc_0021659E: ;
    MEM32(eax) = MEM32(eax) & eax;
    /* TODO: out 0x64, eax */
    MEM32(eax) = MEM32(eax) & eax;
    SET_HI8(eax, HI8(eax) | MEM8(ebp + 0x21));
    MEM8(0x653E0021) = MEM8(0x653E0021) + HI8(eax);
    MEM32(eax) = MEM32(eax) & eax;
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi + 0x98) = 0;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021661A; /* je: equal / zero */

loc_002165C4: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x002165D5u); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_002165D5: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002165EF; /* jle: less or equal (signed <=) */

loc_002165DE: ;
    edi = edi;

loc_002165E0: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002165E0; /* jl: less (signed <) */

loc_002165EF: ;
    MEM32(esi + 8) = 0;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */

loc_002165FB: ;
    POP32(esp, esi);
    if (_flags /* je: equal / zero */) goto loc_00216613;

loc_002165FE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00216613; /* jne: not equal / not zero */

loc_0021660E: ;
    PUSH32(esp, 0x00216613u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00216613: ;
    MEM32(edi + 0x10) = 0;

loc_0021661A: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002165B0
 * Original: 0x002165B0 - 0x0021661C (108 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002165B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002165B0: ;
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi + 0x98) = 0;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021661A; /* je: equal / zero */

loc_002165C4: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x002165D5u); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_002165D5: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002165EF; /* jle: less or equal (signed <=) */

loc_002165DE: ;
    edi = edi;

loc_002165E0: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002165E0; /* jl: less (signed <) */

loc_002165EF: ;
    MEM32(esi + 8) = 0;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00216613; /* je: equal / zero */

loc_002165FE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00216613; /* jne: not equal / not zero */

loc_0021660E: ;
    PUSH32(esp, 0x00216613u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00216613: ;
    MEM32(edi + 0x10) = 0;

loc_0021661A: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00216620
 * Original: 0x00216620 - 0x00216749 (297 bytes, 95 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216620: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00216629u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00216629: ;
    eax = MEM32(esi + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021663A; /* je: equal / zero */

loc_00216632: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021663Au); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021663A: ;
    MEM32(esi + 0x14) = edi;
    PUSH32(esp, 0x00216642u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00216642: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216651; /* je: equal / zero */

loc_00216649: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00216651u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00216651: ;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = edi;
    PUSH32(esp, 0x00216662u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00216662: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216671; /* je: equal / zero */

loc_00216669: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00216671u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00216671: ;
    MEM32(esi + 0x28) = edi;
    PUSH32(esp, 0x00216679u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00216679: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216688; /* je: equal / zero */

loc_00216680: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00216688u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00216688: ;
    MEM32(esi + 0x2C) = edi;
    PUSH32(esp, 0x00216690u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00216690: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021669F; /* je: equal / zero */

loc_00216697: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021669Fu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021669F: ;
    MEM32(esi + 0x30) = edi;
    PUSH32(esp, 0x002166A7u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_002166A7: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002166B6; /* je: equal / zero */

loc_002166AE: ;
    ecx = eax + -8;
    PUSH32(esp, 0x002166B6u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_002166B6: ;
    MEM32(esi + 0x34) = edi;
    PUSH32(esp, 0x002166BEu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_002166BE: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002166CD; /* je: equal / zero */

loc_002166C5: ;
    ecx = eax + -8;
    PUSH32(esp, 0x002166CDu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_002166CD: ;
    MEM32(esi + 0x38) = edi;
    PUSH32(esp, 0x002166D5u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_002166D5: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002166E4; /* je: equal / zero */

loc_002166DC: ;
    ecx = eax + -8;
    PUSH32(esp, 0x002166E4u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_002166E4: ;
    MEM32(esi + 0x3C) = edi;
    PUSH32(esp, 0x002166ECu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_002166EC: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002166FB; /* je: equal / zero */

loc_002166F3: ;
    ecx = eax + -8;
    PUSH32(esp, 0x002166FBu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_002166FB: ;
    MEM32(esi + 0x40) = edi;
    PUSH32(esp, 0x00216703u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00216703: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216712; /* je: equal / zero */

loc_0021670A: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00216712u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00216712: ;
    MEM32(esi + 0x44) = edi;
    PUSH32(esp, 0x0021671Au); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0021671A: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216729; /* je: equal / zero */

loc_00216721: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00216729u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00216729: ;
    MEM32(esi + 0x48) = edi;
    PUSH32(esp, 0x00216731u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00216731: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216740; /* je: equal / zero */

loc_00216738: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00216740u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00216740: ;
    MEM32(esi + 0x4C) = edi;
    MEM32(esi + 0x50) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00216750
 * Original: 0x00216750 - 0x0021677E (46 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216750: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0021675Eu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0021675E: ;
    ecx = eax;
    PUSH32(esp, 0x00216765u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00216765: ;
    edi = eax;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00216776; /* je: equal / zero */

loc_0021676E: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00216776u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00216776: ;
    MEM32(esi + 0x4C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00216780
 * Original: 0x00216780 - 0x0021688B (267 bytes, 106 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216780(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00216780: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0021679F; /* je: equal / zero */

loc_00216792: ;
    eax = MEM32(eax + 8);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x14) = eax;
    if (CMP_G(_fas & _fbs, 0)) goto loc_002167C0; /* jg: greater (signed >) */

loc_0021679F: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(0x46A728);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 16; return; /* ret 12 */

loc_002167B5: ;
    ecx = MEM32(esp + 0x10);
    /* nop */

loc_002167C0: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax + 0x10);
    edi = MEM32(ecx + ebp * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_002167D0; /* je: equal / zero */

loc_002167CD: ;
    MEM32(edi + -4) = MEM32(edi + -4) + 1;
    _fa = (uint32_t)(MEM32(edi + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002167D0: ;
    esi = MEM32(esp + 0x20);
    eax = edi;

loc_002167D6: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002167FE; /* jne: not equal / not zero */

loc_002167E0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_002167FA; /* je: equal / zero */

loc_002167E4: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002167FE; /* jne: not equal / not zero */

loc_002167F0: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_002167D6; /* jne: not equal / not zero */

loc_002167FA: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_00216803;

loc_002167FE: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_00216803: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(ebx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0021684C; /* je: equal / zero */

loc_0021680C: ;
    eax = MEM32(edi + -4);
    esi = edi + -8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    if ((_fa != 0)) goto loc_0021684C; /* jne: not equal / not zero */

loc_00216818: ;
    edi = MEM32(esi);
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00216822u); RECOMP_ABI_CALL(0x001F87A0u, sub_001F87A0); /* call 0x001F87A0 */

loc_00216822: ;
    eax = esi + 8;
    edx = eax + 1;

loc_00216828: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00216828; /* jne: not equal / not zero */

loc_0021682F: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(9)) >> 32) & 1);
    eax = eax + 9;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0021683Du); RECOMP_ABI_CALL(0x001EBA30u, sub_001EBA30); /* call 0x001EBA30 */

loc_0021683D: ;
    SET_LO8(eax, MEM8(edi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0021684C; /* je: equal / zero */

loc_00216844: ;
    ecx = MEM32(edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021684Cu); RECOMP_ABI_CALL(0x0020EEE0u, sub_0020EEE0); /* call 0x0020EEE0 */

loc_0021684C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00216862; /* jne: not equal / not zero */

loc_00216850: ;
    eax = MEM32(esp + 0x14);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_002167B5; /* jl: less (signed <) */

loc_0021685D: ;
    goto loc_0021679F;

loc_00216862: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + ebp * 4);
    ecx = MEM32(esp + 0x24);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x18);
    edx = MEM32(0x5BC5D8);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00216890
 * Original: 0x00216890 - 0x002168E5 (85 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216890: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_002168BC; /* je: equal / zero */

loc_00216899: ;
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002168BC; /* jle: less or equal (signed <=) */

loc_002168A5: ;
    edx = MEM32(edx + 0x10);
    edi = MEM32(esp + 0x10);
    /* nop */

loc_002168B0: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002168CB; /* je: equal / zero */

loc_002168B4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002168B0; /* jl: less (signed <) */

loc_002168BC: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = 0;
    esp += 12; return; /* ret 8 */

loc_002168CB: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002168DE; /* je: equal / zero */

loc_002168DB: ;
    MEM32(eax + -4) = MEM32(eax + -4) + 1;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002168DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002168F0
 * Original: 0x002168F0 - 0x00216967 (119 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002168F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002168F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ebx = 0; /* xor self */
    eax = eax & 0xFF000001u;
    eax = eax | 1;
    MEM32(esi + 4) = eax;
    MEM8(esi + 7) = LO8(ebx);
    MEM32(esi) = 0x3F5C90;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 8) = ebx;
    MEM8(esi + 0x25) = LO8(ebx);
    MEM16(esi + 0x10) = 0xFFFF;
    MEM16(esi + 0x12) = LO16(ebx);
    MEM16(esi + 0x14) = LO16(ebx);
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x1C) = ebx;
    PUSH32(esp, 0x0021692Fu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0021692F: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021693E; /* je: equal / zero */

loc_00216936: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021693Eu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021693E: ;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM8(esi + 0x24) = LO8(ebx);
    MEM8(esi + 0x27) = LO8(ebx);
    MEM8(esi + 0x28) = LO8(ebx);
    MEM8(esi + 0x29) = LO8(ebx);
    MEM8(esi + 0x2A) = LO8(ebx);
    MEM8(esi + 0x2B) = 1;
    MEM8(esi + 0x2C) = 2;
    MEM8(esi + 0x26) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00216970
 * Original: 0x00216970 - 0x00216976 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216970(void)
{

loc_00216970: ;
    eax = MEM32(0x5BC550);
    esp += 4; return; /* ret */

}

/**
 * sub_00216980
 * Original: 0x00216980 - 0x00216A6D (237 bytes, 80 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216980: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0x0021698Fu); RECOMP_ABI_CALL(0x001F7C60u, sub_001F7C60); /* call 0x001F7C60 */

loc_0021698F: ;
    MEM32(ebx) = 0x3F5C90;
    MEM32(ebx + 0xC) = 0;
    eax = MEM32(esi + 8);
    MEM32(ebx + 8) = eax;
    SET_LO8(ecx, MEM8(esi + 0x25));
    MEM8(ebx + 0x25) = LO8(ecx);
    SET_LO16(edx, MEM16(esi + 0x10));
    MEM16(ebx + 0x10) = LO16(edx);
    SET_LO16(eax, MEM16(esi + 0x14));
    MEM16(ebx + 0x14) = LO16(eax);
    SET_LO16(ecx, MEM16(esi + 0x12));
    MEM16(ebx + 0x12) = LO16(ecx);
    edx = MEM32(esi + 0x1C);
    MEM32(ebx + 0x1C) = edx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002169D0; /* je: equal / zero */

loc_002169CD: ;
    MEM32(eax + -4) = MEM32(eax + -4) + 1;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002169D0: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002169DF; /* je: equal / zero */

loc_002169D7: ;
    ecx = eax + -8;
    PUSH32(esp, 0x002169DFu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_002169DF: ;
    eax = MEM32(esi + 0xC);
    MEM32(ebx + 0xC) = eax;
    ecx = MEM32(esi + 0x18);
    MEM32(ebx + 0x18) = ecx;
    edx = MEM32(esi + 0x30);
    MEM32(ebx + 0x30) = edx;
    SET_LO8(eax, MEM8(esi + 0x24));
    MEM8(ebx + 0x24) = LO8(eax);
    SET_LO8(ecx, MEM8(esi + 0x27));
    MEM8(ebx + 0x27) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0x28));
    MEM8(ebx + 0x28) = LO8(edx);
    SET_LO8(eax, MEM8(esi + 0x29));
    MEM8(ebx + 0x29) = LO8(eax);
    SET_LO8(ecx, MEM8(esi + 0x2A));
    MEM8(ebx + 0x2A) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0x2B));
    MEM8(ebx + 0x2B) = LO8(edx);
    SET_LO8(eax, MEM8(esi + 0x2C));
    MEM8(ebx + 0x2C) = LO8(eax);
    eax = ZX8(MEM8(ebx + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    SET_LO8(ecx, MEM8(esi + 0x26));
    MEM8(ebx + 0x26) = LO8(ecx);
    ecx = ZX16(MEM16(ebx + 0x14));
    edx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_00216A39; /* jne: not equal / not zero */

loc_00216A33: ;
    edx = MEM32(0x5BC538);

loc_00216A39: ;
    edx = MEM32(edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00216A4Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00216A4B: ;
    ecx = ZX16(MEM16(ebx + 0x14));
    MEM32(ebx + 0x20) = eax;
    esi = MEM32(esi + 0x20);
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
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00216A70
 * Original: 0x00216A70 - 0x00216AA2 (50 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216A70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00216A7F; /* je: equal / zero */

loc_00216A7C: ;
    MEM32(esi + -4) = MEM32(esi + -4) + 1;
    _fa = (uint32_t)(MEM32(esi + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00216A7F: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00216A8E; /* je: equal / zero */

loc_00216A86: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00216A8Eu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00216A8E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi + 0xC) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00216A9D; /* je: equal / zero */

loc_00216A95: ;
    ecx = esi + -8;
    PUSH32(esp, 0x00216A9Du); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00216A9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00216AB0
 * Original: 0x00216AB0 - 0x00216DA0 (752 bytes, 272 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216AB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00216AB0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = ZX8(MEM8(edi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = MEM32(0x5BC53C);
    MEM32(esp + 0x10) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_00216AD1; /* jne: not equal / not zero */

loc_00216ACB: ;
    ecx = MEM32(0x5BC538);

loc_00216AD1: ;
    edx = MEM32(ecx);
    esi = MEM32(esp + 0x30);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    ecx = MEM32(edx + eax * 4);
    eax = MEM32(ecx);
    edx = esi * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xCC); PUSH32(esp, 0x00216AECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00216AEC: ;
    ebp = MEM32(esp + 0x2C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00216C12; /* jle: less or equal (signed <=) */

loc_00216B06: ;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x1C) = esi;
    edi = edi;

loc_00216B10: ;
    ecx = MEM32(esp + 0x34);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xDC); PUSH32(esp, 0x00216B25u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00216B25: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00216C08; /* je: equal / zero */

loc_00216B31: ;
    ebx = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(eax + -4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = ebx;
    esi = esi + 4;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + -4) = edx;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x30) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00216B98; /* je: equal / zero */

loc_00216B54: ;
    esi = eax + -8;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00216B98; /* jne: not equal / not zero */

loc_00216B5C: ;
    edi = MEM32(esi);
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00216B66u); RECOMP_ABI_CALL(0x001F87A0u, sub_001F87A0); /* call 0x001F87A0 */

loc_00216B66: ;
    eax = esi + 8;
    edx = eax + 1;
    /* nop */

loc_00216B70: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00216B70; /* jne: not equal / not zero */

loc_00216B77: ;
    eax = eax - edx;
    eax = eax + 9;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00216B85u); RECOMP_ABI_CALL(0x001EBA30u, sub_001EBA30); /* call 0x001EBA30 */

loc_00216B85: ;
    SET_LO8(eax, MEM8(edi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00216B94; /* je: equal / zero */

loc_00216B8C: ;
    ecx = MEM32(edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00216B94u); RECOMP_ABI_CALL(0x0020EEE0u, sub_0020EEE0); /* call 0x0020EEE0 */

loc_00216B94: ;
    edi = MEM32(esp + 0x10);

loc_00216B98: ;
    eax = MEM32(esp + 0x2C);
    MEM32(ebx) = eax;
    edx = eax + 1;

loc_00216BA1: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00216BA1; /* jne: not equal / not zero */

loc_00216BA8: ;
    esi = MEM32(esp + 0x14);
    eax = eax - edx;
    esi = esi + eax;
    eax = MEM32(edi);
    ecx = edi;
    MEM32(esp + 0x14) = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00216BBBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00216BBB: ;
    ebp = ebp + eax;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00216C08; /* je: equal / zero */

loc_00216BC5: ;
    esi = eax + -8;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00216C08; /* jne: not equal / not zero */

loc_00216BCD: ;
    edi = MEM32(esi);
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00216BD7u); RECOMP_ABI_CALL(0x001F87A0u, sub_001F87A0); /* call 0x001F87A0 */

loc_00216BD7: ;
    eax = esi + 8;
    edx = eax + 1;
    /* nop */

loc_00216BE0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00216BE0; /* jne: not equal / not zero */

loc_00216BE7: ;
    eax = eax - edx;
    eax = eax + 9;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00216BF5u); RECOMP_ABI_CALL(0x001EBA30u, sub_001EBA30); /* call 0x001EBA30 */

loc_00216BF5: ;
    SET_LO8(eax, MEM8(edi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00216C04; /* je: equal / zero */

loc_00216BFC: ;
    ecx = MEM32(edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00216C04u); RECOMP_ABI_CALL(0x0020EEE0u, sub_0020EEE0); /* call 0x0020EEE0 */

loc_00216C04: ;
    edi = MEM32(esp + 0x10);

loc_00216C08: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00216B10; /* jne: not equal / not zero */

loc_00216C12: ;
    eax = ZX8(MEM8(edi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_00216C26; /* jne: not equal / not zero */

loc_00216C20: ;
    ecx = MEM32(0x5BC538);

loc_00216C26: ;
    edx = MEM32(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    ecx = MEM32(edx + eax * 4);
    edx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xCC); PUSH32(esp, 0x00216C3Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00216C3B: ;
    ebp = MEM32(esp + 0x18);
    ebx = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    edi = ebx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00216C6D; /* jle: less or equal (signed <=) */

loc_00216C49: ;
    /* nop */

loc_00216C50: ;
    eax = MEM32(esp + 0x20);
    eax = MEM32(eax + esi * 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2C44);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00216C63u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00216C63: ;
    esp = esp + 0xC;
    edi = edi + eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00216C50; /* jl: less (signed <) */

loc_00216C6D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM8(edi) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_00216C78; /* jne: not equal / not zero */

loc_00216C74: ;
    esi = 0; /* xor self */
    goto loc_00216CDD;

loc_00216C78: ;
    eax = MEM32(0x5BC528);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00216CD3; /* jne: not equal / not zero */

loc_00216C81: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00216C9A; /* jle: less or equal (signed <=) */

loc_00216C8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00216C98; /* jge: greater or equal (signed >=) */

loc_00216C8F: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00216CA8;

loc_00216C98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00216C9A: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00216CA6; /* jne: not equal / not zero */

loc_00216C9C: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00216CA8; /* jne: not equal / not zero */

loc_00216CA6: ;
    ecx = 0; /* xor self */

loc_00216CA8: ;
    eax = MEM32(0x46A688);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00216CB3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00216CB3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00216CBFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00216CBF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00216CCC; /* je: equal / zero */

loc_00216CC3: ;
    ecx = eax;
    PUSH32(esp, 0x00216CCAu); RECOMP_ABI_CALL(0x00202CC0u, sub_00202CC0); /* call 0x00202CC0 */

loc_00216CCA: ;
    goto loc_00216CCE;

loc_00216CCC: ;
    eax = 0; /* xor self */

loc_00216CCE: ;
    MEM32(0x5BC528) = eax;

loc_00216CD3: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x00216CDBu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00216CDB: ;
    esi = eax;

loc_00216CDD: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00216D0F; /* je: equal / zero */

loc_00216CE5: ;
    eax = MEM32(esp + 0x10);
    eax = ZX8(MEM8(eax + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_00216CFD; /* jne: not equal / not zero */

loc_00216CF7: ;
    edx = MEM32(0x5BC538);

loc_00216CFD: ;
    edx = MEM32(edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00216D0Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00216D0F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00216D3D; /* je: equal / zero */

loc_00216D13: ;
    eax = MEM32(esp + 0x10);
    eax = ZX8(MEM8(eax + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_00216D2B; /* jne: not equal / not zero */

loc_00216D25: ;
    ecx = MEM32(0x5BC538);

loc_00216D2B: ;
    edx = MEM32(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00216D3Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00216D3D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = MEM32(esp + 0x28);
    MEM32(ebx) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00216D94; /* je: equal / zero */

loc_00216D47: ;
    ecx = MEM32(esi + -4);
    esi = esi + 0xFFFFFFF8u;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    MEM32(esi + 4) = eax;
    if ((_fa != 0)) goto loc_00216D94; /* jne: not equal / not zero */

loc_00216D59: ;
    edi = MEM32(esi);
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00216D63u); RECOMP_ABI_CALL(0x001F87A0u, sub_001F87A0); /* call 0x001F87A0 */

loc_00216D63: ;
    eax = esi + 8;
    edx = eax + 1;
    /* nop */

loc_00216D70: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00216D70; /* jne: not equal / not zero */

loc_00216D77: ;
    eax = eax - edx;
    eax = eax + 9;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00216D85u); RECOMP_ABI_CALL(0x001EBA30u, sub_001EBA30); /* call 0x001EBA30 */

loc_00216D85: ;
    SET_LO8(eax, MEM8(edi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00216D94; /* je: equal / zero */

loc_00216D8C: ;
    ecx = MEM32(edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00216D94u); RECOMP_ABI_CALL(0x0020EEE0u, sub_0020EEE0); /* call 0x0020EEE0 */

loc_00216D94: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00216DA0
 * Original: 0x00216DA0 - 0x00216DD0 (48 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216DA0(void)
{

loc_00216DA0: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 8);
    edx = edx + esi;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xDC); PUSH32(esp, 0x00216DBDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00216DBD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00216DD0
 * Original: 0x00216DD0 - 0x00216DFA (42 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216DD0: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00216DE2; /* jne: not equal / not zero */

loc_00216DD7: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    esp += 16; return; /* ret 12 */

loc_00216DE2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00216DE8u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00216DE8: ;
    ecx = eax;
    PUSH32(esp, 0x00216DEFu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00216DEF: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00216E00
 * Original: 0x00216E00 - 0x00216E72 (114 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216E00: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi);
    ecx = ecx + edx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xDC); PUSH32(esp, 0x00216E1Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00216E1E: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00216E2B; /* jne: not equal / not zero */

loc_00216E26: ;
    eax = 0x5BC560;

loc_00216E2B: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F5D7C);
    PUSH32(esp, 0x00216E3Fu); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00216E3F: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00216E52; /* je: equal / zero */

loc_00216E4D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00216E52u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00216E52: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00216E5Cu); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00216E5C: ;
    eax = MEM32(esp + 8);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00216E6F; /* je: equal / zero */

loc_00216E67: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00216E6Fu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00216E6F: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00216E80
 * Original: 0x00216E80 - 0x00216ED4 (84 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216E80: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00216E8Cu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00216E8C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00216EA6; /* je: equal / zero */

loc_00216E92: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00216EA6; /* jne: not equal / not zero */

loc_00216E9F: ;
    ecx = esi;
    PUSH32(esp, 0x00216EA6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00216EA6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = MEM32(esp + 0xC);
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00216ECD; /* je: equal / zero */

loc_00216EB0: ;
    edx = MEM32(esi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = edx;
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00216ECD; /* jne: not equal / not zero */

loc_00216EC6: ;
    ecx = esi;
    PUSH32(esp, 0x00216ECDu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00216ECD: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00216EE0
 * Original: 0x00216EE0 - 0x00216F70 (144 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216EE0: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = 1;
    ecx = ecx & 0xFF000001u;
    ecx = ecx | eax;
    MEM32(esi + 4) = ecx;
    MEM8(esi + 7) = LO8(ebx);
    MEM32(esi) = 0x3F5D88;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x44) = ebx;
    MEM8(esi + 0x18) = LO8(ebx);
    MEM8(esi + 0x19) = LO8(eax);
    MEM8(esi + 0x1A) = LO8(ebx);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x48) = 0xFFFFFFFFu;
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = ebx;
    MEM16(esi + 0x58) = 4;
    MEM32(esi + 0x5C) = ebx;
    PUSH32(esp, 0x00216F59u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00216F59: ;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216F68; /* je: equal / zero */

loc_00216F60: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00216F68u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00216F68: ;
    MEM32(esi + 0x60) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00216F70
 * Original: 0x00216F70 - 0x00216F80 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216F70(void)
{

loc_00216F70: ;
    eax = MEM32(0x5BC274);
    esp += 4; return; /* ret */

}

/**
 * sub_00216F80
 * Original: 0x00216F80 - 0x00216FCA (74 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216F80: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00216FAB; /* jle: less or equal (signed <=) */

loc_00216F8C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00216FA9; /* jge: greater or equal (signed >=) */

loc_00216F91: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00216F9Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00216F9F: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00216FA7u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00216FA7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00216FA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00216FAB: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00216FB7; /* jne: not equal / not zero */

loc_00216FAD: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00216FB9; /* jne: not equal / not zero */

loc_00216FB7: ;
    ecx = 0; /* xor self */

loc_00216FB9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00216FC0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00216FC0: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00216FC8u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00216FC8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00216FD0
 * Original: 0x00216FD0 - 0x002170E7 (279 bytes, 102 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216FD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00216FD0: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    MEM32(esp + 8) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_002170DF; /* je: equal / zero */

loc_00216FE7: ;
    eax = MEM32(edi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021702D; /* jne: not equal / not zero */

loc_00216FEE: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00217007; /* jle: less or equal (signed <=) */

loc_00216FF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00217005; /* jge: greater or equal (signed >=) */

loc_00216FFC: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00217015;

loc_00217005: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00217007: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00217013; /* jne: not equal / not zero */

loc_00217009: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00217015; /* jne: not equal / not zero */

loc_00217013: ;
    ecx = 0; /* xor self */

loc_00217015: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00217021u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00217021: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217027u); RECOMP_ABI_CALL(0x00214130u, sub_00214130); /* call 0x00214130 */

loc_00217027: ;
    esp = esp + 4;
    MEM32(edi + 0x34) = eax;

loc_0021702D: ;
    ecx = MEM32(edi + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00217036u); RECOMP_ABI_CALL(0x002085A0u, sub_002085A0); /* call 0x002085A0 */

loc_00217036: ;
    MEM32(esi + 0x38) = edi;
    eax = MEM32(edi + 0x5C);
    MEM32(esi + 0x5C) = eax;
    SET_LO16(ecx, MEM16(edi + 0x58));
    MEM16(esi + 0x58) = LO16(ecx);
    edx = MEM32(edi + 0x20);
    MEM32(esi + 0x20) = edx;
    eax = MEM32(edi + 0x48);
    MEM32(esi + 0x48) = eax;
    ecx = MEM32(edi + 0x28);
    ecx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002170DF; /* jle: less or equal (signed <=) */

loc_00217067: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    goto loc_00217070;

loc_0021706B: ;
    esi = MEM32(esp + 0x10);
    /* nop */

loc_00217070: ;
    edx = MEM32(edi + 0x28);
    ecx = MEM32(edx + 8);
    ebp = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    esi = MEM32(esi + 0x28);
    if (TEST_Z(_fa, _fb)) goto loc_00217083; /* je: equal / zero */

loc_00217080: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00217083: ;
    ebx = MEM32(esi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    ecx = MEM32(esi + 0xC);
    MEM32(esp + 0x14) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00217095; /* jne: not equal / not zero */

loc_00217091: ;
    eax = 0; /* xor self */
    goto loc_002170B0;

loc_00217095: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0021709Bu); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_0021709B: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x002170A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002170A9: ;
    ecx = MEM32(esp + 0x14);
    eax = eax >> 2;

loc_002170B0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002170BC; /* jl: less (signed <) */

loc_002170B4: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002170BCu); RECOMP_ABI_CALL(0x00202B60u, sub_00202B60); /* call 0x00202B60 */

loc_002170BC: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    MEM32(ecx + eax * 4) = ebp;
    ebx = MEM32(esi + 0xC);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0xC) = ebx;
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0021706B; /* jl: less (signed <) */

loc_002170DD: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_002170DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002170F0
 * Original: 0x002170F0 - 0x002171AC (188 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002170F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002170F0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = MEM32(edi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021711E; /* jle: less or equal (signed <=) */

loc_00217104: ;
    edx = MEM32(edi + 0x10);

loc_00217107: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217115; /* je: equal / zero */

loc_0021710B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00217107; /* jl: less (signed <) */

loc_00217113: ;
    goto loc_0021711E;

loc_00217115: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002171A8; /* jne: not equal / not zero */

loc_0021711E: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    MEM32(esp + 0x14) = ebx;

loc_00217125: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002171A3; /* je: equal / zero */

loc_00217129: ;
    ecx = MEM32(ebp + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_0021717B; /* jl: less (signed <) */

loc_00217134: ;
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0021717B; /* jg: greater (signed >) */

loc_0021713B: ;
    ecx = MEM32(edi + 0xC);
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0021714A; /* jg: greater (signed >) */

loc_00217145: ;
    MEM32(edi + 8) = eax;
    goto loc_00217154;

loc_0021714A: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00217154u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00217154: ;
    eax = MEM32(edi + 0x10);
    ebx = eax + ebx * 4;
    esi = esi - MEM32(esp + 0x14);
    if ((esi == 0)) goto loc_00217175; /* je: equal / zero */

loc_00217160: ;
    ecx = esi * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = ebx + 4;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00217172u); RECOMP_ICALL_SAFE(0x00342AA0u, _icall_esp); /* manual call 0x00342AA0 */
    }

loc_00217172: ;
    esp = esp + 0xC;

loc_00217175: ;
    MEM32(ebx) = ebp;
    ebx = MEM32(esp + 0x14);

loc_0021717B: ;
    ecx = MEM32(edi + 8);
    ebp = MEM32(ebp + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00217125; /* jle: less or equal (signed <=) */

loc_00217187: ;
    edx = MEM32(edi + 0x10);
    /* nop */

loc_00217190: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021719E; /* je: equal / zero */

loc_00217194: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00217190; /* jl: less (signed <) */

loc_0021719C: ;
    goto loc_00217125;

loc_0021719E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217125; /* je: equal / zero */

loc_002171A3: ;
    eax = MEM32(edi + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ebx);

loc_002171A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002171B0
 * Original: 0x002171B0 - 0x00217212 (98 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002171B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002171B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_002171BF; /* je: equal / zero */

loc_002171BC: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002171BF: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002171DB; /* je: equal / zero */

loc_002171C6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002171DB; /* jne: not equal / not zero */

loc_002171D6: ;
    PUSH32(esp, 0x002171DBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002171DB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 0x1C) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_002171E8; /* je: equal / zero */

loc_002171E2: ;
    edi = MEM32(edi + 0x1C);
    PUSH32(esp, edi);
    goto loc_002171ED;

loc_002171E8: ;
    PUSH32(esp, 0x3F5DDC);

loc_002171ED: ;
    PUSH32(esp, 0x002171F2u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_002171F2: ;
    ecx = eax;
    PUSH32(esp, 0x002171F9u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_002171F9: ;
    edi = eax;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021720A; /* je: equal / zero */

loc_00217202: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021720Au); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021720A: ;
    MEM32(esi + 0x20) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00217220
 * Original: 0x00217220 - 0x00217244 (36 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00217220: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217240; /* je: equal / zero */

loc_0021722A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0021722Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021722F: ;
    eax = MEM32(eax + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217240; /* je: equal / zero */

loc_00217236: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00217238u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00217238: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00217240u); RECOMP_ABI_CALL(0x002171B0u, sub_002171B0); /* call 0x002171B0 */

loc_00217240: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00217250
 * Original: 0x00217250 - 0x002172A7 (87 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00217250: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x18);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0021725Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021725F: ;
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217268; /* je: equal / zero */

loc_00217266: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x00217268u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00217268: ;
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0xC4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00217279u); RECOMP_ABI_CALL(0x002170F0u, sub_002170F0); /* call 0x002170F0 */

loc_00217279: ;
    MEM32(ebx + 0x30) = eax;
    ebx = MEM32(esi + 0x94);
    esp = esp + 8;
    ecx = edi;
    PUSH32(esp, 0x0021728Cu); RECOMP_ABI_CALL(0x001EA7B0u, sub_001EA7B0); /* call 0x001EA7B0 */

loc_0021728C: ;
    eax = eax + ebx;
    MEM32(esi + 0x94) = eax;
    eax = MEM32(esi + 0x90);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x90) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002172B0
 * Original: 0x002172B0 - 0x002172D7 (39 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002172B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002172B0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x20);
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002172CF; /* je: equal / zero */

loc_002172BA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002172CF; /* jne: not equal / not zero */

loc_002172CA: ;
    PUSH32(esp, 0x002172CFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002172CF: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002172E0
 * Original: 0x002172E0 - 0x002172ED (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002172E0(void)
{

loc_002172E0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002172F0
 * Original: 0x002172F0 - 0x00217623 (819 bytes, 276 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002172F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002172F0: ;
    esp = esp - 0x134;
    eax = MEM32(esp + 0x148);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = ebp;
    if (TEST_NZ(_fa, _fb)) goto loc_00217316; /* jne: not equal / not zero */

loc_0021730B: ;
    MEM32(esp + 0x158) = 0x5BC561;

loc_00217316: ;
    eax = MEM32(esp + 0x15C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021733C; /* jne: not equal / not zero */

loc_00217322: ;
    eax = MEM32(esp + 0x158);
    edx = eax + 1;
    /* nop */

loc_00217330: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00217330; /* jne: not equal / not zero */

loc_00217337: ;
    eax = eax - edx;
    eax = eax + 5;

loc_0021733C: ;
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, 0x3F5E14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021734Cu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0021734C: ;
    eax = esp + 0x30;
    esp = esp + 0xC;
    edx = eax + 1;

loc_00217356: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00217356; /* jne: not equal / not zero */

loc_0021735D: ;
    ecx = MEM32(0x5BC53C);
    eax = eax - edx;
    esi = eax;
    eax = ZX8(MEM8(ebp + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00217375; /* jne: not equal / not zero */

loc_0021736F: ;
    ecx = MEM32(0x5BC538);

loc_00217375: ;
    edx = MEM32(ecx);
    SET_LO8(ecx, MEM8(0x5BC548));
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    eax = MEM32(edx + eax * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_002173B9; /* jne: not equal / not zero */

loc_00217386: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021739F; /* jle: less or equal (signed <=) */

loc_0021738F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021739D; /* jge: greater or equal (signed >=) */

loc_00217394: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_002173AD;

loc_0021739D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_0021739F: ;
    if (TEST_NZ(_fa, _fb)) goto loc_002173AB; /* jne: not equal / not zero */

loc_002173A1: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002173AD; /* jne: not equal / not zero */

loc_002173AB: ;
    ecx = 0; /* xor self */

loc_002173AD: ;
    edx = MEM32(0x46A694);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x002173B9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002173B9: ;
    ebx = MEM32(esp + 0x150);
    edx = MEM32(eax);
    esi = esi + 0x80;
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x002173D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002173D4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    esi = eax;
    MEM32(esp + 0x18) = esi;
    edi = esi;
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00217544; /* jle: less or equal (signed <=) */

loc_002173EC: ;
    ebp = MEM32(esp + 0x154);
    goto loc_00217400;

loc_002173F5: ;
    edi = MEM32(esp + 0x14);
    /* nop */

loc_00217400: ;
    eax = MEM32(esp + 0x158);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00217417u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00217417: ;
    eax = MEM32(esp + 0x1C);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00217433; /* jne: not equal / not zero */

loc_00217422: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00217433; /* jle: less or equal (signed <=) */

loc_00217427: ;
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F5E0C);
    goto loc_0021743D;

loc_00217433: ;
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F5E04);

loc_0021743D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00217443u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00217443: ;
    eax = esi;
    esp = esp + 0xC;
    edx = eax + 1;
    goto loc_00217450;

    /* nop */

loc_00217450: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00217450; /* jne: not equal / not zero */

loc_00217457: ;
    eax = eax - edx;
    eax = eax + esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00217521; /* je: equal / zero */

loc_00217467: ;
    edx = MEM32(esp + 0x14C);
    ebx = MEM32(ebp + 0x2C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    esi = MEM32(edx);
    MEM32(esp + 0x1C) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_002174A6; /* je: equal / zero */

loc_0021747B: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00217487u); RECOMP_ABI_CALL(0x001F1920u, sub_001F1920); /* call 0x001F1920 */

loc_00217487: ;
    ecx = MEM32(ebx + 0x10);
    edi = eax;
    eax = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00217505; /* jne: not equal / not zero */

loc_00217493: ;
    edx = MEM32(ebp + 0x10);
    esi = MEM32(edx + edi * 4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x002174A1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002174A1: ;
    MEM32(esi + 0xC) = edi;
    goto loc_002174DE;

loc_002174A6: ;
    edi = MEM32(0x5BB928);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002174B4; /* jne: not equal / not zero */

loc_002174B0: ;
    esi = 0; /* xor self */
    goto loc_002174DE;

loc_002174B4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x002174BDu); RECOMP_ABI_CALL(0x001EAD20u, sub_001EAD20); /* call 0x001EAD20 */

loc_002174BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002174C6; /* jl: less (signed <) */

loc_002174C2: ;
    esi = 0; /* xor self */
    goto loc_002174DE;

loc_002174C6: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ecx + eax * 4);
    edx = MEM32(edi + 8);
    edi = MEM32(eax + edx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    esi = ecx;

loc_002174DE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217505; /* je: equal / zero */

loc_002174E2: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F5DF4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002174F5u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_002174F5: ;
    esi = MEM32(esp + 0x24);
    ebx = MEM32(esp + 0x15C);
    esp = esp + 0xC;
    goto loc_0021752F;

loc_00217505: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x3F5DE4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00217514u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00217514: ;
    esi = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x158);
    goto loc_0021752C;

loc_00217521: ;
    PUSH32(esp, 0x3F5DE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021752Cu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0021752C: ;
    esp = esp + 8;

loc_0021752F: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002173F5; /* jl: less (signed <) */

loc_00217540: ;
    ebp = MEM32(esp + 0x20);

loc_00217544: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021754C; /* jne: not equal / not zero */

loc_00217548: ;
    edi = 0; /* xor self */
    goto loc_0021755B;

loc_0021754C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00217552u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00217552: ;
    ecx = eax;
    PUSH32(esp, 0x00217559u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00217559: ;
    edi = eax;

loc_0021755B: ;
    eax = ZX8(MEM8(ebp + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_0021756F; /* jne: not equal / not zero */

loc_00217569: ;
    edx = MEM32(0x5BC538);

loc_0021756F: ;
    ecx = MEM32(edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(ecx + eax * 4);
    SET_LO8(ecx, MEM8(0x5BC548));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002175B2; /* jne: not equal / not zero */

loc_00217580: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00217599; /* jle: less or equal (signed <=) */

loc_00217589: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00217597; /* jge: greater or equal (signed >=) */

loc_0021758E: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_002175A7;

loc_00217597: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00217599: ;
    if (TEST_NZ(_fa, _fb)) goto loc_002175A5; /* jne: not equal / not zero */

loc_0021759B: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002175A7; /* jne: not equal / not zero */

loc_002175A5: ;
    ecx = 0; /* xor self */

loc_002175A7: ;
    eax = MEM32(0x46A694);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x002175B2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002175B2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x002175BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002175BD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebx = MEM32(esp + 0x148);
    MEM32(ebx) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00217614; /* je: equal / zero */

loc_002175CA: ;
    ecx = MEM32(edi + -4);
    esi = edi + -8;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    MEM32(esi + 4) = eax;
    if ((_fa != 0)) goto loc_00217614; /* jne: not equal / not zero */

loc_002175DC: ;
    edi = MEM32(esi);
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002175E6u); RECOMP_ABI_CALL(0x001F87A0u, sub_001F87A0); /* call 0x001F87A0 */

loc_002175E6: ;
    eax = esi + 8;
    edx = eax + 1;
    /* nop */

loc_002175F0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002175F0; /* jne: not equal / not zero */

loc_002175F7: ;
    eax = eax - edx;
    eax = eax + 9;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00217605u); RECOMP_ABI_CALL(0x001EBA30u, sub_001EBA30); /* call 0x001EBA30 */

loc_00217605: ;
    SET_LO8(eax, MEM8(edi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217614; /* je: equal / zero */

loc_0021760C: ;
    ecx = MEM32(edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00217614u); RECOMP_ABI_CALL(0x0020EEE0u, sub_0020EEE0); /* call 0x0020EEE0 */

loc_00217614: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00217630
 * Original: 0x00217630 - 0x00217636 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217630(void)
{

loc_00217630: ;
    eax = MEM32(0x5BC214);
    esp += 4; return; /* ret */

}

/**
 * sub_00217640
 * Original: 0x00217640 - 0x00217646 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217640(void)
{

loc_00217640: ;
    eax = MEM32(0x5BC218);
    esp += 4; return; /* ret */

}

/**
 * sub_00217650
 * Original: 0x00217650 - 0x00217842 (498 bytes, 183 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217650(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00217650: ;
    esp = esp - 0x110;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x124);
    eax = edi;
    esi = edi;
    edx = eax + 1;
    ebx = 0; /* xor self */
    /* nop */

loc_00217670: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00217670; /* jne: not equal / not zero */

loc_00217677: ;
    ebp = MEM32(esp + 0x128);
    eax = eax - edx;
    eax = eax + edi;
    MEM32(esp + 0x14) = eax;
    MEM32(ebp) = ebx;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), LO8(ebx) (8-bit) */
    MEM8(esp + 0x13) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_002176D7; /* je: equal / zero */

loc_00217692: ;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021769Bu); RECOMP_ABI_CALL(0x00341F75u, sub_00341F75); /* call 0x00341F75 */

loc_0021769B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002176D7; /* je: equal / zero */

loc_002176A2: ;
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00217692; /* jne: not equal / not zero */

loc_002176AA: ;
    ecx = MEM32(esp + 0x130);

loc_002176B1: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x25) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x25 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002176BF; /* jne: not equal / not zero */

loc_002176B6: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x73) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x73 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002176BF; /* jne: not equal / not zero */

loc_002176BE: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002176BF: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002176FD; /* je: equal / zero */

loc_002176C3: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002176CAu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_002176CA: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002176F9; /* je: equal / zero */

loc_002176D1: ;
    MEM32(esp + 0x14) = eax;
    goto loc_002176FD;

loc_002176D7: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002176AA; /* je: equal / zero */

loc_002176DD: ;
    ecx = MEM32(esp + 0x130);

loc_002176E4: ;
    SET_LO8(edx, MEM8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002176B1; /* je: equal / zero */

loc_002176EA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002176B1; /* jne: not equal / not zero */

loc_002176EE: ;
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002176E4; /* jne: not equal / not zero */

loc_002176F7: ;
    goto loc_002176B1;

loc_002176F9: ;
    MEM8(esp + 0x13) = LO8(ebx);

loc_002176FD: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00217706u); RECOMP_ABI_CALL(0x00341F4Cu, sub_00341F4C); /* call 0x00341F4C */

loc_00217706: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021776A; /* je: equal / zero */

loc_0021770D: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3E2738);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021771Au); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_0021771A: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebp);
    if (TEST_NZ(_fa, _fb)) goto loc_00217746; /* jne: not equal / not zero */

loc_00217722: ;
    PUSH32(esp, 0x3E2730);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021772Du); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_0021772D: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00217833; /* jne: not equal / not zero */

loc_00217739: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(eax));
    POP32(esp, ebx);
    esp = esp + 0x110;
    esp += 4; return; /* ret */

loc_00217746: ;
    PUSH32(esp, 0x3CB224);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00217751u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_00217751: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00217833; /* jne: not equal / not zero */

loc_0021775D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(eax));
    POP32(esp, ebx);
    esp = esp + 0x110;
    esp += 4; return; /* ret */

loc_0021776A: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217833; /* je: equal / zero */

loc_00217774: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x14) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00217833; /* jae: above or equal (unsigned >=) */

loc_0021777E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021779A; /* je: equal / zero */

loc_00217782: ;
    edx = SX8(LO8(eax));
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021778Bu); RECOMP_ABI_CALL(0x00341F75u, sub_00341F75); /* call 0x00341F75 */

loc_0021778B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021779A; /* je: equal / zero */

loc_00217792: ;
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00217782; /* jne: not equal / not zero */

loc_0021779A: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    ebp = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_002177C0; /* je: equal / zero */

loc_002177A2: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x002177ABu); RECOMP_ABI_CALL(0x00341F75u, sub_00341F75); /* call 0x00341F75 */

loc_002177AB: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002177C0; /* jne: not equal / not zero */

loc_002177B2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x14) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002177C0; /* jae: above or equal (unsigned >=) */

loc_002177B8: ;
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002177A2; /* jne: not equal / not zero */

loc_002177C0: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217829; /* je: equal / zero */

loc_002177C5: ;
    edi = esi;
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002177D6; /* jle: less or equal (signed <=) */

loc_002177D1: ;
    edi = 0xFF;

loc_002177D6: ;
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002177E2u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_002177E2: ;
    esp = esp + 0xC;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x138);
    MEM8(esp + edi + 0x2C) = LO8(ebx);
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, 0x00217808u); RECOMP_ABI_CALL(0x00216780u, sub_00216780); /* call 0x00216780 */

loc_00217808: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BC5D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x5BC5D8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00217825; /* jne: not equal / not zero */

loc_00217812: ;
    eax = MEM32(esp + 0x128);
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x18);
    edx = edx | ecx;
    MEM32(eax) = edx;
    goto loc_00217829;

loc_00217825: ;
    MEM8(esp + 0x13) = LO8(ebx);

loc_00217829: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00217774; /* jne: not equal / not zero */

loc_00217833: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x110;
    esp += 4; return; /* ret */

}

/**
 * sub_00217850
 * Original: 0x00217850 - 0x00217A08 (440 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00217850: ;
    esp = esp - 0x104;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x114);
    eax = edi;
    esi = edi;
    edx = eax + 1;

loc_00217867: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00217867; /* jne: not equal / not zero */

loc_0021786E: ;
    eax = eax - edx;
    ebx = eax + edi;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021791D; /* je: equal / zero */

loc_0021787C: ;
    /* nop */

loc_00217880: ;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217889u); RECOMP_ABI_CALL(0x00341F75u, sub_00341F75); /* call 0x00341F75 */

loc_00217889: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021791D; /* je: equal / zero */

loc_00217894: ;
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00217880; /* jne: not equal / not zero */

loc_0021789C: ;
    ecx = MEM32(esp + 0x120);

loc_002178A3: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x25) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x25 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002178B1; /* jne: not equal / not zero */

loc_002178A8: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x73) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x73 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002178B1; /* jne: not equal / not zero */

loc_002178B0: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002178B1: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002178CA; /* je: equal / zero */

loc_002178B6: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002178BDu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_002178BD: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002179FC; /* je: equal / zero */

loc_002178C8: ;
    ebx = eax;

loc_002178CA: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002178D3u); RECOMP_ABI_CALL(0x00341F4Cu, sub_00341F4C); /* call 0x00341F4C */

loc_002178D3: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021797B; /* je: equal / zero */

loc_002178DE: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3E2738);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002178EBu); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_002178EB: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00217950; /* jne: not equal / not zero */

loc_002178F2: ;
    edx = MEM32(esp + 0x118);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3E2730);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00217905u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_00217905: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002179FC; /* jne: not equal / not zero */

loc_00217911: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(eax));
    POP32(esp, ebx);
    esp = esp + 0x104;
    esp += 4; return; /* ret */

loc_0021791D: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021789C; /* je: equal / zero */

loc_00217927: ;
    ecx = MEM32(esp + 0x120);
    edi = edi;

loc_00217930: ;
    SET_LO8(edx, MEM8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002178A3; /* je: equal / zero */

loc_0021793A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002178A3; /* jne: not equal / not zero */

loc_00217942: ;
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00217930; /* jne: not equal / not zero */

loc_0021794B: ;
    goto loc_002178A3;

loc_00217950: ;
    eax = MEM32(esp + 0x118);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CB224);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00217963u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_00217963: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002179FC; /* jne: not equal / not zero */

loc_0021796F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(eax));
    POP32(esp, ebx);
    esp = esp + 0x104;
    esp += 4; return; /* ret */

loc_0021797B: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    edi = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0021799F; /* je: equal / zero */

loc_00217983: ;
    ecx = SX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0021798Cu); RECOMP_ABI_CALL(0x00341F75u, sub_00341F75); /* call 0x00341F75 */

loc_0021798C: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021799F; /* jne: not equal / not zero */

loc_00217993: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0021799F; /* jae: above or equal (unsigned >=) */

loc_00217997: ;
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00217983; /* jne: not equal / not zero */

loc_0021799F: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002179FC; /* je: equal / zero */

loc_002179A4: ;
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002179B3; /* jle: less or equal (signed <=) */

loc_002179AE: ;
    esi = 0xFF;

loc_002179B3: ;
    PUSH32(esp, esi);
    edx = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002179BFu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_002179BF: ;
    eax = MEM32(esp + 0x124);
    esp = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x124);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM8(esp + esi + 0x1C) = 0;
    PUSH32(esp, 0x002179E5u); RECOMP_ABI_CALL(0x00216780u, sub_00216780); /* call 0x00216780 */

loc_002179E5: ;
    eax = MEM32(eax);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp = esp + 0x104;
    esp += 4; return; /* ret */

loc_002179FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x104;
    esp += 4; return; /* ret */

}

/**
 * sub_00217A10
 * Original: 0x00217A10 - 0x00217C67 (599 bytes, 210 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217A10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00217A10: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217C5F; /* je: equal / zero */

loc_00217A23: ;
    esi = MEM32(0x5BC508);
    SET_LO8(ebx, MEM8(esi));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    ebp = MEM32(0x5BB878);
    if (TEST_NZ(_fa, _fb)) goto loc_00217A3F; /* jne: not equal / not zero */

loc_00217A35: ;
    MEM32(esp + 0x10) = 0;
    goto loc_00217A51;

loc_00217A3F: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00217A4Du); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_00217A4D: ;
    MEM32(esp + 0x10) = eax;

loc_00217A51: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00217A5F; /* jne: not equal / not zero */

loc_00217A55: ;
    MEM32(esp + 0x14) = 0;
    goto loc_00217A71;

loc_00217A5F: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00217A6Du); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_00217A6D: ;
    MEM32(esp + 0x14) = eax;

loc_00217A71: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217C5F; /* je: equal / zero */

loc_00217A7D: ;
    eax = MEM32(edi + 8);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x18) = ebp;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00217C5F; /* jle: less or equal (signed <=) */

loc_00217A92: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217AB2; /* je: equal / zero */

loc_00217A99: ;
    edx = MEM32(edi + 0x10);
    eax = MEM32(eax + 0x10);
    esi = MEM32(edx + ebp * 4);
    eax = MEM32(eax + ebp * 4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00217AADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00217AAD: ;
    MEM32(esi + 0xC) = ebp;
    goto loc_00217AB8;

loc_00217AB2: ;
    eax = MEM32(edi + 0x10);
    esi = MEM32(eax + ebp * 4);

loc_00217AB8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217C4E; /* je: equal / zero */

loc_00217AC0: ;
    edx = MEM32(esi);
    ebx = MEM32(0x5BC25C);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00217ACDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00217ACD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217C4E; /* je: equal / zero */

loc_00217AD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217AE5; /* je: equal / zero */

loc_00217AD9: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00217AD5; /* jne: not equal / not zero */

loc_00217AE0: ;
    goto loc_00217C4E;

loc_00217AE5: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00217AEDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00217AED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217C4E; /* je: equal / zero */

loc_00217AF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217B07; /* je: equal / zero */

loc_00217AFB: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00217AF5; /* jne: not equal / not zero */

loc_00217B02: ;
    goto loc_00217C4E;

loc_00217B07: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217C5F; /* je: equal / zero */

loc_00217B13: ;
    esi = MEM32(esi + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x1C) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00217B21; /* je: equal / zero */

loc_00217B1E: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00217B21: ;
    PUSH32(esp, 0x00217B26u); RECOMP_ABI_CALL(0x00216F80u, sub_00216F80); /* call 0x00216F80 */

loc_00217B26: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217B2F; /* je: equal / zero */

loc_00217B2C: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00217B2F: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = 0x7FFFFF;
    eax = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00217B48; /* jne: not equal / not zero */

loc_00217B41: ;
    ecx = ebx;
    PUSH32(esp, 0x00217B48u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00217B48: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + 0x28);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(0x5BC554);
    edx = MEM32(ecx + 0x28);
    ebp = MEM32(edx + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00217BD1; /* jge: greater or equal (signed >=) */

loc_00217B66: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x28);
    eax = MEM32(ecx + 8);
    esi = MEM32(eax + ebp * 4);
    eax = MEM32(esi + 0xC);
    edx = MEM32(0x5BB930);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00217B8Au); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_00217B8A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217BBF; /* je: equal / zero */

loc_00217B90: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00217B97u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00217B97: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00217B9Fu); RECOMP_ABI_CALL(0x001F1980u, sub_001F1980); /* call 0x001F1980 */

loc_00217B9F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00217BBF; /* jne: not equal / not zero */

loc_00217BA3: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(edi + 8);
    edx = MEM32(esp + 0x1C);
    eax = eax - ecx;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x27);
    PUSH32(esp, ecx);
    eax = eax + ebx;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00217BBFu); RECOMP_ABI_CALL(0x001E9F90u, sub_001E9F90); /* call 0x001E9F90 */

loc_00217BBF: ;
    eax = MEM32(esp + 0x20);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00217B66; /* jl: less (signed <) */

loc_00217BC8: ;
    esi = MEM32(esp + 0x1C);
    edi = 0x7FFFFF;

loc_00217BD1: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    edx = MEM32(ebx + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebx + 4) = edx;
    MEM32(eax) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00217BE9; /* je: equal / zero */

loc_00217BE6: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00217BE9: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, 0x00217BF2u); RECOMP_ABI_CALL(0x0020C0E0u, sub_0020C0E0); /* call 0x0020C0E0 */

loc_00217BF2: ;
    eax = MEM32(ebx);
    ebp = MEM32(0x5BC318);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00217BFFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00217BFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217C1A; /* je: equal / zero */

loc_00217C03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217C10; /* je: equal / zero */

loc_00217C07: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00217C03; /* jne: not equal / not zero */

loc_00217C0E: ;
    goto loc_00217C1A;

loc_00217C10: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00217C1Au); RECOMP_ABI_CALL(0x00207060u, sub_00207060); /* call 0x00207060 */

loc_00217C1A: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00217C2E; /* jne: not equal / not zero */

loc_00217C27: ;
    ecx = ebx;
    PUSH32(esp, 0x00217C2Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00217C2E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217C46; /* je: equal / zero */

loc_00217C32: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00217C46; /* jne: not equal / not zero */

loc_00217C3F: ;
    ecx = esi;
    PUSH32(esp, 0x00217C46u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00217C46: ;
    edi = MEM32(esp + 0x2C);
    ebp = MEM32(esp + 0x18);

loc_00217C4E: ;
    eax = MEM32(esp + 0x24);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x18) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_00217A92; /* jl: less (signed <) */

loc_00217C5F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00217C70
 * Original: 0x00217C70 - 0x00217D87 (279 bytes, 92 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00217C70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00217C70: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217D85; /* je: equal / zero */

loc_00217C7D: ;
    eax = MEM32(0x5BC508);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217D85; /* je: equal / zero */

loc_00217C8B: ;
    ecx = MEM32(0x5BB878);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3F5F48);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, 0x00217CA0u); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_00217CA0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217D84; /* je: equal / zero */

loc_00217CAA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F5F40);
    ecx = ebp;
    PUSH32(esp, 0x00217CB7u); RECOMP_ABI_CALL(0x001F40D0u, sub_001F40D0); /* call 0x001F40D0 */

loc_00217CB7: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217D83; /* je: equal / zero */

loc_00217CC1: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00217CC9u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00217CC9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217D83; /* je: equal / zero */

loc_00217CD1: ;
    PUSH32(esp, 0x3F5F34);
    PUSH32(esp, 0x00217CDBu); RECOMP_ABI_CALL(0x001F7AB0u, sub_001F7AB0); /* call 0x001F7AB0 */

loc_00217CDB: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217D83; /* je: equal / zero */

loc_00217CE6: ;
    ecx = eax;
    PUSH32(esp, 0x00217CEDu); RECOMP_ABI_CALL(0x00216F80u, sub_00216F80); /* call 0x00216F80 */

loc_00217CED: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00217CFA; /* je: equal / zero */

loc_00217CF7: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00217CFA: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00217D02u); RECOMP_ABI_CALL(0x00011A20u, sub_00011A20); /* call 0x00011A20 */

loc_00217D02: ;
    PUSH32(esp, 0x3F5F28);
    ecx = esi;
    PUSH32(esp, 0x00217D0Eu); RECOMP_ABI_CALL(0x001A4360u, sub_001A4360); /* call 0x001A4360 */

loc_00217D0E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217D14u); RECOMP_ABI_CALL(0x001F2750u, sub_001F2750); /* call 0x001F2750 */

loc_00217D14: ;
    esp = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00217D20u); RECOMP_ABI_CALL(0x00209EC0u, sub_00209EC0); /* call 0x00209EC0 */

loc_00217D20: ;
    PUSH32(esp, 0x3F5F1C);
    ecx = esi;
    PUSH32(esp, 0x00217D2Cu); RECOMP_ABI_CALL(0x001A4360u, sub_001A4360); /* call 0x001A4360 */

loc_00217D2C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217D32u); RECOMP_ABI_CALL(0x001F2750u, sub_001F2750); /* call 0x001F2750 */

loc_00217D32: ;
    esp = esp + 4;
    PUSH32(esp, 0x3F5F0C);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x00217D43u); RECOMP_ABI_CALL(0x001A4360u, sub_001A4360); /* call 0x001A4360 */

loc_00217D43: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217D49u); RECOMP_ABI_CALL(0x001F2750u, sub_001F2750); /* call 0x001F2750 */

loc_00217D49: ;
    edx = MEM32(eax + 8);
    eax = MEM32(esi + edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217D55u); RECOMP_ABI_CALL(0x001F1A80u, sub_001F1A80); /* call 0x001F1A80 */

loc_00217D55: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217D64; /* je: equal / zero */

loc_00217D5C: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x00217D64u); RECOMP_ABI_CALL(0x002043E0u, sub_002043E0); /* call 0x002043E0 */

loc_00217D64: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00217D6Eu); RECOMP_ABI_CALL(0x00209EC0u, sub_00209EC0); /* call 0x00209EC0 */

loc_00217D6E: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00217D76u); RECOMP_ABI_CALL(0x00207060u, sub_00207060); /* call 0x00207060 */

loc_00217D76: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = esp + 8;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

loc_00217D83: ;
    POP32(esp, edi);

loc_00217D84: ;
    POP32(esp, esi);

loc_00217D85: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00217D90
 * Original: 0x00217D90 - 0x00217DDC (76 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00217D90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00217D99u); RECOMP_ABI_CALL(0x00215B20u, sub_00215B20); /* call 0x00215B20 */

loc_00217D99: ;
    edi = MEM32(esi + 0x2538);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 0x253C) = 0x1EB4D0;
    MEM32(esi + 0x2534) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00217DD9; /* je: equal / zero */

loc_00217DB7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00217DBDu); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_00217DBD: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217DCF; /* je: equal / zero */

loc_00217DC4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00217DCFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00217DCF: ;
    MEM32(esi + 0x2538) = 0;

loc_00217DD9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00217DE0
 * Original: 0x00217DE0 - 0x00217E25 (69 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217DE0(void)
{

loc_00217DE0: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    esp = esp - 0x400;
    PUSH32(esp, ecx);
    edx = esp + 4;
    PUSH32(esp, 0x3F5F50);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00217DFDu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00217DFD: ;
    eax = esp + 0xC;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217E0Au); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00217E0A: ;
    ecx = eax;
    PUSH32(esp, 0x00217E11u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00217E11: ;
    ecx = MEM32(esp + 0x404);
    MEM32(ecx) = eax;
    eax = ecx;
    esp = esp + 0x400;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00217E30
 * Original: 0x00217E30 - 0x00217E36 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217E30(void)
{

loc_00217E30: ;
    eax = MEM32(0x5BC1E8);
    esp += 4; return; /* ret */

}

/**
 * sub_00217E40
 * Original: 0x00217E40 - 0x00217E46 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217E40(void)
{

loc_00217E40: ;
    eax = MEM32(0x5BC1EC);
    esp += 4; return; /* ret */

}

/**
 * sub_00217E50
 * Original: 0x00217E50 - 0x00217EE1 (145 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217E50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00217E50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x35));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 4) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00217EDC; /* je: equal / zero */

loc_00217E5F: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 8);
    PUSH32(esp, ebp);
    ebx = ebx + ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00217EDA; /* jle: less or equal (signed <=) */

loc_00217E73: ;
    PUSH32(esp, esi);

loc_00217E74: ;
    PUSH32(esp, 0x00217E79u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00217E79: ;
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217EC8; /* je: equal / zero */

loc_00217E7F: ;
    eax = MEM32(esi + -4);
    esi = esi + 0xFFFFFFF8u;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    if ((_fa != 0)) goto loc_00217EC8; /* jne: not equal / not zero */

loc_00217E8B: ;
    edi = MEM32(esi);
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00217E95u); RECOMP_ABI_CALL(0x001F87A0u, sub_001F87A0); /* call 0x001F87A0 */

loc_00217E95: ;
    eax = esi + 8;
    edx = eax + 1;
    goto loc_00217EA0;

    /* nop */

loc_00217EA0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00217EA0; /* jne: not equal / not zero */

loc_00217EA7: ;
    eax = eax - edx;
    eax = eax + 9;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00217EB5u); RECOMP_ABI_CALL(0x001EBA30u, sub_001EBA30); /* call 0x001EBA30 */

loc_00217EB5: ;
    SET_LO8(eax, MEM8(edi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217EC4; /* je: equal / zero */

loc_00217EBC: ;
    ecx = MEM32(edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00217EC4u); RECOMP_ABI_CALL(0x0020EEE0u, sub_0020EEE0); /* call 0x0020EEE0 */

loc_00217EC4: ;
    edi = MEM32(esp + 0x10);

loc_00217EC8: ;
    MEM32(ebx) = 0;
    eax = MEM32(edi + 0x3C);
    ebx = ebx + 4;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00217E74; /* jl: less (signed <) */

loc_00217ED9: ;
    POP32(esp, esi);

loc_00217EDA: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00217EDC: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00217EF0
 * Original: 0x00217EF0 - 0x00217F2E (62 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00217EF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00217EFDu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00217EFD: ;
    ecx = eax;
    PUSH32(esp, 0x00217F04u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00217F04: ;
    ebx = MEM32(esp + 0x10);
    edi = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217F18; /* je: equal / zero */

loc_00217F10: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00217F18u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00217F18: ;
    MEM32(ebx) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    edx = eax + 1;
    POP32(esp, ebx);

loc_00217F22: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00217F22; /* jne: not equal / not zero */

loc_00217F29: ;
    eax = eax - edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00217F30
 * Original: 0x00217F30 - 0x00217F80 (80 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00217F30: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00217F42; /* jne: not equal / not zero */

loc_00217F3E: ;
    edi = 0; /* xor self */
    goto loc_00217F51;

loc_00217F42: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217F48u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00217F48: ;
    ecx = eax;
    PUSH32(esp, 0x00217F4Fu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00217F4F: ;
    edi = eax;

loc_00217F51: ;
    esi = MEM32(esi + 8);
    esi = esi + MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217F5F; /* je: equal / zero */

loc_00217F5C: ;
    MEM32(edi + -4) = MEM32(edi + -4) + 1;
    _fa = (uint32_t)(MEM32(edi + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00217F5F: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217F6D; /* je: equal / zero */

loc_00217F65: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00217F6Du); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00217F6D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00217F7B; /* je: equal / zero */

loc_00217F73: ;
    ecx = edi + -8;
    PUSH32(esp, 0x00217F7Bu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00217F7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00217F80
 * Original: 0x00217F80 - 0x00217FA0 (32 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00217F80: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00217F93; /* je: equal / zero */

loc_00217F90: ;
    MEM32(ecx + -4) = MEM32(ecx + -4) + 1;
    _fa = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00217F93: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00217FA0
 * Original: 0x00217FA0 - 0x00217FCD (45 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00217FA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217FAFu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00217FAF: ;
    ecx = eax;
    PUSH32(esp, 0x00217FB6u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00217FB6: ;
    edi = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217FC6; /* je: equal / zero */

loc_00217FBE: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00217FC6u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00217FC6: ;
    MEM32(esi) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00217FD0
 * Original: 0x00217FD0 - 0x0021801F (79 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00217FD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_00217FE1; /* jne: not equal / not zero */

loc_00217FDD: ;
    edi = 0; /* xor self */
    goto loc_00217FF0;

loc_00217FE1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217FE7u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00217FE7: ;
    ecx = eax;
    PUSH32(esp, 0x00217FEEu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00217FEE: ;
    edi = eax;

loc_00217FF0: ;
    esi = MEM32(esi + 8);
    esi = esi + MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00217FFE; /* je: equal / zero */

loc_00217FFB: ;
    MEM32(edi + -4) = MEM32(edi + -4) + 1;
    _fa = (uint32_t)(MEM32(edi + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00217FFE: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021800C; /* je: equal / zero */

loc_00218004: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021800Cu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021800C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0021801A; /* je: equal / zero */

loc_00218012: ;
    ecx = edi + -8;
    PUSH32(esp, 0x0021801Au); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021801A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00218020
 * Original: 0x00218020 - 0x00218062 (66 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218020: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(edx + eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00218032; /* je: equal / zero */

loc_0021802F: ;
    MEM32(esi + -4) = MEM32(esi + -4) + 1;
    _fa = (uint32_t)(MEM32(esi + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00218032: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    edi = edi + MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00218041; /* je: equal / zero */

loc_0021803E: ;
    MEM32(esi + -4) = MEM32(esi + -4) + 1;
    _fa = (uint32_t)(MEM32(esi + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00218041: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021804F; /* je: equal / zero */

loc_00218047: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021804Fu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021804F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0021805E; /* je: equal / zero */

loc_00218056: ;
    ecx = esi + -8;
    PUSH32(esp, 0x0021805Eu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021805E: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00218070
 * Original: 0x00218070 - 0x0021809A (42 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218070: ;
    SET_LO8(eax, MEM8(ecx + 0x35));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00218097; /* je: equal / zero */

loc_00218077: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    eax = MEM32(esi + edx);
    esi = esi + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00218090; /* je: equal / zero */

loc_00218088: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00218090u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00218090: ;
    MEM32(esi) = 0;
    POP32(esp, esi);

loc_00218097: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002180A0
 * Original: 0x002180A0 - 0x002180A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002180A0(void)
{

loc_002180A0: ;
    eax = MEM32(0x5BC1D4);
    esp += 4; return; /* ret */

}

/**
 * sub_002180B0
 * Original: 0x002180B0 - 0x002180B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002180B0(void)
{

loc_002180B0: ;
    eax = MEM32(0x5BC1D8);
    esp += 4; return; /* ret */

}

/**
 * sub_002180C0
 * Original: 0x002180C0 - 0x002180D7 (23 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002180C0(void)
{

loc_002180C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002180CEu); RECOMP_ABI_CALL(0x00212550u, sub_00212550); /* call 0x00212550 */

loc_002180CE: ;
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002180E0
 * Original: 0x002180E0 - 0x0021813D (93 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002180E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002180E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00218102; /* jg: greater (signed >) */

loc_002180F0: ;
    ebx = ebx - esi;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002180F9u); RECOMP_ABI_CALL(0x00212550u, sub_00212550); /* call 0x00212550 */

loc_002180F9: ;
    MEM32(edi + 8) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00218102: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0021811A; /* jl: less (signed <) */

loc_00218106: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00218110; /* jg: greater (signed >) */

loc_0021810B: ;
    MEM32(edi + 8) = esi;
    goto loc_0021811A;

loc_00218110: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0021811Au); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0021811A: ;
    edx = MEM32(edi + 0x10);
    ecx = esi;
    ecx = ecx - ebx;
    ecx = ecx << 2;
    edi = edx + ebx * 4;
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
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00218140
 * Original: 0x00218140 - 0x00218185 (69 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218140(void)
{

loc_00218140: ;
    eax = MEM32(esp + 8);
    ecx = ZX8(MEM8(eax));
    esp = esp - 0x400;
    PUSH32(esp, ecx);
    edx = esp + 4;
    PUSH32(esp, 0x3F32C4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021815Du); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0021815D: ;
    eax = esp + 0xC;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021816Au); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0021816A: ;
    ecx = eax;
    PUSH32(esp, 0x00218171u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00218171: ;
    ecx = MEM32(esp + 0x404);
    MEM32(ecx) = eax;
    eax = ecx;
    esp = esp + 0x400;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00218190
 * Original: 0x00218190 - 0x002181D4 (68 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218190(void)
{

loc_00218190: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    esp = esp - 0x400;
    PUSH32(esp, ecx);
    edx = esp + 4;
    PUSH32(esp, 0x3F6134);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002181ACu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_002181AC: ;
    eax = esp + 0xC;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002181B9u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_002181B9: ;
    ecx = eax;
    PUSH32(esp, 0x002181C0u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_002181C0: ;
    ecx = MEM32(esp + 0x404);
    MEM32(ecx) = eax;
    eax = ecx;
    esp = esp + 0x400;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002181E0
 * Original: 0x002181E0 - 0x002181E6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002181E0(void)
{

loc_002181E0: ;
    eax = MEM32(0x5BC16C);
    esp += 4; return; /* ret */

}

/**
 * sub_002181F0
 * Original: 0x002181F0 - 0x002181F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002181F0(void)
{

loc_002181F0: ;
    eax = MEM32(0x5BC170);
    esp += 4; return; /* ret */

}

/**
 * sub_00218200
 * Original: 0x00218200 - 0x00218248 (72 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218200(void)
{

loc_00218200: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    esp = esp - 0x400;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, 0x3F5C4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00218220u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00218220: ;
    ecx = esp + 0x10;
    esp = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0021822Du); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0021822D: ;
    ecx = eax;
    PUSH32(esp, 0x00218234u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00218234: ;
    ecx = MEM32(esp + 0x404);
    MEM32(ecx) = eax;
    eax = ecx;
    esp = esp + 0x400;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00218250
 * Original: 0x00218250 - 0x00218256 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218250(void)
{

loc_00218250: ;
    eax = MEM32(0x5BC15C);
    esp += 4; return; /* ret */

}

/**
 * sub_00218260
 * Original: 0x00218260 - 0x00218266 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218260(void)
{

loc_00218260: ;
    eax = MEM32(0x5BC160);
    esp += 4; return; /* ret */

}

/**
 * sub_00218270
 * Original: 0x00218270 - 0x002182B5 (69 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218270(void)
{

loc_00218270: ;
    eax = MEM32(esp + 8);
    ecx = ZX16(MEM16(eax));
    esp = esp - 0x400;
    PUSH32(esp, ecx);
    edx = esp + 4;
    PUSH32(esp, 0x3F5F50);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021828Du); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0021828D: ;
    eax = esp + 0xC;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021829Au); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0021829A: ;
    ecx = eax;
    PUSH32(esp, 0x002182A1u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_002182A1: ;
    ecx = MEM32(esp + 0x404);
    MEM32(ecx) = eax;
    eax = ecx;
    esp = esp + 0x400;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002182C0
 * Original: 0x002182C0 - 0x002182C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002182C0(void)
{

loc_002182C0: ;
    eax = MEM32(0x5BC14C);
    esp += 4; return; /* ret */

}

/**
 * sub_002182D0
 * Original: 0x002182D0 - 0x002182D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002182D0(void)
{

loc_002182D0: ;
    eax = MEM32(0x5BC150);
    esp += 4; return; /* ret */

}

/**
 * sub_002182E0
 * Original: 0x002182E0 - 0x00218324 (68 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002182E0(void)
{

loc_002182E0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    esp = esp - 0x400;
    PUSH32(esp, ecx);
    edx = esp + 4;
    PUSH32(esp, 0x3EEA78);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002182FCu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_002182FC: ;
    eax = esp + 0xC;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00218309u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00218309: ;
    ecx = eax;
    PUSH32(esp, 0x00218310u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00218310: ;
    ecx = MEM32(esp + 0x404);
    MEM32(ecx) = eax;
    eax = ecx;
    esp = esp + 0x400;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00218330
 * Original: 0x00218330 - 0x00218459 (297 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218330(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00218330: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = ecx;
    MEM8(edi) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00218447; /* jle: less or equal (signed <=) */

loc_0021835D: ;
    /* nop */

loc_00218360: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00218378; /* je: equal / zero */

loc_00218367: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00218378; /* jl: less (signed <) */

loc_0021836B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00218378; /* jge: greater or equal (signed >=) */

loc_00218370: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ebp * 4);
    goto loc_0021837A;

loc_00218378: ;
    eax = 0; /* xor self */

loc_0021837A: ;
    edx = MEM32(esp + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021842C; /* je: equal / zero */

loc_00218386: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002183A2; /* je: equal / zero */

loc_0021838E: ;
    eax = MEM32(esp + 0x1C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CB044);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021839Fu); RECOMP_ABI_CALL(0x00341DC0u, sub_00341DC0); /* call 0x00341DC0 */

loc_0021839F: ;
    esp = esp + 0xC;

loc_002183A2: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002183C1; /* je: equal / zero */

loc_002183A9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_002183C1; /* jl: less (signed <) */

loc_002183AD: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002183C1; /* jge: greater or equal (signed >=) */

loc_002183B2: ;
    ecx = MEM32(eax + 0x10);
    esi = MEM32(ecx + ebp * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002183C3; /* je: equal / zero */

loc_002183BC: ;
    MEM32(esi + -4) = MEM32(esi + -4) + 1;
    _fa = (uint32_t)(MEM32(esi + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002183C3;

loc_002183C1: ;
    esi = 0; /* xor self */

loc_002183C3: ;
    edx = MEM32(esp + 0x1C);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002183D0u); RECOMP_ABI_CALL(0x00341DC0u, sub_00341DC0); /* call 0x00341DC0 */

loc_002183D0: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021841B; /* je: equal / zero */

loc_002183D7: ;
    eax = MEM32(esi + -4);
    esi = esi + 0xFFFFFFF8u;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    if ((_fa != 0)) goto loc_0021841B; /* jne: not equal / not zero */

loc_002183E3: ;
    edi = MEM32(esi);
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002183EDu); RECOMP_ABI_CALL(0x001F87A0u, sub_001F87A0); /* call 0x001F87A0 */

loc_002183ED: ;
    eax = esi + 8;
    edx = eax + 1;

loc_002183F3: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002183F3; /* jne: not equal / not zero */

loc_002183FA: ;
    eax = eax - edx;
    eax = eax + 9;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00218408u); RECOMP_ABI_CALL(0x001EBA30u, sub_001EBA30); /* call 0x001EBA30 */

loc_00218408: ;
    SET_LO8(eax, MEM8(edi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00218417; /* je: equal / zero */

loc_0021840F: ;
    ecx = MEM32(edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00218417u); RECOMP_ABI_CALL(0x0020EEE0u, sub_0020EEE0); /* call 0x0020EEE0 */

loc_00218417: ;
    edi = MEM32(esp + 0x18);

loc_0021841B: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x24);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = eax;

loc_0021842C: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00218360; /* jl: less (signed <) */

loc_00218435: ;
    eax = MEM32(esp + 0x1C);
    MEM8(edi + eax + -1) = 0;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00218447: ;
    ecx = MEM32(esp + 0x1C);
    MEM8(edi + ecx + -1) = 0;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00218460
 * Original: 0x00218460 - 0x002185EF (399 bytes, 133 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218460(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00218460: ;
    esp = esp - 0x88;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    ebx = MEM32(edi + 0x70);
    MEM32(esp + 0xC) = edi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00218476u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00218476: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002185E4; /* je: equal / zero */

loc_0021847E: ;
    eax = MEM32(ebx + 0x7EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002185E4; /* je: equal / zero */

loc_0021848C: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002185E3; /* jle: less or equal (signed <=) */

loc_00218497: ;
    PUSH32(esp, esi);
    goto loc_002184A0;

    /* nop */

loc_002184A0: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002184B9; /* jle: less or equal (signed <=) */

loc_002184A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002184B7; /* jge: greater or equal (signed >=) */

loc_002184AE: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_002184C7;

loc_002184B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_002184B9: ;
    if (TEST_NZ(_fa, _fb)) goto loc_002184C5; /* jne: not equal / not zero */

loc_002184BB: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002184C7; /* jne: not equal / not zero */

loc_002184C5: ;
    ecx = 0; /* xor self */

loc_002184C7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x002184CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002184CD: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x002184DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002184DB: ;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x7EC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    PUSH32(esp, eax);
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x3F6404);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00218500u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00218500: ;
    eax = MEM32(0x5BC544);
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021851C; /* jle: less or equal (signed <=) */

loc_0021850C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021851A; /* jge: greater or equal (signed >=) */

loc_00218511: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_0021852A;

loc_0021851A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_0021851C: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00218528; /* jne: not equal / not zero */

loc_0021851E: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021852A; /* jne: not equal / not zero */

loc_00218528: ;
    ecx = 0; /* xor self */

loc_0021852A: ;
    eax = MEM32(0x46A678);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00218535u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00218535: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00218544u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00218544: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021855B; /* je: equal / zero */

loc_0021854A: ;
    ecx = 0x2A;
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(esp + 0x14);
    goto loc_0021855D;

loc_0021855B: ;
    esi = 0; /* xor self */

loc_0021855D: ;
    eax = MEM32(ebx + 0x7E4);
    ecx = MEM32(eax + ebp * 4);
    MEM32(esi) = ecx;
    edx = MEM32(ebx + 0x7E4);
    ecx = MEM32(edx + ebp * 4 + 4);
    eax = edx + ebp * 4;
    ecx = ecx - MEM32(eax);
    PUSH32(esp, 0x4F);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esi + 8;
    PUSH32(esp, eax);
    MEM32(esi + 4) = ecx;
    PUSH32(esp, 0x0021858Au); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0021858A: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x4F);
    PUSH32(esp, ecx);
    edx = esi + 0x58;
    PUSH32(esp, edx);
    MEM8(esi + 0x57) = 0;
    PUSH32(esp, 0x0021859Eu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0021859E: ;
    esp = esp + 0x18;
    MEM8(esi + 0xA7) = 0;
    MEM32(esp + 0x10) = esi;
    esi = MEM32(esp + 0x9C);
    PUSH32(esp, 0x1F0C80);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002185C4u); RECOMP_ABI_CALL(0x001E7C80u, sub_001E7C80); /* call 0x001E7C80 */

loc_002185C4: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002185D1u); RECOMP_ABI_CALL(0x0020B3B0u, sub_0020B3B0); /* call 0x0020B3B0 */

loc_002185D1: ;
    eax = MEM32(ebx + 0x7EC);
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002184A0; /* jl: less (signed <) */

loc_002185E2: ;
    POP32(esp, esi);

loc_002185E3: ;
    POP32(esp, ebp);

loc_002185E4: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x88;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002185F0
 * Original: 0x002185F0 - 0x002187D8 (488 bytes, 174 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002185F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002185F0: ;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + 0x7C));
    ebp = 0; /* xor self */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM16(esp + 0x48)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x48), LO16(eax) (16-bit) */
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x2C) = ebp;
    MEM32(esp + 0x24) = ebp;
    if (CMP_AE(_fa, _fb)) goto loc_0021861F; /* jae: above or equal (unsigned >=) */

loc_0021861B: ;
    MEM32(esp + 0x48) = eax;

loc_0021861F: ;
    esi = MEM32(esp + 0x40);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218654; /* je: equal / zero */

loc_00218627: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0021862Fu); RECOMP_ABI_CALL(0x002059F0u, sub_002059F0); /* call 0x002059F0 */

loc_0021862F: ;
    ecx = MEM32(edi + 0x78);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + eax * 4);
    ecx = ecx & 0x7FFFFFFF;
    MEM32(esp + 0x24) = ecx;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00218654u); RECOMP_ABI_CALL(0x00205A30u, sub_00205A30); /* call 0x00205A30 */

loc_00218654: ;
    _fa = (uint32_t)(MEM32(esp + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x44), ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0021877E; /* jbe: below or equal (unsigned <=) */

loc_0021865E: ;
    eax = MEM32(edi + 0x78);
    ecx = MEM32(eax + 8);
    ebp = MEM32(edi + 0x74);
    edx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x10) = ebp;
    ebx = 0x7FFFFFFF;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x14) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_00218764; /* jle: less or equal (signed <=) */

loc_0021868E: ;
    eax = MEM32(eax + 0x10);
    MEM32(esp + 0x28) = eax;

loc_00218695: ;
    eax = MEM32(eax);
    edx = eax;
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00218734; /* js: sign (negative) */

loc_002186A7: ;
    esi = ZX16(MEM16(esp + 0x48));
    ecx = esi + -1;
    eax = ebp + -1;
    eax = eax & ecx;
    esi = esi - eax;
    eax = MEM32(esp + 0x44);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00218730; /* ja: above (unsigned >) */

loc_002186C1: ;
    edi = MEM32(esp + 0x44);
    eax = edx;
    eax = eax - esi;
    eax = eax - edi;
    edi = eax;
    edi = edi & ecx;
    ebp = eax;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)eax);
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    eax = ecx;
    eax = eax - ebp;
    ebp = esi;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)esi);
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ebp = MEM32(esp + 0x10);
    if (CMP_GE(_fas, _fbs)) goto loc_002186FE; /* jge: greater or equal (signed >=) */

loc_002186EC: ;
    ebx = MEM32(esp + 0x14);
    MEM32(esp + 0x1C) = ebx;
    ebx = eax;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x20) = ebp;

loc_002186FE: ;
    esi = MEM32(esp + 0x44);
    eax = edx;
    eax = eax - edi;
    eax = eax - esi;
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    ecx = ecx - esi;
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)edi);
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021872C; /* jge: greater or equal (signed >=) */

loc_0021871A: ;
    esi = MEM32(esp + 0x14);
    MEM32(esp + 0x1C) = esi;
    ebx = ecx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = ebp;

loc_0021872C: ;
    edi = MEM32(esp + 0x34);

loc_00218730: ;
    esi = MEM32(esp + 0x40);

loc_00218734: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x28);
    ebp = ebp + edx;
    edx = MEM32(esp + 0x38);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x28) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00218695; /* jl: less (signed <) */

loc_0021875A: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0021878A; /* jge: greater or equal (signed >=) */

loc_00218762: ;
    edx = 0; /* xor self */

loc_00218764: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021877E; /* je: equal / zero */

loc_00218768: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0021877Eu); RECOMP_ABI_CALL(0x002120F0u, sub_002120F0); /* call 0x002120F0 */

loc_0021877E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 16; return; /* ret 12 */

loc_0021878A: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0021879Cu); RECOMP_ABI_CALL(0x002120F0u, sub_002120F0); /* call 0x002120F0 */

loc_0021879C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x20);
    edi = eax + ecx;
    if (TEST_Z(_fa, _fb)) goto loc_002187CC; /* je: equal / zero */

loc_002187AB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002187CC; /* je: equal / zero */

loc_002187AF: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002187BD; /* jae: above or equal (unsigned >=) */

loc_002187BB: ;
    eax = ecx;

loc_002187BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_002187CC; /* jbe: below or equal (unsigned <=) */

loc_002187C1: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x002187C9u); RECOMP_ICALL_SAFE(0x00342AA0u, _icall_esp); /* manual call 0x00342AA0 */
    }

loc_002187C9: ;
    esp = esp + 0xC;

loc_002187CC: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002187E0
 * Original: 0x002187E0 - 0x002188DC (252 bytes, 90 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002187E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002187E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x002187EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002187EA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002188D7; /* je: equal / zero */

loc_002187F2: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021880B; /* jle: less or equal (signed <=) */

loc_002187FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00218809; /* jge: greater or equal (signed >=) */

loc_00218800: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00218819;

loc_00218809: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_0021880B: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00218817; /* jne: not equal / not zero */

loc_0021880D: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00218819; /* jne: not equal / not zero */

loc_00218817: ;
    ecx = 0; /* xor self */

loc_00218819: ;
    eax = MEM32(0x46A678);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00218825u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00218825: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00218834u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00218834: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00218849; /* je: equal / zero */

loc_0021883A: ;
    PUSH32(esp, edi);
    ecx = 0x2A;
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    goto loc_0021884B;

loc_00218849: ;
    esi = 0; /* xor self */

loc_0021884B: ;
    eax = MEM32(ebp + 0x74);
    PUSH32(esp, 0x4F);
    MEM32(esi) = eax;
    ecx = MEM32(ebp + 0x70);
    edx = esi + 8;
    PUSH32(esp, 0x3F6420);
    PUSH32(esp, edx);
    MEM32(esi + 4) = ecx;
    PUSH32(esp, 0x00218866u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00218866: ;
    MEM8(esi + 0x57) = 0;
    eax = MEM32(0x5BC544);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00218886; /* jle: less or equal (signed <=) */

loc_00218876: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00218884; /* jge: greater or equal (signed >=) */

loc_0021887B: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00218894;

loc_00218884: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00218886: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00218892; /* jne: not equal / not zero */

loc_00218888: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00218894; /* jne: not equal / not zero */

loc_00218892: ;
    ecx = 0; /* xor self */

loc_00218894: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0021889Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021889A: ;
    PUSH32(esp, 0x4F);
    PUSH32(esp, eax);
    ecx = esi + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002188A6u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_002188A6: ;
    esp = esp + 0xC;
    MEM8(esi + 0xA7) = 0;
    MEM32(esp + 8) = esi;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0x1F0C80);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002188C9u); RECOMP_ABI_CALL(0x001E7C80u, sub_001E7C80); /* call 0x001E7C80 */

loc_002188C9: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002188D6u); RECOMP_ABI_CALL(0x0020B3B0u, sub_0020B3B0); /* call 0x0020B3B0 */

loc_002188D6: ;
    POP32(esp, esi);

loc_002188D7: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002188E0
 * Original: 0x002188E0 - 0x002189DC (252 bytes, 90 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002188E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002188E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x002188EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002188EA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002189D7; /* je: equal / zero */

loc_002188F2: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021890B; /* jle: less or equal (signed <=) */

loc_002188FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00218909; /* jge: greater or equal (signed >=) */

loc_00218900: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00218919;

loc_00218909: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_0021890B: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00218917; /* jne: not equal / not zero */

loc_0021890D: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00218919; /* jne: not equal / not zero */

loc_00218917: ;
    ecx = 0; /* xor self */

loc_00218919: ;
    eax = MEM32(0x46A678);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00218925u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00218925: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00218934u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00218934: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00218949; /* je: equal / zero */

loc_0021893A: ;
    PUSH32(esp, edi);
    ecx = 0x2A;
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    goto loc_0021894B;

loc_00218949: ;
    esi = 0; /* xor self */

loc_0021894B: ;
    eax = MEM32(ebp + 0x74);
    PUSH32(esp, 0x4F);
    MEM32(esi) = eax;
    ecx = MEM32(ebp + 0x78);
    edx = esi + 8;
    PUSH32(esp, 0x3F6438);
    PUSH32(esp, edx);
    MEM32(esi + 4) = ecx;
    PUSH32(esp, 0x00218966u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00218966: ;
    MEM8(esi + 0x57) = 0;
    eax = MEM32(0x5BC544);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00218986; /* jle: less or equal (signed <=) */

loc_00218976: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00218984; /* jge: greater or equal (signed >=) */

loc_0021897B: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00218994;

loc_00218984: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00218986: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00218992; /* jne: not equal / not zero */

loc_00218988: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00218994; /* jne: not equal / not zero */

loc_00218992: ;
    ecx = 0; /* xor self */

loc_00218994: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0021899Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021899A: ;
    PUSH32(esp, 0x4F);
    PUSH32(esp, eax);
    ecx = esi + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002189A6u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_002189A6: ;
    esp = esp + 0xC;
    MEM8(esi + 0xA7) = 0;
    MEM32(esp + 8) = esi;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0x1F0C80);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002189C9u); RECOMP_ABI_CALL(0x001E7C80u, sub_001E7C80); /* call 0x001E7C80 */

loc_002189C9: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002189D6u); RECOMP_ABI_CALL(0x0020B3B0u, sub_0020B3B0); /* call 0x0020B3B0 */

loc_002189D6: ;
    POP32(esp, esi);

loc_002189D7: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002189E0
 * Original: 0x002189E0 - 0x00218ADC (252 bytes, 90 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002189E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002189E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x002189EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002189EA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00218AD7; /* je: equal / zero */

loc_002189F2: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00218A0B; /* jle: less or equal (signed <=) */

loc_002189FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00218A09; /* jge: greater or equal (signed >=) */

loc_00218A00: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00218A19;

loc_00218A09: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00218A0B: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00218A17; /* jne: not equal / not zero */

loc_00218A0D: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00218A19; /* jne: not equal / not zero */

loc_00218A17: ;
    ecx = 0; /* xor self */

loc_00218A19: ;
    eax = MEM32(0x46A678);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00218A25u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00218A25: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00218A34u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00218A34: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00218A49; /* je: equal / zero */

loc_00218A3A: ;
    PUSH32(esp, edi);
    ecx = 0x2A;
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    goto loc_00218A4B;

loc_00218A49: ;
    esi = 0; /* xor self */

loc_00218A4B: ;
    eax = MEM32(ebp + 0x74);
    PUSH32(esp, 0x4F);
    MEM32(esi) = eax;
    ecx = MEM32(ebp + 0x78);
    edx = esi + 8;
    PUSH32(esp, 0x3F6454);
    PUSH32(esp, edx);
    MEM32(esi + 4) = ecx;
    PUSH32(esp, 0x00218A66u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00218A66: ;
    MEM8(esi + 0x57) = 0;
    eax = MEM32(0x5BC544);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00218A86; /* jle: less or equal (signed <=) */

loc_00218A76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00218A84; /* jge: greater or equal (signed >=) */

loc_00218A7B: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00218A94;

loc_00218A84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00218A86: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00218A92; /* jne: not equal / not zero */

loc_00218A88: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00218A94; /* jne: not equal / not zero */

loc_00218A92: ;
    ecx = 0; /* xor self */

loc_00218A94: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00218A9Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00218A9A: ;
    PUSH32(esp, 0x4F);
    PUSH32(esp, eax);
    ecx = esi + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00218AA6u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00218AA6: ;
    esp = esp + 0xC;
    MEM8(esi + 0xA7) = 0;
    MEM32(esp + 8) = esi;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0x1F0C80);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00218AC9u); RECOMP_ABI_CALL(0x001E7C80u, sub_001E7C80); /* call 0x001E7C80 */

loc_00218AC9: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00218AD6u); RECOMP_ABI_CALL(0x0020B3B0u, sub_0020B3B0); /* call 0x0020B3B0 */

loc_00218AD6: ;
    POP32(esp, esi);

loc_00218AD7: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00218AE0
 * Original: 0x00218AE0 - 0x00218B1F (63 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218AE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00218AE9u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00218AE9: ;
    eax = MEM32(esi + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218AFA; /* je: equal / zero */

loc_00218AF2: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00218AFAu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00218AFA: ;
    MEM32(esi + 8) = edi;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218B19; /* je: equal / zero */

loc_00218B04: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00218B19; /* jne: not equal / not zero */

loc_00218B14: ;
    PUSH32(esp, 0x00218B19u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00218B19: ;
    MEM32(esi + 0xC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00218B20
 * Original: 0x00218B20 - 0x00218C1C (252 bytes, 90 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218B20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00218B20: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00218B2Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00218B2A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00218C17; /* je: equal / zero */

loc_00218B32: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00218B4B; /* jle: less or equal (signed <=) */

loc_00218B3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00218B49; /* jge: greater or equal (signed >=) */

loc_00218B40: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00218B59;

loc_00218B49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00218B4B: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00218B57; /* jne: not equal / not zero */

loc_00218B4D: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00218B59; /* jne: not equal / not zero */

loc_00218B57: ;
    ecx = 0; /* xor self */

loc_00218B59: ;
    eax = MEM32(0x46A678);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00218B65u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00218B65: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00218B74u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00218B74: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00218B89; /* je: equal / zero */

loc_00218B7A: ;
    PUSH32(esp, edi);
    ecx = 0x2A;
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    goto loc_00218B8B;

loc_00218B89: ;
    esi = 0; /* xor self */

loc_00218B8B: ;
    eax = MEM32(ebp + 0x74);
    PUSH32(esp, 0x4F);
    MEM32(esi) = eax;
    ecx = MEM32(ebp + 0x78);
    edx = esi + 8;
    PUSH32(esp, 0x3F6470);
    PUSH32(esp, edx);
    MEM32(esi + 4) = ecx;
    PUSH32(esp, 0x00218BA6u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00218BA6: ;
    MEM8(esi + 0x57) = 0;
    eax = MEM32(0x5BC544);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00218BC6; /* jle: less or equal (signed <=) */

loc_00218BB6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00218BC4; /* jge: greater or equal (signed >=) */

loc_00218BBB: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00218BD4;

loc_00218BC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00218BC6: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00218BD2; /* jne: not equal / not zero */

loc_00218BC8: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00218BD4; /* jne: not equal / not zero */

loc_00218BD2: ;
    ecx = 0; /* xor self */

loc_00218BD4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00218BDAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00218BDA: ;
    PUSH32(esp, 0x4F);
    PUSH32(esp, eax);
    ecx = esi + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00218BE6u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00218BE6: ;
    esp = esp + 0xC;
    MEM8(esi + 0xA7) = 0;
    MEM32(esp + 8) = esi;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0x1F0C80);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00218C09u); RECOMP_ABI_CALL(0x001E7C80u, sub_001E7C80); /* call 0x001E7C80 */

loc_00218C09: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00218C16u); RECOMP_ABI_CALL(0x0020B3B0u, sub_0020B3B0); /* call 0x0020B3B0 */

loc_00218C16: ;
    POP32(esp, esi);

loc_00218C17: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00218C20
 * Original: 0x00218C20 - 0x00218FF4 (980 bytes, 318 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218C20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00218C20: ;
    eax = MEM32(ecx);
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00218C31u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00218C31: ;
    eax = MEM32(esp + 0x28);
    ebp = MEM32(esp + 0x68);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218CF6; /* je: equal / zero */

loc_00218C44: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00218C5D; /* jle: less or equal (signed <=) */

loc_00218C4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00218C5B; /* jge: greater or equal (signed >=) */

loc_00218C52: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00218C6B;

loc_00218C5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */

loc_00218C5D: ;
    if (CMP_NE(_fa, _fb)) goto loc_00218C69; /* jne: not equal / not zero */

loc_00218C5F: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00218C6B; /* jne: not equal / not zero */

loc_00218C69: ;
    ecx = 0; /* xor self */

loc_00218C6B: ;
    edx = MEM32(0x46A678);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00218C77u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00218C77: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00218C86u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00218C86: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218C99; /* je: equal / zero */

loc_00218C8C: ;
    ecx = 0x2A;
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    goto loc_00218C9B;

loc_00218C99: ;
    esi = 0; /* xor self */

loc_00218C9B: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, 0x4F);
    MEM32(esi) = eax;
    ecx = MEM32(esp + 0x30);
    edx = esi + 8;
    PUSH32(esp, 0x3F64EC);
    PUSH32(esp, edx);
    MEM32(esi + 4) = ecx;
    PUSH32(esp, 0x00218CB8u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00218CB8: ;
    PUSH32(esp, 0x4F);
    eax = esi + 0x58;
    PUSH32(esp, 0x3F64E4);
    PUSH32(esp, eax);
    MEM8(esi + 0x57) = LO8(ebx);
    PUSH32(esp, 0x00218CCBu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00218CCB: ;
    esp = esp + 0x18;
    PUSH32(esp, 0x1F0C80);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM8(esi + 0xA7) = LO8(ebx);
    MEM32(esp + 0x70) = esi;
    PUSH32(esp, 0x00218CE9u); RECOMP_ABI_CALL(0x001E7C80u, sub_001E7C80); /* call 0x001E7C80 */

loc_00218CE9: ;
    edx = esp + 0x68;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00218CF6u); RECOMP_ABI_CALL(0x0020B3B0u, sub_0020B3B0); /* call 0x0020B3B0 */

loc_00218CF6: ;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x30), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218DB3; /* je: equal / zero */

loc_00218D01: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00218D1A; /* jle: less or equal (signed <=) */

loc_00218D0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00218D18; /* jge: greater or equal (signed >=) */

loc_00218D0F: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00218D28;

loc_00218D18: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */

loc_00218D1A: ;
    if (CMP_NE(_fa, _fb)) goto loc_00218D26; /* jne: not equal / not zero */

loc_00218D1C: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00218D28; /* jne: not equal / not zero */

loc_00218D26: ;
    ecx = 0; /* xor self */

loc_00218D28: ;
    edx = MEM32(0x46A678);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00218D34u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00218D34: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00218D43u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00218D43: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218D56; /* je: equal / zero */

loc_00218D49: ;
    ecx = 0x2A;
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    goto loc_00218D58;

loc_00218D56: ;
    esi = 0; /* xor self */

loc_00218D58: ;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, 0x4F);
    MEM32(esi) = eax;
    ecx = MEM32(esp + 0x38);
    edx = esi + 8;
    PUSH32(esp, 0x3F64D4);
    PUSH32(esp, edx);
    MEM32(esi + 4) = ecx;
    PUSH32(esp, 0x00218D75u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00218D75: ;
    PUSH32(esp, 0x4F);
    eax = esi + 0x58;
    PUSH32(esp, 0x3F64E4);
    PUSH32(esp, eax);
    MEM8(esi + 0x57) = LO8(ebx);
    PUSH32(esp, 0x00218D88u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00218D88: ;
    esp = esp + 0x18;
    PUSH32(esp, 0x1F0C80);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM8(esi + 0xA7) = LO8(ebx);
    MEM32(esp + 0x70) = esi;
    PUSH32(esp, 0x00218DA6u); RECOMP_ABI_CALL(0x001E7C80u, sub_001E7C80); /* call 0x001E7C80 */

loc_00218DA6: ;
    edx = esp + 0x68;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00218DB3u); RECOMP_ABI_CALL(0x0020B3B0u, sub_0020B3B0); /* call 0x0020B3B0 */

loc_00218DB3: ;
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x38), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218E70; /* je: equal / zero */

loc_00218DBE: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00218DD7; /* jle: less or equal (signed <=) */

loc_00218DC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00218DD5; /* jge: greater or equal (signed >=) */

loc_00218DCC: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00218DE5;

loc_00218DD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */

loc_00218DD7: ;
    if (CMP_NE(_fa, _fb)) goto loc_00218DE3; /* jne: not equal / not zero */

loc_00218DD9: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00218DE5; /* jne: not equal / not zero */

loc_00218DE3: ;
    ecx = 0; /* xor self */

loc_00218DE5: ;
    edx = MEM32(0x46A678);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00218DF1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00218DF1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00218E00u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00218E00: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218E13; /* je: equal / zero */

loc_00218E06: ;
    ecx = 0x2A;
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    goto loc_00218E15;

loc_00218E13: ;
    esi = 0; /* xor self */

loc_00218E15: ;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, 0x4F);
    MEM32(esi) = eax;
    ecx = MEM32(esp + 0x40);
    edx = esi + 8;
    PUSH32(esp, 0x3F64B8);
    PUSH32(esp, edx);
    MEM32(esi + 4) = ecx;
    PUSH32(esp, 0x00218E32u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00218E32: ;
    PUSH32(esp, 0x4F);
    eax = esi + 0x58;
    PUSH32(esp, 0x3F64E4);
    PUSH32(esp, eax);
    MEM8(esi + 0x57) = LO8(ebx);
    PUSH32(esp, 0x00218E45u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00218E45: ;
    esp = esp + 0x18;
    PUSH32(esp, 0x1F0C80);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM8(esi + 0xA7) = LO8(ebx);
    MEM32(esp + 0x70) = esi;
    PUSH32(esp, 0x00218E63u); RECOMP_ABI_CALL(0x001E7C80u, sub_001E7C80); /* call 0x001E7C80 */

loc_00218E63: ;
    edx = esp + 0x68;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00218E70u); RECOMP_ABI_CALL(0x0020B3B0u, sub_0020B3B0); /* call 0x0020B3B0 */

loc_00218E70: ;
    _fa = (uint32_t)(MEM32(esp + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x40), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218F2D; /* je: equal / zero */

loc_00218E7B: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00218E94; /* jle: less or equal (signed <=) */

loc_00218E84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00218E92; /* jge: greater or equal (signed >=) */

loc_00218E89: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00218EA2;

loc_00218E92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */

loc_00218E94: ;
    if (CMP_NE(_fa, _fb)) goto loc_00218EA0; /* jne: not equal / not zero */

loc_00218E96: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00218EA2; /* jne: not equal / not zero */

loc_00218EA0: ;
    ecx = 0; /* xor self */

loc_00218EA2: ;
    edx = MEM32(0x46A678);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00218EAEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00218EAE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00218EBDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00218EBD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218ED0; /* je: equal / zero */

loc_00218EC3: ;
    ecx = 0x2A;
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    goto loc_00218ED2;

loc_00218ED0: ;
    esi = 0; /* xor self */

loc_00218ED2: ;
    eax = MEM32(esp + 0x40);
    PUSH32(esp, 0x4F);
    MEM32(esi) = eax;
    ecx = MEM32(esp + 0x48);
    edx = esi + 8;
    PUSH32(esp, 0x3F649C);
    PUSH32(esp, edx);
    MEM32(esi + 4) = ecx;
    PUSH32(esp, 0x00218EEFu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00218EEF: ;
    PUSH32(esp, 0x4F);
    eax = esi + 0x58;
    PUSH32(esp, 0x3F64E4);
    PUSH32(esp, eax);
    MEM8(esi + 0x57) = LO8(ebx);
    PUSH32(esp, 0x00218F02u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00218F02: ;
    esp = esp + 0x18;
    PUSH32(esp, 0x1F0C80);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM8(esi + 0xA7) = LO8(ebx);
    MEM32(esp + 0x70) = esi;
    PUSH32(esp, 0x00218F20u); RECOMP_ABI_CALL(0x001E7C80u, sub_001E7C80); /* call 0x001E7C80 */

loc_00218F20: ;
    edx = esp + 0x68;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00218F2Du); RECOMP_ABI_CALL(0x0020B3B0u, sub_0020B3B0); /* call 0x0020B3B0 */

loc_00218F2D: ;
    _fa = (uint32_t)(MEM32(esp + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x48), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218FEA; /* je: equal / zero */

loc_00218F38: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00218F51; /* jle: less or equal (signed <=) */

loc_00218F41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00218F4F; /* jge: greater or equal (signed >=) */

loc_00218F46: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00218F5F;

loc_00218F4F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */

loc_00218F51: ;
    if (CMP_NE(_fa, _fb)) goto loc_00218F5D; /* jne: not equal / not zero */

loc_00218F53: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00218F5F; /* jne: not equal / not zero */

loc_00218F5D: ;
    ecx = 0; /* xor self */

loc_00218F5F: ;
    edx = MEM32(0x46A678);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00218F6Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00218F6B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00218F7Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00218F7A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218F8D; /* je: equal / zero */

loc_00218F80: ;
    ecx = 0x2A;
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    goto loc_00218F8F;

loc_00218F8D: ;
    esi = 0; /* xor self */

loc_00218F8F: ;
    eax = MEM32(esp + 0x48);
    PUSH32(esp, 0x4F);
    MEM32(esi) = eax;
    ecx = MEM32(esp + 0x50);
    edx = esi + 8;
    PUSH32(esp, 0x3F6488);
    PUSH32(esp, edx);
    MEM32(esi + 4) = ecx;
    PUSH32(esp, 0x00218FACu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00218FAC: ;
    PUSH32(esp, 0x4F);
    eax = esi + 0x58;
    PUSH32(esp, 0x3F64E4);
    PUSH32(esp, eax);
    MEM8(esi + 0x57) = LO8(ebx);
    PUSH32(esp, 0x00218FBFu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00218FBF: ;
    esp = esp + 0x18;
    PUSH32(esp, 0x1F0C80);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM8(esi + 0xA7) = LO8(ebx);
    MEM32(esp + 0x70) = esi;
    PUSH32(esp, 0x00218FDDu); RECOMP_ABI_CALL(0x001E7C80u, sub_001E7C80); /* call 0x001E7C80 */

loc_00218FDD: ;
    edx = esp + 0x68;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00218FEAu); RECOMP_ABI_CALL(0x0020B3B0u, sub_0020B3B0); /* call 0x0020B3B0 */

loc_00218FEA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x54;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00219000
 * Original: 0x00219000 - 0x002192C8 (712 bytes, 233 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219000(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00219000: ;
    esp = esp - 0x68;
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00219011u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00219011: ;
    ecx = 0; /* xor self */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x1C) = ecx;
    goto loc_00219020;

    /* nop */

loc_00219020: ;
    eax = MEM32(ecx + 0x5BBB38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002191CC; /* je: equal / zero */

loc_00219032: ;
    ebx = 0; /* xor self */
    goto loc_00219040;

loc_00219036: ;
    eax = MEM32(esp + 0x20);
    /* nop */

loc_00219040: ;
    edx = ebx;
    ecx = ebx;
    ecx = ecx & 0xF;
    ecx = ecx << 1;
    edx = edx >> 4;
    ebp = MEM32(eax + edx * 4);
    ebp = ebp >> LO8(ecx);
    PUSH32(esp, 3);
    ecx = 0x4000;
    ecx = ecx - ebx;
    ebp = ebp & 3;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x00219067u); RECOMP_ABI_CALL(0x001F0D70u, sub_001F0D70); /* call 0x001F0D70 */

loc_00219067: ;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00219084; /* jle: less or equal (signed <=) */

loc_00219074: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00219082; /* jge: greater or equal (signed >=) */

loc_00219079: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00219092;

loc_00219082: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00219084: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00219090; /* jne: not equal / not zero */

loc_00219086: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00219092; /* jne: not equal / not zero */

loc_00219090: ;
    ecx = 0; /* xor self */

loc_00219092: ;
    eax = MEM32(0x46A678);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0021909Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021909D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x002190ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002190AC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002190BF; /* je: equal / zero */

loc_002190B2: ;
    ecx = 0x2A;
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    goto loc_002190C1;

loc_002190BF: ;
    esi = 0; /* xor self */

loc_002190C1: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);
    eax = eax + ebx;
    eax = eax << 0xC;
    ecx = ecx << 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_00219153; /* ja: above (unsigned >) */

loc_002190DB: ;
    { uint32_t _jt = MEM32(ebp * 4 + 0x2192C8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x002190E2u) goto loc_002190E2;
    if (_jt == 0x002190EBu) goto loc_002190EB;
    if (_jt == 0x00219108u) goto loc_00219108;
    if (_jt == 0x00219125u) goto loc_00219125;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002190E2: ;
    PUSH32(esp, 0x4F);
    PUSH32(esp, 0x3F6548);
    goto loc_0021912C;

loc_002190EB: ;
    PUSH32(esp, 0x4F);
    ecx = esi + 8;
    PUSH32(esp, 0x3F653C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002190FBu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_002190FB: ;
    PUSH32(esp, 0x4F);
    PUSH32(esp, 0x3F6530);
    edx = esi + 0x58;
    PUSH32(esp, edx);
    goto loc_00219140;

loc_00219108: ;
    PUSH32(esp, 0x4F);
    eax = esi + 8;
    PUSH32(esp, 0x3F6520);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00219118u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00219118: ;
    PUSH32(esp, 0x4F);
    PUSH32(esp, 0x3F6530);
    ecx = esi + 0x58;
    PUSH32(esp, ecx);
    goto loc_00219140;

loc_00219125: ;
    PUSH32(esp, 0x4F);
    PUSH32(esp, 0x3F6510);

loc_0021912C: ;
    edx = esi + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00219135u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00219135: ;
    PUSH32(esp, 0x4F);
    eax = esi + 0x58;
    PUSH32(esp, 0x3F6530);
    PUSH32(esp, eax);

loc_00219140: ;
    MEM8(esi + 0x57) = 0;
    PUSH32(esp, 0x00219149u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00219149: ;
    esp = esp + 0x18;
    MEM8(esi + 0xA7) = 0;

loc_00219153: ;
    ebp = MEM32(esp + 0x7C);
    PUSH32(esp, 0x1F0C80);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x0021916Cu); RECOMP_ABI_CALL(0x001E7C80u, sub_001E7C80); /* call 0x001E7C80 */

loc_0021916C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_002191B8; /* jl: less (signed <) */

loc_00219172: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002191B8; /* jg: greater (signed >) */

loc_00219179: ;
    ecx = MEM32(ebp + 0xC);
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00219188; /* jg: greater (signed >) */

loc_00219183: ;
    MEM32(ebp + 8) = eax;
    goto loc_00219192;

loc_00219188: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00219192u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00219192: ;
    esi = esi - edi;
    edx = MEM32(ebp + 0x10);
    ebp = edx + edi * 4;
    if ((esi == 0)) goto loc_002191B1; /* je: equal / zero */

loc_0021919C: ;
    eax = esi * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp + 4;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002191AEu); RECOMP_ICALL_SAFE(0x00342AA0u, _icall_esp); /* manual call 0x00342AA0 */
    }

loc_002191AE: ;
    esp = esp + 0xC;

loc_002191B1: ;
    edx = MEM32(esp + 0x14);
    MEM32(ebp) = edx;

loc_002191B8: ;
    ebx = ebx + MEM32(esp + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x4000 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00219036; /* jb: below (unsigned <) */

loc_002191C8: ;
    ecx = MEM32(esp + 0x1C);

loc_002191CC: ;
    edx = MEM32(esp + 0x10);
    ecx = ecx + 4;
    edx = edx + 0x4000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x10) = edx;
    if (CMP_B(_fa, _fb)) goto loc_00219020; /* jb: below (unsigned <) */

loc_002191ED: ;
    ecx = MEM32(esp + 0x74);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002192BE; /* je: equal / zero */

loc_002191FC: ;
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x38), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002192BE; /* je: equal / zero */

loc_00219206: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021921F; /* jle: less or equal (signed <=) */

loc_0021920F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021921D; /* jge: greater or equal (signed >=) */

loc_00219214: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_0021922D;

loc_0021921D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_0021921F: ;
    if (TEST_NZ(_fa, _fb)) goto loc_0021922B; /* jne: not equal / not zero */

loc_00219221: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021922D; /* jne: not equal / not zero */

loc_0021922B: ;
    ecx = 0; /* xor self */

loc_0021922D: ;
    edx = MEM32(0x46A678);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00219239u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00219239: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00219248u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00219248: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021925B; /* je: equal / zero */

loc_0021924E: ;
    ecx = 0x2A;
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    goto loc_0021925D;

loc_0021925B: ;
    esi = 0; /* xor self */

loc_0021925D: ;
    eax = MEM32(esp + 0x74);
    PUSH32(esp, 0x4F);
    MEM32(esi) = eax;
    ecx = MEM32(esp + 0x3C);
    edx = esi + 8;
    PUSH32(esp, 0x3F64FC);
    PUSH32(esp, edx);
    MEM32(esi + 4) = ecx;
    PUSH32(esp, 0x0021927Au); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0021927A: ;
    PUSH32(esp, 0x4F);
    eax = esi + 0x58;
    PUSH32(esp, 0x3F6530);
    PUSH32(esp, eax);
    MEM8(esi + 0x57) = 0;
    PUSH32(esp, 0x0021928Eu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0021928E: ;
    esp = esp + 0x18;
    MEM8(esi + 0xA7) = 0;
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(esp + 0x7C);
    PUSH32(esp, 0x1F0C80);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002192B1u); RECOMP_ABI_CALL(0x001E7C80u, sub_001E7C80); /* call 0x001E7C80 */

loc_002192B1: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002192BEu); RECOMP_ABI_CALL(0x0020B3B0u, sub_0020B3B0); /* call 0x0020B3B0 */

loc_002192BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x68;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002192E0
 * Original: 0x002192E0 - 0x002192F0 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002192E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002192E0: ;
    g_seh_ebp = ebp; sub_00218C20(); return; /* tail jmp 0x00218C20 */

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
 * sub_002192F0
 * Original: 0x002192F0 - 0x002192F5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002192F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002192F0: ;
    g_seh_ebp = ebp; sub_00219000(); return; /* tail jmp 0x00219000 */

}

/**
 * sub_00219300
 * Original: 0x00219300 - 0x00219369 (105 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219300: ;
    eax = MEM32(0x5BC5D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021933E; /* jne: not equal / not zero */

loc_0021930C: ;
    eax = MEM32(0x46A66C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00219318u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00219318: ;
    ecx = eax;
    PUSH32(esp, 0x0021931Fu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_0021931F: ;
    edi = eax;
    eax = MEM32(0x5BC5D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00219332; /* je: equal / zero */

loc_0021932A: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00219332u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00219332: ;
    eax = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(0x5BC5D0) = eax;
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00219346; /* je: equal / zero */

loc_0021933E: ;
    MEM32(eax + -4) = MEM32(eax + -4) + 1;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x5BC5D0);

loc_00219346: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00219362; /* je: equal / zero */

loc_0021934D: ;
    ecx = ecx + 0xFFFFFFF8u;
    PUSH32(esp, 0x00219355u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00219355: ;
    ecx = MEM32(0x5BC5D0);
    MEM32(esi + 0x2C) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00219362: ;
    MEM32(esi + 0x2C) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00219370
 * Original: 0x00219370 - 0x002193B7 (71 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219370: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0021938F; /* je: equal / zero */

loc_0021937A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021938F; /* jne: not equal / not zero */

loc_0021938A: ;
    PUSH32(esp, 0x0021938Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021938F: ;
    eax = MEM32(esp + 0xC);
    edi = MEM32(eax);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x0021939Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021939F: ;
    ecx = MEM32(0x5BC258);
    esp = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002193AEu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002193AE: ;
    MEM32(esi) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002193C0
 * Original: 0x002193C0 - 0x002193E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002193C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002193C0: ;
    eax = MEM32(0x5BC28C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002193D4; /* je: equal / zero */

loc_002193C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002193E6; /* jne: not equal / not zero */

loc_002193D4: ;
    PUSH32(esp, 0x221CF0);
    PUSH32(esp, 0x002193DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002193DE: ;
    eax = MEM32(0x5BC28C);
    esp = esp + 4;

loc_002193E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002193F0
 * Original: 0x002193F0 - 0x00219417 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002193F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002193F0: ;
    eax = MEM32(0x5BC300);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00219404; /* je: equal / zero */

loc_002193F9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00219416; /* jne: not equal / not zero */

loc_00219404: ;
    PUSH32(esp, 0x222570);
    PUSH32(esp, 0x0021940Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021940E: ;
    eax = MEM32(0x5BC300);
    esp = esp + 4;

loc_00219416: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00219420
 * Original: 0x00219420 - 0x00219447 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219420: ;
    eax = MEM32(0x5BC3C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00219434; /* je: equal / zero */

loc_00219429: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00219446; /* jne: not equal / not zero */

loc_00219434: ;
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x0021943Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021943E: ;
    eax = MEM32(0x5BC3C8);
    esp = esp + 4;

loc_00219446: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00219450
 * Original: 0x00219450 - 0x00219477 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219450: ;
    eax = MEM32(0x5BC258);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00219464; /* je: equal / zero */

loc_00219459: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00219476; /* jne: not equal / not zero */

loc_00219464: ;
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x0021946Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021946E: ;
    eax = MEM32(0x5BC258);
    esp = esp + 4;

loc_00219476: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00219480
 * Original: 0x00219480 - 0x002194C2 (66 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219480: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = MEM32(esi + 8);
    eax = edi + 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00219490u); RECOMP_ABI_CALL(0x002180E0u, sub_002180E0); /* call 0x002180E0 */

loc_00219490: ;
    ecx = MEM32(esi + 0x10);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = ecx + edi * 4;
    if (TEST_Z(_fa, _fb)) goto loc_002194A1; /* je: equal / zero */

loc_0021949E: ;
    MEM32(esi + -4) = MEM32(esi + -4) + 1;
    _fa = (uint32_t)(MEM32(esi + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002194A1: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002194AF; /* je: equal / zero */

loc_002194A7: ;
    ecx = eax + -8;
    PUSH32(esp, 0x002194AFu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_002194AF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_002194BD; /* je: equal / zero */

loc_002194B5: ;
    ecx = esi + -8;
    PUSH32(esp, 0x002194BDu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_002194BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002194D0
 * Original: 0x002194D0 - 0x002194F7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002194D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002194D0: ;
    eax = MEM32(0x5BC428);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002194E4; /* je: equal / zero */

loc_002194D9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002194F6; /* jne: not equal / not zero */

loc_002194E4: ;
    PUSH32(esp, 0x2293E0);
    PUSH32(esp, 0x002194EEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002194EE: ;
    eax = MEM32(0x5BC428);
    esp = esp + 4;

loc_002194F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00219500
 * Original: 0x00219500 - 0x00219527 (39 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219500: ;
    eax = MEM32(0x5BC410);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00219514; /* je: equal / zero */

loc_00219509: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00219526; /* jne: not equal / not zero */

loc_00219514: ;
    PUSH32(esp, 0x229260);
    PUSH32(esp, 0x0021951Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021951E: ;
    eax = MEM32(0x5BC410);
    esp = esp + 4;

loc_00219526: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00219530
 * Original: 0x00219530 - 0x00219557 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219530: ;
    eax = MEM32(0x5BC260);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00219544; /* je: equal / zero */

loc_00219539: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00219556; /* jne: not equal / not zero */

loc_00219544: ;
    PUSH32(esp, 0x223F30);
    PUSH32(esp, 0x0021954Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021954E: ;
    eax = MEM32(0x5BC260);
    esp = esp + 4;

loc_00219556: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00219560
 * Original: 0x00219560 - 0x00219587 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219560: ;
    eax = MEM32(0x5BC26C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00219574; /* je: equal / zero */

loc_00219569: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00219586; /* jne: not equal / not zero */

loc_00219574: ;
    PUSH32(esp, 0x226510);
    PUSH32(esp, 0x0021957Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021957E: ;
    eax = MEM32(0x5BC26C);
    esp = esp + 4;

loc_00219586: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00219590
 * Original: 0x00219590 - 0x002195B7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219590: ;
    eax = MEM32(0x5BC214);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002195A4; /* je: equal / zero */

loc_00219599: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002195B6; /* jne: not equal / not zero */

loc_002195A4: ;
    PUSH32(esp, 0x21EF70);
    PUSH32(esp, 0x002195AEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002195AE: ;
    eax = MEM32(0x5BC214);
    esp = esp + 4;

loc_002195B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002195C0
 * Original: 0x002195C0 - 0x002195E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002195C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002195C0: ;
    eax = MEM32(0x5BC318);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002195D4; /* je: equal / zero */

loc_002195C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002195E6; /* jne: not equal / not zero */

loc_002195D4: ;
    PUSH32(esp, 0x2371D0);
    PUSH32(esp, 0x002195DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002195DE: ;
    eax = MEM32(0x5BC318);
    esp = esp + 4;

loc_002195E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002195F0
 * Original: 0x002195F0 - 0x00219617 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002195F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002195F0: ;
    eax = MEM32(0x5BC444);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00219604; /* je: equal / zero */

loc_002195F9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00219616; /* jne: not equal / not zero */

loc_00219604: ;
    PUSH32(esp, 0x2266B0);
    PUSH32(esp, 0x0021960Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021960E: ;
    eax = MEM32(0x5BC444);
    esp = esp + 4;

loc_00219616: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00219620
 * Original: 0x00219620 - 0x00219647 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219620: ;
    eax = MEM32(0x5BC4D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00219634; /* je: equal / zero */

loc_00219629: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00219646; /* jne: not equal / not zero */

loc_00219634: ;
    PUSH32(esp, 0x229760);
    PUSH32(esp, 0x0021963Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021963E: ;
    eax = MEM32(0x5BC4D8);
    esp = esp + 4;

loc_00219646: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00219650
 * Original: 0x00219650 - 0x00219656 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219650(void)
{

loc_00219650: ;
    eax = MEM32(0x5BC144);
    esp += 4; return; /* ret */

}

/**
 * sub_00219660
 * Original: 0x00219660 - 0x00219666 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219660(void)
{

loc_00219660: ;
    eax = MEM32(0x5BC148);
    esp += 4; return; /* ret */

}

/**
 * sub_00219670
 * Original: 0x00219670 - 0x002196AB (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219670: ;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021967Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021967D: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F6318;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_002196A4; /* je: equal / zero */

loc_0021969C: ;
    ecx = eax + -8;
    PUSH32(esp, 0x002196A4u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_002196A4: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_002196B0
 * Original: 0x002196B0 - 0x002196B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002196B0(void)
{

loc_002196B0: ;
    eax = MEM32(0x5BC154);
    esp += 4; return; /* ret */

}

/**
 * sub_002196C0
 * Original: 0x002196C0 - 0x002196C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002196C0(void)
{

loc_002196C0: ;
    eax = MEM32(0x5BC158);
    esp += 4; return; /* ret */

}

/**
 * sub_002196D0
 * Original: 0x002196D0 - 0x0021970B (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002196D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002196D0: ;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x002196DDu); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_002196DD: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F6228;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_00219704; /* je: equal / zero */

loc_002196FC: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00219704u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00219704: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_00219710
 * Original: 0x00219710 - 0x00219716 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219710(void)
{

loc_00219710: ;
    eax = MEM32(0x5BC164);
    esp += 4; return; /* ret */

}

/**
 * sub_00219720
 * Original: 0x00219720 - 0x00219726 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219720(void)
{

loc_00219720: ;
    eax = MEM32(0x5BC168);
    esp += 4; return; /* ret */

}

/**
 * sub_00219730
 * Original: 0x00219730 - 0x0021976B (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219730: ;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021973Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021973D: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F6138;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_00219764; /* je: equal / zero */

loc_0021975C: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00219764u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00219764: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_00219770
 * Original: 0x00219770 - 0x00219776 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219770(void)
{

loc_00219770: ;
    eax = MEM32(0x5BC174);
    esp += 4; return; /* ret */

}

/**
 * sub_00219780
 * Original: 0x00219780 - 0x00219786 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219780(void)
{

loc_00219780: ;
    eax = MEM32(0x5BC178);
    esp += 4; return; /* ret */

}

/**
 * sub_00219790
 * Original: 0x00219790 - 0x00219796 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219790(void)
{

loc_00219790: ;
    eax = MEM32(0x5BC17C);
    esp += 4; return; /* ret */

}

/**
 * sub_002197A0
 * Original: 0x002197A0 - 0x002197A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002197A0(void)
{

loc_002197A0: ;
    eax = MEM32(0x5BC180);
    esp += 4; return; /* ret */

}

/**
 * sub_002197B0
 * Original: 0x002197B0 - 0x002197B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002197B0(void)
{

loc_002197B0: ;
    eax = MEM32(0x5BC184);
    esp += 4; return; /* ret */

}

/**
 * sub_002197C0
 * Original: 0x002197C0 - 0x002197C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002197C0(void)
{

loc_002197C0: ;
    eax = MEM32(0x5BC188);
    esp += 4; return; /* ret */

}

/**
 * sub_002197D0
 * Original: 0x002197D0 - 0x002197F4 (36 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002197D0(void)
{

loc_002197D0: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F5128;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00219800
 * Original: 0x00219800 - 0x00219806 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219800(void)
{

loc_00219800: ;
    eax = MEM32(0x5BC1B8);
    esp += 4; return; /* ret */

}

/**
 * sub_00219810
 * Original: 0x00219810 - 0x00219816 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219810(void)
{

loc_00219810: ;
    eax = MEM32(0x5BC1BC);
    esp += 4; return; /* ret */

}

/**
 * sub_00219820
 * Original: 0x00219820 - 0x00219826 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219820(void)
{

loc_00219820: ;
    eax = MEM32(0x5BC1DC);
    esp += 4; return; /* ret */

}

/**
 * sub_00219830
 * Original: 0x00219830 - 0x00219836 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219830(void)
{

loc_00219830: ;
    eax = MEM32(0x5BC1E0);
    esp += 4; return; /* ret */

}

/**
 * sub_00219840
 * Original: 0x00219840 - 0x0021987B (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219840: ;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021984Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021984D: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F5F58;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_00219874; /* je: equal / zero */

loc_0021986C: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00219874u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00219874: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_00219880
 * Original: 0x00219880 - 0x002198B4 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219880(void)
{

loc_00219880: ;
    PUSH32(esp, 0x46A734);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x219840);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x3F6CD4);
    PUSH32(esp, 0x1A58E0);
    PUSH32(esp, 0x1A4350);
    PUSH32(esp, 0x221CF0);
    PUSH32(esp, 0x5BC1E8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002198B0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002198B0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002198C0
 * Original: 0x002198C0 - 0x002198C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002198C0(void)
{

loc_002198C0: ;
    eax = MEM32(0x5BC1F0);
    esp += 4; return; /* ret */

}

/**
 * sub_002198D0
 * Original: 0x002198D0 - 0x002198D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002198D0(void)
{

loc_002198D0: ;
    eax = MEM32(0x5BC1F4);
    esp += 4; return; /* ret */

}

/**
 * sub_002198E0
 * Original: 0x002198E0 - 0x002198E6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002198E0(void)
{

loc_002198E0: ;
    eax = MEM32(0x5BC200);
    esp += 4; return; /* ret */

}

/**
 * sub_002198F0
 * Original: 0x002198F0 - 0x00219951 (97 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002198F0(void)
{

loc_002198F0: ;
    esp = esp - 0x4C;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = eax;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    PUSH32(esp, esi);
    MEM32(esp + 8) = 1;
    MEM32(esp + 4) = 0x3F5250;
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0021994Au); RECOMP_ABI_CALL(0x002135B0u, sub_002135B0); /* call 0x002135B0 */

loc_0021994A: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_00219960
 * Original: 0x00219960 - 0x002199A5 (69 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219960(void)
{

loc_00219960: ;
    esp = esp - 0x18;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    PUSH32(esp, esi);
    MEM32(esp + 8) = 1;
    MEM32(esp + 4) = 0x3F52A8;
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0021999Eu); RECOMP_ABI_CALL(0x00213960u, sub_00213960); /* call 0x00213960 */

loc_0021999E: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_002199B0
 * Original: 0x002199B0 - 0x002199B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002199B0(void)
{

loc_002199B0: ;
    eax = MEM32(0x5BC23C);
    esp += 4; return; /* ret */

}

/**
 * sub_002199C0
 * Original: 0x002199C0 - 0x002199C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002199C0(void)
{

loc_002199C0: ;
    eax = MEM32(0x5BC240);
    esp += 4; return; /* ret */

}

/**
 * sub_002199D0
 * Original: 0x002199D0 - 0x002199D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002199D0(void)
{

loc_002199D0: ;
    eax = MEM32(0x5BC25C);
    esp += 4; return; /* ret */

}

/**
 * sub_002199E0
 * Original: 0x002199E0 - 0x00219A0E (46 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002199E0(void)
{

loc_002199E0: ;
    esp = esp - 0x18;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F5300;
    eax = MEM32(esp + ecx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00219A10
 * Original: 0x00219A10 - 0x00219A53 (67 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219A10: ;
    esp = esp - 0x64;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00219A1Du); RECOMP_ABI_CALL(0x00216EE0u, sub_00216EE0); /* call 0x00216EE0 */

loc_00219A1D: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_00219A3C; /* je: equal / zero */

loc_00219A34: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00219A3Cu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00219A3C: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00219A4C; /* je: equal / zero */

loc_00219A44: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00219A4Cu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00219A4C: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_00219A60
 * Original: 0x00219A60 - 0x00219A8C (44 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219A60(void)
{

loc_00219A60: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 0;
    MEM32(esp) = 0x3F5360;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00219A90
 * Original: 0x00219A90 - 0x00219AC2 (50 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219A90(void)
{

loc_00219A90: ;
    esp = esp - 0x14;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F53C0;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00219AD0
 * Original: 0x00219AD0 - 0x00219B39 (105 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219AD0(void)
{

loc_00219AD0: ;
    esp = esp - 0x54;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    PUSH32(esp, esi);
    MEM32(esp + 8) = 1;
    MEM32(esp + 4) = 0x3F5418;
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x00219B32u); RECOMP_ABI_CALL(0x00213D50u, sub_00213D50); /* call 0x00213D50 */

loc_00219B32: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

}

/**
 * sub_00219B40
 * Original: 0x00219B40 - 0x00219B6E (46 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219B40(void)
{

loc_00219B40: ;
    esp = esp - 0x18;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F5480;
    eax = MEM32(esp + ecx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00219B70
 * Original: 0x00219B70 - 0x00219B76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219B70(void)
{

loc_00219B70: ;
    eax = MEM32(0x5BC2B8);
    esp += 4; return; /* ret */

}

/**
 * sub_00219B80
 * Original: 0x00219B80 - 0x00219BAC (44 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219B80(void)
{

loc_00219B80: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 0;
    MEM32(esp) = 0x3F54E8;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00219BB0
 * Original: 0x00219BB0 - 0x00219BDC (44 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219BB0(void)
{

loc_00219BB0: ;
    esp = esp - 0x38;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 0;
    MEM32(esp) = 0x3F5540;
    eax = MEM32(esp + ecx);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_00219BE0
 * Original: 0x00219BE0 - 0x00219C16 (54 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219BE0(void)
{

loc_00219BE0: ;
    esp = esp - 0x44;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x40) = eax;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F55E8;
    eax = MEM32(esp + ecx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_00219C20
 * Original: 0x00219C20 - 0x00219C33 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219C20(void)
{

loc_00219C20: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, 0x213F40);
    PUSH32(esp, 0x00219C32u); RECOMP_ABI_CALL(0x001F3680u, sub_001F3680); /* call 0x001F3680 */

loc_00219C32: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00219C40
 * Original: 0x00219C40 - 0x00219C46 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219C40(void)
{

loc_00219C40: ;
    eax = MEM32(0x5BC2DC);
    esp += 4; return; /* ret */

}

/**
 * sub_00219C50
 * Original: 0x00219C50 - 0x00219C56 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219C50(void)
{

loc_00219C50: ;
    eax = MEM32(0x5BC2E0);
    esp += 4; return; /* ret */

}

/**
 * sub_00219C60
 * Original: 0x00219C60 - 0x00219C66 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219C60(void)
{

loc_00219C60: ;
    eax = MEM32(0x5BC2E4);
    esp += 4; return; /* ret */

}

/**
 * sub_00219C70
 * Original: 0x00219C70 - 0x00219C76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219C70(void)
{

loc_00219C70: ;
    eax = MEM32(0x5BC2E8);
    esp += 4; return; /* ret */

}

/**
 * sub_00219C80
 * Original: 0x00219C80 - 0x00219CFA (122 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219C80(void)
{

loc_00219C80: ;
    eax = ecx;
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFF000001u;
    ecx = ecx | 1;
    MEM32(eax + 4) = ecx;
    ecx = 0; /* xor self */
    MEM8(eax + 7) = LO8(ecx);
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax) = 0x3F7280;
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x68) = ecx;
    MEM32(eax + 0xBC) = ecx;
    MEM32(eax + 0xC0) = ecx;
    MEM32(eax + 0xC4) = ecx;
    MEM32(eax + 0xD0) = ecx;
    MEM32(eax + 0xD4) = ecx;
    MEM32(eax + 0xEC) = ecx;
    MEM32(eax + 0xF8) = ecx;
    MEM32(eax + 0x11C) = ecx;
    MEM32(eax + 0x120) = ecx;
    MEM32(eax + 0x124) = ecx;
    MEM32(eax + 0x134) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00219D00
 * Original: 0x00219D00 - 0x00219D06 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219D00(void)
{

loc_00219D00: ;
    eax = MEM32(0x5BC31C);
    esp += 4; return; /* ret */

}

/**
 * sub_00219D10
 * Original: 0x00219D10 - 0x00219E9B (395 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219D10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00219D10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x134);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00219D32; /* je: equal / zero */

loc_00219D1D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00219D32; /* jne: not equal / not zero */

loc_00219D2D: ;
    PUSH32(esp, 0x00219D32u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00219D32: ;
    ecx = MEM32(esi + 0x124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00219D51; /* je: equal / zero */

loc_00219D3C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00219D51; /* jne: not equal / not zero */

loc_00219D4C: ;
    PUSH32(esp, 0x00219D51u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00219D51: ;
    ecx = MEM32(esi + 0x120);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00219D70; /* je: equal / zero */

loc_00219D5B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00219D70; /* jne: not equal / not zero */

loc_00219D6B: ;
    PUSH32(esp, 0x00219D70u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00219D70: ;
    ecx = MEM32(esi + 0x11C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00219D8F; /* je: equal / zero */

loc_00219D7A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00219D8F; /* jne: not equal / not zero */

loc_00219D8A: ;
    PUSH32(esp, 0x00219D8Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00219D8F: ;
    ecx = MEM32(esi + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00219DAE; /* je: equal / zero */

loc_00219D99: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00219DAE; /* jne: not equal / not zero */

loc_00219DA9: ;
    PUSH32(esp, 0x00219DAEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00219DAE: ;
    eax = MEM32(esi + 0xEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00219DC0; /* je: equal / zero */

loc_00219DB8: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00219DC0u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00219DC0: ;
    ecx = MEM32(esi + 0xD4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00219DDF; /* je: equal / zero */

loc_00219DCA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00219DDF; /* jne: not equal / not zero */

loc_00219DDA: ;
    PUSH32(esp, 0x00219DDFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00219DDF: ;
    ecx = MEM32(esi + 0xD0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00219DFE; /* je: equal / zero */

loc_00219DE9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00219DFE; /* jne: not equal / not zero */

loc_00219DF9: ;
    PUSH32(esp, 0x00219DFEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00219DFE: ;
    ecx = MEM32(esi + 0xC4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00219E1D; /* je: equal / zero */

loc_00219E08: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00219E1D; /* jne: not equal / not zero */

loc_00219E18: ;
    PUSH32(esp, 0x00219E1Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00219E1D: ;
    ecx = MEM32(esi + 0xC0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00219E3C; /* je: equal / zero */

loc_00219E27: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00219E3C; /* jne: not equal / not zero */

loc_00219E37: ;
    PUSH32(esp, 0x00219E3Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00219E3C: ;
    ecx = MEM32(esi + 0xBC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00219E5B; /* je: equal / zero */

loc_00219E46: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00219E5B; /* jne: not equal / not zero */

loc_00219E56: ;
    PUSH32(esp, 0x00219E5Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00219E5B: ;
    ecx = MEM32(esi + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00219E77; /* je: equal / zero */

loc_00219E62: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00219E77; /* jne: not equal / not zero */

loc_00219E72: ;
    PUSH32(esp, 0x00219E77u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00219E77: ;
    ecx = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00219E93; /* je: equal / zero */

loc_00219E7E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00219E93; /* jne: not equal / not zero */

loc_00219E8E: ;
    PUSH32(esp, 0x00219E93u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00219E93: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002143A0(); return; /* tail jmp 0x002143A0 */

}

/**
 * sub_00219EA0
 * Original: 0x00219EA0 - 0x00219ECC (44 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219EA0(void)
{

loc_00219EA0: ;
    esp = esp - 0xC;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F56E8;
    MEM32(esp + 8) = 0;
    eax = MEM32(esp + ecx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00219ED0
 * Original: 0x00219ED0 - 0x00219ED6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219ED0(void)
{

loc_00219ED0: ;
    eax = MEM32(0x5BC324);
    esp += 4; return; /* ret */

}

/**
 * sub_00219EE0
 * Original: 0x00219EE0 - 0x00219EE6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219EE0(void)
{

loc_00219EE0: ;
    eax = MEM32(0x5BC328);
    esp += 4; return; /* ret */

}

/**
 * sub_00219EF0
 * Original: 0x00219EF0 - 0x00219EF6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219EF0(void)
{

loc_00219EF0: ;
    eax = MEM32(0x5BC32C);
    esp += 4; return; /* ret */

}

/**
 * sub_00219F00
 * Original: 0x00219F00 - 0x00219F06 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219F00(void)
{

loc_00219F00: ;
    eax = MEM32(0x5BC330);
    esp += 4; return; /* ret */

}

/**
 * sub_00219F10
 * Original: 0x00219F10 - 0x00219F42 (50 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219F10(void)
{

loc_00219F10: ;
    esp = esp - 0x28;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F5750;
    eax = MEM32(esp + ecx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_00219F50
 * Original: 0x00219F50 - 0x00219F82 (50 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219F50(void)
{

loc_00219F50: ;
    esp = esp - 0x34;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F57F8;
    eax = MEM32(esp + ecx);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_00219F90
 * Original: 0x00219F90 - 0x00219FC6 (54 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219F90(void)
{

loc_00219F90: ;
    esp = esp - 0x2C;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x28) = eax;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3E8F20;
    eax = MEM32(esp + ecx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00219FD0
 * Original: 0x00219FD0 - 0x00219FD6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219FD0(void)
{

loc_00219FD0: ;
    eax = MEM32(0x5BC394);
    esp += 4; return; /* ret */

}

/**
 * sub_00219FE0
 * Original: 0x00219FE0 - 0x00219FE6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219FE0(void)
{

loc_00219FE0: ;
    eax = MEM32(0x5BC398);
    esp += 4; return; /* ret */

}

/**
 * sub_00219FF0
 * Original: 0x00219FF0 - 0x00219FF6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219FF0(void)
{

loc_00219FF0: ;
    eax = MEM32(0x5BC39C);
    esp += 4; return; /* ret */

}

/**
 * sub_0021A000
 * Original: 0x0021A000 - 0x0021A006 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A000(void)
{

loc_0021A000: ;
    eax = MEM32(0x5BC3A0);
    esp += 4; return; /* ret */

}

/**
 * sub_0021A010
 * Original: 0x0021A010 - 0x0021A03E (46 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A010(void)
{

loc_0021A010: ;
    esp = esp - 0x14;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F58A0;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0021A040
 * Original: 0x0021A040 - 0x0021A046 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A040(void)
{

loc_0021A040: ;
    eax = MEM32(0x5BC4BC);
    esp += 4; return; /* ret */

}

/**
 * sub_0021A050
 * Original: 0x0021A050 - 0x0021A056 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A050(void)
{

loc_0021A050: ;
    eax = MEM32(0x5BC4C0);
    esp += 4; return; /* ret */

}

/**
 * sub_0021A060
 * Original: 0x0021A060 - 0x0021A08E (46 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A060(void)
{

loc_0021A060: ;
    esp = esp - 0x10;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F58F8;
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0021A090
 * Original: 0x0021A090 - 0x0021A0BE (46 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A090(void)
{

loc_0021A090: ;
    esp = esp - 0x64;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F5978;
    eax = MEM32(esp + ecx);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_0021A0C0
 * Original: 0x0021A0C0 - 0x0021A103 (67 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A0C0(void)
{

loc_0021A0C0: ;
    esp = esp - 0x2C;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x5BC508);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x394);
    ecx = esp + 4;
    MEM32(esp + 8) = 1;
    MEM32(esp + 4) = 0x3F59F8;
    PUSH32(esp, 0x0021A0FAu); RECOMP_ABI_CALL(0x00254530u, sub_00254530); /* call 0x00254530 */

loc_0021A0FA: ;
    eax = MEM32(esp + esi + 4);
    POP32(esp, esi);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0021A110
 * Original: 0x0021A110 - 0x0021A116 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A110(void)
{

loc_0021A110: ;
    eax = MEM32(0x5BC4D4);
    esp += 4; return; /* ret */

}

/**
 * sub_0021A120
 * Original: 0x0021A120 - 0x0021A141 (33 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021A120: ;
    PUSH32(esp, 0x0021A125u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0021A125: ;
    eax = MEM32(0x5BC5D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021A136; /* je: equal / zero */

loc_0021A12E: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021A136u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021A136: ;
    MEM32(0x5BC5D0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0021A150
 * Original: 0x0021A150 - 0x0021A156 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A150(void)
{

loc_0021A150: ;
    eax = MEM32(0x5BC4E0);
    esp += 4; return; /* ret */

}

/**
 * sub_0021A160
 * Original: 0x0021A160 - 0x0021A164 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A160(void)
{

loc_0021A160: ;
    SET_LO8(eax, MEM8(ecx + 0x3C));
    esp += 4; return; /* ret */

}

/**
 * sub_0021A170
 * Original: 0x0021A170 - 0x0021A176 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A170(void)
{

loc_0021A170: ;
    eax = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_0021A180
 * Original: 0x0021A180 - 0x0021A186 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A180(void)
{

loc_0021A180: ;
    eax = MEM32(0x5BC4E4);
    esp += 4; return; /* ret */

}

/**
 * sub_0021A190
 * Original: 0x0021A190 - 0x0021A194 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A190(void)
{

loc_0021A190: ;
    SET_LO8(eax, MEM8(ecx + 0x14));
    esp += 4; return; /* ret */

}

/**
 * sub_0021A1A0
 * Original: 0x0021A1A0 - 0x0021A1D4 (52 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A1A0(void)
{

loc_0021A1A0: ;
    esp = esp - 0x220;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F5B18;
    eax = MEM32(esp + ecx);
    esp = esp + 0x220;
    esp += 4; return; /* ret */

}

/**
 * sub_0021A1E0
 * Original: 0x0021A1E0 - 0x0021A20C (44 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A1E0(void)
{

loc_0021A1E0: ;
    esp = esp - 0xC;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 0;
    MEM32(esp) = 0x3F5B70;
    eax = MEM32(esp + ecx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0021A210
 * Original: 0x0021A210 - 0x0021A216 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A210(void)
{

loc_0021A210: ;
    eax = MEM32(0x5BC468);
    esp += 4; return; /* ret */

}

/**
 * sub_0021A220
 * Original: 0x0021A220 - 0x0021A226 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A220(void)
{

loc_0021A220: ;
    eax = MEM32(0x5BC46C);
    esp += 4; return; /* ret */

}

/**
 * sub_0021A230
 * Original: 0x0021A230 - 0x0021A236 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A230(void)
{

loc_0021A230: ;
    eax = MEM32(0x5BC454);
    esp += 4; return; /* ret */

}

/**
 * sub_0021A240
 * Original: 0x0021A240 - 0x0021A260 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021A240: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0021A248u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0021A248: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021A257; /* je: equal / zero */

loc_0021A24F: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021A257u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021A257: ;
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021A260
 * Original: 0x0021A260 - 0x0021A2E0 (128 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021A260: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3EEA70);
    PUSH32(esp, esi);
    edi = ecx;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x0021A287u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_0021A287: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021A293; /* je: equal / zero */

loc_0021A28E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021A2D1; /* jne: not equal / not zero */

loc_0021A293: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021A2D1; /* je: equal / zero */

loc_0021A297: ;
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x34); PUSH32(esp, 0x0021A2A5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021A2A5: ;
    ecx = eax;
    PUSH32(esp, 0x0021A2ACu); RECOMP_ABI_CALL(0x00216780u, sub_00216780); /* call 0x00216780 */

loc_0021A2AC: ;
    ecx = MEM32(0x5BC5D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021A2D1; /* jne: not equal / not zero */

loc_0021A2B6: ;
    edx = MEM32(esp + 0x14);
    eax = esi;
    MEM32(ebx) = edx;
    edx = eax + 1;

loc_0021A2C1: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021A2C1; /* jne: not equal / not zero */

loc_0021A2C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax - edx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0021A2D1: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0021A2E0
 * Original: 0x0021A2E0 - 0x0021A2FD (29 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A2E0(void)
{

loc_0021A2E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x34); PUSH32(esp, 0x0021A2E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021A2E4: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    esi = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0021A2F7u); RECOMP_ABI_CALL(0x00216890u, sub_00216890); /* call 0x00216890 */

loc_0021A2F7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0021A300
 * Original: 0x0021A300 - 0x0021A306 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A300(void)
{

loc_0021A300: ;
    eax = MEM32(0x5BC378);
    esp += 4; return; /* ret */

}

/**
 * sub_0021A310
 * Original: 0x0021A310 - 0x0021A33E (46 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021A310: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0021A318u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0021A318: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021A327; /* je: equal / zero */

loc_0021A31F: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021A327u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021A327: ;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0x10) = 2;
    MEM32(esi + 0x14) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021A340
 * Original: 0x0021A340 - 0x0021A397 (87 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021A340: ;
    eax = MEM32(0x5BC684);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021A391; /* jne: not equal / not zero */

loc_0021A349: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0021A352u); RECOMP_ABI_CALL(0x001F45C0u, sub_001F45C0); /* call 0x001F45C0 */

loc_0021A352: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021A363; /* je: equal / zero */

loc_0021A359: ;
    MEM32(eax) = 0;
    esi = eax;
    goto loc_0021A365;

loc_0021A363: ;
    esi = 0; /* xor self */

loc_0021A365: ;
    eax = MEM32(0x46A278);
    PUSH32(esp, eax);
    MEM32(0x5BC684) = esi;
    PUSH32(esp, 0x0021A376u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0021A376: ;
    ecx = eax;
    PUSH32(esp, 0x0021A37Du); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_0021A37D: ;
    edi = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021A38D; /* je: equal / zero */

loc_0021A385: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021A38Du); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021A38D: ;
    MEM32(esi) = edi;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0021A391: ;
    eax = 0x5BC684;
    esp += 4; return; /* ret */

}

/**
 * sub_0021A3A0
 * Original: 0x0021A3A0 - 0x0021A3AA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A3A0(void)
{

loc_0021A3A0: ;
    PUSH32(esp, 0x0021A3A5u); RECOMP_ABI_CALL(0x0021A340u, sub_0021A340); /* call 0x0021A340 */

loc_0021A3A5: ;
    eax = MEM32(eax);
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0021A3B0
 * Original: 0x0021A3B0 - 0x0021A3B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A3B0(void)
{

loc_0021A3B0: ;
    eax = MEM32(0x5BC304);
    esp += 4; return; /* ret */

}

/**
 * sub_0021A3C0
 * Original: 0x0021A3C0 - 0x0021A3C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A3C0(void)
{

loc_0021A3C0: ;
    eax = MEM32(0x5BC308);
    esp += 4; return; /* ret */

}

/**
 * sub_0021A3D0
 * Original: 0x0021A3D0 - 0x0021A6AE (734 bytes, 266 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0021A3D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021A3D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x11C;
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(MEM8(ebx + 0x2D)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x2D), 1 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0021A60B; /* je: equal / zero */

loc_0021A3EB: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(ebx + 0x14) = eax;
    if (CMP_A(_fa, _fb)) goto loc_0021A42D; /* ja: above (unsigned >) */

loc_0021A3F6: ;
    edx = ZX8(MEM8(eax + 0x21A6B8));
    { uint32_t _jt = MEM32(edx * 4 + 0x21A6B0); /* switch: 2 entries, 2 targets */
    if (_jt == 0x0021A404u) goto loc_0021A404;
    if (_jt == 0x0021A40Au) goto loc_0021A40A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0021A404: ;
    MEM8(ebx + 0x2C) = 0;
    goto loc_0021A40E;

loc_0021A40A: ;
    MEM8(ebx + 0x2C) = 1;

loc_0021A40E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x21A6C4); /* switch: 9 entries, 3 targets */
    if (_jt == 0x0021A415u) goto loc_0021A415;
    if (_jt == 0x0021A41Fu) goto loc_0021A41F;
    if (_jt == 0x0021A425u) goto loc_0021A425;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0021A415: ;
    MEM8(ebx + 0x2E) = 1;
    MEM8(ebx + 0x2F) = 0;
    goto loc_0021A42D;

loc_0021A41F: ;
    MEM8(ebx + 0x2E) = 1;
    goto loc_0021A429;

loc_0021A425: ;
    MEM8(ebx + 0x2E) = 0;

loc_0021A429: ;
    MEM8(ebx + 0x2F) = 1;

loc_0021A42D: ;
    eax = 0; /* xor self */
    MEM8(esp + 0x20) = 0;
    ecx = 0x40;
    edi = esp + 0x21;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    esi = 0; /* xor self */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebx + 0x30) = esi;
    MEM32(ebx + 0x38) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0021A458; /* jne: not equal / not zero */

loc_0021A451: ;
    MEM8(esp + 0x13) = 0;
    goto loc_0021A47D;

loc_0021A458: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021A478; /* je: equal / zero */

loc_0021A45F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021A478; /* je: equal / zero */

loc_0021A464: ;
    PUSH32(esp, 0x3A);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021A46Cu); RECOMP_ABI_CALL(0x003426D0u, sub_003426D0); /* call 0x003426D0 */

loc_0021A46C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x13) = (TEST_NZ(_fa, _fb)) ? 1 : 0; /* setne */
    goto loc_0021A47D;

loc_0021A478: ;
    MEM8(esp + 0x13) = 1;

loc_0021A47D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021A482u); RECOMP_ABI_CALL(0x0021A340u, sub_0021A340); /* call 0x0021A340 */

loc_0021A482: ;
    eax = MEM32(eax);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    ecx = MEM32(0x46A728);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0021A5AE; /* je: equal / zero */

loc_0021A49C: ;
    /* nop */

loc_0021A4A0: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021A4B3; /* je: equal / zero */

loc_0021A4A8: ;
    MEM8(esp + 0x20) = 0;
    MEM32(esp + 0x14) = esi;
    goto loc_0021A4D2;

loc_0021A4B3: ;
    PUSH32(esp, 0x104);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021A4C7u); RECOMP_ABI_CALL(0x001E85E0u, sub_001E85E0); /* call 0x001E85E0 */

loc_0021A4C7: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021A594; /* je: equal / zero */

loc_0021A4D2: ;
    eax = MEM32(ebx + 0xC);
    esi = eax;

loc_0021A4D7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021A4D7; /* jne: not equal / not zero */

loc_0021A4DE: ;
    edi = esp + 0x20;
    eax = eax - esi;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0021A4E5: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021A4E5; /* jne: not equal / not zero */

loc_0021A4ED: ;
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
    edi = MEM32(ebx + 0x40);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021A508u); RECOMP_ABI_CALL(0x001F4F20u, sub_001F4F20); /* call 0x001F4F20 */

loc_0021A508: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021A514; /* je: equal / zero */

loc_0021A511: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0021A514: ;
    ecx = MEM32(ebx + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021A530; /* je: equal / zero */

loc_0021A51B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021A530; /* jne: not equal / not zero */

loc_0021A52B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021A530u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021A530: ;
    eax = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebx + 0x40) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0021A5A0; /* je: equal / zero */

loc_0021A539: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021A557; /* je: equal / zero */

loc_0021A53D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021A54C; /* je: equal / zero */

loc_0021A541: ;
    eax = MEM32(ebx + 0x18);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0021A54Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021A54C: ;
    ecx = MEM32(ebx + 0x40);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0021A554u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021A554: ;
    MEM32(ebx + 0x18) = eax;

loc_0021A557: ;
    eax = MEM32(ebx + 0x14);
    esi = MEM32(ebx + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    edi = esp;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021A56Bu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0021A56B: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021A572u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_0021A572: ;
    MEM32(edi) = eax;
    eax = MEM32(ebx + 0x18);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0021A584u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021A584: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BC5D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x5BC5D8) (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0021A5A0; /* je: equal / zero */

loc_0021A592: ;
    esi = 0; /* xor self */

loc_0021A594: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021A4A0; /* jne: not equal / not zero */

loc_0021A59E: ;
    goto loc_0021A5A2;

loc_0021A5A0: ;
    esi = 0; /* xor self */

loc_0021A5A2: ;
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x46A728)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x46A728) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021A61F; /* jne: not equal / not zero */

loc_0021A5AE: ;
    SET_LO8(eax, MEM8(0x5BC688));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021A5DC; /* jne: not equal / not zero */

loc_0021A5B7: ;
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F7D7C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021A5C5u); RECOMP_ABI_CALL(0x001F8370u, sub_001F8370); /* call 0x001F8370 */

loc_0021A5C5: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021A5D0; /* jne: not equal / not zero */

loc_0021A5CD: ;
    /* int3: debug-trap slide byte, stepped over */
    goto loc_0021A5DC;

loc_0021A5D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021A5DC; /* jne: not equal / not zero */

loc_0021A5D5: ;
    MEM8(0x5BC688) = 1;

loc_0021A5DC: ;
    ecx = MEM32(ebx + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021A60B; /* je: equal / zero */

loc_0021A5E3: ;
    edx = MEM32(ebx + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0021A5ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021A5EC: ;
    ecx = MEM32(ebx + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021A608; /* je: equal / zero */

loc_0021A5F3: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021A608; /* jne: not equal / not zero */

loc_0021A603: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021A608u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021A608: ;
    MEM32(ebx + 0x40) = esi;

loc_0021A60B: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x46A728);
    MEM32(eax) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0021A61F: ;
    ecx = MEM32(ebx + 0x40);
    eax = MEM32(ebx + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0021A62Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021A62E: ;
    ecx = MEM32(ebx + 0x40);
    eax = MEM32(ebx + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0021A63Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021A63A: ;
    ecx = MEM32(ebx + 0x40);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(ebx + 0x34) = eax;
    eax = MEM32(ebx + 0x18);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0021A64Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021A64B: ;
    SET_LO8(eax, MEM8(ebx + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021A685; /* jne: not equal / not zero */

loc_0021A652: ;
    ecx = MEM32(ebx + 0x34);
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021A65Du); RECOMP_ABI_CALL(0x00203130u, sub_00203130); /* call 0x00203130 */

loc_0021A65D: ;
    eax = MEM32(ebx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021A685; /* jle: less or equal (signed <=) */

loc_0021A664: ;
    ecx = MEM32(ebx + 0x40);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x3C);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0021A675u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021A675: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x34) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021A685; /* je: equal / zero */

loc_0021A67A: ;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(ebx + 0x34) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021A685u); RECOMP_ABI_CALL(0x00203130u, sub_00203130); /* call 0x00203130 */

loc_0021A685: ;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x14), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021A693; /* jne: not equal / not zero */

loc_0021A68B: ;
    ecx = MEM32(ebx + 0x34);
    MEM32(ebx + 0x38) = ecx;
    goto loc_0021A696;

loc_0021A693: ;
    MEM32(ebx + 0x38) = esi;

loc_0021A696: ;
    eax = MEM32(ebp + 8);
    MEM8(ebx + 0x2D) = 1;
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0021A6AE
 * Original: 0x0021A6AE - 0x0021A896 (488 bytes, 192 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A6AE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021A6AE: ;
    edi = edi;
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0xA4)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0xA4);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _cf = 0; /* logical op clears CF */
    SET_HI8(eax, HI8(eax) | MEM8(ecx));
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + eax;
    /* nop */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x150021A4;
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x1F0021A4) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x150021A4;
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x1F0021A4) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xCC0021A4u;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x5C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ebx = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0021A773; /* je: equal / zero */

loc_0021A700: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0021A709u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021A709: ;
    edi = MEM32(eax + 0xC);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0021A754; /* jg: greater (signed >) */

loc_0021A711: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0021A71Cu); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_0021A71C: ;
    ecx = MEM32(ebp + 0x10);
    ecx = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0021A73B; /* je: equal / zero */

loc_0021A726: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021A73B; /* jne: not equal / not zero */

loc_0021A736: ;
    PUSH32(esp, 0x0021A73Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021A73B: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0021A754; /* je: equal / zero */

loc_0021A742: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_0021A754; /* jl: less (signed <) */

loc_0021A746: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0021A754; /* jge: greater or equal (signed >=) */

loc_0021A74A: ;
    edx = MEM32(ebp + 0x10);
    MEM32(edx + edi * 4) = 0;

loc_0021A754: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + edi * 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021A761u); RECOMP_ABI_CALL(0x001F1A80u, sub_001F1A80); /* call 0x001F1A80 */

loc_0021A761: ;
    esi = eax;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x10) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0021A77B; /* je: equal / zero */

loc_0021A76E: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0021A7A4;

loc_0021A773: ;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0021A77B: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + 0x11C);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x0021A797u); RECOMP_ABI_CALL(0x00219370u, sub_00219370); /* call 0x00219370 */

loc_0021A797: ;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0021A7A4u); RECOMP_ABI_CALL(0x0020B340u, sub_0020B340); /* call 0x0020B340 */

loc_0021A7A4: ;
    eax = MEM32(esi + 8);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x18) = eax;
    MEM32(ebx + 0xC) = 0xFFFFFFFFu;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021A7F6; /* jle: less or equal (signed <=) */

loc_0021A7B8: ;
    ecx = MEM32(esi + 0x10);
    goto loc_0021A7C0;

    /* nop */

loc_0021A7C0: ;
    eax = MEM32(ecx);
    edx = MEM32(ebx + 0x28);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0021A7EA; /* jne: not equal / not zero */

loc_0021A7CA: ;
    edx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + 0x1C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0021A7EA; /* jne: not equal / not zero */

loc_0021A7D2: ;
    SET_LO8(edx, MEM8(eax + 0x34));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebx + 0x34)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ebx + 0x34) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0021A7EA; /* jne: not equal / not zero */

loc_0021A7DA: ;
    edx = MEM32(eax + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + 0x30) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0021A7EA; /* jne: not equal / not zero */

loc_0021A7E2: ;
    eax = MEM32(eax + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x2C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0021A80F; /* je: equal / zero */

loc_0021A7EA: ;
    eax = MEM32(esp + 0x18);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0021A7C0; /* jl: less (signed <) */

loc_0021A7F6: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0021A84C; /* jge: greater or equal (signed >=) */

loc_0021A801: ;
    edx = MEM32(esi + 0x10);
    ecx = edi + 1;
    MEM32(esi + 8) = ecx;
    MEM32(edx + edi * 4) = ebx;
    goto loc_0021A85F;

loc_0021A80F: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 4);
    edi = MEM32(eax + edi * 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = 0x7FFFFF;
    eax = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021A82E; /* jne: not equal / not zero */

loc_0021A827: ;
    ecx = esi;
    PUSH32(esp, 0x0021A82Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021A82E: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021A842; /* jne: not equal / not zero */

loc_0021A83B: ;
    ecx = ebp;
    PUSH32(esp, 0x0021A842u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021A842: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0021A84C: ;
    PUSH32(esp, 4);
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0021A859u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0021A859: ;
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + edi * 4) = ebx;

loc_0021A85F: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = 0x7FFFFF;
    eax = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021A878; /* jne: not equal / not zero */

loc_0021A871: ;
    ecx = esi;
    PUSH32(esp, 0x0021A878u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021A878: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021A88C; /* jne: not equal / not zero */

loc_0021A885: ;
    ecx = ebp;
    PUSH32(esp, 0x0021A88Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021A88C: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021A6F0
 * Original: 0x0021A6F0 - 0x0021A896 (422 bytes, 164 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A6F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021A6F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x5C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    ebx = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0021A773; /* je: equal / zero */

loc_0021A700: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0021A709u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021A709: ;
    edi = MEM32(eax + 0xC);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0021A754; /* jg: greater (signed >) */

loc_0021A711: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0021A71Cu); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_0021A71C: ;
    ecx = MEM32(ebp + 0x10);
    ecx = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021A73B; /* je: equal / zero */

loc_0021A726: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021A73B; /* jne: not equal / not zero */

loc_0021A736: ;
    PUSH32(esp, 0x0021A73Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021A73B: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021A754; /* je: equal / zero */

loc_0021A742: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0021A754; /* jl: less (signed <) */

loc_0021A746: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021A754; /* jge: greater or equal (signed >=) */

loc_0021A74A: ;
    edx = MEM32(ebp + 0x10);
    MEM32(edx + edi * 4) = 0;

loc_0021A754: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + edi * 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021A761u); RECOMP_ABI_CALL(0x001F1A80u, sub_001F1A80); /* call 0x001F1A80 */

loc_0021A761: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0021A77B; /* je: equal / zero */

loc_0021A76E: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0021A7A4;

loc_0021A773: ;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0021A77B: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + 0x11C);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x0021A797u); RECOMP_ABI_CALL(0x00219370u, sub_00219370); /* call 0x00219370 */

loc_0021A797: ;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0021A7A4u); RECOMP_ABI_CALL(0x0020B340u, sub_0020B340); /* call 0x0020B340 */

loc_0021A7A4: ;
    eax = MEM32(esi + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(ebx + 0xC) = 0xFFFFFFFFu;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021A7F6; /* jle: less or equal (signed <=) */

loc_0021A7B8: ;
    ecx = MEM32(esi + 0x10);
    goto loc_0021A7C0;

    /* nop */

loc_0021A7C0: ;
    eax = MEM32(ecx);
    edx = MEM32(ebx + 0x28);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021A7EA; /* jne: not equal / not zero */

loc_0021A7CA: ;
    edx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + 0x1C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021A7EA; /* jne: not equal / not zero */

loc_0021A7D2: ;
    SET_LO8(edx, MEM8(eax + 0x34));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebx + 0x34)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ebx + 0x34) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021A7EA; /* jne: not equal / not zero */

loc_0021A7DA: ;
    edx = MEM32(eax + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + 0x30) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021A7EA; /* jne: not equal / not zero */

loc_0021A7E2: ;
    eax = MEM32(eax + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x2C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021A80F; /* je: equal / zero */

loc_0021A7EA: ;
    eax = MEM32(esp + 0x18);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021A7C0; /* jl: less (signed <) */

loc_0021A7F6: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021A84C; /* jge: greater or equal (signed >=) */

loc_0021A801: ;
    edx = MEM32(esi + 0x10);
    ecx = edi + 1;
    MEM32(esi + 8) = ecx;
    MEM32(edx + edi * 4) = ebx;
    goto loc_0021A85F;

loc_0021A80F: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 4);
    edi = MEM32(eax + edi * 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = 0x7FFFFF;
    eax = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021A82E; /* jne: not equal / not zero */

loc_0021A827: ;
    ecx = esi;
    PUSH32(esp, 0x0021A82Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021A82E: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021A842; /* jne: not equal / not zero */

loc_0021A83B: ;
    ecx = ebp;
    PUSH32(esp, 0x0021A842u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021A842: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0021A84C: ;
    PUSH32(esp, 4);
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0021A859u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0021A859: ;
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + edi * 4) = ebx;

loc_0021A85F: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = 0x7FFFFF;
    eax = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021A878; /* jne: not equal / not zero */

loc_0021A871: ;
    ecx = esi;
    PUSH32(esp, 0x0021A878u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021A878: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021A88C; /* jne: not equal / not zero */

loc_0021A885: ;
    ecx = ebp;
    PUSH32(esp, 0x0021A88Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021A88C: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021A8A0
 * Original: 0x0021A8A0 - 0x0021A8E8 (72 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021A8A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0021A8E5; /* jl: less (signed <) */

loc_0021A8A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021A8E5; /* jge: greater or equal (signed >=) */

loc_0021A8AD: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = eax + eax * 8;
    eax = eax << 4;
    esi = eax + ecx + 0x14;
    PUSH32(esp, 0x7F);
    ecx = esi + 4;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0021A8C9u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0021A8C9: ;
    ecx = MEM32(esi + 0x84);
    esp = esp + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esi + 0x83) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0021A8E3; /* je: equal / zero */

loc_0021A8DD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021A8E3u); RECOMP_ABI_CALL(0x002127B0u, sub_002127B0); /* call 0x002127B0 */

loc_0021A8E3: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0021A8E5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0021A8F0
 * Original: 0x0021A8F0 - 0x0021AB4F (607 bytes, 177 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A8F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021A8F0: ;
    esp = esp - 0x84;
    eax = MEM32(0x5BC5D8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x90);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 4) = eax;
    if (TEST_S(_fas, _fbs)) goto loc_0021AB36; /* jl: less (signed <) */

loc_0021A90F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x2F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021AB36; /* jge: greater or equal (signed >=) */

loc_0021A918: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x98);
    PUSH32(esp, esi);
    edx = ebp + ebp * 8;
    edx = edx << 4;
    PUSH32(esp, edi);
    edi = edx + ecx + 0x14;
    eax = edi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021A936u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0021A936: ;
    ecx = eax;
    PUSH32(esp, 0x0021A93Du); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_0021A93D: ;
    esi = eax;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021A94E; /* je: equal / zero */

loc_0021A946: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021A94Eu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021A94E: ;
    MEM32(ebx + 8) = esi;
    eax = MEM32(edi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021AAAE; /* je: equal / zero */

loc_0021A95F: ;
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0021A96Au); RECOMP_ABI_CALL(0x002127E0u, sub_002127E0); /* call 0x002127E0 */

loc_0021A96A: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021A9D4; /* je: equal / zero */

loc_0021A970: ;
    edx = MEM32(0x5BC498);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0021A97Eu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0021A97E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0021AB0E; /* je: equal / zero */

loc_0021A988: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA4); PUSH32(esp, 0x0021A990u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021A990: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(esi);
    ecx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0021AB07; /* je: equal / zero */

loc_0021A99C: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x0021A9A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021A9A2: ;
    ebp = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x19C); PUSH32(esp, 0x0021A9AEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021A9AE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0021A9CD; /* jb: below (unsigned <) */

loc_0021A9B4: ;
    if (CMP_A(_fa, _fb)) goto loc_0021A9BA; /* ja: above (unsigned >) */

loc_0021A9B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0021A9CD; /* jbe: below or equal (unsigned <=) */

loc_0021A9BA: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x19C); PUSH32(esp, 0x0021A9C4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021A9C4: ;
    ecx = MEM32(edi + 0x84);
    MEM32(ecx + 0x1C) = eax;

loc_0021A9CD: ;
    ebp = MEM32(esp + 0x9C);

loc_0021A9D4: ;
    edx = MEM32(edi + 0x84);
    eax = MEM32(edx + 0x1C);
    MEM32(ebx + 0x1C) = eax;
    ecx = MEM32(edi + 0x84);
    edx = MEM32(ecx + 0x20);
    MEM32(ebx + 0x20) = edx;
    eax = MEM32(edi + 0x84);
    ecx = MEM32(eax + 0x24);
    MEM32(ebx + 0x24) = ecx;
    edx = MEM32(edi + 0x84);
    eax = MEM32(edx + 0x28);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0021AA09u); RECOMP_ABI_CALL(0x00212810u, sub_00212810); /* call 0x00212810 */

loc_0021AA09: ;
    ecx = MEM32(edi + 0x84);
    edx = MEM32(ecx + 0x2C);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0021AA1Au); RECOMP_ABI_CALL(0x00212840u, sub_00212840); /* call 0x00212840 */

loc_0021AA1A: ;
    eax = MEM32(edi + 0x84);
    ecx = MEM32(eax + 0x30);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0021AA2Bu); RECOMP_ABI_CALL(0x00212870u, sub_00212870); /* call 0x00212870 */

loc_0021AA2B: ;
    edx = MEM32(edi + 0x84);
    eax = MEM32(edx + 0x34);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0021AA3Cu); RECOMP_ABI_CALL(0x002128A0u, sub_002128A0); /* call 0x002128A0 */

loc_0021AA3C: ;
    ecx = MEM32(edi + 0x84);
    edx = MEM32(ecx + 0x38);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0021AA4Du); RECOMP_ABI_CALL(0x002128D0u, sub_002128D0); /* call 0x002128D0 */

loc_0021AA4D: ;
    eax = MEM32(edi + 0x84);
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0021AA5Eu); RECOMP_ABI_CALL(0x00212900u, sub_00212900); /* call 0x00212900 */

loc_0021AA5E: ;
    edx = MEM32(edi + 0x84);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0021AA6Fu); RECOMP_ABI_CALL(0x00212930u, sub_00212930); /* call 0x00212930 */

loc_0021AA6F: ;
    ecx = MEM32(edi + 0x84);
    edx = MEM32(ecx + 0x44);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0021AA80u); RECOMP_ABI_CALL(0x00212960u, sub_00212960); /* call 0x00212960 */

loc_0021AA80: ;
    eax = MEM32(edi + 0x84);
    ecx = MEM32(eax + 0x48);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0021AA91u); RECOMP_ABI_CALL(0x00212990u, sub_00212990); /* call 0x00212990 */

loc_0021AA91: ;
    edx = MEM32(edi + 0x84);
    eax = MEM32(edx + 0x4C);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0021AAA2u); RECOMP_ABI_CALL(0x00216750u, sub_00216750); /* call 0x00216750 */

loc_0021AAA2: ;
    ecx = MEM32(edi + 0x84);
    edx = MEM32(ecx + 0x50);
    MEM32(ebx + 0x50) = edx;

loc_0021AAAE: ;
    eax = MEM32(ebp * 4 + 0x46A288);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x3F7D98);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0021AAC5u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0021AAC5: ;
    edx = esp + 0x20;
    esp = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021AAD2u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0021AAD2: ;
    ecx = eax;
    PUSH32(esp, 0x0021AAD9u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_0021AAD9: ;
    esi = eax;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021AAEA; /* je: equal / zero */

loc_0021AAE2: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021AAEAu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021AAEA: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x98);
    POP32(esp, edi);
    MEM32(ebx + 0x14) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(eax) = ecx;
    POP32(esp, ebp);
    esp = esp + 0x84;
    esp += 16; return; /* ret 12 */

loc_0021AB07: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0021AB0Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021AB0A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    goto loc_0021AB18;

loc_0021AB0E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0021AB16u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021AB16: ;
    eax = eax | edx;

loc_0021AB18: ;
    if (_flags /* je: equal / zero */) goto loc_0021A9D4;

loc_0021AB1E: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021AB28u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021AB28: ;
    ecx = MEM32(edi + 0x84);
    MEM32(ecx + 0x1C) = eax;
    goto loc_0021A9D4;

loc_0021AB36: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 0x8C);
    MEM32(eax) = ecx;
    POP32(esp, ebp);
    esp = esp + 0x84;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0021AB50
 * Original: 0x0021AB50 - 0x0021AB56 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021AB50(void)
{

loc_0021AB50: ;
    eax = MEM32(0x5BC294);
    esp += 4; return; /* ret */

}

/**
 * sub_0021AB60
 * Original: 0x0021AB60 - 0x0021AB66 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021AB60(void)
{

loc_0021AB60: ;
    eax = MEM32(0x5BC298);
    esp += 4; return; /* ret */

}

/**
 * sub_0021AB70
 * Original: 0x0021AB70 - 0x0021ABCF (95 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021AB70(void)
{

loc_0021AB70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0021AB7Eu); RECOMP_ABI_CALL(0x00216980u, sub_00216980); /* call 0x00216980 */

loc_0021AB7E: ;
    MEM32(esi) = 0x3F5E20;
    SET_LO8(eax, MEM8(edi + 0x34));
    MEM8(esi + 0x34) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x35));
    MEM8(esi + 0x35) = LO8(ecx);
    MEM32(esi) = 0x3F7DB0;
    eax = 0; /* xor self */
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = eax;
    SET_LO8(edx, MEM8(edi + 0x42));
    MEM8(esi + 0x42) = LO8(edx);
    eax = MEM32(edi + 0x3C);
    MEM32(esi + 0x3C) = eax;
    ecx = MEM32(edi + 0x38);
    MEM32(esi + 0x38) = ecx;
    SET_LO8(edx, MEM8(edi + 0x24));
    MEM8(esi + 0x24) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x41));
    MEM8(esi + 0x41) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x40));
    MEM8(esi + 0x40) = LO8(ecx);
    edx = MEM32(edi + 0x44);
    POP32(esp, edi);
    MEM32(esi + 0x44) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021ABD0
 * Original: 0x0021ABD0 - 0x0021AC35 (101 bytes, 37 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021ABD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021ABD0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021ABE0; /* jne: not equal / not zero */

loc_0021ABDC: ;
    esi = 0; /* xor self */
    goto loc_0021ABEF;

loc_0021ABE0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021ABE6u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0021ABE6: ;
    ecx = eax;
    PUSH32(esp, 0x0021ABEDu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_0021ABED: ;
    esi = eax;

loc_0021ABEF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021ABF6; /* je: equal / zero */

loc_0021ABF3: ;
    MEM32(esi + -4) = MEM32(esi + -4) + 1;
    _fa = (uint32_t)(MEM32(esi + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0021ABF6: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021AC05; /* je: equal / zero */

loc_0021ABFD: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021AC05u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021AC05: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi + 0xC) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0021AC14; /* je: equal / zero */

loc_0021AC0C: ;
    ecx = esi + -8;
    PUSH32(esp, 0x0021AC14u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021AC14: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    MEM32(edi + 8) = ecx;
    ecx = edi;
    MEM32(edi + 0x1C) = eax;
    MEM32(edi + 0x18) = edx;
    PUSH32(esp, 0x0021AC30u); RECOMP_ABI_CALL(0x00204020u, sub_00204020); /* call 0x00204020 */

loc_0021AC30: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0021AC40
 * Original: 0x0021AC40 - 0x0021ACC2 (130 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021AC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021AC40: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021AC5D; /* jle: less or equal (signed <=) */

loc_0021AC4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021AC5B; /* jge: greater or equal (signed >=) */

loc_0021AC52: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_0021AC6B;

loc_0021AC5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_0021AC5D: ;
    if (TEST_NZ(_fa, _fb)) goto loc_0021AC69; /* jne: not equal / not zero */

loc_0021AC5F: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021AC6B; /* jne: not equal / not zero */

loc_0021AC69: ;
    ecx = 0; /* xor self */

loc_0021AC6B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0021AC72u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021AC72: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0021AC7Au); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0021AC7A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021AC94; /* je: equal / zero */

loc_0021AC80: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0021AC94; /* jne: not equal / not zero */

loc_0021AC8D: ;
    ecx = esi;
    PUSH32(esp, 0x0021AC94u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021AC94: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = MEM32(esp + 0xC);
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0021ACBB; /* je: equal / zero */

loc_0021AC9E: ;
    edx = MEM32(esi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = edx;
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021ACBB; /* jne: not equal / not zero */

loc_0021ACB4: ;
    ecx = esi;
    PUSH32(esp, 0x0021ACBBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021ACBB: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021ACD0
 * Original: 0x0021ACD0 - 0x0021AE81 (433 bytes, 157 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021ACD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021ACD0: ;
    esp = esp - 0x10;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 4) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_0021AE7A; /* jge: greater or equal (signed >=) */

loc_0021ACEC: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    ebx = edx * 4;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    MEM32(esp + 0x2C) = ebx;
    ebx = MEM32(esp + 0x28);
    ebx = ebx - ecx;
    ebp = ebp - ecx;
    PUSH32(esp, edi);
    edi = ecx;
    eax = eax - edx;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x2C) = eax;
    goto loc_0021AD30;

loc_0021AD20: ;
    ebp = MEM32(esp + 0x24);
    ebx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    /* nop */

loc_0021AD30: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(esp + 0x30);
    esi = MEM32(eax + edx);
    eax = MEM32(edi + ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(ebx + edi);
    edx = MEM32(edi);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x18) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021AD55; /* jne: not equal / not zero */

loc_0021AD51: ;
    ebp = 0; /* xor self */
    goto loc_0021AD64;

loc_0021AD55: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021AD5Bu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0021AD5B: ;
    ecx = eax;
    PUSH32(esp, 0x0021AD62u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_0021AD62: ;
    ebp = eax;

loc_0021AD64: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021AD6B; /* je: equal / zero */

loc_0021AD68: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0021AD6B: ;
    edi = MEM32(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021ADB4; /* je: equal / zero */

loc_0021AD72: ;
    eax = MEM32(edi + -4);
    edi = edi + 0xFFFFFFF8u;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 4) = eax;
    if ((_fa != 0)) goto loc_0021ADB4; /* jne: not equal / not zero */

loc_0021AD7E: ;
    ebx = MEM32(edi);
    ecx = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021AD88u); RECOMP_ABI_CALL(0x001F87A0u, sub_001F87A0); /* call 0x001F87A0 */

loc_0021AD88: ;
    eax = edi + 8;
    edx = eax + 1;
    edi = edi;

loc_0021AD90: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021AD90; /* jne: not equal / not zero */

loc_0021AD97: ;
    eax = eax - edx;
    eax = eax + 9;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0021ADA5u); RECOMP_ABI_CALL(0x001EBA30u, sub_001EBA30); /* call 0x001EBA30 */

loc_0021ADA5: ;
    SET_LO8(eax, MEM8(ebx + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021ADB4; /* je: equal / zero */

loc_0021ADAC: ;
    ecx = MEM32(ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0021ADB4u); RECOMP_ABI_CALL(0x0020EEE0u, sub_0020EEE0); /* call 0x0020EEE0 */

loc_0021ADB4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esi + 0xC) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_0021ADFB; /* je: equal / zero */

loc_0021ADBB: ;
    eax = MEM32(ebp + -4);
    edi = ebp + -8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 4) = eax;
    if ((_fa != 0)) goto loc_0021ADFB; /* jne: not equal / not zero */

loc_0021ADC7: ;
    ebx = MEM32(edi);
    ecx = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021ADD1u); RECOMP_ABI_CALL(0x001F87A0u, sub_001F87A0); /* call 0x001F87A0 */

loc_0021ADD1: ;
    eax = edi + 8;
    edx = eax + 1;

loc_0021ADD7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021ADD7; /* jne: not equal / not zero */

loc_0021ADDE: ;
    eax = eax - edx;
    eax = eax + 9;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0021ADECu); RECOMP_ABI_CALL(0x001EBA30u, sub_001EBA30); /* call 0x001EBA30 */

loc_0021ADEC: ;
    SET_LO8(eax, MEM8(ebx + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021ADFB; /* je: equal / zero */

loc_0021ADF3: ;
    ecx = MEM32(ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0021ADFBu); RECOMP_ABI_CALL(0x0020EEE0u, sub_0020EEE0); /* call 0x0020EEE0 */

loc_0021ADFB: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    MEM32(esi + 8) = ecx;
    ecx = esi;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x18) = edx;
    PUSH32(esp, 0x0021AE17u); RECOMP_ABI_CALL(0x00204020u, sub_00204020); /* call 0x00204020 */

loc_0021AE17: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0021AE1Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021AE1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021AE2C; /* je: equal / zero */

loc_0021AE22: ;
    SET_LO16(ecx, MEM16(eax + 0x12));
    MEM16(esi + 0x10) = LO16(ecx);
    goto loc_0021AE32;

loc_0021AE2C: ;
    MEM16(esi + 0x10) = 0xFFFF;

loc_0021AE32: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0021AE39u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021AE39: ;
    MEM16(esi + 0x14) = LO16(eax);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021AE49u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021AE49: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021AE52; /* je: equal / zero */

loc_0021AE50: ;
    MEM32(eax) = esi;

loc_0021AE52: ;
    edx = MEM32(esp + 0x30);
    edi = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    edx = edx + 4;
    edi = edi + 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x2C) = eax;
    if ((_fa != 0)) goto loc_0021AD20; /* jne: not equal / not zero */

loc_0021AE77: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0021AE7A: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0021AE90
 * Original: 0x0021AE90 - 0x0021B048 (440 bytes, 168 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021AE90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021AE90: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x5C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, ebp);
    ebp = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0021AF14; /* je: equal / zero */

loc_0021AEA0: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0021AEAAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021AEAA: ;
    edi = MEM32(eax + 0xC);
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0021AEF5; /* jg: greater (signed >) */

loc_0021AEB2: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0021AEBDu); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_0021AEBD: ;
    ecx = MEM32(ebx + 0x10);
    ecx = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021AEDC; /* je: equal / zero */

loc_0021AEC7: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021AEDC; /* jne: not equal / not zero */

loc_0021AED7: ;
    PUSH32(esp, 0x0021AEDCu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021AEDC: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021AEF5; /* je: equal / zero */

loc_0021AEE3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0021AEF5; /* jl: less (signed <) */

loc_0021AEE7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021AEF5; /* jge: greater or equal (signed >=) */

loc_0021AEEB: ;
    edx = MEM32(ebx + 0x10);
    MEM32(edx + edi * 4) = 0;

loc_0021AEF5: ;
    eax = MEM32(ebx + 0x10);
    eax = MEM32(eax + edi * 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021AF02u); RECOMP_ABI_CALL(0x001F1A80u, sub_001F1A80); /* call 0x001F1A80 */

loc_0021AF02: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0021AF1C; /* je: equal / zero */

loc_0021AF0F: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0021AF45;

loc_0021AF14: ;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0021AF1C: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + 0x11C);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x0021AF38u); RECOMP_ABI_CALL(0x00219370u, sub_00219370); /* call 0x00219370 */

loc_0021AF38: ;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0021AF45u); RECOMP_ABI_CALL(0x0020B340u, sub_0020B340); /* call 0x0020B340 */

loc_0021AF45: ;
    edx = MEM32(esi + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 0x10) = edx;
    MEM32(ebp + 0xC) = 0xFFFFFFFFu;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021AFA8; /* jle: less or equal (signed <=) */

loc_0021AF59: ;
    ecx = MEM32(esi + 0x10);
    MEM32(esp + 0x18) = ecx;

loc_0021AF60: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax);
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1C), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021AF98; /* jne: not equal / not zero */

loc_0021AF6E: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0021AF7C; /* jne: not equal / not zero */

loc_0021AF77: ;
    edx = 0x3C806C;

loc_0021AF7C: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021AF88; /* jne: not equal / not zero */

loc_0021AF83: ;
    eax = 0x3C806C;

loc_0021AF88: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021AF94; /* jne: not equal / not zero */

loc_0021AF8C: ;
    ecx = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x2C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021AFC1; /* je: equal / zero */

loc_0021AF94: ;
    edx = MEM32(esp + 0x10);

loc_0021AF98: ;
    ecx = MEM32(esp + 0x18);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0021AF60; /* jl: less (signed <) */

loc_0021AFA8: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021AFFE; /* jge: greater or equal (signed >=) */

loc_0021AFB3: ;
    eax = MEM32(esi + 0x10);
    edx = edi + 1;
    MEM32(esi + 8) = edx;
    MEM32(eax + edi * 4) = ebp;
    goto loc_0021B011;

loc_0021AFC1: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 4);
    edi = MEM32(eax + edi * 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = 0x7FFFFF;
    eax = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021AFE0; /* jne: not equal / not zero */

loc_0021AFD9: ;
    ecx = esi;
    PUSH32(esp, 0x0021AFE0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021AFE0: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021AFF4; /* jne: not equal / not zero */

loc_0021AFED: ;
    ecx = ebx;
    PUSH32(esp, 0x0021AFF4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021AFF4: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0021AFFE: ;
    PUSH32(esp, 4);
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0021B00Bu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0021B00B: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + edi * 4) = ebp;

loc_0021B011: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = 0x7FFFFF;
    eax = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021B02A; /* jne: not equal / not zero */

loc_0021B023: ;
    ecx = esi;
    PUSH32(esp, 0x0021B02Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021B02A: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021B03E; /* jne: not equal / not zero */

loc_0021B037: ;
    ecx = ebx;
    PUSH32(esp, 0x0021B03Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021B03E: ;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021B050
 * Original: 0x0021B050 - 0x0021B056 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B050(void)
{

loc_0021B050: ;
    eax = MEM32(0x5BC24C);
    esp += 4; return; /* ret */

}

/**
 * sub_0021B060
 * Original: 0x0021B060 - 0x0021B0A0 (64 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B060(void)
{

loc_0021B060: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0021B06Eu); RECOMP_ABI_CALL(0x00216980u, sub_00216980); /* call 0x00216980 */

loc_0021B06E: ;
    MEM32(esi) = 0x3F5E20;
    SET_LO8(eax, MEM8(edi + 0x34));
    MEM8(esi + 0x34) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x35));
    MEM8(esi + 0x35) = LO8(ecx);
    MEM32(esi) = 0x3F7EA0;
    MEM32(esi + 0x40) = 0;
    SET_LO8(edx, MEM8(edi + 0x3C));
    MEM8(esi + 0x3C) = LO8(edx);
    eax = MEM32(edi + 0x38);
    MEM32(esi + 0x38) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021B0A0
 * Original: 0x0021B0A0 - 0x0021B18D (237 bytes, 86 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B0A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021B0A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = ZX8(MEM8(ebp + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = MEM32(0x5BC53C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0021B0BA; /* jne: not equal / not zero */

loc_0021B0B4: ;
    ecx = MEM32(0x5BC538);

loc_0021B0BA: ;
    edx = MEM32(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    esi = MEM32(edx + eax * 4);
    PUSH32(esp, 0x226510);
    PUSH32(esp, 0x0021B0CBu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021B0CB: ;
    ecx = MEM32(0x5BC26C);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021B0DAu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0021B0DA: ;
    esi = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021B0E6u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0021B0E6: ;
    ecx = eax;
    PUSH32(esp, 0x0021B0EDu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_0021B0ED: ;
    edi = eax;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021B0FE; /* je: equal / zero */

loc_0021B0F6: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021B0FEu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021B0FE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esi + 8) = edi;
    edi = MEM32(ebp + 8);
    if (TEST_Z(_fa, _fb)) goto loc_0021B10B; /* je: equal / zero */

loc_0021B108: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0021B10B: ;
    ebx = MEM32(edi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021B121; /* jge: greater or equal (signed >=) */

loc_0021B113: ;
    edx = MEM32(edi + 0x10);
    ecx = ebx + 1;
    MEM32(edi + 8) = ecx;
    MEM32(edx + ebx * 4) = esi;
    goto loc_0021B134;

loc_0021B121: ;
    PUSH32(esp, 4);
    eax = ebx + 1;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0021B12Eu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0021B12E: ;
    ecx = MEM32(edi + 0x10);
    MEM32(ecx + ebx * 4) = esi;

loc_0021B134: ;
    edi = MEM32(ebp + 0xC);
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021B142; /* je: equal / zero */

loc_0021B13F: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0021B142: ;
    ebx = MEM32(edi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021B158; /* jge: greater or equal (signed >=) */

loc_0021B14A: ;
    eax = MEM32(edi + 0x10);
    edx = ebx + 1;
    MEM32(edi + 8) = edx;
    MEM32(eax + ebx * 4) = ebp;
    goto loc_0021B16B;

loc_0021B158: ;
    PUSH32(esp, 4);
    ecx = ebx + 1;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0021B165u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0021B165: ;
    edx = MEM32(edi + 0x10);
    MEM32(edx + ebx * 4) = ebp;

loc_0021B16B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021B186; /* je: equal / zero */

loc_0021B16F: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021B186; /* jne: not equal / not zero */

loc_0021B17F: ;
    ecx = esi;
    PUSH32(esp, 0x0021B186u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021B186: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0021B190
 * Original: 0x0021B190 - 0x0021B196 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B190(void)
{

loc_0021B190: ;
    eax = MEM32(0x5BC21C);
    esp += 4; return; /* ret */

}

/**
 * sub_0021B1A0
 * Original: 0x0021B1A0 - 0x0021B1A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B1A0(void)
{

loc_0021B1A0: ;
    eax = MEM32(0x5BC220);
    esp += 4; return; /* ret */

}

/**
 * sub_0021B1B0
 * Original: 0x0021B1B0 - 0x0021B1CF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021B1B0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x20);
    PUSH32(esp, 0x0021B1B9u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0021B1B9: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021B1C7; /* je: equal / zero */

loc_0021B1BF: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021B1C7u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021B1C7: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021B1D0
 * Original: 0x0021B1D0 - 0x0021B22C (92 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B1D0(void)
{

loc_0021B1D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0021B1DEu); RECOMP_ABI_CALL(0x001F7CD0u, sub_001F7CD0); /* call 0x001F7CD0 */

loc_0021B1DE: ;
    MEM32(esi) = 0x3F5C90;
    ebx = 0; /* xor self */
    ecx = esi;
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0x0021B1F0u); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021B1F0: ;
    ecx = esi;
    MEM32(esi) = 0x3F5E20;
    PUSH32(esp, 0x0021B1FDu); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021B1FD: ;
    ecx = esi;
    MEM8(esi + 0x34) = LO8(ebx);
    MEM8(esi + 0x35) = LO8(ebx);
    MEM32(esi) = 0x3F6048;
    PUSH32(esp, 0x0021B210u); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021B210: ;
    SET_LO8(eax, 1);
    MEM8(esi + 0x38) = LO8(eax);
    MEM8(esi + 0x35) = LO8(eax);
    MEM8(esi + 0x34) = LO8(ebx);
    MEM32(esi) = 0x3F6048;
    MEM8(esi + 0x27) = 2;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021B230
 * Original: 0x0021B230 - 0x0021B48D (605 bytes, 231 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B230(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021B230: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi + 8);
    ebx = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x0021B24Cu); RECOMP_ABI_CALL(0x00212550u, sub_00212550); /* call 0x00212550 */

loc_0021B24C: ;
    MEM32(edi + 8) = 0;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021B485; /* je: equal / zero */

loc_0021B25E: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0021B267u); RECOMP_ABI_CALL(0x001F8000u, sub_001F8000); /* call 0x001F8000 */

loc_0021B267: ;
    ecx = MEM32(ebx + 0xC);
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0xC) = esi;
    if (CMP_BE(_fa & _fb, 0)) goto loc_0021B291; /* jbe: below or equal (unsigned <=) */

loc_0021B276: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    /* nop */

loc_0021B280: ;
    _fa = (uint32_t)(MEM8(eax + esi)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + esi), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021B289; /* jne: not equal / not zero */

loc_0021B285: ;
    MEM8(eax + esi) = 0;

loc_0021B289: ;
    edx = MEM32(ebx + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0021B280; /* jb: below (unsigned <) */

loc_0021B291: ;
    ecx = MEM32(ebx + 0xC);
    ecx = ecx + esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    MEM32(esp + 0x18) = esi;
    if (CMP_AE(_fa, _fb)) goto loc_0021B468; /* jae: above or equal (unsigned >=) */

loc_0021B2A2: ;
    PUSH32(esp, ebp);

loc_0021B2A3: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021B2AF; /* jne: not equal / not zero */

loc_0021B2AB: ;
    ebp = 0; /* xor self */
    goto loc_0021B318;

loc_0021B2AF: ;
    eax = MEM32(0x5BC528);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021B30A; /* jne: not equal / not zero */

loc_0021B2B8: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021B2D1; /* jle: less or equal (signed <=) */

loc_0021B2C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021B2CF; /* jge: greater or equal (signed >=) */

loc_0021B2C6: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_0021B2DF;

loc_0021B2CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_0021B2D1: ;
    if (TEST_NZ(_fa, _fb)) goto loc_0021B2DD; /* jne: not equal / not zero */

loc_0021B2D3: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021B2DF; /* jne: not equal / not zero */

loc_0021B2DD: ;
    ecx = 0; /* xor self */

loc_0021B2DF: ;
    eax = MEM32(0x46A688);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0021B2EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021B2EA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x0021B2F6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021B2F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021B303; /* je: equal / zero */

loc_0021B2FA: ;
    ecx = eax;
    PUSH32(esp, 0x0021B301u); RECOMP_ABI_CALL(0x00202CC0u, sub_00202CC0); /* call 0x00202CC0 */

loc_0021B301: ;
    goto loc_0021B305;

loc_0021B303: ;
    eax = 0; /* xor self */

loc_0021B305: ;
    MEM32(0x5BC528) = eax;

loc_0021B30A: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0021B316u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_0021B316: ;
    ebp = eax;

loc_0021B318: ;
    ebx = MEM32(edi + 8);
    esi = ebx + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0021B334; /* jg: greater (signed >) */

loc_0021B322: ;
    edx = ebx;
    edx = edx - esi;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0021B32Fu); RECOMP_ABI_CALL(0x00212550u, sub_00212550); /* call 0x00212550 */

loc_0021B32F: ;
    MEM32(edi + 8) = esi;
    goto loc_0021B392;

loc_0021B334: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0021B371; /* jl: less (signed <) */

loc_0021B338: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021B36E; /* jle: less or equal (signed <=) */

loc_0021B33F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0021B349; /* jg: greater (signed >) */

loc_0021B344: ;
    eax = 4;

loc_0021B349: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021B364; /* jge: greater or equal (signed >=) */

loc_0021B34D: ;
    /* nop */

loc_0021B350: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021B35B; /* jge: greater or equal (signed >=) */

loc_0021B357: ;
    eax = eax + eax;
    goto loc_0021B360;

loc_0021B35B: ;
    eax = eax + 0x400;

loc_0021B360: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021B350; /* jl: less (signed <) */

loc_0021B364: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0021B36Eu); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_0021B36E: ;
    MEM32(edi + 8) = esi;

loc_0021B371: ;
    edx = MEM32(edi + 0x10);
    ecx = esi;
    ecx = ecx - ebx;
    ecx = ecx << 2;
    edi = edx + ebx * 4;
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
    edi = MEM32(esp + 0x20);

loc_0021B392: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    eax = MEM32(edi + 0x10);
    ebx = eax + ebx * 4;
    if (TEST_Z(_fa, _fb)) goto loc_0021B39F; /* je: equal / zero */

loc_0021B39C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0021B39F: ;
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021B3E9; /* je: equal / zero */

loc_0021B3A5: ;
    eax = MEM32(esi + -4);
    esi = esi + 0xFFFFFFF8u;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    if ((_fa != 0)) goto loc_0021B3E9; /* jne: not equal / not zero */

loc_0021B3B1: ;
    edi = MEM32(esi);
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021B3BBu); RECOMP_ABI_CALL(0x001F87A0u, sub_001F87A0); /* call 0x001F87A0 */

loc_0021B3BB: ;
    eax = esi + 8;
    edx = eax + 1;

loc_0021B3C1: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021B3C1; /* jne: not equal / not zero */

loc_0021B3C8: ;
    eax = eax - edx;
    eax = eax + 9;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0021B3D6u); RECOMP_ABI_CALL(0x001EBA30u, sub_001EBA30); /* call 0x001EBA30 */

loc_0021B3D6: ;
    SET_LO8(eax, MEM8(edi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021B3E5; /* je: equal / zero */

loc_0021B3DD: ;
    ecx = MEM32(edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021B3E5u); RECOMP_ABI_CALL(0x0020EEE0u, sub_0020EEE0); /* call 0x0020EEE0 */

loc_0021B3E5: ;
    edi = MEM32(esp + 0x20);

loc_0021B3E9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(ebx) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_0021B438; /* je: equal / zero */

loc_0021B3EF: ;
    eax = MEM32(ebp + -4);
    esi = ebp + -8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    if ((_fa != 0)) goto loc_0021B438; /* jne: not equal / not zero */

loc_0021B3FB: ;
    edi = MEM32(esi);
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021B405u); RECOMP_ABI_CALL(0x001F87A0u, sub_001F87A0); /* call 0x001F87A0 */

loc_0021B405: ;
    eax = esi + 8;
    edx = eax + 1;
    goto loc_0021B410;

    /* nop */

loc_0021B410: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021B410; /* jne: not equal / not zero */

loc_0021B417: ;
    eax = eax - edx;
    eax = eax + 9;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0021B425u); RECOMP_ABI_CALL(0x001EBA30u, sub_001EBA30); /* call 0x001EBA30 */

loc_0021B425: ;
    SET_LO8(eax, MEM8(edi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021B434; /* je: equal / zero */

loc_0021B42C: ;
    ecx = MEM32(edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021B434u); RECOMP_ABI_CALL(0x0020EEE0u, sub_0020EEE0); /* call 0x0020EEE0 */

loc_0021B434: ;
    edi = MEM32(esp + 0x20);

loc_0021B438: ;
    esi = MEM32(esp + 0x1C);
    eax = esi;
    edx = eax + 1;

loc_0021B441: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021B441; /* jne: not equal / not zero */

loc_0021B448: ;
    ecx = MEM32(esp + 0x14);
    eax = eax - edx;
    edx = MEM32(ecx + 0xC);
    eax = esi + eax + 1;
    esi = MEM32(esp + 0x10);
    edx = edx + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0021B2A3; /* jb: below (unsigned <) */

loc_0021B467: ;
    POP32(esp, ebp);

loc_0021B468: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021B484; /* je: equal / zero */

loc_0021B46C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021B472u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_0021B472: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021B484; /* je: equal / zero */

loc_0021B479: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x0021B484u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021B484: ;
    POP32(esp, esi);

loc_0021B485: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0021B490
 * Original: 0x0021B490 - 0x0021B4F5 (101 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021B490: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0021B49Au); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0021B49A: ;
    eax = MEM32(esi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021B4AB; /* je: equal / zero */

loc_0021B4A3: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021B4ABu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021B4AB: ;
    MEM32(esi + 8) = ebx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021B4CA; /* je: equal / zero */

loc_0021B4B5: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021B4CA; /* jne: not equal / not zero */

loc_0021B4C5: ;
    PUSH32(esp, 0x0021B4CAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021B4CA: ;
    MEM32(esi + 0xC) = ebx;
    edi = esi + 0x10;
    ecx = 0xD;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x60) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021B500
 * Original: 0x0021B500 - 0x0021B687 (391 bytes, 135 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B500(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021B500: ;
    esp = esp - 0x110;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x120);
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    ebp = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0021B66C; /* je: equal / zero */

loc_0021B51E: ;
    PUSH32(esp, edi);
    MEM8(esp + 0x1C) = LO8(ebx);
    ecx = 0x40;
    edi = esp + 0x1D;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    MEM8(esp + 0x12) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0021B554; /* je: equal / zero */

loc_0021B53C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021B554; /* je: equal / zero */

loc_0021B540: ;
    PUSH32(esp, 0x3A);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021B548u); RECOMP_ABI_CALL(0x003426D0u, sub_003426D0); /* call 0x003426D0 */

loc_0021B548: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x13) = (TEST_NZ(_fa, _fb)) ? 1 : 0; /* setne */
    goto loc_0021B559;

loc_0021B554: ;
    MEM8(esp + 0x13) = 1;

loc_0021B559: ;
    PUSH32(esp, 0x2F);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021B561u); RECOMP_ABI_CALL(0x003426D0u, sub_003426D0); /* call 0x003426D0 */

loc_0021B561: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021B57B; /* jne: not equal / not zero */

loc_0021B568: ;
    PUSH32(esp, 0x5C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021B570u); RECOMP_ABI_CALL(0x003426D0u, sub_003426D0); /* call 0x003426D0 */

loc_0021B570: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x11) = LO8(ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0021B580; /* je: equal / zero */

loc_0021B57B: ;
    MEM8(esp + 0x11) = 1;

loc_0021B580: ;
    PUSH32(esp, 0x0021B585u); RECOMP_ABI_CALL(0x0021A340u, sub_0021A340); /* call 0x0021A340 */

loc_0021B585: ;
    eax = MEM32(eax);
    eax = MEM32(eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0021B593u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0021B593: ;
    ecx = eax;
    PUSH32(esp, 0x0021B59Au); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_0021B59A: ;
    esi = eax;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021B5AB; /* je: equal / zero */

loc_0021B5A3: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021B5ABu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021B5AB: ;
    MEM32(ebp + 0xC) = esi;
    MEM32(esp + 0x14) = ebx;

loc_0021B5B2: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021B669; /* jge: greater or equal (signed >=) */

loc_0021B5C0: ;
    _fa = (uint32_t)(MEM8(esp + 0x13)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x13), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021B5D0; /* je: equal / zero */

loc_0021B5C6: ;
    MEM8(esp + 0x1C) = LO8(ebx);
    MEM8(esp + 0x12) = LO8(ebx);
    goto loc_0021B5FF;

loc_0021B5D0: ;
    _fa = (uint32_t)(MEM8(esp + 0x11)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x11), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021B5E0; /* je: equal / zero */

loc_0021B5D6: ;
    MEM8(esp + 0x1C) = LO8(ebx);
    MEM8(esp + 0x11) = LO8(ebx);
    goto loc_0021B5FF;

loc_0021B5E0: ;
    PUSH32(esp, 0x104);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021B5F4u); RECOMP_ABI_CALL(0x001E85E0u, sub_001E85E0); /* call 0x001E85E0 */

loc_0021B5F4: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(esp + 0x12) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0021B654; /* je: equal / zero */

loc_0021B5FF: ;
    eax = MEM32(esp + 0x124);
    esi = eax;

loc_0021B608: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021B608; /* jne: not equal / not zero */

loc_0021B60F: ;
    edi = esp + 0x1C;
    eax = eax - esi;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0021B616: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021B616; /* jne: not equal / not zero */

loc_0021B61E: ;
    ecx = eax;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    eax = MEM32(ebp);
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x0021B63Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021B63C: ;
    edx = MEM32(esp + 0x128);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021B64Au); RECOMP_ABI_CALL(0x00342A2Du, sub_00342A2D); /* call 0x00342A2D */

loc_0021B64A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0021B678; /* jne: not equal / not zero */

loc_0021B654: ;
    ecx = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(esp + 0x12));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0021B5B2; /* jne: not equal / not zero */

loc_0021B669: ;
    eax = 0; /* xor self */
    POP32(esp, edi);

loc_0021B66C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x110;
    esp += 12; return; /* ret 8 */

loc_0021B678: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x110;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0021B690
 * Original: 0x0021B690 - 0x0021B6CB (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021B690: ;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021B69Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021B69D: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F6558;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021B6C4; /* je: equal / zero */

loc_0021B6BC: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021B6C4u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021B6C4: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_0021B6D0
 * Original: 0x0021B6D0 - 0x0021B70B (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021B6D0: ;
    esp = esp - 0x38;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021B6DDu); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021B6DD: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F6648;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021B704; /* je: equal / zero */

loc_0021B6FC: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021B704u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021B704: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_0021B710
 * Original: 0x0021B710 - 0x0021B74B (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021B710: ;
    esp = esp - 0x38;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021B71Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021B71D: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F6738;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021B744; /* je: equal / zero */

loc_0021B73C: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021B744u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021B744: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_0021B750
 * Original: 0x0021B750 - 0x0021B78B (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021B750: ;
    esp = esp - 0x38;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021B75Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021B75D: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F6828;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021B784; /* je: equal / zero */

loc_0021B77C: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021B784u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021B784: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_0021B790
 * Original: 0x0021B790 - 0x0021B7CB (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021B790: ;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021B79Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021B79D: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F6918;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021B7C4; /* je: equal / zero */

loc_0021B7BC: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021B7C4u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021B7C4: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_0021B7D0
 * Original: 0x0021B7D0 - 0x0021B809 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B7D0(void)
{

loc_0021B7D0: ;
    PUSH32(esp, 0x0021B7D5u); RECOMP_ABI_CALL(0x00227F90u, sub_00227F90); /* call 0x00227F90 */

loc_0021B7D5: ;
    PUSH32(esp, 0x46A73C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21B790);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x3F807C);
    PUSH32(esp, 0x1A4790);
    PUSH32(esp, 0x1A4350);
    PUSH32(esp, 0x221CF0);
    PUSH32(esp, 0x5BC17C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0021B805u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0021B805: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0021B810
 * Original: 0x0021B810 - 0x0021B84B (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021B810: ;
    esp = esp - 0x38;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021B81Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021B81D: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F6A08;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021B844; /* je: equal / zero */

loc_0021B83C: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021B844u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021B844: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_0021B850
 * Original: 0x0021B850 - 0x0021B88B (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021B850: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021B85Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021B85D: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F6AF8;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021B884; /* je: equal / zero */

loc_0021B87C: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021B884u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021B884: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_0021B890
 * Original: 0x0021B890 - 0x0021B8DF (79 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021B890: ;
    esp = esp - 0x3C;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021B89Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021B89D: ;
    SET_LO8(eax, 1);
    MEM8(esp + 0x3C) = LO8(eax);
    MEM8(esp + 0x39) = LO8(eax);
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x38) = 0;
    MEM32(esp + 4) = 0x3F6048;
    MEM8(esp + 0x2B) = 2;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021B8D8; /* je: equal / zero */

loc_0021B8D0: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021B8D8u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021B8D8: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_0021B8E0
 * Original: 0x0021B8E0 - 0x0021B92F (79 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B8E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021B8E0: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021B8EDu); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021B8ED: ;
    SET_LO8(eax, 1);
    MEM8(esp + 0x3C) = LO8(eax);
    MEM8(esp + 0x39) = LO8(eax);
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x38) = 0;
    MEM8(esp + 0x2B) = 2;
    MEM32(esp + 4) = 0x3F6BE8;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021B928; /* je: equal / zero */

loc_0021B920: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021B928u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021B928: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_0021B930
 * Original: 0x0021B930 - 0x0021B96B (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021B930: ;
    esp = esp - 0x38;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021B93Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021B93D: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F6CE8;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021B964; /* je: equal / zero */

loc_0021B95C: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021B964u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021B964: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_0021B970
 * Original: 0x0021B970 - 0x0021B9ED (125 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B970(void)
{

loc_0021B970: ;
    eax = 0x254C;
    PUSH32(esp, 0x0021B97Au); RECOMP_ABI_CALL(0x00341D40u, sub_00341D40); /* call 0x00341D40 */

loc_0021B97A: ;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0xE0) = eax;
    MEM32(esp + 0x2544) = eax;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    PUSH32(esp, esi);
    MEM32(esp + 8) = 1;
    MEM32(esp + 4) = 0x3F6DD8;
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0021B9E3u); RECOMP_ABI_CALL(0x00213430u, sub_00213430); /* call 0x00213430 */

loc_0021B9E3: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x254C;
    esp += 4; return; /* ret */

}

/**
 * sub_0021B9F0
 * Original: 0x0021B9F0 - 0x0021BA35 (69 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B9F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021B9F0: ;
    esp = esp - 0x38;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021B9FDu); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021B9FD: ;
    eax = MEM32(0x5BC508);
    edx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM8(esp + 0x38) = LO8(ecx);
    MEM8(esp + 0x39) = LO8(ecx);
    MEM32(esp + 4) = 0x3F7F90;
    esi = MEM32(esp + edx + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0021BA2E; /* je: equal / zero */

loc_0021BA26: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021BA2Eu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021BA2E: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_0021BA40
 * Original: 0x0021BA40 - 0x0021BA46 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BA40(void)
{

loc_0021BA40: ;
    eax = MEM32(0x5BC224);
    esp += 4; return; /* ret */

}

/**
 * sub_0021BA50
 * Original: 0x0021BA50 - 0x0021BA56 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BA50(void)
{

loc_0021BA50: ;
    eax = MEM32(0x5BC228);
    esp += 4; return; /* ret */

}

/**
 * sub_0021BA60
 * Original: 0x0021BA60 - 0x0021BA8E (46 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BA60(void)
{

loc_0021BA60: ;
    esp = esp - 0x14;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F6EA0;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0021BA90
 * Original: 0x0021BA90 - 0x0021BABE (46 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BA90(void)
{

loc_0021BA90: ;
    esp = esp - 0x18;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F6EF8;
    eax = MEM32(esp + ecx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0021BAC0
 * Original: 0x0021BAC0 - 0x0021BB13 (83 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021BAC0: ;
    esp = esp - 0x44;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021BACDu); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021BACD: ;
    ecx = MEM32(0x5BC508);
    edx = MEM32(ecx + 0x394);
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM8(esp + 0x38) = LO8(eax);
    MEM8(esp + 0x39) = LO8(eax);
    MEM32(esp + 4) = 0x3F7EA0;
    MEM32(esp + 0x44) = eax;
    MEM8(esp + 0x40) = 1;
    MEM32(esp + 0x3C) = eax;
    esi = MEM32(esp + edx + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0021BB0C; /* je: equal / zero */

loc_0021BB04: ;
    ecx = ecx + 0xFFFFFFF8u;
    PUSH32(esp, 0x0021BB0Cu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021BB0C: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_0021BB20
 * Original: 0x0021BB20 - 0x0021BB26 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BB20(void)
{

loc_0021BB20: ;
    eax = MEM32(0x5BC250);
    esp += 4; return; /* ret */

}

/**
 * sub_0021BB30
 * Original: 0x0021BB30 - 0x0021BB36 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BB30(void)
{

loc_0021BB30: ;
    eax = MEM32(0x5BC254);
    esp += 4; return; /* ret */

}

/**
 * sub_0021BB40
 * Original: 0x0021BB40 - 0x0021BB72 (50 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BB40(void)
{

loc_0021BB40: ;
    esp = esp - 0x34;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F6F58;
    eax = MEM32(esp + ecx);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_0021BB80
 * Original: 0x0021BB80 - 0x0021BBF6 (118 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021BB80: ;
    esp = esp - 0x50;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021BB8Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021BB8D: ;
    SET_LO8(ecx, 1);
    eax = 0; /* xor self */
    MEM8(esp + 0x46) = LO8(ecx);
    MEM8(esp + 0x45) = LO8(ecx);
    MEM8(esp + 0x44) = LO8(ecx);
    ecx = MEM32(0x5BC508);
    edx = MEM32(ecx + 0x394);
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM8(esp + 0x38) = LO8(eax);
    MEM8(esp + 0x39) = LO8(eax);
    MEM32(esp + 4) = 0x3F7DB0;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = eax;
    MEM8(esp + 0x28) = 3;
    MEM32(esp + 0x48) = 0xFFFFFFFFu;
    MEM8(esp + 0x2B) = 2;
    esi = MEM32(esp + edx + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0021BBEF; /* je: equal / zero */

loc_0021BBE7: ;
    ecx = ecx + 0xFFFFFFF8u;
    PUSH32(esp, 0x0021BBEFu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021BBEF: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_0021BC00
 * Original: 0x0021BC00 - 0x0021BC06 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BC00(void)
{

loc_0021BC00: ;
    eax = MEM32(0x5BC29C);
    esp += 4; return; /* ret */

}

/**
 * sub_0021BC10
 * Original: 0x0021BC10 - 0x0021BC16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BC10(void)
{

loc_0021BC10: ;
    eax = MEM32(0x5BC2A0);
    esp += 4; return; /* ret */

}

/**
 * sub_0021BC20
 * Original: 0x0021BC20 - 0x0021BC52 (50 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BC20(void)
{

loc_0021BC20: ;
    esp = esp - 0x3C;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x28) = eax;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F7000;
    eax = MEM32(esp + ecx);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_0021BC60
 * Original: 0x0021BC60 - 0x0021BC9B (59 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021BC60: ;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021BC6Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021BC6D: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F70A0;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021BC94; /* je: equal / zero */

loc_0021BC8C: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021BC94u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021BC94: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_0021BCA0
 * Original: 0x0021BCA0 - 0x0021BCDB (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BCA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021BCA0: ;
    esp = esp - 0x38;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021BCADu); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021BCAD: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F7190;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021BCD4; /* je: equal / zero */

loc_0021BCCC: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021BCD4u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021BCD4: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_0021BCE0
 * Original: 0x0021BCE0 - 0x0021BD1B (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BCE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021BCE0: ;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021BCEDu); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021BCED: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F7C90;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021BD14; /* je: equal / zero */

loc_0021BD0C: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021BD14u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021BD14: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}
