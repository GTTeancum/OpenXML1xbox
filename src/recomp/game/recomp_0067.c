/**
 * X-Men Legends - Recompiled code chunk 67
 * Functions: 250 (0x0029A7A0 - 0x0029EE80)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0029A7A0
 * Original: 0x0029A7A0 - 0x0029A7C7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A7A0: ;
    eax = MEM32(0x5BE6B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A7B4; /* je: equal / zero */

loc_0029A7A9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A7C6; /* jne: not equal / not zero */

loc_0029A7B4: ;
    PUSH32(esp, 0x29F9D0);
    PUSH32(esp, 0x0029A7BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A7BE: ;
    eax = MEM32(0x5BE6B0);
    esp = esp + 4;

loc_0029A7C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A7D0
 * Original: 0x0029A7D0 - 0x0029A7F7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A7D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A7D0: ;
    eax = MEM32(0x5BE6B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A7E4; /* je: equal / zero */

loc_0029A7D9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A7F6; /* jne: not equal / not zero */

loc_0029A7E4: ;
    PUSH32(esp, 0x29FA20);
    PUSH32(esp, 0x0029A7EEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A7EE: ;
    eax = MEM32(0x5BE6B4);
    esp = esp + 4;

loc_0029A7F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A800
 * Original: 0x0029A800 - 0x0029A827 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A800: ;
    eax = MEM32(0x5BE6B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A814; /* je: equal / zero */

loc_0029A809: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A826; /* jne: not equal / not zero */

loc_0029A814: ;
    PUSH32(esp, 0x29FA70);
    PUSH32(esp, 0x0029A81Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A81E: ;
    eax = MEM32(0x5BE6B8);
    esp = esp + 4;

loc_0029A826: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A830
 * Original: 0x0029A830 - 0x0029A857 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A830: ;
    eax = MEM32(0x5BE6C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A844; /* je: equal / zero */

loc_0029A839: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A856; /* jne: not equal / not zero */

loc_0029A844: ;
    PUSH32(esp, 0x29FAC0);
    PUSH32(esp, 0x0029A84Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A84E: ;
    eax = MEM32(0x5BE6C0);
    esp = esp + 4;

loc_0029A856: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A860
 * Original: 0x0029A860 - 0x0029A887 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A860: ;
    eax = MEM32(0x5BE6C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A874; /* je: equal / zero */

loc_0029A869: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A886; /* jne: not equal / not zero */

loc_0029A874: ;
    PUSH32(esp, 0x29FB10);
    PUSH32(esp, 0x0029A87Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029A87E: ;
    eax = MEM32(0x5BE6C4);
    esp = esp + 4;

loc_0029A886: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A890
 * Original: 0x0029A890 - 0x0029A8BC (44 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A890(void)
{

loc_0029A890: ;
    esp = esp - 0xC;
    ecx = esp;
    PUSH32(esp, 0x0029A89Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029A89B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x406B10;
    MEM32(esp + 8) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A8C0
 * Original: 0x0029A8C0 - 0x0029A8C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A8C0(void)
{

loc_0029A8C0: ;
    eax = MEM32(0x5BE4D4);
    esp += 4; return; /* ret */

}

/**
 * sub_0029A8D0
 * Original: 0x0029A8D0 - 0x0029A8FD (45 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A8D0(void)
{

loc_0029A8D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = edx;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0029A900
 * Original: 0x0029A900 - 0x0029A92C (44 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A900(void)
{

loc_0029A900: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029A90Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029A90B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x406B70;
    MEM32(esp + 0xC) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A930
 * Original: 0x0029A930 - 0x0029A98A (90 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A930(void)
{

loc_0029A930: ;
    esp = esp - 0x3C;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0029A93Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029A93D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x406BF8;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0029A983u); RECOMP_ABI_CALL(0x00295400u, sub_00295400); /* call 0x00295400 */

loc_0029A983: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A990
 * Original: 0x0029A990 - 0x0029A9B4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A990(void)
{

loc_0029A990: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029A99Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029A99B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x406C70;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A9C0
 * Original: 0x0029A9C0 - 0x0029A9E4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A9C0(void)
{

loc_0029A9C0: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029A9CBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029A9CB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x406CE8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A9F0
 * Original: 0x0029A9F0 - 0x0029AA5B (107 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A9F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A9F0: ;
    esp = esp - 0x9C;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0029AA00u); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029AA00: ;
    ecx = esp + 0x20;
    MEM32(esp + 4) = 0x406D68;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x0029AA19u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0029AA19: ;
    ecx = esp + 0x60;
    PUSH32(esp, 0x0029AA22u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0029AA22: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = MEM32(esp + ecx + 4);
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0029AA51; /* je: equal / zero */

loc_0029AA3B: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029AA51; /* jne: not equal / not zero */

loc_0029AA4C: ;
    PUSH32(esp, 0x0029AA51u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029AA51: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x9C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029AA60
 * Original: 0x0029AA60 - 0x0029AA8D (45 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029AA60(void)
{

loc_0029AA60: ;
    esp = esp - 0x50;
    ecx = esp;
    PUSH32(esp, 0x0029AA6Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029AA6B: ;
    ecx = esp + 0xC;
    MEM32(esp) = 0x406DE0;
    PUSH32(esp, 0x0029AA7Bu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0029AA7B: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_0029AA90
 * Original: 0x0029AA90 - 0x0029AB9C (268 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029AA90(void)
{

loc_0029AA90: ;
    esp = esp - 0x80;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE4F0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029AAA6u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0029AAA6: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x472D40);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0029AAB6u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0029AAB6: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029AABEu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029AABE: ;
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
    PUSH32(esp, 0x0029AB5Du); RECOMP_ABI_CALL(0x001B7D30u, sub_001B7D30); /* call 0x001B7D30 */

loc_0029AB5D: ;
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0029AB69u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0029AB69: ;
    edx = edi + 1;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0029AB74u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029AB74: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472D38);
    PUSH32(esp, 0x472D30);
    PUSH32(esp, 0x472D28);
    ecx = esi;
    MEM32(eax + 0x30) = 0x293E50;
    PUSH32(esp, 0x0029AB92u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0029AB92: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_0029ABA0
 * Original: 0x0029ABA0 - 0x0029ABA6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029ABA0(void)
{

loc_0029ABA0: ;
    eax = MEM32(0x5BE4F4);
    esp += 4; return; /* ret */

}

/**
 * sub_0029ABB0
 * Original: 0x0029ABB0 - 0x0029ABB6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029ABB0(void)
{

loc_0029ABB0: ;
    eax = 0x409B74;
    esp += 4; return; /* ret */

}

/**
 * sub_0029ABC0
 * Original: 0x0029ABC0 - 0x0029ABC6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029ABC0(void)
{

loc_0029ABC0: ;
    eax = MEM32(0x471A40);
    esp += 4; return; /* ret */

}

/**
 * sub_0029ABD0
 * Original: 0x0029ABD0 - 0x0029ABDC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029ABD0(void)
{

loc_0029ABD0: ;
    eax = MEM32(esp + 4);
    MEM32(0x471A40) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029ABE0
 * Original: 0x0029ABE0 - 0x0029ABE6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029ABE0(void)
{

loc_0029ABE0: ;
    eax = MEM32(0x5BE6F0);
    esp += 4; return; /* ret */

}

/**
 * sub_0029ABF0
 * Original: 0x0029ABF0 - 0x0029ABFC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029ABF0(void)
{

loc_0029ABF0: ;
    eax = MEM32(esp + 4);
    MEM32(0x5BE6F0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029AC00
 * Original: 0x0029AC00 - 0x0029AC24 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029AC00(void)
{

loc_0029AC00: ;
    esp = esp - 0x18;
    ecx = esp;
    PUSH32(esp, 0x0029AC0Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029AC0B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x406E68;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0029AC30
 * Original: 0x0029AC30 - 0x0029AC54 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029AC30(void)
{

loc_0029AC30: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0029AC3Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029AC3B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x406EE0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029AC60
 * Original: 0x0029AC60 - 0x0029AC84 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029AC60(void)
{

loc_0029AC60: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0029AC6Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029AC6B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x406F68;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029AC90
 * Original: 0x0029AC90 - 0x0029ACB4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029AC90(void)
{

loc_0029AC90: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0029AC9Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029AC9B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x406FE8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029ACC0
 * Original: 0x0029ACC0 - 0x0029ACC6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029ACC0(void)
{

loc_0029ACC0: ;
    eax = MEM32(0x5BE50C);
    esp += 4; return; /* ret */

}

/**
 * sub_0029ACD0
 * Original: 0x0029ACD0 - 0x0029ACFD (45 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029ACD0(void)
{

loc_0029ACD0: ;
    esp = esp - 0x54;
    ecx = esp;
    PUSH32(esp, 0x0029ACDBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029ACDB: ;
    ecx = esp + 0xC;
    MEM32(esp) = 0x407068;
    PUSH32(esp, 0x0029ACEBu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0029ACEB: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

}

/**
 * sub_0029AD00
 * Original: 0x0029AD00 - 0x0029AE20 (288 bytes, 69 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029AD00(void)
{

loc_0029AD00: ;
    esp = esp - 0x80;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE50C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029AD16u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0029AD16: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x472D78);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0029AD26u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0029AD26: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029AD2Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029AD2E: ;
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
    PUSH32(esp, 0x0029ADCDu); RECOMP_ABI_CALL(0x001B7D30u, sub_001B7D30); /* call 0x001B7D30 */

loc_0029ADCD: ;
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0029ADD9u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0029ADD9: ;
    edx = edi + 1;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0029ADE4u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029ADE4: ;
    MEM32(eax + 0x30) = 0x293E50;
    eax = edi + 2;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0029ADF6u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029ADF6: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x0029ADFFu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0029ADFF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472D68);
    PUSH32(esp, 0x472D58);
    PUSH32(esp, 0x472D48);
    ecx = esi;
    PUSH32(esp, 0x0029AE16u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0029AE16: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_0029AE20
 * Original: 0x0029AE20 - 0x0029AE44 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029AE20(void)
{

loc_0029AE20: ;
    esp = esp - 0x28;
    ecx = esp;
    PUSH32(esp, 0x0029AE2Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029AE2B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4070F8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_0029AE50
 * Original: 0x0029AE50 - 0x0029AE56 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029AE50(void)
{

loc_0029AE50: ;
    eax = MEM32(0x5BE524);
    esp += 4; return; /* ret */

}

/**
 * sub_0029AE60
 * Original: 0x0029AE60 - 0x0029AE9C (60 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029AE60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029AE60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x60;
    ebx = 6;
    /* nop */

loc_0029AE70: ;
    ecx = MEM32(esi + -4);
    esi = esi - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029AE8F; /* je: equal / zero */

loc_0029AE7A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029AE8F; /* jne: not equal / not zero */

loc_0029AE8A: ;
    PUSH32(esp, 0x0029AE8Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029AE8F: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0029AE70; /* jne: not equal / not zero */

loc_0029AE92: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002959E0(); return; /* tail jmp 0x002959E0 */

}

/**
 * sub_0029AEA0
 * Original: 0x0029AEA0 - 0x0029AEC4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029AEA0(void)
{

loc_0029AEA0: ;
    esp = esp - 0x18;
    ecx = esp;
    PUSH32(esp, 0x0029AEABu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029AEAB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x407248;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0029AED0
 * Original: 0x0029AED0 - 0x0029AEFC (44 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029AED0(void)
{

loc_0029AED0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0029AEDBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029AEDB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4072C8;
    MEM32(esp + 0xC) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029AF00
 * Original: 0x0029AF00 - 0x0029AF24 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029AF00(void)
{

loc_0029AF00: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0029AF0Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029AF0B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4073C0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029AF30
 * Original: 0x0029AF30 - 0x0029AF5D (45 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029AF30(void)
{

loc_0029AF30: ;
    esp = esp - 0x50;
    ecx = esp;
    PUSH32(esp, 0x0029AF3Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029AF3B: ;
    ecx = esp + 0xC;
    MEM32(esp) = 0x407440;
    PUSH32(esp, 0x0029AF4Bu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0029AF4B: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_0029AF60
 * Original: 0x0029AF60 - 0x0029B06C (268 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029AF60(void)
{

loc_0029AF60: ;
    esp = esp - 0x80;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE53C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029AF76u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0029AF76: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x472DA0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0029AF86u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0029AF86: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029AF8Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029AF8E: ;
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
    PUSH32(esp, 0x0029B02Du); RECOMP_ABI_CALL(0x001B7D30u, sub_001B7D30); /* call 0x001B7D30 */

loc_0029B02D: ;
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0029B039u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0029B039: ;
    edx = edi + 1;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0029B044u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029B044: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472D98);
    PUSH32(esp, 0x472D90);
    PUSH32(esp, 0x472D88);
    ecx = esi;
    MEM32(eax + 0x30) = 0x293E50;
    PUSH32(esp, 0x0029B062u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0029B062: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B070
 * Original: 0x0029B070 - 0x0029B09C (44 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B070(void)
{

loc_0029B070: ;
    esp = esp - 0x2C;
    ecx = esp;
    PUSH32(esp, 0x0029B07Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B07B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp + 0xC) = 0;
    MEM32(esp) = 0x4074C0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B0A0
 * Original: 0x0029B0A0 - 0x0029B0C4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B0A0(void)
{

loc_0029B0A0: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029B0ABu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B0AB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x407540;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B0D0
 * Original: 0x0029B0D0 - 0x0029B0F4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B0D0(void)
{

loc_0029B0D0: ;
    esp = esp - 0x28;
    ecx = esp;
    PUSH32(esp, 0x0029B0DBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B0DB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4075C0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B100
 * Original: 0x0029B100 - 0x0029B12C (44 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B100(void)
{

loc_0029B100: ;
    esp = esp - 0x20;
    ecx = esp;
    PUSH32(esp, 0x0029B10Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B10B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x407658;
    MEM32(esp + 0x18) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B130
 * Original: 0x0029B130 - 0x0029B154 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B130(void)
{

loc_0029B130: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029B13Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B13B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4076D8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B160
 * Original: 0x0029B160 - 0x0029B18C (44 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B160(void)
{

loc_0029B160: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029B16Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B16B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x407758;
    MEM32(esp + 0xC) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B190
 * Original: 0x0029B190 - 0x0029B1B4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B190(void)
{

loc_0029B190: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029B19Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B19B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4077D0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B1C0
 * Original: 0x0029B1C0 - 0x0029B1E4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B1C0(void)
{

loc_0029B1C0: ;
    esp = esp - 0x20;
    ecx = esp;
    PUSH32(esp, 0x0029B1CBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B1CB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x407848;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B1F0
 * Original: 0x0029B1F0 - 0x0029B214 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B1F0(void)
{

loc_0029B1F0: ;
    esp = esp - 0x1C;
    ecx = esp;
    PUSH32(esp, 0x0029B1FBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B1FB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4078C8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B220
 * Original: 0x0029B220 - 0x0029B24C (44 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B220(void)
{

loc_0029B220: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0029B22Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B22B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x407948;
    MEM32(esp + 0x10) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B250
 * Original: 0x0029B250 - 0x0029B27E (46 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B250(void)
{

loc_0029B250: ;
    esp = esp - 0x44;
    ecx = esp;
    PUSH32(esp, 0x0029B25Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B25B: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x40) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4079C8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B280
 * Original: 0x0029B280 - 0x0029B2AC (44 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B280(void)
{

loc_0029B280: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0029B28Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B28B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x407A40;
    MEM32(esp + 0xC) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B2B0
 * Original: 0x0029B2B0 - 0x0029B2DD (45 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B2B0(void)
{

loc_0029B2B0: ;
    esp = esp - 0x4C;
    ecx = esp;
    PUSH32(esp, 0x0029B2BBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B2BB: ;
    ecx = esp + 0xC;
    MEM32(esp) = 0x407AC8;
    PUSH32(esp, 0x0029B2CBu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0029B2CB: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B2E0
 * Original: 0x0029B2E0 - 0x0029B3DA (250 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B2E0(void)
{

loc_0029B2E0: ;
    esp = esp - 0x80;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE578);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029B2F6u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0029B2F6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x472DB4);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0029B306u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0029B306: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029B30Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029B30E: ;
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
    PUSH32(esp, 0x0029B3ADu); RECOMP_ABI_CALL(0x001B7D30u, sub_001B7D30); /* call 0x001B7D30 */

loc_0029B3AD: ;
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0029B3B9u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0029B3B9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472DB0);
    PUSH32(esp, 0x472DAC);
    PUSH32(esp, 0x472DA8);
    ecx = esi;
    PUSH32(esp, 0x0029B3D0u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0029B3D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B3E0
 * Original: 0x0029B3E0 - 0x0029B404 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B3E0(void)
{

loc_0029B3E0: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029B3EBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B3EB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x407B48;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B410
 * Original: 0x0029B410 - 0x0029B434 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B410(void)
{

loc_0029B410: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029B41Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B41B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x407BC8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B440
 * Original: 0x0029B440 - 0x0029B46C (44 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B440(void)
{

loc_0029B440: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029B44Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B44B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x407C48;
    MEM32(esp + 0xC) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B470
 * Original: 0x0029B470 - 0x0029B4BE (78 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B470(void)
{

loc_0029B470: ;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0029B47Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B47D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x407CD0;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0029B4B7u); RECOMP_ABI_CALL(0x002962B0u, sub_002962B0); /* call 0x002962B0 */

loc_0029B4B7: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B4C0
 * Original: 0x0029B4C0 - 0x0029B4E4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B4C0(void)
{

loc_0029B4C0: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029B4CBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B4CB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x407D48;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B4F0
 * Original: 0x0029B4F0 - 0x0029B4F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B4F0(void)
{

loc_0029B4F0: ;
    eax = MEM32(0x5BE594);
    esp += 4; return; /* ret */

}

/**
 * sub_0029B500
 * Original: 0x0029B500 - 0x0029B52C (44 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B500(void)
{

loc_0029B500: ;
    esp = esp - 0x30;
    ecx = esp;
    PUSH32(esp, 0x0029B50Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B50B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x407DC0;
    MEM32(esp + 0x10) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B530
 * Original: 0x0029B530 - 0x0029B554 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B530(void)
{

loc_0029B530: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029B53Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B53B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x407E40;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B560
 * Original: 0x0029B560 - 0x0029B584 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B560(void)
{

loc_0029B560: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029B56Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B56B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x407EB8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B590
 * Original: 0x0029B590 - 0x0029B5BE (46 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B590(void)
{

loc_0029B590: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0029B59Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B59B: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x407F38;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B5C0
 * Original: 0x0029B5C0 - 0x0029B606 (70 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B5C0(void)
{

loc_0029B5C0: ;
    esp = esp - 0x2C;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0029B5CDu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B5CD: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x407FC8;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0029B5FFu); RECOMP_ABI_CALL(0x002964B0u, sub_002964B0); /* call 0x002964B0 */

loc_0029B5FF: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B610
 * Original: 0x0029B610 - 0x0029B616 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B610(void)
{

loc_0029B610: ;
    eax = MEM32(0x5BE5B0);
    esp += 4; return; /* ret */

}

/**
 * sub_0029B620
 * Original: 0x0029B620 - 0x0029B65E (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029B620: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029B630; /* jne: not equal / not zero */

loc_0029B629: ;
    MEM8(0x5BE708) = 1;

loc_0029B630: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x409C40);
    PUSH32(esp, 0x299E10);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BE5B0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0029B65Au); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029B65A: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B660
 * Original: 0x0029B660 - 0x0029B666 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B660(void)
{

loc_0029B660: ;
    eax = MEM32(0x5BE5B8);
    esp += 4; return; /* ret */

}

/**
 * sub_0029B670
 * Original: 0x0029B670 - 0x0029B69D (45 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B670(void)
{

loc_0029B670: ;
    esp = esp - 0x4C;
    ecx = esp;
    PUSH32(esp, 0x0029B67Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B67B: ;
    ecx = esp + 0xC;
    MEM32(esp) = 0x4080A0;
    PUSH32(esp, 0x0029B68Bu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0029B68B: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B6A0
 * Original: 0x0029B6A0 - 0x0029B6C4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B6A0(void)
{

loc_0029B6A0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0029B6ABu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B6AB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x408120;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B6D0
 * Original: 0x0029B6D0 - 0x0029B6F4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B6D0(void)
{

loc_0029B6D0: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029B6DBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B6DB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x408198;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B700
 * Original: 0x0029B700 - 0x0029B72D (45 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B700(void)
{

loc_0029B700: ;
    esp = esp - 0x50;
    ecx = esp;
    PUSH32(esp, 0x0029B70Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B70B: ;
    ecx = esp + 0xC;
    MEM32(esp) = 0x408218;
    PUSH32(esp, 0x0029B71Bu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0029B71B: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B730
 * Original: 0x0029B730 - 0x0029B754 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B730(void)
{

loc_0029B730: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029B73Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B73B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4082C8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B760
 * Original: 0x0029B760 - 0x0029B784 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B760(void)
{

loc_0029B760: ;
    esp = esp - 0x54;
    ecx = esp;
    PUSH32(esp, 0x0029B76Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B76B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x408340;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B790
 * Original: 0x0029B790 - 0x0029B7B4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B790(void)
{

loc_0029B790: ;
    esp = esp - 0x1C;
    ecx = esp;
    PUSH32(esp, 0x0029B79Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B79B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4083F0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B7C0
 * Original: 0x0029B7C0 - 0x0029B7E4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B7C0(void)
{

loc_0029B7C0: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029B7CBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B7CB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x408468;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B7F0
 * Original: 0x0029B7F0 - 0x0029B814 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B7F0(void)
{

loc_0029B7F0: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029B7FBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B7FB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4084E0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B820
 * Original: 0x0029B820 - 0x0029B826 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B820(void)
{

loc_0029B820: ;
    eax = MEM32(0x5BE5E0);
    esp += 4; return; /* ret */

}

/**
 * sub_0029B830
 * Original: 0x0029B830 - 0x0029B85E (46 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B830(void)
{

loc_0029B830: ;
    esp = esp - 0x18;
    ecx = esp;
    PUSH32(esp, 0x0029B83Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B83B: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x408560;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B860
 * Original: 0x0029B860 - 0x0029B866 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B860(void)
{

loc_0029B860: ;
    eax = MEM32(0x5BE5E8);
    esp += 4; return; /* ret */

}

/**
 * sub_0029B870
 * Original: 0x0029B870 - 0x0029B8A5 (53 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B870(void)
{

loc_0029B870: ;
    esp = esp - 0x94;
    ecx = esp;
    PUSH32(esp, 0x0029B87Eu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B87E: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4085E8;
    MEM32(esp + 0x8C) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x94;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B8B0
 * Original: 0x0029B8B0 - 0x0029B8DE (46 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B8B0(void)
{

loc_0029B8B0: ;
    esp = esp - 0x20;
    ecx = esp;
    PUSH32(esp, 0x0029B8BBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B8BB: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4086F0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B8E0
 * Original: 0x0029B8E0 - 0x0029B904 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B8E0(void)
{

loc_0029B8E0: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029B8EBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B8EB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4087B8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B910
 * Original: 0x0029B910 - 0x0029B952 (66 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B910(void)
{

loc_0029B910: ;
    esp = esp - 0x2C;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0029B91Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B91D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x408830;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0029B94Bu); RECOMP_ABI_CALL(0x002546C0u, sub_002546C0); /* call 0x002546C0 */

loc_0029B94B: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B960
 * Original: 0x0029B960 - 0x0029B966 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B960(void)
{

loc_0029B960: ;
    eax = MEM32(0x5BE5FC);
    esp += 4; return; /* ret */

}

/**
 * sub_0029B970
 * Original: 0x0029B970 - 0x0029B978 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B970(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029B970: ;
    ecx = MEM32(ecx + 0x30);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x64)); return; /* indirect tail jmp */

}

/**
 * sub_0029B980
 * Original: 0x0029B980 - 0x0029B993 (19 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029B980: ;
    ecx = MEM32(ecx + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0029B990; /* je: equal / zero */

loc_0029B98D: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0029B990: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029B9A0
 * Original: 0x0029B9A0 - 0x0029B9C4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B9A0(void)
{

loc_0029B9A0: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029B9ABu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B9AB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4088C0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B9D0
 * Original: 0x0029B9D0 - 0x0029B9F4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B9D0(void)
{

loc_0029B9D0: ;
    esp = esp - 0x2C;
    ecx = esp;
    PUSH32(esp, 0x0029B9DBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029B9DB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x408940;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BA00
 * Original: 0x0029BA00 - 0x0029BA24 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BA00(void)
{

loc_0029BA00: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0029BA0Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BA0B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4089D8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BA30
 * Original: 0x0029BA30 - 0x0029BA54 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BA30(void)
{

loc_0029BA30: ;
    esp = esp - 0x18;
    ecx = esp;
    PUSH32(esp, 0x0029BA3Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BA3B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x408A88;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BA60
 * Original: 0x0029BA60 - 0x0029BA8C (44 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BA60(void)
{

loc_0029BA60: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029BA6Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BA6B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x408B08;
    MEM32(esp + 0xC) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BA90
 * Original: 0x0029BA90 - 0x0029BAB4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BA90(void)
{

loc_0029BA90: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029BA9Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BA9B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x408B90;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BAC0
 * Original: 0x0029BAC0 - 0x0029BAE4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BAC0(void)
{

loc_0029BAC0: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029BACBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BACB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x408C10;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BAF0
 * Original: 0x0029BAF0 - 0x0029BB14 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BAF0(void)
{

loc_0029BAF0: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029BAFBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BAFB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x408C90;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BB20
 * Original: 0x0029BB20 - 0x0029BB44 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BB20(void)
{

loc_0029BB20: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029BB2Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BB2B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x408D08;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BB50
 * Original: 0x0029BB50 - 0x0029BB74 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BB50(void)
{

loc_0029BB50: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029BB5Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BB5B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x408D88;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BB80
 * Original: 0x0029BB80 - 0x0029BBA4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BB80(void)
{

loc_0029BB80: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029BB8Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BB8B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x408E08;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BBB0
 * Original: 0x0029BBB0 - 0x0029BBD4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BBB0(void)
{

loc_0029BBB0: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029BBBBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BBBB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x408E88;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BBE0
 * Original: 0x0029BBE0 - 0x0029BC04 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BBE0(void)
{

loc_0029BBE0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0029BBEBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BBEB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x408F00;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BC10
 * Original: 0x0029BC10 - 0x0029BC52 (66 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BC10(void)
{

loc_0029BC10: ;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0029BC1Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BC1D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x408F80;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0029BC4Bu); RECOMP_ABI_CALL(0x002973A0u, sub_002973A0); /* call 0x002973A0 */

loc_0029BC4B: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BC60
 * Original: 0x0029BC60 - 0x0029BC84 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BC60(void)
{

loc_0029BC60: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029BC6Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BC6B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x408FF8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BC90
 * Original: 0x0029BC90 - 0x0029BCB4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BC90(void)
{

loc_0029BC90: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0029BC9Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BC9B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x409070;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BCC0
 * Original: 0x0029BCC0 - 0x0029BCE4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BCC0(void)
{

loc_0029BCC0: ;
    esp = esp - 0x20;
    ecx = esp;
    PUSH32(esp, 0x0029BCCBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BCCB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4090F0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BCF0
 * Original: 0x0029BCF0 - 0x0029BD14 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BCF0(void)
{

loc_0029BCF0: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029BCFBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BCFB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x409180;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BD20
 * Original: 0x0029BD20 - 0x0029BD44 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BD20(void)
{

loc_0029BD20: ;
    esp = esp - 0x48;
    ecx = esp;
    PUSH32(esp, 0x0029BD2Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BD2B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x409200;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BD50
 * Original: 0x0029BD50 - 0x0029BD74 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BD50(void)
{

loc_0029BD50: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029BD5Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BD5B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4092A8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BD80
 * Original: 0x0029BD80 - 0x0029BDA4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BD80(void)
{

loc_0029BD80: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029BD8Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BD8B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x409320;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BDB0
 * Original: 0x0029BDB0 - 0x0029BDD4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BDB0(void)
{

loc_0029BDB0: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029BDBBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BDBB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x409398;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BDE0
 * Original: 0x0029BDE0 - 0x0029BDE6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BDE0(void)
{

loc_0029BDE0: ;
    eax = MEM32(0x5BE670);
    esp += 4; return; /* ret */

}

/**
 * sub_0029BDF0
 * Original: 0x0029BDF0 - 0x0029BE14 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BDF0(void)
{

loc_0029BDF0: ;
    esp = esp - 0x1C;
    ecx = esp;
    PUSH32(esp, 0x0029BDFBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BDFB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x409418;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BE20
 * Original: 0x0029BE20 - 0x0029BE44 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BE20(void)
{

loc_0029BE20: ;
    esp = esp - 0x18;
    ecx = esp;
    PUSH32(esp, 0x0029BE2Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BE2B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x409490;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BE50
 * Original: 0x0029BE50 - 0x0029BE7C (44 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BE50(void)
{

loc_0029BE50: ;
    esp = esp - 0x34;
    ecx = esp;
    PUSH32(esp, 0x0029BE5Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BE5B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x409508;
    MEM32(esp + 0x18) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BE80
 * Original: 0x0029BE80 - 0x0029BE86 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BE80(void)
{

loc_0029BE80: ;
    eax = MEM32(0x5BE530);
    esp += 4; return; /* ret */

}

/**
 * sub_0029BE90
 * Original: 0x0029BE90 - 0x0029BE96 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BE90(void)
{

loc_0029BE90: ;
    eax = MEM32(0x5BE600);
    esp += 4; return; /* ret */

}

/**
 * sub_0029BEA0
 * Original: 0x0029BEA0 - 0x0029BEE2 (66 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BEA0(void)
{

loc_0029BEA0: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0029BEADu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BEAD: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x409600;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0029BEDBu); RECOMP_ABI_CALL(0x00297A30u, sub_00297A30); /* call 0x00297A30 */

loc_0029BEDB: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BEF0
 * Original: 0x0029BEF0 - 0x0029BF2E (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029BEF0: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029BF00; /* jne: not equal / not zero */

loc_0029BEF9: ;
    MEM8(0x5BE708) = 1;

loc_0029BF00: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x409CF8);
    PUSH32(esp, 0x299530);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BE690);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0029BF2Au); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029BF2A: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BF30
 * Original: 0x0029BF30 - 0x0029BF36 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BF30(void)
{

loc_0029BF30: ;
    eax = MEM32(0x5BE6A0);
    esp += 4; return; /* ret */

}

/**
 * sub_0029BF40
 * Original: 0x0029BF40 - 0x0029BF64 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BF40(void)
{

loc_0029BF40: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029BF4Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BF4B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x409658;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BF70
 * Original: 0x0029BF70 - 0x0029BF94 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BF70(void)
{

loc_0029BF70: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0029BF7Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BF7B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4096D8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BFA0
 * Original: 0x0029BFA0 - 0x0029BFC4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BFA0(void)
{

loc_0029BFA0: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029BFABu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BFAB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x409758;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BFD0
 * Original: 0x0029BFD0 - 0x0029BFF4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BFD0(void)
{

loc_0029BFD0: ;
    esp = esp - 0x50;
    ecx = esp;
    PUSH32(esp, 0x0029BFDBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029BFDB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4097D8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_0029C000
 * Original: 0x0029C000 - 0x0029C024 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C000(void)
{

loc_0029C000: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029C00Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029C00B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x409870;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029C030
 * Original: 0x0029C030 - 0x0029C054 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C030(void)
{

loc_0029C030: ;
    esp = esp - 0x20;
    ecx = esp;
    PUSH32(esp, 0x0029C03Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029C03B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4098E8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0029C060
 * Original: 0x0029C060 - 0x0029C084 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C060(void)
{

loc_0029C060: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x0029C06Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029C06B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x409960;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0029C090
 * Original: 0x0029C090 - 0x0029C0B4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C090(void)
{

loc_0029C090: ;
    esp = esp - 0x18;
    ecx = esp;
    PUSH32(esp, 0x0029C09Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029C09B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4099D8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0029C0C0
 * Original: 0x0029C0C0 - 0x0029C114 (84 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029C0C0: ;
    eax = MEM32(0x5BE6A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C0D4; /* je: equal / zero */

loc_0029C0C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029C0E6; /* jne: not equal / not zero */

loc_0029C0D4: ;
    PUSH32(esp, 0x29E140);
    PUSH32(esp, 0x0029C0DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029C0DE: ;
    eax = MEM32(0x5BE6A0);
    esp = esp + 4;

loc_0029C0E6: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0029C0F3u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0029C0F3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C112; /* je: equal / zero */

loc_0029C0F7: ;
    SET_LO8(eax, MEM8(esi + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029C112; /* jne: not equal / not zero */

loc_0029C0FE: ;
    SET_LO16(eax, MEM16(0x5BE6C8));
    ecx = SX16(LO16(eax));
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM16(0x5BE6C8) = LO16(eax);
    MEM32(esi + 8) = ecx;

loc_0029C112: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0029C120
 * Original: 0x0029C120 - 0x0029C129 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C120(void)
{

loc_0029C120: ;
    eax = MEM32(0x5BE6F8);
    eax = MEM32(eax + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_0029C130
 * Original: 0x0029C130 - 0x0029C15C (44 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029C130: ;
    eax = MEM32(0x5BE6F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C15B; /* je: equal / zero */

loc_0029C139: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029C151; /* jne: not equal / not zero */

loc_0029C14C: ;
    PUSH32(esp, 0x0029C151u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029C151: ;
    MEM32(0x5BE6F8) = 0;

loc_0029C15B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029C160
 * Original: 0x0029C160 - 0x0029C1B3 (83 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029C160: ;
    eax = MEM32(0x5BE6A0);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0029C172u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0029C172: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0029C17Eu); RECOMP_ABI_CALL(0x0021AC40u, sub_0021AC40); /* call 0x0021AC40 */

loc_0029C17E: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = MEM32(esp + 8);
    MEM32(esi) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0029C18D; /* je: equal / zero */

loc_0029C18A: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0029C18D: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0029C1AD; /* je: equal / zero */

loc_0029C197: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029C1AD; /* jne: not equal / not zero */

loc_0029C1A8: ;
    PUSH32(esp, 0x0029C1ADu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029C1AD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0029C1C0
 * Original: 0x0029C1C0 - 0x0029C1F3 (51 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029C1C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0029C1CF; /* je: equal / zero */

loc_0029C1CC: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0029C1CF: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C1EB; /* je: equal / zero */

loc_0029C1D6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029C1EB; /* jne: not equal / not zero */

loc_0029C1E6: ;
    PUSH32(esp, 0x0029C1EBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029C1EB: ;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029C200
 * Original: 0x0029C200 - 0x0029C262 (98 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C200(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029C200: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029C259; /* jne: not equal / not zero */

loc_0029C20A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0029C210u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0029C210: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029C216u); RECOMP_ABI_CALL(0x001DECD0u, sub_001DECD0); /* call 0x001DECD0 */

loc_0029C216: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C222; /* je: equal / zero */

loc_0029C21F: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0029C222: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C23E; /* je: equal / zero */

loc_0029C229: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029C23E; /* jne: not equal / not zero */

loc_0029C239: ;
    PUSH32(esp, 0x0029C23Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029C23E: ;
    ecx = edi;
    MEM32(esi + 0xC) = edi;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0029C259; /* jne: not equal / not zero */

loc_0029C254: ;
    PUSH32(esp, 0x0029C259u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029C259: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x54)); return; /* indirect tail jmp */

}

/**
 * sub_0029C270
 * Original: 0x0029C270 - 0x0029C30D (157 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029C270: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0029C298; /* je: equal / zero */

loc_0029C28E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029C298; /* je: equal / zero */

loc_0029C293: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029C306; /* jne: not equal / not zero */

loc_0029C298: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029C2F4; /* jne: not equal / not zero */

loc_0029C29F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029C2A7u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0029C2A7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029C2ADu); RECOMP_ABI_CALL(0x001DC230u, sub_001DC230); /* call 0x001DC230 */

loc_0029C2AD: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C2B9; /* je: equal / zero */

loc_0029C2B6: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0029C2B9: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C2D5; /* je: equal / zero */

loc_0029C2C0: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029C2D5; /* jne: not equal / not zero */

loc_0029C2D0: ;
    PUSH32(esp, 0x0029C2D5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029C2D5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 0x30) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0029C2F3; /* je: equal / zero */

loc_0029C2DC: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029C2F3; /* jne: not equal / not zero */

loc_0029C2EC: ;
    ecx = edi;
    PUSH32(esp, 0x0029C2F3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029C2F3: ;
    POP32(esp, edi);

loc_0029C2F4: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0029C306; /* jae: above or equal (unsigned >=) */

loc_0029C2FC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0029C306u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029C306: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0029C310
 * Original: 0x0029C310 - 0x0029C39A (138 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029C310: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029C36C; /* jne: not equal / not zero */

loc_0029C31B: ;
    PUSH32(esp, 0x0029C320u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0029C320: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029C326u); RECOMP_ABI_CALL(0x001DC230u, sub_001DC230); /* call 0x001DC230 */

loc_0029C326: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C332; /* je: equal / zero */

loc_0029C32F: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0029C332: ;
    ecx = MEM32(edi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C34E; /* je: equal / zero */

loc_0029C339: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029C34E; /* jne: not equal / not zero */

loc_0029C349: ;
    PUSH32(esp, 0x0029C34Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029C34E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi + 0x30) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0029C36C; /* je: equal / zero */

loc_0029C355: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029C36C; /* jne: not equal / not zero */

loc_0029C365: ;
    ecx = esi;
    PUSH32(esp, 0x0029C36Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029C36C: ;
    ecx = MEM32(edi + 0x30);
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx + 0xC);
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0029C387; /* jbe: below or equal (unsigned <=) */

loc_0029C37D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0029C387u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029C387: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(edi + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0029C395u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029C395: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0029C3A0
 * Original: 0x0029C3A0 - 0x0029C4B6 (278 bytes, 107 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C3A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029C3A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0029C3AAu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0029C3AA: ;
    eax = MEM32(esi);
    ebp = 0; /* xor self */
    ecx = esi;
    MEM16(esi + 0xA) = LO16(ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0029C3B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029C3B7: ;
    SET_LO16(ecx, MEM16(eax + 8));
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), ebp (32-bit) */
    MEM16(esi + 8) = LO16(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0029C3CD; /* jne: not equal / not zero */

loc_0029C3C4: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029C4B2; /* je: equal / zero */

loc_0029C3CD: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0029C3D5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029C3D5: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), ebp (32-bit) */
    eax = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0029C3E3; /* je: equal / zero */

loc_0029C3DC: ;
    eax = eax | 0x400000;
    goto loc_0029C3E8;

loc_0029C3E3: ;
    eax = eax & 0xFFBFFFFFu;

loc_0029C3E8: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029C3F4; /* je: equal / zero */

loc_0029C3ED: ;
    eax = eax | 0x800000;
    goto loc_0029C3F9;

loc_0029C3F4: ;
    eax = eax & 0xFF7FFFFFu;

loc_0029C3F9: ;
    ecx = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    edx = MEM32(ecx + 0x14);
    ebx = MEM32(ecx + 0xC);
    eax = MEM32(ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xE8); PUSH32(esp, 0x0029C418u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029C418: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029C461; /* je: equal / zero */

loc_0029C41D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0029C440; /* jbe: below or equal (unsigned <=) */

loc_0029C423: ;
    edx = MEM32(esi + 0x2C);
    edx = MEM32(edx + 0x10);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    edx = edx + ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0029C438u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029C438: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029C423; /* jb: below (unsigned <) */

loc_0029C440: ;
    ecx = MEM32(esi + 0x2C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029C45E; /* je: equal / zero */

loc_0029C449: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029C45E; /* jne: not equal / not zero */

loc_0029C459: ;
    PUSH32(esp, 0x0029C45Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029C45E: ;
    MEM32(esi + 0x2C) = ebp;

loc_0029C461: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029C4B0; /* je: equal / zero */

loc_0029C466: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0029C48D; /* jbe: below or equal (unsigned <=) */

loc_0029C46C: ;
    /* nop */

loc_0029C470: ;
    edx = MEM32(esi + 0x28);
    edx = MEM32(edx + 0x10);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    edx = edx + ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x0029C485u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029C485: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029C470; /* jb: below (unsigned <) */

loc_0029C48D: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C4A9; /* je: equal / zero */

loc_0029C494: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029C4A9; /* jne: not equal / not zero */

loc_0029C4A4: ;
    PUSH32(esp, 0x0029C4A9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029C4A9: ;
    MEM32(esi + 0x28) = 0;

loc_0029C4B0: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0029C4B2: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0029C4C0
 * Original: 0x0029C4C0 - 0x0029C562 (162 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C4C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029C4C0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0029C4E6; /* jbe: below or equal (unsigned <=) */

loc_0029C4D4: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 0x10);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0029C4E6: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0029C4ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029C4EC: ;
    eax = MEM32(eax);
    ecx = eax;
    ecx = ecx >> 0x17;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    MEM32(esp + 0xC) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0029C521; /* jne: not equal / not zero */

loc_0029C4FC: ;
    ecx = MEM32(ebx + 0xC);
    eax = eax | 0x800000;
    MEM32(esp + 0xC) = eax;
    edx = MEM32(ecx);
    eax = ecx;
    esi = MEM32(eax + 0x14);
    eax = MEM32(eax + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x0029C521u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029C521: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0029C54F; /* jbe: below or equal (unsigned <=) */

loc_0029C527: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    /* nop */

loc_0029C530: ;
    eax = MEM32(esp + 0x1C);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(ecx);
    eax = eax + edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0029C546u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029C546: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029C530; /* jb: below (unsigned <) */

loc_0029C54E: ;
    POP32(esp, edi);

loc_0029C54F: ;
    ecx = MEM32(0x5BC5D8);
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0029C570
 * Original: 0x0029C570 - 0x0029C612 (162 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C570(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029C570: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0029C596; /* jbe: below or equal (unsigned <=) */

loc_0029C584: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 0x10);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0029C596: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0029C59Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029C59C: ;
    eax = MEM32(eax);
    ecx = eax;
    ecx = ecx >> 0x16;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    MEM32(esp + 0xC) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0029C5D1; /* jne: not equal / not zero */

loc_0029C5AC: ;
    ecx = MEM32(ebx + 0xC);
    eax = eax | 0x400000;
    MEM32(esp + 0xC) = eax;
    edx = MEM32(ecx);
    eax = ecx;
    esi = MEM32(eax + 0x14);
    eax = MEM32(eax + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x0029C5D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029C5D1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0029C5FF; /* jbe: below or equal (unsigned <=) */

loc_0029C5D7: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    /* nop */

loc_0029C5E0: ;
    eax = MEM32(esp + 0x1C);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(ecx);
    eax = eax + edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0029C5F6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029C5F6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029C5E0; /* jb: below (unsigned <) */

loc_0029C5FE: ;
    POP32(esp, edi);

loc_0029C5FF: ;
    ecx = MEM32(0x5BC5D8);
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0029C620
 * Original: 0x0029C620 - 0x0029C6BD (157 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029C620: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0029C648; /* je: equal / zero */

loc_0029C63E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029C648; /* je: equal / zero */

loc_0029C643: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029C6B6; /* jne: not equal / not zero */

loc_0029C648: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029C6A4; /* jne: not equal / not zero */

loc_0029C64F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029C657u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0029C657: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029C65Du); RECOMP_ABI_CALL(0x001DC230u, sub_001DC230); /* call 0x001DC230 */

loc_0029C65D: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C669; /* je: equal / zero */

loc_0029C666: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0029C669: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C685; /* je: equal / zero */

loc_0029C670: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029C685; /* jne: not equal / not zero */

loc_0029C680: ;
    PUSH32(esp, 0x0029C685u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029C685: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 0x14) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0029C6A3; /* je: equal / zero */

loc_0029C68C: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029C6A3; /* jne: not equal / not zero */

loc_0029C69C: ;
    ecx = edi;
    PUSH32(esp, 0x0029C6A3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029C6A3: ;
    POP32(esp, edi);

loc_0029C6A4: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0029C6B6; /* jae: above or equal (unsigned >=) */

loc_0029C6AC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0029C6B6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029C6B6: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0029C6C0
 * Original: 0x0029C6C0 - 0x0029C7A3 (227 bytes, 90 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C6C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029C6C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebp = ecx;
    ecx = edi;
    PUSH32(esp, 0x0029C6D0u); RECOMP_ABI_CALL(0x001BD920u, sub_001BD920); /* call 0x001BD920 */

loc_0029C6D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0029C6E7; /* jge: greater or equal (signed >=) */

loc_0029C6D8: ;
    POP32(esp, edi);
    MEM32(ebp + 0x18) = 0;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0029C6E7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0029C6F1u); RECOMP_ABI_CALL(0x001C9540u, sub_001C9540); /* call 0x001C9540 */

loc_0029C6F1: ;
    eax = MEM32(ebp + 0x14);
    esi = MEM32(eax + 0x10);
    eax = MEM32(eax + 8);
    ebx = esi + eax * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM8(esp + 0x18) = 1;
    if (CMP_AE(_fa, _fb)) goto loc_0029C72E; /* jae: above or equal (unsigned >=) */

loc_0029C706: ;
    ecx = MEM32(0x5BE600);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x0029C714u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0029C714: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C729; /* je: equal / zero */

loc_0029C718: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0029C720u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029C720: ;
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029C706; /* jb: below (unsigned <) */

loc_0029C727: ;
    goto loc_0029C72E;

loc_0029C729: ;
    MEM8(esp + 0x18) = 0;

loc_0029C72E: ;
    ecx = edi;
    PUSH32(esp, 0x0029C735u); RECOMP_ABI_CALL(0x001DD3A0u, sub_001DD3A0); /* call 0x001DD3A0 */

loc_0029C735: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C784; /* je: equal / zero */

loc_0029C739: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C784; /* je: equal / zero */

loc_0029C741: ;
    eax = MEM32(ebp);
    PUSH32(esp, edi);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0029C74Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029C74A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 2 (32-bit) */
    ecx = MEM32(esp + 0x10);
    MEM32(ebp + 0x10) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0029C797; /* jne: not equal / not zero */

loc_0029C757: ;
    ebp = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 8);
    edi = esi + edx * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0029C797; /* jae: above or equal (unsigned >=) */

loc_0029C767: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0029C771u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029C771: ;
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029C767; /* jb: below (unsigned <) */

loc_0029C778: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0029C784: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0029C790u); RECOMP_ABI_CALL(0x001C9510u, sub_001C9510); /* call 0x001C9510 */

loc_0029C790: ;
    MEM32(ebp + 0x18) = 0;

loc_0029C797: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029C7B0
 * Original: 0x0029C7B0 - 0x0029C816 (102 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029C7B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C7E9; /* je: equal / zero */

loc_0029C7C1: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029C7CF; /* jne: not equal / not zero */

loc_0029C7C7: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0029C7CFu); RECOMP_ABI_CALL(0x0029C6C0u, sub_0029C6C0); /* call 0x0029C6C0 */

loc_0029C7CF: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0029C7E5; /* jl: less (signed <) */

loc_0029C7D6: ;
    SET_LO8(edx, MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C7E5; /* je: equal / zero */

loc_0029C7DD: ;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0029C7E5u); RECOMP_ABI_CALL(0x001C9570u, sub_001C9570); /* call 0x001C9570 */

loc_0029C7E5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029C811; /* jne: not equal / not zero */

loc_0029C7E9: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C811; /* je: equal / zero */

loc_0029C7F0: ;
    eax = MEM32(esi + 0x14);
    esi = MEM32(eax + 0x10);
    eax = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = esi + eax * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0029C810; /* jae: above or equal (unsigned >=) */

loc_0029C801: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0029C809u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029C809: ;
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029C801; /* jb: below (unsigned <) */

loc_0029C810: ;
    POP32(esp, edi);

loc_0029C811: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029C820
 * Original: 0x0029C820 - 0x0029C835 (21 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C820(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029C820: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C832; /* je: equal / zero */

loc_0029C827: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029C832; /* jne: not equal / not zero */

loc_0029C82D: ;
    g_seh_ebp = ebp; sub_0029C6C0(); return; /* tail jmp 0x0029C6C0 */

loc_0029C832: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029C840
 * Original: 0x0029C840 - 0x0029C8AE (110 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029C840: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C86E; /* je: equal / zero */

loc_0029C84A: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0029C86D; /* jle: less or equal (signed <=) */

loc_0029C854: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + edi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0029C862u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029C862: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0029C854; /* jl: less (signed <) */

loc_0029C86D: ;
    POP32(esp, edi);

loc_0029C86E: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029C882; /* je: equal / zero */

loc_0029C876: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x308); PUSH32(esp, 0x0029C882u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029C882: ;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C8A5; /* je: equal / zero */

loc_0029C890: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029C8A5; /* jne: not equal / not zero */

loc_0029C8A0: ;
    PUSH32(esp, 0x0029C8A5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029C8A5: ;
    MEM32(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0029C8B0
 * Original: 0x0029C8B0 - 0x0029C9E0 (304 bytes, 119 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029C8B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_0029C8FF; /* jne: not equal / not zero */

loc_0029C8BE: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0029C8C9u); RECOMP_ABI_CALL(0x001C0330u, sub_001C0330); /* call 0x001C0330 */

loc_0029C8C9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0029C8D3; /* je: equal / zero */

loc_0029C8D0: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0029C8D3: ;
    ecx = MEM32(esi + 0x8C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C8F2; /* je: equal / zero */

loc_0029C8DD: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029C8F2; /* jne: not equal / not zero */

loc_0029C8ED: ;
    PUSH32(esp, 0x0029C8F2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029C8F2: ;
    MEM32(esi + 0x8C) = edi;
    MEM8(esi + 0x90) = 1;

loc_0029C8FF: ;
    SET_LO8(eax, MEM8(esi + 0x91));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C913; /* je: equal / zero */

loc_0029C909: ;
    SET_LO8(eax, MEM8(esi + 0x90));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C987; /* je: equal / zero */

loc_0029C913: ;
    edx = MEM32(esi + 0x10);
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0029C922u); RECOMP_ABI_CALL(0x001C04A0u, sub_001C04A0); /* call 0x001C04A0 */

loc_0029C922: ;
    ecx = MEM32(esi + 0x10);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0029C931u); RECOMP_ABI_CALL(0x001C0410u, sub_001C0410); /* call 0x001C0410 */

loc_0029C931: ;
    eax = MEM32(esi + 0x10);
    edx = esi + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0029C940u); RECOMP_ABI_CALL(0x001C0530u, sub_001C0530); /* call 0x001C0530 */

loc_0029C940: ;
    eax = MEM32(esi + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0029C971; /* je: equal / zero */

loc_0029C946: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0029C980; /* jne: not equal / not zero */

loc_0029C949: ;
    ecx = MEM32(esi + 0x60);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0029C958u); RECOMP_ABI_CALL(0x001C0760u, sub_001C0760); /* call 0x001C0760 */

loc_0029C958: ;
    eax = MEM32(esi + 0x5C);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0029C967u); RECOMP_ABI_CALL(0x001C07F0u, sub_001C07F0); /* call 0x001C07F0 */

loc_0029C967: ;
    eax = MEM32(esi + 0x10);
    edx = esi + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_0029C979;

loc_0029C971: ;
    edx = MEM32(esi + 0x10);
    ecx = esi + 0x64;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);

loc_0029C979: ;
    ecx = edi;
    PUSH32(esp, 0x0029C980u); RECOMP_ABI_CALL(0x001C08C0u, sub_001C08C0); /* call 0x001C08C0 */

loc_0029C980: ;
    MEM8(esi + 0x90) = 0;

loc_0029C987: ;
    eax = MEM32(esi + 0xC);
    eax = eax - 0;
    if ((eax == 0)) goto loc_0029C9CC; /* je: equal / zero */

loc_0029C98F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0029C9B8; /* je: equal / zero */

loc_0029C992: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0029C9DB; /* jne: not equal / not zero */

loc_0029C995: ;
    ecx = MEM32(esi + 0x10);
    eax = esi + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0029C9A4u); RECOMP_ABI_CALL(0x001C0680u, sub_001C0680); /* call 0x001C0680 */

loc_0029C9A4: ;
    eax = MEM32(esi + 0x10);
    edx = esi + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0029C9B3u); RECOMP_ABI_CALL(0x001C05C0u, sub_001C05C0); /* call 0x001C05C0 */

loc_0029C9B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0029C9B8: ;
    edx = MEM32(esi + 0x10);
    ecx = esi + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0029C9C7u); RECOMP_ABI_CALL(0x001C05C0u, sub_001C05C0); /* call 0x001C05C0 */

loc_0029C9C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0029C9CC: ;
    ecx = MEM32(esi + 0x10);
    eax = esi + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0029C9DBu); RECOMP_ABI_CALL(0x001C0680u, sub_001C0680); /* call 0x001C0680 */

loc_0029C9DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029C9E0
 * Original: 0x0029C9E0 - 0x0029CA3E (94 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029C9E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029C9FE; /* je: equal / zero */

loc_0029C9EB: ;
    ecx = MEM32(esi + 0x8C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029C9FE; /* je: equal / zero */

loc_0029C9F5: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x138); PUSH32(esp, 0x0029C9FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029C9FE: ;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    ecx = MEM32(esi + 0x8C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029CA24; /* je: equal / zero */

loc_0029CA0F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029CA24; /* jne: not equal / not zero */

loc_0029CA1F: ;
    PUSH32(esp, 0x0029CA24u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029CA24: ;
    MEM32(esi + 0x8C) = 0;
    SET_LO8(eax, 1);
    MEM8(esi + 0x90) = LO8(eax);
    MEM8(esi + 0x91) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0029CA40
 * Original: 0x0029CA40 - 0x0029CA49 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029CA40(void)
{

loc_0029CA40: ;
    eax = MEM32(0x5BE700);
    eax = MEM32(eax + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_0029CA50
 * Original: 0x0029CA50 - 0x0029CA7C (44 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029CA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029CA50: ;
    eax = MEM32(0x5BE700);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029CA7B; /* je: equal / zero */

loc_0029CA59: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029CA71; /* jne: not equal / not zero */

loc_0029CA6C: ;
    PUSH32(esp, 0x0029CA71u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029CA71: ;
    MEM32(0x5BE700) = 0;

loc_0029CA7B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029CA80
 * Original: 0x0029CA80 - 0x0029CAC1 (65 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029CA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029CA80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0029CA8F; /* je: equal / zero */

loc_0029CA8C: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0029CA8F: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029CAAB; /* je: equal / zero */

loc_0029CA96: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029CAAB; /* jne: not equal / not zero */

loc_0029CAA6: ;
    PUSH32(esp, 0x0029CAABu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029CAAB: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x14) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0029CAD0
 * Original: 0x0029CAD0 - 0x0029CBD2 (258 bytes, 88 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029CAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029CAD0: ;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029CBCB; /* je: equal / zero */

loc_0029CAE1: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    ecx = edi;
    PUSH32(esp, 0x0029CAEDu); RECOMP_ABI_CALL(0x001AF340u, sub_001AF340); /* call 0x001AF340 */

loc_0029CAED: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esi + 0x1C) = eax;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0029CBA4; /* jge: greater or equal (signed >=) */

loc_0029CAFB: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029CB59; /* je: equal / zero */

loc_0029CB01: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0029CB13u); RECOMP_ABI_CALL(0x001BCF30u, sub_001BCF30); /* call 0x001BCF30 */

loc_0029CB13: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esi + 0x1C);
    eax = MEM32(esp + 0x30);
    MEM32(esi + 0x2C) = ecx;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x0029CB2Cu); RECOMP_ABI_CALL(0x001BCF90u, sub_001BCF90); /* call 0x001BCF90 */

loc_0029CB2C: ;
    MEM32(esi + 0x30) = eax;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0029CB3Au); RECOMP_ABI_CALL(0x001BCFD0u, sub_001BCFD0); /* call 0x001BCFD0 */

loc_0029CB3A: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0x0029CB48u); RECOMP_ABI_CALL(0x001BCFB0u, sub_001BCFB0); /* call 0x001BCFB0 */

loc_0029CB48: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esi + 0x38) = eax;
    PUSH32(esp, 0x0029CB56u); RECOMP_ABI_CALL(0x001BCFF0u, sub_001BCFF0); /* call 0x001BCFF0 */

loc_0029CB56: ;
    MEM32(esi + 0x3C) = eax;

loc_0029CB59: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029CB64; /* jne: not equal / not zero */

loc_0029CB5F: ;
    eax = MEM32(esi + 0x1C);
    goto loc_0029CBA1;

loc_0029CB64: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(esi + 0x2C);
    eax = MEM32(esi + 0x30);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esi + 0x34);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esi + 0x38);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esi + 0x24);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi + 0x3C);
    edx = esp + 0xC;
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x0029CBA1u); RECOMP_ABI_CALL(0x001BCD60u, sub_001BCD60); /* call 0x001BCD60 */

loc_0029CBA1: ;
    MEM32(esi + 0x14) = eax;

loc_0029CBA4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029CBAB; /* je: equal / zero */

loc_0029CBA8: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0029CBAB: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029CBC7; /* je: equal / zero */

loc_0029CBB2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029CBC7; /* jne: not equal / not zero */

loc_0029CBC2: ;
    PUSH32(esp, 0x0029CBC7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029CBC7: ;
    MEM32(esi + 0x40) = edi;
    POP32(esp, edi);

loc_0029CBCB: ;
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029CBE0
 * Original: 0x0029CBE0 - 0x0029CC2C (76 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029CBE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029CBE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029CC2A; /* je: equal / zero */

loc_0029CBE9: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029CC00; /* je: equal / zero */

loc_0029CBF0: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0029CC00; /* jl: less (signed <) */

loc_0029CBF7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x0029CC00u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029CC00: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029CC1C; /* je: equal / zero */

loc_0029CC07: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029CC1C; /* jne: not equal / not zero */

loc_0029CC17: ;
    PUSH32(esp, 0x0029CC1Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029CC1C: ;
    MEM32(esi + 0x40) = 0;
    MEM32(esi + 0x14) = 0xFFFFFFFFu;

loc_0029CC2A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0029CC30
 * Original: 0x0029CC30 - 0x0029CC73 (67 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029CC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029CC30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029CC47; /* je: equal / zero */

loc_0029CC3B: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x308); PUSH32(esp, 0x0029CC47u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029CC47: ;
    MEM32(esi + 0xC) = 0xFFFFFFFFu;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029CC6A; /* je: equal / zero */

loc_0029CC55: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029CC6A; /* jne: not equal / not zero */

loc_0029CC65: ;
    PUSH32(esp, 0x0029CC6Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029CC6A: ;
    MEM32(esi + 0x10) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0029CC80
 * Original: 0x0029CC80 - 0x0029CD63 (227 bytes, 88 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029CC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029CC80: ;
    eax = 0x2000;
    PUSH32(esp, 0x0029CC8Au); RECOMP_ABI_CALL(0x00341D40u, sub_00341D40); /* call 0x00341D40 */

loc_0029CC8A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x200C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029CCAA; /* jne: not equal / not zero */

loc_0029CC9A: ;
    eax = MEM32(0x46A670);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029CCA5u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0029CCA5: ;
    esp = esp + 4;
    ebx = eax;

loc_0029CCAA: ;
    edi = MEM32(esi + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029CCB4; /* je: equal / zero */

loc_0029CCB1: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0029CCB4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    eax = 0x409D2C;
    if (TEST_Z(_fa, _fb)) goto loc_0029CCCD; /* je: equal / zero */

loc_0029CCBD: ;
    ecx = MEM32(edi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029CCCD; /* je: equal / zero */

loc_0029CCC4: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0029CCCAu); RECOMP_ABI_CALL(0x00294500u, sub_00294500); /* call 0x00294500 */

loc_0029CCCA: ;
    esp = esp + 4;

loc_0029CCCD: ;
    ecx = ZX8(MEM8(esi + 0x34));
    edx = MEM32(esi + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, 0x409D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029CCFEu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0029CCFE: ;
    eax = esp + 0x38;
    esp = esp + 0x2C;
    edx = eax + 1;

loc_0029CD08: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029CD08; /* jne: not equal / not zero */

loc_0029CD0F: ;
    eax = eax - edx;
    edx = MEM32(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x0029CD1Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029CD1D: ;
    esi = eax;
    eax = esp + 0xC;
    edx = esi;
    ecx = eax;
    edx = edx - ecx;
    /* nop */

loc_0029CD30: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029CD30; /* jne: not equal / not zero */

loc_0029CD3A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029CD55; /* je: equal / zero */

loc_0029CD3E: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029CD55; /* jne: not equal / not zero */

loc_0029CD4E: ;
    ecx = edi;
    PUSH32(esp, 0x0029CD55u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029CD55: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x2000;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0029CD70
 * Original: 0x0029CD70 - 0x0029CE84 (276 bytes, 100 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029CD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0029CD70: ;
    eax = 0x2020;
    PUSH32(esp, 0x0029CD7Au); RECOMP_ABI_CALL(0x00341D40u, sub_00341D40); /* call 0x00341D40 */

loc_0029CD7A: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2044);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0x409D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029CDBCu); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_0029CDBC: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0029CE78; /* jne: not equal / not zero */

loc_0029CDC8: ;
    ecx = MEM32(edi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = 0x409D2C;
    if (TEST_Z(_fa, _fb)) goto loc_0029CDE4; /* je: equal / zero */

loc_0029CDD4: ;
    ecx = MEM32(ecx + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0029CDE4; /* je: equal / zero */

loc_0029CDDB: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0029CDE1u); RECOMP_ABI_CALL(0x00294500u, sub_00294500); /* call 0x00294500 */

loc_0029CDE1: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;

loc_0029CDE4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esp + 0x2C;
    /* nop */

loc_0029CDF0: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0029CE18; /* jne: not equal / not zero */

loc_0029CDFA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0029CE14; /* je: equal / zero */

loc_0029CDFE: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0029CE18; /* jne: not equal / not zero */

loc_0029CE0A: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0029CDF0; /* jne: not equal / not zero */

loc_0029CE14: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_0029CE1D;

loc_0029CE18: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_0029CE1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0029CE78; /* jne: not equal / not zero */

loc_0029CE23: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0029CE78; /* jne: not equal / not zero */

loc_0029CE2C: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0029CE78; /* jne: not equal / not zero */

loc_0029CE35: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0029CE78; /* jne: not equal / not zero */

loc_0029CE3E: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x1C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0029CE78; /* jne: not equal / not zero */

loc_0029CE47: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x20) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0029CE78; /* jne: not equal / not zero */

loc_0029CE50: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0x28) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0029CE78; /* jne: not equal / not zero */

loc_0029CE59: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x2C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0029CE78; /* jne: not equal / not zero */

loc_0029CE62: ;
    ecx = ZX8(MEM8(edi + 0x34));
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0029CE78; /* jne: not equal / not zero */

loc_0029CE6C: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2020)) >> 32) & 1);
    esp = esp + 0x2020;
    esp += 8; return; /* ret 4 */

loc_0029CE78: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2020)) >> 32) & 1);
    esp = esp + 0x2020;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029CE90
 * Original: 0x0029CE90 - 0x0029D060 (464 bytes, 174 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029CE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029CE90: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0029D014; /* jge: greater or equal (signed >=) */

loc_0029CEA4: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029CFC7; /* je: equal / zero */

loc_0029CEB0: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0029CECD; /* jle: less or equal (signed <=) */

loc_0029CEB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0029CECD; /* jg: greater (signed >) */

loc_0029CEB7: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029D05A; /* je: equal / zero */

loc_0029CEC2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    goto loc_0029CFD8;

loc_0029CECD: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029D05A; /* je: equal / zero */

loc_0029CED8: ;
    edi = MEM32(esi + 0x3C);
    ecx = MEM32(eax + 0x2C);
    edx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0029CEF5u); RECOMP_ABI_CALL(0x001B4430u, sub_001B4430); /* call 0x001B4430 */

loc_0029CEF5: ;
    MEM32(esi + 0x24) = eax;
    eax = MEM32(esi + 0x3C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0029CF29; /* jle: less or equal (signed <=) */

loc_0029CF01: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029CF0A; /* jne: not equal / not zero */

loc_0029CF05: ;
    eax = MEM32(esi + 0x30);
    goto loc_0029CF14;

loc_0029CF0A: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edi * 4 + -4);

loc_0029CF14: ;
    edx = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0029CF21u); RECOMP_ABI_CALL(0x001B44B0u, sub_001B44B0); /* call 0x001B44B0 */

loc_0029CF21: ;
    eax = MEM32(esi + 0x3C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0029CF01; /* jl: less (signed <) */

loc_0029CF29: ;
    SET_LO8(eax, MEM8(0x5BB479));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029CF3D; /* je: equal / zero */

loc_0029CF32: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0029CF3Du); RECOMP_ABI_CALL(0x001E62E0u, sub_001E62E0); /* call 0x001E62E0 */

loc_0029CF3D: ;
    SET_LO8(eax, MEM8(0x5BB478));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029CFEE; /* je: equal / zero */

loc_0029CF4A: ;
    ecx = esi;
    PUSH32(esp, 0x0029CF51u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0029CF51: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029CF57u); RECOMP_ABI_CALL(0x001E1C50u, sub_001E1C50); /* call 0x001E1C50 */

loc_0029CF57: ;
    esp = esp + 4;
    edi = eax;
    eax = MEM32(esi + 0x30);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0029CF69u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029CF69: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029CF85; /* je: equal / zero */

loc_0029CF70: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029CF85; /* jne: not equal / not zero */

loc_0029CF80: ;
    PUSH32(esp, 0x0029CF85u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029CF85: ;
    MEM32(esi + 0x30) = 0;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029CFAB; /* je: equal / zero */

loc_0029CF96: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029CFAB; /* jne: not equal / not zero */

loc_0029CFA6: ;
    PUSH32(esp, 0x0029CFABu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029CFAB: ;
    MEM32(esi + 0x30) = edi;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029CFEE; /* jne: not equal / not zero */

loc_0029CFBE: ;
    ecx = edi;
    PUSH32(esp, 0x0029CFC5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029CFC5: ;
    goto loc_0029CFEE;

loc_0029CFC7: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029D05A; /* je: equal / zero */

loc_0029CFD2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 2);

loc_0029CFD8: ;
    ecx = MEM32(eax + 0x2C);
    edx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029CFEBu); RECOMP_ABI_CALL(0x001B4430u, sub_001B4430); /* call 0x001B4430 */

loc_0029CFEB: ;
    MEM32(esi + 0x24) = eax;

loc_0029CFEE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029CFF5; /* je: equal / zero */

loc_0029CFF2: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0029CFF5: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029D011; /* je: equal / zero */

loc_0029CFFC: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029D011; /* jne: not equal / not zero */

loc_0029D00C: ;
    PUSH32(esp, 0x0029D011u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029D011: ;
    MEM32(esi + 0xC) = ebx;

loc_0029D014: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029D029; /* jne: not equal / not zero */

loc_0029D01A: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0029D029u); RECOMP_ABI_CALL(0x00302110u, sub_00302110); /* call 0x00302110 */

loc_0029D029: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0029D03Cu); RECOMP_ABI_CALL(0x001C15C0u, sub_001C15C0); /* call 0x001C15C0 */

loc_0029D03C: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0029D04Bu); RECOMP_ABI_CALL(0x001C16F0u, sub_001C16F0); /* call 0x001C16F0 */

loc_0029D04B: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0029D05Au); RECOMP_ABI_CALL(0x001C1810u, sub_001C1810); /* call 0x001C1810 */

loc_0029D05A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029D060
 * Original: 0x0029D060 - 0x0029D0C3 (99 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029D060: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029D09B; /* jne: not equal / not zero */

loc_0029D06C: ;
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029D077; /* je: equal / zero */

loc_0029D074: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0029D077: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029D093; /* je: equal / zero */

loc_0029D07E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029D093; /* jne: not equal / not zero */

loc_0029D08E: ;
    PUSH32(esp, 0x0029D093u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029D093: ;
    MEM32(esi + 0x30) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0029D09B: ;
    ecx = MEM32(esi + 0x40);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029D0AF; /* jne: not equal / not zero */

loc_0029D0A5: ;
    eax = MEM32(esi + 0x3C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029D0AFu); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_0029D0AF: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x40);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0029D0BEu); RECOMP_ABI_CALL(0x0020B340u, sub_0020B340); /* call 0x0020B340 */

loc_0029D0BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0029D0D0
 * Original: 0x0029D0D0 - 0x0029D117 (71 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029D0D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029D0EB; /* je: equal / zero */

loc_0029D0DB: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029D0EB; /* je: equal / zero */

loc_0029D0E2: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x20C); PUSH32(esp, 0x0029D0EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029D0EB: ;
    MEM32(esi + 0x24) = 0xFFFFFFFFu;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029D10E; /* je: equal / zero */

loc_0029D0F9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029D10E; /* jne: not equal / not zero */

loc_0029D109: ;
    PUSH32(esp, 0x0029D10Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029D10E: ;
    MEM32(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0029D120
 * Original: 0x0029D120 - 0x0029D20A (234 bytes, 95 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D120(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029D120: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0029D1C3; /* jge: greater or equal (signed >=) */

loc_0029D134: ;
    eax = MEM32(esi + 0x60);
    eax = eax - 0;
    if ((eax == 0)) goto loc_0029D1EA; /* je: equal / zero */

loc_0029D140: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0029D14E; /* je: equal / zero */

loc_0029D143: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0029D1BC; /* jne: not equal / not zero */

loc_0029D146: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0029D14Cu); RECOMP_ABI_CALL(0x0029CE90u, sub_0029CE90); /* call 0x0029CE90 */

loc_0029D14C: ;
    goto loc_0029D1BC;

loc_0029D14E: ;
    ebx = esi + 0x48;
    eax = 0; /* xor self */
    ecx = ebx;

loc_0029D155: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029D1D1; /* je: equal / zero */

loc_0029D15A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0029D155; /* jl: less (signed <) */

loc_0029D163: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + 0x2C);
    edx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x474); PUSH32(esp, 0x0029D184u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029D184: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ebp);
    if (TEST_S(_fas, _fbs)) goto loc_0029D1A6; /* jl: less (signed <) */

loc_0029D189: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esi + 0x24) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0029D197u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029D197: ;
    ecx = MEM32(esi + 0x24);
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x47C); PUSH32(esp, 0x0029D1A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029D1A6: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0029D1C3; /* jge: greater or equal (signed >=) */

loc_0029D1AD: ;
    MEM32(esi + 0x60) = 2;

loc_0029D1B4: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0029D1BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029D1BC: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0029D1CB; /* jl: less (signed <) */

loc_0029D1C3: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029D1CBu); RECOMP_ABI_CALL(0x0029CE90u, sub_0029CE90); /* call 0x0029CE90 */

loc_0029D1CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0029D1D1: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi + 0x60) = 2;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0029D1E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029D1E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0029D1EA: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x15);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x0029D1F6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029D1F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029D1AD; /* je: equal / zero */

loc_0029D1FA: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029D1AD; /* je: equal / zero */

loc_0029D201: ;
    MEM32(esi + 0x60) = 1;
    goto loc_0029D1B4;

}

/**
 * sub_0029D210
 * Original: 0x0029D210 - 0x0029D283 (115 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029D210: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0029D257; /* jne: not equal / not zero */

loc_0029D21C: ;
    PUSH32(esp, edi);
    esi = esi + 0x48;
    edi = 6;

loc_0029D225: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029D24C; /* je: equal / zero */

loc_0029D22B: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029D246; /* je: equal / zero */

loc_0029D231: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029D246; /* jne: not equal / not zero */

loc_0029D241: ;
    PUSH32(esp, 0x0029D246u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029D246: ;
    MEM32(esi) = 0;

loc_0029D24C: ;
    esi = esi + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0029D225; /* jne: not equal / not zero */

loc_0029D252: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0029D257: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029D27F; /* jne: not equal / not zero */

loc_0029D25C: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029D278; /* je: equal / zero */

loc_0029D263: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029D278; /* jne: not equal / not zero */

loc_0029D273: ;
    PUSH32(esp, 0x0029D278u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029D278: ;
    MEM32(esi + 0x30) = 0;

loc_0029D27F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029D290
 * Original: 0x0029D290 - 0x0029D4E6 (598 bytes, 216 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D290(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029D290: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    MEM8(esp + 0x13) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0029D31E; /* je: equal / zero */

loc_0029D2AA: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x5BE530);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0029D2BAu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0029D2BA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029D31E; /* je: equal / zero */

loc_0029D2BE: ;
    eax = MEM32(ebp + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = ebp;
    MEM32(ebp + 4) = eax;

loc_0029D2C7: ;
    ecx = ebx;
    PUSH32(esp, 0x0029D2CEu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0029D2CE: ;
    SET_LO8(ecx, MEM8(0x5BC548));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029D2E7; /* jne: not equal / not zero */

loc_0029D2D8: ;
    ecx = MEM32(0x46A694);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0029D2E4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0029D2E4: ;
    esp = esp + 4;

loc_0029D2E7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0029D398; /* je: equal / zero */

loc_0029D2F1: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0029D2FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029D2FE: ;
    edx = MEM32(ebx + 0x14);
    ecx = MEM32(edx + 8);
    ebp = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0029D327; /* jle: less or equal (signed <=) */

loc_0029D30C: ;
    edx = MEM32(edx + 0x10);
    /* nop */

loc_0029D310: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029D322; /* je: equal / zero */

loc_0029D314: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0029D310; /* jl: less (signed <) */

loc_0029D31C: ;
    goto loc_0029D327;

loc_0029D31E: ;
    edi = 0; /* xor self */
    goto loc_0029D2C7;

loc_0029D322: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029D333; /* jne: not equal / not zero */

loc_0029D327: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0029D32Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029D32F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029D34B; /* je: equal / zero */

loc_0029D333: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0029D344u); RECOMP_ABI_CALL(0x0022EB70u, sub_0022EB70); /* call 0x0022EB70 */

loc_0029D344: ;
    esp = esp + 0x10;
    MEM8(esp + 0x13) = LO8(eax);

loc_0029D34B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xFC); PUSH32(esp, 0x0029D356u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029D356: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029D36D; /* jne: not equal / not zero */

loc_0029D366: ;
    ecx = edi;

loc_0029D368: ;
    PUSH32(esp, 0x0029D36Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029D36D: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0029D38E; /* je: equal / zero */

loc_0029D379: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029D38E; /* jne: not equal / not zero */

loc_0029D389: ;
    PUSH32(esp, 0x0029D38Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029D38E: ;
    SET_LO8(eax, MEM8(esp + 3));
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

loc_0029D398: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029D3F2; /* je: equal / zero */

loc_0029D39C: ;
    ecx = MEM32(0x5BB1F4);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0029D3AAu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0029D3AA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029D3F2; /* je: equal / zero */

loc_0029D3AE: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ebp;
    MEM32(eax + 4) = ecx;

loc_0029D3BD: ;
    eax = MEM32(0x5BE70C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029D407; /* jne: not equal / not zero */

loc_0029D3C6: ;
    ecx = MEM32(0x5BE530);
    PUSH32(esp, 0x407380);
    PUSH32(esp, 0x0029D3D6u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_0029D3D6: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029D400; /* je: equal / zero */

loc_0029D3DC: ;
    edx = MEM32(0x5BC248);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0029D3EAu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0029D3EA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029D400; /* je: equal / zero */

loc_0029D3EE: ;
    eax = edi;
    goto loc_0029D402;

loc_0029D3F2: ;
    MEM32(esp + 0x14) = 0;
    ebp = MEM32(esp + 0x14);
    goto loc_0029D3BD;

loc_0029D400: ;
    eax = 0; /* xor self */

loc_0029D402: ;
    MEM32(0x5BE70C) = eax;

loc_0029D407: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029D36D; /* je: equal / zero */

loc_0029D40F: ;
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029D419u); RECOMP_ABI_CALL(0x001EACD0u, sub_001EACD0); /* call 0x001EACD0 */

loc_0029D419: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029D4CB; /* je: equal / zero */

loc_0029D423: ;
    ebx = MEM32(edi + 4);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 1);
    ecx = edi;
    MEM32(edi + 4) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x0029D437u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029D437: ;
    ebx = eax;
    edx = eax + 1;
    /* nop */

loc_0029D440: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029D440; /* jne: not equal / not zero */

loc_0029D447: ;
    eax = eax - edx;
    ebp = eax;
    eax = 0x471A34;
    ecx = eax + 1;

loc_0029D453: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029D453; /* jne: not equal / not zero */

loc_0029D45A: ;
    edx = MEM32(esi);
    eax = eax - ecx;
    eax = eax + ebp + 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x0029D46Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029D46B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x471A34);
    ebp = eax;
    PUSH32(esp, 0x3C97F4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0029D47Eu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0029D47E: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029D493u); RECOMP_ABI_CALL(0x0022EB70u, sub_0022EB70); /* call 0x0022EB70 */

loc_0029D493: ;
    edx = MEM32(esi);
    esp = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    MEM8(esp + 0x17) = LO8(eax);
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x0029D4A5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029D4A5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xFC); PUSH32(esp, 0x0029D4B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029D4B0: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029D4C7; /* jne: not equal / not zero */

loc_0029D4C0: ;
    ecx = edi;
    PUSH32(esp, 0x0029D4C7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029D4C7: ;
    ebp = MEM32(esp + 0x14);

loc_0029D4CB: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029D36D; /* jne: not equal / not zero */

loc_0029D4DF: ;
    ecx = ebp;
    goto loc_0029D368;

}

/**
 * sub_0029D4F0
 * Original: 0x0029D4F0 - 0x0029D5B9 (201 bytes, 76 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D4F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029D4F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x0029D4F9u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0029D4F9: ;
    SET_LO8(ecx, MEM8(0x5BC548));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029D511; /* jne: not equal / not zero */

loc_0029D503: ;
    eax = MEM32(0x46A694);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029D50Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0029D50E: ;
    esp = esp + 4;

loc_0029D511: ;
    edi = MEM32(esp + 0x10);
    edx = MEM32(edi);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0029D524u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029D524: ;
    ebp = eax;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0029D52Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029D52E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029D539; /* je: equal / zero */

loc_0029D534: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0029D547;

loc_0029D539: ;
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0029D542u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0029D542: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = edi;

loc_0029D547: ;
    ecx = ebx;
    PUSH32(esp, 0x0029D54Eu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0029D54E: ;
    SET_LO8(ecx, MEM8(0x5BC548));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029D567; /* jne: not equal / not zero */

loc_0029D558: ;
    ecx = MEM32(0x46A694);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0029D564u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0029D564: ;
    esp = esp + 4;

loc_0029D567: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x0029D572u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029D572: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = MEM32(esp + 0x14);
    MEM32(ebx) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0029D599; /* je: equal / zero */

loc_0029D57C: ;
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
    if (TEST_NZ(_fa, _fb)) goto loc_0029D599; /* jne: not equal / not zero */

loc_0029D592: ;
    ecx = esi;
    PUSH32(esp, 0x0029D599u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029D599: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    POP32(esp, esi);
    MEM32(edi + 4) = ecx;
    POP32(esp, ebp);
    if (TEST_NZ(_fa, _fb)) goto loc_0029D5B2; /* jne: not equal / not zero */

loc_0029D5AB: ;
    ecx = edi;
    PUSH32(esp, 0x0029D5B2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029D5B2: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0029D5C0
 * Original: 0x0029D5C0 - 0x0029D5C9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D5C0(void)
{

loc_0029D5C0: ;
    eax = MEM32(0x5BE704);
    eax = MEM32(eax + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_0029D5D0
 * Original: 0x0029D5D0 - 0x0029D5FC (44 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029D5D0: ;
    eax = MEM32(0x5BE704);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029D5FB; /* je: equal / zero */

loc_0029D5D9: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029D5F1; /* jne: not equal / not zero */

loc_0029D5EC: ;
    PUSH32(esp, 0x0029D5F1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029D5F1: ;
    MEM32(0x5BE704) = 0;

loc_0029D5FB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029D600
 * Original: 0x0029D600 - 0x0029D6CE (206 bytes, 76 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029D600: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0029D6BF; /* je: equal / zero */

loc_0029D610: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029D6BF; /* je: equal / zero */

loc_0029D61B: ;
    PUSH32(esp, 0x0029D620u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0029D620: ;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0029D62Du); RECOMP_ABI_CALL(0x00216E80u, sub_00216E80); /* call 0x00216E80 */

loc_0029D62D: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0029D64B; /* je: equal / zero */

loc_0029D637: ;
    edx = MEM32(0x5BE6A0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0029D643u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0029D643: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029D64F; /* jne: not equal / not zero */

loc_0029D647: ;
    ecx = MEM32(esp + 0x10);

loc_0029D64B: ;
    esi = 0; /* xor self */
    goto loc_0029D671;

loc_0029D64F: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0029D662u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029D662: ;
    eax = MEM32(edi + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0029D66Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029D66D: ;
    ecx = MEM32(esp + 0x10);

loc_0029D671: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = MEM32(esp + 0xC);
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0029D69C; /* je: equal / zero */

loc_0029D67B: ;
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
    if (TEST_NZ(_fa, _fb)) goto loc_0029D698; /* jne: not equal / not zero */

loc_0029D691: ;
    ecx = esi;
    PUSH32(esp, 0x0029D698u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029D698: ;
    ecx = MEM32(esp + 0x10);

loc_0029D69C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029D6B8; /* je: equal / zero */

loc_0029D6A0: ;
    esi = MEM32(ecx + 4);
    eax = ecx + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0029D6B8; /* jne: not equal / not zero */

loc_0029D6B3: ;
    PUSH32(esp, 0x0029D6B8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029D6B8: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0029D6BF: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(eax) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0029D6D0
 * Original: 0x0029D6D0 - 0x0029D707 (55 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029D6D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0029D6E3; /* je: equal / zero */

loc_0029D6E0: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0029D6E3: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0029D6EFu); RECOMP_ABI_CALL(0x001B7700u, sub_001B7700); /* call 0x001B7700 */

loc_0029D6EF: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0029D700u); RECOMP_ABI_CALL(0x00200E60u, sub_00200E60); /* call 0x00200E60 */

loc_0029D700: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029D710
 * Original: 0x0029D710 - 0x0029D757 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029D710: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029D720; /* jne: not equal / not zero */

loc_0029D719: ;
    MEM8(0x5BE708) = 1;

loc_0029D720: ;
    PUSH32(esp, 0x472DB8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x290550);
    PUSH32(esp, 0x29A890);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x409D38);
    PUSH32(esp, 0x299560);
    PUSH32(esp, 0x290520);
    PUSH32(esp, 0x29BEF0);
    PUSH32(esp, 0x5BE4CC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029D753u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029D753: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029D760
 * Original: 0x0029D760 - 0x0029D78C (44 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D760(void)
{

loc_0029D760: ;
    esp = esp - 0x28;
    ecx = esp;
    PUSH32(esp, 0x0029D76Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029D76B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x409A58;
    MEM32(esp + 0x1C) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_0029D790
 * Original: 0x0029D790 - 0x0029D796 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D790(void)
{

loc_0029D790: ;
    eax = MEM32(0x5BE4F0);
    esp += 4; return; /* ret */

}

/**
 * sub_0029D7A0
 * Original: 0x0029D7A0 - 0x0029D7C4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D7A0(void)
{

loc_0029D7A0: ;
    esp = esp - 0x20;
    ecx = esp;
    PUSH32(esp, 0x0029D7ABu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029D7AB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x409AD8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0029D7D0
 * Original: 0x0029D7D0 - 0x0029D7D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D7D0(void)
{

loc_0029D7D0: ;
    eax = MEM32(0x5BE508);
    esp += 4; return; /* ret */

}

/**
 * sub_0029D7E0
 * Original: 0x0029D7E0 - 0x0029D7E6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D7E0(void)
{

loc_0029D7E0: ;
    eax = MEM32(0x5BE510);
    esp += 4; return; /* ret */

}

/**
 * sub_0029D7F0
 * Original: 0x0029D7F0 - 0x0029D84E (94 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D7F0(void)
{

loc_0029D7F0: ;
    esp = esp - 0x68;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0029D7FDu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029D7FD: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x60) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x409BA8;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0029D847u); RECOMP_ABI_CALL(0x0029AE60u, sub_0029AE60); /* call 0x0029AE60 */

loc_0029D847: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x68;
    esp += 4; return; /* ret */

}

/**
 * sub_0029D850
 * Original: 0x0029D850 - 0x0029D897 (71 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029D850: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029D860; /* jne: not equal / not zero */

loc_0029D859: ;
    MEM8(0x5BE708) = 1;

loc_0029D860: ;
    PUSH32(esp, 0x472DC0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x296530);
    PUSH32(esp, 0x29B5C0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x409E20);
    PUSH32(esp, 0x299EA0);
    PUSH32(esp, 0x29B610);
    PUSH32(esp, 0x29B620);
    PUSH32(esp, 0x5BE5A4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029D893u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029D893: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029D8A0
 * Original: 0x0029D8A0 - 0x0029D8A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D8A0(void)
{

loc_0029D8A0: ;
    eax = MEM32(0x5BE5AC);
    esp += 4; return; /* ret */

}

/**
 * sub_0029D8B0
 * Original: 0x0029D8B0 - 0x0029D8B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D8B0(void)
{

loc_0029D8B0: ;
    eax = MEM32(0x5BE5B4);
    esp += 4; return; /* ret */

}

/**
 * sub_0029D8C0
 * Original: 0x0029D8C0 - 0x0029D8EC (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029D8C0: ;
    eax = MEM32(0x5BE6F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0029D8E1; /* je: equal / zero */

loc_0029D8CB: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029D8E1; /* jne: not equal / not zero */

loc_0029D8DC: ;
    PUSH32(esp, 0x0029D8E1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029D8E1: ;
    MEM32(0x5BE6F4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0029D8F0
 * Original: 0x0029D8F0 - 0x0029D8F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D8F0(void)
{

loc_0029D8F0: ;
    eax = MEM32(0x5BE5DC);
    esp += 4; return; /* ret */

}

/**
 * sub_0029D900
 * Original: 0x0029D900 - 0x0029D906 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D900(void)
{

loc_0029D900: ;
    eax = MEM32(0x5BE5E4);
    esp += 4; return; /* ret */

}

/**
 * sub_0029D910
 * Original: 0x0029D910 - 0x0029D95E (78 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D910(void)
{

loc_0029D910: ;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0029D91Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029D91D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x409C50;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0029D957u); RECOMP_ABI_CALL(0x00296F30u, sub_00296F30); /* call 0x00296F30 */

loc_0029D957: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_0029D960
 * Original: 0x0029D960 - 0x0029D9A7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029D960: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029D970; /* jne: not equal / not zero */

loc_0029D969: ;
    MEM8(0x5BE708) = 1;

loc_0029D970: ;
    PUSH32(esp, 0x472DD4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x291DB0);
    PUSH32(esp, 0x29D910);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x409FB4);
    PUSH32(esp, 0x29FB60);
    PUSH32(esp, 0x29BE90);
    PUSH32(esp, 0x2A00C0);
    PUSH32(esp, 0x5BE5FC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029D9A3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029D9A3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029D9B0
 * Original: 0x0029D9B0 - 0x0029D9F1 (65 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029D9B0: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029D9C0; /* jne: not equal / not zero */

loc_0029D9B9: ;
    MEM8(0x5BE708) = 1;

loc_0029D9C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x296FF0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x409FC8);
    PUSH32(esp, 0x29A290);
    PUSH32(esp, 0x290520);
    PUSH32(esp, 0x29BEF0);
    PUSH32(esp, 0x5BE604);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029D9EDu); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029D9ED: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029DA00
 * Original: 0x0029DA00 - 0x0029DA41 (65 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029DA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029DA00: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029DA10; /* jne: not equal / not zero */

loc_0029DA09: ;
    MEM8(0x5BE708) = 1;

loc_0029DA10: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2971B0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x409FE4);
    PUSH32(esp, 0x29A350);
    PUSH32(esp, 0x290520);
    PUSH32(esp, 0x29BEF0);
    PUSH32(esp, 0x5BE614);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029DA3Du); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029DA3D: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029DA50
 * Original: 0x0029DA50 - 0x0029DA56 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029DA50(void)
{

loc_0029DA50: ;
    eax = MEM32(0x5BE684);
    esp += 4; return; /* ret */

}

/**
 * sub_0029DA60
 * Original: 0x0029DA60 - 0x0029DA66 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029DA60(void)
{

loc_0029DA60: ;
    eax = MEM32(0x5BE688);
    esp += 4; return; /* ret */

}

/**
 * sub_0029DA70
 * Original: 0x0029DA70 - 0x0029DA9C (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029DA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029DA70: ;
    eax = MEM32(0x5BE6FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0029DA91; /* je: equal / zero */

loc_0029DA7B: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029DA91; /* jne: not equal / not zero */

loc_0029DA8C: ;
    PUSH32(esp, 0x0029DA91u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029DA91: ;
    MEM32(0x5BE6FC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0029DAA0
 * Original: 0x0029DAA0 - 0x0029DAA6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029DAA0(void)
{

loc_0029DAA0: ;
    eax = MEM32(0x5BE694);
    esp += 4; return; /* ret */

}

/**
 * sub_0029DAB0
 * Original: 0x0029DAB0 - 0x0029DAB6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029DAB0(void)
{

loc_0029DAB0: ;
    eax = MEM32(0x5BE698);
    esp += 4; return; /* ret */

}

/**
 * sub_0029DAC0
 * Original: 0x0029DAC0 - 0x0029DAC6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029DAC0(void)
{

loc_0029DAC0: ;
    eax = MEM32(0x5BE69C);
    esp += 4; return; /* ret */

}

/**
 * sub_0029DAD0
 * Original: 0x0029DAD0 - 0x0029DADC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029DAD0(void)
{

loc_0029DAD0: ;
    PUSH32(esp, 0x29C0C0);
    PUSH32(esp, 0x0029DADAu); RECOMP_ABI_CALL(0x002041B0u, sub_002041B0); /* call 0x002041B0 */

loc_0029DADA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0029DAE0
 * Original: 0x0029DAE0 - 0x0029DBB7 (215 bytes, 81 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029DAE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029DAE0: ;
    eax = MEM32(0x5BE600);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029DBB3; /* jne: not equal / not zero */

loc_0029DAF2: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029DBB3; /* je: equal / zero */

loc_0029DAFD: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029DB19; /* je: equal / zero */

loc_0029DB04: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029DB19; /* jne: not equal / not zero */

loc_0029DB14: ;
    PUSH32(esp, 0x0029DB19u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029DB19: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029DB21u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0029DB21: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029DB27u); RECOMP_ABI_CALL(0x001DC230u, sub_001DC230); /* call 0x001DC230 */

loc_0029DB27: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029DB33; /* je: equal / zero */

loc_0029DB30: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0029DB33: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029DB4F; /* je: equal / zero */

loc_0029DB3A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029DB4F; /* jne: not equal / not zero */

loc_0029DB4A: ;
    PUSH32(esp, 0x0029DB4Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029DB4F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 0x30) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0029DB6D; /* je: equal / zero */

loc_0029DB56: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029DB6D; /* jne: not equal / not zero */

loc_0029DB66: ;
    ecx = edi;
    PUSH32(esp, 0x0029DB6Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029DB6D: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x30);
    eax = MEM32(eax + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0029DB80u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029DB80: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0029DBB2; /* jle: less or equal (signed <=) */

loc_0029DB8C: ;
    /* nop */

loc_0029DB90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029DB9C; /* je: equal / zero */

loc_0029DB94: ;
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edi * 4);
    goto loc_0029DB9E;

loc_0029DB9C: ;
    eax = 0; /* xor self */

loc_0029DB9E: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029DBA7u); RECOMP_ABI_CALL(0x0029C310u, sub_0029C310); /* call 0x0029C310 */

loc_0029DBA7: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0029DB90; /* jl: less (signed <) */

loc_0029DBB2: ;
    POP32(esp, edi);

loc_0029DBB3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029DBC0
 * Original: 0x0029DBC0 - 0x0029DBC6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029DBC0(void)
{

loc_0029DBC0: ;
    eax = MEM32(0x5BE4EC);
    esp += 4; return; /* ret */

}

/**
 * sub_0029DBD0
 * Original: 0x0029DBD0 - 0x0029DBF4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029DBD0(void)
{

loc_0029DBD0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0029DBDBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029DBDB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x409D60;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029DC00
 * Original: 0x0029DC00 - 0x0029DC44 (68 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029DC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029DC00: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029DC10; /* jne: not equal / not zero */

loc_0029DC09: ;
    MEM8(0x5BE708) = 1;

loc_0029DC10: ;
    PUSH32(esp, 0x472DDC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x29DBD0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x40A23C);
    PUSH32(esp, 0x299870);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BE508);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029DC40u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029DC40: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029DC50
 * Original: 0x0029DC50 - 0x0029DC7E (46 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029DC50(void)
{

loc_0029DC50: ;
    esp = esp - 0x18;
    ecx = esp;
    PUSH32(esp, 0x0029DC5Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029DC5B: ;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x409DC0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0029DC80
 * Original: 0x0029DC80 - 0x0029DCC7 (71 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029DC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029DC80: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029DC90; /* jne: not equal / not zero */

loc_0029DC89: ;
    MEM8(0x5BE708) = 1;

loc_0029DC90: ;
    PUSH32(esp, 0x472DE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x295830);
    PUSH32(esp, 0x29DC50);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x40A254);
    PUSH32(esp, 0x299900);
    PUSH32(esp, 0x1A4510);
    PUSH32(esp, 0x2371D0);
    PUSH32(esp, 0x5BE510);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029DCC3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029DCC3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029DCD0
 * Original: 0x0029DCD0 - 0x0029DCD6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029DCD0(void)
{

loc_0029DCD0: ;
    eax = MEM32(0x5BE5A8);
    esp += 4; return; /* ret */

}

/**
 * sub_0029DCE0
 * Original: 0x0029DCE0 - 0x0029DD04 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029DCE0(void)
{

loc_0029DCE0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0029DCEBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029DCEB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x409E38;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029DD10
 * Original: 0x0029DD10 - 0x0029DD54 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029DD10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029DD10: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029DD20; /* jne: not equal / not zero */

loc_0029DD19: ;
    MEM8(0x5BE708) = 1;

loc_0029DD20: ;
    PUSH32(esp, 0x472DEC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x29DCE0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x40A2C0);
    PUSH32(esp, 0x299E40);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BE5AC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029DD50u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029DD50: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029DD60
 * Original: 0x0029DD60 - 0x0029DD84 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029DD60(void)
{

loc_0029DD60: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0029DD6Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029DD6B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x409E98;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029DD90
 * Original: 0x0029DD90 - 0x0029DE97 (263 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029DD90(void)
{

loc_0029DD90: ;
    esp = esp - 0x80;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE5B8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029DDA6u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0029DDA6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x472E00);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0029DDB6u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0029DDB6: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029DDBEu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029DDBE: ;
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
    PUSH32(esp, 0x0029DE5Du); RECOMP_ABI_CALL(0x001B7D30u, sub_001B7D30); /* call 0x001B7D30 */

loc_0029DE5D: ;
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0029DE69u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0029DE69: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472DFC);
    PUSH32(esp, 0x472DF8);
    PUSH32(esp, 0x472DF4);
    ecx = esi;
    PUSH32(esp, 0x0029DE80u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0029DE80: ;
    PUSH32(esp, 0x29D8C0);
    PUSH32(esp, 0x0029DE8Au); RECOMP_ABI_CALL(0x00204190u, sub_00204190); /* call 0x00204190 */

loc_0029DE8A: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_0029DEA0
 * Original: 0x0029DEA0 - 0x0029DEC4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029DEA0(void)
{

loc_0029DEA0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0029DEABu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029DEAB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x409EF8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029DED0
 * Original: 0x0029DED0 - 0x0029DEF4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029DED0(void)
{

loc_0029DED0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0029DEDBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029DEDB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x409F58;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029DF00
 * Original: 0x0029DF00 - 0x0029DF24 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029DF00(void)
{

loc_0029DF00: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0029DF0Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029DF0B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x40A000;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029DF30
 * Original: 0x0029DF30 - 0x0029DF54 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029DF30(void)
{

loc_0029DF30: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0029DF3Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029DF3B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x40A060;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029DF60
 * Original: 0x0029DF60 - 0x0029E00E (174 bytes, 56 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0029DF60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029DF60: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE68C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029DF70u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0029DF70: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x472E28);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0029DF80u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0029DF80: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029DF88u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029DF88: ;
    ebp = eax;
    PUSH32(esp, 0x0029DF8Fu); RECOMP_ABI_CALL(0x00222DC0u, sub_00222DC0); /* call 0x00222DC0 */

loc_0029DF8F: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    PUSH32(esp, 0x0029DFA1u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029DFA1: ;
    ebp = eax;
    PUSH32(esp, 0x0029DFA8u); RECOMP_ABI_CALL(0x00222DC0u, sub_00222DC0); /* call 0x00222DC0 */

loc_0029DFA8: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    PUSH32(esp, 0x0029DFBAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029DFBA: ;
    ebp = eax;
    eax = MEM32(0x5BE694);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029DFDF; /* jne: not equal / not zero */

loc_0029DFC5: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0029DFD1u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0029DFD1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029DFD7u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0029DFD7: ;
    esp = esp + 8;
    MEM32(0x5BE694) = eax;

loc_0029DFDF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472E1C);
    PUSH32(esp, 0x472E10);
    PUSH32(esp, 0x472E04);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    PUSH32(esp, 0x0029DFFDu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0029DFFD: ;
    PUSH32(esp, 0x29DA70);
    PUSH32(esp, 0x0029E007u); RECOMP_ABI_CALL(0x00204190u, sub_00204190); /* call 0x00204190 */

loc_0029E007: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0029E010
 * Original: 0x0029E010 - 0x0029E034 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E010(void)
{

loc_0029E010: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0029E01Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029E01B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x40A0C0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E040
 * Original: 0x0029E040 - 0x0029E064 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E040(void)
{

loc_0029E040: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0029E04Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029E04B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x40A120;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E070
 * Original: 0x0029E070 - 0x0029E0B4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E070: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E080; /* jne: not equal / not zero */

loc_0029E079: ;
    MEM8(0x5BE708) = 1;

loc_0029E080: ;
    PUSH32(esp, 0x472E34);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x29E040);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x40A304);
    PUSH32(esp, 0x299500);
    PUSH32(esp, 0x1A43F0);
    PUSH32(esp, 0x223F30);
    PUSH32(esp, 0x5BE698);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E0B0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E0B0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E0C0
 * Original: 0x0029E0C0 - 0x0029E0E4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E0C0(void)
{

loc_0029E0C0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0029E0CBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029E0CB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x40A180;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E0F0
 * Original: 0x0029E0F0 - 0x0029E134 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E0F0: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E100; /* jne: not equal / not zero */

loc_0029E0F9: ;
    MEM8(0x5BE708) = 1;

loc_0029E100: ;
    PUSH32(esp, 0x472E3C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x29E0C0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x40A31C);
    PUSH32(esp, 0x2951B0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BE69C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E130u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E130: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E140
 * Original: 0x0029E140 - 0x0029E184 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E140: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E150; /* jne: not equal / not zero */

loc_0029E149: ;
    MEM8(0x5BE708) = 1;

loc_0029E150: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x29DAD0);
    PUSH32(esp, 0x292A30);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x40A328);
    PUSH32(esp, 0x2490F0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BE6A0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0029E180u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E180: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E190
 * Original: 0x0029E190 - 0x0029E1CE (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E190: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E1A0; /* jne: not equal / not zero */

loc_0029E199: ;
    MEM8(0x5BE708) = 1;

loc_0029E1A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x40A330);
    PUSH32(esp, 0x299590);
    PUSH32(esp, 0x29BF30);
    PUSH32(esp, 0x29E140);
    PUSH32(esp, 0x5BE4D0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0029E1CAu); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E1CA: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E1D0
 * Original: 0x0029E1D0 - 0x0029E217 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E1D0: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E1E0; /* jne: not equal / not zero */

loc_0029E1D9: ;
    MEM8(0x5BE708) = 1;

loc_0029E1E0: ;
    PUSH32(esp, 0x472E44);
    PUSH32(esp, 0);
    PUSH32(esp, 0x290650);
    PUSH32(esp, 0x29D760);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x40A344);
    PUSH32(esp, 0x2995C0);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE4D4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E213u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E213: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E220
 * Original: 0x0029E220 - 0x0029E267 (71 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E220: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E230; /* jne: not equal / not zero */

loc_0029E229: ;
    MEM8(0x5BE708) = 1;

loc_0029E230: ;
    PUSH32(esp, 0x472E4C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x295360);
    PUSH32(esp, 0x29A900);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40A354);
    PUSH32(esp, 0x2995F0);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE4D8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E263u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E263: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E270
 * Original: 0x0029E270 - 0x0029E2B7 (71 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E270: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E280; /* jne: not equal / not zero */

loc_0029E279: ;
    MEM8(0x5BE708) = 1;

loc_0029E280: ;
    PUSH32(esp, 0x472E54);
    PUSH32(esp, 0);
    PUSH32(esp, 0x290710);
    PUSH32(esp, 0x29A930);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x40A36C);
    PUSH32(esp, 0x299620);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE4DC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E2B3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E2B3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E2C0
 * Original: 0x0029E2C0 - 0x0029E304 (68 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E2C0: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E2D0; /* jne: not equal / not zero */

loc_0029E2C9: ;
    MEM8(0x5BE708) = 1;

loc_0029E2D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x290870);
    PUSH32(esp, 0x29A990);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40A380);
    PUSH32(esp, 0x299650);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE4E0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E300u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E300: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E310
 * Original: 0x0029E310 - 0x0029E354 (68 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E310: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E320; /* jne: not equal / not zero */

loc_0029E319: ;
    MEM8(0x5BE708) = 1;

loc_0029E320: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2908F0);
    PUSH32(esp, 0x29A9C0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40A39C);
    PUSH32(esp, 0x299680);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE4E4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E350u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E350: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E360
 * Original: 0x0029E360 - 0x0029E3AA (74 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E360: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E370; /* jne: not equal / not zero */

loc_0029E369: ;
    MEM8(0x5BE708) = 1;

loc_0029E370: ;
    PUSH32(esp, 0x472E70);
    PUSH32(esp, 0);
    PUSH32(esp, 0x290940);
    PUSH32(esp, 0x29A9F0);
    PUSH32(esp, 0x9C);
    PUSH32(esp, 0x40A3B4);
    PUSH32(esp, 0x249160);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE4E8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E3A6u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E3A6: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E3B0
 * Original: 0x0029E3B0 - 0x0029E3D4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E3B0(void)
{

loc_0029E3B0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0029E3BBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029E3BB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x40A1E0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E3E0
 * Original: 0x0029E3E0 - 0x0029E424 (68 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E3E0: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E3F0; /* jne: not equal / not zero */

loc_0029E3E9: ;
    MEM8(0x5BE708) = 1;

loc_0029E3F0: ;
    PUSH32(esp, 0x472E78);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x29E3B0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x40A3D0);
    PUSH32(esp, 0x2996E0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BE4EC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E420u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E420: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E430
 * Original: 0x0029E430 - 0x0029E474 (68 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E430: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E440; /* jne: not equal / not zero */

loc_0029E439: ;
    MEM8(0x5BE708) = 1;

loc_0029E440: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x29AA90);
    PUSH32(esp, 0x29AA60);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x40A3EC);
    PUSH32(esp, 0x2996B0);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE4F0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E470u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E470: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E480
 * Original: 0x0029E480 - 0x0029E4C4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E480: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E490; /* jne: not equal / not zero */

loc_0029E489: ;
    MEM8(0x5BE708) = 1;

loc_0029E490: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x290A70);
    PUSH32(esp, 0x29AC00);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x40A404);
    PUSH32(esp, 0x299770);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE4F8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E4C0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E4C0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E4D0
 * Original: 0x0029E4D0 - 0x0029E517 (71 bytes, 18 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E4D0: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E4E0; /* jne: not equal / not zero */

loc_0029E4D9: ;
    MEM8(0x5BE708) = 1;

loc_0029E4E0: ;
    PUSH32(esp, 0x472E80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x295670);
    PUSH32(esp, 0x29AC30);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x40A410);
    PUSH32(esp, 0x295270);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE4FC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E513u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E513: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E520
 * Original: 0x0029E520 - 0x0029E564 (68 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E520: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E530; /* jne: not equal / not zero */

loc_0029E529: ;
    MEM8(0x5BE708) = 1;

loc_0029E530: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x295720);
    PUSH32(esp, 0x29AC60);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x40A424);
    PUSH32(esp, 0x2997E0);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE500);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E560u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E560: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E570
 * Original: 0x0029E570 - 0x0029E5B4 (68 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E570: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E580; /* jne: not equal / not zero */

loc_0029E579: ;
    MEM8(0x5BE708) = 1;

loc_0029E580: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2957A0);
    PUSH32(esp, 0x29AC90);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x40A438);
    PUSH32(esp, 0x299810);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE504);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E5B0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E5B0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E5C0
 * Original: 0x0029E5C0 - 0x0029E604 (68 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E5C0: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E5D0; /* jne: not equal / not zero */

loc_0029E5C9: ;
    MEM8(0x5BE708) = 1;

loc_0029E5D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x29AD00);
    PUSH32(esp, 0x29ACD0);
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x40A454);
    PUSH32(esp, 0x299840);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE50C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E600u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E600: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E610
 * Original: 0x0029E610 - 0x0029E657 (71 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E610: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E620; /* jne: not equal / not zero */

loc_0029E619: ;
    MEM8(0x5BE708) = 1;

loc_0029E620: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2959D0);
    PUSH32(esp, 0x2958E0);
    PUSH32(esp, 0x29AE20);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x40A468);
    PUSH32(esp, 0x299930);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE518);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E653u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E653: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E660
 * Original: 0x0029E660 - 0x0029E6A4 (68 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E660: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E670; /* jne: not equal / not zero */

loc_0029E669: ;
    MEM8(0x5BE708) = 1;

loc_0029E670: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x295A90);
    PUSH32(esp, 0x29AEA0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x40A480);
    PUSH32(esp, 0x299990);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE528);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E6A0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E6A0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E6B0
 * Original: 0x0029E6B0 - 0x0029E6B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E6B0(void)
{

loc_0029E6B0: ;
    eax = MEM32(0x5BE534);
    esp += 4; return; /* ret */

}

/**
 * sub_0029E6C0
 * Original: 0x0029E6C0 - 0x0029E704 (68 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E6C0: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E6D0; /* jne: not equal / not zero */

loc_0029E6C9: ;
    MEM8(0x5BE708) = 1;

loc_0029E6D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x290D00);
    PUSH32(esp, 0x29AF00);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x40A4FC);
    PUSH32(esp, 0x2999C0);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE538);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E700u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E700: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E710
 * Original: 0x0029E710 - 0x0029E754 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E710: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E720; /* jne: not equal / not zero */

loc_0029E719: ;
    MEM8(0x5BE708) = 1;

loc_0029E720: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x29AF60);
    PUSH32(esp, 0x29AF30);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x40A518);
    PUSH32(esp, 0x2999F0);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE53C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E750u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E750: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E760
 * Original: 0x0029E760 - 0x0029E7A4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E760: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E770; /* jne: not equal / not zero */

loc_0029E769: ;
    MEM8(0x5BE708) = 1;

loc_0029E770: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x290E90);
    PUSH32(esp, 0x29B0A0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40A52C);
    PUSH32(esp, 0x299A50);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE544);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E7A0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E7A0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E7B0
 * Original: 0x0029E7B0 - 0x0029E7F4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E7B0: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E7C0; /* jne: not equal / not zero */

loc_0029E7B9: ;
    MEM8(0x5BE708) = 1;

loc_0029E7C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x290ED0);
    PUSH32(esp, 0x29B0D0);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x40A540);
    PUSH32(esp, 0x299A80);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE548);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E7F0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E7F0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E800
 * Original: 0x0029E800 - 0x0029E847 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E800: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E810; /* jne: not equal / not zero */

loc_0029E809: ;
    MEM8(0x5BE708) = 1;

loc_0029E810: ;
    PUSH32(esp, 0x472E88);
    PUSH32(esp, 0);
    PUSH32(esp, 0x290FE0);
    PUSH32(esp, 0x29B100);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x40A558);
    PUSH32(esp, 0x299AB0);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE54C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E843u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E843: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E850
 * Original: 0x0029E850 - 0x0029E894 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E850: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E860; /* jne: not equal / not zero */

loc_0029E859: ;
    MEM8(0x5BE708) = 1;

loc_0029E860: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x291080);
    PUSH32(esp, 0x29B130);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40A568);
    PUSH32(esp, 0x299AE0);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE550);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E890u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E890: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E8A0
 * Original: 0x0029E8A0 - 0x0029E8E4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E8A0: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E8B0; /* jne: not equal / not zero */

loc_0029E8A9: ;
    MEM8(0x5BE708) = 1;

loc_0029E8B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x291130);
    PUSH32(esp, 0x29B190);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40A57C);
    PUSH32(esp, 0x299B40);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE558);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E8E0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E8E0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E8F0
 * Original: 0x0029E8F0 - 0x0029E934 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E8F0: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E900; /* jne: not equal / not zero */

loc_0029E8F9: ;
    MEM8(0x5BE708) = 1;

loc_0029E900: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2911A0);
    PUSH32(esp, 0x29B1C0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x40A590);
    PUSH32(esp, 0x299B70);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE55C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E930u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E930: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E940
 * Original: 0x0029E940 - 0x0029E984 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E940: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E950; /* jne: not equal / not zero */

loc_0029E949: ;
    MEM8(0x5BE708) = 1;

loc_0029E950: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x296030);
    PUSH32(esp, 0x29B1F0);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x40A5A0);
    PUSH32(esp, 0x299BA0);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE560);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E980u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E980: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E990
 * Original: 0x0029E990 - 0x0029E9D7 (71 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E990: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E9A0; /* jne: not equal / not zero */

loc_0029E999: ;
    MEM8(0x5BE708) = 1;

loc_0029E9A0: ;
    PUSH32(esp, 0x472E90);
    PUSH32(esp, 0);
    PUSH32(esp, 0x291250);
    PUSH32(esp, 0x29B220);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x40A5B8);
    PUSH32(esp, 0x299BD0);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE564);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029E9D3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029E9D3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E9E0
 * Original: 0x0029E9E0 - 0x0029EA27 (71 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029E9E0: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029E9F0; /* jne: not equal / not zero */

loc_0029E9E9: ;
    MEM8(0x5BE708) = 1;

loc_0029E9F0: ;
    PUSH32(esp, 0x472E98);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2960E0);
    PUSH32(esp, 0x29B280);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x40A5CC);
    PUSH32(esp, 0x299C00);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE574);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029EA23u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029EA23: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029EA30
 * Original: 0x0029EA30 - 0x0029EA74 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029EA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029EA30: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029EA40; /* jne: not equal / not zero */

loc_0029EA39: ;
    MEM8(0x5BE708) = 1;

loc_0029EA40: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x29B2E0);
    PUSH32(esp, 0x29B2B0);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x40A5E8);
    PUSH32(esp, 0x249150);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE578);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029EA70u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029EA70: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029EA80
 * Original: 0x0029EA80 - 0x0029EAC4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029EA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029EA80: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029EA90; /* jne: not equal / not zero */

loc_0029EA89: ;
    MEM8(0x5BE708) = 1;

loc_0029EA90: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x291590);
    PUSH32(esp, 0x29B3E0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40A600);
    PUSH32(esp, 0x299C60);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE57C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029EAC0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029EAC0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029EAD0
 * Original: 0x0029EAD0 - 0x0029EB14 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029EAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029EAD0: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029EAE0; /* jne: not equal / not zero */

loc_0029EAD9: ;
    MEM8(0x5BE708) = 1;

loc_0029EAE0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x291600);
    PUSH32(esp, 0x29B410);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40A614);
    PUSH32(esp, 0x299C90);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE580);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029EB10u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029EB10: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029EB20
 * Original: 0x0029EB20 - 0x0029EB67 (71 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029EB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029EB20: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029EB30; /* jne: not equal / not zero */

loc_0029EB29: ;
    MEM8(0x5BE708) = 1;

loc_0029EB30: ;
    PUSH32(esp, 0x472EA0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x296210);
    PUSH32(esp, 0x29B440);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40A62C);
    PUSH32(esp, 0x299CC0);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE584);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029EB63u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029EB63: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029EB70
 * Original: 0x0029EB70 - 0x0029EBB7 (71 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029EB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029EB70: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029EB80; /* jne: not equal / not zero */

loc_0029EB79: ;
    MEM8(0x5BE708) = 1;

loc_0029EB80: ;
    PUSH32(esp, 0x472EA8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x291660);
    PUSH32(esp, 0x29B470);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x40A644);
    PUSH32(esp, 0x299CF0);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE588);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029EBB3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029EBB3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029EBC0
 * Original: 0x0029EBC0 - 0x0029EC04 (68 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029EBC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029EBC0: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029EBD0; /* jne: not equal / not zero */

loc_0029EBC9: ;
    MEM8(0x5BE708) = 1;

loc_0029EBD0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x291780);
    PUSH32(esp, 0x29B4C0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40A658);
    PUSH32(esp, 0x299D20);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE58C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029EC00u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029EC00: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029EC10
 * Original: 0x0029EC10 - 0x0029EC16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029EC10(void)
{

loc_0029EC10: ;
    eax = MEM32(0x5BE590);
    esp += 4; return; /* ret */

}

/**
 * sub_0029EC20
 * Original: 0x0029EC20 - 0x0029EC67 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029EC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029EC20: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029EC30; /* jne: not equal / not zero */

loc_0029EC29: ;
    MEM8(0x5BE708) = 1;

loc_0029EC30: ;
    PUSH32(esp, 0x472EBC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x291800);
    PUSH32(esp, 0x29B500);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x40A6CC);
    PUSH32(esp, 0x299D50);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE594);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029EC63u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029EC63: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029EC70
 * Original: 0x0029EC70 - 0x0029ECB4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029EC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029EC70: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029EC80; /* jne: not equal / not zero */

loc_0029EC79: ;
    MEM8(0x5BE708) = 1;

loc_0029EC80: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2918C0);
    PUSH32(esp, 0x29B530);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40A6DC);
    PUSH32(esp, 0x299DB0);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE598);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029ECB0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029ECB0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029ECC0
 * Original: 0x0029ECC0 - 0x0029ED04 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029ECC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029ECC0: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029ECD0; /* jne: not equal / not zero */

loc_0029ECC9: ;
    MEM8(0x5BE708) = 1;

loc_0029ECD0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x291900);
    PUSH32(esp, 0x29B560);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40A6F8);
    PUSH32(esp, 0x299DE0);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE59C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029ED00u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029ED00: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029ED10
 * Original: 0x0029ED10 - 0x0029ED34 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029ED10(void)
{

loc_0029ED10: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0029ED1Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0029ED1B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x40A268;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029ED40
 * Original: 0x0029ED40 - 0x0029ED84 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029ED40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029ED40: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029ED50; /* jne: not equal / not zero */

loc_0029ED49: ;
    MEM8(0x5BE708) = 1;

loc_0029ED50: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x296640);
    PUSH32(esp, 0);
    PUSH32(esp, 0x29ED10);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x40A710);
    PUSH32(esp, 0x299E70);
    PUSH32(esp, 0x1AA720);
    PUSH32(esp, 0x2460F0);
    PUSH32(esp, 0x5BE5A8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029ED80u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029ED80: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029ED90
 * Original: 0x0029ED90 - 0x0029EDD7 (71 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029ED90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029ED90: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029EDA0; /* jne: not equal / not zero */

loc_0029ED99: ;
    MEM8(0x5BE708) = 1;

loc_0029EDA0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0x29DD90);
    PUSH32(esp, 0x29B670);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x40A724);
    PUSH32(esp, 0x249140);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE5B8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029EDD3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029EDD3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029EDE0
 * Original: 0x0029EDE0 - 0x0029EE24 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029EDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029EDE0: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029EDF0; /* jne: not equal / not zero */

loc_0029EDE9: ;
    MEM8(0x5BE708) = 1;

loc_0029EDF0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x291A50);
    PUSH32(esp, 0x29B6A0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x40A73C);
    PUSH32(esp, 0x299FC0);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE5BC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029EE20u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029EE20: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029EE30
 * Original: 0x0029EE30 - 0x0029EE74 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029EE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029EE30: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029EE40; /* jne: not equal / not zero */

loc_0029EE39: ;
    MEM8(0x5BE708) = 1;

loc_0029EE40: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x291AE0);
    PUSH32(esp, 0x29B6D0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40A74C);
    PUSH32(esp, 0x299FF0);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE5C0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029EE70u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029EE70: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029EE80
 * Original: 0x0029EE80 - 0x0029EEC4 (68 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029EE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029EE80: ;
    SET_LO8(eax, MEM8(0x5BE708));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029EE90; /* jne: not equal / not zero */

loc_0029EE89: ;
    MEM8(0x5BE708) = 1;

loc_0029EE90: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x291B30);
    PUSH32(esp, 0x29B730);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40A764);
    PUSH32(esp, 0x29A050);
    PUSH32(esp, 0x290530);
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x5BE5C8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029EEC0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0029EEC0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}
